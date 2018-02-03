# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "circle_monte_carlo.hpp"

int main ( );
void circle01_sample_random_test ( );
void circle01_sample_ergodic_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for CIRCLE_MONTE_CARLO_TEST.
//
//  Discussion:
//
//    CIRCLE_MONTE_CARLO_TEST tests the CIRCLE_MONTE_CARLO library.
//    
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    06 June 2017
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "CIRCLE_MONTE_CARLO_TEST\n";
  cout << "  C++ version\n";
  cout << "  Test the CIRCLE_MONTE_CARLO library.\n";

  circle01_sample_random_test ( );
  circle01_sample_ergodic_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "CIRCLE_MONTE_CARLO_TEST\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void circle01_sample_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    CIRCLE01_SAMPLE_RANDOM_TEST uses CIRCLE01_SAMPLE_RANDOM with an increasing number of points.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 January 2014
//
//  Author:
//
//    John Burkardt
//
{
  int e[2];
  int e_test[2*7] = {
    0, 0, 
    2, 0, 
    0, 2, 
    4, 0, 
    2, 2, 
    0, 4,
    6, 0 };
  double error;
  double exact;
  int i;
  int j;
  int n;
  double result;
  int seed;
  double *value;
  double *x;

  cout << "\n";
  cout << "CIRCLE0_SAMPLE_RANDOM_TEST\n";
  cout << "  CIRCLE01_SAMPLE_RANDOM randomly samples the unit circle.\n";
  cout << "  Use it to estimate integrals.\n";

  seed = 123456789;

  cout << "\n";
  cout << "         N        1              X^2             Y^2";
  cout << "             X^4           X^2Y^2          Y^4          X^6\n";
  cout << "\n";

  n = 1;

  while ( n <= 65536 )
  {
    x = circle01_sample_random ( n, seed );
    cout << "  " << setw(8) << n;
    for ( j = 0; j < 7; j++ )
    {
      for ( i = 0; i < 2; i++ )
      {
        e[i] = e_test[i+j*2];
      }

      value = monomial_value ( 2, n, e, x );

      result = circle01_length ( ) * r8vec_sum ( n, value ) / ( double ) ( n );
      cout << "  " << setw(14) << result;

      delete [] value;
    }
    cout << "\n";

    delete [] x;

    n = 2 * n;
  }

  cout << "\n";
  cout << "     Exact";
  for ( j = 0; j < 7; j++ )
  {
    for ( i = 0; i < 2; i++ )
    {
      e[i] = e_test[i+j*2];
    }
    exact = circle01_monomial_integral ( e );
    cout << "  " << setw(14) << exact;
  }
  cout << "\n";

  return;
}
//****************************************************************************80

void circle01_sample_ergodic_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    CIRCLE01_SAMPLE_ERGODIC_TEST uses CIRCLE01_SAMPLE_ERGODIC with an increasing number of points.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    06 June 2017
//
//  Author:
//
//    John Burkardt
//
{
  double angle;
  int e[2];
  int e_test[2*7] = {
    0, 0, 
    2, 0, 
    0, 2, 
    4, 0, 
    2, 2, 
    0, 4,
    6, 0 };
  double error;
  double exact;
  int i;
  int j;
  int n;
  double result;
  double *value;
  double *x;

  cout << "\n";
  cout << "CIRCLE0_SAMPLE_ERGODIC_TEST\n";
  cout << "  CIRCLE01_SAMPLE_ERGODIC ergodically samples the unit circle.\n";
  cout << "  Use it to estimate integrals.\n";

  angle = 0.0;

  cout << "\n";
  cout << "         N        1              X^2             Y^2";
  cout << "             X^4           X^2Y^2          Y^4          X^6\n";
  cout << "\n";

  n = 1;

  while ( n <= 65536 )
  {
    x = circle01_sample_ergodic ( n, angle );
    cout << "  " << setw(8) << n;
    for ( j = 0; j < 7; j++ )
    {
      for ( i = 0; i < 2; i++ )
      {
        e[i] = e_test[i+j*2];
      }

      value = monomial_value ( 2, n, e, x );

      result = circle01_length ( ) * r8vec_sum ( n, value ) / ( double ) ( n );
      cout << "  " << setw(14) << result;

      delete [] value;
    }
    cout << "\n";

    delete [] x;

    n = 2 * n;
  }

  cout << "\n";
  cout << "     Exact";
  for ( j = 0; j < 7; j++ )
  {
    for ( i = 0; i < 2; i++ )
    {
      e[i] = e_test[i+j*2];
    }
    exact = circle01_monomial_integral ( e );
    cout << "  " << setw(14) << exact;
  }
  cout << "\n";

  return;
}
