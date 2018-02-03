# include <cmath>
# include <cstdlib>
# include <ctime>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r85.hpp"

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

double *r85_dif2 ( int n )

//****************************************************************************80
//
//  Purpose:
//
//    R85_DIF2 sets up an R85 second difference matrix.
//
//  Discussion:
//
//    The R85 storage format represents a pentadiagonal matrix as a 5
//    by N array, in which each row corresponds to a diagonal, and
//    column locations are preserved.  Thus, the original matrix is
//    "collapsed" vertically into the array.
//
//  Example:
//
//    Here is how an R85 matrix of order 6 would be stored:
//
//       *   *  A13 A24 A35 A46
//       *  A12 A23 A34 A45 A56
//      A11 A22 A33 A44 A55 A66
//      A21 A32 A43 A54 A65  *
//      A31 A42 A53 A64  *   *
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
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Output, double R85_DIF2[5*N], the R85 matrix.
//
{
  double *a;
  int i;
  int j;

  a = r8vec_zeros_new ( 5 * n );

  for ( j = 2; j <= n; j++ )
  {
    i = j - 1;
    a[1+(j-1)*5] = - 1.0;
  }

  for ( j = 1; j <= n; j++ )
  {
    i = j;
    a[2+(j-1)*5] = 2.0;
  }

  for ( j = 1; j <= n - 1; j++ )
  {
    i = j + 1;
    a[3+(j-1)*5] = - 1.0;
  }

  return a;
}
//****************************************************************************80

double *r85_indicator ( int n )

//****************************************************************************80
//
//  Purpose:
//
//    R85_INDICATOR sets up an R85 indicator matrix.
//
//  Discussion:
//
//    The R85 storage format represents a pentadiagonal matrix as a 5
//    by N array, in which each row corresponds to a diagonal, and
//    column locations are preserved.  Thus, the original matrix is
//    "collapsed" vertically into the array.
//
//  Example:
//
//    Here is how an R85 matrix of order 6 would be stored:
//
//       *   *  A13 A24 A35 A46
//       *  A12 A23 A34 A45 A56
//      A11 A22 A33 A44 A55 A66
//      A21 A32 A43 A54 A65  *
//      A31 A42 A53 A64  *   *
//
//    Here are the values as stored in an indicator matrix:
//
//      00 00 13 24 35 46
//      00 12 23 34 45 56
//      11 22 33 44 55 66
//      21 32 43 54 65 00
//      31 42 53 64 00 00
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 January 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//    N must be at least 2.
//
//    Output, double R85_INDICATOR[3*N], the R85 indicator matrix.
//
{
  double *a;
  int fac;
  int i;
  int j;

  a = r8vec_zeros_new ( 5 * n );

  fac = i4_power ( 10, i4_log_10 ( n ) + 1 );

  for ( j = 3; j <= n; j++ )
  {
    i = j - 2;
    a[0+(j-1)*5] = ( double ) ( fac * i + j );
  }

  for ( j = 2; j <= n; j++ )
  {
    i = j - 1;
    a[1+(j-1)*5] = ( double ) ( fac * i + j );
  }

  for ( j = 1; j <= n; j++ )
  {
    i = j;
    a[2+(j-1)*5] = ( double ) ( fac * i + j );
  }

  for ( j = 1; j <= n - 1; j++ )
  {
    i = j + 1;
    a[3+(j-1)*5] = ( double ) ( fac * i + j );
  }

  for ( j = 1; j <= n - 2; j++ )
  {
    i = j + 2;
    a[4+(j-1)*5] = ( double ) ( fac * i + j );
  }

  return a;
}
//****************************************************************************80

