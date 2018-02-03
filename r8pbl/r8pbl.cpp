# include <cmath>
# include <cstdlib>
# include <ctime>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8pbl.hpp"

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

double *r8pbl_dif2 ( int n, int ml )

//****************************************************************************80
//
//  Purpose:
//
//    R8PBL_DIF2 returns the DIF2 matrix in R8PBL format.
//
//  Example:
//
//    N = 5
//
//    2 -1  .  .  .
//   -1  2 -1  .  .
//    . -1  2 -1  .
//    .  . -1  2 -1
//    .  .  . -1  2
//
//  Properties:
//
//    A is banded, with bandwidth 3.
//
//    A is tridiagonal.
//
//    Because A is tridiagonal, it has property A (bipartite).
//
//    A is a special case of the TRIS or tridiagonal scalar matrix.
//
//    A is integral, therefore det ( A ) is integral, and 
//    det ( A ) * inverse ( A ) is integral.
//
//    A is Toeplitz: constant along diagonals.
//
//    A is symmetric: A' = A.
//
//    Because A is symmetric, it is normal.
//
//    Because A is normal, it is diagonalizable.
//
//    A is persymmetric: A(I,J) = A(N+1-J,N+1-I).
//
//    A is positive definite.
//
//    A is an M matrix.
//
//    A is weakly diagonally dominant, but not strictly diagonally dominant.
//
//    A has an LU factorization A = L * U, without pivoting.
//
//      The matrix L is lower bidiagonal with subdiagonal elements:
//
//        L(I+1,I) = -I/(I+1)
//
//      The matrix U is upper bidiagonal, with diagonal elements
//
//        U(I,I) = (I+1)/I
//
//      and superdiagonal elements which are all -1.
//
//    A has a Cholesky factorization A = L * L', with L lower bidiagonal.
//
//      L(I,I) =    sqrt ( (I+1) / I )
//      L(I,I-1) = -sqrt ( (I-1) / I )
//
//    The eigenvalues are
//
//      LAMBDA(I) = 2 + 2 * COS(I*PI/(N+1))
//                = 4 SIN^2(I*PI/(2*N+2))
//
//    The corresponding eigenvector X(I) has entries
//
//       X(I)(J) = sqrt(2/(N+1)) * sin ( I*J*PI/(N+1) ).
//
//    Simple linear systems:
//
//      x = (1,1,1,...,1,1),   A*x=(1,0,0,...,0,1)
//
//      x = (1,2,3,...,n-1,n), A*x=(0,0,0,...,0,n+1)
//
//    det ( A ) = N + 1.
//
//    The value of the determinant can be seen by induction,
//    and expanding the determinant across the first row:
//
//      det ( A(N) ) = 2 * det ( A(N-1) ) - (-1) * (-1) * det ( A(N-2) )
//                = 2 * N - (N-1)
//                = N + 1
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    21 July 2016
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Robert Gregory, David Karney,
//    A Collection of Matrices for Testing Computational Algorithms,
//    Wiley, 1969,
//    ISBN: 0882756494,
//    LC: QA263.68
//
//    Morris Newman, John Todd,
//    Example A8,
//    The evaluation of matrix inversion programs,
//    Journal of the Society for Industrial and Applied Mathematics,
//    Volume 6, Number 4, pages 466-476, 1958.
//
//    John Todd,
//    Basic Numerical Mathematics,
//    Volume 2: Numerical Algebra,
//    Birkhauser, 1980,
//    ISBN: 0817608117,
//    LC: QA297.T58.
//
//    Joan Westlake,
//    A Handbook of Numerical Matrix Inversion and Solution of 
//    Linear Equations,
//    John Wiley, 1968,
//    ISBN13: 978-0471936756,
//    LC: QA263.W47.
//
//  Parameters:
//
//    Input, int N, the number of rows and columns.
//
//    Input, int ML, the number of subdiagonals.
//    ML must be at least 0, and no more than N-1.
//
//    Output, double R8PBL_DIF2[(ML+1)*N], the matrix.
//
{
  double *a;
  int j;

  a = r8vec_zeros_new ( ( ml + 1 ) * n );

  for ( j = 0; j < n; j++ )
  {
    a[0+j*(ml+1)] = 2.0;
  }
  for ( j = 0; j < n - 1; j++ )
  {
    a[1+j*(ml+1)] = -1.0;
  }

  return a;
}
//****************************************************************************80

double *r8pbl_indicator ( int n, int ml )

