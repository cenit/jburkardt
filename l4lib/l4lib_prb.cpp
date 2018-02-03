# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "l4lib.hpp"

int main ( );
void i4_to_l4_test ( );
void i4_to_l4vec_test ( );
void l4_to_i4_test ( );
void l4_to_s_test ( );
void l4_uniform_test ( );
void l4_xor_test ( );
void l4mat_print_test ( );
void l4mat_print_some_test ( );
void l4mat_transpose_print_test ( );
void l4mat_transpose_print_some_test ( );
void l4mat_uniform_new_test ( );
void l4vec_next_test ( );
void l4vec_print_test ( );
void l4vec_uniform_new_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for I4LIB_PRB.
//
//  Discussion:
//
//    L4LIB_PRB tests the L4LIB library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 August 2016
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "L4LIB_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the L4LIB library.\n";

  i4_to_l4_test ( );
  i4_to_l4vec_test ( );

  l4_to_i4_test ( );
  l4_to_s_test ( );
  l4_uniform_test ( );
  l4_xor_test ( );

  l4mat_print_test ( );
  l4mat_print_some_test ( );
  l4mat_transpose_print_test ( );
  l4mat_transpose_print_some_test ( );
  l4mat_uniform_new_test ( );

  l4vec_next_test ( );
  l4vec_print_test ( );
  l4vec_uniform_new_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "L4LIB_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void i4_to_l4_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_TO_L4_TEST tests I4_TO_L4. 
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    24 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i4;
  bool l4;

  cout << "\n";
  cout << "I4_TO_L4_TEST\n";
  cout << "  I4_TO_L4 converts an I4 to an L4.\n";
  cout << "\n";
  cout << "  I4   L4\n";
  cout << "\n";

  for ( i4 = -5; i4 <= 5; i4++ )
  {
    l4 = i4_to_l4 ( i4 );
    cout << "  " << setw(2) << i4
         << "  " << l4 << "\n";
  }

  return;
}
//****************************************************************************80

void i4_to_l4vec_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_TO_L4VEC_TEST tests I4_TO_L4VEC. 
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    24 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i4;
  int j;
  int n = 8;
  bool *l4vec;

  cout << "\n";
  cout << "I4_TO_L4VEC_TEST\n";
  cout << "  I4_TO_L4VEC converts an I4 to an L4VEC.\n";
  cout << "\n";
  cout << "  I4   L4VEC\n";
  cout << "\n";

  for ( i4 = 0; i4 <= 10; i4++ )
  {
    l4vec = i4_to_l4vec ( i4, n );
    cout << "  " << setw(2) << i4;
    for ( j = 0; j < n; j++ )
    {
      cout << " " << l4vec[j];
    }
    cout << "\n";
    delete [] l4vec;
  }

  return;
}
//****************************************************************************80

void l4_to_i4_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    L4_TO_I4_TEST tests L4_TO_I4. 
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    24 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i4;
  bool l4;

  cout << "\n";
  cout << "L4_TO_I4_TEST\n";
  cout << "  L4_TO_I4 converts an L4 to an I4.\n";
  cout << "\n";
  cout << "  L4   I4\n";
  cout << "\n";

  l4 = 0;
  i4 = l4_to_i4 ( l4 );
  cout << "   " << l4
       << "  " << i4 << "\n";
  l4 = 1;
  i4 = l4_to_i4 ( l4 );
  cout << "   " << l4
       << "  " << i4 << "\n";

  return;
}
//****************************************************************************80

void l4_to_s_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    L4_TO_S_TEST tests L4_TO_S. 
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 August 2016
//
//  Author:
//
//    John Burkardt
//
{
  bool l4;
  string s;

  cout << "\n";
  cout << "L4_TO_S_TEST\n";
  cout << "  L4_TO_S converts an L4 to a string.\n";
  cout << "\n";
  cout << "  L4   S\n";
  cout << "\n";

  l4 = 1;
  s = l4_to_s ( l4 );
  cout << "   " << l4
       << "  \"" << s << "\"\n";

  l4 = 0;
  s = l4_to_s ( l4 );
  cout << "   " << l4
       << "  \"" << s << "\"\n";

  l4 = 1999;
  s = l4_to_s ( l4 );
  cout << "   " << l4
       << "  \"" << s << "\"\n";

  l4 = false;
  s = l4_to_s ( l4 );
  cout << "   " << l4
       << "  \"" << s << "\"\n";

  l4 = true;
  s = l4_to_s ( l4 );
  cout << "   " << l4
       << "  \"" << s << "\"\n";

  return;
}
//****************************************************************************80

