# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "gegenbauer_polynomial.hpp"

int main ( );
void gegenbauer_alpha_check_test ( );
void gegenbauer_ek_compute_test ( );
void gegenbauer_integral_test ( );
void gegenbauer_polynomial_value_test ( );
void gegenbauer_ss_compute_test ( );
void imtqlx_test ( );
void r8_hyper_2f1_test ( );
void r8_uniform_ab_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    GEGENBAUER_POLYNOMIAL_TEST tests the GEGENBAUER_POLYNOMIAL library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    30 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "GEGENBAUER_POLYNOMIAL_TEST:\n";
  cout << "  MATLAB version.\n";
  cout << "  Test the GEGENBAUER_POLYNOMIAL library.\n";

  gegenbauer_alpha_check_test ( );
  gegenbauer_ek_compute_test ( );
  gegenbauer_integral_test ( );
  gegenbauer_polynomial_value_test ( );
  gegenbauer_ss_compute_test ( );

  imtqlx_test ( );

  r8_hyper_2f1_test ( );
  r8_uniform_ab_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "GEGENBAUER_POLYNOMIAL_TEST:\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void gegenbauer_alpha_check_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    GEGENBAUER_ALPHA_CHECK_TEST compares GEGENBAUER_ALPHA_CHECK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    30 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  double alpha;
  bool check;
  int n;
  int seed;

  cout << "\n";
  cout << "GEGENBAUER_ALPHA_CHECK_TEST\n";
  cout << "  GEGENBAUER_ALPHA_CHECK checks that ALPHA is legal;\n";
  cout << "\n";
  cout << "       ALPHA   Check?\n";
  cout << "\n";

  seed = 123456789;

  for ( n = 1; n <= 10; n++ )
  {
    alpha = r8_uniform_ab ( -5.0, +5.0, seed );
    check = gegenbauer_alpha_check ( alpha );
    cout << "  " << setw(10) << alpha
         << "       " << setw(1) << check << "\n";
  }

  return;
}
//****************************************************************************80

void gegenbauer_ek_compute_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    GEGENBAUER_EK_COMPUTE_TEST tests GEGENBAUER_EK_COMPUTE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    20 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  double alpha;
  int i;
  int n;
  int prec;
  double *w;
  double *x;

  prec = cout.precision ( );
  cout.precision ( 16 );

  alpha = 0.5;

  cout << "\n";
  cout << "GEGENBAUER_EK_COMPUTE_TEST\n";
  cout << "  GEGENBAUER_EK_COMPUTE computes a Gauss-Gegenbauer rule;\n";
  cout << "\n";
  cout << "  with ALPHA = " << alpha << "\n";
  cout << "  and integration interval [-1,+1]\n";
  cout << "\n";
  cout << "                  W               X\n";

  for ( n = 1; n <= 10; n++ )
  {
    cout << "\n";

    w = new double[n];
    x = new double[n];

    gegenbauer_ek_compute ( n, alpha, x, w );

    for ( i = 0; i < n; i++ )
    {
      cout << "          "
           << "  " << setw(14) << w[i]
           << "  " << setw(14) << x[i] << "\n";
    }
    delete [] w;
    delete [] x;
  }

  cout.precision ( prec );

  return;
}
//****************************************************************************80

void gegenbauer_integral_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    GEGENBAUER_INTEGRAL_TEST tests GEGENBAUER_INTEGRAL.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    14 June 2015
//
//  Author:
//
//    John Burkardt
//
{
  double alpha;
  int n;
  int prec;
  double value;

  prec = cout.precision ( );
  cout.precision ( 16 );

  alpha = 0.25;

  cout << "\n";
  cout << "GEGENBAUER_INTEGRAL_TEST\n";
  cout << "  GEGENBAUER_INTEGRAL evaluates\n";
  cout << "  Integral ( -1 < x < +1 ) x^n * (1-x*x)^alpha dx\n";
  cout << "\n";
  cout << "         N         Value\n";
  cout << "\n";

  for ( n = 0; n <= 10; n++ )
  {
    value = gegenbauer_integral ( n, alpha );
    cout << "  " << setw(8)  << n
         << "  " << setw(24) << value << "\n";
  }

  cout.precision ( prec );
 
  return;
}
//****************************************************************************80

void gegenbauer_polynomial_value_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    GEGENBAUER_POLYNOMIAL_VALUE_TEST tests GEGENBAUER_POLYNOMIAL_VALUE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    30 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  double alpha;
  double *c;
  double fx;
  int m;
  int n;
  int n_data;
  double x[1];
  double xscalar;

  cout << "\n";
  cout << "GEGENBAUER_POLYNOMIAL_VALUE_TEST:\n";
  cout << "  GEGENBAUER_POLYNOMIAL_VALUE evaluates the Gegenbauer polynomial.\n";
  cout << "\n";
  cout << "       M     ALPHA         X           GPV    GEGENBAUER\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    gegenbauer_polynomial_values ( n_data, m, alpha, xscalar, fx );

    if ( n_data == 0 )
    {
      break;
    }
//
//  Since GEGENBAUER_POLYNOMIAL_VALUE expects a vector input X, we have to
//  do a little "rewrapping" of the input.
//
    n = 1;
    x[0] = xscalar;
    c = gegenbauer_polynomial_value ( m, n, alpha, x );
    cout << "  " << setw(6) << m
         << "  " << setw(8) << alpha
         << "  " << setw(8) << x[0]
         << "  " << setw(12) << fx
         << "  " << setw(12) << c[m+0*(m+1)] << "\n";
    delete [] c;
  }

  return;
}
//****************************************************************************80

