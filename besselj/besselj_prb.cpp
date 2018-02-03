# include <cmath>
# include <iomanip>
# include <iostream>

using namespace std;

# include "besselj.hpp"

int main ( );

void rjbesl_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for BESSELJ_PRB.
//
//  Discussion:
//
//    BESSELJ_PRB tests the BESSELJ library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    15 January 2016
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "BESSELJ_PRB_PRB:\n";
  cout << "  C++ version,\n";
  cout << "  Test the BESSELJ_PRB library.\n";

  rjbesl_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "BESSELJ_PRB_PRB:\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void rjbesl_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    RJBESL_TEST tests RJBESL.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    15 January 2016
//
//  Author:
//
//    John Burkardt
//
{
  double alpha;
  double *b;
  double fx;
  int n;
  int n_data;
  int nb;
  int ncalc;
  double order;
  double x;

  cout << "\n";
  cout << "RJBESL_TEST:\n";
  cout << "  RJBESL computes the Bessel Jn function for NONINTEGER order.\n";
  cout << "\n";
  cout << "         ORDER             X                       FX                         FX\n";
  cout << "                                                 exact                  computed\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    bessel_jx_values ( n_data, order, x, fx );

    if ( n_data == 0 )
    {
      break;
    }

    n = ( int ) ( order );
    alpha = order - ( double ) ( n );
    nb = n + 1;
    b = new double[nb];
    rjbesl ( x, alpha, nb, b, ncalc );
    cout << "  " << setw(12) << order
         << "  " << setw(12) << x
         << "  " << setw(24) << setprecision ( 16 ) << fx
         << "  " << setw(24) << setprecision ( 16 ) << b[n] << "\n";
    delete [] b;
  }
  return;
}
