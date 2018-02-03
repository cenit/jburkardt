# include <cmath>
# include <complex>
# include <cstdlib>
# include <ctime>
# include <fstream>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8ci.hpp"

//****************************************************************************80

void c8vec_print ( int n, complex <double> a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    C8VEC_PRINT prints a C8VEC.
//
//  Discussion:
//
//    A C8VEC is a vector of complex <double> values.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    10 September 2009
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of components of the vector.
//
//    Input, complex <double> A[N], the vector to be printed.
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
    cout << "  " << setw(8) << i
         << ": " << real ( a[i] )
         << "  " << imag ( a[i] ) << "\n";
  }

  return;
}
//****************************************************************************80

void c8vec_sort_a_l2 ( int n, complex <double> x[] )

//****************************************************************************80
//
//  Purpose:
//
//    C8VEC_SORT_A_L2 ascending sorts a C8VEC by L2 norm.
//
//  Discussion:
//
//    The L2 norm of A+Bi is sqrt ( A * A + B * B ).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 March 2013
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, length of input array.
//
//    Input/output, complex <double> X[N].
//    On input, an unsorted array.
//    On output, X has been sorted.
//
{
  int i;
  int indx;
  int isgn;
  int j;
  double normsq_i;
  double normsq_j;
  complex <double> temp;

  i = 0;
  indx = 0;
  isgn = 0;
  j = 0;

  for ( ; ; )
  {
    sort_heap_external ( n, indx, i, j, isgn );

    if ( 0 < indx )
    {
      temp = x[i-1];
      x[i-1] = x[j-1];
      x[j-1] = temp;
    }
    else if ( indx < 0 )
    {
      normsq_i = pow ( real ( x[i-1] ), 2 )
               + pow ( imag ( x[i-1] ), 2 );

      normsq_j = pow ( real ( x[j-1] ), 2 )
               + pow ( imag ( x[j-1] ), 2 );

      if ( normsq_i < normsq_j )
      {
        isgn = -1;
      }
      else
      {
        isgn = +1;
      }
    }
    else if ( indx == 0 )
    {
      break;
    }
  }

  return;
}
//****************************************************************************80

complex <double> *c8vec_unity_new ( int n )

//****************************************************************************80
//
//  Purpose:
//
//    C8VEC_UNITY_NEW returns the N roots of unity in a C8VEC.
//
//  Discussion:
//
//    A C8VEC is a vector of complex <double> values.
//
//    X(1:N) = exp ( 2 * PI * (0:N-1) / N )
//
//    X(1:N)^N = ( (1,0), (1,0), ..., (1,0) ).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    06 November 2010
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of elements of A.
//
//    Output, complex <double> C8VEC_UNITY_NEW[N], the N roots of unity.
//
{
  complex <double> *a;
  int i;
  const double r8_pi = 3.141592653589793;
  double theta;

  a = new complex <double> [n];

  for ( i = 0; i < n; i++ )
  {
    theta = r8_pi * ( double ) ( 2 * i ) / ( double ) ( n );
    a[i] = complex <double> ( cos ( theta ), sin ( theta ) );
  }

  return a;
}
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

int i4_modp ( int i, int j )