double *r85_np_fs ( int n, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    R85_NP_FS factors and solves an R85 system.
//
//  Discussion:
//
//    The R85 storage format represents a pentadiagonal matrix as a 5
//    by N array, in which each row corresponds to a diagonal, and
//    column locations are preserved.  Thus, the original matrix is
//    "collapsed" vertically into the array.
//
//    This algorithm requires that each diagonal entry be nonzero.
//
//    No pivoting is performed, and therefore the algorithm may fail
//    in simple cases where the matrix is not singular.
//
//  Example:
//
//    Here is how an R85 matrix of order 6 would be stored:
//
//       *   *  A13 A24 A35 A46
//       *  A12 A23 A34 A45 A56
//      A11 A22 A33 A44 A55 A66
//      A21 A32 A43 A54 A65  *
//      A31 A42 A53 A64  *   *
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    18 September 2003
//
//  Author:
//
//    Original FORTRAN77 version by Cheney, Kincaid.
//    C++ version by John Burkardt.
//
//  Reference:
//
//    Ward Cheney, David Kincaid,
//    Numerical Mathematics and Computing,
//    1985, pages 233-236.
//
//  Parameters:
//
//    Input, int N, the order of the linear system.
//
//    Input/output, double A[5*N],
//    On input, the pentadiagonal matrix.
//    On output, the data in these vectors has been overwritten
//    by factorization information.
//
//    Input/output, double B[N].
//    On input, B contains the right hand side of the linear system.
//    On output, B has been overwritten by factorization information.
//
//    Output, double R85_NP_FS[N], the solution of the linear system.
//
{
  int i;
  double *x;
  double xmult;

  for ( i = 0; i < n; i++ )
  {
    if ( a[2+i*5] == 0.0 )
    {
      return NULL;
    }
  }

  x = r8vec_zeros_new ( n );

  for ( i = 2; i <= n - 1; i++ )
  {
    xmult = a[1+(i-1)*5] / a[2+(i-2)*5];
    a[2+(i-1)*5] = a[2+(i-1)*5] - xmult * a[3+(i-2)*5];
    a[3+(i-1)*5] = a[3+(i-1)*5] - xmult * a[4+(i-2)*5];

    b[i-1] = b[i-1] - xmult * b[i-2];

    xmult = a[0+i*5] / a[2+(i-2)*5];
    a[1+i*5] = a[1+i*5] - xmult * a[3+(i-2)*5];
    a[2+i*5] = a[2+i*5] - xmult * a[4+(i-2)*5];

    b[i] = b[i] - xmult * b[i-2];
  }

  xmult = a[1+(n-1)*5] / a[2+(n-2)*5];
  a[2+(n-1)*5] = a[2+(n-1)*5] - xmult * a[3+(n-2)*5];

  x[n-1] = ( b[n-1] - xmult * b[n-2] ) / a[2+(n-1)*5];
  x[n-2] = ( b[n-2] - a[3+(n-2)*5] * x[n-1] ) / a[2+(n-2)*5];

  for ( i = n - 2; 1 <= i; i-- )
  {
    x[i-1] = ( b[i-1] - a[3+(i-1)*5] * x[i] - a[4+(i-1)*5] * x[i+1] ) 
      / a[2+(i-1)*5];
  }

  return x;
}
//****************************************************************************80

double *r85_mtv ( int n, double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R85_MTV multiplies a vector times an R85 matrix.
//
//  Discussion:
//
//    The R85 storage format represents a pentadiagonal matrix as a 5
//    by N array, in which each row corresponds to a diagonal, and
//    column locations are preserved.  Thus, the original matrix is
//    "collapsed" vertically into the array.
//
//  Example:
//
//    Here is how an R85 matrix of order 6 would be stored:
//
//       *   *  A13 A24 A35 A46
//       *  A12 A23 A34 A45 A56
//      A11 A22 A33 A44 A55 A66
//      A21 A32 A43 A54 A65  *
//      A31 A42 A53 A64  *   *
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 September 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the linear system.
//
//    Input, double A[5*N], the pentadiagonal matrix.
//
//    Input, double X[N], the vector to be multiplied by A'.
//
//    Output, double R85_MTV[N], the product A' * x.
//
{
  double *b;
  int j;

  b = r8vec_zeros_new ( n );

  for ( j = 0; j < n; j++ )
  {
    b[j] = a[2+j*5] * x[j];
  }

  for ( j = 1; j < n; j++ )
  {
    b[j] = b[j] + a[3+j*5] * x[j-1];
  }

  for ( j = 2; j < n; j++ )
  {
    b[j] = b[j] + a[4+j*5] * x[j-2];
  }

  for ( j = 0; j < n - 1; j++ )
  {
    b[j] = b[j] + a[1+j*5] * x[j+1];
  }

  for ( j = 0; j < n - 2; j++ )
  {
    b[j] = b[j] + a[0+j*5] * x[j+2];
  }

  return b;
}
//****************************************************************************80

double *r85_mv ( int n, double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R85_MV multiplies an R85 matrix times a vector.
//
//  Discussion:
//
//    The R85 storage format represents a pentadiagonal matrix as a 5
//    by N array, in which each row corresponds to a diagonal, and
//    column locations are preserved.  Thus, the original matrix is
//    "collapsed" vertically into the array.
//
//  Example:
//
//    Here is how an R85 matrix of order 6 would be stored:
//
//       *   *  A13 A24 A35 A46
//       *  A12 A23 A34 A45 A56
//      A11 A22 A33 A44 A55 A66
//      A21 A32 A43 A54 A65  *
//      A31 A42 A53 A64  *   *
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 September 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the linear system.
//
//    Input, double A[5*N], the pentadiagonal matrix.
//
//    Input, double X[N], the vector to be multiplied by A.
//
//    Output, double R85_MV[N], the product A * x.
//
{
  double *b;
  int i;

  b = r8vec_zeros_new ( n );

  for ( i = 0; i < n; i++ )
  {
    b[i] = a[2+i*5] * x[i];
  }
  for ( i = 2; i < n; i++ )
  {
    b[i] = b[i] + a[0+i*5] * x[i-2];
  }
  for ( i = 1; i < n; i++ )
  {
    b[i] = b[i] + a[1+i*5] * x[i-1];
  }

  for ( i = 0; i < n - 1; i++ )
  {
    b[i] = b[i] + a[3+i*5] * x[i+1];
  }
  for ( i = 0; i < n - 2; i++ )
  {
    b[i] = b[i] + a[4+i*5] * x[i+2];
  }

  return b;
}
//****************************************************************************80

void r85_print ( int n, double a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    R85_PRINT prints an R85 matrix.
//
//  Discussion:
//
//    The R85 storage format represents a pentadiagonal matrix as a 5
//    by N array, in which each row corresponds to a diagonal, and
//    column locations are preserved.  Thus, the original matrix is
//    "collapsed" vertically into the array.
//
//  Example:
//
//    Here is how an R85 matrix of order 6 would be stored:
//
//       *   *  A13 A24 A35 A46
//       *  A12 A23 A34 A45 A56
//      A11 A22 A33 A44 A55 A66
//      A21 A32 A43 A54 A65  *
//      A31 A42 A53 A64  *   *
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
//    Input, double A[5*N], the pentadiagonal matrix.
//
//    Input, string TITLE, a title.
//
{
  r85_print_some ( n, a, 1, 1, n, n, title );

  return;
}
//****************************************************************************80

void r85_print_some ( int n, double a[], int ilo, int jlo, int ihi, int jhi,
  string title )

//****************************************************************************80
//
//  Purpose:
//
//    R85_PRINT_SOME prints some of an R85 matrix.
//
//  Discussion:
//
//    The R85 storage format represents a pentadiagonal matrix as a 5
//    by N array, in which each row corresponds to a diagonal, and
//    column locations are preserved.  Thus, the original matrix is
//    "collapsed" vertically into the array.
//
//  Example:
//
//    Here is how an R85 matrix of order 6 would be stored:
//
//       *   *  A13 A24 A35 A46
//       *  A12 A23 A34 A45 A56
//      A11 A22 A33 A44 A55 A66
//      A21 A32 A43 A54 A65  *
//      A31 A42 A53 A64  *   *
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
//    Input, double A[5*N], the pentadiagonal matrix.
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
    i2lo = i4_max ( ilo, 1 );
    i2lo = i4_max ( i2lo, j2lo - 2 );

    i2hi = i4_min ( ihi, n );
    i2hi = i4_min ( i2hi, j2hi + 2 );

    for ( i = i2lo; i <= i2hi; i++ )
    {
//
//  Print out (up to) 5 entries in row I, that lie in the current strip.
//
      cout << setw(6) << i << "  ";

      for ( j2 = 1; j2 <= inc; j2++ )
      {
        j = j2lo - 1 + j2;

        if ( 2 < i - j || 2 < j - i )
        {
          cout << "            ";
        }
        else if ( j == i + 2 )
        {
          cout << setw(10) << a[0+(j-1)*5] << "  ";
        }
        else if ( j == i + 1 )
        {
          cout << setw(10) << a[1+(j-1)*5] << "  ";
        }
        else if ( j == i )
        {
          cout << setw(10) << a[2+(j-1)*5] << "  ";
        }
        else if ( j == i - 1 )
        {
          cout << setw(10) << a[3+(j-1)*5] << "  ";
        }
        else if ( j == i - 2 )
        {
          cout << setw(10) << a[4+(j-1)*5] << "  ";
        }
      }
      cout << "\n";
    }
    cout << "\n";
  }

  return;
# undef INCX
}
//****************************************************************************80

double *r85_random ( int n, int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    R85_RANDOM randomizes an R85 matrix.
//
//  Discussion:
//
//    The R85 storage format represents a pentadiagonal matrix as a 5
//    by N array, in which each row corresponds to a diagonal, and
//    column locations are preserved.  Thus, the original matrix is
//    "collapsed" vertically into the array.
//
//  Example:
//
//    Here is how an R85 matrix of order 6 would be stored:
//
//       *   *  A13 A24 A35 A46
//       *  A12 A23 A34 A45 A56
//      A11 A22 A33 A44 A55 A66
//      A21 A32 A43 A54 A65  *
//      A31 A42 A53 A64  *   *
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    16 March 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the linear system.
//
//    Input/output, int &SEED, a seed for the random number generator.
//
//    Output, double R85_RANDOM[5*N], the pentadiagonal matrix.
//
{
  double *a;
  int i;
  int j;

  a = r8vec_zeros_new ( 5 * n );

  i = 0;
  for ( j = 2; j < n; j++ )
  {
    a[i+j*5] = r8_uniform_01 ( seed );
  }

  i = 1;
  for ( j = 1; j < n; j++ )
  {
    a[i+j*5] = r8_uniform_01 ( seed );
  }

  i = 2;
  for ( j = 0; j < n; j++ )
  {
    a[i+j*5] = r8_uniform_01 ( seed );
  }

  i = 3;
  for ( j = 0; j < n - 1; j++ )
  {
    a[i+j*5] = r8_uniform_01 ( seed );
  }

  i = 4;
  for ( j = 0; j < n - 2; j++ )
  {
    a[i+j*5] = r8_uniform_01 ( seed );
  }

  return a;
}
//****************************************************************************80

double *r85_to_r8ge ( int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R85_TO_R8GE copies an R85 matrix to an R8GE matrix.
//
//  Discussion:
//
//    The R85 storage format represents a pentadiagonal matrix as a 5
//    by N array, in which each row corresponds to a diagonal, and
//    column locations are preserved.  Thus, the original matrix is
//    "collapsed" vertically into the array.
//
//  Example:
//
//    Here is how an R85 matrix of order 6 would be stored:
//
//       *   *  A13 A24 A35 A46
//       *  A12 A23 A34 A45 A56
//      A11 A22 A33 A44 A55 A66
//      A21 A32 A43 A54 A65  *
//      A31 A42 A53 A64  *   *
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 September 2003
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
//    Input, double A[5*N], the nonzero diagonals of the matrix.
//
//    Output, double R85_TO_R8GE[N*N], the pentadiagonal matrix.
//
{
  double *b;
  int i;
  int j;

  b = r8vec_zeros_new ( n * n );

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < n; i++ )
    {
      if ( j == i - 2 )
      {
        b[i+j*5] = a[0+i*5];
      }
      else if ( j == i - 1 )
      {
        b[i+j*5] = a[1+i*5];
      }
      else if ( i == j )
      {
        b[i+j*5] = a[2+i*5];
      }
      else if ( j == i + 1 )
      {
        b[i+j*5] = a[3+i*5];
      }
      else if ( j == i + 2 )
      {
        b[i+j*5] = a[4+i*5];
      }
      else
      {
        b[i+j*5] = 0.0;
      }
    }
  }
  return b;
}
//****************************************************************************80

double *r85_zeros ( int n )

//****************************************************************************80
//
//  Purpose:
//
//    R85_ZEROS zeros an R85 matrix.
//
//  Discussion:
//
//    The R85 storage format represents a pentadiagonal matrix as a 5
//    by N array, in which each row corresponds to a diagonal, and
//    column locations are preserved.  Thus, the original matrix is
//    "collapsed" vertically into the array.
//
//  Example:
//
//    Here is how an R85 matrix of order 6 would be stored:
//
//       *   *  A13 A24 A35 A46
//       *  A12 A23 A34 A45 A56
//      A11 A22 A33 A44 A55 A66
//      A21 A32 A43 A54 A65  *
//      A31 A42 A53 A64  *   *
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
//    Input, int N, the order of the linear system.
//
//    Output, double R85_ZERO[5*N], the R85 matrix.
//
{
  double *a;

  a = r8vec_zeros_new ( 5 * n );

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
