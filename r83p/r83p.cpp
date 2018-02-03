# include <cmath>
# include <cstdlib>
# include <ctime>
# include <fstream>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r83p.hpp"

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

double r83p_det ( int n, double a_lu[], double work4 )

//****************************************************************************80
//
//  Purpose:
//
//    R83P_DET computes the determinant of a matrix factored by R83P_FA.
//
//  Discussion:
//
//    The R83P storage format stores a periodic tridiagonal matrix is stored 
//    as a 3 by N array, in which each row corresponds to a diagonal, and 
//    column locations are preserved.  The matrix value 
//    A(1,N) is stored as the array entry A(1,1), and the matrix value
//    A(N,1) is stored as the array entry A(3,N).
//
//  Example:
//
//    Here is how an R83P matrix of order 5 would be stored:
//
//      A51 A12 A23 A34 A45
//      A11 A22 A33 A44 A55
//      A21 A32 A43 A54 A15
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
//    N must be at least 3.
//
//    Input, double A_LU[3*N], the LU factors from R83P_FA.
//
//    Input, double WORK4, factorization information from R83P_FA.
//
//    Output, double R83P_DET, the determinant of the matrix.
//
{
  double det;
  int i;

  det = work4;
  for ( i = 0; i <= n-2; i++ )
  {
    det = det * a_lu[1+i*3];
  }

  return det;
}
//****************************************************************************80

int r83p_fa ( int n, double a[], double work2[], double work3[], double *work4 )

//****************************************************************************80
//
//  Purpose:
//
//    R83P_FA factors an R83P matrix.
//
//  Discussion:
//
//    The R83P storage format stores a periodic tridiagonal matrix is stored as 
//    a 3 by N array, in which each row corresponds to a diagonal, and 
//    column locations are preserved.  The matrix value 
//    A(1,N) is stored as the array entry A(1,1), and the matrix value
//    A(N,1) is stored as the array entry A(3,N).
//
//    Once the matrix has been factored by R83P_FA, R83P_SL may be called
//    to solve linear systems involving the matrix.
//
//    The logical matrix has a form which is suggested by this diagram:
//
//      D1 U1          L1
//      L2 D2 U2
//         L3 R83 U3
//            L4 D4 U4
//               L5 R85 U5
//      U6          L6 D6
//
//    The algorithm treats the matrix as a border banded matrix:
//
//      ( A1  A2 )
//      ( A3  A4 )
//
//    where:
//
//      D1 U1          | L1
//      L2 D2 U2       |  0
//         L3 R83 U3    |  0
//            L4 D4 U4 |  0
//               L5 R85 | U5
//      ---------------+---
//      U6  0  0  0 L6 | D6
//
//  Example:
//
//    Here is how an R83P matrix of order 5 would be stored:
//
//      A51 A12 A23 A34 A45
//      A11 A22 A33 A44 A55
//      A21 A32 A43 A54 A15
//
//  Method:
//
//    The algorithm rewrites the system as:
//
//         X1 + inverse(A1) A2 X2 = inverse(A1) B1
//
//      A3 X1 +             A4 X2 = B2
//
//    The first equation can be "solved" for X1 in terms of X2:
//
//         X1 = - inverse(A1) A2 X2 + inverse(A1) B1
//
//    allowing us to rewrite the second equation for X2 explicitly:
//
//      ( A4 - A3 inverse(A1) A2 ) X2 = B2 - A3 inverse(A1) B1
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    19 January 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//    N must be at least 3.
//
//    Input/output, double A[3*N].
//    On input, the periodic tridiagonal matrix.  
//    On output, the arrays have been modified to hold information
//    defining the border-banded factorization of submatrices A1
//    and A3.
//
//    Output, int R83P_FA, singularity flag.
//    0, no singularity detected.
//    nonzero, the factorization failed on the INFO-th step.
//
//    Output, double WORK2[N-1], WORK3[N-1], *WORK4, factorization information.
//
{
  int i;
  int info;
  int job;
  double *work1;

  work1 = new double[n-1];
//
//  Compute inverse(A1):
//
  info = r83_np_fa ( n-1, a );

  if ( info != 0 )
  {
    cerr << "\n";
    cerr << "R83P_FA - Fatal error!\n";
    cerr << "  R83_NP_FA returned INFO = " << info << "\n";
    cerr << "  Factoring failed for column INFO.\n";
    cerr << "  The tridiagonal matrix A1 is singular.\n";
    cerr << "  This algorithm cannot continue!\n";
    exit ( 1 );
  }
//
//  WORK2 := inverse(A1) * A2.
//
  work2[0] = a[2+(n-1)*3];
  for ( i = 1; i < n-2; i++)
  {
    work2[i] = 0.0;
  }
  work2[n-2] = a[0+(n-1)*3];

  job = 0;
  work1 = r83_np_sl ( n-1, a, work2, job );
  for ( i = 0; i < n-1; i++ )
  {
    work2[i] = work1[i];
  }
//
//  WORK3 := inverse ( A1' ) * A3'.
//
  work3[0] = a[0+0*3];
  for ( i = 1; i < n-2; i++)
  {
    work3[i] = 0.0;
  }
  work3[n-2] = a[2+(n-2)*3];

  job = 1;
  work1 = r83_np_sl ( n-1, a, work3, job );
  for ( i = 0; i < n-1; i++ )
  {
    work3[i] = work1[i];
  }
//
//  A4 := ( A4 - A3 * inverse(A1) * A2 )
//
  *work4 = a[1+(n-1)*3] - a[0+0*3] * work2[0] - a[2+(n-2)*3] * work2[n-2];

  if ( *work4 == 0.0 )
  {
    cerr << "\n";
    cerr << "R83P_FA - Fatal error!\n";
    cerr << "  The factored A4 submatrix is zero.\n";
    cerr << "  This algorithm cannot continue!\n";
    exit ( 1 );
  }

  delete [] work1;

  return 0;
}
//****************************************************************************80

