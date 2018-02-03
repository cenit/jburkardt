# include <cmath>
# include <cstdlib>
# include <iostream>
# include <iomanip>
# include <fstream>

using namespace std;

# include "simplex_gm_rule.hpp"

int main ( );
void test01 ( );
void test02 ( );
void test03 ( );
void test04 ( );
void test05 ( );
void test06 ( );
void test07 ( );
void test08 ( );
void test09 ( );
void test10 ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for SIMPLEX_GM_RULE_PRB.
//
//  Discussion:
//
//    SIMPLEX_GM_RULE_PRB tests the SIMPLEX_GM_RULE library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 March 2017
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "SIMPLEX_GM_RULE_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the SIMPLEX_GM_RULE library.\n";

  test01 ( );
  test02 ( );
  test03 ( );
  test04 ( );
  test05 ( );
  test06 ( );
  test07 ( );
  test08 ( );
  test09 ( );
  test10 ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "SIMPLEX_GM_RULE_PRB\n";
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
//    TEST01 tests SIMPLEX_UNIT_TO_GENERAL.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 March 2008
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int j;
  int m = 2;
  int n = 10;
  double *phy;
  double *phy_unit;
  double *ref;
  int seed = 123456789;
  double t[2*(2 + 1 )] = {
    1.0, 1.0,
    3.0, 1.0,
    2.0, 5.0 };
  double t_unit[2*(2 + 1 )] = {
    0.0, 0.0,
    1.0, 0.0,
    0.0, 1.0 };
  int vertex_num = 2 + 1;

  cout << "\n";
  cout << "TEST01\n";
  cout << "  SIMPLEX_UNIT_TO_GENERAL\n";
  cout << "  maps points in the unit simplex to a general simplex.\n";
  cout << "\n";
  cout << "  Here we consider a simplex in 2D, a triangle.\n";
  cout << "\n";
  cout << "  The vertices of the general triangle are:\n";
  cout << "\n";
  for ( j = 0; j < m + 1; j++ )
  {
    for ( i = 0; i < m; i++ )
    {
      cout << "  " << setw(8) << t[i+j*m];
    }
    cout << "\n";
  }
  cout << "\n";
  cout << "   (  XSI     ETA )   ( X       Y  )\n";
  cout << "\n";

  phy_unit = ( double * ) malloc ( m * ( m + 1 ) * sizeof ( double ) );

  simplex_unit_to_general ( m, m + 1, t, t_unit, phy_unit );

  for ( j = 0; j < m + 1; j++ )
  {
    for ( i = 0; i < m; i++ )
    {
      cout << "  " << setw(9) << t_unit[i+j*m];
    }
    for ( i = 0; i < m; i++ )
    {
      cout << "  " << setw(9) << phy_unit[i+j*m];
    }
    cout << "\n";
  }

  ref = simplex_unit_sample ( m, n, seed );
  phy = ( double * ) malloc ( m * n * sizeof ( double ) );

  simplex_unit_to_general ( m, n, t, ref, phy );
;
  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < m; i++ )
    {
      cout << "  " << setw(9) << ref[i+j*m];
    }
    for ( i = 0; i < m; i++ )
    {
      cout << "  " << setw(9) << phy[i+j*m];
    }
    cout << "\n";
  }

  delete [] phy;
  delete [] phy_unit;
  delete [] ref;

  return;
}
//****************************************************************************80

void test02 ( )

