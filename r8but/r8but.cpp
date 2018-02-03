# include <cmath>
# include <cstdlib>
# include <ctime>
# include <fstream>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8but.hpp"

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

double r8but_det ( int n, int mu, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8BUT_DET computes the determinant of an R8BUT matrix.
//
//  Discussion:
//
//    The R8BUT storage format is used for a banded upper triangular matrix.
//    The matrix is assumed to be zero above the MU-th superdiagonal.
//    The matrix is stored in an MU+1 by N array.
//    Columns are preserved.
//
//    The diagonal is stored in row MU+1 of the array.
//    The first superdiagonal in row MU, columns 2 through N.
//    The second superdiagonal in row MU-1, columns 3 through N.
//    The MU-th superdiagonal in row 1, columns MU+1 through N.
//
//  Example:
//
//    N = 5, MU = 2
//
//    A11 A12 A13   0   0
//      0 A22 A23 A24   0
//      0   0 A33 A34 A35
//      0   0   0 A44 A45
//      0   0   0   0 A55
//                --- ---
//                    ---
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    12 October 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, int MU, the upper bandwidth.
//
//    Input, double A[(MU+1)*N], the R8BUT matrix.
//
//    Output, double R8BUT_DET, the determinant of A.
//
{
  double det;
  int j;

  det = 1.0;
  for ( j = 1; j <= n; j++ )
  {
    det = det * a[(mu+1-1)+(j-1)*(mu+1)];
  }

  return det;
}
//****************************************************************************80

double *r8but_indicator ( int n, int mu )

//****************************************************************************80
//
//  Purpose:
//
//    R8BUT_INDICATOR sets up an R8BUT indicator matrix.
//
//  Discussion:
//
//    The R8BUT storage format is used for a banded upper triangular matrix.
//    The matrix is assumed to be zero above the MU-th superdiagonal.
//    The matrix is stored in an MU+1 by N array.
//    Columns are preserved.
//
//    The diagonal is stored in row MU+1 of the array.
//    The first superdiagonal in row MU, columns 2 through N.
//    The second superdiagonal in row MU-1, columns 3 through N.
//    The MU-th superdiagonal in row 1, columns MU+1 through N.
//
//  Example:
//
//    N = 5, MU = 2
//
//    A11 A12 A13   0   0
//      0 A22 A23 A24   0
//      0   0 A33 A34 A35
//      0   0   0 A44 A45
//      0   0   0   0 A55
//                --- ---
//                    ---
//
//    The indicator matrix is stored as:
//
//       0   0  13  24  35
//       0  12  23  34  45
//      11  22  33  44  55
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    12 October 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of columns of the matrix.
//
//    Input, int MU, the upper bandwidth.
//
//    Output, double A[(MU+1)*N], the R8BUT matrix.
//
{
  double *a;
  int fac;
  int i;
  int j;

  a = new double[(mu+1)*n];

  fac = i4_power ( 10, i4_log_10 ( n ) + 1 );

  for ( i = 1; i <= n; i++ )
  {
    for ( j = i; j <= i4_min ( n, i + mu ); j++ )
    {
      a[i-j+mu+1-1+(j-1)*(mu+1)] = ( double ) ( fac * i + j );
    }
  }

  for ( i = 1; i <= mu; i++ )
  {
    for ( j = 1; j <= mu+1-i; j++ )
    {
      a[i-1+(j-1)*(mu+1)] = 0.0;
    }
  }

  return a;
}
//****************************************************************************80

double *r8but_mtv ( int n, int mu, double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8BUT_MTV multiplies a vector by an R8BUT matrix.
//
//  Discussion:
//
//    The R8BUT storage format is used for a banded upper triangular matrix.
//    The matrix is assumed to be zero above the MU-th superdiagonal.
//    The matrix is stored in an MU+1 by N array.
//    Columns are preserved.
//
//    The diagonal is stored in row MU+1 of the array.
//    The first superdiagonal in row MU, columns 2 through N.
//    The second superdiagonal in row MU-1, columns 3 through N.
//    The MU-th superdiagonal in row 1, columns MU+1 through N.
//
//  Example:
//
//    N = 5, MU = 2
//
//    A11 A12 A13   0   0
//      0 A22 A23 A24   0
//      0   0 A33 A34 A35
//      0   0   0 A44 A45
//      0   0   0   0 A55
//                --- ---
//                    ---
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    12 October 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, int MU, the upper bandwidth.
//
//    Input, double A[(MU+1)*N], the R8BUT matrix.
//
//    Input, double X[N], the vector to be multiplied by A.
//
//    Output, double R8BUT_MTV(N), the product X*A.
//
{
  double *b;
  int i;
  int ilo;
  int j;

  b = r8vec_zeros_new ( n );

  for ( i = 1; i <= n; i++ )
  {
    ilo = i4_max ( 1, i - mu );
    for ( j = ilo; j <= i; j++ )
    {
      b[i-1] = b[i-1] + x[j-1] * a[j-i+mu+(i-1)*(mu+1)];
    }
  }

  return b;
}
//****************************************************************************80

double *r8but_mv ( int n, int mu, double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8BUT_MV multiplies an R8BUT matrix times a vector.
//
//  Discussion:
//
//    The R8BUT storage format is used for a banded upper triangular matrix.
//    The matrix is assumed to be zero above the MU-th superdiagonal.
//    The matrix is stored in an MU+1 by N array.
//    Columns are preserved.
//
//    The diagonal is stored in row MU+1 of the array.
//    The first superdiagonal in row MU, columns 2 through N.
//    The second superdiagonal in row MU-1, columns 3 through N.
//    The MU-th superdiagonal in row 1, columns MU+1 through N.
//
//  Example:
//
//    N = 5, MU = 2
//
//    A11 A12 A13   0   0
//      0 A22 A23 A24   0
//      0   0 A33 A34 A35
//      0   0   0 A44 A45
//      0   0   0   0 A55
//                --- ---
//                    ---
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    12 October 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, int MU, the upper bandwidth.
//
//    Input, double A[(MU+1)*N], the R8BUT matrix.
//
//    Input, double X[N], the vector to be multiplied by A.
//
//    Output, double R8BUT_MV[N], the product A * x.
//
{
  double *b;
  int i;
  int j;

  b = r8vec_zeros_new ( n );

  for ( i = 1; i <= n; i++ )
  {
    for ( j = i; j <= i4_min ( n, i + mu ); j++ )
    {
      b[i-1] = b[i-1] + a[i-j+mu+1-1+(j-1)*(mu+1)] * x[j-1];
    }
  }

  return b;
}
//****************************************************************************80

void r8but_print ( int n, int mu, double a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8BUT_PRINT prints an R8BUT matrix.
//
//  Discussion:
//
//    The R8BUT storage format is used for a banded upper triangular matrix.
//    The matrix is assumed to be zero above the MU-th superdiagonal.
//    The matrix is stored in an MU+1 by N array.
//    Columns are preserved.
//
//    The diagonal is stored in row MU+1 of the array.
//    The first superdiagonal in row MU, columns 2 through N.
//    The second superdiagonal in row MU-1, columns 3 through N.
//    The MU-th superdiagonal in row 1, columns MU+1 through N.
//
//  Example:
//
//    N = 5, MU = 2
//
//    A11 A12 A13   0   0
//      0 A22 A23 A24   0
//      0   0 A33 A34 A35
//      0   0   0 A44 A45
//      0   0   0   0 A55
//                --- ---
//                    ---
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
//    Input, int MU, the upper bandwidth.
//
//    Input, double A[(MU+1)*N], the R8BUT matrix.
//
//    Input, string TITLE, a title.
//
{
  r8but_print_some ( n, mu, a, 1, 1, n, n, title );

  return;
}
//****************************************************************************80

void r8but_print_some ( int n, int mu, double a[], int ilo, int jlo, 
  int ihi, int jhi, string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8BUT_PRINT_SOME prints some of an R8BUT matrix.
//
//  Discussion:
//
//    The R8BUT storage format is used for a banded upper triangular matrix.
//    The matrix is assumed to be zero above the MU-th superdiagonal.
//    The matrix is stored in an MU+1 by N array.
//    Columns are preserved.
//
//    The diagonal is stored in row MU+1 of the array.
//    The first superdiagonal in row MU, columns 2 through N.
//    The second superdiagonal in row MU-1, columns 3 through N.
//    The MU-th superdiagonal in row 1, columns MU+1 through N.
//
//  Example:
//
//    N = 5, MU = 2
//
//    A11 A12 A13   0   0
//      0 A22 A23 A24   0
//      0   0 A33 A34 A35
//      0   0   0 A44 A45
//      0   0   0   0 A55
//                --- ---
//                    ---
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
//    Input, int MU, the upper bandwidth.
//
//    Input, double A[(MU+1)*N], the R8BUT matrix.
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
      cout << setw(7) << j << "       ";
    }

    cout << "\n";
    cout << "  Row\n";
    cout << "  ---\n";
//
//  Determine the range of the rows in this strip.
//
    i2lo = i4_max ( ilo, 1 );
    i2lo = i4_max ( i2lo, j2lo );
    i2hi = i4_min ( ihi, n );
    i2hi = i4_min ( i2hi, j2hi + mu );

    for ( i = i2lo; i <= i2hi; i++ )
    {

      cout << setw(4) << i << "  ";
//
//  Print out (up to) 5 entries in row I, that lie in the current strip.
//
      for ( j2 = 1; j2 <= inc; j2++ )
      {
        j = j2lo - 1 + j2;

        if ( i <= j && j <= i + mu )
        {
          cout << setw(12) << a[i-j+mu+1-1+(j-1)*(mu+1)] << "  ";
        }
        else
        {
          cout << "              ";
        }
      }
      cout << "\n";
    }
  }

  cout << "\n";

  return;
# undef INCX
}
//****************************************************************************80

double *r8but_random ( int n, int mu, int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    R8BUT_RANDOM randomizes an R8BUT matrix.
//
//  Discussion:
//
//    The R8BUT storage format is used for a banded upper triangular matrix.
//    The matrix is assumed to be zero above the MU-th superdiagonal.
//    The matrix is stored in an MU+1 by N array.
//    Columns are preserved.
//
//    The diagonal is stored in row MU+1 of the array.
//    The first superdiagonal in row MU, columns 2 through N.
//    The second superdiagonal in row MU-1, columns 3 through N.
//    The MU-th superdiagonal in row 1, columns MU+1 through N.
//
//  Example:
//
//    N = 5, MU = 2
//
//    A11 A12 A13   0   0
//      0 A22 A23 A24   0
//      0   0 A33 A34 A35
//      0   0   0 A44 A45
//      0   0   0   0 A55
//                --- ---
//                    ---
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    12 October 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of columns of the matrix.
//
//    Input, int MU, the upper bandwidth.
//
//    Input/output, int &SEED, a seed for the random number generator.
//
//    Output, double R8BUT_RANDOM[(MU+1)*N], the R8BUT matrix.
//
{
  double *a;
  int i;
  int j;

  a = new double[(mu+1)*n];

  for ( i = 1; i <= mu + 1; i++ )
  {
    for ( j = 1; j <= mu + 1 - i; j++ )
    {
      a[i-1+(j-1)*(mu+1)] = 0.0;
    }

    for ( j = i4_max ( 1, mu + 2 - i ); j <= n; j++ )
    {
      a[i-1+(j-1)*(mu+1)] = r8_uniform_01 ( seed );
    }

  }

  return a;
}
//****************************************************************************80

double *r8but_sl ( int n, int mu, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8BUT_SL solves A*x=b, where A is an R8BUT matrix.
//
//  Discussion:
//
//    The R8BUT storage format is used for a banded upper triangular matrix.
//    The matrix is assumed to be zero above the MU-th superdiagonal.
//    The matrix is stored in an MU+1 by N array.
//    Columns are preserved.
//
//    The diagonal is stored in row MU+1 of the array.
//    The first superdiagonal in row MU, columns 2 through N.
//    The second superdiagonal in row MU-1, columns 3 through N.
//    The MU-th superdiagonal in row 1, columns MU+1 through N.
//
//  Example:
//
//    N = 5, MU = 2
//
//    A11 A12 A13   0   0
//      0 A22 A23 A24   0
//      0   0 A33 A34 A35
//      0   0   0 A44 A45
//      0   0   0   0 A55
//                --- ---
//                    ---
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    13 October 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, int MU, the upper bandwidth.
//
//    Input, double A[(MU+1)*N], the R8BUT matrix.
//
//    Input, double B[N], the right hand side.
//
//    Output, double R8BUT_SL[N], the solution vector.
//
{
  int i;
  int ihi;
  int j;
  int jlo;
  double *x;

  x = new double[n];

  for ( i = 0; i < n; i++ )
  {
    x[i] = b[i];
  }

  for ( j = n; 1 <= j; j-- )
  {
    x[j-1] = x[j-1] / a[j-j+mu+(j-1)*(mu+1)];
    jlo = i4_max ( 1, j - mu );
    for ( i = jlo; i <= j-1; i++ )
    {
      x[i-1] = x[i-1] - a[i-j+mu+(j-1)*(mu+1)] * x[j-1];
    }
  }

  return x;
}
//****************************************************************************80

double *r8but_slt ( int n, int mu, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8BUT_SLT solves A'*x=b, where A is an R8BUT matrix.
//
//  Discussion:
//
//    The R8BUT storage format is used for a banded upper triangular matrix.
//    The matrix is assumed to be zero above the MU-th superdiagonal.
//    The matrix is stored in an MU+1 by N array.
//    Columns are preserved.
//
//    The diagonal is stored in row MU+1 of the array.
//    The first superdiagonal in row MU, columns 2 through N.
//    The second superdiagonal in row MU-1, columns 3 through N.
//    The MU-th superdiagonal in row 1, columns MU+1 through N.
//
//  Example:
//
//    N = 5, MU = 2
//
//    A11 A12 A13   0   0
//      0 A22 A23 A24   0
//      0   0 A33 A34 A35
//      0   0   0 A44 A45
//      0   0   0   0 A55
//                --- ---
//                    ---
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    13 October 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//
//    Input, int MU, the upper bandwidth.
//
//    Input, double A[(MU+1)*N], the R8BUT matrix.
//
//    Input, double B[N], the right hand side.
//
//    Output, double R8BUT_SLT[N], the solution vector.
//
{
  int i;
  int ihi;
  int j;
  int jlo;
  double *x;

  x = new double[n];

  for ( i = 0; i < n; i++ )
  {
    x[i] = b[i];
  }

  for ( j = 1; j <= n; j++ )
  {
    x[j-1] = x[j-1] / a[j-j+mu+(j-1)*(mu+1)];
    ihi = i4_min ( n, j + mu );
    for ( i = j + 1; i <= ihi; i++ )
    {
      x[i-1] = x[i-1] - a[j-i+mu+(i-1)*(mu+1)] * x[j-1];
    }
  }

  return x;
}
//****************************************************************************80

double *r8but_to_r8ge ( int n, int mu, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8BUT_TO_R8GE copies an R8BUT matrix to an R8GE matrix.
//
//  Discussion:
//
//    The R8BUT storage format is for a banded upper triangular matrix.
//
//    To save storage, only the diagonal and upper triangle of A is stored,
//    in a compact diagonal format that preserves columns.
//
//    The diagonal is stored in row MU+1 of the array.
//    The first superdiagonal in row MU, columns 2 through N.
//    The second superdiagonal in row MU-1, columns 3 through N.
//    The MU-th superdiagonal in row 1, columns MU+1 through N.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    12 October 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrices.
//    N must be positive.
//
//    Input, int MU, the upper bandwidth of A.
//    MU must be nonnegative, and no greater than N-1.
//
//    Input, double A[(MU+1)*N], the R8BUT matrix.
//
//    Output, double R8BUT_TO_R8GE[N*N], the R8GE matrix.
//
{
  double *b;
  int i;
  int j;

  b = new double[n*n];

  for ( i = 1; i <= n; i++ )
  {
    for ( j = 1; j <= n; j++ )
    {
      if ( i <= j && j <= i+mu )
      {
        b[i-1+(j-1)*n] = a[mu+i-j+(j-1)*(mu+1)];
      }
      else
      {
        b[i-1+(j-1)*n] = 0.0;
      }
    }
  }

  return b;
}
//****************************************************************************80

double *r8but_zeros ( int n, int mu )

//****************************************************************************80
//
//  Purpose:
//
//    R8BUT_ZEROS zeros an R8BUT matrix.
//
//  Discussion:
//
//    The R8BUT storage format is used for a banded upper triangular matrix.
//    The matrix is assumed to be zero above the MU-th superdiagonal.
//    The matrix is stored in an MU+1 by N array.
//    Columns are preserved.
//
//    The diagonal is stored in row MU+1 of the array.
//    The first superdiagonal in row MU, columns 2 through N.
//    The second superdiagonal in row MU-1, columns 3 through N.
//    The MU-th superdiagonal in row 1, columns MU+1 through N.
//
//  Example:
//
//    N = 5, MU = 2
//
//    A11 A12 A13   0   0
//      0 A22 A23 A24   0
//      0   0 A33 A34 A35
//      0   0   0 A44 A45
//      0   0   0   0 A55
//                --- ---
//                    ---
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
//    Input, int N, the number of columns of the matrix.
//
//    Input, int MU, the upper bandwidth.
//
//    Output, double R8BUT_ZEROS[(MU+1)*N], the R8BUT matrix.
//
{
  double *a;
  int i;
  int j;

  a = new double[(mu+1)*n];

  for ( i = 0; i < mu + 1; i++ )
  {
    for ( j = 0; j < n; j++ )
    {
      a[i+j*(mu+1)] = 0.0;
    }
  }

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
