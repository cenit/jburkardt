# include <cmath>
# include <cstdlib>
# include <cstring>
# include <ctime>
# include <iomanip>
# include <iostream>

using namespace std;

# include "root_rc.hpp"

int main ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for ROOT_RC_PRB.
//
//  Discussion:
//
//    ROOT_RC_PRB tests the ROOT_RC library.
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
  double fx;
  int i;
  int it;
  int it_max;
  double q[9];
  double x;
  double xerr;

  timestamp ( );
  cout << "\n";
  cout << "ROOT_RC_PRB:\n";
  cout << "  C++ version\n";
  cout << "  ROOT_RC searches for an\n";
  cout << "  approximate solution of F(X) = 0, using reverse communication.\n";
  cout << "\n";
  cout << "       X              XERR            FX              FERR\n";
  cout << "\n";
//
//  Initialization.
//
  it = 0;
  it_max = 30;
  for ( i = 0; i < 9; i++ )
  {
    q[i] = 0.0;
  }
  x = - 2.1;
//
//  Each call takes one more step of improvement.
//
  for ( ; ; )
  {
    fx = cos ( x ) - x;

    if ( it == 0 )
    {
      cout << "  " << setw(14) << x
           << "  " << "              "
           << "  " << setw(14) << fx << "\n";
    }
    else
    {
      cout << "  " << setw(14) << x
           << "  " << setw(14) << xerr
           << "  " << setw(14) << fx
           << "  " << setw(14) << ferr << "\n";
    }

    x = root_rc ( x, fx, ferr, xerr, q );

    if ( ferr < 1.0E-08 )
    {
      cout << "\n";
      cout << "  Uncertainty in F(X) less than tolerance\n";
      break;
    }

    if ( xerr < 1.0E-08 )
    {
      cout << "\n";
      cout << "  Width of X interal less than tolerance.\n";
      break;
    }

    if ( it_max < it )
    {
      cout << "\n";
      cout << "  Too many iterations!'\n";
      break;
    }
    it = it + 1;     
  }
//
//  Terminate.
//
  cout << "\n";
  cout << "ROOT_RC_PRB:\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}

