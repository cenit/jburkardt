# include <cmath>
# include <cstdlib>
# include <ctime>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r83_np.hpp"

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

double *r83_dif2 ( int m, int n )

//****************************************************************************80
//
//  Purpose:
//
//    R83_DIF2 returns the DIF2 matrix in R83 format.
//
//  Discussion:
//
//    The R83 storage format is used for a tridiagonal matrix.
//    The superdiagonal is stored in entries (1,2:min(M+1,N)).
//    The diagonal in entries (2,1:min(M,N)).
//    The subdiagonal in (3,min(M-1,N)).
//    R8GE A(I,J) = R83 A[I-J+1+J*3] (0 based indexing).
//
//  Example:
//
//    An R83 matrix of order 3x5 would be stored:
//
//       *  A12 A23 A34  *
//      A11 A22 A33  *   *
//      A21 A32  *   *   *
//
//    An R83 matrix of order 5x5 would be stored:
//
//       *  A12 A23 A34 A45
//      A11 A22 A33 A44 A55
//      A21 A32 A43 A54  *
//
//    An R83 matrix of order 5x3 would be stored:
//
//       *  A12 A23
//      A11 A22 A33
//      A21 A32 A43
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
//    04 June 2014
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
//    Output, double A[3*N], the matrix.
//
{
  double *a;
  int i;
  int i_hi;
  int i_lo;
  int j;

  a = r8vec_zeros_new ( 3 * n );

  for ( j = 0; j < n; j++ )
  {
    i_lo = i4_max ( 0, j - 1 );
    i_hi = i4_min ( m - 1, j + 1 );
    for ( i = i_lo; i <= i_hi; i++ )
    {
      if ( i == j - 1 )
      {
        a[i-j+1+j*3] = -1.0;
      }
      else if ( i == j )
      {
        a[i-j+1+j*3] = +2.0;
      }
      else if ( i == j + 1 )
      {
        a[i-j+1+j*3] = -1.0;
      }
    }
  }
   
  return a;
}
//****************************************************************************80

