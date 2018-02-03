# include <cmath>
# include <cstdlib>
# include <ctime>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8ncf.hpp"

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

int *i4vec_zeros_new ( int n )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_ZEROS_NEW creates and zeroes an I4VEC.
//
//  Discussion:
//
//    An I4VEC is a vector of I4's.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 July 2008
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of entries in the vector.
//
//    Output, int I4VEC_ZEROS_NEW[N], a vector of zeroes.
//
{
  int *a;
  int i;

  a = new int[n];

  for ( i = 0; i < n; i++ )
  {
    a[i] = 0;
  }
  return a;
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

double *r8ncf_dif2 ( int m, int n, int nz_num, int rowcol[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8NCF_DIF2 sets up an R8NCF second difference matrix.
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
//    20 July 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns in
//    the matrix.
//
//    Input, int NZ_NUM, the number of nonzero entries.
//
//    Input, int ROWCOL[2,NZ_NUM], the coordinates of 
//    the nonzero entries.
//
//    Output, double A[NZ_NUM], the matrix.
//
{
  double *a;
  int i;
  int j;
  int k;

  a = r8vec_zeros_new ( nz_num );

  for ( k = 0; k < nz_num; k++ )
  {
    i = rowcol[0+k*2];
    j = rowcol[1+k*2];

    if ( j == i - 1 )
    {
      a[k] = -1.0;
    }
    else if ( j == i )
    {
      a[k] = 2.0;
    }
    else if ( j == i + 1 )
    {
      a[k] = -1.0;
    }
  }

  return a;
}
//****************************************************************************80

int r8ncf_dif2_nz_num ( int m, int n )

//****************************************************************************80
//
//  Purpose:
//
//    R8NCF_DIF2_NZ_NUM counts nonzeros in an R8NCF second difference matrix.
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
//    20 July 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns in
//    the matrix.
//
//    Output, int NZ_NUM, the number of nonzero entries.
//
{
  int nz_num;

  if ( m < n )
  {
    nz_num = 3 * m - 1;
  }
  else if ( m == n )
  {
    nz_num = 3 * n - 2;
  }
  else
  {
    nz_num = 3 * n - 1;
  }

  return nz_num;
}
//****************************************************************************80

int *r8ncf_dif2_rowcol ( int m, int n, int nz_num )

//****************************************************************************80
//
//  Purpose:
//
//    R8NCF_DIF2_ROWCOL sets indexing for an R8NCF second difference matrix.
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
//    20 July 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns in
//    the matrix.
//
//    Input, int NZ_NUM, the number of nonzero entries.
//
//    Output, int ROWCOL[2*NZ_NUM], the coordinates of 
//    the nonzero entries.
//
{
  int i;
  int j;
  int k;
  int *rowcol;

  rowcol = i4vec_zeros_new ( 2 * nz_num );

  k = 0;

  for ( i = 0; i < m; i++ )
  {
    j = i - 1;
    if ( 0 <= j && j < n )
    {
      rowcol[0+k*2] = i;
      rowcol[1+k*2] = j;
      k = k + 1;
    }

    j = i;
    if ( j < n )
    {
      rowcol[0+k*2] = i;
      rowcol[1+k*2] = j;
      k = k + 1;
    }

    j = i + 1;
    if ( j < n )
    {
      rowcol[0+k*2] = i;
      rowcol[1+k*2] = j;
      k = k + 1;
    }

  }

  return rowcol;
}
//****************************************************************************80

double *r8ncf_indicator ( int m, int n, int nz_num, int rowcol[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8NCF_INDICATOR sets up an R8NCF indicator matrix.
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
//    Input, int M, N, the number of rows and columns in the matrix.
//
//    Input, int NZ_NUM, the number of nonzero entries.
//
//    Input, int ROWCOL[2*NZ_NUM], the coordinates of the nonzero entries.
//
//    Output, double A[NZ_NUM], the indicator matrix.
//
{
  double *a;
  int fac;
  int i;
  int j;
  int k;

  a = r8vec_zeros_new ( nz_num );

  fac = i4_power ( 10, i4_log_10 ( n ) + 1 );

  for ( k = 0; k < nz_num; k++ )
  {
    i = rowcol[0+k*2];
    j = rowcol[1+k*2];
    a[k] = ( double ) ( fac * ( i + 1 ) + ( j + 1 ) );
  }

  return a;
}
//****************************************************************************80

double *r8ncf_mtv ( int m, int n, int nz_num, int rowcol[], double a[], 
  double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8NCF_MTV multiplies an R8VEC times an R8NCF matrix.
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
//    21 July 2016
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
//    Input, int ROWCOL[2*NZ_NUM], the row and column
//    indices of the nonzero elements.
//
//    Input, double A[NZ_NUM], the nonzero elements of the matrix.
//
//    Input, double X[M], the vector to be multiplied by A'.
//
//    Output, double R8NCF_MTV[N], the product A' * x.
//
{
  double *b;
  int i;
  int j;
  int k;

  b = r8vec_zeros_new ( n );

  for ( k = 0; k < nz_num; k++ )
  {
    i = rowcol[0+k*2];
    j = rowcol[1+k*2];
    b[j] = b[j] + a[k] * x[i];
  }

  return b;
}
//****************************************************************************80

double *r8ncf_mv ( int m, int n, int nz_num, int rowcol[], double a[], 
  double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8NCF_MV multiplies an R8NCF matrix by an R8VEC.
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
//    21 July 2016
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
//    Input, int ROWCOL[2*NZ_NUM], the row and column 
//    indices of the nonzero elements.
//
//    Input, double A[NZ_NUM], the nonzero elements of the matrix.
//
//    Input, double X[N], the vector to be multiplied by A.
//
//    Output, double R8NCF_MV[M], the product A * x.
//
{
  double *b;
  int i;
  int j;
  int k;

  b = r8vec_zeros_new ( m );

  for ( k = 0; k < nz_num; k++ )
  {
    i = rowcol[0+k*2];
    j = rowcol[1+k*2];
    b[i] = b[i] + a[k] * x[j];
  }

  return b;
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
  r8ncf_print_some ( m, n, nz_num, rowcol, a, 0, 0, m - 1, n - 1, title );

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
//    20 July 2016
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

  double aij;
  int i;
  int i2hi;
  int i2lo;
  int j;
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
    i2lo = i4_max ( ilo, 0 );
    i2hi = i4_min ( ihi, m - 1 );

    for ( i = i2lo; i <= i2hi; i++ )
    {
      cout << setw(5) << i;
      for ( j = j2lo; j <= j2hi; j++ )
      {
        aij = 0.0;
        for ( k = 0; k < nz_num; k++ )
        {
          if ( rowcol[0+k*2] == i && rowcol[1+k*2] == j )
          {
            aij = a[k];
            break;
          }
        }
        cout << "  " << setw(12) << aij;
      }
      cout << "\n";
    }
  }
  return;
# undef INCX
}
//****************************************************************************80

double *r8ncf_random ( int m, int n, int nz_num, int rowcol[], int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    R8NCF_RANDOM randomizes an R8NCF matrix.
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
//    21 July 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns in
//    the matrix.
//
//    Input, int NZ_NUM, the number of nonzero entries.
//
//    Input, int ROWCOL[2*NZ_NUM], the coordinates of 
//    the nonzero entries.
//
//    Input/output, int &SEED, a seed for the random 
//    number generator.
//
//    Output, double R8NCF_RANDOM[NZ_NUM], the indicator matrix.
//
{
  double *a;
  int i;
  int j;
  int k;

  a = r8vec_zeros_new ( nz_num );

  for ( k = 0; k < nz_num; k++ )
  {
    i = rowcol[0+k*2];
    j = rowcol[1+k*2];
    a[k] = r8_uniform_01 ( seed );
  }

  return a;
}
//****************************************************************************80

double *r8ncf_to_r8ge ( int m, int n, int nz_num, int rowcol[], double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8NCF_TO_R8GE converts an R8NCF matrix to R8GE format.
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
//    21 July 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns in
//    the matrix.
//
//    Input, int NZ_NUM, the number of nonzero entries.
//
//    Input, int ROWCOL[2*NZ_NUM], the coordinates of 
//    the nonzero entries.
//
//    Input, double A[NZ_NUM], the matrix.
//
//    Output, double R8NCF_TO_R8GE[M*N], the R8GE matrix.
//
{
  double *a_r8ge;
  int i;
  int j;
  int k;

  a_r8ge = r8vec_zeros_new ( m * n );

  for ( k = 0; k < nz_num; k++ )
  {
    i = rowcol[0+k*2];
    j = rowcol[1+k*2];
    a_r8ge[i+j*m] = a_r8ge[i+j*m] + a[k];
  }

  return a_r8ge;
}
//****************************************************************************80

double *r8ncf_zeros ( int m, int n, int nz_num, int rowcol[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8NCF_ZEROS zeros an R8NCF matrix.
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
//    18 August 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns in the matrix.
//
//    Input, int NZ_NUM, the number of nonzero entries.
//
//    Input, int ROWCOL[2*NZ_NUM], the coordinates of the nonzero entries.
//
//    Output, double R8NCF_ZEROS[NZ_NUM], the matrix.
//
{
  double *a;

  a = r8vec_zeros_new ( nz_num );

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