void gegenbauer_ss_compute_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    GEGENBAUER_SS_COMPUTE_TEST tests GEGENBAUER_SS_COMPUTE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    10 June 2015
//
//  Author:
//
//    John Burkardt
//
{
  double alpha;
  int i;
  int n;
  int prec;
  double *w;
  double *x;

  prec = cout.precision ( );
  cout.precision ( 16 );

  alpha = 0.5;

  cout << "\n";
  cout << "GEGENBAUER_SS_COMPUTE_TEST\n";
  cout << "  GEGENBAUER_SS_COMPUTE computes a Gauss-Gegenbauer rule;\n";
  cout << "\n";
  cout << "  with ALPHA = " << alpha << "\n";
  cout << "\n";
  cout << "                  W               X\n";

  for ( n = 1; n <= 10; n++ )
  {
    cout << "\n";

    w = new double[n];
    x = new double[n];

    gegenbauer_ss_compute ( n, alpha, x, w );

    for ( i = 0; i < n; i++ )
    {
      cout << "          "
           << "  " << setw(14) << w[i]
           << "  " << setw(14) << x[i] << "\n";
    }

    delete [] w;
    delete [] x;
  }

  cout.precision ( prec );

  return;
}
//****************************************************************************80

void imtqlx_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    IMTQLX_TEST tests IMTQLX.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 June 2015
//
//  Author:
//
//    John Burkardt.
//
{
  double angle;
  double d[5];
  double e[5];
  int i;
  double lam[5];
  double lam2[5];
  int n = 5;
  double qtz[5];
  double r8_pi = 3.141592653589793;
  double z[5];

  cout << "\n";
  cout << "IMTQLX_TEST\n";
  cout << "  IMTQLX takes a symmetric tridiagonal matrix A\n";
  cout << "  and computes its eigenvalues LAM.\n";
  cout << "  It also accepts a vector Z and computes Q'*Z,\n";
  cout << "  where Q is the matrix that diagonalizes A.\n";

  for ( i = 0; i < n; i++ )
  {
    d[i] = 2.0;
  }
  for ( i = 0; i < n - 1; i++ )
  {
    e[i] = -1.0;
  }
  e[n-1] = 0.0;
  for ( i = 0; i < n; i++ )
  {
    z[i] = 1.0;
  }
//
//  On input, LAM is D, and QTZ is Z.
//
  for ( i = 0; i < n; i++ )
  {
    lam[i] = d[i];
  }
  for ( i = 0; i < n; i++ )
  {
    qtz[i] = z[i];
  }

  imtqlx ( n, lam, e, qtz );

  r8vec_print ( n, lam, "  Computed eigenvalues:" );

  for ( i = 0; i < n; i++ )
  {
    angle = ( double ) ( i + 1 ) * r8_pi / ( double ) ( 2 * ( n + 1 ) );
    lam2[i] = 4.0 * pow ( sin ( angle ), 2 );
  }

  r8vec_print ( n, lam2, "  Exact eigenvalues:" );

  r8vec_print ( n, z, "  Vector Z:" );
  r8vec_print ( n, qtz, "  Vector Q'*Z:" );

  return;
}
//****************************************************************************80

void r8_hyper_2f1_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_HYPER_2F1_TEST tests R8_HYPER_2F1.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 February 2008
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double c;
  double fx;
  double fx2;
  int n_data;
  double x;

  cout << "\n";
  cout << " R8_HYPER_2F1_TEST:\n";
  cout << "   R8_HYPER_2F1 evaluates the hypergeometric function 2F1.\n";
  cout << "\n";
  cout << "      A       B       C       X      ";
  cout << " 2F1                       2F1                     DIFF\n";
  cout << "                                     ";
  cout << "(tabulated)               (computed)\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    hyper_2f1_values ( n_data, a, b, c, x, fx );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = r8_hyper_2f1 ( a, b, c, x );

    cout << "  " << setw(6)  << setprecision(2)  << a
         << "  " << setw(6)  << setprecision(2)  << b  
         << "  " << setw(6)  << setprecision(2)  << c  
         << "  " << setw(6)  << setprecision(2)  << x  
         << "  " << setw(24) << setprecision(16) << fx
         << "  " << setw(24) << setprecision(16) << fx2
         << "  " << setw(10) << setprecision(4)  << fabs ( fx - fx2 ) << "\n";
  }
  return;
}
//****************************************************************************80

void r8_uniform_ab_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_UNIFORM_AB_TEST tests R8_UNIFORM_AB.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 April 2007
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double c;
  int i;
  int seed;

  b = 10.0;
  c = 25.0;
  seed = 17;

  cout << "\n";
  cout << "R8_UNIFORM_AB_TEST\n";
  cout << "  R8_UNIFORM_AB produces a random real in a given range.\n";
  cout << "\n";
  cout << "  Using range " << b << " <= A <= " << c << ".\n";
  cout << "\n";

  cout << "\n";
  cout << "      I       A\n";
  cout << "\n";
  for ( i = 0; i < 10; i++ )
  {
    a = r8_uniform_ab ( b, c, seed );
    cout << setw ( 6 )  << i << " "
         << setw ( 10 ) << a << "\n";
  }

  return;
}
