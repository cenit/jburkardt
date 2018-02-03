# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8col.hpp"

int main ( );

void i4_log_10_test ( );
void i4_max_test ( );
void i4_min_test ( );
void i4_power_test ( );
void i4_uniform_ab_test ( );

void i4vec_indicator1_new_test ( );
void i4vec_print_test ( );
void i4vec_transpose_print_test ( );

void perm0_check_test ( );

void r8_max_test ( );
void r8_min_test ( );
void r8_uniform_ab_test ( );

void r8col_find_test ( );
void r8col_indicator_new_test ( );
void r8col_insert_test ( );
void r8col_max_test ( );
void r8col_mean_test ( );
void r8col_min_test ( );
void r8col_permute_test ( );
void r8col_print_test ( );
void r8col_print_some_test ( );
void r8col_sort_heap_a_test ( );
void r8col_sort_heap_index_a_test ( );
void r8col_sort_quick_a_test ( );
void r8col_sorted_tol_unique_test ( );
void r8col_sorted_unique_count_test ( );
void r8col_sorted_tol_undex_test ( );
void r8col_sortr_a_test ( );
void r8col_sum_test ( );
void r8col_swap_test ( );
void r8col_to_r8vec_test ( );
void r8col_tol_undex_test ( );
void r8col_transpose_print_test ( );
void r8col_transpose_print_some_test ( );
void r8col_undex_test ( );
void r8col_uniform_01_new_test ( );
void r8col_uniform_ab_new_test ( );
void r8col_unique_count_test ( );
void r8col_variance_test ( );

void r8vec_print_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for R8COL_PRB.
//
//  Discussion:
//
//    R8COL_PRB tests the R8COL library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    25 February 2016
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "R8COL_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the R8COL library.\n";

  i4_log_10_test ( );
  i4_max_test ( );
  i4_min_test ( );
  i4_power_test ( );
  i4_uniform_ab_test ( );

  i4vec_indicator1_new_test ( );
  i4vec_print_test ( );
  i4vec_transpose_print_test ( );

  perm0_check_test ( );

  r8_max_test ( );
  r8_min_test ( );
  r8_uniform_ab_test ( );

  r8col_find_test ( );
  r8col_indicator_new_test ( );
  r8col_insert_test ( );
  r8col_max_test ( );
  r8col_mean_test ( );
  r8col_min_test ( );
  r8col_permute_test ( );
  r8col_print_test ( );
  r8col_print_some_test ( );
  r8col_sort_heap_a_test ( );
  r8col_sort_heap_index_a_test ( );
  r8col_sort_quick_a_test ( );
  r8col_sorted_tol_unique_test ( );
  r8col_sorted_unique_count_test ( );
  r8col_sorted_tol_undex_test ( );
  r8col_sortr_a_test ( );
  r8col_sum_test ( );
  r8col_swap_test ( );
  r8col_to_r8vec_test ( );
  r8col_tol_undex_test ( );
  r8col_transpose_print_test ( );
  r8col_transpose_print_some_test ( );
  r8col_undex_test ( );
  r8col_uniform_01_new_test ( );
  r8col_uniform_ab_new_test ( );
  r8col_unique_count_test ( );
  r8col_variance_test ( );

  r8vec_print_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "R8COL_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void i4_log_10_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_LOG_10_TEST tests I4_LOG_10.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    16 October 2006
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int x[13] = { 0, 1, 2, 3, 9, 10, 11, 99, 101, -1, -2, -3, -9 };

  cout << "\n";
  cout << "I4_LOG_10_TEST\n";
  cout << "  I4_LOG_10: whole part of log base 10,\n";
  cout << "\n";
  cout << "     X     I4_LOG_10(X)\n";
  cout << "\n";

  for ( i = 0; i < 13; i++ )
  {
    cout                                 << "  "
         << setw(6) << x[i]              << "  "
         << setw(6) << i4_log_10 ( x[i] ) << "\n";
  }

  return;
}
//****************************************************************************80

void i4_max_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_MAX_TEST tests I4_MAX.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 March 2015
//
//  Author:
//
//    John Burkardt
//
{
  int a;
  int b;
  int c;
  int i;
  int i4_hi;
  int i4_lo;
  int seed;

  cout << "\n";
  cout << "I4_MAX_TEST\n";
  cout << "  I4_MAX returns the maximum of two I4's.\n";
  cout << "\n";
  cout << "       A       B      C=I4_MAX(A,B)\n";
  cout << "\n";

  i4_lo = -100;
  i4_hi = +100;
  seed = 123456789;

  for ( i = 0; i < 10; i++ )
  {
    a = i4_uniform_ab ( i4_lo, i4_hi, seed );
    b = i4_uniform_ab ( i4_lo, i4_hi, seed );
    c = i4_max ( a, b );
    cout << "  " << setw(8) << a
         << "  " << setw(8) << b
         << "  " << setw(8) << c << "\n";
  }

  return;
}
//****************************************************************************80

void i4_min_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_MIN_TEST tests I4_MIN.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 March 2015
//
//  Author:
//
//    John Burkardt
//
{
  int a;
  int b;
  int c;
  int i;
  int i4_hi;
  int i4_lo;
  int seed;

  cout << "\n";
  cout << "I4_MIN_TEST\n";
  cout << "  I4_MIN returns the minimum of two I4's.\n";
  cout << "\n";
  cout << "       A       B      C=I4_MIN(A,B)\n";
  cout << "\n";

  i4_lo = -100;
  i4_hi = +100;
  seed = 123456789;

  for ( i = 0; i < 10; i++ )
  {
    a = i4_uniform_ab ( i4_lo, i4_hi, seed );
    b = i4_uniform_ab ( i4_lo, i4_hi, seed );
    c = i4_min ( a, b );
    cout << "  " << setw(8) << a
         << "  " << setw(8) << b
         << "  " << setw(8) << c << "\n";
  }

  return;
}
//****************************************************************************80

