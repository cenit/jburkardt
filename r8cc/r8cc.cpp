# include <cmath>
# include <cstdlib>
# include <ctime>
# include <fstream>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8cc.hpp"

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

int i4_uniform_ab ( int a, int b, int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    I4_UNIFORM_AB returns a scaled pseudorandom I4 between A and B.
//
//  Discussion:
//
//    The pseudorandom number should be uniformly distributed
//    between A and B.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 October 2012
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
//    Input, int A, B, the limits of the interval.
//
//    Input/output, int &SEED, the "seed" value, which should NOT be 0.
//    On output, SEED has been updated.
//
//    Output, int I4_UNIFORM, a number between A and B.
//
{
  int c;
  const int i4_huge = 2147483647;
  int k;
  float r;
  int value;

  if ( seed == 0 )
  {
    cerr << "\n";
    cerr << "I4_UNIFORM_AB - Fatal error!\n";
    cerr << "  Input value of SEED = 0.\n";
    exit ( 1 );
  }
//
//  Guarantee A <= B.
//
  if ( b < a )
  {
    c = a;
    a = b;
    b = c;
  }

  k = seed / 127773;

  seed = 16807 * ( seed - k * 127773 ) - k * 2836;

  if ( seed < 0 )
  {
    seed = seed + i4_huge;
  }

  r = ( float ) ( seed ) * 4.656612875E-10;
//
//  Scale R to lie between A-0.5 and B+0.5.
//
  r = ( 1.0 - r ) * ( ( float ) a - 0.5 ) 
    +         r   * ( ( float ) b + 0.5 );
//
//  Use rounding to convert R to an integer between A and B.
//
  value = round ( r );
//
//  Guarantee A <= VALUE <= B.
//
  if ( value < a )
  {
    value = a;
  }
  if ( b < value )
  {
    value = b;
  }

  return value;
}
//****************************************************************************80

void i4vec_print ( int n, int a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_PRINT prints an I4VEC.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    23 November 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of components of the vector.
//
//    Input, int A[N], the vector to be printed.
//
//    Input, string TITLE, a title.
//
{
  int i;

  cout << "\n";
  cout << title << "\n";
  cout << "\n";

  for ( i = 0; i <= n-1; i++ ) 
  {
    cout << setw(6) << i + 1 << "  " 
         << setw(6) << a[i]  << "\n";
  }

  return;
}
//****************************************************************************80

int i4vec_search_binary_a ( int n, int a[], int b )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_SEARCH_BINARY_A searches an ascending sorted I4VEC for a value.
//
//  Discussion:
//
//    Binary search is used.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    04 October 2015
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Donald Kreher, Douglas Simpson,
//    Algorithm 1.9,
//    Combinatorial Algorithms,
//    CRC Press, 1998, page 26.
//
//  Parameters:
//
//    Input, int N, the number of elements in the vector.
//
//    Input, int A[N], the array to be searched.  A must
//    be sorted in ascending order.
//
//    Input, int B, the value to be searched for.
//
//    Output, int I4VEC_SEARCH_BINARY_A, the result of the search.
//    -1, B does not occur in A.
//    I, A[I] = B.
//
{
  int high;
  int index;
  int low;
  int mid;
//
//  Check.
//
  if ( n <= 0 )
  {
    cerr << "\n";
    cerr << "I4VEC_SEARCH_BINARY_A - Fatal error!\n";
    cerr << "  The array dimension N is less than 1.\n";
    exit ( 1 );
  }

  index = -1;

  low = 0;
  high = n - 1;

  while ( low <= high )
  {
    mid = ( low + high ) / 2;

    if ( a[mid] == b )
    {
      index = mid;
      break;
    }
    else if ( a[mid] < b )
    {
      low = mid + 1;
    }
    else if ( b < a[mid] )
    {
      high = mid - 1;
    }
  }
  return index;
}
//****************************************************************************80

void r8cc_dif2 ( int m, int n, int nz_num, int col[], int row[], double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8CC_DIF2 returns the second difference as an R8CC matrix.
//
//  Discussion:
//
//    The R8CC format is the double precision sparse compressed column
//    format.  Associated with this format, we have an M by N matrix
//    with NZ_NUM nonzero entries.  We construct the column pointer
//    vector COL of length N+1, such that entries of column J will be
//    stored in positions COL(J) through COL(J+1)-1.  This indexing
//    refers to both the ROW and A vectors, which store the row indices
//    and the values of the nonzero entries.  The entries of the
//    ROW vector corresponding to each column are assumed to be
//    ascending sorted.
//
//    The R8CC format is equivalent to the MATLAB "sparse" format,
//    and the Harwell Boeing "real unsymmetric assembled" (RUA) format.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 October 2015
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Iain Duff, Roger Grimes, John Lewis,
//    User's Guide for the Harwell-Boeing Sparse Matrix Collection,
//    October 1992
//
//  Parameters:
//
//    Input, int M, the number of rows of the matrix.
//
//    Input, int N, the number of columns of the matrix.
//
//    Input, int NZ_NUM, the number of nonzero elements in A.
//
//    Output, int COL[N+1], points to the first element of each column.
//
//    Output, int ROW[NZ_NUM], contains the row indices of the elements.
//
//    Output, double A[NZ_NUM], the R8CC matrix.
//
{
  int i;
  int j;
  int k;
//
//  Column pointers
//
  col[0] = 0;
  col[1] = 2;
  for ( j = 2; j < n; j++ )
  {
    col[j] = col[j-1] + 3;
  }
  col[n] = col[n-1] + 2;
//
//  Row indices
//
  k = 0;
  row[k] = 0;
  k = k + 1;
  row[k] = 1;
  k = k + 1;
  for ( j = 1; j < n - 1; j++ )
  {
    for ( i = j - 1; i <= j + 1; i++ )
    {
      row[k] = i;
      k = k + 1;
    }
  }
  row[k] = m - 2;
  k = k + 1;
  row[k] = m - 1;
  k = k + 1;
//
//  Values
//
  k = 0;

  j = 0;

  i = 0;
  a[k] = 2.0;
  k = k + 1;
  i = 1;
  a[k] = -1.0;
  k = k + 1;

  for ( j = 1; j < n - 1; j++ )
  {
    i = j - 1;
    a[k] = -1.0;
    k = k + 1;
    i = j;
    a[k] =  2.0;
    k = k + 1;
    i = j + 1;
    a[k] = -1.0;
    k = k + 1;
  }

  j = n - 1;
  i = m - 2;
  a[k] = -1.0;
  k = k + 1;
  i = m - 1;
  a[k] = 2.0;
  k = k + 1;

  return;
}
//****************************************************************************80

double r8cc_get ( int m, int n, int nz_num, int col[], int row[], 
  double a[], int i, int j )

//****************************************************************************80
//
//  Purpose:
//
//    R8CC_GET gets a value of an R8CC matrix.
//
//  Discussion:
//
//    It is legal to request entries of the matrix for which no storage
//    was set aside.  In that case, a zero value will be returned.
//
//    The R8CC format is the double precision sparse compressed column
//    format.  Associated with this format, we have an M by N matrix
//    with NZ_NUM nonzero entries.  We construct the column pointer
//    vector COL of length N+1, such that entries of column J will be
//    stored in positions COL(J) through COL(J+1)-1.  This indexing
//    refers to both the ROW and A vectors, which store the row indices
//    and the values of the nonzero entries.  The entries of the
//    ROW vector corresponding to each column are assumed to be
//    ascending sorted.
//
//    The R8CC format is equivalent to the MATLAB "sparse" format,
//    and the Harwell Boeing "real unsymmetric assembled" (RUA) format.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 October 2015
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Iain Duff, Roger Grimes, John Lewis,
//    User's Guide for the Harwell-Boeing Sparse Matrix Collection,
//    October 1992
//
//  Parameters:
//
//    Input, int M, the number of rows of the matrix.
//
//    Input, int N, the number of columns of the matrix.
//
//    Input, int NZ_NUM, the number of nonzero entries.
//
//    Input, int COL[N+1], indicate where each column's data begins.
//
//    Input, int ROW[NZ_NUM], the row indices.
//
//    Input, double A[NZ_NUM], the nonzero entries.
//
//    Input, int I, J, the indices of the value to retrieve.
//
//    Output, double R8CC_GET, the value of A(I,J).
//
{
  double aij;
  int k;
//
//  Seek sparse index K corresponding to full index (I,J).
//
  k = r8cc_ijk ( m, n, nz_num, col, row, i, j );
//
//  If no K was found, then be merciful, and simply return 0.
//
  if ( k == -1 )
  {
    aij = 0.0;
  }
  else
  {
    aij = a[k];
  }

  return aij;
}
//****************************************************************************80

int r8cc_ijk ( int m, int n, int nz_num, int col[], int row[], int i, 
  int j )

//****************************************************************************80
//
//  Purpose:
//
//    R8CC_IJK seeks K, the sparse index of (I,J), the full index of an R8CC matrix.
//
//  Discussion:
//
//    The R8CC format is the double precision sparse compressed column
//    format.  Associated with this format, we have an M by N matrix
//    with NZ_NUM nonzero entries.  We construct the column pointer
//    vector COL of length N+1, such that entries of column J will be
//    stored in positions COL(J) through COL(J+1)-1.  This indexing
//    refers to both the ROW and A vectors, which store the row indices
//    and the values of the nonzero entries.  The entries of the
//    ROW vector corresponding to each column are assumed to be
//    ascending sorted.
//
//    The R8CC format is equivalent to the MATLAB "sparse" format,
//    and the Harwell Boeing "real unsymmetric assembled" (RUA) format.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    04 October 2015
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Iain Duff, Roger Grimes, John Lewis,
//    User's Guide for the Harwell-Boeing Sparse Matrix Collection,
//    October 1992
//
//  Parameters:
//
//    Input, int M, the number of rows of the matrix.
//
//    Input, int N, the number of columns of the matrix.
//
//    Input, int NZ_NUM, the number of nonzero entries.
//
//    Input, int COL[N+1], indicate where each column's data begins.
//
//    Input, int ROW[NZ_NUM], the row indices.
//
//    Input, int I, J, the indices of the value to retrieve.
//
//    Output, int R8CC_IJK, the index of the sparse matrix in which entry
//    (I,J) is stored, or -1 if no such entry exists.
//
{
  int k;
  int k1;
  int k2;
//
//  Determine the part of ROW containing row indices of entries
//  in column J.
//
  k1 = col[j];
  k2 = col[j+1] - 1;
//
//  Seek the location K for which ROW(K) = I.
//  
  k = i4vec_search_binary_a ( k2+1-k1, row+k1, i );

  if ( k != -1 )
  {
    k = k + k1;
  }

  return k;
}
//****************************************************************************80

void r8cc_inc ( int m, int n, int nz_num, int col[], int row[], double a[], 
  int i, int j, double aij )

//****************************************************************************80
//
//  Purpose:
//
//    R8CC_INC increments a value of an R8CC matrix.
//
//  Discussion:
//
//    The R8CC format is the double precision sparse compressed column
//    format.  Associated with this format, we have an M by N matrix
//    with NZ_NUM nonzero entries.  We construct the column pointer
//    vector COL of length N+1, such that entries of column J will be
//    stored in positions COL(J) through COL(J+1)-1.  This indexing
//    refers to both the ROW and A vectors, which store the row indices
//    and the values of the nonzero entries.  The entries of the
//    ROW vector corresponding to each column are assumed to be
//    ascending sorted.
//
//    The R8CC format is equivalent to the MATLAB "sparse" format,
//    and the Harwell Boeing "real unsymmetric assembled" (RUA) format.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 October 2015
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Iain Duff, Roger Grimes, John Lewis,
//    User's Guide for the Harwell-Boeing Sparse Matrix Collection,
//    October 1992
//
//  Parameters:
//
//    Input, int M, the number of rows of the matrix.
//
//    Input, int N, the number of columns of the matrix.
//
//    Input, int NZ_NUM, the number of nonzero entries.
//
//    Input, int COL[N+1], indicate where each column's data begins.
//
//    Input, int ROW[NZ_NUM], the row indices.
//
//    Input/output, double A[NZ_NUM], the nonzero entries.
//    On output, entry (I,J) has been incremented.
//
//    Input, int I, J, the indices of the value to retrieve.
//
//    Input, double AIJ, the value to be added to A(I,J).
//
{
  int k;
//
//  Seek sparse index K corresponding to full index (I,J).
//
  k = r8cc_ijk ( m, n, nz_num, col, row, i, j );
//
//  If no K was found, we fail.
//
  if ( k == -1 )
  {
    cerr << "\n";
    cerr << "R8CC_INC - Fatal error!\n";
    cerr << "  R8CC_IJK could not find the entry.\n";
    cerr << "  Row I = " << i << "\n";
    cerr << "  Col J = " << j << "\n";
    exit ( 1 );
  }
  a[k] = a[k] + aij;

  return;
}
//****************************************************************************80

double *r8cc_indicator ( int m, int n, int nz_num, int col[], int row[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8CC_INDICATOR sets up an R8CC indicator matrix.
//
//  Discussion:
//
//    The R8CC format is the double precision sparse compressed column
//    format.  Associated with this format, we have an M by N matrix
//    with NZ_NUM nonzero entries.  We construct the column pointer
//    vector COL of length N+1, such that entries of column J will be
//    stored in positions COL(J) through COL(J+1)-1.  This indexing
//    refers to both the ROW and A vectors, which store the row indices
//    and the values of the nonzero entries.  The entries of the
//    ROW vector corresponding to each column are assumed to be
//    ascending sorted.
//
//    The R8CC format is equivalent to the MATLAB "sparse" format,
//    and the Harwell Boeing "real unsymmetric assembled" (RUA) format.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 October 2015
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Iain Duff, Roger Grimes, John Lewis,
//    User's Guide for the Harwell-Boeing Sparse Matrix Collection,
//    October 1992
//
//  Parameters:
//
//    Input, int M, the number of rows of the matrix.
//
//    Input, int N, the number of columns of the matrix.
//
//    Input, int NZ_NUM, the number of nonzero elements in A.
//
//    Input, int COL[N+1], points to the first element of each column.
//
//    Input, int ROW[NZ_NUM], contains the row indices of the elements.
//
//    Output, double R8CC_INDICATOR[NZ_NUM], the R8CC matrix.
//
{
  double *a;
  int fac;
  int i;
  int j;
  int k;

  a = new double[nz_num];

  fac = i4_power ( 10, i4_log_10 ( n ) + 1 );

  for ( j = 0; j < n; j++ )
  {
    for ( k = col[j]; k <= col[j+1] - 1; k++ )
    {
      i = row[k];
      a[k] = ( double ) ( fac * ( i + 1 ) + ( j + 1 ) );
    }
  }

  return a;
}
//****************************************************************************80

void r8cc_kij ( int m, int n, int nz_num, int col[], int row[], int k, 
  int &i, int &j )

//****************************************************************************80
//
//  Purpose:
//
//    R8CC_KIJ seeks (I,J), the full index of K, the sparse index of an R8CC matrix.
//
//  Discussion:
//
//    The R8CC format is the double precision sparse compressed column
//    format.  Associated with this format, we have an M by N matrix
//    with NZ_NUM nonzero entries.  We construct the column pointer
//    vector COL of length N+1, such that entries of column J will be
//    stored in positions COL(J) through COL(J+1)-1.  This indexing
//    refers to both the ROW and A vectors, which store the row indices
//    and the values of the nonzero entries.  The entries of the
//    ROW vector corresponding to each column are assumed to be
//    ascending sorted.
//
//    The R8CC format is equivalent to the MATLAB "sparse" format,
//    and the Harwell Boeing "real unsymmetric assembled" (RUA) format.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 October 2015
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Iain Duff, Roger Grimes, John Lewis,
//    User's Guide for the Harwell-Boeing Sparse Matrix Collection,
//    October 1992
//
//  Parameters:
//
//    Input, int M, the number of rows of the matrix.
//
//    Input, int N, the number of columns of the matrix.
//
//    Input, int NZ_NUM, the number of nonzero entries.
//
//    Input, int COL[N+1], indicate where each column's data begins.
//
//    Input, int ROW[NZ_NUM], the row indices.
//
//    Input, int K, the sparse index of an entry of the matrix.
//    1 <= K <= NZ_NUM.
//
//    Output, int &I, &J, the full indices corresponding to the sparse
//    index K.
//
{
  int jj;
  int k1;
  int k2;

  i = -1;
  j = -1;

  if ( k < 0 || nz_num <= k )
  {
    return;
  }
//
//  The row index is easy.
//
  i = row[k];
//
//  Determine the column by bracketing in COl.
//
  for ( jj = 0; jj < n; jj++ )
  {
    k1 = col[jj];
    k2 = col[jj+1] - 1;
    if ( k1 <= k && k <= k2 )
    {
      j = jj;
      break;
    }
  }

  if ( j == -1 )
  {
    return;
  }
  return;
}
//****************************************************************************80

double *r8cc_mtv ( int m, int n, int nz_num, int col[], int row[], 
  double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8CC_MTV multiplies a vector times an R8CC matrix.
//
//  Discussion:
//
//    The R8CC format is the double precision sparse compressed column
//    format.  Associated with this format, we have an M by N matrix
//    with NZ_NUM nonzero entries.  We construct the column pointer
//    vector COL of length N+1, such that entries of column J will be
//    stored in positions COL(J) through COL(J+1)-1.  This indexing
//    refers to both the ROW and A vectors, which store the row indices
//    and the values of the nonzero entries.  The entries of the
//    ROW vector corresponding to each column are assumed to be
//    ascending sorted.
//
//    The R8CC format is equivalent to the MATLAB "sparse" format,
//    and the Harwell Boeing "real unsymmetric assembled" (RUA) format.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 October 2015
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Iain Duff, Roger Grimes, John Lewis,
//    User's Guide for the Harwell-Boeing Sparse Matrix Collection,
//    October 1992
//
//  Parameters:
//
//    Input, int M, the number of rows of the matrix.
//
//    Input, int N, the number of columns of the matrix.
//
//    Input, int NZ_NUM, the number of nonzero elements in A.
//
//    Input, int COL[N+1], points to the first element of each column.
//
//    Input, int ROW[NZ_NUM], contains the row indices of the elements.
//
//    Input, double A[NZ_NUM], the R8CC matrix.
//
//    Input, double X[M], the vector to be multiplied.
//
//    Output, double R8CC_MTV[N], the product A' * X.
//
{
  double *b;
  int i;
  int j;
  int k;

  b = r8vec_zeros_new ( n );

  for ( j = 0; j < n; j++ )
  {
    for ( k = col[j]; k <= col[j+1] - 1; k++ )
    {
      i = row[k];
      b[j] = b[j] + a[k] * x[i];
    }
  }

  return b;
}
//****************************************************************************80

double *r8cc_mv ( int m, int n, int nz_num, int col[], int row[], 
  double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8CC_MV multiplies an R8CC matrix times a vector.
//
//  Discussion:
//
//    The R8CC format is the double precision sparse compressed column
//    format.  Associated with this format, we have an M by N matrix
//    with NZ_NUM nonzero entries.  We construct the column pointer
//    vector COL of length N+1, such that entries of column J will be
//    stored in positions COL(J) through COL(J+1)-1.  This indexing
//    refers to both the ROW and A vectors, which store the row indices
//    and the values of the nonzero entries.  The entries of the
//    ROW vector corresponding to each column are assumed to be
//    ascending sorted.
//
//    The R8CC format is equivalent to the MATLAB "sparse" format,
//    and the Harwell Boeing "real unsymmetric assembled" (RUA) format.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 October 2015
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Iain Duff, Roger Grimes, John Lewis,
//    User's Guide for the Harwell-Boeing Sparse Matrix Collection,
//    October 1992
//
//  Parameters:
//
//    Input, int M, the number of rows of the matrix.
//
//    Input, int N, the number of columns of the matrix.
//
//    Input, int NZ_NUM, the number of nonzero elements in A.
//
//    Input, int COL[N+1], points to the first element of each column.
//
//    Input, int ROW[NZ_NUM], contains the row indices of the elements.
//
//    Input, double A[NZ_NUM], the R8CC matrix.
//
//    Input, double X[N], the vector to be multiplied.
//
//    Output, double R8CC_MV[M], the product A * X.
//
{
  double *b;
  int i;
  int j;
  int k;

  b = r8vec_zeros_new ( m );

  for ( j = 0; j < n; j++ )
  {
    for ( k = col[j]; k <= col[j+1] - 1; k++ )
    {
      i = row[k];
      b[i] = b[i] + a[k] * x[j];
    }
  }

  return b;
}
//****************************************************************************80

void r8cc_print ( int m, int n, int nz_num, int col[], int row[], 
  double a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8CC_PRINT prints an R8CC matrix.
//
//  Discussion:
//
//    The R8CC format is the double precision sparse compressed column
//    format.  Associated with this format, we have an M by N matrix
//    with NZ_NUM nonzero entries.  We construct the column pointer
//    vector COL of length N+1, such that entries of column J will be
//    stored in positions COL(J) through COL(J+1)-1.  This indexing
//    refers to both the ROW and A vectors, which store the row indices
//    and the values of the nonzero entries.  The entries of the
//    ROW vector corresponding to each column are assumed to be
//    ascending sorted.
//
//    The R8CC format is equivalent to the MATLAB "sparse" format,
//    and the Harwell Boeing "real unsymmetric assembled" (RUA) format.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 October 2015
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Iain Duff, Roger Grimes, John Lewis,
//    User's Guide for the Harwell-Boeing Sparse Matrix Collection,
//    October 1992
//
//  Parameters:
//
//    Input, int M, the number of rows of the matrix.
//
//    Input, int N, the number of columns of the matrix.
//
//    Input, int NZ_NUM, the number of nonzero elements in A.
//
//    Input, int COL[N+1], points to the first element of each column.
//
//    Input, int ROW[NZ_NUM], contains the row indices of the elements.
//
//    Input, double A[NZ_NUM], the R8CC matrix.
//
//    Input, string TITLE, a title.
//
{
  r8cc_print_some ( m, n, nz_num, col, row, a, 0, 0, m - 1, n - 1, title );

  return;
}
//****************************************************************************80

void r8cc_print_some ( int m, int n, int nz_num, int col[], int row[], 
  double a[], int ilo, int jlo, int ihi, int jhi, string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8CC_PRINT_SOME prints some of an R8CC matrix.
//
//  Discussion:
//
//    The R8CC format is the double precision sparse compressed column
//    format.  Associated with this format, we have an M by N matrix
//    with NZ_NUM nonzero entries.  We construct the column pointer
//    vector COL of length N+1, such that entries of column J will be
//    stored in positions COL(J) through COL(J+1)-1.  This indexing
//    refers to both the ROW and A vectors, which store the row indices
//    and the values of the nonzero entries.  The entries of the
//    ROW vector corresponding to each column are assumed to be
//    ascending sorted.
//
//    The R8CC format is equivalent to the MATLAB "sparse" format,
//    and the Harwell Boeing "real unsymmetric assembled" (RUA) format.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 October 2015
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Iain Duff, Roger Grimes, John Lewis,
//    User's Guide for the Harwell-Boeing Sparse Matrix Collection,
//    October 1992
//
//  Parameters:
//
//    Input, int M, the number of rows of the matrix.
//
//    Input, int N, the number of columns of the matrix.
//
//    Input, int NZ_NUM, the number of nonzero elements in A.
//
//    Input, int COL[N+1], points to the first element of each column.
//
//    Input, int ROW[NZ_NUM], contains the row indices of the elements.
//
//    Input, double A[NZ_NUM], the R8CC matrix.
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
  int j;
  int j2hi;
  int j2lo;
  int k;
  double value;

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
    i2hi = i4_min ( ihi, m - 1 );

    for ( i = i2lo; i <= i2hi; i++ )
    {
      cout << setw(4) << i << "  ";
//
//  Print out (up to) 5 entries in row I, that lie in the current strip.
//
//
//  Now consider each column J in J2LO to J2HI,
//  and look at every nonzero, and check if it occurs in row I.
//
      for ( j = j2lo; j <= j2hi; j++ )
      {
        value = 0.0;
        for ( k = col[j]; k <= col[j+1] - 1; k++ )
        {
          if ( row[k] == i )
          {
            value = a[k];
          }
        }
        cout << setw(12) << value << "  ";
      }
      cout << "\n";
    }
  }

  return;
# undef INCX
}
//****************************************************************************80

double *r8cc_random ( int m, int n, int nz_num, int col[], int row[], 
  int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    R8CC_RANDOM randomizes an R8CC matrix.
//
//  Discussion:
//
//    The R8CC format is the double precision sparse compressed column
//    format.  Associated with this format, we have an M by N matrix
//    with NZ_NUM nonzero entries.  We construct the column pointer
//    vector COL of length N+1, such that entries of column J will be
//    stored in positions COL(J) through COL(J+1)-1.  This indexing
//    refers to both the ROW and A vectors, which store the row indices
//    and the values of the nonzero entries.  The entries of the
//    ROW vector corresponding to each column are assumed to be
//    ascending sorted.
//
//    The R8CC format is equivalent to the MATLAB "sparse" format,
//    and the Harwell Boeing "real unsymmetric assembled" (RUA) format.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 October 2015
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Iain Duff, Roger Grimes, John Lewis,
//    User's Guide for the Harwell-Boeing Sparse Matrix Collection,
//    October 1992
//
//  Parameters:
//
//    Input, int M, the number of rows of the matrix.
//
//    Input, int N, the number of columns of the matrix.
//
//    Input, int NZ_NUM, the number of nonzero elements in A.
//
//    Input, int COL[N+1], points to the first element of each column.
//
//    Input, int ROW[NZ_NUM], contains the row indices of the elements.
//
//    Input/output, int &SEED, a seed for the random number generator.
//
//    Output, double R8CC_RANDOM[NZ_NUM], the R8CC matrix.
//
{
  double *a;

  a = r8vec_uniform_01_new ( nz_num, seed );

  return a;
}
//****************************************************************************80

void r8cc_read ( string col_file, string row_file, string a_file, int m, 
  int n, int nz_num, int col[], int row[], double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8CC_READ reads an R8CC matrix from three files.
//
//  Discussion:
//
//    This routine needs the values of M, N, and NZ_NUM, which can be 
//    determined by a call to R8CC_READ_SIZE.
//
//    The R8CC format is the double precision sparse compressed column
//    format.  Associated with this format, we have an M by N matrix
//    with NZ_NUM nonzero entries.  We construct the column pointer
//    vector COL of length N+1, such that entries of column J will be
//    stored in positions COL(J) through COL(J+1)-1.  This indexing
//    refers to both the ROW and A vectors, which store the row indices
//    and the values of the nonzero entries.  The entries of the
//    ROW vector corresponding to each column are assumed to be
//    ascending sorted.
//
//    The R8CC format is equivalent to the MATLAB "sparse" format,
//    and the Harwell Boeing "real unsymmetric assembled" (RUA) format.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    01 September 2006
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Iain Duff, Roger Grimes, John Lewis,
//    User's Guide for the Harwell-Boeing Sparse Matrix Collection,
//    October 1992
//
//  Parameters:
//
//    Input, string COL_FILE, ROW_FILE, A_FILE, the names of the 
//    files containing the column pointers, row indices, and matrix entries.
//
//    Input, int M, N, the number of rows and columns in the matrix.
//
//    Input, int NZ_NUM, the number of nonzero elements in the matrix.
//
//    Output, int COL[N+1], the column pointers.
//
//    Output, int ROW[NZ_NUM], the row indices.
//
//    Output, double A[NZ_NUM], the nonzero elements of the matrix.
//
{
  ifstream input;
  int k;

  input.open ( col_file.c_str ( ) );

  if ( ! input )
  {
    cerr << "\n";
    cerr << "R8CC_READ - Fatal error!\n";
    cerr << "  Could not open the file \"" << col_file << "\".\n";
    exit ( 1 );
  }

  for ( k = 0; k < n+1; k++ )
  {
    input >> col[k];
  }

  input.close ( );
//
//  Read the row information.
//
  input.open ( row_file.c_str ( ) );

  if ( ! input )
  {
    cerr << "\n";
    cerr << "R8CC_READ - Fatal error!\n";
    cerr << "  Could not open the file \"" << row_file << "\".\n";
    exit ( 1 );
  }

  for ( k = 0; k < nz_num; k++ )
  {
    input >> row[k];
  }

  input.close ( );
//
//  Read the value information.
//
  input.open ( a_file.c_str ( ) );

  if ( ! input )
  {
    cerr << "\n";
    cerr << "R8CC_READ - Fatal error!\n";
    cerr << "  Could not open the file \"" << a_file << "\".\n";
    exit ( 1 );
  }

  for ( k = 0; k < nz_num; k++ )
  {
    input >> a[k];
  }

  input.close ( );

  return;
}
//****************************************************************************80

void r8cc_read_size ( string col_file, string row_file, int &m, int &n, 
  int &nz_num )

//****************************************************************************80
//
//  Purpose:
//
//    R8CC_READ_SIZE reads the sizes of an R8CC sparse matrix from a file.
//
//  Discussion:
//
//    The value of M is "guessed" to be the largest value that occurs in
//    the ROW file.  However, if a row index of 0 is encountered, then
//    the value of M is incremented by 1.
//
//    The value of N is the number of records in the COL file minus 1.
//
//    The value of NZ_NUM is simply the number of records in the ROW file.
//
//    The R8CC format is the double precision sparse compressed column
//    format.  Associated with this format, we have an M by N matrix
//    with NZ_NUM nonzero entries.  We construct the column pointer
//    vector COL of length N+1, such that entries of column J will be
//    stored in positions COL(J) through COL(J+1)-1.  This indexing
//    refers to both the ROW and A vectors, which store the row indices
//    and the values of the nonzero entries.  The entries of the
//    ROW vector corresponding to each column are assumed to be
//    ascending sorted.
//
//    The R8CC format is equivalent to the MATLAB "sparse" format,
//    and the Harwell Boeing "real unsymmetric assembled" (RUA) format.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 October 2015
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Iain Duff, Roger Grimes, John Lewis,
//    User's Guide for the Harwell-Boeing Sparse Matrix Collection,
//    October 1992
//
//  Parameters:
//
//    Input, string COL_FILE, *ROW_FILE, the names of the 
//    column and row files that describe the structure of the matrix.
//
//    Output, int &M, &N, the inferred number of rows and columns 
//    in the sparse matrix.
//
//    Output, int &NZ_NUM, the number of nonzero entries in the
//    sparse matrix.
//
{
  int col;
  ifstream input;
  ifstream input2;
  int row;
//
//  Check the COL file first.
//
  input.open ( col_file.c_str ( ) );

  if ( !input )
  {
    cerr << "\n";
    cerr << "R8CC_READ_SIZE - Fatal error!\n";
    cerr << "  Could not open the file \"" << col_file << "\".\n";
    exit ( 1 );
  }

  n = 0;

  for ( ; ; )
  {
    input >> col;

    if ( input.eof( ) )
    {
      break;
    }
    n = n + 1;
  }
  input.close ( );
  n = n - 1;
//
//  Check the ROW file.
//
//  For unfathomable reasons, if I use "INPUT" for this file,
//  I can get a file open failure.  Rather than make right the
//  world, I gave up and accessed "INPUT2".
//
  m = 0;
  nz_num = 0;

  input2.open ( row_file.c_str ( ) );

  if ( !input2 )
  {
    cerr << "\n";
    cerr << "R8CC_READ_SIZE - Fatal error!\n";
    cerr << "  Could not open the file \"" << row_file << "\".\n";
    exit ( 1 );
  }
  
  for ( ; ; )
  {
    input2 >> row;

    if ( input2.eof ( ) )
    {
      break;
    }
    nz_num = nz_num + 1;
    m = i4_max ( m, row );
  }
  input2.close ( );

  m = m + 1;

  return;
}
//****************************************************************************80

void r8cc_set ( int m, int n, int nz_num, int col[], int row[], double a[], 
  int i, int j, double aij )

//****************************************************************************80
//
//  Purpose:
//
//    R8CC_SET sets a value of an R8CC matrix.
//
//  Discussion:
//
//    The R8CC format is the double precision sparse compressed column
//    format.  Associated with this format, we have an M by N matrix
//    with NZ_NUM nonzero entries.  We construct the column pointer
//    vector COL of length N+1, such that entries of column J will be
//    stored in positions COL(J) through COL(J+1)-1.  This indexing
//    refers to both the ROW and A vectors, which store the row indices
//    and the values of the nonzero entries.  The entries of the
//    ROW vector corresponding to each column are assumed to be
//    ascending sorted.
//
//    The R8CC format is equivalent to the MATLAB "sparse" format,
//    and the Harwell Boeing "real unsymmetric assembled" (RUA) format.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 October 2015
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Iain Duff, Roger Grimes, John Lewis,
//    User's Guide for the Harwell-Boeing Sparse Matrix Collection,
//    October 1992
//
//  Parameters:
//
//    Input, int M, the number of rows of the matrix.
//
//    Input, int N, the number of columns of the matrix.
//
//    Input, int NZ_NUM, the number of nonzero entries.
//
//    Input, int COL[N+1], indicate where each column's data begins.
//
//    Input, int ROW[NZ_NUM], the row indices.
//
//    Input/output, double A[NZ_NUM], the nonzero entries.
//    On output, the entry of A corresponding to (I,J) has been reset.
//
//    Input, int I, J, the indices of the value to retrieve.
//
//    Input, double AIJ, the new value of A(I,J).
//
{
  int k;
//
//  Seek sparse index K corresponding to full index (I,J).
//
  k = r8cc_ijk ( m, n, nz_num, col, row, i, j );
//
//  If no K was found, we fail.
//
  if ( k == -1 )
  {
    cerr << "\n";
    cerr << "R8CC_SET - Fatal error!\n";
    cerr << "  R8CC_IJK could not find the entry.\n";
    cerr << "  Row I = " << i << "\n";
    cerr << "  Col J = " << j << "\n";
    exit ( 1 );
  }
  a[k] = aij;

  return;
}
//****************************************************************************80

double *r8cc_to_r8ge ( int m, int n, int nz_num, int col[], int row[], 
  double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8CC_TO_R8GE converts an R8CC matrix to an R8GE matrix.
//
//  Discussion:
//
//    The R8CC format is the double precision sparse compressed column
//    format.  Associated with this format, we have an M by N matrix
//    with NZ_NUM nonzero entries.  We construct the column pointer
//    vector COL of length N+1, such that entries of column J will be
//    stored in positions COL(J) through COL(J+1)-1.  This indexing
//    refers to both the ROW and A vectors, which store the row indices
//    and the values of the nonzero entries.  The entries of the
//    ROW vector corresponding to each column are assumed to be
//    ascending sorted.
//
//    The R8CC format is equivalent to the MATLAB "sparse" format,
//    and the Harwell Boeing "real unsymmetric assembled" (RUA) format.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 October 2015
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Iain Duff, Roger Grimes, John Lewis,
//    User's Guide for the Harwell-Boeing Sparse Matrix Collection,
//    October 1992
//
//  Parameters:
//
//    Input, int M, the number of rows of the matrix.
//
//    Input, int N, the number of columns of the matrix.
//
//    Input, int NZ_NUM, the number of nonzero elements in A.
//
//    Input, int COL[N+1], points to the first element of each column.
//
//    Input, int ROW[NZ_NUM], contains the row indices of the elements.
//
//    Input, double A[NZ_NUM], the R8CC matrix.
//
//    Input, double R8CC_TO_R8GE[M*N], the R8GE matrix.
//
{
  double *b;
  int i;
  int j;
  int k;

  b = r8vec_zeros_new ( m * n );

  if ( col[0] < 0 || nz_num < col[0] )
  {
    cerr << "\n";
    cerr << "R8CC_TO_R8GE - Fatal error!\n";
    cerr << "  COL[" << 0 << "] = " << col[0] << "\n";
    exit ( 1 );
  }

  for ( j = 0; j < n; j++ )
  {
    if ( col[j+1] < 0 || nz_num < col[j+1] - 1 )
    {
      cerr << "\n";
      cerr << "R8CC_TO_R8GE - Fatal error!\n";
      cerr << "  COL[" << j << "] = " << col[j+1] << "\n";
      exit ( 1 );
    }

    for ( k = col[j]; k <= col[j+1] - 1; k++ )
    {
      i = row[k];
      if ( i < 0 || m <= i )
      {
        cerr << "\n";
        cerr << "R8CC_TO_R8GE - Fatal error!\n";
        cerr << "  ROW[" << k << "] = " << i << "\n";
        exit ( 1 );
      }
      b[i+j*m] = a[k];
    }
  }

  return b;
}
//****************************************************************************80

void r8cc_write ( string col_file, string row_file, string a_file, int m, int n,
  int nz_num, int col[], int row[], double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8CC_WRITE writes an R8CC matrix to three files.
//
//  Discussion:
//
//    The R8CC format is the double precision sparse compressed column
//    format.  Associated with this format, we have an M by N matrix
//    with NZ_NUM nonzero entries.  We construct the column pointer
//    vector COL of length N+1, such that entries of column J will be
//    stored in positions COL(J) through COL(J+1)-1.  This indexing
//    refers to both the ROW and A vectors, which store the row indices
//    and the values of the nonzero entries.  The entries of the
//    ROW vector corresponding to each column are assumed to be
//    ascending sorted.
//
//    The R8CC format is equivalent to the MATLAB "sparse" format,
//    and the Harwell Boeing "real unsymmetric assembled" (RUA) format.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    01 September 2006
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Iain Duff, Roger Grimes, John Lewis,
//    User's Guide for the Harwell-Boeing Sparse Matrix Collection,
//    October 1992
//
//  Parameters:
//
//    Input, string COL_FILE, ROW_FILE, A_FILE, the names of the 
//    files containing the column pointers, row entries, and matrix entries.
//
//    Input, int M, N, the number of rows and columns in the matrix.
//
//    Input, int NZ_NUM, the number of nonzero elements in the matrix.
//
//    Input, int COL[N+1], the column pointers.
//
//    Input, int ROW[NZ_NUM], the row indices.
//
//    Input, double A[NZ_NUM], the nonzero elements of the matrix.
//
{
  ofstream output;
  int k;

  output.open ( col_file.c_str ( ) );

  if ( !output )
  {
    cerr << "\n";
    cerr << "R8CC_WRITE - Fatal error!\n";
    cerr << "  Could not open the file \"" << col_file << "\".\n";
    exit ( 1 );
  }

  for ( k = 0; k < n + 1; k++ )
  {
    output << col[k] << "\n";
  }

  output.close ( );
//
//  Write the row information.
//
  output.open ( row_file.c_str ( ) );

  if ( !output )
  {
    cerr << "\n";
    cerr << "R8CC_WRITE - Fatal error!\n";
    cerr << "  Could not open the file \"" << row_file << "\".\n";
    exit ( 1 );
  }

  for ( k = 0; k < nz_num; k++ )
  {
    output << row[k] << "\n";
  }

  output.close ( );
//
//  Write the value information.
//
  output.open ( a_file.c_str ( ) );

  if ( !output )
  {
    cerr << "\n";
    cerr << "R8CC_WRITE - Fatal error!\n";
    cerr << "  Could not open the file \"" << a_file << "\".\n";
    exit ( 1 );
  }

  for ( k = 0; k < nz_num; k++ )
  {
    output << a[k] << "\n";
  }
  output.close ( );

  return;
}
//****************************************************************************80

double *r8cc_zeros ( int m, int n, int nz_num, int col[], int row[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8CC_ZEROS zeros an R8CC matrix.
//
//  Discussion:
//
//    The R8CC format is the double precision sparse compressed column
//    format.  Associated with this format, we have an M by N matrix
//    with NZ_NUM nonzero entries.  We construct the column pointer
//    vector COL of length N+1, such that entries of column J will be
//    stored in positions COL(J) through COL(J+1)-1.  This indexing
//    refers to both the ROW and A vectors, which store the row indices
//    and the values of the nonzero entries.  The entries of the
//    ROW vector corresponding to each column are assumed to be
//    ascending sorted.
//
//    The R8CC format is equivalent to the MATLAB "sparse" format,
//    and the Harwell Boeing "real unsymmetric assembled" (RUA) format.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 October 2015
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Iain Duff, Roger Grimes, John Lewis,
//    User's Guide for the Harwell-Boeing Sparse Matrix Collection,
//    October 1992
//
//  Parameters:
//
//    Input, int M, the number of rows of the matrix.
//
//    Input, int N, the number of columns of the matrix.
//
//    Input, int NZ_NUM, the number of nonzero elements in A.
//
//    Input, int COL[N+1], points to the first element of each column.
//
//    Input, int ROW[NZ_NUM], contains the row indices of the elements.
//
//    Output, double R8CC_ZERO[NZ_NUM], the R8CC matrix.
//
{
  double *a;

  a = r8vec_zeros_new ( nz_num );

  return a;
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
