# include <cmath>
# include <cstring>
# include <ctime>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8utt.hpp"

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

double *r8ge_mtm ( int n, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_MTM computes C=A'*B for R8GE matrices.
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
//    04 August 2015
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
//    Input, double A[N*N], B[N*N], the factors.
//
//    Output, double C[N*N], the product.
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
        c[i+j*n] = c[i+j*n] + a[k+i*n] * b[k+j*n];
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

double r8utt_det ( int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8UTT_DET computes the determinant of a R8UTT matrix.
//
//  Discussion:
//
//    The R8UTT storage format is used for an N by N upper triangular Toeplitz
//    matrix.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    16 November 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A[N], the matrix.
//
//    Output, double R8UTT_DET, the determinant of the matrix.
//
{
  double det;

  det = pow ( a[0], n );

  return det;
}
//****************************************************************************80

double *r8utt_indicator ( int n )

//****************************************************************************80
//
//  Purpose:
//
//    R8UTT_INDICATOR sets up a R8UTT indicator matrix.
//
//  Discussion:
//
//    The R8UTT storage format is used for an N by N upper triangular Toeplitz
//    matrix.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    16 November 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Output, double A[N], the matrix.
//
{
  double *a;
  int j;

  a = new double[n];

  for ( j = 0; j < n; j++ )
  {
    a[j] = ( double ) ( j + 1 );
  }

  return a;
}
//****************************************************************************80

double *r8utt_inverse ( int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8UTT_INVERSE computes the inverse of a R8UTT matrix.
//
//  Discussion:
//
//    The R8UTT storage format is used for an N by N upper triangular Toeplitz
//    matrix.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    16 November 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A[N], the matrix to be inverted.
//
//    Output, double R8UTT_INVERSE[N], the inverse matrix.
//
{
  double *b;
  double d;
  int i;
  int j;
  double *p;
  double *pn;
  double *pnn;
//
//  Initialize B.
//
  d = 1.0 / a[0];
  b = new double[n];
  b[0] = d;
  for ( i = 1; i < n; i++ )
  {
    b[i] = 0.0;
  }
//
//  Set the strict upper triangle.
//
  p = new double[n];
  p[0] = 0.0;
  for ( i = 1; i < n; i++ )
  {
    p[i] = a[i];
  }
//
//  PN will hold powers of P.
//
  pn = new double[n];
  pn[0] = 1.0;
  for ( i = 1; i < n; i++ )
  {
    pn[i] = 0.0;
  }
//
//  Add N-1 powers of strict upper triangle.
//
  for ( j = 1; j < n; j++ )
  {
    d = - d / a[0];
    pnn = r8utt_mm ( n, p, pn );
    for ( i = 0; i < n; i++ )
    {
      b[i] = b[i] + d  * pnn[i];
      pn[i] = pnn[i];
    }
    delete [] pnn;
  }

  delete [] p;
  delete [] pn;

  return b;
}
//****************************************************************************80

double *r8utt_mm ( int n, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8UTT_MM computes C = A * B, where A and B are R8UTT matrices.
//
//  Discussion:
//
//    The R8UTT storage format is used for an N by N upper triangular Toeplitz
//    matrix.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    16 November 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrices.
//
//    Input, double A[N], the first factor.
//
//    Input, double B[N], the second factor.
//
//    Output, double R8UTT_MM[N], the product.
//
{
  double *c;
  double *d;
  double *e;
  int k;

  d = new double[n];

  for ( k = 0; k < n; k++ )
  {
    d[k] = b[n-1-k];
  }

  e = r8utt_mv ( n, a, d );

  c = new double[n];

  for ( k = 0; k < n; k++ )
  {
    c[k] = e[n-1-k];
  }

  delete [] d;
  delete [] e;

  return c;
}
//****************************************************************************80

double *r8utt_mtm ( int n, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8UTT_MTM computes C = A' * B, where A and B are R8UTT matrices.
//
//  Discussion:
//
//    The R8UTT storage format is used for an N by N upper triangular Toeplitz
//    matrix.
//
//    Note that the result C is a dense matrix, of type R8GE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    16 November 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrices.
//
//    Input, double A[N], B[N], the factors.
//
//    Output, double R8UTT_MTM[N*N], the product.
//
{
  double *c;
  int i;
  int j;
  int k;

  c = new double[n*n];

  for ( i = 0; i < n; i++ )
  {
    for ( j = 0; j < n; j++ )
    {
      c[i+j*n] = 0.0;
      for ( k = 0; k <= i4_min ( i, j ); k++ )
      {
        c[i+j*n] = c[i+j*n] + a[i-k] * b[j-k];
      }
    }
  }

  return c;
}
//****************************************************************************80

double *r8utt_mtv ( int n, double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8UTT_MTV computes b = A'*x, where A is an R8UTT matrix.
//
//  Discussion:
//
//    The R8UTT storage format is used for an N by N upper triangular Toeplitz
//    matrix.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    16 November 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A[N], the matrix.
//
//    Input, double X[N], the vector to be multiplied by A.
//
//    Output, double R8UTT_MTV[N], the product A' * x.
//
{
  double *b;
  int d;
  int i;
  int j;

  b = new double[n];

  for ( j = 0; j < n; j++ )
  {
    b[j] = 0.0;
  }

  for ( d = 0; d < n; d++ )
  {
    for ( j = d; j < n; j++ )
    {
      i = j - d;
      b[j] = b[j] + a[j-i] * x[i];
    }
  }

  return b;
}
//****************************************************************************80

double *r8utt_mv ( int n, double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8UTT_MV computes b=A*x, where A is an R8UTT matrix.
//
//  Discussion:
//
//    The R8UTT storage format is used for an N by N upper triangular Toeplitz
//    matrix.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    16 November 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A[N], the matrix.
//
//    Input, double X[N], the vector to be multiplied by A.
//
//    Output, double R8UTT_MV[N], the product A * x.
//
{
  double *b;
  int d;
  int i;
  int j;

  b = new double[n];

  for ( i = 0; i < n; i++ )
  {
    b[i] = 0.0;
  }

  for ( d = 0; d < n; d++ )
  {
    for ( j = d; j < n; j++ )
    {
      i = j - d;
      b[i] = b[i] + a[j-i] * x[j];
    }
  }

  return b;
}
//****************************************************************************80

void r8utt_print ( int n, double a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8UTT_PRINT prints an R8UTT matrix.
//
//  Discussion:
//
//    The R8UTT storage format is used for an N by N upper triangular Toeplitz
//    matrix.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    16 November 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of rows and columns of the matrix.
//
//    Input, double A[N], the R8UTT matrix.
//
//    Input, string TITLE, a title.
//
{
  r8utt_print_some ( n, a, 0, 0, n - 1, n - 1, title );

  return;
}
//****************************************************************************80

void r8utt_print_some ( int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8UTT_PRINT_SOME prints some of an R8UTT matrix.
//
//  Discussion:
//
//    The R8UTT storage format is used for an N by N upper triangular Toeplitz
//    matrix.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    16 November 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of rows and columns of the matrix.
//
//    Input, double A[N], the R8UTT matrix.
//
//    Input, int ILO, JLO, IHI, JHI, designate the first row and
//    column, and the last row and column to be printed.
//    0 <= ILO <= IHI < M.
//    0 <= JLO <= JHI < N.
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
//
//  Print out (up to) 5 entries in row I, that lie in the current strip.
//
      cout << setw(4) << i << "  ";

      for ( j = j2lo; j <= j2hi; j++ )
      {
        if ( j < i )
        {
          cout << "              ";
        }
        else
        {
          cout << setw(12) << a[j-i] << "  ";
        }
      }
      cout << "\n";
    }
  }

  return;
# undef INCX
}
//****************************************************************************80

double *r8utt_random ( int n, int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    R8UTT_RANDOM randomizes an R8UTT matrix.
//
//  Discussion:
//
//    The R8UTT storage format is used for an N by N upper triangular Toeplitz
//    matrix.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    16 November 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input/output, int &SEED, a seed for the random number generator.
//
//    Output, double R8UTT_RANDOM[N], the R8UTT matrix.
//
{
  double *a;

  a = r8vec_uniform_01_new ( n, seed );

  return a;
}
//****************************************************************************80

double *r8utt_sl ( int n, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8UTT_SL solves a linear system A*x=b with an R8UTT matrix.
//
//  Discussion:
//
//    The R8UTT storage format is used for an N by N upper triangular Toeplitz
//    matrix.
//
//    No factorization of the upper triangular matrix is required.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    16 November 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A[N], the R8UTT matrix.
//
//    Input, double B[N], the right hand side.
//
//    Output, double R8UTT_SL[N], the solution vector.
//
{
  int i;
  int j;
  double *x;

  x = new double[n];

  for ( j = 0; j < n; j++ )
  {
    x[j] = b[j];
  }

  for ( j = n - 1; 0 <= j; j-- )
  {
    x[j] = x[j] / a[0];
    for ( i = 0; i < j; i++ )
    {
      x[i] = x[i] - a[j-i] * x[j];
    }
  }

  return x;
}
//****************************************************************************80

double *r8utt_slt ( int n, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8UTT_SLT solves a linear system A'*x=b with an R8UTT matrix.
//
//  Discussion:
//
//    The R8UTT storage format is used for an N by N upper triangular Toeplitz
//    matrix.
//
//    No factorization of the upper triangular matrix is required.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    16 November 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A[N], the R8UTT matrix.
//
//    Input, double B[N], the right hand side.
//
//    Output, double R8UTT_SLT[N], the solution vector.
//
{
  int i;
  int j;
  double *x;

  x = new double[n];
  for ( j = 0; j < n; j++ )
  {
    x[j] = b[j];
  }

  for ( j = 0; j < n; j++ )
  {
    x[j] = x[j] / a[0];
    for ( i = j + 1; i < n; i++ )
    {
      x[i] = x[i] - x[j] * a[i-j];
    }
  }

  return x;
}
//****************************************************************************80

double *r8utt_to_r8ge ( int n, double a_utt[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8UTT_TO_R8GE copies an R8UTT matrix to an R8GE matrix.
//
//  Discussion:
//
//    The R8GE storage format is used for a general M by N matrix.  A storage 
//    space is made for each entry.  The two dimensional logical
//    array can be thought of as a vector of M*N entries, starting with
//    the M entries in the column 1, then the M entries in column 2
//    and so on.  Considered as a vector, the entry A(I,J) is then stored
//    in vector location I+(J-1)*M.
//
//    The R8UTT storage format is used for an N by N upper triangular Toeplitz
//    matrix.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    14 November 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A_UTT[N], the R8UTT matrix.
//
//    Output, double R8UTT_TO_R8GE[N*N], the R8GE matrix.
//
{
  double *a_ge;
  int d;
  int i;
  int j;

  a_ge = new double[n*n];

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < n; i++ )
    {
      a_ge[i+j*n] = 0.0;
    }
  }

  for ( d = 0; d < n; d++ )
  {
    for ( j = d; j < n; j++ )
    {
      i = j - d;
      a_ge[i+j*n] = a_utt[j-i];
    }
  }

  return a_ge;
}
//****************************************************************************80

double *r8utt_zeros ( int n )

//****************************************************************************80
//
//  Purpose:
//
//    R8UTT_ZEROS zeros an R8UTT matrix.
//
//  Discussion:
//
//    The R8UTT storage format is used for an N by N upper triangular Toeplitz
//    matrix.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    16 November 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of rows and columns of the matrix.
//
//    Output, double R8UTT_ZEROS[M*N], the R8UTT matrix.
//
{
  double *a;
  int i;
  int j;

  a = new double[n];

  for ( i = 0; i < n; i++ )
  {
    a[i] = 0.0;
  }

  return a;
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