void i4_power_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_POWER_TEST tests I4_POWER.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 January 2016
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int i_test[7] = { 0, 1, 2, 3, 10, -1, -2 };
  int j;
  int j_test[7] = { 1, 2, 3, 3, 3, 4, 5 };
  int test;
  int test_num;

  test_num = 7;

  cout << "\n";
  cout << "I4_POWER_TEST\n";
  cout << "  I4_POWER computes I^J\n";
  cout << "\n";
  cout << "         I       J  I4_POWER(I,J)\n";
  cout << "\n";

  for ( test = 0; test < test_num; test++ )
  {
    i = i_test[test];
    j = j_test[test];
    cout << "  " << setw(8) << i
         << "  " << setw(8) << j
         << "  " << setw(8) << i4_power ( i, j ) << "\n";
  }

  return;
}
//****************************************************************************80

void i4_uniform_ab_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_UNIFORM_AB_TEST tests I4_UNIFORM_AB.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    27 October 2014
//
//  Author:
//
//    John Burkardt
//
{
  int a = -100;
  int b = 200;
  int i;
  int j;
  int seed = 123456789;

  cout << "\n";
  cout << "I4_UNIFORM_AB_TEST\n";
  cout << "  I4_UNIFORM_AB computes pseudorandom values\n";
  cout << "  in an interval [A,B].\n";

  cout << "\n";
  cout << "  The lower endpoint A = " << a << "\n";
  cout << "  The upper endpoint B = " << b << "\n";
  cout << "  The initial seed is " << seed << "\n";
  cout << "\n";

  for ( i = 1; i <= 20; i++ )
  {
    j = i4_uniform_ab ( a, b, seed );

    cout << "  " << setw(8) << i
         << "  " << setw(8) << j << "\n";
  }

  return;
}
//****************************************************************************80

void i4vec_indicator1_new_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_INDICATOR1_NEW_TEST tests I4VEC_INDICATOR1_NEW;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    26 May 2015
//
//  Author:
//
//    John Burkardt
//
{
  int *a;
  int n;

  cout << "\n";
  cout << "I4VEC_INDICATOR1_NEW_TEST\n";
  cout << "  I4VEC_INDICATOR1_NEW returns an indicator vector;\n";

  n = 10;
  a = i4vec_indicator1_new ( n );

  i4vec_print ( n, a, "  The indicator1 vector:" );

  delete [] a;

  return;
}
//****************************************************************************80

void i4vec_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_PRINT_TEST tests I4VEC_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    31 October 2014
//
//  Author:
//
//    John Burkardt
//
{
  int n = 4;
  int v[4] = { 91, 92, 93, 94 };

  cout << "\n";
  cout << "I4VEC_PRINT_TEST\n";
  cout << "  I4VEC_PRINT prints an I4VEC\n";

  i4vec_print ( n, v, "  Here is the I4VEC:" );

  return;
}
//****************************************************************************80

void i4vec_transpose_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_TRANSPOSE_PRINT_TEST tests I4VEC_TRANSPOSE_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    17 October 2006
//
//  Author:
//
//    John Burkardt
//
{
  int *a;
  int n;

  cout << "\n";
  cout << "I4VEC_TRANSPOSE_PRINT_TEST\n";
  cout << "  I4VEC_TRANSPOSE_PRINT prints an integer vector\n";
  cout << "  with 5 entries to a row, and an optional title.\n";

  n = 12;
  a = i4vec_indicator1_new ( n );

  i4vec_print ( n, a, "  Output from I4VEC_PRINT:" );

  cout << "\n";
  cout << "  Now call I4VEC_TRANSPOSE_PRINT with a short title:\n";
  cout << "\n";

  i4vec_transpose_print ( n, a, "  My array:  " );

  cout << "\n";
  cout << "  Now call I4VEC_TRANSPOSE_PRINT with no title:\n";
  cout << "\n";

  i4vec_transpose_print ( n, a, " " );

  delete [] a;

  return;
}
//****************************************************************************80

void perm0_check_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    PERM0_CHECK_TEST tests PERM0_CHECK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    24 May 2015
//
//  Author:
//
//    John Burkardt
//
{
  bool check;
  int n = 5;
  int p1[5] = { 5, 2, 3, 4, 1 };
  int p2[5] = { 4, 1, 3, 0, 2 };
  int p3[5] = { 0, 2, 1, 3, 2 };

  cout << "\n";
  cout << "PERM0_CHECK_TEST\n";
  cout << "  PERM0_CHECK checks a permutation of 0, ..., N-1.\n";
  cout << "\n";

  i4vec_transpose_print ( n, p1, "  Permutation 1:" );
  check = perm0_check( n, p1 );

  i4vec_transpose_print ( n, p2, "  Permutation 2:" );
  check = perm0_check( n, p2 );

  i4vec_transpose_print ( n, p3, "  Permutation 3:" );
  check = perm0_check( n, p3 );

  return;
}
//****************************************************************************80

void r8_max_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_MAX_TEST tests R8_MAX.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 March 2015
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double c;
  int i;
  double r8_hi;
  double r8_lo;
  int seed;

  cout << "\n";
  cout << "R8_MAX_TEST\n";
  cout << "  R8_MAX returns the maximum of two R8's.\n";
  cout << "\n";
  cout << "       A       B      C=R8_MAX(A,B)\n";
  cout << "\n";

  r8_lo = -5.0;
  r8_hi = +5.0;
  seed = 123456789;

  for ( i = 0; i < 10; i++ )
  {
    a = r8_uniform_ab ( r8_lo, r8_hi, seed );
    b = r8_uniform_ab ( r8_lo, r8_hi, seed );
    c = r8_max ( a, b );
    cout << "  " << setw(8) << a
         << "  " << setw(8) << b
         << "  " << setw(8) << c << "\n";
  }

  return;
# undef N
}
//****************************************************************************80

void r8_min_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_MIN_TEST tests R8_MIN.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 March 2015
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double c;
  int i;
  double r8_hi;
  double r8_lo;
  int seed;

  cout << "\n";
  cout << "R8_MIN_TEST\n";
  cout << "  R8_MIN returns the minimum of two R8's.\n";
  cout << "\n";
  cout << "       A       B      C=R8_MIN(A,B)\n";
  cout << "\n";

  r8_lo = -5.0;
  r8_hi = +5.0;
  seed = 123456789;

  for ( i = 0; i < 10; i++ )
  {
    a = r8_uniform_ab ( r8_lo, r8_hi, seed );
    b = r8_uniform_ab ( r8_lo, r8_hi, seed );
    c = r8_min ( a, b );
    cout << "  " << setw(8) << a
         << "  " << setw(8) << b
         << "  " << setw(8) << c << "\n";
  }

  return;
