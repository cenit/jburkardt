# include <cmath>
# include <cstdlib>
# include <cstring>
# include <ctime>
# include <iomanip>
# include <iostream>

using namespace std;

# include "roots_rc.hpp"

int main ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for ROOTS_RC_PRB.
//
//  Discussion:
//
//    ROOTS_RC_PRB tests the ROOTS_RC library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 December 2016
//
//  Author:
//
//    John Burkardt
//
{
  double ferr;
  double *fx;
  int i;
  int it;
  int it_max = 30;
  int j;
  int n = 4;
  double *q;
  double *x;
  double *xnew;

  timestamp ( );
  cout << "\n";
  cout << "ROOTS_RC_PRB:\n";
  cout << "  C++ version\n";
  cout << "  ROOTS_RC seeks a solution of\n";
  cout << "  the N-dimensional nonlinear system F(X) = 0.\n";

  fx = new double[n];
  q = new double[(2*n+2)*(n+2)];
  x = new double[n];
  xnew = new double[n];

  cout << "\n";
  cout << "       FERR          X\n";
  cout << "\n";
//
//  Initialization.
//
  for ( j = 0; j < n + 2; j++ )
  {
    for ( i = 0; i < 2 * n + 2; i++ )
    {
      q[i+j*(2*n+2)] = 0.0;
    }
  }

  xnew[0] = 1.2;
  for ( i = 1; i < n; i++ )
  {
    xnew[i] = 1.0;
  }

  it = 0;

  for ( ; ; )
  {
    for ( i = 0; i < n; i++ )
    {
      x[i] = xnew[i];
    }

    fx[0] = 1.0 - x[0];
    for ( i = 1; i < n; i++ )
    {
      fx[i] = 10.0 * ( x[i] - x[i-1] * x[i-1] );
    }

    if ( it == 0 )
    {
      cout << "                ";
    }
    else
    {
      cout << "  " << setw(14) << ferr;
    }
    for ( i = 0; i < n; i++ )
    {
      cout << "  " << setw(14) << x[i];
    }
    cout << "\n";

    roots_rc ( n, x, fx, ferr, xnew, q );

    if ( ferr < 1.0E-07 )
    {
      cout << "\n";
      cout << "  Sum of |f(x)| less than tolerance.\n";
      break;
    }

    if ( it_max < it )
    {
      cout << "\n";
      cout << "  Too many iterations!\n";
      break;
    }
    it = it + 1;
  }

  delete [] fx;
  delete [] q;
  delete [] x;
  delete [] xnew;
//
//  Terminate.
//
  cout << "\n";
  cout << "ROOTS_RC_PRB:\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}

