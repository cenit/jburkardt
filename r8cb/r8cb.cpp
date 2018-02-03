# include <cmath>
# include <cstdlib>
# include <ctime>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8cb.hpp"

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

double r8cb_det ( int n, int ml, int mu, double a_lu[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8CB_DET computes the determinant of an R8CB matrix factored by R8CB_NP_FA.
//
//  Discussion:
//
//    The R8CB storage format is appropriate for a compact banded matrix.
//    It is assumed that the matrix has lower and upper bandwidths ML and MU,
//    respectively.  The matrix is stored in a way similar to that used
//    by LINPACK and LAPACK for a general banded matrix, except that in
//    this mode, no extra rows are set aside for possible fillin during pivoting.
//    Thus, this storage format is suitable if you do not intend to factor
//    the matrix, or if you can guarantee that the matrix can be factored
//    without pivoting.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    25 March 2004
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
//    Input, int ML, MU, the lower and upper bandwidths.
//    ML and MU must be nonnegative, and no greater than N-1.
//
//    Input, double A_LU[(ML+MU+1)*N], the LU factors from R8CB_FA.
//
//    Output, double R8CB_DET, the determinant of the matrix.
//
{
  double det;
  int j;

  det = 1.0;
  for ( j = 0; j < n; j++ )
  {
    det = det * a_lu[mu+j*(ml+mu+1)];
  }

  return det;
}
//*****************************************************************************/

double *r8cb_dif2 ( int m, int n, int ml, int mu )

//*****************************************************************************/
//
//  Purpose:
//
//    R8CB_DIF2 sets up an R8CB second difference matrix.
//
//  Discussion:
//
//    The R8CB storage format is appropriate for a compact banded matrix.
//    It is assumed that the matrix has lower and upper bandwidths ML and MU,
//    respectively.  The matrix is stored in a way similar to that used
//    by LINPACK and LAPACK for a general banded matrix, except that in
//    this mode, no extra rows are set aside for possible fillin during pivoting.
//    Thus, this storage format is suitable if you do not intend to factor
//    the matrix, or if you can guarantee that the matrix can be factored
//    without pivoting.
//
//    The original M by N matrix is "collapsed" downward, so that diagonals
//    become rows of the storage array, while columns are preserved.  The
//    collapsed array is logically ML+MU+1 by N.  
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    27 July 2016
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
//    Input, int ML, MU, the lower and upper bandwidths.
//    ML and MU must be nonnegative, and no greater than min(M,N)-1.
//
//    Output, double R8CB_DIF2[(ML+MU+1)*N], the matrix.
//
{
  double *a;
  int diag;
  int i;
  int j;

  a = r8vec_zeros_new ( ( ml + mu + 1 ) * n );

  for ( j = 0; j < n; j++ )
  {
    for ( diag = 0; diag < ml + mu + 1; diag++ )
    {
      i = diag + j - mu;

      if ( i == j )
      {
        a[diag+j*(ml+mu+1)] = 2.0;
      }
      else if ( i == j + 1 || i == j - 1 )
      {
        a[diag+j*(ml+mu+1)] = -1.0;
      }
    }
  }

  return a;
}
//****************************************************************************80

double *r8cb_indicator ( int m, int n, int ml, int mu )

//****************************************************************************80
//
//  Purpose:
//
//    R8CB_INDICATOR sets up an R8CB indicator matrix.
//
//  Discussion:
//
//    The R8CB storage format is appropriate for a compact banded matrix.
//    It is assumed that the matrix has lower and upper bandwidths ML and MU,
//    respectively.  The matrix is stored in a way similar to that used
//    by LINPACK and LAPACK for a general banded matrix, except that in
//    this mode, no extra rows are set aside for possible fillin during pivoting.
//    Thus, this storage format is suitable if you do not intend to factor
//    the matrix, or if you can guarantee that the matrix can be factored
//    without pivoting.
//
//    The original M by N matrix is "collapsed" downward, so that diagonals
//    become rows of the storage array, while columns are preserved.  The
//    collapsed array is logically ML+MU+1 by N.  
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
//    Input, int M, the number of rows of the matrix.
//    M must be positive.
//
//    Input, int N, the number of columns of the matrix.
//    N must be positive.
//
//    Input, int ML, MU, the lower and upper bandwidths.
//    ML and MU must be nonnegative, and no greater than min(M,N)-1.
//
//    Output, double R8CB_INDICATOR[(ML+MU+1)*N], the R8CB matrix.
//
{
  double *a;
  int col = ml + mu + 1;
  int diag;
  int fac;
  int i;
  int j;
  int k;

  a = r8vec_zeros_new ( ( ml + mu + 1 ) * n );

  fac = i4_power ( 10, i4_log_10 ( n ) + 1 );
  k = 0;

  for ( j = 1; j <= n; j++ )
  {
    for ( diag = 1; diag <= ml + mu + 1; diag++ )
    {
      i = diag + j - mu - 1;

      if ( 1 <= i && i <= m && i - ml <= j && j <= i + mu )
      {
        a[diag-1+(j-1)*col] = ( double ) ( fac * i + j );
      }
      else
      {
        k = k + 1;
        a[diag-1+(j-1)*col] = - ( double ) k;
      }
    }
  }

  return a;
}
//****************************************************************************80

double *r8cb_ml ( int n, int ml, int mu, double a_lu[], double x[], int job )

//****************************************************************************80
//
//  Purpose:
//
//    R8CB_ML computes A * x or A' * X, using R8CB_NP_FA factors.
//
//  Discussion:
//
//    The R8CB storage format is appropriate for a compact banded matrix.
//    It is assumed that the matrix has lower and upper bandwidths ML and MU,
//    respectively.  The matrix is stored in a way similar to that used
//    by LINPACK and LAPACK for a general banded matrix, except that in
//    this mode, no extra rows are set aside for possible fillin during pivoting.
//    Thus, this storage format is suitable if you do not intend to factor
//    the matrix, or if you can guarantee that the matrix can be factored
//    without pivoting.
//
//    It is assumed that R8CB_NP_FA has overwritten the original matrix
//    information by LU factors.  R8CB_ML is able to reconstruct the
//    original matrix from the LU factor data.
//
//    R8CB_ML allows the user to check that the solution of a linear
//    system is correct, without having to save an unfactored copy
//    of the matrix.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    19 November 2003
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
//    Input, int ML, MU, the lower and upper bandwidths.
//    ML and MU must be nonnegative, and no greater than N-1.
//
//    Input, double A_LU[(ML+MU+1)*N], the LU factors from R8CB_NP_FA.
//
//    Input, double X[N], the vector to be multiplied.
//
//    Input, int JOB, specifies the operation to be done:
//    JOB = 0, compute A * x.
//    JOB nonzero, compute A' * x.
//
//    Output, double R8CB_ML[N], the result of the multiplication.
//
{
  double *b;
  int i;
  int ihi;
  int ilo;
  int j;
  int jhi;
  int nrow = ml + mu + 1;

  b = r8vec_zeros_new ( n );

  for ( i = 0; i < n; i++ )
  {
    b[i] = x[i];
  }

  if ( job == 0 )
  {
//
//  Y = U * X.
//
    for ( j = 0; j < n; j++ )
    {
      ilo = i4_max ( 0, j - mu );
      for ( i = ilo; i < j; i++ )
      {
        b[i] = b[i] + a_lu[i-j+mu+j*nrow] * b[j];
      }
      b[j] = a_lu[j-j+mu+j*nrow] * b[j];
    }
//
//  B = PL * Y = PL * U * X = A * x.
//
    for ( j = n - 2; 0 <= j; j-- )
    {
      ihi = i4_min ( n - 1, j + ml );
      for ( i = j + 1; i <= ihi; i++ )
      {
        b[i] = b[i] - a_lu[i-j+mu+j*nrow] * b[j];
      }
    }
  }
  else
  {
//
//  Y = ( PL )' * X.
//
    for ( j = 0; j < n - 1; j++ )
    {
      jhi = i4_min ( n - 1, j + ml );
      for ( i = j + 1; i <= jhi; i++ )
      {
        b[j] = b[j] - b[i] * a_lu[i-j+mu+j*nrow];
      }
    }
//
//  B = U' * Y = ( PL * U )' * X = A' * X.
//
    for ( i = n - 1; 0 <= i; i-- )
    {
      jhi = i4_min ( n - 1, i + mu );
      for ( j = i + 1; j <= jhi; j++ )
      {
        b[j] = b[j] + b[i] * a_lu[i-j+mu+j*nrow];
      }
      b[i] = b[i] * a_lu[i-i+mu+i*nrow];
    }
  }

  return b;
}
//****************************************************************************80

double *r8cb_mtv ( int m, int n, int ml, int mu, double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8CB_MTV multiplies a vector by an R8CB matrix.
//
//  Discussion:
//
//    The R8CB storage format is appropriate for a compact banded matrix.
//    It is assumed that the matrix has lower and upper bandwidths ML and MU,
//    respectively.  The matrix is stored in a way similar to that used
//    by LINPACK and LAPACK for a general banded matrix, except that in
//    this mode, no extra rows are set aside for possible fillin during pivoting.
//    Thus, this storage format is suitable if you do not intend to factor
//    the matrix, or if you can guarantee that the matrix can be factored
//    without pivoting.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    18 October 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the order of the matrix.
//
//    Input, int ML, MU, the lower and upper bandwidths.
//    ML and MU must be nonnegative, and no greater than N-1.
//
//    Input, double A[(ML+MU+1)*N], the R8CB matrix.
//
//    Input, double X[M], the vector to be multiplied by A.
//
//    Output, double R8CB_MTV[N], the product X*A.
//
{
  double *b;
  int i;
  int j;
  int jhi;
  int jlo;

  b = r8vec_zeros_new ( n );

  for ( i = 0; i < m; i++ )
  {
    jlo = i4_max ( 0, i - ml );
    jhi = i4_min ( n - 1, i + mu );
    for ( j = jlo; j <= jhi; j++ )
    {
      b[j] = b[j] + x[i] * a[i-j+mu+j*(ml+mu+1)];
    }
  }

  return b;
}
//****************************************************************************80

double *r8cb_mv ( int m, int n, int ml, int mu, double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8CB_MV multiplies an R8CB matrix times a vector.
//
//  Discussion:
//
//    The R8CB storage format is appropriate for a compact banded matrix.
//    It is assumed that the matrix has lower and upper bandwidths ML and MU,
//    respectively.  The matrix is stored in a way similar to that used
//    by LINPACK and LAPACK for a general banded matrix, except that in
//    this mode, no extra rows are set aside for possible fillin during pivoting.
//    Thus, this storage format is suitable if you do not intend to factor
//    the matrix, or if you can guarantee that the matrix can be factored
//    without pivoting.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    14 October 2003
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
//    Input, int ML, MU, the lower and upper bandwidths.
//    ML and MU must be nonnegative, and no greater than N-1.
//
//    Input, double A[(ML+MU+1)*N], the R8CB matrix.
//
//    Input, double X[N], the vector to be multiplied by A.
//
//    Output, double R8CB_MV[M], the product A * x.
//
{
  double *b;
  int i;
  int j;
  int jhi;
  int jlo;

  b = r8vec_zeros_new ( m );

  for ( i = 0; i < m; i++ )
  {
    jlo = i4_max ( 0, i - ml );
    jhi = i4_min ( n - 1, i + mu );
    for ( j = jlo; j <= jhi; j++ )
    {
      b[i] = b[i] + a[i-j+mu+j*(ml+mu+1)] * x[j];
    }
  }

  return b;
}
//****************************************************************************80

int r8cb_np_fa ( int n, int ml, int mu, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8CB_NP_FA factors an R8CB matrix by Gaussian elimination.
//
//  Discussion:
//
//    The R8CB storage format is appropriate for a compact banded matrix.
//    It is assumed that the matrix has lower and upper bandwidths ML and MU,
//    respectively.  The matrix is stored in a way similar to that used
//    by LINPACK and LAPACK for a general banded matrix, except that in
//    this mode, no extra rows are set aside for possible fillin during pivoting.
//    Thus, this storage format is suitable if you do not intend to factor
//    the matrix, or if you can guarantee that the matrix can be factored
//    without pivoting.
//
//    R8CB_NP_FA is a version of the LINPACK routine SGBFA, modifed to use
//    no pivoting, and to be applied to the R8CB compressed band matrix storage
//    format.  It will fail if the matrix is singular, or if any zero
//    pivot is encountered.
//
//    If R8CB_NP_FA successfully factors the matrix, R8CB_NP_SL may be called
//    to solve linear systems involving the matrix.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    14 October 2003
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
//    Input, int ML, MU, the lower and upper bandwidths.
//    ML and MU must be nonnegative, and no greater than N-1.
//
//    Input/output, double A[(ML+MU+1)*N], the compact band matrix.
//    On input, the coefficient matrix of the linear system.
//    On output, the LU factors of the matrix.
//
//    Output, int R8CB_NP_FA, singularity flag.
//    0, no singularity detected.
//    nonzero, the factorization failed on the INFO-th step.
//
{
  int i;
  int j;
  int ju;
  int k;
  int lm;
  int m;
  int mm;
//
//  The value of M is MU + 1 rather than ML + MU + 1.
//
  m = mu + 1;
  ju = 0;

  for ( k = 1; k <= n - 1; k++ )
  {
//
//  If our pivot entry A(MU+1,K) is zero, then we must give up.
//
    if ( a[m-1+(k-1)*(ml+mu+1)] == 0.0 )
    {
      cerr << "\n";
      cerr << "R8CB_FA - Fatal error!\n";
      cerr << "  Zero pivot on step " << k << "\n";
      exit ( 1 );
    }
//
//  LM counts the number of nonzero elements that lie below the current
//  diagonal entry, A(K,K).
//
//  Multiply the LM entries below the diagonal by -1/A(K,K), turning
//  them into the appropriate "multiplier" terms in the L matrix.
//
    lm = i4_min ( ml, n - k );
    for ( i = m + 1; i <= m + lm; i++ )
    {
      a[i-1+(k-1)*(ml+mu+1)] = -a[i-1+(k-1)*(ml+mu+1)] / a[m-1+(k-1)*(ml+mu+1)];
    }
//
//  MM points to the row in which the next entry of the K-th row is, A(K,J).
//  We then add L(I,K)*A(K,J) to A(I,J) for rows I = K+1 to K+LM.
//
    ju = i4_max ( ju, mu + k );
    ju = i4_min ( ju, n );
    mm = m;

    for ( j = k + 1; j <= ju; j++ )
    {
      mm = mm - 1;
      for ( i = 1; i <= lm; i++ )
      {
        a[mm+i-1+(j-1)*(ml+mu+1)] = a[mm+i-1+(j-1)*(ml+mu+1)] 
          + a[mm-1+(j-1)*(ml+mu+1)] * a[m+i-1+(k-1)*(ml+mu+1)];
      }
    }
  }

  if ( a[m-1+(n-1)*(ml+mu+1)] == 0.0 )
  {
    cerr << "\n";
    cerr << "R8CB_FA - Fatal error!\n";
    cerr << "  Zero pivot on step " << n << "\n";
    exit ( 1 );
  }

  return 0;
}
//****************************************************************************80

double *r8cb_np_sl ( int n, int ml, int mu, double a_lu[], double b[], int job )

//****************************************************************************80
//
//  Purpose:
//
//    R8CB_NP_SL solves an R8CB system factored by R8CB_NP_FA.
//
//  Discussion:
//
//    The R8CB storage format is appropriate for a compact banded matrix.
//    It is assumed that the matrix has lower and upper bandwidths ML and MU,
//    respectively.  The matrix is stored in a way similar to that used
//    by LINPACK and LAPACK for a general banded matrix, except that in
//    this mode, no extra rows are set aside for possible fillin during pivoting.
//    Thus, this storage format is suitable if you do not intend to factor
//    the matrix, or if you can guarantee that the matrix can be factored
//    without pivoting.
//
//    R8CB_NP_SL can also solve the related system A' * x = b.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    18 January 2004
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
//    Input, int ML, MU, the lower and upper bandwidths.
//    ML and MU must be nonnegative, and no greater than N-1.
//
//    Input, double A_LU[(ML+MU+1)*N], the LU factors from R8CB_NP_FA.
//
//    Input, double B[N], the right hand side of the linear system.
//
//    Input, int JOB.
//    If JOB is zero, the routine will solve A * x = b.
//    If JOB is nonzero, the routine will solve A' * x = b.
//
//    Output, double R8CB_NP_SL[N], the solution of the linear system, X.
//
{
  int i;
  int k;
  int la;
  int lb;
  int lm;
  int m;
  double *x;

  x = r8vec_zeros_new ( n );

  for ( i = 0; i < n; i++ )
  {
    x[i] = b[i];
  }

  m = mu + 1;
//
//  Solve A * x = b.
//
  if ( job == 0 )
  {
//
//  Solve PL * Y = B.
//
    if ( 0 < ml )
    {
      for ( k = 1; k <= n - 1; k++ )
      {
        lm = i4_min ( ml, n - k );
        for ( i = 0; i < lm; i++ )
        {
          x[k+i] = x[k+i] + x[k-1] * a_lu[m+i+(k-1)*(ml+mu+1)];
        }
      }
    }
//
//  Solve U * X = Y.
//
    for ( k = n; 1 <= k; k-- )
    {
      x[k-1] = x[k-1] / a_lu[m-1+(k-1)*(ml+mu+1)];
      lm = i4_min ( k, m ) - 1;
      la = m - lm;
      lb = k - lm;
      for ( i = 0; i <= lm-1; i++ )
      {
        x[lb+i-1] = x[lb+i-1] - x[k-1] * a_lu[la+i-1+(k-1)*(ml+mu+1)];
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
      lm = i4_min ( k, m ) - 1;
      la = m - lm;
      lb = k - lm;
      for ( i = 0; i <= lm - 1; i++ )
      {
        x[k-1] = x[k-1] - a_lu[la+i-1+(k-1)*(ml+mu+1)] * x[lb+i-1];
      }
      x[k-1] = x[k-1] / a_lu[m-1+(k-1)*(ml+mu+1)];

    }
//
//  Solve ( PL )' * X = Y.
//
    if ( 0 < ml )
    {
      for ( k = n - 1; 1 <= k; k-- )
      {
        lm = i4_min ( ml, n - k );
        for ( i = 0; i < lm; i++ )
        {
          x[k-1] = x[k-1] + a_lu[m+i+(k-1)*(ml+mu+1)] * x[k+i];
        }
      }
    }
  }

  return x;
}
//****************************************************************************80

void r8cb_print ( int m, int n, int ml, int mu, double a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8CB_PRINT prints an R8CB matrix.
//
//  Discussion:
//
//    The R8CB storage format is appropriate for a compact banded matrix.
//    It is assumed that the matrix has lower and upper bandwidths ML and MU,
//    respectively.  The matrix is stored in a way similar to that used
//    by LINPACK and LAPACK for a general banded matrix, except that in
//    this mode, no extra rows are set aside for possible fillin during pivoting.
//    Thus, this storage format is suitable if you do not intend to factor
//    the matrix, or if you can guarantee that the matrix can be factored
//    without pivoting.
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
//    Input, int ML, MU, the lower and upper bandwidths.
//    ML and MU must be nonnegative, and no greater than min(M,N)-1..
//
//    Input, double A[(ML+MU+1)*N], the R8CB matrix.
//
//    Input, string TITLE, a title.
//
{
  r8cb_print_some ( m, n, ml, mu, a, 1, 1, m, n, title );

  return;
}
//****************************************************************************80

void r8cb_print_some ( int m, int n, int ml, int mu, double a[], int ilo, 
  int jlo, int ihi, int jhi, string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8CB_PRINT_SOME prints some of an R8CB matrix.
//
//  Discussion:
//
//    The R8CB storage format is appropriate for a compact banded matrix.
//    It is assumed that the matrix has lower and upper bandwidths ML and MU,
//    respectively.  The matrix is stored in a way similar to that used
//    by LINPACK and LAPACK for a general banded matrix, except that in
//    this mode, no extra rows are set aside for possible fillin during pivoting.
//    Thus, this storage format is suitable if you do not intend to factor
//    the matrix, or if you can guarantee that the matrix can be factored
//    without pivoting.
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
//    Input, int ML, MU, the lower and upper bandwidths.
//    ML and MU must be nonnegative, and no greater than min(M,N)-1.
//
//    Input, double A[(ML+MU+1)*N], the R8CB matrix.
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
    i2lo = i4_max ( i2lo, j2lo - mu );
    i2hi = i4_min ( ihi, m );
    i2hi = i4_min ( i2hi, j2hi + ml );

    for ( i = i2lo; i <= i2hi; i++ )
    {
      cout << setw(4) << i << "  ";
//
//  Print out (up to) 5 entries in row I, that lie in the current strip.
//
      for ( j = j2lo; j <= j2hi; j++ )
      {
        if ( ml < i - j || mu < j - i )
        {
          cout << "              ";
        }
        else
        {
          cout << setw(12) << a[i-j+mu+(j-1)*(ml+mu+1)] << "  ";
        }
      }
      cout << "\n";
    }
  }

  return;
# undef INCX
}
//****************************************************************************80

double *r8cb_random ( int m, int n, int ml, int mu, int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    R8CB_RANDOM randomizes an R8CB matrix.
//
//  Discussion:
//
//    The R8CB storage format is appropriate for a compact banded matrix.
//    It is assumed that the matrix has lower and upper bandwidths ML and MU,
//    respectively.  The matrix is stored in a way similar to that used
//    by LINPACK and LAPACK for a general banded matrix, except that in
//    this mode, no extra rows are set aside for possible fillin during pivoting.
//    Thus, this storage format is suitable if you do not intend to factor
//    the matrix, or if you can guarantee that the matrix can be factored
//    without pivoting.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    25 July 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the order of the matrix.
//
//    Input, int ML, MU, the lower and upper bandwidths.
//    ML and MU must be nonnegative, and no greater than N-1.
//
//    Input/output, int &SEED, a seed for the random number generator.
//
//    Output, double R8CB_RANDOM[(ML+MU+1)*N], the R8CB matrix.
//
{
  double *a;
  int i;
  int ihi;
  int ilo;
  int j;

  a = r8vec_zeros_new ( ( ml + mu + 1 ) * n );
//
//  Set the entries that correspond to matrix elements.
//
  for ( j = 0; j < n; j++ )
  {
    ilo = i4_max ( 0, j - mu );
    ihi = i4_min ( m - 1, j + ml );

    for ( i = ilo; i <= ihi; i++ )
    {
      a[i-j+mu+j*(ml+mu+1)] = r8_uniform_01 ( seed );
    }
  }

  return a;
}
//****************************************************************************80

double *r8cb_to_r8vec ( int m, int n, int ml, int mu, double *a )

//****************************************************************************80
//
//  Purpose:
//
//    R8CB_TO_R8VEC copies an R8CB matrix to a real vector.
//
//  Discussion:
//
//    In C++ and FORTRAN, this routine is not really needed.  In MATLAB,
//    a data item carries its dimensionality implicitly, and so cannot be
//    regarded sometimes as a vector and sometimes as an array.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    27 July 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns in the array.
//
//    Input, int ML, MU, the lower and upper bandwidths.
//
//    Input, double A[(ML+MU+1)*N], the array to be copied.
//
//    Output, double R8CB_TO_R8VEC[(ML+MU+1)*N], the vector.
//
{
  int i;
  int ihi;
  int ilo;
  int j;
  double *x;

  x = r8vec_zeros_new ( ( ml + mu + 1 ) * n );

  for ( j = 0; j < n; j++ )
  {
    ilo = i4_max ( mu - j, 0 );
    ihi = mu + i4_min ( ml, m - j - 1 );
    for ( i = ilo; i <= ihi; i++ )
    {
      x[i+j*(ml+mu+1)] = a[i+j*(ml+mu+1)];
    }
  }

  return x;
}
//****************************************************************************80

double *r8cb_to_r8ge ( int m, int n, int ml, int mu, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8CB_TO_R8GE copies an R8CB matrix to an R8GE matrix.
//
//  Discussion:
//
//    The R8CB storage format is appropriate for a compact banded matrix.
//    It is assumed that the matrix has lower and upper bandwidths ML and MU,
//    respectively.  The matrix is stored in a way similar to that used
//    by LINPACK and LAPACK for a general banded matrix, except that in
//    this mode, no extra rows are set aside for possible fillin during pivoting.
//    Thus, this storage format is suitable if you do not intend to factor
//    the matrix, or if you can guarantee that the matrix can be factored
//    without pivoting.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 November 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the order of the matrices.
//
//    Input, int ML, MU, the lower and upper bandwidths of A.
//    ML and MU must be nonnegative, and no greater than N-1.
//
//    Input, double A[(ML+MU+1)*N], the R8CB matrix.
//
//    Output, double R8CB_TO_R8GE[M*N], the R8GE matrix.
//
{
  double *b;
  int i;
  int j;

  b = r8vec_zeros_new ( m * n );

  for ( i = 0; i < m; i++ )
  {
    for ( j = 0; j < n; j++ )
    {
      if ( j - mu <= i && i <= j + ml )
      {
        b[i+j*m] = a[mu+i-j+j*(ml+mu+1)];
      }
    }
  }

  return b;
}
//****************************************************************************80

double *r8cb_zeros ( int n, int ml, int mu )

//****************************************************************************80
//
//  Purpose:
//
//    R8CB_ZEROS zeros an R8CB matrix.
//
//  Discussion:
//
//    The R8CB storage format is appropriate for a compact banded matrix.
//    It is assumed that the matrix has lower and upper bandwidths ML and MU,
//    respectively.  The matrix is stored in a way similar to that used
//    by LINPACK and LAPACK for a general banded matrix, except that in
//    this mode, no extra rows are set aside for possible fillin during pivoting.
//    Thus, this storage format is suitable if you do not intend to factor
//    the matrix, or if you can guarantee that the matrix can be factored
//    without pivoting.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    15 September 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//    N must be nonnegative.
//
//    Input, int ML, MU, the lower and upper bandwidths.
//    ML and MU must be nonnegative and no greater than N-1.
//
//    Output, double R8CB_ZERO[(ML+MU+1)*N), the R8CB matrix.
//
{
  double *a;

  a = r8vec_zeros_new ( ( ml + mu + 1 ) * n );

  return a;
}
//****************************************************************************80

double r8ge_det ( int n, double a_lu[], int pivot[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_DET computes the determinant of a matrix factored by R8GE_FA or R8GE_TRF.
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
//    25 March 2004
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
//    Input, double A_LU[N*N], the LU factors from R8GE_FA or R8GE_TRF.
//
//    Input, int PIVOT[N], as computed by R8GE_FA or R8GE_TRF.
//
//    Output, double R8GE_DET, the determinant of the matrix.
//
{
  double det;
  int i;

  det = 1.0;

  for ( i = 1; i <= n; i++ )
  {
    det = det * a_lu[i-1+(i-1)*n];
    if ( pivot[i-1] != i )
    {
      det = -det;
    }
  }

  return det;
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
  for ( k = 1; k <= n-1; k++ )
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
    for ( i = k+1; i <= n; i++ )
    {
      a[i-1+(k-1)*n] = -a[i-1+(k-1)*n] / a[k-1+(k-1)*n];
    }
//
//  Row elimination with column indexing.
//
    for ( j = k+1; j <= n; j++ )
    {
      if ( l != k )
      {
        t              = a[l-1+(j-1)*n];
        a[l-1+(j-1)*n] = a[k-1+(j-1)*n];
        a[k-1+(j-1)*n] = t;
      }

      for ( i = k+1; i <= n; i++ )
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

int r8ge_np_fa ( int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_NP_FA factors an R8GE matrix by nonpivoting Gaussian elimination.
//
//  Discussion:
//
//    The R8GE storage format is used for a "general" M by N matrix.  
//    A physical storage space is made for each logical entry.  The two 
//    dimensional logical array is mapped to a vector, in which storage is 
//    by columns.
//
//    R8GE_NP_FA is a version of the LINPACK routine SGEFA, but uses no
//    pivoting.  It will fail if the matrix is singular, or if any zero
//    pivot is encountered.
//
//    If R8GE_NP_FA successfully factors the matrix, R8GE_NP_SL may be called
//    to solve linear systems involving the matrix.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 October 2003
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
//    Input/output, double A[N*N].
//    On input, A contains the matrix to be factored.
//    On output, A contains information about the factorization,
//    which must be passed unchanged to R8GE_NP_SL for solutions.
//
//    Output, int R8GE_NP_FA, singularity flag.
//    0, no singularity detected.
//    nonzero, the factorization failed on the INFO-th step.
//
{
  int i;
  int j;
  int k;

  for ( k = 1; k <= n - 1; k++ )
  {
    if ( a[k-1+(k-1)*n] == 0.0 )
    {
      return k;
    }

    for ( i = k + 1; i <= n; i++ )
    {
      a[i-1+(k-1)*n] = - a[i-1+(k-1)*n] / a[k-1+(k-1)*n];
    }

    for ( j = k + 1; j <= n; j++ )
    {
      for ( i = k + 1; i <= n; i++ )
      {
        a[i-1+(j-1)*n] = a[i-1+(j-1)*n] + a[i-1+(k-1)*n] * a[k-1+(j-1)*n];
      }
    }
  }

  if ( a[n-1+(n-1)*n] == 0.0 )
  {
    return n;
  }

  return 0;
}
//****************************************************************************80

double *r8ge_np_sl ( int n, double a_lu[], double b[], int job )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_NP_SL solves a system factored by R8GE_NP_FA.
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
//    01 November 2003
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
//    Input, double A_LU[N*N], the LU factors from R8GE_NP_FA.
//
//    Input, double B[N], the right hand side.
//
//    Input, int JOB.
//    If JOB is zero, the routine will solve A * x = b.
//    If JOB is nonzero, the routine will solve A' * x = b.
//
//    Output, double R8GE_NP_SL[N], the solution.
//
{
  int i;
  int k;
  double *x;
//
//  Solve A * x = b.
//
  x = r8vec_zeros_new ( n );

  for ( i = 0; i < n; i++ )
  {
    x[i] = b[i];
  }

  if ( job == 0 )
  {
    for ( k = 0; k < n - 1; k++ )
    {
      for ( i = k + 1; i < n; i++ )
      {
        x[i] = x[i] + a_lu[i+k*n] * x[k];
      }
    }

    for ( k = n - 1; 0 <= k; k-- )
    {
      x[k] = x[k] / a_lu[k+k*n];
      for ( i = 0; i <= k - 1; i++ )
      {
        x[i] = x[i] - a_lu[i+k*n] * x[k];
      }
    }
  }
//
//  Solve A' * X = B.
//
  else
  {
    for ( k = 0; k < n; k++ )
    {
      for ( i = 0; i <= k - 1; i++ )
      {
        x[k] = x[k] - x[i] * a_lu[i+k*n];
      }
      x[k] = x[k] / a_lu[k+k*n];
    }

    for ( k = n - 2; 0 <= k; k-- )
    {
      for ( i = k + 1; i < n; i++ )
      {
        x[k] = x[k] + x[i] * a_lu[i+k*n];
      }
    }

  }

  return x;
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

double *r8vec_to_r8cb ( int m, int n, int ml, int mu, double *x )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_TO_R8CB copies an R8VEC into an R8CB matrix.
//
//  Discussion:
//
//    In C++ and FORTRAN, this routine is not really needed.  In MATLAB,
//    a data item carries its dimensionality implicitly, and so cannot be
//    regarded sometimes as a vector and sometimes as an array.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    18 March 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, N, the number of rows and columns in the array.
//
//    Input, int ML, MU, the lower and upper bandwidths.
//
//    Input, double X[(ML+MU+1)*N], the vector to be copied into the array.
//
//    Output, double R8VEC_TO_R8CB[(ML+MU+1)*N], the array.
//
{
  double *a;
  int i;
  int j;

  a = r8vec_zeros_new ( ( ml + mu + 1 ) * n );

  for ( j = 1; j <= n; j++ )
  {
    for ( i = 1; i <= ml + mu + 1; i++ )
    {
      if ( 1 <= i + j - mu - 1 & i + j - mu - 1 <= m )
      {
        a[i-1+(j-1)*(ml+mu+1)] = x[i-1+(j-1)*(ml+mu+1)];
      }
    }
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
