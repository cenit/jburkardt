# include <cmath>
# include <cstdlib>
# include <cstring>
# include <ctime>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r83v.hpp"

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

void i4_log_10_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_LOG_10_TEST tests I4_LOG_10.
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
{
  int i;
  int x[13] = { 0, 1, 2, 3, 9, 10, 11, 99, 101, -1, -2, -3, -9 };

  cout << "\n";
  cout << "I4_LOG_10_TEST\n";
  cout << "  I4_LOG_10: whole part of log base 10,\n";
  cout << "\n";
  cout << "     X     I4_LOG_10(X)\n";
  cout << "\n";

  for ( i = 0; i < 13; i++ )
  {
    cout                                 << "  "
         << setw(6) << x[i]              << "  "
         << setw(6) << i4_log_10 ( x[i] ) << "\n";
  }

  return;
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

void i4_max_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_MAX_TEST tests I4_MAX.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 March 2015
//
//  Author:
//
//    John Burkardt
//
{
  int a;
  int b;
  int c;
  int i;
  int i4_hi;
  int i4_lo;
  int seed;

  cout << "\n";
  cout << "I4_MAX_TEST\n";
  cout << "  I4_MAX returns the maximum of two I4's.\n";
  cout << "\n";
  cout << "       A       B      C=I4_MAX(A,B)\n";
  cout << "\n";

  i4_lo = -100;
  i4_hi = +100;
  seed = 123456789;

  for ( i = 0; i < 10; i++ )
  {
    a = i4_uniform_ab ( i4_lo, i4_hi, seed );
    b = i4_uniform_ab ( i4_lo, i4_hi, seed );
    c = i4_max ( a, b );
    cout << "  " << setw(8) << a
         << "  " << setw(8) << b
         << "  " << setw(8) << c << "\n";
  }

  return;
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

void i4_min_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_MIN_TEST tests I4_MIN.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 March 2015
//
//  Author:
//
//    John Burkardt
//
{
  int a;
  int b;
  int c;
  int i;
  int i4_hi;
  int i4_lo;
  int seed;

  cout << "\n";
  cout << "I4_MIN_TEST\n";
  cout << "  I4_MIN returns the minimum of two I4's.\n";
  cout << "\n";
  cout << "       A       B      C=I4_MIN(A,B)\n";
  cout << "\n";

  i4_lo = -100;
  i4_hi = +100;
  seed = 123456789;

  for ( i = 0; i < 10; i++ )
  {
    a = i4_uniform_ab ( i4_lo, i4_hi, seed );
    b = i4_uniform_ab ( i4_lo, i4_hi, seed );
    c = i4_min ( a, b );
    cout << "  " << setw(8) << a
         << "  " << setw(8) << b
         << "  " << setw(8) << c << "\n";
  }

  return;
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

void i4_power_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_POWER_TEST tests I4_POWER.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 January 2016
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int i_test[7] = { 0, 1, 2, 3, 10, -1, -2 };
  int j;
  int j_test[7] = { 1, 2, 3, 3, 3, 4, 5 };
  int test;
  int test_num;

  test_num = 7;

  cout << "\n";
  cout << "I4_POWER_TEST\n";
  cout << "  I4_POWER computes I^J\n";
  cout << "\n";
  cout << "         I       J  I4_POWER(I,J)\n";
  cout << "\n";

  for ( test = 0; test < test_num; test++ )
  {
    i = i_test[test];
    j = j_test[test];
    cout << "  " << setw(8) << i
         << "  " << setw(8) << j
         << "  " << setw(8) << i4_power ( i, j ) << "\n";
  }

  return;
}
//****************************************************************************80

void i4_uniform_ab_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_UNIFORM_AB_TEST tests I4_UNIFORM_AB.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    27 October 2014
//
//  Author:
//
//    John Burkardt
//
{
  int a = -100;
  int b = 200;
  int i;
  int j;
  int seed = 123456789;

  cout << "\n";
  cout << "I4_UNIFORM_AB_TEST\n";
  cout << "  I4_UNIFORM_AB computes pseudorandom values\n";
  cout << "  in an interval [A,B].\n";

  cout << "\n";
  cout << "  The lower endpoint A = " << a << "\n";
  cout << "  The upper endpoint B = " << b << "\n";
  cout << "  The initial seed is " << seed << "\n";
  cout << "\n";

  for ( i = 1; i <= 20; i++ )
  {
    j = i4_uniform_ab ( a, b, seed );

    cout << "  " << setw(8) << i
         << "  " << setw(8) << j << "\n";
  }

  return;
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

void r8_uniform_01_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_UNIFORM_01_TEST tests R8_UNIFORM_01.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    12 September 2005
//
//  Author:
//
//    John Burkardt
//
{
# define N 1000

  int i;
  double max;
  double mean;
  double min;
  int n;
  int seed = 123456789;
  double x[N];
  double variance;

  cout << "\n";
  cout << "R8_UNIFORM_01_TEST\n";
  cout << "  R8_UNIFORM_01 samples a uniform random distribution in [0,1].\n";
  cout << "  distributed random numbers.\n";
  cout << "  Using initial random number seed = " << seed << "\n";

  for ( i = 0; i < N; i++ )
  {
    x[i] = r8_uniform_01 ( seed );
  }

  cout << "\n";
  cout << "  First few values:\n";
  cout << "\n";
  for ( i = 0; i < 10; i++ )
  {
    cout << "  " << setw(6) << i
         << "  " << setw(14) << x[i] << "\n";
  }

  return;
# undef N
}
//****************************************************************************80

double *r83_indicator ( int m, int n )

//****************************************************************************80
//
//  Purpose:
//
//    R83_INDICATOR sets up an R83 indicator matrix.
//
//  Discussion:
//
//    The R83 storage format is used for a tridiagonal matrix.
//    The superdiagonal is stored in entries (1,2:min(M+1,N)).
//    The diagonal in entries (2,1:min(M,N)).
//    The subdiagonal in (3,min(M-1,N)).
//    R8GE A(I,J) = R83 A[I-J+1+J*3] (0 based indexing).
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
//    02 September 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the order of the matrix.
//
//    Output, double R83_INDICATOR[3*N], the R83 indicator matrix.
//
{
  double *a;
  int fac;
  int i;
  int i_hi;
  int i_lo;
  int j;

  fac = i4_power ( 10, i4_log_10 ( n ) + 1 );

  a = new double[3*n];

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < 3; i++ )
    {
      a[i+j*3] = 0.0;
    }
  }

  for ( j = 0; j < n; j++ )
  {
    i_lo = i4_max ( 0, j - 1 );
    i_hi = i4_min ( m - 1, j + 1 );
    for ( i = i_lo; i <= i_hi; i++ )
    {
      a[i-j+1+j*3] = ( double ) ( fac * ( i + 1 ) + j + 1 );
    }
  }

  return a;
}
//****************************************************************************80

void r83_indicator_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83_INDICATOR_TEST tests R83_INDICATOR.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    25 August 2006
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int m = 5;
  int n = 4;

  cout << "\n";
  cout << "R83_INDICATOR_TEST\n";
  cout << "  R83_INDICATOR sets up an R83 indicator matrix.\n";
  cout << "  Matrix order is " << m << " by " << n << "\n";

  a = r83_indicator ( m, n );

  r83_print ( m, n, a, "  The R83 indicator matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r83_print ( int m, int n, double a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    R83_PRINT prints an R83 matrix.
//
//  Discussion:
//
//    The R83 storage format is used for a tridiagonal matrix.
//    The superdiagonal is stored in entries (1,2:min(M+1,N)).
//    The diagonal in entries (2,1:min(M,N)).
//    The subdiagonal in (3,min(M-1,N)).
//    R8GE A(I,J) = R83 A[I-J+1+J*3] (0 based indexing).
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
//      A21 A32 A43 A54  *
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 September 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the order of the matrix.
//
//    Input, double A[3*N], the R83 matrix.
//
//    Input, string TITLE, a title.
//
{
  r83_print_some ( m, n, a, 1, 1, m, n, title );

  return;
}
//****************************************************************************80

void r83_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83_PRINT_TEST tests R83_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    25 August 2006
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int m = 5;
  int n = 4;

  cout << "\n";
  cout << "R83_PRINT_TEST\n";
  cout << "  R83_PRINT prints an R83 matrix.\n";
   cout << "  Matrix order is " << m << " by " << n << "\n";

  a = r83_indicator ( m, n );

  r83_print ( m, n, a, "  The R83 matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r83_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title )

//****************************************************************************80
//
//  Purpose:
//
//    R83_PRINT_SOME prints some of an R83 matrix.
//
//  Discussion:
//
//    The R83 storage format is used for a tridiagonal matrix.
//    The superdiagonal is stored in entries (1,2:min(M+1,N)).
//    The diagonal in entries (2,1:min(M,N)).
//    The subdiagonal in (3,min(M-1,N)).
//    R8GE A(I,J) = R83 A[I-J+1+J*3] (0 based indexing).
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
//    02 September 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the order of the matrix.
//
//    Input, double A[3*N], the R83 matrix.
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
      j2 = j + 1 - j2lo;
      cout << setw(7) << j << "       ";
    }

    cout << "\n";
    cout << "  Row\n";
    cout << "  ---\n";
//
//  Determine the range of the rows in this strip.
//
    i2lo = i4_max ( ilo, 1 );
    i2lo = i4_max ( i2lo, j2lo - 1 );

    i2hi = i4_min ( ihi, m );
    i2hi = i4_min ( i2hi, j2hi + 1 );

    for ( i = i2lo; i <= i2hi; i++ )
    {
//
//  Print out (up to) 5 entries in row I, that lie in the current strip.
//
      cout << setw(6) << i << ": ";

      for ( j2 = 1; j2 <= inc; j2++ )
      {
        j = j2lo - 1 + j2;

        if ( i - j + 1 < 0 || 2 < i - j + 1 )
        {
          cout << "              ";
        }
        else
        {
          cout << "  " << setw(12) << a[i-j+1+(j-1)*3];
        }
      }
      cout << "\n";
    }
  }
  return;
# undef INCX
}
//****************************************************************************80

void r83_print_some_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83_PRINT_SOME_TEST tests R83_PRINT_SOME.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    25 August 2006
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int m = 5;
  int n = 5;

  cout << "\n";
  cout << "R83_PRINT_SOME_TEST\n";
  cout << "  R83_PRINT prints some of an R83 matrix.\n";
  cout << "  Matrix order is " << m << " by " << n << "\n";

  a = r83_indicator ( m, n );

  r83_print_some ( m, n, a, 1, 1, 4, 3, "  Rows 1-4, Cols 1-3:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r83v_cg ( int n, double a1[], double a2[], double a3[], double b[], 
  double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R83V_CG uses the conjugate gradient method on an R83V system.
//
//  Discussion:
//
//    The R83V storage format is used for a tridiagonal matrix.
//    The subdiagonal is in A(min(M-1,N)).
//    The diagonal is in B(min(M,N)).
//    The superdiagonal is in C(min(M,N-1)).
//
//  Example:
//
//    An R83V matrix of order 3x5 would be stored:
//
//      B1  C1  **  **  **
//      A1  B2  C2  **  **
//      **  A2  B3  C3  **
//
//    An R83 matrix of order 5x5 would be stored:
//
//      B1  C1  **  **  **
//      A1  B2  C2  **  **
//      **  A2  B3  C3  **
//      **  **  A3  B4  C4
//      **  **  **  A4  B5
//
//    An R83 matrix of order 5x3 would be stored:
//
//      B1  C1  **
//      A1  B2  C2
//      **  A2  B3
//      **  **  A3
//      **  **  **
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 February 2016
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Frank Beckman,
//    The Solution of Linear Equations by the Conjugate Gradient Method,
//    in Mathematical Methods for Digital Computers,
//    edited by John Ralston, Herbert Wilf,
//    Wiley, 1967,
//    ISBN: 0471706892,
//    LC: QA76.5.R3.
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A1(N-1), A2(N), A3(N-1), the matrix.
//
//    Input, double B[N], the right hand side vector.
//
//    Input/output, double X[N].
//    On input, an estimate for the solution, which may be 0.
//    On output, the approximate solution vector.
//
{
  double alpha;
  double *ap;
  double beta;
  int i;
  int it;
  double *p;
  double pap;
  double pr;
  double *r;
  double rap;
//
//  Initialize
//    AP = A * x,
//    R  = b - A * x,
//    P  = b - A * x.
//
  ap = r83v_mv ( n, n, a1, a2, a3, x );

  r = new double[n];
  for ( i = 0; i < n; i++ )
  {
    r[i] = b[i] - ap[i];
  }

  p = new double[n];
  for ( i = 0; i < n; i++ )
  {
    p[i] = b[i] - ap[i];
  }
//
//  Do the N steps of the conjugate gradient method.
//
  for ( it = 1; it <= n; it++ )
  {
//
//  Compute the matrix*vector product AP=A*P.
//
    delete [] ap;
    ap = r83v_mv ( n, n, a1, a2, a3, p );
//
//  Compute the dot products
//    PAP = P*AP,
//    PR  = P*R
//  Set
//    ALPHA = PR / PAP.
//
    pap = r8vec_dot_product ( n, p, ap );
    pr = r8vec_dot_product ( n, p, r );

    if ( pap == 0.0 )
    {
      delete [] ap;
      break;
    }

    alpha = pr / pap;
//
//  Set
//    X = X + ALPHA * P
//    R = R - ALPHA * AP.
//
    for ( i = 0; i < n; i++ )
    {
      x[i] = x[i] + alpha * p[i];
    }
    for ( i = 0; i < n; i++ )
    {
      r[i] = r[i] - alpha * ap[i];
    }
//
//  Compute the vector dot product
//    RAP = R*AP
//  Set
//    BETA = - RAP / PAP.
//
    rap = r8vec_dot_product ( n, r, ap );

    beta = - rap / pap;
//
//  Update the perturbation vector
//    P = R + BETA * P.
//
    for ( i = 0; i < n; i++ )
    {
      p[i] = r[i] + beta * p[i];
    }
  }
//
//  Free memory.
//
  delete [] p;
  delete [] r;

  return;
}
//****************************************************************************80

void r83v_cg_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83V_CG_TEST tests R83V_CG.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    17 February 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a1;
  double *a2;
  double *a3;
  double *b;
  double e_norm;
  int i;
  int n;
  double *r;
  double r_norm;
  int seed;
  double *x1;
  double *x2;

  cout << "\n";
  cout << "R83_CG_TEST\n";
  cout << "  R83_CG applies CG to an R83 matrix.\n";

  n = 10;
//
//  Let A be the -1 2 -1 matrix.
//
  a1 = new double[n-1];
  a2 = new double[n];
  a3 = new double[n-1];

  r83v_dif2 ( n, n, a1, a2, a3 );
//
//  Choose a random solution.
//
  seed = 123456789;
  x1 = r8vec_uniform_01_new ( n, seed );
//
//  Compute the corresponding right hand side.
//
  b = r83v_mv ( n, n, a1, a2, a3, x1 );
//
//  Call the CG routine.
//
  x2 = new double[n];
  for ( i = 0; i < n; i++ )
  {
    x2[i] = 1.0;
  }
  r83v_cg ( n, a1, a2, a3, b, x2 );
//
//  Compute the residual.
//
  r = r83v_res ( n, n, a1, a2, a3, x2, b );
  r_norm = r8vec_norm ( n, r );
//
//  Compute the error.
//
  e_norm = r8vec_norm_affine ( n, x1, x2 );
//
//  Report.
//
  cout << "\n";
  cout << "  Number of variables N = " << n << "\n";
  cout << "  Norm of residual ||Ax-b|| = " << r_norm << "\n";
  cout << "  Norm of error ||x1-x2|| = " << e_norm << "\n";
//
//  Free memory.
//
  delete [] a1;
  delete [] a2;
  delete [] a3;
  delete [] b;
  delete [] r;
  delete [] x1;
  delete [] x2;

  return;
}
//****************************************************************************80

