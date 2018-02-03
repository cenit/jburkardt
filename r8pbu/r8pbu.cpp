# include <cmath>
# include <cstdlib>
# include <ctime>
# include <fstream>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8pbu.hpp"

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

double r8ge_det ( int n, double a_lu[], int pivot[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_DET computes the determinant of a matrix factored by R8GE_FA or R8GE_TRF.
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
//    25 March 2004
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
//    Input, double A_LU[N*N], the LU factors from R8GE_FA or R8GE_TRF.
//
//    Input, int PIVOT[N], as computed by R8GE_FA or R8GE_TRF.
//
//    Output, double R8GE_DET, the determinant of the matrix.
//
{
  double det;
  int i;

  det = 1.0;

  for ( i = 1; i <= n; i++ )
  {
    det = det * a_lu[i-1+(i-1)*n];
    if ( pivot[i-1] != i )
    {
      det = -det;
    }
  }

  return det;
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

double *r8pbu_cg ( int n, int mu, double a[], double b[], double x_init[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8PBU_CG uses the conjugate gradient method on an R8PBU system.
//
//  Discussion:
//
//    The R8PBU storage format is used for a symmetric positive definite band matrix.
//
//    To save storage, only the diagonal and upper triangle of A is stored,
//    in a compact diagonal format that preserves columns.
//
//    The diagonal is stored in row MU+1 of the array.
//    The first superdiagonal in row MU, columns 2 through N.
//    The second superdiagonal in row MU-1, columns 3 through N.
//    The MU-th superdiagonal in row 1, columns MU+1 through N.
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
//    Input, int MU, the number of superdiagonals.
//    MU must be at least 0, and no more than N-1.
//
//    Input, double A[(MU+1)*N], the R8PBU matrix.
//
//    Input, double B[N], the right hand side vector.
//
//    Input, double X_INIT[N], an estimate for the solution.
//
//    Output, double R8PBU_CG[N], the approximate solution vector.
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

  x = new double[n];

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
  ap = r8pbu_mv ( n, n, mu, a, x );

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
    ap = r8pbu_mv ( n, n, mu, a, p );
//
//  Compute the dot products
//    PAP = P*AP,
//    PR  = P*R
//  Set
//    ALPHA = PR / PAP.
//
    pap = 0.0;
    for ( i = 0; i < n; i++ )
    {
      pap = pap + p[i] * ap[i];
    }

    if ( pap == 0.0 )
    {
      delete [] ap;
      break;
    }

    pr = 0.0;
    for ( i = 0; i < n; i++ )
    {
      pr = pr + p[i] * r[i];
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
    rap = 0.0;
    for ( i = 0; i < n; i++ )
    {
      rap = rap + r[i] * ap[i];
    }
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

  delete [] p;
  delete [] r;

  return x;
}
//****************************************************************************80

double r8pbu_det ( int n, int mu, double a_lu[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8PBU_DET computes the determinant of a matrix factored by R8PBU_FA.
//
//  Discussion:
//
//    The R8PBU storage format is used for a symmetric positive definite band matrix.
//
//    To save storage, only the diagonal and upper triangle of A is stored,
//    in a compact diagonal format that preserves columns.
//
//    The diagonal is stored in row MU+1 of the array.
//    The first superdiagonal in row MU, columns 2 through N.
//    The second superdiagonal in row MU-1, columns 3 through N.
//    The MU-th superdiagonal in row 1, columns MU+1 through N.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 October 2003
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
//    N must be positive.
//
//    Input, int MU, the number of superdiagonals of the matrix.
//    MU must be at least 0 and no more than N-1.
//
//    Input, double A_LU[(MU+1)*N], the LU factors from R8PBU_FA.
//
//    Output, double R8PBU_DET, the determinant of the matrix.
//
{
  double det;
  int j;

  det = 1.0;

  for ( j = 0; j < n; j++ )
  {
    det = det * a_lu[mu+j*(mu+1)] * a_lu[mu+j*(mu+1)];
  }

  return det;
}
//****************************************************************************80

double *r8pbu_dif2 ( int m, int n, int mu )

//****************************************************************************80
//
//  Purpose:
//
//    R8PBU_DIF2 returns the DIF2 matrix in R8PBU format.
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
//    05 June 2014
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
//    Input, int M, N, the number of rows and columns.
//
//    Input, int MU, the number of superdiagonals.
//    MU must be at least 0, and no more than N-1.
//
//    Output, double R8PBU_DIF2[(MU+1)*N], the matrix.
//
{
  double *a;
  int i;
  int j;

  a = new double[(mu+1)*n];

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < mu + 1; i++ )
    {
      a[i+j*(mu+1)] = 0.0;
    }
  }
  for ( j = 1; j < n; j++ )
  {
    i = mu - 1;
    a[i+j*(mu+1)] = -1.0;
  }
  for ( j = 0; j < n; j++ )
  {
    i = mu;
    a[i+j*(mu+1)] = 2.0;
  }
 
  return a;
}
//****************************************************************************80

double *r8pbu_fa ( int n, int mu, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8PBU_FA factors an R8PBU matrix.
//
//  Discussion:
//
//    The R8PBU storage format is used for a symmetric positive definite band matrix.
//
//    To save storage, only the diagonal and upper triangle of A is stored,
//    in a compact diagonal format that preserves columns.
//
//    The diagonal is stored in row MU+1 of the array.
//    The first superdiagonal in row MU, columns 2 through N.
//    The second superdiagonal in row MU-1, columns 3 through N.
//    The MU-th superdiagonal in row 1, columns MU+1 through N.
//
//    The matrix A must be a positive definite symmetric band matrix.
//
//    Once factored, linear systems A*x=b involving the matrix can be solved
//    by calling R8PBU_SL.  No pivoting is performed.  Pivoting is not necessary
//    for positive definite symmetric matrices.  If the matrix is not positive
//    definite, the algorithm may behave correctly, but it is also possible
//    that an illegal divide by zero will occur.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 February 2004
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
//    N must be positive.
//
//    Input, int MU, the number of superdiagonals of the matrix.
//    MU must be at least 0, and no more than N-1.
//
//    Input, double A[(MU+1)*N], the R8PBU matrix.
//
//    Output, double R8PBU_FA[(MU+1)*N], information describing a factored
//    form of the matrix.
//
{
  double *b;
  int i;
  int ik;
  int j;
  int jk;
  int k;
  int mm;
  double s;
  double t;

  b = new double[(mu+1)*n];

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < mu+1; i++ )
    {
      b[i+j*(mu+1)] = a[i+j*(mu+1)];
    }
  }

  for ( j = 1; j <= n; j++ )
  {

    ik = mu + 1;
    jk = i4_max ( j - mu, 1 );
    mm = i4_max ( mu + 2 - j, 1 );

    s = 0.0;

    for ( k = mm; k <= mu; k++ )
    {
      t = 0.0;
      for ( i = 0; i <= k-mm-1; i++ )
      {
        t = t + b[ik+i-1+(jk-1)*(mu+1)] * b[mm+i-1+(j-1)*(mu+1)];
      }
      b[k-1+(j-1)*(mu+1)] = ( b[k-1+(j-1)*(mu+1)] - t ) /
        b[mu+(jk-1)*(mu+1)];

      s = s + b[k-1+(j-1)*(mu+1)] * b[k-1+(j-1)*(mu+1)];
      ik = ik - 1;
      jk = jk + 1;
    }

    s = b[mu+(j-1)*(mu+1)] - s;

    if ( s <= 0.0 )
    {
      return NULL;
    }

    b[mu+(j-1)*(mu+1)] = sqrt ( s );
  }

  return b;
}
//****************************************************************************80

double *r8pbu_indicator ( int n, int mu )

//****************************************************************************80
//
//  Purpose:
//
//    R8PBU_INDICATOR sets up an R8PBU indicator matrix.
//
//  Discussion:
//
//    The R8PBU storage format is used for a symmetric positive definite band matrix.
//
//    To save storage, only the diagonal and upper triangle of A is stored,
//    in a compact diagonal format that preserves columns.
//
//    The diagonal is stored in row MU+1 of the array.
//    The first superdiagonal in row MU, columns 2 through N.
//    The second superdiagonal in row MU-1, columns 3 through N.
//    The MU-th superdiagonal in row 1, columns MU+1 through N.
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
//    Input, int N, the order of the matrix.
//    N must be positive.
//
//    Input, int MU, the number of superdiagonals in the matrix.
//    MU must be at least 0 and no more than N-1.
//
//    Output, double R8PBU_INDICATOR[(MU+1)*N], the R8PBU matrix.
//
{
  double *a;
  int fac;
  int i;
  int j;

  a = new double[(mu+1)*n];

  fac = i4_power ( 10, i4_log_10 ( n ) + 1 );
//
//  Zero out the "junk" entries.
//
  for ( j = 0; j < mu; j++ )
  {
    for ( i = 0; i <= mu - j; i++ )
    {
      a[i+j*(mu+1)] = 0.0;
    }
  }
//
//  Set the meaningful values.
//
  for ( i = 1; i <= n; i++ )
  {
    for ( j = i; j <= i4_min ( i + mu, n ); j++ )
    {
      a[mu+i-j+(j-1)*(mu+1)] = ( double ) ( fac * i + j );
    }
  }
  return a;
}
//****************************************************************************80

double *r8pbu_ml ( int n, int mu, double a_lu[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8PBU_ML multiplies a vector times a matrix that was factored by R8PBU_FA.
//
//  Discussion:
//
//    The R8PBU storage format is used for a symmetric positive definite band matrix.
//
//    To save storage, only the diagonal and upper triangle of A is stored,
//    in a compact diagonal format that preserves columns.
//
//    The diagonal is stored in row MU+1 of the array.
//    The first superdiagonal in row MU, columns 2 through N.
//    The second superdiagonal in row MU-1, columns 3 through N.
//    The MU-th superdiagonal in row 1, columns MU+1 through N.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    06 October 2003
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
//    Input, int MU, the number of superdiagonals of the matrix.
//    MU must be at least 0 and no more than N-1.
//
//    Input, double A_LU[(MU+1)*N], the LU factors from R8PBU_FA.
//
//    Input, double X[N], the vector to be multiplied by A.
//
//    Output, double R8PBU_ML[N], the product A * x.
//
{
  double *b;
  int i;
  int ilo;
  int j;
  int jhi;
  int k;

  b = new double[n];

  for ( i = 0; i < n; i++ )
  {
    b[i] = x[i];
  }
//
//  Multiply U * X = Y.
//
  for ( k = 1; k <= n; k++ )
  {
    ilo = i4_max ( 1, k - mu );
    for ( i = ilo; i <= k - 1; i++ )
    {
      b[i-1] = b[i-1] + a_lu[mu+i-k+(k-1)*(mu+1)] * b[k-1];
    }
    b[k-1] = a_lu[mu+(k-1)*(mu+1)] * b[k-1];
  }
//
//  Multiply L * Y = B.
//
  for ( k = n; 1 <= k; k-- )
  {
    jhi = i4_min ( k + mu, n );
    for ( j = k + 1; j <= jhi; j++ )
    {
      b[j-1] = b[j-1] + a_lu[mu+k-j+(j-1)*(mu+1)] * b[k-1];
    }

    b[k-1] = a_lu[mu+(k-1)*(mu+1)] * b[k-1];
  }

  return b;
}
//****************************************************************************80

double *r8pbu_mv ( int m, int n, int mu, double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8PBU_MV multiplies an R8PBU matrix times a vector.
//
//  Discussion:
//
//    The R8PBU storage format is used for a symmetric positive definite band matrix.
//
//    To save storage, only the diagonal and upper triangle of A is stored,
//    in a compact diagonal format that preserves columns.
//
//    The diagonal is stored in row MU+1 of the array.
//    The first superdiagonal in row MU, columns 2 through N.
//    The second superdiagonal in row MU-1, columns 3 through N.
//    The MU-th superdiagonal in row 1, columns MU+1 through N.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    15 February 2013
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns.
//
//    Input, int MU, the number of superdiagonals in the matrix.
//    MU must be at least 0 and no more than N-1.
//
//    Input, double A[(MU+1)*N], the matrix.
//
//    Input, double X[N], the vector to be multiplied by A.
//
//    Output, double R8PBU_MV[M], the result vector A * x.
//
{
  double *b;
  int i;
  int ieqn;
  int j;

  b = new double[m];
//
//  Multiply X by the diagonal of the matrix.
//
  for ( j = 0; j < n; j++ )
  {
    b[j] = a[mu+j*(mu+1)] * x[j];
  }
//
//  Multiply X by the superdiagonals of the matrix.
//
  for ( i = mu; 1 <= i; i-- )
  {
    for ( j = mu+2-i; j <= n; j++ )
    {
      ieqn = i + j - mu - 1;
      b[ieqn-1] = b[ieqn-1] + a[i-1+(j-1)*(mu+1)] * x[j-1];
      b[j-1] = b[j-1] + a[i-1+(j-1)*(mu+1)] * x[ieqn-1];
    }
  }

  return b;
}
//****************************************************************************80

void r8pbu_print ( int n, int mu, double a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8PBU_PRINT prints an R8PBU matrix.
//
//  Discussion:
//
//    The R8PBU storage format is used for a symmetric positive definite band matrix.
//
//    To save storage, only the diagonal and upper triangle of A is stored,
//    in a compact diagonal format that preserves columns.
//
//    The diagonal is stored in row MU+1 of the array.
//    The first superdiagonal in row MU, columns 2 through N.
//    The second superdiagonal in row MU-1, columns 3 through N.
//    The MU-th superdiagonal in row 1, columns MU+1 through N.
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
//    Input, int MU, the upper (and lower) bandwidth.
//    MU must be nonnegative, and no greater than N-1.
//
//    Input, double A[(MU+1)*N], the R8PBU matrix.
//
//    Input, string TITLE, a title.
//
{
  r8pbu_print_some ( n, mu, a, 1, 1, n, n, title );

  return;
}
//****************************************************************************80

void r8pbu_print_some ( int n, int mu, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8PBU_PRINT_SOME prints some of an R8PBU matrix.
//
//  Discussion:
//
//    The R8PBU storage format is used for a symmetric positive definite band matrix.
//
//    To save storage, only the diagonal and upper triangle of A is stored,
//    in a compact diagonal format that preserves columns.
//
//    The diagonal is stored in row MU+1 of the array.
//    The first superdiagonal in row MU, columns 2 through N.
//    The second superdiagonal in row MU-1, columns 3 through N.
//    The MU-th superdiagonal in row 1, columns MU+1 through N.
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
//    Input, int MU, the upper (and lower) bandwidth.
//    MU must be nonnegative, and no greater than N-1.
//
//    Input, double A[(MU+1)*N], the R8PBU matrix.
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
    i2lo = i4_max ( i2lo, j2lo - mu );
    i2hi = i4_min ( ihi, n );
    i2hi = i4_min ( i2hi, j2hi + mu );

    for ( i = i2lo; i <= i2hi; i++ )
    {
      cout << setw(4) << i << "  ";
//
//  Print out (up to) 5 entries in row I, that lie in the current strip.
//
      for ( j = j2lo; j <= j2hi; j++ )
      {
        if ( mu < i-j || mu < j-i ) 
        {
          cout << "              ";
        }
        else if ( i <= j && j <= i + mu )
        {
          cout << setw(12) << a[mu+i-j+(j-1)*(mu+1)] << "  ";
        }
        else if ( i - mu <= j && j <= i )
        {
          cout << setw(12) << a[mu+j-i+(i-1)*(mu+1)] << "  ";
        }
      }
      cout << "\n";
    }
  }

  return;
# undef INCX
}
//****************************************************************************80

double *r8pbu_random ( int n, int mu, int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    R8PBU_RANDOM randomizes an R8PBU matrix.
//
//  Discussion:
//
//    The R8PBU storage format is used for a symmetric positive definite band matrix.
//
//    To save storage, only the diagonal and upper triangle of A is stored,
//    in a compact diagonal format that preserves columns.
//
//    The diagonal is stored in row MU+1 of the array.
//    The first superdiagonal in row MU, columns 2 through N.
//    The second superdiagonal in row MU-1, columns 3 through N.
//    The MU-th superdiagonal in row 1, columns MU+1 through N.
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
//    15 January 2004
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
//    Input, int MU, the number of superdiagonals in the matrix.
//    MU must be at least 0 and no more than N-1.
//
//    Input/output, int &SEED, a seed for the random number generator.
//
//    Output, double R8PBU_RANDOM[(MU+1)*N], the R8PBU matrix.
//
{
  double *a;
  int i;
  int j;
  int jhi;
  int jlo;
  double r;
  double sum2;

  a = new double[(mu+1)*n];
//
//  Zero out the "junk" entries.
//
  for ( j = 0; j < mu; j++ )
  {
    for ( i = 0; i <= mu - j; i++ )
    {
      a[i+j*(mu+1)] = 0.0;
    }
  }
//
//  Set the off diagonal values.
//
  for ( i = 0; i < n; i++ )
  {
    for ( j = i + 1; j <= i4_min ( i + mu, n - 1 ); j++ )
    {
      a[mu+i-j+j*(mu+1)] = r8_uniform_01 ( seed );
    }
  }
//
//  Set the diagonal values.
//
  for ( i = 1; i <= n; i++ )
  {
    sum2 = 0.0;

    jlo = i4_max ( 1, i - mu );
    for ( j = jlo; j <= i-1; j++ )
    {
      sum2 = sum2 + fabs ( a[(mu+j-i)+(i-1)*(mu+1)] );
    }

    jhi = i4_min ( i + mu, n );
    for ( j = i+1; j <= jhi; j++ )
    {
      sum2 = sum2 + fabs ( a[mu+i-j+(j-1)*(mu+1)] );
    }

    r = r8_uniform_01 ( seed );

    a[mu+(i-1)*(mu+1)] = ( 1.0 + r ) * ( sum2 + 0.01 );

  }

  return a;
}
//****************************************************************************80

double *r8pbu_res ( int m, int n, int mu, double a[], double x[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8PBU_RES computes the residual R = B-A*X for R8PBU matrices.
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
//    Input, int MU, the number of superdiagonals in the matrix.
//    MU must be at least 0 and no more than N-1.
//
//    Input, double A[(MU+1)*N], the matrix.
//
//    Input, double X[N], the vector to be multiplied by A.
//
//    Input, double B[M], the desired result A * x.
//
//    Output, double R8PBU_RES[M], the residual R = B - A * X.
//
{
  int i;
  double *r;

  r = r8pbu_mv ( m, n, mu, a, x );
  for ( i = 0; i < m; i++ )
  {
    r[i] = b[i] - r[i];
  }

  return r;
}
//****************************************************************************80

double *r8pbu_sl ( int n, int mu, double a_lu[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8PBU_SL solves an R8PBU system factored by R8PBU_FA.
//
//  Discussion:
//
//    The R8PBU storage format is used for a symmetric positive definite band matrix.
//
//    To save storage, only the diagonal and upper triangle of A is stored,
//    in a compact diagonal format that preserves columns.
//
//    The diagonal is stored in row MU+1 of the array.
//    The first superdiagonal in row MU, columns 2 through N.
//    The second superdiagonal in row MU-1, columns 3 through N.
//    The MU-th superdiagonal in row 1, columns MU+1 through N.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    04 June 2016
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
//    N must be positive.
//
//    Input, int MU, the number of superdiagonals of the matrix.
//    MU must be at least 0 and no more than N-1.
//
//    Input, double A_LU[(MU+1)*N], the LU factors from R8PBU_FA.
//
//    Input, double B[N], the right hand side of the linear system.
//
//    Output, double R8PBU_SL[N], the solution vector.
//
{
  int i;
  int ilo;
  int k;
  double t;
  double *x;

  x = new double[n];

  for ( k = 0; k < n; k++ )
  {
    x[k] = b[k];
  }
//
//  Solve L * Y = B.
//
  for ( k = 1; k <= n; k++ )
  {
    ilo = i4_max ( 1, k - mu );
    t = 0.0;
    for ( i = ilo; i <= k - 1; i++ )
    {
      t = t + x[i-1] * a_lu[mu+i-k+(k-1)*(mu+1)];
    }
    x[k-1] = ( x[k-1] - t ) / a_lu[mu+(k-1)*(mu+1)];
  }
//
//  Solve U * X = Y.
//
  for ( k = n; 1 <= k; k-- )
  {
    x[k-1] = x[k-1] / a_lu[mu+(k-1)*(mu+1)];

    ilo = i4_max ( 1, k - mu );
    for ( i = ilo; i <= k - 1; i++ )
    {
      x[i-1] = x[i-1] - x[k-1] * a_lu[mu+i-k+(k-1)*(mu+1)];
    }
  }

  return x;
}
//****************************************************************************80

double *r8pbu_sor ( int n, int mu, double a[], double b[], double eps, int itchk, 
  int itmax, double omega, double x_init[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8PBU_SOR uses SOR iteration to solve an R8PBU linear system.
//
//  Discussion:
//
//    The R8PBU storage format is used for a symmetric positive definite band matrix.
//
//    To save storage, only the diagonal and upper triangle of A is stored,
//    in a compact diagonal format that preserves columns.
//
//    The diagonal is stored in row MU+1 of the array.
//    The first superdiagonal in row MU, columns 2 through N.
//    The second superdiagonal in row MU-1, columns 3 through N.
//    The MU-th superdiagonal in row 1, columns MU+1 through N.
//
//    The matrix A must be a positive definite symmetric band matrix.
//
//    A relaxation factor OMEGA may be used.
//
//    The iteration will proceed until a convergence test is met,
//    or the iteration limit is reached.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    10 October 2003
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
//    Input, int MU, the number of superdiagonals in the matrix.
//    MU must be at least 0, and no more than N-1.
//
//    Input, double A[(MU+1)*N], the R8PBU matrix.
//
//    Input, double B[N], the right hand side of the system.
//
//    Input, double EPS, convergence tolerance for the system.  The vector
//    b - A * x is computed every ITCHK iterations, and if the maximum
//    entry of this vector is of norm less than EPS, the program
//    will return.
//
//    Input, int ITCHK, the interval between convergence checks.  ITCHK steps
//    will be taken before any check is made on whether the iteration
//    has converged.  ITCHK should be at least 1 and no greater
//    than ITMAX.
//
//    Input, int ITMAX, the maximum number of iterations allowed.  The
//    program will return to the user if this many iterations are taken
//    without convergence.
//
//    Input, double OMEGA, the relaxation factor.  OMEGA must be strictly between
//    0 and 2.  Use OMEGA = 1 for no relaxation, classical Jacobi iteration.
//
//    Input, double X_INIT[N], a starting vector for the iteration.
//
//    Output, double R8PBU_SOR[N], the approximation to the solution.
//
{
  double err;
  int i;
  int it;
  int itknt;
  double *x;
  double *xtemp;

  if ( itchk <= 0 || itmax < itchk )
  {
    cerr << "\n";
    cerr << "R8PBU_SOR - Fatal error!\n";
    cerr << "  Illegal ITCHK = " << itchk << "\n";
    exit ( 1 );
  }

  if ( itmax <= 0 )
  {
    cerr << "\n";
    cerr << "R8PBU_SOR - Fatal error!\n";
    cerr << "  Nonpositive ITMAX = " << itmax << "\n";
    exit ( 1 );
  }

  if ( omega <= 0.0 || 2.0 <= omega )
  {
    cerr << "\n";
    cerr << "R8PBU_SOR - Fatal error!\n";
    cerr << "  Illegal value of OMEGA = " << omega << "\n";
    exit ( 1 );
  }

  itknt = 0;

  x = new double[n];
  for ( i = 0; i < n; i++ )
  {
    x[i] = x_init[i];
  }
//
//  Take ITCHK steps of the iteration before doing a convergence check.
//
  while ( itknt <= itmax )
  {
    for ( it = 1; it <= itchk; it++ )
    {
//
//  Compute XTEMP(I) = B(I) + A(I,I) * X(I) - SUM ( J=1 to N ) A(I,J) * X(J).
//
      xtemp = r8pbu_mv ( n, n, mu, a, x );

      for ( i = 0; i < n; i++ )
      {
        xtemp[i] = x[i] + ( b[i] - xtemp[i] ) / a[mu+i*(mu+1)];
      }
//
//  Compute the next iterate as a weighted combination of the
//  old iterate and the just computed standard Jacobi iterate.
//
      if ( omega != 1.0 )
      {
        for ( i = 0; i < n; i++ )
        {
          xtemp[i] = ( 1.0 - omega ) * x[i] + omega * xtemp[i];
        }
      }
//
//  Copy the new result into the old result vector.
//
      for ( i = 0; i < n; i++ )
      {
        x[i] = xtemp[i];
      }
    }
    delete [] xtemp;
//
//  Compute the maximum residual, the greatest entry in the vector
//  RESID(I) = B(I) - A(I,J) * X(J).
//
    xtemp = r8pbu_mv ( n, n, mu, a, x );

    err = 0.0;
    for ( i = 0; i < n; i++ )
    {
      err = r8_max ( err, fabs ( b[i] - xtemp[i] ) );
    }
    delete [] xtemp;
//
//  Test to see if we can quit because of convergence,
//
    if ( err <= eps )
    {
      return x;
    }

  }

  cout << "\n";
  cout << "R8PBU_SOR - Warning!\n";
  cout << "  The iteration did not converge.\n";

  return x;
}
//****************************************************************************80

double *r8pbu_to_r8ge ( int n, int mu, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8PBU_TO_R8GE copies an R8PBU matrix to an R8GE matrix.
//
//  Discussion:
//
//    The R8PBU storage format is used for a symmetric positive definite band matrix.
//
//    To save storage, only the diagonal and upper triangle of A is stored,
//    in a compact diagonal format that preserves columns.
//
//    The diagonal is stored in row MU+1 of the array.
//    The first superdiagonal in row MU, columns 2 through N.
//    The second superdiagonal in row MU-1, columns 3 through N.
//    The MU-th superdiagonal in row 1, columns MU+1 through N.
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
//    Input, int MU, the upper bandwidth of A1.
//    MU must be nonnegative, and no greater than N-1.
//
//    Input, double A[(MU+1)*N], the R8PBU matrix.
//
//    Output, double R8PBU_TO_R8GE[N*N], the R8GE matrix.
//
{
  double *b;
  int i;
  int j;

  b = new double[n*n];

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < n; i++ )
    {
      b[i+j*n] = 0.0;
    }
  }

  for ( i = 0; i < n; i++ )
  {
    for ( j = 0; j < n; j++ )
    {
      if ( i <= j && j <= i+mu )
      {
        b[i+j*n] = a[mu+i-j+j*(mu+1)];
      }
      else if ( i-mu <= j && j < i )
      {
        b[i+j*n] = a[mu+j-i+i*(mu+1)];
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

double *r8pbu_zeros ( int n, int mu )

//****************************************************************************80
//
//  Purpose:
//
//    R8PBU_ZEROS zeros an R8PBU matrix.
//
//  Discussion:
//
//    The R8PBU storage format is used for a symmetric positive definite band matrix.
//
//    To save storage, only the diagonal and upper triangle of A is stored,
//    in a compact diagonal format that preserves columns.
//
//    The diagonal is stored in row MU+1 of the array.
//    The first superdiagonal in row MU, columns 2 through N.
//    The second superdiagonal in row MU-1, columns 3 through N.
//    The MU-th superdiagonal in row 1, columns MU+1 through N.
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
//    Input, int MU, the number of superdiagonals in the matrix.
//    MU must be at least 0 and no more than N-1.
//
//    Output, double R8PBU_ZERO[(MU+1)*N], the R8PBU matrix.
//
{
  double *a;
  int i;
  int j;

  a = new double[(mu+1)*n];

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < mu+1; i++ )
    {
      a[i+j*(mu+1)] = 0.0;
    }
  }

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