# undef N
}
//****************************************************************************80

void r8_uniform_ab_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_UNIFORM_AB_TEST tests R8_UNIFORM_AB.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 April 2007
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double c;
  int i;
  int seed;

  b = 10.0;
  c = 25.0;
  seed = 17;

  cout << "\n";
  cout << "R8_UNIFORM_AB_TEST\n";
  cout << "  R8_UNIFORM_AB produces a random real in a given range.\n";
  cout << "\n";
  cout << "  Using range " << b << " <= A <= " << c << ".\n";
  cout << "\n";

  cout << "\n";
  cout << "      I       A\n";
  cout << "\n";
  for ( i = 0; i < 10; i++ )
  {
    a = r8_uniform_ab ( b, c, seed );
    cout << setw ( 6 )  << i << " "
         << setw ( 10 ) << a << "\n";
  }

  return;
}
//****************************************************************************80

void r8col_find_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_FIND_TEST tests R8COL_FIND.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    14 September 2005
//
//  Author:
//
//    John Burkardt
//
{
# define M 3
# define N 4

  int col;
  double dtab[M*N];
  double r8vec[M];
  int i;
  int j;
  int k;

  k = 1;

  for ( i = 0; i < M; i++ )
  {
    for ( j = 0; j < N; j++ )
    {
      dtab[i+j*M] = ( double ) k;
      if ( j == 2 )
      {
        r8vec[i] = ( double ) k;
      }
      k = k + 1;
    }
  }

  col = r8col_find ( M, N, dtab, r8vec );

  cout << "\n";
  cout << "R8COL_FIND_TEST\n";
  cout << "  R8COL_FIND finds a column in a table matching\n";
  cout << "  a given set of data.\n";
  cout << "\n";
  cout << "  R8COL_FIND returns COL = " << col << "\n";

  return;
# undef M
# undef N
}
//****************************************************************************80

void r8col_indicator_new_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_INDICATOR_NEW_TEST tests R8COL_INDICATOR_NEW.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 December 2014
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int m = 5;
  int n = 4;

  cout << "\n";
  cout << "R8COL_INDICATOR_NEW_TEST\n";
  cout << "  R8COL_INDICATOR_NEW returns an indicator matrix.\n";

  a = r8col_indicator_new ( m, n );

  r8col_print ( m, n, a, "  The indicator matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8col_insert_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_INSERT_TEST tests R8COL_INSERT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    16 September 2005
//
//  Author:
//
//    John Burkardt
//
{
# define M 3
# define N_MAX 10

  double a[M*N_MAX] = {
    2.0,  6.0, 10.0,
    4.0,  8.0, 12.0,
    1.0,  5.0,  9.0,
    3.0,  7.0, 11.0,
    0.0,  0.0,  0.0,
    0.0,  0.0,  0.0,
    0.0,  0.0,  0.0,
    0.0,  0.0,  0.0,
    0.0,  0.0,  0.0,
    0.0,  0.0,  0.0 };
  int col;
  double r8vec1[M] = { 3.0, 7.0, 11.0 };
  double r8vec2[M] = { 3.0, 4.0, 18.0 };
  int n;

  cout << "\n";
  cout << "R8COL_INSERT_TEST\n";
  cout << "  R8COL_INSERT inserts new columns into a sorted R8COL.\n";

  n = 4;

  r8col_print ( M, n, a, "  The unsorted matrix:" );

  r8col_sort_heap_a ( M, n, a );

  r8col_print ( M, n, a, "  The sorted matrix:" );

  r8vec_print ( M, r8vec1, "  New column:" );

  col = r8col_insert ( N_MAX, M, n, a, r8vec1 );

  if ( col < 0 )
  {
    cout << "\n";
    cout << "  The data was already in column " << abs ( col ) << "\n";
  }
  else
  {
    r8col_print ( M, n, a, "  The updated matrix:" );
  }

  r8vec_print ( M, r8vec2, "  New column:" );

  col = r8col_insert ( N_MAX, M, n, a, r8vec2 );

  if ( col < 0 )
  {
    cout << "\n";
    cout << "  The data was already in column " << abs ( col ) << "\n";
  }
  else
  {
    r8col_print ( M, n, a, "  The updated matrix:" );
  }

  return;
# undef M
# undef N_MAX
}
//****************************************************************************80

void r8col_max_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_MAX_TEST tests R8COL_MAX;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    16 September 2005
//
//  Author:
//
//    John Burkardt
//
{
# define M 3
# define N 4

  double a[M*N];
  double *amax;
  int i;
  int j;
  int k;

  cout << "\n";
  cout << "R8COL_MAX_TEST\n";
  cout << "  R8COL_MAX computes maximums of an R8COL;\n";

  k = 0;
  for ( i = 0; i < M; i++ )
  {
    for ( j = 0; j < N; j++ )
    {
      k = k + 1;
      a[i+j*M] = ( double ) k;
    }
  }

  r8col_print ( M, N, a, "  The array:" );

  amax = r8col_max ( M, N, a );

  r8vec_print ( N, amax, "  Column maximums:" );

  delete [] amax;

  return;
# undef M
# undef N
}
//****************************************************************************80

void r8col_mean_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_MEAN_TEST tests R8COL_MEAN;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    16 September 2005
//
//  Author:
//
//    John Burkardt
//
{
# define M 3
# define N 4

  double a[M*N];
  double *colsum;
  int i;
  int j;
  int k;
  double *mean;

  cout << "\n";
  cout << "R8COL_MEAN_TEST\n";
  cout << "  R8COL_MEAN computes means of an R8COL;\n";

  k = 0;
  for ( i = 0; i < M; i++ )
  {
    for ( j = 0; j < N; j++ )
    {
      k = k + 1;
      a[i+j*M] = ( double ) k;
    }
  }

  r8col_print ( M, N, a, "  The array:" );

  mean = r8col_mean ( M, N, a );

  r8vec_print ( N, mean, "  The column means:" );

  delete [] mean;

  return;
# undef M
# undef N
}
//****************************************************************************80

void r8col_min_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_MIN_TEST tests R8COL_MIN;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    16 September 2005
//
//  Author:
//
//    John Burkardt
//
{
# define M 3
# define N 4

  double a[M*N];
  double *amin;
  int i;
  int j;
  int k;

  cout << "\n";
  cout << "R8COL_MIN_TEST\n";
  cout << "  R8COL_MIN computes minimums of an R8COL;\n";

  k = 0;
  for ( i = 0; i < M; i++ )
  {
    for ( j = 0; j < N; j++ )
    {
      k = k + 1;
      a[i+j*M] = ( double ) k;
    }
  }

  r8col_print ( M, N, a, "  The array:" );

  amin = r8col_min ( M, N, a );

  r8vec_print ( N, amin, "  Column minimums:" );

  delete [] amin;

  return;
# undef M
# undef N
}
//****************************************************************************80

void r8col_permute_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_PERMUTE_TEST tests R8COL_PERMUTE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 December 2006
//
//  Author:
//
//    John Burkardt
//
{
# define M 3
# define N 5

  double a[M*N] = {
    11.0, 21.0, 31.0,
    12.0, 22.0, 32.0,
    13.0, 23.0, 33.0,
    14.0, 24.0, 34.0,
    15.0, 25.0, 35.0 };
  int perm[N] = { 1, 3, 4, 0, 2 };


  cout << "\n";
  cout << "R8COL_PERMUTE_TEST\n";
  cout << "  R8COL_PERMUTE permutes an R8COL in place.\n";

  r8col_print ( M, N, a, "  A (unpermuted):" );

  i4vec_print ( N, perm, "  The (column) permutation vector:" );

  r8col_permute ( M, N, perm, a );

  r8col_print ( M, N, a, "  A (permuted):" );

  return;
# undef M
# undef N
}
//****************************************************************************80

void r8col_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_PRINT_TEST tests R8COL_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    31 August 2014
//
//  Author:
//
//    John Burkardt
//
{
# define M 6
# define N 4

  double a[M*N];
  int i;
  int j;
  int m = M;
  int n = N;

  cout << "\n";
  cout << "R8COL_PRINT_TEST\n";
  cout << "  R8COL_PRINT prints an R8COL.\n";

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < m; i++ )
    {
      a[i+j*m] = ( double ) ( ( i + 1 ) * 10 + ( j + 1 ) );
    }
  }
  r8col_print ( m, n, a, "  The R8COL:" );

  return;
