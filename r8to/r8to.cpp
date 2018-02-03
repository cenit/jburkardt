# include <cmath>
# include <cstdlib>
# include <ctime>
# include <fstream>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8to.hpp"

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

double *r8to_dif2 ( int n )

//****************************************************************************80
//
//  Purpose:
//
//    R8TO_DIF2 sets the second difference as an R8TO matrix.
//
//  Discussion:
//
//    The R8TO storage format is used for a Toeplitz matrix, which is constant
//    along diagonals.  Thus, in an N by N Toeplitz matrix, there are at most 
//    2*N-1 distinct entries.  The format stores the N elements of the first
//    row, followed by the N-1 elements of the first column (skipping the
//    entry in the first row).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    25 September 2015
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
//    Output, double R8TO_DIF2[2*N-1], the R8TO matrix.
//
{
  double *a;
  int i;

  a = new double[2*n-1];

  for ( i = 0; i < 2 * n - 1; i++ )
  {
    a[i] = 0.0;
  }

  a[0] = 2.0;
  a[1] = -1.0;
  a[n] = -1.0;
  
  return a;
}
//****************************************************************************80

double *r8to_indicator ( int n )

//****************************************************************************80
//
//  Purpose:
//
//    R8TO_INDICATOR sets up an R8TO indicator matrix.
//
//  Discussion:
//
//    The R8TO storage format is used for a Toeplitz matrix, which is constant
//    along diagonals.  Thus, in an N by N Toeplitz matrix, there are at most 
//    2*N-1 distinct entries.  The format stores the N elements of the first
//    row, followed by the N-1 elements of the first column (skipping the
//    entry in the first row).
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
//    N must be positive.
//
//    Output, double R8TO_INDICATOR[2*N-1], the R8TO matrix.
//
{
  double *a;
  int fac;
  int i;
  int j;
  int k;

  a = new double[2*n-1];

  fac = i4_power ( 10, i4_log_10 ( n ) + 1 );

  i = 1;
  k = 0;
  for ( j = 1; j <= n; j++ )
  {
    a[k] = ( double ) ( fac * i + j );
    k = k + 1;
  }

  j = 1;
  for ( i = 2; i <= n; i++ )
  {
    a[k] = ( double ) ( fac * i + j );
    k = k + 1;
  }
  
  return a;
}
//****************************************************************************80

