# include <cmath>
# include <ctime>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r83t.hpp"

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

void r83t_cg ( int n, double a[], double b[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R83T_CG uses the conjugate gradient method on an R83T system.
//
//  Discussion:
//
//    The R83T storage format is used for an MxN tridiagonal matrix.
//    The superdiagonal is stored in entries (1:M-1,3), the diagonal in
//    entries (1:M,2), and the subdiagonal in (2:M,1).  Thus, the
//    the rows of the original matrix slide horizontally to form an
//    Mx3 stack of data.
//
//    An R83T matrix of order 3x5 would be stored:
//
//       *  A11 A12
//      A21 A22 A23
//      A32 A33 A34
//
//    An R83T matrix of order 5x5 would be stored:
//
//       *  A11 A12
//      A21 A22 A23
//      A32 A33 A34
//      A43 A44 A45
//      A54 A55  *
//
//    An R83T matrix of order 5x3 would be stored:
//
//       *  A11 A12
//      A21 A22 A23
//      A32 A33  *
//      A43  *   *
//       *   *   *
//
//    The matrix A must be a positive definite symmetric band matrix.
//
//    The method is designed to reach the solution after N computational
//    steps.  However, roundoff may introduce unacceptably large errors for
//    some problems.  In such a case, calling the routine again, using
//    the computed solution as the new starting estimate, should improve
//    the results.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    29 May 2016
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
//
//    Input, double A[N*3], the matrix.
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
  ap = r83t_mv ( n, n, a, x );

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
    ap = r83t_mv ( n, n, a, p );
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

double *r83t_dif2 ( int m, int n )

//****************************************************************************80
//
//  Purpose:
//
//    R83T_DIF2 returns the DIF2 matrix in R83T format.
//
//  Discussion:
//
//    The R83T storage format is used for an MxN tridiagonal matrix.
//    The superdiagonal is stored in entries (1:M-1,3), the diagonal in
//    entries (1:M,2), and the subdiagonal in (2:M,1).  Thus, the
//    the rows of the original matrix slide horizontally to form an
//    Mx3 stack of data.
//
//    An R83T matrix of order 3x5 would be stored:
//
//       *  A11 A12
//      A21 A22 A23
//      A32 A33 A34
//
//    An R83T matrix of order 5x5 would be stored:
//
//       *  A11 A12
//      A21 A22 A23
//      A32 A33 A34
//      A43 A44 A45
//      A54 A55  *
//
//    An R83T matrix of order 5x3 would be stored:
//
//       *  A11 A12
//      A21 A22 A23
//      A32 A33  *
//      A43  *   *
//       *   *   *
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
//    29 May 2016
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
//    Output, double A[M*3], the matrix.
//
{
  double *a;
  int i;
  int j;
  int mn;

  a = new double[m*3];

  for ( j = 0; j < 3; j++ )
  {
    for ( i = 0; i < m; i++ )
    {
      a[i+j*m] = 0.0;
    }
  }

  mn = i4_min ( m, n );

  j = 0;
  for ( i = 1; i < mn; i++ )
  {
    a[i+j*m] = -1.0;
  }

  j = 1;
  for ( i = 0; i < mn; i++ )
  {
    a[i+j*m] = 2.0;
  }

  j = 2;
  for ( i = 0; i < mn -1; i++ )
  {
    a[i+j*m] = -1.0;
  }

  if ( m < n )
  {
    i = mn - 1;
    j = 2;
    a[i+j*m] = -1.0;
  }
  else if ( n < m )
  {
    i = mn;
    j = 0;
    a[i+j*m] = -1.0;
  }
   
  return a;
}
//****************************************************************************80

void r83t_gs_sl ( int n, double a[], double b[], double x[], int it_max )

//****************************************************************************80
//
//  Purpose:
//
//    R83T_GS_SL solves an R83T system using Gauss-Seidel iteration.
//
//  Discussion:
//
//    The R83T storage format is used for an MxN tridiagonal matrix.
//    The superdiagonal is stored in entries (1:M-1,3), the diagonal in
//    entries (1:M,2), and the subdiagonal in (2:M,1).  Thus, the
//    the rows of the original matrix slide horizontally to form an
//    Mx3 stack of data.
//
//    An R83T matrix of order 3x5 would be stored:
//
//       *  A11 A12
//      A21 A22 A23
//      A32 A33 A34
//
//    An R83T matrix of order 5x5 would be stored:
//
//       *  A11 A12
//      A21 A22 A23
//      A32 A33 A34
//      A43 A44 A45
//      A54 A55  *
//
//    An R83T matrix of order 5x3 would be stored:
//
//       *  A11 A12
//      A21 A22 A23
//      A32 A33  *
//      A43  *   *
//       *   *   *
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    29 May 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A[N*3], the R83T matrix.
//
//    Input, double B[N], the right hand side of the linear system.
//
//    Input/output, double X[N], an approximate solution to 
//    the system.
//
//    Input, int IT_MAX, the maximum number of iterations.
//
{
  int i;
  int it_num;
//
//  No diagonal matrix entry can be zero.
//
  for ( i = 0; i < n; i++ )
  {
    if ( a[i+1*n] == 0.0 )
    {
      cerr << "\n";
      cerr << "R83_GS_SL - Fatal error!\n";
      cerr << "  Zero diagonal entry, index = " << i << "\n";
      exit ( 1 );
    }
  }

  for ( it_num = 1; it_num <= it_max; it_num++ )
  {
    x[0] = ( b[0] - a[0+2*n] * x[1] ) / a[0+1*n];

    for ( i = 1; i < n - 1; i++ )
    {
      x[i] = ( b[i] - a[i+0*n] * x[i-1] - a[i+2*n] * x[i+1] ) / a[i+1*n];
    }
    x[n-1] = ( b[n-1] - a[n-1+0*n] * x[n-2] ) / a[n-1+1*n];
  }

  return;
}
//****************************************************************************80

double *r83t_indicator ( int m, int n )

//****************************************************************************80
//
//  Purpose:
//
//    R83T_INDICATOR sets the indicator matrix in R83T format.
//
//  Discussion:
//
//    The R83T storage format is used for an MxN tridiagonal matrix.
//    The superdiagonal is stored in entries (1:M-1,3), the diagonal in
//    entries (1:M,2), and the subdiagonal in (2:M,1).  Thus, the
//    the rows of the original matrix slide horizontally to form an
//    Mx3 stack of data.
//
//    An R83T matrix of order 3x5 would be stored:
//
//       *  A11 A12
//      A21 A22 A23
//      A32 A33 A34
//
//    An R83T matrix of order 5x5 would be stored:
//
//       *  A11 A12
//      A21 A22 A23
//      A32 A33 A34
//      A43 A44 A45
//      A54 A55  *
//
//    An R83T matrix of order 5x3 would be stored:
//
//       *  A11 A12
//      A21 A22 A23
//      A32 A33  *
//      A43  *   *
//       *   *   *
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    29 May 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, the number of rows of the matrix.
//
//    Input, int N, the number of columns of the matrix.
//
//    Output, double R83T_INDICATOR[M*3], the matrix.
//
{
  double *a;
  int fac;
  int i;
  int j;
  int k;

  fac = i4_power ( 10, i4_log_10 ( n ) + 1 );

  a = new double[m*3];

  for ( i = 0; i < m; i++ )
  {
    for ( k = 0; k < 3; k++ )
    {
      j = i + k - 1;
      if ( 0 <= j && j <= n - 1 )
      {
        a[i+k*m] = ( double ) ( fac * ( i + 1 ) + ( j + 1 ) );
      }
      else
      {
        a[i+k*m] = 0.0;
      }
    }
  }

  return a;
}
//****************************************************************************80

void r83t_jac_sl ( int n, double a[], double b[], double x[], int it_max )

//****************************************************************************80
//
//  Purpose:
//
//    R83T_JAC_SL solves an R83T system using Jacobi iteration.
//
//  Discussion:
//
//    The R83T storage format is used for an MxN tridiagonal matrix.
//    The superdiagonal is stored in entries (1:M-1,3), the diagonal in
//    entries (1:M,2), and the subdiagonal in (2:M,1).  Thus, the
//    the rows of the original matrix slide horizontally to form an
//    Mx3 stack of data.
//
//    An R83T matrix of order 3x5 would be stored:
//
//       *  A11 A12
//      A21 A22 A23
//      A32 A33 A34
//
//    An R83T matrix of order 5x5 would be stored:
//
//       *  A11 A12
//      A21 A22 A23
//      A32 A33 A34
//      A43 A44 A45
//      A54 A55  *
//
//    An R83T matrix of order 5x3 would be stored:
//
//       *  A11 A12
//      A21 A22 A23
//      A32 A33  *
//      A43  *   *
//       *   *   *
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    29 May 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A[N*3], the R83T matrix.
//
//    Input, double B[N], the right hand side of the linear system.
//
//    Input/output, double X[N], an approximate solution 
//    to the system.
//
//    Input, int IT_MAX, the maximum number of iterations.
//
{
  int i;
  int it_num;
  double *x_new;
//
//  No diagonal matrix entry can be zero.
//
  for ( i = 0; i < n; i++ )
  {
    if ( a[i+1*n] == 0.0 )
    {
      cerr << "\n";
      cerr << "R83_JAC_SL - Fatal error!\n";
      cerr << "  Zero diagonal entry, index = " << i << "\n";
      exit ( 1 );
    }
  }

  x_new = new double[n];

  for ( it_num = 1; it_num <= it_max; it_num++ )
  {
    x_new[0] = b[0] - a[0+2*n] * x[1];
    for ( i = 1; i < n - 1; i++ )
    {
      x_new[i] = b[i] - a[i+0*n] * x[i-1] - a[i+2*n] * x[i+1];
    }
    x_new[n-1] = b[n-1] - a[n-1+0*n] * x[n-2];
//
//  Divide by diagonal terms.
//
    for ( i = 0; i < n; i++ )
    {
      x_new[i] = x_new[i] / a[i+1*n];
    }
//
//  Update.
//
    for ( i = 0; i < n; i++ )
    {
      x[i] = x_new[i];
    }
  }

  delete [] x_new;

  return;
}
//****************************************************************************80

double *r83t_mtv ( int m, int n, double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R83T_MTV multiplies an R83T matrix transposed times an R8VEC.
//
//  Discussion:
//
//    The R83T storage format is used for an MxN tridiagonal matrix.
//    The superdiagonal is stored in entries (1:M-1,3), the diagonal in
//    entries (1:M,2), and the subdiagonal in (2:M,1).  Thus, the
//    the rows of the original matrix slide horizontally to form an
//    Mx3 stack of data.
//
//    An R83T matrix of order 3x5 would be stored:
//
//       *  A11 A12
//      A21 A22 A23
//      A32 A33 A34
//
//    An R83T matrix of order 5x5 would be stored:
//
//       *  A11 A12
//      A21 A22 A23
//      A32 A33 A34
//      A43 A44 A45
//      A54 A55  *
//
//    An R83T matrix of order 5x3 would be stored:
//
//       *  A11 A12
//      A21 A22 A23
//      A32 A33  *
//      A43  *   *
//       *   *   *
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    29 May 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns.
//
//    Input, double A[M*3], the matrix.
//
//    Input, double X[M], the vector to be multiplied by A.
//
//    Output, double R83T_MTV[N], the product A' * x.
//
{
  double *b;
  int i;
  int j;
  int k;

  b = new double[n];

  for ( j = 0; j < n; j++ )
  {
    b[j] = 0.0;
  }

  for ( i = 0; i < m; i++ )
  {
    for ( k = 0; k < 3; k++ )
    {
      j = i + k - 1;
      if ( 0 <= j && j <= n - 1 )
      {
        b[j] = b[j] + x[i] * a[i+k*m];
      }
    }
  }

  return b;
}
//****************************************************************************80

double *r83t_mv ( int m, int n, double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R83T_MV multiplies an R83T matrix times a vector.
//
//  Discussion:
//
//    The R83T storage format is used for an MxN tridiagonal matrix.
//    The superdiagonal is stored in entries (1:M-1,3), the diagonal in
//    entries (1:M,2), and the subdiagonal in (2:M,1).  Thus, the
//    the rows of the original matrix slide horizontally to form an
//    Mx3 stack of data.
//
//    An R83T matrix of order 3x5 would be stored:
//
//       *  A11 A12
//      A21 A22 A23
//      A32 A33 A34
//
//    An R83T matrix of order 5x5 would be stored:
//
//       *  A11 A12
//      A21 A22 A23
//      A32 A33 A34
//      A43 A44 A45
//      A54 A55  *
//
//    An R83T matrix of order 5x3 would be stored:
//
//       *  A11 A12
//      A21 A22 A23
//      A32 A33  *
//      A43  *   *
//       *   *   *
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    29 May 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns.
//
//    Input, double A[M*3], the matrix.
//
//    Input, double X[N], the vector to be multiplied by A.
//
//    Output, double R83T_MV[M], the product A * x.
//
{
  double *b;
  int i;
  int j;
  int mn;

  b = new double[m];

  for ( i = 0; i < m; i++ )
  {
    b[i] = 0.0;
  }

  if ( n == 1 )
  {
    i = 0;
    j = 1;
    b[0] = a[i+j*m] * x[0];
    if ( 1 < m )
    {
      i = 1;
      j = 0;
      b[1] = a[i+j*m] * x[0];
    }
    return b;
  }

  mn = i4_min ( m, n );

  b[0] = a[0+1*m] * x[0]
       + a[0+2*m] * x[1];

  for ( i = 1; i < mn - 1; i++ )
  {
    b[i] = a[i+0*m] * x[i-1]
         + a[i+1*m] * x[i]
         + a[i+2*m] * x[i+1];
  }
  b[mn-1] = a[mn-1+0*m] * x[mn-2]
          + a[mn-1+1*m] * x[mn-1];

  if ( n < m )
  {
    b[mn] = b[mn] + a[mn+0*m] * x[mn-1];
  }
  else if ( m < n )
  {
    b[mn-1] = b[mn-1] + a[mn-1+2*m] * x[mn];
  }

  return b;
}
//****************************************************************************80

void r83t_print ( int m, int n, double a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    R83T_PRINT prints an R83T matrix.
//
//  Discussion:
//
//    The R83T storage format is used for an MxN tridiagonal matrix.
//    The superdiagonal is stored in entries (1:M-1,3), the diagonal in
//    entries (1:M,2), and the subdiagonal in (2:M,1).  Thus, the
//    the rows of the original matrix slide horizontally to form an
//    Mx3 stack of data.
//
//    An R83T matrix of order 3x5 would be stored:
//
//       *  A11 A12
//      A21 A22 A23
//      A32 A33 A34
//
//    An R83T matrix of order 5x5 would be stored:
//
//       *  A11 A12
//      A21 A22 A23
//      A32 A33 A34
//      A43 A44 A45
//      A54 A55  *
//
//    An R83T matrix of order 5x3 would be stored:
//
//       *  A11 A12
//      A21 A22 A23
//      A32 A33  *
//      A43  *   *
//       *   *   *
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    29 May 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the order of the matrix.
//
//    Input, double A[3*N], the R83T matrix.
//
//    Input, string TITLE, a title.
//
{
  r83t_print_some ( m, n, a, 0, 0, m - 1, n - 1, title );

  return;
}
//****************************************************************************80

void r83t_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title )

//****************************************************************************80
//
//  Purpose:
//
//    R83T_PRINT_SOME prints some of an R83T matrix.
//
//  Discussion:
//
//    The R83T storage format is used for an MxN tridiagonal matrix.
//    The superdiagonal is stored in entries (1:M-1,3), the diagonal in
//    entries (1:M,2), and the subdiagonal in (2:M,1).  Thus, the
//    the rows of the original matrix slide horizontally to form an
//    Mx3 stack of data.
//
//    An R83T matrix of order 3x5 would be stored:
//
//       *  A11 A12
//      A21 A22 A23
//      A32 A33 A34
//
//    An R83T matrix of order 5x5 would be stored:
//
//       *  A11 A12
//      A21 A22 A23
//      A32 A33 A34
//      A43 A44 A45
//      A54 A55  *
//
//    An R83T matrix of order 5x3 would be stored:
//
//       *  A11 A12
//      A21 A22 A23
//      A32 A33  *
//      A43  *   *
//       *   *   *
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    29 May 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the order of the matrix.
//
//    Input, double A[3*N], the R83T matrix.
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
  int k;

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
    i2lo = i4_max ( ilo, 0 );
    i2lo = i4_max ( i2lo, j2lo - 1 );

    i2hi = i4_min ( ihi, m - 1 );
    i2hi = i4_min ( i2hi, j2hi + 1 );

    for ( i = i2lo; i <= i2hi; i++ )
    {
//
//  Print out (up to) 5 entries in row I, that lie in the current strip.
//
      cout << setw(6) << i;

      for ( j2 = 1; j2 <= inc; j2++ )
      {
        j = j2lo - 1 + j2;
        k = j - i + 1;
        if ( k < 0 || 2 < k )
        {
          cout << "              ";
        }
        else
        {
          cout << "  " << setw(12) <<  a[i+k*m];
        }
      }
      cout << "\n";
    }
  }

  return;
# undef INCX
}
//****************************************************************************80

double *r83t_random ( int m, int n, int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    R83T_RANDOM returns a random R83T matrix.
//
//  Discussion:
//
//    The R83T storage format is used for an MxN tridiagonal matrix.
//    The superdiagonal is stored in entries (1:M-1,3), the diagonal in
//    entries (1:M,2), and the subdiagonal in (2:M,1).  Thus, the
//    the rows of the original matrix slide horizontally to form an
//    Mx3 stack of data.
//
//    An R83T matrix of order 3x5 would be stored:
//
//       *  A11 A12
//      A21 A22 A23
//      A32 A33 A34
//
//    An R83T matrix of order 5x5 would be stored:
//
//       *  A11 A12
//      A21 A22 A23
//      A32 A33 A34
//      A43 A44 A45
//      A54 A55  *
//
//    An R83T matrix of order 5x3 would be stored:
//
//       *  A11 A12
//      A21 A22 A23
//      A32 A33  *
//      A43  *   *
//       *   *   *
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    29 May 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, the number of rows of the matrix.
//
//    Input, int N, the number of columns of the matrix.
//
//    Input/output, int *SEED, a seed for the random number
//    generator.
//
//    Output, double R83T_RANDOM[M*3], the matrix.
//
{
  double *a;
  int i;
  int j;
  int k;

  a = new double[m*3];

  for ( i = 0; i < m; i++ )
  {
    for ( k = 0; k < 3; k++ )
    {
      j = i + k - 1;
      if ( 0 <= j && j <= n - 1 )
      {
        a[i+k*m] = r8_uniform_01 ( seed );
      }
      else
      {
        a[i+k*m] = 0.0;
      }
    }
  }

  return a;
}
//****************************************************************************80

double *r83t_res ( int m, int n, double a[], double x[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    R83T_RES computes the residual R = B-A*X for R83T matrices.
//
//  Discussion:
//
//    The R83T storage format is used for an MxN tridiagonal matrix.
//    The superdiagonal is stored in entries (1:M-1,3), the diagonal in
//    entries (1:M,2), and the subdiagonal in (2:M,1).  Thus, the
//    the rows of the original matrix slide horizontally to form an
//    Mx3 stack of data.
//
//    An R83T matrix of order 3x5 would be stored:
//
//       *  A11 A12
//      A21 A22 A23
//      A32 A33 A34
//
//    An R83T matrix of order 5x5 would be stored:
//
//       *  A11 A12
//      A21 A22 A23
//      A32 A33 A34
//      A43 A44 A45
//      A54 A55  *
//
//    An R83T matrix of order 5x3 would be stored:
//
//       *  A11 A12
//      A21 A22 A23
//      A32 A33  *
//      A43  *   *
//       *   *   *
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    29 May 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, the number of rows of the matrix.
//
//    Input, int N, the number of columns of the matrix.
//
//    Input, double A[M*3], the matrix.
//
//    Input, double X[N], the vector to be multiplied by A.
//
//    Input, double B[M], the desired result A * x.
//
//    Output, double R83T_RES[M], the residual R = B - A * X.
//
{
  int i;
  double *r;

  r = r83t_mv ( m, n, a, x );

  for ( i = 0; i < m; i++ )
  {
    r[i] = b[i] - r[i];
  }

  return r;
}
//****************************************************************************80

double *r83t_to_r8ge ( int m, int n, double a_r83t[] )

//****************************************************************************80
//
//  Purpose:
//
//    R83T_TO_R8GE copies an R83T matrix to an R8GE matrix.
//
//  Discussion:
//
//    The R83T storage format is used for an MxN tridiagonal matrix.
//    The superdiagonal is stored in entries (1:M-1,3), the diagonal in
//    entries (1:M,2), and the subdiagonal in (2:M,1).  Thus, the
//    the rows of the original matrix slide horizontally to form an
//    Mx3 stack of data.
//
//    An R83T matrix of order 3x5 would be stored:
//
//       *  A11 A12
//      A21 A22 A23
//      A32 A33 A34
//
//    An R83T matrix of order 5x5 would be stored:
//
//       *  A11 A12
//      A21 A22 A23
//      A32 A33 A34
//      A43 A44 A45
//      A54 A55  *
//
//    An R83T matrix of order 5x3 would be stored:
//
//       *  A11 A12
//      A21 A22 A23
//      A32 A33  *
//      A43  *   *
//       *   *   *
//
//    The R8GE storage format is used for a general M by N matrix.  A storage 
//    space is made for each entry.  The two dimensional logical
//    array can be thought of as a vector of M*N entries, starting with
//    the M entries in the column 1, then the M entries in column 2
//    and so on.  Considered as a vector, the entry A(I,J) is then stored
//    in vector location I+(J-1)*M.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    29 May 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the order of the matrix.
//
//    Input, double A_R83T[M*3], the R83T matrix.
//
//    Output, double R83T_TO_R8GE[M*N], the R8GE matrix.
//
{
  double *a_r8ge;
  int i;
  int j;
  int k;

  a_r8ge = new double[m*n];

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < m; i++ )
    {
      a_r8ge[i+j*m] = 0.0;
    }
  }

  for ( i = 0; i < m; i++ )
  {
    for ( k = 0; k < 3; k++ )
    {
      j = i + k - 1;
      if ( 0 <= j && j <= n - 1 )
      {
        a_r8ge[i+j*m] = a_r83t[i+k*m];
      }
    }
  }

  return a_r8ge;
}
//****************************************************************************80

double *r83t_zeros ( int m, int n )

//****************************************************************************80
//
//  Purpose:
//
//    R83T_ZEROS zeros an R83T matrix.
//
//  Discussion:
//
//    The R83T storage format is used for an MxN tridiagonal matrix.
//    The superdiagonal is stored in entries (1:M-1,3), the diagonal in
//    entries (1:M,2), and the subdiagonal in (2:M,1).  Thus, the
//    the rows of the original matrix slide horizontally to form an
//    Mx3 stack of data.
//
//    An R83T matrix of order 3x5 would be stored:
//
//       *  A11 A12
//      A21 A22 A23
//      A32 A33 A34
//
//    An R83T matrix of order 5x5 would be stored:
//
//       *  A11 A12
//      A21 A22 A23
//      A32 A33 A34
//      A43 A44 A45
//      A54 A55  *
//
//    An R83T matrix of order 5x3 would be stored:
//
//       *  A11 A12
//      A21 A22 A23
//      A32 A33  *
//      A43  *   *
//       *   *   *
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    29 May 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns.
//
//    Output, double R83T_ZEROS[M*3], the matrix.
//
{
  double *a;
  int i;
  int j;

  a = new double[m*3];
  for ( j = 0; j < 3; j++ )
  {
    for ( i = 0; i < m; i++ )
    {
      a[i+j*m] = 0.0;
    }
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

double r8vec_dot_product ( int n, double a1[], double a2[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_DOT_PRODUCT computes the dot product of a pair of R8VEC's.
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
//    03 July 2005
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of entries in the vectors.
//
//    Input, double A1[N], A2[N], the two vectors to be considered.
//
//    Output, double R8VEC_DOT_PRODUCT, the dot product of the vectors.
//
{
  int i;
  double value;

  value = 0.0;
  for ( i = 0; i < n; i++ )
  {
    value = value + a1[i] * a2[i];
  }
  return value;
}
//****************************************************************************80

double *r8vec_indicator1_new ( int n )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_INDICATOR1_NEW sets an R8VEC to the indicator vector {1,2,3,...}.
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
//    Output, double R8VEC_INDICATOR1_NEW[N], the indicator array.
//
{
  double *a;
  int i;

  a = new double[n];

  for ( i = 0; i < n; i++ )
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