double *r83p_indicator ( int n )

//****************************************************************************80
//
//  Purpose:
//
//    R83P_INDICATOR sets up an R83P indicator matrix.
//
//  Discussion:
//
//    The R83P storage format stores a periodic tridiagonal matrix is stored 
//    as a 3 by N array, in which each row corresponds to a diagonal, and 
//    column locations are preserved.  The matrix value 
//    A(1,N) is stored as the array entry A(1,1), and the matrix value
//    A(N,1) is stored as the array entry A(3,N).
//
//  Example:
//
//    Here is how an R83P matrix of order 5 would be stored:
//
//      A51 A12 A23 A34 A45
//      A11 A22 A33 A44 A55
//      A21 A32 A43 A54 A15
//
//    Here are the values as stored in an indicator matrix:
//
//      51 12 23 34 45
//      11 22 33 44 55
//      21 32 43 54 15
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
//    Input, int N, the order of the matrix.
//    N must be at least 2.
//
//    Output, double R83P_INDICATOR[3*N], the R83P indicator matrix.
//
{
  double *a;
  int fac;
  int i;
  int j;

  a = new double[3*n];

  fac = i4_power ( 10, i4_log_10 ( n ) + 1 );

  i = n;
  j = 1;
  a[0+(j-1)*3] = ( double ) ( fac * i + j );
  for ( j = 2; j <= n; j++ )
  {
    i = j - 1;
    a[0+(j-1)*3] = ( double ) ( fac * i + j );
  }

  for ( j = 1; j <= n; j++ )
  {
    i = j;
    a[1+(j-1)*3] = ( double ) ( fac * i + j );
  }

  for ( j = 1; j <= n-1; j++ )
  {
    i = j + 1;
    a[2+(j-1)*3] = ( double ) ( fac * i + j );
  }
  i = 1;
  j = n;
  a[2+(j-1)*3] = ( double ) ( fac * i + j );

  return a;
}
//****************************************************************************80

double *r83p_ml ( int n, double a_lu[], double x[], int job )

