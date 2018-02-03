# include <cmath>
# include <cstdlib>
# include <cstring>
# include <iomanip>
# include <iostream>

using namespace std;

# include "padua.hpp"

int main ( );
void padua_order_test ( );
void padua_plot_test ( );
void padua_points_test ( );
void padua_points_set_test ( );
void padua_weights_test ( );
void padua_weights_set_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for PADUA_PRB.
//
//  Discussion:
//
//    PADUA_PRB tests the PADUA library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 September 2016
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "PADUA_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the PADUA library.\n";

  padua_order_test ( );
  padua_plot_test ( );
  padua_points_test ( );
  padua_points_set_test ( );
  padua_weights_test ( );
  padua_weights_set_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "PADUA_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void padua_order_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PADUA_ORDER_TEST tests PADUA_ORDER.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    30 August 2016
//
//  Author:
//
//    John Burkardt
//
{
  int l;
  int n;

  cout << " \n";
  cout << "PADUA_ORDER_TEST\n";
  cout << "  PADUA_ORDER converts the level L into the order N\n";
  cout << "  of any Padua rule.\n";
  cout << " \n";
  cout << "     L         N\n";
  cout << " \n";

  for ( l = 0; l <= 10; l++ )
  {
    n = padua_order ( l );
    cout << "  " << setw(4) << l
         << "  " << setw(8) << n << "\n";
  }

  return;
}
//****************************************************************************80

void padua_plot_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PADUA_PLOT_TEST tests PADUA_PLOT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 September 2016
//
//  Author:
//
//    John Burkardt
//
{
  string filename;
  int l;
 
  cout << " \n";
  cout << "PADUA_PLOT_TEST\n";
  cout << "  PADUA_PLOT plots the Padua points.\n";

  filename = "padua_00";

  for ( l = 0; l <= 10; l++ )
  {;
    padua_plot ( l, filename );
    filename_inc ( &filename );
  }

  return;
}
//****************************************************************************80

void padua_points_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PADUA_POINTS_TEST tests PADUA_POINTS.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 June 2014
//
//  Author:
//
//    John Burkardt
//
{
  int l;
  string label;
  int n;
  double *xy;

  cout << " \n";
  cout << "PADUA_POINTS_TEST\n";
  cout << "  PADUA_POINTS returns the points of a Padua rule.\n";

  for ( l = 0; l <= 10; l++ )
  {
    n = padua_order ( l );
    xy = padua_points ( l );
    label = " Level " + i4_to_string ( l ) + " Padua points:";
    r8mat_transpose_print ( 2, n, xy, label );
    delete [] xy;
  }

  return;
}
//****************************************************************************80

void padua_points_set_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PADUA_POINTS_SET_TEST tests PADUA_POINTS_SET.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    30 August 2016
//
//  Author:
//
//    John Burkardt
//
{
  int j;
  int l;
  int n;
  double *xy1;
  double *xy2;

  cout << " \n";
  cout << "PADUA_POINTS_SET_TEST\n";
  cout << "  PADUA_POINTS_SET looks up Padua points in a table.\n";

  for ( l = 3; l <= 4; l++ )
  {
    n = padua_order ( l );
    xy1 = padua_points ( l );
    xy2 = padua_points_set ( l );
    cout << "\n";
    cout << "  Level " << l << " Padua points.\n";
    cout << "\n";
    for ( j = 0; j < n; j++ )
    {
      cout << setw(4) << j << "  "
           << setw(14) << xy1[0+j*2] << "  "
           << setw(14) << xy1[1+j*2] << "\n";
      cout << setw(4) << j << "  "
           << setw(14) << xy2[0+j*2] << "  "
           << setw(14) << xy2[1+j*2] << "\n";
    }
    delete [] xy1;
    delete [] xy2;
  }

  return;
}
//****************************************************************************80

void padua_weights_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PADUA_WEIGHTS_TEST tests PADUA_WEIGHTS.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    31 August 2016
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  int j;
  int l;
  int n;
  double *w;

  cout << " \n";
  cout << "PADUA_WEIGHTS_TEST\n";
  cout << "  PADUA_WEIGHTS computes Padua weights.\n";

  for ( l = 3; l <= 4; l++ )
  {
    n = padua_order ( l );
    w = padua_weights ( l );
    cout << "\n";
    cout << "  Level " << l << " Padua quadrature weights.\n";
    cout << "\n";
    diff = 0.0;
    for ( j = 0; j < n; j++ )
    {
      cout << setw(4) << j << "  "
           << setw(14) << w[j] << "\n";
    }
    delete [] w;
  }

  return;
}
//****************************************************************************80

void padua_weights_set_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PADUA_WEIGHTS_SET_TEST tests PADUA_WEIGHTS_SET.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    31 August 2016
//
//  Author:
//
//    John Burkardt
//
{
  double diff;
  int j;
  int l;
  int n;
  double *w1;
  double *w2;

  cout << " \n";
  cout << "PADUA_WEIGHTS_SET_TEST\n";
  cout << "  PADUA_WEIGHTS_SET looks up Padua weights in a table.\n";

  for ( l = 3; l <= 4; l++ )
  {
    n = padua_order ( l );
    w1 = padua_weights ( l );
    w2 = padua_weights_set ( l );
    cout << "\n";
    cout << "  Level " << l << " Padua quadrature weights.\n";
    cout << "\n";
    diff = 0.0;
    for ( j = 0; j < n; j++ )
    {
      cout << setw(4) << j << "  "
           << setw(14) << w1[j] << "  "
           << setw(14) << w2[j] << "\n";
      diff = r8_max ( diff, fabs ( w1[j] - w2[j] ) );
    }
    cout << "\n";
    cout << "  Maximum difference = " << diff << "\n";
    delete [] w1;
    delete [] w2;
  }

  return;
}

