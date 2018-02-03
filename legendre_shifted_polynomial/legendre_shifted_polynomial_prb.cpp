# include <cmath>
# include <cstdlib>
# include <ctime>
# include <iomanip>
# include <iostream>

using namespace std;

# include "legendre_shifted_polynomial.hpp"

int main ( );
void p01_polynomial_value_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for LEGENDRE_SHIFTED_POLYNOMIAL_PRB.
//
//  Discussion:
//
//    LEGENDRE_SHIFTED_POLYNOMIAL_PRB tests the LEGENDRE_SHIFTED_POLYNOMIAL library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    16 March 2016
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "LEGENDRE_SHIFTED_POLYNOMIAL_PRB:\n";
  cout << "  C++ version.\n";
  cout << "  Test the LEGENDRE_SHIFTED_POLYNOMIAL library.\n";

  p01_polynomial_value_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "LEGENDRE_SHIFTED_POLYNOMIAL_PRB:\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void p01_polynomial_value_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    P01_POLYNOMIAL_VALUE_TEST tests P01_POLYNOMIAL_VALUE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    16 March 2016
//
//  Author:
//
//    John Burkardt
//
{
  int n_data;
  double e;
  double fx1;
  double fx2;
  double *fx2_vec;
  int m = 1;
  int n;
  double *v;
  double x;
  double x_vec[1];

  cout << "\n";
  cout << "P01_POLYNOMIAL_VALUE_TEST:\n";
  cout << "  P01_POLYNOMIAL_VALUE evaluates the shifted Legendre polynomial P01(n,x).\n";
  cout << "\n";
  cout << "                        Tabulated                 Computed\n";
  cout << "     N        X          P01(N,X)                 P01(N,X)                     Error\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    p01_polynomial_values ( n_data, n, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    x_vec[0] = x;
    fx2_vec = p01_polynomial_value ( 1, n, x_vec );
    fx2 = fx2_vec[n];
    delete [] fx2_vec;

    e = fx1 - fx2;

    cout << "  " << setw(4) << n
         << "  " << setw(12) << x
         << "  " << setw(24) << fx1
         << "  " << setw(24) << fx2
         << "  " << setw(8) << e << "\n";
  }

  return;
}

