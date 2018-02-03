# include <cmath>
# include <cstdlib>
# include <ctime>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8cbb.hpp"

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

  for ( j = 1; j <= n; j++ )
  {
    ilo = i4_max ( ihi + 1, 1 );
    ihi = i4_min ( ml + mu + 1, mu + 1 + m - j );
    for ( i = ilo; i <= ihi; i++ )
    {
      x[i-1+(j-1)*(ml+mu+1)] = a[i-1+(j-1)*(ml+mu+1)];
    }
  }

  return x;
}
//****************************************************************************80

void r8cbb_add ( int n1, int n2, int ml, int mu, double a[], int i, int j, 
  double value )

//****************************************************************************80
//
//  Purpose:
//
//    R8CBB_ADD adds a value to an entry of an R8CBB matrix.
//
//  Discussion:
//
//    The R8CBB storage format is for a compressed border banded matrix.  
//    Such a matrix has the logical form:
//
//      A1 | A2
//      ---+---
//      A3 | A4
//
//    with A1 a (usually large) N1 by N1 banded matrix, while A2, A3 and A4
//    are dense rectangular matrices of orders N1 by N2, N2 by N1, and N2 by N2,
//    respectively.  
//
//    The R8CBB format is the same as the R8BB format, except that the banded
//    matrix A1 is stored in compressed band form rather than standard
//    banded form.  In other words, we do not include the extra room
//    set aside for fill in during pivoting.
//
//    A should be defined as a vector.  The user must then store
//    the entries of the four blocks of the matrix into the vector A.
//    Each block is stored by columns.
//
//    A1, the banded portion of the matrix, is stored in
//    the first (ML+MU+1)*N1 entries of A, using the obvious variant
//    of the LINPACK general band format.
//
//    The following formulas should be used to determine how to store
//    the entry corresponding to row I and column J in the original matrix:
//
//    Entries of A1:
//
//      1 <= I <= N1, 1 <= J <= N1, (J-I) <= MU and (I-J) <= ML.
//
//      Store the I, J entry into location
//      (I-J+MU+1)+(J-1)*(ML+MU+1).
//
//    Entries of A2:
//
//      1 <= I <= N1, N1+1 <= J <= N1+N2.
//
//      Store the I, J entry into location
//      (ML+MU+1)*N1+(J-N1-1)*N1+I.
//
//    Entries of A3:
//
//      N1+1 <= I <= N1+N2, 1 <= J <= N1.
//
//      Store the I, J entry into location
//      (ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//
//    Entries of A4:
//
//      N1+1 <= I <= N1+N2, N1+1 <= J <= N1+N2
//
//      Store the I, J entry into location
//      (ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//      (same formula used for A3).
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
//    Input, int N1, N2, the order of the banded and dense blocks.
//    N1 and N2 must be nonnegative, and at least one must be positive.
//
//    Input, int ML, MU, the lower and upper bandwidths.
//    ML and MU must be nonnegative, and no greater than N1-1.
//
//    Input/output, double A[(ML+MU+1)*N1 + 2*N1*N2 + N2*N2], the R8CBB matrix.
//
//    Input, int I, J, the indices of the entry to be incremented.
//
//    Input, double VALUE, the value to be added to the (I,J) entry.
//
{
  int ij;

  if ( value == 0.0 )
  {
    return;
  }
//
//  Check for I or J out of bounds.
//
  if ( i < 0 || n1 + n2 <= i )
  {
    cerr << "\n";
    cerr << "R8CBB_ADD - Fatal error!\n";
    cerr << "  Illegal input value of row index I = " << i << "\n";
    exit ( 1 );
  }

  if ( j < 0 || n1 + n2 <= j )
  {
    cerr << "\n";
    cerr << "R8CBB_ADD - Fatal error!\n";
    cerr << "  Illegal input value of column index J = " << j << "\n";
    exit ( 1 );
  }
//
//  The A1 block of the matrix.
//
//  Check for out of band problems.
//
  if ( i < n1 && j < n1 )
  {
    if ( mu < ( j - i ) || ml < ( i - j ) )
    {
      cout << "\n";
      cout << "R8CBB_ADD - Warning!\n";
      cout << "  Unable to add to entry (" << i << ", " << j << ").\n";
      return;
    }
    else
    {
      ij = ( i - j + mu ) + j * ( ml + mu + 1 );
    }
  }
//
//  The A2 block of the matrix:
//
  else if ( i < n1 && n1 <= j )
  {
    ij = ( ml + mu + 1 ) * n1 + ( j - n1 ) * n1 + i;
  }
//
//  The A3 and A4 blocks of the matrix.
//
  else if ( n1 <= i )
  {
    ij = ( ml + mu + 1 ) * n1 + n2 * n1 + j * n2 + ( i - n1 );
  }

  a[ij] = a[ij] + value;

  return;
}
//****************************************************************************80

double *r8cbb_dif2 ( int n1, int n2, int ml, int mu )

//****************************************************************************80
//
//  Purpose:
//
//    R8CBB_DIF2 sets up an R8CBB second difference matrix.
//
//  Discussion:
//
//    The R8CBB storage format is for a compressed border banded matrix.  
//    Such a matrix has the logical form:
//
//      A1 | A2
//      ---+---
//      A3 | A4
//
//    with A1 a (usually large) N1 by N1 banded matrix, while A2, A3 and A4
//    are dense rectangular matrices of orders N1 by N2, N2 by N1, and N2 by N2,
//    respectively.  
//
//    The R8CBB format is the same as the R8BB format, except that the banded
//    matrix A1 is stored in compressed band form rather than standard
//    banded form.  In other words, we do not include the extra room
//    set aside for fill in during pivoting.
//
//    A should be defined as a vector.  The user must then store
//    the entries of the four blocks of the matrix into the vector A.
//    Each block is stored by columns.
//
//    A1, the banded portion of the matrix, is stored in
//    the first (ML+MU+1)*N1 entries of A, using the obvious variant
//    of the LINPACK general band format.
//
//    The following formulas should be used to determine how to store
//    the entry corresponding to row I and column J in the original matrix:
//
//    Entries of A1:
//
//      1 <= I <= N1, 1 <= J <= N1, (J-I) <= MU and (I-J) <= ML.
//
//      Store the I, J entry into location
//      (I-J+MU+1)+(J-1)*(ML+MU+1).
//
//    Entries of A2:
//
//      1 <= I <= N1, N1+1 <= J <= N1+N2.
//
//      Store the I, J entry into location
//      (ML+MU+1)*N1+(J-N1-1)*N1+I.
//
//    Entries of A3:
//
//      N1+1 <= I <= N1+N2, 1 <= J <= N1.
//
//      Store the I, J entry into location
//      (ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//
//    Entries of A4:
//
//      N1+1 <= I <= N1+N2, N1+1 <= J <= N1+N2
//
//      Store the I, J entry into location
//      (ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//      (same formula used for A3).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 July 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N1, N2, the order of the banded and dense blocks.
//    N1 and N2 must be nonnegative, and at least one must be positive.
//
//    Input, int ML, MU, the lower and upper bandwidths.
//    ML and MU must be nonnegative and no greater than N1-1.
//
//    Output, double R8CBB_DIF2[(ML+MU+1)*N1+2*N1*N2+N2*N2], the matrix.
//
{
  double *a;
  int i;
  int j;
  double value;

  a = r8vec_zeros_new  ( ( ml + mu + 1 ) * n1 + 2 * n1 * n2 + n2 * n2 );

  for ( i = 1; i < n1 + n2; i++ )
  {
    j = i - 1;
    value = - 1.0;
    r8cbb_set ( n1, n2, ml, mu, a, i, j, value );
  }

  for ( i = 0; i < n1 + n2; i++ )
  {
    j = i;
    value = 2.0;
    r8cbb_set ( n1, n2, ml, mu, a, i, j, value );
  }

  for ( i = 0; i < n1 + n2 - 1; i++ )
  {
    j = i + 1;
    value = - 1.0;
    r8cbb_set ( n1, n2, ml, mu, a, i, j, value );
  }

  return a;
}
//****************************************************************************80

