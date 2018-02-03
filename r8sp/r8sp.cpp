# include <cmath>
# include <cstdlib>
# include <ctime>
# include <fstream>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8sp.hpp"

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

void r8ncf_print ( int m, int n, int nz_num, int rowcol[], 
  double a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8NCF_PRINT prints an R8NCF matrix.
//
//  Discussion:
//
//    The R8NCF storage format stores NZ_NUM, the number of nonzeros,
//    a real array containing the nonzero values, a 2 by NZ_NUM integer
//    array storing the row and column of each nonzero entry.
//
//    The R8NCF format is used by NSPCG.  NSPCG requires that the information
//    for the diagonal entries of the matrix must come first.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 August 2006
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns of the matrix.
//
//    Input, int NZ_NUM, the number of nonzero elements in the matrix.
//
//    Input, int ROWCOL[2*NZ_NUM], the row and column indices
//    of the nonzero elements.
//
//    Input, double A[NZ_NUM], the nonzero elements of the matrix.
//
//    Input, string TITLE, a title.
//
{
  r8ncf_print_some ( m, n, nz_num, rowcol, a, 1, 1, m, n, title );

  return;
}
//****************************************************************************80

void r8ncf_print_some ( int m, int n, int nz_num, int rowcol[], 
  double a[], int ilo, int jlo, int ihi, int jhi, string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8NCF_PRINT_SOME prints some of an R8NCF matrix.
//
//  Discussion:
//
//    The R8NCF storage format stores NZ_NUM, the number of nonzeros,
//    a real array containing the nonzero values, a 2 by NZ_NUM integer
//    array storing the row and column of each nonzero entry.
//
//    The R8NCF format is used by NSPCG.  NSPCG requires that the information
//    for the diagonal entries of the matrix must come first.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 August 2006
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns of the matrix.
//
//    Input, int NZ_NUM, the number of nonzero elements in the matrix.
//
//    Input, int ROWCOL[2*NZ_NUM], the row and column indices
//    of the nonzero elements.
//
//    Input, double A[NZ_NUM], the nonzero elements of the matrix.
//
//    Input, int ILO, JLO, IHI, JHI, the first row and
//    column, and the last row and column to be printed.
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
  bool nonzero;
  double temp[INCX];

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
    i2hi = i4_min ( ihi, m );

    for ( i = i2lo; i <= i2hi; i++ )
    {
//
//  Print out (up to) 5 entries in row I, that lie in the current strip.
//
      nonzero = false;
      for ( j2 = 1; j2 <= INCX; j2++ )
      {
        temp[j2-1] = 0.0;
      }

      for ( k = 1; k <= nz_num; k++ )
      {
        if ( i == rowcol[0+(k-1)*2] && 
          j2lo <= rowcol[1+(k-1)*2] && 
          rowcol[1+(k-1)*2] <= j2hi )
        {
          j2 = rowcol[1+(k-1)*2] - j2lo + 1;

          if ( a[k-1] == 0.0 )
          {
            continue;
          }

          nonzero = true;
          temp[j2-1] = a[k-1];
        }
      }

      if ( nonzero )
      {
        cout << setw(6) << i;
        for ( j2 = 1; j2 <= inc; j2++ )
        {
          cout << setw(12) << temp[j2-1] << "  ";
        }
        cout << "\n";
      }
    }
  }

  cout << "\n";

  return;
# undef INCX
}
//****************************************************************************80

void r8sp_cg ( int n, int nz_num, int row[], int col[], double a[], 
  double b[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8SP_CG uses the conjugate gradient method on an R8SP linear system.
//
//  Discussion:
//
//    The R8SP storage format stores the row, column and value of each nonzero
//
//    It is possible that a pair of indices (I,J) may occur more than
//    once.  Presumably, in this case, the intent is that the actual value
//    of A(I,J) is the sum of all such entries.  This is not a good thing
//    to do, but I seem to have come across this in MATLAB.
//
//    The R8SP format is used by CSPARSE ("sparse triplet"), SLAP
//    (nonsymmetric case), by MATLAB, and by SPARSEKIT ("COO" format).
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
//    05 June 2014
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
//    Input, int NZ_NUM, the number of nonzero elements in the matrix.
//
//    Input, int ROW[NZ_NUM], COL[NZ_NUM], the row and column indices
//    of the nonzero elements.
//
//    Input, double A[NZ_NUM], the nonzero elements of the matrix.
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
  ap = r8sp_mv ( n, n, nz_num, row, col, a, x );

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
//  Compute the matrix*vector product AP = A*P.
//
    delete [] ap;
    ap = r8sp_mv ( n, n, nz_num, row, col, a, p );
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
  }

  delete [] p;
  delete [] r;

  return;
}
//****************************************************************************80

