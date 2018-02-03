# include <cmath>
# include <cstdlib>
# include <ctime>
# include <fstream>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8ge_np.hpp"

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

double *r8ge_dif2 ( int m, int n )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_DIF2 returns the DIF2 matrix in R8GE format.
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
//    06 June 2016
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
//    Input, int M, N, the order of the matrix.
//
//    Output, double R8GE_DIF2[M*N], the matrix.
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
      if ( j == i - 1 )
      {
        a[i+j*m] = -1.0;
      }
      else if ( j == i )
      {
        a[i+j*m] = 2.0;
      }
      else if ( j == i + 1 )
      {
        a[i+j*m] = -1.0;
      }
      else
      {
        a[i+j*m] = 0.0;
      }
    }
  }

  return a;
}
//****************************************************************************80

double *r8ge_mm ( int n1, int n2, int n3, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_MM multiplies two matrices.
//
//  Discussion:
//
//    An R8GE is a doubly dimensioned array of R8 values, stored as a vector
//    in column-major order.
//
//    For this routine, the result is returned as the function value.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 December 2011
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N1, N2, N3, the order of the matrices.
//
//    Input, double A[N1*N2], double B[N2*N3], the matrices to multiply.
//
//    Output, double R8GE_MM_NEW[N1*N3], the product matrix C = A * B.
//
{
  double *c;
  int i;
  int j;
  int k;

  c = new double[n1*n3];

  for ( i = 0; i < n1; i++ )
  {
    for ( j = 0; j < n3; j++ )
    {
      c[i+j*n1] = 0.0;
      for ( k = 0; k < n2; k++ )
      {
        c[i+j*n1] = c[i+j*n1] + a[i+k*n1] * b[k+j*n2];
      }
    }
  }

  return c;
}
//****************************************************************************80

double *r8ge_mtv ( int m, int n, double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_MTV multiplies a vector times an R8GE matrix.
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
//    13 September 2003
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
//    Input, double X[M], the vector to be multiplied by A.
//
//    Output, double R8GE_MTV[N], the product A' * x.
//
{
  double *b;
  int i;
  int j;

  b = r8vec_zeros_new ( n );

  for ( i = 0; i < n; i++ )
  {
    for ( j = 0; j < m; j++ )
    {
      b[i] = b[i] + a[j+i*m] * x[j];
    }
  }

  return b;
}
//****************************************************************************80

double *r8ge_mv ( int m, int n, double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_MV multiplies an R8GE matrix times a vector.
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
//    11 September 2003
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
//    Input, double X[N], the vector to be multiplied by A.
//
//    Output, double R8GE_MV[M], the product A * x.
//
{
  double *b;
  int i;
  int j;

  b = r8vec_zeros_new ( m );

  for ( i = 0; i < m; i++ )
  {
    for ( j = 0; j < n; j++ )
    {
      b[i] = b[i] + a[i+j*m] * x[j];
    }
  }

  return b;
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

double *r8ge_to_r8vec ( int m, int n, double *a )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_TO_R8VEC copies an R8GE matrix to a real vector.
//
//  Discussion:
//
//    The R8GE storage format is used for a "general" M by N matrix.  
//    A physical storage space is made for each logical entry.  The two 
//    dimensional logical array is mapped to a vector, in which storage is 
//    by columns.
//
//    In C++  and FORTRAN, this routine is not really needed.  In MATLAB,
//    a data item carries its dimensionality implicitly, and so cannot be
//    regarded sometimes as a vector and sometimes as an array.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 March 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns in the array.
//
//    Input, double A[M*N], the array to be copied.
//
//    Output, double R8GE_TO_R8VEC[M*N], the vector.
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

double *r8ge_zeros ( int m, int n )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_ZEROS zeros an R8GE matrix.
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
//    13 September 2003
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
//    Output, double R8GE_ZERO[M*N], the M by N matrix.
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
      a[i+j*m] = 0.0;
    }
  }

  return a;
}
//****************************************************************************80

double r8ge_np_det ( int n, double a_lu[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_NP_DET computes the determinant of a matrix factored by R8GE_NP_FA.
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
//    14 October 2003
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
//    Input, double A_LU[N*N], the LU factors from R8GE_NP_FA.
//
//    Output, double R8GE_NP_DET, the determinant of the matrix.
//
{
  double det;
  int i;

  det = 1.0;
  for ( i = 0; i < n; i++ )
  {
    det = det * a_lu[i+i*n];
  }

  return det;
}
//****************************************************************************80

int r8ge_np_fa ( int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_NP_FA factors an R8GE matrix by nonpivoting Gaussian elimination.
//
//  Discussion:
//
//    The R8GE storage format is used for a "general" M by N matrix.  
//    A physical storage space is made for each logical entry.  The two 
//    dimensional logical array is mapped to a vector, in which storage is 
//    by columns.
//
//    R8GE_NP_FA is a version of the LINPACK routine SGEFA, but uses no
//    pivoting.  It will fail if the matrix is singular, or if any zero
//    pivot is encountered.
//
//    If R8GE_NP_FA successfully factors the matrix, R8GE_NP_SL may be called
//    to solve linear systems involving the matrix.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 October 2003
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
//    Input/output, double A[N*N].
//    On input, A contains the matrix to be factored.
//    On output, A contains information about the factorization,
//    which must be passed unchanged to R8GE_NP_SL for solutions.
//
//    Output, int R8GE_NP_FA, singularity flag.
//    0, no singularity detected.
//    nonzero, the factorization failed on the INFO-th step.
//
{
  int i;
  int j;
  int k;

  for ( k = 1; k <= n - 1; k++ )
  {
    if ( a[k-1+(k-1)*n] == 0.0 )
    {
      return k;
    }

    for ( i = k + 1; i <= n; i++ )
    {
      a[i-1+(k-1)*n] = - a[i-1+(k-1)*n] / a[k-1+(k-1)*n];
    }

    for ( j = k + 1; j <= n; j++ )
    {
      for ( i = k + 1; i <= n; i++ )
      {
        a[i-1+(j-1)*n] = a[i-1+(j-1)*n] + a[i-1+(k-1)*n] * a[k-1+(j-1)*n];
      }
    }
  }

  if ( a[n-1+(n-1)*n] == 0.0 )
  {
    return n;
  }

  return 0;
}
//****************************************************************************80

double *r8ge_np_inverse ( int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_NP_INVERSE computes the inverse of a matrix factored by R8GE_NP_FA.
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
//    02 November 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix A.
//
//    Input, double A[N*N], the factor information computed by R8GE_NP_FA.
//
//    Output, double R8GE_NP_INVERSE[N*N], the inverse matrix.
//
{
  double *b;
  int i;
  int j;
  int k;
  double temp;
  double *work;

  b = new double[n*n];
  work = new double[n];

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < n; i++ )
    {
      b[i+j*n] = a[i+j*n];
    }
  }
//
//  Compute Inverse(U).
//
  for ( k = 1; k <= n; k++ )
  {
    b[k-1+(k-1)*n] = 1.0 / b[k-1+(k-1)*n];
    for ( i = 1; i <= k-1; i++ )
    {
      b[i-1+(k-1)*n] = -b[i-1+(k-1)*n] * b[k-1+(k-1)*n];
    }
    for ( j = k + 1; j <= n; j++ )
    {
      temp = b[k-1+(j-1)*n];
      b[k-1+(j-1)*n] = 0.0;
      for ( i = 1; i <= k; i++ )
      {
        b[i-1+(j-1)*n] = b[i-1+(j-1)*n] + temp * b[i-1+(k-1)*n];
      }
    }
  }
//
//  Form Inverse(U) * Inverse(L).
//
  for ( k = n - 1; 1 <= k; k-- )
  {
    for ( i = k + 1; i <= n; i++ )
    {
      work[i-1] = b[i-1+(k-1)*n];
      b[i-1+(k-1)*n] = 0.0;
    }

    for ( j = k + 1; j <= n; j++ )
    {
      for ( i = 1; i <= n; i++ )
      {
        b[i-1+(k-1)*n] = b[i-1+(k-1)*n] + b[i-1+(j-1)*n] * work[j-1];
      }
    }
  }

  delete [] work;

  return b;
}
//****************************************************************************80

double *r8ge_np_ml ( int n, double a_lu[], double x[], int job )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_NP_ML computes A * x or x * A, for a matrix factored by R8GE_NP_FA.
//
//  Discussion:
//
//    The R8GE storage format is used for a "general" M by N matrix.  
//    A physical storage space is made for each logical entry.  The two 
//    dimensional logical array is mapped to a vector, in which storage is 
//    by columns.
//
//    The matrix A is assumed to have been factored by R8GE_NP_FA.
//
//    R8GE_NP_ML allows the user to check that the solution of a linear
//    system is correct, without having to save an unfactored copy
//    of the matrix.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    29 January 2004
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
//    Input, double A_LU[N*N], the LU factors from R8GE_NP_FA.
//
//    Input, double X[N], the vector to be multiplied.
//
//    Input, int JOB, determines the multiplication to
//    be carried out:
//    JOB = 0, compute A * x.
//    JOB nonzero, compute A' * X.
//
//    Output, double R8GE_NP_ML[N], the result of the multiplication.
//
{
  double *b;
  int i;
  int j;
  double t;

  b = new double[n];

  for ( i = 0; i < n; i++ )
  {
    b[i] = x[i];
  }

  if ( job == 0 )
  {
//
//  Compute U * X = Y:
//
    for ( i = 0; i < n; i++ )
    {
      t = 0.0;
      for ( j = i; j < n; j++ )
      {
        t = t + a_lu[i+j*n] * b[j];
      }
      b[i] = t;
    }
//
//  Compute L * Y = B:
//
    for ( j = n - 2; 0 <= j; j-- )
    {
      for ( i = j+1; i < n; i++ )
      {
        b[i] = b[i] - a_lu[i+j*n] * b[j];
      }
    }
  }
  else
  {
//
//  Compute L' * X = Y:
//
    for ( j = 0; j < n - 1; j++ )
    {
      for ( i = j+1; i < n; i++ )
      {
        b[j] = b[j] - b[i] * a_lu[i+j*n];
      }
    }
//
//  Compute U' * Y = B:
//
    for ( j = n - 1; 0 <= j; j-- )
    {
      b[j] = b[j] * a_lu[j+j*n];
      for ( i = 0; i < j; i++ )
      {
        b[j] = b[j] + b[i] * a_lu[i+j*n];
      }
    }
  }

  return b;
}
//****************************************************************************80

double *r8ge_np_sl ( int n, double a_lu[], double b[], int job )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_NP_SL solves a system factored by R8GE_NP_FA.
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
//    01 November 2003
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
//    Input, double A_LU[N*N], the LU factors from R8GE_NP_FA.
//
//    Input, double B[N], the right hand side.
//
//    Input, int JOB.
//    If JOB is zero, the routine will solve A * x = b.
//    If JOB is nonzero, the routine will solve A' * x = b.
//
//    Output, double R8GE_NP_SL[N], the solution.
//
{
  int i;
  int k;
  double *x;
//
//  Solve A * x = b.
//
  x = new double[n];
  for ( i = 0; i < n; i++ )
  {
    x[i] = b[i];
  }

  if ( job == 0 )
  {
    for ( k = 0; k < n - 1; k++ )
    {
      for ( i = k + 1; i < n; i++ )
      {
        x[i] = x[i] + a_lu[i+k*n] * x[k];
      }
    }

    for ( k = n - 1; 0 <= k; k-- )
    {
      x[k] = x[k] / a_lu[k+k*n];
      for ( i = 0; i <= k - 1; i++ )
      {
        x[i] = x[i] - a_lu[i+k*n] * x[k];
      }
    }
  }
//
//  Solve A' * X = B.
//
  else
  {
    for ( k = 0; k < n; k++ )
    {
      for ( i = 0; i <= k - 1; i++ )
      {
        x[k] = x[k] - x[i] * a_lu[i+k*n];
      }
      x[k] = x[k] / a_lu[k+k*n];
    }

    for ( k = n - 2; 0 <= k; k-- )
    {
      for ( i = k + 1; i < n; i++ )
      {
        x[k] = x[k] + x[i] * a_lu[i+k*n];
      }
    }

  }

  return x;
}
//****************************************************************************80

int r8ge_np_trf ( int m, int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_NP_TRF computes the LU factorization of an R8GE matrix.
//
//  Discussion:
//
//    The R8GE storage format is used for a "general" M by N matrix.  
//    A physical storage space is made for each logical entry.  The two 
//    dimensional logical array is mapped to a vector, in which storage is 
//    by columns.
//
//    R8GE_NP_TRF is a nonpivoting version of R8GE_TRF, and will fail if
//    a zero element is encountered along the diagonal.
//
//    The factorization has the form
//      A = L * U
//    where L is lower triangular with unit diagonal elements (lower
//    trapezoidal if N < M), and U is upper triangular (upper trapezoidal
//    if M < N).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    10 November 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, the number of rows of the matrix A.  0 <= M.
//
//    Input, int N, the number of columns of the matrix A.  0 <= N.
//
//    Input/output, double A[M*N].
//    On entry, the M by N matrix to be factored.
//    On exit, the factors L and U from the factorization
//    A = L*U; the unit diagonal elements of L are not stored.
//
//    Output, int R8GE_NP_TRF.
//    = 0: successful exit
//    = -K, the K-th argument had an illegal value
//    = K, U(K,K) is exactly zero. The factorization
//         has been completed, but the factor U is exactly
//         singular, and division by zero will occur if it is used
//         to solve a system of equations.
//
{
  int i;
  int ii;
  int info;
  int j;
//
//  Test the input parameters.
//
  info = 0;

  if ( m < 0 )
  {
    return (-1);
  }
  else if ( n < 0 )
  {
    return (-2);
  }

  if ( m == 0 || n == 0 )
  {
    return 0;
  }

  for ( j = 1; j <= i4_min ( m, n ); j++ )
  {
//
//  Compute elements J+1:M of the J-th column.
//
    if ( a[j-1+(j-1)*m] != 0.0 )
    {
      for ( i = j+1; i <= m; i++ )
      {
        a[i-1+(j-1)*m] = a[i-1+(j-1)*m] / a[j-1+(j-1)*m];
      }
    }
    else if ( info == 0 )
    {
      info = j;
    }
//
//  Update the trailing submatrix.
//
    if ( j < i4_min ( m, n ) )
    {
      for ( ii = j+1; ii <= m; ii++ )
      {
        for ( i = j+1; i <= n; i++ )
        {
          a[ii-1+(i-1)*m] = a[ii-1+(i-1)*m] - a[ii-1+(j-1)*m] * a[j-1+(i-1)*m];
        }
      }
    }
  }

  return info;
}
//****************************************************************************80

double *r8ge_np_trm ( int m, int n, double a[], double x[], int job )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_NP_TRM computes A * x or A' * x, for a matrix factored by R8GE_NP_TRF.
//
//  Discussion:
//
//    The R8GE storage format is used for a "general" M by N matrix.  
//    A physical storage space is made for each logical entry.  The two 
//    dimensional logical array is mapped to a vector, in which storage is 
//    by columns.
//
//    The matrix A is assumed to have been factored by R8GE_NP_TRF.
//
//    R8GE_NP_TRM allows the user to check that the solution of a linear
//    system is correct, without having to save an unfactored copy
//    of the matrix.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 November 2003
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Edward Anderson, Zhaojun Bai, Christian Bischof, Susan Blackford, 
//    James Demmel, Jack Dongarra, Jeremy Du Croz, Anne Greenbaum, 
//    Sven Hammarling, Alan McKenney, Danny Sorensen,
//    LAPACK User's Guide,
//    Second Edition,
//    SIAM, 1995.
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns in the matrix.
//    M and N must be positive.
//
//    Input, double A[M*N], the M by N matrix factors computed by R8GE_NP_TRF.
//
//    Input, double X[*], the vector to be multiplied.
//    If JOB is 0, X must have dimension N.
//    If JOB is nonzero, X must have dimension M.
//
//    Input, int JOB, determines the multiplication to
//    be carried out:
//    JOB = 0, compute A * x.
//    JOB nonzero, compute A' * X.
//
//    Output, double R8GE_NP_TRM[*], the result of the multiplication.
//    If JOB is 0, the output has dimension M.
//    If JOB is nonzero, the output has dimension N.
//
{
  double *b;
  int i;
  int j;
  double temp;

  if ( job == 0 )
  {
    b = r8vec_zeros_new ( m );
//
//  Compute U * X = Y:
//
    for ( i = 0; i < i4_min ( m, n ); i++ )
    {
      for ( j = i; j < n; j++ )
      {
        b[i] = b[i] + a[i+j*m] * x[j];
      }
    }
//
//  Compute L * Y = B:
//
    for ( i = i4_min ( m - 1, n ); 1 <= i; i-- )
    {
      for ( j = 0; j < i; j++ )
      {
        b[i] = b[i] + a[i+j*m] * b[j];
      }
    }
  }
  else
  {
    b = r8vec_zeros_new ( n );
//
//  Compute L' * X = Y:
//
    for ( i = 0; i < i4_min ( m, n ); i++ )
    {
      b[i] = x[i];
      for ( j = i+1; j < m; j++ )
      {
        b[i] = b[i] + a[j+i*m] * x[j];
      }
    }
//
//  Compute U' * Y = B:
//
    for ( i = i4_min ( m, n ) - 1; 0 <= i; i-- )
    {
      temp = 0.0;
      for ( j = 0; j <= i; j++ )
      {
        temp = temp + a[j+i*m] * b[j];
      }
      b[i] = temp;
    }

  }

  return b;
}
//****************************************************************************80

double *r8ge_np_trs ( int n, int nrhs, char trans, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_NP_TRS solves a system of linear equations factored by R8GE_NP_TRF.
//
//  Discussion:
//
//    The R8GE storage format is used for a "general" M by N matrix.  
//    A physical storage space is made for each logical entry.  The two 
//    dimensional logical array is mapped to a vector, in which storage is 
//    by columns.
//
//    R8GE_NP_TRS is a nonpivoting version of R8GE_TRS.
//
//    R8GE_TRS solves a system of linear equations
//      A * x = b  or  A' * X = B
//    with a general N by N matrix A using the LU factorization computed
//    by R8GE_NP_TRF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 November 2003
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Edward Anderson, Zhaojun Bai, Christian Bischof, Susan Blackford, 
//    James Demmel, Jack Dongarra, Jeremy Du Croz, Anne Greenbaum, 
//    Sven Hammarling, Alan McKenney, Danny Sorensen,
//    LAPACK User's Guide,
//    Second Edition,
//    SIAM, 1995.
//
//  Parameters:
//
//    Input, int N, the order of the matrix A.  0 <= N.
//
//    Input, int NRHS, the number of right hand sides.  0 <= NRHS.
//
//    Input, char TRANS, pecifies the form of the system of equations:
//    'N':  A * x = b  (No transpose)
//    'T':  A'* X = B  (Transpose)
//    'C':  A'* X = B  (Conjugate transpose = Transpose)
//
//    Input, double A[N*N], the factors L and U from the factorization
//    A = L*U as computed by R8GE_NP_TRF.
//
//    Input, double B[N*NRHS], the right hand side matrix B.
//
//    Output, double R8GE_NP_TRS[N*NRHS], the solution matrix X.
//
{
  int i;
  int j;
  int k;
  double *x;

  if ( trans != 'n' && trans != 'N' && 
       trans != 't' && trans != 'T' && 
       trans != 'c' && trans != 'C' )
  {
    return NULL;
  }
  if ( n < 0 )
  {
    return NULL;
  }
  if ( nrhs < 0 )
  {
    return NULL;
  }

  if ( n == 0 || nrhs == 0 )
  {
    return NULL;
  }

  x = new double[n*nrhs];

  for ( j = 0; j < nrhs; j++ )
  {
    for ( i = 0; i < n; i++ )
    {
      x[i+j*n] = b[i+j*n];
    }
  }

  if ( trans == 'n' || trans == 'N' )
  {
//
//  Solve L * x = b, overwriting b with x.
//
    for ( k = 0; k < nrhs; k++ )
    {
      for ( j = 1; j <= n - 1; j++ )
      {
        for ( i = j + 1; i <= n; i++ )
        {
          x[i-1+k*n] = x[i-1+k*n] - a[i-1+(j-1)*n] * x[j-1+k*n];
        }
      }
    }
//
//  Solve U * x = b, overwriting b with x.
//
    for ( k = 0; k < nrhs; k++ )
    {
      for ( j = n; 1 <= j; j-- )
      {
        x[j-1+k*n] = x[j-1+k*n] / a[j-1+(j-1)*n];
        for ( i = 1; i <= j - 1; i++ )
        {
          x[i-1+k*n] = x[i-1+k*n] - a[i-1+(j-1)*n] * x[j-1+k*n];
        }
      }
    }
  }
  else
//
//  Solve U' * x = b, overwriting b with x.
//
  {
    for ( k = 0; k < nrhs; k++ )
    {
      for ( j = 1; j <= n; j++ )
      {
        x[j-1+k*n] = x[j-1+k*n] / a[j-1+(j-1)*n];
        for ( i = j+1; i <= n; i++ )
        {
          x[i-1+k*n] = x[i-1+k*n] - a[j-1+(i-1)*n] * x[j-1+k*n];
        }
      }
    }
//
//  Solve L' * x = b, overwriting b with x.
//
    for ( k = 0; k < nrhs; k++ )
    {
      for ( j = n; 2 <= j; j-- )
      {
        for ( i = 1; i <= j - 1; i++ )
        {
          x[i-1+k*n] = x[i-1+k*n] - a[j-1+(i-1)*n] * x[j-1+k*n];
        }
      }
    }
  }

  return x;
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

void r8vec_print_some ( int n, double a[], int max_print, string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_PRINT_SOME prints "some" of an R8VEC.
//
//  Discussion:
//
//    The user specifies MAX_PRINT, the maximum number of lines to print.
//
//    If N, the size of the vector, is no more than MAX_PRINT, then
//    the entire vector is printed, one entry per line.
//
//    Otherwise, if possible, the first MAX_PRINT-2 entries are printed,
//    followed by a line of periods suggesting an omission,
//    and the last entry.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 February 2010
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of entries of the vector.
//
//    Input, double A[N], the vector to be printed.
//
//    Input, int MAX_PRINT, the maximum number of lines
//    to print.
//
//    Input, string TITLE, a title.
//
{
  int i;

  if ( max_print <= 0 )
  {
    return;
  }

  if ( n <= 0 )
  {
    return;
  }

  cout << "\n";
  cout << title << "\n";
  cout << "\n";

  if ( n <= max_print )
  {
    for ( i = 0; i < n; i++ )
    {
      cout << "  " << setw(8) << i
           << "  " << setw(14) << a[i] << "\n";
    }
  }
  else if ( 3 <= max_print )
  {
    for ( i = 0; i < max_print - 2; i++ )
    {
      cout << "  " << setw(8) << i
           << ": " << setw(14) << a[i] << "\n";
    }
    cout << "  ........  ..............\n";
    i = n - 1;
    cout << "  " << setw(8) << i
         << ": " << setw(14) << a[i] << "\n";
  }
  else
  {
    for ( i = 0; i < max_print - 1; i++ )
    {
      cout << "  " << setw(8) << i
           << ": " << setw(14) << a[i] << "\n";
    }
    i = max_print - 1;
    cout << "  " << setw(8) << i
         << ": " << setw(14) << a[i]
         << "  " << "...more entries...\n";
  }

  return;
}
//****************************************************************************80

double *r8vec_to_r8ge ( int m, int n, double *x )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_TO_R8GE copies an R8VEC into an R8GE matrix.
//
//  Discussion:
//
//    In C++  and FORTRAN, this routine is not really needed.  In MATLAB,
//    a data item carries its dimensionality implicitly, and so cannot be
//    regarded sometimes as a vector and sometimes as an array.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 March 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns in the array.
//
//    Input, double X[M*N], the vector to be copied into the array.
//
//    Output, double R8VEC_TO_R8GE[M*N], the array.
//
{
  double *a;
  int i;
  int j;
  int k;

  a = new double[m*n];

  k = 0;
  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < m; i++ )
    {
      a[i+j*m] = x[k];
      k = k + 1;
    }
  }

  return a;
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

void r8vec2_print_some ( int n, double x1[], double x2[], int max_print, 
  string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC2_PRINT_SOME prints "some" of two real vectors.
//
//  Discussion:
//
//    The user specifies MAX_PRINT, the maximum number of lines to print.
//
//    If N, the size of the vectors, is no more than MAX_PRINT, then
//    the entire vectors are printed, one entry of each per line.
//
//    Otherwise, if possible, the first MAX_PRINT-2 entries are printed,
//    followed by a line of periods suggesting an omission,
//    and the last entry.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    13 November 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters: 
//
//    Input, int N, the number of entries of the vectors.
//
//    Input, double X1[N], X2[N], the vector to be printed.
//
//    Input, int MAX_PRINT, the maximum number of lines to print.
//
//    Input, string TITLE, a title.
//
{
  int i;

  if ( max_print <= 0 )
  {
    return;
  }

  if ( n <= 0 )
  {
    return;
  }

  cout << "\n";
  cout << title << "\n";
  cout << "\n";

  if ( n <= max_print )
  {
    for ( i = 0; i < n; i++ )
    {
      cout << setw(6)  << i + 1 << "  "
           << setw(14) << x1[i] << "  "
           << setw(14) << x2[i] << "\n";
    }
  }
  else if ( 3 <= max_print )
  {
    for ( i = 0; i < max_print-2; i++ )
    {
      cout << setw(6)  << i + 1 << "  "
           << setw(14) << x1[i] << "  "
           << setw(14) << x2[i] << "\n";
    }
    cout << "......  ..............  ..............\n";
    i = n - 1;
    cout << setw(6)  << i + 1 << "  "
         << setw(14) << x1[i] << "  "
         << setw(14) << x2[i] << "\n";
  }
  else
  {
    for ( i = 0; i < max_print - 1; i++ )
    {
      cout << setw(6)  << i + 1 << "  "
           << setw(14) << x1[i] << "  "
           << setw(14) << x2[i] << "\n";
    }
    i = max_print - 1;
    cout << setw(6)  << i + 1 << "  "
         << setw(14) << x1[i] << "  "
         << setw(14) << x2[i] << "...more entries...\n";
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
