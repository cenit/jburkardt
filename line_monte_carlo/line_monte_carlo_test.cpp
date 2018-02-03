# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "line_monte_carlo.hpp"

int main ( );
void line01_sample_random_test ( );
void line01_sample_ergodic_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for LINE_MONTE_CARLO_TEST.
//
//  Discussion:
//
//    LINE_MONTE_CARLO_TEST tests the LINE_MONTE_CARLO library.
//    
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 June 2017
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "LINE_MONTE_CARLO_TEST\n";
  cout << "  C++ version\n";
  cout << "  Test the LINE_MONTE_CARLO library.\n";

  line01_sample_random_test ( );
  line01_sample_ergodic_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "LINE_MONTE_CARLO_TEST\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void line01_sample_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    LINE01_SAMPLE_RANDOM_TEST compares exact and estimated monomial integrals.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 June 2017
//
//  Author:
//
//    John Burkardt
//
{
  int e;
  double error;
  double exact;
  int m = 1;
  int n = 4192;
  double result;
  int seed;
  int test;
  int test_num = 11;
  double *value;
  double *x;

  cout << "\n";
  cout << "LINE01_SAMPLE_RANDOM_TEST\n";
  cout << "  LINE01_SAMPLE_RANDOM randomly samples the unit line segment.\n";
  cout << "  Use it to estimate integrals.\n";
//
//  Get sample points.
//
  seed = 123456789;
  x = line01_sample_random ( n, seed );

  cout << "\n";
  cout << "  Number of sample points used is " << n << "\n";
  cout << "\n";
  cout << "   E     MC-Estimate      Exact           Error\n";
  cout << "\n";

  for ( test = 1; test <= test_num; test++ )
  {
    e = test - 1;

    value = monomial_value_1d ( n, e, x );

    result = line01_length ( ) * r8vec_sum ( n, value ) / ( double ) ( n );
    exact = line01_monomial_integral ( e );
    error = fabs ( result - exact );

    cout << "  " << setw(2) << e
         << "  " << fixed << setw(14) << result
         << "  " << fixed << setw(14) << exact
         << "  " << scientific << setw(10) << error << "\n";

    delete [] value;
  }

  delete [] x;

  return;
}
//****************************************************************************80

void line01_sample_ergodic_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    LINE01_SAMPLE_ERGODIC_TEST compares exact and estimated monomial integrals.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 June 2017
//
//  Author:
//
//    John Burkardt
//
{
  int e;
  double error;
  double exact;
  int m = 1;
  int n = 4192;
  double result;
  double shift;
  int test;
  int test_num = 11;
  double *value;
  double *x;

  cout << "\n";
  cout << "LINE01_SAMPLE_ERGODIC_TEST\n";
  cout << "  LINE01_SAMPLE_ERGODIC ergodically samples the unit line segment.\n";
  cout << "  Use it to estimate integrals.\n";
//
//  Get sample points.
//
  shift = 0.0;
  x = line01_sample_ergodic ( n, shift );

  cout << "\n";
  cout << "  Number of sample points used is " << n << "\n";
  cout << "\n";
  cout << "   E     MC-Estimate      Exact           Error\n";
  cout << "\n";

  for ( test = 1; test <= test_num; test++ )
  {
    e = test - 1;

    value = monomial_value_1d ( n, e, x );

    result = line01_length ( ) * r8vec_sum ( n, value ) / ( double ) ( n );
    exact = line01_monomial_integral ( e );
    error = fabs ( result - exact );

    cout << "  " << setw(2) << e
         << "  " << fixed << setw(14) << result
         << "  " << fixed << setw(14) << exact
         << "  " << scientific << setw(6) << error << "\n";

    delete [] value;
  }

  delete [] x;

  return;
}