double *r83_mtv ( int m, int n, double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R83_MTV multiplies a vector times an R83 matrix.
//
//  Discussion:
//
//    The R83 storage format is used for a tridiagonal matrix.
//    The superdiagonal is stored in entries (1,2:min(M+1,N)).
//    The diagonal in entries (2,1:min(M,N)).
//    The subdiagonal in (3,min(M-1,N)).
//
//  Example:
//
//    An R83 matrix of order 3x5 would be stored:
//
//       *  A12 A23 A34  *
//      A11 A22 A33  *   *
//      A21 A32  *   *   *
//
//    An R83 matrix of order 5x5 would be stored:
//
//       *  A12 A23 A34 A45
//      A11 A22 A33 A44 A55
//      A21 A32 A43 A54  *
//
//    An R83 matrix of order 5x3 would be stored:
//
//       *  A12 A23
//      A11 A22 A33
//      A21 A32 A43
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 September 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the order of the linear system.
//
//    Input, double A[3*N], the R83 matrix.
//
//    Input, double X[M], the vector to be multiplied by A'.
//
//    Output, double R83_MTV[N], the product A' * x.
//
{
  double *b;
  int i;
  int i_hi;
  int i_lo;
  int j;

  b = r8vec_zeros_new ( n );

  for ( j = 0; j < n; j++ )
  {
    i_lo = i4_max ( 0, j - 1 );
    i_hi = i4_min ( m - 1, j + 1 );
    for ( i = i_lo; i <= i_hi; i++ )
    {
      b[j] = b[j] + x[i] * a[i-j+1+j*3];
    }
  }

  return b;
}
//****************************************************************************80

double *r83_mv ( int m, int n, double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R83_MV multiplies an R83 matrix times a vector.
//
//  Discussion:
//
//    The R83 storage format is used for a tridiagonal matrix.
//    The superdiagonal is stored in entries (1,2:min(M+1,N)).
//    The diagonal in entries (2,1:min(M,N)).
//    The subdiagonal in (3,min(M-1,N)).
//
//  Example:
//
//    An R83 matrix of order 3x5 would be stored:
//
//       *  A12 A23 A34  *
//      A11 A22 A33  *   *
//      A21 A32  *   *   *
//
//    An R83 matrix of order 5x5 would be stored:
//
//       *  A12 A23 A34 A45
//      A11 A22 A33 A44 A55
//      A21 A32 A43 A54  *
//
//    An R83 matrix of order 5x3 would be stored:
//
//       *  A12 A23
//      A11 A22 A33
//      A21 A32 A43
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 September 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the linear system.
//
//    Input, double A[3*N], the R83 matrix.
//
//    Input, double X[N], the vector to be multiplied by A.
//
//    Output, double R83_MV[M], the product A * x.
//
{
  double *b;
  int i;
  int i_hi;
  int i_lo;
  int j;

  b = r8vec_zeros_new ( m );

  for ( j = 0; j < n; j++ )
  {
    i_lo = i4_max ( 0, j - 1 );
    i_hi = i4_min ( m - 1, j + 1 );
    for ( i = i_lo; i <= i_hi; i++ )
    {
      b[i] = b[i] + a[i-j+1+j*3] * x[j];
    }
  }

  return b;
}
//****************************************************************************80

void r83_print ( int m, int n, double a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    R83_PRINT prints an R83 matrix.
//
//  Discussion:
//
//    The R83 storage format is used for a tridiagonal matrix.
//    The superdiagonal is stored in entries (1,2:min(M+1,N)).
//    The diagonal in entries (2,1:min(M,N)).
//    The subdiagonal in (3,min(M-1,N)).
//
//  Example:
//
//    An R83 matrix of order 3x5 would be stored:
//
//       *  A12 A23 A34  *
//      A11 A22 A33  *   *
//      A21 A32  *   *   *
//
//    An R83 matrix of order 5x5 would be stored:
//
//       *  A12 A23 A34 A45
//      A11 A22 A33 A44 A55
//      A21 A32 A43 A54  *
//
//    An R83 matrix of order 5x3 would be stored:
//
//       *  A12 A23
//      A11 A22 A33
//      A21 A32 A43
//      A21 A32 A43 A54  *
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 September 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the order of the matrix.
//
//    Input, double A[3*N], the R83 matrix.
//
//    Input, string TITLE, a title.
//
{
  r83_print_some ( m, n, a, 1, 1, m, n, title );

  return;
}
//****************************************************************************80

void r83_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title )

//****************************************************************************80
//
//  Purpose:
//
//    R83_PRINT_SOME prints some of an R83 matrix.
//
//  Discussion:
//
//    The R83 storage format is used for a tridiagonal matrix.
//    The superdiagonal is stored in entries (1,2:min(M+1,N)).
//    The diagonal in entries (2,1:min(M,N)).
//    The subdiagonal in (3,min(M-1,N)).
//
//  Example:
//
//    An R83 matrix of order 3x5 would be stored:
//
//       *  A12 A23 A34  *
//      A11 A22 A33  *   *
//      A21 A32  *   *   *
//
//    An R83 matrix of order 5x5 would be stored:
//
//       *  A12 A23 A34 A45
//      A11 A22 A33 A44 A55
//      A21 A32 A43 A54  *
//
//    An R83 matrix of order 5x3 would be stored:
//
//       *  A12 A23
//      A11 A22 A33
//      A21 A32 A43
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 September 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the order of the matrix.
//
//    Input, double A[3*N], the R83 matrix.
//
//    Input, int ILO, JLO, IHI, JHI, designate the first row and
//    column, and the last row and column, to be printed.
//
//    Input, string TITLE, a title.
//
{
# define INCX 5

  int i;
  int i2hi;
  int i2lo;
  int inc;
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

    inc = j2hi + 1 - j2lo;

    cout << "\n";
    cout << "  Col: ";
    for ( j = j2lo; j <= j2hi; j++ )
    {
      j2 = j + 1 - j2lo;
      cout << setw(7) << j << "       ";
    }

    cout << "\n";
    cout << "  Row\n";
    cout << "  ---\n";
//
//  Determine the range of the rows in this strip.
//
    i2lo = i4_max ( ilo, 1 );
    i2lo = i4_max ( i2lo, j2lo - 1 );

    i2hi = i4_min ( ihi, m );
    i2hi = i4_min ( i2hi, j2hi + 1 );

    for ( i = i2lo; i <= i2hi; i++ )
    {
//
//  Print out (up to) 5 entries in row I, that lie in the current strip.
//
      cout << setw(6) << i << ": ";

      for ( j2 = 1; j2 <= inc; j2++ )
      {
        j = j2lo - 1 + j2;

        if ( 1 < i - j || 1 < j - i )
        {
          cout << "              ";
        }
        else if ( j == i + 1 )
        {
          cout << setw(12) << a[0+(j-1)*3] << "  ";
        }
        else if ( j == i )
        {
          cout << setw(12) << a[1+(j-1)*3] << "  ";
        }
        else if ( j == i - 1 )
        {
          cout << setw(12) << a[2+(j-1)*3] << "  ";
        }

      }
      cout << "\n";
    }
  }
  return;
# undef INCX
}
//****************************************************************************80

double *r83_random ( int m, int n, int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    R83_RANDOM randomizes an R83 matrix.
//
//  Discussion:
//
//    The R83 storage format is used for a tridiagonal matrix.
//    The superdiagonal is stored in entries (1,2:min(M+1,N)).
//    The diagonal in entries (2,1:min(M,N)).
//    The subdiagonal in (3,min(M-1,N)).
//
//  Example:
//
//    An R83 matrix of order 3x5 would be stored:
//
//       *  A12 A23 A34  *
//      A11 A22 A33  *   *
//      A21 A32  *   *   *
//
//    An R83 matrix of order 5x5 would be stored:
//
//       *  A12 A23 A34 A45
//      A11 A22 A33 A44 A55
//      A21 A32 A43 A54  *
//
//    An R83 matrix of order 5x3 would be stored:
//
//       *  A12 A23
//      A11 A22 A33
//      A21 A32 A43
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 September 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the order of the linear system.
//
//    Input/output, int &SEED, a seed for the random number generator.
//
//    Output, double R83_RANDOM[3*N], the R83 matrix.
//
{
  double *a;
  int i;
  int i_hi;
  int i_lo;
  int j;

  a = new double[3*n];

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < 3; i++ )
    {
      a[i+j*3] = 0.0;
    }
  }

  for ( j = 0; j < n; j++ )
  {
    i_lo = i4_max ( 0, j - 1 );
    i_hi = i4_min ( m - 1, j + 1 );
    for ( i = i_lo; i <= i_hi; i++ )
    {
      a[i-j+1+j*3] = r8_uniform_01 ( seed );
    }
  }

  return a;
}
//****************************************************************************80