//****************************************************************************80
//
//  Purpose:
//
//    R83P_ML computes A * x or x * A, where A has been factored by R83P_FA.
//
//  Discussion:
//
//    The R83P storage format stores a periodic tridiagonal matrix is stored 
//    as a 3 by N array, in which each row corresponds to a diagonal, and 
//    column locations are preserved.  The matrix value 
//    A(1,N) is stored as the array entry A(1,1), and the matrix value
//    A(N,1) is stored as the array entry A(3,N).
//
//  Example:
//
//    Here is how an R83P matrix of order 5 would be stored:
//
//      A51 A12 A23 A34 A45
//      A11 A22 A33 A44 A55
//      A21 A32 A43 A54 A15
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
//    Input, int N, the order of the matrix.
//    N must be at least 3.
//
//    Input, double A_LU[3*N], the LU factors from R83P_FA.
//
//    Input, double X[N], the vector to be multiplied by the matrix.
//
//    Input, int JOB, indicates what product should be computed.
//    0, compute A * x.
//    nonzero, compute A' * x.
//
//    Output, double R83P_ML[N], the result of the multiplication.
//
{
  double *b;
  double *b_short;
  int i;
//
//  Multiply A(1:N-1,1:N-1) and X(1:N-1).
//
  b_short = r83_np_ml ( n-1, a_lu, x, job );

  b = new double[n];

  for ( i = 0; i < n-1; i++ )
  {
    b[i] = b_short[i];
  }
  b[n-1] = 0.0;

  delete [] b_short;
//
//  Add terms from the border.
//
  if ( job == 0 )
  {
    b[0] = b[0] + a_lu[2+(n-1)*3] * x[n-1];
    b[n-2] = b[n-2] + a_lu[0+(n-1)*3] * x[n-1];
    b[n-1] = a_lu[0+0*3] * x[0] + a_lu[2+(n-2)*3] * x[n-2] 
      + a_lu[1+(n-1)*3] * x[n-1];
  }
  else
  {
    b[0] = b[0] + a_lu[0+0*3] * x[n-1];
    b[n-2] = b[n-2] + a_lu[2+(n-2)*3] * x[n-1];
    b[n-1] = a_lu[2+(n-1)*3] * x[0] + a_lu[0+(n-1)*3] * x[n-2] 
           + a_lu[1+(n-1)*3] * x[n-1];
  }

  return b;
}
//****************************************************************************80