void r83v_copy ( int m, int n, double a1[], double a2[], double a3[], 
  double b1[], double b2[], double b3[] )

//****************************************************************************80
//
//  Purpose:
//
//    R83V_COPY copies a matrix in R83V format.
//
//  Discussion:
//
//    The R83V storage format is used for a tridiagonal matrix.
//    The subdiagonal is in A(min(M-1,N)).
//    The diagonal is in B(min(M,N)).
//    The superdiagonal is in C(min(M,N-1)).
//
//  Example:
//
//    An R83V matrix of order 3x5 would be stored:
//
//      B1  C1  **  **  **
//      A1  B2  C2  **  **
//      **  A2  B3  C3  **
//
//    An R83 matrix of order 5x5 would be stored:
//
//      B1  C1  **  **  **
//      A1  B2  C2  **  **
//      **  A2  B3  C3  **
//      **  **  A3  B4  C4
//      **  **  **  A4  B5
//
//    An R83 matrix of order 5x3 would be stored:
//
//      B1  C1  **
//      A1  B2  C2
//      **  A2  B3
//      **  **  A3
//      **  **  **
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    17 February 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the order of the matrix.
//
//    Input, double A1(min(M-1,N)), A2(min(M,N)), A3(min(M,N-1)), the matrix.
//
//    Output, double B1(min(M-1,N)), B2(min(M,N)), B3(min(M,N-1)), the copy.
//
{
  int ahi;
  int bhi;
  int chi;
  int i;

  ahi = i4_min ( m - 1, n );
  bhi = i4_min ( m,     n );
  chi = i4_min ( m,     n - 1 );

  for ( i = 0; i < ahi; i++ )
  {
    b1[i] = a1[i];
  }

  for ( i = 0; i < bhi; i++ )
  {
    b2[i] = a2[i];
  }

  for ( i = 0; i < chi; i++ )
  {
    b3[i] = a3[i];
  }
   
  return;
}
//****************************************************************************80

void r83v_copy_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83V_COPY_TEST tests R83V_COPY.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 February 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a1;
  double *a2;
  double *a3;
  int ahi;
  double *b1;
  double *b2;
  double *b3;
  int bhi;
  int chi;
  int i;
  int m;
  int n;

  cout << "\n";
  cout << "R83V_COPY_TEST\n";
  cout << "  R83V_COPY copies an R83V matrix.\n";
  cout << "  We check three cases, M<N, M=N, M>N.\n";

  for ( i = 1; i <= 3; i++ )
  {
    if ( i == 1 )
    {
      m = 3;
      n = 5;
    }
    else if ( i == 2 )
    {
      m = 5;
      n = 5;
    }
    else if ( i == 3 )
    {
      m = 5;
      n = 3;
    }

    ahi = i4_min ( m - 1, n );
    bhi = i4_min ( m,     n );
    chi = i4_min ( m,     n - 1 );
    a1 = new double[ahi];
    a2 = new double[bhi];
    a3 = new double[chi];

    r83v_indicator ( m, n, a1, a2, a3 );
    r83v_print ( m, n, a1, a2, a3, "  R83V matrix A:" );

    b1 = new double[ahi];
    b2 = new double[bhi];
    b3 = new double[chi];
    r83v_copy ( m, n, a1, a2, a3, b1, b2, b3 );
    r83v_print ( m, n, b1, b2, b3, "  B = copy of A:" );

    delete [] a1;
    delete [] a2;
    delete [] a3;
    delete [] b1;
    delete [] b2;
    delete [] b3;
  }

  return;
}
//****************************************************************************80

double *r83v_cr_fa ( int n, double a1[], double a2[], double a3[] )

//****************************************************************************80
//
//  Purpose:
//
//    R83V_CR_FA decomposes an R83V matrix using cyclic reduction.
//
//  Discussion:
//
//    The R83V storage format is used for a tridiagonal matrix.
//    The subdiagonal is in A(min(M-1,N)).
//    The diagonal is in B(min(M,N)).
//    The superdiagonal is in C(min(M,N-1)).
//
//    Once R83V_CR_FA has decomposed a matrix A, then R83V_CR_SL may be used to
//    solve linear systems A * x = b.
//
//    This function does not employ pivoting.  Hence, the results can be more
//    sensitive to ill-conditioning than standard Gauss elimination.  In
//    particular, this function will fail if any diagonal element of the matrix
//    is zero.  Other matrices may also cause this function to fail.
//
//    This function can be guaranteed to work properly if the matrix is strictly
//    diagonally dominant, that is, if the absolute value of the diagonal
//    element is strictly greater than the sum of the absolute values of
//    the offdiagonal elements, for each equation.
//
//    The algorithm may be illustrated by the following figures:
//
//    The initial matrix is given by:
//
//          D1 U1
//          L1 D2 U2
//             L2 D3 U3
//                L3 D4 U4
//                   L4 D U5
//                      L5 D6
//
//    Rows and columns are permuted in an odd/even way to yield:
//
//          D1       U1
//             D3    L2 U3
//                D5    L4 U5
//          L1 U2    D2
//             L3 U4    D4
//                L5       D6
//
//    A block LU decomposition is performed to yield:
//
//          D1      |U1
//             D3   |L2 U3
//                D5|   L4 U5
//          --------+--------
//                  |D2'F3
//                  |F1 D4'F4
//                  |   F2 D6'
//
//    For large systems, this reduction is repeated on the lower right hand
//    tridiagonal subsystem until a completely upper triangular system
//    is obtained.  The system has now been factored into the product of a
//    lower triangular system and an upper triangular one, and the information
//    defining this factorization may be used by R83V_CR_SL to solve linear
//    systems.
//
//  Example:
//
//    An R83V matrix of order 3x5 would be stored:
//
//      B1  C1  **  **  **
//      A1  B2  C2  **  **
//      **  A2  B3  C3  **
//
//    An R83 matrix of order 5x5 would be stored:
//
//      B1  C1  **  **  **
//      A1  B2  C2  **  **
//      **  A2  B3  C3  **
//      **  **  A3  B4  C4
//      **  **  **  A4  B5
//
//    An R83 matrix of order 5x3 would be stored:
//
//      B1  C1  **
//      A1  B2  C2
//      **  A2  B3
//      **  **  A3
//      **  **  **
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 February 2016
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Roger Hockney,
//    A fast direct solution of Poisson's equation using Fourier Analysis,
//    Journal of the ACM,
//    Volume 12, Number 1, pages 95-113, January 1965.
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A1(N-1), A2(N), A3(N-1), the matrix.
//
//    Output, double R83V_CR_FA[3*(2*N+1)], factorization information 
//    needed by R83V_CR_SL.
//
{
  double *a_cr;
  int i;
  int iful;
  int ifulp;
  int ihaf;
  int il;
  int ilp;
  int inc;
  int incr;
  int ipnt;
  int ipntp;
  int j;

  if ( n <= 0 )
  {
    cerr << "\n";
    cerr << "R83V_CR_FA - Fatal error!\n";
    cerr << "  Nonpositive N = " << n << "\n";
    exit ( 1 );
  }

  a_cr = new double[3 * ( 2 * n + 1 )];

  for ( j = 0; j < 2 * n + 1; j++ )
  {
    for ( i = 0; i < 3; i++ )
    {
      a_cr[i+j*3] = 0.0;
    }
  }

  if ( n == 1 )
  {
    a_cr[1+0*3] = 1.0 / a2[0];
    return a_cr;
  }

  for ( j = 1; j <= n - 1; j++ )
  {
    a_cr[0+j*3] = a3[j-1];
  }

  for ( j = 1; j <= n; j++ )
  {
    a_cr[1+j*3] = a2[j-1];
  }

  for ( j = 1; j <= n - 1; j++ )
  {
    a_cr[2+j*3] = a1[j-1];
  }

  il = n;
  ipntp = 0;

  while ( 1 < il )
  {
    ipnt = ipntp;
    ipntp = ipntp + il;
    if ( ( il % 2 ) == 1 )
    {
      inc = il + 1;
    }
    else
    {
      inc = il;
    }

    incr = inc / 2;
    il = il / 2;
    ihaf = ipntp + incr + 1;
    ifulp = ipnt + inc + 2;

    for ( ilp = incr; 1 <= ilp; ilp-- )
    {
      ifulp = ifulp - 2;
      iful = ifulp - 1;
      ihaf = ihaf - 1;

      a_cr[1+iful*3] = 1.0 / a_cr[1+iful*3];
      a_cr[2+iful*3]  = a_cr[2+iful*3]  * a_cr[1+iful*3];
      a_cr[0+ifulp*3] = a_cr[0+ifulp*3] * a_cr[1+(ifulp+1)*3];
      a_cr[1+ihaf*3]  = a_cr[1+ifulp*3] 
        - a_cr[0+iful*3]  * a_cr[2+iful*3]
        - a_cr[0+ifulp*3] * a_cr[2+ifulp*3];
      a_cr[2+ihaf*3] = -a_cr[2+ifulp*3] * a_cr[2+(ifulp+1)*3];
      a_cr[0+ihaf*3] = -a_cr[0+ifulp*3] * a_cr[0+(ifulp+1)*3];
    }
  }

  a_cr[1+(ipntp+1)*3] = 1.0 / a_cr[1+(ipntp+1)*3];

  return a_cr;
}
//****************************************************************************80

void r83v_cr_fa_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83V_CR_FA_TEST tests R83V_CR_FA.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 February 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a_cr;
  double *a1;
  double *a2;
  double *a3;
  double *b;
  int i;
  int j;
  int n = 10;
  double value;
  double *x;

  cout << "\n";
  cout << "R83V_CR_FA_TEST:\n";
  cout << "  R83V_CR_FA factors an R83V matrix using cyclic reduction;\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
  cout << "  The matrix is NOT symmetric.\n";
//
//  Set the matrix values.
//
  a1 = new double[( n - 1 )];
  a2 = new double[  n      ];
  a3 = new double[( n - 1 )];
 
  for ( j = 0; j < n; j++ )
  {
    for ( i = i4_max ( 0, j - 1 ); i <= i4_min ( n - 1, j + 1 ); i++ )
    {
      if ( j == i - 1 )
      {
        a1[j] = ( double ) ( j + 1 );
      }
      else if ( j == i )
      {
        a2[j] = ( double ) ( 4 * ( j + 1 ) );
      }
      else if ( j == i + 1 )
      {
        a3[j-1] = ( double ) ( j + 1 );
      }
    }
  }

  r83v_print ( n, n, a1, a2, a3, "  The matrix:" );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( n );
//
//  Compute the corresponding right hand side.
//
  b = r83v_mv ( n, n, a1, a2, a3, x );
//
//  Factor the matrix.
//
  a_cr = r83v_cr_fa ( n, a1, a2, a3 );
//
//  Solve the linear system.
//
  x = r83v_cr_sl ( n, a_cr, b );

  r8vec_print ( n, x, "  Solution:" );

  delete [] a_cr;
  delete [] a1;
  delete [] a2;
  delete [] a3;
  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