double *r8to_mtv ( int n, double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8TO_MTV multiplies a vector times an R8TO matrix.
//
//  Discussion:
//
//    The R8TO storage format is used for a Toeplitz matrix, which is constant
//    along diagonals.  Thus, in an N by N Toeplitz matrix, there are at most 
//    2*N-1 distinct entries.  The format stores the N elements of the first
//    row, followed by the N-1 elements of the first column (skipping the
//    entry in the first row).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    23 September 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A[2*N-1], the R8TO matrix.
//
//    Input, double X[N], the vector to be multiplied by A.
//
//    Output, double R8TO_MTV[N], the product A' * X.
//
{
  double *b;
  int i;
  int j;

  b = r8vec_zeros_new ( n );

  for ( i = 0; i < n; i++ )
  {
    for ( j = 0; j <= i; j++ )
    {
      b[i] = b[i] + a[i-j] * x[j];
    }
    for ( j = i + 1; j < n; j++ )
    {
      b[i] = b[i] + a[n+j-i-1] * x[j];
    }
  }

  return b;
}
//****************************************************************************80

double *r8to_mv ( int n, double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8TO_MV multiplies an R8TO matrix times a vector.
//
//  Discussion:
//
//    The R8TO storage format is used for a Toeplitz matrix, which is constant
//    along diagonals.  Thus, in an N by N Toeplitz matrix, there are at most 
//    2*N-1 distinct entries.  The format stores the N elements of the first
//    row, followed by the N-1 elements of the first column (skipping the
//    entry in the first row).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    06 November 1998
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A[2*N-1], the R8TO matrix.
//
//    Input, double X[N], the vector to be multiplied by A.
//
//    Output, double R8TO_MV[N], the product A * x.
//
{
  double *b;
  int i;
  int j;

  b = r8vec_zeros_new ( n );

  for ( i = 0; i < n; i++ )
  {
    for ( j = 0; j < i; j++ )
    {
      b[i] = b[i] + a[n+i-j-1] * x[j];
    }
    for ( j = i; j < n; j++ )
    {
      b[i] = b[i] + a[j-i] * x[j];
    }
  }

  return b;
}
//****************************************************************************80

void r8to_print ( int n, double a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8TO_PRINT prints an R8TO matrix.
//
//  Discussion:
//
//    The R8TO storage format is used for a Toeplitz matrix, which is constant
//    along diagonals.  Thus, in an N by N Toeplitz matrix, there are at most 
//    2*N-1 distinct entries.  The format stores the N elements of the first
//    row, followed by the N-1 elements of the first column (skipping the
//    entry in the first row).
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
//    Input, double A[2*N-1], the R8TO matrix.
//
//    Input, string TITLE, a title.
//
{
  r8to_print_some ( n, a, 1, 1, n, n, title );

  return;
}
//****************************************************************************80

void r8to_print_some ( int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8TO_PRINT_SOME prints some of an R8TO matrix.
//
//  Discussion:
//
//    The R8TO storage format is used for a Toeplitz matrix, which is constant
//    along diagonals.  Thus, in an N by N Toeplitz matrix, there are at most 
//    2*N-1 distinct entries.  The format stores the N elements of the first
//    row, followed by the N-1 elements of the first column (skipping the
//    entry in the first row).
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
//    Input, double A[2*N-1], the R8TO matrix.
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
//
//  Print out (up to) 5 entries in row I, that lie in the current strip.
//
      cout << setw(4) << i << "  ";

      for ( j = j2lo; j <= j2hi; j++ )
      {
        if ( i <= j ) 
        {
          cout << setw(12) << a[j-i] << "  ";
        }
        else
        {
          cout << setw(12) << a[n+i-j-1] << "  ";
        }
      }
      cout << "\n";
    }
  }

  cout << "\n";

  return;
# undef INCX
}
//****************************************************************************80

double *r8to_random ( int n, int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    R8TO_RANDOM randomizes an R8TO matrix.
//
//  Discussion:
//
//    The R8TO storage format is used for a Toeplitz matrix, which is constant
//    along diagonals.  Thus, in an N by N Toeplitz matrix, there are at most 
//    2*N-1 distinct entries.  The format stores the N elements of the first
//    row, followed by the N-1 elements of the first column (skipping the
//    entry in the first row).
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
//    N must be positive.
//
//    Input/output, int &SEED, a seed for the random number generator.
//
//    Output, double R8TO_RANDOM[2*N-1], the R8TO matrix.
//
{
  double *a;

  a = r8vec_uniform_01_new ( 2 * n - 1, seed );

  return a;
}
//****************************************************************************80

double *r8to_sl ( int n, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8TO_SL solves A*x=b, where A is an R8TO matrix.
//
//  Discussion:
//
//    The R8TO storage format is used for a Toeplitz matrix, which is constant
//    along diagonals.  Thus, in an N by N Toeplitz matrix, there are at most 
//    2*N-1 distinct entries.  The format stores the N elements of the first
//    row, followed by the N-1 elements of the first column (skipping the
//    entry in the first row).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    25 September 2015
//
//  Author:
//
//    John Burkardt.
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A[2*N-1], the R8TO matrix.
//
//    Input, double B[N] the right hand side vector.
//
//    Output, double R8TO_SL[N], the solution vector.  X and B may share the
//    same storage.
//
{
  double *c1;
  double *c2;
  int i;
  int nsub;
  double r1;
  double r2;
  double r3;
  double r5;
  double r6;
  double *x;

  if ( n < 1 )
  {
    return NULL;
  }

  x = new double[n];
//
//  Solve the system with the principal minor of order 1.
//
  r1 = a[0];
  x[0] = b[0] / r1;

  if ( n == 1 )
  {
    return x;
  }

  c1 = new double[n-1];
  c2 = new double[n-1];
//
//  Recurrent process for solving the system with the Toeplitz matrix.
//
  for ( nsub = 2; nsub <= n; nsub++ )
  {
//
//  Compute multiples of the first and last columns of the inverse of
//  the principal minor of order NSUB.
//
    r5 = a[n+nsub-2];
    r6 = a[nsub-1];

    if ( 2 < nsub )
    {
      c1[nsub-2] = r2;

      for ( i = 1; i <= nsub-2; i++ )
      {
        r5 = r5 + a[n+i-1] * c1[nsub-i-1];
        r6 = r6 + a[i] * c2[i-1];
      }
    }

    r2 = - r5 / r1;
    r3 = - r6 / r1;
    r1 = r1 + r5 * r3;

    if ( 2 < nsub )
    {
      r6 = c2[0];
      c2[nsub-2] = 0.0;

      for ( i = 2; i <= nsub-1; i++ )
      {
        r5 = c2[i-1];
        c2[i-1] = c1[i-1] * r3 + r6;
        c1[i-1] = c1[i-1] + r6 * r2;
        r6 = r5;
      }
    }

    c2[0] = r3;
//
//  Compute the solution of the system with the principal minor of order NSUB.
//
    r5 = 0.0;
    for ( i = nsub - 1; 1 <= i; i-- )
    {
      r5 = r5 + a[n+nsub-i-1] * x[i-1];
    }

    r6 = ( b[nsub-1] - r5 ) / r1;

    for ( i = 0; i < nsub-1; i++ )
    {
      x[i] = x[i] + c2[i] * r6;
    }
    x[nsub-1] = r6;
  }

  delete [] c1;
  delete [] c2;

  return x;
}
//****************************************************************************80

double *r8to_slt ( int n, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8TO_SLT solves A'*x=b, where A is an R8TO matrix.
//
//  Discussion:
//
//    The R8TO storage format is used for a Toeplitz matrix, which is constant
//    along diagonals.  Thus, in an N by N Toeplitz matrix, there are at most 
//    2*N-1 distinct entries.  The format stores the N elements of the first
//    row, followed by the N-1 elements of the first column (skipping the
//    entry in the first row).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    25 September 2015
//
//  Author:
//
//    John Burkardt.
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A[2*N-1], the R8TO matrix.
//
//    Input, double B[N] the right hand side vector.
//
//    Output, double R8TO_SLT[N], the solution vector.  X and B may share the
//    same storage.
//
{
  double *c1;
  double *c2;
  int i;
  int nsub;
  double r1;
  double r2;
  double r3;
  double r5;
  double r6;
  double *x;

  if ( n < 1 )
  {
    return NULL;
  }

  x = new double[n];
//
//  Solve the system with the principal minor of order 1.
//
  r1 = a[0];
  x[0] = b[0] / r1;

  if ( n == 1 )
  {
    return x;
  }

  c1 = new double[n-1];
  c2 = new double[n-1];
//
//  Recurrent process for solving the system with the Toeplitz matrix.
//
  for ( nsub = 2; nsub <= n; nsub++ )
  {
//
//  Compute multiples of the first and last columns of the inverse of
//  the principal minor of order NSUB.
//
    r5 = a[nsub-1];
    r6 = a[n+nsub-2];

    if ( 2 < nsub )
    {
      c1[nsub-2] = r2;

      for ( i = 1; i <= nsub-2; i++ )
      {
        r5 = r5 + a[i] * c1[nsub-i-1];
        r6 = r6 + a[n+i-1] * c2[i-1];
      }
    }

    r2 = - r5 / r1;
    r3 = - r6 / r1;
    r1 = r1 + r5 * r3;

    if ( 2 < nsub )
    {
      r6 = c2[0];
      c2[nsub-2] = 0.0;

      for ( i = 2; i <= nsub-1; i++ )
      {
        r5 = c2[i-1];
        c2[i-1] = c1[i-1] * r3 + r6;
        c1[i-1] = c1[i-1] + r6 * r2;
        r6 = r5;
      }
    }

    c2[0] = r3;
//
//  Compute the solution of the system with the principal minor of order NSUB.
//
    r5 = 0.0;
    for ( i = nsub-1; 1 <= i; i-- )
    {
      r5 = r5 + a[nsub-i] * x[i-1];
    }

    r6 = ( b[nsub-1] - r5 ) / r1;

    for ( i = 0; i < nsub-1; i++ )
    {
      x[i] = x[i] + c2[i] * r6;
    }
    x[nsub-1] = r6;
  }

  delete [] c1;
  delete [] c2;

  return x;
}
//****************************************************************************80

double *r8to_to_r8ge ( int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8TO_TO_R8GE copies an R8TO matrix to an R8GE matrix.
//
//  Discussion:
//
//    The R8TO storage format is used for a Toeplitz matrix, which is constant
//    along diagonals.  Thus, in an N by N Toeplitz matrix, there are at most 
//    2*N-1 distinct entries.  The format stores the N elements of the first
//    row, followed by the N-1 elements of the first column (skipping the
//    entry in the first row).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    23 September 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A[2*N-1], the R8TO matrix.
//
//    Output, double R8TO_TO_R8GE[N*N], the R8GE matrix.
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
      b[i+j*n] = a[n+i-j-1];
    }
    for ( j = i; j < n; j++ )
    {
      b[i+j*n] = a[j-i];
    }
  }

  return b;
}
//****************************************************************************80

double *r8to_zeros ( int n )

//****************************************************************************80
//
//  Purpose:
//
//    R8TO_ZEROS zeros an R8TO matrix.
//
//  Discussion:
//
//    The R8TO storage format is used for a Toeplitz matrix, which is constant
//    along diagonals.  Thus, in an N by N Toeplitz matrix, there are at most 
//    2*N-1 distinct entries.  The format stores the N elements of the first
//    row, followed by the N-1 elements of the first column (skipping the
//    entry in the first row).
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
//    Input, int N, the number of rows and columns of the matrix.
//    N must be positive.
//
//    Output, double R8TO_ZERO[2*N-1], the R8TO matrix.
//
{
  double *a;
  int i;

  a = r8vec_zeros_new ( 2 * n - 1 );

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

void r8vec_print_some ( int n, double a[], int i_lo, int i_hi, string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_PRINT_SOME prints "some" of an R8VEC.
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
//    16 October 2006
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
//    Input, integer I_LO, I_HI, the first and last indices to print.
//    The routine expects 1 <= I_LO <= I_HI <= N.
//
//    Input, string TITLE, a title.
//
{
  int i;

  cout << "\n";
  cout << title << "\n";
  cout << "\n";
  for ( i = i4_max ( 1, i_lo ); i <= i4_min ( n, i_hi ); i++ )
  {
    cout << "  " << setw(8)  << i
         << ": " << setw(14) << a[i-1]  << "\n";
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
