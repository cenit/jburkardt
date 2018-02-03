# include <cmath>
# include <cstdlib>
# include <ctime>
# include <fstream>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8ri.hpp"

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

void r8ge_to_r8ri ( int n, double a[], int nz, int ija[], double sa[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_TO_R8RI converts an R8GE matrix to R8RI form.
//
//  Discussion:
//
//    A R8GE matrix is in general storage.
//
//    An R8RI matrix is in row indexed sparse storage form.
//
//    The size of the arrays IJA and SA can be determined by calling
//    R8GE_TO_R8RI_SIZE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    20 January 2013
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    William Press, Brian Flannery, Saul Teukolsky, William Vetterling,
//    Numerical Recipes in FORTRAN: The Art of Scientific Computing,
//    Third Edition,
//    Cambridge University Press, 2007,
//    ISBN13: 978-0-521-88068-8,
//    LC: QA297.N866.
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A[N*N], the matrix stored in GE 
//    or "general" format.
//
//    Input, int NZ, the size required for the RI
//    or "row indexed" sparse storage.
//
//    Output, int IJA[NZ], the index vector.
//
//    Output, double SA[NZ], the value vector.
//
{
  int i;
  int im;
  int j;
  int k;
  int l;

  for ( k = 0; k < n; k++ )
  {
    i = k;
    j = k;
    sa[k] = a[i+j*n];
  }

  k = n;
  sa[k] = 0.0;

  for ( i = 0; i <= n; i++ )
  {
    ija[i] = 0;
  }

  im = 0;

  for ( i = 0; i < n; i++ )
  {
    for ( j = 0; j < n; j++ )
    {
      if ( i != j )
      {
        if ( a[i+j*n] != 0.0 )
        {
          k = k + 1;
          if ( ija[i] == 0 )
          {
            for ( l = im; l <= i; l++ )
            {
              ija[l] = k;
            }
            im = i + 1;
          }
          ija[k] = j;
          sa[k] = a[i+j*n];
        }
      }
    }
  }

  ija[n] = k + 1;

  return;
}
//****************************************************************************80

int r8ge_to_r8ri_size ( int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_TO_R8RI_SIZE determines the size of an R8RI matrix.
//
//  Discussion:
//
//    N spaces are always used for the diagonal entries, plus a dummy.
//    The remaining spaces store off-diagonal nonzeros.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    19 January 2013
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    William Press, Brian Flannery, Saul Teukolsky, William Vetterling,
//    Numerical Recipes in FORTRAN: The Art of Scientific Computing,
//    Third Edition,
//    Cambridge University Press, 2007,
//    ISBN13: 978-0-521-88068-8,
//    LC: QA297.N866.
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A[N*N], the matrix stored in GE or "general" format.
//
//    Output, int R8GE_TO_R8RI_SIZE, the size required for the RI
//    or "row indexed" sparse storage.
//
{
  int i;
  int j;
  int nz;

  nz = n + 1;

  for ( i = 0; i < n; i++ )
  {
    for ( j = 0; j < n; j++ )
    {
      if ( i != j )
      {
        if ( a[i+j*n] != 0.0 )
        {
          nz = nz + 1;
        }
      }
    }
  }

  return nz;
}
//****************************************************************************80

double *r8ri_dif2 ( int n, int nz, int ija[], double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8RI_DIF2 stores the second difference matrix in R8RI format.
//
//  Discussion:
//
//    An R8RI matrix is in row indexed sparse storage form, using an index
//    array IJA and a value array A.  The first N entries of A store the
//    diagonal elements in order.  The first N entries of IJA store the index
//    of the first off-diagonal element of the corresponding row; if there is
//    no off-diagonal element in that row, it is one greater than the index
//    in A of the most recently stored element in the previous row.
//    Location 1 of IJA is always equal to N+2; location N+1 of IJA is one
//    greater than the index in A of the last off-diagonal element of the
//    last row.  Location N+1 of A is not used.  Entries in A with index
//    N+2 or greater contain the off-diagonal values, ordered by row, and
//    then by column.  Entries in IJA with index N+2 or greater contain the
//    column number of the corresponding element in A.
//
//  Example:
//
//    A:
//      3 0 1 0 0
//      0 4 0 0 0
//      0 7 5 9 0
//      0 0 0 0 2
//      0 0 0 6 8
//
//    NZ = 11
//
//    IJA:
//      7  8  8 10 11 12  3  2  4  5  4
//
//    A:
//      3  4  5  0  8  *  1  7  9  2  6
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    12 July 2016
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    William Press, Brian Flannery, Saul Teukolsky, William Vetterling,
//    Numerical Recipes in FORTRAN: The Art of Scientific Computing,
//    Third Edition,
//    Cambridge University Press, 2007,
//    ISBN13: 978-0-521-88068-8,
//    LC: QA297.N866.
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, int NZ, the size required for the RI
//    or "row indexed" sparse storage.  NZ = 3*N-1.
//
//    Output, int IJA[NZ], the index vector.
//
//    Output, double A[NZ], the value vector.
//
{
  int i;
  int k;
//
//  Diagonal elements of A.
//
  for ( i = 0; i < n; i++ )
  {
    a[i] = 2.0;
  }
//
//  First N entries of IJA store first offdiagonal of each row.
//
  k = n + 1;

  for ( i = 0; i < n; i++ )
  {
    ija[i] = k;
    if ( i == 0 || i == n - 1 )
    {
      k = k + 1;
    }
    else
    {
      k = k + 2;
    }
  }
//
//  IJA(N+1) stores one beyond last element of A.
//
  ija[n] = k;
  a[n] = 0.0;
//
//  IJA(N+2), A(N+2) and beyond store column and value.
//
  k = n;

  for ( i = 0; i < n; i++ )
  {
    if ( i == 0 )
    {
      k = k + 1;
      ija[k] = i + 1;
      a[k] = - 1.0;
    }
    else if ( i < n - 1 )
    {
      k = k + 1;
      ija[k] = i - 1;
      a[k] = - 1.0;
      k = k + 1;
      ija[k] = i + 1;
      a[k] = - 1.0;
    }
    else if ( i == n - 1 )
    {
      k = k + 1;
      ija[k] = i - 1;
      a[k] = - 1.0;
    }
  }

  return a;
}
//****************************************************************************80

double *r8ri_indicator ( int n, int nz, int ija[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8RI_INDICATOR returns the R8RI indicator matrix for given sparsity.
//
//  Discussion:
//
//    An R8RI matrix is in row indexed sparse storage form, using an index
//    array IJA and a value array A.  The first N entries of A store the
//    diagonal elements in order.  The first N entries of IJA store the index
//    of the first off-diagonal element of the corresponding row; if there is
//    no off-diagonal element in that row, it is one greater than the index
//    in A of the most recently stored element in the previous row.
//    Location 1 of IJA is always equal to N+2; location N+1 of IJA is one
//    greater than the index in A of the last off-diagonal element of the
//    last row.  Location N+1 of A is not used.  Entries in A with index
//    N+2 or greater contain the off-diagonal values, ordered by row, and
//    then by column.  Entries in IJA with index N+2 or greater contain the
//    column number of the corresponding element in A.
//
//  Example:
//
//    A:
//      3 0 1 0 0
//      0 4 0 0 0
//      0 7 5 9 0
//      0 0 0 0 2
//      0 0 0 6 8
//
//    NZ = 11
//
//    IJA:
//      7  8  8 10 11 12  3  2  4  5  4
//
//    A:
//      3  4  5  0  8  *  1  7  9  2  6
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    12 July 2016
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    William Press, Brian Flannery, Saul Teukolsky, William Vetterling,
//    Numerical Recipes in FORTRAN: The Art of Scientific Computing,
//    Third Edition,
//    Cambridge University Press, 2007,
//    ISBN13: 978-0-521-88068-8,
//    LC: QA297.N866.
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, int NZ, the size required for the RI
//    or "row indexed" sparse storage.  NZ = 3*N-1.
//
//    Input, int IJA[NZ], the index vector.
//
//    Output, double R8RI_INDICATOR[NZ], the value vector.
//
{
  double *a;
  int fac;
  int i;
  int j;
  int k;

  a = r8vec_zeros_new ( nz );

  fac = i4_power ( 10, i4_log_10 ( n ) + 1 );
//
//  Diagonal elements of A.
//
  for ( i = 0; i < n; i++ )
  {
    a[i] = ( double ) ( fac * ( i + 1 ) + ( i + 1 ) );
  }

  for ( i = 0; i < n; i++ )
  {
    for ( k = ija[i]; k < ija[i+1]; k++ )
    {
      j = ija[k];
      a[k] = ( double ) ( fac * ( i + 1 ) + ( j + 1 ) );
    }
  }

  return a;
}
//****************************************************************************80

double *r8ri_mtv ( int n, int nz, int ija[], double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8RI_MTV multiplies the transpose of an R8RI matrix times a vector.
//
//  Discussion:
//
//    An R8RI matrix is in row indexed sparse storage form, using an index
//    array IJA and a value array A.  The first N entries of A store the
//    diagonal elements in order.  The first N entries of IJA store the index
//    of the first off-diagonal element of the corresponding row; if there is
//    no off-diagonal element in that row, it is one greater than the index
//    in A of the most recently stored element in the previous row.
//    Location 1 of IJA is always equal to N+2; location N+1 of IJA is one
//    greater than the index in A of the last off-diagonal element of the
//    last row.  Location N+1 of A is not used.  Entries in A with index
//    N+2 or greater contain the off-diagonal values, ordered by row, and
//    then by column.  Entries in IJA with index N+2 or greater contain the
//    column number of the corresponding element in A.
//
//  Example:
//
//    A:
//      3 0 1 0 0
//      0 4 0 0 0
//      0 7 5 9 0
//      0 0 0 0 2
//      0 0 0 6 8
//
//    NZ = 11
//
//    IJA:
//      7  8  8 10 11 12  3  2  4  5  4
//
//    A:
//      3  4  5  0  8  *  1  7  9  2  6
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 July 2016
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    William Press, Brian Flannery, Saul Teukolsky, William Vetterling,
//    Numerical Recipes in FORTRAN: The Art of Scientific Computing,
//    Third Edition,
//    Cambridge University Press, 2007,
//    ISBN13: 978-0-521-88068-8,
//    LC: QA297.N866.
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, int NZ, the size required for the RI
//    or "row indexed" sparse storage.
//
//    Input, int IJA[NZ], the index vector.
//
//    Input, double A[NZ], the value vector.
//
//    Input, double X[N], the vector to be multiplied.
//
//    Output, double R8RI_MTV[N], the product A'*X.
//
{
  double *b;
  int i;
  int j;
  int k;

  if ( ija[0] != n + 1 )
  {
    cerr << "\n";
    cerr << "R8RI_MTV - Fatal error!\n";
    cerr << "  The values IJA[0] and N are inconsistent.\n";
    exit ( 1 );
  }

  b = r8vec_zeros_new ( n );

  for ( i = 0; i < n; i++ )
  {
    b[i] = a[i] * x[i];
  }

  for ( i = 0; i < n; i++ )
  {
    for ( k = ija[i]; k < ija[i+1]; k++ )
    {
      j = ija[k];
      b[j] = b[j] + a[k] * x[i];
    }
  }

  return b;
}
//****************************************************************************80

double *r8ri_mv ( int n, int nz, int ija[], double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8RI_MV multiplies an R8RI matrix times a vector.
//
//  Discussion:
//
//    An R8RI matrix is in row indexed sparse storage form, using an index
//    array IJA and a value array A.  The first N entries of A store the
//    diagonal elements in order.  The first N entries of IJA store the index
//    of the first off-diagonal element of the corresponding row; if there is
//    no off-diagonal element in that row, it is one greater than the index
//    in A of the most recently stored element in the previous row.
//    Location 1 of IJA is always equal to N+2; location N+1 of IJA is one
//    greater than the index in A of the last off-diagonal element of the
//    last row.  Location N+1 of A is not used.  Entries in A with index
//    N+2 or greater contain the off-diagonal values, ordered by row, and
//    then by column.  Entries in IJA with index N+2 or greater contain the
//    column number of the corresponding element in A.
//
//  Example:
//
//    A:
//      3 0 1 0 0
//      0 4 0 0 0
//      0 7 5 9 0
//      0 0 0 0 2
//      0 0 0 6 8
//
//    NZ = 11
//
//    IJA:
//      7  8  8 10 11 12  3  2  4  5  4
//
//    A:
//      3  4  5  0  8  *  1  7  9  2  6
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 July 2016
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    William Press, Brian Flannery, Saul Teukolsky, William Vetterling,
//    Numerical Recipes in FORTRAN: The Art of Scientific Computing,
//    Third Edition,
//    Cambridge University Press, 2007,
//    ISBN13: 978-0-521-88068-8,
//    LC: QA297.N866.
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, int NZ, the size required for the RI
//    or "row indexed" sparse storage.
//
//    Input, int IJA[NZ], the index vector.
//
//    Input, double A[NZ], the value vector.
//
//    Input, double X[N], the vector to be multiplied.
//
//    Output, double R8RI_MTV[N], the product A*X.
//
{
  double *b;
  int i;
  int k;

  if ( ija[0] != n + 1 )
  {
    cerr << "\n";
    cerr << "R8RI_MV - Fatal error!\n";
    cerr << "  The values IJA[0] and N are inconsistent.\n";
    exit ( 1 );
  }

  b = r8vec_zeros_new ( n );

  for ( i = 0; i < n; i++ )
  {
    b[i] = a[i] * x[i];
    for ( k = ija[i]; k < ija[i+1]; k++ )
    {
      b[i] = b[i] + a[k] * x[ija[k]];
    }
  }

  return b;
}
//****************************************************************************80

void r8ri_print ( int n, int nz, int ija[], double a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8RI_PRINT prints an R8RI matrix.
//
//  Discussion:
//
//    An R8RI matrix is in row indexed sparse storage form, using an index
//    array IJA and a value array A.  The first N entries of A store the
//    diagonal elements in order.  The first N entries of IJA store the index
//    of the first off-diagonal element of the corresponding row; if there is
//    no off-diagonal element in that row, it is one greater than the index
//    in A of the most recently stored element in the previous row.
//    Location 1 of IJA is always equal to N+2; location N+1 of IJA is one
//    greater than the index in A of the last off-diagonal element of the
//    last row.  Location N+1 of A is not used.  Entries in A with index
//    N+2 or greater contain the off-diagonal values, ordered by row, and
//    then by column.  Entries in IJA with index N+2 or greater contain the
//    column number of the corresponding element in A.
//
//  Example:
//
//    A:
//      3 0 1 0 0
//      0 4 0 0 0
//      0 7 5 9 0
//      0 0 0 0 2
//      0 0 0 6 8
//
//    NZ = 11
//
//    IJA:
//      7  8  8 10 11 12  3  2  4  5  4
//
//    A:
//      3  4  5  0  8  *  1  7  9  2  6
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    10 July 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, int NZ, the size required for the RI
//    or "row indexed" sparse storage.
//
//    Input, int IJA[NZ], the index vector.
//
//    Input, double A[NZ], the value vector.
//
//    Input, string TITLE, a title.
//
{
  r8ri_print_some ( n, nz, ija, a, 0, 0, n - 1, n - 1, title );

  return;
}
//****************************************************************************80

void r8ri_print_some ( int n, int nz, int ija[], double a[], int ilo, int jlo, 
  int ihi, int jhi, string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8RI_PRINT_SOME prints some of an R8RI matrix.
//
//  Discussion:
//
//    An R8RI matrix is in row indexed sparse storage form, using an index
//    array IJA and a value array A.  The first N entries of A store the
//    diagonal elements in order.  The first N entries of IJA store the index
//    of the first off-diagonal element of the corresponding row; if there is
//    no off-diagonal element in that row, it is one greater than the index
//    in A of the most recently stored element in the previous row.
//    Location 1 of IJA is always equal to N+2; location N+1 of IJA is one
//    greater than the index in A of the last off-diagonal element of the
//    last row.  Location N+1 of A is not used.  Entries in A with index
//    N+2 or greater contain the off-diagonal values, ordered by row, and
//    then by column.  Entries in IJA with index N+2 or greater contain the
//    column number of the corresponding element in A.
//
//  Example:
//
//    A:
//      3 0 1 0 0
//      0 4 0 0 0
//      0 7 5 9 0
//      0 0 0 0 2
//      0 0 0 6 8
//
//    NZ = 11
//
//    IJA:
//      7  8  8 10 11 12  3  2  4  5  4
//
//    A:
//      3  4  5  0  8  *  1  7  9  2  6
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    10 July 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, int NZ, the size required for the RI
//    or "row indexed" sparse storage.
//
//    Input, int IJA[NZ], the index vector.
//
//    Input, double A[NZ], the value vector.
//
//    Input, int ILO, JLO, IHI, JHI, the first row and
//    column, and the last row and column to be printed.
//
//    Input, string TITLE, a title.
//
{
  double *arow;
  int i;
  int i2hi;
  int i2lo;
  int inc;
  int incx = 5;
  int j;
  int j2;
  int j2hi;
  int j2lo;
  int k;

  arow = r8vec_zeros_new ( n );

  cout << "\n";
  cout << title << "\n";
//
//  Print the columns of the matrix, in strips of 5.
//
  for ( j2lo = jlo; j2lo <= jhi; j2lo = j2lo + incx )
  {
    j2hi = j2lo + incx - 1;
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
    i2lo = i4_max ( ilo, 0 );
    i2hi = i4_min ( ihi, n - 1 );

    for ( i = i2lo; i <= i2hi; i++ )
    {
//
//  1) Assume everything is zero.
//
      for ( j = j2lo; j <= j2hi; j++ )
      {
        arow[j] = 0.0;
      }
//
//  2) Diagonal entry?
//
      if ( j2lo <= i && i <= j2hi )
      {
        arow[i] = a[i];
      }
//
//  3) Now examine all the offdiagonal entries.
//
      for ( k = ija[i]; k < ija[i+1]; k++ )
      {
        j = ija[k];
        if ( j2lo <= j && j <= j2hi )
        {
          arow[j] = a[k];
        }
      }
//
//  Print out (up to) 5 entries in row I, that lie in the current strip.
//
      cout << setw(4) << i << "  ";
      for ( j = j2lo; j <= j2hi; j++ )
      {
        cout << setw(12) << arow[j] << "  ";
      }
      cout << "\n";
    }
  }

  delete [] arow;

  return;
}
//*****************************************************************************/

double *r8ri_random ( int n, int nz, int ija[], int &seed )

//*****************************************************************************/
//
//  Purpose:
//
//    R8RI_RANDOM randomizes an R8RI matrix for given sparsity.
//
//  Discussion:
//
//    An R8RI matrix is in row indexed sparse storage form, using an index
//    array IJA and a value array A.  The first N entries of A store the
//    diagonal elements in order.  The first N entries of IJA store the index
//    of the first off-diagonal element of the corresponding row; if there is
//    no off-diagonal element in that row, it is one greater than the index
//    in A of the most recently stored element in the previous row.
//    Location 1 of IJA is always equal to N+2; location N+1 of IJA is one
//    greater than the index in A of the last off-diagonal element of the
//    last row.  Location N+1 of A is not used.  Entries in A with index
//    N+2 or greater contain the off-diagonal values, ordered by row, and
//    then by column.  Entries in IJA with index N+2 or greater contain the
//    column number of the corresponding element in A.
//
//  Example:
//
//    A:
//      3 0 1 0 0
//      0 4 0 0 0
//      0 7 5 9 0
//      0 0 0 0 2
//      0 0 0 6 8
//
//    NZ = 11
//
//    IJA:
//      7  8  8 10 11 12  3  2  4  5  4
//
//    A:
//      3  4  5  0  8  *  1  7  9  2  6
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    08 July 2016
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    William Press, Brian Flannery, Saul Teukolsky, William Vetterling,
//    Numerical Recipes in FORTRAN: The Art of Scientific Computing,
//    Third Edition,
//    Cambridge University Press, 2007,
//    ISBN13: 978-0-521-88068-8,
//    LC: QA297.N866.
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, int NZ, the size required for the RI
//    or "row indexed" sparse storage.  NZ = 3*N-1.
//
//    Input, int IJA[NZ], the index vector.
//
//    Input/output, int *SEED, a seed for the random number
//    generator.
//
//    Output, double A[NZ], the value vector.
//
{
  double *a;
  int i;
  int j;
  int k;

  a = r8vec_zeros_new ( nz );
//
//  Diagonal elements of A.
//
  for ( i = 0; i < n; i++ )
  {
    a[i] = r8_uniform_01 ( seed );
  }

  for ( i = 0; i < n; i++ )
  {
    for ( k = ija[i]; k < ija[i+1]; k++ )
    {
      j = ija[k];
      a[k] = r8_uniform_01 ( seed );
    }
  }

  return a;
}
//****************************************************************************80

double *r8ri_to_r8ge ( int n, int nz, int ija[], double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8RI_TO_R8GE converts an R8RI matrix to R8GE form.
//
//  Discussion:
//
//    An R8RI matrix is in row indexed sparse storage form.
//
//    A R8GE matrix is in general storage.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    13 July 2016
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    William Press, Brian Flannery, Saul Teukolsky, William Vetterling,
//    Numerical Recipes in FORTRAN: The Art of Scientific Computing,
//    Third Edition,
//    Cambridge University Press, 2007,
//    ISBN13: 978-0-521-88068-8,
//    LC: QA297.N866.
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, int NZ, the size required for the RI
//    or "row indexed" sparse storage.
//
//    Input, int IJA[NZ], the index vector.
//
//    Input, double A[NZ], the value vector.
//
//    Output, double R8RI_TO_R8GE[N*N], the matrix stored in GE 
//    or "general" format.
//
{
  double *a_r8ge;
  int i;
  int j;
  int k;

  a_r8ge = r8vec_zeros_new ( n * n );

  for ( k = 0; k < n; k++ )
  {
    i = k;
    j = k;
    a_r8ge[i+j*n] = a[k];
  }

  for ( i = 0; i < n; i++ )
  {
    for ( k = ija[i]; k < ija[i+1]; k++ )
    {
      j = ija[k];
      a_r8ge[i+j*n] = a[k];
    }
  }

  return a_r8ge;
}
//****************************************************************************80

double *r8ri_zeros ( int n, int nz, int ija[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8RI_ZEROS zeros an R8RI matrix.
//
//  Discussion:
//
//    An R8RI matrix is in row indexed sparse storage form.
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
//    Input, int N, the order of the matrix.
//
//    Input, int NZ, the size required for the RI
//    or "row indexed" sparse storage.
//
//    Input, int IJA[NZ], the index vector.
//
//    Output, double R8RI_ZEROS[NZ], the value vector.
//
{
  double *a;

  a = r8vec_zeros_new ( nz );

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