double *r83v_cr_sl ( int n, double a_cr[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    R83V_CR_SL solves a real linear system factored by R83V_CR_FA.
//
//  Discussion:
//
//    The R83V storage format is used for a tridiagonal matrix.
//    The subdiagonal is in A(min(M-1,N)).
//    The diagonal is in B(min(M,N)).
//    The superdiagonal is in C(min(M,N-1)).
//
//    The matrix A must be tridiagonal.  R83V_CR_FA is called to compute the
//    LU factors of A.  It does so using a form of cyclic reduction.  If
//    the factors computed by R83V_CR_FA are passed to R83V_CR_SL, then one or 
//    many linear systems involving the matrix A may be solved.
//
//    Note that R83V_CR_FA does not perform pivoting, and so the solution 
//    produced by R83V_CR_SL may be less accurate than a solution produced 
//    by a standard Gauss algorithm.  However, such problems can be 
//    guaranteed not to occur if the matrix A is strictly diagonally 
//    dominant, that is, if the absolute value of the diagonal coefficient 
//    is greater than the sum of the absolute values of the two off diagonal 
//    coefficients, for each row of the matrix.
//
//  Example:
//
//    An R83V matrix of order 3x5 would be stored:
//
//      B1  C1  **  **  **
//      A1  B2  C2  **  **
//      **  A2  B3  C3  **
//
//    An R83 matrix of order 5x5 would be stored:
//
//      B1  C1  **  **  **
//      A1  B2  C2  **  **
//      **  A2  B3  C3  **
//      **  **  A3  B4  C4
//      **  **  **  A4  B5
//
//    An R83 matrix of order 5x3 would be stored:
//
//      B1  C1  **
//      A1  B2  C2
//      **  A2  B3
//      **  **  A3
//      **  **  **
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 February 2016
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Roger Hockney,
//    A fast direct solution of Poisson's equation using Fourier Analysis,
//    Journal of the ACM,
//    Volume 12, Number 1, pages 95-113, January 1965.
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//    N must be positive.
//
//    Input, double A_CR[3*(2*N+1)], factorization information computed by
//    R83V_CR_FA.
//
//    Input, double B[N], the right hand side.
//
//    Output, double R83V_CR_SL[N], the solution.
//
{
  int i;
  int iful;
  int ifulm;
  int ihaf;
  int il;
  int ipnt;
  int ipntp;
  int ndiv;
  double *rhs;
  double *x;

  if ( n <= 0 )
  {
    cerr << "\n";
    cerr << "R83V_CR_SL - Fatal error!\n";
    cerr << "  Nonpositive N = " << n << "\n";
    exit ( 1 );
  }

  if ( n == 1 )
  {
    x = new double[1];
    x[0] = a_cr[1+1*3] * b[0];
    return x;
  }
//
//  Set up RHS.
//
  rhs = new double[ ( 2 * n + 1 )];

  rhs[0] = 0.0;
  for ( i = 1; i <= n; i++ )
  {
    rhs[i] = b[i-1];
  }
  for ( i = n + 1; i <= 2 * n; i++ )
  {
    rhs[i] = 0.0;
  }

  il = n;
  ndiv = 1;
  ipntp = 0;

  while ( 1 < il )
  {
    ipnt = ipntp;
    ipntp = ipntp + il;
    il = il / 2;
    ndiv = ndiv * 2;
    ihaf = ipntp;

    for ( iful = ipnt + 2; iful <= ipntp; iful = iful + 2 )
    {
      ihaf = ihaf + 1;
      rhs[ihaf] = rhs[iful] 
        - a_cr[2+(iful-1)*3] * rhs[iful-1]
        - a_cr[0+iful*3]     * rhs[iful+1];
    }
  }

  rhs[ihaf] = rhs[ihaf] * a_cr[1+ihaf*3];

  ipnt = ipntp;

  while ( 0 < ipnt )
  {
    ipntp = ipnt;
    ndiv = ndiv / 2;
    il = n / ndiv;
    ipnt = ipnt - il;
    ihaf = ipntp;

    for ( ifulm = ipnt + 1; ifulm <= ipntp; ifulm = ifulm + 2 )
    {
      iful = ifulm + 1;
      ihaf = ihaf + 1;
      rhs[iful] = rhs[ihaf];
      rhs[ifulm] = a_cr[1+ifulm*3] * ( 
                               rhs[ifulm] 
        - a_cr[2+(ifulm-1)*3] * rhs[ifulm-1] 
        - a_cr[0+ifulm*3]     * rhs[iful] );
    }
  }

  x = new double[n];

  for ( i = 0; i < n; i++ )
  {
    x[i] = rhs[i+1];
  }

  delete [] rhs;

  return x;
}
//****************************************************************************80

void r83v_cr_sl_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83V_CR_SL_TEST tests R83V_CR_SL.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 February 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a_cr;
  double *a1;
  double *a2;
  double *a3;
  double *b;
  int i;
  int j;
  int n = 10;
  double value;
  double *x;

  cout << "\n";
  cout << "R83V_CR_SL_TEST:\n";
  cout << "  R83V_CR_SL solves a linear system factored by R83V_CR_FA.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
  cout << "  The matrix is NOT symmetric.\n";
//
//  Set the matrix values.
//
  a1 = new double[n-1];
  a2 = new double[n];
  a3 = new double[n-1];
 
  for ( j = 0; j < n; j++ )
  {
    for ( i = i4_max ( 0, j - 1 ); i <= i4_min ( n - 1, j + 1 ); i++ )
    {
      if ( j == i - 1 )
      {
        a1[j] = ( double ) ( j + 1 );
      }
      else if ( j == i )
      {
        a2[j] = ( double ) ( 4 * ( j + 1 ) );
      }
      else if ( j == i + 1 )
      {
        a3[j-1] = ( double ) ( j + 1 );
      }
    }
  }

  r83v_print ( n, n, a1, a2, a3, "  The matrix:" );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( n );
//
//  Compute the corresponding right hand side.
//
  b = r83v_mv ( n, n, a1, a2, a3, x );
//
//  Factor the matrix.
//
  a_cr = r83v_cr_fa ( n, a1, a2, a3 );
//
//  Solve the linear system.
//
  x = r83v_cr_sl ( n, a_cr, b );

  r8vec_print ( n, x, "  Solution:" );

  delete [] a_cr;
  delete [] a1;
  delete [] a2;
  delete [] a3;
  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

double *r83v_cr_sls ( int n, double a_cr[], int nb, double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    R83V_CR_SLS solves several real linear systems factored by R83V_CR_FA.
//
//  Discussion:
//
//    The R83V storage format is used for a tridiagonal matrix.
//    The subdiagonal is in A(min(M-1,N)).
//    The diagonal is in B(min(M,N)).
//    The superdiagonal is in C(min(M,N-1)).
//
//    The matrix A must be tridiagonal.  R83V_CR_FA is called to compute the
//    LU factors of A.  It does so using a form of cyclic reduction.  If
//    the factors computed by R83V_CR_FA are passed to R83V_CR_SLS, then one or 
//    many linear systems involving the matrix A may be solved.
//
//    Note that R83V_CR_FA does not perform pivoting, and so the solutions
//    produced by R83V_CR_SLS may be less accurate than a solution produced 
//    by a standard Gauss algorithm.  However, such problems can be 
//    guaranteed not to occur if the matrix A is strictly diagonally 
//    dominant, that is, if the absolute value of the diagonal coefficient 
//    is greater than the sum of the absolute values of the two off diagonal 
//    coefficients, for each row of the matrix.
//
//  Example:
//
//    An R83V matrix of order 3x5 would be stored:
//
//      B1  C1  **  **  **
//      A1  B2  C2  **  **
//      **  A2  B3  C3  **
//
//    An R83 matrix of order 5x5 would be stored:
//
//      B1  C1  **  **  **
//      A1  B2  C2  **  **
//      **  A2  B3  C3  **
//      **  **  A3  B4  C4
//      **  **  **  A4  B5
//
//    An R83 matrix of order 5x3 would be stored:
//
//      B1  C1  **
//      A1  B2  C2
//      **  A2  B3
//      **  **  A3
//      **  **  **
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 February 2016
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Roger Hockney,
//    A fast direct solution of Poisson's equation using Fourier Analysis,
//    Journal of the ACM,
//    Volume 12, Number 1, pages 95-113, January 1965.
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A_CR[3*(2*N+1)], factorization information computed by
//    R83V_CR_FA.
//
//    Input, int NB, the number of systems.
//
//    Input, double B[N*NB], the right hand sides.
//
//    Output, double R83V_CR_SL[N*NB], the solutions.
//
{
  int i;
  int iful;
  int ifulm;
  int ihaf;
  int il;
  int ipnt;
  int ipntp;
  int j;
  int ndiv;
  double *rhs;
  double *x;

  if ( n <= 0 )
  {
    cerr << "\n";
    cerr << "R83V_CR_SLS - Fatal error!\n";
    cerr << "  Nonpositive N = " << n << "\n";
    exit ( 1 );
  }

  if ( n == 1 )
  {
    x = new double[n*nb];
    for ( j = 0; j < nb; j++ )
    {
      x[0+j*n] = a_cr[1+0*3] * b[0+j*n];
    }
    return x;
  }
//
//  Set up RHS.
//
  rhs = new double[( 2 * n + 1 ) * nb];

  for ( j = 0; j < nb; j++ )
  {
    rhs[0+j*(2*n+1)] = 0.0;
    for ( i = 1; i <= n; i++ )
    {
      rhs[i+j*(2*n+1)] = b[i-1+j*n];
    }
    for ( i = n + 1; i <= 2 * n; i++ )
    {
      rhs[i+j*(2*n+1)] = 0.0;
    }
  }

  il = n;
  ndiv = 1;
  ipntp = 0;

  while ( 1 < il )
  {
    ipnt = ipntp;
    ipntp = ipntp + il;
    il = il / 2;
    ndiv = ndiv * 2;

    for ( j = 0; j < nb; j++ )
    {
      ihaf = ipntp;
      for ( iful = ipnt + 2; iful <= ipntp; iful = iful + 2 )
      {
        ihaf = ihaf + 1;
        rhs[ihaf+j*(2*n+1)] = rhs[iful+j*(2*n+1)] 
          - a_cr[2+(iful-1)*3] * rhs[iful-1+j*(2*n+1)]
          - a_cr[0+iful*3]     * rhs[iful+1+j*(2*n+1)];
      }
    }
  }

  for ( j = 0; j < nb; j++ )
  {
    rhs[ihaf+j*(2*n+1)] = rhs[ihaf+j*(2*n+1)] * a_cr[1+ihaf*3];
  }

  ipnt = ipntp;

  while ( 0 < ipnt )
  {
    ipntp = ipnt;
    ndiv = ndiv / 2;
    il = n / ndiv;
    ipnt = ipnt - il;

    for ( j = 0; j < nb; j++ )
    {
      ihaf = ipntp;
      for ( ifulm = ipnt + 1; ifulm <= ipntp; ifulm = ifulm + 2 )
      {
        iful = ifulm + 1;
        ihaf = ihaf + 1;
        rhs[iful+j*(2*n+1)] = rhs[ihaf+j*(2*n+1)];
        rhs[ifulm+j*(2*n+1)] = a_cr[1+ifulm*3] * ( 
                                  rhs[ifulm+j*(2*n+1)] 
          - a_cr[2+(ifulm-1)*3] * rhs[ifulm-1+j*(2*n+1)] 
          - a_cr[0+ifulm*3]     * rhs[iful+j*(2*n+1)] );
      }
    }
  }

  x = new double[n * nb];

  for ( j = 0; j < nb; j++ )
  {
    for ( i = 0; i < n; i++ )
    {
      x[i+j*n] = rhs[i+1+j*(2*n+1)];
    }
  }

  delete [] rhs;

  return x;
}
//****************************************************************************80

void r83v_cr_sls_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83V_CR_SLS_TEST tests R83V_CR_SLS.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 February 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a_cr;
  double *a1;
  double *a2;
  double *a3;
  double *b;
  int i;
  int j;
  int n = 5;
  int nb = 2;
  double *x;

  cout << "\n";
  cout << "R83V_CR_SLS_TEST\n";
  cout << "  R83V_CR_SLS solves multiple linear systems A*x=b1:bn with R83V matrix\n";
  cout << "  using cyclic reduction, after factorization by R83V_CR_FA.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
  cout << "  Number of linear systems = " << nb << "\n";
  cout << "  Demonstrate multiple system solution method.\n";
//
//  Set the matrix values.
//
//
//  Set the matrix values.
//
  a1 = new double[n-1];
  a2 = new double[n];
  a3 = new double[n-1];
 
  r83v_dif2 ( n, n, a1, a2, a3 );

  r83v_print ( n, n, a1, a2, a3, "  System matrix:" );
//
//  Factor the matrix once.
//
  a_cr = r83v_cr_fa ( n, a1, a2, a3 );
//
//  Set up the linear systems.
//
  b = new double[n * nb];

  for ( j = 0; j < nb; j++ )
  {
    for ( i = 0; i < n; i++ )
    {
      b[i+j*n] = 0.0;
    }
  }

  j = 0;
  b[n-1+j*n] = ( double ) ( n + 1 );

  j = 1;
  b[0  +j*n] = 1.0;
  b[n-1+j*n] = 1.0;

  r8ge_print ( n, nb, b, "  RHS:" );
//
//  Solve the linear systems.
//
  x = r83v_cr_sls ( n, a_cr, nb, b );

  r8ge_print ( n, nb, x, "  Solutions:" );

  delete [] a_cr;
  delete [] a1;
  delete [] a2;
  delete [] a3;
  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

void r83v_dif2 ( int m, int n, double a[], double b[], double c[] )

//****************************************************************************80
//
//  Purpose:
//
//    R83V_DIF2 returns the DIF2 matrix in R83V format.
//
//  Discussion:
//
//    The R83V storage format is used for a tridiagonal matrix.
//    The subdiagonal is in A(min(M-1,N)).
//    The diagonal is in B(min(M,N)).
//    The superdiagonal is in C(min(M,N-1)).
//
//  Example:
//
//    An R83V matrix of order 3x5 would be stored:
//
//      B1  C1  **  **  **
//      A1  B2  C2  **  **
//      **  A2  B3  C3  **
//
//    An R83 matrix of order 5x5 would be stored:
//
//      B1  C1  **  **  **
//      A1  B2  C2  **  **
//      **  A2  B3  C3  **
//      **  **  A3  B4  C4
//      **  **  **  A4  B5
//
//    An R83 matrix of order 5x3 would be stored:
//
//      B1  C1  **
//      A1  B2  C2
//      **  A2  B3
//      **  **  A3
//      **  **  **
//
//  Properties:
//
//    A is banded, with bandwidth 3.
//    A is tridiagonal.
//    Because A is tridiagonal, it has property A (bipartite).
//    A is a special case of the TRIS or tridiagonal scalar matrix.
//    A is integral, therefore det ( A ) is integral, and 
//    det ( A ) * inverse ( A ) is integral.
//    A is Toeplitz: constant along diagonals.
//    A is symmetric: A' = A.
//    Because A is symmetric, it is normal.
//    Because A is normal, it is diagonalizable.
//    A is persymmetric: A(I,J) = A(N+1-J,N+1-I).
//    A is positive definite.
//    A is an M matrix.
//    A is weakly diagonally dominant, but not strictly diagonally dominant.
//    A has an LU factorization A = L * U, without pivoting.
//      The matrix L is lower bidiagonal with subdiagonal elements:
//        L(I+1,I) = -I/(I+1)
//      The matrix U is upper bidiagonal, with diagonal elements
//        U(I,I) = (I+1)/I
//      and superdiagonal elements which are all -1.
//    A has a Cholesky factorization A = L * L', with L lower bidiagonal.
//      L(I,I) =    sqrt ( (I+1) / I )
//      L(I,I-1) = -sqrt ( (I-1) / I )
//    The eigenvalues are
//      LAMBDA(I) = 2 + 2 * COS(I*PI/(N+1))
//                = 4 SIN^2(I*PI/(2*N+2))
//    The corresponding eigenvector X(I) has entries
//       X(I)(J) = sqrt(2/(N+1)) * sin ( I*J*PI/(N+1) ).
//    Simple linear systems:
//      x = (1,1,1,...,1,1),   A*x=(1,0,0,...,0,1)
//      x = (1,2,3,...,n-1,n), A*x=(0,0,0,...,0,n+1)
//    det ( A ) = N + 1.
//    The value of the determinant can be seen by induction,
//    and expanding the determinant across the first row:
//      det ( A(N) ) = 2 * det ( A(N-1) ) - (-1) * (-1) * det ( A(N-2) )
//                = 2 * N - (N-1)
//                = N + 1
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    17 February 2016
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Robert Gregory, David Karney,
//    A Collection of Matrices for Testing Computational Algorithms,
//    Wiley, 1969,
//    ISBN: 0882756494,
//    LC: QA263.68
//
//    Morris Newman, John Todd,
//    Example A8,
//    The evaluation of matrix inversion programs,
//    Journal of the Society for Industrial and Applied Mathematics,
//    Volume 6, Number 4, pages 466-476, 1958.
//
//    John Todd,
//    Basic Numerical Mathematics,
//    Volume 2: Numerical Algebra,
//    Birkhauser, 1980,
//    ISBN: 0817608117,
//    LC: QA297.T58.
//
//    Joan Westlake,
//    A Handbook of Numerical Matrix Inversion and Solution of 
//    Linear Equations,
//    John Wiley, 1968,
//    ISBN13: 978-0471936756,
//    LC: QA263.W47.
//
//  Parameters:
//
//    Input, int M, N, the order of the matrix.
//
//    Output, double A(min(M-1,N)), B(min(M,N)), C(min(M,N-1)), the matrix.
//
{
  int ahi;
  int bhi;
  int chi;
  int i;

  ahi = i4_min ( m - 1, n );
  bhi = i4_min ( m,     n );
  chi = i4_min ( m,     n - 1 );

  for ( i = 0; i < ahi; i++ )
  {
    a[i] = -1.0;
  }

  for ( i = 0; i < bhi; i++ )
  {
    b[i] = 2.0;
  }

  for ( i = 0; i < chi; i++ )
  {
    c[i] = -1.0;
  }
   
  return;
}
//****************************************************************************80

void r83v_dif2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83V_DIF2_TEST tests R83V_DIF2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 February 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int ahi;
  double *b;
  int bhi;
  double *c;
  int chi;
  int i;
  int m;
  int n;

  cout << "\n";
  cout << "R83V_DIF2_TEST\n";
  cout << "  R83V_DIF2 sets up an R83V second difference matrix.\n";
  cout << "  We check three cases, M<N, M=N, M>N.\n";

  for ( i = 1; i <= 3; i++ )
  {
    if ( i == 1 )
    {
      m = 3;
      n = 5;
    }
    else if ( i == 2 )
    {
      m = 5;
      n = 5;
    }
    else if ( i == 3 )
    {
      m = 5;
      n = 3;
    }

    ahi = i4_min ( m - 1, n );
    bhi = i4_min ( m,     n );
    chi = i4_min ( m,     n - 1 );
    a = new double[ahi];
    b = new double[bhi];
    c = new double[chi];

    r83v_dif2 ( m, n, a, b, c );

    r83v_print ( m, n, a, b, c, "  The R83V DIF2 matrix:" );

    delete [] a;
    delete [] b;
    delete [] c;
  }

  return;
}
//****************************************************************************80

double *r83v_fs ( int n, double a1[], double a2[], double a3[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    R83V_FS solves a linear system with R83V matrix.
//
//  Discussion:
//
//    This function is based on the LINPACK SGTSL routine.
// 
//    The R83V storage format is used for a tridiagonal matrix.
//    The subdiagonal is in A(min(M-1,N)).
//    The diagonal is in B(min(M,N)).
//    The superdiagonal is in C(min(M,N-1)).
//
//  Example:
//
//    An R83V matrix of order 3x5 would be stored:
//
//      B1  C1  **  **  **
//      A1  B2  C2  **  **
//      **  A2  B3  C3  **
//
//    An R83 matrix of order 5x5 would be stored:
//
//      B1  C1  **  **  **
//      A1  B2  C2  **  **
//      **  A2  B3  C3  **
//      **  **  A3  B4  C4
//      **  **  **  A4  B5
//
//    An R83 matrix of order 5x3 would be stored:
//
//      B1  C1  **
//      A1  B2  C2
//      **  A2  B3
//      **  **  A3
//      **  **  **
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 February 2016
//
//  Author:
//
//    John Burkardt, based on the LINPACK SGTSL function.
//
//  Reference:
//
//    Jack Dongarra, Cleve Moler, Jim Bunch and Pete Stewart,
//    LINPACK User's Guide,
//    SIAM, (Society for Industrial and Applied Mathematics),
//    3600 University City Science Center,
//    Philadelphia, PA, 19104-2688.
//    ISBN 0-89871-172-X
//
//  Parameters:
//
//    Input, int N, the order of the tridiagonal matrix.
//
//    Input, double A1[N-1], A2[N], A3[N-1], the R83V matrix.
//
//    Input, double B[N], the right hand side.
//
//    Output, double R83V_FS[N], the solution.
//
{
  double *c;
  double *d;
  double *e;
  int i;
  int info;
  int k;
  double t;
  double *x;
//
//  Copy the input data.
//
  c = new double[n];
  d = new double[n];
  e = new double[n];
  x = new double[n];

  c[0] = 0.0;
  for ( i = 1; i < n; i++ )
  {
    c[i] = a1[i-1];
  }
  for ( i = 0; i < n; i++ )
  {
    d[i] = a2[i];
  }
  for ( i = 0; i < n - 1; i++ )
  {
    e[i] = a3[i];
  }
  e[n-1] = 0.0;
  for ( i = 0; i < n; i++ )
  {
    x[i] = b[i];
  }
//
//  Factor.
//
  c[0] = a2[0];

  if ( 2 <= n )
  {
    d[0] = e[0];
    e[0] = 0.0;
    e[n-1] = 0.0;

    for ( k = 1; k <= n - 1; k++ )
    {
//
//  Find the larger of the two rows.
//
      if ( fabs ( c[k-1] ) <= fabs ( c[k] ) )
      {
//
//  Interchange rows.
//
        t = c[k];
        c[k] = c[k-1];
        c[k-1] = t;

        t = d[k];
        d[k] = d[k-1];
        d[k-1] = t;

        t = e[k];
        e[k] = e[k-1];
        e[k-1] = t;

        t = x[k];
        x[k] = x[k-1];
        x[k-1] = t;
      }
//
//  Zero elements.
//
      if ( c[k-1] == 0.0 )
      {
        return NULL;
      }

      t = - c[k] / c[k-1];
      c[k] = d[k] + t * d[k-1];
      d[k] = e[k] + t * e[k-1];
      e[k] = 0.0;
      x[k] = x[k] + t * x[k-1];
    }
  }

  if ( c[n-1] == 0.0 )
  {
    return NULL;
  }
//
//  Back solve.
//
  x[n-1] = x[n-1] / c[n-1];

  if ( 1 < n )
  {
    x[n-2] = ( x[n-2] - d[n-2] * x[n-1] ) / c[n-2];

    for ( k = n-2; 1 <= k; k-- )
    {
      x[k-1] = ( x[k-1] - d[k-1] * x[k] - e[k-1] * x[k+1] ) / c[k-1];
    }

  }

  return x;
}
//****************************************************************************80

void r83v_fs_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83V_FS_TEST tests R83V_FS_SL.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 February 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a1;
  double *a2;
  double *a3;
  double *b;
  int i;
  int j;
  int n = 10;
  double *x1;
  double *x2;

  cout << "\n";
  cout << "R83V_FS_TEST\n";
  cout << "  R83V_FS factors and solves a linear system\n";
  cout << "  for an R83V matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
//
//  Set the matrix values.
//
  a1 = new double[n-1];
  a2 = new double[n];
  a3 = new double[n-1];

  r83v_dif2 ( n, n, a1, a2, a3 );
//
//  Set the desired solution.
//
  x1 = r8vec_indicator1_new ( n );
//
//  Compute the corresponding right hand side.
//
  b = r83v_mv ( n, n, a1, a2, a3, x1 );

  r8vec_print  ( n, b, "  The right hand side:" );
//
//  Solve the linear system.
//
  x2 = r83v_fs ( n, a1, a2, a3, b );

  if ( ! x2 )
  {
    cout << "\n";
    cout << "  R83V_FS failed.\n";
  }
  else
  {
    r8vec_print ( n, x2, "  Solution:" );
  }
//
//  Free memory.
//
  delete [] a1;
  delete [] a2;
  delete [] a3;
  delete [] b;
  delete [] x1;
  delete [] x2;

  return;
}
//****************************************************************************80

void r83v_gs_sl ( int n, double a1[], double a2[], double a3[], double b[], 
  double x[], int it_max )

//****************************************************************************80
//
//  Purpose:
//
//    R83V_GS_SL solves an R83V system using Gauss Seidel iteration.
//
//  Discussion:
//
//    The R83V storage format is used for a tridiagonal matrix.
//    The subdiagonal is in A(min(M-1,N)).
//    The diagonal is in B(min(M,N)).
//    The superdiagonal is in C(min(M,N-1)).
//
//  Example:
//
//    An R83V matrix of order 3x5 would be stored:
//
//      B1  C1  **  **  **
//      A1  B2  C2  **  **
//      **  A2  B3  C3  **
//
//    An R83 matrix of order 5x5 would be stored:
//
//      B1  C1  **  **  **
//      A1  B2  C2  **  **
//      **  A2  B3  C3  **
//      **  **  A3  B4  C4
//      **  **  **  A4  B5
//
//    An R83 matrix of order 5x3 would be stored:
//
//      B1  C1  **
//      A1  B2  C2
//      **  A2  B3
//      **  **  A3
//      **  **  **
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 February 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A1(N-1), A2(N), A3(N-1), the R83V matrix.
//
//    Input, double B[N], the right hand side of the linear system.
//
//    Input/output, double X[N], an approximate solution to the system.
//
//    Input, int IT_MAX, the maximum number of iterations to take.
//
{
  int i;
  int it_num;
  double *x_new;
//
//  No diagonal matrix entry can be zero.
//
  for ( i = 0; i < n; i++ )
  {
    if ( a2[i] == 0.0 )
    {
      cerr << "\n";
      cerr << "R83V_GS_SL - Fatal error!\n";
      cerr << "  Zero diagonal entry, index = " << i << "\n";
      exit ( 1 );
    }
  }

  x_new = new double[n];

  for ( it_num = 1; it_num <= it_max; it_num++ )
  {
    x_new[0] = ( b[0] - a3[0] * x[1] ) / a2[0];
    for ( i = 1; i < n - 1; i++ )
    {
      x_new[i] = ( b[i] - a1[i-1] * x_new[i-1] - a3[i] * x[i+1] ) / a2[i];
    }
    x_new[n-1] = ( b[n-1] - a1[n-2] * x_new[n-2] ) / a2[n-1];

    for ( i = 0; i < n; i++ )
    {
      x[i] = x_new[i];
    }
  }

  delete [] x_new;

  return;
}
//****************************************************************************80

void r83v_gs_sl_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83V_GS_SL_TEST tests R83V_GS_SL.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 February 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a1;
  double *a2;
  double *a3;
  double *b;
  int i;
  int j;
  int maxit = 25;
  int n = 10;
  double *x;

  cout << "\n";
  cout << "R83V_GS_SL_TEST\n";
  cout << "  R83V_GS_SL solves a linear system using Gauss-Seidel\n";
  cout << "  iteration for an R83V matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
  cout << "  Iterations per call = " << maxit << "\n";
//
//  Set the matrix values.
//
  a1 = new double[n-1];
  a2 = new double[n];
  a3 = new double[n-1];

  r83v_dif2 ( n, n, a1, a2, a3 );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( n );
//
//  Compute the corresponding right hand side.
//
  b = r83v_mv ( n, n, a1, a2, a3, x );

  r8vec_print  ( n, b, "  The right hand side:" );
//
//  Set the starting solution.
//
  for ( i = 0; i < n; i++ )
  {
    x[i] = 0.0;
  }
//
//  Solve the linear system.
//
  for ( i = 1; i <= 3; i++ )
  {
    r83v_gs_sl ( n, a1, a2, a3, b, x, maxit );

    r8vec_print ( n, x, "  Current estimated solution:" );
  }

  delete [] a1;
  delete [] a2;
  delete [] a3;
  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

void r83v_indicator ( int m, int n, double a[], double b[], double c[] )

//****************************************************************************80
//
//  Purpose:
//
//    R83V_INDICATOR sets up an R83V indicator matrix.
//
//  Discussion:
//
//    The R83V storage format is used for a tridiagonal matrix.
//    The subdiagonal is in A(min(M-1,N)).
//    The diagonal is in B(min(M,N)).
//    The superdiagonal is in C(min(M,N-1)).
//
//  Example:
//
//    An R83V matrix of order 3x5 would be stored:
//
//      B1  C1  **  **  **
//      A1  B2  C2  **  **
//      **  A2  B3  C3  **
//
//    An R83 matrix of order 5x5 would be stored:
//
//      B1  C1  **  **  **
//      A1  B2  C2  **  **
//      **  A2  B3  C3  **
//      **  **  A3  B4  C4
//      **  **  **  A4  B5
//
//    An R83 matrix of order 5x3 would be stored:
//
//      B1  C1  **
//      A1  B2  C2
//      **  A2  B3
//      **  **  A3
//      **  **  **
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 February 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the order of the matrix.
//
//    Output, double A(min(M-1,N)), B(min(M,N)), C(min(M,N-1)), the matrix.
//
{
  int ahi;
  int bhi;
  int chi;
  int fac;
  int i;

  fac = i4_power ( 10, i4_log_10 ( n ) + 1 );

  ahi = i4_min ( m - 1, n );
  bhi = i4_min ( m,     n );
  chi = i4_min ( m,     n - 1 );

  for ( i = 0; i < ahi; i++ )
  {
    a[i] = ( double ) ( fac * ( i + 2 ) + i + 1 );
  }

  for ( i = 0; i < bhi; i++ )
  {
    b[i] = ( double ) ( fac * ( i + 1 ) + i + 1 );
  }

  for ( i = 0; i < chi; i++ )
  {
    c[i] = ( double ) ( fac * ( i + 1 ) + i + 2 );
  }

  return;
}
//****************************************************************************80

void r83v_indicator_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83V_INDICATOR_TEST tests R83V_INDICATOR.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 February 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int ahi;
  double *b;
  int bhi;
  double *c;
  int chi;
  int i;
  int m;
  int n;

  cout << "\n";
  cout << "R83V_INDICATOR_TEST\n";
  cout << "  R83V_INDICATOR sets up an R83V indicator matrix.\n";
  cout << "  We check three cases, M<N, M=N, M>N.\n";

  for ( i = 1; i <= 3; i++ )
  {
    if ( i == 1 )
    {
      m = 3;
      n = 5;
    }
    else if ( i == 2 )
    {
      m = 5;
      n = 5;
    }
    else if ( i == 3 )
    {
      m = 5;
      n = 3;
    }

    ahi = i4_min ( m - 1, n );
    bhi = i4_min ( m,     n );
    chi = i4_min ( m,     n - 1 );
    a = new double[ahi];
    b = new double[bhi];
    c = new double[chi];

    r83v_indicator ( m, n, a, b, c );

    r83v_print ( m, n, a, b, c, "  The R83V indicator matrix:" );

    delete [] a;
    delete [] b;
    delete [] c;
  }

  return;
}
//****************************************************************************80

void r83v_jac_sl ( int n, double a1[], double a2[], double a3[], double b[], 
  double x[], int it_max )

//****************************************************************************80
//
//  Purpose:
//
//    R83V_JAC_SL solves an R83V system using Jacobi iteration.
//
//  Discussion:
//
//    The R83V storage format is used for a tridiagonal matrix.
//    The subdiagonal is in A(min(M-1,N)).
//    The diagonal is in B(min(M,N)).
//    The superdiagonal is in C(min(M,N-1)).
//
//  Example:
//
//    An R83V matrix of order 3x5 would be stored:
//
//      B1  C1  **  **  **
//      A1  B2  C2  **  **
//      **  A2  B3  C3  **
//
//    An R83 matrix of order 5x5 would be stored:
//
//      B1  C1  **  **  **
//      A1  B2  C2  **  **
//      **  A2  B3  C3  **
//      **  **  A3  B4  C4
//      **  **  **  A4  B5
//
//    An R83 matrix of order 5x3 would be stored:
//
//      B1  C1  **
//      A1  B2  C2
//      **  A2  B3
//      **  **  A3
//      **  **  **
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 February 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A1(N-1), A2(N), A3(N-1), the R83V matrix.
//
//    Input, double B[N], the right hand side of the linear system.
//
//    Input/output, double X[N], an approximate solution to the system.
//
//    Input, int IT_MAX, the maximum number of iterations to take.
//
{
  int i;
  int it_num;
  double *x_new;

  x_new = new double[n];
//
//  No diagonal matrix entry can be zero.
//
  for ( i = 0; i < n; i++ )
  {
    if ( a2[i] == 0.0 )
    {
      cerr << "\n";
      cerr << "R83V_JAC_SL - Fatal error!\n";
      cerr << "  Zero diagonal entry, index = " << i << "\n";
      exit ( 1 );
    }
  }

  for ( it_num = 1; it_num <= it_max; it_num++ )
  {
//
//  Solve A*x=b:
//
    for ( i = 0; i < n; i++ )
    {
      x_new[i] = b[i];
    }
    for ( i = 0; i < n - 1; i++ )
    {
      x_new[i] = x_new[i] - a3[i] * x[i+1];
    }
    for ( i = 0; i < n - 1; i++ )
    {
      x_new[i+1] = x_new[i+1] - a1[i] * x[i];
    }
//
//  Divide by the diagonal term, and overwrite X.
//
    for ( i = 0; i < n; i++ )
    {
      x[i] = x_new[i] / a2[i];
    }
  }

  delete [] x_new;

  return;
}
//****************************************************************************80

void r83v_jac_sl_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83V_JAC_SL_TEST tests R83V_JAC_SL.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 February 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a1;
  double *a2;
  double *a3;
  double *b;
  int i;
  int j;
  int maxit = 25;
  int n = 10;
  double *x;

  cout << "\n";
  cout << "R83V_JAC_SL_TEST\n";
  cout << "  R83V_JAC_SL solves a linear system using Jacobi iteration,\n";
  cout << "  for an R83V matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
  cout << "  Iterations per call = " << maxit << "\n";
//
//  Set the matrix values.
//
  a1 = new double[( n - 1 )];
  a2 = new double[  n      ];
  a3 = new double[( n - 1 )];

  r83v_dif2 ( n, n, a1, a2, a3 );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( n );
//
//  Compute the corresponding right hand side.
//
  b = r83v_mv ( n, n, a1, a2, a3, x );

  r8vec_print  ( n, b, "  The right hand side:" );
//
//  Set the starting solution.
//
  for ( i = 0; i < n; i++ )
  {
    x[i] = 0.0;
  }
//
//  Solve the linear system.
//
  for ( i = 1; i <= 3; i++ )
  {
    r83v_jac_sl ( n, a1, a2, a3, b, x, maxit );

    r8vec_print ( n, x, "  Current estimated solution:" );
  }

  delete [] a1;
  delete [] a2;
  delete [] a3;
  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

double *r83v_mtv ( int m, int n, double a1[], double a2[], double a3[],
  double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R83V_MTV multiplies a vector times an R83V matrix.
//
//  Discussion:
//
//    The R83V storage format is used for a tridiagonal matrix.
//    The subdiagonal is in A(min(M-1,N)).
//    The diagonal is in B(min(M,N)).
//    The superdiagonal is in C(min(M,N-1)).
//
//  Example:
//
//    An R83V matrix of order 3x5 would be stored:
//
//      B1  C1  **  **  **
//      A1  B2  C2  **  **
//      **  A2  B3  C3  **
//
//    An R83 matrix of order 5x5 would be stored:
//
//      B1  C1  **  **  **
//      A1  B2  C2  **  **
//      **  A2  B3  C3  **
//      **  **  A3  B4  C4
//      **  **  **  A4  B5
//
//    An R83 matrix of order 5x3 would be stored:
//
//      B1  C1  **
//      A1  B2  C2
//      **  A2  B3
//      **  **  A3
//      **  **  **
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 February 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the order of the linear system.
//
//    Input, double A1(min(M-1,N)), A2(min(M,N)), A3(min(M,N-1)), the matrix.
//
//    Input, double X[M], the vector to be multiplied.
//
//    Output, double R83V_MTV[N], the product A'*x.
//
{
  int ahi;
  double *b;
  int bhi;
  int chi;
  int j;

  b = new double[n];

  for ( j = 0; j < n; j++ )
  {
    b[j] = 0.0;
  }

  ahi = i4_min ( m - 1, n );
  bhi = i4_min ( m,     n );
  chi = i4_min ( m,     n - 1 );

  for ( j = 0; j < ahi; j++ )
  {
    b[j] = b[j] + a1[j] * x[j+1];
  }
  for ( j = 0; j < bhi; j++ )
  {
    b[j] = b[j] + a2[j] * x[j];
  }
  for ( j = 0; j < chi; j++ )
  {
    b[j+1] = b[j+1] + a3[j] * x[j];
  }
  return b;
}
//****************************************************************************80

void r83v_mtv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83V_MTV_TEST tests R83V_MTV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    17 February 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a_ge;
  double *a1;
  double *a2;
  double *a3;
  int ahi;
  double *ax;
  double *ax_ge;
  int bhi;
  int chi;
  int i;
  int m;
  int n;
  int seed;
  double *x;

  cout << "\n";
  cout << "R83V_MTV_TEST\n";
  cout << "  R83V_MTV computes b=A'*x, where A is an R83V matrix.\n";
  cout << "  We check three cases, M<N, M=N, M>N.\n";

  for ( i = 1; i <= 3; i++ )
  {
    if ( i == 1 )
    {
      m = 3;
      n = 5;
    }
    else if ( i == 2 )
    {
      m = 5;
      n = 5;
    }
    else if ( i == 3 )
    {
      m = 5;
      n = 3;
    }

    ahi = i4_min ( m - 1, n );
    bhi = i4_min ( m,     n );
    chi = i4_min ( m,     n - 1 );

    a1 = new double[ahi];
    a2 = new double[bhi];
    a3 = new double[chi];

    seed = 123456789;
    r83v_random ( m, n, seed, a1, a2, a3 );
    x = r8vec_indicator1_new ( m );
    ax = r83v_mtv ( m, n, a1, a2, a3, x );

    a_ge = r83v_to_r8ge ( m, n, a1, a2, a3 );
    ax_ge = r8ge_mtv ( m, n, a_ge, x );
    r8vec2_print ( n, ax, ax_ge, "  Product comparison:" );

    delete [] a_ge;
    delete [] a1;
    delete [] a2;
    delete [] a3;
    delete [] ax;
    delete [] ax_ge;
    delete [] x;
  }
  return;
}
//****************************************************************************80

double *r83v_mv ( int m, int n, double a[], double b[], double c[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R83V_MV multiplies an R83V matrix times a vector.
//
//  Discussion:
//
//    The R83V storage format is used for a tridiagonal matrix.
//    The subdiagonal is in A(min(M-1,N)).
//    The diagonal is in B(min(M,N)).
//    The superdiagonal is in C(min(M,N-1)).
//
//  Example:
//
//    An R83V matrix of order 3x5 would be stored:
//
//      B1  C1  **  **  **
//      A1  B2  C2  **  **
//      **  A2  B3  C3  **
//
//    An R83 matrix of order 5x5 would be stored:
//
//      B1  C1  **  **  **
//      A1  B2  C2  **  **
//      **  A2  B3  C3  **
//      **  **  A3  B4  C4
//      **  **  **  A4  B5
//
//    An R83 matrix of order 5x3 would be stored:
//
//      B1  C1  **
//      A1  B2  C2
//      **  A2  B3
//      **  **  A3
//      **  **  **
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 February 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the order of the linear system.
//
//    Input, double A(min(M-1,N)), B(min(M,N)), C(min(M,N-1)), the R83V matrix.
//
//    Input, double X[N], the vector to be multiplied by A.
//
//    Output, double R83V_MV[M], the product A * x.
//
{
  int ahi;
  double *ax;
  int bhi;
  int chi;
  int i;

  ax = new double[m];

  for ( i = 0; i < m; i++ )
  {
    ax[i] = 0.0;
  }

  ahi = i4_min ( m - 1, n );
  bhi = i4_min ( m,     n );
  chi = i4_min ( m,     n - 1 );

  for ( i = 0; i < ahi; i++ )
  {
    ax[i+1] = ax[i+1] + a[i] * x[i];
  }
  for ( i = 0; i < bhi; i++ )
  {
    ax[i] = ax[i] + b[i] * x[i];
  }
  for ( i = 0; i < chi; i++ )
  {
    ax[i] = ax[i] + c[i] * x[i+1];
  }

  return ax;
}
//****************************************************************************80

void r83v_mv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83V_MV_TEST tests R83_MV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    17 February 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *a_ge;
  int ahi;
  double *ax;
  double *ax_ge;
  double *b;
  int bhi;
  double *c;
  int chi;
  int i;
  int m;
  int n;
  int seed;
  double *x;

  cout << "\n";
  cout << "R83V_MV_TEST\n";
  cout << "  R83V_MV computes b=A*x, where A is an R83V matrix.\n";
  cout << "  We check three cases, M<N, M=N, M>N.\n";

  for ( i = 1; i <= 3; i++ )
  {
    if ( i == 1 )
    {
      m = 3;
      n = 5;
    }
    else if ( i == 2 )
    {
      m = 5;
      n = 5;
    }
    else if ( i == 3 )
    {
      m = 5;
      n = 3;
    }

    ahi = i4_min ( m - 1, n );
    bhi = i4_min ( m,     n );
    chi = i4_min ( m,     n - 1 );

    a = new double[ahi];
    b = new double[bhi];
    c = new double[chi];

    seed = 123456789;
    r83v_random ( m, n, seed, a, b, c );
    x = r8vec_indicator1_new ( n );
    ax = r83v_mv ( m, n, a, b, c, x );

    a_ge = r83v_to_r8ge ( m, n, a, b, c );
    ax_ge = r8ge_mv ( m, n, a_ge, x );
    r8vec2_print ( m, ax, ax_ge, "  Product comparison:" );

    delete [] a;
    delete [] a_ge;
    delete [] ax;
    delete [] ax_ge;
    delete [] b;
    delete [] c;
    delete [] x;
  }
  return;
}
//****************************************************************************80

void r83v_print ( int m, int n, double a[], double b[], double c[], 
  string title )

//****************************************************************************80
//
//  Purpose:
//
//    R83V_PRINT prints an R83V matrix.
//
//  Discussion:
//
//    The R83V storage format is used for a tridiagonal matrix.
//    The subdiagonal is in A(min(M-1,N)).
//    The diagonal is in B(min(M,N)).
//    The superdiagonal is in C(min(M,N-1)).
//
//  Example:
//
//    An R83V matrix of order 3x5 would be stored:
//
//      B1  C1  **  **  **
//      A1  B2  C2  **  **
//      **  A2  B3  C3  **
//
//    An R83 matrix of order 5x5 would be stored:
//
//      B1  C1  **  **  **
//      A1  B2  C2  **  **
//      **  A2  B3  C3  **
//      **  **  A3  B4  C4
//      **  **  **  A4  B5
//
//    An R83 matrix of order 5x3 would be stored:
//
//      B1  C1  **
//      A1  B2  C2
//      **  A2  B3
//      **  **  A3
//      **  **  **
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 February 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the order of the matrix.
//
//    Input, double A(min(M-1,N)), B(min(M,N)), C(min(M,N-1)), the R83V matrix.
//
//    Input, string TITLE, a title.
//
{
  r83v_print_some ( m, n, a, b, c, 1, 1, m, n, title );

  return;
}
//****************************************************************************80

void r83v_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83V_PRINT_TEST tests R83V_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 February 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int ahi;
  double *b;
  int bhi;
  double *c;
  int chi;
  int m;
  int n;

  cout << "\n";
  cout << "R83V_PRINT_TEST\n";
  cout << "  R83V_PRINT prints an R83V matrix.\n";

  m = 5;
  n = 5;

  ahi = i4_min ( m - 1, n );
  bhi = i4_min ( m,     n );
  chi = i4_min ( m,     n - 1 );
  a = new double[ahi];
  b = new double[bhi];
  c = new double[chi];

  r83v_indicator ( m, n, a, b, c );

  r83v_print ( m, n, a, b, c, "  The R83V  matrix:" );

  delete [] a;
  delete [] b;
  delete [] c;

  return;
}
//****************************************************************************80

void r83v_print_some ( int m, int n, double a[], double b[], double c[],
  int ilo, int jlo, int ihi, int jhi, string title )

//****************************************************************************80
//
//  Purpose:
//
//    R83V_PRINT_SOME prints some of an R83V matrix.
//
//  Discussion:
//
//    The R83V storage format is used for a tridiagonal matrix.
//    The subdiagonal is in A(min(M-1,N)).
//    The diagonal is in B(min(M,N)).
//    The superdiagonal is in C(min(M,N-1)).
//
//  Example:
//
//    An R83V matrix of order 3x5 would be stored:
//
//      B1  C1  **  **  **
//      A1  B2  C2  **  **
//      **  A2  B3  C3  **
//
//    An R83 matrix of order 5x5 would be stored:
//
//      B1  C1  **  **  **
//      A1  B2  C2  **  **
//      **  A2  B3  C3  **
//      **  **  A3  B4  C4
//      **  **  **  A4  B5
//
//    An R83 matrix of order 5x3 would be stored:
//
//      B1  C1  **
//      A1  B2  C2
//      **  A2  B3
//      **  **  A3
//      **  **  **
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 February 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the order of the matrix.
//
//    Input, double A(min(M-1,N)), B(min(M,N)), C(min(M+1,N)), the R83V matrix.
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
      j2 = j + 1 - j2lo;
      cout << setw(7) << j << "       ";
    }

    cout << "\n";
    cout << "  Row\n";
    cout << "  ---\n";
//
//  Determine the range of the rows in this strip.
//
    i2lo = i4_max ( ilo, 1 );
    i2lo = i4_max ( i2lo, j2lo - 1 );

    i2hi = i4_min ( ihi, m );
    i2hi = i4_min ( i2hi, j2hi + 1 );

    for ( i = i2lo; i <= i2hi; i++ )
    {
//
//  Print out (up to) 5 entries in row I, that lie in the current strip.
//
      cout << setw(6) << i << "  ";

      for ( j2 = 1; j2 <= inc; j2++ )
      {
        j = j2lo - 1 + j2;

        if ( i - j + 1 < 0 || 2 < i - j + 1 )
        {
          cout << "              ";
        }
        else if ( j == i - 1 )
        {
          cout << "  " << setw(12) << a[i-2];
        }
        else if ( j == i )
        {
          cout << "  " << setw(12) << b[i-1];
        }
        else if ( j == i + 1 )
        {
          cout << "  " << setw(12) << c[i-1];
        }
      }
      cout << "\n";
    }
  }

  return;
