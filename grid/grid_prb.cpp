# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "grid.hpp"

int main ( );
void grid_generate_test ( int center, int &seed );
void grid_side_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for GRID_PRB.
//
//  Discussion:
//
//    GRID_PRB tests the GRID library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    21 August 2016
//
//  Author:
//
//    John Burkardt
//
{
  int center;
  int seed;

  timestamp ( );
  cout << "\n";
  cout << "GRID_PRB:\n";
  cout << "  C++ version\n";
  cout << "  Test the GRID library.\n";

  center = 1;
  seed = 123456789;

  grid_generate_test ( center, seed );

  cout << "\n";
  cout << "  Repeat with a different seed from the first run.\n";

  seed = 987654321;
  grid_generate_test ( center, seed );

  cout << "\n";
  cout << "  Repeat with the same seed as the first run.\n";

  seed = 123456789;
  grid_generate_test ( center, seed );

  cout << "\n";
  cout << "  Repeat with different centering values.\n";

  for ( center = 1; center <= 5; center ++ )
  {
    seed = 123456789;
    grid_generate_test ( center, seed );
  }

  grid_side_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "GRID_PRB:\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void grid_generate_test ( int center, int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    GRID_GENERATE_TEST tests GRID_GENERATE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    21 August 2016
//
//  Author:
//
//    John Burkardt
//
{
  int m = 2;
  int n = 10;
  double *x;

  cout << "\n";
  cout << "GRID_GENERATE_TEST\n";
  cout << "  GRID_GENERATE randomly chooses a given number of\n";
  cout << "  points on a uniform grid.\n";
  cout << "\n";
  cout << "  Spatial dimension =  " << m   << "\n";
  cout << "  Number of points =   " << n << "\n";
  cout << "  Random number SEED = " << seed     << "\n";
  cout << "  Centering option =   " << center    << "\n";

  x = grid_generate ( m, n, center, seed );

  r8mat_transpose_print ( m, n, x, "  The grid points:" );

  delete [] x;

  return;
}
//****************************************************************************80

void grid_side_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    GRID_SIDE_TEST tests GRID_SIDE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    22 August 2016
//
//  Author:
//
//    John Burkardt
//
{
  int m;
  int n;
  int n_log10;
  int n_side;

  cout << "\n";
  cout << "GRID_SIDE_TEST\n";
  cout << "  GRID_SIDE returns the smallest N_SIDE, such that\n";
  cout << "  N <= NSIDE^M\n";

  cout << "\n";
  cout << "  M      N  NSIDE  NSIDE^M\n";

  for ( m = 2; m <= 4; m++ )
  {
    cout << "\n";
    for ( n_log10 = 1; n_log10 <= 4; n_log10++ )
    {
      n = i4_power ( 10, n_log10 );
      n_side = grid_side ( m, n );
      cout << "  " << setw(1) << m
           << "  " << setw(5) << n
           << "  " << setw(5) << n_side
           << "  " << setw(5) << i4_power ( n_side, m ) << "\n";
    }
  }

  return;
}