//****************************************************************************80
//
//  Purpose:
//
//    R8PBL_INDICATOR sets up an R8PBL indicator matrix.
//
//  Discussion:
//
//    The R8PBL storage format is used for a symmetric positive definite band matrix.
//
//    To save storage, only the diagonal and lower triangle of A is stored,
//    in a compact diagonal format that preserves columns.
//
//    The diagonal is stored in row 1 of the array.
//    The first subdiagonal in row 2, columns 1 through ML.
//    The second subdiagonal in row 3, columns 1 through ML-1.
//    The ML-th subdiagonal in row ML+1, columns 1 through 1.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    13 January 2004
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
//    Input, int ML, the number of subdiagonals in the matrix.
//    ML must be at least 0 and no more than N-1.
//
//    Output, double R8PBL_INDICATOR[(ML+1)*N], the R8PBL matrix.
//
{
  double *a;
  int fac;
  int i;
  int j;

  a = r8vec_zeros_new ( ( ml + 1 ) * n );

  fac = i4_power ( 10, i4_log_10 ( n ) + 1 );

  for ( i = 0; i <= n; i++ )
  {
    for ( j = i4_max ( 1, i - ml ); j <= i; j++ )
    {
      a[i-j+(j-1)*(ml+1)] = ( double ) ( fac * ( i + 1 ) + ( j + 1 ) );
    }
  }
  return a;
}
//****************************************************************************80

