# include <cmath>
# include <cstdlib>
# include <ctime>
# include <fstream>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8sr.hpp"

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

void r8sr_dif2 ( int n, int &nz, int row[], int col[], double diag[], 
  double off[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8SR_DIF2 sets up an R8SR second difference matrix.
//
//  Discussion:
//
//    The R8SR storage format stores the diagonal of a sparse matrix in DIAG.
//    The off-diagonal entries of row I are stored in entries ROW(I)
//    through ROW(I+1)-1 of OFF.  COL(J) records the column index
//    of the entry in A(J).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    12 June 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Output, int &NZ, the number of offdiagonal nonzero elements
//    in the matrix.  NZ = 2 * N - 2.
//
//    Output, int ROW[N+1].  The nonzero offdiagonal elements 
//    of row I of A are contained in A(ROW(I)) through A(ROW(I+1)-1).
//
//    Output, int COL[NZ], contains the column index of the 
//    element in the corresponding position in A.
//
//    Output, double DIAG[N], the diagonal elements of A.
//
//    Output, double OFF[NZ], the off-diagonal elements of A.
//
{
  int i;
  int nz2;

  for ( i = 0; i < n; i++ )
  {
    diag[i] = - 2.0;
  }

  row[0] = 0;
  nz2 = 0;

  for ( i = 0; i < n; i++ )
  {
    if ( i == 0 )
    {
      col[nz2] = i + 1;
      off[nz2] = 1.0;
      nz2 = nz2 + 1;

      row[i+1] = row[i] + 1;
    }
    else if ( i < n - 1 )
    {
      col[nz2] = i - 1;
      off[nz2] = 1.0;
      nz2 = nz2 + 1;

      col[nz2] = i + 1;
      off[nz2] = 1.0;
      nz2 = nz2 + 1;

      row[i+1] = row[i] + 2;
    }
    else
    {
      col[nz2] = i - 1;
      off[nz2] = 1.0;
      nz2 = nz2 + 1;

      row[i+1] = row[i] + 1;
    }
  }

  return;
}
//****************************************************************************80

void r8sr_indicator ( int n, int nz, int row[], int col[], double diag[], 
  double off[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8SR_INDICATOR sets up an R8SR indicator matrix.
//
//  Discussion:
//
//    The R8SR storage format stores the diagonal of a sparse matrix in DIAG.
//    The off-diagonal entries of row I are stored in entries ROW(I)
//    through ROW(I+1)-1 of OFF.  COL(J) records the column index of the
//    the entry stored in OFF(J).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    13 June 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, int NZ, the number of offdiagonal nonzero elements in A.
//
//    Input, int ROW[N+1].  The nonzero offdiagonal elements of row I of A
//    are contained in A(ROW(I)) through A(ROW(I+1)-1).
//
//    Input, int COL[NZ], contains the column index of the element
//    in the corresponding position in A.
//
//    Output, double DIAG[N], the diagonal elements of A.
//
//    Output, double OFF[NZ], the off-diagonal elements of A.
//
{
  int fac;
  int i;
  int j;
  int k;

  fac = i4_power ( 10, i4_log_10 ( n ) + 1 );

  for ( i = 0; i < n; i++ )
  {
    j = i;
    diag[i] = ( double ) ( fac * ( i + 1 ) + ( j + 1 ) );

    for ( k = row[i]; k <= row[i+1] - 1; k++ )
    {
      j = col[k];
      off[k] = ( double ) ( fac * ( i + 1 ) + ( j + 1 ) );
    }
  }

  return;
}
//****************************************************************************80

double *r8sr_mtv ( int n, int nz, int row[], int col[], double diag[], 
  double off[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8SR_MTV multiplies a vector times an R8SR matrix.
//
//  Discussion:
//
//    The R8SR storage format stores the diagonal of a sparse matrix in DIAG.
//    The off-diagonal entries of row I are stored in entries ROW(I)
//    through ROW(I+1)-1 of OFF.  COL(J) records the column index of the
//    the entry stored in OFF(J).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    13 June 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, int NZ, the number of offdiagonal nonzero elements in A.
//
//    Input, int ROW[N+1].  The nonzero offdiagonal elements of row I of A
//    are contained in A(ROW(I)) through A(ROW(I+1)-1).
//
//    Input, int COL[NZ], contains the column index of the element
//    in the corresponding position in A.
//
//    Input, double DIAG[N], the diagonal elements of A.
//
//    Input, double OFF[NZ], the off-diagonal elements of A.
//
//    Input, double X[N], the vector to be multiplies by A.
//
//    Output, double R8SR_MTV[N], the product A' * X.
//
{
  double *b;
  int i;
  int j;
  int k;

  b = new double[n];

  for ( i = 0; i < n; i++ )
  {
    b[i] = diag[i] * x[i];
  }

  for ( i = 0; i < n; i++ )
  {
    for ( k = row[i]; k <= row[i+1] - 1; k++ )
    {
      j = col[k];
      b[j] = b[j] + off[k] * x[i];
    }
  }

  return b;
}
//****************************************************************************80

double *r8sr_mv ( int n, int nz, int row[], int col[], double diag[], 
  double off[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8SR_MV multiplies an R8SR matrix times a vector.
//
//  Discussion:
//
//    The R8SR storage format stores the diagonal of a sparse matrix in DIAG.
//    The off-diagonal entries of row I are stored in entries ROW(I)
//    through ROW(I+1)-1 of OFF.  COL(J) records the column index of the
//    the entry stored in OFF(J).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    13 June 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, int NZ, the number of offdiagonal nonzero elements in A.
//
//    Input, int ROW[N+1].  The nonzero offdiagonal elements of row I of A
//    are contained in A(ROW(I)) through A(ROW(I+1)-1).
//
//    Input, int COL[NZ], contains the column index of the element
//    in the corresponding position in A.
//
//    Input, double DIAG[N], the diagonal elements of A.
//
//    Input, double OFF[NZ], the off-diagonal elements of A.
//
//    Input, double X[N], the vector to be multiplied by A.
//
//    Output, double R8SR_MV[N], the product A * X.
//
{
  double *b;
  int i;
  int j;
  int k;

  b = new double[n];

  for ( i = 0; i < n; i++ )
  {
    b[i] = diag[i] * x[i];
  }

  for ( i = 0; i < n; i++ )
  {
    for ( k = row[i]; k <= row[i+1] - 1; k++ )
    {
      j = col[k];
      b[i] = b[i] + off[k] * x[j];
    }
  }

  return b;
}
//****************************************************************************80

void r8sr_print ( int n, int nz, int row[], int col[], double diag[], 
  double off[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8SR_PRINT prints an R8SR matrix.
//
//  Discussion:
//
//    The R8SR storage format stores the diagonal of a sparse matrix in DIAG.
//    The off-diagonal entries of row I are stored in entries ROW(I)
//    through ROW(I+1)-1 of OFF.  COL(J) records the column index
//    of the entry in A(J).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    13 June 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, int NZ, the number of offdiagonal nonzero elements in A.
//
//    Input, int ROW[N+1].  The nonzero offdiagonal elements of row I of A
//    are contained in A(ROW(I)) through A(ROW(I+1)-1).
//
//    Input, int COL[NZ], contains the column index of the element
//    in the corresponding position in A.
//
//    Input, double DIAG[N], the diagonal elements of A.
//
//    Input, double OFF[NZ], the off-diagonal elements of A.
//
//    Input, string TITLE, a title.
//
{
  r8sr_print_some ( n, nz, row, col, diag, off, 0, 0, n - 1, n - 1, title );

  return;
}
//****************************************************************************80

void r8sr_print_some ( int n, int nz, int row[], int col[], double diag[], 
  double off[], int ilo, int jlo, int ihi, int jhi, string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8SR_PRINT_SOME prints some of an R8SR matrix.
//
//  Discussion:
//
//    The R8SR storage format stores the diagonal of a sparse matrix in DIAG.
//    The off-diagonal entries of row I are stored in entries ROW(I)
//    through ROW(I+1)-1 of OFF.  COL(J) records the column index
//    of the entry in A(J).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    13 June 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, int NZ, the number of offdiagonal nonzero elements in A.
//
//    Input, int ROW[N+1].  The nonzero offdiagonal elements of row I of A
//    are contained in A(ROW(I)) through A(ROW(I+1)-1).
//
//    Input, int COL[NZ], contains the column index of the element
//    in the corresponding position in A.
//
//    Input, double DIAG[N], the diagonal elements of A.
//
//    Input, double OFF[NZ], the off-diagonal elements of A.
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
    i2hi = i4_min ( ihi, n - 1 );

    for ( i = i2lo; i <= i2hi; i++ )
    {
      cout << setw(6) << i << "  ";
//
//  Print out (up to) 5 entries in row I, that lie in the current strip.
//
      for ( j = j2lo; j <= j2hi; j++ )
      {
        aij = 0.0;
        if ( j == i )
        {
          aij = diag[i];
        }
        else
        {
          for ( k = row[i]; k <= row[i+1] - 1; k++ )
          {
            if ( j == col[k] )
            {
              aij = off[k];
            }
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

void r8sr_random ( int n, int nz, int row[], int col[], double diag[], 
  double off[], int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    R8SR_RANDOM randomizes an R8SR matrix.
//
//  Discussion:
//
//    The R8SR storage format stores the diagonal of a sparse matrix in DIAG.
//    The off-diagonal entries of row I are stored in entries ROW(I)
//    through ROW(I+1)-1 of OFF.  COL(J) records the column index of the
//    the entry stored in OFF(J).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    13 June 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, int NZ, the number of offdiagonal nonzero elements in A.
//
//    Input, int ROW[N+1].  The nonzero offdiagonal elements of row I of A
//    are contained in A(ROW(I)) through A(ROW(I+1)-1).
//
//    Input, int COL[NZ], contains the column index of the element
//    in the corresponding position in A.
//
//    Output, double DIAG[N], the diagonal elements of A.
//
//    Output, double OFF[NZ], the off-diagonal elements of A.
//
//    Input/output, int &SEED, a seed for the random number generator.
//
{
  int i;
  int j;

  for ( i = 0; i < n; i++ )
  {
    diag[i] = r8_uniform_01 ( seed );
    for ( j = row[i]; j <= row[i+1] - 1; j++ )
    {
      off[j] = r8_uniform_01 ( seed );
    }
  }

  return;
}
//****************************************************************************80

double *r8sr_to_r8ge ( int n, int nz, int row[], int col[], double diag[], 
  double off[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8SR_TO_R8GE converts an R8SR matrix to an R8GE matrix.
//
//  Discussion:
//
//    The R8SR storage format stores the diagonal of a sparse matrix in DIAG.
//    The off-diagonal entries of row I are stored in entries ROW(I)
//    through ROW(I+1)-1 of OFF.  COL(J) records the column index of the
//    the entry stored in OFF(J).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    13 June 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, int NZ, the number of offdiagonal nonzero elements in A.
//
//    Input, int ROW[N+1].  The nonzero offdiagonal elements of row I of A
//    are contained in A(ROW(I)) through A(ROW(I+1)-1).
//
//    Input, int COL[NZ], contains the column index of the element
//    in the corresponding position in A.
//
//    Input, double DIAG[N], the diagonal elements of A.
//
//    Input, double OFF[NZ], the off-diagonal elements of A.
//
//    Output, double R8SR_TO_R8GE[N*N], the R8GE matrix.
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
    b[i+i*n] = diag[i];
  }

  for ( i = 0; i < n; i++ )
  {
    for ( j = row[i]; j <= row[i+1] - 1; j++ )
    {
      b[i+col[j]*n] = off[j];
    }
  }

  return b;
}
//****************************************************************************80

void r8sr_zeros ( int n, int nz, int row[], int col[], double diag[], 
  double off[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8SR_ZEROS zeros an R8SR matrix.
//
//  Discussion:
//
//    The R8SR storage format stores the diagonal of a sparse matrix in DIAG.
//    The off-diagonal entries of row I are stored in entries ROW(I)
//    through ROW(I+1)-1 of OFF.  COL(J) records the column index of the
//    the entry stored in OFF(J).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    13 June 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, int NZ, the number of offdiagonal nonzero elements in A.
//
//    Input, int ROW[N+1].  The nonzero offdiagonal elements of row I of A
//    are contained in A(ROW(I)) through A(ROW(I+1)-1).
//
//    Input, int COL[NZ], contains the column index of the element
//    in the corresponding position in A.
//
//    Output, double DIAG[N], the diagonal elements of A.
//
//    Output, double OFF[NZ], the off-diagonal elements of A.
//
{
  int i;
  int j;

  for ( i = 0; i < n; i++ )
  {
    diag[i] = 0.0;
    for ( j = row[i]; j <= row[i+1] - 1; j++ )
    {
      off[j] = 0.0;
    }
  }

  return;
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