# undef INCX
}
//****************************************************************************80

void r83v_print_some_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83V_PRINT_SOME_TEST tests R83V_PRINT_SOME.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 February 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int ahi;
  double *b;
  int bhi;
  double *c;
  int chi;
  int m;
  int n;

  cout << "\n";
  cout << "R83V_PRINT_SOME_TEST\n";
  cout << "  R83V_PRINT_SOME prints some of an R83V matrix.\n";

  m = 5;
  n = 5;

  ahi = i4_min ( m - 1, n );
  bhi = i4_min ( m,     n );
  chi = i4_min ( m,     n - 1 );
  a = new double[ahi];
  b = new double[bhi];
  c = new double[chi];

  r83v_indicator ( m, n, a, b, c );

  r83v_print_some ( m, n, a, b, c, 2, 2, 5, 4, "  Rows 2-5, Cols 2-4:" );

  delete [] a;
  delete [] b;
  delete [] c;

  return;
}
//****************************************************************************80

void r83v_random ( int m, int n, int &seed, double a[], double b[], double c[] )

//****************************************************************************80
//
//  Purpose:
//
//    R83V_RANDOM returns a random matrix in R83V format.
//
//  Discussion:
//
//    The R83V storage format is used for a tridiagonal matrix.
//    The subdiagonal is in A(min(M-1,N)).
//    The diagonal is in B(min(M,N)).
//    The superdiagonal is in C(min(M,N-1)).
//
//  Example:
//
//    An R83V matrix of order 3x5 would be stored:
//
//      B1  C1  **  **  **
//      A1  B2  C2  **  **
//      **  A2  B3  C3  **
//
//    An R83 matrix of order 5x5 would be stored:
//
//      B1  C1  **  **  **
//      A1  B2  C2  **  **
//      **  A2  B3  C3  **
//      **  **  A3  B4  C4
//      **  **  **  A4  B5
//
//    An R83 matrix of order 5x3 would be stored:
//
//      B1  C1  **
//      A1  B2  C2
//      **  A2  B3
//      **  **  A3
//      **  **  **
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    17 February 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the order of the matrix.
//
//    Input/output, int &SEED, a seed for the random number generator.
//
//    Output, double A(min(M-1,N)), B(min(M,N)), C(min(M,N-1)), the matrix.
//
{
  int ahi;
  int bhi;
  int chi;

  ahi = i4_min ( m - 1, n );
  bhi = i4_min ( m,     n );
  chi = i4_min ( m,     n - 1 );

  r8vec_uniform_01 ( ahi, seed, a );
  r8vec_uniform_01 ( bhi, seed, b );
  r8vec_uniform_01 ( chi, seed, c );

  return;
}
//****************************************************************************80