# undef M
# undef N
}
//****************************************************************************80

void r8col_print_some_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_PRINT_SOME_TEST tests R8COL_PRINT_SOME.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    31 August 2014
//
//  Author:
//
//    John Burkardt
//
{
# define M 6
# define N 4

  double a[M*N];
  int i;
  int j;
  int m = M;
  int n = N;

  cout << "\n";
  cout << "R8COL_PRINT_SOME_TEST\n";
  cout << "  R8COL_PRINT_SOME prints some of an R8COL.\n";

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < m; i++ )
    {
      a[i+j*m] = ( double ) ( ( i + 1 ) * 10 + ( j + 1 ) );
    }
  }
  r8col_print_some ( m, n, a, 2, 1, 4, 2, "  The R8COL, rows 2:4, cols 1:2:" );

  return;
# undef M
# undef N
}
//****************************************************************************80

void r8col_sort_heap_a_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_SORT_HEAP_A_TEST tests R8COL_SORT_HEAP_A.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    16 September 2005
//
//  Author:
//
//    John Burkardt
//
{
# define M 3
# define N_MAX 10

  double a[M*N_MAX] = {
    2.0,  6.0, 10.0,
    4.0,  8.0, 12.0,
    1.0,  5.0,  9.0,
    3.0,  7.0, 11.0,
    0.0,  0.0,  0.0,
    0.0,  0.0,  0.0,
    0.0,  0.0,  0.0,
    0.0,  0.0,  0.0,
    0.0,  0.0,  0.0,
    0.0,  0.0,  0.0 };
  int col;
  double r8vec1[M] = { 3.0, 7.0, 11.0 };
  double r8vec2[M] = { 3.0, 4.0, 18.0 };
  int n;

  cout << "\n";
  cout << "R8COL_SORT_HEAP_A_TEST\n";
  cout << "  R8COL_SORT_HEAP_A ascending heap sorts a table of columns.\n";

  n = 4;

  r8col_print ( M, n, a, "  The unsorted matrix:" );

  r8col_sort_heap_a ( M, n, a );

  r8col_print ( M, n, a, "  The sorted matrix:" );

  return;
# undef M
# undef N_MAX
}
//****************************************************************************80

void r8col_sort_heap_index_a_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_SORT_HEAP_INDEX_A_TEST tests R8COL_SORT_HEAP_INDEX_A.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 November 2008
//
//  Author:
//
//    John Burkardt
//
{
# define M 3
# define N 15

  double a[M*N] = {
    2.0,  6.0, 10.0,
    4.0,  8.0, 12.0,
    1.0,  5.0,  9.0,
    3.0,  7.0, 11.0,
    2.0,  6.0,  0.0,
    3.0,  4.0, 18.0,
    0.0,  0.0,  0.0,
    0.0,  6.0, 10.0,
    2.0,  6.0, 10.0,
    3.0,  7.0, 11.0,
    2.0,  0.0, 10.0,
    2.0,  6.0, 10.0,
    1.0,  5.0,  9.0,
    1.0,  5.0,  9.1,
    1.0,  5.1,  9.0 };
  int i;
  int *indx;
  int j;
  int j2;
  int m = M;
  int n = N;

  cout << "\n";
  cout << "R8COL_SORT_HEAP_INDEX_A_TEST\n";
  cout << "  R8COL_SORT_HEAP_INDEX_A computes an index vector which\n";
  cout << "  ascending sorts an R8COL.\n";

  r8col_transpose_print ( m, n, a, "  The unsorted R8COL (transposed):" );

  indx = r8col_sort_heap_index_a ( m, n, a );

  cout << "\n";
  cout << "  The implicitly sorted R8COL (transposed)\n";
  cout << "\n";

  for ( j = 0; j < n; j++ )
  {
    j2 = indx[j];
    cout << "  " << setw(4) << j2 << ":";
    for ( i = 0; i < m; i++ )
    {
      cout << "  " << setw(10) << a[i+j2*m];
    }
    cout << "\n";
  }

  return;
# undef M
# undef N
}
//****************************************************************************80

