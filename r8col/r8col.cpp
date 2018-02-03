# include <cmath>
# include <cstdlib>
# include <ctime>
# include <cstring>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8col.hpp"

//****************************************************************************80

int i4_log_10 ( int i )

//****************************************************************************80
//
//  Purpose:
//
//    I4_LOG_10 returns the integer part of the logarithm base 10 of an I4.
//
//  Example:
//
//        I  I4_LOG_10
//    -----  --------
//        0    0
//        1    0
//        2    0
//        9    0
//       10    1
//       11    1
//       99    1
//      100    2
//      101    2
//      999    2
//     1000    3
//     1001    3
//     9999    3
//    10000    4
//
//  Discussion:
//
//    I4_LOG_10 ( I ) + 1 is the number of decimal digits in I.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 January 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int I, the number whose logarithm base 10 is desired.
//
//    Output, int I4_LOG_10, the integer part of the logarithm base 10 of
//    the absolute value of X.
//
{
  int i_abs;
  int ten_pow;
  int value;

  if ( i == 0 )
  {
    value = 0;
  }
  else
  {
    value = 0;
    ten_pow = 10;

    i_abs = abs ( i );

    while ( ten_pow <= i_abs )
    {
      value = value + 1;
      ten_pow = ten_pow * 10;
    }

  }

  return value;
}
//****************************************************************************80

int i4_max ( int i1, int i2 )

//****************************************************************************80
//
//  Purpose:
//
//    I4_MAX returns the maximum of two I4's.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    13 October 1998
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int I1, I2, are two integers to be compared.
//
//    Output, int I4_MAX, the larger of I1 and I2.
//
{
  int value;

  if ( i2 < i1 )
  {
    value = i1;
  }
  else
  {
    value = i2;
  }
  return value;
}
//****************************************************************************80

int i4_min ( int i1, int i2 )

//****************************************************************************80
//
//  Purpose:
//
//    I4_MIN returns the minimum of two I4's.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    13 October 1998
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int I1, I2, two integers to be compared.
//
//    Output, int I4_MIN, the smaller of I1 and I2.
//
{
  int value;

  if ( i1 < i2 )
  {
    value = i1;
  }
  else
  {
    value = i2;
  }
  return value;
}
//****************************************************************************80

int i4_power ( int i, int j )

//****************************************************************************80
//
//  Purpose:
//
//    I4_POWER returns the value of I^J.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 April 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int I, J, the base and the power.  J should be nonnegative.
//
//    Output, int I4_POWER, the value of I^J.
//
{
  int k;
  int value;

  if ( j < 0 )
  {
    if ( i == 1 )
    {
      value = 1;
    }
    else if ( i == 0 )
    {
      cerr << "\n";
      cerr << "I4_POWER - Fatal error!\n";
      cerr << "  I^J requested, with I = 0 and J negative.\n";
      exit ( 1 );
    }
    else
    {
      value = 0;
    }
  }
  else if ( j == 0 )
  {
    if ( i == 0 )
    {
      cerr << "\n";
      cerr << "I4_POWER - Fatal error!\n";
      cerr << "  I^J requested, with I = 0 and J = 0.\n";
      exit ( 1 );
    }
    else
    {
      value = 1;
    }
  }
  else if ( j == 1 )
  {
    value = i;
  }
  else
  {
    value = 1;
    for ( k = 1; k <= j; k++ )
    {
      value = value * i;
    }
  }
  return value;
}
//****************************************************************************80

