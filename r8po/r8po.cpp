# include <cmath>
# include <cstdlib>
# include <ctime>
# include <fstream>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8po.hpp"

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
//    I4_MAX returns the maximum of two integers.
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
//
{
  if ( i2 < i1 )
  {
    return i1;
  }
  else
  {
    return i2;
  }

}
//****************************************************************************80

int i4_min ( int i1, int i2 )

//****************************************************************************80
//
//  Purpose:
//
//    I4_MIN returns the smaller of two integers.
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
  if ( i1 < i2 )
  {
    return i1;
  }
  else
  {
    return i2;
  }

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

double *r8ge_random ( int m, int n, int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_RANDOM randomizes an R8GE matrix.
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
//    15 January 2004
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
//    Input/output, int &SEED, a seed for the random number generator.
//
//    Output, double R8GE_RANDOM[M*N], the randomized M by N matrix, 
//    with entries between 0 and 1.
//
{
  double *a;
  int i;
  int j;

  a = new double[m*n];

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < m; i++ )
    {
      a[i+j*m] = r8_uniform_01 ( seed );
    }
  }
  return a;
}
//****************************************************************************80

double *r8ge_to_r8po ( int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_TO_R8PO copies an R8GE matrix to an R8PO matrix.
//
//  Discussion:
//
//    The R8PO format assumes the matrix is square and symmetric; it is also 
//    typically assumed that the matrix is positive definite.  These are not
//    required here.  The copied R8PO matrix simply zeros out the lower triangle
//    of the R8GE matrix.
//
//    The R8GE storage format is used for a general M by N matrix.  A storage 
//    space is made for each entry.  The two dimensional logical
//    array can be thought of as a vector of M*N entries, starting with
//    the M entries in the column 1, then the M entries in column 2
//    and so on.  Considered as a vector, the entry A(I,J) is then stored
//    in vector location I+(J-1)*M.
//
//    The R8PO storage format is used for a symmetric positive definite 
//    matrix and its inverse.  (The Cholesky factor of an R8PO matrix is an
//    upper triangular matrix, so it will be in R8GE storage format.)
//
//    Only the diagonal and upper triangle of the square array are used.
//    This same storage scheme is used when the matrix is factored by
//    R8PO_FA, or inverted by R8PO_INVERSE.  For clarity, the lower triangle
//    is set to zero.
//
//    R8PO storage is used by LINPACK and LAPACK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 August 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A[N,N], the R8GE matrix.
//
//    Output, double R8GE_TO_R8PO[N,N], the R8PO matrix.
//
{
  double *b;
  int i;
  int j;

  b = new double[n*n];

  for ( i = 0; i < n; i++ )
  {
    for ( j = 0; j < n; j++ )
    {
      if ( i <= j ) 
      {
        b[i+j*n] = a[i+j*n];
      }
      else
      {
        b[i+j*n] = 0.0;
      }
    }
  }

  return b;
}
//****************************************************************************80

double r8po_det ( int n, double a_lu[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8PO_DET computes the determinant of a matrix factored by R8PO_FA.
//
//  Discussion:
//
//    The R8PO storage format is appropriate for a symmetric positive definite 
//    matrix and its inverse.  (The Cholesky factor of an R8PO matrix is an
//    upper triangular matrix, so it will be in R8GE storage format.)
//
//    Only the diagonal and upper triangle of the square array are used.
//    This same storage format is used when the matrix is factored by
//    R8PO_FA, or inverted by R8PO_INVERSE.  For clarity, the lower triangle
//    is set to zero.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    29 July 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A_LU[N*N], the LU factors from R8PO_FA.
//
//    Output, double R8PO_DET, the determinant of A.
//
{
  double det;
  int i;

  det = 1.0;

  for ( i = 0; i < n; i++ )
  {
    det = det * pow ( a_lu[i+i*n], 2 );
  }

  return det;
}
//****************************************************************************80

double *r8po_dif2 ( int n )

//****************************************************************************80
//
//  Purpose:
//
//    R8PO_DIF2 returns the second difference matrix in R8PO format.
//
//  Discussion:
//
//    The R8PO storage format is appropriate for a symmetric positive definite 
//    matrix and its inverse.  (The Cholesky factor of an R8PO matrix is an
//    upper triangular matrix, so it will be in R8GE storage format.)
//
//    Only the diagonal and upper triangle of the square array are used.
//    This same storage format is used when the matrix is factored by
//    R8PO_FA, or inverted by R8PO_INVERSE.  For clarity, the lower triangle
//    is set to zero.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    04 August 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of rows and columns of the matrix.
//    N must be positive.
//
//    Output, double R8PO_DIF2[N*N], the matrix.
//
{
  double *a;
  int i;
  int j;

  a = new double[n*n];

  for ( i = 0; i < n; i++ )
  {
    for ( j = 0; j < n; j++ )
    {
      if ( j == i )
      {
        a[i+j*n] = 2.0;
      }
      else if ( j == i + 1 )
      {
        a[i+j*n] = -1.0;
      }
      else
      {
        a[i+j*n] = 0.0;
      }
    }
  }

  return a;
}
//****************************************************************************80

double *r8po_fa ( int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8PO_FA factors an R8PO matrix.
//
//  Discussion:
//
//    The R8PO storage format is appropriate for a symmetric positive definite 
//    matrix and its inverse.  (The Cholesky factor of an R8PO matrix is an
//    upper triangular matrix, so it will be in R8GE storage format.)
//
//    Only the diagonal and upper triangle of the square array are used.
//    This same storage format is used when the matrix is factored by
//    R8PO_FA, or inverted by R8PO_INVERSE.  For clarity, the lower triangle
//    is set to zero.
//
//    The positive definite symmetric matrix A has a Cholesky factorization
//    of the form:
//
//      A = R' * R
//
//    where R is an upper triangular matrix with positive elements on
//    its diagonal.  
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    04 February 2004
//
//  Author:
//
//    Original FORTRAN77 version by Dongarra, Bunch, Moler, Stewart.
//    C++ version by John Burkardt.
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
//
//    Input, double A[N*N], the matrix in R8PO storage.
//
//    Output, double R8PO_FA[N*N], the Cholesky factor in SGE
//    storage, or NULL if there was an error.
//
{
  double *b;
  int i;
  int j;
  int k;
  double s;

  b = new double[n*n];

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < n; i++ )
    {
      b[i+j*n] = a[i+j*n];
    }
  }

  for ( j = 0; j < n; j++ )
  {
    for ( k = 0; k <= j-1; k++ )
    {
      for ( i = 0; i <= k-1; i++ )
      {
        b[k+j*n] = b[k+j*n] - b[i+k*n] * b[i+j*n];
      }
      b[k+j*n] = b[k+j*n] / b[k+k*n];
    }

    s = b[j+j*n];
    for ( i = 0; i <= j-1; i++ )
    {
      s = s - b[i+j*n] * b[i+j*n];
    }

    if ( s <= 0.0 )
    {
      delete [] b;
      return NULL;
    }

    b[j+j*n] = sqrt ( s );
  }
//
//  Since the Cholesky factor is in R8GE format, zero out the lower triangle.
//
  for ( i = 0; i < n; i++ )
  {
    for ( j = 0; j < i; j++ )
    {
      b[i+j*n] = 0.0;
    }
  }

  return b;
}
//****************************************************************************80

double *r8po_indicator ( int n )

//****************************************************************************80
//
//  Purpose:
//
//    R8PO_INDICATOR sets up an R8PO indicator matrix.
//
//  Discussion:
//
//    The R8PO storage format is appropriate for a symmetric positive definite 
//    matrix and its inverse.  (The Cholesky factor of an R8PO matrix is an
//    upper triangular matrix, so it will be in R8GE storage format.)
//
//    Only the diagonal and upper triangle of the square array are used.
//    This same storage format is used when the matrix is factored by
//    R8PO_FA, or inverted by R8PO_INVERSE.  For clarity, the lower triangle
//    is set to zero.
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
//    Input, int N, the number of rows and columns of the matrix.
//    N must be positive.
//
//    Output, double R8PO_INDICATOR[N*N], the R8PO matrix.
//
{
  double *a;
  int fac;
  int i;
  int j;

  a = new double[n*n];

  fac = i4_power ( 10, i4_log_10 ( n ) + 1 );

  for ( i = 1; i <= n; i++ )
  {
    for ( j = 1; j <= i-1; j++ )
    {
      a[i-1+(j-1)*n] = 0.0;
    }
    for ( j = i; j <= n; j++ )
    {
      a[i-1+(j-1)*n] = ( double ) ( fac * i + j );
    }
  }

  return a;
}
//****************************************************************************80

double *r8po_inverse ( int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8PO_INVERSE computes the inverse of a matrix factored by R8PO_FA.
//
//  Discussion:
//
//    The R8PO storage format is appropriate for a symmetric positive definite 
//    matrix and its inverse.  (The Cholesky factor of an R8PO matrix is an
//    upper triangular matrix, so it will be in R8GE storage format.)
//
//    Only the diagonal and upper triangle of the square array are used.
//    This same storage format is used when the matrix is factored by
//    R8PO_FA, or inverted by R8PO_INVERSE.  For clarity, the lower triangle
//    is set to zero.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 February 2004
//
//  Author:
//
//    Original FORTRAN77 version by Dongarra, Bunch, Moler, Stewart.
//    C++ version by John Burkardt.
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
//
//    Input, double A[N*N], the Cholesky factor, in R8GE storage, returned by R8PO_FA.
//
//    Output, double R8PO_INVERSE[N*N], the inverse, in R8PO storage.
//
{
  double *b;
  int i;
  int j;
  int k;
  double t;

  b = new double[n*n];

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < n; i++ )
    {
      b[i+j*n] = a[i+j*n];
    }
  }
//
//  Compute Inverse ( R ).
//
  for ( k = 0; k < n; k++ )
  {
    b[k+k*n] = 1.0 / b[k+k*n];
    for ( i = 0; i < k; i++ )
    {
      b[i+k*n] = -b[i+k*n] * b[k+k*n];
    }

    for ( j = k+1; j < n; j++ )
    {
      t = b[k+j*n];
      b[k+j*n] = 0.0;
      for ( i = 0; i <= k; i++ )
      {
        b[i+j*n] = b[i+j*n] + t * b[i+k*n];
      }
    }
  }
//
//  Compute Inverse ( R ) * Transpose ( Inverse ( R ) ).
//
  for ( j = 0; j < n; j++ )
  {
    for ( k = 0; k < j; k++ )
    {
      t = b[k+j*n];
      for ( i = 0; i <= k; i++ )
      {
        b[i+k*n] = b[i+k*n] + t * b[i+j*n];
      }
    }
    t = b[j+j*n];
    for ( i = 0; i <= j; i++ )
    {
      b[i+j*n] = b[i+j*n] * t;
    }
  }

  return b;
}
//****************************************************************************80

double *r8po_ml ( int n, double a_lu[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8PO_ML computes A * x = b after A has been factored by R8PO_FA.
//
//  Discussion:
//
//    The R8PO storage format is appropriate for a symmetric positive definite 
//    matrix and its inverse.  (The Cholesky factor of an R8PO matrix is an
//    upper triangular matrix, so it will be in R8GE storage format.)
//
//    Only the diagonal and upper triangle of the square array are used.
//    This same storage format is used when the matrix is factored by
//    R8PO_FA, or inverted by R8PO_INVERSE.  For clarity, the lower triangle
//    is set to zero.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    01 October 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A_LU[N*N], the Cholesky factor from R8PO_FA.
//
//    Input, double X[N], the vector to be multiplied by A.
//
//    Output, double R8PO_ML[N], the product A * x.
//
{
  double *b;
  int i;
  int j;

  b = new double[n];
//
//  Compute R * x = y.
//
  for ( i = 0; i < n; i++ )
  {
    b[i] = a_lu[i+i*n] * x[i];
    for ( j = i+1; j < n; j++ )
    {
      b[i] = b[i] + a_lu[i+j*n] * x[j];
    }
  }
//
//  Compute R' * y = b.
//
  for ( j = n-1; 0 <= j; j-- )
  {
    b[j] = a_lu[j+j*n] * b[j];
    for ( i = 0; i < j; i++ )
    {
      b[j] = b[j] + b[i] * a_lu[i+j*n];
    }
  }

  return b;
}
//****************************************************************************80

double *r8po_mm ( int n, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8PO_MM multiplies two R8PO matrices.
//
//  Discussion:
//
//    The R8PO storage format is appropriate for a symmetric positive definite
//    matrix and its inverse.  (The Cholesky factor of an R8PO matrix is an
//    upper triangular matrix, so it will be in R8GE storage format.)
//
//    Only the diagonal and upper triangle of the square array are used.
//    This same storage format is used when the matrix is factored by
//    R8PO_FA, or inverted by R8PO_INVERSE.  For clarity, the lower triangle
//    is set to zero.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    13 December 2003
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
//    Input, double A[N*N], B[N*N], the R8PO factor matrices.
//
//    Output, double R8PO_MM[N*N], the R8PO product matrix.
//
{
  double aik;
  double bkj;
  double *c;
  int i;
  int j;
  int k;

  c = new double[n*n];

  for ( i = 1; i <= n; i++ )
  {
    for ( j = 1; j <= n; j++ )
    {
      c[i-1+(j-1)*n] = 0.0;
    }
  }

  for ( i = 1; i <= n; i++ )
  {
    for ( j = i; j <= n; j++ )
    {
      for ( k = 1; k <= n; k++ )
      {
        if ( i <= k )
        {
          aik = a[i-1+(k-1)*n];
        }
        else
        {
          aik = a[k-1+(i-1)*n];
        }

        if ( k <= j )
        {
          bkj = b[k-1+(j-1)*n];
        }
        else
        {
          bkj = b[j-1+(k-1)*n];
        }

        c[i-1+(j-1)*n] = c[i-1+(j-1)*n] + aik * bkj;

      }
    }

  }

  return c;
}
//****************************************************************************80

double *r8po_mv ( int n, double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8PO_MV multiplies an R8PO matrix times a vector.
//
//  Discussion:
//
//    The R8PO storage format is appropriate for a symmetric positive definite 
//    matrix and its inverse.  (The Cholesky factor of an R8PO matrix is an
//    upper triangular matrix, so it will be in R8GE storage format.)
//
//    Only the diagonal and upper triangle of the square array are used.
//    This same storage format is used when the matrix is factored by
//    R8PO_FA, or inverted by R8PO_INVERSE.  For clarity, the lower triangle
//    is set to zero.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    01 October 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A[N*N], the R8PO matrix.
//
//    Input, double X[N], the vector to be multiplied by A.
//
//    Output, double R8PO_MV(N), the product A * x.
//
{
  double *b;
  int i;
  int j;

  b = new double[n];

  for ( i = 0; i < n; i++ )
  {
    b[i] = 0.0;
    for ( j = 0; j < i; j++ )
    {
      b[i] = b[i] + a[j+i*n] * x[j];
    }
    for ( j = i; j < n; j++ )
    {
      b[i] = b[i] + a[i+j*n] * x[j];
    }
  }
  return b;
}
//****************************************************************************80

void r8po_print ( int n, double a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8PO_PRINT prints an R8PO matrix.
//
//  Discussion:
//
//    The R8PO storage format is appropriate for a symmetric positive definite 
//    matrix and its inverse.  (The Cholesky factor of an R8PO matrix is an
//    upper triangular matrix, so it will be in R8GE storage format.)
//
//    Only the diagonal and upper triangle of the square array are used.
//    This same storage format is used when the matrix is factored by
//    R8PO_FA, or inverted by R8PO_INVERSE.  For clarity, the lower triangle
//    is set to zero.
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
//
//    Input, double A[M*N], the R8PO matrix.
//
//    Input, string TITLE, a title.
//
{
  r8po_print_some ( n, a, 1, 1, n, n, title );

  return;
}
//****************************************************************************80

void r8po_print_some ( int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8PO_PRINT_SOME prints some of an R8PO matrix.
//
//  Discussion:
//
//    The R8PO storage format is appropriate for a symmetric positive definite 
//    matrix and its inverse.  (The Cholesky factor of an R8PO matrix is an
//    upper triangular matrix, so it will be in R8GE storage format.)
//
//    Only the diagonal and upper triangle of the square array are used.
//    This same storage format is used when the matrix is factored by
//    R8PO_FA, or inverted by R8PO_INVERSE.  For clarity, the lower triangle
//    is set to zero.
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
//    Input, double A[M*N], the R8PO matrix.
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
    i2hi = i4_min ( ihi, n );

    for ( i = i2lo; i <= i2hi; i++ )
    {
//
//  Print out (up to) 5 entries in row I, that lie in the current strip.
//
      cout << setw(5) << i << "  ";
      for ( j = j2lo; j <= j2hi; j++ )
      {
        if ( i <= j )
        {
          cout << setw(12) << a[i-1+(j-1)*n] << "  ";
        }
        else
        {
          cout << setw(12) << a[j-1+(i-1)*n] << "  ";
        }
      }
      cout << "\n";
    }
  }

  cout << "\n";

  return;
# undef INCX
}
//****************************************************************************80

double *r8po_random ( int n, int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    R8PO_RANDOM randomizes an R8PO matrix.
//
//  Discussion:
//
//    The R8PO storage format is appropriate for a symmetric positive definite 
//    matrix and its inverse.  (The Cholesky factor of an R8PO matrix is an
//    upper triangular matrix, so it will be in R8GE storage format.)
//
//    Only the diagonal and upper triangle of the square array are used.
//    This same storage format is used when the matrix is factored by
//    R8PO_FA, or inverted by R8PO_INVERSE.  For clarity, the lower triangle
//    is set to zero.
//
//    The matrix computed here is not simply a set of random numbers in
//    the nonzero slots of the R8PO array.  It is also a positive definite
//    matrix.  It is computed by setting a "random" upper triangular
//    Cholesky factor R, and then computing A = R'*R.
//    The randomness is limited by the fact that all the entries of
//    R will be between 0 and 1.  A truly random R is only required
//    to have positive entries on the diagonal.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    13 December 2003
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
//    Input/output, int &SEED, a seed for the random number generator.
//
//    Output, double R8PO_RANDOM[N*N], the R8PO matrix.
//
{
  double *a;
  int i;
  int j;
  int k;

  a = new double[n*n];

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < n; i++ )
    {
      a[i+j*n] = 0.0;
    }
  }

  for ( i = n; 1 <= i; i-- )
  {
//
//  Set row I of R.
//
    for ( j = i; j <= n; j++ )
    {
      a[i-1+(j-1)*n] = r8_uniform_01 ( seed );
    }
//
//  Consider element J of row I, last to first.
//
    for ( j = n; i <= j; j-- )
    {
//
//  Add multiples of row I to lower elements of column J.
//
      for ( k = i+1; k <= j; k++ )
      {
        a[k-1+(j-1)*n] = a[k-1+(j-1)*n] + a[i-1+(k-1)*n] * a[i-1+(j-1)*n];
      }
//
//  Reset element J.
//
      a[i-1+(j-1)*n] = a[i-1+(i-1)*n] * a[i-1+(j-1)*n];
    }
  }

  return a;
}
//****************************************************************************80

double *r8po_sl ( int n, double a_lu[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8PO_SL solves a linear system that has been factored by R8PO_FA.
//
//  Discussion:
//
//    The R8PO storage format is appropriate for a symmetric positive definite 
//    matrix and its inverse.  (The Cholesky factor of an R8PO matrix is an
//    upper triangular matrix, so it will be in R8GE storage format.)
//
//    Only the diagonal and upper triangle of the square array are used.
//    This same storage format is used when the matrix is factored by
//    R8PO_FA, or inverted by R8PO_INVERSE.  For clarity, the lower triangle
//    is set to zero.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 February 2004
//
//  Author:
//
//    Original FORTRAN77 version by Dongarra, Bunch, Moler, Stewart.
//    C++ version by John Burkardt.
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
//
//    Input, double A_LU[N*N], the Cholesky factor from R8PO_FA.
//
//    Input, double B[N], the right hand side.
//
//    Output, double R8PO_SL[N], the solution vector.
//
{
  int i;
  int k;
  double *x;

  x = new double[n];

  for ( k = 0; k < n; k++ )
  {
    x[k] = b[k];
  }
//
//  Solve R' * y = b.
//
  for ( k = 0; k < n; k++ )
  {
    for ( i = 0; i < k; i++ )
    {
      x[k] = x[k] - x[i] * a_lu[i+k*n];
    }
    x[k] = x[k] / a_lu[k+k*n];
  }
//
//  Solve R * x = y.
//
  for ( k = n-1; 0 <= k; k-- )
  {
    x[k] = x[k] / a_lu[k+k*n];
    for ( i = 0; i < k; i++ )
    {
      x[i] = x[i] - a_lu[i+k*n] * x[k];
    }
  }

  return x;
}
//****************************************************************************80

double *r8po_to_r8ge ( int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8PO_TO_R8GE copies an R8PO matrix to an R8GE matrix.
//
//  Discussion:
//
//    The R8PO storage format is appropriate for a symmetric positive definite 
//    matrix and its inverse.  (The Cholesky factor of an R8PO matrix is an
//    upper triangular matrix, so it will be in R8GE storage format.)
//
//    Only the diagonal and upper triangle of the square array are used.
//    This same storage format is used when the matrix is factored by
//    R8PO_FA, or inverted by R8PO_INVERSE.  For clarity, the lower triangle
//    is set to zero.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    01 October 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A[N*N], the R8PO matrix.
//
//    Output, double R8PO_TO_R8GE[N*N], the R8GE matrix.
//
{
  double *b;
  int i;
  int j;

  b = new double[n*n];

  for ( i = 0; i < n; i++ )
  {
    for ( j = 0; j < n; j++ )
    {
      if ( i <= j )
      {
        b[i+j*n] = a[i+j*n];
      }
      else
      {
        b[i+j*n] = a[j+i*n];
      }
    }
  }

  return b;
}
//****************************************************************************80

double *r8po_zeros ( int n )

//****************************************************************************80
//
//  Purpose:
//
//    R8PO_ZEROS zeros an R8PO matrix.
//
//  Discussion:
//
//    The R8PO storage format is appropriate for a symmetric positive definite 
//    matrix and its inverse.  (The Cholesky factor of an R8PO matrix is an
//    upper triangular matrix, so it will be in R8GE storage format.)
//
//    Only the diagonal and upper triangle of the square array are used.
//    This same storage format is used when the matrix is factored by
//    R8PO_FA, or inverted by R8PO_INVERSE.  For clarity, the lower triangle
//    is set to zero.
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
//    Input, int N, the number of rows and columns of the matrix.
//    N must be positive.
//
//    Output, double R8PO_ZERO[N*N], the R8PO matrix.
//
{
  double *a;
  int i;
  int j;

  a = new double[n*n];

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < n; i++ )
    {
      a[i+j*n] = 0.0;
    }
  }

  return a;
}
//****************************************************************************80

void r8ut_print ( int m, int n, double a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8UT_PRINT prints an R8UT matrix.
//
//  Discussion:
//
//    The R8UT storage format is used for an M by N upper triangular matrix,
//    and allocates space even for the zero entries.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    18 August 2015
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
//    Input, double A[M*N], the R8UT matrix.
//
//    Input, string TITLE, a title.
//
{
  r8ut_print_some ( m, n, a, 0, 0, m - 1, n - 1, title );

  return;
}
//****************************************************************************80

void r8ut_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8UT_PRINT_SOME prints some of an R8UT matrix.
//
//  Discussion:
//
//    The R8UT storage format is used for an M by N upper triangular matrix,
//    and allocates space even for the zero entries.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    18 August 2015
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
//    Input, double A[M*N], the R8UT matrix.
//
//    Input, int ILO, JLO, IHI, JHI, designate the first row and
//    column, and the last row and column to be printed.
//    0 <= ILO <= IHI < M.
//    0 <= JLO <= JHI < N.
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

    i2hi = i4_min ( ihi, m - 1 );

    for ( i = i2lo; i <= i2hi; i++ )
    {
//
//  Print out (up to) 5 entries in row I, that lie in the current strip.
//
      cout << setw(4) << i << "  ";

      for ( j = j2lo; j <= j2hi; j++ )
      {
        if ( j < i )
        {
          cout << "              ";
        }
        else
        {
          cout << setw(12) << a[i+j*m] << "  ";
        }
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

  a = new double[n];

  for ( i = 0; i <= n-1; i++ ) 
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
