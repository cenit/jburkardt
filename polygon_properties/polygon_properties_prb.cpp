# include <cmath>
# include <cstdlib>
# include <cstring>
# include <iostream>
# include <iomanip>

using namespace std;

# include "polygon_properties.hpp"

int main ( );
void polygon_angles_test ( );
void polygon_area_test ( );
void polygon_area_2_test ( );
void polygon_centroid_test ( );
void polygon_centroid_2_test ( );
void polygon_contains_point_test ( );
void polygon_contains_point_2_test ( );
void polygon_diameter_test ( );
void polygon_expand_test ( );
void polygon_inrad_data_test ( );
void polygon_integral_1_test ( );
void polygon_integral_x_test ( );
void polygon_integral_xx_test ( );
void polygon_integral_xy_test ( );
void polygon_integral_y_test ( );
void polygon_integral_yy_test ( );
void polygon_is_convex_test ( );
void polygon_lattice_area_test ( );
void polygon_outrad_data_test ( );
void polygon_perimeter_test ( );
void polygon_perimeter_quad_test ( );
double f1 ( double x, double y );
double fx2 ( double x, double y );
void polygon_point_dist_test ( );
void polygon_point_near_test ( );
void polygon_sample_test ( );
void polygon_side_data_test ( );
void polygon_triangulate_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for POLYGON_PROPERTIES_PRB.
//
//  Discussion:
//
//    POLYGON_PROPERTIES_PRB tests the POLYGON_PROPERTIES library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    20 October 2015
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "POLYGON_PROPERTIES_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the POLYGON_PROPERTIES library.\n";

  polygon_angles_test ( );
  polygon_area_test ( );
  polygon_area_2_test ( );
  polygon_centroid_test ( );
  polygon_centroid_2_test ( );
  polygon_contains_point_test ( );
  polygon_contains_point_2_test ( );
  polygon_diameter_test ( );
  polygon_expand_test ( );
  polygon_inrad_data_test ( );
  polygon_integral_1_test ( );
  polygon_integral_x_test ( );
  polygon_integral_xx_test ( );
  polygon_integral_xy_test ( );
  polygon_integral_y_test ( );
  polygon_integral_yy_test ( );
  polygon_is_convex_test ( );
  polygon_lattice_area_test ( );
  polygon_outrad_data_test ( );
  polygon_perimeter_test ( );
  polygon_perimeter_quad_test ( );
  polygon_point_dist_test ( );
  polygon_point_near_test ( );
  polygon_sample_test ( );
  polygon_side_data_test ( );
  polygon_triangulate_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "POLYGON_PROPERTIES_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void polygon_angles_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    POLYGON_ANGLES_TEST tests POLYGON_ANGLES.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    14 October 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *angle;
  int i;
  int n = 6;
  double v[2*6] = {
    0.0, 0.0,
    1.0, 0.0,
    2.0, 1.0,
    3.0, 0.0,
    3.0, 2.0,
    1.0, 2.0 };

  cout << "\n";
  cout << "POLYGON_ANGLES_TEST\n";
  cout << "  POLYGON_ANGLES computes the angles of a polygon.\n";

  cout << "\n";
  cout << "  Number of polygonal vertices = " << n << "\n";

  r8mat_transpose_print ( 2, n, v, "  The polygon vertices:" );

  angle = polygon_angles ( n, v );

  cout << "\n";
  cout << "  Polygonal angles in degrees:\n";
  cout << "\n";

  for ( i = 0; i < n; i++ )
  {
    cout << setw(8) << i << "  "
         << setw(14) << r8_degrees ( angle[i] ) << "\n";
  }

  delete [] angle;

  return;
}
//****************************************************************************80

void polygon_area_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    POLYGON_AREA_TEST tests POLYGON_AREA.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    14 October 2015
//
//  Author:
//
//    John Burkardt
//
{
  double area;
  double area_exact1 = 2.0;
  double area_exact2 = 6.0;
  int n1 = 4;
  int n2 = 8;
  double v1[2*4] = {
    1.0, 0.0, 
    2.0, 1.0, 
    1.0, 2.0, 
    0.0, 1.0 };
  double v2[2*8] = {
        0.0, 0.0, 
        3.0, 0.0, 
        3.0, 3.0, 
        2.0, 3.0, 
        2.0, 1.0, 
        1.0, 1.0, 
        1.0, 2.0, 
        0.0, 2.0 };

  cout << "\n";
  cout << "POLYGON_AREA_TEST\n";
  cout << "  POLYGON_AREA computes the area of a polygon.\n";

  cout << "\n";
  cout << "  Number of polygonal vertices = " << n1 << "\n";
  r8mat_transpose_print ( 2, n1, v1, "  The polygon vertices:" );
  area = polygon_area ( n1, v1 );
  cout << "\n";
  cout << "  Exact area is        " << area_exact1 << "\n";
  cout << "  The computed area is " << area << "\n";

  cout << "\n";
  cout << "  Number of polygonal vertices = " << n2 << "\n";
  r8mat_transpose_print ( 2, n2, v2, "  The polygon vertices:" );
  area = polygon_area ( n2, v2 );
  cout << "\n";
  cout << "  Exact area is        " << area_exact2 << "\n";
  cout << "  The computed area is " << area << "\n";

  return;
}
//****************************************************************************80

