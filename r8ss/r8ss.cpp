# include <cmath>
# include <cstdlib>
# include <ctime>
# include <fstream>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8ss.hpp"

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

  for ( i = 0; i <= n - 1; i++ ) 
  {
    cout << setw(6) << i + 1 << "  " 
         << setw(6) << a[i]  << "\n";
  }

  return;
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

void r8ss_dif2 ( int n, int &na, int diag[], double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8SS_DIF2 sets up an R8SS second difference matrix.
//
//  Discussion:
//
//    The R8SS storage format is used for real symmetric skyline matrices.
//    This storage is appropriate when the nonzero entries of the
//    matrix are generally close to the diagonal, but the number
//    of nonzeroes above each diagonal varies in an irregular fashion.
//
//    In this case, the strategy is essentially to assign column J
//    its own bandwidth, and store the strips of nonzeros one after
//    another.   Note that what's important is the location of the
//    furthest nonzero from the diagonal.  A slot will be set up for
//    every entry between that and the diagonal, whether or not
//    those entries are zero.
//
//    A skyline matrix can be Gauss-eliminated without disrupting
//    the storage scheme, as long as no pivoting is required.
//
//    The user must set aside ( N * ( N + 1 ) ) / 2 entries for the array,
//    although the actual storage needed will generally be about half of
//    that.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    01 July 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Output, int &NA, the dimension of the array A, which for
//    this special case will 2*N-1.
//
//    Output, int DIAG[N], the indices in A of the N diagonal
//    elements.
//
//    Output, double A[2*N-1], the R8SS matrix.
//
{
  int j;

  na = 0;

  for ( j = 0; j < n; j++ )
  {
    if ( 0 < j )
    {
      a[na] = -1.0;
      na = na + 1;
    }
    a[na] = 2.0;
    diag[j] = na;
    na = na + 1;
  }

  return;
}
//****************************************************************************80

bool r8ss_error ( int diag[], int n, int na )

//****************************************************************************80
//
//  Purpose:
//
//    R8SS_ERROR checks dimensions for an R8SS matrix.
//
//  Discussion:
//
//    The R8SS storage format is used for real symmetric skyline matrices.
//    This storage is appropriate when the nonzero entries of the
//    matrix are generally close to the diagonal, but the number
//    of nonzeroes above each diagonal varies in an irregular fashion.
//
//    In this case, the strategy is essentially to assign column J
//    its own bandwidth, and store the strips of nonzeros one after
//    another.   Note that what's important is the location of the
//    furthest nonzero from the diagonal.  A slot will be set up for
//    every entry between that and the diagonal, whether or not
//    those entries are zero.
//
//    A skyline matrix can be Gauss-eliminated without disrupting
//    the storage format, as long as no pivoting is required.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    12 September 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIAG[N], the indices in A of the N diagonal elements.
//
//    Input, int N, the order of the matrix.
//    N must be positive.
//
//    Input, int NA, the dimension of the array A.
//    NA must be at least N.
//
//    Output, bool R8SS_ERROR, is TRUE if an error was detected.
//
{
  int i;

  if ( n < 1 )
  {
    cout << "\n";
    cout << "R8SS_ERROR - Illegal N = " << n << "\n";
    return true;
  }

  if ( na < n )
  {
    cout << "\n";
    cout << "R8SS_ERROR - Illegal NA < N = " << n << "\n";
    return true;
  }

  if ( diag[0] != 1 )
  {
    cout << "\n";
    cout << "R8SS_ERROR - DIAG[0] != 1.\n";
    return true;
  }

  for ( i = 0; i < n - 1; i++ )
  { 
    if ( diag[i+1] <= diag[i] ) 
    {
      cout << "\n";
      cout << "R8SS_ERROR - DIAG[I+1] <= DIAG[I].\n";
      return true;
    }
  }

  if ( na < diag[n-1] ) 
  {
    cout << "\n";
    cout << "R8SS_ERROR - NA < DIAG[N-1].\n";
    return true;
  }

  return false;
}
//****************************************************************************80

double *r8ss_indicator ( int n, int &na, int diag[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8SS_INDICATOR sets up an R8SS indicator matrix.
//
//  Discussion:
//
//    The R8SS storage format is used for real symmetric skyline matrices.
//    This storage is appropriate when the nonzero entries of the
//    matrix are generally close to the diagonal, but the number
//    of nonzeroes above each diagonal varies in an irregular fashion.
//
//    In this case, the strategy is essentially to assign column J
//    its own bandwidth, and store the strips of nonzeros one after
//    another.   Note that what's important is the location of the
//    furthest nonzero from the diagonal.  A slot will be set up for
//    every entry between that and the diagonal, whether or not
//    those entries are zero.
//
//    A skyline matrix can be Gauss-eliminated without disrupting
//    the storage format, as long as no pivoting is required.
//
//    The user must set aside ( N * ( N + 1 ) ) / 2 entries for the array,
//    although the actual storage needed will generally be about half of
//    that.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    01 July 2016
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
//    Output, int &NA, the dimension of the array A, which for this
//    special case will be the maximum, ( N * ( N + 1 ) ) / 2.
//
//    Output, int DIAG[N], the indices in A of the N diagonal elements.
//
//    Output, double R8SS_INDICATOR[(N*(N+1))/2], the R8SS matrix.
//
{
  double *a;
  int fac;
  int i;
  int j;

  a = r8vec_zeros_new ( ( n * ( n + 1 ) ) / 2 );

  fac = i4_power ( 10, i4_log_10 ( n ) + 1 );

  na = 0;

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i <= j; i++ )
    {
      a[na] = ( double ) ( fac * ( i + 1 ) + ( j + 1 ) );
      if ( i == j )
      {
        diag[j] = na;
      }
      na = na + 1;
    }
  }

  return a;
}
//****************************************************************************80

double *r8ss_mv ( int n, int na, int diag[], double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8SS_MV multiplies an R8SS matrix times a vector.
//
//  Discussion:
//
//    The R8SS storage format is used for real symmetric skyline matrices.
//    This storage is appropriate when the nonzero entries of the
//    matrix are generally close to the diagonal, but the number
//    of nonzeroes above each diagonal varies in an irregular fashion.
//
//    In this case, the strategy is essentially to assign column J
//    its own bandwidth, and store the strips of nonzeros one after
//    another.   Note that what's important is the location of the
//    furthest nonzero from the diagonal.  A slot will be set up for
//    every entry between that and the diagonal, whether or not
//    those entries are zero.
//
//    A skyline matrix can be Gauss-eliminated without disrupting
//    the storage format, as long as no pivoting is required.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    01 July 2016
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
//    Input, int NA, the dimension of the array A.
//    NA must be at least N.
//
//    Input, int DIAG[N], the indices in A of the N diagonal elements.
//
//    Input, double A[NA], the R8SS matrix.
//
//    Input, double X[N], the vector to be multiplied by A.
//
//    Output, double R8SS_MV[N], the product vector A*x.
//
{
  double *b;
  int diagold;
  int i;
  int ilo;
  int j;
  int k;

  b = r8vec_zeros_new ( n );

  diagold = -1;
  k = 0;

  for ( j = 0; j < n; j++ )
  {
    ilo = j + 1 - ( diag[j] - diagold );

    for ( i = ilo; i < j; i++ )
    {
      b[i] = b[i] + a[k] * x[j];
      b[j] = b[j] + a[k] * x[i];
      k = k + 1;
    }

    b[j] = b[j] + a[k] * x[j];
    k = k + 1;
    diagold = diag[j];
  }

  return b;
}
//****************************************************************************80

void r8ss_print ( int n, int na, int diag[], double a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8SS_PRINT prints an R8SS matrix.
//
//  Discussion:
//
//    The R8SS storage format is used for real symmetric skyline matrices.
//    This storage is appropriate when the nonzero entries of the
//    matrix are generally close to the diagonal, but the number
//    of nonzeroes above each diagonal varies in an irregular fashion.
//
//    In this case, the strategy is essentially to assign column J
//    its own bandwidth, and store the strips of nonzeros one after
//    another.   Note that what's important is the location of the
//    furthest nonzero from the diagonal.  A slot will be set up for
//    every entry between that and the diagonal, whether or not
//    those entries are zero.
//
//    A skyline matrix can be Gauss-eliminated without disrupting
//    the storage format, as long as no pivoting is required.
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
//
//    Input, int NA, the dimension of the array A.
//
//    Input, int DIAG[N], the indices in A of the N diagonal elements.
//
//    Input, double A[NA], the R8SS matrix.
//
//    Input, string TITLE, a title.
//
{
  r8ss_print_some ( n, na, diag, a, 0, 0, n - 1, n - 1, title );

  return;
}
//****************************************************************************80

void r8ss_print_some ( int n, int na, int diag[], double a[], int ilo, int jlo, 
  int ihi, int jhi, string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8SS_PRINT_SOME prints some of an R8SS matrix.
//
//  Discussion:
//
//    The R8SS storage format is used for real symmetric skyline matrices.
//    This storage is appropriate when the nonzero entries of the
//    matrix are generally close to the diagonal, but the number
//    of nonzeroes above each diagonal varies in an irregular fashion.
//
//    In this case, the strategy is essentially to assign column J
//    its own bandwidth, and store the strips of nonzeros one after
//    another.   Note that what's important is the location of the
//    furthest nonzero from the diagonal.  A slot will be set up for
//    every entry between that and the diagonal, whether or not
//    those entries are zero.
//
//    A skyline matrix can be Gauss-eliminated without disrupting
//    the storage format, as long as no pivoting is required.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    01 July 2016
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
//    Input, int NA, the dimension of the array A.
//
//    Input, int DIAG[N], the indices in A of the N diagonal elements.
//
//    Input, double A[NA], the R8SS matrix.
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
  int ij;
  int ijm1;
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
      cout << setw(4) << i << "  ";
//
//  Print out (up to) 5 entries in row I, that lie in the current strip.
//
      for ( j = j2lo; j <= j2hi; j++ )
      {
        aij = 0.0;

        if ( j < i )
        {
          if ( i == 0 )
          {
            ijm1 = 0;
          }
          else
          {
            ijm1 = diag[i-1];
          }
          ij = diag[i];
          if ( ijm1 < ij + j - i )
          {
            aij = a[ij+j-i];
          }
        }
        else if ( j == i )
        {
          ij = diag[j];
          aij = a[ij];
        }
        else if ( i < j )
        {
          if ( j == 0 )
          {
            ijm1 = 0;
          }
          else
          {
            ijm1 = diag[j-1];
          }
          ij = diag[j];
          if ( ijm1 < ij + i - j )
          {
            aij = a[ij+i-j];
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

void r8ss_random ( int n, int &na, int diag[], double a[], int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    R8SS_RANDOM randomizes an R8SS matrix.
//
//  Discussion:
//
//    The R8SS storage format is used for real symmetric skyline matrices.
//    This storage is appropriate when the nonzero entries of the
//    matrix are generally close to the diagonal, but the number
//    of nonzeroes above each diagonal varies in an irregular fashion.
//
//    In this case, the strategy is essentially to assign column J
//    its own bandwidth, and store the strips of nonzeros one after
//    another.   Note that what's important is the location of the
//    furthest nonzero from the diagonal.  A slot will be set up for
//    every entry between that and the diagonal, whether or not
//    those entries are zero.
//
//    A skyline matrix can be Gauss-eliminated without disrupting
//    the storage format, as long as no pivoting is required.
//
//    The user must set aside ( N * ( N + 1 ) ) / 2 entries for the array,
//    although the actual storage needed will generally be about half of
//    that.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    01 July 2016
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
//    Output, int *NA, the dimension of the array A.
//    NA will be at least N and no greater than ( N * ( N + 1 ) ) / 2.
//
//    Output, int DIAG[N], the indices in A of the N diagonal elements.
//
//    Output, double A[(N*(N+1))/2], the R8SS matrix.
//
//    Input/output, int &SEED, a seed for the random number generator.
//
{
  int diagold;
  int i;
  int ilo;
  int j;
  int k;

  na = 0;
//
//  Set the values of DIAG.
//
  diag[0] = 0;
  na = 1;

  for ( j = 1; j < n; j++ )
  {
    k = i4_uniform_ab ( 1, j + 1, seed );
    diag[j] = diag[j-1] + k;
    na = na + k;
  }
//
//  Now set the values of A.
//
  diagold = -1;
  k = 0;

  for ( j = 0; j < n; j++ )
  {
    ilo = j + 1 - ( diag[j] - diagold );

    for ( i = ilo; i <= j; i++ )
    {
      a[k] = r8_uniform_01 ( seed );
      k = k + 1;
    }
    diagold = diag[j];
  }

  return;
}
//****************************************************************************80

double *r8ss_to_r8ge ( int n, int na, int diag[], double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8SS_TO_R8GE copies an R8SS matrix to an R8GE matrix.
//
//  Discussion:
//
//    The R8SS storage format is used for real symmetric skyline matrices.
//    This storage is appropriate when the nonzero entries of the
//    matrix are generally close to the diagonal, but the number
//    of nonzeroes above each diagonal varies in an irregular fashion.
//
//    In this case, the strategy is essentially to assign column J
//    its own bandwidth, and store the strips of nonzeros one after
//    another.   Note that what's important is the location of the
//    furthest nonzero from the diagonal.  A slot will be set up for
//    every entry between that and the diagonal, whether or not
//    those entries are zero.
//
//    A skyline matrix can be Gauss-eliminated without disrupting
//    the storage format, as long as no pivoting is required.
//
//  Example:
//
//    11   0  13  0 15
//     0  22  23  0  0
//    31  32  33 34  0
//     0   0  43 44  0
//    51   0   0  0 55
//
//    A = ( 11 | 22 | 13, 23, 33 | 34, 44 | 15, 0, 0, 0, 55 )
//    NA = 12
//    DIAG = ( 0, 1, 4, 6, 11 )
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    01 July 2016
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
//    Input, int NA, the dimension of the array A.
//    NA must be at least N.
//
//    Input, int DIAG[N], the indices in A of the N diagonal elements.
//
//    Input, double A[NA], the R8SS matrix.
//
//    Output, double R8SS_TO_R8GE[N*N], the R8GE matrix.
//
{
  double *b;
  int diagold;
  int i;
  int ilo;
  int j;
  int k;

  b = r8vec_zeros_new ( n * n );

  diagold = -1;
  k = 0;

  for ( j = 0; j < n; j++ )
  {
    ilo = j + 1 - ( diag[j] - diagold );

    for ( i = ilo; i < j; i++ )
    {
      b[i+j*n] = a[k];
      b[j+i*n] = a[k];
      k = k + 1;
    }

    b[j+j*n] = a[k];
    k = k + 1;

    diagold = diag[j];
  }

  return b;
}
//****************************************************************************80

double *r8ss_zeros ( int n, int na, int diag[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8SS_ZEROS zeros an R8SS matrix.
//
//  Discussion:
//
//    The R8SS storage format is used for real symmetric skyline matrices.
//    This storage is appropriate when the nonzero entries of the
//    matrix are generally close to the diagonal, but the number
//    of nonzeroes above each diagonal varies in an irregular fashion.
//
//    In this case, the strategy is essentially to assign column J
//    its own bandwidth, and store the strips of nonzeros one after
//    another.   Note that what's important is the location of the
//    furthest nonzero from the diagonal.  A slot will be set up for
//    every entry between that and the diagonal, whether or not
//    those entries are zero.
//
//    A skyline matrix can be Gauss-eliminated without disrupting
//    the storage format, as long as no pivoting is required.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    01 July 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, int NA, the dimension of the array A.
//
//    Output, int DIAG[N], the indices in A of the N diagonal elements.
//
//    Output, double R8SS_ZERO[NA], the R8SS matrix.
//
{
  double *a;
  int i;
  int k;

  a = r8vec_zeros_new ( na );

  k = -1;
  for ( i = 0; i < n; i++ )
  {
    k = k + i + 1;
    diag[i] = k;
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

  for ( i = 0; i <= n - 1; i++ ) 
  {
    a[i] = ( double ) ( i + 1 );
  }

  return a;
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
