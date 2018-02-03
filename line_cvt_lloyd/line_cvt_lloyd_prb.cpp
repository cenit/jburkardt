# include <cstdlib>
# include <iostream>
# include <iomanip>

using namespace std;

# include "line_cvt_lloyd.hpp"

int main ( );
void test01 ( );
void test02 ( );
void test03 ( );
void test04 ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    LINE_CVT_LLOYD_PRB tests the line_cvt_lloyd library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    30 July 2014
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "LINE_CVT_LLOYD_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the LINE_CVT_LLOYD library.\n";

  test01 ( );
  test02 ( );
//
//  Repeat, using sorted initial points.
//
  test03 ( );
  test04 ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "LINE_CVT_LLOYD_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void test01 ( )

//****************************************************************************80
//
//  Purpose:
//
//    LINE_CVT_LLOYD_TEST01 tests the unconstrained computation.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    30 July 2014
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double h;
  string header = "test01";
  int it_num;
  int n = 25;
  int seed;
  double *x;

  cout << "\n";
  cout << "LINE_CVT_LLOYD_TEST01:\n";
  cout << "  Test the unconstrained computation.\n";

  a = 0.0;
  b = 1.0;
  it_num = 200;
  seed = 123456789;
  x = r8vec_uniform_ab_new ( n, a, b, seed );

  cout << "\n";
  cout << "  Use " << n << " points in the interval [" << a << "," << b << "]\n";
  cout << "  Number of iterations to take is " << it_num << "\n";
  cout << "  Call this calculation '" << header << "'\n";
  h = ( b - a ) / ( double ) ( n - 1 );
  cout << "  Expect a uniform spacing of " << h << "\n";

  r8vec_print ( n, x, "  Initial generators:" );

  line_cvt_lloyd ( n, a, b, it_num, header, x );

  r8vec_print ( n, x, "  Final generators:" );

  delete [] x;

  return;
}
//****************************************************************************80

void test02 ( )

//****************************************************************************80
//
//  Purpose:
//
//    LINE_CVT_LLOYD_TEST02 tests the constrained computation.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    30 July 2014
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double h;
  string header = "test02";
  int it_num;
  int n = 25;
  int seed;
  double *x;

  cout << "\n";
  cout << "LINE_CVT_LLOYD_TEST02:\n";
  cout << "  Test the constrained computation.\n";

  a = 0.0;
  b = 1.0;
  it_num = 200;
  seed = 123456789;
  x = r8vec_uniform_ab_new ( n, a, b, seed );

  cout << "\n";
  cout << "  Use " << n << " points in the interval [" << a << "," << b << "]\n";
  cout << "  Number of iterations to take is " << it_num << "\n";
  cout << "  Call this calculation '" << header << "'\n";
  h = ( b - a ) / ( double ) ( n );
  cout << "  Expect a uniform spacing of " << h << "\n";

  r8vec_print ( n, x, "  Initial generators:" );

  line_ccvt_lloyd ( n, a, b, it_num, header, x );

  r8vec_print ( n, x, "  Final generators:" );

  delete [] x;

  return;
}
//****************************************************************************80

void test03 ( )

//****************************************************************************80
//
//  Purpose:
//
//    LINE_CVT_LLOYD_TEST03 tests the unconstrained computation.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    29 July 2014
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double h;
  string header = "test03";
  int it_num;
  int n = 25;
  int seed;
  double *x;

  cout << "\n";
  cout << "LINE_CVT_LLOYD_TEST03:\n";
  cout << "  Test the unconstrained computation.\n";
  cout << "  SORT the random initial values before use.\n";

  a = 0.0;
  b = 1.0;
  it_num = 200;
  seed = 123456789;
  x = r8vec_uniform_ab_new ( n, a, b, seed );
  r8vec_sort_insert_a ( n, x );

  cout << "\n";
  cout << "  Use " << n << " points in the interval [" << a << "," << b << "]\n";
  cout << "  Number of iterations to take is " << it_num << "\n";
  cout << "  Call this calculation '" << header << "'\n";
  h = ( b - a ) / ( double ) ( n - 1 );
  cout << "  Expect a uniform spacing of " << h << "\n";

  r8vec_print ( n, x, "  Initial generators:" );

  line_cvt_lloyd ( n, a, b, it_num, header, x );

  r8vec_print ( n, x, "  Final generators:" );

  delete [] x;

  return;
}
//****************************************************************************80

void test04 ( )

//****************************************************************************80
//
//  Purpose:
//
//    LINE_CVT_LLOYD_TEST04 tests the constrained computation.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    29 July 2014
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double h;
  string header = "test04";
  int it_num;
  int n = 25;
  int seed;
  double *x;

  cout << "\n";
  cout << "LINE_CVT_LLOYD_TEST04:\n";
  cout << "  Test the constrained computation.\n";
  cout << "  SORT the initial points before use.\n";

  a = 0.0;
  b = 1.0;
  it_num = 200;
  seed = 123456789;
  x = r8vec_uniform_ab_new ( n, a, b, seed );
  r8vec_sort_insert_a ( n, x );

  cout << "\n";
  cout << "  Use " << n << " points in the interval [" << a << "," << b << "]\n";
  cout << "  Number of iterations to take is " << it_num << "\n";
  cout << "  Call this calculation '" << header << "'\n";
  h = ( b - a ) / ( double ) ( n );
  cout << "  Expect a uniform spacing of " << h << "\n";

  r8vec_print ( n, x, "  Initial generators:" );

  line_ccvt_lloyd ( n, a, b, it_num, header, x );

  r8vec_print ( n, x, "  Final generators:" );

  delete [] x;

  return;
}