void polygon_area_2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    POLYGON_AREA_2_TEST tests POLYGON_AREA_2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    14 October 2015
//
//  Author:
//
//    John Burkardt
//
{
  double area;
  double area_exact1 = 2.0;
  double area_exact2 = 6.0;
  int n1 = 4;
  int n2 = 8;
  double v1[2*4] = {
    1.0, 0.0, 
    2.0, 1.0, 
    1.0, 2.0, 
    0.0, 1.0 };
  double v2[2*8] = {
        0.0, 0.0, 
        3.0, 0.0, 
        3.0, 3.0, 
        2.0, 3.0, 
        2.0, 1.0, 
        1.0, 1.0, 
        1.0, 2.0, 
        0.0, 2.0 };

  cout << "\n";
  cout << "POLYGON_AREA_2_TEST\n";
  cout << "  POLYGON_AREA_2 computes the area of a polygon.\n";

  cout << "\n";
  cout << "  Number of polygonal vertices = " << n1 << "\n";
  r8mat_transpose_print ( 2, n1, v1, "  The polygon vertices:" );
  area = polygon_area_2 ( n1, v1 );
  cout << "\n";
  cout << "  Exact area is        " << area_exact1 << "\n";
  cout << "  The computed area is " << area << "\n";

  cout << "\n";
  cout << "  Number of polygonal vertices = " << n2 << "\n";
  r8mat_transpose_print ( 2, n2, v2, "  The polygon vertices:" );
  area = polygon_area_2 ( n2, v2 );
  cout << "\n";
  cout << "  Exact area is        " << area_exact2 << "\n";
  cout << "  The computed area is " << area << "\n";

  return;
}
//****************************************************************************80

void polygon_centroid_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    POLYGON_CENTROID_TEST tests POLYGON_CENTROID.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    14 October 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *centroid;
  int n = 4;
  double v[2*4] = {
    1.0, 0.0,
    2.0, 1.0,
    1.0, 2.0,
    0.0, 1.0 };

  cout << "\n";
  cout << "POLYGON_CENTROID_TEST\n";
  cout << "  POLYGON_CENTROID computes the centroid of a polygon.\n";

  r8mat_transpose_print ( 2, n, v, "  The polygon vertices:" );

  centroid = polygon_centroid ( n, v );
  r8vec_print ( 2, centroid, "  POLYGON_CENTROID:" );
  delete [] centroid;

  return;
}
//****************************************************************************80

void polygon_centroid_2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    POLYGON_CENTROID_2_TEST tests POLYGON_CENTROID_2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    14 October 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *centroid;
  int n = 4;
  double v[2*4] = {
    1.0, 0.0,
    2.0, 1.0,
    1.0, 2.0,
    0.0, 1.0 };

  cout << "\n";
  cout << "POLYGON_CENTROID_2_TEST\n";
  cout << "  POLYGON_CENTROID_2 computes the centroid of a polygon.\n";

  r8mat_transpose_print ( 2, n, v, "  The polygon vertices:" );

  centroid = polygon_centroid_2 ( n, v );
  r8vec_print ( 2, centroid, "  POLYGON_CENTROID_2:" );
  delete [] centroid;

  return;
}
//****************************************************************************80

void polygon_contains_point_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    POLYGON_CONTAINS_POINT_TEST tests POLYGON_CONTAINS_POINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    14 October 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int inside;
  int n = 5;
  double p[2];
  double p_test[2*4] = {
    1.0,  1.0, 
    3.0,  4.0, 
    0.0,  2.0, 
    0.5, -0.25 };
  int test;
  int test_num = 4;
  double v[2*5] = {
    0.0, 0.0, 
    1.0, 0.0, 
    2.0, 1.0, 
    1.0, 2.0, 
    0.0, 2.0 };
 
  cout << "\n";
  cout << "POLYGON_CONTAINS_POINT_TEST\n";
  cout << "  POLYGON_CONTAINS_POINT determines if a point is in a polygon.\n";

  r8mat_transpose_print ( 2, n, v, "  The polygon vertices:" );

  cout << "\n";
  cout << "          P          Inside\n";
  cout << "\n";

  for ( test = 0; test < test_num; test++ )
  {
    p[0] = p_test[0+test*2];
    p[1] = p_test[1+test*2];
 
    inside = polygon_contains_point ( n, v, p );

    cout << setw(14) << p[0] << "  "
         << setw(14) << p[1] << "  "
         << setw(1) << inside << "\n";
  } 

  return;
}
//****************************************************************************80