//****************************************************************************80
//
//  Purpose:
//
//    I4_MODP returns the nonnegative remainder of integer division.
//
//  Discussion:
//
//    If 
//      NREM = I4_MODP ( I, J ) 
//      NMULT = ( I - NREM ) / J
//    then
//      I = J * NMULT + NREM
//    where NREM is always nonnegative.
//
//    The MOD function computes a result with the same sign as the
//    quantity being divided.  Thus, suppose you had an angle A,
//    and you wanted to ensure that it was between 0 and 360.
//    Then mod(A,360) would do, if A was positive, but if A
//    was negative, your result would be between -360 and 0.
//
//    On the other hand, I4_MODP(A,360) is between 0 and 360, always.
//
//  Example:
//
//        I         J     MOD  I4_MODP   I4_MODP Factorization
// 
//      107        50       7       7    107 =  2 *  50 + 7
//      107       -50       7       7    107 = -2 * -50 + 7
//     -107        50      -7      43   -107 = -3 *  50 + 43
//     -107       -50      -7      43   -107 =  3 * -50 + 43
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    26 May 1999
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int I, the number to be divided.
//
//    Input, int J, the number that divides I.
//
//    Output, int I4_MODP, the nonnegative remainder when I is 
//    divided by J.
//
{
  int value;

  if ( j == 0 )
  {
    cerr << "\n";
    cerr << "I4_MODP - Fatal error!\n";
    cerr << "  I4_MODP ( I, J ) called with J = " << j << "\n";
    exit ( 1 );
  }

  value = i % j;

  if ( value < 0 )
  {
    value = value + abs ( j );
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

double r8ci_det ( int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8CI_DET returns the determinant of an R8CI matrix.
//
//  Discussion:
//
//    The R8CI storage format is used for an N by N circulant matrix.
//    An N by N circulant matrix A has the property that the entries on
//    row I appear again on row I+1, shifted one position to the right,
//    with the final entry of row I appearing as the first of row I+1.
//
//    A circulant matrix data structure simply records the first row.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 June 2016
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Philip Davis,
//    Circulant Matrices,
//    Wiley, 1979.
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A[N], the R8CI matrix.
//
//    Output, double R8CI_DET, the complex eigenvalues.
//
{
  double det;
  complex <double> detc;
  int i;
  complex <double> *lambda;

  lambda = r8ci_eval ( n, a );

  detc = 1.0;
  for ( i = 0; i < n; i++ )
  {
    detc = detc * lambda[i];
  }

  delete [] lambda;

  det = real ( detc );

  return det;
}
//****************************************************************************80

double *r8ci_dif2 ( int n )

//****************************************************************************80
//
//  Purpose:
//
//    R8CI_DIF2 sets up an R8CI second difference matrix.
//
//  Discussion:
//
//    This is actually a periodic second difference matrix.
//
//    The R8CI storage format is used for an N by N circulant matrix.
//    An N by N circulant matrix A has the property that the entries on
//    row I appear again on row I+1, shifted one position to the right,
//    with the final entry of row I appearing as the first of row I+1.
//    The R8CI format simply records the first row of the matrix.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 June 2016
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
//    Output, double R8CI_DIF2[N], the R8CI matrix.
//
{
  double *a;

  a = r8vec_zeros_new ( n );

  a[0] = 2.0;
  a[1] = -1.0;
  a[n-1] = -1.0;

  return a;
}
//****************************************************************************80

complex <double> *r8ci_eval ( int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8CI_EVAL returns the eigenvalues of an R8CI matrix.
//
//  Discussion:
//
//    The R8CI storage format is used for an N by N circulant matrix.
//    An N by N circulant matrix A has the property that the entries on
//    row I appear again on row I+1, shifted one position to the right,
//    with the final entry of row I appearing as the first of row I+1.
//
//    A circulant matrix data structure simply records the first row.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    25 January 2004
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Philip Davis,
//    Circulant Matrices,
//    Wiley, 1979.
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A[N], the R8CI matrix.
//
//    Output, complex <double> R8CI_EVAL[N], the complex eigenvalues.
//
{
  int i;
  int j;
  complex <double> *lambda;
  complex <double> *w;

  lambda = new complex <double>[n];

  w = c8vec_unity_new ( n );

  for ( i = 0; i < n; i++ )
  {
    lambda[i] = a[n-1];
  }

  for ( i = n - 2; 0 <= i; i-- )
  {
    for ( j = 0; j < n; j++ )
    {
      lambda[j] = lambda[j] * w[j] + a[i];
    }
  }

  c8vec_sort_a_l2 ( n, lambda );

  delete [] w;

  return lambda;
}
//****************************************************************************80

double *r8ci_indicator ( int n )

//****************************************************************************80
//
//  Purpose:
//
//    R8CI_INDICATOR sets up an R8CI indicator matrix.
//
//  Discussion:
//
//    The R8CI storage format is used for an N by N circulant matrix.
//    An N by N circulant matrix A has the property that the entries on
//    row I appear again on row I+1, shifted one position to the right,
//    with the final entry of row I appearing as the first of row I+1.
//    The R8CI format simply records the first row of the matrix.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    23 January 2004
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
//    Output, double R8CI_INDICATOR[N], the R8CI matrix.
//
{
  double *a;
  int fac;
  int i;
  int j;

  a = new double[n];

  fac = i4_power ( 10, i4_log_10 ( n ) + 1 );

  i = 1;

  for ( j = 1; j <= n; j++ )
  {
    a[j-1] = ( double ) ( fac * i + j );
  }

  return a;
}
//****************************************************************************80

double *r8ci_mtv ( int n, double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8CI_MTV multiplies a vector times an R8CI matrix.
//
//  Discussion:
//
//    The R8CI storage format is used for an N by N circulant matrix.
//    An N by N circulant matrix A has the property that the entries on
//    row I appear again on row I+1, shifted one position to the right,
//    with the final entry of row I appearing as the first of row I+1.
//
//    A circulant matrix data structure simply records the first row.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    18 December 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A[N], the R8CI matrix.
//
//    Input, double X[N], the vector to be multiplied by A.
//
//    Output, double R8CI_MTV[N], the product A' * X.
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
      b[i] = b[i] + a[n+i-j] * x[j];
    }
  }

  return b;
}
//****************************************************************************80

double *r8ci_mv ( int n, double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8CI_MV multiplies an R8CI matrix times a vector.
//
//  Discussion:
//
//    The R8CI storage format is used for an N by N circulant matrix.
//    An N by N circulant matrix A has the property that the entries on
//    row I appear again on row I+1, shifted one position to the right,
//    with the final entry of row I appearing as the first of row I+1.
//
//    A circulant matrix data structure simply records the first row.
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
//
//    Input, double A[N], the R8CI matrix.
//
//    Input, double X[N], the vector to be multiplied by A.
//
//    Output, double R8CI_MV[N], the product A * x.
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
      b[i] = b[i] + a[j-i+n] * x[j];
    }
    for ( j = i; j < n; j++ )
    {
      b[i] = b[i] + a[j-i] * x[j];
    }
  }

  return b;
}
//****************************************************************************80