void l4_uniform_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    L4_UNIFORM_TEST tests L4_UNIFORM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    01 December 2007
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int seed;

  seed = 123456789;

  cout << "\n";
  cout << "L4_UNIFORM_TEST\n";
  cout << "  L4_UNIFORM computes pseudorandom logical values.\n";
  cout << "\n";
  cout << "  The initial seed is " << seed << "\n";

  cout << "\n";
  for ( i = 1; i <= 10; i++ )
  {
   cout << "  " << setw(8) << i
        << "  " << setw(1) <<  l4_uniform ( seed ) << "\n";
  }

  return;
}
//****************************************************************************80

void l4_xor_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    L4_XOR_TEST tests L4_XOR. 
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    24 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int j;
  bool l1;
  bool l2;
  bool l4;

  cout << "\n";
  cout << "L4_XOR_TEST\n";
  cout << "  L4_XOR computes the exclusive OR of two L4's\n";
  cout << "\n";
  cout << "  L1  L2  L4_XOR(L1,L2)\n";
  cout << "\n";

  for ( j = 0; j <= 1; j++ )
  {
    l1 = ( j == 1 );
    for ( i = 0; i <= 1; i++ )
    {
      l2 = ( i == 1 );
      l4 = l4_xor ( l1, l2 );
      cout << "  " << l1 
           << "  " << l2 
           << "  " << l4 << "\n";
    }
  }

  return;
}
//****************************************************************************80

void l4mat_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    L4MAT_PRINT_TEST tests L4MAT_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    21 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  bool *a;
  int i;
  int j;
  int m = 20;
  int n = 50;

  a = new bool[m*n];

  cout << "\n";
  cout << "L4MAT_PRINT_TEST\n";
  cout << "  L4MAT_PRINT prints a logical matrix.\n";

  for ( i = 0; i < m; i++ )
  {
    for ( j = 0; j < n; j++ )
    {
      a[i+j*m] = ( ( i + 1 ) % ( j + 1 ) == 0 );
    }
  }

  l4mat_print ( m, n, a, "  A(I,J) = I+1 is divisible by J+1" );

  delete [] a;

  return;
}
//****************************************************************************80

void l4mat_print_some_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    L4MAT_PRINT_SOME_TEST tests L4MAT_PRINT_SOME.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  bool *a;
  int i;
  int j;
  int m = 20;
  int n = 50;

  a = new bool[m*n];

  cout << "\n";
  cout << "L4MAT_PRINT_SOME_TEST\n";
  cout << "  L4MAT_PRINT_SOME prints some of a logical matrix.\n";
  cout << "\n";
  cout << "  Here, our matrix is 20x50, but we print rows 4:14, columns 0:4\n";

  for ( i = 0; i < m; i++ )
  {
    for ( j = 0; j < n; j++ )
    {
      a[i+j*m] = ( ( i + 1 ) % ( j + 1 ) == 0 );
    }
  }

  l4mat_print_some ( m, n, a, 4, 0, 14, 4, "  A(I,J) = I+1 is divisible by J+1" );

  delete [] a;

  return;
}
//****************************************************************************80

void l4mat_transpose_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    L4MAT_TRANSPOSE_PRINT_TEST tests L4MAT_TRANSPOSE_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  bool *a;
  int i;
  int j;
  int m = 20;
  int n = 50;

  a = new bool[m*n];

  cout << "\n";
  cout << "L4MAT_TRANSPOSE_PRINT_TEST\n";
  cout << "  L4MAT_TRANSPOSE_PRINT prints a logical matrix, transposed.\n";

  for ( i = 0; i < m; i++ )
  {
    for ( j = 0; j < n; j++ )
    {
      a[i+j*m] = ( ( i + 1 ) % ( j + 1 ) == 0 );
    }
  }

  l4mat_transpose_print ( m, n, a, "  A(I,J) = I+1 is divisible by J+1" );

  delete [] a;

  return;
}
//****************************************************************************80