void polygon_contains_point_2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    POLYGON_CONTAINS_POINT_2_TEST tests POLYGON_CONTAINS_POINT_2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    14 October 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int inside;
  int n = 5;
  double p[2];
  double p_test[2*4] = {
    1.0,  1.0, 
    3.0,  4.0, 
    0.0,  2.0, 
    0.5, -0.25 };
  int test;
  int test_num = 4;
  double v[2*5] = {
    0.0, 0.0, 
    1.0, 0.0, 
    2.0, 1.0, 
    1.0, 2.0, 
    0.0, 2.0 };
 
  cout << "\n";
  cout << "POLYGON_CONTAINS_POINT_2_TEST\n";
  cout << "  POLYGON_CONTAINS_POINT_2 determines if a point is in a polygon.\n";

  r8mat_transpose_print ( 2, n, v, "  The polygon vertices:" );

  cout << "\n";
  cout << "          P          Inside\n";
  cout << "\n";

  for ( test = 0; test < test_num; test++ )
  {
    p[0] = p_test[0+test*2];
    p[1] = p_test[1+test*2];
 
    inside = polygon_contains_point_2 ( n, v, p );

    cout << setw(14) << p[0] << "  "
         << setw(14) << p[1] << "  "
         << setw(1) << inside << "\n";
  } 

  return;
}
//****************************************************************************80

void polygon_diameter_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    POLYGON_DIAMETER_TEST tests POLYGON_DIAMETER;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    14 October 2015
//
//  Author:
//
//    John Burkardt
//
{
  double diameter;
  double diameter_exact = 2.0;
  int n = 4;
  double v[2*4] = {
    1.0, 0.0, 
    2.0, 1.0, 
    1.0, 2.0, 
    0.0, 1.0 };

  cout << "\n";
  cout << "POLYGON_DIAMETER_TEST\n";
  cout << "  POLYGON_DIAMETER computes the diameter of a polygon.\n";

  r8mat_transpose_print ( 2, n, v, "  The polygon vertices:" );

  diameter = polygon_diameter ( n, v );

  cout << "\n";
  cout << "  Diameter ( computed ) " << diameter << "\n";
  cout << "  Diameter ( exact )    " << diameter_exact << "\n";
 
  return;
}
//****************************************************************************80

void polygon_expand_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    POLYGON_EXPAND_TEST tests POLYGON_EXPAND;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    14 October 2015
//
//  Author:
//
//    John Burkardt
//
{
  double h;
  int n = 4;
  double v[2*4] = {
    1.0, 1.0, 
    5.0, 1.0, 
    2.0, 4.0, 
    1.0, 3.0 };
  double *w;

  cout << "\n";
  cout << "POLGON_EXPAND_TEST\n";
  cout << "  POLYGON_EXPAND expands a polygon by an amount H.\n";

  h = 0.5;

  r8mat_transpose_print ( 2, n, v, "  The polygon vertices:" );

  cout << "\n";
  cout << "  The expansion amount H = " << h << "\n";

  w = polygon_expand ( n, v, h );

  r8mat_transpose_print ( 2, n, w, "  The expanded polygon:" );

  delete [] w;

  return;
}
//****************************************************************************80

void polygon_inrad_data_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    POLYGON_INRAD_DATA_TEST tests POLYGON_INRAD_DATA.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    14 October 2015
//
//  Author:
//
//    John Burkardt
//
{
  double area;
  int n;
  double radin;
  double radout;
  double side;

  cout << "\n";
  cout << "POLYGON_INRAD_DATA_TEST\n";
  cout << "  POLYGON_INRAD_DATA uses the inradius of a regular polygon\n";
  cout << "  to compute the area, outradius, and side length.\n";

  for ( n = 3; n <= 5; n++ )
  {
    cout << "\n";
    cout << "  Number of polygonal sides = " << n << "\n";
    radin = 1.0;
    cout << "\n";
    cout << "  Assuming RADIN = " << radin << "\n";
    polygon_inrad_data ( n, radin, area, radout, side );
    cout << "    AREA =   " << area << "\n";
    cout << "    RADOUT = " << radout << "\n";
    cout << "    SIDE =   " << side << "\n";
  }
  return;
}
//****************************************************************************80

