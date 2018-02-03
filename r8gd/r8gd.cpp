# include <cmath>
# include <cstdlib>
# include <ctime>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8gd.hpp"

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

void i4vec_print ( int n, int a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_PRINT prints an I4VEC.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    23 November 2003
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

  for ( i = 0; i <= n - 1; i++ ) 
  {
    cout << setw(6) << i + 1 << "  " 
         << setw(6) << a[i]  << "\n";
  }

  return;
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

double *r8gd_dif2 ( int n, int ndiag, int offset[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8GD_DIF2 sets up an R8GD second difference matrix.
//
//  Discussion:
//
//    The R8GD storage format is suitable for matrices whose only nonzero entries
//    occur along a few diagonals, but for which these diagonals are not all
//    close enough to the main diagonal for band storage to be efficient.
//
//    In that case, we assign the main diagonal the offset value 0.
//    Each successive superdiagonal gets an offset value 1 higher, until
//    the highest superdiagonal (the A(1,N) entry) is assigned the offset N-1.
//    Similarly, the subdiagonals are assigned offsets of -1 through -(N-1).
//
//    Now, assuming that only a few of these diagonals contain nonzeros,
//    then for the I-th diagonal to be saved, we stored its offset in
//    OFFSET(I), and its entries in column I of the matrix.  
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    18 July 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, int NDIAG, the number of diagonals of the matrix
//    that are stored in the array.
//    NDIAG must be at least 3.
//
//    Input, int OFFSET[NDIAG], the offsets for the diagonal
//    storage.  The values -1, 0 and +1 should be included.
//
//    Output, double R8GD_DIF2[N*NDIAG], the R8GD matrix.
//
{
  double *a;
  int i;
  int j;
  int jdiag;

  if ( ndiag < 3 )
  {
    cerr << "\n";
    cerr << "R8GD_DIF2 - Fatal error!\n";
    cerr << "  NDIAG must be at least 3.\n";
    exit ( 1 );
  }

  a = r8vec_zeros_new ( n * ndiag );

  for ( i = 0; i < n; i++ )
  {
    for ( jdiag = 0; jdiag < ndiag; jdiag++ )
    {
      j = i + offset[jdiag];
      if ( 0 <= j && j < n )
      {
        if ( offset[jdiag] == 0 )
        {
          a[i+jdiag*n] = 2.0;
        }
        else if ( offset[jdiag] == -1 || offset[jdiag] == +1 )
        {
          a[i+jdiag*n] = -1.0;
        }
      }
    }
  }

  return a;
}
//****************************************************************************80

double *r8gd_indicator ( int n, int ndiag, int offset[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8GD_INDICATOR sets up an R8GD indicator matrix.
//
//  Discussion:
//
//    The R8GD storage format is used for matrices whose only nonzero entries
//    occur along a few diagonals, but for which these diagonals are not all
//    close enough to the main diagonal for band storage to be efficient.
//
//    In that case, we assign the main diagonal the offset value 0.
//    Each successive superdiagonal gets an offset value 1 higher, until
//    the highest superdiagonal (the A(1,N) entry) is assigned the offset N-1.
//    Similarly, the subdiagonals are assigned offsets of -1 through -(N-1).
//
//    Now, assuming that only a few of these diagonals contain nonzeros,
//    then for the I-th diagonal to be saved, we stored its offset in
//    OFFSET(I), and its entries in column I of the matrix.  
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 January 2004
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
//    Input, int NDIAG, the number of diagonals of the matrix
//    that are stored in the array.
//    NDIAG must be at least 1, and no more than 2 * N - 1.
//
//    Input, int OFFSET[NDIAG], the offsets for the diagonal storage.
//
//    Output, double R8GD_INDICATOR[N*NDIAG], the R8GD matrix.
//
{
  double *a;
  int diag;
  int fac;
  int i;
  int j;

  a = r8vec_zeros_new ( n * ndiag );

  fac = i4_power ( 10, i4_log_10 ( n ) + 1 );

  for ( i = 1; i <= n; i++ )
  {
    for ( diag = 1; diag <= ndiag; diag++ )
    {
      j = i + offset[diag-1];
      if ( 1 <= j && j <= n )
      {
        a[i-1+(diag-1)*n] = ( double ) ( fac * i + j );
      }
      else
      {
        a[i-1+(diag-1)*n] = 0.0;
      }
    }
  }

  return a;
}
//****************************************************************************80

double *r8gd_mtv ( int n, int ndiag, int offset[], double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8GD_MTV multiplies a vector by an R8GD matrix.
//
//  Discussion:
//
//    The R8GD storage format is used for matrices whose only nonzero entries
//    occur along a few diagonals, but for which these diagonals are not all
//    close enough to the main diagonal for band storage to be efficient.
//
//    In that case, we assign the main diagonal the offset value 0.
//    Each successive superdiagonal gets an offset value 1 higher, until
//    the highest superdiagonal (the A(1,N) entry) is assigned the offset N-1.
//    Similarly, the subdiagonals are assigned offsets of -1 through -(N-1).
//
//    Now, assuming that only a few of these diagonals contain nonzeros,
//    then for the I-th diagonal to be saved, we stored its offset in
//    OFFSET(I), and its entries in column I of the matrix.  
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 January 2004
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
//    Input, int NDIAG, the number of diagonals of the matrix
//    that are stored in the array.
//    NDIAG must be at least 1, and no more than 2 * N - 1.
//
//    Input, int OFFSET[NDIAG], the offsets for the diagonal storage.
//
//    Input, double A[N*NDIAG], the R8GD matrix.
//
//    Input, double X[N], the vector to be multiplied by A.
//
//    Output, double R8GD_MTV[N], the product X*A.
//
{
  double *b;
  int diag;
  int i;
  int j;

  b = r8vec_zeros_new ( n );

  for ( i = 0; i < n; i++ )
  {
    for ( diag = 0; diag < ndiag; diag++ )
    {
      j = i + offset[diag];
      if ( 0 <= j && j < n )
      {
        b[j] = b[j] + x[i] * a[i+diag*n];
      }
    }
  }

  return b;
}
//****************************************************************************80

double *r8gd_mv ( int n, int ndiag, int offset[], double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8GD_MV multiplies an R8GD matrix by a vector.
//
//  Discussion:
//
//    The R8GD storage format is used for matrices whose only nonzero entries
//    occur along a few diagonals, but for which these diagonals are not all
//    close enough to the main diagonal for band storage to be efficient.
//
//    In that case, we assign the main diagonal the offset value 0.
//    Each successive superdiagonal gets an offset value 1 higher, until
//    the highest superdiagonal (the A(1,N) entry) is assigned the offset N-1.
//    Similarly, the subdiagonals are assigned offsets of -1 through -(N-1).
//
//    Now, assuming that only a few of these diagonals contain nonzeros,
//    then for the I-th diagonal to be saved, we stored its offset in
//    OFFSET(I), and its entries in column I of the matrix.  
//
//  Example:
//
//    The "offset" value is printed near the first entry of each diagonal
//    in the original matrix, and above the columns in the new matrix.
//
//    Original matrix               New Matrix
//
//      0    1   2   3   4   5        -3  -2   0   1   3   5
//                             
//        11  12   0  14   0  16      --  --  11  12  14  16
//   -1 =  0  22  23   0  25   0      --  --  22  23  25  --
//   -2 = 31   0  33  34   0  36      --  31  33  34  36  --
//   -3 = 41  42   0  44  45   0      41  42  44  45  --  --
//   -4 =  0  52  53   0  55  56      52  53  55  56  --  --
//   -5 =  0   0  63  64  65  66      63  64  66  --  --  --
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 January 2004
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
//    Input, int NDIAG, the number of diagonals of the matrix
//    that are stored in the array.
//    NDIAG must be at least 1, and no more than 2 * N - 1.
//
//    Input, int OFFSET[NDIAG], the offsets for the diagonal storage.
//
//    Input, double A[N*NDIAG], the R8GD matrix.
//
//    Input, double X[N], the vector to be multiplied by A.
//
//    Output, double R8GD_MV[N], the product A * x.
//
{
  double *b;
  int diag;
  int i;
  int j;

  b = r8vec_zeros_new ( n );

  for ( i = 0; i < n; i++ )
  {
    for ( diag = 0; diag < ndiag; diag++ )
    {
      j = i + offset[diag];
      if ( 0 <= j && j < n )
      {
        b[i] = b[i] + a[i+diag*n] * x[j];
      }
    }
  }

  return b;
}
//****************************************************************************80

void r8gd_print ( int n, int ndiag, int offset[], double a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8GD_PRINT prints an R8GD matrix.
//
//  Discussion:
//
//    The R8GD storage format is used for matrices whose only nonzero entries
//    occur along a few diagonals, but for which these diagonals are not all
//    close enough to the main diagonal for band storage to be efficient.
//
//    In that case, we assign the main diagonal the offset value 0.
//    Each successive superdiagonal gets an offset value 1 higher, until
//    the highest superdiagonal (the A(1,N) entry) is assigned the offset N-1.
//    Similarly, the subdiagonals are assigned offsets of -1 through -(N-1).
//
//    Now, assuming that only a few of these diagonals contain nonzeros,
//    then for the I-th diagonal to be saved, we stored its offset in
//    OFFSET(I), and its entries in column I of the matrix.  
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
//    Input, int N, the number of columns of the matrix.
//    N must be positive.
//
//    Input, int NDIAG, the number of diagonals of the matrix
//    that are stored in the array.
//    NDIAG must be at least 1, and no more than 2 * N - 1.
//
//    Input, int OFFSET[NDIAG], the offsets for the diagonal storage.
//
//    Input, double A[N*NDIAG], the R8GD matrix.
//
//    Input, string TITLE, a title.
//
{
  r8gd_print_some ( n, ndiag, offset, a, 1, 1, n, n, title );

  return;
}
//****************************************************************************80

void r8gd_print_some ( int n, int ndiag, int offset[], double a[], int ilo, 
  int jlo, int ihi, int jhi, string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8GD_PRINT_SOME prints some of an R8GD matrix.
//
//  Discussion:
//
//    The R8GD storage format is used for matrices whose only nonzero entries
//    occur along a few diagonals, but for which these diagonals are not all
//    close enough to the main diagonal for band storage to be efficient.
//
//    In that case, we assign the main diagonal the offset value 0.
//    Each successive superdiagonal gets an offset value 1 higher, until
//    the highest superdiagonal (the A(1,N) entry) is assigned the offset N-1.
//    Similarly, the subdiagonals are assigned offsets of -1 through -(N-1).
//
//    Now, assuming that only a few of these diagonals contain nonzeros,
//    then for the I-th diagonal to be saved, we stored its offset in
//    OFFSET(I), and its entries in column I of the matrix.  
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
//    Input, int N, the number of columns of the matrix.
//    N must be positive.
//
//    Input, int NDIAG, the number of diagonals of the matrix
//    that are stored in the array.
//    NDIAG must be at least 1, and no more than 2 * N - 1.
//
//    Input, int OFFSET[NDIAG], the offsets for the diagonal storage.
//
//    Input, double A[N*NDIAG], the R8GD matrix.
//
//    Input, int ILO, JLO, IHI, JHI, designate the first row and
//    column, and the last row and column to be printed.
//
//    Input, string TITLE, a title.
//
{
# define INCX 5

  double aij;
  int diag;
  int i;
  int i2hi;
  int i2lo;
  int j;
  int j2;
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
    cout << "  Col:  ";
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
    i2hi = i4_min ( ihi, n );

    for ( i = i2lo; i <= i2hi; i++ )
    {
      cout << setw(4) << i << "  ";
//
//  Print out (up to) 5 entries in row I, that lie in the current strip.
//
      for ( j2 = j2lo; j2 <= j2hi; j2++ )
      {
        aij = 0.0;
        for ( diag = 0; diag < ndiag; diag++ )
        {
          if ( j2 - i == offset[diag] )
          {
            aij = a[i-1+diag*n];
          }
        }

        cout << setw(12) << aij << "  ";
      }
      cout << "\n";
    }
  }

  return;
# undef INCX
}
//****************************************************************************80

double *r8gd_random ( int n, int ndiag, int offset[], int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    R8GD_RANDOM randomizes an R8GD matrix.
//
//  Discussion:
//
//    The R8GD storage format is used for matrices whose only nonzero entries
//    occur along a few diagonals, but for which these diagonals are not all
//    close enough to the main diagonal for band storage to be efficient.
//
//    In that case, we assign the main diagonal the offset value 0.
//    Each successive superdiagonal gets an offset value 1 higher, until
//    the highest superdiagonal (the A(1,N) entry) is assigned the offset N-1.
//    Similarly, the subdiagonals are assigned offsets of -1 through -(N-1).
//
//    Now, assuming that only a few of these diagonals contain nonzeros,
//    then for the I-th diagonal to be saved, we stored its offset in
//    OFFSET(I), and its entries in column I of the matrix.  
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 January 2004
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
//    Input, int NDIAG, the number of diagonals of the matrix
//    that are stored in the array.
//    NDIAG must be at least 1, and no more than 2 * N - 1.
//
//    Input, int OFFSET[NDIAG], the offsets for the diagonal storage.
//
//    Input/output, int &SEED, a seed for the random number generator.
//
//    Output, double R8GD_RANDOM[N*NDIAG], the R8GD matrix.
//
{
  double *a;
  int diag;
  int i;
  int j;

  a = r8vec_zeros_new ( n * ndiag );

  for ( i = 1; i <= n; i++ )
  {
    for ( diag = 0; diag < ndiag; diag++ )
    {
      j = i + offset[diag];
      if ( 1 <= j && j <= n )
      {
        a[i-1+diag*n] = r8_uniform_01 ( seed );
      }
    }
  }

  return a;
}
//****************************************************************************80

double *r8gd_to_r8ge ( int n, int ndiag, int offset[], double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8GD_TO_R8GE copies an R8GD matrix to an R8GE matrix.
//
//  Discussion:
//
//    The R8GD storage format is used for matrices whose only nonzero entries
//    occur along a few diagonals, but for which these diagonals are not all
//    close enough to the main diagonal for band storage to be efficient.
//
//    In that case, we assign the main diagonal the offset value 0.
//    Each successive superdiagonal gets an offset value 1 higher, until
//    the highest superdiagonal (the A(1,N) entry) is assigned the offset N-1.
//    Similarly, the subdiagonals are assigned offsets of -1 through -(N-1).
//
//    Now, assuming that only a few of these diagonals contain nonzeros,
//    then for the I-th diagonal to be saved, we stored its offset in
//    OFFSET(I), and its entries in column I of the matrix.  
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 January 2004
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
//    Input, int NDIAG, the number of diagonals of the matrix
//    that are stored in the array.
//    NDIAG must be at least 1, and no more than 2 * N - 1.
//
//    Input, int OFFSET[NDIAG], the offsets for the diagonal storage.
//
//    Input, double A[N*NDIAG], the R8GD matrix.
//
//    Output, double R8GD_TO_R8GE[N*N], the R8GE matrix.
//
{
  double *b;
  int diag;
  int i;
  int j;

  b = r8vec_zeros_new ( n * n );

  for ( i = 0; i < n; i++ )
  {
    for ( diag = 0; diag < ndiag; diag++ )
    {
      j = i + offset[diag];
      if ( 0 <= j && j <= n - 1 )
      {
        b[i+j*n] = a[i+diag*n];
      }
    }
  }

  return b;
}
//****************************************************************************80

double *r8gd_zeros ( int n, int ndiag, int offset[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8GD_ZEROS zeros an R8GD matrix.
//
//  Discussion:
//
//    The R8GD storage format is used for matrices whose only nonzero entries
//    occur along a few diagonals, but for which these diagonals are not all
//    close enough to the main diagonal for band storage to be efficient.
//
//    In that case, we assign the main diagonal the offset value 0.
//    Each successive superdiagonal gets an offset value 1 higher, until
//    the highest superdiagonal (the A(1,N) entry) is assigned the offset N-1.
//    Similarly, the subdiagonals are assigned offsets of -1 through -(N-1).
//
//    Now, assuming that only a few of these diagonals contain nonzeros,
//    then for the I-th diagonal to be saved, we stored its offset in
//    OFFSET(I), and its entries in column I of the matrix.  
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    18 July 2016
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
//    Input, int NDIAG, the number of diagonals of the matrix
//    that are stored in the array.
//    NDIAG must be at least 1, and no more than 2 * N - 1.
//
//    Input, int OFFSET[NDIAG], the offsets for the diagonal storage.
//
//    Output, double R8GD_ZERO[N*NDIAG], the R8GD matrix.
//
{
  double *a;

  a = r8vec_zeros_new ( n * ndiag );

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

  a = r8vec_zeros_new ( n );

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
