# include <cmath>
# include <cstdlib>
# include <cstring>
# include <ctime>
# include <iomanip>
# include <iostream>

using namespace std;

# include "disk_rule.hpp"

int main ( );
void test01 ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for DISK_RULE_PRB.
//
//  Discussion:
//
//    DISK01_RULE_PRB tests the DISK_RULE library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    20 March 2014
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "DISK_RULE:\n";
  cout << "  C++ version\n";
  cout << "  Test the DISK_RULE library.\n";

  test01 ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "DISK_RULE:\n";
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
//    TEST01 tests DISK_RULE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    20 March 2014
//
//  Author:
//
//    John Burkardt
//
{
  double area;
  int d;
  int ex;
  int ey;
  double exact[15] = {
       9.0, 
       9.0,        18.0, 
     117.0 / 4.0,  18.0,        225.0 / 4.0, 
     279.0 / 4.0, 117.0 / 2.0,  225.0 / 4.0, 387.0 / 2.0, 
    1773.0 / 8.0, 279.0 / 2.0, 1341.0 / 8.0, 387.0 / 2.0, 5769.0 / 8.0 };
  int i;
  int j;
  int k;
  int nr = 4;
  int nt = 8;
  double q;
  const double r8_pi = 3.141592653589793;
  double rc;
  double s;
  double *w;
  double *x;
  double xc;
  double *y;
  double yc;

  cout << "\n";
  cout << "TEST01\n";
  cout << "  DISK_RULE can compute a rule Q(f) for the general disk\n";
  cout << "  with center (XC,YC) and radius RC,\n";
  cout << "  using NT equally spaced angles and NR radial distances.\n";
  cout << "\n";
  cout << "  NT = " << nt << "\n";
  cout << "  NR = " << nr << "\n";
  cout << "\n";
  cout << "  Estimate integrals I(f) where f = x^ex * y^ey.\n";
//
//  Define the general disk.
//
  xc = 1.0;
  yc = 2.0;
  rc = 3.0;
//
//  Put in the factor of PI in the exact values.
//
  for ( k = 0; k < 15; k++ )
  {
    exact[k] = exact[k] * r8_pi;
  }
//
//  Compute the quadrature rule.
//
  w = new double[nr*nt];
  x = new double[nr*nt];
  y = new double[nr*nt];

  disk_rule ( nr, nt, xc, yc, rc, w, x, y );
//
//  Apply it to integrands.
//
  cout << "\n";
  cout << "  EX    EY      I(f)            Q(f)\n"; 
  cout << "\n";
//
//  Specify a monomial.
//
  k = 0;

  for ( d = 0; d <= 4; d++ )
  {
    for ( ex = d; 0 <= ex; ex-- )
    {
      ey = d - ex;

      s = 0.0;
      for ( j = 0; j < nt; j++ )
      {
        for ( i = 0; i < nr; i++ )
        {
          s = s + w[i+j*nr] * pow ( x[i+j*nr], ex ) * pow ( y[i+j*nr], ey );
        }
      }
      
      area = r8_pi * rc * rc;

      q = area * s;

      cout << "  " << setw(2) << ex
           << "  " << setw(2) << ey
           << "  " << setw(14) << exact[k]
           << "  " << setw(14) << q << "\n";

      k = k + 1;
    }
  }

  delete [] w;
  delete [] x;
  delete [] y;

  return;
}