void polygon_integral_1_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    POLYGON_INTEGRAL_1_TEST tests POLYGON_INTEGRAL_1.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    14 October 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n1 = 4;
  int n2 = 3;
  double result;
  double v1[2*4] = {
    0.0, 0.0, 
    1.0, 0.0, 
    1.0, 1.0, 
    0.0, 1.0 };
  double v2[2*3] = {
    1.0, 1.0, 
    4.0, 3.0, 
    2.0, 5.0 };

  cout << "\n";
  cout << "POLYGON_INTEGRAL_1_TEST\n";
  cout << "  POLYGON_INTEGRAL_1 integrates 1 over a polygon.\n";

  r8mat_transpose_print ( 2, n1, v1, "  The polygon vertices:" );

  result = polygon_integral_1 ( n1, v1 );
  cout << "\n";
  cout << "    1    " << result << "\n";

  r8mat_transpose_print ( 2, n2, v2, "  The polygon vertices:" );

  result = polygon_integral_1 ( n2, v2 );
  cout << "\n";
  cout << "    1    " << result << "\n";

  return;
}
//****************************************************************************80

void polygon_integral_x_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    POLYGON_INTEGRAL_X_TEST tests POLYGON_INTEGRAL_X.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    14 October 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n1 = 4;
  int n2 = 3;
  double result;
  double v1[2*4] = {
    0.0, 0.0, 
    1.0, 0.0, 
    1.0, 1.0, 
    0.0, 1.0 };
  double v2[2*3] = {
    1.0, 1.0, 
    4.0, 3.0, 
    2.0, 5.0 };

  cout << "\n";
  cout << "POLYGON_INTEGRAL_X_TEST\n";
  cout << "  POLYGON_INTEGRAL_X integrates x over a polygon.\n";

  r8mat_transpose_print ( 2, n1, v1, "  The polygon vertices:" );

  result = polygon_integral_x ( n1, v1 );
  cout << "\n";
  cout << "    x    " << result << "\n";

  r8mat_transpose_print ( 2, n2, v2, "  The polygon vertices:" );

  result = polygon_integral_x ( n2, v2 );
  cout << "\n";
  cout << "    x    " << result << "\n";

  return;
}
//****************************************************************************80

void polygon_integral_xx_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    POLYGON_INTEGRAL_XX_TEST tests POLYGON_INTEGRAL_XX.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    14 October 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n1 = 4;
  int n2 = 3;
  double result;
  double v1[2*4] = {
    0.0, 0.0, 
    1.0, 0.0, 
    1.0, 1.0, 
    0.0, 1.0 };
  double v2[2*3] = {
    1.0, 1.0, 
    4.0, 3.0, 
    2.0, 5.0 };

  cout << "\n";
  cout << "POLYGON_INTEGRAL_XX_TEST\n";
  cout << "  POLYGON_INTEGRAL_XX integrates x^2 over a polygon.\n";

  r8mat_transpose_print ( 2, n1, v1, "  The polygon vertices:" );

  result = polygon_integral_xx ( n1, v1 );
  cout << "\n";
  cout << "    x^2  " << result << "\n";

  r8mat_transpose_print ( 2, n2, v2, "  The polygon vertices:" );

  result = polygon_integral_xx ( n2, v2 );
  cout << "\n";
  cout << "    x^2  " << result << "\n";

  return;
}
//****************************************************************************80

void polygon_integral_xy_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    POLYGON_INTEGRAL_XY_TEST tests POLYGON_INTEGRAL_XY.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    14 October 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n1 = 4;
  int n2 = 3;
  double result;
  double v1[2*4] = {
    0.0, 0.0, 
    1.0, 0.0, 
    1.0, 1.0, 
    0.0, 1.0 };
  double v2[2*3] = {
    1.0, 1.0, 
    4.0, 3.0, 
    2.0, 5.0 };

  cout << "\n";
  cout << "POLYGON_INTEGRAL_XY_TEST\n";
  cout << "  POLYGON_INTEGRAL_XY integrates xy over a polygon.\n";

  r8mat_transpose_print ( 2, n1, v1, "  The polygon vertices:" );

  result = polygon_integral_xy ( n1, v1 );
  cout << "\n";
  cout << "    x*y  " << result << "\n";

  r8mat_transpose_print ( 2, n2, v2, "  The polygon vertices:" );

  result = polygon_integral_xy ( n2, v2 );
  cout << "\n";
  cout << "    x*y  " << result << "\n";

  return;
}
//****************************************************************************80

