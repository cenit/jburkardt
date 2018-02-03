# include <cmath>
# include <cstdlib>
# include <ctime>
# include <fstream>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8gb.hpp"

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

double r8gb_det ( int n, int ml, int mu, double a_lu[], int pivot[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8GB_DET computes the determinant of a matrix factored by R8GB_FA or R8GB_TRF.
//
//  Discussion:
//
//    The R8GB storage format is used for an M by N banded matrix, with lower
//    bandwidth ML and upper bandwidth MU.  Storage includes room for ML extra
//    superdiagonals, which may be required to store nonzero entries generated 
//    during Gaussian elimination.
//
//    The original M by N matrix is "collapsed" downward, so that diagonals
//    become rows of the storage array, while columns are preserved.  The
//    collapsed array is logically 2*ML+MU+1 by N.  
//
//    The two dimensional array can be further reduced to a one dimensional
//    array, stored by columns.
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
//    N must be positive.
//
//    Input, int ML, MU, the lower and upper bandwidths.
//    ML and MU must be nonnegative, and no greater than N-1.
//
//    Input, double A_LU[(2*ML+MU+1)*N], the LU factors from R8GB_FA or R8GB_TRF.
//
//    Input, int PIVOT[N], the pivot vector, as computed by R8GB_FA
//    or R8GB_TRF.
//
//    Output, double R8GB_DET, the determinant of the matrix.
//
{
  int col = 2 * ml + mu + 1;
  double det;
  int i;

  det = 1.0;

  for ( i = 0; i < n; i++ )
  {
    det = det * a_lu[ml+mu+i*col];
  }

  for ( i = 0; i < n; i++ )
  {
    if ( pivot[i] != i+1 ) 
    {
      det = -det;
    }
  }

  return det;
}
//****************************************************************************80

double *r8gb_dif2 ( int m, int n, int ml, int mu )

//****************************************************************************80
//
//  Purpose:
//
//    R8GB_DIF2 sets up an R8GB second difference matrix.
//
//  Discussion:
//
//    The R8GB storage format is used for an M by N banded matrix, with lower bandwidth ML
//    and upper bandwidth MU.  Storage includes room for ML extra superdiagonals, 
//    which may be required to store nonzero entries generated during Gaussian 
//    elimination.
//
//    The original M by N matrix is "collapsed" downward, so that diagonals
//    become rows of the storage array, while columns are preserved.  The
//    collapsed array is logically 2*ML+MU+1 by N.  
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    20 June 2016
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
//    Output, double R8GB_DIF2[(2*ML+MU+1)*N], the R8GB matrix.
//
{
  double *a;
  int col = 2 * ml + mu + 1;
  int diag;
  int i;
  int j;

  a = r8vec_zeros_new ( ( 2 * ml + mu + 1 ) * n );

  for ( j = 1; j <= n; j++ )
  {
    for ( diag = 1; diag <= 2 * ml + mu + 1; diag++ )
    {
      i = diag + j - ml - mu - 1;

      if ( i == j )
      {
        a[diag-1+(j-1)*col] = 2.0;
      }
      else if ( i == j - 1 || i == j + 1 )
      {
        a[diag-1+(j-1)*col] = -1.0;
      }
    }
  }

  return a;
}
//****************************************************************************80

int r8gb_fa ( int n, int ml, int mu, double a[], int pivot[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8GB_FA performs a LINPACK-style PLU factorization of an R8GB matrix.
//
//  Discussion:
//
//    The R8GB storage format is used for an M by N banded matrix, with lower
//    bandwidth ML and upper bandwidth MU.  Storage includes room for ML extra
//    superdiagonals, which may be required to store nonzero entries generated 
//    during Gaussian elimination.
//
//    The original M by N matrix is "collapsed" downward, so that diagonals
//    become rows of the storage array, while columns are preserved.  The
//    collapsed array is logically 2*ML+MU+1 by N.  
//
//    The two dimensional array can be further reduced to a one dimensional
//    array, stored by columns.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    16 September 2003
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
//    SIAM, 1979,
//    ISBN13: 978-0-898711-72-1,
//    LC: QA214.L56.
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//    N must be positive.
//
//    Input, int ML, MU, the lower and upper bandwidths.
//    ML and MU must be nonnegative, and no greater than N-1.
//
//    Input/output, double A[(2*ML+MU+1)*N], the matrix in band storage.  
//    On output, A has been overwritten by the LU factors.
//
//    Output, int PIVOT[N], the pivot vector.
//
//    Output, int R8GB_FA, singularity flag.
//    0, no singularity detected.
//    nonzero, the factorization failed on the INFO-th step.
//
{
  int col = 2 * ml + mu + 1;
  int i;
  int i0;
  int j;
  int j0;
  int j1;
  int ju;
  int jz;
  int k;
  int l;
  int lm;
  int m;
  int mm;
  double t;

  m = ml + mu + 1;
//
//  Zero out the initial fill-in columns.
//
  j0 = mu + 2;
  j1 = i4_min ( n, m ) - 1;

  for ( jz = j0; jz <= j1; jz++ )
  {
    i0 = m + 1 - jz;
    for ( i = i0; i <= ml; i++ )
    {
      a[i-1+(jz-1)*col] = 0.0;
    }
  }

  jz = j1;
  ju = 0;

  for ( k = 1; k <= n - 1; k++ )
  {
//
//  Zero out the next fill-in column.
//
    jz = jz + 1;
    if ( jz <= n ) 
    {
      for ( i = 1; i <= ml; i++ )
      {
        a[i-1+(jz-1)*col] = 0.0;
      }
    }
//
//  Find L = pivot index.
//
    lm = i4_min ( ml, n - k );
    l = m;

    for ( j = m + 1; j <= m + lm; j++ )
    {
      if ( fabs ( a[l-1+(k-1)*col] ) < fabs ( a[j-1+(k-1)*col] ) )
      {
        l = j;
      }
    }

    pivot[k-1] = l + k - m;
//
//  Zero pivot implies this column already triangularized.
//
    if ( a[l-1+(k-1)*col] == 0.0 )
    {
      cerr << "\n";
      cerr << "R8GB_FA - Fatal error!\n";
      cerr << "  Zero pivot on step " << k << "\n";
      exit ( 1 );
    }
//
//  Interchange if necessary.
//
    t                = a[l-1+(k-1)*col];
    a[l-1+(k-1)*col] = a[m-1+(k-1)*col];
    a[m-1+(k-1)*col] = t;
//
//  Compute multipliers.
//
    for ( i = m + 1; i <= m + lm; i++ )
    {
      a[i-1+(k-1)*col] = - a[i-1+(k-1)*col] / a[m-1+(k-1)*col];
    }
//
//  Row elimination with column indexing.
//
    ju = i4_max ( ju, mu + pivot[k-1] );
    ju = i4_min ( ju, n );
    mm = m;

    for ( j = k + 1; j <= ju; j++ )
    {
      l = l - 1;
      mm = mm - 1;

      if ( l != mm )
      {
        t                 = a[l-1+(j-1)*col];
        a[l-1+(j-1)*col]  = a[mm-1+(j-1)*col];
        a[mm-1+(j-1)*col] = t;
      }
      for ( i = 1; i <= lm; i++ )
      {
        a[mm+i-1+(j-1)*col] = a[mm+i-1+(j-1)*col] 
          + a[mm-1+(j-1)*col] * a[m+i-1+(k-1)*col];
      }
    }
  }

  pivot[n-1] = n;

  if ( a[m-1+(n-1)*col] == 0.0 )
  {
    cerr << "\n";
    cerr << "R8GB_FA - Fatal error!\n";
    cerr << "  Zero pivot on step " << n << "\n";
    exit ( 1 );
  }

  return 0;
}
//****************************************************************************80

double *r8gb_indicator ( int m, int n, int ml, int mu )

//****************************************************************************80
//
//  Purpose:
//
//    R8GB_INDICATOR sets up an R8GB indicator matrix.
//
//  Discussion:
//
//    Note that the R8GB storage format includes extra room for
//    fillin entries that occur during Gauss elimination.  This routine
//    will leave those values at 0.
//
//    The R8GB storage format is used for an M by N banded matrix, with lower
//    bandwidth ML and upper bandwidth MU.  Storage includes room for ML extra
//    superdiagonals, which may be required to store nonzero entries generated 
//    during Gaussian elimination.
//
//    The original M by N matrix is "collapsed" downward, so that diagonals
//    become rows of the storage array, while columns are preserved.  The
//    collapsed array is logically 2*ML+MU+1 by N.  
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    16 March 2005
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
//    Output, double R8GB_INDICATOR[(2*ML+MU+1)*N], the R8GB matrix.
//
{
  double *a;
  int col = 2 * ml + mu + 1;
  int diag;
  int fac;
  int i;
  int j;
  int k;

  a = new double[(2*ml+mu+1)*n];

  fac = i4_power ( 10, i4_log_10 ( n ) + 1 );
  k = 0;

  for ( j = 1; j <= n; j++ )
  {
    for ( diag = 1; diag <= 2 * ml + mu + 1; diag++ )
    {
      i = diag + j - ml - mu - 1;

      if ( 1 <= i && i <= m && i - ml <= j && j <= i + mu )
      {
        a[diag-1+(j-1)*col] = ( double ) ( fac * i + j );
      }
      else if ( 1 <= i && i <= m && i - ml <= j && j <= i + mu + ml )
      {
        a[diag-1+(j-1)*col] = 0.0;
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

double *r8gb_ml ( int n, int ml, int mu, double a_lu[], int pivot[], double x[], 
  int job )

//****************************************************************************80
//
//  Purpose:
//
//    R8GB_ML computes A * x or A' * X, using R8GB_FA factors.
//
//  Discussion:
//
//    The R8GB storage format is used for an M by N banded matrix, with lower
//    bandwidth ML and upper bandwidth MU.  Storage includes room for ML extra
//    superdiagonals, which may be required to store nonzero entries generated 
//    during Gaussian elimination.
//
//    The original M by N matrix is "collapsed" downward, so that diagonals
//    become rows of the storage array, while columns are preserved.  The
//    collapsed array is logically 2*ML+MU+1 by N.  
//
//    The two dimensional array can be further reduced to a one dimensional
//    array, stored by columns.
//
//    It is assumed that R8GB_FA has overwritten the original matrix
//    information by LU factors.  R8GB_ML is able to reconstruct the
//    original matrix from the LU factor data.
//
//    R8GB_ML allows the user to check that the solution of a linear
//    system is correct, without having to save an unfactored copy
//    of the matrix.
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
//    N must be positive.
//
//    Input, int ML, MU, the lower and upper bandwidths.
//    ML and MU must be nonnegative, and no greater than N-1.
//
//    Input, double A_LU[(2*ML+MU+1)*N], the LU factors from R8GB_FA.
//
//    Input, int PIVOT[N], the pivot vector computed by R8GB_FA.
//
//    Input, double X[N], the vector to be multiplied.
//
//    Input, int JOB, specifies the operation to be done:
//    JOB = 0, compute A * x.
//    JOB nonzero, compute A' * X.
//
//    Output, double R8GB_ML[N], the result of the multiplication.
//
{
  double *b;
  int col = 2 * ml + mu + 1;
  int i;
  int ihi;
  int ilo;
  int j;
  int jhi;
  int k;
  double temp;

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
      ilo = i4_max ( 1, j - ml - mu );
      for ( i = ilo; i <= j - 1; i++ )
      {
        b[i-1] = b[i-1] + a_lu[i-j+ml+mu+(j-1)*col] * b[j-1];
      }
      b[j-1] = a_lu[j-j+ml+mu+(j-1)*col] * b[j-1];
    }
//
//  B = PL * Y = PL * U * X = A * x.
//
    for ( j = n - 1; 1 <= j; j-- )
    {
      ihi = i4_min ( n, j + ml );
      for ( i = j + 1; i <= ihi; i++ )
      {
        b[i-1] = b[i-1] - a_lu[i-j+ml+mu+(j-1)*col] * b[j-1];
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
//  Y = ( PL )' * X.
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

      jhi = i4_min ( n, j + ml );
      for ( i = j + 1; i <= jhi; i++ )
      {
        b[j-1] = b[j-1] - b[i-1] * a_lu[i-j+ml+mu+(j-1)*col];
      }

    }
//
//  B = U' * Y = ( PL * U )' * X = A' * X.
//
    for ( i = n; 1 <= i; i-- )
    {
      jhi = i4_min ( n, i + ml + mu );
      for ( j = i + 1; j <= jhi; j++ )
      {
        b[j-1] = b[j-1] + b[i-1] * a_lu[i-j+ml+mu+(j-1)*col];
      }
      b[i-1] = b[i-1] * a_lu[i-i+ml+mu+(i-1)*col];
    }

  }

  return b;
}
//****************************************************************************80

double *r8gb_mu ( int n, int ml, int mu, double a_lu[], int pivot[], double x[], 
  int job )

//****************************************************************************80
//
//  Purpose:
//
//    R8GB_MU computes A * x or A' * X, using R8GB_TRF factors.
//
//  Warning:
//
//    This routine must be updated to allow for rectangular matrices.
//
//  Discussion:
//
//    The R8GB storage format is used for an M by N banded matrix, with lower
//    bandwidth ML and upper bandwidth MU.  Storage includes room for ML extra
//    superdiagonals, which may be required to store nonzero entries generated 
//    during Gaussian elimination.
//
//    The original M by N matrix is "collapsed" downward, so that diagonals
//    become rows of the storage array, while columns are preserved.  The
//    collapsed array is logically 2*ML+MU+1 by N.  
//
//    It is assumed that R8GB_TRF has overwritten the original matrix
//    information by LU factors.  R8GB_MU is able to reconstruct the
//    original matrix from the LU factor data.
//
//    R8GB_MU allows the user to check that the solution of a linear
//    system is correct, without having to save an unfactored copy
//    of the matrix.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    15 October 2003
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Edward Anderson, Zhaojun Bai, Christian Bischof, Susan Blackford, 
//    James Demmel, Jack Dongarra, Jeremy Du Croz, Anne Greenbaum, 
//    Sven Hammarling, Alan McKenney, Danny Sorensen,
//    LAPACK User's Guide,
//    Second Edition,
//    SIAM, 1995.
//
//  Parameters:
//
//    Input, int N, the order of the matrix.
//    N must be positive.
//
//    Input, int ML, MU, the lower and upper bandwidths.
//    ML and MU must be nonnegative, and no greater than N-1.
//
//    Input, double A_LU[(2*ML+MU+1)*N], the LU factors from R8GB_TRF.
//
//    Input, int PIVOT[N], the pivot vector computed by R8GB_TRF.
//
//    Input, double X[N], the vector to be multiplied.
//
//    Input, int JOB, specifies the operation to be done:
//    JOB = 0, compute A * x.
//    JOB nonzero, compute A' * X.
//
//    Output, double R8GB_MU[N], the result of the multiplication.
//
{
  double *b;
  int i;
  int ihi;
  int ilo;
  int j;
  int jhi;
  int k;
  double t;

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
      ilo = i4_max ( 1, j - ml - mu );
      for ( i = ilo; i <= j - 1; i++ )
      {
        b[i-1] = b[i-1] + a_lu[i-j+ml+mu+(j-1)*(2*ml+mu+1)] * b[j-1];
      }
      b[j-1] = a_lu[j-j+ml+mu+(j-1)*(2*ml+mu+1)] * b[j-1];
    }
//
//  B = PL * Y = PL * U * X = A * x.
//
    for ( j = n - 1; 1 <= j; j-- )
    {
      ihi = i4_min ( n, j + ml );
      for ( i = j + 1; i <= ihi; i++ )
      {
        b[i-1] = b[i-1] + a_lu[i-j+ml+mu+(j-1)*(2*ml+mu+1)] * b[j-1];
      }

      k = pivot[j-1];

      if ( k != j )
      {
        t      = b[k-1];
        b[k-1] = b[j-1];
        b[j-1] = t;
      }
    }
  }
  else
  {
//
//  Y = ( PL )' * X.
//
    for ( j = 1; j <= n - 1; j++ )
    {
      k = pivot[j-1];

      if ( k != j )
      {
        t      = b[k-1];
        b[k-1] = b[j-1];
        b[j-1] = t;
      }

      jhi = i4_min ( n, j + ml );
      for ( i = j + 1; i <= jhi; i++ )
      {
        b[j-1] = b[j-1] + b[i-1] * a_lu[i-j+ml+mu+(j-1)*(2*ml+mu+1)];
      }
    }
//
//  B = U' * Y = ( PL * U )' * X = A' * X.
//
    for ( i = n; 1 <= i; i-- )
    {
      jhi = i4_min ( n, i + ml + mu );
      for ( j = i + 1; j <= jhi; j++ )
      {
        b[j-1] = b[j-1] + b[i-1] * a_lu[i-j+ml+mu+(j-1)*(2*ml+mu+1)];
      }
      b[i-1] = b[i-1] * a_lu[i-i+ml+mu+(i-1)*(2*ml+mu+1)];
    }
  }

  return b;
}
//****************************************************************************80

double *r8gb_mtv ( int m, int n, int ml, int mu, double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8GB_MTV multilies a vector times an R8GB matrix.
//
//  Discussion:
//
//    The R8GB storage format is used for an M by N banded matrix, with lower
//    bandwidth ML and upper bandwidth MU.  Storage includes room for ML extra
//    superdiagonals, which may be required to store nonzero entries generated 
//    during Gaussian elimination.
//
//    The original M by N matrix is "collapsed" downward, so that diagonals
//    become rows of the storage array, while columns are preserved.  The
//    collapsed array is logically 2*ML+MU+1 by N.  
//
//    The two dimensional array can be further reduced to a one dimensional
//    array, stored by columns.
//
//    For our purposes, X*A and A'*X mean the same thing.
//
//    LINPACK and LAPACK storage of general band matrices requires
//    an extra ML upper diagonals for possible fill in entries during
//    Gauss elimination.  This routine does not access any entries
//    in the fill in diagonals, because it assumes that the matrix
//    has NOT had Gauss elimination applied to it.  If the matrix
//    has been Gauss eliminated, then the routine R8GB_MU must be
//    used instead.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    16 September 2003
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
//    Input, double A[(2*ML+MU+1)*N], the R8GB matrix.
//
//    Input, double X[M], the vector to be multiplied by A.
//
//    Output, double R8GB_MTV[N], the product X*A or A'*X.
//
{
  double *b;
  int col = 2 * ml + mu + 1;
  int i;
  int ihi;
  int ilo;
  int j;

  b = r8vec_zeros_new ( n );

  for ( j = 1; j <= n; j++ )
  {
    ilo = i4_max ( 1, j - mu );
    ihi = i4_min ( m, j + ml );
    for ( i = ilo; i <= ihi; i++ )
    {
      b[j-1] = b[j-1] + x[i-1] * a[i-j+ml+mu+(j-1)*col];
    }
  }

  return b;
}
//****************************************************************************80

double *r8gb_mv ( int m, int n, int ml, int mu, double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8GB_MV multiplies an R8GB matrix times a vector.
//
//  Discussion:
//
//    The R8GB storage format is used for an M by N banded matrix, with lower
//    bandwidth ML and upper bandwidth MU.  Storage includes room for ML extra
//    superdiagonals, which may be required to store nonzero entries generated 
//    during Gaussian elimination.
//
//    The original M by N matrix is "collapsed" downward, so that diagonals
//    become rows of the storage array, while columns are preserved.  The
//    collapsed array is logically 2*ML+MU+1 by N.  
//
//    The two dimensional array can be further reduced to a one dimensional
//    array, stored by columns.
//
//    LINPACK and LAPACK storage of general band matrices requires
//    an extra ML upper diagonals for possible fill in entries during
//    Gauss elimination.  This routine does not access any entries
//    in the fill in diagonals, because it assumes that the matrix
//    has NOT had Gauss elimination applied to it.  If the matrix
//    has been Gauss eliminated, then the routine R8GB_MU must be
//    used instead.
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
//    Input, int M, the number of rows of the matrix.
//    M must be positive.
//
//    Input, int N, the number of columns of the matrix.
//    N must be positive.
//
//    Input, int ML, MU, the lower and upper bandwidths.
//    ML and MU must be nonnegative, and no greater than min(M,N)-1.
//
//    Input, double A[(2*ML+MU+1)*N], the R8GB matrix.
//
//    Input, double X[N], the vector to be multiplied by A.
//
//    Output, double R8GB_MV[M], the product A * x.
//
{
  double *b;
  int col = 2 * ml + mu + 1;
  int i;
  int j;
  int jhi;
  int jlo;

  b = r8vec_zeros_new ( m );

  for ( i = 1; i <= m; i++ )
  {
    jlo = i4_max ( 1, i - ml );
    jhi = i4_min ( n, i + mu );
    for ( j = jlo; j <= jhi; j++ )
    {
      b[i-1] = b[i-1] + a[i-j+ml+mu+(j-1)*col] * x[j-1];
    }
  }

  return b;
}
//****************************************************************************80

int r8gb_nz_num ( int m, int n, int ml, int mu, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8GB_NZ_NUM counts the nonzeroes in an R8GB matrix.
//
//  Discussion:
//
//    The R8GB storage format is used for an M by N banded matrix, with lower
//    bandwidth ML and upper bandwidth MU.  Storage includes room for ML extra
//    superdiagonals, which may be required to store nonzero entries generated 
//    during Gaussian elimination.
//
//    The original M by N matrix is "collapsed" downward, so that diagonals
//    become rows of the storage array, while columns are preserved.  The
//    collapsed array is logically 2*ML+MU+1 by N.  
//
//    LINPACK and LAPACK band storage requires that an extra ML
//    superdiagonals be supplied to allow for fillin during Gauss
//    elimination.  Even though a band matrix is described as
//    having an upper bandwidth of MU, it effectively has an
//    upper bandwidth of MU+ML.  This routine will examine
//    values it finds in these extra bands, so that both unfactored
//    and factored matrices can be handled.
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
//    Input, int M, the number of rows of the matrix.
//    M must be positive.
//
//    Input, int N, the number of columns of the matrix.
//    N must be positive.
//
//    Input, int ML, MU, the lower and upper bandwidths.
//    ML and MU must be nonnegative, and no greater than min(M,N)-1.
//
//    Input, double A[(2*ML+MU+1)*N], the R8GB matrix.
//
//    Output, int R8GB_NZ_NUM, the number of nonzero entries in A.
//
{
  int i;
  int j;
  int jhi;
  int jlo;
  int nz_num;

  nz_num = 0;

  for ( i = 0; i < m; i++ )
  {
    jlo = i4_max ( 0, i - ml );
    jhi = i4_min ( n - 1, i + mu + ml );
    for ( j = jlo; j <= jhi; j++ )
    {
      if ( a[i-j+ml+mu+j*(2*ml+mu+1)] != 0.0 )
      {
        nz_num = nz_num + 1;
      }
    }
  }

  return nz_num;
}
//****************************************************************************80

void r8gb_print ( int m, int n, int ml, int mu, double a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8GB_PRINT prints an R8GB matrix.
//
//  Discussion:
//
//    The R8GB storage format is used for an M by N banded matrix, with lower
//    bandwidth ML and upper bandwidth MU.  Storage includes room for ML extra
//    superdiagonals, which may be required to store nonzero entries generated 
//    during Gaussian elimination.
//
//    The original M by N matrix is "collapsed" downward, so that diagonals
//    become rows of the storage array, while columns are preserved.  The
//    collapsed array is logically 2*ML+MU+1 by N.  
//
//    The two dimensional array can be further reduced to a one dimensional
//    array, stored by columns.
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
//    Input, int ML, MU, the lower and upper bandwidths.
//    ML and MU must be nonnegative, and no greater than min(M,N)-1..
//
//    Input, double A[(2*ML+MU+1)*N], the R8GB matrix.
//
//    Input, string TITLE, a title.
//
{
  r8gb_print_some ( m, n, ml, mu, a, 1, 1, m, n, title );

  return;
}
//****************************************************************************80

void r8gb_print_some ( int m, int n, int ml, int mu, double a[], int ilo, 
  int jlo, int ihi, int jhi, string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8GB_PRINT_SOME prints some of an R8GB matrix.
//
//  Discussion:
//
//    The R8GB storage format is used for an M by N banded matrix, with lower
//    bandwidth ML and upper bandwidth MU.  Storage includes room for ML extra
//    superdiagonals, which may be required to store nonzero entries generated 
//    during Gaussian elimination.
//
//    The original M by N matrix is "collapsed" downward, so that diagonals
//    become rows of the storage array, while columns are preserved.  The
//    collapsed array is logically 2*ML+MU+1 by N.  
//
//    The two dimensional array can be further reduced to a one dimensional
//    array, stored by columns.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    19 June 2016
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
//    ML and MU must be nonnegative, and no greater than min(M,N)-1..
//
//    Input, double A[(2*ML+MU+1)*N], the R8GB matrix.
//
//    Input, int ILO, JLO, IHI, JHI, designate the first row and
//    column, and the last row and column to be printed.
//
//    Input, string TITLE, a title.
//
{
# define INCX 5

  int col = 2 * ml + mu + 1;
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
//
//  Print out (up to) 5 entries in row I, that lie in the current strip.
//
      cout << setw(6) << i << "  ";
      for ( j = j2lo; j <= j2hi; j++ )
      {
        if ( mu < j - i || ml < i - j )
        {
          cout << "            ";
        }
        else
        {
          cout << setw(10) << a[i-j+ml+mu+(j-1)*col] << "  ";
        }
      }
      cout << "\n";
    }
  }

  return;
# undef INCX
}
//****************************************************************************80

double *r8gb_random ( int m, int n, int ml, int mu, int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    R8GB_RANDOM randomizes an R8GB matrix.
//
//  Discussion:
//
//    The R8GB storage format is used for an M by N banded matrix, with lower
//    bandwidth ML and upper bandwidth MU.  Storage includes room for ML extra
//    superdiagonals, which may be required to store nonzero entries generated 
//    during Gaussian elimination.
//
//    The original M by N matrix is "collapsed" downward, so that diagonals
//    become rows of the storage array, while columns are preserved.  The
//    collapsed array is logically 2*ML+MU+1 by N.  
//
//    The two dimensional array can be further reduced to a one dimensional
//    array, stored by columns.
//
//    LINPACK and LAPACK band storage requires that an extra ML
//    superdiagonals be supplied to allow for fillin during Gauss
//    elimination.  Even though a band matrix is described as
//    having an upper bandwidth of MU, it effectively has an
//    upper bandwidth of MU+ML.  This routine assumes it is setting
//    up an unfactored matrix, so it only uses the first MU upper bands,
//    and does not place nonzero values in the fillin bands.
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
//    Input, int M, the number of rows of the matrix.
//    M must be positive.
//
//    Input, int N, the number of columns of the matrix.
//    N must be positive.
//
//    Input, int ML, MU, the lower and upper bandwidths.
//    ML and MU must be nonnegative, and no greater than min(M,N)-1.
//
//    Input/output, int &SEED, a seed for the random number generator.
//
//    Output, double R8GB_RANDOM[(2*ML+MU+1)*N], the R8GB matrix.
//
{
  double *a;
  int col = 2 * ml + mu + 1;
  int i;
  int j;
  int row;

  a = new double[(2*ml+mu+1)*n];

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < col; i++ )
    {
      a[i+j*col] = 0.0;
    }
  }

  for ( j = 1; j <= n; j++ )
  {
    for ( row = 1; row <= col; row++ )
    {
      i = row + j - ml - mu - 1;
      if ( ml < row && 1 <= i && i <= m )
      {
        a[row-1+(j-1)*col] = r8_uniform_01 ( seed );
      }
      else
      {
        a[(row-1)+(j-1)*col] = 0.0;
      }
    }
  }
  return a;
}
//****************************************************************************80

double *r8gb_sl ( int n, int ml, int mu, double a_lu[], int pivot[], 
  double b[], int job )

//****************************************************************************80
//
//  Purpose:
//
//    R8GB_SL solves a system factored by R8GB_FA.
//
//  Discussion:
//
//    The R8GB storage format is used for an M by N banded matrix, with lower
//    bandwidth ML and upper bandwidth MU.  Storage includes room for ML extra
//    superdiagonals, which may be required to store nonzero entries generated 
//    during Gaussian elimination.
//
//    The original M by N matrix is "collapsed" downward, so that diagonals
//    become rows of the storage array, while columns are preserved.  The
//    collapsed array is logically 2*ML+MU+1 by N.  
//
//    The two dimensional array can be further reduced to a one dimensional
//    array, stored by columns.
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
//    Original FORTRAN77 version by Dongarra, Bunch, Moler, Stewart.
//    C++ version by John Burkardt.
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
//    Input, int ML, MU, the lower and upper bandwidths.
//    ML and MU must be nonnegative, and no greater than N-1.
//
//    Input, double A_LU[(2*ML+MU+1)*N], the LU factors from R8GB_FA.
//
//    Input, int PIVOT[N], the pivot vector from R8GB_FA.
//
//    Input, double B[N], the right hand side vector.
//
//    Input, int JOB.
//    0, solve A * x = b.
//    nonzero, solve A' * x = b.
//
//    Output, double R8GB_SL[N], the solution.
//
{
  int col = 2 * ml + mu + 1;
  int i;
  int k;
  int l;
  int la;
  int lb;
  int lm;
  int m;
  double t;
  double *x;

  x = new double[n];

  for ( i = 0; i < n; i++ )
  {
    x[i] = b[i];
  }

  m = mu + ml + 1;
//
//  Solve A * x = b.
//
  if ( job == 0 )
  {
//
//  Solve L * Y = B.
//
    if ( 1 <= ml )
    {
      for ( k = 1; k <= n - 1; k++ )
      {
        lm = i4_min ( ml, n - k );
        l = pivot[k-1];

        if ( l != k )
        {
          t      = x[l-1];
          x[l-1] = x[k-1];
          x[k-1] = t;
        }
        for ( i = 1; i <= lm; i++ )
        {
          x[k+i-1] = x[k+i-1] + x[k-1] * a_lu[m+i-1+(k-1)*col];
        }
      }
    }
//
//  Solve U * X = Y.
//
    for ( k = n; 1 <= k; k-- )
    {
      x[k-1] = x[k-1] / a_lu[m-1+(k-1)*col];
      lm = i4_min ( k, m ) - 1;
      la = m - lm;
      lb = k - lm;
      for ( i = 0; i <= lm-1; i++ )
      {
        x[lb+i-1] = x[lb+i-1] - x[k-1] * a_lu[la+i-1+(k-1)*col];
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
      for ( i = 0; i <= lm-1; i++ )
      {
        x[k-1] = x[k-1] - x[lb+i-1] * a_lu[la+i-1+(k-1)*col];
      }
      x[k-1] = x[k-1] / a_lu[m-1+(k-1)*col];
    }
//
//  Solve L' * X = Y.
//
    if ( 1 <= ml )
    {
      for ( k = n - 1; 1 <= k; k-- )
      {
        lm = i4_min ( ml, n - k );
        for ( i = 1; i <= lm; i++ )
        {
          x[k-1] = x[k-1] + x[k+i-1] * a_lu[m+i-1+(k-1)*col];
        }
        l = pivot[k-1];

        if ( l != k )
        {
          t      = x[l-1];
          x[l-1] = x[k-1];
          x[k-1] = t;
        }
      }
    }
  }

  return x;
}
//****************************************************************************80

double *r8gb_to_r8vec ( int m, int n, int ml, int mu, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8GB_TO_R8VEC copies an R8GB matrix to a real vector.
//
//  Discussion:
//
//    In C++  and FORTRAN, this routine is not really needed.  In MATLAB,
//    a data item carries its dimensionality implicitly, and so cannot be
//    regarded sometimes as a vector and sometimes as an array.
//
//    The R8GB storage format is used for an M by N banded matrix, with lower
//    bandwidth ML and upper bandwidth MU.  Storage includes room for ML extra
//    superdiagonals, which may be required to store nonzero entries generated 
//    during Gaussian elimination.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 March 2004
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
//    Input, double A[(2*ML+MU+1)*N], the array.
//
//    Output, double R8GB_TO_R8VEC[(2*ML+MU+1)*N], the vector.
//
{
  int i;
  int ihi;
  int ilo;
  int j;
  double *x;

  x = new double[(2*ml+mu+1)*n];

  for ( j = 1; j <= n; j++ )
  {
    ihi = i4_min ( ml + mu, ml + mu + 1 - j );
    for ( i = 1; i <= ihi; i++ )
    {
      x[i-1+(j-1)*(2*ml+mu+1)] = 0.0;
    }

    ilo = i4_max ( ihi + 1, 1 );
    ihi = i4_min ( 2*ml+mu+1, ml+mu+m+1-j );
    for ( i = ilo; i <= ihi; i++ )
    {
      x[i-1+(j-1)*(2*ml+mu+1)] = a[i-1+(j-1)*(2*ml+mu+1)];
    }

    ilo = ihi + 1;
    ihi = 2*ml+mu+1;
    for ( i = ilo; i <= ihi; i++ )
    {
      x[i-1+(j-1)*(2*ml+mu+1)] = 0.0;
    }

  }

  return x;
}
//****************************************************************************80

double *r8gb_to_r8ge ( int m, int n, int ml, int mu, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8GB_TO_R8GE copies an R8GB matrix to an R8GE matrix.
//
//  Discussion:
//
//    The R8GB storage format is used for an M by N banded matrix, with lower
//    bandwidth ML and upper bandwidth MU.  Storage includes room for ML extra
//    superdiagonals, which may be required to store nonzero entries generated 
//    during Gaussian elimination.
//
//    The original M by N matrix is "collapsed" downward, so that diagonals
//    become rows of the storage array, while columns are preserved.  The
//    collapsed array is logically 2*ML+MU+1 by N.  
//
//    The two dimensional array can be further reduced to a one dimensional
//    array, stored by columns.
//
//    LINPACK and LAPACK band storage requires that an extra ML
//    superdiagonals be supplied to allow for fillin during Gauss
//    elimination.  Even though a band matrix is described as
//    having an upper bandwidth of MU, it effectively has an
//    upper bandwidth of MU+ML.  This routine will copy nonzero
//    values it finds in these extra bands, so that both unfactored
//    and factored matrices can be handled.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    19 May 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, the number of rows of the matrices.
//    M must be positive.
//
//    Input, int N, the number of columns of the matrices.
//    N must be positive.
//
//    Input, int ML, MU, the lower and upper bandwidths of A1.
//    ML and MU must be nonnegative, and no greater than min(M,N)-1.
//
//    Input, double A[(2*ML+MU+1)*N], the R8GB matrix.
//
//    Output, double R8GB_TO_R8GE[M*N], the R8GE matrix.
//
{
  double *b;
  int i;
  int j;

  b = new double[m*n];

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < m; i++ )
    {
      b[i+j*m] = 0.0;
    }
  }

  for ( i = 1; i <= m; i++ )
  {
    for ( j = 1; j <= n; j++ )
    {
      if ( i - ml <= j && j <= i + mu )
      {
        b[i-1+(j-1)*m] = a[ml+mu+i-j+(j-1)*(2*ml+mu+1)];
      }
      else
      {
        b[i-1+(j-1)*m] = 0.0;
      }
    }
  }

  return b;
}
//****************************************************************************80

int r8gb_trf ( int m, int n, int ml, int mu, double a[], int pivot[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8GB_TRF performs a LAPACK-style PLU factorization of an R8GB matrix.
//
//  Discussion:
//
//    The R8GB storage format is used for an M by N banded matrix, with lower
//    bandwidth ML and upper bandwidth MU.  Storage includes room for ML extra
//    superdiagonals, which may be required to store nonzero entries generated 
//    during Gaussian elimination.
//
//    The original M by N matrix is "collapsed" downward, so that diagonals
//    become rows of the storage array, while columns are preserved.  The
//    collapsed array is logically 2*ML+MU+1 by N.  
//
//    The two dimensional array can be further reduced to a one dimensional
//    array, stored by columns.
//
//    This is a simplified, standalone version of the LAPACK
//    routine SGBTRF.
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
//    Original FORTRAN77 version by Anderson, Bai, Bischof, Blackford,
//    Demmel, Dongarra, DuCroz, Greenbaum, Hammarling, McKenney, Sorensen.
//    C++ version by John Burkardt.
//
//  Reference:
//
//    Edward Anderson, Zhaojun Bai, Christian Bischof, Susan Blackford, 
//    James Demmel, Jack Dongarra, Jeremy Du Croz, Anne Greenbaum, 
//    Sven Hammarling, Alan McKenney, Danny Sorensen,
//    LAPACK User's Guide,
//    Second Edition,
//    SIAM, 1995.
//
//  Parameters:
//
//    Input, int M, the number of rows of the matrix A.  0 <= M.
//
//    Input, int N, the number of columns of the matrix A.  0 <= N.
//
//    Input, int ML, the number of subdiagonals within the band of A.
//    0 <= ML.
//
//    Input, int MU, the number of superdiagonals within the band of A.
//    0 <= MU.
//
//    Input/output, double A[(2*ML+MU+1)*N].  On input, the matrix A in band 
//    storage, and on output, information about the PLU factorization.
//
//    Output, int PIVOT(min(M,N)), the pivot indices;
//    for 1 <= i <= min(M,N), row i of the matrix was interchanged with
//    row IPIV(i).
//
//    Output, int R8GB_TRF, error flag.
//    = 0: successful exit;
//    < 0: an input argument was illegal;
//    > 0: if INFO = +i, U(i,i) is exactly zero. The factorization
//         has been completed, but the factor U is exactly
//         singular, and division by zero will occur if it is used
//         to solve a system of equations.
//
{
  int i;
  int info;
  int j;
  int jp;
  int ju;
  int k;
  int km;
  int kv;
  double piv;
  double temp;

  info = 0;
//
//  KV is the number of superdiagonals in the factor U, allowing for fill-in.
//
  kv = mu + ml;
//
//  Set fill-in elements in columns MU+2 to KV to zero.
//
  for ( j = mu+2; j <= i4_min ( kv, n ); j++ )
  {
    for ( i = kv - j + 1; i <= ml; i++ )
    {
      a[i-1+(j-1)*(2*ml+mu+1)] = 0.0;
    }
  }
//
//  JU is the index of the last column affected by the current stage
//  of the factorization.
//
  ju = 1;

  for ( j = 1; j <= i4_min ( m, n ); j++ )
  {
//
//  Set the fill-in elements in column J+KV to zero.
//
    if ( j + kv <= n )
    {
      for ( i = 1; i <= ml; i++ )
      {
        a[i-1+(j+kv-1)*(2*ml+mu+1)] = 0.0;
      }
    }
//
//  Find the pivot and test for singularity.
//  KM is the number of subdiagonal elements in the current column.
//
    km = i4_min ( ml, m-j );

    piv = fabs ( a[kv+(j-1)*(2*ml+mu+1)] );
    jp = kv + 1;

    for ( i = kv + 2; i <= kv + km + 1; i++ )
    {
      if ( piv < fabs ( a[i-1+(j-1)*(2*ml+mu+1)] ) )
      {
        piv = fabs ( a[i-1+(j-1)*(2*ml+mu+1)] );
        jp = i;
      }
    }

    jp = jp - kv;

    pivot[j-1] = jp + j - 1;

    if ( a[kv+jp-1+(j-1)*(2*ml+mu+1)] != 0.0 )
    {
      ju = i4_max ( ju, i4_min ( j + mu + jp - 1, n ) );
//
//  Apply interchange to columns J to JU.
//
      if ( jp != 1 )
      {
        for ( i = 0; i <= ju - j; i++ )
        {
          temp = a[kv+jp-i-1+(j+i-1)*(2*ml+mu+1)];
          a[kv+jp-i-1+(j+i-1)*(2*ml+mu+1)] = a[kv+1-i-1+(j+i-1)*(2*ml+mu+1)];
          a[kv+1-i-1+(j+i-1)*(2*ml+mu+1)] = temp; 
        }
      }
//
//  Compute the multipliers.
//
      if ( 0 < km )
      {
        for ( i = kv+2; i <= kv+km+1; i++ )
        {
          a[i-1+(j-1)*(2*ml+mu+1)] = a[i-1+(j-1)*(2*ml+mu+1)] 
            / a[kv+(j-1)*(2*ml+mu+1)];
        }
//
//  Update the trailing submatrix within the band.
//
        if ( j < ju )
        {
          for ( k = 1; k <= ju - j; k++ )
          {
            if ( a[kv-k+(j+k-1)*(2*ml+mu+1)] != 0.0 )
            {
              for ( i = 1; i <= km; i++ )
              {
                a[kv+i-k+(j+k-1)*(2*ml+mu+1)] = a[kv+i-k+(j+k-1)*(2*ml+mu+1)] 
                  - a[kv+i+(j-1)*(2*ml+mu+1)] * a[kv-k+(j+k-1)*(2*ml+mu+1)];
              }
            }
          }
        }
      }
    }
    else
//
//  If pivot is zero, set INFO to the index of the pivot
//  unless a zero pivot has already been found.
//
    {
      if ( info == 0 )
      {
        info = j;
      }
    }
  }

  return info;
}
//****************************************************************************80

double *r8gb_trs ( int n, int ml, int mu, int nrhs, char trans, double a[], 
  int pivot[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8GB_TRS solves a linear system factored by R8GB_TRF.
//
//  Discussion:
//
//    The R8GB storage format is used for an M by N banded matrix, with lower
//    bandwidth ML and upper bandwidth MU.  Storage includes room for ML extra
//    superdiagonals, which may be required to store nonzero entries generated 
//    during Gaussian elimination.
//
//    The original M by N matrix is "collapsed" downward, so that diagonals
//    become rows of the storage array, while columns are preserved.  The
//    collapsed array is logically 2*ML+MU+1 by N.  
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    26 January 2004
//
//  Author:
//
//    Original FORTRAN77 version by Anderson, Bai, Bischof, Blackford,
//    Demmel, Dongarra, DuCroz, Greenbaum, Hammarling, McKenney, Sorensen.
//    C++ version by John Burkardt.
//
//  Reference:
//
//    Edward Anderson, Zhaojun Bai, Christian Bischof, Susan Blackford, 
//    James Demmel, Jack Dongarra, Jeremy Du Croz, Anne Greenbaum, 
//    Sven Hammarling, Alan McKenney, Danny Sorensen,
//    LAPACK User's Guide,
//    Second Edition,
//    SIAM, 1995.
//
//  Parameters:
//
//    Input, int N, the order of the matrix A.
//    N must be positive.
//
//    Input, int ML, the number of subdiagonals within the band of A.
//    ML must be at least 0, and no greater than N - 1.
//
//    Input, int MU, the number of superdiagonals within the band of A.
//    MU must be at least 0, and no greater than N - 1.
//
//    Input, int NRHS, the number of right hand sides and the number of
//    columns of the matrix B.  NRHS must be positive.
//
//    Input, char TRANS, specifies the form of the system.
//    'N':  A * x = b  (No transpose)
//    'T':  A'* X = B  (Transpose)
//    'C':  A'* X = B  (Conjugate transpose = Transpose)
//
//    Input, double A[(2*ML+MU+1)*N], the LU factorization of the band matrix
//    A, computed by R8GB_TRF.  
//
//    Input, int PIVOT[N], the pivot indices; for 1 <= I <= N, row I
//    of the matrix was interchanged with row PIVOT(I).
//
//    Input, double B[N*NRHS], the right hand side vectors.
//
//    Output, double R8GB_TRS[N*NRHS], the solution vectors.
//
{
  int i;
  int j;
  int k;
  int kd;
  int l;
  int lm;
  double temp;
  double *x;
//
//  Test the input parameters.
//
  if ( trans != 'N' && trans != 'n' &&
       trans != 'T' && trans != 't' &&
       trans != 'C' && trans != 'c' )
  {
    return NULL;
  }
  else if ( n <= 0 )
  {
    return NULL;
  }
  else if ( ml < 0 )
  {
    return NULL;
  }
  else if ( mu < 0 )
  {
    return NULL;
  }
  else if ( nrhs <= 0 )
  {
    return NULL;
  }

  x = new double[n*nrhs];

  for ( k = 0; k < nrhs; k++ )
  {
    for ( i = 0; i < n; i++ )
    {
      x[i+k*n] = b[i+k*n];
    }
  }

  kd = mu + ml + 1;
//
//  Solve A * x = b.
//
//  Solve L * x = b, overwriting b with x.
//
//  L is represented as a product of permutations and unit lower
//  triangular matrices L = P(1) * L(1) * ... * P(n-1) * L(n-1),
//  where each transformation L(i) is a rank-one modification of
//  the identity matrix.
//
  if ( trans == 'N' || trans == 'n' )
  {
    if ( 0 < ml )
    {
      for ( j = 1; j <= n - 1; j++ )
      {
        lm = i4_min ( ml, n-j );
        l = pivot[j-1];

        for ( k = 0; k < nrhs; k++ )
        {
          temp       = x[l-1+k*n];
          x[l-1+k*n] = x[j-1+k*n];
          x[j-1+k*n] = temp;
        }

        for ( k = 0; k < nrhs; k++ )
        {
          if ( x[j-1+k*n] != 0.0 )
          {
            for ( i = 1; i <= lm; i++ )
            {
              x[j+i-1+k*n] = x[j+i-1+k*n] 
                - a[kd+i-1+(j-1)*(2*ml+mu+1)] * x[j-1+k*n];
            }
          }
        }
      }
    }
//
//  Solve U * x = b, overwriting b with x.
//
    for ( k = 0; k < nrhs; k++ )
    {
      for ( j = n; 1 <= j; j-- )
      {
        if ( x[j-1+k*n] != 0.0 )
        {
          l = ml + mu + 1 - j;
          x[j-1+k*n] = x[j-1+k*n] / a[ml+mu+(j-1)*(2*ml+mu+1)];
          for ( i = j - 1; i4_max ( 1, j - ml - mu ) <= i; i-- )
          {
            x[i-1+k*n] = x[i-1+k*n] 
              - a[l+i-1+(j-1)*(2*ml+mu+1)] * x[j-1+k*n];
          }
        }
      }
    }
  }
  else
  {
//
//  Solve A' * x = b.
//
//  Solve U' * x = b, overwriting b with x.
//
    for ( k = 0; k < nrhs; k++ )
    {
      for ( j = 1; j <= n; j++ )
      {
        temp = x[j-1+k*n];
        l = ml + mu + 1 - j;
        for ( i = i4_max ( 1, j - ml - mu ); i <= j - 1; i++ )
        {
          temp = temp - a[l+i-1+(j-1)*(2*ml+mu+1)] * x[i-1+k*n];
        }
        x[j-1+k*n] = temp / a[ml+mu+(j-1)*(2*ml+mu+1)];
      }
    }
//
//  Solve L' * x = b, overwriting b with x.
//
    if ( 0 < ml )
    {
      for ( j = n - 1; 1 <= j; j-- )
      {
        lm = i4_min ( ml, n-j );

        for ( k = 0; k < nrhs; k++ )
        {
          for ( i = 1; i <= lm; i++ )
          {
            x[j-1+k*n] = x[j-1+k*n] 
              - x[j+i-1+k*n] * a[kd+i-1+(j-1)*(2*ml+mu+1)];
          }
        }

        l = pivot[j-1];

        for ( k = 0; k < nrhs; k++ )
        {
          temp       = x[l-1+k*n];
          x[l-1+k*n] = x[j-1+k*n];
          x[j-1+k*n] = temp;
        }
      }
    }
  }

  return x;
}
//****************************************************************************80

double *r8gb_zeros ( int m, int n, int ml, int mu )

//****************************************************************************80
//
//  Purpose:
//
//    R8GB_ZEROS zeros an R8GB matrix.
//
//  Discussion:
//
//    The R8GB storage format is used for an M by N banded matrix, with lower
//    bandwidth ML and upper bandwidth MU.  Storage includes room for ML extra
//    superdiagonals, which may be required to store nonzero entries generated 
//    during Gaussian elimination.
//
//    The original M by N matrix is "collapsed" downward, so that diagonals
//    become rows of the storage array, while columns are preserved.  The
//    collapsed array is logically 2*ML+MU+1 by N.  
//
//    The two dimensional array can be further reduced to a one dimensional
//    array, stored by columns.
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
//    M must be nonnegative.
//
//    Input, int N, the number of columns of the matrix.
//    N must be nonnegative.
//
//    Input, int ML, MU, the lower and upper bandwidths.
//    ML and MU must be nonnegative and no greater than min(M,N)-1.
//
//    Output, double R8GB_ZERO[(2*ML+MU+1)*N], the R8GB matrix.
//
{
  double *a;
  int col = 2 * ml + mu + 1;
  int j;
  int row;

  a = new double[col*n];

  for ( j = 0; j < n; j++ )
  {
    for ( row = 0; row < col; row++ )
    {
      a[row+j*col] = 0.0;
    }
  }

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

double *r8ge_to_r8gb ( int m, int n, int ml, int mu, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_TO_R8GB copies an R8GE matrix to an R8GB matrix.
//
//  Discussion:
//
//    The R8GE storage format is used for a "general" M by N matrix.  
//    A physical storage space is made for each logical entry.  The two 
//    dimensional logical array is mapped to a vector, in which storage is 
//    by columns.
//
//    The R8GB storage format is for an M by N banded matrix, with lower
//    bandwidth ML and upper bandwidth MU.  Storage includes room for ML
//    extra superdiagonals, which may be required to store nonzero entries
//    generated during Gaussian elimination.
//
//    It usually doesn't make sense to try to store a general matrix
//    in a band matrix format.  You can always do it, but it will take
//    more space, unless the general matrix is actually banded.
//
//    The purpose of this routine is to allow a user to set up a
//    banded matrix in the easy-to-use general format, and have this
//    routine take care of the compression of the data into general
//    format.  All the user has to do is specify the bandwidths.
//
//    Note that this routine "believes" what the user says about the
//    bandwidth.  It will assume that all entries in the general matrix
//    outside of the bandwidth are zero.
//
//    The original M by N matrix is "collapsed" downward, so that diagonals
//    become rows of the storage array, while columns are preserved.  The
//    collapsed array is logically 2*ML+MU+1 by N.
//
//    LINPACK and LAPACK band storage requires that an extra ML
//    superdiagonals be supplied to allow for fillin during Gauss
//    elimination.  Even though a band matrix is described as
//    having an upper bandwidth of MU, it effectively has an
//    upper bandwidth of MU+ML.  This routine will copy nonzero
//    values it finds in these extra bands, so that both unfactored
//    and factored matrices can be handled.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    16 March 2005
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Edward Anderson, Zhaojun Bai, Christian Bischof, Susan Blackford, 
//    James Demmel, Jack Dongarra, Jeremy Du Croz, Anne Greenbaum, 
//    Sven Hammarling, Alan McKenney, Danny Sorensen,
//    LAPACK User's Guide,
//    Second Edition,
//    SIAM, 1995.
//
//    Jack Dongarra, Jim Bunch, Cleve Moler, Pete Stewart,
//    LINPACK User's Guide,
//    SIAM, 1979,
//    ISBN13: 978-0-898711-72-1,
//    LC: QA214.L56.
//
//  Parameters:
//
//    Input, int M, the number of rows of the matrices.
//    M must be positive.
//
//    Input, int N, the number of columns of the matrices.
//    N must be positive.
//
//    Input, int ML, MU, the lower and upper bandwidths of A1.
//    ML and MU must be nonnegative, and no greater than min(M,N)-1.
//
//    Output, double A[M*N], the R8GE matrix.
//
//    Input, double R8GE_TO_R8GB[(2*ML+MU+1)*N], the R8GB matrix.
//
{
  double *b;
  int i;
  int j;
  int jhi;
  int jlo;
  int k;

  b = new double[(2*ml+mu+1)*n];

  for ( k = 0; k < (2*ml+mu+1)*n; k++ )
  {
    b[k] = 0.0;
  }

  for ( i = 1; i <= m; i++ )
  {
    jlo = i4_max ( i - ml, 1 );
    jhi = i4_min ( i + mu, n );

    for ( j = jlo; j <= jhi; j++ )
    {
      b[ml+mu+i-j+(j-1)*(2*ml+mu+1)] = a[i-1+(j-1)*m];
    }
  }

  return b;
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

double *r8vec_to_r8gb ( int m, int n, int ml, int mu, double *x )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_TO_R8GB copies an R8VEC into an R8GB matrix.
//
//  Discussion:
//
//    In C++  and FORTRAN, this routine is not really needed.  In MATLAB,
//    a data item carries its dimensionality implicitly, and so cannot be
//    regarded sometimes as a vector and sometimes as an array.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 March 2004
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
//    Input, double X[(2*ML+MU+1)*N], the vector to be copied into the array.
//
//    Output, double R8VEC_TO_R8GB[(2*ML+MU+1)*N], the array.
//
{
  double *a;
  int i;
  int j;

  a = new double[(2*ml+mu+1)*n];

  for ( j = 1; j <= n; j++ )
  {
    for ( i = 1; i <= 2 * ml + mu + 1; i++ )
    {
      if ( 1 <= i + j - ml - mu - 1 & i + j - ml - mu - 1 <= m )
      {
        a[i-1+(j-1)*(2*ml+mu+1)] = x[i-1+(j-1)*(2*ml+mu+1)];
      }
      else
      {
        a[i-1+(j-1)*(2*ml+mu+1)] = 0.0;
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
