# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "toms112.hpp"

int main ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for TOMS112_PRB.
//
//  Discussion:
//
//    TOMS112_PRB tests the TOMS112 library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    30 November 2016
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  bool inside;
  int n = 5;
  double p[2];
  int test;
  int test_num = 4;
  double x[5] = { 0.0,  1.0,  2.0,  1.0,  0.0 };
  double x0;
  double x0_test[4] = { 1.0, 3.0, 0.0, 0.5 };
  double y[5] = { 0.0, 0.0, 1.0, 2.0, 2.0 };
  double y0;
  double y0_test[4] = { 1.0, 4.0, 2.0, -0.25 };

  timestamp ( );
  cout << "\n";
  cout << "TOMS112_PRB\n";
  cout << "  C++ version\n";
  cout << "  POINT_IN_POLYGON determines if a point is in a polygon.\n";

  r8vec2_print ( n, x, y, "  The polygon vertices:" );

  cout << "\n";
  cout << "        Px        Py  Inside\n";
  cout << "\n";

  for ( test = 0; test < test_num; test++ )
  {
    x0 = x0_test[test];
    y0 = y0_test[test];
 
    inside = point_in_polygon ( n, x, y, x0, y0 );

    cout << "  " << setw(8) << x0
         << "  " << setw(8) << y0
         << "       " << inside << "\n";
  }
//
//  Terminate.
//
  cout << "\n";
  cout << "TOMS112_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}