void r83v_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83V_RANDOM_TEST tests R83V_RANDOM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 February 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int ahi;
  double *b;
  int bhi;
  double *c;
  int chi;
  int i;
  int m;
  int n;
  int seed;

  cout << "\n";
  cout << "R83V_RANDOM_TEST\n";
  cout << "  R83V_RANDOM sets up an R83V random matrix.\n";
  cout << "  We check three cases, M<N, M=N, M>N.\n";

  for ( i = 1; i <= 3; i++ )
  {
    seed = 123456789;

    if ( i == 1 )
    {
      m = 3;
      n = 5;
    }
    else if ( i == 2 )
    {
      m = 5;
      n = 5;
    }
    else if ( i == 3 )
    {
      m = 5;
      n = 3;
    }

    ahi = i4_min ( m - 1, n );
    bhi = i4_min ( m,     n );
    chi = i4_min ( m,     n - 1 );
    a = new double[ahi];
    b = new double[bhi];
    c = new double[chi];

    r83v_random ( m, n, seed, a, b, c );

    r83v_print ( m, n, a, b, c, "  The R83V random matrix:" );

    delete [] a;
    delete [] b;
    delete [] c;
  }

  return;
}
//****************************************************************************80

double *r83v_res ( int m, int n, double a[], double b[], double c[],
  double x[], double ax[] )

