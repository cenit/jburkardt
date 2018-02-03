# include <cmath>
# include <cstdlib>
# include <ctime>
# include <fstream>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8ut.hpp"

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
//    I4_MAX returns the maximum of two integers.
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
//
{
  if ( i2 < i1 )
  {
    return i1;
  }
  else
  {
    return i2;
  }

}
//****************************************************************************80

int i4_min ( int i1, int i2 )

//****************************************************************************80
//
//  Purpose:
//
//    I4_MIN returns the smaller of two integers.
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
  if ( i1 < i2 )
  {
    return i1;
  }
  else
  {
    return i2;
  }

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

double *r8ge_random ( int m, int n, int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_RANDOM randomizes an R8GE matrix.
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
//    15 January 2004
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
//    Input/output, int &SEED, a seed for the random number generator.
//
//    Output, double R8GE_RANDOM[M*N], the randomized M by N matrix, 
//    with entries between 0 and 1.
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
      a[i+j*m] = r8_uniform_01 ( seed );
    }
  }
  return a;
}
//****************************************************************************80

double *r8ge_to_r8ut ( int m, int n, double a_ge[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_TO_R8UT copies an R8GE matrix to an R8UT matrix.
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
//    The R8UT storage format is used for an M by N upper triangular matrix,
//    and allocates space even for the zero entries.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    19 August 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the order of the matrix.
//
//    Input, double A_GE[M,N], the R8GE matrix.
//
//    Output, double R8GE_TO_R8UT[M,N], the R8UT matrix.
//
{
  double *a_ut;
  int i;
  int j;

  a_ut = new double[m*n];

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < m; i++ )
    {
      if ( i <= j ) 
      {
        a_ut[i+j*m] = a_ge[i+j*m];
      }
      else
      {
        a_ut[i+j*m] = 0.0;
      }
    }
  }

  return a_ut;
}
//****************************************************************************80