double r83_np_det ( int n, double a_lu[] )

//****************************************************************************80
//
//  Purpose:
//
//    R83_NP_DET: determinant of a tridiagonal system factored by R83_NP_FA.
//
//  Discussion:
//
//    The R83 storage format is used for a tridiagonal matrix.
//    The superdiagonal is stored in entries (1,2:min(M+1,N)).
//    The diagonal in entries (2,1:min(M,N)).
//    The subdiagonal in (3,min(M-1,N)).
//
//  Example:
//
//    An R83 matrix of order 3x5 would be stored:
//
//       *  A12 A23 A34  *
//      A11 A22 A33  *   *
//      A21 A32  *   *   *
//
//    An R83 matrix of order 5x5 would be stored:
//
//       *  A12 A23 A34 A45
//      A11 A22 A33 A44 A55
//      A21 A32 A43 A54  *
//
//    An R83 matrix of order 5x3 would be stored:
//
//       *  A12 A23
//      A11 A22 A33
//      A21 A32 A43
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    25 March 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//    N must be at least 2.
//
//    Input, double A_LU[3*N], the LU factors from R83_NP_FA.
//
//    Output, double R83_NP_DET, the determinant of the matrix.
//
{
  double det;
  int j;

  det = 1.0;
  for ( j = 0; j < n; j++ )
  {
    det = det * a_lu[1+j*3];
  }

  return det;
}
//****************************************************************************80