//****************************************************************************80
//
//  Purpose:
//
//    R83V_RES computes the residual R = B-A*X for R83V matrices.
//
//  Discussion:
//
//    The R83V storage format is used for a tridiagonal matrix.
//    The subdiagonal is in A(min(M-1,N)).
//    The diagonal is in B(min(M,N)).
//    The superdiagonal is in C(min(M,N-1)).
//
//  Example:
//
//    An R83V matrix of order 3x5 would be stored:
//
//      B1  C1  **  **  **
//      A1  B2  C2  **  **
//      **  A2  B3  C3  **
//
//    An R83 matrix of order 5x5 would be stored:
//
//      B1  C1  **  **  **
//      A1  B2  C2  **  **
//      **  A2  B3  C3  **
//      **  **  A3  B4  C4
//      **  **  **  A4  B5
//
//    An R83 matrix of order 5x3 would be stored:
//
//      B1  C1  **
//      A1  B2  C2
//      **  A2  B3
//      **  **  A3
//      **  **  **
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 February 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, the number of rows of the matrix.
//
//    Input, int N, the number of columns of the matrix.
//
//    Input, double A(min(M-1,N)), B(min(M,N)), C(min(M,N-1)), the matrix.
//
//    Input, double X[N], the vector to be multiplied.
//
//    Input, double AX[M], the desired result A * x.
//
//    Output, double R83V_RES[M], the residual R = AX - A * X.
//
{
  int i;
  double *r;

  r = r83v_mv ( m, n, a, b, c, x );

  for ( i = 0; i < m; i++ )
  {
    r[i] = ax[i] - r[i];
  }

  return r;
}
//****************************************************************************80

void r83v_res_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83V_RES_TEST tests R83V_RES.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    17 February 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int ahi;
  double *ax;
  double *b;
  int bhi;
  double *c;
  int chi;
  int i;
  int m;
  int n;
  double *r;
  int seed;
  double *x;

  cout << "\n";
  cout << "R83V_RES_TEST\n";
  cout << "  R83V_RES computes b-A*x, where A is an R83V matrix.\n";
  cout << "  We check three cases, M<N, M=N, M>N.\n";

  for ( i = 1; i <= 3; i++ )
  {
    if ( i == 1 )
    {
      m = 3;
      n = 5;
    }
    else if ( i == 2 )
    {
      m = 5;
      n = 5;
    }
    else if ( i == 3 )
    {
      m = 5;
      n = 3;
    }

    ahi = i4_min ( m - 1, n );
    bhi = i4_min ( m,     n );
    chi = i4_min ( m,     n - 1 );
    a = new double[ahi];
    b = new double[bhi];
    c = new double[chi];

    seed = 123456789;
    r83v_random ( m, n, seed, a, b, c );
    x = r8vec_indicator1_new ( n );
    ax = r83v_mv ( m, n, a, b, c, x );
    r = r83v_res ( m, n, a, b, c, x, ax );
    r8vec_print ( m, r, "  Residual A*x-b:" );

    delete [] a;
    delete [] ax;
    delete [] b;
    delete [] c;
    delete [] r;
    delete [] x;
  }

  return;
}
//****************************************************************************80

double *r83v_to_r8ge ( int m, int n, double a1[], double a2[], double a3[] )

//****************************************************************************80
//
//  Purpose:
//
//    R83V_TO_R8GE copies an R83V matrix to an R8GE matrix.
//
//  Discussion:
//
//    The R83V storage format is used for a tridiagonal matrix.
//    The subdiagonal is in A(min(M-1,N)).
//    The diagonal is in B(min(M,N)).
//    The superdiagonal is in C(min(M,N-1)).
//
//  Example:
//
//    An R83V matrix of order 3x5 would be stored:
//
//      B1  C1  **  **  **
//      A1  B2  C2  **  **
//      **  A2  B3  C3  **
//
//    An R83 matrix of order 5x5 would be stored:
//
//      B1  C1  **  **  **
//      A1  B2  C2  **  **
//      **  A2  B3  C3  **
//      **  **  A3  B4  C4
//      **  **  **  A4  B5
//
//    An R83 matrix of order 5x3 would be stored:
//
//      B1  C1  **
//      A1  B2  C2
//      **  A2  B3
//      **  **  A3
//      **  **  **
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    17 February 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the order of the matrix.
//
//    Input, double A1(min(M-1,N)), A2(min(M,N)), A3(min(M,N-1)), the matrix.
//
//    Output, double R83V_TO_R8GE(M,N), the R8GE matrix.
//
{
  double *a;
  int ahi;
  int bhi;
  int chi;
  int i;
  int j;
  int k;

  a = new double[m * n];

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < m; i++ )
    {
      a[i+j*m] = 0.0;
    }
  }

  ahi = i4_min ( m - 1, n );
  bhi = i4_min ( m,     n );
  chi = i4_min ( m,     n - 1 );

  for ( k = 0; k < ahi; k++ )
  {
    a[k+1+k*m] = a1[k];
  }

  for ( k = 0; k < bhi; k++ )
  {
    a[k+k*m] = a2[k];
  }

  for ( k = 0; k < chi; k++ )
  {
    a[k+(k+1)*m] = a3[k];
  }
   
  return a;
}
//****************************************************************************80

void r83v_to_r8ge_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83V_TO_R8GE_TEST tests R83V_TO_R8GE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 February 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *a1;
  double *a2;
  double *a3;
  int ahi;
  int bhi;
  int chi;
  int i;
  int m;
  int n;

  cout << "\n";
  cout << "R83V_TO_R8GE_TEST\n";
  cout << "  R83V_TO_R8GE copies an R83V matrix to an R8GE matrix.\n";
  cout << "  We check three cases, M<N, M=N, M>N.\n";

  for ( i = 1; i <= 3; i++ )
  {
    if ( i == 1 )
    {
      m = 3;
      n = 5;
    }
    else if ( i == 2 )
    {
      m = 5;
      n = 5;
    }
    else if ( i == 3 )
    {
      m = 5;
      n = 3;
    }

    ahi = i4_min ( m - 1, n );
    bhi = i4_min ( m,     n );
    chi = i4_min ( m,     n - 1 );
    a1 = new double[ahi];
    a2 = new double[bhi];
    a3 = new double[chi];

    r83v_indicator ( m, n, a1, a2, a3 );
    r83v_print ( m, n, a1, a2, a3, "  R83V matrix A:" );

    a = r83v_to_r8ge ( m, n, a1, a2, a3 );
    r8ge_print ( m, n, a, "  R8GE version of A:" );

    delete [] a;
    delete [] a1;
    delete [] a2;
    delete [] a3;
  }

  return;
}
//****************************************************************************80

double *r83v_to_r8vec ( int m, int n, double a1[], double a2[], double a3[] )

//****************************************************************************80
//
//  Purpose:
//
//    R83V_TO_R8VEC copies an R83V matrix to an R8VEC.
//
//  Discussion:
//
//    The R83V storage format is used for a tridiagonal matrix.
//    The subdiagonal is in A(min(M-1,N)).
//    The diagonal is in B(min(M,N)).
//    The superdiagonal is in C(min(M,N-1)).
//
//  Example:
//
//    An R83V matrix of order 3x5 would be stored:
//
//      B1  C1  **  **  **
//      A1  B2  C2  **  **
//      **  A2  B3  C3  **
//
//    An R83 matrix of order 5x5 would be stored:
//
//      B1  C1  **  **  **
//      A1  B2  C2  **  **
//      **  A2  B3  C3  **
//      **  **  A3  B4  C4
//      **  **  **  A4  B5
//
//    An R83 matrix of order 5x3 would be stored:
//
//      B1  C1  **
//      A1  B2  C2
//      **  A2  B3
//      **  **  A3
//      **  **  **
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    17 February 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the order of the matrix.
//
//    Input, double A1(min(M-1,N)), A2(min(M,N)), A3(min(M,N-1)), the matrix.
//
//    Output, double R83V_TO_R8VEC(min(N-1,M)+min(N,M)+min(N,M-1)), the vector.
//
{
  double *a;
  int ahi;
  int bhi;
  int chi;
  int i;
  int j;
  int k;

  ahi = i4_min ( m - 1, n );
  bhi = i4_min ( m,     n );
  chi = i4_min ( m,     n - 1 );

  a = new double[( ahi + bhi + chi )];

  k = 0;
  for ( j = 0; j < n; j++ )
  {
    if ( j < m + 1 && 1 <= j )
    {
      a[k] = a3[j-1];
      k = k + 1;
    }
    if ( j < m )
    {
      a[k] = a2[j];
      k = k + 1;
    }
    if ( j < m - 1 )
    {
      a[k] = a1[j];
      k = k + 1;
    }
  }
   
  return a;
}
//****************************************************************************80

