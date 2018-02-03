# include <cmath>
# include <cstdlib>
# include <ctime>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8vm.hpp"

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

double r8_factorial ( int n )

//****************************************************************************80
//
//  Purpose:
//
//    R8_FACTORIAL computes the factorial of N.
//
//  Discussion:
//
//    factorial ( N ) = product ( 1 <= I <= N ) I
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    16 January 1999
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the argument of the factorial function.
//    If N is less than 1, the function value is returned as 1.
//
//    Output, double R8_FACTORIAL, the factorial of N.
//
{
  int i;
  double value;

  value = 1.0;

  for ( i = 1; i <= n; i++ )
  {
    value = value * ( double ) ( i );
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

double *r8ge_to_r8vm ( int m, int n, double a_ge[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_TO_R8VM converts an R8GE matrix to an R8VM matrix.
//
//  Discussion:
//
//    The R8VM storage format is used for an M by N Vandermonde matrix.
//    An M by N Vandermonde matrix is defined by the values in its second
//    row, which will be written here as X(1:N).  The matrix has a first 
//    row of 1's, a second row equal to X(1:N), a third row whose entries
//    are the squares of the X values, up to the M-th row whose entries
//    are the (M-1)th powers of the X values.  The matrix can be stored
//    compactly by listing just the values X(1:N).
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
//
//    Input, double A_GE[M*N], the R8GE matrix.
//
//    Output, double R8GE_TO_R8VM[N], the R8VM matrix.
//
{
  double *a_vm;
  int i;
  int j;

  a_vm = new double[n];

  i = 1;
  for ( j = 0; j < n; j++ )
  {
    a_vm[j] = a_ge[i+j*m];
  }

  return a_vm;
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

double r8vm_det ( int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8VM_DET computes the determinant of an R8VM matrix.
//
//  Discussion:
//
//    The R8VM storage format is used for an M by N Vandermonde matrix.
//    An M by N Vandermonde matrix is defined by the values in its second
//    row, which will be written here as X(1:N).  The matrix has a first 
//    row of 1's, a second row equal to X(1:N), a third row whose entries
//    are the squares of the X values, up to the M-th row whose entries
//    are the (M-1)th powers of the X values.  The matrix can be stored
//    compactly by listing just the values X(1:N).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    29 September 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of rows and columns of the matrix.
//
//    Input, double A[N], the R8VM matrix.
//
//    Output, double R8VM_DET, the determinant of the matrix.
//
{
  double det;
  int i;
  int j;

  det = 1.0;

  for ( j = 0; j < n; j++ )
  {
    for ( i = j+1; i < n; i++ )
    {
      det = det * ( a[i] - a[j] );
    }
  }

  return det;
}
//****************************************************************************80

double *r8vm_indicator ( int m, int n )

//****************************************************************************80
//
//  Purpose:
//
//    R8VM_INDICATOR returns an R8VM indicator matrix.
//
//  Discussion:
//
//    The R8VM storage format is used for an M by N Vandermonde matrix.
//    An M by N Vandermonde matrix is defined by the values in its second
//    row, which will be written here as X(1:N).  The matrix has a first 
//    row of 1's, a second row equal to X(1:N), a third row whose entries
//    are the squares of the X values, up to the M-th row whose entries
//    are the (M-1)th powers of the X values.  The matrix can be stored
//    compactly by listing just the values X(1:N).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 August 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns of the matrix.
//
//    Output, double R8VM_INDICATOR[N], the R8VM matrix.
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

double r8vm_indicator_det ( int n )

//****************************************************************************80
//
//  Purpose:
//
//    R8VM_INDICATOR_DET returns the determinant of an R8VM indicator matrix.
//
//  Discussion:
//
//    The R8VM storage format is used for an M by N Vandermonde matrix.
//    An M by N Vandermonde matrix is defined by the values in its second
//    row, which will be written here as X(1:N).  The matrix has a first 
//    row of 1's, a second row equal to X(1:N), a third row whose entries
//    are the squares of the X values, up to the M-th row whose entries
//    are the (M-1)th powers of the X values.  The matrix can be stored
//    compactly by listing just the values X(1:N).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    25 August 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of rows and columns of 
//    the matrix.
//
//    Output, double R8VM_INDICATOR_DET, the determinant.
//
{
  int i;
  double value;

  value = 1.0;
  for ( i = 0; i < n; i++ )
  {
    value = value * r8_factorial ( i );
  }

  return value;
}
//****************************************************************************80

double *r8vm_mtv ( int m, int n, double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8VM_MTV multiplies a vector times an R8VM matrix.
//
//  Discussion:
//
//    The R8VM storage format is used for an M by N Vandermonde matrix.
//    An M by N Vandermonde matrix is defined by the values in its second
//    row, which will be written here as X(1:N).  The matrix has a first 
//    row of 1's, a second row equal to X(1:N), a third row whose entries
//    are the squares of the X values, up to the M-th row whose entries
//    are the (M-1)th powers of the X values.  The matrix can be stored
//    compactly by listing just the values X(1:N).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    29 September 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns of the matrix.
//
//    Input, double A[N], the R8VM matrix.
//
//    Input, double X[M], the vector to be multiplied by A.
//
//    Output, double R8VM_MTV[N], the product A' * x.
//
{
  double *b;
  int i;
  int j;

  b = new double[n];

  for ( j = 0; j < n; j++ )
  {
    b[j] = 0.0;
    for ( i = 0; i < m; i++ )
    {
      if ( i == 0 )
      {
        b[j] = b[j] + x[i];
      }
      else
      {
        b[j] = b[j] + pow ( a[j], i ) * x[i];
      }
    }
  }

  return b;
}
//****************************************************************************80

double *r8vm_mv ( int m, int n, double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8VM_MV multiplies an R8VM matrix times a vector.
//
//  Discussion:
//
//    The R8VM storage format is used for an M by N Vandermonde matrix.
//    An M by N Vandermonde matrix is defined by the values in its second
//    row, which will be written here as X(1:N).  The matrix has a first 
//    row of 1's, a second row equal to X(1:N), a third row whose entries
//    are the squares of the X values, up to the M-th row whose entries
//    are the (M-1)th powers of the X values.  The matrix can be stored
//    compactly by listing just the values X(1:N).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    29 September 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns of the matrix.
//
//    Input, double A[N], the R8VM matrix.
//
//    Input, double X[N], the vector to be multiplied by A.
//
//    Output, double R8VM_MV[M], the product A * x.
//
{
  double *b;
  int i;
  int j;

  b = new double[m];

  for ( i = 0; i < m; i++ )
  {
    b[i] = 0.0;
    for ( j = 0; j < n; j++ )
    {
      if ( i == 0 )
      {
        b[i] = b[i] + x[j];
      }
      else
      {
        b[i] = b[i] + pow ( a[j], i ) * x[j];
      }
    }
  }

  return b;
}
//****************************************************************************80

void r8vm_print ( int m, int n, double a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8VM_PRINT prints an R8VM matrix.
//
//  Discussion:
//
//    The R8VM storage format is used for an M by N Vandermonde matrix.
//    An M by N Vandermonde matrix is defined by the values in its second
//    row, which will be written here as X(1:N).  The matrix has a first 
//    row of 1's, a second row equal to X(1:N), a third row whose entries
//    are the squares of the X values, up to the M-th row whose entries
//    are the (M-1)th powers of the X values.  The matrix can be stored
//    compactly by listing just the values X(1:N).
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
//    Input, int M, N, the number of rows and columns of the matrix.
//
//    Input, double A[N], the R8VM matrix.
//
//    Input, string TITLE, a title.
//
{
  r8vm_print_some ( m, n, a, 1, 1, m, n, title );

  return;
}
//****************************************************************************80

void r8vm_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8VM_PRINT_SOME prints some of an R8VM matrix.
//
//  Discussion:
//
//    The R8VM storage format is used for an M by N Vandermonde matrix.
//    An M by N Vandermonde matrix is defined by the values in its second
//    row, which will be written here as X(1:N).  The matrix has a first 
//    row of 1's, a second row equal to X(1:N), a third row whose entries
//    are the squares of the X values, up to the M-th row whose entries
//    are the (M-1)th powers of the X values.  The matrix can be stored
//    compactly by listing just the values X(1:N).
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
//    Input, int M, N, the number of rows and columns of the matrix.
//
//    Input, double A[N], the R8VM matrix.
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
    i2hi = i4_min ( ihi, m );

    for ( i = i2lo; i <= i2hi; i++ )
    {
//
//  Print out (up to) 5 entries in row I, that lie in the current strip.
//
      for ( j = j2lo; j <= j2hi; j++ )
      {
        if ( i == 1 )
        {
          aij = 1.0;
        }
        else
        {
          aij = pow ( a[j-1], i-1 );
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

double *r8vm_random ( int m, int n, int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    R8VM_RANDOM randomizes an R8VM matrix.
//
//  Discussion:
//
//    The R8VM storage format is used for an M by N Vandermonde matrix.
//    An M by N Vandermonde matrix is defined by the values in its second
//    row, which will be written here as X(1:N).  The matrix has a first 
//    row of 1's, a second row equal to X(1:N), a third row whose entries
//    are the squares of the X values, up to the M-th row whose entries
//    are the (M-1)th powers of the X values.  The matrix can be stored
//    compactly by listing just the values X(1:N).
//
//    The parameter M is not actually needed by this routine.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    18 February 2013
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns of the matrix.
//
//    Input/output, int &SEED, a seed for the random number generator.
//
//    Output, double R8VM_RANDOM[N], the R8VM matrix.
//
{
  double *a;

  a = r8vec_uniform_01_new ( n, seed );

  return a;
}
//****************************************************************************80

void r8vm_sl ( int n, double a[], double b[], double x[], int *info )

//****************************************************************************80
//
//  Purpose:
//
//    R8VM_SL solves A*x=b, where A is an R8VM system.
//
//  Discussion:
//
//    The R8VM storage format is used for an M by N Vandermonde matrix.
//    An M by N Vandermonde matrix is defined by the values in its second
//    row, which will be written here as X(1:N).  The matrix has a first 
//    row of 1's, a second row equal to X(1:N), a third row whose entries
//    are the squares of the X values, up to the M-th row whose entries
//    are the (M-1)th powers of the X values.  The matrix can be stored
//    compactly by listing just the values X(1:N).
//
//    Vandermonde systems are very close to singularity.  The singularity
//    gets worse as N increases, and as any pair of values defining
//    the matrix get close.  Even a system as small as N = 10 will
//    involve the 9th power of the defining values.
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
//    John Burkardt.
//
//  Reference:
//
//    Gene Golub, Charles Van Loan,
//    Matrix Computations,
//    Third Edition,
//    Johns Hopkins, 1996.
//
//  Parameters:
//
//    Input, int N, the number of rows and columns of the matrix.
//
//    Input, double A[N], the R8VM matrix.
//
//    Input, double B[N], the right hand side.
//
//    Output, double X[N], the solution of the linear system.
//
//    Output, int *INFO.
//    0, no error.
//    nonzero, at least two of the values in A are equal.
//
{
  int i;
  int j;
//
//  Check for explicit singularity.
//
  *info = 0;

  for ( j = 0; j < n; j++ )
  {
    for ( i = j+1; i < n; i++ )
    {
      if ( a[i] == a[j] )
      {
        *info = 1;
        return;
      }
    }
  }

  for ( i = 0; i < n; i++ )
  {
    x[i] = b[i];
  }

  for ( j = 1; j <= n-1; j++ )
  {
    for ( i = n; j+1 <= i; i-- )
    {
      x[i-1] = x[i-1] - a[j-1] * x[i-2];
    }
  }

  for ( j = n-1; 1 <= j; j-- )
  {
    for ( i = j+1; i <= n; i++ )
    {
      x[i-1] = x[i-1] / ( a[i-1] - a[i-j-1] );
    }

    for ( i = j; i <= n-1; i++ )
    {
      x[i-1] = x[i-1] - x[i];
    }
  }

  return;
}
//****************************************************************************80

double *r8vm_sl_new ( int n, double a[], double b[], int *info )

//****************************************************************************80
//
//  Purpose:
//
//    R8VM_SL_NEW solves A*x=b, where A is an R8VM system.
//
//  Discussion:
//
//    The R8VM storage format is used for an M by N Vandermonde matrix.
//    An M by N Vandermonde matrix is defined by the values in its second
//    row, which will be written here as X(1:N).  The matrix has a first 
//    row of 1's, a second row equal to X(1:N), a third row whose entries
//    are the squares of the X values, up to the M-th row whose entries
//    are the (M-1)th powers of the X values.  The matrix can be stored
//    compactly by listing just the values X(1:N).
//
//    Vandermonde systems are very close to singularity.  The singularity
//    gets worse as N increases, and as any pair of values defining
//    the matrix get close.  Even a system as small as N = 10 will
//    involve the 9th power of the defining values.
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
//    John Burkardt.
//
//  Reference:
//
//    Gene Golub, Charles Van Loan,
//    Matrix Computations,
//    Third Edition,
//    Johns Hopkins, 1996.
//
//  Parameters:
//
//    Input, int N, the number of rows and columns of the matrix.
//
//    Input, double A[N], the R8VM matrix.
//
//    Input, double B[N], the right hand side.
//
//    Output, int *INFO.
//    0, no error.
//    nonzero, at least two of the values in A are equal.
//
//    Output, double R8VM_SLT_NEW[N], the solution of the linear system.
//
{
  int i;
  int j;
  double *x;
//
//  Check for explicit singularity.
//
  *info = 0;

  for ( j = 0; j < n; j++ )
  {
    for ( i = j+1; i < n; i++ )
    {
      if ( a[i] == a[j] )
      {
        *info = 1;
        return NULL;
      }
    }
  }

  x = new double[n];

  for ( i = 0; i < n; i++ )
  {
    x[i] = b[i];
  }

  for ( j = 1; j <= n-1; j++ )
  {
    for ( i = n; j+1 <= i; i-- )
    {
      x[i-1] = x[i-1] - a[j-1] * x[i-2];
    }
  }

  for ( j = n-1; 1 <= j; j-- )
  {
    for ( i = j+1; i <= n; i++ )
    {
      x[i-1] = x[i-1] / ( a[i-1] - a[i-j-1] );
    }

    for ( i = j; i <= n-1; i++ )
    {
      x[i-1] = x[i-1] - x[i];
    }
  }

  return x;
}
//****************************************************************************80

void r8vm_slt ( int n, double a[], double b[], double x[], int *info )

//****************************************************************************80
//
//  Purpose:
//
//    R8VM_SLT solves A'*x=b, where A is an R8VM matrix.
//
//  Discussion:
//
//    The R8VM storage format is used for an M by N Vandermonde matrix.
//    An M by N Vandermonde matrix is defined by the values in its second
//    row, which will be written here as X(1:N).  The matrix has a first 
//    row of 1's, a second row equal to X(1:N), a third row whose entries
//    are the squares of the X values, up to the M-th row whose entries
//    are the (M-1)th powers of the X values.  The matrix can be stored
//    compactly by listing just the values X(1:N).
//
//    Vandermonde systems are very close to singularity.  The singularity
//    gets worse as N increases, and as any pair of values defining
//    the matrix get close.  Even a system as small as N = 10 will
//    involve the 9th power of the defining values.
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
//    John Burkardt.
//
//  Reference:
//
//    Gene Golub, Charles Van Loan,
//    Matrix Computations,
//    Third Edition,
//    Johns Hopkins, 1996.
//
//  Parameters:
//
//    Input, int N, the number of rows and columns of the matrix.
//
//    Input, double A[N], the R8VM matrix.
//
//    Input, double B[N], the right hand side.
//
//    Output, double X[N], the solution of the linear system.
//
//    Output, int *INFO.
//    0, no error.
//    nonzero, at least two of the values in A are equal.
//
{
  int i;
  int j;
//
//  Check for explicit singularity.
//
  *info = 0;

  for ( j = 0; j < n; j++ )
  {
    for ( i = j+1; i < n; i++ )
    {
      if ( a[i] == a[j] )
      {
        *info = 1;
        return;
      }
    }
  }

  for ( i = 0; i < n; i++ )
  {
    x[i] = b[i];
  }

  for ( j = 1; j <= n-1; j++ )
  {
    for ( i = n; j+1 <= i; i-- )
    {
      x[i-1] = ( x[i-1] - x[i-2] ) / ( a[i-1] - a[i-j-1] );
    }
  }

  for ( j = n-1; 1 <= j; j-- )
  {
    for ( i = j; i <= n-1; i++ )
    {
      x[i-1] = x[i-1] - x[i] * a[j-1];
    }
  }

  return;
}
//****************************************************************************80

double *r8vm_slt_new ( int n, double a[], double b[], int *info )

//****************************************************************************80
//
//  Purpose:
//
//    R8VM_SLT_NEW solves A'*x = b, where A is an R8VM matrix.
//
//  Discussion:
//
//    The R8VM storage format is used for an M by N Vandermonde matrix.
//    An M by N Vandermonde matrix is defined by the values in its second
//    row, which will be written here as X(1:N).  The matrix has a first 
//    row of 1's, a second row equal to X(1:N), a third row whose entries
//    are the squares of the X values, up to the M-th row whose entries
//    are the (M-1)th powers of the X values.  The matrix can be stored
//    compactly by listing just the values X(1:N).
//
//    Vandermonde systems are very close to singularity.  The singularity
//    gets worse as N increases, and as any pair of values defining
//    the matrix get close.  Even a system as small as N = 10 will
//    involve the 9th power of the defining values.
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
//    John Burkardt.
//
//  Reference:
//
//    Gene Golub, Charles Van Loan,
//    Matrix Computations,
//    Third Edition,
//    Johns Hopkins, 1996.
//
//  Parameters:
//
//    Input, int N, the number of rows and columns of the matrix.
//
//    Input, double A[N], the R8VM matrix.
//
//    Input, double B[N], the right hand side.
//
//    Output, int *INFO.
//    0, no error.
//    nonzero, at least two of the values in A are equal.
//
//    Output, double R8VM_SLT_NEW[N], the solution of the linear system.
//
{
  int i;
  int j;
  double *x;
//
//  Check for explicit singularity.
//
  *info = 0;

  for ( j = 0; j < n; j++ )
  {
    for ( i = j+1; i < n; i++ )
    {
      if ( a[i] == a[j] )
      {
        *info = 1;
        return NULL;
      }
    }
  }

  x = new double[n];

  for ( i = 0; i < n; i++ )
  {
    x[i] = b[i];
  }

  for ( j = 1; j <= n-1; j++ )
  {
    for ( i = n; j+1 <= i; i-- )
    {
      x[i-1] = ( x[i-1] - x[i-2] ) / ( a[i-1] - a[i-j-1] );
    }
  }

  for ( j = n-1; 1 <= j; j-- )
  {
    for ( i = j; i <= n-1; i++ )
    {
      x[i-1] = x[i-1] - x[i] * a[j-1];
    }
  }

  return x;
}
//****************************************************************************80

double *r8vm_to_r8ge ( int m, int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8VM_TO_R8GE copies an R8VM matrix to an R8GE matrix.
//
//  Discussion:
//
//    The R8VM storage format is used for an M by N Vandermonde matrix.
//    An M by N Vandermonde matrix is defined by the values in its second
//    row, which will be written here as X(1:N).  The matrix has a first 
//    row of 1's, a second row equal to X(1:N), a third row whose entries
//    are the squares of the X values, up to the M-th row whose entries
//    are the (M-1)th powers of the X values.  The matrix can be stored
//    compactly by listing just the values X(1:N).
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
//    Input, int M, N, the number of rows and columns of the matrix.
//
//    Input, double A[N], the R8VM matrix.
//
//    Output, double R8VM_TO_R8GE[M*N], the R8GE matrix.
//
{
  double *b;
  int i;
  int j;

  b = new double[m*n];

  for ( i = 0; i < m; i++ )
  {
    for ( j = 0; j < n; j++ )
    {
      if ( i == 0 )
      {
        b[i+j*m] = 1.0;
      }
      else
      {
        b[i+j*m] = b[i-1+j*m] * a[j];
      }
    }
  }

  return b;
}
//****************************************************************************80

double *r8vm_zeros ( int m, int n )

//****************************************************************************80
//
//  Purpose:
//
//    R8VM_ZEROS zeros an R8VM matrix.
//
//  Discussion:
//
//    The R8VM storage format is used for an M by N Vandermonde matrix.
//    An M by N Vandermonde matrix is defined by the values in its second
//    row, which will be written here as X(1:N).  The matrix has a first 
//    row of 1's, a second row equal to X(1:N), a third row whose entries
//    are the squares of the X values, up to the M-th row whose entries
//    are the (M-1)th powers of the X values.  The matrix can be stored
//    compactly by listing just the values X(1:N).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 August 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns of the matrix.
//
//    Output, double R8VM_ZERO[N], the zero R8VM matrix.
//
{
  double *a;
  int j;

  a = new double[n];

  for ( j = 0; j < n; j++ )
  {
    a[j] = 0.0;
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