//****************************************************************************80
//
//  Purpose:
//
//    TEST02 tests SIMPLEX_UNIT_TO_GENERAL.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 March 2008
//
//  Author:
//
//    John Burkardt
//
{
  int dim;
  int j;
  int m = 3;
  int n = 10;
  double *phy;
  double *phy_unit;
  double *ref;
  int seed = 123456789;
  double t[3*(3 + 1 )] = {
    1.0, 1.0, 1.0,
    3.0, 1.0, 1.0,
    1.0, 4.0, 1.0,
    1.0, 1.0, 5.0 };
  double t_unit[3*(3 + 1 )] = {
    0.0, 0.0, 0.0,
    1.0, 0.0, 0.0,
    0.0, 1.0, 0.0,
    0.0, 0.0, 1.0 };
  int vertex_num = 3 + 1;

  cout << "\n";
  cout << "TEST02\n";
  cout << "  SIMPLEX_UNIT_TO_GENERAL\n";
  cout << "  maps points in the unit simplex to a general simplex.\n";
  cout << "\n";
  cout << "  Here we consider a simplex in 3D, a tetrahedron.\n";
  cout << "\n";
  cout << "  The vertices of the general tetrahedron are:\n";
  cout << "\n";
  for ( j = 0; j < vertex_num; j++ )
  {
    for ( dim = 0; dim < m; dim++ )
    {
      cout << "  " << setw(8) << t[dim+j*m];
    }
    cout << "\n";
  }

  cout << "\n";
  cout << "   (  XSI     ETA     MU )    ( X       Y       Z )\n";
  cout << "\n";

  phy_unit = ( double * ) malloc ( m * ( m + 1 ) * sizeof ( double ) );

  simplex_unit_to_general ( m, m+1, t, t_unit, phy_unit );

  for ( j = 0; j < m + 1; j++ )
  {
    for ( dim = 0; dim < m; dim++ )
    {
      cout << "  " << setw(9) << t_unit[dim+j*m];
    }
    for ( dim = 0; dim < m; dim++ )
    {
      cout << "  " << setw(9) << phy_unit[dim+j*m];
    }
    cout << "\n";
  }

  ref = simplex_unit_sample ( m, n, seed );
  phy = ( double * ) malloc ( m * n * sizeof ( double ) );

  simplex_unit_to_general ( m, n, t, ref, phy );

  for ( j = 0; j < n; j++ )
  {
    for ( dim = 0; dim < m; dim++ )
    {
      cout << "  " << setw(9) << ref[dim+j*m];
    }
    for ( dim = 0; dim < m; dim++ )
    {
      cout << "  " << setw(9) << phy[dim+j*m];
    }
    cout << "\n";
  }

  delete [] phy;
  delete [] phy_unit;
  delete [] ref;

  return;
}
//****************************************************************************80

void test03 ( )

//****************************************************************************80
//
//  Purpose:
//
//    TEST03 tests GM_RULE_SIZE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 July 2007
//
//  Author:
//
//    John Burkardt
//
{
# define TEST_NUM 4

  int degree;
  int m;
  int m_test[TEST_NUM] = { 2, 3, 5, 10 };
  int n;
  int rule;
  int test;
  int test_num = TEST_NUM;

  cout << "\n";
  cout << "TEST03\n";
  cout << "  GM_RULE_SIZE returns N, the number of points\n";
  cout << "  associated with a Grundmann-Moeller quadrature rule\n";
  cout << "  for the unit simplex of dimension M\n";
  cout << "  with rule index RULE\n";
  cout << "  and degree of exactness DEGREE = 2*RULE+1.\n";

  cout << "\n";
  cout << "   M      RULE    DEGREE N\n";

  for ( test = 0; test < test_num; test++ )
  {
    m = m_test[test];

    cout << "\n";

    for ( rule = 0; rule <= 5; rule++ )
    {
      n = gm_rule_size ( rule, m );
      degree = 2 * rule + 1;

      cout << "  " << setw(8) << m
           << "  " << setw(8) << rule
           << "  " << setw(8) << degree
           << "  " << setw(8) << n << "\n";
    }
  }

  return;
# undef TEST_NUM
}
//****************************************************************************80

void test04 ( )

//****************************************************************************80
//
//  Purpose:
//
//    TEST04 tests GM_UNIT_RULE_SET.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 July 2007
//
//  Author:
//
//    John Burkardt
//
{
  int dim;
  int m;
  int n;
  int point;
  int rule;
  double *w;
  double *x;

  cout << "\n";
  cout << "TEST04\n";
  cout << "  GM_UNIT_RULE_SET determines the weights and abscissas\n";
  cout << "  of a Grundmann-Moeller quadrature rule for\n";
  cout << "  the M dimensional unit simplex,\n";
  cout << "  using a rule of index RULE,\n";
  cout << "  which will have degree of exactness 2*RULE+1.\n";

  m = 3;
  rule = 2;

  cout << "\n";
  cout << "  Here we use M = " << m << "\n";
  cout << "  RULE = " << rule << "\n";
  cout << "  DEGREE = " << 2 * rule + 1 << "\n";

  n = gm_rule_size ( rule, m );

  w = new double[n];
  x = new double[m*n];

  gm_unit_rule_set ( rule, m, n, w, x );

  cout << "\n";
  cout << "     POINT        W             X             Y             Z\n";
  cout << "\n";

  for ( point = 0; point < n; point++ )
  {
    cout << "  " << setw(8) << point + 1
         << "  " << setw(12) << w[point];
    for ( dim = 0; dim < m; dim++ )
    {
      cout << "  " << setw(12) << x[dim+point*m];
    }
    cout << "\n";
  }

  delete [] w;
  delete [] x;

  return;
}
//****************************************************************************80

