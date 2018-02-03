# include <cstdlib>
# include <iostream>
# include <cmath>
# include <cstring>

using namespace std;

# include "latin_cover.hpp"

int main ( );

void test01 ( );
void test02 ( );
void test03 ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for LATIN_COVER_PRB.
//
//  Discussion:
//
//    LATIN_COVER_PRB tests the LATIN_COVER library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    05 August 2012
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "LATIN_COVER_PRB:\n";
  cout << "  C++ version\n";
  cout << "  Test the LATIN_COVER library.\n";

  test01 ( );
  test02 ( );
  test03 ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "LATIN_COVER_PRB:\n";
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
//    TEST01 tests LATIN_COVER.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    05 August 2012
//
//  Author:
//
//    John Burkardt
//
{
  int *a;
  int n;
  int *p;
  int seed;
  int test;

  cout << "\n";
  cout << "TEST01\n";
  cout << "  LATIN_COVER:\n";

  for ( n = 3; n <= 9; n = n + 2 )
  {
    seed = 123456789;

    for ( test = 1; test <= 3; test++ )
    {
      p = perm_uniform_new ( n, seed );
 
      perm_print ( n, p, "  Permutation" );

      a = latin_cover ( n, p );

      i4mat_print ( n, n, a, "  Latin cover" );

      delete [] a;
      delete [] p;
    }
  }
  return;
}
//****************************************************************************80

void test02 ( )

//****************************************************************************80
//
//  Purpose:
//
//   TEST02 tests LATIN_COVER_2D.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    24 June 2012
//
//  Author:
//
//    John Burkardt
//
{
  int *a;
  int n;
  int *p1;
  int *p2;
  int seed;
  int test;

  cout << "\n";
  cout << "TEST02\n";
  cout << "  LATIN_COVER_2D:\n";

  for ( n = 3; n <= 9; n = n + 2 )
  {
    seed = 123456789;
    for ( test = 1; test <= 3; test++ )
    {
      p1 = perm_uniform_new ( n, seed );
      perm_print ( n, p1, "  Permutation 1" );

      p2 = perm_uniform_new ( n, seed ); 
      perm_print ( n, p2, "  Permutation 2" );

      a = latin_cover_2d ( n, p1, p2 );
      i4mat_print ( n, n, a, "  Latin cover" );

      delete [] a;
      delete [] p1;
      delete [] p2;
    }
  }
  return;
}
//****************************************************************************80

void test03 ( )

//****************************************************************************80
//
//  Purpose:
//
//    TEST03 tests LATIN_COVER_3D.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    05 August 2012
//
//  Author:
//
//    John Burkardt
//
{
  int *a;
  int n;
  int *p1;
  int *p2;
  int *p3;
  int seed;
  int test;

  cout << "\n";
  cout << "TEST03\n";
  cout << "  LATIN_COVER_3D\n";

  for ( n = 3; n <= 9; n = n + 2 )
  {
    seed = 123456789;
    for ( test = 1; test <= 3; test++ )
    {
      p1 = perm_uniform_new ( n, seed );
      perm_print ( n, p1, "  Permutation 1" );

      p2 = perm_uniform_new ( n, seed );
      perm_print ( n, p2, "  Permutation 2" );

      p3 = perm_uniform_new ( n, seed );
      perm_print ( n, p3, "  Permutation 1" );

      a = latin_cover_3d ( n, p1, p2, p3 );

      i4block_print ( n, n, n, a, "  Latin cover" );

      delete [] a;
      delete [] p1;
      delete [] p2;
      delete [] p3;
    }
  }
  return;
}