void polygon_integral_y_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    POLYGON_INTEGRAL_Y_TEST tests POLYGON_INTEGRAL_Y.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    14 October 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n1 = 4;
  int n2 = 3;
  double result;
  double v1[2*4] = {
    0.0, 0.0, 
    1.0, 0.0, 
    1.0, 1.0, 
    0.0, 1.0 };
  double v2[2*3] = {
    1.0, 1.0, 
    4.0, 3.0, 
    2.0, 5.0 };

  cout << "\n";
  cout << "POLYGON_INTEGRAL_Y_TEST\n";
  cout << "  POLYGON_INTEGRAL_Y integrates y over a polygon.\n";

  r8mat_transpose_print ( 2, n1, v1, "  The polygon vertices:" );

  result = polygon_integral_y ( n1, v1 );
  cout << "\n";
  cout << "    y    " << result << "\n";

  r8mat_transpose_print ( 2, n2, v2, "  The polygon vertices:" );

  result = polygon_integral_y ( n2, v2 );
  cout << "\n";
  cout << "    y    " << result << "\n";

  return;
}
//****************************************************************************80

void polygon_integral_yy_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    POLYGON_INTEGRAL_YY_TEST tests POLYGON_INTEGRAL_YY.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    14 October 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n1 = 4;
  int n2 = 3;
  double result;
  double v1[2*4] = {
    0.0, 0.0, 
    1.0, 0.0, 
    1.0, 1.0, 
    0.0, 1.0 };
  double v2[2*3] = {
    1.0, 1.0, 
    4.0, 3.0, 
    2.0, 5.0 };

  cout << "\n";
  cout << "POLYGON_INTEGRAL_YY_TEST\n";
  cout << "  POLYGON_INTEGRAL_YY integrates y^2 over a polygon.\n";

  r8mat_transpose_print ( 2, n1, v1, "  The polygon vertices:" );

  result = polygon_integral_yy ( n1, v1 );
  cout << "\n";
  cout << "    y^2  " << result << "\n";

  r8mat_transpose_print ( 2, n2, v2, "  The polygon vertices:" );

  result = polygon_integral_yy ( n2, v2 );
  cout << "\n";
  cout << "    y^2  " << result << "\n";

  return;
}
//****************************************************************************80

void polygon_is_convex_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    POLYGON_IS_CONVEX_TEST tests POLYGON_IS_CONVEX.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    14 October 2015
//
//  Author:
//
//    John Burkardt
//
{ 
  double angle;
  int i;
  int n;
  int n01 = 1;
  int n02 = 2;
  int n03 = 3;
  int n04 = 3;
  int n05 = 3;
  int n06 = 4;
  int n07 = 5;
  int n08 = 5;
  int n09 = 6;
  int n10 = 6;
  int n11 = 8;
  const double r8_pi = 3.141592653589793;
  int result;
  int test;
  int test_num = 11;
  string title;
  double *v;
  double v01[2*1] = {
    0.0, 0.0 };
  double v02[2*2] = {
    0.0, 0.0, 
    1.0, 2.0 };
  double v03[2*3] = {
    0.0, 0.0, 
    2.0, 0.0, 
    1.0, 0.0 };
  double v04[2*3] = {
    0.0, 0.0, 
    1.0, 0.0, 
    0.0, 2.0 };
  double v05[2*3] = {
    0.0, 0.0, 
    0.0, 2.0, 
    1.0, 0.0 };
  double v06[2*4] = {
    1.0, 0.0, 
    2.0, 0.0, 
    3.0, 1.0, 
    0.0, 1.0 };
  double v07[2*5] = {
    0.0, 0.0, 
    0.5, 0.5, 
    1.0, 0.0, 
    1.0, 1.0, 
    0.0, 1.0 };
  double *v08;
  double *v09;
  double v10[2*6] = {
    0.0, 0.0, 
    2.0, 0.0, 
    1.0, 1.0, 
    0.0, 0.0, 
    2.0, 0.0, 
    1.0, 1.0 };
  double v11[2*8] = { 
    1.0, 0.0, 
    3.0, 0.0, 
    3.0, 3.0, 
    0.0, 3.0, 
    0.0, 1.0, 
    2.0, 1.0, 
    2.0, 2.0, 
    1.0, 2.0 };

  cout << "\n";
  cout << "POLYGON_IS_CONVEX_TEST\n";
  cout << "  POLYGON_IS_CONVEX determines if a polygon is convex.\n";

  for ( test = 1; test <= test_num; test++ )
  {
    if ( test == 1 )
    {
      n = n01;
      v = v01;
      title = "  A point:";
    }
    else if ( test == 2 )
    {
      n = n02;
      v = v02;
      title = "  A line:";
    }
    else if ( test == 3 )
    {
      n = n03;
      v = v03;
      title = "  A triangle:";
    }
    else if ( test == 4 )
    {
      n = n04;
      v = v04;
      title = "  A CCW triangle:";
    }
    else if ( test == 5 )
    {
      n = n05;
      v = v05;
      title = "  A CW triangle:";
    }
    else if ( test == 6 )
    {
      n = n06;
      v = v06;
      title = "  Polygon with large angle:";
    }
    else if ( test == 7 )
    {
      n = n07;
      v = v07;
      title = "  Polygon with huge angle:";
    }
    else if ( test == 8 )
    {
      n = n08;
      v08 = new double[2*n];
      for ( i = 0; i < n; i++ )
      {
        angle = ( double ) ( i ) * 4.0 * r8_pi / ( double ) ( n );
        v08[0+i*2] = cos ( angle );
        v08[1+i*2] = sin ( angle );
      }
      v = v08;
      title = "  A five-pointed star:";
    }
    else if ( test == 9 )
    {
      n = n09;
      v09 = new double[2*n];
      for ( i = 0; i < n; i++ )
      {
        angle = ( double ) ( i ) * 2.0 * r8_pi / ( double ) ( n );
        v09[0+i*2] = cos ( angle );
        v09[1+i*2] = sin ( angle );
      }
      v = v09;
      title = "  A hexagon:";
    }
    else if ( test == 10 )
    {
      n = n10;
      v = v10;
      title = "  A triangle twice:";
    }
    else if ( test == 11 )
    {
      n = n11;
      v = v11;
      title = "  Square knot:";
    }

    r8mat_transpose_print ( 2, n, v, title );
    result = polygon_is_convex ( n, v );

    if ( result == -1 )
    {
      cout << "  The polygon is not convex.\n";
    }
    else if ( result == 0 )
    {
      cout << "  The polygon is degenerate and convex.\n";
    }
    else if ( result == 1 )
    {
      cout << "  The polygon is convex and counterclockwise.\n";
    }
    else if ( result == 2 )
    {
      cout << "  The polygon is convex and clockwise.\n";
    }
  }

  delete [] v08;
  delete [] v09;

  return;
}
//****************************************************************************80