void r8ci_print ( int n, double a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8CI_PRINT prints an R8CI matrix.
//
//  Discussion:
//
//    The R8CI storage format is used for an N by N circulant matrix.
//    An N by N circulant matrix A has the property that the entries on
//    row I appear again on row I+1, shifted one position to the right,
//    with the final entry of row I appearing as the first of row I+1.
//
//    A circulant matrix data structure simply records the first row.
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
//    Input, double A[N], the R8CI matrix.
//
//    Input, string TITLE, a title.
//
{
  r8ci_print_some ( n, a, 1, 1, n, n, title );

  return;
}
//****************************************************************************80

void r8ci_print_some ( int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8CI_PRINT_SOME prints some of an R8CI matrix.
//
//  Discussion:
//
//    The R8CI storage format is used for an N by N circulant matrix.
//    An N by N circulant matrix A has the property that the entries on
//    row I appear again on row I+1, shifted one position to the right,
//    with the final entry of row I appearing as the first of row I+1.
//
//    A circulant matrix data structure simply records the first row.
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
//    Input, double A[N], the R8CI matrix.
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
      cout << setw(6) << i << "  ";

      for ( j = j2lo; j <= j2hi; j++ )
      {
        if ( i <= j )
        {
          cout << setw(12) << a[j-i] << "  ";
        }
        else
        {
          cout << setw(12) << a[n+j-i] << "  ";
        }
      }
      cout << "\n";
    }
  }

  return;
# undef INCX
}
//****************************************************************************80