int i4_uniform_ab ( int a, int b, int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    I4_UNIFORM_AB returns a scaled pseudorandom I4 between A and B.
//
//  Discussion:
//
//    The pseudorandom number should be uniformly distributed
//    between A and B.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 October 2012
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Paul Bratley, Bennett Fox, Linus Schrage,
//    A Guide to Simulation,
//    Second Edition,
//    Springer, 1987,
//    ISBN: 0387964673,
//    LC: QA76.9.C65.B73.
//
//    Bennett Fox,
//    Algorithm 647:
//    Implementation and Relative Efficiency of Quasirandom
//    Sequence Generators,
//    ACM Transactions on Mathematical Software,
//    Volume 12, Number 4, December 1986, pages 362-376.
//
//    Pierre L'Ecuyer,
//    Random Number Generation,
//    in Handbook of Simulation,
//    edited by Jerry Banks,
//    Wiley, 1998,
//    ISBN: 0471134031,
//    LC: T57.62.H37.
//
//    Peter Lewis, Allen Goodman, James Miller,
//    A Pseudo-Random Number Generator for the System/360,
//    IBM Systems Journal,
//    Volume 8, Number 2, 1969, pages 136-143.
//
//  Parameters:
//
//    Input, int A, B, the limits of the interval.
//
//    Input/output, int &SEED, the "seed" value, which should NOT be 0.
//    On output, SEED has been updated.
//
//    Output, int I4_UNIFORM, a number between A and B.
//
{
  int c;
  const int i4_huge = 2147483647;
  int k;
  float r;
  int value;

  if ( seed == 0 )
  {
    cerr << "\n";
    cerr << "I4_UNIFORM_AB - Fatal error!\n";
    cerr << "  Input value of SEED = 0.\n";
    exit ( 1 );
  }
//
//  Guarantee A <= B.
//
  if ( b < a )
  {
    c = a;
    a = b;
    b = c;
  }

  k = seed / 127773;

  seed = 16807 * ( seed - k * 127773 ) - k * 2836;

  if ( seed < 0 )
  {
    seed = seed + i4_huge;
  }

  r = ( float ) ( seed ) * 4.656612875E-10;
//
//  Scale R to lie between A-0.5 and B+0.5.
//
  r = ( 1.0 - r ) * ( ( float ) a - 0.5 ) 
    +         r   * ( ( float ) b + 0.5 );
//
//  Use rounding to convert R to an integer between A and B.
//
  value = round ( r );
//
//  Guarantee A <= VALUE <= B.
//
  if ( value < a )
  {
    value = a;
  }
  if ( b < value )
  {
    value = b;
  }

  return value;
}
//****************************************************************************80

int *i4vec_indicator1_new ( int n )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_INDICATOR1_NEW sets an I4VEC to the indicator vector (1,2,3,...).
//
//  Discussion:
//
//    An I4VEC is a vector of I4's.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 September 2014
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of elements of A.
//
//    Output, int I4VEC_INDICATOR1_NEW[N], the array.
//
{
  int *a;
  int i;

  a = new int[n];

  for ( i = 0; i < n; i++ )
  {
    a[i] = i + 1;
  }
  return a;
}
//****************************************************************************80

void i4vec_print ( int n, int a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_PRINT prints an I4VEC.
//
//  Discussion:
//
//    An I4VEC is a vector of I4's.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    14 November 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of components of the vector.
//
//    Input, int A[N], the vector to be printed.
//
//    Input, string TITLE, a title.
//
{
  int i;

  cout << "\n";
  cout << title << "\n";
  cout << "\n";
  for ( i = 0; i < n; i++ )
  {
    cout << "  " << setw(8) << i
         << ": " << setw(8) << a[i]  << "\n";
  }
  return;
}
//****************************************************************************80

void i4vec_transpose_print ( int n, int a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_TRANSPOSE_PRINT prints an I4VEC "transposed".
//
//  Discussion:
//
//    An I4VEC is a vector of I4's.
//
//  Example:
//
//    A = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 }
//    TITLE = "My vector:  "
//
//    My vector:      1    2    3    4    5
//                    6    7    8    9   10
//                   11
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 July 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of components of the vector.
//
//    Input, int A[N], the vector to be printed.
//
//    Input, string TITLE, a title.
//
{
  int i;
  int ihi;
  int ilo;
  int title_len;

  title_len = title.length ( );

  for ( ilo = 1; ilo <= n; ilo = ilo + 5 )
  {
    ihi = ilo + 5 - 1;
    if ( n < ihi )
    {
      ihi = n;
    }

    if ( ilo == 1 )
    {
      cout << title;
    }
    else
    {
      for ( i = 1; i <= title_len; i++ )
      {
        cout << " ";
      }
    }
    for ( i = ilo; i <= ihi; i++ )
    {
      cout << setw(12) << a[i-1];
    }
    cout << "\n";
  }

  return;
}
//****************************************************************************80

bool perm0_check ( int n, int p[] )

//****************************************************************************80
//
//  Purpose:
//
//    PERM0_CHECK checks a permutation of ( 0, ..., N-1 ).
//
//  Discussion:
//
//    The routine verifies that each of the integers from 0 to
//    to N-1 occurs among the N entries of the permutation.
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
//  Parameters:
//
//    Input, int N, the number of entries.
//
//    Input, int P[N], the array to check.
//
//    Output, bool PERM0_CHECK, is 
//    TRUE if P is a legal permutation of 0,...,N-1.
//    FALSE if P is not a legal permuation of 0,...,N-1.
//
{
  bool check;
  int location;
  int value;

  check = true;

  for ( value = 0; value < n; value++ )
  {
    check = false;

    for ( location = 0; location < n; location++ )
    {
      if ( p[location] == value )
      {
        check = true;
        break;
      }
    }

    if ( ! check )
    {
      cout << "\n";
      cout << "PERM0_CHECK - Fatal error!\n";
      cout << "  Permutation is missing value " << value << "\n";
      break;
    }

  }

  return check;
}
//****************************************************************************80

double r8_max ( double x, double y )

//****************************************************************************80
//
//  Purpose:
//
//    R8_MAX returns the maximum of two R8's.
//
//  Discussion:
//
//    The C++ math library provides the function fmax() which is preferred.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    18 August 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double X, Y, the quantities to compare.
//
//    Output, double R8_MAX, the maximum of X and Y.
//
{
  double value;

  if ( y < x )
  {
    value = x;
  }
  else
  {
    value = y;
  }
  return value;
}
//****************************************************************************80

double r8_min ( double x, double y )

//****************************************************************************80
//
//  Purpose:
//
//    R8_MIN returns the minimum of two R8's.
//
//  Discussion:
//
//    The C++ math library provides the function fmin() which is preferred.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    31 August 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double X, Y, the quantities to compare.
//
//    Output, double R8_MIN, the minimum of X and Y.
//
{
  double value;

  if ( y < x )
  {
    value = y;
  }
  else
  {
    value = x;
  }
  return value;
}
//****************************************************************************80

double r8_uniform_ab ( double a, double b, int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    R8_UNIFORM_AB returns a scaled pseudorandom R8.
//
//  Discussion:
//
//    The pseudorandom number should be uniformly distributed
//    between A and B.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 April 2012
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double A, B, the limits of the interval.
//
//    Input/output, int &SEED, the "seed" value, which should NOT be 0.
//    On output, SEED has been updated.
//
//    Output, double R8_UNIFORM_AB, a number strictly between A and B.
//
{
  const int i4_huge = 2147483647;
  int k;
  double value;

  if ( seed == 0 )
  {
    cerr << "\n";
    cerr << "R8_UNIFORM_AB - Fatal error!\n";
    cerr << "  Input value of SEED = 0.\n";
    exit ( 1 );
  }

  k = seed / 127773;

  seed = 16807 * ( seed - k * 127773 ) - k * 2836;

  if ( seed < 0 )
  {
    seed = seed + i4_huge;
  }

  value = ( double ) ( seed ) * 4.656612875E-10;

  value = a + ( b - a ) * value;

  return value;
}
//****************************************************************************80

int r8col_compare ( int m, int n, double a[], int i, int j )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_COMPARE compares two columns in an R8COL.
//
//  Discussion:
//
//    An R8COL is an M by N array of R8's, regarded as an array of N columns,
//    each of length M.
//
//  Example:
//
//    Input:
//
//      M = 3, N = 4, I = 2, J = 4
//
//      A = (
//        1.  2.  3.  4.
//        5.  6.  7.  8.
//        9. 10. 11. 12. )
//
//    Output:
//
//      R8COL_COMPARE = -1
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    13 September 2005
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns.
//
//    Input, double A[M*N], the M by N array.
//
//    Input, int I, J, the columns to be compared.
//    I and J must be between 1 and N.
//
//    Output, int R8COL_COMPARE, the results of the comparison:
//    -1, column I < column J,
//     0, column I = column J,
//    +1, column J < column I.
//
{
  int k;
  int value;
//
//  Check.
//
  if ( i < 1 || n < i )
  {
    cerr << "\n";
    cerr << "R8COL_COMPARE - Fatal error!\n";
    cerr << "  Column index I is out of bounds.\n";
    cerr << "  I = " << i << "\n";
    exit ( 1 );
  }

  if ( j < 1 || n < j )
  {
    cerr << "\n";
    cerr << "R8COL_COMPARE - Fatal error!\n";
    cerr << "  Column index J is out of bounds.\n";
    cerr << "  J = " << j << "\n";
    exit ( 1 );
  }

  value = 0;

  if ( i == j )
  {
    return value;
  }

  k = 0;

  while ( k < m )
  {
    if ( a[k+(i-1)*m] < a[k+(j-1)*m] )
    {
      value = -1;
      return value;
    }
    else if ( a[k+(j-1)*m] < a[k+(i-1)*m] )
    {
      value = +1;
      return value;
    }
    k = k + 1;
  }

  return value;
}
//****************************************************************************80

double *r8col_duplicates ( int m, int n, int n_unique, int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_DUPLICATES generates an R8COL with some duplicate columns.
//
//  Discussion:
//
//    An R8COL is an M by N array of R8's, regarded as an array of N columns,
//    each of length M.
//
//    This routine generates a random R8COL with a specified number of
//    duplicate columns.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    21 July 2010
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, the number of rows in each column of A.
//
//    Input, int N, the number of columns in A.
//
//    Input, int N_UNIQUE, the number of unique columns in A.
//    1 <= N_UNIQUE <= N.
//
//    Input/output, int &SEED, a seed for the random
//    number generator.
//
//    Output, double R8COL_DUPLICATES[M*N], the array.
//
{
  double *a;
  int i;
  int j1;
  int j2;
  double temp;

  if ( n_unique < 1 || n < n_unique )
  {
    cerr << "\n";
    cerr << "R8COL_DUPLICATES - Fatal error!\n";
    cerr << "  1 <= N_UNIQUE <= N is required.\n";
    exit ( 1 );
  }

  a = r8col_uniform_01_new ( m, n_unique, seed );
//
//  Randomly copy unique columns.
//
  for ( j1 = n_unique; j1 < n; j1++ )
  {
    j2 = i4_uniform_ab ( 0, n_unique - 1, seed );
    for ( i = 0; i < m; i++ )
    {
      a[i+j1*m] = a[i+j2*m];
    }
  }
//
//  Permute the columns.
//
  for ( j1 = 0; j1 < n; j1++ )
  {
    j2 = i4_uniform_ab ( j1, n - 1, seed );
    for ( i = 0; i < m; i++ )
    {
      temp      = a[i+j1*m];
      a[i+j1*m] = a[i+j2*m];
      a[i+j2*m] = temp;
    }
  }
  return a;
}
//****************************************************************************80

int r8col_find ( int m, int n, double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_FIND seeks a column value in an R8COL.
//
//  Discussion:
//
//    An R8COL is an M by N array of R8's, regarded as an array of N columns,
//    each of length M.
//
//  Example:
//
//    Input:
//
//      M = 3,
//      N = 4,
//
//      A = (
//        1.  2.  3.  4.
//        5.  6.  7.  8.
//        9. 10. 11. 12. )
//
//      x = ( 3.,
//            7.,
//           11. )
//
//    Output:
//
//      R8COL_FIND = 3
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    05 December 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns.
//
//    Input, double A[M*N], a table of numbers, regarded as
//    N columns of vectors of length M.
//
//    Input, double X[M], a vector to be matched with a column of A.
//
//    Output, int R8COL_FIND, the (one-based) index of the first column of A
//    which exactly matches every entry of X, or -1 if no match
//    could be found.
//
{
  int col;
  int i;
  int j;

  col = -1;

  for ( j = 1; j <= n; j++ )
  {
    col = j;

    for ( i = 1; i <= m; i++ )
    {
      if ( x[i-1] != a[i-1+(j-1)*m] )
      {
        col = -1;
        break;
      }
    }
    if ( col != -1 )
    {
      return col;
    }
  }
  return col;
}
//****************************************************************************80

int *r8col_first_index ( int m, int n, double a[], double tol )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_FIRST_INDEX indexes the first occurrence of values in an R8COL.
//
//  Discussion:
//
//    An R8COL is an M by N array of R8's, regarded as an array of N columns,
//    each of length M.
//
//    For element A(1:M,J) of the matrix, FIRST_INDEX(J) is the index in A of
//    the first column whose entries are equal to A(1:M,J).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    24 November 2008
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns of A.
//    The length of an "element" of A, and the number of "elements".
//
//    Input, double A[M*N], the array.
//
//    Input, double TOL, a tolerance for equality.
//
//    Output, int R8COL_FIRST_INDEX[N], the first occurrence index.
//
{
  double diff;
  int *first_index;
  int i;
  int j1;
  int j2;

  first_index = new int[n];

  for ( j1 = 0; j1 < n; j1++ )
  {
    first_index[j1] = -1;
  }
  for ( j1 = 0; j1 < n; j1++ )
  {
    if ( first_index[j1] == -1 )
    {
      first_index[j1] = j1;

      for ( j2 = j1 + 1; j2 < n; j2++ )
      {
        diff = 0.0;
        for ( i = 0; i < m; i++ )
        {
          diff = r8_max ( diff, fabs ( a[i+j1*m] - a[i+j2*m] ) );
        }
        if ( diff <= tol )
        {
          first_index[j2] = j1;
        }
      }
    }
  }
  return first_index;
}
//****************************************************************************80

double *r8col_indicator_new ( int m, int n )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_INDICATOR_NEW sets up an "indicator" R8COL.
//
//  Discussion:
//
//    An R8COL is an M by N array of R8's, regarded as an array of N columns,
//    each of length M.
//
//    The value of each entry suggests its location, as in:
//
//      11  12  13  14
//      21  22  23  24
//      31  32  33  34
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    25 January 2005
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, the number of rows of the matrix.
//    M must be positive.
//
//    Input, int N, the number of columns of the matrix.
//    N must be positive.
//
//    Output, double R8COL_INDICATOR_NEW[M*N], the table.
//
{
  double *a;
  int fac;
  int i;
  int j;

  a = new double[m*n];

  fac = i4_power ( 10, i4_log_10 ( n ) + 1 );

  for ( i = 1; i <= m; i++ )
  {
    for ( j = 1; j <= n; j++ )
    {
      a[i-1+(j-1)*m] = ( double ) ( fac * i + j );
    }
  }
  return a;
}
//****************************************************************************80

int r8col_insert ( int n_max, int m, int n, double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_INSERT inserts a column into an R8COL.
//
//  Discussion:
//
//    An R8COL is an M by N array of R8's, regarded as an array of N columns,
//    each of length M.
//
//  Example:
//
//    Input:
//
//      N_MAX = 10,
//      M = 3,
//      N = 4,
//
//      A = (
//        1.  2.  3.  4.
//        5.  6.  7.  8.
//        9. 10. 11. 12. )
//
//      X = ( 3., 4., 18. )
//
//    Output:
//
//      N = 5,
//
//      A = (
//        1.  2.  3.  3.  4.
//        5.  6.  4.  7.  8.
//        9. 10. 18. 11. 12. )
//
//      R8COL_INSERT = 3
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
//  Parameters:
//
//    Input, int N_MAX, the maximum number of columns in A.
//
//    Input, int M, the number of rows.
//
//    Input/output, int N, the number of columns.
//    If the new column is inserted into the table, then the output
//    value of N will be increased by 1.
//
//    Input/output, double A[M*N_MAX], a table of numbers, regarded
//    as an array of columns.  The columns must have been sorted
//    lexicographically.
//
//    Input, double X[M], a vector of data which will be inserted
//    into the table if it does not already occur.
//
//    Output, int R8COL_INSERT.
//    I, X was inserted into column I.
//    -I, column I was already equal to X.
//    0, N = N_MAX.
//
{
  int col;
  int high;
  int i;
  int isgn;
  int j;
  int low;
  int mid;
//
//  Refuse to work if N_MAX <= N.
//
  if ( n_max <= n )
  {
    col = 0;
    return col;
  }
//
//  Stick X temporarily in column N+1, just so it's easy to use R8COL_COMPARE.
//
  for ( i = 0; i < m; i++ )
  {
    a[i+n*m] = x[i];
  }
//
//  Do a binary search.
//
  low = 1;
  high = n;

  for ( ; ; )
  {
    if ( high < low )
    {
      col = low;
      break;
    }

    mid = ( low + high ) / 2;

    isgn = r8col_compare ( m, n+1, a, mid, n+1 );

    if ( isgn == 0 )
    {
      col = -mid;
      return col;
    }
    else if ( isgn == -1 )
    {
      low = mid + 1;
    }
    else if ( isgn == +1 )
    {
      high = mid - 1;
    }
  }
//
//  Shift part of the table up to make room.
//
  for ( j = n-1; col-1 <= j; j-- )
  {
    for ( i = 0; i < m; i++ )
    {
      a[i+(j+1)*m] = a[i+j*m];
    }
  }
//
//  Insert the new column.
//
  for ( i = 0; i < m; i++ )
  {
    a[i+(col-1)*m] = x[i];
  }

  n = n + 1;

  return col;
}
//****************************************************************************80

double *r8col_max ( int m, int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_MAX returns the column maximums of an R8COL.
//
//  Discussion:
//
//    An R8COL is an M by N array of R8's, regarded as an array of N columns,
//    each of length M.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    15 September 2005
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns.
//
//    Input, double A[M*N], the array to be examined.
//
//    Output, double R8COL_MAX[N], the maximums of the columns.
//
{
  double *amax;
  int i;
  int j;

  amax = new double[n];

  for ( j = 0; j < n; j++ )
  {
    amax[j] = a[0+j*m];
    for ( i = 0; i < m; i++ )
    {
      amax[j] = r8_max ( amax[j], a[i+j*m] );
    }
  }

  return amax;
}
//****************************************************************************80

int *r8col_max_index ( int m, int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_MAX_INDEX returns the indices of column maximums in an R8COL.
//
//  Discussion:
//
//    An R8COL is an M by N array of R8's, regarded as an array of N columns,
//    each of length M.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    15 September 2005
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns.
//
//    Input, double A[M*N], the array to be examined.
//
//    Output, int R8COL_MAX_INDEX[N]; entry I is the row of A in which
//    the maximum for column I occurs.
//
{
  double amax;
  int i;
  int *imax;
  int j;

  imax = new int[n];

  for ( j = 0; j < n; j++ )
  {
    imax[j] = 1;
    amax = a[0+j*m];

    for ( i = 1; i < m; i++ )
    {
      if ( amax < a[i+j*m] )
      {
        imax[j] = i+1;
        amax = a[i+j*m];
      }
    }
  }

  return imax;
}
//****************************************************************************80

void r8col_max_one ( int m, int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_MAX_ONE rescales an R8COL so each column maximum is 1.
//
//  Discussion:
//
//    An R8COL is an M by N array of R8's, regarded as an array of N columns,
//    each of length M.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    08 May 2010
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns.
//
//    Input/output, double A[M*N], the array to be rescaled.
//
{
  int i;
  int i_big;
  int j;
  double temp;

  for ( j = 0; j < n; j++ )
  {
    i_big = 0;
    for ( i = 1; i < m; i++ )
    {
      if ( fabs ( a[i_big+j*m] ) < fabs ( a[i+j*m] ) )
      {
        i_big = i;
      }
    }
    temp = a[i_big+j*m];

    if ( temp != 0.0 )
    {
      for ( i = 0; i < m; i++ )
      {
        a[i+j*m] = a[i+j*m] / temp;
      }
    }
  }
  return;
}
//****************************************************************************80

double *r8col_mean ( int m, int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_MEAN returns the column means of an R8COL.
//
//  Discussion:
//
//    An R8COL is an M by N array of R8's, regarded as an array of N columns,
//    each of length M.
//
//  Example:
//
//    A =
//      1  2  3
//      2  6  7
//
//    R8COL_MEAN =
//      1.5  4.0  5.0
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    13 September 2005
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns.
//
//    Input, double A[M*N], the array to be examined.
//
//    Output, double R8COL_MEAN[N], the means, or averages, of the columns.
//
{
  int i;
  int j;
  double *mean;

  mean = new double[n];

  for ( j = 0; j < n; j++ )
  {
    mean[j] = 0.0;
    for ( i = 0; i < m; i++ )
    {
      mean[j] = mean[j] + a[i+j*m];
    }
    mean[j] = mean[j] / ( double ) ( m );
  }

  return mean;
}
//****************************************************************************80

double *r8col_min ( int m, int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_MIN returns the column minimums of an R8COL.
//
//  Discussion:
//
//    An R8COL is an M by N array of R8's, regarded as an array of N columns,
//    each of length M.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    15 September 2005
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns.
//
//    Input, double A[M*N], the array to be examined.
//
//    Output, double R8COL_MIN[N], the minimums of the columns.
//
{
  double *amin;
  int i;
  int j;

  amin = new double[n];

  for ( j = 0; j < n; j++ )
  {
    amin[j] = a[0+j*m];
    for ( i = 0; i < m; i++ )
    {
      amin[j] = r8_min ( amin[j], a[i+j*m] );
    }
  }

  return amin;
}
//****************************************************************************80

int *r8col_min_index ( int m, int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_MIN_INDEX returns the indices of column minimums in an R8COL.
//
//  Discussion:
//
//    An R8COL is an M by N array of R8's, regarded as an array of N columns,
//    each of length M.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    15 September 2005
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns.
//
//    Input, double A[M*N], the array to be examined.
//
//    Output, int R8COL_MIN_INDEX[N]; entry I is the row of A in which
//    the minimum for column I occurs.
//
{
  double amin;
  int i;
  int *imin;
  int j;

  imin = new int[n];

  for ( j = 0; j < n; j++ )
  {
    imin[j] = 1;
    amin = a[0+j*m];

    for ( i = 1; i < m; i++ )
    {
      if ( a[i+j*m] < amin )
      {
        imin[j] = i+1;
        amin = a[i+j*m];
      }
    }
  }
  return imin;
}
//****************************************************************************80

void r8col_normalize_li ( int m, int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_NORMALIZE_LI normalizes an R8COL with the column infinity norm.
//
//  Discussion:
//
//    Each column is scaled so that the entry of maximum norm has the value 1.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    08 February 2012
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns.
//
//    Input/output, double A[M*N], the array to be normalized.
//
{
  double c;
  int i;
  int j;

  for ( j = 0; j < n; j++ )
  {
    c = a[0+j*m];
    for ( i = 1; i < m; i++ )
    {
      if ( fabs ( c ) < fabs ( a[i+j*m] ) )
      {
        c = a[i+j*m];
      }
    }

    if ( c != 0.0 )
    {
      for ( i = 0; i < m; i++ )
      {
        a[i+m*j] = a[i+m*j] / c;
      }
    }
  }

  return;
}
//****************************************************************************80

void r8col_part_quick_a ( int m, int n, double a[], int &l, int &r )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_PART_QUICK_A reorders the columns of an R8COL.
//
//  Discussion:
//
//    An R8COL is an M by N array of R8's, regarded as an array of N columns,
//    each of length M.
//
//    The routine reorders the columns of A.  Using A(1:M,1) as a
//    key, all entries of A that are less than or equal to the key will
//    precede the key, which precedes all entries that are greater than the key.
//
//  Example:
//
//    Input:
//
//      M = 2, N = 8
//      A = ( 2  8  6  0 10 10  0  5
//            4  8  2  2  6  0  6  8 )
//
//    Output:
//
//      L = 2, R = 4
//
//      A = (  0  0  2  8  6 10 10  4
//             2  6  4  8  2  6  0  8 )
//             ----     -------------
//             LEFT KEY     RIGHT
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    17 September 2005
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, the row dimension of A, and the length of a column.
//
//    Input, int N, the column dimension of A.
//
//    Input/output, double A[M*N].  On input, the array to be checked.
//    On output, A has been reordered as described above.
//
//    Output, int &L, &R, the indices of A that define the three segments.
//    Let KEY = the input value of A(1:M,1).  Then
//    I <= L                 A(1:M,I) < KEY;
//         L < I < R         A(1:M,I) = KEY;
//                 R <= I    KEY < A(1:M,I).
//
{
  int i;
  int j;
  int k;
  double *key;

  if ( n < 1 )
  {
    cerr << "\n";
    cerr << "R8COL_PART_QUICK_A - Fatal error!\n";
    cerr << "  N < 1.\n";
    exit ( 1 );
  }

  if ( n == 1 )
  {
    l = 0;
    r = 2;
    return;
  }

  key = new double[m];

  for ( i = 0; i < m; i++ )
  {
    key[i] = a[i+0*m];
  }
  k = 1;
//
//  The elements of unknown size have indices between L+1 and R-1.
//
  l = 1;
  r = n + 1;

  for ( j = 1; j < n; j++ )
  {
    if ( r8vec_gt ( m, a+l*m, key ) )
    {
      r = r - 1;
      r8vec_swap ( m, a+(r-1)*m, a+l*m );
    }
    else if ( r8vec_eq ( m, a+l*m, key ) )
    {
      k = k + 1;
      r8vec_swap ( m, a+(k-1)*m, a+l*m );
      l = l + 1;
    }
    else if ( r8vec_lt ( m, a+l*m, key ) )
    {
      l = l + 1;
    }
  }
//
//  Shift small elements to the left.
//
  for ( j = 0; j < l - k; j++ )
  {
    for ( i = 0; i < m; i++ )
    {
      a[i+j*m] = a[i+(j+k)*m];
    }
  }
//
//  Shift KEY elements to center.
//
  for ( j = l-k; j < l; j++ )
  {
    for ( i = 0; i < m; i++ )
    {
      a[i+j*m] = key[i];
    }
  }
//
//  Update L.
//
  l = l - k;

  delete [] key;

  return;
}
//****************************************************************************80

void r8col_permute ( int m, int n, int p[], double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_PERMUTE permutes an R8COL in place.
//
//  Discussion:
//
//    An R8COL is an M by N array of R8's, regarded as an array of N columns,
//    each of length M.
//
//    This routine permutes an array of real "objects", but the same
//    logic can be used to permute an array of objects of any arithmetic
//    type, or an array of objects of any complexity.  The only temporary
//    storage required is enough to store a single object.  The number
//    of data movements made is N + the number of cycles of order 2 or more,
//    which is never more than N + N/2.
//
//  Example:
//
//    Input:
//
//      M = 2
//      N = 5
//      P = (   1,    3,    4,    0,    2 )
//      A = ( 1.0,  2.0,  3.0,  4.0,  5.0 )
//          (11.0, 22.0, 33.0, 44.0, 55.0 )
//
//    Output:
//
//      A    = (  2.0,  4.0,  5.0,  1.0,  3.0 )
//             ( 22.0, 44.0, 55.0, 11.0, 33.0 ).
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
//  Parameters:
//
//    Input, int M, the length of objects.
//
//    Input, int N, the number of objects.
//
//    Input, int P[N], the permutation.  P(I) = J means
//    that the I-th element of the output array should be the J-th
//    element of the input array.
//
//    Input/output, double A[M*N], the array to be permuted.
//
{
  double *a_temp;
  int i;
  int iget;
  int iput;
  int istart;
  int j;

  if ( !perm0_check ( n, p ) )
  {
    cerr << "\n";
    cerr << "R8COL_PERMUTE - Fatal error!\n";
    cerr << "  PERM0_CHECK rejects permutation.\n";
    exit ( 1 );
  }
//
//  In order for the sign negation trick to work, we need to assume that the
//  entries of P are strictly positive.  Presumably, the lowest number is 0.
//  So temporarily add 1 to each entry to force positivity.
//
  for ( i = 0; i < n; i++ )
  {
    p[i] = p[i] + 1;
  }

  a_temp = new double[m];
//
//  Search for the next element of the permutation that has not been used.
//
  for ( istart = 1; istart <= n; istart++ )
  {
    if ( p[istart-1] < 0 )
    {
      continue;
    }
    else if ( p[istart-1] == istart )
    {
      p[istart-1] = - p[istart-1];
      continue;
    }
    else
    {
      for ( i = 0; i < m; i++ )
      {
        a_temp[i] = a[i+(istart-1)*m];
      }
      iget = istart;
//
//  Copy the new value into the vacated entry.
//
      for ( ; ; )
      {
        iput = iget;
        iget = p[iget-1];

        p[iput-1] = - p[iput-1];

        if ( iget < 1 || n < iget )
        {
          cerr << "\n";
          cerr << "R8COL_PERMUTE - Fatal error!\n";
          cerr << "  Entry IPUT = " << iput << " of the permutation has\n";
          cerr << "  an illegal value IGET = " << iget << ".\n";
          exit ( 1 );
        }

        if ( iget == istart )
        {
          for ( i = 0; i < m; i++ )
          {
            a[i+(iput-1)*m] = a_temp[i];
          }
          break;
        }
        for ( i = 0; i < m; i++ )
        {
          a[i+(iput-1)*m] = a[i+(iget-1)*m];
        }
      }
    }
  }
//
//  Restore the signs of the entries.
//
  for ( j = 0; j < n; j++ )
  {
    p[j] = - p[j];
  }
//
//  Restore the entries.
//
  for ( i = 0; i < n; i++ )
  {
    p[i] = p[i] - 1;
  }

  delete [] a_temp;

  return;
}
//****************************************************************************80

void r8col_print ( int m, int n, double a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_PRINT prints an R8COL.
//
//  Discussion:
//
//    An R8COL is an M by N array of R8's, regarded as an array of N columns,
//    each of length M.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 September 2009
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, the number of rows in A.
//
//    Input, int N, the number of columns in A.
//
//    Input, double A[M*N], the M by N matrix.
//
//    Input, string TITLE, a title.
//
{
  r8col_print_some ( m, n, a, 1, 1, m, n, title );

  return;
}
//****************************************************************************80

void r8col_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi,
  int jhi, string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_PRINT_SOME prints some of an R8COL.
//
//  Discussion:
//
//    An R8COL is an M by N array of R8's, regarded as an array of N columns,
//    each of length M.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    26 June 2013
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, the number of rows of the matrix.
//    M must be positive.
//
//    Input, int N, the number of columns of the matrix.
//    N must be positive.
//
//    Input, double A[M*N], the matrix.
//
//    Input, int ILO, JLO, IHI, JHI, designate the first row and
//    column, and the last row and column to be printed.
//
//    Input, string TITLE, a title.
//
{
# define INCX 5

  int i;
  int i2hi;
  int i2lo;
  int j;
  int j2hi;
  int j2lo;

  cout << "\n";
  cout << title << "\n";

  if ( m <= 0 || n <= 0 )
  {
    cout << "\n";
    cout << "  (None)\n";
    return;
  }
//
//  Print the columns of the matrix, in strips of 5.
//
  for ( j2lo = jlo; j2lo <= jhi; j2lo = j2lo + INCX )
  {
    j2hi = j2lo + INCX - 1;
    if ( n < j2hi )
    {
      j2hi = n;
    }
    if ( jhi < j2hi )
    {
      j2hi = jhi;
    }
    cout << "\n";
//
//  For each column J in the current range...
//
//  Write the header.
//
    cout << "  Col:    ";
    for ( j = j2lo; j <= j2hi; j++ )
    {
      cout << setw(7) << j - 1 << "       ";
    }
    cout << "\n";
    cout << "  Row\n";
    cout << "\n";
//
//  Determine the range of the rows in this strip.
//
    if ( 1 < ilo )
    {
      i2lo = ilo;
    }
    else
    {
      i2lo = 1;
    }
    if ( ihi < m )
    {
      i2hi = ihi;
    }
    else
    {
      i2hi = m;
    }

    for ( i = i2lo; i <= i2hi; i++ )
    {
//
//  Print out (up to) 5 entries in row I, that lie in the current strip.
//
      cout << setw(5) << i - 1 << ": ";
      for ( j = j2lo; j <= j2hi; j++ )
      {
        cout << setw(12) << a[i-1+(j-1)*m] << "  ";
      }
      cout << "\n";
    }
  }

  return;
# undef INCX
}
//****************************************************************************80

void r8col_reverse ( int m, int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_REVERSE reverses the order of the columns of an R8COL.
//
//  Discussion:
//
//    An R8COL is an M by N array of R8's, regarded as an array of N columns,
//    each of length M.
//
//    To reverse the columns is to start with something like
//
//      11 12 13 14 15
//      21 22 23 24 25
//      31 32 33 34 35
//      41 42 43 44 45
//      51 52 53 54 55
//
//    and return
//
//      15 14 13 12 11
//      25 24 23 22 21
//      35 34 33 32 31
//      45 44 43 42 41
//      55 54 53 52 51
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    06 May 2013
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns.
//
//    Input/output, double A[M*N], the matrix whose columns are to be flipped.
//
{
  int i;
  int j;
  double t;

  for ( i = 0; i < m; i++ )
  {
    for ( j = 0; j < ( n / 2 ); j++ )
    {
      t              = a[i+     j *m];
      a[i+     j *m] = a[i+(n-1-j)*m];
      a[i+(n-1-j)*m] = t;
    }
  }
  return;
}
//****************************************************************************80

void r8col_separation ( int m, int n, double a[], double &d_min, double &d_max )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_SEPARATION returns the "separation" of an R8COL.
//
//  Discussion:
//
//    An R8COL is an M by N array of R8's, regarded as an array of N columns,
//    each of length M.
//
//    D_MIN is the minimum distance between two columns,
//    D_MAX is the maximum distance between two columns.
//
//    The distances are measured using the Loo norm.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    24 February 2014
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns 
//    in the array.  If N < 2, it does not make sense to call this routine.
//
//    Input, double A[M*N], the array whose variances are desired.
//
//    Output, double &D_MIN, &D_MAX, the minimum and maximum distances.
//
{
  double d;
  int i;
  int j1;
  int j2;
  const double r8_huge = 1.79769313486231571E+308;

  d_min = r8_huge;
  d_max = 0.0;

  for ( j1 = 0; j1 < n; j1++ )
  {
    for ( j2 = j1 + 1; j2 < n; j2++ )
    {
      d = 0.0;
      for ( i = 0; i < m; i++ )
      {
        d = r8_max ( d, fabs ( a[i+j1*m] - a[i+j2*m] ) );
      }
      d_min = r8_min ( d_min, d );
      d_max = r8_max ( d_max, d );
    }
  }

  return;
}
//****************************************************************************80

void r8col_sort_heap_a ( int m, int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_SORT_HEAP_A ascending heapsorts an R8COL.
//
//  Discussion:
//
//    An R8COL is an M by N array of R8's, regarded as an array of N columns,
//    each of length M.
//
//    In lexicographic order, the statement "X < Y", applied to two real
//    vectors X and Y of length M, means that there is some index I, with
//    1 <= I <= M, with the property that
//
//      X(J) = Y(J) for J < I,
//    and
//      X(I) < Y(I).
//
//    In other words, the first time they differ, X is smaller.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    15 September 2005
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns.
//
//    Input/output, double A[M*N].
//    On input, the array of N columns of M-vectors.
//    On output, the columns of A have been sorted in lexicographic order.
//
{
  int i;
  int indx;
  int isgn;
  int j;

  if ( m <= 0 )
  {
    return;
  }

  if ( n <= 1 )
  {
    return;
  }
//
//  Initialize.
//
  i = 0;
  indx = 0;
  isgn = 0;
  j = 0;
//
//  Call the external heap sorter.
//
  for ( ; ; )
  {
    sort_heap_external ( n, indx, i, j, isgn );
//
//  Interchange the I and J objects.
//
    if ( 0 < indx )
    {
      r8col_swap ( m, n, a, i, j );
    }
//
//  Compare the I and J objects.
//
    else if ( indx < 0 )
    {
      isgn = r8col_compare ( m, n, a, i, j );
    }
    else if ( indx == 0 )
    {
      break;
    }
  }

  return;
}
//****************************************************************************80

int *r8col_sort_heap_index_a ( int m, int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_SORT_HEAP_INDEX_A does an indexed heap ascending sort of an R8COL.
//
//  Discussion:
//
//    An R8COL is an M by N array of R8's, regarded as an array of N columns,
//    each of length M.
//
//    The sorting is not actually carried out.  Rather an index array is
//    created which defines the sorting.  This array may be used to sort
//    or index the array, or to sort or index related arrays keyed on the
//    original array.
//
//    A(*,J1) < A(*,J2) if the first nonzero entry of A(*,J1)-A(*,J2) is negative.
//
//    Once the index array is computed, the sorting can be carried out
//    "implicitly:
//
//      A(*,INDX(*)) is sorted,
//
//    Note that the index vector is 0-based.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 June 2009
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, the number of rows in each column of A.
//
//    Input, int N, the number of columns in A.
//
//    Input, double A[M*N], the array.
//
//    Output, int R8COL_SORT_HEAP_INDEX_A[N], contains the sort index.  The
//    I-th column of the sorted array is A(*,INDX(I)).
//
{
  double *column;
  int i;
  int *indx;
  int indxt;
  int ir;
  int isgn;
  int j;
  int k;
  int l;

  if ( n < 1 )
  {
    return NULL;
  }

  indx = new int[n];

  for ( i = 0; i < n; i++ )
  {
    indx[i] = i;
  }

  if ( n == 1 )
  {
    indx[0] = indx[0];
    return indx;
  }

  column = new double[m];

  l = n / 2 + 1;
  ir = n;

  for ( ; ; )
  {
    if ( 1 < l )
    {
      l = l - 1;
      indxt = indx[l-1];
      for ( k = 0; k < m; k++ )
      {
        column[k] = a[k+indxt*m];
      }
    }
    else
    {
      indxt = indx[ir-1];
      for ( k = 0; k < m; k++ )
      {
        column[k] = a[k+indxt*m];
      }
      indx[ir-1] = indx[0];
      ir = ir - 1;

      if ( ir == 1 )
      {
        indx[0] = indxt;
        break;
      }
    }

    i = l;
    j = l + l;

    while ( j <= ir )
    {
      if ( j < ir )
      {
        isgn = r8vec_compare ( m, a+indx[j-1]*m, a+indx[j]*m );

        if ( isgn < 0 )
        {
          j = j + 1;
        }
      }

      isgn = r8vec_compare ( m, column, a+indx[j-1]*m );

      if ( isgn < 0 )
      {
        indx[i-1] = indx[j-1];
        i = j;
        j = j + j;
      }
      else
      {
        j = ir + 1;
      }
    }
    indx[i-1] = indxt;
  }
  delete [] column;

  return indx;
}
//****************************************************************************80

void r8col_sort_quick_a ( int m, int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_SORT_QUICK_A ascending quick sorts an R8COL.
//
//  Discussion:
//
//    An R8COL is an M by N array of R8's, regarded as an array of N columns,
//    each of length M.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    17 September 2005
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, the row order of A, and the length of a column.
//
//    Input, int N, the number of columns of A.
//
//    Input/output, double A[M*N].
//    On input, the array to be sorted.
//    On output, the array has been sorted.
//
{
# define LEVEL_MAX 30

  int base;
  int l_segment;
  int level;
  int n_segment;
  int rsave[LEVEL_MAX];
  int r_segment;

  if ( m <= 0 )
  {
    return;
  }

  if ( n < 1 )
  {
    cerr << "\n";
    cerr << "R8COL_SORT_QUICK_A - Fatal error!\n";
    cerr << "  N < 1.\n";
    cerr << "  N = " << n << "\n";
    exit ( 1 );
  }

  if ( n == 1 )
  {
    return;
  }

  level = 1;
  rsave[level-1] = n + 1;
  base = 1;
  n_segment = n;

  for ( ; ; )
  {
//
//  Partition the segment.
//
    r8col_part_quick_a ( m, n_segment, a+(base-1)*m, l_segment, r_segment );
//
//  If the left segment has more than one element, we need to partition it.
//
    if ( 1 < l_segment )
    {
      if ( LEVEL_MAX < level )
      {
        cerr << "\n";
        cerr << "R8COL_SORT_QUICK_A - Fatal error!\n";
        cerr << "  Exceeding recursion maximum of " << LEVEL_MAX << "\n";
        exit ( 1 );
      }

      level = level + 1;
      n_segment = l_segment;
      rsave[level-1] = r_segment + base - 1;
    }
//
//  The left segment and the middle segment are sorted.
//  Must the right segment be partitioned?
//
    else if ( r_segment < n_segment )
    {
      n_segment = n_segment + 1 - r_segment;
      base = base + r_segment - 1;
    }
//
//  Otherwise, we back up a level if there is an earlier one.
//
    else
    {
      for ( ; ; )
      {
        if ( level <= 1 )
        {
          return;
        }

        base = rsave[level-1];
        n_segment = rsave[level-2] - rsave[level-1];
        level = level - 1;

        if ( 0 < n_segment )
        {
          break;
        }
      }
    }
  }
  return;
# undef LEVEL_MAX
}
//****************************************************************************80

void r8col_sorted_tol_undex ( int m, int n, double a[], int unique_num,
  double tol, int undx[], int xdnu[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_SORTED_TOL_UNDEX: index tolerably unique entries of a sorted R8COL.
//
//  Discussion:
//
//    An R8COL is an M by N array of R8's, regarded as an array of N columns,
//    each of length M.
//
//    The goal of this routine is to determine a vector UNDX,
//    which points, to the unique elements of A, in sorted order,
//    and a vector XDNU, which identifies, for each entry of A, the index of
//    the unique sorted element of A.
//
//    This is all done with index vectors, so that the elements of
//    A are never moved.
//
//    Assuming A is already sorted, we examine the entries of A in order,
//    noting the unique entries, creating the entries of XDNU and
//    UNDX as we go.
//
//    Once this process has been completed, the vector A could be
//    replaced by a compressed vector XU, containing the unique entries
//    of X in sorted order, using the formula
//
//      XU(*) = A(UNDX(*)).
//
//    We could then, if we wished, reconstruct the entire vector A, or
//    any element of it, by index, as follows:
//
//      A(I) = XU(XDNU(I)).
//
//    We could then replace A by the combination of XU and XDNU.
//
//    Later, when we need the I-th entry of A, we can locate it as
//    the XDNU(I)-th entry of XU.
//
//    Here is an example of a vector A, the unique sort and inverse unique
//    sort vectors and the compressed unique sorted vector.
//
//      I      A      XU  Undx  Xdnu
//    ----+------+------+-----+-----+
//      0 | 11.0 |  11.0    0     0
//      1 | 11.0 |  22.0    4     0
//      2 | 11.0 |  33.0    7     0
//      3 | 11.0 |  55.0    8     0
//      4 | 22.0 |                1
//      5 | 22.0 |                1
//      6 | 22.0 |                1
//      7 | 33.0 |                2
//      8 | 55.0 |                3
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
//  Parameters:
//
//    Input, int M, the dimension of the data values.
//
//    Input, int N, the number of data values,
//
//    Input, double A[M*N], the data values.
//
//    Input, int UNIQUE_NUM, the number of unique values in A.
//    This value is only required for languages in which the size of
//    UNDX must be known in advance.
//
//    Input, double TOL, a tolerance for equality.
//
//    Output, int UNDX[UNIQUE_NUM], the UNDX vector.
//
//    Output, int XDNU[N], the XDNU vector.
//
{
  double diff;
  int i;
  int i2;
  int i3;
  int j;
  int k;
  bool unique;
//
//  Consider entry I = 0.
//  It is unique, so set the number of unique items to K.
//  Set the K-th unique item to I.
//  Set the representative of item I to the K-th unique item.
//
  i = 0;
  k = 0;
  undx[k] = i;
  xdnu[i] = k;
//
//  Consider entry I.
//
//  If it is unique, increase the unique count K, set the
//  K-th unique item to I, and set the representative of I to K.
//
//  If it is not unique, set the representative of item I to a
//  previously determined unique item that is close to it.
//
  for ( i = 1; i < n; i++ )
  {
    unique = true;

    for ( j = 0; j <= k; j++ )
    {
      i2 = undx[j];
      diff = 0.0;
      for ( i3 = 0; i3 < m; i3++ )
      {
        diff = r8_max ( diff, fabs ( a[i3+i*m] - a[i3+i2*m] ) );
      }
      if ( diff <= tol )
      {
        unique = false;
        xdnu[i] = j;
        break;
      }
    }
    if ( unique )
    {
      k = k + 1;
      undx[k] = i;
      xdnu[i] = k;
    }
  }
  return;
}
//****************************************************************************80

int r8col_sorted_tol_unique ( int m, int n, double a[], double tol )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_SORTED_TOL_UNIQUE keeps tolerably unique elements in a sorted R8COL.
//
//  Discussion:
//
//    An R8COL is an M by N array of R8's, regarded as an array of N columns,
//    each of length M.
//
//    The columns of the array can be ascending or descending sorted.
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
//  Parameters:
//
//    Input, int M, N, the number of rows and columns.
//
//    Input/output, double A(M,N).
//    On input, the sorted array of N columns of M-vectors.
//    On output, a sorted array of columns of M-vectors.
//
//    Input, double TOL, a tolerance for equality.
//
//    Output, int R8COL_SORTED_TOL_UNIQUE, the number of unique columns.
//
{
  double diff;
  int i;
  int j;
  int k;
  bool unique;
  int unique_num;

  if ( n <= 0 )
  {
    unique_num = 0;
    return unique_num;
  }

  unique_num = 1;

  for ( i = 1; i < n; i++ )
  {
    unique = true;
    for ( j = 0; j < unique_num; j++ )
    {
      diff = 0.0;
      for ( k = 0; k < m; k++ )
      {
        diff = r8_max ( diff, fabs ( a[k+i*m] - a[k+j*m] ) );
      }
      if ( diff < tol )
      {
        unique = false;
        break;
      }
    }
    if ( unique )
    {
      for ( k = 0; k < m; k++ )
      {
        a[k+unique_num*m] = a[k+i*m];
      }
      unique_num = unique_num + 1;
    }
  }
  return unique_num;
}
//****************************************************************************80

int r8col_sorted_tol_unique_count ( int m, int n, double a[], double tol )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_SORTED_TOL_UNIQUE_COUNT counts tolerably unique elements in a sorted R8COL.
//
//  Discussion:
//
//    An R8COL is an M by N array of R8's, regarded as an array of N columns,
//    each of length M.
//
//    The columns of the array may be ascending or descending sorted.
//
//    If the tolerance is large enough, then the concept of uniqueness
//    can become ambiguous.  If we have a tolerance of 1.5, then in the
//    list ( 1, 2, 3, 4, 5, 6, 7, 8, 9 ) is it fair to say we have only
//    one unique entry?  That would be because 1 may be regarded as unique,
//    and then 2 is too close to 1 to be unique, and 3 is too close to 2 to
//    be unique and so on.
//
//    This seems wrongheaded.  So I prefer the idea that an item is not
//    unique under a tolerance only if it is close to something that IS unique.
//    Thus, the unique items are guaranteed to cover the space if we include
//    a disk of radius TOL around each one.
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
//  Parameters:
//
//    Input, int M, N, the number of rows and columns.
//
//    Input, double A[M*N], a sorted array, containing
//    N columns of data.
//
//    Input, double TOL, a tolerance for equality.
//
//    Output, int R8COL_SORTED_UNIQUE_COUNT, the number of unique columns.
//
{
  double diff;
  int i;
  int i2;
  int i3;
  int j;
  int k;
  int *undx;
  bool unique;

  undx = new int[n];
//
//  Consider entry I = 0.
//  It is unique, so set the number of unique items to K.
//  Set the K-th unique item to I.
//  Set the representative of item I to the K-th unique item.
//
  i = 0;
  k = 0;
  undx[k] = i;
//
//  Consider entry I.
//
//  If it is unique, increase the unique count K, set the
//  K-th unique item to I, and set the representative of I to K.
//
//  If it is not unique, set the representative of item I to a
//  previously determined unique item that is close to it.
//
  for ( i = 1; i < n; i++ )
  {
    unique = true;

    for ( j = 0; j <= k; j++ )
    {
      i2 = undx[j];
      diff = 0.0;
      for ( i3 = 0; i3 < m; i3++ )
      {
        diff = r8_max ( diff, fabs ( a[i3+i*m] - a[i3+i2*m] ) );
      }
      if ( diff <= tol )
      {
        unique = false;
        break;
      }
    }
    if ( unique )
    {
      k = k + 1;
      undx[k] = i;
    }
  }

  delete [] undx;

  k = k + 1;

  return k;
}
//****************************************************************************80

void r8col_sorted_undex ( int m, int n, double a[], int unique_num,
  int undx[], int xdnu[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_SORTED_UNDEX returns unique sorted indexes for a sorted R8COL.
//
//  Discussion:
//
//    An R8COL is an M by N array of R8's, regarded as an array of N columns,
//    each of length M.
//
//    The goal of this routine is to determine a vector UNDX,
//    which points, to the unique elements of A, in sorted order,
//    and a vector XDNU, which identifies, for each entry of A, the index of
//    the unique sorted element of A.
//
//    This is all done with index vectors, so that the elements of
//    A are never moved.
//
//    Assuming A is already sorted, we examine the entries of A in order,
//    noting the unique entries, creating the entries of XDNU and
//    UNDX as we go.
//
//    Once this process has been completed, the vector A could be
//    replaced by a compressed vector XU, containing the unique entries
//    of X in sorted order, using the formula
//
//      XU(*) = A(UNDX(*)).
//
//    We could then, if we wished, reconstruct the entire vector A, or
//    any element of it, by index, as follows:
//
//      A(I) = XU(XDNU(I)).
//
//    We could then replace A by the combination of XU and XDNU.
//
//    Later, when we need the I-th entry of A, we can locate it as
//    the XDNU(I)-th entry of XU.
//
//    Here is an example of a vector A, the unique sort and inverse unique
//    sort vectors and the compressed unique sorted vector.
//
//      I      A      XU  Undx  Xdnu
//    ----+------+------+-----+-----+
//      0 | 11.0 |  11.0    0     0
//      1 | 11.0 |  22.0    4     0
//      2 | 11.0 |  33.0    7     0
//      3 | 11.0 |  55.0    8     0
//      4 | 22.0 |                1
//      5 | 22.0 |                1
//      6 | 22.0 |                1
//      7 | 33.0 |                2
//      8 | 55.0 |                3
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
//  Parameters:
//
//    Input, int M, the dimension of the data values.
//
//    Input, int N, the number of data values,
//
//    Input, double A[M*N], the data values.
//
//    Input, int UNIQUE_NUM, the number of unique values in A.
//    This value is only required for languages in which the size of
//    UNDX must be known in advance.
//
//    Output, int UNDX[UNIQUE_NUM], the UNDX vector.
//
//    Output, int XDNU[N], the XDNU vector.
//
{
  double diff;
  int i;
  int j;
  int k;
//
//  Walk through the sorted array.
//
  i = 0;

  j = 0;
  undx[j] = i;

  xdnu[i] = j;

  for ( i = 1; i < n; i++ )
  {
    diff = 0.0;
    for ( k = 0; k < m; k++ )
    {
      diff = r8_max ( diff, fabs ( a[k+i*m] - a[k+undx[j]*m] ) );
    }
    if ( 0.0 < diff )
    {
      j = j + 1;
      undx[j] = i;
    }
    xdnu[i] = j;
  }
  return;
}
//****************************************************************************80

int r8col_sorted_unique ( int m, int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_SORTED_UNIQUE keeps unique elements in a sorted R8COL.
//
//  Discussion:
//
//    An R8COL is an M by N array of R8's, regarded as an array of N columns,
//    each of length M.
//
//    The columns of the array can be ascending or descending sorted.
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
//  Parameters:
//
//    Input, int M, N, the number of rows and columns.
//
//    Input/output, double A(M,N).
//    On input, the sorted array of N columns of M-vectors.
//    On output, a sorted array of columns of M-vectors.
//
//    Output, int UNIQUE_NUM, the number of unique columns.
//
{
  bool equal;
  int i;
  int j1;
  int j2;
  int unique_num;

  if ( n <= 0 )
  {
    unique_num = 0;
    return unique_num;
  }

  j1 = 0;

  for ( j2 = 1; j2 < n; j2++ )
  {
    equal = true;
    for ( i = 0; i < m; i++ )
    {
      if ( a[i+j1*m] != a[i+j2*m] )
      {
        equal = false;
        break;
      }
    }
    if ( !equal )
    {
      j1 = j1 + 1;
      for ( i = 0; i < m; i++ )
      {
        a[i+j1*m] = a[i+j2*m];
      }
    }
  }

  unique_num = j1 + 1;

  return unique_num;
}
//****************************************************************************80

int r8col_sorted_unique_count ( int m, int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_SORTED_UNIQUE_COUNT counts unique elements in a sorted R8COL.
//
//  Discussion:
//
//    An R8COL is an M by N array of R8's, regarded as an array of N columns,
//    each of length M.
//
//    The columns of the array may be ascending or descending sorted.
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
//  Parameters:
//
//    Input, int M, N, the number of rows and columns.
//
//    Input, double A[M*N], a sorted array, containing
//    N columns of data.
//
//    Output, int R8COL_SORTED_UNIQUE_COUNT, the number of unique columns.
//
{
  bool equal;
  int i;
  int j1;
  int j2;
  int unique_num;

  unique_num = 0;

  if ( n <= 0 )
  {
    return unique_num;
  }

  unique_num = 1;
  j1 = 0;

  for ( j2 = 1; j2 < n; j2++ )
  {
    equal = true;
    for ( i = 0; i < m; i++ )
    {
      if ( a[i+j1*m] != a[i+j2*m] )
      {
        equal = false;
        break;
      }
    }
    if ( !equal )
    {
      unique_num = unique_num + 1;
      j1 = j2;
    }
  }

  return unique_num;
}
//****************************************************************************80

void r8col_sortr_a ( int m, int n, double a[], int key )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_SORTR_A ascending sorts one column of an R8COL, adjusting all entries.
//
//  Discussion:
//
//    An R8COL is an M by N array of R8's, regarded as an array of N columns,
//    each of length M.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    15 September 2005
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns.
//
//    Input/output, double A[M*N].
//    On input, an unsorted M by N array.
//    On output, rows of the array have been shifted in such
//    a way that column KEY of the array is in nondecreasing order.
//
//    Input, int KEY, the column in which the "key" value
//    is stored.  On output, column KEY of the array will be
//    in nondecreasing order.
//
{
  int i;
  int indx;
  int isgn;
  int j;
  int k;
  double t;

  if ( m <= 0 )
  {
    return;
  }

  if ( key < 1 || n < key )
  {
    cerr << "\n";
    cerr << "R8COL_SORTR_A - Fatal error!\n";
    cerr << "  The value of KEY is not a legal column index.\n";
    cerr << "  KEY = " << key << "\n";
    cerr << "  N = " << n << "\n";
    exit ( 1 );
  }
//
//  Initialize.
//
  i = 0;
  indx = 0;
  isgn = 0;
  j = 0;
//
//  Call the external heap sorter.
//
  for ( ; ; )
  {
    sort_heap_external ( m, indx, i, j, isgn );
//
//  Interchange the I and J objects.
//
    if ( 0 < indx )
    {
      for ( k = 0; k < n; k++ )
      {
        t          = a[i-1+k*m];
        a[i-1+k*m] = a[j-1+k*m];
        a[j-1+k*m] = t;
      }
    }
//
//  Compare the I and J objects.
//
    else if ( indx < 0 )
    {
      if ( a[i-1+(key-1)*m] < a[j-1+(key-1)*m] )
      {
        isgn = -1;
      }
      else
      {
        isgn = +1;
      }
    }
    else if ( indx == 0 )
    {
      break;
    }
  }

  return;
}
//****************************************************************************80

double *r8col_sum ( int m, int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_SUM sums the columns of an R8COL.
//
//  Discussion:
//
//    An R8COL is an M by N array of R8's, regarded as an array of N columns,
//    each of length M.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    15 September 2005
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns.
//
//    Input, double A[M*N], the array to be examined.
//
//    Output, double R8COL_SUM[N], the sums of the columns.
//
{
  double *colsum;
  int i;
  int j;

  colsum = new double[n];

  for ( j = 0; j < n; j++ )
  {
    colsum[j] = 0.0;
    for ( i = 0; i < m; i++ )
    {
      colsum[j] = colsum[j] + a[i+j*m];
    }
  }
  return colsum;
}
//****************************************************************************80

void r8col_swap ( int m, int n, double a[], int j1, int j2 )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_SWAP swaps columns J1 and J2 of an R8COL.
//
//  Discussion:
//
//    An R8COL is an M by N array of R8's, regarded as an array of N columns,
//    each of length M.
//
//  Example:
//
//    Input:
//
//      M = 3, N = 4, J1 = 2, J2 = 4
//
//      A = (
//        1.  2.  3.  4.
//        5.  6.  7.  8.
//        9. 10. 11. 12. )
//
//    Output:
//
//      A = (
//        1.  4.  3.  2.
//        5.  8.  7.  6.
//        9. 12. 11. 10. )
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    23 October 2008
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns.
//
//    Input/output, double A[M*N], the M by N array.
//
//    Input, int J1, J2, the columns to be swapped.
//    These columns are 1-based.
//
{
  int i;
  double temp;

  if ( j1 < 1 || n < j1 || j2 < 1 || n < j2 )
  {
    cerr << "\n";
    cerr << "R8COL_SWAP - Fatal error!\n";
    cerr << "  J1 or J2 is out of bounds.\n";
    cerr << "  J1 =   " << j1 << "\n";
    cerr << "  J2 =   " << j2 << "\n";
    cerr << "  NCOL = " << n << "\n";
    exit ( 1 );
  }

  if ( j1 == j2 )
  {
    return;
  }

  for ( i = 0; i < m; i++ )
  {
    temp          = a[i+(j1-1)*m];
    a[i+(j1-1)*m] = a[i+(j2-1)*m];
    a[i+(j2-1)*m] = temp;
  }

  return;
}
//****************************************************************************80

double *r8col_to_r8vec ( int m, int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_TO_R8VEC converts an R8COL to an R8VEC.
//
//  Discussion:
//
//    An R8COL is an M by N array of R8's, regarded as an array of N columns,
//    each of length M.
//
//    This routine is not really useful in our C++ implementation, since
//    we actually store an M by N matrix exactly as a vector already.
//
//  Example:
//
//    M = 3, N = 4
//
//    A =
//      11 12 13 14
//      21 22 23 24
//      31 32 33 34
//
//    R8COL_TO_R8VEC = ( 11, 21, 31, 12, 22, 32, 13, 23, 33, 14, 24, 34 )
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    05 December 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns.
//
//    Input, double A[M*N], the M by N array.
//
//    Output, double X[M*N], a vector containing the N columns of A.
//
{
  int i;
  int j;
  int k;
  double *x;

  x = new double[m*n];

  k = 0;
  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < m; i++ )
    {
      x[k] = a[i+j*m];
      k = k + 1;
    }
  }

  return x;
}
//****************************************************************************80

void r8col_tol_undex ( int m, int n, double a[], int unique_num, double tol,
  int undx[], int xdnu[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_TOL_UNDEX indexes tolerably unique entries of an R8COL.
//
//  Discussion:
//
//    An R8COL is an M by N array of R8's, regarded as an array of N columns,
//    each of length M.
//
//    The goal of this routine is to determine a vector UNDX,
//    which points to the unique elements of A, in sorted order,
//    and a vector XDNU, which identifies, for each entry of A, the index of
//    the unique sorted element of A.
//
//    This is all done with index vectors, so that the elements of
//    A are never moved.
//
//    The first step of the algorithm requires the indexed sorting
//    of A, which creates arrays INDX and XDNI.  (If all the entries
//    of A are unique, then these arrays are the same as UNDX and XDNU.)
//
//    We then use INDX to examine the entries of A in sorted order,
//    noting the unique entries, creating the entries of XDNU and
//    UNDX as we go.
//
//    Once this process has been completed, the vector A could be
//    replaced by a compressed vector XU, containing the unique entries
//    of A in sorted order, using the formula
//
//      XU(*) = A(UNDX(*)).
//
//    We could then, if we wished, reconstruct the entire vector A, or
//    any element of it, by index, as follows:
//
//      A(I) = XU(XDNU(I)).
//
//    We could then replace A by the combination of XU and XDNU.
//
//    Later, when we need the I-th entry of A, we can locate it as
//    the XDNU(I)-th entry of XU.
//
//    Here is an example of a vector A, the sort and inverse sort
//    index vectors, and the unique sort and inverse unique sort vectors
//    and the compressed unique sorted vector.
//
//      I     A  Indx  Xdni       XU  Undx  Xdnu
//    ----+-----+-----+-----+--------+-----+-----+
//      0 | 11.     0     0 |    11.     0     0
//      1 | 22.     2     4 |    22.     1     1
//      2 | 11.     5     1 |    33.     3     0
//      3 | 33.     8     7 |    55.     4     2
//      4 | 55.     1     8 |                  3
//      5 | 11.     6     2 |                  0
//      6 | 22.     7     5 |                  1
//      7 | 22.     3     6 |                  1
//      8 | 11.     4     3 |                  0
//
//    INDX(2) = 3 means that sorted item(2) is A(3).
//    XDNI(2) = 5 means that A(2) is sorted item(5).
//
//    UNDX(3) = 4 means that unique sorted item(3) is at A(4).
//    XDNU(8) = 2 means that A(8) is at unique sorted item(2).
//
//    XU(XDNU(I))) = X(I).
//    XU(I)        = X(UNDX(I)).
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
//  Parameters:
//
//    Input, int M, the dimension of the data values.
//
//    Input, int N, the number of data values,
//
//    Input, double A[M*N], the data values.
//
//    Input, int UNIQUE_NUM, the number of unique values in A.
//    This value is only required for languages in which the size of
//    UNDX must be known in advance.
//
//    Input, double TOL, a tolerance for equality.
//
//    Output, int UNDX[UNIQUE_NUM], the UNDX vector.
//
//    Output, int XDNU[N], the XDNU vector.
//
{
  double diff;
  int i;
  int i2;
  int *indx;
  int j;
  int k;
  bool unique;
//
//  Implicitly sort the array.
//
  indx = r8col_sort_heap_index_a ( m, n, a );
//
//  Consider entry I = 0.
//  It is unique, so set the number of unique items to K.
//  Set the K-th unique item to I.
//  Set the representative of item I to the K-th unique item.
//
  i = 0;
  k = 0;
  undx[k] = indx[i];
  xdnu[indx[i]] = k;
//
//  Consider entry I.
//
//  If it is unique, increase the unique count K, set the
//  K-th unique item to I, and set the representative of I to K.
//
//  If it is not unique, set the representative of item I to a
//  previously determined unique item that is close to it.
//
  for ( i = 1; i < n; i++ )
  {
    unique = true;
    for ( j = 0; j <= k; j++ )
    {
      diff = 0.0;
      for ( i2 = 0; i2 < m; i2++ )
      {
        diff = r8_max ( diff, fabs ( a[i2+indx[i]*m] - a[i2+undx[j]*m] ) );
      }
      if ( diff <= tol )
      {
        unique = false;
        xdnu[indx[i]] = j;
        break;
      }
    }
    if ( unique )
    {
      k = k + 1;
      undx[k] = indx[i];
      xdnu[indx[i]] = k;
    }
  }
  delete [] indx;

  return;
}
//****************************************************************************80

int r8col_tol_unique_count ( int m, int n, double a[], double tol )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_TOL_UNIQUE_COUNT counts tolerably unique entries in an R8COL.
//
//  Discussion:
//
//    An R8COL is an M by N array of R8's, regarded as an array of N columns,
//    each of length M.
//
//    The columns of the array may be ascending or descending sorted.
//
//    If the tolerance is large enough, then the concept of uniqueness
//    can become ambiguous.  If we have a tolerance of 1.5, then in the
//    list ( 1, 2, 3, 4, 5, 6, 7, 8, 9 ) is it fair to say we have only
//    one unique entry?  That would be because 1 may be regarded as unique,
//    and then 2 is too close to 1 to be unique, and 3 is too close to 2 to
//    be unique and so on.
//
//    This seems wrongheaded.  So I prefer the idea that an item is not
//    unique under a tolerance only if it is close to something that IS unique.
//    Thus, the unique items are guaranteed to cover the space if we include
//    a disk of radius TOL around each one.
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
//  Parameters:
//
//    Input, int M, N, the number of rows and columns.
//
//    Input, double A[M*N], the array of N columns of data.
//
//    Input, double TOL, a tolerance for equality.
//
//    Output, int R8COL_TOL_UNIQUE_COUNT, the number of unique columns.
//
{
  double diff;
  int i;
  int i2;
  int *indx;
  int j;
  int k;
  bool unique;
  int *undx;

  undx = new int[n];
//
//  Implicitly sort the array.
//
  indx = r8col_sort_heap_index_a ( m, n, a );
//
//  Consider entry I = 0.
//  It is unique, so set the number of unique items to K.
//  Set the K-th unique item to I.
//  Set the representative of item I to the K-th unique item.
//
  i = 0;
  k = 0;
  undx[k] = indx[i];
//
//  Consider entry I.
//
//  If it is unique, increase the unique count K, set the
//  K-th unique item to I, and set the representative of I to K.
//
//  If it is not unique, set the representative of item I to a
//  previously determined unique item that is close to it.
//
  for ( i = 1; i < n; i++ )
  {
    unique = true;
    for ( j = 0; j <= k; j++ )
    {
      diff = 0.0;
      for ( i2 = 0; i2 < m; i2++ )
      {
        diff = r8_max ( diff, fabs ( a[i2+indx[i]*m] - a[i2+undx[j]*m] ) );
      }
      if ( diff <= tol )
      {
        unique = false;
        break;
      }
    }
    if ( unique )
    {
      k = k + 1;
      undx[k] = indx[i];
    }
  }
  delete [] indx;
  delete [] undx;

  k = k + 1;

  return k;
}
//****************************************************************************80

int *r8col_tol_unique_index ( int m, int n, double a[], double tol )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_TOL_UNIQUE_INDEX indexes tolerably unique entries in an R8COL.
//
//  Discussion:
//
//    An R8COL is an M by N array of R8's, regarded as an array of N columns,
//    each of length M.
//
//    For element A(1:M,J) of the matrix, UNIQUE_INDEX(J) is the uniqueness index
//    of A(1:M,J).  That is, if A_UNIQUE contains the unique elements of A,
//    gathered in order, then
//
//      A_UNIQUE ( 1:M, UNIQUE_INDEX(J) ) = A(1:M,J)
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
//  Parameters:
//
//    Input, int M, N, the number of rows and columns of A.
//
//    Input, double A[M*N], the array.
//
//    Input, double TOL, a tolerance for equality.
//
//    Output, int R8COL_TOL_UNIQUE_INDEX[N], the unique index.
//
{
  double diff;
  int i;
  int j1;
  int j2;
  int *unique_index;
  int unique_num;

  unique_index = new int[n];

  for ( j1 = 0; j1 < n; j1++ )
  {
    unique_index[j1] = -1;
  }
  unique_num = 0;

  for ( j1 = 0; j1 < n; j1++ )
  {
    if ( unique_index[j1] == -1 )
    {
      unique_index[j1] = unique_num;

      for ( j2 = j1 + 1; j2 < n; j2++ )
      {
        diff = 0.0;
        for ( i = 0; i < m; i++ )
        {
          diff = r8_max ( diff, fabs ( a[i+j1*m] - a[i+j2*m] ) );
        }
        if ( diff <= tol )
        {
          unique_index[j2] = unique_num;
        }
      }
      unique_num = unique_num + 1;
    }
  }
  return unique_index;
}
//****************************************************************************80

void r8col_transpose_print ( int m, int n, double a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_TRANSPOSE_PRINT prints an R8MAT, transposed.
//
//  Discussion:
//
//    An R8COL is an M by N array of R8's, regarded as an array of N columns,
//    each of length M.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 September 2009
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns.
//
//    Input, double A[M*N], an M by N matrix to be printed.
//
//    Input, string TITLE, a title.
//
{
  r8col_transpose_print_some ( m, n, a, 1, 1, m, n, title );

  return;
}
//****************************************************************************80

void r8col_transpose_print_some ( int m, int n, double a[], int ilo, int jlo,
  int ihi, int jhi, string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_TRANSPOSE_PRINT_SOME prints some of an R8MAT, transposed.
//
//  Discussion:
//
//    An R8COL is an M by N array of R8's, regarded as an array of N columns,
//    each of length M.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 April 2014
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns.
//
//    Input, double A[M*N], an M by N matrix to be printed.
//
//    Input, int ILO, JLO, the first row and column to print.
//
//    Input, int IHI, JHI, the last row and column to print.
//
//    Input, string TITLE, a title.
//
{
# define INCX 5

  int i;
  int i2;
  int i2hi;
  int i2lo;
  int i2lo_hi;
  int i2lo_lo;
  int inc;
  int j;
  int j2hi;
  int j2lo;

  cout << "\n";
  cout << title << "\n";

  if ( m <= 0 || n <= 0 )
  {
    cout << "\n";
    cout << "  (None)\n";
    return;
  }

  if ( ilo < 1 )
  {
    i2lo_lo = 1;
  }
  else
  {
    i2lo_lo = ilo;
  }

  if ( ihi < m )
  {
    i2lo_hi = m;
  }
  else
  {
    i2lo_hi = ihi;
  }

  for ( i2lo = i2lo_lo; i2lo <= i2lo_hi; i2lo = i2lo + INCX )
  {
    i2hi = i2lo + INCX - 1;

    if ( m < i2hi )
    {
      i2hi = m;
    }
    if ( ihi < i2hi )
    {
      i2hi = ihi;
    }

    inc = i2hi + 1 - i2lo;

    cout << "\n";
    cout << "  Row: ";
    for ( i = i2lo; i <= i2hi; i++ )
    {
      cout << setw(7) << i - 1 << "       ";
    }
    cout << "\n";
    cout << "  Col\n";
    cout << "\n";

    if ( jlo < 1 )
    {
      j2lo = 1;
    }
    else
    {
      j2lo = jlo;
    }
    if ( n < jhi )
    {
      j2hi = n;
    }
    else
    {
      j2hi = jhi;
    }

    for ( j = j2lo; j <= j2hi; j++ )
    {
      cout << setw(5) << j - 1 << ":";
      for ( i2 = 1; i2 <= inc; i2++ )
      {
        i = i2lo - 1 + i2;
        cout << setw(14) << a[(i-1)+(j-1)*m];
      }
      cout << "\n";
    }
  }

  return;
# undef INCX
}
//****************************************************************************80

void r8col_undex ( int m, int n, double a[], int unique_num, int undx[],
  int xdnu[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_UNDEX indexes unique entries in an R8COL.
//
//  Discussion:
//
//    An R8COL is an M by N array of R8's, regarded as an array of N columns,
//    each of length M.
//
//    The goal of this routine is to determine a vector UNDX,
//    which points to the unique elements of A, in sorted order,
//    and a vector XDNU, which identifies, for each entry of A, the index of
//    the unique sorted element of A.
//
//    This is all done with index vectors, so that the elements of
//    A are never moved.
//
//    The first step of the algorithm requires the indexed sorting
//    of A, which creates arrays INDX and XDNI.  (If all the entries
//    of A are unique, then these arrays are the same as UNDX and XDNU.)
//
//    We then use INDX to examine the entries of A in sorted order,
//    noting the unique entries, creating the entries of XDNU and
//    UNDX as we go.
//
//    Once this process has been completed, the vector A could be
//    replaced by a compressed vector XU, containing the unique entries
//    of A in sorted order, using the formula
//
//      XU(*) = A(UNDX(*)).
//
//    We could then, if we wished, reconstruct the entire vector A, or
//    any element of it, by index, as follows:
//
//      A(I) = XU(XDNU(I)).
//
//    We could then replace A by the combination of XU and XDNU.
//
//    Later, when we need the I-th entry of A, we can locate it as
//    the XDNU(I)-th entry of XU.
//
//    Here is an example of a vector A, the sort and inverse sort
//    index vectors, and the unique sort and inverse unique sort vectors
//    and the compressed unique sorted vector.
//
//      I     A  Indx  Xdni       XU  Undx  Xdnu
//    ----+-----+-----+-----+--------+-----+-----+
//      0 | 11.     0     0 |    11.     0     0
//      1 | 22.     2     4 |    22.     1     1
//      2 | 11.     5     1 |    33.     3     0
//      3 | 33.     8     7 |    55.     4     2
//      4 | 55.     1     8 |                  3
//      5 | 11.     6     2 |                  0
//      6 | 22.     7     5 |                  1
//      7 | 22.     3     6 |                  1
//      8 | 11.     4     3 |                  0
//
//    INDX(2) = 3 means that sorted item(2) is A(3).
//    XDNI(2) = 5 means that A(2) is sorted item(5).
//
//    UNDX(3) = 4 means that unique sorted item(3) is at A(4).
//    XDNU(8) = 2 means that A(8) is at unique sorted item(2).
//
//    XU(XDNU(I))) = A(I).
//    XU(I)        = A(UNDX(I)).
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
//  Parameters:
//
//    Input, int M, the dimension of the data values.
//
//    Input, int N, the number of data values,
//
//    Input, double A[M*N], the data values.
//
//    Input, int UNIQUE_NUM, the number of unique values in A.
//    This value is only required for languages in which the size of
//    UNDX must be known in advance.
//
//    Output, int UNDX[UNIQUE_NUM], the UNDX vector.
//
//    Output, int XDNU[N], the XDNU vector.
//
{
  double diff;
  int i;
  int *indx;
  int j;
  int k;
//
//  Implicitly sort the array.
//
  indx = r8col_sort_heap_index_a ( m, n, a );
//
//  Walk through the implicitly sorted array.
//
  i = 0;

  j = 0;
  undx[j] = indx[i];

  xdnu[indx[i]] = j;

  for ( i = 1; i < n; i++ )
  {
    diff = 0.0;
    for ( k = 0; k < m; k++ )
    {
      diff = r8_max ( diff, fabs ( a[k+indx[i]*m] - a[k+undx[j]*m] ) );
    }
    if ( 0.0 < diff )
    {
      j = j + 1;
      undx[j] = indx[i];
    }
    xdnu[indx[i]] = j;
  }
  delete [] indx;

  return;
}
//****************************************************************************80

double *r8col_uniform_01_new ( int m, int n, int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_UNIFORM_01_NEW returns a unit pseudorandom R8COL.
//
//  Discussion:
//
//    An R8COL is an array of R8 values, regarded as a set of column vectors.
//
//    This routine implements the recursion
//
//      seed = 16807 * seed mod ( 2^31 - 1 )
//      unif = seed / ( 2^31 - 1 )
//
//    The integer arithmetic never requires more than 32 bits,
//    including a sign bit.
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
//  Reference:
//
//    Paul Bratley, Bennett Fox, Linus Schrage,
//    A Guide to Simulation,
//    Springer Verlag, pages 201-202, 1983.
//
//    Bennett Fox,
//    Algorithm 647:
//    Implementation and Relative Efficiency of Quasirandom
//    Sequence Generators,
//    ACM Transactions on Mathematical Software,
//    Volume 12, Number 4, pages 362-376, 1986.
//
//    Philip Lewis, Allen Goodman, James Miller,
//    A Pseudo-Random Number Generator for the System/360,
//    IBM Systems Journal,
//    Volume 8, pages 136-143, 1969.
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns.
//
//    Input/output, int &SEED, the "seed" value.  Normally, this
//    value should not be 0, otherwise the output value of SEED
//    will still be 0, and R8_UNIFORM will be 0.  On output, SEED has
//    been updated.
//
//    Output, double R8COL_UNIFORM_01_NEW[M*N], a matrix of pseudorandom values.
//
{
  int i;
  const int i4_huge = 2147483647;
  int j;
  int k;
  double *r;

  r = new double[m*n];

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < m; i++ )
    {
      k = seed / 127773;

      seed = 16807 * ( seed - k * 127773 ) - k * 2836;

      if ( seed < 0 )
      {
        seed = seed + i4_huge;
      }
      r[i+j*m] = ( double ) ( seed ) * 4.656612875E-10;
    }
  }

  return r;
}
//****************************************************************************80

double *r8col_uniform_ab_new ( int m, int n, double a, double b, int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_UNIFORM_AB_NEW returns a new scaled pseudorandom R8COL.
//
//  Discussion:
//
//    An R8COL is an array of R8 values, regarded as a set of column vectors.
//
//    This routine implements the recursion
//
//      seed = ( 16807 * seed ) mod ( 2^31 - 1 )
//      u = seed / ( 2^31 - 1 )
//
//    The integer arithmetic never requires more than 32 bits,
//    including a sign bit.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 April 2012
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Paul Bratley, Bennett Fox, Linus Schrage,
//    A Guide to Simulation,
//    Second Edition,
//    Springer, 1987,
//    ISBN: 0387964673,
//    LC: QA76.9.C65.B73.
//
//    Bennett Fox,
//    Algorithm 647:
//    Implementation and Relative Efficiency of Quasirandom
//    Sequence Generators,
//    ACM Transactions on Mathematical Software,
//    Volume 12, Number 4, December 1986, pages 362-376.
//
//    Pierre L'Ecuyer,
//    Random Number Generation,
//    in Handbook of Simulation,
//    edited by Jerry Banks,
//    Wiley, 1998,
//    ISBN: 0471134031,
//    LC: T57.62.H37.
//
//    Peter Lewis, Allen Goodman, James Miller,
//    A Pseudo-Random Number Generator for the System/360,
//    IBM Systems Journal,
//    Volume 8, Number 2, 1969, pages 136-143.
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns.
//
//    Input, double A, B, the limits of the pseudorandom values.
//
//    Input/output, int &SEED, the "seed" value.  Normally, this
//    value should not be 0.  On output, SEED has 
//    been updated.
//
//    Output, double R8COL_UNIFORM_AB_NEW[M*N], a matrix of pseudorandom values.
//
{
  int i;
  const int i4_huge = 2147483647;
  int j;
  int k;
  double *r;

  if ( seed == 0 )
  {
    cerr << "\n";
    cerr << "R8COL_UNIFORM_AB_NEW - Fatal error!\n";
    cerr << "  Input value of SEED = 0.\n";
    exit ( 1 );
  }

  r = new double[m*n];

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < m; i++ )
    {
      k = seed / 127773;

      seed = 16807 * ( seed - k * 127773 ) - k * 2836;

      if ( seed < 0 )
      {
        seed = seed + i4_huge;
      }

      r[i+j*m] = a + ( b - a ) * ( double ) ( seed ) * 4.656612875E-10;
    }
  }

  return r;
}
//****************************************************************************80

double *r8col_uniform_abvec_new ( int m, int n, double a[], double b[], int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_UNIFORM_ABVEC_NEW fills an R8COL with scaled pseudorandom numbers.
//
//  Discussion:
//
//    An R8COL is an array of R8 values, regarded as a set of column vectors.
//
//    The user specifies a minimum and maximum value for each row.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    19 December 2011
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Paul Bratley, Bennett Fox, Linus Schrage,
//    A Guide to Simulation,
//    Springer Verlag, pages 201-202, 1983.
//
//    Bennett Fox,
//    Algorithm 647:
//    Implementation and Relative Efficiency of Quasirandom
//    Sequence Generators,
//    ACM Transactions on Mathematical Software,
//    Volume 12, Number 4, pages 362-376, 1986.
//
//    Philip Lewis, Allen Goodman, James Miller,
//    A Pseudo-Random Number Generator for the System/360,
//    IBM Systems Journal,
//    Volume 8, pages 136-143, 1969.
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns.
//
//    Input, double A[M], B[M], the upper and lower limits.
//
//    Input/output, int &SEED, the "seed" value.  Normally, this
//    value should not be 0.  On output, SEED has been updated.
//
//    Output, double R8COL_UNIFORM_ABVEC_NEW[M*N], a matrix of 
//    pseudorandom values.
//
{
  int i;
  const int i4_huge = 2147483647;
  int j;
  int k;
  double *r;

  r = new double[m*n];

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < m; i++ )
    {
      k = seed / 127773;

      seed = 16807 * ( seed - k * 127773 ) - k * 2836;

      if ( seed < 0 )
      {
        seed = seed + i4_huge;
      }
      r[i+j*m] = a[i] 
        + ( b[i] - a[i] ) * ( double ) ( seed ) * 4.656612875E-10;
    }
  }

  return r;
}
//****************************************************************************80

int r8col_unique_count ( int m, int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_UNIQUE_COUNT counts unique entries in an R8COL.
//
//  Discussion:
//
//    An R8COL is an M by N array of R8's, regarded as an array of N columns,
//    each of length M.
//
//    The columns of the array may be ascending or descending sorted.
//
//    If the tolerance is large enough, then the concept of uniqueness
//    can become ambiguous.  If we have a tolerance of 1.5, then in the
//    list ( 1, 2, 3, 4, 5, 6, 7, 8, 9 ) is it fair to say we have only
//    one unique entry?  That would be because 1 may be regarded as unique,
//    and then 2 is too close to 1 to be unique, and 3 is too close to 2 to
//    be unique and so on.
//
//    This seems wrongheaded.  So I prefer the idea that an item is not
//    unique under a tolerance only if it is close to something that IS unique.
//    Thus, the unique items are guaranteed to cover the space if we include
//    a disk of radius TOL around each one.
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
//  Parameters:
//
//    Input, int M, N, the number of rows and columns.
//
//    Input, double A[M*N], the array of N columns of data.
//
//    Output, int R8COL_UNIQUE_COUNT, the number of unique columns.
//
{
  double diff;
  int i;
  int j1;
  int j2;
  bool *unique;
  int unique_num;

  unique_num = 0;

  unique = new bool[n];

  for ( j1 = 0; j1 < n; j1++ )
  {
    unique_num = unique_num + 1;
    unique[j1] = true;

    for ( j2 = 0; j2 < j1; j2++ )
    {
      diff = 0.0;
      for ( i = 0; i < m; i++ )
      {
        diff = r8_max ( diff, fabs ( a[i+j1*m] - a[i+j2*m] ) );
      }
      if ( diff == 0.0 )
      {
        unique_num = unique_num - 1;
        unique[j1] = false;
        break;
      }
    }
  }

  delete [] unique;

  return unique_num;
}
//****************************************************************************80

int *r8col_unique_index ( int m, int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_UNIQUE_INDEX indexes unique entries in an R8COL.
//
//  Discussion:
//
//    An R8COL is an M by N array of R8's, regarded as an array of N columns,
//    each of length M.
//
//    For element A(1:M,J) of the matrix, UNIQUE_INDEX(J) is the uniqueness index
//    of A(1:M,J).  That is, if A_UNIQUE contains the unique elements of A,
//    gathered in order, then
//
//      A_UNIQUE ( 1:M, UNIQUE_INDEX(J) ) = A(1:M,J)
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
//  Parameters:
//
//    Input, int M, N, the number of rows and columns of A.
//    The length of an "element" of A, and the number of "elements".
//
//    Input, double A[M*N], the array.
//
//    Output, int R8COL_UNIQUE_INDEX[N], the unique index.
//
{
  double diff;
  int i;
  int j1;
  int j2;
  int *unique_index;
  int unique_num;

  unique_index = new int[n];

  for ( j1 = 0; j1 < n; j1++ )
  {
    unique_index[j1] = -1;
  }
  unique_num = 0;

  for ( j1 = 0; j1 < n; j1++ )
  {
    if ( unique_index[j1] == -1 )
    {
      unique_index[j1] = unique_num;

      for ( j2 = j1 + 1; j2 < n; j2++ )
      {
        diff = 0.0;
        for ( i = 0; i < m; i++ )
        {
          diff = r8_max ( diff, fabs ( a[i+j1*m] - a[i+j2*m] ) );
        }
        if ( diff == 0.0 )
        {
          unique_index[j2] = unique_num;
        }
      }
      unique_num = unique_num + 1;
    }
  }
  return unique_index;
}
//****************************************************************************80

double *r8col_variance ( int m, int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8COL_VARIANCE returns the variances of an R8COL.
//
//  Discussion:
//
//    An R8COL is an M by N array of R8's, regarded as an array of N columns,
//    each of length M.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    13 September 2005
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns in the array.
//
//    Input, double A[M*N], the array whose variances are desired.
//
//    Output, double R8COL_VARIANCE[N], the variances of the rows.
//
{
  int i;
  int j;
  double mean;
  double *variance;

  variance = new double[n];

  for ( j = 0; j < n; j++ )
  {
    mean = 0.0;
    for ( i = 0; i < m; i++ )
    {
      mean = mean + a[i+j*m];
    }
    mean = mean / ( double ) ( m );

    variance[j] = 0.0;
    for ( i = 0; i < m; i++ )
    {
      variance[j] = variance[j] + pow ( a[i+j*m] - mean, 2 );
    }

    if ( 1 < m )
    {
      variance[j] = variance[j] / ( double ) ( m - 1 );
    }
    else
    {
      variance[j] = 0.0;
    }
  }

  return variance;
}
//****************************************************************************80

int r8vec_compare ( int n, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_COMPARE compares two R8VEC's.
//
//  Discussion:
//
//    An R8VEC is a vector of R8's.
//
//    The lexicographic ordering is used.
//
//  Example:
//
//    Input:
//
//      A1 = ( 2.0, 6.0, 2.0 )
//      A2 = ( 2.0, 8.0, 12.0 )
//
//    Output:
//
//      ISGN = -1
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    23 September 2005
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of entries in the vectors.
//
//    Input, double A[N], B[N], the vectors to be compared.
//
//    Output, int R8VEC_COMPARE, the results of the comparison:
//    -1, A is lexicographically less than B,
//     0, A is equal to B,
//    +1, A is lexicographically greater than B.
//
{
  int isgn;
  int k;

  isgn = 0;

  for ( k = 0; k < n; k++ )
  {
    if ( a[k] < b[k] )
    {
      isgn = -1;
      return isgn;
    }
    else if ( b[k] < a[k] )
    {
      isgn = +1;
      return isgn;
    }
  }
  return isgn;
}
//****************************************************************************80

bool r8vec_eq ( int n, double a1[], double a2[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_EQ is true if every pair of entries in two R8VEC's is equal.
//
//  Discussion:
//
//    An R8VEC is a vector of R8's.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    28 August 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of entries in the vectors.
//
//    Input, double A1[N], A2[N], two vectors to compare.
//
//    Output, bool R8VEC_EQ, is TRUE if every pair of elements A1(I)
//    and A2(I) are equal, and FALSE otherwise.
//
{
  int i;

  for ( i = 0; i < n; i++ )
  {
    if ( a1[i] != a2[i] )
    {
      return false;
    }
  }
  return true;
}
//****************************************************************************80

bool r8vec_gt ( int n, double a1[], double a2[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_GT == ( A1 > A2 ) for two R8VEC's.
//
//  Discussion:
//
//    An R8VEC is a vector of R8's.
//
//    The comparison is lexicographic.
//
//    A1 > A2  <=>                              A1(1) > A2(1) or
//                 ( A1(1)     == A2(1)     and A1(2) > A2(2) ) or
//                 ...
//                 ( A1(1:N-1) == A2(1:N-1) and A1(N) > A2(N)
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    28 August 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the dimension of the vectors.
//
//    Input, double A1[N], A2[N], the vectors to be compared.
//
//    Output, bool R8VEC_GT, is TRUE if and only if A1 > A2.
//
{
  int i;

  for ( i = 0; i < n; i++ )
  {

    if ( a2[i] < a1[i] )
    {
       return true;
    }
    else if ( a1[i] < a2[i] )
    {
      return false;
    }

  }

  return false;
}
//****************************************************************************80

bool r8vec_lt ( int n, double a1[], double a2[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_LT == ( A1 < A2 ) for two R8VEC's.
//
//  Discussion:
//
//    An R8VEC is a vector of R8's.
//
//    The comparison is lexicographic.
//
//    A1 < A2  <=>                              A1(1) < A2(1) or
//                 ( A1(1)     == A2(1)     and A1(2) < A2(2) ) or
//                 ...
//                 ( A1(1:N-1) == A2(1:N-1) and A1(N) < A2(N)
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    28 August 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the dimension of the vectors.
//
//    Input, double A1[N], A2[N], the vectors to be compared.
//
//    Output, bool R8VEC_LT, is TRUE if and only if A1 < A2.
//
{
  int i;

  for ( i = 0; i < n; i++ )
  {
    if ( a1[i] < a2[i] )
    {
      return true;
    }
    else if ( a2[i] < a1[i] )
    {
      return false;
    }

  }

  return false;
}
//****************************************************************************80

void r8vec_print ( int n, double a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_PRINT prints an R8VEC.
//
//  Discussion:
//
//    An R8VEC is a vector of R8's.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    16 August 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of components of the vector.
//
//    Input, double A[N], the vector to be printed.
//
//    Input, string TITLE, a title.
//
{
  int i;

  cout << "\n";
  cout << title << "\n";
  cout << "\n";
  for ( i = 0; i < n; i++ )
  {
    cout << "  " << setw(8)  << i
         << ": " << setw(14) << a[i]  << "\n";
  }

  return;
}
//****************************************************************************80

void r8vec_swap ( int n, double a1[], double a2[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_SWAP swaps the entries of two R8VEC's.
//
//  Discussion:
//
//    An R8VEC is a vector of R8's.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    28 August 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of entries in the arrays.
//
//    Input/output, double A1[N], A2[N], the vectors to swap.
//
{
  int i;
  double temp;

  for ( i = 0; i < n; i++ )
  {
    temp  = a1[i];
    a1[i] = a2[i];
    a2[i] = temp;
  }

  return;
}
//****************************************************************************80

void sort_heap_external ( int n, int &indx, int &i, int &j, int isgn )

//****************************************************************************80
//
//  Purpose:
//
//    SORT_HEAP_EXTERNAL externally sorts a list of items into ascending order.
//
//  Discussion:
//
//    The actual list is not passed to the routine.  Hence it may
//    consist of integers, reals, numbers, names, etc.  The user,
//    after each return from the routine, will be asked to compare or
//    interchange two items.
//
//    The current version of this code mimics the FORTRAN version,
//    so the values of I and J, in particular, are FORTRAN indices.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    06 January 2013
//
//  Author:
//
//    Original FORTRAN77 version by Albert Nijenhuis, Herbert Wilf.
//    C++ version by John Burkardt
//
//  Reference:
//
//    Albert Nijenhuis, Herbert Wilf,
//    Combinatorial Algorithms,
//    Academic Press, 1978, second edition,
//    ISBN 0-12-519260-6.
//
//  Parameters:
//
//    Input, int N, the length of the input list.
//
//    Input/output, int &INDX.
//    The user must set INDX to 0 before the first call.
//    On return,
//      if INDX is greater than 0, the user must interchange
//      items I and J and recall the routine.
//      If INDX is less than 0, the user is to compare items I
//      and J and return in ISGN a negative value if I is to
//      precede J, and a positive value otherwise.
//      If INDX is 0, the sorting is done.
//
//    Output, int &I, &J.  On return with INDX positive,
//    elements I and J of the user's list should be
//    interchanged.  On return with INDX negative, elements I
//    and J are to be compared by the user.
//
//    Input, int ISGN. On return with INDX negative, the
//    user should compare elements I and J of the list.  If
//    item I is to precede item J, set ISGN negative,
//    otherwise set ISGN positive.
//
{
  static int i_save = 0;
  static int j_save = 0;
  static int k = 0;
  static int k1 = 0;
  static int n1 = 0;
//
//  INDX = 0: This is the first call.
//
  if ( indx == 0 )
  {

    i_save = 0;
    j_save = 0;
    k = n / 2;
    k1 = k;
    n1 = n;
  }
//
//  INDX < 0: The user is returning the results of a comparison.
//
  else if ( indx < 0 )
  {
    if ( indx == -2 )
    {
      if ( isgn < 0 )
      {
        i_save = i_save + 1;
      }
      j_save = k1;
      k1 = i_save;
      indx = -1;
      i = i_save;
      j = j_save;
      return;
    }

    if ( 0 < isgn )
    {
      indx = 2;
      i = i_save;
      j = j_save;
      return;
    }

    if ( k <= 1 )
    {
      if ( n1 == 1 )
      {
        i_save = 0;
        j_save = 0;
        indx = 0;
      }
      else
      {
        i_save = n1;
        j_save = 1;
        n1 = n1 - 1;
        indx = 1;
      }
      i = i_save;
      j = j_save;
      return;
    }
    k = k - 1;
    k1 = k;
  }
//
//  0 < INDX: the user was asked to make an interchange.
//
  else if ( indx == 1 )
  {
    k1 = k;
  }

  for ( ; ; )
  {

    i_save = 2 * k1;

    if ( i_save == n1 )
    {
      j_save = k1;
      k1 = i_save;
      indx = -1;
      i = i_save;
      j = j_save;
      return;
    }
    else if ( i_save <= n1 )
    {
      j_save = i_save + 1;
      indx = -2;
      i = i_save;
      j = j_save;
      return;
    }

    if ( k <= 1 )
    {
      break;
    }

    k = k - 1;
    k1 = k;
  }

  if ( n1 == 1 )
  {
    i_save = 0;
    j_save = 0;
    indx = 0;
    i = i_save;
    j = j_save;
  }
  else
  {
    i_save = n1;
    j_save = 1;
    n1 = n1 - 1;
    indx = 1;
    i = i_save;
    j = j_save;
  }

  return;
}
//****************************************************************************80

void timestamp ( )

//****************************************************************************80
//
//  Purpose:
//
//    TIMESTAMP prints the current YMDHMS date as a time stamp.
//
//  Example:
//
//    31 May 2001 09:45:54 AM
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    08 July 2009
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    None
//
{
# define TIME_SIZE 40

  static char time_buffer[TIME_SIZE];
  const struct std::tm *tm_ptr;
  size_t len;
  std::time_t now;

  now = std::time ( NULL );
  tm_ptr = std::localtime ( &now );

  len = std::strftime ( time_buffer, TIME_SIZE, "%d %B %Y %I:%M:%S %p", tm_ptr );

  std::cout << time_buffer << "\n";

  return;
# undef TIME_SIZE
}