void polygon_lattice_area_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    POLYGON_LATTICE_AREA_TEST tests POLYGON_LATTICE_AREA.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    14 October 2015
//
//  Author:
//
//    John Burkardt
//
{
  double area;
  int b;
  int i;

  cout << "\n";
  cout << "POLYGON_LATTICE_AREA_TEST\n";
  cout << "  POLYGON_LATTICE_AREA returns the area\n";
  cout << "  of a polygon, measured in lattice points.\n";

  i = 5;
  b = 6;

  cout << "\n";
  cout << "  Number of interior lattice points = " << i << "\n";
  cout << "  Number of boundary lattice points = " << b << "\n";

  area = polygon_lattice_area ( i, b );

  cout << "  Area of polygon is " << area << "\n";

  return;
}
//****************************************************************************80

void polygon_outrad_data_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    POLYGON_OUTRAD_DATA_TEST tests POLYGON_OUTRAD_DATA.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    14 October 2015
//
//  Author:
//
//    John Burkardt
//
{
  double area;
  int n;
  double radin;
  double radout;
  double side;

  cout << "\n";
  cout << "POLYGON_OUTRAD_DATA_TEST\n";
  cout << "  POLYGON_OUTRAD_DATA uses the outradius of a regular polygon\n";
  cout << "  to determine the area, inradius, and side length.\n";

  for ( n = 3; n <= 5; n++ )
  {
    cout << "\n";
    cout << "  Number of polygonal sides = " << n << "\n";
    radout = 1.0;
    cout << "\n";
    cout << "  Assuming RADOUT = " << radout << "\n";
    polygon_outrad_data ( n, radout, area, radin, side );
    cout << "    AREA =   " << area << "\n";
    cout << "    RADIN =  " << radin << "\n";
    cout << "    SIDE =   " << side << "\n";
  }
  return;
}
//****************************************************************************80