double *r8ci_random ( int n, int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    R8CI_RANDOM randomizes an R8CI matrix.
//
//  Discussion:
//
//    The R8CI storage format is used for an N by N circulant matrix.
//    An N by N circulant matrix A has the property that the entries on
//    row I appear again on row I+1, shifted one position to the right,
//    with the final entry of row I appearing as the first of row I+1.
//
//    A circulant matrix data structure simply records the first row.
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
//    Output, double R8CI_RANDOM[N], the R8CI matrix.
//
{
  double *a;
  int i;

  a = new double[n];

  for ( i = 0; i < n; i++ )
  {
    a[i] = r8_uniform_01 ( seed );
  }

  return a;
}
//****************************************************************************80

double *r8ci_sl ( int n, double a[], double b[], int job )

//****************************************************************************80
//
//  Purpose:
//
//    R8CI_SL solves an R8CI system.
//
//  Discussion:
//
//    The R8CI storage format is used for an N by N circulant matrix.
//    An N by N circulant matrix A has the property that the entries on
//    row I appear again on row I+1, shifted one position to the right,
//    with the final entry of row I appearing as the first of row I+1.
//
//    A circulant matrix data structure simply records the first row.
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
//    C++ version by John Burkardt.
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A[N], the R8CI matrix.
//
//    Input, double B[N], the right hand side.
//
//    Input, int JOB, specifies the system to solve.
//    0, solve A * x = b.
//    nonzero, solve A' * x = b.
//
//    Output, double R8CI_SL[N], the solution of the linear system.
//
{
  int i;
  int nsub;
  double r1;
  double r2;
  double r3;
  double r5;
  double r6;
  double *work;
  double *x;

  work = new double[2*n-2];
  x = new double[n];

  if ( job == 0 )
  {
//
//  Solve the system with the principal minor of order 1.
//
    r1 = a[0];
    x[0] = b[0] / r1;

    r2 = 0.0;
//
//  Recurrent process for solving the system.
//
    for ( nsub = 2; nsub <= n; nsub++ )
    {
//
//  Compute multiples of the first and last columns of
//  the inverse of the principal minor of order N.
//
      r5 = a[n+2-nsub-1];
      r6 = a[nsub-1];

      if ( 2 < nsub )
      {
        work[nsub-2] = r2;

        for ( i = 1; i <= nsub - 2; i++ )
        {
          r5 = r5 + a[n-i] * work[nsub-i-1];
          r6 = r6 + a[i] * work[n-2+i];
        }
      }

      r2 = - r5 / r1;
      r3 = - r6 / r1;
      r1 = r1 + r5 * r3;

      if ( 2 < nsub )
      {
        r6 = work[n-1];
        work[n+nsub-3] = 0.0;
        for ( i = 2; i <= nsub - 1; i++ )
        {
          r5 = work[n-2+i];
          work[n-2+i] = work[i-1] * r3 + r6;
          work[i-1] = work[i-1] + r6 * r2;
          r6 = r5;
        }
      }

      work[n-1] = r3;
//
//  Compute the solution of the system with the principal minor of order NSUB.
//
      r5 = 0.0;
      for ( i = 1; i <= nsub - 1; i++ )
      {
        r5 = r5 + a[n-i] * x[nsub-i-1];
      }

      r6 = ( b[nsub-1] - r5 ) / r1;
      for ( i = 1; i <= nsub-1; i++ )
      {
        x[i-1] = x[i-1] + work[n+i-2] * r6;
      }
      x[nsub-1] = r6;
    }
  }
  else
  {
//
//  Solve the system with the principal minor of order 1.
//
    r1 = a[0];
    x[0] = b[0] / r1;

    r2 = 0.0;
//
//  Recurrent process for solving the system.
//
    for ( nsub = 2; nsub <= n; nsub++ )
    {
//
//  Compute multiples of the first and last columns of
//  the inverse of the principal minor of order N.
//
      r5 = a[nsub-1];
      r6 = a[n+1-nsub];

      if ( 2 < nsub )
      {
        work[nsub-2] = r2;
        for ( i = 1; i <= nsub - 2; i++ )
        {
          r5 = r5 + a[i] * work[nsub-i-1];
          r6 = r6 + a[n-i] * work[n-2+i];
        }
      }

      r2 = - r5 / r1;
      r3 = - r6 / r1;
      r1 = r1 + r5 * r3;

      if ( 2 < nsub )
      {
        r6 = work[n-1];
        work[n+nsub-3] = 0.0;
        for ( i = 2; i <= nsub-1; i++ )
        {
          r5 = work[n-2+i];
          work[n-2+i] = work[i-1] * r3 + r6;
          work[i-1] = work[i-1] + r6 * r2;
          r6 = r5;
        }
      }

      work[n-1] = r3;
//
//  Compute the solution of the system with the principal minor of order NSUB.
//
      r5 = 0.0;
      for ( i = 1; i <= nsub - 1; i++ )
      {
        r5 = r5 + a[i] * x[nsub-i-1];
      }

      r6 = ( b[nsub-1] - r5 ) / r1;
      for ( i = 1; i <= nsub - 1; i++ )
      {
        x[i-1] = x[i-1] + work[n-2+i] * r6;
      }

      x[nsub-1] = r6;
    }
  }

  delete [] work;

  return x;
}
//****************************************************************************80

double *r8ci_to_r8ge ( int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8CI_TO_R8GE copies an R8CI matrix to an R8GE matrix.
//
//  Discussion:
//
//    The R8CI storage format is used for an N by N circulant matrix.
//    An N by N circulant matrix A has the property that the entries on
//    row I appear again on row I+1, shifted one position to the right,
//    with the final entry of row I appearing as the first of row I+1.
//
//    A circulant matrix data structure simply records the first row.
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
//
//    Input, double A[N], the R8CI matrix.
//
//    Output, double R8CI_TO_R8GE[N*N], the R8GE matrix.
//
{
  double *b;
  int i;
  int j;
  int k;

  b = new double[n*n];

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < n; i++ )
    {
      k = i4_modp ( j - i, n );
      b[i+j*n] = a[k];
    }
  }

  return b;
}
//****************************************************************************80

double *r8ci_zeros ( int n )

