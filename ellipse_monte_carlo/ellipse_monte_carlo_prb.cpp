# include <cmath>
# include <cstdlib>
# include <ctime>
# include <iomanip>
# include <iostream>

using namespace std;

# include "ellipse_monte_carlo.hpp"

int main ( );
void ellipse_area1_test ( );
void ellipse_area2_test ( );
void test01 ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for ELLIPSE_MONTE_CARLO_PRB.
//
//  Discussion:
//
//    ELLIPSE_MONTE_CARLO_PRB tests the ELLIPSE_MONTE_CARLO library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    08 November 2016
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "ELLIPSE_MONTE_CARLO_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the ELLIPSE_MONTE_CARLO library.\n";

  ellipse_area1_test ( );
  ellipse_area2_test ( );
  test01 ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "ELLIPSE_MONTE_CARLO_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//*****************************************************************************/

void ellipse_area1_test ( )

//*****************************************************************************/
//
//  Purpose:
//
//    ELLIPSE_AREA1_TEST tests ELLIPSE_AREA1.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    08 November 2016
//
//  Author:
//
//    John Burkardt
//
{
  double a[2*2] = { 5.0, 1.0, 1.0, 2.0 };
  double area;
  double r;

  cout << "\n";
  cout << "ELLIPSE_AREA1_TEST\n";
  cout << "  C++ version\n";
  cout << "  ELLIPSE_AREA1 computes the area of an ellipse.\n";

  r = 10.0;

  area = ellipse_area1 ( a, r );

  cout << "\n";
  cout << "  R = " << r << "\n";
  r8mat_print ( 2, 2, a, "  Matrix A in ellipse definition x*A*x=r^2" );
  cout << "  Area = " << area << "\n";
//
//  Terminate.
//
  cout << "\n";
  cout << "ELLIPSE_AREA1_TEST\n";
  cout << "  Normal end of execution.\n";

  return;
}
//*****************************************************************************/

void ellipse_area2_test ( )

//*****************************************************************************/
//
//  Purpose:
//
//    ELLIPSE_AREA2_TEST tests ELLIPSE_AREA2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    08 November 2016
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double area;
  double b;
  double c;
  double d;
 
  cout << "\n";
  cout << "ELLIPSE_AREA2_TEST\n";
  cout << "  C++ version\n";
  cout << "  ELLIPSE_AREA2 computes the area of an ellipse.\n";

  a = 5.0;
  b = 2.0;
  c = 2.0;
  d = 10.0;

  area = ellipse_area2 ( a, b, c, d );

  cout << "\n";
  cout << "  Ellipse: " << a 
       << " * x^2 + " << b
       << " * xy + " << c 
       << " * y^2 = " << d << "\n";
  cout << "  Area = " << area << "\n";
//
//  Terminate.
//
  cout << "\n";
  cout << "ELLIPSE_AREA2_TEST\n";
  cout << "  Normal end of execution.\n";

  return;
}
//****************************************************************************80

void test01 ( )

//****************************************************************************80
//
//  Purpose:
//
//    TEST01 uses ELLIPSE01_SAMPLE with an increasing number of points.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    20 April 2014
//
//  Author:
//
//    John Burkardt
//
{
  double a[2*2] = { 9.0, 1.0, 1.0, 4.0 };
  int e[2];
  int e_test[2*7] = {
    0, 0, 
    1, 0, 
    0, 1, 
    2, 0, 
    1, 1, 
    0, 2, 
    3, 0 };
  double error;
  double exact;
  int j;
  int n;
  double r = 2.0;
  double result;
  int seed;
  double *value;
  double *x;

  cout << "\n";
  cout << "TEST01\n";
  cout << "  Use ELLIPSE01_SAMPLE to estimate integrals\n";
  cout << "  in the ellipse x' * A * x <= r^2.\n";

  seed = 123456789;

  cout << "\n";
  cout << "         N        1              X               Y  ";
  cout << "             X^2               XY             Y^2             X^3\n";
  cout << "\n";

  n = 1;

  while ( n <= 65536 )
  {

    x = ellipse_sample ( n, a, r, seed );

    cout << "  " << setw(8) << n;

    for ( j = 0; j < 7; j++ )
    {
      e[0] = e_test[0+j*2];
      e[1] = e_test[1+j*2];
 
      value = monomial_value ( 2, n, e, x );

      result = ellipse_area1 ( a, r ) * r8vec_sum ( n, value ) 
        / ( double ) ( n );

      cout << "  " << setw(14) << result;

      delete [] value;
    }

    cout << "\n";

    delete [] x;

    n = 2 * n;
  }

  return;
}