void r8col_sort_quick_a_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_SORT_QUICK_A_TEST tests R8COL_SORT_QUICK_A.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 October 2005
//
//  Author:
//
//    John Burkardt
//
{
# define M 3
# define N 10

  double *a;
  double b = 0.0;
  double c = 10.0;
  int seed;

  cout << "\n";
  cout << "R8COL_SORT_QUICK_A_TEST\n";
  cout << "  R8COL_SORT_QUICK_A sorts a table of columns.\n";

  seed = 123456789;

  a = r8col_uniform_ab_new ( M, N, b, c, seed );

  r8col_print ( M, N, a, "  The unsorted matrix:" );

  r8col_sort_quick_a ( M, N, a );

  r8col_print ( M, N, a, "  The sorted matrix:" );

  delete [] a;

  return;
# undef M
# undef N
}
//****************************************************************************80

void r8col_sorted_tol_unique_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_SORTED_TOL_UNIQUE_TEST tests R8COL_SORTED_TOL_UNIQUE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    16 July 2010
//
//  Author:
//
//    John Burkardt
//
{
# define M 3
# define N 22

  double a[M*N] = {
    1.9,  0.0, 10.0,
    2.0,  6.0, 10.0,
    4.0,  8.0, 12.0,
    1.0,  5.0,  9.0,
    3.0,  7.0, 11.0,
    2.0,  6.0,  0.0,
    2.0,  0.0, 10.1,
    2.0,  0.1, 10.0,
    3.0,  4.0, 18.0,
    1.9,  8.0, 10.0,
    0.0,  0.0,  0.0,
    0.0,  6.0, 10.0,
    2.1,  0.0, 10.0,
    2.0,  6.0, 10.0,
    3.0,  7.0, 11.0,
    2.0,  0.0, 10.0,
    2.0,  0.0, 10.0,
    2.0,  6.0, 10.0,
    1.0,  5.0,  9.0,
    2.0,  0.0, 10.1,
    1.0,  5.0,  9.1,
    1.0,  5.1,  9.0 };
  int m = M;
  int n = N;
  double tol;
  int unique_num;

  cout << "\n";
  cout << "R8COL_SORTED_TOL_UNIQUE_TEST\n";
  cout << "  R8COL_SORTED_TOL_UNIQUE finds tolerably unique columns \n";
  cout << "  in a sorted R8COL.\n";

  r8col_transpose_print ( m, n, a, "  The unsorted R8COL (transposed):" );

  r8col_sort_heap_a ( m, n, a );

  r8col_transpose_print ( m, n, a, "  The sorted R8COL (transposed):" );

  tol = 0.25;

  cout << "\n";
  cout << "  Using tolerance = " << tol << "\n";

  unique_num = r8col_sorted_tol_unique ( m, n, a, tol );

  cout << "\n";
  cout << "  Number of tolerably unique columns is " << unique_num << "\n";

  r8col_transpose_print ( m, unique_num, a,
    "  The sorted tolerably unique R8COL (transposed):" );

  return;
# undef M
# undef N
}
//****************************************************************************80

void r8col_sorted_unique_count_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_SORTED_UNIQUE_COUNT_TEST tests R8COL_SORTED_UNIQUE_COUNT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    16 July 2010
//
//  Author:
//
//    John Burkardt
//
{
# define M 3
# define N 22

  double a[M*N] = {
    1.9,  0.0, 10.0,
    2.0,  6.0, 10.0,
    4.0,  8.0, 12.0,
    1.0,  5.0,  9.0,
    3.0,  7.0, 11.0,
    2.0,  6.0,  0.0,
    2.0,  0.0, 10.1,
    2.0,  0.1, 10.0,
    3.0,  4.0, 18.0,
    1.9,  8.0, 10.0,
    0.0,  0.0,  0.0,
    0.0,  6.0, 10.0,
    2.1,  0.0, 10.0,
    2.0,  6.0, 10.0,
    3.0,  7.0, 11.0,
    2.0,  0.0, 10.0,
    2.0,  0.0, 10.0,
    2.0,  6.0, 10.0,
    1.0,  5.0,  9.0,
    2.0,  0.0, 10.1,
    1.0,  5.0,  9.1,
    1.0,  5.1,  9.0 };
  int m = M;
  int n = N;
  double tol;
  int unique_num;

  cout << "\n";
  cout << "R8COL_SORTED_UNIQUE_COUNT_TEST\n";
  cout << "  R8COL_SORTED_UNIQUE_COUNT counts tolerably unique columns \n";
  cout << "  in a sorted R8COL.\n";

  r8col_transpose_print ( m, n, a, "  The unsorted R8COL (transposed):" );

  r8col_sort_heap_a ( m, n, a );

  r8col_transpose_print ( m, n, a, "  The sorted R8COL (transposed):" );

  tol = 0.25;

  cout << "\n";
  cout << "  Using tolerance = " << tol << "\n";

  unique_num = r8col_sorted_tol_unique_count ( m, n, a, tol );

  cout << "\n";
  cout << "  Number of tolerably unique columns is " << unique_num << "\n";

  return;
# undef M
# undef N
}
//****************************************************************************80