double *r83p_mtv ( int n, double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R83P_MTV multiplies a vector times an R83P matrix.
//
//  Discussion:
//
//    The R83P storage format stores a periodic tridiagonal matrix is stored as 
//    a 3 by N array, in which each row corresponds to a diagonal, and 
//    column locations are preserved.  The matrix value 
//    A(1,N) is stored as the array entry A(1,1), and the matrix value
//    A(N,1) is stored as the array entry A(3,N).
//
//  Example:
//
//    Here is how an R83P matrix of order 5 would be stored:
//
//      A51 A12 A23 A34 A45
//      A11 A22 A33 A44 A55
//      A21 A32 A43 A54 A15
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    16 January 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//    N must be at least 3.
//
//    Input, double A[3*N], the R83P matrix.
//
//    Input, double X, the vector to be multiplied by A.
//
//    Output, double R83P_MTV[N], the product X * A.
//
{
  double *b;
  int i;

  b = new double[n];

  b[0] = a[0+0*3] * x[n-1] + a[1+0*3] * x[0] + a[2+0*3] * x[1];

  for ( i = 2; i <= n-1; i++ )
  {
    b[i-1] = a[0+(i-1)*3] * x[i-2] + a[1+(i-1)*3] * x[i-1] + a[2+(i-1)*3] * x[i];
  }

  b[n-1] = a[0+(n-1)*3] * x[n-2] + a[1+(n-1)*3] * x[n-1] + a[2+(n-1)*3] * x[0];

  return b;
}
//****************************************************************************80

double *r83p_mv ( int n, double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R83P_MV multiplies an R83P matrix times a vector.
//
//  Discussion:
//
//    The R83P storage format stores a periodic tridiagonal matrix is stored as 
//    a 3 by N array, in which each row corresponds to a diagonal, and 
//    column locations are preserved.  The matrix value 
//    A(1,N) is stored as the array entry A(1,1), and the matrix value
//    A(N,1) is stored as the array entry A(3,N).
//
//  Example:
//
//    Here is how an R83P matrix of order 5 would be stored:
//
//      A51 A12 A23 A34 A45
//      A11 A22 A33 A44 A55
//      A21 A32 A43 A54 A15
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
//    N must be at least 3.
//
//    Input, double A[3*N], the R83P matrix.
//
//    Input, double X[N], the vector to be multiplied by A.
//
//    Output, double R83P_MV[N], the product A * x.
//
{
  double *b;
  int i;

  b = new double[n];

  b[0] =   a[2+(n-1)*3] * x[n-1] + a[1+0*3]     * x[0]   + a[0+1*3]     * x[1];

  for ( i = 1; i < n-1; i++ )
  {
    b[i] = a[2+(i-1)*3] * x[i-1] + a[1+i*3]     * x[i]   + a[0+(i+1)*3] * x[i+1];
  }

  b[n-1] = a[2+(n-2)*3] * x[n-2] + a[1+(n-1)*3] * x[n-1] + a[0+0*3]     * x[0];

  return b;
}
//****************************************************************************80

void r83p_print ( int n, double a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    R83P_PRINT prints an R83P matrix.
//
//  Discussion:
//
//    The R83P storage format stores a periodic tridiagonal matrix is stored as 
//    a 3 by N array, in which each row corresponds to a diagonal, and 
//    column locations are preserved.  The matrix value 
//    A(1,N) is stored as the array entry A(1,1), and the matrix value
//    A(N,1) is stored as the array entry A(3,N).
//
//  Example:
//
//    Here is how an R83P matrix of order 5 would be stored:
//
//      A51 A12 A23 A34 A45
//      A11 A22 A33 A44 A55
//      A21 A32 A43 A54 A15
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
//    Input, double A[3*N], the R83P matrix.
//
//    Input, string TITLE, a title.
//
{
  r83p_print_some ( n, a, 1, 1, n, n, title );

  return;
}
//****************************************************************************80

void r83p_print_some ( int n, double a[], int ilo, int jlo, int ihi, int jhi,
  string title )

//****************************************************************************80
//
//  Purpose:
//
//    R83P_PRINT_SOME prints some of an R83P matrix.
//
//  Discussion:
//
//    The R83P storage format stores a periodic tridiagonal matrix is stored as 
//    a 3 by N array, in which each row corresponds to a diagonal, and 
//    column locations are preserved.  The matrix value 
//    A(1,N) is stored as the array entry A(1,1), and the matrix value
//    A(N,1) is stored as the array entry A(3,N).
//
//  Example:
//
//    Here is how an R83P matrix of order 5 would be stored:
//
//      A51 A12 A23 A34 A45
//      A11 A22 A33 A44 A55
//      A21 A32 A43 A54 A15
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
//    Input, double A[3*N], the R83P matrix.
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
      cout << setw(7) << j << "       ";
    }
    cout << "\n";
    cout << "  Row\n";
    cout << "  ---\n";
//
//  Determine the range of the rows in this strip.
//
    i2lo = i4_max ( ilo, 1 );

    if ( 1 < i2lo || j2hi < n )
    {
      i2lo = i4_max ( i2lo, j2lo - 1 );
    }

    i2hi = i4_min ( ihi, n );

    if ( i2hi < n || 1 < j2lo )
    {
      i2hi = i4_min ( i2hi, j2hi + 1 );
    }

    for ( i = i2lo; i <= i2hi; i++ )
    {
//
//  Print out (up to) 5 entries in row I, that lie in the current strip.
//
      cout << setw(4) << i << "  ";

      for ( j2 = 1; j2 <= inc; j2++ )
      {
        j = j2lo - 1 + j2;

        if ( i == n && j == 1 )
        {
          cout << setw(12) << a[0+(j-1)*3] << "  ";
        }
        else if ( i == 1 && j == n )
        {
          cout << setw(12) << a[2+(j-1)*3] << "  ";
        }
        else if ( 1 < i-j || 1 < j-i )
        {
          cout << "              ";
        }
        else if ( j == i+1 )
        {
          cout << setw(12) << a[0+(j-1)*3] << "  ";
        }
        else if ( j == i )
        {
          cout << setw(12) << a[1+(j-1)*3] << "  ";
        }
        else if ( j == i-1 )
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

double *r83p_random ( int n, int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    R83P_RANDOM randomizes an R83P matrix.
//
//  Discussion:
//
//    The R83P storage format stores a periodic tridiagonal matrix is stored as 
//    a 3 by N array, in which each row corresponds to a diagonal, and 
//    column locations are preserved.  The matrix value 
//    A(1,N) is stored as the array entry A(1,1), and the matrix value
//    A(N,1) is stored as the array entry A(3,N).
//
//  Example:
//
//    Here is how an R83P matrix of order 5 would be stored:
//
//      A51 A12 A23 A34 A45
//      A11 A22 A33 A44 A55
//      A21 A32 A43 A54 A15
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 May 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//    N must be at least 3.
//
//    Input/output, int &SEED, a seed for the random number generator.
//
//    Output, double R83P_RANDOM[3*N], the R83P matrix.
//
{
  double *a;

  a = r8mat_uniform_01_new ( 3, n, seed );

  return a;
}
//****************************************************************************80

double *r83p_sl ( int n, double a_lu[], double b[], int job, double work2[], 
  double work3[], double work4 )

//****************************************************************************80
//
//  Purpose:
//
//    R83P_SL solves an R83P system factored by R83P_FA.
//
//  Discussion:
//
//    The R83P storage format stores a periodic tridiagonal matrix is stored as 
//    a 3 by N array, in which each row corresponds to a diagonal, and 
//    column locations are preserved.  The matrix value 
//    A(1,N) is stored as the array entry A(1,1), and the matrix value
//    A(N,1) is stored as the array entry A(3,N).
//
//  Example:
//
//    Here is how an R83P matrix of order 5 would be stored:
//
//      A51 A12 A23 A34 A45
//      A11 A22 A33 A44 A55
//      A21 A32 A43 A54 A15
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    19 January 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//    N must be at least 3.
//
//    Input, double A_LU[3*N], the LU factors from R83P_FA.
//
//    Input, double B[N], the right hand side of the linear system.
//
//    Input, int JOB, specifies the system to solve.
//    0, solve A * x = b.
//    nonzero, solve A' * x = b.
//
//    Input, double WORK2(N-1), WORK3(N-1), WORK4, factor data from R83P_FA.
//
//    Output, double R83P_SL[N], the solution to the linear system.
//
{
  int i;
  double *x;
  double *xnm1;

  x = new double[n];

  for ( i = 0; i < n; i++ )
  {
    x[i] = b[i];
  }

  if ( job == 0 )
  {
//
//  Solve A1 * X1 = B1.
//
    xnm1 = r83_np_sl ( n-1, a_lu, x, job );
//
//  X2 = B2 - A3 * X1
//
    for ( i = 0; i < n-1; i++ )
    {
      x[i] = xnm1[i];
    }
    delete [] xnm1;

    x[n-1] = x[n-1] - a_lu[0+0*3] * x[0] - a_lu[2+(n-2)*3] * x[n-2];
//
//  Solve A4 * X2 = X2
//
    x[n-1] = x[n-1] / work4;
//
//  X1 := X1 - inverse ( A1 ) * A2 * X2.
//
    for ( i = 0; i < n-1; i++ )
    {
      x[i] = x[i] - work2[i] * x[n-1];
    }
  }
  else
  {
//
//  Solve A1' * X1 = B1.
//
    xnm1 = r83_np_sl ( n-1, a_lu, x, job );
//
//  X2 := X2 - A2' * B1
//
    for ( i = 0; i < n-1; i++ )
    {
      x[i] = xnm1[i];
    }
    delete [] xnm1;

    x[n-1] = x[n-1] - a_lu[2+(n-1)*3] * x[0] - a_lu[0+(n-1)*3] * x[n-2];
//
//  Solve A4 * X2 = X2.
//
    x[n-1] = x[n-1] / work4;
//
//  X1 := X1 - transpose ( inverse ( A1 ) * A3 ) * X2.
//
    for ( i = 0; i < n-1; i++ )
    {
      x[i] = x[i] - work3[i] * x[n-1];
    }
  }
  return x;
}
//****************************************************************************80

double *r83p_to_r8ge ( int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R83P_TO_R8GE copies an R83P matrix to an R8GE matrix.
//
//  Discussion:
//
//    The R83P storage format stores a periodic tridiagonal matrix is stored as 
//    a 3 by N array, in which each row corresponds to a diagonal, and 
//    column locations are preserved.  The matrix value 
//    A(1,N) is stored as the array entry A(1,1), and the matrix value
//    A(N,1) is stored as the array entry A(3,N).
//
//  Example:
//
//    Here is how an R83P matrix of order 5 would be stored:
//
//      A51 A12 A23 A34 A45
//      A11 A22 A33 A44 A55
//      A21 A32 A43 A54 A15
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    16 January 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//    N must be at least 3.
//
//    Input, double A[3*N], the R83P matrix.
//
//    Output, double R83P_TO_R8GE[N*N], the R8GE matrix.
//
{
  double *b;
  int i;
  int j;

  b = new double[n*n];

  for ( i = 1; i <= n; i++ )
  {
    for ( j = 1; j <= n; j++ )
    {
      if ( i == j )
      {
        b[i-1+(j-1)*n] = a[1+(j-1)*3];
      }
      else if ( j == i-1 )
      {
        b[i-1+(j-1)*n] = a[2+(j-1)*3];
      }
      else if ( j == i+1 )
      {
        b[i-1+(j-1)*n] = a[0+(j-1)*3];
      }
      else if ( i == 1 && j == n )
      {
        b[i-1+(j-1)*n] = a[2+(j-1)*3];
      }
      else if ( i == n && j == 1 )
      {
        b[i-1+(j-1)*n] = a[0+(j-1)*3];
      }
      else
      {
        b[i-1+(j-1)*n] = 0.0;
      }
    }
  }

  return b;
}
//****************************************************************************80

double *r83p_zeros ( int n )

//****************************************************************************80
//
//  Purpose:
//
//    R83P_ZEROS zeros an R83P matrix.
//
//  Discussion:
//
//    The R83P storage format stores a periodic tridiagonal matrix is stored as 
//    a 3 by N array, in which each row corresponds to a diagonal, and 
//    column locations are preserved.  The matrix value 
//    A(1,N) is stored as the array entry A(1,1), and the matrix value
//    A(N,1) is stored as the array entry A(3,N).
//
//  Example:
//
//    Here is how an R83P matrix of order 5 would be stored:
//
//      A51 A12 A23 A34 A45
//      A11 A22 A33 A44 A55
//      A21 A32 A43 A54 A15
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
//    N must be at least 3.
//
//    Output, double S3P[3*N], the R83P matrix.
//
{
  double *a;
  int i;
  int j;

  a = new double[3*n];

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < 3; i++ )
    {
      a[i+j*3] = 0.0;
    }
  }

  return a;
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
  for ( k = 1; k <= n-1; k++ )
  {
//
//  Find L, the index of the pivot row.
//
    l = k;

    for ( i = k+1; i <= n; i++ )
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
    for ( i = k+1; i <= n; i++ )
    {
      a[i-1+(k-1)*n] = -a[i-1+(k-1)*n] / a[k-1+(k-1)*n];
    }
//
//  Row elimination with column indexing.
//
    for ( j = k+1; j <= n; j++ )
    {
      if ( l != k )
      {
        t              = a[l-1+(j-1)*n];
        a[l-1+(j-1)*n] = a[k-1+(j-1)*n];
        a[k-1+(j-1)*n] = t;
      }

      for ( i = k+1; i <= n; i++ )
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

double *r8mat_uniform_01_new ( int m, int n, int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    R8MAT_UNIFORM_01_NEW returns a unit pseudorandom R8MAT.
//
//  Discussion:
//
//    An R8MAT is a doubly dimensioned array of R8's,  stored as a vector
//    in column-major order.
//
//    This routine implements the recursion
//
//      seed = 16807 * seed mod ( 2^31 - 1 )
//      unif = seed / ( 2^31 - 1 )
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
//    03 October 2005
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Paul Bratley, Bennett Fox, Linus Schrage,
//    A Guide to Simulation,
//    Springer Verlag, pages 201-202, 1983.
//
//    Bennett Fox,
//    Algorithm 647:
//    Implementation and Relative Efficiency of Quasirandom
//    Sequence Generators,
//    ACM Transactions on Mathematical Software,
//    Volume 12, Number 4, pages 362-376, 1986.
//
//    Philip Lewis, Allen Goodman, James Miller,
//    A Pseudo-Random Number Generator for the System/360,
//    IBM Systems Journal,
//    Volume 8, pages 136-143, 1969.
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns.
//
//    Input/output, int &SEED, the "seed" value.  Normally, this
//    value should not be 0, otherwise the output value of SEED
//    will still be 0, and R8_UNIFORM will be 0.  On output, SEED has
//    been updated.
//
//    Output, double R8MAT_UNIFORM_01_NEW[M*N], a matrix of pseudorandom values.
//
{
  int i;
  const int i4_huge = 2147483647;
  int j;
  int k;
  double *r;

  r = new double[m*n];

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < m; i++ )
    {
      k = seed / 127773;

      seed = 16807 * ( seed - k * 127773 ) - k * 2836;

      if ( seed < 0 )
      {
        seed = seed + i4_huge;
      }
      r[i+j*m] = ( double ) ( seed ) * 4.656612875E-10;
    }
  }

  return r;
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
