# include <cmath>
# include <cstdlib>
# include <ctime>
# include <fstream>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r83s.hpp"

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

void r83s_cg ( int n, double a[], double b[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R83S_CG uses the conjugate gradient method on an R83S system.
//
//  Discussion:
//
//    The R83S storage format is used for a tridiagonal scalar matrix.
//    The vector A(3) contains the subdiagonal, diagonal, and superdiagonal
//    values that occur on every row.
//    RGE A(I,J) = R83S A[I-J+1].
//
//    The matrix A must be a positive definite symmetric band matrix.
//
//    The method is designed to reach the solution after N computational
//    steps.  However, roundoff may introduce unacceptably large errors for
//    some problems.  In such a case, calling the routine again, using
//    the computed solution as the new starting estimate, should improve
//    the results.
//
//  Example:
//
//    Here is how an R83S matrix of order 5, stored as (A1,A2,A3), would
//    be interpreted:
//
//      A2  A1   0   0   0
//      A3  A2  A1   0   0
//       0  A3  A2  A1   0 
//       0   0  A3  A2  A1
//       0   0   0  A3  A2
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 July 2014
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Frank Beckman,
//    The Solution of Linear Equations by the Conjugate Gradient Method,
//    in Mathematical Methods for Digital Computers,
//    edited by John Ralston, Herbert Wilf,
//    Wiley, 1967,
//    ISBN: 0471706892,
//    LC: QA76.5.R3.
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//    N must be positive.
//
//    Input, double A[3], the matrix.
//
//    Input, double B[N], the right hand side vector.
//
//    Input/output, double X[N].
//    On input, an estimate for the solution, which may be 0.
//    On output, the approximate solution vector.
//
{
  double alpha;
  double *ap;
  double beta;
  int i;
  int it;
  double *p;
  double pap;
  double pr;
  double *r;
  double rap;
//
//  Initialize
//    AP = A * x,
//    R  = b - A * x,
//    P  = b - A * x.
//
  ap = r83s_mv ( n, n, a, x );

  r = new double[n];
  for ( i = 0; i < n; i++ )
  {
    r[i] = b[i] - ap[i];
  }

  p = new double[n];
  for ( i = 0; i < n; i++ )
  {
    p[i] = b[i] - ap[i];
  }
//
//  Do the N steps of the conjugate gradient method.
//
  for ( it = 1; it <= n; it++ )
  {
//
//  Compute the matrix*vector product AP=A*P.
//
    delete [] ap;
    ap = r83s_mv ( n, n, a, p );
//
//  Compute the dot products
//    PAP = P*AP,
//    PR  = P*R
//  Set
//    ALPHA = PR / PAP.
//
    pap = r8vec_dot_product ( n, p, ap );
    pr = r8vec_dot_product ( n, p, r );

    if ( pap == 0.0 )
    {
      delete [] ap;
      break;
    }

    alpha = pr / pap;
//
//  Set
//    X = X + ALPHA * P
//    R = R - ALPHA * AP.
//
    for ( i = 0; i < n; i++ )
    {
      x[i] = x[i] + alpha * p[i];
    }
    for ( i = 0; i < n; i++ )
    {
      r[i] = r[i] - alpha * ap[i];
    }
//
//  Compute the vector dot product
//    RAP = R*AP
//  Set
//    BETA = - RAP / PAP.
//
    rap = r8vec_dot_product ( n, r, ap );

    beta = - rap / pap;
//
//  Update the perturbation vector
//    P = R + BETA * P.
//
    for ( i = 0; i < n; i++ )
    {
      p[i] = r[i] + beta * p[i];
    }
  }
//
//  Free memory.
//
  delete [] p;
  delete [] r;

  return;
}
//****************************************************************************80

double *r83s_dif2 ( int m, int n )

//****************************************************************************80
//
//  Purpose:
//
//    R83S_DIF2 returns the DIF2 matrix in R83S format.
//
//  Discussion:
//
//    The R83S storage format is used for a tridiagonal scalar matrix.
//    The vector A(3) contains the subdiagonal, diagonal, and superdiagonal
//    values that occur on every row.
//    RGE A(I,J) = R83S A[I-J+1].
//
//  Example:
//
//    Here is how an R83S matrix of order 5, stored as (A1,A2,A3), would
//    be interpreted:
//
//      A2  A1   0   0   0
//      A3  A2  A1   0   0
//       0  A3  A2  A1   0 
//       0   0  A3  A2  A1
//       0   0   0  A3  A2
//
//  Properties:
//
//    A is banded, with bandwidth 3.
//    A is tridiagonal.
//    Because A is tridiagonal, it has property A (bipartite).
//    A is a special case of the TRIS or tridiagonal scalar matrix.
//    A is integral, therefore det ( A ) is integral, and 
//    det ( A ) * inverse ( A ) is integral.
//    A is Toeplitz: constant along diagonals.
//    A is symmetric: A' = A.
//    Because A is symmetric, it is normal.
//    Because A is normal, it is diagonalizable.
//    A is persymmetric: A(I,J) = A(N+1-J,N+1-I).
//    A is positive definite.
//    A is an M matrix.
//    A is weakly diagonally dominant, but not strictly diagonally dominant.
//    A has an LU factorization A = L * U, without pivoting.
//      The matrix L is lower bidiagonal with subdiagonal elements:
//        L(I+1,I) = -I/(I+1)
//      The matrix U is upper bidiagonal, with diagonal elements
//        U(I,I) = (I+1)/I
//      and superdiagonal elements which are all -1.
//    A has a Cholesky factorization A = L * L', with L lower bidiagonal.
//      L(I,I) =    sqrt ( (I+1) / I )
//      L(I,I-1) = -sqrt ( (I-1) / I )
//    The eigenvalues are
//      LAMBDA(I) = 2 + 2 * COS(I*PI/(N+1))
//                = 4 SIN^2(I*PI/(2*N+2))
//    The corresponding eigenvector X(I) has entries
//       X(I)(J) = sqrt(2/(N+1)) * sin ( I*J*PI/(N+1) ).
//    Simple linear systems:
//      x = (1,1,1,...,1,1),   A*x=(1,0,0,...,0,1)
//      x = (1,2,3,...,n-1,n), A*x=(0,0,0,...,0,n+1)
//    det ( A ) = N + 1.
//    The value of the determinant can be seen by induction,
//    and expanding the determinant across the first row:
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
//    09 July 2014
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
//    Output, double A[3], the matrix.
//
{
  double *a;

  a = new double[3];

  a[0] = -1.0;
  a[1] =  2.0;
  a[2] = -1.0;
   
  return a;
}
//****************************************************************************80

void r83s_gs_sl ( int n, double a[], double b[], double x[], int it_max )

//****************************************************************************80
//
//  Purpose:
//
//    R83S_GS_SL solves an R83S system using Gauss-Seidel iteration.
//
//  Discussion:
//
//    The R83S storage format is used for a tridiagonal scalar matrix.
//    The vector A(3) contains the subdiagonal, diagonal, and superdiagonal
//    values that occur on every row.
//    RGE A(I,J) = R83S A[I-J+1].
//
//    This routine simply applies a given number of steps of the
//    iteration to an input approximate solution.  On first call, you can
//    simply pass in the zero vector as an approximate solution.  If
//    the returned value is not acceptable, you may call again, using
//    it as the starting point for additional iterations.
//
//  Example:
//
//    Here is how an R83S matrix of order 5, stored as (A1,A2,A3), would
//    be interpreted:
//
//      A2  A1   0   0   0
//      A3  A2  A1   0   0
//       0  A3  A2  A1   0 
//       0   0  A3  A2  A1
//       0   0   0  A3  A2
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 September 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A[3], the R83S matrix.
//
//    Input, double B[N], the right hand side of the linear system.
//
//    Input/output, double X[N], an approximate solution to the system.
//
//    Input, int IT_MAX, the maximum number of iterations to take.
//
{
  int i;
  int it_num;
//
//  No diagonal matrix entry can be zero.
//
  if ( a[1] == 0.0 )
  {
    cerr << "\n";
    cerr << "R83S_GS_SL - Fatal error!\n";
    cerr << "  Zero diagonal entry\n";
    exit ( 1 );
  }

  for ( it_num = 1; it_num <= it_max; it_num++ )
  {
    x[0] =   ( b[0] - a[2] * x[1] ) / a[1];
    for ( i = 1; i < n-1; i++ )
    {
      x[i] = ( b[i] - a[0] * x[i-1] - a[2] * x[i+1] ) / a[1];
    }
    x[n-1] =   ( b[n-1] - a[0] * x[n-2] ) / a[1];
  }

  return;
}
//****************************************************************************80

double *r83s_indicator ( int m, int n )

//****************************************************************************80
//
//  Purpose:
//
//    R83S_INDICATOR sets up an R83s indicator matrix.
//
//  Discussion:
//
//    The R83S storage format is used for a tridiagonal scalar matrix.
//    The vector A(3) contains the subdiagonal, diagonal, and superdiagonal
//    values that occur on every row.
//    RGE A(I,J) = R83S A[I-J+1].
//
//  Example:
//
//    Here is how an R83S matrix of order 5, stored as (A1,A2,A3), would
//    be interpreted:
//
//      A2  A1   0   0   0
//      A3  A2  A1   0   0
//       0  A3  A2  A1   0 
//       0   0  A3  A2  A1
//       0   0   0  A3  A2
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 September 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the order of the matrix.
//
//    Output, double R83_INDICATOR[3], the R83S indicator matrix.
//
{
  double *a;

  a = new double[3];

  a[0] = 3.0;
  a[1] = 2.0;
  a[2] = 1.0;

  return a;
}
//****************************************************************************80

void r83s_jac_sl ( int n, double a[], double b[], double x[], int it_max )

//****************************************************************************80
//
//  Purpose:
//
//    R83S_JAC_SL solves an R83S system using Jacobi iteration.
//
//  Discussion:
//
//    The R83S storage format is used for a tridiagonal scalar matrix.
//    The vector A(3) contains the subdiagonal, diagonal, and superdiagonal
//    values that occur on every row.
//    RGE A(I,J) = R83S A[I-J+1].
//
//    This routine simply applies a given number of steps of the
//    iteration to an input approximate solution.  On first call, you can
//    simply pass in the zero vector as an approximate solution.  If
//    the returned value is not acceptable, you may call again, using
//    it as the starting point for additional iterations.
//
//  Example:
//
//    Here is how an R83S matrix of order 5, stored as (A1,A2,A3), would
//    be interpreted:
//
//      A2  A1   0   0   0
//      A3  A2  A1   0   0
//       0  A3  A2  A1   0 
//       0   0  A3  A2  A1
//       0   0   0  A3  A2
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 September 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A[3], the R83S matrix.
//
//    Input, double B[N], the right hand side of the linear system.
//
//    Input/output, double X[N], an approximate solution to the system.
//
//    Input, int IT_MAX, the maximum number of iterations to take.
//
{
  int i;
  int it_num;
  double *xnew;

  xnew = new double[n];
//
//  No diagonal matrix entry can be zero.
//
  if ( a[1] == 0.0 )
  {
    cerr << "\n";
    cerr << "R83S_JAC_SL - Fatal error!\n";
    cerr << "  Zero diagonal entry\n";
    exit ( 1 );
  }

  for ( it_num = 1; it_num <= it_max; it_num++ )
  {
//
//  Solve A*x=b:
//
    xnew[0] = b[0] - a[2] * x[1];
    for ( i = 1; i < n-1; i++ )
    {
      xnew[i] = b[i] - a[0] * x[i-1] - a[2] * x[i+1];
    }
    xnew[n-1] = b[n-1] - a[0] * x[n-2];
//
//  Divide by the diagonal term, and overwrite X.
//
    for ( i = 0; i < n; i++ )
    {
      xnew[i] = xnew[i] / a[1];
    }

    for ( i = 0; i < n; i++ )
    {
      x[i] = xnew[i];
    }
  }

  delete [] xnew;

  return;
}
//****************************************************************************80

double *r83s_mtv ( int m, int n, double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R83S_MTV multiplies a vector times an R83S matrix.
//
//  Discussion:
//
//    The R83S storage format is used for a tridiagonal scalar matrix.
//    The vector A(3) contains the subdiagonal, diagonal, and superdiagonal
//    values that occur on every row.
//    RGE A(I,J) = R83S A[I-J+1].
//
//  Example:
//
//    Here is how an R83S matrix of order 5, stored as (A1,A2,A3), would
//    be interpreted:
//
//      A2  A1   0   0   0
//      A3  A2  A1   0   0
//       0  A3  A2  A1   0 
//       0   0  A3  A2  A1
//       0   0   0  A3  A2
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 September 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the order of the linear system.
//
//    Input, double A[3], the R83S matrix.
//
//    Input, double X[M], the vector to be multiplied.
//
//    Output, double R83S_MTV[N], the product A'*x.
//
{
  double *b;
  int i;
  int i_hi;
  int i_lo;
  int j;

  b = new double[n];

  for ( i = 0; i < n; i++ )
  {
    b[i] = 0.0;
  }

  for ( j = 0; j < n; j++ )
  {
    i_lo = i4_max ( 0, j - 1 );
    i_hi = i4_min ( m - 1, j + 1 );
    for ( i = i_lo; i <= i_hi; i++ )
    {
      b[j] = b[j] + x[i] * a[i-j+1];
    }
  }

  return b;
}
//****************************************************************************80

double *r83s_mv ( int m, int n, double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R83S_MV multiplies an R83S matrix times a vector.
//
//  Discussion:
//
//    The R83S storage format is used for a tridiagonal scalar matrix.
//    The vector A(3) contains the subdiagonal, diagonal, and superdiagonal
//    values that occur on every row.
//    RGE A(I,J) = R83S A[I-J+1].
//
//  Example:
//
//    Here is how an R83S matrix of order 5, stored as (A1,A2,A3), would
//    be interpreted:
//
//      A2  A1   0   0   0
//      A3  A2  A1   0   0
//       0  A3  A2  A1   0 
//       0   0  A3  A2  A1
//       0   0   0  A3  A2
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 September 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the order of the matrix.
//
//    Input, double A[3], the matrix.
//
//    Input, double X[N], the vector to be multiplied by A.
//
//    Output, double R83S_MV[M], the product A * x.
//
{
  double *b;
  int i;
  int i_hi;
  int i_lo;
  int j;

  b = new double[m];

  for ( i = 0; i < m; i++ )
  {
    b[i] = 0.0;
  }

  for ( j = 0; j < n; j++ )
  {
    i_lo = i4_max ( 0, j - 1 );
    i_hi = i4_min ( m - 1, j + 1 );
    for ( i = i_lo; i <= i_hi; i++ )
    {
      b[i] = b[i] + a[i-j+1] * x[j];
    }
  }


  return b;
}
//****************************************************************************80

void r83s_print ( int m, int n, double a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    R83S_PRINT prints an R83S matrix.
//
//  Discussion:
//
//    The R83S storage format is used for a tridiagonal scalar matrix.
//    The vector A(3) contains the subdiagonal, diagonal, and superdiagonal
//    values that occur on every row.
//    RGE A(I,J) = R83S A[I-J+1].
//
//  Example:
//
//    Here is how an R83S matrix of order 5, stored as (A1,A2,A3), would
//    be interpreted:
//
//      A2  A1   0   0   0
//      A3  A2  A1   0   0
//       0  A3  A2  A1   0 
//       0   0  A3  A2  A1
//       0   0   0  A3  A2
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 September 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A[3], the R83S matrix.
//
//    Input, string TITLE, a title.
//
{
  r83s_print_some ( m, n, a, 1, 1, m, n, title );

  return;
}
//****************************************************************************80

void r83s_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title )

//****************************************************************************80
//
//  Purpose:
//
//    R83S_PRINT_SOME prints some of an R83S matrix.
//
//  Discussion:
//
//    The R83S storage format is used for a tridiagonal scalar matrix.
//    The vector A(3) contains the subdiagonal, diagonal, and superdiagonal
//    values that occur on every row.
//    RGE A(I,J) = R83S A[I-J+1].
//
//  Example:
//
//    Here is how an R83S matrix of order 5, stored as (A1,A2,A3), would
//    be interpreted:
//
//      A2  A1   0   0   0
//      A3  A2  A1   0   0
//       0  A3  A2  A1   0 
//       0   0  A3  A2  A1
//       0   0   0  A3  A2
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 September 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the order of the matrix.
//
//    Input, double A[3], the R83S matrix.
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
      cout << setw(6) << i << ":   ";

      for ( j2 = 1; j2 <= inc; j2++ )
      {
        j = j2lo - 1 + j2;

        if ( i - j + 1 < 0 || 2 < i - j + 1 )
        {
          cout << "              ";
        }
        else
        {
          cout << "  " << setw(12) << a[i-j+1];
        }
      }
      cout << "\n";
    }
  }
  return;
# undef INCX
}
//****************************************************************************80

double *r83s_random ( int m, int n, int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    R83S_RANDOM randomizes an R83S matrix.
//
//  Discussion:
//
//    The R83S storage format is used for a tridiagonal scalar matrix.
//    The vector A(3) contains the subdiagonal, diagonal, and superdiagonal
//    values that occur on every row.
//    RGE A(I,J) = R83S A[I-J+1].
//
//  Example:
//
//    Here is how an R83S matrix of order 5, stored as (A1,A2,A3), would
//    be interpreted:
//
//      A2  A1   0   0   0
//      A3  A2  A1   0   0
//       0  A3  A2  A1   0 
//       0   0  A3  A2  A1
//       0   0   0  A3  A2
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 September 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the order of the matrix.
//
//    Input/output, int &SEED, a seed for the random number generator.
//
//    Output, double R83S_RANDOM[3], the R83S matrix.
//
{
  double *a;

  a = r8vec_uniform_01_new ( 3, seed );

  return a;
}
//****************************************************************************80

double *r83s_res ( int m, int n, double a[], double x[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    R83S_RES computes the residual R = B-A*X for R83S matrices.
//
//  Discussion:
//
//    The R83S storage format is used for a tridiagonal scalar matrix.
//    The vector A(3) contains the subdiagonal, diagonal, and superdiagonal
//    values that occur on every row.
//    RGE A(I,J) = R83S A[I-J+1].
//
//  Example:
//
//    Here is how an R83S matrix of order 5, stored as (A1,A2,A3), would
//    be interpreted:
//
//      A2  A1   0   0   0
//      A3  A2  A1   0   0
//       0  A3  A2  A1   0 
//       0   0  A3  A2  A1
//       0   0   0  A3  A2
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 September 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the order of the matrix.
//
//    Input, double A[3], the matrix.
//
//    Input, double X[N], the vector to be multiplied by A.
//
//    Input, double B[M], the desired result A * x.
//
//    Output, double R83S_RES[M], the residual R = B - A * X.
//
{
  int i;
  double *r;

  r = r83s_mv ( m, n, a, x );
  
  for ( i = 0; i < m; i++ )
  {
    r[i] = b[i] - r[i];
  }

  return r;
}
//****************************************************************************80

double *r83s_to_r8ge ( int m, int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R83S_TO_R8GE copies an R83S matrix to an R8GE matrix.
//
//  Discussion:
//
//    The R83S storage format is used for a tridiagonal scalar matrix.
//    The vector A(3) contains the subdiagonal, diagonal, and superdiagonal
//    values that occur on every row.
//    RGE A(I,J) = R83S A[I-J+1].
//
//  Example:
//
//    Here is how an R83S matrix of order 5, stored as (A1,A2,A3), would
//    be interpreted:
//
//      A2  A1   0   0   0
//      A3  A2  A1   0   0
//       0  A3  A2  A1   0 
//       0   0  A3  A2  A1
//       0   0   0  A3  A2
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 September 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the order of the matrix.
//
//    Input, double A[3], the R83S matrix.
//
//    Output, double R83S_TO_R8GE[M*N], the R8GE matrix.
//
{
  double *b;
  int i;
  int i_hi;
  int i_lo;
  int j;

  b = new double[m*n];

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < m; i++ )
    {
      b[i+j*m] = 0.0;
    }
  }

  for ( j = 0; j < n; j++ )
  {
    i_lo = i4_max ( 0, j - 1 );
    i_hi = i4_min ( m - 1, j + 1 );
    for ( i = i_lo; i <= i_hi; i++ )
    {
      b[i+j*m] = a[i-j+1];
    }
  }

  return b;
}
//****************************************************************************80

double *r83s_zeros ( int m, int n )

//****************************************************************************80
//
//  Purpose:
//
//    R83S_ZEROS zeros an R83S matrix.
//
//  Discussion:
//
//    The R83S storage format is used for a tridiagonal scalar matrix.
//    The vector A(3) contains the subdiagonal, diagonal, and superdiagonal
//    values that occur on every row.
//    RGE A(I,J) = R83S A[I-J+1].
//
//  Example:
//
//    Here is how an R83S matrix of order 5, stored as (A1,A2,A3), would
//    be interpreted:
//
//      A2  A1   0   0   0
//      A3  A2  A1   0   0
//       0  A3  A2  A1   0 
//       0   0  A3  A2  A1
//       0   0   0  A3  A2
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 September 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the order of the linear system.
//
//    Output, double R83S_ZEROS[3], the R83S matrix.
//
{
  double *a;
  int i;

  a = new double[3];

  for ( i = 0; i < 3; i++ )
  {
    a[i] = 0.0;
  }

  return a;
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

  b = new double[n];

  for ( i = 0; i < n; i++ )
  {
    b[i] = 0.0;
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

  b = new double[m];

  for ( i = 0; i < m; i++ )
  {
    b[i] = 0.0;
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

double r8vec_dot_product ( int n, double x[], double y[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_DOT_PRODUCT computes the dot product of two R8VEC's.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    22 October 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of elements in the vectors.
//
//    Input, double X[N], Y[N], the two vectors.
//
//    Output, double R8VEC_DOT_PRODUCT, the dot product of the vectors.
//
{
  double dot;
  int i;

  dot = 0.0;

  for ( i = 0; i < n; i++ ) 
  {
    dot = dot + x[i] * y[i];
  }

  return dot;
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

double r8vec_norm ( int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_NORM returns the L2 norm of an R8VEC.
//
//  Discussion:
//
//    An R8VEC is a vector of R8's.
//
//    The vector L2 norm is defined as:
//
//      R8VEC_NORM = sqrt ( sum ( 1 <= I <= N ) A(I)^2 ).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 March 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of entries in A.
//
//    Input, double A[N], the vector whose L2 norm is desired.
//
//    Output, double R8VEC_NORM, the L2 norm of A.
//
{
  int i;
  double v;

  v = 0.0;

  for ( i = 0; i < n; i++ )
  {
    v = v + a[i] * a[i];
  }
  v = sqrt ( v );

  return v;
}
//****************************************************************************80

double r8vec_norm_affine ( int n, double v0[], double v1[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_NORM_AFFINE returns the affine L2 norm of an R8VEC.
//
//  Discussion:
//
//    The affine vector L2 norm is defined as:
//
//      R8VEC_NORM_AFFINE(V0,V1)
//        = sqrt ( sum ( 1 <= I <= N ) ( V1(I) - V0(I) )^2 )
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 October 2010
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the dimension of the vectors.
//
//    Input, double V0[N], the base vector.
//
//    Input, double V1[N], the vector.
//
//    Output, double R8VEC_NORM_AFFINE, the affine L2 norm.
//
{
  int i;
  double value;

  value = 0.0;

  for ( i = 0; i < n; i++ )
  {
    value = value + ( v1[i] - v0[i] ) * ( v1[i] - v0[i] );
  }
  value = sqrt ( value );

  return value;
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

double *r8vec_uniform_01_new ( int n, int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_UNIFORM_01_NEW returns a new unit pseudorandom R8VEC.
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
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    19 August 2004
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
//    Input, int N, the number of entries in the vector.
//
//    Input/output, int &SEED, a seed for the random number generator.
//
//    Output, double R8VEC_UNIFORM_01_NEW[N], the vector of pseudorandom values.
//
{
  int i;
  const int i4_huge = 2147483647;
  int k;
  double *r;

  if ( seed == 0 )
  {
    cerr << "\n";
    cerr << "R8VEC_UNIFORM_01_NEW - Fatal error!\n";
    cerr << "  Input value of SEED = 0.\n";
    exit ( 1 );
  }

  r = new double[n];

  for ( i = 0; i < n; i++ )
  {
    k = seed / 127773;

    seed = 16807 * ( seed - k * 127773 ) - k * 2836;

    if ( seed < 0 )
    {
      seed = seed + i4_huge;
    }

    r[i] = ( double ) ( seed ) * 4.656612875E-10;
  }

  return r;
}
//****************************************************************************80

void r8vec2_print ( int n, double a1[], double a2[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC2_PRINT prints an R8VEC2.
//
//  Discussion:
//
//    An R8VEC2 is a dataset consisting of N pairs of real values, stored
//    as two separate vectors A1 and A2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    19 November 2002
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of components of the vector.
//
//    Input, double A1[N], double A2[N], the vectors to be printed.
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
    cout << setw(6)  << i
         << ": " << setw(14) << a1[i]
         << "  " << setw(14) << a2[i] << "\n";
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
