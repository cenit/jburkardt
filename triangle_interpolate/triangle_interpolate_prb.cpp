# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>
# include <ctime>

using namespace std;

# include "triangle_interpolate.hpp"

int main ( );
void triangle_interpolate_linear_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    TRIANGLE_INTERPOLATE_TEST tests the TRIANGLE_INTERPOLATE library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    20 January 2016
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "TRIANGLE_INTERPOLATE_TEST\n";
  cout << "  C++ version\n";
  cout << "  Test the TRIANGLE_INTERPOLATE library.\n";

  triangle_interpolate_linear_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "TRIANGLE_INTERPOLATE_TEST:\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void triangle_interpolate_linear_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    TRIANGLE_INTERPOLATE_LINEAR_TEST tests TRIANGLE_INTERPOLATE_LINEAR.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    20 January 2016
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int j;
  int m = 3;
  int n = 10;
  double *p;
  double p1[2] = { 0.0, 1.0 };
  double p2[2] = { 5.0, 0.0 };
  double p3[2] = { 4.0, 4.0 };
  int seed;
  double *v;
  double v1[3] = { 1.0, 0.0, 0.0 };
  double v2[3] = { 0.0, 1.0, 0.0 };
  double v3[3] = { 0.0, 0.0, 1.0 };

  cout << "\n";
  cout << "TRIANGLE_INTERPOLATE_LINEAR_TEST\n";
  cout << "  TRIANGLE_INTERPOLATE_LINEAR uses linear interpolation\n";
  cout << "  on vertex data to estimate values in the interior.\n";
//
//  Get N sample points inside the triangle.
//
  seed = 123456789;
  p = uniform_in_triangle_map1 ( p1, p2, p3, n, seed );
//
//  Request an intepolated value for R, G and B at each point.
//
  v = triangle_interpolate_linear ( m, n, p1, p2, p3, p, v1, v2, v3 );
//
//  Report the data.
//
  cout << "\n";
  cout << "       X               Y               V(1)            V(2)            V(3)\n";
  cout << "\n";
  cout << "  " << setw(14) << p1[0]
       << "  " << setw(14) << p1[1]
       << "  " << setw(14) << v1[0]
       << "  " << setw(14) << v1[1]
       << "  " << setw(14) << v1[2] << "\n";
  cout << "  " << setw(14) << p2[0]
       << "  " << setw(14) << p2[1]
       << "  " << setw(14) << v2[0]
       << "  " << setw(14) << v2[1]
       << "  " << setw(14) << v2[2] << "\n";
  cout << "  " << setw(14) << p3[0]
       << "  " << setw(14) << p3[1]
       << "  " << setw(14) << v3[0]
       << "  " << setw(14) << v3[1]
       << "  " << setw(14) << v3[2] << "\n";
  cout << "\n";
  for ( j = 0; j < n; j++ )
  {
    cout << "  " << setw(14) << p[0+j*m]
         << "  " << setw(14) << p[1+j*m]
         << "  " << setw(14) << v[0+j*m]
         << "  " << setw(14) << v[1+j*m]
         << "  " << setw(14) << v[2+j*m] << "\n";
  }

  delete [] p;
  delete [] v;

  return;
}
