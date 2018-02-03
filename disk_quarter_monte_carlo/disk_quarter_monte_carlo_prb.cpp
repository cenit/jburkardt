# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "disk_quarter_monte_carlo.hpp"

int main ( );
void test01 ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for DISK_QUARTER_MONTE_CARLO_PRB.
//
//  Discussion:
//
//    DISK_QUARTER_MONTE_CARLO_PRB tests the DISK_QUARTER_MONTE_CARLO library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 May 2016
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "DISK_QUARTER_MONTE_CARLO_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the DISK_QUARTER_MONTE_CARLO library.\n";

  test01 ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "DISK_QUARTER_MONTE_CARLO_PRB\n";
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
//    TEST01 uses DISK01_QUARTER_SAMPLE with an increasing number of points.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 May 2016
//
//  Author:
//
//    John Burkardt
//
{
  int e[2];
  double err;
  double exact;
  int i;
  int j;
  int n;
  double q;
  int seed;
  double *value;
  double *x;

  cout << "\n";
  cout << "TEST01\n";
  cout << "  Use DISK01_QUARTER_SAMPLE to estimate integrals\n";
  cout << " in the unit disk.\n";

  for ( i = 0; i <= 4; i++ )
  {
    e[0] = i;
    for ( j = 0; j <= 4 - e[0]; j++ )
    {
      e[1] = j;
      exact = disk01_quarter_monomial_integral ( e );
      cout << "\n";
      cout << "  Estimate integral of X^" << e[0] << "Y^" << e[1] << "\n";
      cout << "\n";
      cout << "         N        Estimate       Error\n";
      cout << "\n";

      n = 1;
      seed = 123456789;

      while ( n <= 65536 )
      {
        x = disk01_quarter_sample ( n, seed );

        value = monomial_value ( 2, n, e, x );

        q = disk01_quarter_area ( ) * r8vec_sum ( n, value ) / ( double ) ( n );

        err = fabs ( q - exact );
        cout << "  " << setw(8) << n
             << "  " << setw(14) << q
             << "  " << setw(10) << err << "\n";

        delete [] value;
        delete [] x;

        n = 2 * n;
      }
      cout << "    Exact:"
           << "  " << setw(14) << exact
           << "  " << setw(10) << 0.0 << "\n";
    }
  }

  return;
}