int r8cbb_fa ( int n1, int n2, int ml, int mu, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8CBB_FA factors an R8CBB matrix.
//
//  Discussion:
//
//    The R8CBB storage format is for a compressed border banded matrix.  
//    Such a matrix has the logical form:
//
//      A1 | A2
//      ---+---
//      A3 | A4
//
//    with A1 a (usually large) N1 by N1 banded matrix, while A2, A3 and A4
//    are dense rectangular matrices of orders N1 by N2, N2 by N1, and N2 by N2,
//    respectively.  
//
//    The R8CBB format is the same as the R8BB format, except that the banded
//    matrix A1 is stored in compressed band form rather than standard
//    banded form.  In other words, we do not include the extra room
//    set aside for fill in during pivoting.
//
//    A should be defined as a vector.  The user must then store
//    the entries of the four blocks of the matrix into the vector A.
//    Each block is stored by columns.
//
//    A1, the banded portion of the matrix, is stored in
//    the first (ML+MU+1)*N1 entries of A, using the obvious variant
//    of the LINPACK general band format.
//
//    The following formulas should be used to determine how to store
//    the entry corresponding to row I and column J in the original matrix:
//
//    Entries of A1:
//
//      1 <= I <= N1, 1 <= J <= N1, (J-I) <= MU and (I-J) <= ML.
//
//      Store the I, J entry into location
//      (I-J+MU+1)+(J-1)*(ML+MU+1).
//
//    Entries of A2:
//
//      1 <= I <= N1, N1+1 <= J <= N1+N2.
//
//      Store the I, J entry into location
//      (ML+MU+1)*N1+(J-N1-1)*N1+I.
//
//    Entries of A3:
//
//      N1+1 <= I <= N1+N2, 1 <= J <= N1.
//
//      Store the I, J entry into location
//      (ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//
//    Entries of A4:
//
//      N1+1 <= I <= N1+N2, N1+1 <= J <= N1+N2
//
//      Store the I, J entry into location
//      (ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//      (same formula used for A3).
//
//
//    Once the matrix has been factored by SCCB_FA, SCCB_SL may be called
//    to solve linear systems involving the matrix.
//
//    SCCB_FA uses special non-pivoting versions of LINPACK routines to
//    carry out the factorization.  The special version of the banded
//    LINPACK solver also results in a space saving, since no entries
//    need be set aside for fill in due to pivoting.
//
//    The linear system must be border banded, of the form:
//
//      ( A1 A2 ) (X1) = (B1)
//      ( A3 A4 ) (X2)   (B2)
//
//    where A1 is a (usually big) banded square matrix, A2 and A3 are
//    column and row strips which may be nonzero, and A4 is a dense
//    square matrix.
//
//    The algorithm rewrites the system as:
//
//         X1 + inverse(A1) A2 X2 = inverse(A1) B1
//
//      A3 X1 +             A4 X2 = B2
//
//    and then rewrites the second equation as
//
//      ( A4 - A3 inverse(A1) A2 ) X2 = B2 - A3 inverse(A1) B1
//
//    The algorithm will certainly fail if the matrix A1 is singular,
//    or requires pivoting.  The algorithm will also fail if the A4 matrix,
//    as modified during the process, is singular, or requires pivoting.
//    All these possibilities are in addition to the failure that will
//    if the total matrix A is singular.
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
//    Input, int N1, N2, the order of the banded and dense blocks.
//    N1 and N2 must be nonnegative, and at least one must be positive.
//
//    Input, int ML, MU, the lower and upper bandwidths.
//    ML and MU must be nonnegative, and no greater than N1-1.
//
//    Input/output, double A[ (ML+MU+1)*N1 + 2*N1*N2 + N2*N2].
//    On input, A contains the compact border-banded coefficient matrix.
//    On output, A contains information describing a partial factorization
//    of the original coefficient matrix.  
//
//    Output, int R8CBB_FA, singularity flag.
//    0, no singularity detected.
//    nonzero, the factorization failed on the INFO-th step.
//
{
  double *b1;
  int i;
  int ij;
  int ik;
  int info;
  int j;
  int jk;
  int job;
  int k;
  int nband;
  double *x1;

  nband = ( ml + mu + 1 ) * n1;
//
//  Factor the A1 band matrix, overwriting A1 by its factors.
//
  if ( 0 < n1 )
  {
    info = r8cb_np_fa ( n1, ml, mu, a );
    if ( info != 0 )
    {
      cerr << "\n";
      cerr << "R8CBB_FA - Fatal error!\n";
      cerr << "  R8CB_NP_FA returned INFO = " << info << "\n";
      cerr << "  Factoring failed for column INFO.\n";
      cerr << "  The band matrix A1 is singular.\n";
      cerr << "  This algorithm cannot continue!\n";
      exit ( 1 );
    }
  }

  if ( 0 < n1 && 0 < n2 )
  {
//
//  Set A2 := -inverse(A1) * A2.
//
    for ( j = 0; j < n2; j++ )
    {
      for ( i = 0; i < n1; i++ )
      {
        a[nband+i+j*n1] = - a[nband+i+j*n1];
      }
    }

    b1 = r8vec_zeros_new ( n1 );
    x1 = r8vec_zeros_new ( n1 );
    job = 0;

    for ( j = 0; j < n2; j++ )
    {
      for ( i = 0; i < n1; i++ )
      {
        b1[i] = a[nband+i+j*n1];
      }
      x1 = r8cb_np_sl ( n1, ml, mu, a, b1, job );
      for ( i = 0; i < n1; i++ )
      {
        a[nband+i+j*n1] = x1[i];
      }
    }
    delete [] b1;
    delete [] x1;
//
//  Set A4 := A4 + A3*A2
//
    for ( i = 1; i <= n2; i++ )
    {
      for ( j = 1; j <= n1; j++ )
      {
        ij = nband + n1 * n2 + ( j - 1 ) * n2 + i - 1;
        for ( k = 1; k <= n2; k++ )
        {
          ik = nband + 2 * n1 * n2 + ( k - 1 ) * n2 + i - 1;
          jk = nband + ( k - 1 ) * n1 + j - 1;
          a[ik] = a[ik] + a[ij] * a[jk];
        }
      }
    }
  }
//
//  Factor A4.
//
  if ( 0 < n2 )
  {
    info = r8ge_np_fa ( n2, a+(nband+2*n1*n2) );

    if ( info != 0 )
    {
      cerr << "\n";
      cerr << "R8CBB_FA - Fatal error!\n";
      cerr << "  R8GE_NP_FA returned INFO = " << info << "\n";
      cerr << "  This indicates singularity in column " << n1+info << ".\n";
      cerr << "  The dense matrix A4 is singular.\n";
      cerr << "  This algorithm cannot continue!\n";
      exit ( 1 );
    }
  }

  return 0;
}
//****************************************************************************80

double r8cbb_get ( int n1, int n2, int ml, int mu, double a[], int i, int j )

//****************************************************************************80
//
//  Purpose:
//
//    R8CBB_GET gets the value of an entry of an R8CBB matrix.
//
//  Discussion:
//
//    The R8CBB storage format is for a compressed border banded matrix.  
//    Such a matrix has the logical form:
//
//      A1 | A2
//      ---+---
//      A3 | A4
//
//    with A1 a (usually large) N1 by N1 banded matrix, while A2, A3 and A4
//    are dense rectangular matrices of orders N1 by N2, N2 by N1, and N2 by N2,
//    respectively.  
//
//    The R8CBB format is the same as the R8BB format, except that the banded
//    matrix A1 is stored in compressed band form rather than standard
//    banded form.  In other words, we do not include the extra room
//    set aside for fill in during pivoting.
//
//    A should be defined as a vector.  The user must then store
//    the entries of the four blocks of the matrix into the vector A.
//    Each block is stored by columns.
//
//    A1, the banded portion of the matrix, is stored in
//    the first (ML+MU+1)*N1 entries of A, using the obvious variant
//    of the LINPACK general band format.
//
//    The following formulas should be used to determine how to store
//    the entry corresponding to row I and column J in the original matrix:
//
//    Entries of A1:
//
//      1 <= I <= N1, 1 <= J <= N1, (J-I) <= MU and (I-J) <= ML.
//
//      Store the I, J entry into location
//      (I-J+MU+1)+(J-1)*(ML+MU+1).
//
//    Entries of A2:
//
//      1 <= I <= N1, N1+1 <= J <= N1+N2.
//
//      Store the I, J entry into location
//      (ML+MU+1)*N1+(J-N1-1)*N1+I.
//
//    Entries of A3:
//
//      N1+1 <= I <= N1+N2, 1 <= J <= N1.
//
//      Store the I, J entry into location
//      (ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//
//    Entries of A4:
//
//      N1+1 <= I <= N1+N2, N1+1 <= J <= N1+N2
//
//      Store the I, J entry into location
//      (ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//      (same formula used for A3).
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
//    Input, int N1, N2, the order of the banded and dense blocks.
//    N1 and N2 must be nonnegative, and at least one must be positive.
//
//    Input, int ML, MU, the lower and upper bandwidths.
//    ML and MU must be nonnegative, and no greater than N1-1.
//
//    Input/output, double A[(ML+MU+1)*N1 + 2*N1*N2 + N2*N2], the R8CBB matrix.
//
//    Input, int I, J, the indices of the entry to be incremented.
//
//    Output, double R8CBB_GET, the value of the (I,J) entry.
//
{
  int ij;
//
//  Check for I or J out of bounds.
//
  if ( i < 0 || n1 + n2 <= i )
  {
    return 0.0;
  }

  if ( j < 0 || n1 + n2 <= j )
  {
    return 0.0;
  }
//
//  The A1 block of the matrix.
//
//  Check for out of band problems.
//
  if ( i < n1 && j < n1 )
  {
    if ( mu < ( j - i ) || ml < ( i - j ) )
    {
      return 0.0;
    }
    else
    {
      ij = ( i - j + mu ) + j * ( ml + mu + 1 );
    }
  }
//
//  The A2 block of the matrix:
//
  else if ( i < n1 && n1 <= j )
  {
    ij = ( ml + mu + 1 ) * n1 + ( j - n1 ) * n1 + i;
  }
//
//  The A3 and A4 blocks of the matrix.
//
  else if ( n1 <= i )
  {
    ij = ( ml + mu + 1 ) * n1 + n2 * n1 + j * n2 + ( i - n1 );
  }

  return a[ij];
}
//****************************************************************************80

double *r8cbb_indicator ( int n1, int n2, int ml, int mu )

//****************************************************************************80
//
//  Purpose:
//
//    R8CBB_INDICATOR sets up an R8CBB indicator matrix.
//
//  Discussion:
//
//    The R8CBB storage format is for a compressed border banded matrix.  
//    Such a matrix has the logical form:
//
//      A1 | A2
//      ---+---
//      A3 | A4
//
//    with A1 a (usually large) N1 by N1 banded matrix, while A2, A3 and A4
//    are dense rectangular matrices of orders N1 by N2, N2 by N1, and N2 by N2,
//    respectively.  
//
//    The R8CBB format is the same as the R8BB format, except that the banded
//    matrix A1 is stored in compressed band form rather than standard
//    banded form.  In other words, we do not include the extra room
//    set aside for fill in during pivoting.
//
//    A should be defined as a vector.  The user must then store
//    the entries of the four blocks of the matrix into the vector A.
//    Each block is stored by columns.
//
//    A1, the banded portion of the matrix, is stored in
//    the first (ML+MU+1)*N1 entries of A, using the obvious variant
//    of the LINPACK general band format.
//
//    The following formulas should be used to determine how to store
//    the entry corresponding to row I and column J in the original matrix:
//
//    Entries of A1:
//
//      1 <= I <= N1, 1 <= J <= N1, (J-I) <= MU and (I-J) <= ML.
//
//      Store the I, J entry into location
//      (I-J+MU+1)+(J-1)*(ML+MU+1).
//
//    Entries of A2:
//
//      1 <= I <= N1, N1+1 <= J <= N1+N2.
//
//      Store the I, J entry into location
//      (ML+MU+1)*N1+(J-N1-1)*N1+I.
//
//    Entries of A3:
//
//      N1+1 <= I <= N1+N2, 1 <= J <= N1.
//
//      Store the I, J entry into location
//      (ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//
//    Entries of A4:
//
//      N1+1 <= I <= N1+N2, N1+1 <= J <= N1+N2
//
//      Store the I, J entry into location
//      (ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//      (same formula used for A3).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    12 January 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N1, N2, the order of the banded and dense blocks.
//    N1 and N2 must be nonnegative, and at least one must be positive.
//
//    Input, int ML, MU, the lower and upper bandwidths.
//    ML and MU must be nonnegative and no greater than N1-1.
//
//    Output, double R8CBB_INDICATOR[(ML+MU+1)*N1+2*N1*N2+N2*N2], the R8CBB
//    indicator matrix.
//
{
  double *a;
  int base;
  int fac;
  int i;
  int j;
  int row;

  a = r8vec_zeros_new ( ( ml + mu + 1 ) * n1 + 2 * n1 * n2 + n2 * n2 );

  fac = i4_power ( 10, i4_log_10 ( n1 + n2 ) + 1 );
//
//  Set the banded matrix A1.
//
  for ( j = 1; j <= n1; j++ )
  {
    for ( row = 1; row <= ml + mu + 1; row++ )
    {
      i = row + j - mu - 1;
      if ( 1 <= i && i <= n1 )
      {
        a[row-1+(j-1)*(ml+mu+1)] = ( double ) ( fac * i + j );
      }
    }
  }
//
//  Set the N1 by N2 rectangular strip A2.
//
  base = ( ml + mu + 1 ) * n1;

  for ( i = 1; i <= n1; i++ )
  {
    for ( j = n1 + 1; j <= n1 + n2; j++ )
    {
      a[base + i-1 + (j-n1-1)*n1 ] = ( double ) ( fac * i + j );
    }
  }
//
//  Set the N2 by N1 rectangular strip A3.
//
  base = ( ml + mu + 1 ) * n1 + n1 * n2;

  for ( i = n1 + 1; i <= n1 + n2; i++ )
  {
    for ( j = 1; j <= n1; j++ )
    {
      a[base + i-n1-1 + (j-1)*n2 ] = ( double ) ( fac * i + j );
    }
  }
//
//  Set the N2 by N2 square A4.
//
  base = ( ml + mu + 1 ) * n1 + n1 * n2 + n2 * n1;

  for ( i = n1 + 1; i <= n1 + n2; i++ )
  {
    for ( j = n1 + 1; j <= n1 + n2; j++ )
    {
      a[base + i-n1-1 + (j-n1-1)*n2 ] = ( double ) ( fac * i + j );
    }
  }

  return a;
}
//****************************************************************************80

double *r8cbb_mtv ( int n1, int n2, int ml, int mu, double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8CBB_MTV multiplies a vector by an R8CBB matrix.
//
//  Discussion:
//
//    The R8CBB storage format is for a compressed border banded matrix.  
//    Such a matrix has the logical form:
//
//      A1 | A2
//      ---+---
//      A3 | A4
//
//    with A1 a (usually large) N1 by N1 banded matrix, while A2, A3 and A4
//    are dense rectangular matrices of orders N1 by N2, N2 by N1, and N2 by N2,
//    respectively.  
//
//    The R8CBB format is the same as the R8BB format, except that the banded
//    matrix A1 is stored in compressed band form rather than standard
//    banded form.  In other words, we do not include the extra room
//    set aside for fill in during pivoting.
//
//    A should be defined as a vector.  The user must then store
//    the entries of the four blocks of the matrix into the vector A.
//    Each block is stored by columns.
//
//    A1, the banded portion of the matrix, is stored in
//    the first (ML+MU+1)*N1 entries of A, using the obvious variant
//    of the LINPACK general band format.
//
//    The following formulas should be used to determine how to store
//    the entry corresponding to row I and column J in the original matrix:
//
//    Entries of A1:
//
//      1 <= I <= N1, 1 <= J <= N1, (J-I) <= MU and (I-J) <= ML.
//
//      Store the I, J entry into location
//      (I-J+MU+1)+(J-1)*(ML+MU+1).
//
//    Entries of A2:
//
//      1 <= I <= N1, N1+1 <= J <= N1+N2.
//
//      Store the I, J entry into location
//      (ML+MU+1)*N1+(J-N1-1)*N1+I.
//
//    Entries of A3:
//
//      N1+1 <= I <= N1+N2, 1 <= J <= N1.
//
//      Store the I, J entry into location
//      (ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//
//    Entries of A4:
//
//      N1+1 <= I <= N1+N2, N1+1 <= J <= N1+N2
//
//      Store the I, J entry into location
//      (ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//      (same formula used for A3).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    23 October 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int ML, MU, the lower and upper bandwidths.
//    ML and MU must be nonnegative, and no greater than N1-1.
//
//    Input, int N1, N2, the order of the banded and dense blocks.
//    N1 and N2 must be nonnegative, and at least one must be positive.
//
//    Input, double A[(ML+MU+1)*N1 + 2*N1*N2 + N2*N2], the R8CBB matrix.
//
//    Input, double X[N1+N2], the vector to multiply the matrix.
//
//    Output, double R8CBB_MTV[N1+N2], the product X * A.
//
{
  double *b;
  int i;
  int ihi;
  int ij;
  int ilo;
  int j;
//
//  Set B to zero.
//
  b = r8vec_zeros_new ( n1 + n2 );
//
//  Multiply by A1.
//
  for ( j = 1; j <= n1; j++ )
  {
    ilo = i4_max ( 1, j - mu );
    ihi = i4_min ( n1, j + ml );
    ij = ( j - 1 ) * ( ml + mu + 1 ) - j + mu + 1;
    for ( i = ilo; i <= ihi; i++ )
    {
      b[j] = b[j] + x[i-1] * a[ij+i-1];
    }
  }
//
//  Multiply by A2.
//
  for ( j = n1 + 1; j <= n1 + n2; j++ )
  {
    ij = ( ml + mu + 1 ) * n1 + ( j - n1 - 1 ) * n1;
    for ( i = 1; i <= n1; i++ )
    {
      b[j] = b[j] + x[i-1] * a[ij+i-1];
    }
  }
//
//  Multiply by A3 and A4.
//
  for ( j = 1; j <= n1 + n2; j++ )
  {
    ij = ( ml + mu + 1 ) * n1 + n1 * n2 + ( j - 1 ) * n2 - n1;
    for ( i = n1 + 1; i <= n1 + n2; i++ )
    {
      b[j-1] = b[j-1] + x[i-1] * a[ij+i-1];
    }
  }

  return b;
}
//****************************************************************************80

double *r8cbb_mv ( int n1, int n2, int ml, int mu, double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8CBB_MV multiplies an R8CBB matrix times a vector.
//
//  Discussion:
//
//    The R8CBB storage format is for a compressed border banded matrix.  
//    Such a matrix has the logical form:
//
//      A1 | A2
//      ---+---
//      A3 | A4
//
//    with A1 a (usually large) N1 by N1 banded matrix, while A2, A3 and A4
//    are dense rectangular matrices of orders N1 by N2, N2 by N1, and N2 by N2,
//    respectively.  
//
//    The R8CBB format is the same as the R8BB format, except that the banded
//    matrix A1 is stored in compressed band form rather than standard
//    banded form.  In other words, we do not include the extra room
//    set aside for fill in during pivoting.
//
//    A should be defined as a vector.  The user must then store
//    the entries of the four blocks of the matrix into the vector A.
//    Each block is stored by columns.
//
//    A1, the banded portion of the matrix, is stored in
//    the first (ML+MU+1)*N1 entries of A, using the obvious variant
//    of the LINPACK general band format.
//
//    The following formulas should be used to determine how to store
//    the entry corresponding to row I and column J in the original matrix:
//
//    Entries of A1:
//
//      1 <= I <= N1, 1 <= J <= N1, (J-I) <= MU and (I-J) <= ML.
//
//      Store the I, J entry into location
//      (I-J+MU+1)+(J-1)*(ML+MU+1).
//
//    Entries of A2:
//
//      1 <= I <= N1, N1+1 <= J <= N1+N2.
//
//      Store the I, J entry into location
//      (ML+MU+1)*N1+(J-N1-1)*N1+I.
//
//    Entries of A3:
//
//      N1+1 <= I <= N1+N2, 1 <= J <= N1.
//
//      Store the I, J entry into location
//      (ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//
//    Entries of A4:
//
//      N1+1 <= I <= N1+N2, N1+1 <= J <= N1+N2
//
//      Store the I, J entry into location
//      (ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//      (same formula used for A3).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    16 October 1998
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int ML, MU, the lower and upper bandwidths.
//    ML and MU must be nonnegative, and no greater than N1-1.
//
//    Input, int N1, N2, the order of the banded and dense blocks.
//    N1 and N2 must be nonnegative, and at least one must be positive.
//
//    Input, double A[(ML+MU+1)*N1 + 2*N1*N2 + N2*N2], the R8CBB matrix.
//
//    Input, double X[N1+N2], the vector to be multiplied by A.
//
//    Output, double R8CBB_MV[N1+N2], the result of multiplying A by X.
//
{
  double *b;
  int i;
  int ihi;
  int ij;
  int ilo;
  int j;
//
//  Set B to zero.
//
  b = r8vec_zeros_new ( n1 + n2 );
//
//  Multiply by A1.
//
  for ( j = 1; j <= n1; j++ )
  {
    ilo = i4_max ( 1, j - mu );
    ihi = i4_min ( n1, j + ml );
    ij = ( j - 1 ) * ( ml + mu + 1 ) - j + mu + 1;
    for ( i = ilo; i <= ihi; i++ )
    {
      b[i-1] = b[i-1] + a[ij+i-1] * x[j-1];
    }
  }
//
//  Multiply by A2.
//
  for ( j = n1 + 1; j <= n1 + n2; j++ )
  {
    ij = ( ml + mu + 1 ) * n1 + ( j - n1 - 1 ) * n1;
    for ( i = 1; i <= n1; i++ )
    {
      b[i-1] = b[i-1] + a[ij+i-1] * x[j-1];
    }
  }
//
//  Multiply by A3 and A4.
//
  for ( j = 1; j <= n1 + n2; j++ )
  {
    ij = ( ml + mu + 1 ) * n1 + n1 * n2 + ( j - 1 ) * n2 - n1;
    for ( i = n1 + 1; i <= n1 + n2; i++ )
    {
      b[i-1] = b[i-1] + a[ij+i-1] * x[j-1];
    }
  }

  return b;
}
//****************************************************************************80

void r8cbb_print ( int n1, int n2, int ml, int mu, double a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8CBB_PRINT prints an R8CBB matrix.
//
//  Discussion:
//
//    The R8CBB storage format is for a compressed border banded matrix.  
//    Such a matrix has the logical form:
//
//      A1 | A2
//      ---+---
//      A3 | A4
//
//    with A1 a (usually large) N1 by N1 banded matrix, while A2, A3 and A4
//    are dense rectangular matrices of orders N1 by N2, N2 by N1, and N2 by N2,
//    respectively.  
//
//    The R8CBB format is the same as the R8BB format, except that the banded
//    matrix A1 is stored in compressed band form rather than standard
//    banded form.  In other words, we do not include the extra room
//    set aside for fill in during pivoting.
//
//    A should be defined as a vector.  The user must then store
//    the entries of the four blocks of the matrix into the vector A.
//    Each block is stored by columns.
//
//    A1, the banded portion of the matrix, is stored in
//    the first (ML+MU+1)*N1 entries of A, using the obvious variant
//    of the LINPACK general band format.
//
//    The following formulas should be used to determine how to store
//    the entry corresponding to row I and column J in the original matrix:
//
//    Entries of A1:
//
//      1 <= I <= N1, 1 <= J <= N1, (J-I) <= MU and (I-J) <= ML.
//
//      Store the I, J entry into location
//      (I-J+MU+1)+(J-1)*(ML+MU+1).
//
//    Entries of A2:
//
//      1 <= I <= N1, N1+1 <= J <= N1+N2.
//
//      Store the I, J entry into location
//      (ML+MU+1)*N1+(J-N1-1)*N1+I.
//
//    Entries of A3:
//
//      N1+1 <= I <= N1+N2, 1 <= J <= N1.
//
//      Store the I, J entry into location
//      (ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//
//    Entries of A4:
//
//      N1+1 <= I <= N1+N2, N1+1 <= J <= N1+N2
//
//      Store the I, J entry into location
//      (ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//      (same formula used for A3).
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
//    Input, int N1, N2, the order of the banded and dense blocks.
//    N1 and N2 must be nonnegative, and at least one must be positive.
//
//    Input, int ML, MU, the lower and upper bandwidths.
//    ML and MU must be nonnegative, and no greater than N1-1.
//
//    Input, double A[(ML+MU+1)*N1+2*N1*N2+N2*N2], the R8CBB matrix.
//
//    Input, string TITLE, a title.
//
{
  r8cbb_print_some ( n1, n2, ml, mu, a, 0, 0, n1 + n2 - 1, n1 + n2 - 1, title );

  return;
}
//****************************************************************************80

void r8cbb_print_some ( int n1, int n2, int ml, int mu, double a[], int ilo, 
  int jlo, int ihi, int jhi, string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8CBB_PRINT_SOME prints some of an R8CBB matrix.
//
//  Discussion:
//
//    The R8CBB storage format is for a compressed border banded matrix.  
//    Such a matrix has the logical form:
//
//      A1 | A2
//      ---+---
//      A3 | A4
//
//    with A1 a (usually large) N1 by N1 banded matrix, while A2, A3 and A4
//    are dense rectangular matrices of orders N1 by N2, N2 by N1, and N2 by N2,
//    respectively.  
//
//    The R8CBB format is the same as the R8BB format, except that the banded
//    matrix A1 is stored in compressed band form rather than standard
//    banded form.  In other words, we do not include the extra room
//    set aside for fill in during pivoting.
//
//    A should be defined as a vector.  The user must then store
//    the entries of the four blocks of the matrix into the vector A.
//    Each block is stored by columns.
//
//    A1, the banded portion of the matrix, is stored in
//    the first (ML+MU+1)*N1 entries of A, using the obvious variant
//    of the LINPACK general band format.
//
//    The following formulas should be used to determine how to store
//    the entry corresponding to row I and column J in the original matrix:
//
//    Entries of A1:
//
//      1 <= I <= N1, 1 <= J <= N1, (J-I) <= MU and (I-J) <= ML.
//
//      Store the I, J entry into location
//      (I-J+MU+1)+(J-1)*(ML+MU+1).
//
//    Entries of A2:
//
//      1 <= I <= N1, N1+1 <= J <= N1+N2.
//
//      Store the I, J entry into location
//      (ML+MU+1)*N1+(J-N1-1)*N1+I.
//
//    Entries of A3:
//
//      N1+1 <= I <= N1+N2, 1 <= J <= N1.
//
//      Store the I, J entry into location
//      (ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//
//    Entries of A4:
//
//      N1+1 <= I <= N1+N2, N1+1 <= J <= N1+N2
//
//      Store the I, J entry into location
//      (ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//      (same formula used for A3).
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
//    Input, int N1, N2, the order of the banded and dense blocks.
//    N1 and N2 must be nonnegative, and at least one must be positive.
//
//    Input, int ML, MU, the lower and upper bandwidths.
//    ML and MU must be nonnegative, and no greater than N1-1.
//
//    Input, double A[(ML+MU+1)*N1+2*N1*N2+N2*N2], the R8CBB matrix.
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
    j2hi = i4_min ( j2hi, n1 + n2 - 1 );
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
    i2hi = i4_min ( ihi, n1 + n2 - 1 );

    for ( i = i2lo; i <= i2hi; i++ )
    {
      cout << setw(4) << i << "  ";
//
//  Print out (up to) 5 entries in row I, that lie in the current strip.
//
      for ( j = j2lo; j <= j2hi; j++ )
      {
        aij = r8cbb_get ( n1, n2, ml, mu, a, i, j );
        cout << setw(12) << aij << "  ";
      }
      cout << "\n";
    }
  }

  return;
# undef INCX
}
//****************************************************************************80

double *r8cbb_random ( int n1, int n2, int ml, int mu, int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    R8CBB_RANDOM randomizes an R8CBB matrix.
//
//  Discussion:
//
//    The R8CBB storage format is for a compressed border banded matrix.  
//    Such a matrix has the logical form:
//
//      A1 | A2
//      ---+---
//      A3 | A4
//
//    with A1 a (usually large) N1 by N1 banded matrix, while A2, A3 and A4
//    are dense rectangular matrices of orders N1 by N2, N2 by N1, and N2 by N2,
//    respectively.  
//
//    The R8CBB format is the same as the R8BB format, except that the banded
//    matrix A1 is stored in compressed band form rather than standard
//    banded form.  In other words, we do not include the extra room
//    set aside for fill in during pivoting.
//
//    A should be defined as a vector.  The user must then store
//    the entries of the four blocks of the matrix into the vector A.
//    Each block is stored by columns.
//
//    A1, the banded portion of the matrix, is stored in
//    the first (ML+MU+1)*N1 entries of A, using the obvious variant
//    of the LINPACK general band format.
//
//    The following formulas should be used to determine how to store
//    the entry corresponding to row I and column J in the original matrix:
//
//    Entries of A1:
//
//      1 <= I <= N1, 1 <= J <= N1, (J-I) <= MU and (I-J) <= ML.
//
//      Store the I, J entry into location
//      (I-J+MU+1)+(J-1)*(ML+MU+1).
//
//    Entries of A2:
//
//      1 <= I <= N1, N1+1 <= J <= N1+N2.
//
//      Store the I, J entry into location
//      (ML+MU+1)*N1+(J-N1-1)*N1+I.
//
//    Entries of A3:
//
//      N1+1 <= I <= N1+N2, 1 <= J <= N1.
//
//      Store the I, J entry into location
//      (ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//
//    Entries of A4:
//
//      N1+1 <= I <= N1+N2, N1+1 <= J <= N1+N2
//
//      Store the I, J entry into location
//      (ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//      (same formula used for A3).
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
//    Input, int N1, N2, the order of the banded and dense blocks.
//    N1 and N2 must be nonnegative, and at least one must be positive.
//
//    Input, int ML, MU, the lower and upper bandwidths.
//    ML and MU must be nonnegative and no greater than N1-1.
//
//    Input/output, int &SEED, a seed for the random number generator.
//
//    Output, double R8CBB_RANDOM[(ML+MU+1)*N1 + 2*N1*N2 + N2*N2], the R8CBB matrix.
//
{
  double *a;
  int i;
  int j;
  double r;
  int row;

  a = r8vec_zeros_new ( ( ml + mu + 1 ) * n1 + 2 * n1 * n2 + n2 * n2 );
//
//  Randomize the banded matrix A1.
//
  for ( j = 1; j <= n1; j++ )
  {
    for ( row = 1; row <= ml + mu + 1; row++ )
    {
      i = row + j - mu - 1;
      if ( 1 <= i && i <= n1 )
      {
        a[row-1+(j-1)*(ml+mu+1)] = r8_uniform_01 ( seed );
      }
    }
  }
//
//  Randomize the rectangular strips A2+A3+A4.
//
  for ( i = ( ml + mu + 1 ) * n1 + 1; i <= (ml+mu+1)*n1+2*n1*n2+n2*n2; i++ )
  {
    a[i-1] = r8_uniform_01 ( seed );
  }

  return a;
}
//****************************************************************************80

void r8cbb_set ( int n1, int n2, int ml, int mu, double a[], int i, int j, 
  double value )

//****************************************************************************80
//
//  Purpose:
//
//    R8CBB_SET sets an entry of an R8CBB matrix.
//
//  Discussion:
//
//    The R8CBB storage format is for a compressed border banded matrix.  
//    Such a matrix has the logical form:
//
//      A1 | A2
//      ---+---
//      A3 | A4
//
//    with A1 a (usually large) N1 by N1 banded matrix, while A2, A3 and A4
//    are dense rectangular matrices of orders N1 by N2, N2 by N1, and N2 by N2,
//    respectively.  
//
//    The R8CBB format is the same as the R8BB format, except that the banded
//    matrix A1 is stored in compressed band form rather than standard
//    banded form.  In other words, we do not include the extra room
//    set aside for fill in during pivoting.
//
//    A should be defined as a vector.  The user must then store
//    the entries of the four blocks of the matrix into the vector A.
//    Each block is stored by columns.
//
//    A1, the banded portion of the matrix, is stored in
//    the first (ML+MU+1)*N1 entries of A, using the obvious variant
//    of the LINPACK general band format.
//
//    The following formulas should be used to determine how to store
//    the entry corresponding to row I and column J in the original matrix:
//
//    Entries of A1:
//
//      1 <= I <= N1, 1 <= J <= N1, (J-I) <= MU and (I-J) <= ML.
//
//      Store the I, J entry into location
//      (I-J+MU+1)+(J-1)*(ML+MU+1).
//
//    Entries of A2:
//
//      1 <= I <= N1, N1+1 <= J <= N1+N2.
//
//      Store the I, J entry into location
//      (ML+MU+1)*N1+(J-N1-1)*N1+I.
//
//    Entries of A3:
//
//      N1+1 <= I <= N1+N2, 1 <= J <= N1.
//
//      Store the I, J entry into location
//      (ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//
//    Entries of A4:
//
//      N1+1 <= I <= N1+N2, N1+1 <= J <= N1+N2
//
//      Store the I, J entry into location
//      (ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//      (same formula used for A3).
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
//    Input, int N1, N2, the order of the banded and dense blocks.
//    N1 and N2 must be nonnegative, and at least one must be positive.
//
//    Input, int ML, MU, the lower and upper bandwidths.
//    ML and MU must be nonnegative, and no greater than N1-1.
//
//    Input/output, double A[(ML+MU+1)*N1 + 2*N1*N2 + N2*N2], the R8CBB matrix.
//
//    Input, int I, J, the indices of the entry to be incremented.
//
//    Input, double VALUE, the value to be assigned to the (I,J) entry.
//
{
  int ij;
//
//  Check for I or J out of bounds.
//
  if ( i < 0 || n1 + n2 <= i )
  {
    cerr << "\n";
    cerr << "R8CBB_SET - Fatal error!\n";
    cerr << "  Illegal input value of row index I = " << i << "\n";
    exit ( 1 );
  }

  if ( j < 0 || n1 + n2 <= j )
  {
    cerr << "\n";
    cerr << "R8CBB_SET - Fatal error!\n";
    cerr << "  Illegal input value of column index J = " << j << "\n";
    exit ( 1 );
  }
//
//  The A1 block of the matrix.
//
//  Check for out of band problems.
//
  if ( i < n1 && j < n1 )
  {
    if ( mu < ( j - i ) || ml < ( i - j ) )
    {
      cout << "\n";
      cout << "R8CBB_SET - Warning!\n";
      cout << "  Unable to set entry (" << i << ", " << j << ").\n";
      return;
    }
    else
    {
      ij = ( i - j + mu ) + j * ( ml + mu + 1 );
    }
  }
//
//  The A2 block of the matrix:
//
  else if ( i < n1 && n1 <= j )
  {
    ij = ( ml + mu + 1 ) * n1 + ( j - n1 ) * n1 + i;
  }
//
//  The A3 and A4 blocks of the matrix.
//
  else if ( n1 <= i )
  {
    ij = ( ml + mu + 1 ) * n1 + n2 * n1 + j * n2 + ( i - n1 );
  }

  a[ij] = value;

  return;
}
//****************************************************************************80

double *r8cbb_sl ( int n1, int n2, int ml, int mu, double a_lu[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8CBB_SL solves an R8CBB system factored by R8CBB_FA.
//
//  Discussion:
//
//    The R8CBB storage format is for a compressed border banded matrix.  
//    Such a matrix has the logical form:
//
//      A1 | A2
//      ---+---
//      A3 | A4
//
//    with A1 a (usually large) N1 by N1 banded matrix, while A2, A3 and A4
//    are dense rectangular matrices of orders N1 by N2, N2 by N1, and N2 by N2,
//    respectively.  
//
//    The R8CBB format is the same as the R8BB format, except that the banded
//    matrix A1 is stored in compressed band form rather than standard
//    banded form.  In other words, we do not include the extra room
//    set aside for fill in during pivoting.
//
//    A should be defined as a vector.  The user must then store
//    the entries of the four blocks of the matrix into the vector A.
//    Each block is stored by columns.
//
//    A1, the banded portion of the matrix, is stored in
//    the first (ML+MU+1)*N1 entries of A, using the obvious variant
//    of the LINPACK general band format.
//
//    The following formulas should be used to determine how to store
//    the entry corresponding to row I and column J in the original matrix:
//
//    Entries of A1:
//
//      1 <= I <= N1, 1 <= J <= N1, (J-I) <= MU and (I-J) <= ML.
//
//      Store the I, J entry into location
//      (I-J+MU+1)+(J-1)*(ML+MU+1).
//
//    Entries of A2:
//
//      1 <= I <= N1, N1+1 <= J <= N1+N2.
//
//      Store the I, J entry into location
//      (ML+MU+1)*N1+(J-N1-1)*N1+I.
//
//    Entries of A3:
//
//      N1+1 <= I <= N1+N2, 1 <= J <= N1.
//
//      Store the I, J entry into location
//      (ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//
//    Entries of A4:
//
//      N1+1 <= I <= N1+N2, N1+1 <= J <= N1+N2
//
//      Store the I, J entry into location
//      (ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//      (same formula used for A3).
//
//
//    The linear system A * x = b is decomposable into the block system:
//
//      ( A1 A2 ) * (X1) = (B1)
//      ( A3 A4 )   (X2)   (B2)
//
//    where A1 is a (usually big) banded square matrix, A2 and A3 are
//    column and row strips which may be nonzero, and A4 is a dense
//    square matrix.
//
//    All the arguments except B are input quantities only, which are
//    not changed by the routine.  They should have exactly the same values
//    they had on exit from R8CBB_FA.
//
//    If more than one right hand side is to be solved, with the same
//    matrix, R8CBB_SL should be called repeatedly.  However, R8CBB_FA only
//    needs to be called once to create the factorization.
//
//    See the documentation of R8CBB_FA for details on the matrix storage.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 January 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N1, N2, the order of the banded and dense blocks.
//    N1 and N2 must be nonnegative, and at least one must be positive.
//
//    Input, int ML, MU, the lower and upper bandwidths.
//    ML and MU must be nonnegative, and no greater than N1-1.
//
//    Input, double A_LU[ (ML+MU+1)*N1 + 2*N1*N2 + N2*N2].
//    the LU factors from R8CBB_FA.
//
//    Input, double B[N1+N2], the right hand side of the linear system.
//
//    Output, double R8CBB_SL[N1+N2], the solution.
//
{
  double *b2;
  int i;
  int ij;
  int j;
  int job;
  int nband;
  double *x;
  double *x1;
  double *x2;

  nband = ( ml + mu + 1 ) * n1;
//
//  Set X1 := inverse(A1) * B1.
//
  if ( 0 < n1 )
  {
    job = 0;
    x1 = r8cb_np_sl ( n1, ml, mu, a_lu, b, job );
  }
//
//  Modify the right hand side of the second linear subsystem.
//  Set B2 = B2-A3*X1.
//
  b2 = r8vec_zeros_new ( n2 );

  for ( i = 0; i < n2; i++ )
  {
    ij = nband + n1 * n2 + j * n2 + i;
    b2[i] = b[n1+i];
  }

  for ( j = 0; j < n1; j++ )
  {
    for ( i = 0; i < n2; i++ )
    {
      ij = nband + n1 * n2 + j * n2 + i;
      b2[i] = b2[i] - a_lu[ij] * x1[j];
    }
  }
//
//  Solve A4*X2 = B2.
//
  if ( 0 < n2 )
  {
    job = 0;
    x2 = r8ge_np_sl ( n2, a_lu+(nband+2*n1*n2), b2, job );
  }
//
//  Modify the first subsolution.
//  Set X1 = X1+A2*X2.
//
  for ( i = 0; i < n1; i++ )
  {
    for ( j = 0; j < n2; j++ )
    {
      ij = nband + j * n1 + i;
      x1[i] = x1[i] + a_lu[ij] * x2[j];
    }
  }
//
//  Collect X1 and X2 into X.
//
  x = r8vec_zeros_new ( n1 + n2 );

  for ( i = 0; i < n1; i++ )
  {
    x[i] = x1[i];
  }
  for ( i = 0; i < n2; i++ )
  {
    x[n1+i] = x2[i];
  }

  delete [] b2;
  delete [] x1;
  delete [] x2;

  return x;
}
//****************************************************************************80

double *r8cbb_to_r8ge ( int n1, int n2, int ml, int mu, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8CBB_TO_R8GE copies an R8CBB matrix to an R8GE matrix.
//
//  Discussion:
//
//    The R8CBB storage format is for a compressed border banded matrix.  
//    Such a matrix has the logical form:
//
//      A1 | A2
//      ---+---
//      A3 | A4
//
//    with A1 a (usually large) N1 by N1 banded matrix, while A2, A3 and A4
//    are dense rectangular matrices of orders N1 by N2, N2 by N1, and N2 by N2,
//    respectively.  
//
//    The R8CBB format is the same as the R8BB format, except that the banded
//    matrix A1 is stored in compressed band form rather than standard
//    banded form.  In other words, we do not include the extra room
//    set aside for fill in during pivoting.
//
//    A should be defined as a vector.  The user must then store
//    the entries of the four blocks of the matrix into the vector A.
//    Each block is stored by columns.
//
//    A1, the banded portion of the matrix, is stored in
//    the first (ML+MU+1)*N1 entries of A, using the obvious variant
//    of the LINPACK general band format.
//
//    The following formulas should be used to determine how to store
//    the entry corresponding to row I and column J in the original matrix:
//
//    Entries of A1:
//
//      1 <= I <= N1, 1 <= J <= N1, (J-I) <= MU and (I-J) <= ML.
//
//      Store the I, J entry into location
//      (I-J+MU+1)+(J-1)*(ML+MU+1).
//
//    Entries of A2:
//
//      1 <= I <= N1, N1+1 <= J <= N1+N2.
//
//      Store the I, J entry into location
//      (ML+MU+1)*N1+(J-N1-1)*N1+I.
//
//    Entries of A3:
//
//      N1+1 <= I <= N1+N2, 1 <= J <= N1.
//
//      Store the I, J entry into location
//      (ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//
//    Entries of A4:
//
//      N1+1 <= I <= N1+N2, N1+1 <= J <= N1+N2
//
//      Store the I, J entry into location
//      (ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//      (same formula used for A3).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    25 October 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N1, N2, the order of the banded and dense blocks.
//    N1 and N2 must be nonnegative, and at least one must be positive.
//
//    Input, int ML, MU, the lower and upper bandwidths.
//    ML and MU must be nonnegative, and no greater than N1-1.
//
//    Input, double A[(ML+MU+1)*N1+2*N1*N2+N2*N2], the R8CBB matrix.
//
//    Output, double R8CBB_TO_R8GE[(N1+N2)*(N1+N2)], the R8GE matrix.
//
{
  double *b;
  int i;
  int ij;
  int j;

  b = r8vec_zeros_new ( ( n1 + n2 ) * ( n1 + n2 ) );

  for ( i = 1; i <= n1; i++ )
  {
    for ( j = 1; j <= n1; j++ )
    {
      if ( mu + ml < ( j - i ) || ml < ( i - j )  )
      {
        b[i-1+(j-1)*(n1+n2)] = 0.0;
      }
      else
      {
        ij = ( i - j + mu + 1 ) + ( j - 1 ) * ( ml + mu + 1 );
        b[i-1+(j-1)*(n1+n2)] = a[ij-1];
      }
    }
  }

  for ( i = 1; i <= n1; i++ )
  {
    for ( j = n1 + 1; j <= n1 + n2; j++ )
    {
      ij = ( ml + mu + 1 ) * n1 + ( j - n1 - 1 ) * n1 + i;
      b[i-1+(j-1)*(n1+n2)] = a[ij-1];
    }
  }

  for ( i = n1 + 1; i <= n1 + n2; i++ )
  {
    for ( j = 1; j <= n1 + n2; j++)
    {
      ij = ( ml + mu + 1 ) * n1 + n2 * n1 + ( j - 1 ) * n2 + ( i - n1 );
      b[i-1+(j-1)*(n1+n2)] = a[ij-1];
    }
  }

  return b;
}
//****************************************************************************80

double *r8cbb_zeros ( int n1, int n2, int ml, int mu )

//****************************************************************************80
//
//  Purpose:
//
//    R8CBB_ZEROS zeros an R8CBB matrix.
//
//  Discussion:
//
//    The R8CBB storage format is for a compressed border banded matrix.  
//    Such a matrix has the logical form:
//
//      A1 | A2
//      ---+---
//      A3 | A4
//
//    with A1 a (usually large) N1 by N1 banded matrix, while A2, A3 and A4
//    are dense rectangular matrices of orders N1 by N2, N2 by N1, and N2 by N2,
//    respectively.  
//
//    The R8CBB format is the same as the R8BB format, except that the banded
//    matrix A1 is stored in compressed band form rather than standard
//    banded form.  In other words, we do not include the extra room
//    set aside for fill in during pivoting.
//
//    A should be defined as a vector.  The user must then store
//    the entries of the four blocks of the matrix into the vector A.
//    Each block is stored by columns.
//
//    A1, the banded portion of the matrix, is stored in
//    the first (ML+MU+1)*N1 entries of A, using the obvious variant
//    of the LINPACK general band format.
//
//    The following formulas should be used to determine how to store
//    the entry corresponding to row I and column J in the original matrix:
//
//    Entries of A1:
//
//      1 <= I <= N1, 1 <= J <= N1, (J-I) <= MU and (I-J) <= ML.
//
//      Store the I, J entry into location
//      (I-J+MU+1)+(J-1)*(ML+MU+1).
//
//    Entries of A2:
//
//      1 <= I <= N1, N1+1 <= J <= N1+N2.
//
//      Store the I, J entry into location
//      (ML+MU+1)*N1+(J-N1-1)*N1+I.
//
//    Entries of A3:
//
//      N1+1 <= I <= N1+N2, 1 <= J <= N1.
//
//      Store the I, J entry into location
//      (ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//
//    Entries of A4:
//
//      N1+1 <= I <= N1+N2, N1+1 <= J <= N1+N2
//
//      Store the I, J entry into location
//      (ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//      (same formula used for A3).
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
//    Input, int N1, N2, the order of the banded and dense blocks.
//    N1 and N2 must be nonnegative, and at least one must be positive.
//
//    Input, int ML, MU, the lower and upper bandwidths.
//    ML and MU must be nonnegative, and no greater than N1-1.
//
//    Output, double R8CBB_ZERO[(ML+MU+1)*N1 + 2*N1*N2 + N2*N2], the matrix.
//
{
  double *a;

  a = r8vec_zeros_new ( ( ml + mu + 1 ) * n1 + 2 * n1 * n2 + n2 * n2 );

  return a;
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
