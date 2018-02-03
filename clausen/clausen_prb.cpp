# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "clausen.hpp"

int main ( );
void clausen_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for CLAUSEN_PRB.
//
//  Discussion:
//
//    CLAUSEN_PRB tests the CLAUSEN library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    12 December 2016
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "CLAUSEN_PRB:\n";
  cout << "  C++ version,\n";
  cout << "  Test the CLAUSEN library.\n";

  clausen_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "CLAUSEN_PRB:\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void clausen_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    CLAUSEN_TEST compares the CLAUSEN function to some tabulated values.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    12 December 2016
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  double fx1;
  double fx2;
  int n_data;
  streamsize ss;
  double x;
//
//  Save the current precision.
//
  ss = cout.precision ( );

  cout << "\n";
  cout << "CLAUSEN_TEST:\n";
  cout << "  CLAUSEN evaluates the Clausen function.\n";
  cout << "  Compare its results to tabulated data.\n";
  cout << "\n";
  cout << "                               Tabulated               Computed\n";
  cout << "           X                          FX                     FX        Diff\n";
  cout << "\n";

  n_data = 0;

  for ( ; ; )
  {
    clausen_values ( n_data, x, fx1 );

    if ( n_data == 0 )
    {
      break;
    }

    fx2 = clausen ( x );

    diff = fabs ( fx1 - fx2 );

    cout << "  " << setw(12) << setprecision ( 6 ) << x
         << "  " << setw(24) << setprecision ( 16 ) << fx1
         << "  " << setw(24) << setprecision ( 16 ) << fx2
         << "  " << setw(6) << setprecision ( 1 ) << diff << "\n";
  }
//
//  Restore the default precision.
//
  cout.precision ( ss );
  return;
}
