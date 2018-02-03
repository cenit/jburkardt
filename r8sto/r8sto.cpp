# include <cmath>
# include <cstdlib>
# include <ctime>
# include <fstream>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8sto.hpp"

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

double *r8ge_mm ( int n, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_MM multiplies two R8GE matrices.
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
//    15 September 2003
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
//    Input, double A[N*N], B[N*N], the R8GE factor matrices.
//
//    Output, double C[N*N], the R8GE product matrix.
//
{
  double *c;
  int i;
  int j;
  int k;

  c = new double[n*n];

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < n; i++ )
    {
      c[i+j*n] = 0.0;
      for ( k = 0; k < n; k++ )
      {
        c[i+j*n] = c[i+j*n] + a[i+k*n] * b[k+j*n];
      }
    }
  }

  return c;
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
//    29 September 2015
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

double *r8sto_dif2 ( int n )

//****************************************************************************80
//
//  Purpose:
//
//    R8STO_DIF2 sets the second difference as an R8STO matrix.
//
//  Discussion:
//
//    The R8STO storage format is used for a symmetric Toeplitz matrix.
//    It stores the N elements of the first row.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    27 September 2015
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
//    Output, double R8STO_DIF2[N], the R8STO matrix.
//
{
  double *a;

  a = r8vec_zeros_new ( n );
  a[0] = 2.0;
  a[1] = -1.0;
  
  return a;
}
//****************************************************************************80

double *r8sto_indicator ( int n )

//****************************************************************************80
//
//  Purpose:
//
//    R8STO_INDICATOR sets up an R8STO indicator matrix.
//
//  Discussion:
//
//    The R8STO storage format is used for a symmetric Toeplitz matrix.
//    It stores the N elements of the first row.
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
//    N must be positive.
//
//    Output, double R8STO_INDICATOR[N], the R8STO matrix.
//
{
  double *a;
  int fac;
  int i;
  int j;
  int k;

  a = new double[n];

  fac = i4_power ( 10, i4_log_10 ( n ) + 1 );

  i = 1;
  k = 0;
  for ( j = 1; j <= n; j++ )
  {
    a[k] = ( double ) ( fac * i + j );
    k = k + 1;
  }
  
  return a;
}
//****************************************************************************80