void test05 ( )

//****************************************************************************80
//
//  Purpose:
//
//    TEST05 tests GM_UNIT_RULE_SET.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 July 2007
//
//  Author:
//
//    John Burkardt
//
{
# define TEST_NUM 4

  int m;
  int m_test[TEST_NUM] = { 2, 3, 5, 10 };
  int n;
  int point;
  int rule;
  int test;
  int test_num = TEST_NUM;
  double *w;
  double w_sum;
  double *x;

  cout << "\n";
  cout << "TEST05\n";
  cout << "  GM_UNIT_RULE_SET determines the weights and abscissas\n";
  cout << "  of a Grundmann-Moeller quadrature rule for\n";
  cout << "  the M dimensional unit simplex,\n";
  cout << "  using a rule of index RULE,\n";
  cout << "  which will have degree of exactness 2*RULE+1.\n";
  cout << "\n";
  cout << "  In this test, we compute various rules, and simply\n";
  cout << "  report the number of points, and the sum of weights.\n";

  cout << "\n";
  cout << "   M      RULE    N  WEIGHT SUM\n";

  for ( test = 0; test < test_num; test++ )
  {
    m = m_test[test];

    cout << "\n";

    for ( rule = 0; rule <= 5; rule++ )
    {
      n = gm_rule_size ( rule, m );

      w = new double[n];
      x = new double[m*n];

      gm_unit_rule_set ( rule, m, n, w, x );

      w_sum = 0.0;
      for ( point = 0; point < n; point++ )
      {
        w_sum = w_sum + w[point];
      }

      cout << "  " << setw(8) << m
           << "  " << setw(8) << rule
           << "  " << setw(8) << n
           << "  " << setprecision(16) << setw(24) << w_sum << "\n";

      delete [] w;
      delete [] x;
    }
  }

  return;
# undef TEST_NUM
}
//****************************************************************************80

void test06 ( )

//****************************************************************************80
//
//  Purpose:
//
//    TEST06 tests GM_UNIT_RULE_SET.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 July 2007
//
//  Author:
//
//    John Burkardt
//
{
  int degree;
  int dim;
  int m;
  int n;
  int point;
  int rule;
  double *w;
  char w_file[127];
  ofstream w_unit;
  double *x;
  char x_file[127];
  ofstream x_unit;

  cout << "\n";
  cout << "TEST06\n";
  cout << "  GM_UNIT_RULE_SET determines the weights and abscissas\n";
  cout << "  of a Grundmann-Moeller quadrature rule for\n";
  cout << "  the M dimensional unit simplex,\n";
  cout << "  using a rule of index RULE,\n";
  cout << "  which will have degree of exactness 2*RULE+1.\n";
  cout << "\n";
  cout << "  In this test, we write a rule to a file.\n";

  m = 3;
  rule = 2;

  cout << "\n";
  cout << "  Here we use M = " << m << "\n";
  cout << "  RULE = " << rule << "\n";
  cout << "  DEGREE = " << 2 * rule + 1 << "\n";

  n = gm_rule_size ( rule, m );

  w = new double[n];
  x = new double[m*n];

  gm_unit_rule_set ( rule, m, n, w, x );

  sprintf ( w_file, "gm%d_%dd_w.txt", rule, m );

  w_unit.open ( w_file );

  for ( point = 0; point < n; point++ )
  {
    w_unit << setprecision ( 16 ) << setw(20) << w[point] << "\n";
  }

  w_unit.close ( );

  sprintf ( x_file, "gm%d_%dd_x.txt", rule, m );

  x_unit.open ( x_file );

  for ( point = 0; point < n; point++ )
  {
    for ( dim = 0; dim < m; dim++ )
    {
      x_unit << setprecision ( 16 ) << setw(20) << x[dim+point*m];
    }
    x_unit << "\n";
  }

  x_unit.close ( );

  cout << "\n";
  cout << "  Wrote rule " << rule
       << " to \"" << w_file
       << "\" and \"" << x_file << "\n";

  delete [] w;
  delete [] x;

  return;
}
//****************************************************************************80

void test07 ( )