void r83v_to_r8vec_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83V_TO_R8VEC_TEST tests R83V_TO_R8VEC.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 February 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *a1;
  double *a2;
  double *a3;
  int ahi;
  int bhi;
  int chi;
  int i;
  int m;
  int n;

  cout << "\n";
  cout << "R83V_TO_R8VEC_TEST\n";
  cout << "  R83V_TO_R8VEC copies an R83V matrix to an R8VEC.\n";
  cout << "  We check three cases, M<N, M=N, M>N.\n";

  for ( i = 1; i <= 3; i++ )
  {
    if ( i == 1 )
    {
      m = 3;
      n = 5;
    }
    else if ( i == 2 )
    {
      m = 5;
      n = 5;
    }
    else if ( i == 3 )
    {
      m = 5;
      n = 3;
    }

    ahi = i4_min ( m - 1, n );
    bhi = i4_min ( m,     n );
    chi = i4_min ( m,     n - 1 );
    a1 = new double[ahi];
    a2 = new double[bhi];
    a3 = new double[chi];

    r83v_indicator ( m, n, a1, a2, a3 );
    r83v_print ( m, n, a1, a2, a3, "  R83V matrix A:" );

    a = r83v_to_r8vec ( m, n, a1, a2, a3 );
    r8vec_print ( ahi + bhi + chi, a, "  Vector version of A:" );

    delete [] a;
    delete [] a1;
    delete [] a2;
    delete [] a3;
  }

  return;
}
//****************************************************************************80

void r83v_transpose ( int m, int n, double a1[], double a2[], double a3[], 
  double b1[], double b2[], double b3[] )

//****************************************************************************80
//
//  Purpose:
//
//    R83V_TRANSPOSE makes a transposed copy of an R83V matrix.
//
//  Discussion:
//
//    The R83V storage format is used for a tridiagonal matrix.
//    The subdiagonal is in A(min(M-1,N)).
//    The diagonal is in B(min(M,N)).
//    The superdiagonal is in C(min(M,N-1)).
//
//  Example:
//
//    An R83V matrix of order 3x5 would be stored:
//
//      B1  C1  **  **  **
//      A1  B2  C2  **  **
//      **  A2  B3  C3  **
//
//    An R83 matrix of order 5x5 would be stored:
//
//      B1  C1  **  **  **
//      A1  B2  C2  **  **
//      **  A2  B3  C3  **
//      **  **  A3  B4  C4
//      **  **  **  A4  B5
//
//    An R83 matrix of order 5x3 would be stored:
//
//      B1  C1  **
//      A1  B2  C2
//      **  A2  B3
//      **  **  A3
//      **  **  **
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    17 February 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the order of the matrix.
//
//    Input, double A1(min(M-1,N)), A2(min(M,N)), A3(min(M,N-1)), the matrix.
//
//    Output, double B1(min(N-1,M)), B2(min(N,M)), B3(min(N,M-1)), the copy.
//
{
  int ahi;
  int bhi;
  int chi;
  int i;

  ahi = i4_min ( m - 1, n );
  bhi = i4_min ( m,     n );
  chi = i4_min ( m,     n - 1 );

  for ( i = 0; i < ahi; i++ )
  {
    b3[i] = a1[i];
  }

  for ( i = 0; i < bhi; i++ )
  {
    b2[i] = a2[i];
  }

  for ( i = 0; i < chi; i++ )
  {
    b1[i] = a3[i];
  }
   
  return;
}
//****************************************************************************80

void r83v_transpose_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83V_TRANSPOSE_TEST tests R83V_TRANSPOSE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 February 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a1;
  double *a2;
  double *a3;
  int ahi;
  double *b1;
  double *b2;
  double *b3;
  int bhi;
  int chi;
  int i;
  int m;
  int n;

  cout << "\n";
  cout << "R83V_TRANSPOSE_TEST\n";
  cout << "  R83V_TRANSPOSE makes a transposed copy of an R83V matrix.\n";
  cout << "  We check three cases, M<N, M=N, M>N.\n";

  for ( i = 1; i <= 3; i++ )
  {
    if ( i == 1 )
    {
      m = 3;
      n = 5;
    }
    else if ( i == 2 )
    {
      m = 5;
      n = 5;
    }
    else if ( i == 3 )
    {
      m = 5;
      n = 3;
    }

    ahi = i4_min ( m - 1, n );
    bhi = i4_min ( m,     n );
    chi = i4_min ( m,     n - 1 );
    a1 = new double[ahi];
    a2 = new double[bhi];
    a3 = new double[chi];

    r83v_indicator ( m, n, a1, a2, a3 );
    r83v_print ( m, n, a1, a2, a3, "  R83V matrix A:" );

    b1 = new double[chi];
    b2 = new double[bhi];
    b3 = new double[ahi];
    r83v_transpose ( m, n, a1, a2, a3, b1, b2, b3 );
    r83v_print ( n, m, b1, b2, b3, "  B = copy of A:" );

    delete [] a1;
    delete [] a2;
    delete [] a3;
    delete [] b1;
    delete [] b2;
    delete [] b3;
  }

  return;
}
//****************************************************************************80

void r83v_zeros ( int m, int n, double a[], double b[], double c[] )

//****************************************************************************80
//
//  Purpose:
//
//    R83V_ZEROS returns the zero matrix in R83V format.
//
//  Discussion:
//
//    The R83V storage format is used for a tridiagonal matrix.
//    The subdiagonal is in A(min(M-1,N)).
//    The diagonal is in B(min(M,N)).
//    The superdiagonal is in C(min(M,N-1)).
//
//  Example:
//
//    An R83V matrix of order 3x5 would be stored:
//
//      B1  C1  **  **  **
//      A1  B2  C2  **  **
//      **  A2  B3  C3  **
//
//    An R83 matrix of order 5x5 would be stored:
//
//      B1  C1  **  **  **
//      A1  B2  C2  **  **
//      **  A2  B3  C3  **
//      **  **  A3  B4  C4
//      **  **  **  A4  B5
//
//    An R83 matrix of order 5x3 would be stored:
//
//      B1  C1  **
//      A1  B2  C2
//      **  A2  B3
//      **  **  A3
//      **  **  **
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    17 February 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the order of the matrix.
//
//    Output, double A(min(M-1,N)), B(min(M,N)), C(min(M,N-1)), the matrix.
//
{
  int ahi;
  int bhi;
  int chi;
  int i;

  ahi = i4_min ( m - 1, n );
  bhi = i4_min ( m,     n );
  chi = i4_min ( m,     n - 1 );

  for ( i = 0; i < ahi; i++ )
  {
    a[i] = 0.0;
  }

  for ( i = 0; i < bhi; i++ )
  {
    b[i] = 0.0;
  }

  for ( i = 0; i < chi; i++ )
  {
    c[i] = 0.0;
  }
   
  return;
}
//****************************************************************************80

void r83v_zeros_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83V_ZEROS_TEST tests R83V_ZEROS.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 February 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int ahi;
  double *b;
  int bhi;
  double *c;
  int chi;
  int i;
  int m;
  int n;

  cout << "\n";
  cout << "R83V_ZEROS_TEST\n";
  cout << "  R83V_ZEROS sets up an R83V zero matrix.\n";
  cout << "  We check three cases, M<N, M=N, M>N.\n";

  for ( i = 1; i <= 3; i++ )
  {
    if ( i == 1 )
    {
      m = 3;
      n = 5;
    }
    else if ( i == 2 )
    {
      m = 5;
      n = 5;
    }
    else if ( i == 3 )
    {
      m = 5;
      n = 3;
    }

    ahi = i4_min ( m - 1, n );
    bhi = i4_min ( m,     n );
    chi = i4_min ( m,     n - 1 );
    a = new double[ahi];
    b = new double[bhi];
    c = new double[chi];

    r83v_zeros ( m, n, a, b, c );

    r83v_print ( m, n, a, b, c, "  The R83V zero matrix:" );

    delete [] a;
    delete [] b;
    delete [] c;
  }

  return;
}
//****************************************************************************80

double *r8ge_indicator ( int m, int n )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_INDICATOR sets up an R8GE indicator matrix.
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
//    25 January 2005
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
//    Output, double R8GE_INDICATOR[M*N], the R8GE matrix.
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
    for ( j = 1; j <= n; j++ )
    {
      a[i-1+(j-1)*m] = ( double ) ( fac * i + j );
    }
  }

  return a;
}
//****************************************************************************80

