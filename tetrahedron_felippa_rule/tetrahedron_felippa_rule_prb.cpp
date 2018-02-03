# include <cstdlib>
# include <iostream>
# include <iomanip>
# include <cmath>

using namespace std;

# include "tetrahedron_felippa_rule.hpp"

int main ( );
void tetrahedron_unit_monomial_test ( int degree_max );
void tetrahedron_unit_quad_test ( int degree_max );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for TETRAHEDRON_FELIPPA_RULE_PRB.
//
//  Discussion:
//
//    TETRAHEDRON_FELIPPA_RULE_PRB tests the TETRAHEDRON_FELIPPA_RULE library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    27 August 2014
//
//  Author:
//
//    John Burkardt
//
{
  int degree_max;

  timestamp ( );
  cout << "\n";
  cout << "TETRAHEDRON_FELIPPA_RULE_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the TETRAHEDRON_FELIPPA_RULE library.\n";

  degree_max = 4;
  tetrahedron_unit_monomial_test ( degree_max );

  degree_max = 4;
  tetrahedron_unit_quad_test ( degree_max );
//
//  Terminate.
//
  cout << "\n";
  cout << "TETRAHEDRON_FELIPPA_RULE_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void tetrahedron_unit_monomial_test ( int degree_max )

//****************************************************************************80
//
//  Purpose:
//
//    TETRAHEDRON_UNIT_MONOMIAL_TEST tests TETRAHEDRON_UNIT_MONOMIAL.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    16 April 2009
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DEGREE_MAX, the maximum total degree of the
//    monomials to check.
//
{
  int alpha;
  int beta;
  int expon[3];
  int gamma;
  double value;

  cout << "\n";
  cout << "TETRAHEDRON_UNIT_MONOMIAL_TEST\n";
  cout << "  For the unit tetrahedron,\n";
  cout << "  TETRAHEDRON_UNIT_MONOMIAL returns the exact value of the\n";
  cout << "  integral of X^ALPHA Y^BETA Z^GAMMA\n";
  cout << "\n";
  cout << "  Volume = " << tetrahedron_unit_volume ( ) << "\n";
  cout << "\n";
  cout << "     ALPHA      BETA     GAMMA      INTEGRAL\n";
  cout << "\n";

  for ( alpha = 0; alpha <= degree_max; alpha++ )
  {
    expon[0] = alpha;
    for ( beta = 0; beta <= degree_max - alpha; beta++ )
    {
      expon[1] = beta;
      for ( gamma = 0; gamma <= degree_max - alpha - beta; gamma++ )
      {
        expon[2] = gamma;

        value = tetrahedron_unit_monomial ( expon );

        cout << "  " << setw(8)  << expon[0]
             << "  " << setw(8)  << expon[1]
             << "  " << setw(8)  << expon[2]
             << "  " << setw(14) << value << "\n";
      }
    }
  }

  return;
}
//****************************************************************************80

void tetrahedron_unit_quad_test ( int degree_max )

//****************************************************************************80
//
//  Purpose:
//
//    TETRAHEDRON_UNIT_QUAD_TEST tests the rules for the unit tetrahedron.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    19 April 2008
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DEGREE_MAX, the maximum total degree of the
//    monomials to check.
//
{
# define DIM_NUM 3

  int dim;
  int dim_num = DIM_NUM;
  int expon[DIM_NUM];
  int h;
  bool more;
  int order;
  double quad;
  int t;
  double *v;
  double *w;
  double *xyz;

  cout << "\n";
  cout << "TETRAHEDRON_UNIT_QUAD_TEST\n";
  cout << "  For the unit tetrahedron,\n";
  cout << "  we approximate monomial integrals with:\n";
  cout << "  TETRAHEDRON_UNIT_O01,\n";
  cout << "  TETRAHEDRON_UNIT_O04,\n";
  cout << "  TETRAHEDRON_UNIT_O08,\n";
  cout << "  TETRAHEDRON_UNIT_O08b,\n";
  cout << "  TETRAHEDRON_UNIT_O14,\n";
  cout << "  TETRAHEDRON_UNIT_O14b,\n";
  cout << "  TETRAHEDRON_UNIT_O15,\n";
  cout << "  TETRAHEDRON_UNIT_O15b,\n";
  cout << "  TETRAHEDRON_UNIT_O24,\n";

  more = false;

  for ( ; ; )
  {
    subcomp_next ( degree_max, dim_num, expon, &more, &h, &t );

    cout << "\n";
    cout << "  Monomial exponents: ";
    for ( dim = 0; dim < dim_num; dim++ )
    {
      cout << "  " << setw(2) << expon[dim];
    }
    cout << "\n";
    cout << "\n";

    order = 1;
    w = new double[order];
    xyz = new double[dim_num*order];
    tetrahedron_unit_o01 ( w, xyz );
    v = monomial_value ( dim_num, order, expon, xyz );
    quad = tetrahedron_unit_volume ( ) * r8vec_dot_product ( order, w, v );
    cout << "  " << setw(6) << order
         << "  " << setw(14) << quad << "\n";
    delete [] v;
    delete [] w;
    delete [] xyz;

    order = 4;
    w = new double[order];
    xyz = new double[dim_num*order];
    tetrahedron_unit_o04 ( w, xyz );
    v = monomial_value ( dim_num, order, expon, xyz );
    quad = tetrahedron_unit_volume ( ) * r8vec_dot_product ( order, w, v );
    cout << "  " << setw(6) << order
         << "  " << setw(14) << quad << "\n";
    delete [] v;
    delete [] w;
    delete [] xyz;

    order = 8;
    w = new double[order];
    xyz = new double[dim_num*order];
    tetrahedron_unit_o08 ( w, xyz );
    v = monomial_value ( dim_num, order, expon, xyz );
    quad = tetrahedron_unit_volume ( ) * r8vec_dot_product ( order, w, v );
    cout << "  " << setw(6) << order
         << "  " << setw(14) << quad << "\n";
    delete [] v;
    delete [] w;
    delete [] xyz;

    order = 8;
    w = new double[order];
    xyz = new double[dim_num*order];
    tetrahedron_unit_o08b ( w, xyz );
    v = monomial_value ( dim_num, order, expon, xyz );
    quad = tetrahedron_unit_volume ( ) * r8vec_dot_product ( order, w, v );
    cout << "  " << setw(6) << order
         << "  " << setw(14) << quad << "\n";
    delete [] v;
    delete [] w;
    delete [] xyz;

    order = 14;
    w = new double[order];
    xyz = new double[dim_num*order];
    tetrahedron_unit_o14 ( w, xyz );
    v = monomial_value ( dim_num, order, expon, xyz );
    quad = tetrahedron_unit_volume ( ) * r8vec_dot_product ( order, w, v );
    cout << "  " << setw(6) << order
         << "  " << setw(14) << quad << "\n";
    delete [] v;
    delete [] w;
    delete [] xyz;

    order = 14;
    w = new double[order];
    xyz = new double[dim_num*order];
    tetrahedron_unit_o14b ( w, xyz );
    v = monomial_value ( dim_num, order, expon, xyz );
    quad = tetrahedron_unit_volume ( ) * r8vec_dot_product ( order, w, v );
    cout << "  " << setw(6) << order
         << "  " << setw(14) << quad << "\n";
    delete [] v;
    delete [] w;
    delete [] xyz;

    order = 15;
    w = new double[order];
    xyz = new double[dim_num*order];
    tetrahedron_unit_o15 ( w, xyz );
    v = monomial_value ( dim_num, order, expon, xyz );
    quad = tetrahedron_unit_volume ( ) * r8vec_dot_product ( order, w, v );
    cout << "  " << setw(6) << order
         << "  " << setw(14) << quad << "\n";
    delete [] v;
    delete [] w;
    delete [] xyz;

    order = 15;
    w = new double[order];
    xyz = new double[dim_num*order];
    tetrahedron_unit_o15b ( w, xyz );
    v = monomial_value ( dim_num, order, expon, xyz );
    quad = tetrahedron_unit_volume ( ) * r8vec_dot_product ( order, w, v );
    cout << "  " << setw(6) << order
         << "  " << setw(14) << quad << "\n";
    delete [] v;
    delete [] w;
    delete [] xyz;

    order = 24;
    w = new double[order];
    xyz = new double[dim_num*order];
    tetrahedron_unit_o24 ( w, xyz );
    v = monomial_value ( dim_num, order, expon, xyz );
    quad = tetrahedron_unit_volume ( ) * r8vec_dot_product ( order, w, v );
    cout << "  " << setw(6) << order
         << "  " << setw(14) << quad << "\n";
    delete [] v;
    delete [] w;
    delete [] xyz;

    cout << "\n";
    quad = tetrahedron_unit_monomial ( expon );
    cout << "  " << " Exact"
         << "  " << setw(14) << quad << "\n";

    if ( !more )
    {
      break;
    }
  }

  return;
# undef DIM_NUM
}