void r8col_sorted_tol_undex_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_SORTED_TOL_UNDEX_TEST tests R8COL_SORTED_TOL_UNDEX.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    17 July 2010
//
//  Author:
//
//    John Burkardt
//
{
# define M 3
# define N 22

  double a[M*N] = {
    1.9,  0.0, 10.0,
    2.0,  6.0, 10.0,
    4.0,  8.0, 12.0,
    1.0,  5.0,  9.0,
    3.0,  7.0, 11.0,
    2.0,  6.0,  0.0,
    2.0,  0.0, 10.1,
    2.0,  0.1, 10.0,
    3.0,  4.0, 18.0,
    1.9,  8.0, 10.0,
    0.0,  0.0,  0.0,
    0.0,  6.0, 10.0,
    2.1,  0.0, 10.0,
    2.0,  6.0, 10.0,
    3.0,  7.0, 11.0,
    2.0,  0.0, 10.0,
    2.0,  0.0, 10.0,
    2.0,  6.0, 10.0,
    1.0,  5.0,  9.0,
    2.0,  0.0, 10.1,
    1.0,  5.0,  9.1,
    1.0,  5.1,  9.0 };
  double *au;
  int i;
  int j;
  int j2;
  int m = M;
  int n = N;
  int n_unique;
  double tol;
  int *undx;
  int unique_num;
  int *xdnu;

  cout << "\n";
  cout << "R8COL_SORTED_TOL_UNDEX_TEST\n";
  cout << "  R8COL_SORTED_TOL_UNDEX produces index vectors which create a sorted\n";
  cout << "  list of the tolerably unique columns of a sorted R8COL,\n";
  cout << "  and a map from the original R8COL to the (implicit)\n";
  cout << "  R8COL of sorted tolerably unique elements.\n";

  r8col_transpose_print ( m, n, a, "  The unsorted R8COL (transposed):" );

  r8col_sort_heap_a ( m, n, a );

  r8col_transpose_print ( m, n, a, "  The sorted R8COL (transposed):" );

  tol = 0.25;

  cout << "\n";
  cout << "  Using tolerance = " << tol << "\n";

  n_unique = r8col_sorted_tol_unique_count ( m, n, a, tol );

  cout << "\n";
  cout << "  Number of tolerably unique columns is " << n_unique << "\n";

  au = new double[m*n_unique];
  undx = new int[n_unique];
  xdnu = new int[n];

  r8col_sorted_tol_undex ( m, n, a, n_unique, tol, undx, xdnu );

  cout << "\n";
  cout << "  XDNU points to the representative for each item.\n";
  cout << "  UNDX selects the representatives.\n";
  cout << "\n";
  cout << "     I  XDNU  UNDX\n";
  cout << "\n";
  for ( i = 0; i < n_unique; i++ )
  {
    cout << "  " << setw(4) << i
         << "  " << setw(4) << xdnu[i]
         << "  " << setw(4) << undx[i] << "\n";
  }
  for ( i = n_unique; i < n; i++ )
  {
    cout << "  " << setw(4) << i
         << "  " << setw(4) << xdnu[i] << "\n";
  }
  for ( j = 0; j < n_unique; j++ )
  {
    for ( i = 0; i < m; i++ )
    {
      au[i+j*m] = a[i+undx[j]*m];
    }
  }

  r8col_transpose_print ( m, n_unique, au,
    "  The tolerably unique R8COL (transposed):" );

  delete [] au;
  delete [] undx;
  delete [] xdnu;

  return;
# undef M
# undef N
}
//****************************************************************************80

void r8col_sortr_a_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_SORTR_A_TEST tests R8COL_SORTR_A.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 October 2005
//
//  Author:
//
//    John Burkardt
//
{
# define M 10
# define N 3

  double *a;
  double b = 0.0;
  double c = 10.0;
  int key;
  int seed;

  cout << "\n";
  cout << "R8COL_SORTR_A_TEST\n";
  cout << "  R8COL_SORTR_A is given an array, and reorders\n";
  cout << "  it so that a particular column is sorted.\n";

  key = 2;
  cout << "\n";
  cout << "  Here, the special column is " << key << "\n";

  seed = 123456789;

  a = r8col_uniform_ab_new ( M, N, b, c, seed );

  r8col_print ( M, N, a, "  Unsorted array:" );

  r8col_sortr_a ( M, N, a, key );

  r8col_print ( M, N, a, "  Sorted array:" );

  delete [] a;

  return;
# undef M
# undef N
}
//****************************************************************************80

void r8col_sum_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_SUM_TEST tests R8COL_SUM;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    16 September 2005
//
//  Author:
//
//    John Burkardt
//
{
# define M 3
# define N 4

  double a[M*N];
  double *colsum;
  int i;
  int j;
  int k;

  cout << "\n";
  cout << "R8COL_SUM_TEST\n";
  cout << "  R8COL_SUM computes sums of an R8COL;\n";

  k = 0;
  for ( i = 0; i < M; i++ )
  {
    for ( j = 0; j < N; j++ )
    {
      k = k + 1;
      a[i+j*M] = ( double ) k;
    }
  }

  r8col_print ( M, N, a, "  The array:" );

  colsum = r8col_sum ( M, N, a );

  r8vec_print ( N, colsum, "  The column sums" );

  delete [] colsum;

  return;
# undef M
# undef N
}
//****************************************************************************80

