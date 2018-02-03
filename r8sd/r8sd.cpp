# include <cmath>
# include <cstdlib>
# include <ctime>
# include <fstream>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8sd.hpp"

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

double r8_max ( double x, double y )

//****************************************************************************80
//
//  Purpose:
//
//    R8_MAX returns the maximum of two R8s.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    10 January 2002
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
  if ( y < x )
  {
    return x;
  } 
  else
  {
    return y;
  }
}
//****************************************************************************80

double r8_min ( double x, double y )

//****************************************************************************80
//
//  Purpose:
//
//    R8_MIN returns the minimum of two R8s.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 May 2003
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
  if ( y < x )
  {
    return y;
  } 
  else
  {
    return x;
  }
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

double *r8sd_cg ( int n, int ndiag, int offset[], double a[], double b[], 
  double x_init[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8SD_CG uses the conjugate gradient method on an R8SD linear system.
//
//  Discussion:
//
//    The R8SD format is used for symmetric matrices whose only nonzero entries
//    occur along a few diagonals, but for which these diagonals are not all
//    close enough to the main diagonal for band storage to be efficient.
//
//    In that case, we assign the main diagonal the offset value 0, and 
//    each successive superdiagonal gets an offset value 1 higher, until
//    the highest superdiagonal (the A(1,N) entry) is assigned the offset N-1.
//
//    Assuming there are NDIAG nonzero diagonals (ignoring subdiagonals!),
//    we then create an array B that has N rows and NDIAG columns, and simply
//    "collapse" the matrix A to the left:
//
//    For the conjugate gradient method to be applicable, the matrix A must 
//    be a positive definite symmetric matrix.
//
//    The method is designed to reach the solution to the linear system
//      A * x = b
//    after N computational steps.  However, roundoff may introduce
//    unacceptably large errors for some problems.  In such a case,
//    calling the routine a second time, using the current solution estimate
//    as the new starting guess, should result in improved results.
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
//    Input, int NDIAG, the number of diagonals that are stored.
//    NDIAG must be at least 1 and no more than N.
//
//    Input, int OFFSET[NDIAG], the offsets for the diagonal storage.
//
//    Input, double A[N*NDIAG], the matrix.
//
//    Input, double B[N], the right hand side vector.
//
//    Input, double X_INIT[N], an estimate for the solution, which may be 0.
//
//    Output, double R8SD_CG[N], the approximate solution vector.
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
  double *x;

  x = r8vec_zeros_new ( n );

  for ( i = 0; i < n; i++ )
  {
    x[i] = x_init[i];
  }
//
//  Initialize
//    AP = A * x,
//    R  = b - A * x,
//    P  = b - A * x.
//
  ap = r8sd_mv ( n, n, ndiag, offset, a, x );

  r = r8vec_zeros_new ( n );
  for ( i = 0; i < n; i++ )
  {
    r[i] = b[i] - ap[i];
  }

  p = r8vec_zeros_new ( n );
  for ( i = 0; i < n; i++ )
  {
    p[i] = b[i] - ap[i];
  }

  delete [] ap;
//
//  Do the N steps of the conjugate gradient method.
//
  for ( it = 1; it < n; it++ )
  {
//
//  Compute the matrix*vector product AP = A*P.
//
    ap = r8sd_mv ( n, n, ndiag, offset, a, p );
//
//  Compute the dot products
//    PAP = P*AP,
//    PR  = P*R
//  Set
//    ALPHA = PR / PAP.
//
    pap = r8vec_dot_product ( n, p, ap );

    if ( pap == 0.0 )
    {
      delete [] ap;
      break;
    }

    pr = r8vec_dot_product ( n, p, r );

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

    beta = -rap / pap;
//
//  Update the perturbation vector
//    P = R + BETA * P.
//
    for ( i = 0; i < n; i++ )
    {
      p[i] = r[i] + beta * p[i];
    }
    delete [] ap;
  }

  delete [] p;
  delete [] r;

  return x;
}
//****************************************************************************80

double *r8sd_dif2 ( int n, int ndiag, int offset[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8SD_DIF2 returns the DIF2 matrix in R8SD format.
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
//    A is persymmetric: A(I,J) = A(N+1-J,N+1-I.
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
//    17 July 2016
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
//    Input, int N, the order of the matrix.
//
//    Input, int NDIAG, the number of diagonals available for storage.
//
//    Input, int OFFSET[NDIAG], the indices of the diagonals.  It is
//    presumed that OFFSET[0] = 0 and OFFSET[1] = 1.
//
//    Output, double R8SD_DIF2[N*NDIAG], the matrix.
//
{
  double *a;
  int i;
  int jdiag;

  a = r8vec_zeros_new ( n * ndiag );

  for ( i = 0; i < n; i++ )
  {
    jdiag = 0;
    a[i+jdiag*n] = 2.0;
  }
  for ( i = 0; i < n - 1; i++ )
  {
    jdiag = 1;
    a[i+jdiag*n] = -1.0;
  }
 
  return a;
}
//****************************************************************************80

double *r8sd_indicator ( int n, int ndiag, int offset[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8SD_INDICATOR sets up an R8SD indicator matrix.
//
//  Discussion:
//
//    The R8SD storage format is used for symmetric matrices whose only nonzero entries
//    occur along a few diagonals, but for which these diagonals are not all
//    close enough to the main diagonal for band storage to be efficient.
//
//    In that case, we assign the main diagonal the offset value 0, and 
//    each successive superdiagonal gets an offset value 1 higher, until
//    the highest superdiagonal (the A(1,N) entry) is assigned the offset N-1.
//
//    Assuming there are NDIAG nonzero diagonals (ignoring subdiagonals!),
//    we then create an array B that has N rows and NDIAG columns, and simply
//    "collapse" the matrix A to the left.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    14 January 2004
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
//    Input, int NDIAG, the number of diagonals that are stored.
//    NDIAG must be at least 1 and no more than N.
//
//    Input, int OFFSET[NDIAG], the offsets for the diagonal storage.
//
//    Output, double R8SD_INDICATOR[N*NDIAG], the R8SD matrix.
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

double *r8sd_mv ( int m, int n, int ndiag, int offset[], double a[], 
  double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8SD_MV multiplies an R8SD matrix times a vector.
//
//  Discussion:
//
//    The R8SD storage format is used for symmetric matrices whose only nonzero entries
//    occur along a few diagonals, but for which these diagonals are not all
//    close enough to the main diagonal for band storage to be efficient.
//
//    In that case, we assign the main diagonal the offset value 0, and 
//    each successive superdiagonal gets an offset value 1 higher, until
//    the highest superdiagonal (the A(1,N) entry) is assigned the offset N-1.
//
//    Assuming there are NDIAG nonzero diagonals (ignoring subdiagonals!),
//    we then create an array B that has N rows and NDIAG columns, and simply
//    "collapse" the matrix A to the left.
//
//  Example:
//
//    The "offset" value is printed above each column.
//
//    Original matrix               New Matrix
//
//       0   1   2   3   4   5       0   1   3   5
//
//      11  12   0  14   0  16      11  12  14  16
//      21  22  23   0  25   0      22  23  25  --
//       0  32  33  34   0  36      33  34  36  --
//      41   0  43  44  45   0      44  45  --  --
//       0  52   0  54  55  56      55  56  --  --
//      61   0  63   0  65  66      66  --  --  --
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    16 February 2013
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns.
//
//    Input, int NDIAG, the number of diagonals that are stored.
//    NDIAG must be at least 1 and no more than N.
//
//    Input, int OFFSET[NDIAG], the offsets for the diagonal storage.
//
//    Input, double A[N*NDIAG], the matrix.
//
//    Input, double X[N], the vector to be multiplied by A.
//
//    Output, double R8SD_MV[N], the product A * x.
//
{
  double *b;
  int i;
  int j;
  int jdiag;

  b = r8vec_zeros_new ( m );

  for ( i = 0; i < n; i++ )
  {
    for ( jdiag = 0; jdiag < ndiag; jdiag++ )
    {
      j = i + offset[jdiag];
      if ( 0 <= j && j < n )
      {
        b[i] = b[i] + a[i+jdiag*n] * x[j];
        if ( offset[jdiag] != 0 )
        {
          b[j] = b[j] + a[i+jdiag*n] * x[i];
        }
      }
    }
  }

  return b;
}
//****************************************************************************80

void r8sd_print ( int n, int ndiag, int offset[], double a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8SD_PRINT prints an R8SD matrix.
//
//  Discussion:
//
//    The R8SD storage format is used for symmetric matrices whose only nonzero entries
//    occur along a few diagonals, but for which these diagonals are not all
//    close enough to the main diagonal for band storage to be efficient.
//
//    In that case, we assign the main diagonal the offset value 0, and 
//    each successive superdiagonal gets an offset value 1 higher, until
//    the highest superdiagonal (the A(1,N) entry) is assigned the offset N-1.
//
//    Assuming there are NDIAG nonzero diagonals (ignoring subdiagonals!),
//    we then create an array B that has N rows and NDIAG columns, and simply
//    "collapse" the matrix A to the left:
//
//  Example:
//
//    The "offset" value is printed above each column.
//
//    Original matrix               New Matrix
//
//       0   1   2   3   4   5       0   1   3   5
//
//      11  12   0  14   0  16      11  12  14  16
//      21  22  23   0  25   0      22  23  25  --
//       0  32  33  34   0  36      33  34  36  --
//      41   0  43  44  45   0      44  45  --  --
//       0  52   0  54  55  56      55  56  --  --
//      61   0  63   0  65  66      66  --  --  --
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
//    NDIAG must be at least 1, and no more than N.
//
//    Input, int OFFSET[NDIAG], the offsets for the diagonal storage.
//
//    Input, double A[N*NDIAG], the R8SD matrix.
//
//    Input, string TITLE, a title.
//
{
  r8sd_print_some ( n, ndiag, offset, a, 1, 1, n, n, title );

  return;
}
//****************************************************************************80

void r8sd_print_some ( int n, int ndiag, int offset[], double a[], int ilo, 
  int jlo, int ihi, int jhi, string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8SD_PRINT_SOME prints some of an R8SD matrix.
//
//  Discussion:
//
//    The R8SD storage format is used for symmetric matrices whose only nonzero entries
//    occur along a few diagonals, but for which these diagonals are not all
//    close enough to the main diagonal for band storage to be efficient.
//
//    In that case, we assign the main diagonal the offset value 0, and 
//    each successive superdiagonal gets an offset value 1 higher, until
//    the highest superdiagonal (the A(1,N) entry) is assigned the offset N-1.
//
//    Assuming there are NDIAG nonzero diagonals (ignoring subdiagonals!),
//    we then create an array B that has N rows and NDIAG columns, and simply
//    "collapse" the matrix A to the left:
//
//  Example:
//
//    The "offset" value is printed above each column.
//
//    Original matrix               New Matrix
//
//       0   1   2   3   4   5       0   1   3   5
//
//      11  12   0  14   0  16      11  12  14  16
//      21  22  23   0  25   0      22  23  25  --
//       0  32  33  34   0  36      33  34  36  --
//      41   0  43  44  45   0      44  45  --  --
//       0  52   0  54  55  56      55  56  --  --
//      61   0  63   0  65  66      66  --  --  --
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
//    NDIAG must be at least 1, and no more than N.
//
//    Input, int OFFSET[NDIAG], the offsets for the diagonal storage.
//
//    Input, double A[N*NDIAG], the R8SD matrix.
//
//    Input, int ILO, JLO, IHI, JHI, designate the first row and
//    column, and the last row and column to be printed.
//
//    Input, string TITLE, a title.
//
{
# define INCX 5

  double aij;
  int i;
  int i2hi;
  int i2lo;
  int j;
  int j2hi;
  int j2lo;
  int jdiag;

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
    i2lo = i4_max ( ilo, 1 );
    i2hi = i4_min ( ihi, n );

    for ( i = i2lo; i <= i2hi; i++ )
    {
    cout << setw(4) << i << "  ";
//
//  Print out (up to) 5 entries in row I, that lie in the current strip.
//
      for ( j = j2lo; j <= j2hi; j++ )
      {
        aij = 0.0;

        for ( jdiag = 0; jdiag < ndiag; jdiag++ )
        {
          if ( j - i == offset[jdiag] )
          {
            aij = a[i-1+jdiag*n];
          }
          else if ( j - i == - offset[jdiag] )
          {
            aij = a[j-1+jdiag*n];
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

double *r8sd_random ( int n, int ndiag, int offset[], int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    R8SD_RANDOM randomizes an R8SD matrix.
//
//  Discussion:
//
//    The R8SD storage format is used for symmetric matrices whose only nonzero entries
//    occur along a few diagonals, but for which these diagonals are not all
//    close enough to the main diagonal for band storage to be efficient.
//
//    In that case, we assign the main diagonal the offset value 0, and 
//    each successive superdiagonal gets an offset value 1 higher, until
//    the highest superdiagonal (the A(1,N) entry) is assigned the offset N-1.
//
//    Assuming there are NDIAG nonzero diagonals (ignoring subdiagonals!),
//    we then create an array B that has N rows and NDIAG columns, and simply
//    "collapse" the matrix A to the left.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    14 January 2004
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
//    Input, int NDIAG, the number of diagonals that are stored.
//    NDIAG must be at least 1 and no more than N.
//
//    Input, int OFFSET[NDIAG], the offsets for the diagonal storage.
//
//    Input/output, int &SEED, a seed for the random number generator.
//
//    Output, double R8SD_RANDOM[N*NDIAG], the R8SD matrix.
//
{
  double *a;
  int i;
  int j;
  int jj;

  a = r8vec_zeros_new ( n * ndiag );

  for ( i = 1; i <= n; i++ )
  {
    for ( j = 1; j <= ndiag; j++ )
    {
      jj = i + offset[j-1];
      if ( 1 <= jj && jj <= n )
      {
        a[i-1+(j-1)*n] = r8_uniform_01 ( seed );
      }
    }
  }

  return a;
}
//****************************************************************************80

double *r8sd_res ( int m, int n, int ndiag, int offset[], double a[], 
  double x[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8SD_RES computes the residual R = B-A*X for R8SD matrices.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 June 2014
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
//    Input, int NDIAG, the number of diagonals that are stored.
//    NDIAG must be at least 1 and no more than N.
//
//    Input, int OFFSET[NDIAG], the offsets for the diagonal storage.
//
//    Input, double A[N*NDIAG], the matrix.
//
//    Input, double X[N], the vector to be multiplied by A.
//
//    Input, double B[M], the desired result A * x.
//
//    Output, double R8SD_RES[M], the residual R = B - A * X.
//
{
  int i;
  double *r;

  r = r8sd_mv ( m, n, ndiag, offset, a, x );

  for ( i = 0; i < m; i++ )
  {
    r[i] = b[i] - r[i];
  }

  return r;
}
//****************************************************************************80

double *r8sd_to_r8ge ( int n, int ndiag, int offset[], double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8SD_TO_R8GE copies an R8SD matrix to an R8GE matrix.
//
//  Discussion:
//
//    The R8SD storage format is used for symmetric matrices whose only nonzero entries
//    occur along a few diagonals, but for which these diagonals are not all
//    close enough to the main diagonal for band storage to be efficient.
//
//    In that case, we assign the main diagonal the offset value 0, and 
//    each successive superdiagonal gets an offset value 1 higher, until
//    the highest superdiagonal (the A(1,N) entry) is assigned the offset N-1.
//
//    Assuming there are NDIAG nonzero diagonals (ignoring subdiagonals!),
//    we then create an array B that has N rows and NDIAG columns, and simply
//    "collapse" the matrix A to the left:
//
//  Example:
//
//    The "offset" value is printed above each column.
//
//    Original matrix               New Matrix
//
//       0   1   2   3   4   5       0   1   3   5
//
//      11  12   0  14   0  16      11  12  14  16
//      21  22  23   0  25   0      22  23  25  --
//       0  32  33  34   0  36      33  34  36  --
//      41   0  43  44  45   0      44  45  --  --
//       0  52   0  54  55  56      55  56  --  --
//      61   0  63   0  65  66      66  --  --  --
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    18 October 2003
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
//    Input, int NDIAG, the number of diagonals that are stored.
//    NDIAG must be at least 1 and no more than N.
//
//    Input, int OFFSET[NDIAG], the offsets for the diagonal storage.
//
//    Input, double A[N*NDIAG], the R8SD matrix.
//
//    Output, double R8SD_TO_R8GE[N*N], the R8GE matrix.
//
{
  double *b;
  int i;
  int j;
  int jj;

  b = r8vec_zeros_new ( n * n );

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < n; i++ )
    {
      b[i+j*n] = 0.0;
    }
  }

  for ( i = 0; i < n; i++ )
  {
    for ( j = 0; j < ndiag; j++ )
    {
      jj = i + offset[j];
      if ( 0 <= jj && jj <= n - 1 )
      {
        b[i+jj*n] = a[i+j*n];
        if ( i != jj )
        {
          b[jj+i*n] = a[i+j*n];
        }
      }
    }
  }

  return b;
}
//****************************************************************************80

double *r8sd_zeros ( int n, int ndiag, int offset[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8SD_ZEROS zeros an R8SD matrix.
//
//  Discussion:
//
//    The R8SD storage format is used for symmetric matrices whose only nonzero entries
//    occur along a few diagonals, but for which these diagonals are not all
//    close enough to the main diagonal for band storage to be efficient.
//
//    In that case, we assign the main diagonal the offset value 0, and 
//    each successive superdiagonal gets an offset value 1 higher, until
//    the highest superdiagonal (the A(1,N) entry) is assigned the offset N-1.
//
//    Assuming there are NDIAG nonzero diagonals (ignoring subdiagonals!),
//    we then create an array B that has N rows and NDIAG columns, and simply
//    "collapse" the matrix A to the left.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 July 2017
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
//    Input, int NDIAG, the number of diagonals that are stored.
//    NDIAG must be at least 1 and no more than N.
//
//    Input, int OFFSET[NDIAG], the offsets for the diagonal storage.
//
//    Output, double R8SD_ZERO[N*NDIAG], the R8SD matrix.
//
{
  double *a;

  a = r8vec_zeros_new ( n * ndiag );

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