//****************************************************************************80
//
//  Purpose:
//
//    TEST07 tests GM_UNIT_RULE_SET.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 July 2007
//
//  Author:
//
//    John Burkardt
//
{
  int degree;
  int degree_max = 4;
  int *expon;
  int h;
  int m = 5;
  double *mono;
  bool more;
  int n;
  int point;
  double quad;
  double quad_error;
  int rule;
  int rule_max = 3;
  int t;
  double *w;
  double *x;

  cout << "\n";
  cout << "TEST07\n";
  cout << "  GM_UNIT_RULE_SET determines the weights and abscissas\n";
  cout << "  of a Grundmann-Moeller quadrature rule for\n";
  cout << "  the M dimensional unit simplex,\n";
  cout << "  using a rule of index RULE,\n";
  cout << "  which will have degree of exactness 2*RULE+1.\n";
  cout << "\n";
  cout << "  In this test, look at all the monomials up to\n";
  cout << "  some maximum degree, choose a few low order rules\n";
  cout << "  and determine the quadrature error for each.\n";
  cout << "\n";
  cout << "  Here we use M = " << m << "\n";

  cout << "\n";
  cout << "      Rule     Order     Quad_Error\n";
  cout << "\n";

  expon = new int[m];

  for ( degree = 0; degree <= degree_max; degree++ )
  {
    more = false;

    for ( ; ; )
    {
      comp_next ( degree, m, expon, more, h, t );

      cout << "\n";
      cout << "  F(X) = X1^" << expon[0]
           << " * X2^" << expon[1]
           << " * X3^" << expon[2]
           << " * X4^" << expon[3]
           << " * X5^" << expon[4] << "\n";
      cout << "\n";

      for ( rule = 0; rule <= rule_max; rule++ )
      {
        n = gm_rule_size ( rule, m );

        mono = new double[n];
        w = new double[n];
        x = new double[m*n];

        gm_unit_rule_set ( rule, m, n, w, x );

        quad_error = simplex_unit_monomial_quadrature ( m, expon,
          n, x, w );

        cout << "  " << setw(8) << rule
             << "  " << setw(8) << n
             << "  " << setw(14) << quad_error << "\n";

        delete [] mono;
        delete [] w;
        delete [] x;
      }

      if ( !more )
      {
        break;
      }
    }
  }

  delete [] expon;

  return;
}
//****************************************************************************80

void test08 ( )

//****************************************************************************80
//
//  Purpose:
//
//    TEST08 tests GM_GENERAL_RULE_SET.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 March 2017
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int j;
  int m;
  int n;
  int rule;
  double t[3*4] = {
    1.0, 0.0, 0.0, 
    2.0, 0.0, 0.0, 
    1.0, 2.0, 0.0, 
    1.0, 0.0, 3.0 };
  double *w;
  double *x;

  cout << "\n";
  cout << "TEST08\n";
  cout << "  GM_GENERAL_RULE_SET determines the weights and abscissas\n";
  cout << "  of a Grundmann-Moeller quadrature rule for\n";
  cout << "  the M dimensional general simplex,\n";
  cout << "  using a rule of index RULE,\n";
  cout << "  which will have degree of exactness 2*RULE+1.\n";

  m = 3;
  rule = 2;

  cout << "\n";
  cout << "  Here we use M = " << m << "\n";
  cout << "  RULE = " << rule << "\n";
  cout << "  DEGREE = " << 2 * rule + 1 << "\n";

  cout << "\n";
  cout << "  Simplex vertices:\n";
  cout << "\n";
  for ( j = 0; j < 4; j++ )
  {
    for ( i = 0; i < 3; i++ )
    {
      cout << "  " << setw(14) << t[i+j*3];
    }
    cout << "\n";
  }

  n = gm_rule_size ( rule, m );

  w = new double[n];
  x = new double[m*n];

  gm_general_rule_set ( rule, m, n, t, w, x );

  cout << "\n";
  cout << "     POINT        W             X             Y             Z\n";
  cout << "\n";

  for ( j = 0; j < n; j++ )
  {
    cout << "  " << setw(8) << j
         << "  " << setw(12) << w[j];
    for ( i = 0; i < m; i++ )
    {
      cout << "  " << setw(12) << x[i+j*m];
    }
    cout << "\n";
  }

  delete [] w;
  delete [] x;

  return;
}
//*****************************************************************************/

void test09 ( )