void r8col_swap_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_SWAP_TEST tests R8COL_SWAP;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    05 December 2014
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int icol1;
  int icol2;
  int m = 3;
  int n = 4;

  cout << "\n";
  cout << "R8COL_SWAP_TEST\n";
  cout << "  R8COL_SWAP swaps two columns of an R8COL;\n";

  a = r8col_indicator_new ( m, n );

  r8col_print ( m, n, a, "  The array:" );

  icol1 = 1;
  icol2 = 3;

  cout << "\n";
  cout << "  Swap columns " << icol1 << " and " << icol2 << ":\n";

  r8col_swap ( m, n, a, icol1, icol2 );

  r8col_print ( m, n, a, "  The updated matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8col_to_r8vec_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_TO_R8VEC_TEST tests R8COL_TO_R8VEC.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    22 October 2005
//
//  Author:
//
//    John Burkardt
//
{
# define M 3
# define N 4

  double a[M*N];
  int i;
  int j;
  double *x;

  cout << "\n";
  cout << "R8COL_TO_R8VEC_TEST\n";
  cout << "  R8COL_TO_R8VEC converts an array of columns to a vector.\n";
  cout << "\n";

  for ( i = 0; i < M; i++ )
  {
    for ( j = 0; j < N; j++ )
    {
      a[i+j*M] = ( double ) ( 10 * i + j );
    }
  }

  r8col_print ( M, N, a, "  The array of columns:" );

  x = r8col_to_r8vec ( M, N, a );

  r8vec_print ( M*N, x, "  The resulting vector of columns:" );

  delete [] x;

  return;
# undef M
# undef N
}
//****************************************************************************80

void r8col_tol_undex_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_TOL_UNDEX_TEST tests R8COL_TOL_UNDEX.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    19 July 2010
//
//  Author:
//
//    John Burkardt
//
{
# define M 3
# define N 22

  double a[M*N] = {
    1.9,  0.0, 10.0,
    2.0,  6.0, 10.0,
    4.0,  8.0, 12.0,
    1.0,  5.0,  9.0,
    3.0,  7.0, 11.0,
    2.0,  6.0,  0.0,
    2.0,  0.0, 10.1,
    2.0,  0.1, 10.0,
    3.0,  4.0, 18.0,
    1.9,  8.0, 10.0,
    0.0,  0.0,  0.0,
    0.0,  6.0, 10.0,
    2.1,  0.0, 10.0,
    2.0,  6.0, 10.0,
    3.0,  7.0, 11.0,
    2.0,  0.0, 10.0,
    2.0,  0.0, 10.0,
    2.0,  6.0, 10.0,
    1.0,  5.0,  9.0,
    2.0,  0.0, 10.1,
    1.0,  5.0,  9.1,
    1.0,  5.1,  9.0 };
  double *au;
  int i;
  int j;
  int j2;
  int m = M;
  int n = N;
  int n_unique;
  double tol;
  int *undx;
  int unique_num;
  int *xdnu;

  cout << "\n";
  cout << "R8COL_TOL_UNDEX_TEST\n";
  cout << "  R8COL_TOL_UNDEX produces index vectors which create a sorted\n";
  cout << "  list of the tolerably unique columns of an R8COL,\n";
  cout << "  and a map from the original R8COL to the (implicit)\n";
  cout << "  R8COL of sorted tolerably unique elements.\n";

  r8col_transpose_print ( m, n, a, "  The unsorted R8COL (transposed):" );

  tol = 0.25;

  cout << "\n";
  cout << "  Using tolerance = " << tol << "\n";

  n_unique = r8col_tol_unique_count ( m, n, a, tol );

  cout << "\n";
  cout << "  Number of tolerably unique columns is " << n_unique << "\n";

  au = new double[m*n_unique];
  undx = new int[n_unique];
  xdnu = new int[n];

  r8col_tol_undex ( m, n, a, n_unique, tol, undx, xdnu );

  cout << "\n";
  cout << "  XDNU points to the representative for each item.\n";
  cout << "  UNDX selects the representatives.\n";
  cout << "\n";
  cout << "     I  XDNU  UNDX\n";
  cout << "\n";
  for ( i = 0; i < n_unique; i++ )
  {
    cout << "  " << setw(4) << i
         << "  " << setw(4) << xdnu[i]
         << "  " << setw(4) << undx[i] << "\n";
  }
  for ( i = n_unique; i < n; i++ )
  {
    cout << "  " << setw(4) << i
         << "  " << setw(4) << xdnu[i] << "\n";
  }

  for ( j = 0; j < n_unique; j++ )
  {
    for ( i = 0; i < m; i++ )
    {
      au[i+j*m] = a[i+undx[j]*m];
    }
  }

  r8col_transpose_print ( m, n_unique, au,
    "  The tolerably unique R8COL (transposed):" );

  delete [] au;
  delete [] undx;
  delete [] xdnu;

  return;
# undef M
# undef N
}
//****************************************************************************80

void r8col_transpose_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_TRANSPOSE_PRINT_TEST tests R8COL_TRANSPOSE_PRINT;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    05 September 2005
//
//  Author:
//
//    John Burkardt
//
{
# define M 7
# define N 12

  double a[M*N];
  int i;
  int j;

  cout << "\n";
  cout << "R8COL_TRANSPOSE_PRINT_TEST\n";
  cout << "  R8COL_TRANSPOSE_PRINT prints an R8MAT,\n";
  cout << "  transposed.\n";
  cout << "\n";
  cout << "  Matrix row order M =    " << M << "\n";
  cout << "  Matrix column order N = " << N << "\n";
//
//  Set the matrix.
//
  for ( i = 1; i <= M; i++ )
  {
    for ( j = 1; j <= N; j++ )
    {
      a[i-1+(j-1)*M] = ( double ) ( i * 100 + j );
    }
  }

  r8col_transpose_print ( M, N, a, "  The transposed matrix A:" );

  return;
# undef M
# undef N
}
//****************************************************************************80

void r8col_transpose_print_some_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_TRANSPOSE_PRINT_SOME_TEST tests R8COL_TRANSPOSE_PRINT_SOME;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 February 2016
//
//  Author:
//
//    John Burkardt
//
{
# define M 7
# define N 12

  double a[M*N];
  int i;
  int j;

  cout << "\n";
  cout << "R8COL_TRANSPOSE_PRINT_SOME_TEST\n";
  cout << "  R8COL_TRANSPOSE_PRINT_SOME prints some of an R8MAT,\n";
  cout << "  transposed.\n";
  cout << "\n";
  cout << "  Matrix row order M =    " << M << "\n";
  cout << "  Matrix column order N = " << N << "\n";
//
//  Set the matrix.
//
  for ( i = 1; i <= M; i++ )
  {
    for ( j = 1; j <= N; j++ )
    {
      a[i-1+(j-1)*M] = ( double ) ( i * 100 + j );
    }
  }

  r8col_transpose_print_some ( M, N, a, 3, 4, 5, 8, "  Rows 3:5, Cols 4:8:" );

  return;
# undef M
# undef N
}
//****************************************************************************80

void r8col_undex_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_UNDEX_TEST tests R8COL_UNDEX.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    19 July 2010
//
//  Author:
//
//    John Burkardt
//
{
# define M 3
# define N 22

  double a[M*N] = {
    1.9,  0.0, 10.0,
    2.0,  6.0, 10.0,
    4.0,  8.0, 12.0,
    1.0,  5.0,  9.0,
    3.0,  7.0, 11.0,
    2.0,  6.0,  0.0,
    2.0,  0.0, 10.1,
    2.0,  0.1, 10.0,
    3.0,  4.0, 18.0,
    1.9,  8.0, 10.0,
    0.0,  0.0,  0.0,
    0.0,  6.0, 10.0,
    2.1,  0.0, 10.0,
    2.0,  6.0, 10.0,
    3.0,  7.0, 11.0,
    2.0,  0.0, 10.0,
    2.0,  0.0, 10.0,
    2.0,  6.0, 10.0,
    1.0,  5.0,  9.0,
    2.0,  0.0, 10.1,
    1.0,  5.0,  9.1,
    1.0,  5.1,  9.0 };
  double *au;
  int i;
  int j;
  int j2;
  int m = M;
  int n = N;
  int n_unique;
  int *undx;
  int unique_num;
  int *xdnu;

  cout << "\n";
  cout << "R8COL_UNDEX_TEST\n";
  cout << "  R8COL_UNDEX produces index vectors which create a sorted\n";
  cout << "  list of the unique columns of an (unsorted) R8COL,\n";
  cout << "  and a map from the original R8COL to the (implicit)\n";
  cout << "  R8COL of sorted unique elements.\n";

  r8col_transpose_print ( m, n, a, "  The R8COL (transposed):" );

  n_unique = r8col_unique_count ( m, n, a );

  cout << "\n";
  cout << "  Number of unique columns is " << n_unique << "\n";

  au = new double[m*n_unique];
  undx = new int[n_unique];
  xdnu = new int[n];

  r8col_undex ( m, n, a, n_unique, undx, xdnu );

  cout << "\n";
  cout << "  XDNU points to the representative for each item.\n";
  cout << "  UNDX selects the representatives.\n";
  cout << "\n";
  cout << "     I  XDNU  UNDX\n";
  cout << "\n";
  for ( i = 0; i < n_unique; i++ )
  {
    cout << "  " << setw(4) << i
         << "  " << setw(4) << xdnu[i]
         << "  " << setw(4) << undx[i] << "\n";
  }
  for ( i = n_unique; i < n; i++ )
  {
    cout << "  " << setw(4) << i
         << "  " << setw(4) << xdnu[i] << "\n";
  }

  for ( j = 0; j < n_unique; j++ )
  {
    for ( i = 0; i < m; i++ )
    {
      au[i+j*m] = a[i+undx[j]*m];
    }
  }

  r8col_transpose_print ( m, n_unique, au, "  The Unique R8COL (transposed):" );

  delete [] au;
  delete [] undx;
  delete [] xdnu;

  return;
# undef M
# undef N
}
//****************************************************************************80

void r8col_uniform_01_new_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_UNIFORM_01_NEW_TEST tests R8COL_UNIFORM_01_NEW.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    25 February 2016
//
//  Author:
//
//    John Burkardt
//
{
# define M 5
# define N 4

  double *a;
  int seed = 123456789;

  cout << "\n";
  cout << "R8COL_UNIFORM_01_NEW_TEST\n";
  cout << "  R8COL_UNIFORM_01_NEW returns a random R8COL in [0,1].\n";
  cout << "\n";

  a = r8col_uniform_01_new ( M, N, seed );

  r8col_print ( M, N, a, "  The random R8COL:" );

  delete [] a;

  return;
# undef M
# undef N
}
//****************************************************************************80

void r8col_uniform_ab_new_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_UNIFORM_AB_NEW_TEST tests R8COL_UNIFORM_AB_NEW.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 October 2005
//
//  Author:
//
//    John Burkardt
//
{
# define M 5
# define N 4

  double *a;
  double b = 2.0E+00;
  double c = 10.0E+00;
  int seed = 123456789;

  cout << "\n";
  cout << "R8COL_UNIFORM_AB_NEW_TEST\n";
  cout << "  R8COL_UNIFORM_AB_NEW returns a random R8COL in [A,B].\n";
  cout << "\n";

  a = r8col_uniform_ab_new ( M, N, b, c, seed );

  r8col_print ( M, N, a, "  The random R8COL:" );

  delete [] a;

  return;
# undef M
# undef N
}
//****************************************************************************80

void r8col_unique_count_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_UNIQUE_COUNT_TEST tests R8COL_UNIQUE_COUNT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    19 July 2010
//
//  Author:
//
//    John Burkardt
//
{
# define M 3
# define N 22

  double a[M*N] = {
    1.9,  0.0, 10.0,
    2.0,  6.0, 10.0,
    4.0,  8.0, 12.0,
    1.0,  5.0,  9.0,
    3.0,  7.0, 11.0,
    2.0,  6.0,  0.0,
    2.0,  0.0, 10.1,
    2.0,  0.1, 10.0,
    3.0,  4.0, 18.0,
    1.9,  8.0, 10.0,
    0.0,  0.0,  0.0,
    0.0,  6.0, 10.0,
    2.1,  0.0, 10.0,
    2.0,  6.0, 10.0,
    3.0,  7.0, 11.0,
    2.0,  0.0, 10.0,
    2.0,  0.0, 10.0,
    2.0,  6.0, 10.0,
    1.0,  5.0,  9.0,
    2.0,  0.0, 10.1,
    1.0,  5.0,  9.1,
    1.0,  5.1,  9.0 };
  int m = M;
  int n = N;
  double tol;
  int unique_num;

  cout << "\n";
  cout << "R8COL_UNIQUE_COUNT_TEST\n";
  cout << "  R8COL_UNIQUE_COUNT counts unique columns.\n";

  r8col_transpose_print ( m, n, a, "  The R8COL (transposed):" );

  unique_num = r8col_unique_count ( m, n, a );

  cout << "\n";
  cout << "  Number of unique columns is " << unique_num << "\n";

  return;
# undef M
# undef N
}
//****************************************************************************80

void r8col_variance_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_VARIANCE_TEST tests R8COL_VARIANCE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    14 September 2005
//
//  Author:
//
//    John Burkardt
//
{
# define M 3
# define N 4

  double a[M*N];
  int i;
  int j;
  int k;
  double *variance;

  cout << "\n";
  cout << "R8COL_VARIANCE_TEST\n";
  cout << "  R8COL_VARIANCE computes variances of an R8COL;\n";

  k = 0;
  for ( i = 0; i < M; i++ )
  {
    for ( j = 0; j < N; j++ )
    {
      k = k + 1;
      a[i+j*M] = ( double ) ( k );
    }
  }

  r8col_print ( M, N, a, "  The array:" );

  variance = r8col_variance ( M, N, a );

  cout << "\n";
  cout << "  Column  variance:\n";
  cout << "\n";

  for ( j = 0; j < N; j++ )
  {
    cout << "  " << setw(6)  << j
         << "  " << setw(10) << variance[j] << "\n";
  }

  delete [] variance;

  return;
# undef M
# undef N
}
//****************************************************************************80

void r8vec_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_PRINT_TEST tests R8VEC_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    31 August 2014
//
//  Author:
//
//    John Burkardt
//
{
  double a[4] = { 123.456, 0.000005, -1.0E+06, 3.14159265 };
  int n = 4;

  cout << "\n";
  cout << "R8VEC_PRINT_TEST\n";
  cout << "  R8VEC_PRINT prints an R8VEC.\n";

  r8vec_print ( n, a, "  The R8VEC:" );

  return;
}