void r8ge_indicator_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_INDICATOR_TEST tests R8GE_INDICATOR.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    31 August 2006
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int m = 7;
  int n = 5;

  cout << "\n";
  cout << "R8GE_INDICATOR_TEST\n";
  cout << "  R8GE_INDICATOR sets up an indicator matrix.\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << m << "\n";
  cout << "  Matrix columns N = " << n << "\n";

  a = r8ge_indicator ( m, n );

  r8ge_print ( m, n, a, "  The R8GE indicator matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

double *r8ge_mtv ( int m, int n, double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_MTV multiplies a vector times an R8GE matrix.
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
//    13 September 2003
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
//    Input, double X[M], the vector to be multiplied by A.
//
//    Output, double R8GE_MTV[N], the product A' * x.
//
{
  double *b;
  int i;
  int j;

  b = r8vec_zeros_new ( n );

  for ( i = 0; i < n; i++ )
  {
    for ( j = 0; j < m; j++ )
    {
      b[i] = b[i] + a[j+i*m] * x[j];
    }
  }

  return b;
}
//****************************************************************************80

void r8ge_mtv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_MTV_TEST tests R8GE_MTV
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 February 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *b;
  int m = 5;
  int n = 4;
  double *x;

  cout << "\n";
  cout << "R8GE_MTV_TEST\n";
  cout << "  R8GE_MTV computes a product b=A'*x for an R8GE matrix.\n";

  a = r8ge_indicator ( m, n );
  r8ge_print ( m, n, a, "  The R8GE matrix A:" );

  x = r8vec_indicator1_new ( m );
  r8vec_print ( m, x, "  Vector x:" );

  b = r8ge_mtv ( m, n, a, x );
  r8vec_print ( n, b, "  Vector b = A'*x:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

double *r8ge_mv ( int m, int n, double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_MV multiplies an R8GE matrix times a vector.
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
//    11 September 2003
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
//    Input, double X[N], the vector to be multiplied by A.
//
//    Output, double R8GE_MV[M], the product A * x.
//
{
  double *b;
  int i;
  int j;

  b = r8vec_zeros_new ( m );

  for ( i = 0; i < m; i++ )
  {
    for ( j = 0; j < n; j++ )
    {
      b[i] = b[i] + a[i+j*m] * x[j];
    }
  }

  return b;
}
//****************************************************************************80

void r8ge_mv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_MV_TEST tests R8GE_MV
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 February 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *b;
  int m = 5;
  int n = 4;
  double *x;

  cout << "\n";
  cout << "R8GE_MV_TEST\n";
  cout << "  R8GE_MV computes a product b=A*x for an R8GE matrix.\n";

  a = r8ge_indicator ( m, n );
  r8ge_print ( m, n, a, "  The R8GE matrix A:" );

  x = r8vec_indicator1_new ( n );
  r8vec_print ( n, x, "  Vector x:" );

  b = r8ge_mv ( m, n, a, x );
  r8vec_print ( m, b, "  Vector b = A*x:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
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

void r8ge_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_PRINT_TEST tests R8GE_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    31 August 2014
//
//  Author:
//
//    John Burkardt
//
{
# define M 6
# define N 4

  double a[M*N];
  int i;
  int j;
  int m = M;
  int n = N;

  cout << "\n";
  cout << "R8GE_PRINT_TEST\n";
  cout << "  R8GE_PRINT prints an R8GE.\n";

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < m; i++ )
    {
      a[i+j*m] = ( double ) ( ( i + 1 ) * 10 + ( j + 1 ) );
    }
  }
  r8ge_print ( m, n, a, "  The R8GE:" );

  return;
# undef M
# undef N
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

void r8ge_print_some_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_PRINT_SOME_TEST tests R8GE_PRINT_SOME.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    31 August 2014
//
//  Author:
//
//    John Burkardt
//
{
# define M 6
# define N 4

  double a[M*N];
  int i;
  int j;
  int m = M;
  int n = N;

  cout << "\n";
  cout << "R8GE_PRINT_SOME_TEST\n";
  cout << "  R8GE_PRINT_SOME prints some of an R8GE.\n";

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < m; i++ )
    {
      a[i+j*m] = ( double ) ( ( i + 1 ) * 10 + ( j + 1 ) );
    }
  }
  r8ge_print_some ( m, n, a, 2, 1, 4, 2, "  The R8GE, rows 2:4, cols 1:2:" );

  return;
# undef M
# undef N
}
//****************************************************************************80

void r8ge_to_r83v ( int m, int n, double a[], double a1[], double a2[], 
  double a3[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_TO_R83V copies (some of) an R8GE matrix to an R83V matrix.
//
//  Discussion:
//
//    The R83V storage format is used for a tridiagonal matrix.
//    The subdiagonal is in A(min(M-1,N)).
//    The diagonal is in B(min(M,N)).
//    The superdiagonal is in C(min(M,N-1)).
//
//  Example:
//
//    An R83V matrix of order 3x5 would be stored:
//
//      B1  C1  **  **  **
//      A1  B2  C2  **  **
//      **  A2  B3  C3  **
//
//    An R83 matrix of order 5x5 would be stored:
//
//      B1  C1  **  **  **
//      A1  B2  C2  **  **
//      **  A2  B3  C3  **
//      **  **  A3  B4  C4
//      **  **  **  A4  B5
//
//    An R83 matrix of order 5x3 would be stored:
//
//      B1  C1  **
//      A1  B2  C2
//      **  A2  B3
//      **  **  A3
//      **  **  **
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    17 February 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the order of the matrix.
//
//    Input, double A(M,N), the R8GE matrix.
//
//    Output, double A1(min(M-1,N)), A2(min(M,N)), A3(min(M,N-1)), 
//    the R83V matrix.
//
{
  int ahi;
  int bhi;
  int chi;
  int i;
  int j;
  int k;

  ahi = i4_min ( m - 1, n );
  bhi = i4_min ( m,     n );
  chi = i4_min ( m,     n - 1 );

  for ( k = 0; k < ahi; k++ )
  {
    a1[k] = a[k+1+k*m];
  }

  for ( k = 0; k < bhi; k++ )
  {
    a2[k] = a[k+k*m];
  }

  for ( k = 0; k < chi; k++ )
  {
    a3[k] = a[k+(k+1)*m];
  }
   
  return;
}
//****************************************************************************80

void r8ge_to_r83v_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_TO_R83V_TEST tests R8GE_TO_R83V.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 February 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *a1;
  double *a2;
  double *a3;
  int ahi;
  int bhi;
  int chi;
  int i;
  int m;
  int n;

  cout << "\n";
  cout << "R8GE_TO_R83V_TEST\n";
  cout << "  R8GE_TO_R83V copies an R8GE matrix to an R83V matrix.\n";
  cout << "  We check three cases, M<N, M=N, M>N.\n";

  for ( i = 1; i <= 3; i++ )
  {
    if ( i == 1 )
    {
      m = 3;
      n = 5;
    }
    else if ( i == 2 )
    {
      m = 5;
      n = 5;
    }
    else if ( i == 3 )
    {
      m = 5;
      n = 3;
    }

    a = r8ge_indicator ( m, n );
    r8ge_print ( m, n, a, "  R8GE matrix A:" );

    ahi = i4_min ( m - 1, n );
    bhi = i4_min ( m,     n );
    chi = i4_min ( m,     n - 1 );
    a1 = new double[ahi];
    a2 = new double[bhi];
    a3 = new double[chi];

    r8ge_to_r83v ( m, n, a, a1, a2, a3 );
    r83v_print ( m, n, a1, a2, a3, "  R83V copy of (some of ) matrix A:" );

    delete [] a;
    delete [] a1;
    delete [] a2;
    delete [] a3;
  }

  return;
}
//****************************************************************************80

double r8vec_dot_product ( int n, double x[], double y[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_DOT_PRODUCT computes the dot product of two R8VEC's.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    22 October 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of elements in the vectors.
//
//    Input, double X[N], Y[N], the two vectors.
//
//    Output, double R8VEC_DOT_PRODUCT, the dot product of the vectors.
//
{
  double dot;
  int i;

  dot = 0.0;

  for ( i = 0; i < n; i++ ) 
  {
    dot = dot + x[i] * y[i];
  }

  return dot;
}
//****************************************************************************80

void r8vec_dot_product_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_DOT_PRODUCT_TEST tests R8VEC_DOT_PRODUCT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    04 February 2016
//
//  Author:
//
//    John Burkardt
//
{
  int n;
  int seed;
  double *v1;
  double *v2;
  double value;

  cout << "\n";
  cout << "R8VEC_DOT_PRODUCT_TEST\n";
  cout << "  R8VEC_DOT_PRODUCT computes the dot product of two R8VEC's.\n";

  n = 10;
  seed = 123456789;
  v1 = r8vec_uniform_01_new ( n, seed );
  v2 = r8vec_uniform_01_new ( n, seed );
  r8vec2_print ( n, v1, v2, "  V1 and V2:" );
  value = r8vec_dot_product ( n, v1, v2 );
  cout << "\n";
  cout << "  V1 dot V2 = " << value << "\n";

  delete [] v1;
  delete [] v2;

  return;
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

void r8vec_indicator1_new_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_INDICATOR1_NEW_TEST tests R8VEC_INDICATOR1_NEW.
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
{
  int n;
  double *v;

  cout << "\n";
  cout << "R8VEC_INDICATOR1_NEW_TEST\n";
  cout << "  R8VEC_INDICATOR1_NEW returns an indicator1 vector.\n";

  n = 10;
  v = r8vec_indicator1_new ( n );
  r8vec_print ( n, v, "  Indicator1 vector:" );
  delete [] v;

  return;
}
//****************************************************************************80

double r8vec_norm ( int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_NORM returns the L2 norm of an R8VEC.
//
//  Discussion:
//
//    An R8VEC is a vector of R8's.
//
//    The vector L2 norm is defined as:
//
//      R8VEC_NORM = sqrt ( sum ( 1 <= I <= N ) A(I)^2 ).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 March 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of entries in A.
//
//    Input, double A[N], the vector whose L2 norm is desired.
//
//    Output, double R8VEC_NORM, the L2 norm of A.
//
{
  int i;
  double v;

  v = 0.0;

  for ( i = 0; i < n; i++ )
  {
    v = v + a[i] * a[i];
  }
  v = sqrt ( v );

  return v;
}
//****************************************************************************80

void r8vec_norm_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_NORM_TEST tests R8VEC_NORM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    26 September 2005
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n;
  int seed;

  cout << "\n";
  cout << "R8VEC_NORM_TEST\n";
  cout << "  R8VEC_NORM computes the L2 norm of an R8VEC.\n";

  n = 10;

  seed = 123456789;

  a = r8vec_uniform_01_new ( n, seed );

  r8vec_print ( n, a, "  Input vector:" );

  cout << "\n";
  cout << "  L2 norm: " << r8vec_norm ( n, a ) << "\n";

  delete [] a;

  return;
}
//****************************************************************************80

double r8vec_norm_affine ( int n, double v0[], double v1[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_NORM_AFFINE returns the affine L2 norm of an R8VEC.
//
//  Discussion:
//
//    The affine vector L2 norm is defined as:
//
//      R8VEC_NORM_AFFINE(V0,V1)
//        = sqrt ( sum ( 1 <= I <= N ) ( V1(I) - V0(I) )^2 )
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 October 2010
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the dimension of the vectors.
//
//    Input, double V0[N], the base vector.
//
//    Input, double V1[N], the vector.
//
//    Output, double R8VEC_NORM_AFFINE, the affine L2 norm.
//
{
  int i;
  double value;

  value = 0.0;

  for ( i = 0; i < n; i++ )
  {
    value = value + ( v1[i] - v0[i] ) * ( v1[i] - v0[i] );
  }
  value = sqrt ( value );

  return value;
}
//****************************************************************************80

void r8vec_norm_affine_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_NORM_AFFINE_TEST tests R8VEC_NORM_AFFINE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    30 June 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int n = 10;
  int seed;
  double *x;
  double *y;
  double *z;

  cout << "\n";
  cout << "R8VEC_NORM_AFFINE_TEST\n";
  cout << "  R8VEC_NORM_AFFINE computes the L2 norm of\n";
  cout << "  the difference of two R8VECs.\n";

  seed = 123456789;

  x = r8vec_uniform_01_new ( n, seed );
  y = r8vec_uniform_01_new ( n, seed );
  z = new double[n];
  for ( i = 0; i < n; i++ )
  {
    z[i] = x[i] - y[i];
  }
  cout << "\n";
  cout << "  R8VEC_NORM_AFFINE(X,Y) = " << r8vec_norm_affine ( n, x, y ) << "\n";
  cout << "  R8VEC_NORM(X-Y) =        " << r8vec_norm ( n, z ) << "\n";

  delete [] x;
  delete [] y;
  delete [] z;

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

void r8vec_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_PRINT_TEST tests R8VEC_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    31 August 2014
//
//  Author:
//
//    John Burkardt
//
{
  double a[4] = { 123.456, 0.000005, -1.0E+06, 3.14159265 };
  int n = 4;

  cout << "\n";
  cout << "R8VEC_PRINT_TEST\n";
  cout << "  R8VEC_PRINT prints an R8VEC.\n";

  r8vec_print ( n, a, "  The R8VEC:" );

  return;
}
//****************************************************************************80

void r8vec_to_r83v ( int m, int n, double a[], double a1[], double a2[], 
  double a3[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_TO_R83V copies an R8VEC to an R83V matrix.
//
//  Discussion:
//
//    The R83V storage format is used for a tridiagonal matrix.
//    The subdiagonal is in A(min(M-1,N)).
//    The diagonal is in B(min(M,N)).
//    The superdiagonal is in C(min(M,N-1)).
//
//  Example:
//
//    An R83V matrix of order 3x5 would be stored:
//
//      B1  C1  **  **  **
//      A1  B2  C2  **  **
//      **  A2  B3  C3  **
//
//    An R83 matrix of order 5x5 would be stored:
//
//      B1  C1  **  **  **
//      A1  B2  C2  **  **
//      **  A2  B3  C3  **
//      **  **  A3  B4  C4
//      **  **  **  A4  B5
//
//    An R83 matrix of order 5x3 would be stored:
//
//      B1  C1  **
//      A1  B2  C2
//      **  A2  B3
//      **  **  A3
//      **  **  **
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    17 February 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the order of the matrix.
//
//    Input, double A(min(N-1,M)+min(N,M)+min(N,M-1)), the vector.
//
//    Output, double A1(min(M-1,N)), A2(min(M,N)), A3(min(M,N-1)), the matrix.
//
{
  int ahi;
  int bhi;
  int chi;
  int i;
  int j;
  int k;

  ahi = i4_min ( m - 1, n );
  bhi = i4_min ( m,     n );
  chi = i4_min ( m,     n - 1 );

  k = 0;
  for ( j = 0; j < n; j++ )
  {
    if ( j < m + 1 && 1 <= j )
    {
      a3[j-1] = a[k];
      k = k + 1;
    }
    if ( j < m )
    {
      a2[j] = a[k];
      k = k + 1;
    }
    if ( j < m - 1 )
    {
      a1[j] = a[k];
      k = k + 1;
    }
  }
   
  return;
}
//****************************************************************************80

void r8vec_to_r83v_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_TO_R83V_TEST tests R8VEC_TO_R83V.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 February 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *a1;
  double *a2;
  double *a3;
  int ahi;
  int bhi;
  int chi;
  int i;
  int m;
  int n;

  cout << "\n";
  cout << "R8VEC_TO_R83V_TEST\n";
  cout << "  R8VEC_TO_R83V copies an R8VEC to an R83V matrix.\n";
  cout << "  We check three cases, M<N, M=N, M>N.\n";

  for ( i = 1; i <= 3; i++ )
  {
    if ( i == 1 )
    {
      m = 3;
      n = 5;
    }
    else if ( i == 2 )
    {
      m = 5;
      n = 5;
    }
    else if ( i == 3 )
    {
      m = 5;
      n = 3;
    }

    ahi = i4_min ( m - 1, n );
    bhi = i4_min ( m,     n );
    chi = i4_min ( m,     n - 1 );

    a = r8vec_indicator1_new ( ahi + bhi + chi );
    r8vec_print ( ahi + bhi + chi, a, "  R8VEC:" );

    a1 = new double[ahi];
    a2 = new double[bhi];
    a3 = new double[chi];

    r8vec_to_r83v ( m, n, a, a1, a2, a3 );
    r83v_print ( m, n, a1, a2, a3, "  R83V matrix:" );

    delete [] a;
    delete [] a1;
    delete [] a2;
    delete [] a3;
  }

  return;
}
//****************************************************************************80

void r8vec_uniform_01 ( int n, int &seed, double r[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_UNIFORM_01 returns a unit pseudorandom R8VEC.
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
//    Output, double R[N], the vector of pseudorandom values.
//
{
  int i;
  const int i4_huge = 2147483647;
  int k;

  if ( seed == 0 )
  {
    cerr << "\n";
    cerr << "R8VEC_UNIFORM_01 - Fatal error!\n";
    cerr << "  Input value of SEED = 0.\n";
    exit ( 1 );
  }

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

  return;
}
//****************************************************************************80

void r8vec_uniform_01_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_UNIFORM_01_TEST tests R8VEC_UNIFORM_01.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    16 February 2016
//
//  Author:
//
//    John Burkardt
//
{
  int j;
  int n;
  double *r;
  int seed;

  cout << "\n";
  cout << "R8VEC_UNIFORM_01_TEST\n";
  cout << "  R8VEC_UNIFORM_01 returns a random R8VEC\n";
  cout << "  with entries in [ 0.0, 1.0 ]\n";

  n = 10;
  seed = 123456789;
  r = ( double * ) malloc ( n * sizeof ( double ) );

  for ( j = 1; j <= 3; j++ )
  {
    cout << "\n";
    cout << "  Input SEED = " << seed << "\n";
    cout << "\n";

    r8vec_uniform_01 ( n, seed, r );

    r8vec_print ( n, r, "  Random R8VEC:" );
  }

  delete [] r;

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
//edit 
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

void r8vec_uniform_01_new_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_UNIFORM_01_NEW_TEST tests R8VEC_UNIFORM_01_NEW.
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
{
# define N 10

  int j;
  double *r;
  int seed;

  cout << "\n";
  cout << "R8VEC_UNIFORM_01_NEW_TEST\n";
  cout << "  R8VEC_UNIFORM_01_NEW returns a random R8VEC\n";
  cout << "  with entries in [ 0.0, 1.0 ]\n";
  cout << "\n";

  seed = 123456789;

  for ( j = 1; j <= 3; j++ )
  {
    cout << "\n";
    cout << "  Input SEED = " << seed << "\n";
    cout << "\n";

    r = r8vec_uniform_01_new ( N, seed );

    r8vec_print ( N, r, "  Random R8VEC:" );

    delete [] r;
  }

  return;
# undef N
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

void r8vec_zeros_new_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_ZEROS_NEW_TEST tests R8VEC_ZEROS_NEW.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 February 2016
//
//  Author:
//
//    John Burkardt
//
{
  int n = 10;
  double *x;

  cout << "\n";
  cout << "R8VEC_ZEROS_NEW_TEST\n";
  cout << "  R8VEC_ZEROS returns a zero R8VEC\n";
  cout << "\n";

  x = r8vec_zeros_new ( n );

  r8vec_print ( n, x, "  Random R8VEC:" );

  delete [] x;

  return;
}
//****************************************************************************80

void r8vec2_print ( int n, double a1[], double a2[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC2_PRINT prints an R8VEC2.
//
//  Discussion:
//
//    An R8VEC2 is a dataset consisting of N pairs of real values, stored
//    as two separate vectors A1 and A2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    19 November 2002
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of components of the vector.
//
//    Input, double A1[N], double A2[N], the vectors to be printed.
//
//    Input, string TITLE, a title.
//
{
  int i;

  cout << "\n";
  cout << title << "\n";
  cout << "\n";
  for ( i = 0; i <= n - 1; i++ )
  {
    cout << setw(6)  << i
         << ": " << setw(14) << a1[i]
         << "  " << setw(14) << a2[i] << "\n";
  }

  return;
}
//****************************************************************************80

void r8vec2_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC2_PRINT_TEST tests R8VEC2_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    08 January 2016
//
//  Author:
//
//    John Burkardt
//
{
  double a[5] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
  double b[5];
  double c[5];
  int i;
  int n = 5;

  cout << "\n";
  cout << "R8VEC2_PRINT_TEST\n";
  cout << "  R8VEC2_PRINT prints a pair of R8VEC's.\n";

  for ( i = 0; i < n; i++ )
  {
    b[i] = a[i] * a[i];
    c[i] = sqrt ( a[i] );
  }

  r8vec2_print ( n, b, c, "  Squares and square roots:" );

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