int r83_np_fa ( int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R83_NP_FA factors an R83 system without pivoting.
//
//  Discussion:
//
//    The R83 storage format is used for a tridiagonal matrix.
//    The superdiagonal is stored in entries (1,2:min(M+1,N)).
//    The diagonal in entries (2,1:min(M,N)).
//    The subdiagonal in (3,min(M-1,N)).
//
//    Because this routine does not use pivoting, it can fail even when
//    the matrix is not singular, and it is liable to make larger
//    errors.
//
//    R83_NP_FA and R83_NP_SL may be preferable to the corresponding
//    LINPACK routine SGTSL for tridiagonal systems, which factors and solves
//    in one step, and does not save the factorization.
//
//  Example:
//
//    An R83 matrix of order 3x5 would be stored:
//
//       *  A12 A23 A34  *
//      A11 A22 A33  *   *
//      A21 A32  *   *   *
//
//    An R83 matrix of order 5x5 would be stored:
//
//       *  A12 A23 A34 A45
//      A11 A22 A33 A44 A55
//      A21 A32 A43 A54  *
//
//    An R83 matrix of order 5x3 would be stored:
//
//       *  A12 A23
//      A11 A22 A33
//      A21 A32 A43
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
//    Input, int N, the order of the matrix.
//    N must be at least 2.
//
//    Input/output, double A[3*N].
//    On input, the tridiagonal matrix.  On output, factorization information.
//
//    Output, int R83_NP_FA, singularity flag.
//    0, no singularity detected.
//    nonzero, the factorization failed on the INFO-th step.
//
{
  int i;

  for ( i = 1; i <= n-1; i++ )
  {
    if ( a[1+(i-1)*3] == 0.0 )
    {
      cerr << "\n";
      cerr << "R83_NP_FA - Fatal error!\n";
      cerr << "  Zero pivot on step " << i << "\n";
      exit ( 1 );
    }
//
//  Store the multiplier in L.
//
    a[2+(i-1)*3] = a[2+(i-1)*3] / a[1+(i-1)*3];
//
//  Modify the diagonal entry in the next column.
//
    a[1+i*3] = a[1+i*3] - a[2+(i-1)*3] * a[0+i*3];
  }

  if ( a[1+(n-1)*3] == 0.0 )
  {
    cerr << "\n";
    cerr << "R83_NP_FA - Fatal error!\n";
    cerr << "  Zero pivot on step " << n << "\n";
    exit ( 1 );
  }

  return 0;
}
//****************************************************************************80

double *r83_np_fs ( int n, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    R83_NP_FS factors and solves an R83 system.
//
//  Discussion:
//
//    The R83 storage format is used for a tridiagonal matrix.
//    The superdiagonal is stored in entries (1,2:min(M+1,N)).
//    The diagonal in entries (2,1:min(M,N)).
//    The subdiagonal in (3,min(M-1,N)).
//
//    This algorithm requires that each diagonal entry be nonzero.
//    It does not use pivoting, and so can fail on systems that
//    are actually nonsingular.
//
//  Example:
//
//    An R83 matrix of order 3x5 would be stored:
//
//       *  A12 A23 A34  *
//      A11 A22 A33  *   *
//      A21 A32  *   *   *
//
//    An R83 matrix of order 5x5 would be stored:
//
//       *  A12 A23 A34 A45
//      A11 A22 A33 A44 A55
//      A21 A32 A43 A54  *
//
//    An R83 matrix of order 5x3 would be stored:
//
//       *  A12 A23
//      A11 A22 A33
//      A21 A32 A43
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    15 November 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the linear system.
//
//    Input/output, double A[3*N].
//    On input, the nonzero diagonals of the linear system.
//    On output, the data in these vectors has been overwritten
//    by factorization information.
//
//    Input, double B[N], the right hand side.
//
//    Output, double R83_NP_FS[N], the solution of the linear system.
//    This is NULL if there was an error because one of the diagonal
//    entries was zero.
//
{
  int i;
  double *x;
  double xmult;
//
//  Check.
//
  for ( i = 0; i < n; i++ )
  {
    if ( a[1+i*3] == 0.0 )
    {
      return NULL;
    }
  }

  x = new double[n];

  for ( i = 0; i < n; i++ )
  {
    x[i] = b[i];
  }

  for ( i = 1; i < n; i++ )
  {
    xmult = a[2+(i-1)*3] / a[1+(i-1)*3];
    a[1+i*3] = a[1+i*3] - xmult * a[0+i*3];
    x[i] = x[i] - xmult * x[i-1];
  }

  x[n-1] = x[n-1] / a[1+(n-1)*3];
  for ( i = n-2; 0 <= i; i-- )
  {
    x[i] = ( x[i] - a[0+(i+1)*3] * x[i+1] ) / a[1+i*3];
  }

  return x;
}
//****************************************************************************80

double *r83_np_ml ( int n, double a_lu[], double x[], int job )

//****************************************************************************80
//
//  Purpose:
//
//    R83_NP_ML computes Ax or xA, where A has been factored by R83_NP_FA.
//
//  Discussion:
//
//    The R83 storage format is used for a tridiagonal matrix.
//    The superdiagonal is stored in entries (1,2:min(M+1,N)).
//    The diagonal in entries (2,1:min(M,N)).
//    The subdiagonal in (3,min(M-1,N)).
//
//  Example:
//
//    An R83 matrix of order 3x5 would be stored:
//
//       *  A12 A23 A34  *
//      A11 A22 A33  *   *
//      A21 A32  *   *   *
//
//    An R83 matrix of order 5x5 would be stored:
//
//       *  A12 A23 A34 A45
//      A11 A22 A33 A44 A55
//      A21 A32 A43 A54  *
//
//    An R83 matrix of order 5x3 would be stored:
//
//       *  A12 A23
//      A11 A22 A33
//      A21 A32 A43
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    20 September 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//    N must be at least 2.
//
//    Input, double A_LU[3*N], the LU factors from R83_FA.
//
//    Input, double X[N], the vector to be multiplied by A.
//
//    Output, double B[N], the product.
//
//    Input, int JOB, specifies the product to find.
//    0, compute A * x.
//    nonzero, compute A' * x.
//
{
  double *b;
  int i;

  b = new double[n];

  for ( i = 0; i < n; i++ )
  {
    b[i] = x[i];
  }

  if ( job == 0 )
  {
//
//  Compute X := U * X
//
    for ( i = 1; i <= n; i++ )
    {
      b[i-1] = a_lu[1+(i-1)*3] * b[i-1];

      if ( i < n )
      {
        b[i-1] = b[i-1] + a_lu[0+i*3] * b[i];
      }
    }
//
//  Compute X: = L * X.
//
    for ( i = n; 2 <= i; i-- )
    {
      b[i-1] = b[i-1] + a_lu[2+(i-2)*3] * b[i-2];
    }
  }
  else
  {
//
//  Compute X: = L' * X.
//
    for ( i = 1; i <= n-1; i++ )
    {
      b[i-1] = b[i-1] + a_lu[2+(i-1)*3] * b[i];
    }
//
//  Compute X: = U' * X.
//
    for ( i = n; 1 <= i; i-- )
    {
      b[i-1] = a_lu[1+(i-1)*3] * b[i-1];
      if ( 1 < i )
      {
        b[i-1] = b[i-1] + a_lu[0+(i-1)*3] * b[i-2];
      }
    }
  }

  return b;
}
//****************************************************************************80

double *r83_np_sl ( int n, double a_lu[], double b[], int job )

//****************************************************************************80
//
//  Purpose:
//
//    R83_NP_SL solves an R83 system factored by R83_NP_FA.
//
//  Discussion:
//
//    The R83 storage format is used for a tridiagonal matrix.
//    The superdiagonal is stored in entries (1,2:min(M+1,N)).
//    The diagonal in entries (2,1:min(M,N)).
//    The subdiagonal in (3,min(M-1,N)).
//
//  Example:
//
//    An R83 matrix of order 3x5 would be stored:
//
//       *  A12 A23 A34  *
//      A11 A22 A33  *   *
//      A21 A32  *   *   *
//
//    An R83 matrix of order 5x5 would be stored:
//
//       *  A12 A23 A34 A45
//      A11 A22 A33 A44 A55
//      A21 A32 A43 A54  *
//
//    An R83 matrix of order 5x3 would be stored:
//
//       *  A12 A23
//      A11 A22 A33
//      A21 A32 A43
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    12 January 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//    N must be at least 2.
//
//    Input, double A_LU[3*N], the LU factors from R83_NP_FA.
//
//    Input, double B[N], the right hand side of the linear system.
//    On output, B contains the solution of the linear system.
//
//    Input, int JOB, specifies the system to solve.
//    0, solve A * x = b.
//    nonzero, solve A' * x = b.
//
//    Output, double R83_NP_SL[N], the solution of the linear system.
//
{
  int i;
  double *x;

  x = new double[n];

  for ( i = 0; i < n; i++ )
  {
    x[i] = b[i];
  }

  if ( job == 0 )
  {
//
//  Solve L * Y = B.
//
    for ( i = 1; i < n; i++ )
    {
      x[i] = x[i] - a_lu[2+(i-1)*3] * x[i-1];
    }
//
//  Solve U * X = Y.
//
    for ( i = n; 1 <= i; i-- )
    {
      x[i-1] = x[i-1] / a_lu[1+(i-1)*3];
      if ( 1 < i )
      {
        x[i-2] = x[i-2] - a_lu[0+(i-1)*3] * x[i-1];
      }
    }
  }
  else
  {
//
//  Solve U' * Y = B
//
    for ( i = 1; i <= n; i++ )
    {
      x[i-1] = x[i-1] / a_lu[1+(i-1)*3];
      if ( i < n )
      {
        x[i] = x[i] - a_lu[0+i*3] * x[i-1];
      }
    }
//
//  Solve L' * X = Y.
//
    for ( i = n-1; 1 <= i; i-- )
    {
      x[i-1] = x[i-1] - a_lu[2+(i-1)*3] * x[i];
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