//****************************************************************************80
//
//  Purpose:
//
//    R8CI_ZEROS zeros an R8CI matrix.
//
//  Discussion:
//
//    The R8CI storage format is used for an N by N circulant matrix.
//    An N by N circulant matrix A has the property that the entries on
//    row I appear again on row I+1, shifted one position to the right,
//    with the final entry of row I appearing as the first of row I+1.
//
//    A circulant matrix data structure simply records the first row.
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
//    Output, double R8CI_ZERO[N], the R8CI matrix.
//
{
  double *a;

  a = r8vec_zeros_new ( n );

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

void sort_heap_external ( int n, int &indx, int &i, int &j, int isgn )

//****************************************************************************80
//
//  Purpose:
//
//    SORT_HEAP_EXTERNAL externally sorts a list of items into ascending order.
//
//  Discussion:
//
//    The actual list is not passed to the routine.  Hence it may
//    consist of integers, reals, numbers, names, etc.  The user,
//    after each return from the routine, will be asked to compare or
//    interchange two items.
//
//    The current version of this code mimics the FORTRAN version,
//    so the values of I and J, in particular, are FORTRAN indices.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    06 January 2013
//
//  Author:
//
//    Original FORTRAN77 version by Albert Nijenhuis, Herbert Wilf.
//    C++ version by John Burkardt
//
//  Reference:
//
//    Albert Nijenhuis, Herbert Wilf,
//    Combinatorial Algorithms,
//    Academic Press, 1978, second edition,
//    ISBN 0-12-519260-6.
//
//  Parameters:
//
//    Input, int N, the length of the input list.
//
//    Input/output, int &INDX.
//    The user must set INDX to 0 before the first call.
//    On return,
//      if INDX is greater than 0, the user must interchange
//      items I and J and recall the routine.
//      If INDX is less than 0, the user is to compare items I
//      and J and return in ISGN a negative value if I is to
//      precede J, and a positive value otherwise.
//      If INDX is 0, the sorting is done.
//
//    Output, int &I, &J.  On return with INDX positive,
//    elements I and J of the user's list should be
//    interchanged.  On return with INDX negative, elements I
//    and J are to be compared by the user.
//
//    Input, int ISGN. On return with INDX negative, the
//    user should compare elements I and J of the list.  If
//    item I is to precede item J, set ISGN negative,
//    otherwise set ISGN positive.
//
{
  static int i_save = 0;
  static int j_save = 0;
  static int k = 0;
  static int k1 = 0;
  static int n1 = 0;
//
//  INDX = 0: This is the first call.
//
  if ( indx == 0 )
  {

    i_save = 0;
    j_save = 0;
    k = n / 2;
    k1 = k;
    n1 = n;
  }
//
//  INDX < 0: The user is returning the results of a comparison.
//
  else if ( indx < 0 )
  {
    if ( indx == -2 )
    {
      if ( isgn < 0 )
      {
        i_save = i_save + 1;
      }
      j_save = k1;
      k1 = i_save;
      indx = -1;
      i = i_save;
      j = j_save;
      return;
    }

    if ( 0 < isgn )
    {
      indx = 2;
      i = i_save;
      j = j_save;
      return;
    }

    if ( k <= 1 )
    {
      if ( n1 == 1 )
      {
        i_save = 0;
        j_save = 0;
        indx = 0;
      }
      else
      {
        i_save = n1;
        j_save = 1;
        n1 = n1 - 1;
        indx = 1;
      }
      i = i_save;
      j = j_save;
      return;
    }
    k = k - 1;
    k1 = k;
  }
//
//  0 < INDX: the user was asked to make an interchange.
//
  else if ( indx == 1 )
  {
    k1 = k;
  }

  for ( ; ; )
  {

    i_save = 2 * k1;

    if ( i_save == n1 )
    {
      j_save = k1;
      k1 = i_save;
      indx = -1;
      i = i_save;
      j = j_save;
      return;
    }
    else if ( i_save <= n1 )
    {
      j_save = i_save + 1;
      indx = -2;
      i = i_save;
      j = j_save;
      return;
    }

    if ( k <= 1 )
    {
      break;
    }

    k = k - 1;
    k1 = k;
  }

  if ( n1 == 1 )
  {
    i_save = 0;
    j_save = 0;
    indx = 0;
    i = i_save;
    j = j_save;
  }
  else
  {
    i_save = n1;
    j_save = 1;
    n1 = n1 - 1;
    indx = 1;
    i = i_save;
    j = j_save;
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
