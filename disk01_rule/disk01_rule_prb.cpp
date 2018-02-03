# include <cmath>
# include <cstdlib>
# include <cstring>
# include <ctime>
# include <iomanip>
# include <iostream>

using namespace std;

# include "disk01_rule.hpp"

int main ( );
void test01 ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for DISK01_RULE_PRB.
//
//  Discussion:
//
//    DISK01_RULE_PRB tests the DISK01_RULE library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    17 March 2014
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "DISK01_RULE:\n";
  cout << "  C++ version\n";
  cout << "  Test the DISK01_RULE library.\n";

  test01 ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "DISK01_RULE:\n";
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
//    TEST01 tests DISK01_RULE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    17 March 2014
//
//  Author:
//
//    John Burkardt
//
{
  double area;
  int e[2];
  int e1;
  int e2;
  double exact;
  int i;
  int j;
  int nr = 4;
  int nt = 8;
  double q;
  const double r8_pi = 3.141592653589793;
  double *r;
  double s;
  double *t;
  double *w;
  double x;
  double y;

  cout << "\n";
  cout << "TEST01\n";
  cout << "  DISK01_RULE can compute a rule Q(f) for the unit disk\n";
  cout << "  using NT equally spaced angles and NR radial distances.\n";
  cout << "\n";
  cout << "  NT = " << nt << "\n";
  cout << "  NR = " << nr << "\n";
  cout << "\n";
  cout << "  Estimate integrals I(f) where f = x^e[0] * y^e[1].\n";
//
//  Compute the quadrature rule.
//
  w = new double[nr];
  r = new double[nr];
  t = new double[nt];

  disk01_rule ( nr, nt, w, r, t );
//
//  Apply it to integrands.
//
  cout << "\n";
  cout << "  E(1)  E(2)    I(f)            Q(f)\n"; 
  cout << "\n";
//
//  Specify a monomial.
//
  for ( e1 = 0; e1 <= 6; e1 = e1 + 2 )
  {
    e[0] = e1;

    for ( e2 = e1; e2 <= 6; e2 = e2 + 2 )
    {
      e[1] = e2;

      s = 0.0;
      for ( j = 0; j < nt; j++ )
      {
        for ( i = 0; i < nr; i++ )
        {
          x = r[i] * cos ( t[j] );
          y = r[i] * sin ( t[j] );
          s = s + w[i] * pow ( x, e[0] ) * pow ( y, e[1] );
        }
      }

      area = r8_pi;
      q = area * s;

      exact = disk01_monomial_integral ( e );

      cout << "  " << setw(2) << e[0]
           << "  " << setw(2) << e[1]
           << "  " << setw(14) << exact
           << "  " << setw(14) << q << "\n";
    }
  }

  free ( r );
  free ( t );
  free ( w );

  return;
}

