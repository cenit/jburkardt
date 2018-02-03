// File recommented by recomment.cpp
// on Nov 20 2014 at 13:50:27.
//
# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "alpert_rule.hpp"

int main ( );
void monte_carlo_regular_test ( );
void monte_carlo_log_test ( );
void monte_carlo_power_test ( );
void trapezoid_regular_test ( );
void trapezoid_log_test ( );
void trapezoid_power_test ( );
void alpert_regular_test ( );
void alpert_log_test ( );
void alpert_power_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    ALPERT_RULE_TEST tests the ALPERT_RULE library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    05 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "ALPERT_RULE_TEST\n";
  cout << "  C++ version.\n";
  cout << "  Test the ALPERT_RULE library.\n";

  monte_carlo_regular_test ( );
  monte_carlo_log_test ( );
  monte_carlo_power_test ( );

  trapezoid_regular_test ( );
  trapezoid_log_test ( );
  trapezoid_power_test ( );

  alpert_regular_test ( );
  alpert_log_test ( );
  alpert_power_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "ALPERT_RULE_TEST\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void alpert_log_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    ALPERT_LOG_TEST tests the Alpert rule on the log integrand.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    05 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int a_l;
  int a_r;
  double *f1;
  double *f2;
  double *f3;
  double h;
  int i;
  int j_l;
  int j_r;
  int n;
  int nlog;
  int num_l;
  int num_r;
  int order_l;
  int order_r;
  int rule;
  double s1;
  double s2;
  double s3;
  double v1;
  double v2;
  double *w_l;
  double *w_r;
  double *x_l;
  double *x_r;
  double *x1;
  double *x2;
  double *x3;

  cout << "\n";
  cout << "ALPERT_LOG_TEST\n";
  cout << "  Test the Alpert rule on the log integrand.\n";
  cout << "\n";
  cout << "  Rule  Order   J   A        N     N+2J               H        Estimate           Error\n";
  cout << "\n";

  v2 = integral_log ( );

  num_l = num_log ( );
//
//  For the righthand interval, use the regular rule of the same index.
//
  for ( rule = 1; rule <= num_l; rule++ )
  {
    a_l = a_log ( rule );
    j_l = j_log ( rule );
    order_l = order_log ( rule );
    x_l = new double[j_l];
    w_l = new double[j_l];
    rule_log ( rule, j_l, x_l, w_l );
    x1 = new double[j_l];

    a_r = a_regular ( rule );
    j_r = j_regular ( rule );
    order_r = order_regular ( rule );
    x_r = new double[j_r];
    w_r = new double[j_r];
    rule_regular ( rule, j_r, x_r, w_r );
    x3 = new double[j_r];

    n = 8;

    for ( nlog = 4; nlog <= 7; nlog++ )
    {
      n = n * 2;
      h = 1.0 / ( double ) ( n + a_l + a_r - 1 );

      for ( i = 0; i < j_l; i++ )
      {
        x1[i] = h * x_l[i];
      }
      f1 = integrand_log ( j_l, x1 );
      s1 = r8vec_dot_product ( j_l, w_l, f1 );
      x2 = r8vec_linspace_new ( n, a_l * h, ( a_l + n - 1 ) * h );
      f2 = integrand_log ( n, x2 );
      s2 = r8vec_sum ( n, f2 );
      for ( i = 0; i < j_r; i++ )
      {
        x3[i] = 1.0 - h * x_r[i];
      }
      f3 = integrand_log ( j_r, x3 );
      s3 = r8vec_dot_product ( j_r, w_r, f3 );

      v1 = h * ( s1 + s2 + s3 );

      cout << "  " << setw(2) << rule
           << "  " << setw(4) << order_l
           << "  " << setw(2) << j_l
           << "  " << setw(2) << a_l
           << "  " << setw(7) << n
           << "  " << setw(7) << n + j_l + j_r
           << "  " << setw(14) << h
           << "  " << setw(14) << v1
           << "  " << setw(14) << fabs ( v1 - v2 ) << "\n";

      delete [] f1;
      delete [] f2;
      delete [] f3;
      delete [] x2;
    }

    cout << "\n";

    delete [] w_l;
    delete [] w_r;
    delete [] x_l;
    delete [] x_r;
    delete [] x1;
    delete [] x3;
  }

  cout << "\n";
  cout << "                                                Exact:" 
       << setw(14) << v2 << "\n";

  return;
}
//****************************************************************************80

