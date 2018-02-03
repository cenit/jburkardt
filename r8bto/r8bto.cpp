# include <cmath>
# include <cstdlib>
# include <ctime>
# include <fstream>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8bto.hpp"

//****************************************************************************80

int i4_log_10 ( int i )

//****************************************************************************80
//
//  Purpose:
//
//    I4_LOG_10 returns the integer part of the logarithm base 10 of ABS(X).
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

double r8_uniform_01 ( int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    R8_UNIFORM_01 returns a unit pseudorandom R8.
//
//  Discussion:
//
//    This routine implements the recursion
//
//      seed = ( 16807 * seed ) mod ( 2^31 - 1 )
//      u = seed / ( 2^31 - 1 )
//
//    The integer arithmetic never requires more than 32 bits,
//    including a sign bit.
//
//    If the initial seed is 12345, then the first three computations are
//
//      Input     Output      R8_UNIFORM_01
//      SEED      SEED
//
//         12345   207482415  0.096616
//     207482415  1790989824  0.833995
//    1790989824  2035175616  0.947702
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
//    Input/output, int &SEED, the "seed" value.  Normally, this
//    value should not be 0.  On output, SEED has been updated.
//
//    Output, double R8_UNIFORM_01, a new pseudorandom variate, 
//    strictly between 0 and 1.
//
{
  const int i4_huge = 2147483647;
  int k;
  double r;

  if ( seed == 0 )
  {
    cerr << "\n";
    cerr << "R8_UNIFORM_01 - Fatal error!\n";
    cerr << "  Input value of SEED = 0.\n";
    exit ( 1 );
  }

  k = seed / 127773;

  seed = 16807 * ( seed - k * 127773 ) - k * 2836;

  if ( seed < 0 )
  {
    seed = seed + i4_huge;
  }
  r = ( double ) ( seed ) * 4.656612875E-10;

  return r;
}
//****************************************************************************80

double *r8bto_dif2 ( int m, int l )

//****************************************************************************80
//
//  Purpose:
//
//    R8BTO_DIF2 sets up an R8BTO second difference matrix.
//
//  Discussion:
//
//    To get the second difference matrix, it is assumed that M will be 1!
//
//    The R8BTO storage format is for a block Toeplitz matrix. The matrix
//    can be regarded as an L by L array of blocks, each of size M by M.
//    The full matrix has order N = M * L.  The L by L matrix is Toeplitz,
//    that is, along its diagonal, the blocks repeat.
//
//    Storage for the matrix consists of the L blocks of the first row,
//    followed by the L-1 blocks of the first column (skipping the first row).
//    These items are stored in the natural way in an (M,M,2*L-1) array.
//
//  Example:
//
//    M = 2, L = 3
//
//    1 2 | 3 4 | 5 6
//    5 5 | 6 6 | 7 7
//    ----+-----+-----
//    7 8 | 1 2 | 3 4
//    8 8 | 5 5 | 6 6
//    ----+-----+-----
//    9 0 | 7 8 | 1 2
//    9 9 | 8 8 | 5 5
//
//    X = (/ 1, 2, 3, 4, 5, 6 /)
//
//    B = (/ 91, 134, 73, 125, 97, 129 /)
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 July 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, the order of the blocks of the matrix A.
//
//    Input, int L, the number of blocks in a row or column of A.
//
//    Output, double R8BTO_INDICATOR[M*M*(2*L-1)], the R8BTO matrix.
//
{
  double *a;
  int i;
  int i2;
  int j;
  int j2;
  int k;
  double value;

  a = r8vec_zeros_new ( m * m * ( 2 * l - 1 ) );
//
//  Blocks 1 to L form the first row.
//
  j = 0;

  for ( k = 1; k <= l; k++ )
  {
    if ( k == 1 )
    {
      value = 2.0;
    }
    else if ( k == 2 )
    {
      value = -1.0;
    }
    else
    {
      value = 0.0;
    }

    for ( j2 = 1; j2 <= m; j2++ )
    {
      j = j + 1;
      for ( i = 1; i <= m; i++ )
      {
        a[i-1+(j2-1)*m+(k-1)*m*m] = value;
      }
    }
  }
//
//  Blocks L+1 through 2*L-1 form the remainder of the first column.
//
  i = m;

  for ( k = l + 1; k <= 2 * l - 1; k++ )
  {
    if ( k == l + 1 )
    {
      value = -1.0;
    }
    else
    {
      value = 0.0;
    }

    for ( i2 = 1; i2 <= m; i2++ )
    {
      i = i + 1;
      for ( j = 1; j <= m; j++ )
      {
        a[i2-1+(j-1)*m+(k-1)*m*m] = value;
      }
    }
  }

  return a;
}
//****************************************************************************80

double *r8bto_indicator ( int m, int l )

//****************************************************************************80
//
//  Purpose:
//
//    R8BTO_INDICATOR sets up an R8BTO indicator matrix.
//
//  Discussion:
//
//    The R8BTO storage format is for a block Toeplitz matrix. The matrix
//    can be regarded as an L by L array of blocks, each of size M by M.
//    The full matrix has order N = M * L.  The L by L matrix is Toeplitz,
//    that is, along its diagonal, the blocks repeat.
//
//    Storage for the matrix consists of the L blocks of the first row,
//    followed by the L-1 blocks of the first column (skipping the first row).
//    These items are stored in the natural way in an (M,M,2*L-1) array.
//
//  Example:
//
//    M = 2, L = 3
//
//    1 2 | 3 4 | 5 6
//    5 5 | 6 6 | 7 7
//    ----+-----+-----
//    7 8 | 1 2 | 3 4
//    8 8 | 5 5 | 6 6
//    ----+-----+-----
//    9 0 | 7 8 | 1 2
//    9 9 | 8 8 | 5 5
//
//    X = (/ 1, 2, 3, 4, 5, 6 /)
//
//    B = (/ 91, 134, 73, 125, 97, 129 /)
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    11 January 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, the order of the blocks of the matrix A.
//
//    Input, int L, the number of blocks in a row or column of A.
//
//    Output, double R8BTO_INDICATOR[M*M*(2*L-1)], the R8BTO matrix.
//
{
  double *a;
  int fac;
  int i;
  int i2;
  int j;
  int j2;
  int k;

  a = r8vec_zeros_new ( m * m * ( 2 * l - 1 ) );

  fac = i4_power ( 10, i4_log_10 ( m * l ) + 1 );
//
//  Blocks 1 to L form the first row.
//
  j = 0;

  for ( k = 1; k <= l; k++ )
  {
    for ( j2 = 1; j2 <= m; j2++ )
    {
      j = j + 1;
      for ( i = 1; i <= m; i++ )
      {
        a[i-1+(j2-1)*m+(k-1)*m*m] = ( double ) ( fac * i + j );
      }
    }
  }
//
//  Blocks L+1 through 2*L-1 form the remainder of the first column.
//
  i = m;

  for ( k = l + 1; k <= 2 * l - 1; k++ )
  {
    for ( i2 = 1; i2 <= m; i2++ )
    {
      i = i + 1;
      for ( j = 1; j <= m; j++ )
      {
        a[i2-1+(j-1)*m+(k-1)*m*m] = ( double ) ( fac * i + j );
      }
    }
  }

  return a;
}
//****************************************************************************80

double *r8bto_mtv ( int m, int l, double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8BTO_MTV multiplies a vector times an R8BTO matrix.
//
//  Discussion:
//
//    The R8BTO storage format is for a block Toeplitz matrix. The matrix
//    can be regarded as an L by L array of blocks, each of size M by M.
//    The full matrix has order N = M * L.  The L by L matrix is Toeplitz,
//    that is, along its diagonal, the blocks repeat.
//
//    Storage for the matrix consists of the L blocks of the first row,
//    followed by the L-1 blocks of the first column (skipping the first row).
//    These items are stored in the natural way in an (M,M,2*L-1) array.
//
//  Example:
//
//    M = 2, L = 3
//
//    1 2 | 3 4 | 5 6
//    5 5 | 6 6 | 7 7
//    ----+-----+-----
//    7 8 | 1 2 | 3 4
//    8 8 | 5 5 | 6 6
//    ----+-----+-----
//    9 0 | 7 8 | 1 2
//    9 9 | 8 8 | 5 5
//
//    X = (/ 1, 2, 3, 4, 5, 6 /)
//
//    B = (/ 163, 122, 121, 130, 87, 96 /)
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    18 January 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, the order of the blocks of the matrix A.
//
//    Input, int L, the number of blocks in a row or column of A.
//
//    Input, double A[M*M*(2*L-1)], the R8BTO matrix.
//
//    Input, double X[M*L], the vector to be multiplied.
//
//    Output, double R8BTO_MTV[M*L], the product X * A.
//
{
  double *b;
  int i;
  int i2;
  int j;
  int k;

  b = r8vec_zeros_new ( m * l );
//
//  Construct the right hand side by blocks.
//
  for ( j = 1; j <= l; j++ )
  {
    for ( k = 1; k <= j; k++ )
    {
      for ( i = 1; i <= m; i++ )
      {
        for ( i2 = 1; i2 <= m; i2++ )
        {
          b[i-1+(j-1)*m] = b[i-1+(j-1)*m] 
          + a[i2-1+(i-1)*m+(j-k)*m*m] * x[i2-1+(k-1)*m];
        }
      }
    }
    for ( k = j + 1; k <= l; k++ )
    {
      for ( i = 1; i <= m; i++ )
      {
        for ( i2 = 1; i2 <= m; i2++ )
        {
          b[i-1+(j-1)*m] = b[i-1+(j-1)*m] 
          + a[i2-1+(i-1)*m+(l+k-j-1)*m*m] * x[i2-1+(k-1)*m];
        }
      }
    }
  }

  return b;
}
//****************************************************************************80

double *r8bto_mv ( int m, int l, double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8BTO_MV multiplies an R8BTO matrix times a vector.
//
//  Discussion:
//
//    The R8BTO storage format is for a block Toeplitz matrix. The matrix
//    can be regarded as an L by L array of blocks, each of size M by M.
//    The full matrix has order N = M * L.  The L by L matrix is Toeplitz,
//    that is, along its diagonal, the blocks repeat.
//
//    Storage for the matrix consists of the L blocks of the first row,
//    followed by the L-1 blocks of the first column (skipping the first row).
//    These items are stored in the natural way in an (M,M,2*L-1) array.
//
//  Example:
//
//    M = 2, L = 3
//
//    1 2 | 3 4 | 5 6
//    5 5 | 6 6 | 7 7
//    ----+-----+-----
//    7 8 | 1 2 | 3 4
//    8 8 | 5 5 | 6 6
//    ----+-----+-----
//    9 0 | 7 8 | 1 2
//    9 9 | 8 8 | 5 5
//
//    X = (/ 1, 2, 3, 4, 5, 6 /)
//
//    B = (/ 91, 134, 73, 125, 79, 138 /)
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    18 January 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, the order of the blocks of the matrix A.
//
//    Input, int L, the number of blocks in a row or column of A.
//
//    Input, double A[M*M*(2*L-1)], the R8BTO matrix.
//
//    Input, double X[M*L], the vector to be multiplied.
//
//    Output, double R8BTO_MV[M*L], the product A * X.
//
{
  double *b;
  int i;
  int i2;
  int j;
  int k;

  b = r8vec_zeros_new ( m * l );
//
//  Construct the right hand side by blocks.
//
  for ( j = 0; j < l; j++ )
  {
    for ( k = 0; k <= j - 1; k++ )
    {
      for ( i = 0; i < m; i++ )
      {
        for ( i2 = 0; i2 < m; i2++ )
        {
          b[i+j*m] = b[i+j*m] + a[i+i2*m+(l+j-k-1)*m*m] * x[i2+k*m];
        }
      }
    }

    for ( k = j; k < l; k++ )
    {
      for ( i = 0; i < m; i++ )
      {
        for ( i2 = 0; i2 < m; i2++ )
        {
          b[i+j*m] = b[i+j*m] + a[i+i2*m+(k-j)*m*m] * x[i2+k*m];
        }
      }
    }
  }

  return b;
}
//****************************************************************************80

void r8bto_print ( int m, int l, double a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8BTO_PRINT prints an R8BTO matrix.
//
//  Discussion:
//
//    The R8BTO storage format is for a block Toeplitz matrix. The matrix
//    can be regarded as an L by L array of blocks, each of size M by M.
//    The full matrix has order N = M * L.  The L by L matrix is Toeplitz,
//    that is, along its diagonal, the blocks repeat.
//
//    Storage for the matrix consists of the L blocks of the first row,
//    followed by the L-1 blocks of the first column (skipping the first row).
//    These items are stored in the natural way in an (M,M,2*L-1) array.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    06 April 2006
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, the order of the blocks of the matrix A.
//
//    Input, int L, the number of blocks in a row or column of A.
//
//    Input, double A[M*M*(2*L-1)], the R8BTO matrix.
//
//    Input, string TITLE, a title.
//
{
  r8bto_print_some ( m, l, a, 1, 1, m*l, m*l, title );

  return;
}
//****************************************************************************80

void r8bto_print_some ( int m, int l, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8BTO_PRINT_SOME prints some of an R8BTO matrix.
//
//  Discussion:
//
//    The R8BTO storage format is for a block Toeplitz matrix. The matrix
//    can be regarded as an L by L array of blocks, each of size M by M.
//    The full matrix has order N = M * L.  The L by L matrix is Toeplitz,
//    that is, along its diagonal, the blocks repeat.
//
//    Storage for the matrix consists of the L blocks of the first row,
//    followed by the L-1 blocks of the first column (skipping the first row).
//    These items are stored in the natural way in an (M,M,2*L-1) array.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    06 April 2006
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, the order of the blocks of the matrix A.
//
//    Input, int L, the number of blocks in a row or column of A.
//
//    Input, double A[M*M*(2*L-1)], the R8BTO matrix.
//
//    Input, int ILO, JLO, IHI, JHI, designate the first row and
//    column, and the last row and column to be printed.
//
//    Input, string TITLE, a title.
//
{
# define INCX 5

  int i;
  int i1;
  int i2;
  int i3hi;
  int i3lo;
  int inc;
  int j;
  int j1;
  int j2;
  int j3hi;
  int j3lo;
  int n;

  n = m * l;

  cout << "\n";
  cout << title << "\n";
//
//  Print the columns of the matrix, in strips of 5.
//
  for ( j3lo = jlo; j3lo <= jhi; j3lo = j3lo + INCX )
  {
    j3hi = j3lo + INCX - 1;
    j3hi = i4_min ( j3hi, n );
    j3hi = i4_min ( j3hi, jhi );

    inc = j3hi + 1 - j3lo;

    cout << "\n";
    cout << "  Col: ";
    for ( j = j3lo; j <= j3hi; j++ )
    {
      cout << setw(7) << j << "       ";
    }

    cout << "\n";
    cout << "  Row\n";
    cout << "  ---\n";
//
//  Determine the range of the rows in this strip.
//
    i3lo = i4_max ( ilo, 1 );
    i3hi = i4_min ( ihi, n );

    for ( i = i3lo; i <= i3hi; i++ )
    {
      cout << setw(4) << i << "  ";
//
//  Print out (up to) 5 entries in row I, that lie in the current strip.
//
      for ( j = j3lo; j <= j3lo + inc - 1; j++ )
      {
//
//  i = M * ( i1 - 1 ) + i2
//  j = M * ( j1 - 1 ) + j2
//
        i1 = ( i - 1 ) / m + 1;
        i2 = i - m * ( i1 - 1 );
        j1 = ( j - 1 ) / m + 1;
        j2 = j - m * ( j1 - 1 );

        if ( i1 <= j1 )
        {
          cout << setw(12) << a[i2-1+(j2-1)*m+(j1-i1)*m*m] << "  ";
        }
        else
        {
          cout << setw(12) << a[i2-1+(j2-1)*m+(l-1+i1-j1)*m*m] << "  ";
        }
      }
      cout << "\n";
    }
  }

  return;
# undef INCX
}
//****************************************************************************80

double *r8bto_random ( int m, int l, int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    R8BTO_RANDOM randomizes an R8BTO matrix.
//
//  Discussion:
//
//    The R8BTO storage format is for a block Toeplitz matrix. The matrix
//    can be regarded as an L by L array of blocks, each of size M by M.
//    The full matrix has order N = M * L.  The L by L matrix is Toeplitz,
//    that is, along its diagonal, the blocks repeat.
//
//    Storage for the matrix consists of the L blocks of the first row,
//    followed by the L-1 blocks of the first column (skipping the first row).
//    These items are stored in the natural way in an (M,M,2*L-1) array.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    18 January 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, the order of the blocks of the matrix A.
//
//    Input, int L, the number of blocks in a row or column of A.
//
//    Input/output, int &SEED, a seed for the random number generator.
//
//    Output, double R8BTO_RANDOM[M*M*(2*L-1)], the R8BTO matrix.
//
{
  double *a;
  int i;
  int j;
  int k;

  a = r8vec_zeros_new ( m * m * ( 2 * l - 1 ) );

  for ( i = 0; i < m; i++ )
  {
    for ( j = 0; j < m; j++ )
    {
      for ( k = 0; k < 2 * l - 1; k++ )
      {
        a[i+j*m+k*m*m] = r8_uniform_01 ( seed );
      }
    }
  }

  return a;
}
//****************************************************************************80

double *r8bto_to_r8ge ( int m, int l, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8BTO_TO_R8GE copies an R8BTO matrix to an R8GE matrix.
//
//  Discussion:
//
//    The R8BTO storage format is for a block Toeplitz matrix. The matrix
//    can be regarded as an L by L array of blocks, each of size M by M.
//    The full matrix has order N = M * L.  The L by L matrix is Toeplitz,
//    that is, along its diagonal, the blocks repeat.
//
//    Storage for the matrix consists of the L blocks of the first row,
//    followed by the L-1 blocks of the first column (skipping the first row).
//    These items are stored in the natural way in an (M,M,2*L-1) array.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    04 November 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, the order of the blocks of the R8BTO matrix.
//
//    Input, int L, the number of blocks in a row or column of the
//    R8BTO matrix.
//
//    Input, double A[M*M*(2*L-1)], the R8BTO matrix.
//
//    Output, double R8BTO_TO_R8GE[(M*L)*(M*L)], the R8GE matrix.
//
{
  double *b;
  int i;
  int i1;
  int i2;
  int j;
  int j1;
  int j2;
  int n;

  n = m * l;

  b = r8vec_zeros_new ( n * n );

  for ( i = 1; i <= n; i++ )
  {
    i1 = ( i - 1 ) / m + 1;
    i2 = i - m * ( i1 - 1 );

    for ( j = 1; j <= n; j++ )
    {
      j1 = ( j - 1 ) / m + 1;
      j2 = j - m * ( j1 - 1 );

      if ( i1 <= j1 )
      {
        b[i-1+(j-1)*n] = a[i2-1+(j2-1)*m+(j1-i1)*m*m];
      }
      else
      {
        b[i-1+(j-1)*n] = a[i2-1+(j2-1)*m+(l+i1-j1-1)*m*m];
      }
    }
  }

  return b;
}
//****************************************************************************80

double *r8bto_zeros ( int m, int l )

//****************************************************************************80
//
//  Purpose:
//
//    R8BTO_ZEROS zeros an R8BTO matrix.
//
//  Discussion:
//
//    The R8BTO storage format is for a block Toeplitz matrix. The matrix
//    can be regarded as an L by L array of blocks, each of size M by M.
//    The full matrix has order N = M * L.  The L by L matrix is Toeplitz,
//    that is, along its diagonal, the blocks repeat.
//
//    Storage for the matrix consists of the L blocks of the first row,
//    followed by the L-1 blocks of the first column (skipping the first row).
//    These items are stored in the natural way in an (M,M,2*L-1) array.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    08 July 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, the order of the blocks of the matrix A.
//
//    Input, int L, the number of blocks in a row or column of A.
//
//    Output, double R8BTO_ZERO[M*M*(2*L-1)], the R8BTO matrix.
//
{
  double *a;

  a = r8vec_zeros_new ( m * m * ( 2 * l - 1 ) );

  return a;
}
//****************************************************************************80

int r8ge_fa ( int n, double a[], int pivot[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_FA performs a LINPACK-style PLU factorization of an R8GE matrix.
//
//  Discussion:
//
//    The R8GE storage format is used for a "general" M by N matrix.  
//    A physical storage space is made for each logical entry.  The two 
//    dimensional logical array is mapped to a vector, in which storage is 
//    by columns.
//
//    R8GE_FA is a simplified version of the LINPACK routine SGEFA.
//
//    The two dimensional array is stored by columns in a one dimensional
//    array.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    11 September 2003
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Jack Dongarra, Jim Bunch, Cleve Moler, Pete Stewart,
//    LINPACK User's Guide,
//    SIAM, 1979,
//    ISBN13: 978-0-898711-72-1,
//    LC: QA214.L56.
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//    N must be positive.
//
//    Input/output, double A[N*N], the matrix to be factored.
//    On output, A contains an upper triangular matrix and the multipliers
//    which were used to obtain it.  The factorization can be written
//    A = L * U, where L is a product of permutation and unit lower
//    triangular matrices and U is upper triangular.
//
//    Output, int PIVOT[N], a vector of pivot indices.
//
//    Output, int R8GE_FA, singularity flag.
//    0, no singularity detected.
//    nonzero, the factorization failed on the INFO-th step.
//
{
  int i;
  int j;
  int k;
  int l;
  double t;
//
  for ( k = 1; k <= n - 1; k++ )
  {
//
//  Find L, the index of the pivot row.
//
    l = k;

    for ( i = k + 1; i <= n; i++ )
    {
      if ( fabs ( a[l-1+(k-1)*n] ) < fabs ( a[i-1+(k-1)*n] ) )
      {
        l = i;
      }
    }

    pivot[k-1] = l;
//
//  If the pivot index is zero, the algorithm has failed.
//
    if ( a[l-1+(k-1)*n] == 0.0 )
    {
      cerr << "\n";
      cerr << "R8GE_FA - Fatal error!\n";
      cerr << "  Zero pivot on step " << k << "\n";
      exit ( 1 );
    }
//
//  Interchange rows L and K if necessary.
//
    if ( l != k )
    {
      t              = a[l-1+(k-1)*n];
      a[l-1+(k-1)*n] = a[k-1+(k-1)*n];
      a[k-1+(k-1)*n] = t;
    }
//
//  Normalize the values that lie below the pivot entry A(K,K).
//
    for ( i = k + 1; i <= n; i++ )
    {
      a[i-1+(k-1)*n] = -a[i-1+(k-1)*n] / a[k-1+(k-1)*n];
    }
//
//  Row elimination with column indexing.
//
    for ( j = k + 1; j <= n; j++ )
    {
      if ( l != k )
      {
        t              = a[l-1+(j-1)*n];
        a[l-1+(j-1)*n] = a[k-1+(j-1)*n];
        a[k-1+(j-1)*n] = t;
      }

      for ( i = k + 1; i <= n; i++ )
      {
        a[i-1+(j-1)*n] = a[i-1+(j-1)*n] + a[i-1+(k-1)*n] * a[k-1+(j-1)*n];
      }

    }

  }

  pivot[n-1] = n;

  if ( a[n-1+(n-1)*n] == 0.0 )
  {
    cerr << "\n";
    cerr << "R8GE_FA - Fatal error!\n";
    cerr << "  Zero pivot on step " << n << "\n";
    exit ( 1 );
  }

  return 0;
}
//****************************************************************************80

double *r8ge_indicator ( int m, int n )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_INDICATOR sets up an R8GE indicator matrix.
//
//  Discussion:
//
//    The R8GE storage format is used for a "general" M by N matrix.  
//    A physical storage space is made for each logical entry.  The two 
//    dimensional logical array is mapped to a vector, in which storage is 
//    by columns.
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
//    Output, double R8GE_INDICATOR[M*N], the R8GE matrix.
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

void r8ge_print ( int m, int n, double a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_PRINT prints an R8GE matrix.
//
//  Discussion:
//
//    The R8GE storage format is used for a "general" M by N matrix.  
//    A physical storage space is made for each logical entry.  The two 
//    dimensional logical array is mapped to a vector, in which storage is 
//    by columns.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    06 April 2006
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
//    Input, double A[M*N], the R8GE matrix.
//
//    Input, string TITLE, a title.
//
{
  r8ge_print_some ( m, n, a, 1, 1, m, n, title );

  return;
}
//****************************************************************************80

void r8ge_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_PRINT_SOME prints some of an R8GE matrix.
//
//  Discussion:
//
//    The R8GE storage format is used for a "general" M by N matrix.  
//    A physical storage space is made for each logical entry.  The two 
//    dimensional logical array is mapped to a vector, in which storage is 
//    by columns.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    06 April 2006
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
//    Input, double A[M*N], the R8GE matrix.
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
//
//  Print the columns of the matrix, in strips of 5.
//
  for ( j2lo = jlo; j2lo <= jhi; j2lo = j2lo + INCX )
  {
    j2hi = j2lo + INCX - 1;
    j2hi = i4_min ( j2hi, n );
    j2hi = i4_min ( j2hi, jhi );

    cout << "\n";
//
//  For each column J in the current range...
//
//  Write the header.
//
    cout << "  Col:    ";
    for ( j = j2lo; j <= j2hi; j++ )
    {
      cout << setw(7) << j << "       ";
    }
    cout << "\n";
    cout << "  Row\n";
    cout << "  ---\n";
//
//  Determine the range of the rows in this strip.
//
    i2lo = i4_max ( ilo, 1 );
    i2hi = i4_min ( ihi, m );

    for ( i = i2lo; i <= i2hi; i++ )
    {
//
//  Print out (up to) 5 entries in row I, that lie in the current strip.
//
      cout << setw(5) << i << "  ";
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

void r8ge_sl ( int n, double a_lu[], int pivot[], double x[], int job )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_SL solves an R8GE system factored by R8GE_FA.
//
//  Discussion:
//
//    The R8GE storage format is used for a "general" M by N matrix.  
//    A physical storage space is made for each logical entry.  The two 
//    dimensional logical array is mapped to a vector, in which storage is 
//    by columns.
//
//    R8GE_SL is a simplified version of the LINPACK routine SGESL.
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
//    Input, int N, the order of the matrix.
//    N must be positive.
//
//    Input, double A_LU[N*N], the LU factors from R8GE_FA.
//
//    Input, int PIVOT[N], the pivot vector from R8GE_FA.
//
//    Input/output, double X[N], on input, the right hand side vector.
//    On output, the solution vector.
//
//    Input, int JOB, specifies the operation.
//    0, solve A * x = b.
//    nonzero, solve A' * x = b.
//
{
  int i;
  int k;
  int l;
  double t;
//
//  Solve A * x = b.
//
  if ( job == 0 )
  {
//
//  Solve PL * Y = B.
//
    for ( k = 1; k <= n - 1; k++ )
    {
      l = pivot[k-1];

      if ( l != k )
      {
        t      = x[l-1];
        x[l-1] = x[k-1];
        x[k-1] = t;
      }
      for ( i = k + 1; i <= n; i++ )
      {
        x[i-1] = x[i-1] + a_lu[i-1+(k-1)*n] * x[k-1];
      }
    }
//
//  Solve U * X = Y.
//
    for ( k = n; 1 <= k; k-- )
    {
      x[k-1] = x[k-1] / a_lu[k-1+(k-1)*n];
      for ( i = 1; i <= k - 1; i++ )
      {
        x[i-1] = x[i-1] - a_lu[i-1+(k-1)*n] * x[k-1];
      }
    }
  }
//
//  Solve A' * X = B.
//
  else
  {
//
//  Solve U' * Y = B.
//
    for ( k = 1; k <= n; k++ )
    {
      t = 0.0;
      for ( i = 1; i <= k - 1; i++ )
      {
        t = t + x[i-1] * a_lu[i-1+(k-1)*n];
      }
      x[k-1] = ( x[k-1] - t ) / a_lu[k-1+(k-1)*n];
    }
//
//  Solve ( PL )' * X = Y.
//
    for ( k = n - 1; 1 <= k; k-- )
    {
      t = 0.0;
      for ( i = k + 1; i <= n; i++ )
      {
        t = t + x[i-1] * a_lu[i-1+(k-1)*n];
      }
      x[k-1] = x[k-1] + t;

      l = pivot[k-1];

      if ( l != k )
      {
        t      = x[l-1];
        x[l-1] = x[k-1];
        x[k-1] = t;
      }
    }
  }

  return;
}
//****************************************************************************80

double *r8vec_indicator1_new ( int n )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_INDICATOR1_NEW sets an R8VEC to the indicator1 vector {1,2,3...}.
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
//    20 September 2005
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of elements of A.
//
//    Output, double R8VEC_INDICATOR1_NEW[N], the array to be initialized.
//
{
  double *a;
  int i;

  a = new double[n];

  for ( i = 0; i <= n - 1; i++ ) 
  {
    a[i] = ( double ) ( i + 1 );
  }

  return a;
}
//****************************************************************************80

void r8vec_print ( int n, double a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_PRINT prints an R8VEC.
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
    cout << setw(6)  << i + 1 << "  " 
         << setw(14) << a[i]  << "\n";
  }

  return;
}
//****************************************************************************80

double *r8vec_zeros_new ( int n )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_ZEROS_NEW creates and zeroes an R8VEC.
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
//    10 July 2008
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of entries in the vector.
//
//    Output, double R8VEC_ZEROS_NEW[N], a vector of zeroes.
//
{
  double *a;
  int i;

  a = new double[n];

  for ( i = 0; i < n; i++ )
  {
    a[i] = 0.0;
  }
  return a;
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