//*****************************************************************************/
//
//  Purpose:
//
//    TEST09 tests GM_UNIT_RULE_SET.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 March 2017
//
//  Author:
//
//    John Burkardt
//
{
  int e[3];
  int e_test[3*10] = {
    0, 0, 0, 
    1, 0, 0, 
    0, 1, 0, 
    0, 0, 1, 
    2, 0, 0,
    1, 1, 0, 
    1, 0, 1, 
    0, 2, 0,
    0, 1, 1, 
    0, 0, 2 };
  int i;
  int j;
  int k;
  int m = 3;
  int n;
  double result;
  int rule;
  double *value;
  double volume;
  double *w;
  double *x;

  cout << "\n";
  cout << "TEST09\n";
  cout << "  GM_UNIT_RULE_SET determines the weights and abscissas\n";
  cout << "  of a Grundmann-Moeller quadrature rule for\n";
  cout << "  the M dimensional unit simplex,\n";
  cout << "  using a rule of index RULE,\n";
  cout << "  which will have degree of exactness 2*RULE+1.\n";

  cout << "\n";
  cout << "  In this test, look at all the monomials up to\n";
  cout << "  some maximum degree, choose a few low order rules\n";
  cout << "  and determine the quadrature error for each.\n";

  volume = simplex_unit_volume ( m );
  cout << "\n";
  cout << "  Simplex volume = " << volume << "\n";

  cout << "\n";
  cout << "  Here we use M = " << m << "\n";

  cout << "\n";
  cout << "         N        1               X               Y ";
  cout << "              Z               X^2              XY             XZ";
  cout << "              Y^2             YZ               Z^2\n";
  cout << "\n";

  for ( rule = 0; rule <= 5; rule++ )
  {
    n = gm_rule_size ( rule, m );

    w = new double[n];
    x = new double[m*n];

    gm_unit_rule_set ( rule, m, n, w, x );

    cout << "  " << setw(8) << n;

    for ( k = 0; k < 10; k++ )
    {
      for ( i = 0; i < m; i++ )
      {
        e[i] = e_test[i+k*m];
      }
      value = monomial_value ( m, n, e, x );

      result = r8vec_dot_product ( n, w, value );

      cout << "  " << setw(14) << result;

      delete [] value;
    }

    cout << "\n";

    delete [] w;
    delete [] x;
  }

  return;
}
//*****************************************************************************/

void test10 ( )

//*****************************************************************************/
//
//  Purpose:
//
//    TEST10 tests GM_GENERAL_RULE_SET.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 March 2017
//
//  Author:
//
//    John Burkardt
//
{
  int e[3];
  int e_test[3*10] = {
    0, 0, 0, 
    1, 0, 0, 
    0, 1, 0, 
    0, 0, 1, 
    2, 0, 0,
    1, 1, 0, 
    1, 0, 1, 
    0, 2, 0,
    0, 1, 1, 
    0, 0, 2 };
  int i;
  int j;
  int k;
  int m = 3;
  int n;
  double result;
  int rule;
  double t[3*4] = {
    1.0, 0.0, 0.0, 
    2.0, 0.0, 0.0, 
    1.0, 2.0, 0.0, 
    1.0, 0.0, 3.0 };
  double *value;
  double volume;
  double *w;
  double *x;

  cout << "\n";
  cout << "TEST10\n";
  cout << "  GM_GENERAL_RULE_SET determines the weights and abscissas\n";
  cout << "  of a Grundmann-Moeller quadrature rule for\n";
  cout << "  the M dimensional general simplex,\n";
  cout << "  using a rule of index RULE,\n";
  cout << "  which will have degree of exactness 2*RULE+1.\n";

  cout << "\n";
  cout << "  In this test, look at all the monomials up to\n";
  cout << "  some maximum degree, choose a few low order rules\n";
  cout << "  and determine the quadrature error for each.\n";

  cout << "\n";
  cout << "  Simplex vertices:\n";
  cout << "\n";
  for ( j = 0; j < 4; j++ )
  {
    for ( i = 0; i < 3; i++ )
    {
      cout << "  " << setw(14) << t[i+j*3];
    }
    cout << "\n";
  }

  volume = simplex_general_volume ( m, t );
  cout << "\n";
  cout << "  Simplex volume = " << volume << "\n";

  cout << "\n";
  cout << "  Here we use M = " << m << "\n";

  cout << "\n";
  cout << "         N        1               X               Y ";
  cout << "              Z               X^2              XY             XZ";
  cout << "              Y^2             YZ               Z^2\n";
  cout << "\n";

  for ( rule = 0; rule <= 5; rule++ )
  {
    n = gm_rule_size ( rule, m );

    w = new double[n];
    x = new double[m*n];

    gm_general_rule_set ( rule, m, n, t, w, x );

    cout << "  " << setw(8) << n;

    for ( k = 0; k < 10; k++ )
    {
      for ( i = 0; i < m; i++ )
      {
        e[i] = e_test[i+k*m];
      }
      value = monomial_value ( m, n, e, x );

      result = r8vec_dot_product ( n, w, value );

      cout << "  " << setw(14) << result;

      delete [] value;
    }

    cout << "\n";

    delete [] w;
    delete [] x;
  }

  return;
}