void alpert_power_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    ALPERT_POWER_TEST tests the Alpert rule on the power integrand.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    05 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int a_p;
  int a_r;
  double *f1;
  double *f2;
  double *f3;
  double h;
  int i;
  int j_p;
  int j_r;
  int n;
  int nlog;
  int num_p;
  int num_r;
  double order_p;
  int order_r;
  int rule;
  double s1;
  double s2;
  double s3;
  double v1;
  double v2;
  double *w_p;
  double *w_r;
  double *x_p;
  double *x_r;
  double *x1;
  double *x2;
  double *x3;

  cout << "\n";
  cout << "ALPERT_POWER_TEST\n";
  cout << "  Test the Alpert rule on the power integrand.\n";
  cout << "\n";
  cout << "  Rule  Order   J   A        N     N+2J               H        Estimate           Error\n";
  cout << "\n";

  v2 = integral_power ( );

  num_p = num_power ( );
//
//  For the righthand interval, use the regular rule of the same index.
//
  for ( rule = 1; rule <= num_p; rule++ )
  {
    a_p = a_power ( rule );
    j_p = j_power ( rule );
    order_p = order_power ( rule );
    x_p = new double[j_p];
    w_p = new double[j_p];
    rule_power ( rule, j_p, x_p, w_p );

    x1 = new double[j_p];

    a_r = a_regular ( rule );
    j_r = j_regular ( rule );
    order_r = order_regular ( rule );
    x_r = new double[j_r];
    w_r = new double[j_r];
    rule_regular ( rule, j_r, x_r, w_r );

    x3 = new double[j_r];

    n = 8;

    for ( nlog = 4; nlog <= 6; nlog++ )
    {
      n = n * 2;
      h = 1.0 / ( double ) ( n + a_p + a_r - 1 );

      for ( i = 0; i < j_p; i++ )
      {
        x1[i] = h * x_p[i];
      }
      f1 = integrand_power ( j_p, x1 );
      s1 = r8vec_dot_product ( j_p, w_p, f1 );

      x2 = r8vec_linspace_new ( n, a_p * h, ( a_p + n - 1 ) * h );
      f2 = integrand_power ( n, x2 );
      s2 = r8vec_sum ( n, f2 );

      for ( i = 0; i < j_r; i++ )
      {
        x3[i] = 1.0 - h * x_r[i];
      }
      f3 = integrand_power ( j_r, x3 );
      s3 = r8vec_dot_product ( j_r, w_r, f3 );

      v1 = h * ( s1 + s2 + s3 );

      cout << "  " << setw(2) << rule
           << "  " << setw(4) << order_p
           << "  " << setw(2) << j_p
           << "  " << setw(2) << a_p
           << "  " << setw(7) << n
           << "  " << setw(7) << n + j_p + j_r
           << "  " << setw(14) << h
           << "  " << setw(14) << v1
           << "  " << setw(14) << fabs ( v1 - v2 ) << "\n";

      delete [] f1;
      delete [] f2;
      delete [] f3;
      delete [] x2;
    }
    cout << "\n";
    delete [] w_p;
    delete [] w_r;
    delete [] x_p;
    delete [] x_r;
    delete [] x1;
    delete [] x3;
  }

  cout << "\n";
  cout << "                                                Exact:" 
       << setw(14) << v2 << "\n";

  return;
}
//****************************************************************************80

