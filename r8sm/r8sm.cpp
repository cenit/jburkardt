# include <cmath>
# include <cstdlib>
# include <ctime>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8sm.hpp"

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

int r8ge_fa ( int n, double a[], int pivot[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_FA performs a LINPACK-style PLU factorization of an R8GE matrix.
//
//  Discussion:
//
//    The R8GE storage format is used for a "general" M by N matrix.  
//    A physical storage space is made for each logical entry.  The two 
//    dimensional logical array is mapped to a vector, in which storage is 
//    by columns.
//
//    R8GE_FA is a simplified version of the LINPACK routine SGEFA.
//
//    The two dimensional array is stored by columns in a one dimensional
//    array.
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
//  Reference:
//
//    Jack Dongarra, Jim Bunch, Cleve Moler, Pete Stewart,
//    LINPACK User's Guide,
//    SIAM, 1979,
//    ISBN13: 978-0-898711-72-1,
//    LC: QA214.L56.
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//    N must be positive.
//
//    Input/output, double A[N*N], the matrix to be factored.
//    On output, A contains an upper triangular matrix and the multipliers
//    which were used to obtain it.  The factorization can be written
//    A = L * U, where L is a product of permutation and unit lower
//    triangular matrices and U is upper triangular.
//
//    Output, int PIVOT[N], a vector of pivot indices.
//
//    Output, int R8GE_FA, singularity flag.
//    0, no singularity detected.
//    nonzero, the factorization failed on the INFO-th step.
//
{
  int i;
  int j;
  int k;
  int l;
  double t;
//
  for ( k = 1; k <= n - 1; k++ )
  {
//
//  Find L, the index of the pivot row.
//
    l = k;

    for ( i = k + 1; i <= n; i++ )
    {
      if ( fabs ( a[l-1+(k-1)*n] ) < fabs ( a[i-1+(k-1)*n] ) )
      {
        l = i;
      }
    }

    pivot[k-1] = l;
//
//  If the pivot index is zero, the algorithm has failed.
//
    if ( a[l-1+(k-1)*n] == 0.0 )
    {
      cerr << "\n";
      cerr << "R8GE_FA - Fatal error!\n";
      cerr << "  Zero pivot on step " << k << "\n";
      exit ( 1 );
    }
//
//  Interchange rows L and K if necessary.
//
    if ( l != k )
    {
      t              = a[l-1+(k-1)*n];
      a[l-1+(k-1)*n] = a[k-1+(k-1)*n];
      a[k-1+(k-1)*n] = t;
    }
//
//  Normalize the values that lie below the pivot entry A(K,K).
//
    for ( i = k + 1; i <= n; i++ )
    {
      a[i-1+(k-1)*n] = -a[i-1+(k-1)*n] / a[k-1+(k-1)*n];
    }
//
//  Row elimination with column indexing.
//
    for ( j = k + 1; j <= n; j++ )
    {
      if ( l != k )
      {
        t              = a[l-1+(j-1)*n];
        a[l-1+(j-1)*n] = a[k-1+(j-1)*n];
        a[k-1+(j-1)*n] = t;
      }

      for ( i = k + 1; i <= n; i++ )
      {
        a[i-1+(j-1)*n] = a[i-1+(j-1)*n] + a[i-1+(k-1)*n] * a[k-1+(j-1)*n];
      }

    }

  }

  pivot[n-1] = n;

  if ( a[n-1+(n-1)*n] == 0.0 )
  {
    cerr << "\n";
    cerr << "R8GE_FA - Fatal error!\n";
    cerr << "  Zero pivot on step " << n << "\n";
    exit ( 1 );
  }

  return 0;
}
//****************************************************************************80

double *r8ge_ml ( int n, double a_lu[], int pivot[], double x[], int job )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_ML computes A * x or A' * x, using R8GE_FA factors.
//
//  Discussion:
//
//    The R8GE storage format is used for a "general" M by N matrix.  
//    A physical storage space is made for each logical entry.  The two 
//    dimensional logical array is mapped to a vector, in which storage is 
//    by columns.
//
//    It is assumed that R8GE_FA has overwritten the original matrix
//    information by LU factors.  R8GE_ML is able to reconstruct the
//    original matrix from the LU factor data.
//
//    R8GE_ML allows the user to check that the solution of a linear
//    system is correct, without having to save an unfactored copy
//    of the matrix.
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
//    Input, int N, the order of the matrix.
//    N must be positive.
//
//    Input, double A_LU[N*N], the LU factors from R8GE_FA.
//
//    Input, int PIVOT[N], the pivot vector computed by R8GE_FA.
//
//    Input, double X[N], the vector to be multiplied.
//
//    Input, int JOB, specifies the operation to be done:
//    JOB = 0, compute A * x.
//    JOB nonzero, compute A' * X.
//
//    Output, double R8GE_ML[N], the result of the multiplication.
//
{
  double *b;
  int i;
  int j;
  int k;
  double temp;
//
  b = new double[n];

  for ( i = 0; i < n; i++ )
  {
    b[i] = x[i];
  }

  if ( job == 0 )
  {
//
//  Y = U * X.
//
    for ( j = 1; j <= n; j++ )
    {
      for ( i = 1; i <= j - 1; i++ )
      {
        b[i-1] = b[i-1] + a_lu[i-1+(j-1)*n] * b[j-1];
      }
      b[j-1] = a_lu[j-1+(j-1)*n] * b[j-1];
    }
//
//  B = PL * Y = PL * U * X = A * x.
//
    for ( j = n - 1; 1 <= j; j-- )
    {
      for ( i = j+1; i <= n; i++ )
      {
        b[i-1] = b[i-1] - a_lu[i-1+(j-1)*n] * b[j-1];
      }

      k = pivot[j-1];

      if ( k != j )
      {
        temp   = b[k-1];
        b[k-1] = b[j-1];
        b[j-1] = temp;
      }
    }
  }
  else
  {
//
//  Y = (PL)' * X:
//
    for ( j = 1; j <= n - 1; j++ )
    {
      k = pivot[j-1];

      if ( k != j )
      {
        temp   = b[k-1];
        b[k-1] = b[j-1];
        b[j-1] = temp;
      }

      temp = 0.0;
      for ( i = j+1; i <= n; i++ )
      {
        temp = temp + b[i-1] * a_lu[i-1+(j-1)*n];
      }
      b[j-1] = b[j-1] - temp;

    }
//
//  B = U' * Y = ( PL * U )' * X = A' * X.
//
    for ( i = n; 1 <= i; i-- )
    {
      for ( j = i+1; j <= n; j++ )
      {
        b[j-1] = b[j-1] + b[i-1] * a_lu[i-1+(j-1)*n];
      }
      b[i-1] = b[i-1] * a_lu[i-1+(i-1)*n];
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

double *r8ge_sl_new ( int n, double a_lu[], int pivot[], double b[], int job )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_SL_NEW solves an R8GE system factored by R8GE_FA.
//
//  Discussion:
//
//    The R8GE storage format is used for a "general" M by N matrix.  
//    A physical storage space is made for each logical entry.  The two 
//    dimensional logical array is mapped to a vector, in which storage is 
//    by columns.
//
//    R8GE_SL is a simplified version of the LINPACK routine SGESL.
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
//    Input, int N, the order of the matrix.
//    N must be positive.
//
//    Input, double A_LU[N*N], the LU factors from R8GE_FA.
//
//    Input, int PIVOT[N], the pivot vector from R8GE_FA.
//
//    Input, double B[N], the right hand side vector.
//
//    Input, int JOB, specifies the operation.
//    0, solve A * x = b.
//    nonzero, solve A' * x = b.
//
//    Output, double R8GE_SL[N], the solution vector.
//
{
  int i;
  int k;
  int l;
  double t;
  double *x;
//
  x = new double[n];

  for ( i = 0; i < n; i++ )
  {
    x[i] = b[i];
  }
//
//  Solve A * x = b.
//
  if ( job == 0 )
  {
//
//  Solve PL * Y = B.
//
    for ( k = 1; k <= n - 1; k++ )
    {
      l = pivot[k-1];

      if ( l != k )
      {
        t      = x[l-1];
        x[l-1] = x[k-1];
        x[k-1] = t;
      }
      for ( i = k + 1; i <= n; i++ )
      {
        x[i-1] = x[i-1] + a_lu[i-1+(k-1)*n] * x[k-1];
      }
    }
//
//  Solve U * X = Y.
//
    for ( k = n; 1 <= k; k-- )
    {
      x[k-1] = x[k-1] / a_lu[k-1+(k-1)*n];
      for ( i = 1; i <= k-1; i++ )
      {
        x[i-1] = x[i-1] - a_lu[i-1+(k-1)*n] * x[k-1];
      }
    }
  }
//
//  Solve A' * X = B.
//
  else
  {
//
//  Solve U' * Y = B.
//
    for ( k = 1; k <= n; k++ )
    {
      t = 0.0;
      for ( i = 1; i <= k - 1; i++ )
      {
        t = t + x[i-1] * a_lu[i-1+(k-1)*n];
      }
      x[k-1] = ( x[k-1] - t ) / a_lu[k-1+(k-1)*n];
    }
//
//  Solve ( PL )' * X = Y.
//
    for ( k = n - 1; 1 <= k; k-- )
    {
      t = 0.0;
      for ( i = k + 1; i <= n; i++ )
      {
        t = t + x[i-1] * a_lu[i-1+(k-1)*n];
      }
      x[k-1] = x[k-1] + t;

      l = pivot[k-1];

      if ( l != k )
      {
        t      = x[l-1];
        x[l-1] = x[k-1];
        x[k-1] = t;
      }

    }

  }

  return x;
}
//****************************************************************************80

void r8sm_indicator ( int m, int n, double a[], double u[], double v[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8SM_INDICATOR returns the indicator matrix as an R8SM matrix.
//
//  Discussion:
//
//    The R8SM storage format is used for an M by N Sherman Morrison matrix B,
//    which is defined by an M by N matrix A, an M vector U, and
//    an N vector V, by B = A - U * V'
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    30 May 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns 
//    of the matrix.
//
//    Output, double A[M*N], the R8SM matrix.
//
//    Output, double U[M], V[N], the R8SM vectors.
//
{
  int fac;
  int i;
  int j;

  fac = i4_power ( 10, i4_log_10 ( n ) + 1 );

  for ( i = 0; i < m; i++ )
  {
    u[i] = - 1.0;
  }

  for ( j = 0; j < n; j++ )
  {
    v[j] = ( double ) ( j + 1 );
  }

  for ( i = 0; i < m; i++ )
  {
    for ( j = 0; j < n; j++ )
    {
      a[i+j*m] = ( double ) ( fac * ( i + 1 ) );
    }
  }

  return;
}
//****************************************************************************80

double *r8sm_ml ( int n, double a_lu[], double u[], double v[], int pivot[], 
  double x[], int job )

//****************************************************************************80
//
//  Purpose:
//
//    R8SM_ML multiplies a factored square R8SM matrix times a vector.
//
//  Discussion:
//
//    The R8SM storage format is used for an M by N Sherman Morrison matrix B,
//    which is defined by an M by N matrix A, an M vector U, and
//    an N vector V, by B = A - U * V'
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    20 October 2003
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
//    Input, double A_LU[N*N], the LU factors from R8GE_FA.
//
//    Input, double U[N], V[N], the Sherman Morrison vectors.
//
//    Input, int PIVOT[N], the pivot vector computed by R8GE_FA.
//
//    Input, double X[N], the vector to be multiplied.
//
//    Input, int JOB, specifies the operation to be done:
//    JOB = 0, compute (A-u*v') * x.
//    JOB nonzero, compute (A-u*v')' * x.
//
//    Output, double R8SM_ML[N], the result of the multiplication.
//
{
  double *b;
  int i;
  double ux;
  double vx;

  b = r8ge_ml ( n, a_lu, pivot, x, job );

  if ( job == 0 )
  {
    vx = 0.0;
    for ( i = 0; i < n; i++ )
    {
      vx = vx + v[i] * x[i];
    }
    for ( i = 0; i < n; i++ )
    {
      b[i] = b[i] - u[i] * vx;
    }
  }
  else
  {
    ux = 0.0;
    for ( i = 0; i < n; i++ )
    {
      ux = ux + u[i] * x[i];
    }
    for ( i = 0; i < n; i++ )
    {
      b[i] = b[i] - v[i] * ux;
    }
  }

  return b;
}
//****************************************************************************80

double *r8sm_mtv ( int m, int n, double a[], double u[], double v[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8SM_MTV multiplies a vector by an R8SM matrix.
//
//  Discussion:
//
//    The R8SM storage format is used for an M by N Sherman Morrison matrix B,
//    which is defined by an M by N matrix A, an M vector U, and
//    an N vector V, by B = A - U * V'
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 January 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns of the matrix.
//
//    Input, double A[M*N], the R8SM matrix.
//
//    Input, double U[M], V[N], the R8SM vectors.
//
//    Input, double X[M], the vector to be multiplied.
//
//    Output, double R8SM_MTV[N], the product (A-u*v')' * X.
//
{
  double *b;
  double dot;
  int i;
  int j;

  b = r8vec_zeros_new ( n );

  for ( i = 0; i < n; i++ )
  {
    for ( j = 0; j < m; j++ )
    {
      b[i] = b[i] + x[j] * a[j+i*m];
    }
    dot = 0.0;
    for ( j = 0; j < m; j++ )
    {
      dot = dot + u[j] * x[j];
    }
    b[i] = b[i] - v[i] * dot;
  }

  return b;
}
//****************************************************************************80

double *r8sm_mv ( int m, int n, double a[], double u[], double v[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8SM_MV multiplies an R8SM matrix times a vector.
//
//  Discussion:
//
//    The R8SM storage format is used for an M by N Sherman Morrison matrix B,
//    which is defined by an M by N matrix A, an M vector U, and
//    an N vector V, by B = A - U * V'
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 January 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns of the matrix.
//
//    Input, double A[M*N], the R8SM matrix.
//
//    Input, double U[M], V[N], the R8SM vectors U and V.
//
//    Input, double X[N], the vector to be multiplied by (A-u*v').
//
//    Output, double R8SM_MV[M], the product (A-u*v') * x.
//
{
  double *b;
  int i;
  int j;
  double vx;

  b = r8vec_zeros_new ( m );

  vx = 0.0;
  for ( j = 0; j < n; j++ )
  {
    vx = vx + v[j] * x[j];
  }

  for ( i = 0; i < m; i++ )
  {
    for ( j = 0; j < n; j++ )
    {
      b[i] = b[i] + a[i+j*m] * x[j];
    }
    b[i] = b[i] - u[i] * vx;
  }

  return b;
}
//****************************************************************************80

void r8sm_print ( int m, int n, double a[], double u[], double v[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8SM_PRINT prints an R8SM matrix.
//
//  Discussion:
//
//    The R8SM storage format is used for an M by N Sherman Morrison matrix B,
//    which is defined by an M by N matrix A, an M vector U, and
//    an N vector V, by B = A - U * V'
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
//    Input, double A[M*N], the R8SM matrix.
//
//    Input, double U[M], V[N], the R8SM vectors.
//
//    Input, string TITLE, a title.
//
{
  r8sm_print_some ( m, n, a, u, v, 1, 1, m, n, title );

  return;
}
//****************************************************************************80

void r8sm_print_some ( int m, int n, double a[], double u[], double v[], int ilo, 
  int jlo, int ihi, int jhi, string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8SM_PRINT_SOME prints some of an R8SM matrix.
//
//  Discussion:
//
//    The R8SM storage format is used for an M by N Sherman Morrison matrix B,
//    which is defined by an M by N matrix A, an M vector U, and
//    an N vector V, by B = A - U * V'
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    30 May 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns of the matrix.
//
//    Input, double A[M*N], the R8SM matrix.
//
//    Input, double U[M], V[N], the R8SM vectors.
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
    i2hi = i4_min ( ihi, m );

    for ( i = i2lo; i <= i2hi; i++ )
    {
      cout << setw(4) << i << "  ";
//
//  Print out (up to) 5 entries in row I, that lie in the current strip.
//
      for ( j = j2lo; j <= j2hi; j++ )
      {
        cout << setw(12) << a[i-1+(j-1)*m] - u[i-1] * v[j-1] << "  ";
      }
      cout << "\n";
    }
  }

  return;
# undef INCX
}
//****************************************************************************80

void r8sm_random ( int m, int n, int &seed, double a[], double u[], double v[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8SM_RANDOM randomizes an R8SM matrix.
//
//  Discussion:
//
//    The R8SM storage format is used for an M by N Sherman Morrison matrix B,
//    which is defined by an M by N matrix A, an M vector U, and
//    an N vector V, by B = A - U * V'
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    31 May 2016
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
//    Output, double A[M*N], the R8SM matrix.
//
//    Output, double U[M], V[N], the R8SM vectors.
//
{
  int i;
  int j;

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < m; i++ )
    {
      a[i+j*m] = r8_uniform_01 ( seed );
    }
  }
  for ( i = 0; i < m; i++ )
  {
    u[i] = r8_uniform_01 ( seed );
  }
  for ( j = 0; j < n; j++ )
  {
    v[j] = r8_uniform_01 ( seed );
  }

  return;
}
//****************************************************************************80

double *r8sm_sl ( int n, double a_lu[], double u[], double v[], double b[], 
  int pivot[], int job )

//****************************************************************************80
//
//  Purpose:
//
//    R8SM_SL solves a square R8SM system that has been factored.
//
//  Discussion:
//
//    The R8SM storage format is used for an M by N Sherman Morrison matrix B,
//    which is defined by an M by N matrix A, an M vector U, and
//    an N vector V, by B = A - U * V'
//
//    It is assumed that A has been decomposed into its LU factors
//    by R8GE_FA.  The Sherman Morrison formula allows
//    us to solve linear systems involving (A-u*v') by solving linear
//    systems involving A and adjusting the results.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    20 October 2003
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    David Kahaner, Cleve Moler, Stephen Nash
//    Numerical Methods and Software,
//    Prentice Hall, 1989
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//    N must be positive.
//
//    Input, double A_LU[N*N], the LU factors from R8GE_FA.
//
//    Input, double U[N], V[N], the R8SM vectors U and V.
//
//    Input, double B[N], the right hand side vector.
//
//    Input, int PIVOT[N], the pivot vector produced by R8GE_FA.
//
//    Input, int JOB, specifies the system to solve.
//    0, solve (A-u*v') * X = B.
//    nonzero, solve (A-u*v') * X = B.
//
//    Output, double R8SM_SL[N], the solution vector, or NULL if
//    an error occurred.
//
{
  double alpha;
  double beta;
  int i;
  int job_local;
  double *w;
  double *x;

  x = new double[n];

  if ( job == 0 )
  {
//
//  Solve A' * w = v.
//
    job_local = 1;
    w = r8ge_sl_new ( n, a_lu, pivot, v, job_local );
//
//  Set beta = w' * b.
//
    beta = 0.0;
    for ( i = 0; i < n; i++ )
    {
      beta = beta + w[i] * b[i];
    }
//
//  Solve A * x = b.
//
    job_local = 0;
    x = r8ge_sl_new ( n, a_lu, pivot, b, job_local );
//
//  Solve A * w = u.
//
    job_local = 0;
    delete [] w;
    w = r8ge_sl_new ( n, a_lu, pivot, u, job_local );
//
//  Set alpha = 1 / ( 1 - v' * w ).
//
    alpha = 1.0;
    for ( i = 0; i < n; i++ )
    {
      alpha = alpha - v[i] * w[i];
    }
  }
  else
  {
//
//  Solve A * w = u.
//
    job_local = 0;
    w = r8ge_sl_new ( n, a_lu, pivot, u, job_local );
//
//  Set beta = w' * b.
//
    beta = 0.0;
    for ( i = 0; i < n; i++ )
    {
      beta = beta + w[i] * b[i];
    }
//
//  Solve A' * x = b.
//
    job_local = 1;
    x = r8ge_sl_new ( n, a_lu, pivot, b, job_local );
//
//  Solve A' * w = v.
//
    job_local = 1;
    delete [] w;
    w = r8ge_sl_new ( n, a_lu, pivot, v, job_local );
//
//  Set alpha = 1 / ( 1 - u' * w ).
//
    alpha = 1.0;
    for ( i = 0; i < n; i++ ) 
    {
      alpha = alpha - u[i] * w[i];
    }
  }

  if ( alpha == 0.0 )
  {
    cerr << "\n";
    cerr << "R8SM_SL - Fatal error!\n";
    cerr << "  The divisor ALPHA is zero.\n";
    exit ( 1 );
  }

  alpha = 1.0 / alpha;
//
//  Set b = b + alpha * beta * w.
//
  for ( i = 0; i < n; i++ )
  {
    x[i] = x[i] + alpha * beta * w[i];
  }
  delete [] w;
  return x;
}
//****************************************************************************80

double *r8sm_to_r8ge ( int m, int n, double a[], double u[], double v[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8SM_TO_R8GE copies an R8SM matrix to an R8GE matrix.
//
//  Discussion:
//
//    The R8SM storage format is used for an M by N Sherman Morrison matrix B,
//    which is defined by an M by N matrix A, an M vector U, and
//    an N vector V, by B = A - U * V'
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    31 May 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns of the matrix.
//
//    Input, double A[M*N], the R8SM matrix.
//
//    Input, double U[M], V[N], the R8SM vectors.
//
//    Output, double R8SM_TO_R8GE[M*N], the R8GE matrix.
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
      b[i+j*m] = a[i+j*m] - u[i] * v[j];
    }
  }

  return b;
}
//****************************************************************************80

void r8sm_zeros ( int m, int n, double a[], double u[], double v[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8SM_ZEROS zeros an R8SM matrix.
//
//  Discussion:
//
//    The R8SM storage format is used for an M by N Sherman Morrison matrix B,
//    which is defined by an M by N matrix A, an M vector U, and
//    an N vector V, by B = A - U * V'
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 January 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns of the matrix.
//
//    Output, double A[M*N], the R8SM matrix.
//
//    Output, double U[M], V[N], the R8SM vectors.
//
{
  int i;
  int j;

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < m; i++ )
    {
      a[i+j*m] = 0.0;
    }
  }
  for ( i = 0; i < m; i++ )
  {
    u[i] = 0.0;
  }
  for ( i = 0; i < n; i++ )
  {
    v[i] = 0.0;
  }

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

void r8vec2_print_some ( int n, double x1[], double x2[], int max_print, 
  string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC2_PRINT_SOME prints "some" of two real vectors.
//
//  Discussion:
//
//    The user specifies MAX_PRINT, the maximum number of lines to print.
//
//    If N, the size of the vectors, is no more than MAX_PRINT, then
//    the entire vectors are printed, one entry of each per line.
//
//    Otherwise, if possible, the first MAX_PRINT-2 entries are printed,
//    followed by a line of periods suggesting an omission,
//    and the last entry.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    13 November 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters: 
//
//    Input, int N, the number of entries of the vectors.
//
//    Input, double X1[N], X2[N], the vector to be printed.
//
//    Input, int MAX_PRINT, the maximum number of lines to print.
//
//    Input, string TITLE, a title.
//
{
  int i;

  if ( max_print <= 0 )
  {
    return;
  }

  if ( n <= 0 )
  {
    return;
  }

  cout << "\n";
  cout << title << "\n";
  cout << "\n";

  if ( n <= max_print )
  {
    for ( i = 0; i < n; i++ )
    {
      cout << setw(6)  << i + 1 << "  "
           << setw(14) << x1[i] << "  "
           << setw(14) << x2[i] << "\n";
    }
  }
  else if ( 3 <= max_print )
  {
    for ( i = 0; i < max_print-2; i++ )
    {
      cout << setw(6)  << i + 1 << "  "
           << setw(14) << x1[i] << "  "
           << setw(14) << x2[i] << "\n";
    }
    cout << "......  ..............  ..............\n";
    i = n - 1;
    cout << setw(6)  << i + 1 << "  "
         << setw(14) << x1[i] << "  "
         << setw(14) << x2[i] << "\n";
  }
  else
  {
    for ( i = 0; i < max_print - 1; i++ )
    {
      cout << setw(6)  << i + 1 << "  "
           << setw(14) << x1[i] << "  "
           << setw(14) << x2[i] << "\n";
    }
    i = max_print - 1;
    cout << setw(6)  << i + 1 << "  "
         << setw(14) << x1[i] << "  "
         << setw(14) << x2[i] << "...more entries...\n";
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
