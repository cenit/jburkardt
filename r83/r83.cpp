# include <cmath>
# include <cstdlib>
# include <ctime>
# include <fstream>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r83.hpp"

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

void r83_cg ( int n, double a[], double b[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R83_CG uses the conjugate gradient method on an R83 system.
//
//  Discussion:
//
//    The R83 storage format is used for a tridiagonal matrix.
//    The superdiagonal is stored in entries (1,2:min(M+1,N)).
//    The diagonal in entries (2,1:min(M,N)).
//    The subdiagonal in (3,min(M-1,N)).
//    R8GE A(I,J) = R83 A[I-J+1+J*3] (0 based indexing).
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
//    04 June 2014
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
//    Input, double A[3*N], the matrix.
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
  ap = r83_mv ( n, n, a, x );

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
    ap = r83_mv ( n, n, a, p );
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

double *r83_cr_fa ( int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R83_CR_FA decomposes a real tridiagonal matrix using cyclic reduction.
//
//  Discussion:
//
//    The R83 storage format is used for a tridiagonal matrix.
//    The superdiagonal is stored in entries (1,2:min(M+1,N)).
//    The diagonal in entries (2,1:min(M,N)).
//    The subdiagonal in (3,min(M-1,N)).
//    R8GE A(I,J) = R83 A[I-J+1+J*3] (0 based indexing).
//
//    Once R83_CR_FA has decomposed a matrix A, then R83_CR_SL may be used to
//    solve linear systems A * x = b.
//
//    R83_CR_FA does not employ pivoting.  Hence, the results can be more
//    sensitive to ill-conditioning than standard Gauss elimination.  In
//    particular, R83_CR_FA will fail if any diagonal element of the matrix
//    is zero.  Other matrices may also cause R83_CR_FA to fail.
//
//    R83_CR_FA can be guaranteed to work properly if the matrix is strictly
//    diagonally dominant, that is, if the absolute value of the diagonal
//    element is strictly greater than the sum of the absolute values of
//    the offdiagonal elements, for each equation.
//
//    The algorithm may be illustrated by the following figures:
//
//    The initial matrix is given by:
//
//          D1 U1
//          L1 D2 U2
//             L2 D3 U3
//                L3 D4 U4
//                   L4 D U5
//                      L5 D6
//
//    Rows and columns are permuted in an odd/even way to yield:
//
//          D1       U1
//             D3    L2 U3
//                D5    L4 U5
//          L1 U2    D2
//             L3 U4    D4
//                L5       D6
//
//    A block LU decomposition is performed to yield:
//
//          D1      |U1
//             D3   |L2 U3
//                D5|   L4 U5
//          --------+--------
//                  |D2'F3
//                  |F1 D4'F4
//                  |   F2 D6'
//
//    For large systems, this reduction is repeated on the lower right hand
//    tridiagonal subsystem until a completely upper triangular system
//    is obtained.  The system has now been factored into the product of a
//    lower triangular system and an upper triangular one, and the information
//    defining this factorization may be used by R83_CR_SL to solve linear
//    systems.
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
//    23 March 2004
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Roger Hockney,
//    A fast direct solution of Poisson's equation using Fourier Analysis,
//    Journal of the ACM,
//    Volume 12, Number 1, pages 95-113, January 1965.
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A[3*N], the R83 matrix.
//
//    Output, double R83_CR_FA[3*(2*N+1)], factorization information 
//    needed by R83_CR_SL.
//
{
  double *a_cr;
  int i;
  int iful;
  int ifulp;
  int ihaf;
  int il;
  int ilp;
  int inc;
  int incr;
  int ipnt;
  int ipntp;
  int j;

  if ( n <= 0 )
  {
    cerr << "\n";
    cerr << "R83_CR_FA - Fatal error!\n";
    cerr << "  Nonpositive N = " << n << "\n";
    exit ( 1 );
  }

  a_cr = new double[3*(2*n+1)];

  for ( j = 0; j < 2 * n + 1; j++ )
  {
    for ( i = 0; i < 3; i++ )
    {
      a_cr[i+j*3] = 0.0;
    }
  }

  if ( n == 1 )
  {
    a_cr[1+0*3] = 1.0 / a[1+0*3];
    return a_cr;
  }

  for ( j = 1; j <= n-1; j++ )
  {
    a_cr[0+j*3] = a[0+j*3];
  }

  for ( j = 1; j <= n; j++ )
  {
    a_cr[1+j*3] = a[1+(j-1)*3];
  }

  for ( j = 1; j <= n-1; j++ )
  {
    a_cr[2+j*3] = a[2+(j-1)*3];
  }

  il = n;
  ipntp = 0;

  while ( 1 < il )
  {
    ipnt = ipntp;
    ipntp = ipntp + il;
    if ( ( il % 2 ) == 1 )
    {
      inc = il + 1;
    }
    else
    {
      inc = il;
    }

    incr = inc / 2;
    il = il / 2;
    ihaf = ipntp + incr + 1;
    ifulp = ipnt + inc + 2;

    for ( ilp = incr; 1 <= ilp; ilp-- )
    {
      ifulp = ifulp - 2;
      iful = ifulp - 1;
      ihaf = ihaf - 1;

      a_cr[1+iful*3] = 1.0 / a_cr[1+iful*3];
      a_cr[2+iful*3]  = a_cr[2+iful*3]  * a_cr[1+iful*3];
      a_cr[0+ifulp*3] = a_cr[0+ifulp*3] * a_cr[1+(ifulp+1)*3];
      a_cr[1+ihaf*3]  = a_cr[1+ifulp*3] 
        - a_cr[0+iful*3]  * a_cr[2+iful*3]
        - a_cr[0+ifulp*3] * a_cr[2+ifulp*3];
      a_cr[2+ihaf*3] = -a_cr[2+ifulp*3] * a_cr[2+(ifulp+1)*3];
      a_cr[0+ihaf*3] = -a_cr[0+ifulp*3] * a_cr[0+(ifulp+1)*3];
    }
  }

  a_cr[1+(ipntp+1)*3] = 1.0 / a_cr[1+(ipntp+1)*3];

  return a_cr;
}
//****************************************************************************80

double *r83_cr_sl ( int n, double a_cr[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    R83_CR_SL solves a real linear system factored by R83_CR_FA.
//
//  Discussion:
//
//    The R83 storage format is used for a tridiagonal matrix.
//    The superdiagonal is stored in entries (1,2:min(M+1,N)).
//    The diagonal in entries (2,1:min(M,N)).
//    The subdiagonal in (3,min(M-1,N)).
//    R8GE A(I,J) = R83 A[I-J+1+J*3] (0 based indexing).
//
//    The matrix A must be tridiagonal.  R83_CR_FA is called to compute the
//    LU factors of A.  It does so using a form of cyclic reduction.  If
//    the factors computed by R83_CR_FA are passed to R83_CR_SL, then one or 
//    many linear systems involving the matrix A may be solved.
//
//    Note that R83_CR_FA does not perform pivoting, and so the solution 
//    produced by R83_CR_SL may be less accurate than a solution produced 
//    by a standard Gauss algorithm.  However, such problems can be 
//    guaranteed not to occur if the matrix A is strictly diagonally 
//    dominant, that is, if the absolute value of the diagonal coefficient 
//    is greater than the sum of the absolute values of the two off diagonal 
//    coefficients, for each row of the matrix.
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
//    01 January 2004
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Roger Hockney,
//    A fast direct solution of Poisson's equation using Fourier Analysis,
//    Journal of the ACM,
//    Volume 12, Number 1, pages 95-113, January 1965.
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//    N must be positive.
//
//    Input, double A_CR[3*(2*N+1)], factorization information computed 
//    by R83_CR_FA.
//
//    Input, double B[N], the right hand side.
//
//    Output, double R83_CR_SL[N], the solution.
//
{
  int i;
  int iful;
  int ifulm;
  int ihaf;
  int il;
  int ipnt;
  int ipntp;
  int ndiv;
  double *rhs;
  double *x;

  if ( n <= 0 )
  {
    cerr << "\n";
    cerr << "R83_CR_SL - Fatal error!\n";
    cerr << "  Nonpositive N = " << n << "\n";
    exit ( 1 );
  }

  if ( n == 1 )
  {
    x = new double[1];
    x[0] = a_cr[1+1*3] * b[0];
    return x;
  }
//
//  Set up RHS.
//
  rhs = new double[2*n+1];

  rhs[0] = 0.0;
  for ( i = 1; i <= n; i++ )
  {
    rhs[i] = b[i-1];
  }
  for ( i = n + 1; i <= 2 * n; i++ )
  {
    rhs[i] = 0.0;
  }

  il = n;
  ndiv = 1;
  ipntp = 0;

  while ( 1 < il )
  {
    ipnt = ipntp;
    ipntp = ipntp + il;
    il = il / 2;
    ndiv = ndiv * 2;
    ihaf = ipntp;

    for ( iful = ipnt + 2; iful <= ipntp; iful = iful + 2 )
    {
      ihaf = ihaf + 1;
      rhs[ihaf] = rhs[iful] 
        - a_cr[2+(iful-1)*3] * rhs[iful-1]
        - a_cr[0+iful*3]     * rhs[iful+1];
    }
  }

  rhs[ihaf] = rhs[ihaf] * a_cr[1+ihaf*3];

  ipnt = ipntp;

  while ( 0 < ipnt )
  {
    ipntp = ipnt;
    ndiv = ndiv / 2;
    il = n / ndiv;
    ipnt = ipnt - il;
    ihaf = ipntp;

    for ( ifulm = ipnt + 1; ifulm <= ipntp; ifulm = ifulm + 2 )
    {
      iful = ifulm + 1;
      ihaf = ihaf + 1;
      rhs[iful] = rhs[ihaf];
      rhs[ifulm] = a_cr[1+ifulm*3] * ( 
                               rhs[ifulm] 
        - a_cr[2+(ifulm-1)*3] * rhs[ifulm-1] 
        - a_cr[0+ifulm*3]     * rhs[iful] );
    }
  }

  x = new double[n];

  for ( i = 0; i < n; i++ )
  {
    x[i] = rhs[i+1];
  }

  delete [] rhs;

  return x;
}
//****************************************************************************80

double *r83_cr_sls ( int n, double a_cr[], int nb, double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    R83_CR_SLS solves several real linear systems factored by R83_CR_FA.
//
//  Discussion:
//
//    The R83 storage format is used for a tridiagonal matrix.
//    The superdiagonal is stored in entries (1,2:min(M+1,N)).
//    The diagonal in entries (2,1:min(M,N)).
//    The subdiagonal in (3,min(M-1,N)).
//    R8GE A(I,J) = R83 A[I-J+1+J*3] (0 based indexing).
//
//    The matrix A must be tridiagonal.  R83_CR_FA is called to compute the
//    LU factors of A.  It does so using a form of cyclic reduction.  If
//    the factors computed by R83_CR_FA are passed to R83_CR_SLS, then one or 
//    many linear systems involving the matrix A may be solved.
//
//    Note that R83_CR_FA does not perform pivoting, and so the solutions
//    produced by R83_CR_SLS may be less accurate than a solution produced 
//    by a standard Gauss algorithm.  However, such problems can be 
//    guaranteed not to occur if the matrix A is strictly diagonally 
//    dominant, that is, if the absolute value of the diagonal coefficient 
//    is greater than the sum of the absolute values of the two off diagonal 
//    coefficients, for each row of the matrix.
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
//    09 May 2010
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Roger Hockney,
//    A fast direct solution of Poisson's equation using Fourier Analysis,
//    Journal of the ACM,
//    Volume 12, Number 1, pages 95-113, January 1965.
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A_CR[3*(2*N+1)], factorization information computed 
//    by R83_CR_FA.
//
//    Input, int NB, the number of systems.
//
//    Input, double B[N*NB], the right hand sides.
//
//    Output, double R83_CR_SL[N*NB], the solutions.
//
{
  int i;
  int iful;
  int ifulm;
  int ihaf;
  int il;
  int ipnt;
  int ipntp;
  int j;
  int ndiv;
  double *rhs;
  double *x;

  if ( n <= 0 )
  {
    cerr << "\n";
    cerr << "R83_CR_SLS - Fatal error!\n";
    cerr << "  Nonpositive N = " << n << "\n";
    exit ( 1 );
  }

  if ( n == 1 )
  {
    x = new double[1*nb];
    for ( j = 0; j < nb; j++ )
    {
      x[0+j*n] = a_cr[1+0*3] * b[0+j*n];
    }
    return x;
  }
//
//  Set up RHS.
//
  rhs = new double[(2*n+1)*nb];

  for ( j = 0; j < nb; j++ )
  {
    rhs[0+j*(2*n+1)] = 0.0;
    for ( i = 1; i <= n; i++ )
    {
      rhs[i+j*(2*n+1)] = b[i-1+j*n];
    }
    for ( i = n + 1; i <= 2 * n; i++ )
    {
      rhs[i+j*(2*n+1)] = 0.0;
    }
  }

  il = n;
  ndiv = 1;
  ipntp = 0;

  while ( 1 < il )
  {
    ipnt = ipntp;
    ipntp = ipntp + il;
    il = il / 2;
    ndiv = ndiv * 2;

    for ( j = 0; j < nb; j++ )
    {
      ihaf = ipntp;
      for ( iful = ipnt + 2; iful <= ipntp; iful = iful + 2 )
      {
        ihaf = ihaf + 1;
        rhs[ihaf+j*(2*n+1)] = rhs[iful+j*(2*n+1)] 
          - a_cr[2+(iful-1)*3] * rhs[iful-1+j*(2*n+1)]
          - a_cr[0+iful*3]     * rhs[iful+1+j*(2*n+1)];
      }
    }
  }

  for ( j = 0; j < nb; j++ )
  {
    rhs[ihaf+j*(2*n+1)] = rhs[ihaf+j*(2*n+1)] * a_cr[1+ihaf*3];
  }

  ipnt = ipntp;

  while ( 0 < ipnt )
  {
    ipntp = ipnt;
    ndiv = ndiv / 2;
    il = n / ndiv;
    ipnt = ipnt - il;

    for ( j = 0; j < nb; j++ )
    {
      ihaf = ipntp;
      for ( ifulm = ipnt + 1; ifulm <= ipntp; ifulm = ifulm + 2 )
      {
        iful = ifulm + 1;
        ihaf = ihaf + 1;
        rhs[iful+j*(2*n+1)] = rhs[ihaf+j*(2*n+1)];
        rhs[ifulm+j*(2*n+1)] = a_cr[1+ifulm*3] * ( 
                                  rhs[ifulm+j*(2*n+1)] 
          - a_cr[2+(ifulm-1)*3] * rhs[ifulm-1+j*(2*n+1)] 
          - a_cr[0+ifulm*3]     * rhs[iful+j*(2*n+1)] );
      }
    }
  }

  x = new double[n*nb];

  for ( j = 0; j < nb; j++ )
  {
    for ( i = 0; i < n; i++ )
    {
      x[i+j*n] = rhs[i+1+j*(2*n+1)];
    }
  }

  delete [] rhs;

  return x;
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

  a = r8ge_zeros_new ( 3, n );

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

void r83_gs_sl ( int n, double a[], double b[], double x[], int it_max )

//****************************************************************************80
//
//  Purpose:
//
//    R83_GS_SL solves an R83 system using Gauss-Seidel iteration.
//
//  Discussion:
//
//    The R83 storage format is used for a tridiagonal matrix.
//    The superdiagonal is stored in entries (1,2:min(M+1,N)).
//    The diagonal in entries (2,1:min(M,N)).
//    The subdiagonal in (3,min(M-1,N)).
//    R8GE A(I,J) = R83 A[I-J+1+J*3] (0 based indexing).
//
//    This routine simply applies a given number of steps of the
//    iteration to an input approximate solution.  On first call, you can
//    simply pass in the zero vector as an approximate solution.  If
//    the returned value is not acceptable, you may call again, using
//    it as the starting point for additional iterations.
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
//    Input, int N, the order of the matrix.
//    N must be at least 2.
//
//    Input, double A[3*N], the R83 matrix.
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
  for ( i = 0; i < n; i++ )
  {
    if ( a[1+i*3] == 0.0 )
    {
      cerr << "\n";
      cerr << "R83_GS_SL - Fatal error!\n";
      cerr << "  Zero diagonal entry, index = " << i << "\n";
      exit ( 1 );
    }
  }

  for ( it_num = 1; it_num <= it_max; it_num++ )
  {
    x[0] =   ( b[0] - a[0+1*3] * x[1] ) / a[1+0*3];
    for ( i = 1; i < n - 1; i++ )
    {
      x[i] = ( b[i] - a[2+(i-1)*3] * x[i-1] - a[0+(i+1)*3] * x[i+1] ) / a[1+i*3];
    }
    x[n-1] = ( b[n-1] - a[2+(n-2)*3] * x[n-2]             ) / a[1+(n-1)*3];
  }
 
  return;
}
//****************************************************************************80

double *r83_indicator ( int m, int n )

//****************************************************************************80
//
//  Purpose:
//
//    R83_INDICATOR sets up an R83 indicator matrix.
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
//    Output, double R83_INDICATOR[3*N], the R83 indicator matrix.
//
{
  double *a;
  int fac;
  int i;
  int i_hi;
  int i_lo;
  int j;

  fac = i4_power ( 10, i4_log_10 ( n ) + 1 );

  a = r8ge_zeros_new ( 3, n );

  for ( j = 0; j < n; j++ )
  {
    i_lo = i4_max ( 0, j - 1 );
    i_hi = i4_min ( m - 1, j + 1 );
    for ( i = i_lo; i <= i_hi; i++ )
    {
      a[i-j+1+j*3] = ( double ) ( fac * ( i + 1 ) + j + 1 );
    }
  }

  return a;
}
//****************************************************************************80

void r83_jac_sl ( int n, double a[], double b[], double x[], int it_max )

//****************************************************************************80
//
//  Purpose:
//
//    R83_JAC_SL solves an R83 system using Jacobi iteration.
//
//  Discussion:
//
//    The R83 storage format is used for a tridiagonal matrix.
//    The superdiagonal is stored in entries (1,2:min(M+1,N)).
//    The diagonal in entries (2,1:min(M,N)).
//    The subdiagonal in (3,min(M-1,N)).
//    R8GE A(I,J) = R83 A[I-J+1+J*3] (0 based indexing).
//
//    This routine simply applies a given number of steps of the
//    iteration to an input approximate solution.  On first call, you can
//    simply pass in the zero vector as an approximate solution.  If
//    the returned value is not acceptable, you may call again, using
//    it as the starting point for additional iterations.
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
//    Input, int N, the order of the matrix.
//    N must be at least 2.
//
//    Input, double A[3*N], the R83 matrix.
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
  for ( i = 0; i < n; i++ )
  {
    if ( a[1+i*3] == 0.0 )
    {
      cerr << "\n";
      cerr << "R83_JAC_SL - Fatal error!\n";
      cerr << "  Zero diagonal entry, index = " << i << "\n";
      exit ( 1 );
    }
  }

  for ( it_num = 1; it_num <= it_max; it_num++ )
  {
//
//  Solve A*x=b:
//
    xnew[0] = b[0] - a[0+1*3] * x[1];
    for ( i = 1; i < n - 1; i++ )
    {
      xnew[i] = b[i] - a[2+(i-1)*3] * x[i-1] - a[0+(i+1)*3] * x[i+1];
    }
    xnew[n-1] = b[n-1] - a[2+(n-2)*3] * x[n-2];
//
//  Divide by the diagonal term, and overwrite X.
//
    for ( i = 0; i < n; i++ )
    {
      x[i] = xnew[i] / a[1+i*3];
    }
  }

  delete [] xnew;

  return;
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

        if ( i - j + 1 < 0 || 2 < i - j + 1 )
        {
          cout << "              ";
        }
        else
        {
          cout << "  " << setw(12) << a[i-j+1+(j-1)*3];
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

  a = r8ge_zeros_new ( 3, n );

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

double *r83_res ( int m, int n, double a[], double x[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    R83_RES computes the residual R = B-A*X for R83 matrices.
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
//  Parameters:
//
//    Input, int M, N, the order of the matrix.
//
//    Input, double A[3*N], the matrix.
//
//    Input, double X[N], the vector to be multiplied by A.
//
//    Input, double B[M], the desired result A * x.
//
//    Output, double R83_RES[M], the residual R = B - A * X.
//
{
  int i;
  double *r;

  r = r83_mv ( m, n, a, x );

  for ( i = 0; i < m; i++ )
  {
    r[i] = b[i] - r[i];
  }

  return r;
}
//****************************************************************************80

double *r83_to_r8ge ( int m, int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R83_TO_R8GE copies an R83 matrix to an R8GE matrix.
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
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    08 September 2015
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
//    Output, double R83_TO_R8GE[M*N], the R8GE matrix.
//
{
  double *b;
  int i;
  int i_hi;
  int i_lo;
  int j;

  b = r8ge_zeros_new ( m, n );

  for ( j = 0; j < n; j++ )
  {
    i_lo = i4_max ( 0, j - 1 );
    i_hi = i4_min ( m - 1, j + 1 );
    for ( i = i_lo; i <= i_hi; i++ )
    {
      b[i+j*m] = a[i-j+1+j*3];
    }
  }

  return b;
}
//****************************************************************************80

double *r83_zeros ( int m, int n )

//****************************************************************************80
//
//  Purpose:
//
//    R83_ZEROS zeros an R83 matrix.
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
//    Output, double R83_ZERO[3*N], the R83 matrix.
//
{
  double *a;

  a = r8ge_zeros_new ( 3, n );

  return a;
}
//****************************************************************************80

double *r83np_fs ( int n, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    R83NP_FS factors and solves an R83NP system.
//
//  Discussion:
//
//    The R83NP storage format is used for a tridiagonal matrix.
//    The subdiagonal   is in entries (0,1:N-1), 
//    the diagonal      is in entries (1,0:N-1), 
//    the superdiagonal is in entries (2,0:N-2). 
//
//    This algorithm requires that each diagonal entry be nonzero.
//    It does not use pivoting, and so can fail on systems that
//    are actually nonsingular.
//
//    The "R83NP" format used for this routine is different from the R83 format.
//    Here, we insist that the nonzero entries
//    for a given row now appear in the corresponding column of the
//    packed array.
//
//  Example:
//
//    Here is how an R83 matrix of order 5 would be stored:
//
//       *  A21 A32 A43 A54
//      A11 A22 A33 A44 A55
//      A12 A23 A34 A45  *
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 May 2009
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
//    Output, double R83NP_FS[N], the solution of the linear system.
//
{
  int i;
  double *x;
//
//  Check.
//
  for ( i = 0; i < n; i++ )
  {
    if ( a[1+i*3] == 0.0 )
    {
      cerr << "\n";
      cerr << "R83NP_FS - Fatal error!\n";
      cerr << "  A[1+" << i << "*3] = 0.\n";
      exit ( 1 );
    }
  }

  x = r8vec_zeros_new ( n );

  for ( i = 0; i < n; i++ )
  {
    x[i] = b[i];
  }

  for ( i = 1; i < n; i++ )
  {
    a[1+i*3] = a[1+i*3] - a[2+(i-1)*3] * a[0+i*3] / a[1+(i-1)*3];
    x[i]     = x[i]     - x[i-1]       * a[0+i*3] / a[1+(i-1)*3];
  }

  x[n-1] = x[n-1] / a[1+(n-1)*3];
  for ( i = n - 2; 0 <= i; i-- )
  {
    x[i] = ( x[i] - a[2+i*3] * x[i+1] ) / a[1+i*3];
  }

  return x;
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

double *r8ge_zeros_new ( int m, int n )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_ZEROS_NEW returns a new zeroed R8GE.
//
//  Discussion:
//
//    An R8GE is a doubly dimensioned array of R8 values, stored as a vector
//    in column-major order.
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
//  Parameters:
//
//    Input, int M, N, the number of rows and columns.
//
//    Output, double R8GE_ZEROS_NEW[M*N], the new zeroed matrix.
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