void alpert_regular_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    ALPERT_REGULAR_TEST tests the Alpert rule on the regular integrand.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    05 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int a;
  double *f1;
  double *f2;
  double *f3;
  double h;
  int i;
  int j;
  int n;
  int nlog;
  int num;
  int order;
  int rule;
  double s1;
  double s2;
  double s3;
  double v1;
  double v2;
  double *w;
  double *x;
  double *x1;
  double *x2;
  double *x3;

  cout << "\n";
  cout << "ALPERT_REGULAR_TEST\n";
  cout << "  Test the Alpert rule on the regular integrand.\n";
  cout << "\n";
  cout << "  Rule  Order   J   A        N     N+2J               H        Estimate           Error\n";
  cout << "\n";

  v2 = integral_regular ( );

  num = num_regular ( );

  for ( rule = 1; rule <= num; rule++ )
  {
    a = a_regular ( rule );
    j = j_regular ( rule );
    order = order_regular ( rule );
    x = new double[j];
    w = new double[j];
    rule_regular ( rule, j, x, w );

    x1 = new double[j];
    x3 = new double[j];

    n = 8;

    for ( nlog = 4; nlog <= 6; nlog++ )
    {
      n = n * 2;
      h = 1.0 / ( double ) ( n + 2 * a - 1 );

      for ( i = 0; i < j; i++ )
      {
        x1[i] = h * x[i];
      }
      f1 = integrand_regular ( j, x1 ); 
      s1 = r8vec_dot_product ( j, w, f1 );

      x2 = r8vec_linspace_new ( n, a * h, ( a + n - 1 ) * h );
      f2 = integrand_regular ( n, x2 );
      s2 = r8vec_sum ( n, f2 );

      for ( i = 0; i < j; i++ )
      {
        x3[i] = 1.0 - h * x[i];
      }
      f3 = integrand_regular ( j, x3 );
      s3 = r8vec_dot_product ( j, w, f3 );

      v1 = h * ( s1 + s2 + s3 );

      cout << "  " << setw(2) << rule
           << "  " << setw(4) << order
           << "  " << setw(2) << j
           << "  " << setw(2) << a
           << "  " << setw(7) << n
           << "  " << setw(7) << n + 2 * j
           << "  " << setw(14) << h
           << "  " << setw(14) << v1
           << "  " << setw(14) << fabs ( v1 - v2 ) << "\n";

      delete [] f1;
      delete [] f2;
      delete [] f3;
      delete [] x2;
    }
    cout << "\n";
    delete [] w;
    delete [] x;
    delete [] x1;
    delete [] x3;
  }

  cout << "\n";
  cout << "                                                Exact:" 
       << setw(14) << v2 << "\n";

  return;
}
//****************************************************************************80

void monte_carlo_log_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    MONTE_CARLO_LOG_TEST tests the Monte Carlo rule on the log singular integrand.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    05 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *f;
  double h;
  int n;
  int nlog;
  int seed;
  double v1;
  double v2;
  double *x;

  cout << "\n";
  cout << "MONTE_CARLO_LOG_TEST\n";
  cout << "  Test the Monte Carlo rule on the log singular integrand.\n";
  cout << "\n";
  cout << "          N        Estimate           Error\n";
  cout << "\n";

  v2 = integral_log ( );

  seed = 123456789;

  n = 17;

  for ( nlog = 5; nlog <= 20; nlog++ )
  {
    n = ( n - 1 ) * 2 + 1;
    h = 1.0 / ( double ) ( n );
    x = r8vec_uniform_01_new ( n, seed );
    f = integrand_log ( n, x );
    v1 = h * r8vec_sum ( n, f );
    cout << "  " << setw(9) << n
         << "  " << setw(14) << v1
         << "  " << setw(14) << fabs ( v1 - v2 ) << "\n";

    delete [] f;
    delete [] x;
  }

  cout << "\n";
  cout << "      Exact: " << setw(14) << v2 << "\n";

  return;
}
//****************************************************************************80

void monte_carlo_power_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    MONTE_CARLO_POWER_TEST tests the Monte Carlo rule on the power singular integrand.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    05 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *f;
  double h;
  int n;
  int nlog;
  int seed;
  double v1;
  double v2;
  double *x;

  cout << "\n";
  cout << "MONTE_CARLO_POWER_TEST\n";
  cout << "  Test the Monte Carlo rule on the power singular integrand.\n";
  cout << "\n";
  cout << "          N        Estimate           Error\n";
  cout << "\n";

  v2 = integral_power ( );

  seed = 123456789;

  n = 17;

  for ( nlog = 5; nlog <= 20; nlog++ )
  {
    n = ( n - 1 ) * 2 + 1;
    h = 1.0 / ( double ) ( n );
    x = r8vec_uniform_01_new ( n, seed) ;
    f = integrand_power ( n, x );
    v1 = h * r8vec_sum ( n, f );
    cout << "  " << setw(9) << n
         << "  " << setw(14) << v1
         << "  " << setw(14) << fabs ( v1 - v2 ) << "\n";

    delete [] f;
    delete [] x;
  }

  cout << "\n";
  cout << "      Exact: " << setw(14) << v2 << "\n";

  return;
}
//****************************************************************************80

void monte_carlo_regular_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    MONTE_CARLO_REGULAR_TEST tests the Monte Carlo rule on the regular integrand.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    05 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *f;
  double h;
  int n;
  int nlog;
  int seed;
  double v1;
  double v2;
  double *x;

  cout << "\n";
  cout << "MONTE_CARLO_REGULAR_TEST\n";
  cout << "  Test the Monte Carlo rule on the regular integrand.\n";
  cout << "\n";
  cout << "          N        Estimate           Error\n";
  cout << "\n";

  v2 = integral_regular ( );

  seed = 123456789;

  n = 17;

  for ( nlog = 5; nlog <= 20; nlog++ )
  {
    n = ( n - 1 ) * 2 + 1;
    h = 1.0 / ( double ) ( n );
    x = r8vec_uniform_01_new ( n, seed );
    f = integrand_regular ( n, x );
    v1 = h * r8vec_sum ( n, f );
    cout << "  " << setw(9) << n
         << "  " << setw(14) << v1
         << "  " << setw(14) << fabs ( v1 - v2 ) << "\n";


    delete [] f;
    delete [] x;
  }

  cout << "\n";
  cout << "      Exact: " << setw(14) << v2 << "\n";

  return;
}
//****************************************************************************80