double r8ut_det ( int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8UT_DET computes the determinant of an R8UT matrix.
//
//  Discussion:
//
//    The R8UT storage format is used for an M by N upper triangular matrix,
//    and allocates space even for the zero entries.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    28 September 2003
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
//    Input, double A[N*N], the R8UT matrix.
//
//    Output, double R8UT_DET, the determinant of the matrix.
//
{
  double det;
  int i;

  det = 1.0;

  for ( i = 0; i < n; i++ )
  {
    det = det * a[i+i*n];
  }

  return det;
}
//****************************************************************************80

double *r8ut_indicator ( int m, int n )

//****************************************************************************80
//
//  Purpose:
//
//    R8UT_INDICATOR sets up an R8UT indicator matrix.
//
//  Discussion:
//
//    The R8UT storage format is used for an M by N upper triangular matrix,
//    and allocates space even for the zero entries.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    01 February 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns of the matrix.
//    M and N must be positive.
//
//    Output, double R8UT_INDICATOR[M*N], the R8UT matrix.
//
{
  double *a;
  int fac;
  int i;
  int j;

  a = new double[m*n];

  fac = i4_power ( 10, i4_log_10 ( n ) + 1 );

  for ( i = 1; i <= m; i++ )
  {
    for ( j = 1; j <= i4_min ( i-1, n ); j++ )
    {
      a[i-1+(j-1)*m] = 0.0;
    }
    for ( j = i; j <= n; j++ )
    {
      a[i-1+(j-1)*m] = ( double ) ( fac * i + j );
    }
  }

  return a;
}
//****************************************************************************80

double *r8ut_inverse ( int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8UT_INVERSE computes the inverse of an R8UT matrix.
//
//  Discussion:
//
//    The R8UT storage format is used for an M by N upper triangular matrix,
//    and allocates space even for the zero entries.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    28 September 2003
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Albert Nijenhuis, Herbert Wilf,
//    Combinatorial Algorithms,
//    Academic Press, 1978, second edition,
//    ISBN 0-12-519260-6
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A[N*N], the R8UT matrix.
//
//    Output, double R8UT_INVERSE[N*N], the inverse of the upper
//    triangular matrix.
//
{
  double *b;
  int i;
  int j;
  int k;
//
//  Check.
//
  for ( i = 0; i < n; i++ )
  {
    if ( a[i+i*n] == 0.0 )
    {
      cerr << "\n";
      cerr << "R8UT_INVERSE - Fatal error!\n";
      cerr << "  Zero diagonal element.\n";
      exit ( 1 );
    }
  }

  b = new double[n*n];

  for ( j = n-1; 0 <= j; j-- )
  {
    for ( i = n-1; 0 <= i; i-- )
    {
      if ( j < i )
      {
        b[i+j*n] = 0.0;
      }
      else if ( i == j )
      {
        b[i+j*n] = 1.0 / a[i+j*n];
      }
      else if ( i < j )
      {
        b[i+j*n] = 0.0;

        for ( k = i+1; k <= j; k++ )
        {
          b[i+j*n] = b[i+j*n] - a[i+k*n] * b[k+j*n];
        }
        b[i+j*n] = b[i+j*n] / a[i+i*n];
      }
    }
  }

  return b;
}
//****************************************************************************80

double *r8ut_mm ( int n, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8UT_MM computes C = A * B, where A and B are R8UT matrices.
//
//  Discussion:
//
//    The R8UT storage format is used for an M by N upper triangular matrix,
//    and allocates space even for the zero entries.
//
//    The product C will also be an upper trangular matrix.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 August 2015
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
//    Input, double A[N*N], B[N*N], the R8UT factor matrices.
//
//    Output, double R8UT_MM[N*N], the R8UT product matrix.
//
{
  double *c;
  int i;
  int j;
  int k;

  c = new double[n*n];

  for ( i = 0; i < n; i++ )
  {
    for ( j = 0; j < i; j++ )
    {
      c[i+j*n] = 0.0;
    }
    for ( j = i; j < n; j++ )
    {
      c[i+j*n] = 0.0;
      for ( k = i; k <= j; k++ )
      {
        c[i+j*n] = c[i+j*n] + a[i+k*n] * b[k+j*n];
      }
    }
  }

  return c;
}
//****************************************************************************80

double *r8ut_mtm ( int n, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8UT_MTM computes C = A' * B, where A and B are R8UT matrices.
//
//  Discussion:
//
//    The R8UT storage format is used for an M by N upper triangular matrix,
//    and allocates space even for the zero entries.
//
//    The product C will NOT be an R8UT matrix.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 August 2015
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
//    Output, double R8UT_MTM[N*N], the product.
//
{
  double *c;
  int i;
  int j;
  int k;
  int k_hi;

  c = new double[n*n];

  for ( i = 0; i < n; i++ )
  {
    for ( j = 0; j < n; j++ )
    {
      k_hi = i4_min ( i, j );
      c[i+j*n] = 0.0;
      for ( k = 0; k <= k_hi; k++ )
      {
        c[i+j*n] = c[i+j*n] + a[k+i*n] * b[k+j*n];
      }
    }
  }

  return c;
}
//****************************************************************************80

double *r8ut_mtv ( int m, int n, double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8UT_MTV multiplies a vector times an R8UT matrix.
//
//  Discussion:
//
//    The R8UT storage format is used for an M by N upper triangular matrix,
//    and allocates space even for the zero entries.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    28 September 2003
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
//    Input, double A[M*N], the R8UT matrix.
//
//    Input, double X[M], the vector to be multiplied by A.
//
//    Output, double R8UT_MTV[N], the product A' * x.
//
{
  double *b;
  int i;
  int j;

  b = new double[n];

  for ( j = 0; j < n; j++ )
  {
    b[j] = 0.0;
    for ( i = 0; i <= j && i < m; i++ )
    {
      b[j] = b[j] + x[i] * a[i+j*m];
    }
  }

  return b;
}
//****************************************************************************80

double *r8ut_mv ( int m, int n, double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8UT_MV multiplies an R8UT matrix times a vector.
//
//  Discussion:
//
//    The R8UT storage format is used for an M by N upper triangular matrix,
//    and allocates space even for the zero entries.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    28 September 2003
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
//    Input, double A[M*N], the R8UT matrix.
//
//    Input, double X[N], the vector to be multiplied by A.
//
//    Output, double R8UT_MV[M], the product A * x.
//
{
  double *b;
  int i;
  int j;

  b = new double[m];

  for ( i = 0; i < m; i++ )
  {
    b[i] = 0.0;
    for ( j = i; j < n; j++ )
    {
      b[i] = b[i] + a[i+j*m] * x[j];
    }
  }

  return b;
}
//****************************************************************************80

void r8ut_print ( int m, int n, double a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8UT_PRINT prints an R8UT matrix.
//
//  Discussion:
//
//    The R8UT storage format is used for an M by N upper triangular matrix,
//    and allocates space even for the zero entries.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    18 August 2015
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
//    Input, double A[M*N], the R8UT matrix.
//
//    Input, string TITLE, a title.
//
{
  r8ut_print_some ( m, n, a, 0, 0, m - 1, n - 1, title );

  return;
}
//****************************************************************************80

void r8ut_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8UT_PRINT_SOME prints some of an R8UT matrix.
//
//  Discussion:
//
//    The R8UT storage format is used for an M by N upper triangular matrix,
//    and allocates space even for the zero entries.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    18 August 2015
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
//    Input, double A[M*N], the R8UT matrix.
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

    i2hi = i4_min ( ihi, m - 1 );

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
          cout << setw(12) << a[i+j*m] << "  ";
        }
      }
      cout << "\n";
    }
  }

  return;
# undef INCX
}
//****************************************************************************80

double *r8ut_random ( int m, int n, int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    R8UT_RANDOM randomizes an R8UT matrix.
//
//  Discussion:
//
//    The R8UT storage format is used for an M by N upper triangular matrix,
//    and allocates space even for the zero entries.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    18 August 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns of the matrix.
//    M and N must be positive.
//
//    Input/output, int &SEED, a seed for the random number generator.
//
//    Output, double R8UT_RANDOM[M*N], the R8UT matrix.
//
{
  double *a;
  int i;
  int j;

  a = new double[m*n];

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i <= i4_min ( j, m - 1 ); i++ )
    {
      a[i+j*m] = r8_uniform_01 ( seed );
    }
    for ( i = j + 1; i < m; i++ )
    {
      a[i+j*m] = 0.0;
    }
  }

  return a;
}
//****************************************************************************80

double *r8ut_sl ( int n, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8UT_SL solves a linear system A*x=b with R8UT matrix.
//
//  Discussion:
//
//    The R8UT storage format is used for an M by N upper triangular matrix,
//    and allocates space even for the zero entries.
//
//    No factorization of the upper triangular matrix is required.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 August 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A[N*N], the R8UT matrix.
//
//    Input, double B[N], the right hand side.
//
//    Output, double R8UT_SL[N], the solution vector.
//
{
  int i;
  int j;
  double *x;

  x = new double[n];

  for ( i = 0; i < n; i++ )
  {
    x[i] = b[i];
  }

  for ( j = n-1; 0 <= j; j-- )
  {
    x[j] = x[j] / a[j+j*n];
    for ( i = 0; i < j; i++ )
    {
      x[i] = x[i] - a[i+j*n] * x[j];
    }
  }

  return x;
}
//****************************************************************************80

double *r8ut_slt ( int n, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8UT_SLT solves a linear system A'*x=b with R8UT matrix.
//
//  Discussion:
//
//    The R8UT storage format is used for an M by N upper triangular matrix,
//    and allocates space even for the zero entries.
//
//    No factorization of the upper triangular matrix is required.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 August 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A[N*N], the R8UT matrix.
//
//    Input, double B[N], the right hand side.
//
//    Output, double R8UT_SLT[N], the solution vector.
//
{
  int i;
  int j;
  double *x;

  x = new double[n];

  for ( i = 0; i < n; i++ )
  {
    x[i] = b[i];
  }

  for ( j = 0; j < n; j++ )
  {
    x[j] = x[j] / a[j+j*n];
    for ( i = j+1; i < n; i++ )
    {
      x[i] = x[i] - a[j+i*n] * x[j];
    }
  }

  return x;
}
//****************************************************************************80

double *r8ut_to_r8ge ( int m, int n, double a_ut[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8UT_TO_R8GE copies an R8UT matrix to an R8GE matrix.
//
//  Discussion:
//
//    The R8UT storage format is used for an M by N upper triangular matrix,
//    and allocates space even for the zero entries.
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
//    19 August 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the order of the matrix.
//
//    Input, double A_UT[M,N], the R8UT matrix.
//
//    Output, double R8UT_TO_R8GE[M,N], the R8GE matrix.
//
{
  double *a_ge;
  int i;
  int j;

  a_ge = new double[m*n];

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < m; i++ )
    {
      if ( i <= j ) 
      {
        a_ge[i+j*m] = a_ut[i+j*m];
      }
      else
      {
        a_ge[i+j*m] = 0.0;
      }
    }
  }

  return a_ge;
}
//****************************************************************************80

double *r8ut_zeros ( int m, int n )

//****************************************************************************80
//
//  Purpose:
//
//    R8UT_ZEROS zeros an R8UT matrix.
//
//  Discussion:
//
//    The R8UT storage format is used for an M by N upper triangular matrix,
//    and allocates space even for the zero entries.
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
//    Input, int M, the number of rows of the matrix.
//    M must be positive.
//
//    Input, int N, the number of columns of the matrix.
//    N must be positive.
//
//    Output, double R8UT_ZERO[M*N], the R8UT matrix.
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