void polygon_perimeter_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    POLYGON_PERIMETER_TEST tests POLYGON_PERIMETER.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    16 October 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n1 = 4;
  int n2 = 3;
  double result;
  double v1[2*4] = {
    0.0, 0.0, 
    1.0, 0.0, 
    1.0, 1.0, 
    0.0, 1.0 };
  double v2[2*3] = {
    1.0, 1.0, 
    4.0, 3.0, 
    2.0, 5.0 };

  cout << "\n";
  cout << "POLYGON_PERIMETER_TEST\n";
  cout << "  POLYGON_PERIMETER computes the perimeter of a polygon\n";

  r8mat_transpose_print ( 2, n1, v1, "  Vertices of polygon V1:" );

  result = polygon_perimeter ( n1, v1 );
  cout << "\n";
  cout << "    Perimeter = " << result << "\n";

  r8mat_transpose_print ( 2, n2, v2, "  Vertices of polygon V2:" );

  result = polygon_perimeter ( n2, v2 );
  cout << "\n";
  cout << "    Perimeter = " << result << "\n";

  return;
}
//****************************************************************************80

void polygon_perimeter_quad_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    POLYGON_PERIMETER_QUAD_TEST tests POLYGON_PERIMETER_QUAD.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    20 October 2015
//
//  Author:
//
//    John Burkardt
//
{ 
  double hmax;
  int i;
  int n1 = 4;
  int n2 = 3;
  double v1[2*4] = {
    0.0, 0.0, 
    1.0, 0.0, 
    1.0, 1.0, 
    0.0, 1.0 };
  double v2[2*3] = {
    1.0, 1.0, 
    4.0, 3.0, 
    2.0, 5.0 };
  double value;

  cout << "\n";
  cout << "POLYGON_PERIMETER_QUAD_TEST\n";
  cout << "  POLYGON_PERIMETER_QUAD estimates the integral of\n";
  cout << "  a function over the perimeter of a polygon using\n";
  cout << "  the composite midpoint rule over each side.\n";

  r8mat_transpose_print ( 2, n1, v1, "  Vertices of polygon V1:" );

  hmax = 0.5;
  value = polygon_perimeter_quad ( n1, v1, hmax, f1 );
  cout << "\n";
  cout << "  Using HMAX = " << hmax << ", estimated integral of 1 over perimeter = " << value << "\n";

  cout << "\n";
  hmax = 2.0;
  for ( i = 1; i <= 3; i++ )
  {
    hmax = hmax / 2.0;
    value = polygon_perimeter_quad ( n1, v1, hmax, fx2 );
    cout << "  Using HMAX = " << hmax << ", estimated integral of x^2 over perimeter = " << value << "\n";
  }

  r8mat_transpose_print ( 2, n2, v2, "  Vertices of polygon V2:" );

  hmax = 0.5;
  value = polygon_perimeter_quad ( n2, v2, hmax, f1 );
  cout << "\n";
  cout << "  Using HMAX = " << hmax << ", estimated integral of 1 over perimeter = " << value << "\n";

  cout << "\n";
  hmax = 2.0;
  for ( i = 1; i <= 3; i++ )
  {
    hmax = hmax / 2.0;
    value = polygon_perimeter_quad ( n2, v2, hmax, fx2 );
    cout << "  Using HMAX = " << hmax << ", estimated integral of x^2 over perimeter = " << value << "\n";
  }

  return;
}
//****************************************************************************80

double f1 ( double x, double y )

//****************************************************************************80
//
//  Purpose:
//
//    F1 evaluates f(x,y) = 1.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    20 October 2015
//
//  Author:
//
//    John Burkardt
//
{
  double value;

  value = 1.0;

  return value;
}
//****************************************************************************80

double fx2 ( double x, double y )

//****************************************************************************80
//
//  Purpose:
//
//    FX2 evaluates f(x,y) = x^2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    20 October 2015
//
//  Author:
//
//    John Burkardt
//
{
  double value;

  value = x * x;

  return value;
}
//****************************************************************************80

void polygon_point_dist_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    POLYGON_POINT_DIST_TEST tests POLYGON_POINT_DIST.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    14 October 2015
//
//  Author:
//
//    John Burkardt
//
{ 
  double dist;
  int n = 3;
  double p[2];
  double p_test[2*3] = {
    4.0,  5.0, 
    2.0,  3.0, 
   -2.0, -1.0 };
  double v[2*3] = {
    1.0, 1.0, 
    4.0, 3.0, 
    2.0, 5.0 };
  int test;

  cout << "\n";
  cout << "POLYGON_POINT_DIST_TEST\n";
  cout << "  POLYGON_POINT_DIST computes polygon-point distance.\n";

  r8mat_transpose_print ( 2, n, v, "  Vertices of polygon:" );

  cout << "\n";
  cout << "       X             Y             DIST\n";
  cout << "\n";

  for ( test = 0; test < 3; test++ )
  {
    p[0] = p_test[0+test*2];
    p[1] = p_test[1+test*2];
    dist = polygon_point_dist ( n, v, p );
    cout << "  " << setw(14) << p[0]
         << "  " << setw(14) << p[1]
         << "  " << setw(14) << dist << "\n";
  }

  return;
}
//****************************************************************************80