void trapezoid_log_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    TRAPEZOID_LOG_TEST tests the trapezoid rule on the log-singular integrand.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    05 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *f;
  double h;
  int n;
  int nlog;
  double v1;
  double v2;
  double *x;

  cout << "\n";
  cout << "TRAPEZOID_LOG_TEST\n";
  cout << "  Test the trapezoidal rule on the log-singular integrand.\n";
  cout << "\n";
  cout << "        N        Estimate           Error\n";
  cout << "\n";

  v2 = integral_log ( );

  n = 17;

  for ( nlog = 5; nlog <= 12; nlog++ )
  {
    n = ( n - 1 ) * 2 + 1;
    h = 1.0 / ( double ) ( n - 1 );
    x = r8vec_linspace_new ( n, 0.0, 1.0 );
    x[0] = 0.5 * ( x[0] + x[1] );
    f = integrand_log ( n, x );
    v1 = h * ( r8vec_sum ( n, f ) - 0.5 * ( f[0] + f[n-1] ) );
    cout << "  " << setw(7) << n
         << "  " << setw(14) << v1
         << "  " << setw(14) << fabs ( v1 - v2 ) << "\n";


    delete [] f;
    delete [] x;
  }

  cout << "\n";
  cout << "    Exact: " << setw(14) << v2 << "\n";

  return;
}
//****************************************************************************80

void trapezoid_power_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    TRAPEZOID_POWER_TEST tests the trapezoid rule on the power-singular integrand.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    05 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *f;
  double h;
  int n;
  int nlog;
  double v1;
  double v2;
  double *x;

  cout << "\n";
  cout << "TRAPEZOID_POWER_TEST\n";
  cout << "  Test the trapezoidal rule on the power-singular integrand.\n";
  cout << "\n";
  cout << "        N        Estimate           Error\n";
  cout << "\n";

  v2 = integral_power ( );

  n = 17;

  for ( nlog = 5; nlog <= 12; nlog++ )
  {
    n = ( n - 1 ) * 2 + 1;
    h = 1.0 / ( double ) ( n - 1 );
    x = r8vec_linspace_new ( n, 0.0, 1.0 );
    x[0] = 0.5 * ( x[0] + x[1] );
    f = integrand_power ( n, x );
    v1 = h * ( r8vec_sum ( n, f ) - 0.5 * ( f[0] + f[n-1] ) );
    cout << "  " << setw(7) << n
         << "  " << setw(14) << v1
         << "  " << setw(14) << fabs ( v1 - v2 ) << "\n";


    delete [] f;
    delete [] x;
  }

  cout << "\n";
  cout << "    Exact: " << setw(14) << v2 << "\n";

  return;
}
//****************************************************************************80

void trapezoid_regular_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    TRAPEZOID_REGULAR_TEST tests the trapezoid rule on the regular integrand.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    05 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *f;
  double h;
  int n;
  int nlog;
  double v1;
  double v2;
  double *x;

  cout << "\n";
  cout << "TRAPEZOID_REGULAR_TEST\n";
  cout << "  Test the trapezoidal rule on the regular integrand.\n";
  cout << "\n";
  cout << "        N        Estimate           Error\n";
  cout << "\n";

  v2 = integral_regular ( );

  n = 17;

  for ( nlog = 5; nlog <= 12; nlog++ )
  {
    n = ( n - 1 ) * 2 + 1;
    h = 1.0 / ( double ) ( n - 1 );
    x = r8vec_linspace_new ( n, 0.0, 1.0 );
    f = integrand_regular ( n, x );
    v1 = h * ( r8vec_sum ( n, f ) - 0.5 * ( f[0] + f[n-1] ) );
    cout << "  " << setw(7) << n
         << "  " << setw(14) << v1
         << "  " << setw(14) << fabs ( v1 - v2 ) << "\n";

    delete [] f;
    delete [] x;
  }

  cout << "\n";
  cout << "    Exact: " << setw(14) << v2 << "\n";

  return;
}

