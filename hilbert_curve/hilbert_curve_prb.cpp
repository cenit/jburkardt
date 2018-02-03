# include <iomanip>
# include <iostream>

using namespace std;

# include "hilbert_curve.hpp"

int main ( );
void d2xy_test ( );
void rot_test ( );
void xy2d_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for HILBERT_CURVE_TEST.
//
//  Modified:
//
//    02 January 2016
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "HILBERT_CURVE_TEST:\n";
  cout << "  C++ version\n";
  cout << "  Test the HILBERT_CURVE library.\n";

  d2xy_test ( );
  rot_test ( );
  xy2d_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "HILBERT_CURVE_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void d2xy_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    D2XY_TEST tests D2XY.
//
//  Modified:
//
//    24 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int d;
  int m;
  int n;
  int x;
  int y;

  cout << "\n";
  cout << "D2XY_TEST:\n";
  cout << "  D2XY converts a Hilbert linear D coordinate to an (X,Y) 2D coordinate.\n";

  m = 3;
  n = i4_power ( 2, m );

  cout << "\n";
  cout << "    D    X    Y\n";
  cout << "\n";
  for ( d = 0; d < n * n; d++ )
  {
    d2xy ( m, d, x, y );
    cout << "  " << setw(3) << d
         << "  " << setw(3) << x
         << "  " << setw(3) << y << "\n";
  }
  return;
}
//****************************************************************************80

void rot_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    ROT_TEST tests ROT.
//
//  Modified:
//
//    02 January 2016
//
//  Author:
//
//    John Burkardt
//
{
  int k;
  int m;
  int n;
  int rx;
  int ry;
  int x;
  int x0;
  int x1;
  int y;
  int y0;
  int y1;

  cout << "\n";
  cout << "ROT_TEST:\n";
  cout << "  ROT rotates and flips a quadrant appropriately.\n";
  cout << "\n";
  cout << "   X   Y  X0  Y0  X1  Y1\n";
  cout << "\n";

  m = 3;
  n = i4_power ( 2, m );
  ry = 0;

  for ( y = 0; y < 8; y++ )
  {
    for ( x = 0; x < 8; x++ )
    {
      rx = 0;
      x0 = x;
      y0 = y;
      rot ( n, x0, y0, rx, ry );
      rx = 1;
      x1 = x;
      y1 = y;
      rot ( n, x1, y1, rx, ry );
      cout << "  " << setw(2) << x
           << "  " << setw(2) << y
           << "  " << setw(2) << x0
           << "  " << setw(2) << y0
           << "  " << setw(2) << x1
           << "  " << setw(2) << y1 << "\n";
    }
  }
  return;
}
//****************************************************************************80

void xy2d_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    XY2D_TEST tests XY2D.
//
//  Modified:
//
//    24 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int d;
  int m;
  int n;
  int x;
  int y;

  cout << "\n";
  cout << "XY2D_TEST:\n";
  cout << "  XY2D converts an (X,Y) 2D coordinate to a Hilbert linear D coordinate.\n";

  m = 3;
  n = i4_power ( 2, m );

  cout << "\n";
  cout << "        ";
  for ( x = 0; x < n; x++ )
  {
    cout << setw(3) << x;
  }
  cout << "\n";
  cout << "\n";
  for ( y = n - 1; 0 <= y; y-- )
  {
    cout << "  " << setw(3) << y << ":  ";
    for ( x = 0; x < n; x++ )
    {
      d = xy2d ( m, x, y );
      cout << setw(3) << d;
    }
    cout << "\n";
  }
  return;
}