void l4mat_transpose_print_some_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    L4MAT_TRANSPOSE_PRINT_SOME_TEST tests L4MAT_TRANSPOSE_PRINT_SOME.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  bool *a;
  int i;
  int j;
  int m = 20;
  int n = 50;

  a = new bool[m*n];

  cout << "\n";
  cout << "L4MAT_TRANSPOSE_PRINT_SOME_TEST\n";
  cout << "  L4MAT_TRANSPOSE_PRINT_SOME prints some of a logical matrix, transposed.\n";
  cout << "\n";
  cout << "  Here, our matrix is 20x50, but we print rows 4:14, columns 0:4\n";

  for ( i = 0; i < m; i++ )
  {
    for ( j = 0; j < n; j++ )
    {
      a[i+j*m] = ( ( i + 1 ) % ( j + 1 ) == 0 );
    }
  }

  l4mat_transpose_print_some ( m, n, a, 4, 0, 14, 4, "  A(I,J) = I+1 is divisible by J+1" );

  delete [] a;

  return;
}
//****************************************************************************80

void l4mat_uniform_new_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    L4MAT_UNIFORM_NEW_TEST tests L4MAT_UNIFORM_NEW.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    23 December 2014
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  bool *l;
  int m = 5;
  int n = 4;
  int seed;

  seed = 123456789;

  cout << "\n";
  cout << "L4MAT_UNIFORM_NEW_TEST\n";
  cout << "  L4MAT_UNIFORM_NEW computes a vector of\n";
  cout << "  pseudorandom logical values.\n";
  cout << "\n";
  cout << "  The initial seed is " << seed << "\n";

  l = l4mat_uniform_new ( m, n, seed );

  l4mat_print ( m, n, l, "  Uniform L4MAT:" );

  delete [] l;

  return;
}
//****************************************************************************80

void l4vec_next_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    L4VEC_NEXT_TEST tests L4VEC_NEXT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    31 May 2015
//
//  Author:
//
//    John Burkardt
//
{
  bool done;
  int i;
  bool l4vec[3];
  int n = 3;

  cout << "\n";
  cout << "L4VEC_NEXT_TEST\n";
  cout << "  L4VEC_NEXT generates logical vectors in order.\n";
  cout << "\n";

  for ( i = 0; i < n; i++ )
  {
    l4vec[i] = false;
  }
 
  done = false;

  for ( ; ; )
  {
    cout << "  ";
    for ( i = 0; i < n; i++ )
    {
      cout << l4vec[i];
    }
    cout << "\n";

    if ( done )
    {
      break;
    }

    l4vec_next ( n, l4vec );

    done = true;
    for ( i = 0; i < n; i++ )
    {
      if ( ! l4vec[i] )
      {
        done = false;
      }
    }
  }
 
  return;
}
//****************************************************************************80

void l4vec_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    L4VEC_PRINT_TEST tests L4VEC_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    24 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int j;
  int n = 20;
  bool lvec[21];

  cout << "\n";
  cout << "L4VEC_PRINT_TEST\n";
  cout << "  L4VEC_PRINT prints an L4VEC.\n";
    
  lvec[0] = false;
  lvec[1] = false;

  for ( i = 2; i <= n; i++ )
  {
    lvec[i] = true;
    for ( j = 2; j < i; j++ )
    {
      if ( ( i % j ) == 0 )
      {
        lvec[i] = false;
        break;
      }
    }
  }

  l4vec_print ( n, lvec, "  Is I Prime?:" );

  return;
}
//****************************************************************************80

void l4vec_uniform_new_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    L4VEC_UNIFORM_NEW_TEST tests L4VEC_UNIFORM_NEW.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    01 December 2007
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  bool *l;
  int n = 10;
  int seed;

  seed = 123456789;

  cout << "\n";
  cout << "L4VEC_UNIFORM_NEW_TEST\n";
  cout << "  L4VEC_UNIFORM_NEW computes a vector of\n";
  cout << "  pseudorandom logical values.\n";
  cout << "\n";
  cout << "  The initial seed is " << seed << "\n";

  l = l4vec_uniform_new ( n, seed );

  l4vec_print ( n, l, "  Uniform L4VEC:" );

  delete [] l;

  return;
}
