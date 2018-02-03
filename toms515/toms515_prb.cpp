# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>
# include <ctime>

using namespace std;

# include "toms515.hpp"

int main ( );
void test01 ( );
void test02 ( );
void test03 ( );
void test04 ( );
void test05 ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for TOMS515_PRB.
//
//  Discussion:
//
//    TOMS515_PRB tests the TOMS515 library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "TOMS515_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the TOMS515 library.\n";

  test01 ( );
  test02 ( );
  test03 ( );
  test04 ( );
  test05 ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "TOMS515_PRB\n";
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
//    TEST01 tests COMB by generating all 3-subsets of a 5 set.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  int *c;
  int i;
  int k = 3;
  int l;
  int lmax;
  int n = 5;

  lmax = binom ( n, k );

  cout << "\n";
  cout << "TEST01\n";
  cout << "  Generate all K-subsets of an N set.\n";
  cout << "  K = " << k << "\n";
  cout << "  N = " << n << "\n";
  cout << "  LMAX =" << lmax << "\n";

  if ( ! i4_choose_check ( n, k ) )
  {
    cout << "\n";
    cout << "TEST01 - Warning!\n";
    cout << "  The binomial coefficient cannot be\n";
    cout << "  computed in integer arithmetic for\n";
    cout << "  this choice of parameters.\n";
    return;
  }

  cout << "\n";

  for ( l = 1; l <= lmax; l++ )
  {
    c = comb ( n, k, l );
    cout << "  " << setw(4) << l << ":  ";
    for ( i = 0; i < k; i++ )
    {
      cout << "  " << setw(4) << c[i];
    }
    cout << "\n";
    delete [] c;
  }

  return;
}
//****************************************************************************80

void test02 ( )

//****************************************************************************80
//
//  Purpose:
//
//    TEST02 tests COMB by generating 10 random 3-subsets of a 10 set.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  int *c;
  int i;
  int j;
  int k = 3;
  int l;
  int lmax;
  int n = 5;
  int seed;

  lmax = binom ( n, k );

  cout << "\n";
  cout << "TEST02\n";
  cout << "  Generate 10 random K-subsets of an N set.\n";
  cout << "  K = " << k << "\n";
  cout << "  N = " << n << "\n";
  cout << "  LMAX =" << lmax << "\n";

  if ( ! i4_choose_check ( n, k ) )
  {
    cout << "\n";
    cout << "TEST02 - Warning!\n";
    cout << "  The binomial coefficient cannot be\n";
    cout << "  computed in integer arithmetic for\n";
    cout << "  this choice of parameters.\n";
    return;
  }

  cout << "\n";

  seed = 123456789;

  for ( j = 1; j <= 10; j++ )
  {
    l = i4_uniform_ab ( 1, lmax, seed );
    c = comb ( n, k, l );
    cout << "  " << setw(4) << l << ":  ";
    for ( i = 0; i < k; i++ )
    {
      cout << "  " << setw(4) << c[i];
    }
    cout << "\n";
    delete [] c;
  }

  return;
}
//****************************************************************************80

void test03 ( )

//****************************************************************************80
//
//  Purpose:
//
//    TEST03 tests COMB by generating 10 random 3-subsets of a 25 set.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  int *c;
  int i;
  int j;
  int k = 3;
  int l;
  int lmax;
  int n = 25;
  int seed;

  lmax = binom ( n, k );

  cout << "\n";
  cout << "TEST03\n";
  cout << "  Generate 10 random K-subsets of an N set.\n";
  cout << "  K = " << k << "\n";
  cout << "  N = " << n << "\n";
  cout << "  LMAX =" << lmax << "\n";

  if ( ! i4_choose_check ( n, k ) )
  {
    cout << "\n";
    cout << "TEST03 - Warning!\n";
    cout << "  The binomial coefficient cannot be\n";
    cout << "  computed in integer arithmetic for\n";
    cout << "  this choice of parameters.\n";
    return;
  }

  cout << "\n";

  seed = 123456789;

  for ( j = 1; j <= 10; j++ )
  {
    l = i4_uniform_ab ( 1, lmax, seed );
    c = comb ( n, k, l );
    cout << "  " << setw(4) << l << ":  ";
    for ( i = 0; i < k; i++ )
    {
      cout << "  " << setw(4) << c[i];
    }
    cout << "\n";
    delete [] c;
  }

  return;
}
//****************************************************************************80

void test04 ( )

//****************************************************************************80
//
//  Purpose:
//
//    TEST04 tests COMB by generating 10 random 3-subsets of a 100 set.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  int *c;
  int i;
  int j;
  int k = 3;
  int l;
  int lmax;
  int n = 100;
  int seed;

  lmax = binom ( n, k );

  cout << "\n";
  cout << "TEST04\n";
  cout << "  Generate 10 random K-subsets of an N set.\n";
  cout << "  K = " << k << "\n";
  cout << "  N = " << n << "\n";
  cout << "  LMAX =" << lmax << "\n";

  if ( ! i4_choose_check ( n, k ) )
  {
    cout << "\n";
    cout << "TEST04 - Warning!\n";
    cout << "  The binomial coefficient cannot be\n";
    cout << "  computed in integer arithmetic for\n";
    cout << "  this choice of parameters.\n";
    return;
  }

  cout << "\n";

  seed = 123456789;

  for ( j = 1; j <= 10; j++ )
  {
    l = i4_uniform_ab ( 1, lmax, seed );
    c = comb ( n, k, l );
    cout << "  " << setw(4) << l << ":  ";
    for ( i = 0; i < k; i++ )
    {
      cout << "  " << setw(4) << c[i];
    }
    cout << "\n";
    delete [] c;
  }

  return;
}
//****************************************************************************80

void test05 ( )

//****************************************************************************80
//
//  Purpose:
//
//    TEST05 tests COMB by generating 10 random 10-subsets of a 100 set.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 April 2016
//
//  Author:
//
//    John Burkardt
//
{
  int *c;
  int i;
  int j;
  int k = 10;
  int l;
  int lmax;
  int n = 100;
  int seed;

  lmax = binom ( n, k );

  cout << "\n";
  cout << "TEST05\n";
  cout << "  Generate 10 random K-subsets of an N set.\n";
  cout << "  K = " << k << "\n";
  cout << "  N = " << n << "\n";
  cout << "  LMAX =" << lmax << "\n";
  cout << "\n";
  cout << "  Note that this function is already\n";
  cout << "  failing because LMAX is negative.\n";
  cout << "  The combinatorial coefficient C(100,10)\n";
  cout << "  is too large to store in an integer.\n";
  cout << "\n";
  cout << "  Although the program continues to give\n";
  cout << "  results, they cannot be relied on.\n";

  if ( ! i4_choose_check ( n, k ) )
  {
    cout << "\n";
    cout << "TEST05 - Warning!\n";
    cout << "  The binomial coefficient cannot be\n";
    cout << "  computed in integer arithmetic for\n";
    cout << "  this choice of parameters.\n";
    return;
  }

  cout << "\n";

  seed = 123456789;

  for ( j = 1; j <= 10; j++ )
  {
    l = i4_uniform_ab ( 1, lmax, seed );
    c = comb ( n, k, l );
    cout << "  " << setw(4) << l << ":  ";
    for ( i = 0; i < k; i++ )
    {
      cout << "  " << setw(4) << c[i];
    }
    cout << "\n";
    delete [] c;
  }

  return;
}