double *r8pbl_mv ( int n, int ml, double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8PBL_MV multiplies an R8PBL matrix by an R8VEC.
//
//  Discussion:
//
//    The R8PBL storage format is for a symmetric positive definite band matrix.
//
//    To save storage, only the diagonal and lower triangle of A is stored,
//    in a compact diagonal format that preserves columns.
//
//    The diagonal is stored in row 1 of the array.
//    The first subdiagonal in row 2, columns 1 through ML.
//    The second subdiagonal in row 3, columns 1 through ML-1.
//    The ML-th subdiagonal in row ML+1, columns 1 through 1.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    21 July 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, int ML, the number of subdiagonals in the matrix.
//    ML must be at least 0 and no more than N-1.
//
//    Input, double A([ML+1)*N], the R8PBL matrix.
//
//    Input, double X[N], the vector to be multiplied by A.
//
//    Output, double R8PBL_MV[M], the result vector A * x.
//
{
  double aij;
  double *b;
  int i;
  int j;
  int k;

  b = r8vec_zeros_new ( n );
//
//  Multiply X by the diagonal of the matrix.
//
  for ( j = 0; j < n; j++ )
  {
    b[j] = a[0+j*(ml+1)] * x[j];
  }
//
//  Multiply X by the subdiagonals of the matrix.
//
  for ( k = 0; k < ml; k++ )
  {
    for ( j = 0; j < n - k; j++ )
    {
      i = j + k;
      aij = a[k+1+j*(ml+1)];
      b[i] = b[i] + aij * x[j];
      b[j] = b[j] + aij * x[i];
    }
  }

  return b;
}
//****************************************************************************80

void r8pbl_print ( int n, int ml, double a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8PBL_PRINT prints an R8PBL matrix.
//
//  Discussion:
//
//    The R8PBL storage format is used for a symmetric positive definite band matrix.
//
//    To save storage, only the diagonal and lower triangle of A is stored,
//    in a compact diagonal format that preserves columns.
//
//    The diagonal is stored in row 1 of the array.
//    The first subdiagonal in row 2, columns 1 through ML.
//    The second subdiagonal in row 3, columns 1 through ML-1.
//    The ML-th subdiagonal in row ML+1, columns 1 through 1.
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
//    Input, int N, the order of the matrix.
//    N must be positive.
//
//    Input, int ML, the upper (and lower) bandwidth.
//    ML must be nonnegative, and no greater than N-1.
//
//    Input, double A[(ML+1)*N], the R8PBL matrix.
//
//    Input, string TITLE, a title.
//
{
  r8pbl_print_some ( n, ml, a, 0, 0, n - 1, n - 1, title );

  return;
}
//****************************************************************************80

void r8pbl_print_some ( int n, int ml, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8PBL_PRINT_SOME prints some of an R8PBL matrix.
//
//  Discussion:
//
//    The R8PBL storage format is used for a symmetric positive definite band matrix.
//
//    To save storage, only the diagonal and lower triangle of A is stored,
//    in a compact diagonal format that preserves columns.
//
//    The diagonal is stored in row 1 of the array.
//    The first subdiagonal in row 2, columns 1 through ML.
//    The second subdiagonal in row 3, columns 1 through ML-1.
//    The ML-th subdiagonal in row ML+1, columns 1 through 1.
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
//    Input, int N, the order of the matrix.
//    N must be positive.
//
//    Input, int ML, the upper (and lower) bandwidth.
//    ML must be nonnegative, and no greater than N-1.
//
//    Input, double A[(ML+1)*N], the R8PBL matrix.
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
    j2hi = i4_min ( j2hi, n - 1 );
    j2hi = i4_min ( j2hi, jhi );

    cout << "\n";
    cout << "  Col: ";
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
    i2lo = i4_max ( ilo, 0 );
    i2lo = i4_max ( i2lo, j2lo - ml );

    i2hi = i4_min ( ihi, n );
    i2hi = i4_min ( i2hi, j2hi + ml );

    for ( i = i2lo; i <= i2hi; i++ )
    {
      cout << setw(4) << i << "  ";
//
//  Print out (up to) 5 entries in row I, that lie in the current strip.
//
      for ( j = j2lo; j <= j2hi; j++ )
      {
        if ( i <= j && j <= i + ml )
        {
          cout << setw(12) << a[j-i+i*(ml+1)] << "  ";
        }
        else if ( j <= i && i <= j + ml )
        {
          cout << setw(12) << a[i-j+j*(ml+1)] << "  ";
        }
        else
        {
          cout << "              ";
        }
      }
      cout << "\n";
    }
  }

  return;
# undef INCX
}
//****************************************************************************80

double *r8pbl_random ( int n, int ml, int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    R8PBL_RANDOM randomizes an R8PBL matrix.
//
//  Discussion:
//
//    The R8PBL storage format is used for a symmetric positive definite band matrix.
//
//    To save storage, only the diagonal and lower triangle of A is stored,
//    in a compact diagonal format that preserves columns.
//
//    The diagonal is stored in row 1 of the array.
//    The first subdiagonal in row 2, columns 1 through ML.
//    The second subdiagonal in row 3, columns 1 through ML-1.
//    The ML-th subdiagonal in row ML+1, columns 1 through 1.
//
//    The matrix returned will be positive definite, but of limited
//    randomness.  The off diagonal elements are random values between
//    0 and 1, and the diagonal element of each row is selected to
//    ensure strict diagonal dominance.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    15 October 2003
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
//    Input, int ML, the number of subdiagonals in the matrix.
//    ML must be at least 0 and no more than N-1.
//
//    Input/output, int &SEED, a seed for the random number generator.
//
//    Output, double R8PBL_RANDOM[(ML+1)*N], the R8PBL matrix.
//
{
  double *a;
  int i;
  int j;
  double r;
  double sum2;

  a = r8vec_zeros_new ( ( ml + 1 ) * n );

  for ( i = 0; i < n; i++ )
  {
    for ( j = i4_max ( 0, i - ml ); j <= i - 1; j++ )
    {
      a[i-j+j*(ml+1)] = r8_uniform_01 ( seed );
    }
  }
//
//  Set the diagonal values.
//
  for ( i = 0; i < n; i++ )
  {
    sum2 = 0.0;

    for ( j = i4_max ( 0, i - ml ); j <= i-1; j++ )
    {
      sum2 = sum2 + fabs ( a[i-j+j*(ml+1)] );
    }

    for ( j = i+1; j <= i4_min ( i + ml, n -1 ); j++ )
    {
      sum2 = sum2 + fabs ( a[j-i+i*(ml+1)] );
    }

    r = r8_uniform_01 ( seed );

    a[0+i*(ml+1)] = ( 1.0 + r ) * ( sum2 + 0.01 );
  }

  return a;
}
//****************************************************************************80

double *r8pbl_to_r8ge ( int n, int ml, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8PBL_TO_R8GE copies an R8PBL matrix to an R8GE matrix.
//
//  Discussion:
//
//    The R8PBL storage format is used for a symmetric positive definite band matrix.
//
//    To save storage, only the diagonal and lower triangle of A is stored,
//    in a compact diagonal format that preserves columns.
//
//    The diagonal is stored in row 1 of the array.
//    The first subdiagonal in row 2, columns 1 through ML.
//    The second subdiagonal in row 3, columns 1 through ML-1.
//    The ML-th subdiagonal in row ML+1, columns 1 through 1.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    19 May 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrices.
//    N must be positive.
//
//    Input, int ML, the upper bandwidth of A1.
//    ML must be nonnegative, and no greater than N-1.
//
//    Input, double A[(ML+1)*N], the R8PBL matrix.
//
//    Output, double R8PBL_TO_R8GE[N*N], the R8GE matrix.
//
{
  double *b;
  int i;
  int j;

  b = r8vec_zeros_new ( n * n );

  for ( i = 0; i < n; i++ )
  {
    for ( j = 0; j < n; j++ )
    {
      if ( i <= j && j <= i + ml )
      {
        b[i+j*n] = a[j-i+i*(ml+1)];
      }
      else if ( i - ml <= j && j < i )
      {
        b[i+j*n] = a[i-j+j*(ml+1)];
      }
    }
  }

  return b;
}
//****************************************************************************80

double *r8pbl_zeros ( int n, int ml )

//****************************************************************************80
//
//  Purpose:
//
//    R8PBL_ZEROS zeros an R8PBL matrix.
//
//  Discussion:
//
//    The R8PBL storage format is used for a symmetric positive definite band matrix.
//
//    To save storage, only the diagonal and lower triangle of A is stored,
//    in a compact diagonal format that preserves columns.
//
//    The diagonal is stored in row 1 of the array.
//    The first subdiagonal in row 2, columns 1 through ML.
//    The second subdiagonal in row 3, columns 1 through ML-1.
//    The ML-th subdiagonal in row ML+1, columns 1 through 1.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    15 September 2003
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
//    Input, int ML, the number of subdiagonals in the matrix.
//    ML must be at least 0 and no more than N-1.
//
//    Output, double R8PBL_ZERO[(ML+1)*N], the R8PBL matrix.
//
{
  double *a;

  a = r8vec_zeros_new ( ( ml + 1 ) * n );

  return a;
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