bool r8sp_check ( int m, int n, int nz_num, int row[], int col[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8SP_CHECK checks that an R8SP matrix data structure is properly sorted.
//
//  Discussion:
//
//    This routine assumes that the data structure has been sorted,
//    so that the entries of ROW are ascending sorted, and that the
//    entries of COL are ascending sorted, within the group of entries
//    that have a common value of ROW.
//
//    The R8SP storage format stores the row, column and value of each nonzero
//    entry of a sparse matrix.
//
//    The R8SP format is used by CSPARSE ("sparse triplet"), SLAP
//    ("nonsymmetric SLAP triad"), by MATLAB, and by SPARSEKIT ("COO" format).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    13 July 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns of
//    the matrix.
//
//    Input, int NZ_NUM, the number of nonzero elements in
//    the matrix.
//
//    Input, int ROW[NZ_NUM], COL[NZ_NUM], the row and
//    column indices of the nonzero elements.
//
//    Output, bool R8SP_CHECK, is TRUE if the matrix is properly defined.
//
{
  bool check;
  int k;

  check = true;
//
//  Check 1 <= ROW(*) <= M.
//
  for ( k = 0; k < nz_num; k++ )
  {
    if ( row[k] < 0 || m <= row[k] )
    {
      check = false;
      return check;
    }
  }
//
//  Check 1 <= COL(*) <= N.
//
  for ( k = 0; k < nz_num; k++ )
  {
    if ( col[k] < 0 || n <= col[k] )
    {
      check = false;
      return check;
    }
  }
//
//  Check that ROW(K) <= ROW(K+1).
//
  for ( k = 0; k < nz_num - 1; k++ )
  {
    if ( row[k+1] < row[k] )
    {
      check = false;
      return check;
    }
  }
//
//  Check that, if ROW(K) == ROW(K+1), that COL(K) < COL(K+1).
//
  for ( k = 0; k < nz_num - 1; k++ )
  {
    if ( row[k] == row[k+1] )
    {
      if ( col[k+1] <= col[k] )
      {
        check = false;
        return check;
      }
    }
  }
  return check;
}
//****************************************************************************80

void r8sp_diagonal ( int m, int n, int nz_num, int row[], int col[], double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8SP_DIAGONAL reorders an R8SP matrix so diagonal entries are first.
//
//  Discussion:
//
//    The R8SP storage format corresponds to the SLAP Triad format.
//
//    The R8SP storage format stores the row, column and value of each nonzero
//    entry of a sparse matrix.  The entries may be given in any order.  No
//    check is made for the erroneous case in which a given matrix entry is
//    specified more than once.
//
//    This routine reorders the entries of A so that the first N entries
//    are exactly the diagonal entries of the matrix, in order.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    22 September 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the order of the matrix.
//
//    Input, int NZ_NUM, the number of nonzero elements in 
//    the matrix.
//
//    Input, int ROW[NZ_NUM], COL[NZ_NUM], the row and 
//    column indices of the nonzero elements.
//
//    Input/output, double A[NZ_NUM], the nonzero elements 
//    of the matrix.
//
{
  int found;
  int i;
  int j;
  int k;
  double t;

  found = 0;

  for ( k = 0; k < nz_num; k++ )
  {
    while ( row[k] == col[k] )
    {
      if ( row[k] == k )
      {
        found = found + 1;
        break;
      }

      i = row[k];

      j      = row[i];
      row[i] = row[k];
      row[k] = j;

      j      = col[i];
      col[i] = col[k];
      col[k] = j;

      t    = a[i];
      a[i] = a[k];
      a[k] = t;
 
      found = found + 1;

      if ( i4_min ( m, n ) <= found )
      {
        break;
      }
    }

    if ( i4_min ( m, n ) <= found )
    {
      break;
    }
  }

  if ( found < i4_min ( m, n ) )
  {
    cerr << "\n";
    cerr << "R8SP_DIAGONAL - Warning!\n";
    cerr << "  Number of diagonal entries expected: " << i4_min ( m, n ) << "\n";
    cerr << "  Number found was " << found << "\n";
  }

  return;
}
//****************************************************************************80

double *r8sp_dif2 ( int m, int n, int nz_num, int row[], int col[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8SP_DIF2 returns the DIF2 matrix in R8SP format.
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
//    21 September 2015
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
//    Input, int NZ_NUM, the number of nonzeros.
//
//    Input, int ROW[NZ_NUM], COL[NZ_NUM], space in which the rows and columns
//    of nonzero entries will be stored.
//
//    Output, double R8SP_DIF2[NZ_NUM], the matrix.
//
{
  double *a;
  int i;
  int j;
  int k;

  a = new double[nz_num];

  for ( k = 0; k < nz_num; k++ )
  {
    row[k] = 0;
    col[k] = 0;
    a[k] = 0.0;
  }

  k = 0;

  for ( i = 0; i < m; i++ )
  {
    j = i - 1;
    if ( 0 <= j && j < n )
    {
      row[k] = i;
      col[k] = j;
      a[k] = -1.0;
      k = k + 1;
    }

    j = i;
    if ( 0 <= j && j < n )
    {
      row[k] = i;
      col[k] = j;
      a[k] = 2.0;
      k = k + 1;
    }

    j = i + 1;
    if ( 0 <= j && j < n )
    {
      row[k] = i;
      col[k] = j;
      a[k] = -1.0;
      k = k + 1;
    }
  }

  return a;
}
//****************************************************************************80

int r8sp_ij_to_k ( int nz_num, int row[], int col[], int i, int j )

//****************************************************************************80
//
//  Purpose:
//
//    R8SP_IJ_TO_K seeks the compressed index of the (I,J) entry of A.
//
//  Discussion:
//
//    If A(I,J) is nonzero, then its value is stored in location K.
//
//    This routine searches the R8SP storage structure for the index K
//    corresponding to (I,J), returning -1 if no such entry was found.
//
//    This routine assumes that the data structure has been sorted,
//    so that the entries of ROW are ascending sorted, and that the
//    entries of COL are ascending sorted, within the group of entries
//    that have a common value of ROW.
//
//    The R8SP storage format stores the row, column and value of each nonzero
//    entry of a sparse matrix.
//
//    The R8SP format is used by CSPARSE ("sparse triplet"), SLAP
//    ("nonsymmetric SLAP triad"), by MATLAB, and by SPARSEKIT ("COO" format).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    11 July 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int NZ_NUM, the number of nonzero elements in
//    the matrix.
//
//    Input, int ROW[NZ_NUM], COL[NZ_NUM], the row and
//    column indices of the nonzero elements.
//
//    Input, int I, J, the row and column indices of the
//    matrix entry.
//
//    Output, int R8SP_IJ_TO_K, the R8SP index of the (I,J) entry.
//
{
  int hi;
  int k;
  int lo;
  int md;

  lo = 0;
  hi = nz_num - 1;

  for ( ; ; )
  {
    if ( hi < lo )
    {
      k = -1;
      break;
    }

    md = ( lo + hi ) / 2;

    if ( row[md] < i || ( row[md] == i && col[md] < j ) )
    {
      lo = md + 1;
    }
    else if ( i < row[md] || ( row[md] == i && j < col[md] ) )
    {
      hi = md - 1;
    }
    else
    {
      k = md;
      break;
    }
  }

  return k;
}
//****************************************************************************80

double *r8sp_indicator ( int m, int n, int nz_num, int row[], int col[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8SP_INDICATOR sets up an R8SP indicator matrix.
//
//  Discussion:
//
//    The R8SP storage format stores the row, column and value of each nonzero
//    entry of a sparse matrix.
//
//    It is possible that a pair of indices (I,J) may occur more than
//    once.  Presumably, in this case, the intent is that the actual value
//    of A(I,J) is the sum of all such entries.  This is not a good thing
//    to do, but I seem to have come across this in MATLAB.
//
//    The R8SP format is used by CSPARSE ("sparse triplet"), SLAP
//    (nonsymmetric case), by MATLAB, and by SPARSEKIT ("COO" format).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 September 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns of the matrix.
//
//    Input, int NZ_NUM, the number of nonzero elements in the matrix.
//
//    Input, int ROW[NZ_NUM], COL[NZ_NUM], the row and column indices
//    of the nonzero elements.
//
//    Output, double R8SP_INDICATOR[NZ_NUM], the nonzero elements of the matrix.
//
{
  double *a;
  int fac;
  int i;
  int j;
  int k;

  a = new double[nz_num];

  fac = i4_power ( 10, i4_log_10 ( n ) + 1 );

  for ( k = 0; k < nz_num; k++ )
  {
    i = row[k];
    j = col[k];
    a[k] = ( double ) ( fac * ( i + 1 ) + ( j + 1 ) );
  }

  return a;
}
//****************************************************************************80

void r8sp_jac_sl ( int n, int nz_num, int row[], int col[], double a[], 
  double b[], double x[], int it_max )

//****************************************************************************80
//
//  Purpose:
//
//    R8SP_JAC_SL solves an R8SP system using Jacobi iteration.
//
//  Discussion:
//
//    The R8SP storage format corresponds to the SLAP Triad format.
//
//    The R8SP storage format stores the row, column and value of each nonzero
//    entry of a sparse matrix.  The entries may be given in any order.  No
//    check is made for the erroneous case in which a given matrix entry is
//    specified more than once.
//
//    This routine REQUIRES that the matrix be square, that the matrix
//    have nonzero diagonal entries, and that the first N entries of
//    the array A be exactly the diagonal entries of the matrix, in order.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 September 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, int NZ_NUM, the number of nonzero elements in 
//    the matrix.
//
//    Input, int ROW[NZ_NUM], COL[NZ_NUM], the row and column 
//    indices of the nonzero elements.
//
//    Input, double A[NZ_NUM], the nonzero elements of the matrix.
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
  int j;
  int k;
  double *x_new;

  r8sp_diagonal ( n, n, nz_num, row, col, a );

  x_new = new double[n];

  for ( it_num = 1; it_num <= it_max; it_num++ )
  {
//
//  Initialize to right hand side.
//
    for ( j = 0; j < n; j++ )
    {
      x_new[j] = b[j];
    }
//
//  Subtract off-diagonal terms.
//
    for ( k = n; k < nz_num; k++ )
    {
      i = row[k];
      j = col[k];
      x_new[i] = x_new[i] - a[k] * x[j];
    }
//
//  Divide by diagonal terms and update.
//
    for ( j = 0; j < n; j++ )
    {
      x[j] = x_new[j] / a[j];
    }
  }

  delete [] x_new;

  return;
}
//****************************************************************************80

double *r8sp_mtv ( int m, int n, int nz_num, int row[], int col[], 
  double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8SP_MTV multiplies a vector times an R8SP matrix.
//
//  Discussion:
//
//    The R8SP storage format stores the row, column and value of each nonzero
//    entry of a sparse matrix.
//
//    It is possible that a pair of indices (I,J) may occur more than
//    once.  Presumably, in this case, the intent is that the actual value
//    of A(I,J) is the sum of all such entries.  This is not a good thing
//    to do, but I seem to have come across this in MATLAB.
//
//    The R8SP format is used by CSPARSE ("sparse triplet"), SLAP
//    (nonsymmetric case), by MATLAB, and by SPARSEKIT ("COO" format).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    12 October 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns of the matrix.
//
//    Input, int NZ_NUM, the number of nonzero elements in the matrix.
//
//    Input, int ROW[NZ_NUM], COL[NZ_NUM], the row and column indices
//    of the nonzero elements.
//
//    Input, double A[NZ_NUM], the nonzero elements of the matrix.
//
//    Input, double X[M], the vector to be multiplied by A.
//
//    Output, double B[N], the product vector A'*X.
//
{
  double *b;
  int i;
  int j;
  int k;

  b = r8vec_zeros_new ( n );

  for ( k = 0; k < nz_num; k++ )
  {
    i = row[k];
    j = col[k];
    b[j] = b[j] + a[k] * x[i];
  }

  return b;
}
//****************************************************************************80

double *r8sp_mv ( int m, int n, int nz_num, int row[], int col[], 
  double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8SP_MV multiplies an R8SP matrix times a vector.
//
//  Discussion:
//
//    The R8SP storage format stores the row, column and value of each nonzero
//
//    It is possible that a pair of indices (I,J) may occur more than
//    once.  Presumably, in this case, the intent is that the actual value
//    of A(I,J) is the sum of all such entries.  This is not a good thing
//    to do, but I seem to have come across this in MATLAB.
//
//    The R8SP format is used by CSPARSE ("sparse triplet"), SLAP
//    (nonsymmetric case), by MATLAB, and by SPARSEKIT ("COO" format).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 September 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns of the matrix.
//
//    Input, int NZ_NUM, the number of nonzero elements in the matrix.
//
//    Input, int ROW[NZ_NUM], COL[NZ_NUM], the row and column indices
//    of the nonzero elements.
//
//    Input, double A[NZ_NUM], the nonzero elements of the matrix.
//
//    Input, double X[N], the vector to be multiplied by A.
//
//    Output, double R8SP_MV[M], the product vector A*X.
//
{
  double *b;
  int i;
  int j;
  int k;

  b = r8vec_zeros_new ( m );

  for ( k = 0; k < nz_num; k++ )
  {
    i = row[k];
    j = col[k];
    b[i] = b[i] + a[k] * x[j];
  }

  return b;
}
//****************************************************************************80

void r8sp_print ( int m, int n, int nz_num, int row[], int col[], 
  double a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8SP_PRINT prints an R8SP matrix.
//
//  Discussion:
//
//    This version of R8SP_PRINT has been specifically modified to allow,
//    and correctly handle, the case in which a single matrix location
//    A(I,J) is referenced more than once by the sparse matrix structure.
//    In such cases, the routine prints out the sum of all the values.
//
//    The R8SP storage format stores the row, column and value of each nonzero
//    entry of a sparse matrix.
//
//    It is possible that a pair of indices (I,J) may occur more than
//    once.  Presumably, in this case, the intent is that the actual value
//    of A(I,J) is the sum of all such entries.  This is not a good thing
//    to do, but I seem to have come across this in MATLAB.
//
//    The R8SP format is used by CSPARSE ("sparse triplet"), SLAP
//    (nonsymmetric case), by MATLAB, and by SPARSEKIT ("COO" format).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 September 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns of the matrix.
//
//    Input, int NZ_NUM, the number of nonzero elements in the matrix.
//
//    Input, int ROW[NZ_NUM], COL[NZ_NUM], the row and column indices
//    of the nonzero elements.
//
//    Input, double A[NZ_NUM], the nonzero elements of the matrix.
//
//    Input, string TITLE, a title.
//
{
  r8sp_print_some ( m, n, nz_num, row, col, a, 0, 0, m - 1, n - 1, title );

  return;
}
//****************************************************************************80

void r8sp_print_some ( int m, int n, int nz_num, int row[], int col[], 
  double a[], int ilo, int jlo, int ihi, int jhi, string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8SP_PRINT_SOME prints some of an R8SP matrix.
//
//  Discussion:
//
//    This version of R8SP_PRINT_SOME has been specifically modified to allow,
//    and correctly handle, the case in which a single matrix location
//    A(I,J) is referenced more than once by the sparse matrix structure.
//    In such cases, the routine prints out the sum of all the values.
//
//    The R8SP storage format stores the row, column and value of each nonzero
//    entry of a sparse matrix.
//
//    It is possible that a pair of indices (I,J) may occur more than
//    once.  Presumably, in this case, the intent is that the actual value
//    of A(I,J) is the sum of all such entries.  This is not a good thing
//    to do, but I seem to have come across this in MATLAB.
//
//    The R8SP format is used by CSPARSE ("sparse triplet"), SLAP
//    (nonsymmetric case), by MATLAB, and by SPARSEKIT ("COO" format).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 September 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns of the matrix.
//
//    Input, int NZ_NUM, the number of nonzero elements in the matrix.
//
//    Input, int ROW[NZ_NUM], COL[NZ_NUM], the row and column indices
//    of the nonzero elements.
//
//    Input, double A[NZ_NUM], the nonzero elements of the matrix.
//
//    Input, int ILO, JLO, IHI, JHI, the first row and
//    column, and the last row and column to be printed.
//
//    Input, string TITLE, a title.
//
{
# define INCX 5

  double aij[INCX];
  int i;
  int i2hi;
  int i2lo;
  int inc;
  int j;
  int j2;
  int j2hi;
  int j2lo;
  int k;
  bool nonzero;

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
    i2lo = i4_max ( ilo, 0 );
    i2hi = i4_min ( ihi, m - 1 );

    for ( i = i2lo; i <= i2hi; i++ )
    {
//
//  Print out (up to) 5 entries in row I, that lie in the current strip.
//
      nonzero = false;
      for ( j2 = 0; j2 < INCX; j2++ )
      {
        aij[j2] = 0.0;
      }

      for ( k = 1; k <= nz_num; k++ )
      {
        if ( i == row[k-1] && j2lo <= col[k-1] && col[k-1] <= j2hi )
        {
          j2 = col[k-1] - j2lo;

          if ( a[k-1] == 0.0 )
          {
            continue;
          }

          nonzero = true;
          aij[j2] = aij[j2] + a[k-1];
        }
      }

      if ( nonzero )
      {
        cout << setw(6) << i;
        for ( j2 = 0; j2 < inc; j2++ )
        {
          cout << setw(12) << aij[j2] << "  ";
        }
        cout << "\n";
      }
    }
  }

  cout << "\n";

  return;
# undef INCX
}
//****************************************************************************80

double *r8sp_random ( int m, int n, int nz_num, int row[], int col[], 
  int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    R8SP_RANDOM sets a random R8SP matrix.
//
//  Discussion:
//
//    The R8SP storage format stores the row, column and value of each nonzero
//    entry of a sparse matrix.
//
//    It is possible that a pair of indices (I,J) may occur more than
//    once.  Presumably, in this case, the intent is that the actual value
//    of A(I,J) is the sum of all such entries.  This is not a good thing
//    to do, but I seem to have come across this in MATLAB.
//
//    The R8SP format is used by CSPARSE ("sparse triplet"), SLAP
//    (nonsymmetric case), by MATLAB, and by SPARSEKIT ("COO" format).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    21 January 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns of the matrix.
//
//    Input, int NZ_NUM, the number of nonzero elements in the matrix.
//
//    Input, int ROW[NZ_NUM], COL[NZ_NUM], the row and column indices
//    of the nonzero elements.
//
//    Input/output, int &SEED, a seed for the random number generator.
//
//    Output, double R8SP_RANDOM[NZ_NUM], the nonzero elements of the matrix.
//
{
  double *r;

  r = r8vec_uniform_01_new ( nz_num, seed );

  return r;
}
//****************************************************************************80

void r8sp_read ( string input_file, int m, int n, int nz_num, int row[], 
  int col[], double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8SP_READ reads an R8SP matrix from a file.
//
//  Discussion:
//
//    This routine needs the value of NZ_NUM, which can be determined
//    by a call to R8SP_READ_SIZE.
//
//    The R8SP storage format stores the row, column and value of each nonzero
//    entry of a sparse matrix.
//
//    It is possible that a pair of indices (I,J) may occur more than
//    once.  Presumably, in this case, the intent is that the actual value
//    of A(I,J) is the sum of all such entries.  This is not a good thing
//    to do, but I seem to have come across this in MATLAB.
//
//    The R8SP format is used by CSPARSE ("sparse triplet"), SLAP
//    (nonsymmetric case), by MATLAB, and by SPARSEKIT ("COO" format).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 August 2006
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, string INPUT_FILE, the name of the file to be read.
//
//    Unused, int M, N, the number of rows and columns of the matrix.
//
//    Input, int NZ_NUM, the number of nonzero elements in the matrix.
//
//    Output, int ROW[NZ_NUM], COL[NZ_NUM], the row and column indices
//    of the nonzero elements.
//
//    Output, double A[NZ_NUM], the nonzero elements of the matrix.
//
{
  ifstream input;
  int k;

  input.open ( input_file.c_str ( ) );

  if ( !input )
  {
    cerr << "\n";
    cerr << "R8SP_READ - Fatal error!\n";
    cerr << "  Could not open the input file: \"" << input_file << "\"\n";
    exit ( 1 );
  }

  for ( k = 0; k < nz_num; k++ )
  {
    input >> row[k] >> col[k] >> a[k];
  }

  input.close ( );

  return;
}
//****************************************************************************80

void r8sp_read_size ( string input_file, int &m, int &n, int &nz_num )

//****************************************************************************80
//
//  Purpose:
//
//    R8SP_READ_SIZE reads the size of an R8SP matrix from a file.
//
//  Discussion:
//
//    The value of NZ_NUM is simply the number of records in the input file.
//
//    The values of M and N are determined as the maximum entry in the row 
//    and column vectors.
//
//    The R8SP storage format stores the row, column and value of each nonzero
//    entry of a sparse matrix.
//
//    It is possible that a pair of indices (I,J) may occur more than
//    once.  Presumably, in this case, the intent is that the actual value
//    of A(I,J) is the sum of all such entries.  This is not a good thing
//    to do, but I seem to have come across this in MATLAB.
//
//    The R8SP format is used by CSPARSE ("sparse triplet"), SLAP
//    (nonsymmetric case), by MATLAB, and by SPARSEKIT ("COO" format).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 August 2006
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, string INPUT_FILE, the name of the file to 
//    be read.
//
//    Output, int &M, &N, the number of rows and columns of the matrix.
//
//    Output, int &NZ_NUM, the number of nonzero elements in the matrix.
//
{
  double a_k;
  int col_k;
  ifstream input;
  int row_k;

  m = 0;
  n = 0;
  nz_num = 0;

  input.open ( input_file.c_str ( ) );

  if ( !input )
  {
    cerr << "\n";
    cerr << "R8SP_READ_SIZE - Fatal error!\n";
    cerr << "  Could not open the input file: \"" << input_file << "\"\n";
    exit ( 1 );
  }

  for ( ; ; )
  {
    input >> row_k >> col_k >> a_k;

    if ( input.eof ( ) )
    {
      break;
    }

    m = i4_max ( m, row_k + 1 );
    n = i4_max ( n, col_k + 1 );
    nz_num = nz_num + 1;
  }

  input.close ( );

  return;
}
//****************************************************************************80

double *r8sp_res ( int m, int n, int nz_num, int row[], int col[], double a[], 
  double x[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8SP_RES computes the residual R = B-A*X for R8SP matrices.
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
//    Input, int NZ_NUM, the number of nonzeros.
//
//    Input, int ROW[NZ_NUM], COL[NZ_NUM], the row and column indices.
//
//    Input, double A[NZ_NUM], the values.
//
//    Input, double X[N], the vector to be multiplied by A.
//
//    Input, double B[M], the desired result A * x.
//
//    Output, double R8SP_RES[M], the residual R = B - A * X.
//
{
  int i;
  double *r;

  r = r8sp_mv ( m, n, nz_num, row, col, a, x );

  for ( i = 0; i < m; i++ )
  {
    r[i] = b[i] - r[i];
  }

  return r;
}
//****************************************************************************80

double *r8sp_to_r8ge ( int m, int n, int nz_num, int row[], int col[], 
  double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8SP_TO_R8GE converts an R8SP matrix to an R8GE matrix.
//
//  Discussion:
//
//    The R8SP storage format stores the row, column and value of each nonzero
//    entry of a sparse matrix.
//
//    It is possible that a pair of indices (I,J) may occur more than
//    once.  Presumably, in this case, the intent is that the actual value
//    of A(I,J) is the sum of all such entries.  This is not a good thing
//    to do, but I seem to have come across this in MATLAB.
//
//    The R8SP format is used by CSPARSE ("sparse triplet"), SLAP
//    (nonsymmetric case), by MATLAB, and by SPARSEKIT ("COO" format).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    22 January 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns of the matrix.
//
//    Input, int NZ_NUM, the number of nonzero elements in the matrix.
//
//    Input, int ROW[NZ_NUM], COL[NZ_NUM], the row and column indices
//    of the nonzero elements.
//
//    Input, double A[NZ_NUM], the nonzero elements of the matrix.
//
//    Output, double B[M*N], the R8GE matrix.
//
{
  double *b;
  int i;
  int j;
  int k;

  b = new double[m*n];

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < m; i++ )
    {
      b[i+j*m] = 0.0;
    }
  }

  for ( k = 0; k < nz_num; k++ )
  {
    i = row[k];
    j = col[k];
    b[i+j*m] = a[k];
  }

  return b;
}
//****************************************************************************80

void r8sp_to_r8ncf ( int m, int n, int nz_num, int row[], int col[], 
  double a[], int rowcol[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8SP_TO_R8NCF converts an R8SP matrix to an R8NCF matrix.
//
//  Discussion:
//
//    The R8SP and R8NCF formats are essentially identical, except that
//    R8SP keeps separate ROW and COLUMN vectors, while R8NCF uses a single
//    ROWCOL array.  Therefore, the input values NZ_NUM and A used in
//    the R8SP representation can be regarded as part of the output
//    values used for the R8NCF representation.
//
//    The R8SP storage format stores the row, column and value of each nonzero
//    entry of a sparse matrix.
//
//    It is possible that a pair of indices (I,J) may occur more than
//    once.  Presumably, in this case, the intent is that the actual value
//    of A(I,J) is the sum of all such entries.  This is not a good thing
//    to do, but I seem to have come across this in MATLAB.
//
//    The R8SP format is used by CSPARSE ("sparse triplet"), SLAP
//    (nonsymmetric case), by MATLAB, and by SPARSEKIT ("COO" format).
//
//    The R8NCF storage format stores NZ_NUM, the number of nonzeros,
//    a real array containing the nonzero values, a 2 by NZ_NUM integer
//    array storing the row and column of each nonzero entry.
//
//    The R8NCF format is used by NSPCG.  NSPCG requires that the information
//    for the diagonal entries of the matrix must come first.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 August 2006
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns of the matrix.
//
//    Input, int NZ_NUM, the number of nonzero elements in the matrix.
//
//    Input, int ROW[NZ_NUM], COL[NZ_NUM], the row and column indices
//    of the nonzero elements.
//
//    Input, double A[NZ_NUM], the nonzero elements of the matrix.
//
//    Output, int ROWCOL[2*NZ_NUM], the R8NCF row and column index vector.
//
{
  int i;

  for ( i = 0; i < nz_num; i++ )
  {
    rowcol[0+i*2] = row[i];
    rowcol[1+i*2] = col[i];
  }

  return;
}
//****************************************************************************80

void r8sp_write ( int m, int n, int nz_num, int row[], int col[], double a[], 
  string output_file )

//****************************************************************************80
//
//  Purpose:
//
//    R8SP_WRITE writes an R8SP matrix to a file.
//
//  Discussion:
//
//    The R8SP storage format stores the row, column and value of each nonzero
//    entry of a sparse matrix.
//
//    It is possible that a pair of indices (I,J) may occur more than
//    once.  Presumably, in this case, the intent is that the actual value
//    of A(I,J) is the sum of all such entries.  This is not a good thing
//    to do, but I seem to have come across this in MATLAB.
//
//    The R8SP format is used by CSPARSE ("sparse triplet"), SLAP
//    (nonsymmetric case), by MATLAB, and by SPARSEKIT ("COO" format).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 August 2006
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns of the matrix.
//
//    Input, int NZ_NUM, the number of nonzero elements in the matrix.
//
//    Input, int ROW[NZ_NUM], COL[NZ_NUM], the row and column indices
//    of the nonzero elements.
//
//    Input, double A[NZ_NUM], the nonzero elements 
//    of the matrix.
//
//    Input, string OUTPUT_FILE, the name of the file to which
//    the information is to be written.
//
{
  int k;
  ofstream output;

  output.open ( output_file.c_str ( ) );

  if ( !output )
  {
    cerr << "\n";
    cerr << "R8SP_WRITE - Fatal error!\n";
    cerr << "  Could not open the output file.\n";
    exit ( 1 );
  }

  for ( k = 0; k < nz_num; k++ )
  {
    output << "  " << setw(8) << row[k]
           << "  " << setw(8) << col[k]
           << "  " << setw(16) << a[k] << "\n";
  }

  output.close ( );

  return;
}
//****************************************************************************80

double *r8sp_zeros ( int m, int n, int nz_num, int row[], int col[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8SP_ZEROS returns a zero R8SP matrix.
//
//  Discussion:
//
//    The R8SP storage format stores the row, column and value of each nonzero
//    entry of a sparse matrix.
//
//    The R8SP format is used by SLAP (nonsymmetric case), by MATLAB,
//    and by SPARSEKIT ("COO" format).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    21 January 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns of the matrix.
//
//    Input, int NZ_NUM, the number of nonzero elements in the matrix.
//
//    Input, int ROW[NZ_NUM], COL[NZ_NUM], the row and column indices
//    of the nonzero elements.
//
//    Output, double R8SP_ZERO[NZ_NUM], the (potentially) nonzero elements 
//    of the matrix.
//
{
  double *a;

  a = r8vec_zeros_new ( nz_num );

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