void polygon_point_near_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    POLYGON_POINT_NEAR_TEST tests POLYGON_POINT_NEAR.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    14 October 2015
//
//  Author:
//
//    John Burkardt
//
{ 
  int n = 3;
  double p[2];
  double p_test[2*3] = {
    4.0,  5.0, 
    2.0,  3.0, 
   -2.0, -1.0 };
  double *pn;
  double v[2*3] = {
    1.0, 1.0, 
    4.0, 3.0, 
    2.0, 5.0 };
  int test;

  cout << "\n";
  cout << "POLYGON_POINT_NEAR_TEST\n";
  cout << "  POLYGON_POINT_NEAR computes nearest point on polygon.\n";

  r8mat_transpose_print ( 2, n, v, "  Vertices of polygon:" );

  cout << "\n";
  cout << "       X             Y             XN             YN\n";
  cout << "\n";

  for ( test = 0; test < 3; test++ )
  {
    p[0] = p_test[0+test*2];
    p[1] = p_test[1+test*2];
    pn = polygon_point_near ( n, v, p );
    cout << "  " << setw(14) << p[0]
         << "  " << setw(14) << p[1]
         << "  " << setw(14) << pn[0]
         << "  " << setw(14) << pn[1] << "\n";
    delete [] pn;
  }

  return;
}
//****************************************************************************80

void polygon_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    POLYGON_SAMPLE_TEST tests POLYGON_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    14 October 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n = 20;
  int nv = 6;
  int seed;
  double v[2*6] = {
    0.0, 0.0, 
    2.0, 0.0, 
    2.0, 1.0, 
    1.0, 1.0, 
    1.0, 2.0, 
    0.0, 1.0 };
  double *x;

  cout << "\n";
  cout << "POLYGON_SAMPLE_TEST\n";
  cout << "  POLYGON_SAMPLE samples a polygon.\n";

  seed = 123456789;

  x = polygon_sample ( nv, v, n, seed );

  r8mat_transpose_print ( 2, n, x, "  Sample points:" );

  delete [] x;

  return;
}
//****************************************************************************80

void polygon_side_data_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    POLYGON_SIDE_DATA_TEST tests POLYGON_SIDE_DATA;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    14 October 2015
//
//  Author:
//
//    John Burkardt
//
{
  double area;
  int n;
  double radin;
  double radout;
  double side;

  cout << "\n";
  cout << "POLYGON_SIDE_DATA_TEST\n";
  cout << "  POLYGON_SIDE_DATA uses the side length of a regular polygon\n";
  cout << "  to determine the area, inradius and outradius.\n";

  for ( n = 3; n <= 5; n++ )
  {
    cout << "\n";
    cout << "  Number of polygonal sides = " << n << "\n";
    side = 1.0;
    cout << "\n";
    cout << "  Assuming SIDE = " << side << "\n";
    polygon_side_data ( n, side, area, radin, radout );
    cout << "    AREA =   " << area << "\n";
    cout << "    RADIN =  " << radin << "\n";
    cout << "    RADOUT = " << radout << "\n";
  }
  return;
}
//****************************************************************************80

void polygon_triangulate_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    POLYGON_TRIANGULATE_TEST tests POLYGON_TRIANGULATE.
//
//  Discussion:
//
//    There are N-3 triangles in the triangulation.
//
//    For the first N-2 triangles, the first edge listed is always an
//    internal diagonal.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    14 October 2015
//
{
  int j;
  int n = 10;
  int *triangles;
  double x[10] = {
    8.0, 7.0, 6.0, 5.0, 4.0, 
    3.0, 2.0, 1.0, 0.0, 4.0 };
  double y[10] = {
    0.0, 10.0,  0.0, 10.0,  0.0, 
   10.0,  0.0, 10.0,  0.0, -2.0 };

  cout << "\n";
  cout << "POLYGON_TRIANGULATE_TEST\n";
  cout << "  POLYGON_TRIANGULATE triangulates a polygon.\n";
  cout << "  Here, we triangulate the comb_10 polygon.\n";

  triangles = polygon_triangulate ( n, x, y );

  cout << "\n";
  cout << "  Triangles:\n";
  cout << "\n";

  for ( j = 0; j < n - 2; j++ )
  {
    cout << "  " << setw(2) << j << ":  "
         << "  " << setw(2) << triangles[0+j*3]
         << "  " << setw(2) << triangles[1+j*3]
         << "  " << setw(2) << triangles[2+j*3] << "\n";
  }

  delete [] triangles;

  return;
}