double *r8sto_inverse ( int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8STO_INVERSE computes the inverse of an R8STO matrix.
//
//  Discussion:
//
//    The R8STO storage format is used for a symmetric Toeplitz matrix.
//    It stores the N elements of the first row.
//
//    For this routine, the matrix is also required to be positive definite.
//
//    The original implementation of the algorithm assumed that the
//    diagonal element was 1.  The algorithm has been modified so that
//    this is no longer necessary.
//
//    The inverse matrix is NOT guaranteed to be a Toeplitz matrix.  
//    It is guaranteed to be symmetric and persymmetric.
//    The inverse matrix is returned in general storage, that is,
//    as an "SGE" matrix.
//
//  Example:
//
//    To compute the inverse of
//
//     1.0 0.5 0.2
//     0.5 1.0 0.5
//     0.2 0.5 1.0
//
//    we input:
//
//      N = 3
//      A = { 1.0, 0.5, 0.2 }
//
//    with output:
//
//      B = ( 1/56) * [ 75, -40,   5,
//                     -40,  96, -40,
//                       5, -40,  75 ]
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 February 2004
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Gene Golub, Charles Van Loan,
//    Section 4.7.3, "Computing the Inverse",
//    Matrix Computations,
//    Third Edition,
//    Johns Hopkins, 1996.
//
//  Parameters:
//
//    Input, int N, the order of the system.
//
//    Input, double A[N], the R8STO matrix.
//
//    Output, double R8STO_INVERSE[N*N], the inverse of the matrix.
//
{
  double *a2;
  double *b;
  int i;
  int j;
  double t;
  double *v;
  double vn;

  a2 = new double[n-1];
  b = new double[n*n];

  for ( i = 0; i < n-1; i++ )
  {
    a2[i] = a[i+1] / a[0];
  }

  v = r8sto_yw_sl ( n-1, a2 );
//
//  Compute the N-th entry of V.
//
  t = 0.0;
  for ( i = 0; i < n-1; i++ )
  {
    t = t + a2[i] * v[i];
  }
  vn = 1.0 / ( 1.0 + t );
//
//  Reverse the first N-1 entries of V.
//
  for ( i = 0; i < (n-1)/2; i++ )
  {
    j = n - 2 - i;
    t    = v[i];
    v[i] = v[j];
    v[j] = t;
  }
//
//  Scale the entries.
//
  for ( i = 0; i < n-1; i++ )
  {
    v[i] = vn * v[i];
  }
//
//  Set the boundaries of B.
//
  b[0+0*n] = vn;
  for ( j = 1; j < n; j++ )
  {
    b[0+j*n] = v[n-j-1];
  }

  for ( j = 0; j < n-1; j++ )
  {
    b[n-1+j*n] = v[j];
  }
  b[n-1+(n-1)*n] = vn;

  for ( i = 1; i < n-1; i++ )
  {
    b[i+0*n]     = v[n-1-i];
    b[i+(n-1)*n] = v[i];
  }
//
//  Fill the interior.
//
  for ( i = 2; i <= 1+(n-1)/2; i++ )
  {
    for ( j = i; j <= n - i + 1; j++ )
    {
      t = b[i-2+(j-2)*n] + ( v[n-j] * v[n-i] - v[i-2] * v[j-2] ) / vn;
      b[i-1+(j-1)*n] = t;
      b[j-1+(i-1)*n] = t;
      b[n-i+(n-j)*n] = t;
      b[n-j+(n-i)*n] = t;
    }
  }
//
//  Scale B.
//
  for ( i = 0; i < n; i++ )
  {
    for ( j = 0; j < n; j++ )
    {
      b[i+j*n] = b[i+j*n] / a[0];
    }
  }

  delete [] a2;
  delete [] v;

  return b;
}
//****************************************************************************80

double *r8sto_mv ( int n, double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8STO_MV multiplies an R8STO matrix times a vector.
//
//  Discussion:
//
//    The R8STO storage format is used for a symmetric Toeplitz matrix.
//    It stores the N elements of the first row.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    30 September 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A[N], the R8STO matrix.
//
//    Input, double X[N], the vector to be multiplied by A.
//
//    Output, double R8STO_MV[N], the product A * x.
//
{
  double *b;
  int i;
  int j;

  b = r8vec_zeros_new ( n );

  for ( i = 0; i < n; i++ )
  {
    for ( j = 0; j <= i-1; j++ )
    {
      b[i] = b[i] + a[i-j] * x[j];
    }
    for ( j = i; j < n; j++ )
    {
      b[i] = b[i] + a[j-i] * x[j];
    }

  }

  return b;
}
//****************************************************************************80

void r8sto_print ( int n, double a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8STO_PRINT prints an R8STO matrix.
//
//  Discussion:
//
//    The R8STO storage format is used for a symmetric Toeplitz matrix.
//    It stores the N elements of the first row.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    29 September 2015
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
//    Input, double A[N], the R8STO matrix.
//
//    Input, string TITLE, a title.
//
{
  r8sto_print_some ( n, a, 0, 0, n - 1, n - 1, title );

  return;
}
//****************************************************************************80

void r8sto_print_some ( int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8STO_PRINT_SOME prints some of am R8STO matrix.
//
//  Discussion:
//
//    The R8STO storage format is used for a symmetric Toeplitz matrix.
//    It stores the N elements of the first row.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    29 September 2015
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
//    Input, double A[N], the R8STO matrix.
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
    i2hi = i4_min ( ihi, n - 1 );

    for ( i = i2lo; i <= i2hi; i++ )
    {
      cout << setw(4) << i << "  ";
//
//  Print out (up to) 5 entries in row I, that lie in the current strip.
//
      for ( j = j2lo; j <= j2hi; j++ )
      {
        if ( i <= j )
        {
          aij = a[j-i];
        }
        else
        {
          aij = a[i-j];
        }
        cout << setw(12) << aij << "  ";
      }
      cout << "\n";
    }
  }

  cout << "\n";

  return;
# undef INCX
}
//****************************************************************************80

double *r8sto_random ( int n, int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    R8STO_RANDOM randomizes an R8STO matrix.
//
//  Discussion:
//
//    The R8STO storage format is used for a symmetric Toeplitz matrix.
//    It stores the N elements of the first row.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    14 September 2003
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
//    Output, double R8STO_RANDOM[N], the R8STO matrix.
//
{
  double *r;

  r = r8vec_uniform_01_new ( n, seed );

  return r;
}
//****************************************************************************80

double *r8sto_sl ( int n, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8STO_SL solves an R8STO system.
//
//  Discussion:
//
//    The R8STO storage format is used for a symmetric Toeplitz matrix.
//    It stores the N elements of the first row.
//
//    The matrix is also required to be positive definite.
//
//    This implementation of the algorithm assumes that the diagonal element
//    (the first element of A) is 1.
//
//    Note that there is a typographical error in the presentation
//    of this algorithm in the reference, and another in the presentation
//    of a sample problem.  Both involve sign errors.  A minor error
//    makes the algorithm incorrect for the case N = 1.
//
//  Example:
//
//    To solve
//
//     1.0 0.5 0.2    x1    4.0
//     0.5 1.0 0.5 *  x2 = -1.0
//     0.2 0.5 1.0    x3    3.0
//
//    we input:
//
//      N = 3
//      A = (/ 1.0, 0.5, 0.2 /)
//      B = (/ 4.0, -1.0, 3.0 /)
//
//    with output:
//
//      X = (/ 355, -376, 285 /) / 56
//        = (/ 6.339, -6.714, 5.089 /)
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    30 September 2003
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Gene Golub, Charles Van Loan,
//    Section 4.7.3, "The General Right Hand Side Problem",
//    Matrix Computations,
//    Third Edition,
//    Johns Hopkins, 1996.
//
//  Parameters:
//
//    Input, int N, the order of the system.
//
//    Input, double A[N], the R8STO matrix, with the EXTRA CONDITION
//    that the first entry is 1.
//
//    Input, double B[N], the right hand side of the linear system.
//
//    Output, double R8STO_SL[N], the solution of the linear system.
//
{
  double beta;
  int i;
  int k;
  double *x;
  double *y;

  x = new double[n];
  y = new double[n];

  k = 0;
  beta = 1.0;
  x[k] = b[k] / beta;

  if ( k < n-1 )
  {
    y[k] = -a[k+1] / beta;
  }

  for ( k = 1; k <= n-1; k++ )
  {
    beta = ( 1.0 - y[k-1] * y[k-1] ) * beta;

    x[k] = b[k];
    for ( i = 1; i <= k; i++ )
    {
      x[k] = x[k] - a[i] * x[k-i];
    }
    x[k] = x[k] / beta;

    for ( i = 1; i <= k; i++ )
    {
      x[i-1] = x[i-1] + x[k] * y[k-i]; 
    }

    if ( k < n - 1 )
    {
      y[k] = -a[k+1];
      for ( i = 1; i <= k; i++ )
      {
        y[k] = y[k] - a[i] * y[k-i];
      }
      y[k] = y[k] / beta;

      for ( i = 1; i <= k; i++ )
      {
        y[i-1] = y[i-1] + y[k] * y[k-i];
      }
    }
  }

  delete [] y;

  return x;
}
//****************************************************************************80

double *r8sto_to_r8ge ( int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8STO_TO_R8GE copies an R8STO matrix to an R8GE matrix.
//
//  Discussion:
//
//    The R8STO storage format is used for a symmetric Toeplitz matrix.
//    It stores the N elements of the first row.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    30 September 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double R8STO_TO_R8GE[N], the R8STO matrix.
//
//    Output, double R8STO_TO_R8GE[N*N], the R8GE matrix.
//
{
  double *b;
  int i;
  int j;

  b = new double[n*n];

  for ( i = 0; i < n; i++ )
  {
    for ( j = 0; j < i; j++ )
    {
      b[i+j*n] = a[i-j];
    }
    for ( j = i; j < n; j++ )
    {
      b[i+j*n] = a[j-i];
    }
  }

  return b;
}
//****************************************************************************80

double *r8sto_yw_sl ( int n, double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8STO_YW_SL solves the Yule-Walker equations for an R8STO matrix.
//
//  Discussion:
//
//    The R8STO storage format is used for a symmetric Toeplitz matrix.
//    It stores the N elements of the first row.
//
//    The matrix is also required to be positive definite.
//
//    This implementation of the algorithm assumes that the diagonal element
//    is 1.
//
//    The real symmetric Toeplitz matrix can be described by N numbers, which,
//    for convenience, we will label B(0:N-1).  We assume there is one more
//    number, B(N).  If we let A be the symmetric Toeplitz matrix whose first
//    row is B(0:N-1), then the Yule-Walker equations are:
//
//      A * X = -B(1:N)
//
//  Example:
//
//    To solve
//
//     1.0 0.5 0.2    x1   0.5
//     0.5 1.0 0.5 *  x2 = 0.2
//     0.2 0.5 1.0    x3   0.1
//
//    we input:
//
//      N = 3
//      B = (/ 0.5, 0.2, 0.1 /)
//
//    with output:
//
//      X = (/ -75, 12, -5 /) / 140
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    30 September 2003
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Gene Golub, Charles Van Loan,
//    Section 4.7.2, "Solving the Yule-Walker Equations",
//    Matrix Computations,
//    Third Edition,
//    Johns Hopkins, 1996.
//
//  Parameters:
//
//    Input, int N, the order of the system.
//
//    Input, double B[N], defines the linear system.  The first entry of the
//    symmetric Toeplitz matrix is assumed to be a 1, which is NOT stored.  The N-1
//    remaining elements of the first row of are stored in B, followed by
//    the remaining scalar that defines the linear system.
//
//    Output, double R8STO_YW_SL[N], the solution of the linear system.
//
{
  double alpha;
  double beta;
  int i;
  int j;
  double *x;
  double *x2;

  x = new double[n];
  x2 = new double[n];

  x[0] = -b[0];
  beta = 1.0;
  alpha = -b[0];

  for ( i = 1; i <= n-1; i++ )
  {
    beta = ( 1.0 - alpha * alpha ) * beta;

    alpha = b[i];
    for ( j = 1; j <= i; j++ )
    {
      alpha = alpha + b[i-j] * x[j-1];
    }

    alpha = -alpha / beta;

    for ( j = 1; j <= i; j++ )
    {
      x2[j-1] = x[j-1];
    }

    for ( j = 1; j <= i; j++ )
    {
      x[j-1] = x[j-1] + alpha * x2[i-j];
    }

    x[i] = alpha;
  }

  delete [] x2;

  return x;
}
//****************************************************************************80

double *r8sto_zeros ( int n )

//****************************************************************************80
//
//  Purpose:
//
//    R8STO_ZEROS zeros an R8STO matrix.
//
//  Discussion:
//
//    The R8STO storage format is used for a symmetric Toeplitz matrix.
//    It stores the N elements of the first row.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    14 September 2003
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
//    Output, double R8STO_ZERO[N], the R8STO matrix.
//
{
  double *a;

  a = r8vec_zeros_new ( n );

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
