# include <cmath>
# include <cstdlib>
# include <ctime>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8pp.hpp"

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

double r8pp_det ( int n, double a_lu[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8PP_DET computes the determinant of a matrix factored by R8PP_FA.
//
//  Discussion:
//
//    The R8PP storage format is appropriate for a symmetric positive
//    definite matrix.  Only the upper triangle of the matrix is stored,
//    by successive partial columns, in an array of length (N*(N+1))/2,
//    which contains (A11,A12,A22,A13,A23,A33,A14,...,ANN)  
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    16 June 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A_LU[(N*(N+1))/2], the LU factors from R8PP_FA.
//
//    Output, double R8PP_DET, the determinant of A.
//
{
  double det;
  int i;
  int k;

  det = 1.0;

  k = 0;
  for ( i = 0; i < n; i++ )
  {
    det = det * a_lu[k];
    k = k + i + 2;
  }

  det = det * det;

  return det;
}
//****************************************************************************80

double *r8pp_dif2 ( int n )

//****************************************************************************80
//
//  Purpose:
//
//    R8PP_DIF2 sets up an R8PP second difference matrix.
//
//  Discussion:
//
//    The R8PP storage format is appropriate for a symmetric positive
//    definite matrix.  Only the upper triangle of the matrix is stored,
//    by successive partial columns, in an array of length (N*(N+1))/2,
//    which contains (A11,A12,A22,A13,A23,A33,A14,...,ANN)  
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    14 June 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Output, double R8PP_DIF2((N*(N+1))/2), the R8PP matrix.
//
{
  double *a;
  int i;
  int j;
  int k;

  a = new double[(n*(n+1))/2];

  k = 0;
  for (j = 0; j < n; j++ )
  {
    for ( i = 0; i < j - 1; i++ )
    {
      a[k] = 0.0;
      k = k + 1;
    }
    if ( 0 < j )
    {
      a[k] = - 1.0;
      k = k + 1;
    }
    a[k] = 2.0;
    k = k + 1;
  }

  return a;
}
//****************************************************************************80

double *r8pp_fa ( int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8PP_FA factors an R8PP matrix.
//
//  Discussion:
//
//    The R8PP storage format is appropriate for a symmetric positive
//    definite matrix.  Only the upper triangle of the matrix is stored,
//    by successive partial columns, in an array of length (N*(N+1))/2,
//    which contains (A11,A12,A22,A13,A23,A33,A14,...,ANN)  
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 February 2004
//
//  Author:
//
//    Original FORTRAN77 version by Dongarra, Bunch, Moler, Stewart.
//    C++ version by John Burkardt.
//
//  Reference:
//
//    Jack Dongarra, Jim Bunch, Cleve Moler, Pete Stewart,
//    LINPACK User's Guide,
//    SIAM, (Society for Industrial and Applied Mathematics),
//    3600 University City Science Center,
//    Philadelphia, PA, 19104-2688.
//    ISBN 0-89871-172-X
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A[(N*(N+1))/2], the R8PP matrix.
//
//    Output, double R8PP_FA[(N*(N+1))/2], an upper triangular matrix R, stored 
//    in packed form, so that A = R'*R.
//
{
  double *b;
  int i;
  int j;
  int jj;
  int k;
  int kj;
  int kk;
  double s;
  double t;

  b = new double[(n*(n+1))/2];

  for ( i = 0; i < (n*(n+1))/2; i++ )
  {
    b[i] = a[i];
  }

  jj = 0;

  for ( j = 1; j <= n; j++ )
  {
    s = 0.0;
    kj = jj;
    kk = 0;

    for ( k = 1; k <= j-1; k++ )
    {
      kj = kj + 1;
      t = b[kj-1];
      for ( i = 1; i <= k-1; i++ )
      {
        t = t - b[kk+i-1] * b[jj+i-1];
      }
      kk = kk + k;
      t = t / b[kk-1];
      b[kj-1] = t;
      s = s + t * t;
    }

    jj = jj + j;
    s = b[jj-1] - s;

    if ( s <= 0.0 )
    {
      return NULL;
    }

    b[jj-1] = sqrt ( s );
  }

  return b;
}
//****************************************************************************80

double *r8pp_indicator ( int n )

//****************************************************************************80
//
//  Purpose:
//
//    R8PP_INDICATOR sets up an R8PP indicator matrix.
//
//  Discussion:
//
//    The R8PP storage format is appropriate for a symmetric positive
//    definite matrix.  Only the upper triangle of the matrix is stored,
//    by successive partial columns, in an array of length (N*(N+1))/2,
//    which contains (A11,A12,A22,A13,A23,A33,A14,...,ANN)  
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    16 February 2013
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
//    Output, double R8PP_INDICATOR((N*(N+1))/2), the R8PP matrix.
//
{
  double *a;
  int fac;
  int i;
  int j;
  int k;

  a = new double[(n*(n+1))/2];

  fac = i4_power ( 10, i4_log_10 ( n ) + 1 );

  k = 0;
  for ( j = 1; j <= n; j++ )
  {
    for ( i = 1; i <= j; i++ )
    {
      a[k] = ( double ) ( fac * i + j );
      k = k + 1;
    }
  }

  return a;
}
//****************************************************************************80

double *r8pp_mv ( int n, double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8PP_MV multiplies an R8PP matrix times a vector.
//
//  Discussion:
//
//    The R8PP storage format is appropriate for a symmetric positive
//    definite matrix.  Only the upper triangle of the matrix is stored,
//    by successive partial columns, in an array of length (N*(N+1))/2,
//    which contains (A11,A12,A22,A13,A23,A33,A14,...,ANN)  
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    04 October 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A[(N*(N+1))/2], the R8PP matrix.
//
//    Input, double X[N], the vector to be multiplied by A.
//
//    Output, double R8PP_MV[N], the product A * x.
//
{
  double *b;
  int i;
  int j;
  int k;

  b = r8vec_zeros_new ( n );

  for ( i = 0; i < n; i++ )
  {
    for ( j = 0; j < i; j++ )
    {
      k = j + ( i * ( i + 1 ) ) / 2;
      b[i] = b[i] + a[k] * x[j];
    }
    for ( j = i; j < n; j++ )
    {
      k = i + ( j * ( j + 1 ) ) / 2;
      b[i] = b[i] + a[k] * x[j];
    }
  }

  return b;
}
//****************************************************************************80

void r8pp_print ( int n, double a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8PP_PRINT prints an R8PP matrix.
//
//  Discussion:
//
//    The R8PP storage format is appropriate for a symmetric positive
//    definite matrix.  Only the upper triangle of the matrix is stored,
//    by successive partial columns, in an array of length (N*(N+1))/2,
//    which contains (A11,A12,A22,A13,A23,A33,A14,...,ANN)  
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
//    Input, double A[(N*(N+1))/2], the R8PP matrix.
//
//    Input, string TITLE, a title.
//
{
  r8pp_print_some ( n, a, 1, 1, n, n, title );

  return;
}
//****************************************************************************80

void r8pp_print_some ( int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8PP_PRINT_SOME prints some of an R8PP matrix.
//
//  Discussion:
//
//    The R8PP storage format is appropriate for a symmetric positive
//    definite matrix.  Only the upper triangle of the matrix is stored,
//    by successive partial columns, in an array of length (N*(N+1))/2,
//    which contains (A11,A12,A22,A13,A23,A33,A14,...,ANN)  
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
//    Input, double A[(N*(N+1))/2], the R8PP matrix.
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
    i2hi = i4_min ( ihi, n );

    for ( i = i2lo; i <= i2hi; i++ )
    {
      cout << setw(6) << i << "  ";
//
//  Print out (up to) 5 entries in row I, that lie in the current strip.
//
      for ( j = j2lo; j <= j2hi; j++ )
      {
        if ( i <= j )
        {
          aij = a[i-1+(j*(j-1))/2];
        }
        else
        {
          aij = a[j-1+(i*(i-1))/2];
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

double *r8pp_random ( int n, int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    R8PP_RANDOM randomizes an R8PP matrix.
//
//  Discussion:
//
//    The R8PP storage format is appropriate for a symmetric positive
//    definite matrix.  Only the upper triangle of the matrix is stored,
//    by successive partial columns, in an array of length (N*(N+1))/2,
//    which contains (A11,A12,A22,A13,A23,A33,A14,...,ANN)  
//
//    The matrix is computed by setting a "random" upper triangular
//    Cholesky factor R, and then computing A = R'*R.
//    The randomness is limited by the fact that all the entries of
//    R will be between 0 and 1.  A truly random R is only required
//    to have positive entries on the diagonal.
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
//    Output, double R8PP_RANDOM[(N*(N+1))/2], the R8PP matrix.
//
{
  double *a;
  int i;
  int ii;
  int ij;
  int ik;
  int j;
  int k;
  int kj;

  a = new double[(n*(n+1))/2];

  for ( i = 0; i < (n*(n+1))/2; i++ )
  {
    a[i] = 0.0;
  }

  for ( i = n; 1 <=i; i-- )
  {
//
//  Set row I of R.
//
    for ( j = i; j <= n; j++ )
    {
      ij = i + ( j * ( j - 1 ) ) / 2;
      a[ij-1] = r8_uniform_01 ( seed );
    }
//
//  Consider element J of row I, last to first.
//
    for ( j = n; i <= j; j-- )
    {
//
//  Add multiples of row I to lower elements of column J.
//
      ij = i + ( j * ( j - 1 ) ) / 2;

      for ( k = i+1; k <= j; k++ )
      {
        kj = k + (j*(j-1))/2;
        ik = i + (k*(k-1))/2;
        a[kj-1] = a[kj-1] + a[ik-1] * a[ij-1];
      }
//
//  Reset element J.
//
      ii = i + (i*(i-1))/2;
      a[ij-1] = a[ii-1] * a[ij-1];
    }
  }

  return a;
}
//****************************************************************************80

double *r8pp_sl ( int n, double a_lu[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8PP_SL solves an R8PP system factored by R8PP_FA.
//
//  Discussion:
//
//    The R8PP storage format is appropriate for a symmetric positive
//    definite matrix.  Only the upper triangle of the matrix is stored,
//    by successive partial columns, in an array of length (N*(N+1))/2,
//    which contains (A11,A12,A22,A13,A23,A33,A14,...,ANN)  
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    04 October 2003
//
//  Author:
//
//    Original FORTRAN77 version by Dongarra, Bunch, Moler, Stewart.
//    C++ version by John Burkardt.
//
//  Reference:
//
//    Jack Dongarra, Jim Bunch, Cleve Moler, Pete Stewart,
//    LINPACK User's Guide,
//    SIAM, (Society for Industrial and Applied Mathematics),
//    3600 University City Science Center,
//    Philadelphia, PA, 19104-2688.
//    ISBN 0-89871-172-X
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A_LU[(N*(N+1))/2], the LU factors from R8PP_FA.
//
//    Input, double B[N], the right hand side.
//
//    Output, double R8PP_SL[N], the solution.
//
{
  int i;
  int k;
  int kk;
  double t;
  double *x;

  x = new double[n];

  kk = 0;

  for ( k = 1; k <= n; k++ )
  {
    t = 0.0;
    for ( i = 0; i < k-1; i++ )
    {
      t = t + a_lu[kk+i] * x[i];
    }
    kk = kk + k;
    x[k-1] = ( b[k-1] - t ) / a_lu[kk-1];
  }

  for ( k = n; 1 <= k; k-- )
  {
    x[k-1] = x[k-1] / a_lu[kk-1];
    kk = kk - k;
    t = -x[k-1];
    for ( i = 0; i < k-1; i++ )
    {
      x[i] = x[i] + t * a_lu[kk+i];
    }
  }

  return x;
}
//****************************************************************************80

double *r8pp_to_r8ge ( int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8PP_TO_R8GE copies an R8PP matrix to an R8GE matrix.
//
//  Discussion:
//
//    The R8PP storage format is appropriate for a symmetric positive
//    definite matrix.  Only the upper triangle of the matrix is stored,
//    by successive partial columns, in an array of length (N*(N+1))/2,
//    which contains (A11,A12,A22,A13,A23,A33,A14,...,ANN)  
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    04 October 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, double A[(N*(N+1))/2], the R8PP matrix.
//
//    Output, double R8PP_TO_R8GE[N*N], the R8GE matrix.
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
    for ( j = 0; j < n; j++ )
    {
      if ( i <= j )
      {
        b[i+j*n] = a[i+(j*(j+1))/2];
      }
      else
      {
        b[i+j*n] = a[j+(i*(i+1))/2];
      }
    }
  }

  return b;
}
//****************************************************************************80

double *r8pp_zeros ( int n )

//****************************************************************************80
//
//  Purpose:
//
//    R8PP_ZEROS zeros an R8PP matrix.
//
//  Discussion:
//
//    The R8PP storage format is appropriate for a symmetric positive
//    definite matrix.  Only the upper triangle of the matrix is stored,
//    by successive partial columns, in an array of length (N*(N+1))/2,
//    which contains (A11,A12,A22,A13,A23,A33,A14,...,ANN)  
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
//    Input, int N, the number of rows and columns of the matrix.
//    N must be positive.
//
//    Output, double R8PP_ZERO[(N*(N+1))/2], the R8PP matrix.
//
{
  double *a;
  int k;

  a = new double[(n*(n+1))/2];

  for ( k = 0; k < (n*(n+1))/2; k++ )
  {
    a[k] = 0.0;
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
