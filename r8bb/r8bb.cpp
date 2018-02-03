# include <cmath>
# include <cstdlib>
# include <ctime>
# include <fstream>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8bb.hpp"

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

void r8bb_add ( int n1, int n2, int ml, int mu, double a[], int i, int j, 
  double value )

//****************************************************************************80
//
//  Purpose:
//
//    R8BB_ADD adds a value to an entry in an R8BB matrix.
//
//  Discussion:
//
//    The R8BB storage format is for a border banded matrix.  Such a
//    matrix has the logical form:
//
//      A1 | A2
//      ---+---
//      A3 | A4
//
//    with A1 a (usually large) N1 by N1 banded matrix, while A2, A3 and A4
//    are dense rectangular matrices of orders N1 by N2, N2 by N1, 
//    and N2 by N2, respectively.
//
//    A should be defined as a vector.  The user must then store
//    the entries of the four blocks of the matrix into the vector A.
//    Each block is stored by columns.
//
//    A1, the banded portion of the matrix, is stored in
//    the first (2*ML+MU+1)*N1 entries of A, using standard LINPACK
//    general band format.  The reason for the factor of 2 in front of
//    ML is to allocate space that may be required if pivoting occurs.
//
//    The following formulas should be used to determine how to store
//    the entry corresponding to row I and column J in the original matrix:
//
//    Entries of A1:
//
//      1 <= I <= N1, 1 <= J <= N1, (J-I) <= MU and (I-J) <= ML.
//
//      Store the I, J entry into location
//      (I-J+ML+MU+1)+(J-1)*(2*ML+MU+1).
//
//    Entries of A2:
//
//      1 <= I <= N1, N1+1 <= J <= N1+N2.
//
//      Store the I, J entry into location
//      (2*ML+MU+1)*N1+(J-N1-1)*N1+I.
//
//    Entries of A3:
//
//      N1+1 <= I <= N1+N2, 1 <= J <= N1.
//
//      Store the I, J entry into location
//      (2*ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//
//    Entries of A4:
//
//      N1+1 <= I <= N1+N2, N1+1 <= J <= N1+N2
//
//      Store the I, J entry into location
//      (2*ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
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
//    Input/output, double A[(2*ML+MU+1)*N1+2*N1*N2+N2*N2], the R8BB matrix.
//
//    Input, int I, J, the row and column of the entry to be incremented.
//    Some combinations of I and J are illegal.
//
//    Input, double VALUE, the value to be added to the (I,J)-th entry.
//
{
  int ij;

  if ( value == 0.0 )
  {
    return;
  }

  if ( i < 0 || n1 + n2 <= i )
  {
    cerr << "\n";
    cerr << "R8BB_ADD - Fatal error!\n";
    cerr << "  Illegal input value of row index I = " << i << "\n";
    exit ( 1 );
  }

  if ( j < 0 || n1 + n2 <= j )
  {
    cerr << "\n";
    cerr << "R8BB_ADD - Fatal error!\n";
    cerr << "  Illegal input value of column index J = " << j << "\n";
    exit ( 1 );
  }
//
//  The A1 block of the matrix.
//
//  Check for out of band problems.
//
//  Normally, we would check the condition MU < (J-I), but the storage
//  format requires extra entries be set aside in case of pivoting, which
//  means that the condition becomes MU+ML < (J-I).
//
  if ( i < n1 && j < n1 )
  {
    if ( ( mu + ml ) < ( j - i ) || ml < ( i - j ) )
    {
      cout << "\n";
      cout << "R8BB_ADD - Warning!\n";
      cout << "  Unable to add to entry (" << i << ", " << j << ").\n";
    }
    else
    {
      ij = ( i - j + ml + mu ) + j * ( 2 * ml + mu + 1 );
    }
  }
//
//  The A2 block of the matrix.
//
  else if ( i < n1 && n1 <= j )
  {
    ij = ( 2 * ml + mu + 1 ) * n1 + ( j - n1 ) * n1 + i;
  }
//
//  The A3 and A4 blocks of the matrix.
//
  else if ( n1 <= i )
  {
    ij = ( 2 * ml + mu + 1 ) * n1 + n2 * n1 + j * n2 + ( i - n1 );
  }

  a[ij] = a[ij] + value;

  return;
}
//****************************************************************************80

double *r8bb_dif2 ( int n1, int n2, int ml, int mu )

//****************************************************************************80
//
//  Purpose:
//
//    R8BB_DIF2 sets up an R8BB second difference matrix.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    10 July 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N1, N2, the order of the banded and dense 
//    blocks.  N1 and N2 must be nonnegative, and at least one must be positive.
//
//    Input, int ML, MU, the lower and upper bandwidths.
//    1 <= ML, 1 <= MU.
//
//    Output, double R8BB_DIF2[(2*ML+MU+1)*N1+2*N1*N2+N2*N2], the matrix.
//
{
  double *a;
  int i;
  int j;
  double value;

  a = r8vec_zeros_new ( ( 2 * ml + mu + 1 ) * n1 + 2 * n1 * n2 + n2 * n2 );

  if ( ml < 1 || mu < 1 )
  {
    cerr << "\n";
    cerr << "R8BB_DIF2 - Fatal error!\n";
    cerr << "  1 <= ML and 1 <= MU required.\n";
    exit ( 1 );
  }

  for ( i = 1; i < n1 + n2; i++ )
  {
    j = i - 1;
    value = - 1.0;
    r8bb_set ( n1, n2, ml, mu, a, i, j, value );
  }

  for ( i = 0; i < n1 + n2; i++ )
  {
    j = i;
    value = 2.0;
    r8bb_set ( n1, n2, ml, mu, a, i, j, value );
  }

  for ( i = 0; i < n1 + n2 - 1; i++ )
  {
    j = i + 1;
    value = - 1.0;
    r8bb_set ( n1, n2, ml, mu, a, i, j, value );
  }

  return a;
}
//****************************************************************************80

int r8bb_fa ( int n1, int n2, int ml, int mu, double a[], int pivot[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8BB_FA factors an R8BB matrix.
//
//  Discussion:
//
//    The R8BB storage format is for a border banded matrix.  Such a
//    matrix has the logical form:
//
//      A1 | A2
//      ---+---
//      A3 | A4
//
//    with A1 a (usually large) N1 by N1 banded matrix, while A2, A3 and A4
//    are dense rectangular matrices of orders N1 by N2, N2 by N1, and N2 by N2,
//    respectively.
//
//    A should be defined as a vector.  The user must then store
//    the entries of the four blocks of the matrix into the vector A.
//    Each block is stored by columns.
//
//    A1, the banded portion of the matrix, is stored in
//    the first (2*ML+MU+1)*N1 entries of A, using standard LINPACK
//    general band format.  The reason for the factor of 2 in front of
//    ML is to allocate space that may be required if pivoting occurs.
//
//    The following formulas should be used to determine how to store
//    the entry corresponding to row I and column J in the original matrix:
//
//    Entries of A1:
//
//      1 <= I <= N1, 1 <= J <= N1, (J-I) <= MU and (I-J) <= ML.
//
//      Store the I, J entry into location
//      (I-J+ML+MU+1)+(J-1)*(2*ML+MU+1).
//
//    Entries of A2:
//
//      1 <= I <= N1, N1+1 <= J <= N1+N2.
//
//      Store the I, J entry into location
//      (2*ML+MU+1)*N1+(J-N1-1)*N1+I.
//
//    Entries of A3:
//
//      N1+1 <= I <= N1+N2, 1 <= J <= N1.
//
//      Store the I, J entry into location
//      (2*ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//
//    Entries of A4:
//
//      N1+1 <= I <= N1+N2, N1+1 <= J <= N1+N2
//
//      Store the I, J entry into location
//      (2*ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//      (same formula used for A3).
//
//  Example:
//
//    With N1 = 4, N2 = 1, ML = 1, MU = 2, the matrix entries would be:
//
//       00
//       00  00
//       00  00  00 --- ---
//      A11 A12 A13  00 ---  A16 A17
//      A21 A22 A23 A24  00  A26 A27
//      --- A32 A33 A34 A35  A36 A37
//      --- --- A43 A44 A45  A46 A47
//      --- --- --- A54 A55  A56 A57
//                       00
//
//      A61 A62 A63 A64 A65  A66 A67
//      A71 A72 A73 A74 A75  A76 A77
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    21 January 2004
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
//    Input/output, double A[(2*ML+MU+1)*N1 + 2*N1*N2 + N2*N2 ].
//    On input, the border-banded matrix to be factored.
//    On output, information describing a partial factorization
//    of the original coefficient matrix.  This information is required
//    by R8BB_SL in order to solve linear systems associated with that
//    matrix.
//
//    Output, int PIVOT[N1+N2], contains pivoting information.
//
//    Output, int R8BB_FA, singularity flag.
//    0, no singularity detected.
//    nonzero, the factorization failed on the INFO-th step.
//
{
  double *b;
  int i;
  int ij;
  int ik;
  int info;
  int j;
  int jk;
  int job;
  int k;
  int nband;
  double *x;

  nband = ( 2 * ml + mu + 1 ) * n1;
//
//  Factor the A1 band matrix, overwriting A1 by its factors.
//
  if ( 0 < n1 )
  {
    info = r8gb_fa ( n1, ml, mu, a, pivot );

    if ( info != 0 )
    {
      return info;
    }
  }

  if ( 0 < n1 && 0 < n2 )
  {
//
//  Solve A1 * x = -A2 for x, and overwrite A2 by the results.
//
    for ( i = nband + 1; i <= nband + n1 * n2; i++ )
    {
      a[i-1] = - a[i-1];
    }

    b = r8vec_zeros_new ( n1 );
    x = r8vec_zeros_new ( n1 );

    job = 0;
    for ( j = 1; j <= n2; j++ )
    {
      for ( i = 0; i < n1; i++ )
      {
        b[i] = a[nband+(j-1)*n1+i];
      }
      x = r8gb_sl ( n1, ml, mu, a, pivot, b, job );
      for ( i = 0; i < n1; i++ )
      {
        a[nband+(j-1)*n1+i] = x[i];
      }
      delete [] x;
    }
    delete [] b;
//
//  A4 := A4 + A3 * A2.
//
    for ( i = 1; i <= n2; i++ )
    {
      for ( j = 1; j <= n1; j++ )
      {
        ij = nband + n1 * n2 + ( j - 1 ) * n2 + i;
        for ( k = 1; k <= n2; k++ )
        {
          ik = nband + 2 * n1 * n2 + ( k - 1 ) * n2 + i;
          jk = nband + ( k - 1 ) * n1 + j;
          a[ik-1] = a[ik-1] + a[ij-1] * a[jk-1];
        }
      }
    }
  }
//
//  Factor A4.
//
  if ( 0 < n2 )
  {
    info = r8ge_fa ( n2, a+(nband+2*n1*n2), pivot+n1 );

    if ( info != 0 )
    {
      return info;
    }
  }

  return 0;
}
//****************************************************************************80

double r8bb_get ( int n1, int n2, int ml, int mu, double a[], int i, int j )

//****************************************************************************80
//
//  Purpose:
//
//    R8BB_GET gets a value of an R8BB matrix.
//
//  Discussion:
//
//    The R8BB storage format is for a border banded matrix.  Such a
//    matrix has the logical form:
//
//      A1 | A2
//      ---+---
//      A3 | A4
//
//    with A1 a (usually large) N1 by N1 banded matrix, while A2, A3 and A4
//    are dense rectangular matrices of orders N1 by N2, N2 by N1, 
//    and N2 by N2, respectively.
//
//    A should be defined as a vector.  The user must then store
//    the entries of the four blocks of the matrix into the vector A.
//    Each block is stored by columns.
//
//    A1, the banded portion of the matrix, is stored in
//    the first (2*ML+MU+1)*N1 entries of A, using standard LINPACK
//    general band format.  The reason for the factor of 2 in front of
//    ML is to allocate space that may be required if pivoting occurs.
//
//    The following formulas should be used to determine how to store
//    the entry corresponding to row I and column J in the original matrix:
//
//    Entries of A1:
//
//      1 <= I <= N1, 1 <= J <= N1, (J-I) <= MU and (I-J) <= ML.
//
//      Store the I, J entry into location
//      (I-J+ML+MU+1)+(J-1)*(2*ML+MU+1).
//
//    Entries of A2:
//
//      1 <= I <= N1, N1+1 <= J <= N1+N2.
//
//      Store the I, J entry into location
//      (2*ML+MU+1)*N1+(J-N1-1)*N1+I.
//
//    Entries of A3:
//
//      N1+1 <= I <= N1+N2, 1 <= J <= N1.
//
//      Store the I, J entry into location
//      (2*ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//
//    Entries of A4:
//
//      N1+1 <= I <= N1+N2, N1+1 <= J <= N1+N2
//
//      Store the I, J entry into location
//      (2*ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//      (same formula used for A3).
//
//  Example:
//
//    With N1 = 4, N2 = 1, ML = 1, MU = 2, the matrix entries would be:
//
//       00
//       00  00
//       00  00  00 --- ---
//      A11 A12 A13  00 ---  A16 A17
//      A21 A22 A23 A24  00  A26 A27
//      --- A32 A33 A34 A35  A36 A37
//      --- --- A43 A44 A45  A46 A47
//      --- --- --- A54 A55  A56 A57
//                       00
//
//      A61 A62 A63 A64 A65  A66 A67
//      A71 A72 A73 A74 A75  A76 A77
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
//    Input/output, double A[(2*ML+MU+1)*N1+2*N1*N2+N2*N2], the R8BB matrix.
//
//    Input, int I, J, the row and column of the entry to be incremented.
//    Some combinations of I and J are illegal.
//
//    Output, double R8BB_GET, the value of the (I,J)-th entry.
//
{
  int ij;

  if ( i < 0 || n1 + n2 <= i )
  {
    cerr << "\n";
    cerr << "R8BB_GET - Fatal error!\n";
    cerr << "  Illegal input value of row index I = " << i << "\n";
    exit ( 1 );
  }

  if ( j < 0 || n1 + n2 <= j )
  {
    cerr << "\n";
    cerr << "R8BB_GET - Fatal error!\n";
    cerr << "  Illegal input value of column index J = " << j << "\n";
    exit ( 1 );
  }
//
//  The A1 block of the matrix.
//
//  Check for out of band problems.
//
//  Normally, we would check the condition MU < (J-I), but the storage
//  format requires extra entries be set aside in case of pivoting, which
//  means that the condition becomes MU+ML < (J-I).
//
  if ( i < n1 && j < n1 )
  {
    if ( ( mu + ml ) < ( j - i ) || ml < ( i - j ) )
    {
      return 0.0;
    }
    else
    {
      ij = ( i - j + ml + mu ) + j * ( 2 * ml + mu + 1 );
    }
  }
//
//  The A2 block of the matrix.
//
  else if ( i < n1 && n1 <= j )
  {
    ij = ( 2 * ml + mu + 1 ) * n1 + ( j - n1 ) * n1 + i;
  }
//
//  The A3 and A4 blocks of the matrix.
//
  else if ( n1 <= i )
  {
    ij = ( 2 * ml + mu + 1 ) * n1 + n2 * n1 + j * n2 + ( i - n1 );
  }

  return a[ij];
}
//****************************************************************************80

double *r8bb_indicator ( int n1, int n2, int ml, int mu )

//****************************************************************************80
//
//  Purpose:
//
//    R8BB_INDICATOR sets up an R8BB indicator matrix.
//
//  Discussion:
//
//    The R8BB storage format is for a border banded matrix.  Such a
//    matrix has the logical form:
//
//      A1 | A2
//      ---+---
//      A3 | A4
//
//    with A1 a (usually large) N1 by N1 banded matrix, while A2, A3 and A4
//    are dense rectangular matrices of orders N1 by N2, N2 by N1, and N2 by N2,
//    respectively.
//
//  Example:
//
//    With N1 = 4, N2 = 1, ML = 1, MU = 2, the matrix entries would be:
//
//       00
//       00  00
//       00  00  00 --- ---
//      A11 A12 A13  00 ---  A16 A17
//      A21 A22 A23 A24  00  A26 A27
//      --- A32 A33 A34 A35  A36 A37
//      --- --- A43 A44 A45  A46 A47
//      --- --- --- A54 A55  A56 A57
//                       00
//
//      A61 A62 A63 A64 A65  A66 A67
//      A71 A72 A73 A74 A75  A76 A77
//
//    The matrix is actually stored as a vector, and we will simply suggest
//    the structure and values of the indicator matrix as:
//
//      00 00 00 00 00
//      00 00 13 24 35     16 17     61 62 63 64 65     66 67
//      00 12 23 34 45  +  26 27  +  71 72 73 74 75  +  76 77
//      11 22 33 44 55     36 37     
//      21 32 43 54 00     46 47     
//                         56 57     
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    08 January 2004
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
//    Output, double R8BB_INDICATOR[(2*ML+MU+1)*N1+2*N1*N2+N2*N2], 
//    the matrix.
//
{
  double *a;
  int base;
  int fac;
  int i;
  int j;
  int row;

  a = r8vec_zeros_new ( ( 2 * ml + mu + 1 ) * n1 + 2 * n1 * n2 + n2 * n2 );

  fac = i4_power ( 10, i4_log_10 ( n1 + n2 ) + 1 );
//
//  Set the banded matrix A1.
//
  for ( j = 1; j <= n1; j++ )
  {
    for ( row = 1; row <= 2 * ml + mu + 1; row++ )
    {
      i = row + j - ml - mu - 1;
      if ( ml < row && 1 <= i && i <= n1 )
      {
        a[row-1+(j-1)*(2*ml+mu+1)] = ( double ) ( fac * i + j );
      }
    }
  }
//
//  Set the N1 by N2 rectangular strip A2.
//
  base = ( 2 * ml + mu + 1 ) * n1;

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
  base = ( 2 * ml + mu + 1 ) * n1 + n1 * n2;

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
  base = ( 2 * ml + mu + 1 ) * n1 + n1 * n2 + n2 * n1;

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

double *r8bb_mtv ( int n1, int n2, int ml, int mu, double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8BB_MTV multiplies a vector by an R8BB matrix.
//
//  Discussion:
//
//    The R8BB storage format is for a border banded matrix.  Such a
//    matrix has the logical form:
//
//      A1 | A2
//      ---+---
//      A3 | A4
//
//    with A1 a (usually large) N1 by N1 banded matrix, while A2, A3 and A4
//    are dense rectangular matrices of orders N1 by N2, N2 by N1, 
//    and N2 by N2, respectively.
//
//    A should be defined as a vector.  The user must then store
//    the entries of the four blocks of the matrix into the vector A.
//    Each block is stored by columns.
//
//    A1, the banded portion of the matrix, is stored in
//    the first (2*ML+MU+1)*N1 entries of A, using standard LINPACK
//    general band format.  The reason for the factor of 2 in front of
//    ML is to allocate space that may be required if pivoting occurs.
//
//    The following formulas should be used to determine how to store
//    the entry corresponding to row I and column J in the original matrix:
//
//    Entries of A1:
//
//      1 <= I <= N1, 1 <= J <= N1, (J-I) <= MU and (I-J) <= ML.
//
//      Store the I, J entry into location
//      (I-J+ML+MU+1)+(J-1)*(2*ML+MU+1).
//
//    Entries of A2:
//
//      1 <= I <= N1, N1+1 <= J <= N1+N2.
//
//      Store the I, J entry into location
//      (2*ML+MU+1)*N1+(J-N1-1)*N1+I.
//
//    Entries of A3:
//
//      N1+1 <= I <= N1+N2, 1 <= J <= N.
//
//      Store the I, J entry into location
//      (2*ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//
//    Entries of A4:
//
//      N1+1 <= I <= N1+N2, N1+1 <= J <= N1+N2
//
//      Store the I, J entry into location
//      (2*ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//      (same formula used for A3).
//
//  Example:
//
//    With N1 = 4, N2 = 1, ML = 1, MU = 2, the matrix entries would be:
//
//       00
//       00  00
//       00  00  00 --- ---
//      A11 A12 A13  00 ---  A16 A17
//      A21 A22 A23 A24  00  A26 A27
//      --- A32 A33 A34 A35  A36 A37
//      --- --- A43 A44 A45  A46 A47
//      --- --- --- A54 A55  A56 A57
//                       00
//
//      A61 A62 A63 A64 A65  A66 A67
//      A71 A72 A73 A74 A75  A76 A77
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    21 October 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N1, N2, the order of the banded and dense blocks
//    N1 and N2 must be nonnegative, and at least one must be positive.
//
//    Input, int ML, MU, the lower and upper bandwidths.
//    ML and MU must be nonnegative and no greater than N1-1.
//
//    Input, double A[(2*ML+MU+1)*N1 + 2*N1*N2 + N2*N2], the R8BB matrix.
//
//    Input, double X[N1+N2], the vector to multiply A.
//
//    Output, double R8BB_MTV[N1+N2], the product X times A.
//
{
  double *b;
  int i;
  int ihi;
  int ij;
  int ilo;
  int j;
//
//  Initialize B.
//
  b = r8vec_zeros_new ( n1 + n2 );
//
//  Multiply by A1.
//
  for ( j = 1; j <= n1; j++ )
  {
    ilo = i4_max ( 1, j - mu - ml );
    ihi = i4_min ( n1, j + ml );
    ij = ( j - 1 ) * ( 2 * ml + mu + 1 ) - j + ml + mu + 1;
    for ( i = ilo; i <= ihi; i++ )
    {
      b[j-1] = b[j-1] + x[i-1] * a[ij+i-1];
    }
  }
//
//  Multiply by A2.
//
  for ( j = n1 + 1; j <= n1 + n2; j++ )
  {
    ij = ( 2 * ml + mu + 1 ) * n1 + ( j - n1 - 1 ) * n1;
    for ( i = 1; i <= n1; i++ )
    {
      b[j-1] = b[j-1] + x[i-1] * a[ij+i-1];
    }
  }
//
//  Multiply by A3 and A4.
//
  for ( j = 1; j <= n1 + n2; j++ )
  {
    ij = ( 2 * ml + mu + 1 ) * n1 + n1 * n2 + ( j - 1 ) * n2 - n1;
    for ( i = n1 + 1; i <= n1 + n2; i++ )
    {
      b[j-1] = b[j-1] + x[i-1] * a[ij+i-1];
    }
  }

  return b;
}
//****************************************************************************80

double *r8bb_mv ( int n1, int n2, int ml, int mu, double a[], double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8BB_MV multiplies an R8BB matrix times a vector.
//
//  Discussion:
//
//    The R8BB storage format is for a border banded matrix.  Such a
//    matrix has the logical form:
//
//      A1 | A2
//      ---+---
//      A3 | A4
//
//    with A1 a (usually large) N1 by N1 banded matrix, while A2, A3 and A4
//    are dense rectangular matrices of orders N1 by N2, N2 by N1, and N2 by N2,
//    respectively.
//
//    A should be defined as a vector.  The user must then store
//    the entries of the four blocks of the matrix into the vector A.
//    Each block is stored by columns.
//
//    A1, the banded portion of the matrix, is stored in
//    the first (2*ML+MU+1)*N1 entries of A, using standard LINPACK
//    general band format.  The reason for the factor of 2 in front of
//    ML is to allocate space that may be required if pivoting occurs.
//
//    The following formulas should be used to determine how to store
//    the entry corresponding to row I and column J in the original matrix:
//
//    Entries of A1:
//
//      1 <= I <= N1, 1 <= J <= N1, (J-I) <= MU and (I-J) <= ML.
//
//      Store the I, J entry into location
//      (I-J+ML+MU+1)+(J-1)*(2*ML+MU+1).
//
//    Entries of A2:
//
//      1 <= I <= N1, N1+1 <= J <= N1+N2.
//
//      Store the I, J entry into location
//      (2*ML+MU+1)*N1+(J-N1-1)*N1+I.
//
//    Entries of A3:
//
//      N1+1 <= I <= N1+N2, 1 <= J <= N1.
//
//      Store the I, J entry into location
//      (2*ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//
//    Entries of A4:
//
//      N1+1 <= I <= N1+N2, N1+1 <= J <= N1+N2
//
//      Store the I, J entry into location
//      (2*ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//      (same formula used for A3).
//
//  Example:
//
//    With N1 = 4, N2 = 1, ML = 1, MU = 2, the matrix entries would be:
//
//       00
//       00  00
//       00  00  00 --- ---
//      A11 A12 A13  00 ---  A16 A17
//      A21 A22 A23 A24  00  A26 A27
//      --- A32 A33 A34 A35  A36 A37
//      --- --- A43 A44 A45  A46 A47
//      --- --- --- A54 A55  A56 A57
//                       00
//
//      A61 A62 A63 A64 A65  A66 A67
//      A71 A72 A73 A74 A75  A76 A77
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
//    Input, int N1, N2, the order of the banded and dense blocks
//    N1 and N2 must be nonnegative, and at least one must be positive.
//
//    Input, int ML, MU, the lower and upper bandwidths.
//    ML and MU must be nonnegative and no greater than N1-1.
//
//    Input, double A[(2*ML+MU+1)*N1+2*N1*N2+N2*N2], the R8BB matrix.
//
//    Input, double X[N1+N2], the vector to be multiplied by A.
//
//    Output, double R8BB_MV[N1+N2], the result of multiplying A by X.
//
{
  double *b;
  int i;
  int ihi;
  int ij;
  int ilo;
  int j;
//
//  Initialize B.
//
  b = r8vec_zeros_new ( n1 + n2 );
//
//  Multiply by A1.
//
  for ( j = 1; j <= n1; j++ )
  {
    ilo = i4_max ( 1, j - mu - ml );
    ihi = i4_min ( n1, j + ml );
    ij = ( j - 1 ) * ( 2 * ml + mu + 1 ) - j + ml + mu + 1;
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
    ij = ( 2 * ml + mu + 1 ) * n1 + ( j - n1 - 1 ) * n1;
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
    ij = ( 2 * ml + mu + 1 ) * n1 + n1 * n2 + ( j - 1 ) * n2 - n1;
    for ( i = n1 + 1; i <= n1 + n2; i++ )
    {
      b[i-1] = b[i-1] + a[ij+i-1] * x[j-1];
    }
  }

  return b;
}
//****************************************************************************80

void r8bb_print ( int n1, int n2, int ml, int mu, double a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8BB_PRINT prints an R8BB matrix.
//
//  Discussion:
//
//    The R8BB storage format is for a border banded matrix.  Such a
//    matrix has the logical form:
//
//      A1 | A2
//      ---+---
//      A3 | A4
//
//    with A1 a (usually large) N1 by N1 banded matrix, while A2, A3 and A4
//    are dense rectangular matrices of orders N1 by N2, N2 by N1, 
//    and N2 by N2, respectively.
//
//    A should be defined as a vector.  The user must then store
//    the entries of the four blocks of the matrix into the vector A.
//    Each block is stored by columns.
//
//    A1, the banded portion of the matrix, is stored in
//    the first (2*ML+MU+1)*N1 entries of A, using standard LINPACK
//    general band format.  The reason for the factor of 2 in front of
//    ML is to allocate space that may be required if pivoting occurs.
//
//    The following formulas should be used to determine how to store
//    the entry corresponding to row I and column J in the original matrix:
//
//    Entries of A1:
//
//      1 <= I <= N1, 1 <= J <= N1, (J-I) <= MU and (I-J) <= ML.
//
//      Store the I, J entry into location
//      (I-J+ML+MU+1)+(J-1)*(2*ML+MU+1).
//
//    Entries of A2:
//
//      1 <= I <= N1, N1+1 <= J <= N1+N2.
//
//      Store the I, J entry into location
//      (2*ML+MU+1)*N1+(J-N1-1)*N1+I.
//
//    Entries of A3:
//
//      N1+1 <= I <= N1+N2, 1 <= J <= N1.
//
//      Store the I, J entry into location
//      (2*ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//
//    Entries of A4:
//
//      N1+1 <= I <= N1+N2, N1+1 <= J <= N1+N2
//
//      Store the I, J entry into location
//      (2*ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//      (same formula used for A3).
//
//  Example:
//
//    With N1 = 4, N2 = 1, ML = 1, MU = 2, the matrix entries would be:
//
//       00
//       00  00
//       00  00  00 --- ---
//      A11 A12 A13  00 ---  A16 A17
//      A21 A22 A23 A24  00  A26 A27
//      --- A32 A33 A34 A35  A36 A37
//      --- --- A43 A44 A45  A46 A47
//      --- --- --- A54 A55  A56 A57
//                       00
//
//      A61 A62 A63 A64 A65  A66 A67
//      A71 A72 A73 A74 A75  A76 A77
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
//    Input, double A[(2*ML+MU+1)*N1+2*N1*N2+N2*N2], the R8BB matrix.
//
//    Input, string TITLE, a title.
//
{
  r8bb_print_some ( n1, n2, ml, mu, a, 0, 0, n1 + n2 - 1, n1 + n2 - 1, title );

  return;
}
//****************************************************************************80

void r8bb_print_some ( int n1, int n2, int ml, int mu, double a[], int ilo, 
  int jlo, int ihi, int jhi, string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8BB_PRINT_SOME prints some of an R8BB matrix.
//
//  Discussion:
//
//    The R8BB storage format is for a border banded matrix.  Such a
//    matrix has the logical form:
//
//      A1 | A2
//      ---+---
//      A3 | A4
//
//    with A1 a (usually large) N1 by N1 banded matrix, while A2, A3 and A4
//    are dense rectangular matrices of orders N1 by N2, N2 by N1, and N2 by N2,
//    respectively.
//
//    A should be defined as a vector.  The user must then store
//    the entries of the four blocks of the matrix into the vector A.
//    Each block is stored by columns.
//
//    A1, the banded portion of the matrix, is stored in
//    the first (2*ML+MU+1)*N1 entries of A, using standard LINPACK
//    general band format.  The reason for the factor of 2 in front of
//    ML is to allocate space that may be required if pivoting occurs.
//
//    The following formulas should be used to determine how to store
//    the entry corresponding to row I and column J in the original matrix:
//
//    Entries of A1:
//
//      1 <= I <= N1, 1 <= J <= N1, (J-I) <= MU and (I-J) <= ML.
//
//      Store the I, J entry into location
//      (I-J+ML+MU+1)+(J-1)*(2*ML+MU+1).
//
//    Entries of A2:
//
//      1 <= I <= N1, N1+1 <= J <= N1+N2.
//
//      Store the I, J entry into location
//      (2*ML+MU+1)*N1+(J-N1-1)*N1+I.
//
//    Entries of A3:
//
//      N1+1 <= I <= N1+N2, 1 <= J <= N1.
//
//      Store the I, J entry into location
//      (2*ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//
//    Entries of A4:
//
//      N1+1 <= I <= N1+N2, N1+1 <= J <= N1+N2
//
//      Store the I, J entry into location
//      (2*ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//      (same formula used for A3).
//
//  Example:
//
//    With N1 = 4, N2 = 1, ML = 1, MU = 2, the matrix entries would be:
//
//       00
//       00  00
//       00  00  00 --- ---
//      A11 A12 A13  00 ---  A16 A17
//      A21 A22 A23 A24  00  A26 A27
//      --- A32 A33 A34 A35  A36 A37
//      --- --- A43 A44 A45  A46 A47
//      --- --- --- A54 A55  A56 A57
//                       00
//
//      A61 A62 A63 A64 A65  A66 A67
//      A71 A72 A73 A74 A75  A76 A77
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    11 July 2016
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
//    Input, double A[(2*ML+MU+1)*N1+2*N1*N2+N2*N2], the R8BB matrix.
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
        aij = 0.0;

        if ( i < n1 && j < n1 )
        {
          if ( ( j - i ) <= mu + ml && ( i - j ) <= ml )
          {
            ij = ( i - j + ml + mu ) + j * ( 2 * ml + mu + 1 );
            aij = a[ij];
          }
        }
        else if ( i < n1 && n1 <= j )
        {
          ij = ( 2 * ml + mu + 1 ) * n1 + ( j - n1 ) * n1 + i;
          aij = a[ij];
        }
        else if ( n1 <= i )
        {
          ij = ( 2 * ml + mu + 1 ) * n1 + n2 * n1 + j * n2 + ( i - n1 );
          aij = a[ij];
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

double *r8bb_random ( int n1, int n2, int ml, int mu, int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    R8BB_RANDOM randomizes an R8BB matrix.
//
//  Discussion:
//
//    The R8BB storage format is for a border banded matrix.  Such a
//    matrix has the logical form:
//
//      A1 | A2
//      ---+---
//      A3 | A4
//
//    with A1 a (usually large) N1 by N1 banded matrix, while A2, A3 and A4
//    are dense rectangular matrices of orders N1 by N2, N2 by N1, and N2 by N2,
//    respectively.
//
//    A should be defined as a vector.  The user must then store
//    the entries of the four blocks of the matrix into the vector A.
//    Each block is stored by columns.
//
//    A1, the banded portion of the matrix, is stored in
//    the first (2*ML+MU+1)*N1 entries of A, using standard LINPACK
//    general band format.  The reason for the factor of 2 in front of
//    ML is to allocate space that may be required if pivoting occurs.
//
//    The following formulas should be used to determine how to store
//    the entry corresponding to row I and column J in the original matrix:
//
//    Entries of A1:
//
//      1 <= I <= N1, 1 <= J <= N1, (J-I) <= MU and (I-J) <= ML.
//
//      Store the I, J entry into location
//      (I-J+ML+MU+1)+(J-1)*(2*ML+MU+1).
//
//    Entries of A2:
//
//      1 <= I <= N1, N1+1 <= J <= N1+N2.
//
//      Store the I, J entry into location
//      (2*ML+MU+1)*N1+(J-N1-1)*N1+I.
//
//    Entries of A3:
//
//      N1+1 <= I <= N1+N2, 1 <= J <= N1.
//
//      Store the I, J entry into location
//      (2*ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//
//    Entries of A4:
//
//      N1+1 <= I <= N1+N2, N1+1 <= J <= N1+N2
//
//      Store the I, J entry into location
//      (2*ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//      (same formula used for A3).
//
//  Example:
//
//    With N1 = 4, N2 = 1, ML = 1, MU = 2, the matrix entries would be:
//
//       00
//       00  00
//       00  00  00 --- ---
//      A11 A12 A13  00 ---  A16 A17
//      A21 A22 A23 A24  00  A26 A27
//      --- A32 A33 A34 A35  A36 A37
//      --- --- A43 A44 A45  A46 A47
//      --- --- --- A54 A55  A56 A57
//                       00
//
//      A61 A62 A63 A64 A65  A66 A67
//      A71 A72 A73 A74 A75  A76 A77
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
//    Output, double R8BB_RANDOM[(2*ML+MU+1)*N1+2*N1*N2+N2*N2], the matrix.
//
{
  double *a;
  int i;
  int j;
  double r;
  int row;

  a = r8vec_zeros_new ( ( 2 * ml + mu + 1 ) * n1 + 2 * n1 * n2 + n2 * n2 );
//
//  Randomize the banded matrix A1.
//
  for ( j = 1; j <= n1; j++ )
  {
    for ( row = 1; row <= 2 * ml + mu + 1; row++ )
    {
      i = row + j - ml - mu - 1;
      if ( ml < row && 1 <= i && i <= n1 )
      {
        a[row-1+(j-1)*(2*ml+mu+1)] = r8_uniform_01 ( seed );
      }
    }
  }
//
//  Randomize the rectangular strips A2+A3+A4.
//
  for ( i = ( 2 * ml + mu + 1 ) * n1; i < (2*ml+mu+1)*n1+2*n1*n2+n2*n2; i++ )
  {
    a[i] = r8_uniform_01 ( seed );
  }

  return a;
}
//****************************************************************************80

void r8bb_set ( int n1, int n2, int ml, int mu, double a[], int i, int j, 
  double value )

//****************************************************************************80
//
//  Purpose:
//
//    R8BB_SET sets a value of an R8BB matrix.
//
//  Discussion:
//
//    The R8BB storage format is for a border banded matrix.  Such a
//    matrix has the logical form:
//
//      A1 | A2
//      ---+---
//      A3 | A4
//
//    with A1 a (usually large) N1 by N1 banded matrix, while A2, A3 and A4
//    are dense rectangular matrices of orders N1 by N2, N2 by N1, and N2 by N2,
//    respectively.
//
//    A should be defined as a vector.  The user must then store
//    the entries of the four blocks of the matrix into the vector A.
//    Each block is stored by columns.
//
//    A1, the banded portion of the matrix, is stored in
//    the first (2*ML+MU+1)*N1 entries of A, using standard LINPACK
//    general band format.  The reason for the factor of 2 in front of
//    ML is to allocate space that may be required if pivoting occurs.
//
//    The following formulas should be used to determine how to store
//    the entry corresponding to row I and column J in the original matrix:
//
//    Entries of A1:
//
//      1 <= I <= N1, 1 <= J <= N1, (J-I) <= MU and (I-J) <= ML.
//
//      Store the I, J entry into location
//      (I-J+ML+MU+1)+(J-1)*(2*ML+MU+1).
//
//    Entries of A2:
//
//      1 <= I <= N1, N1+1 <= J <= N1+N2.
//
//      Store the I, J entry into location
//      (2*ML+MU+1)*N1+(J-N1-1)*N1+I.
//
//    Entries of A3:
//
//      N1+1 <= I <= N1+N2, 1 <= J <= N1.
//
//      Store the I, J entry into location
//      (2*ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//
//    Entries of A4:
//
//      N1+1 <= I <= N1+N2, N1+1 <= J <= N1+N2
//
//      Store the I, J entry into location
//      (2*ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//      (same formula used for A3).
//
//  Example:
//
//    With N1 = 4, N2 = 1, ML = 1, MU = 2, the matrix entries would be:
//
//       00
//       00  00
//       00  00  00 --- ---
//      A11 A12 A13  00 ---  A16 A17
//      A21 A22 A23 A24  00  A26 A27
//      --- A32 A33 A34 A35  A36 A37
//      --- --- A43 A44 A45  A46 A47
//      --- --- --- A54 A55  A56 A57
//                       00
//
//      A61 A62 A63 A64 A65  A66 A67
//      A71 A72 A73 A74 A75  A76 A77
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
//    Input/output, double A[(2*ML+MU+1)*N1+2*N1*N2+N2*N2], the R8BB matrix.
//
//    Input, int I, J, the row and column of the entry to be incremented.
//    Some combinations of I and J are illegal.
//
//    Input, double VALUE, the value to be assigned to the (I,J)-th entry.
//
{
  int ij;

  if ( i < 0 || n1 + n2 <= i )
  {
    cerr << "\n";
    cerr << "R8BB_SET - Fatal error!\n";
    cerr << "  Illegal input value of row index I = " << i << "\n";
    exit ( 1 );
  }

  if ( j < 0 || n1 + n2 <= j )
  {
    cerr << "\n";
    cerr << "R8BB_SET - Fatal error!\n";
    cerr << "  Illegal input value of column index J = " << j << "\n";
    exit ( 1 );
  }
//
//  The A1 block of the matrix.
//
//  Check for out of band problems.
//
//  Normally, we would check the condition MU < (J-I), but the storage
//  format requires extra entries be set aside in case of pivoting, which
//  means that the condition becomes MU+ML < (J-I).
//
  if ( i < n1 && j < n1 )
  {
    if ( ( mu + ml ) < ( j - i ) || ml < ( i - j ) )
    {
      cout << "\n";
      cout << "R8BB_SET - Warning!\n";
      cout << "  Unable to set entry (" << i << ", " << j << ").\n";
    }
    else
    {
      ij = ( i - j + ml + mu ) + j * ( 2 * ml + mu + 1 );
    }
  }
//
//  The A2 block of the matrix.
//
  else if ( i < n1 && n1 <= j )
  {
    ij = ( 2 * ml + mu + 1 ) * n1 + ( j - n1 ) * n1 + i;
  }
//
//  The A3 and A4 blocks of the matrix.
//
  else if ( n1 <= i )
  {
    ij = ( 2 * ml + mu + 1 ) * n1 + n2 * n1 + j * n2 + ( i - n1 );
  }

  a[ij] = value;

  return;
}
//****************************************************************************80

double *r8bb_sl ( int n1, int n2, int ml, int mu, double a_lu[], int pivot[], 
  double b[] )

//****************************************************************************80
//
//  Discussion:
//
//    R8BB_SL solves an R8BB system factored by SBB_FA.
//
//  Discussion:
//
//    The R8BB storage format is for a border banded matrix.  Such a
//    matrix has the logical form:
//
//      A1 | A2
//      ---+---
//      A3 | A4
//
//    with A1 a (usually large) N1 by N1 banded matrix, while A2, A3 and A4
//    are dense rectangular matrices of orders N1 by N2, N2 by N1, and N2 by N2,
//    respectively.
//
//    A should be defined as a vector.  The user must then store
//    the entries of the four blocks of the matrix into the vector A.
//    Each block is stored by columns.
//
//    A1, the banded portion of the matrix, is stored in
//    the first (2*ML+MU+1)*N1 entries of A, using standard LINPACK
//    general band format.  The reason for the factor of 2 in front of
//    ML is to allocate space that may be required if pivoting occurs.
//
//    The following formulas should be used to determine how to store
//    the entry corresponding to row I and column J in the original matrix:
//
//    Entries of A1:
//
//      1 <= I <= N1, 1 <= J <= N1, (J-I) <= MU and (I-J) <= ML.
//
//      Store the I, J entry into location
//      (I-J+ML+MU+1)+(J-1)*(2*ML+MU+1).
//
//    Entries of A2:
//
//      1 <= I <= N1, N1+1 <= J <= N1+N2.
//
//      Store the I, J entry into location
//      (2*ML+MU+1)*N1+(J-N1-1)*N1+I.
//
//    Entries of A3:
//
//      N1+1 <= I <= N1+N2, 1 <= J <= N1.
//
//      Store the I, J entry into location
//      (2*ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//
//    Entries of A4:
//
//      N1+1 <= I <= N1+N2, N1+1 <= J <= N1+N2
//
//      Store the I, J entry into location
//      (2*ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//      (same formula used for A3).
//
//  Example:
//
//    With N1 = 4, N2 = 1, ML = 1, MU = 2, the matrix entries would be:
//
//       00
//       00  00
//       00  00  00 --- ---
//      A11 A12 A13  00 ---  A16 A17
//      A21 A22 A23 A24  00  A26 A27
//      --- A32 A33 A34 A35  A36 A37
//      --- --- A43 A44 A45  A46 A47
//      --- --- --- A54 A55  A56 A57
//                       00
//
//      A61 A62 A63 A64 A65  A66 A67
//      A71 A72 A73 A74 A75  A76 A77
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    22 November 2003
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
//    Input, double A_LU[(2*ML+MU+1)*N1 + 2*N1*N2 + N2*N2], the LU 
//    factors from R8BB_FA.
//
//    Input, int PIVOT[N1+N2], the pivoting information from R8BB_FA.
//
//    Input, double B[N1+N2], the right hand side.
//
//    Output, double R8BB_SL[N1+N2], the solution.
//
{
  double *b22;
  int i;
  int ij;
  int j;
  int job;
  int nband;
  double *x;
  double *x1;
  double *x2;

  nband = ( 2 * ml + mu + 1 ) * n1;
//
//  Set X1 := inverse(A1) * B1.
//
  if ( 0 < n1 )
  {
    job = 0;
    x1 = r8gb_sl ( n1, ml, mu, a_lu, pivot, b, job );
  }
//
//  Modify the right hand side of the second linear subsystem.
//  Set B22 := B2 - A3*X1.
//
  if ( 0 < n2 )
  {
    b22 = r8vec_zeros_new ( n2 );

    for ( i = 0; i < n2; i++ )
    {
      b22[i] = b[n1+i];
      for ( j = 0; j < n1; j++ )
      {
        ij = nband + n1 * n2 + j * n2 + i;
        b22[i] = b22[i] - a_lu[ij] * x1[j];
      }
    }
  }
//
//  Set X2 := inverse(A4) * B22.
//
  if ( 0 < n2 )
  {
    job = 0;
    x2 = r8ge_sl_new ( n2, a_lu+(nband+2*n1*n2), pivot+n1, b22, job );
    delete [] b22;
  }
//
//  Modify the first subsolution.
//  Set X1 := X1 + A2*X2.
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
//  Set X = [ X1 | X2 ].
//
  x = r8vec_zeros_new ( n1 + n2 );

  if ( 0 < n1 )
  {
    for ( i = 0; i < n1; i++ )
    {
      x[i] = x1[i];
    }
    delete [] x1;
  }

  if ( 0 < n2 )
  {
    for ( i = 0; i < n2; i++ )
    {
      x[n1+i] = x2[i];
    }
    delete [] x2;
  }

  return x;
}
//****************************************************************************80

double *r8bb_to_r8ge ( int n1, int n2, int ml, int mu, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8BB_TO_R8GE copies an R8BB matrix to an R8GE matrix.
//
//  Discussion:
//
//    The R8BB storage format is for a border banded matrix.  Such a
//    matrix has the logical form:
//
//      A1 | A2
//      ---+---
//      A3 | A4
//
//    with A1 a (usually large) N1 by N1 banded matrix, while A2, A3 and A4
//    are dense rectangular matrices of orders N1 by N2, N2 by N1, and N2 by N2,
//    respectively.
//
//    A should be defined as a vector.  The user must then store
//    the entries of the four blocks of the matrix into the vector A.
//    Each block is stored by columns.
//
//    A1, the banded portion of the matrix, is stored in
//    the first (2*ML+MU+1)*N1 entries of A, using standard LINPACK
//    general band format.  The reason for the factor of 2 in front of
//    ML is to allocate space that may be required if pivoting occurs.
//
//    The following formulas should be used to determine how to store
//    the entry corresponding to row I and column J in the original matrix:
//
//    Entries of A1:
//
//      1 <= I <= N1, 1 <= J <= N1, (J-I) <= MU and (I-J) <= ML.
//
//      Store the I, J entry into location
//      (I-J+ML+MU+1)+(J-1)*(2*ML+MU+1).
//
//    Entries of A2:
//
//      1 <= I <= N1, N1+1 <= J <= N1+N2.
//
//      Store the I, J entry into location
//      (2*ML+MU+1)*N1+(J-N1-1)*N1+I.
//
//    Entries of A3:
//
//      N1+1 <= I <= N1+N2, 1 <= J <= N1.
//
//      Store the I, J entry into location
//      (2*ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//
//    Entries of A4:
//
//      N1+1 <= I <= N1+N2, N1+1 <= J <= N1+N2
//
//      Store the I, J entry into location
//      (2*ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//      (same formula used for A3).
//
//  Example:
//
//    With N1 = 4, N2 = 1, ML = 1, MU = 2, the matrix entries would be:
//
//       00
//       00  00
//       00  00  00 --- ---
//      A11 A12 A13  00 ---  A16 A17
//      A21 A22 A23 A24  00  A26 A27
//      --- A32 A33 A34 A35  A36 A37
//      --- --- A43 A44 A45  A46 A47
//      --- --- --- A54 A55  A56 A57
//                       00
//
//      A61 A62 A63 A64 A65  A66 A67
//      A71 A72 A73 A74 A75  A76 A77
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    10 July 2016
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
//    Input, double A[(2*ML+MU+1)*N1+2*N1*N2+N2*N2], the R8BB matrix.
//
//    Output, double R8BB_TO_R8GE[(N1+N2)*(N1+N2)], the R8GE matrix.
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
      if ( mu + ml < ( j - i ) || ml < ( i - j ) )
      {
        b[i-1+(j-1)*(n1+n2)] = 0.0;
      }
      else
      {
        ij = ( i - j + ml + mu + 1 ) + ( j - 1 ) * ( 2 * ml + mu + 1 );
        b[i-1+(j-1)*(n1+n2)]  = a[ij-1];
      }
    }
  }

  for ( i = 1; i <= n1; i++ )
  {
    for ( j = n1 + 1; j <= n1 + n2; j++ )
    {
      ij = ( 2 * ml + mu + 1 ) * n1 + ( j - n1 - 1 ) * n1 + i;
      b[i-1+(j-1)*(n1+n2)]  = a[ij-1];
    }
  }

  for ( i = n1 + 1; i <= n1 + n2; i++ )
  {
    for ( j = 1; j <= n1 + n2; j++ )
    {
      ij = ( 2 * ml + mu + 1 ) * n1 + n2 * n1 + ( j - 1 ) * n2 + ( i - n1 );
      b[i-1+(j-1)*(n1+n2)]  = a[ij-1];
    }
  }

  return b;
}
//****************************************************************************80

double *r8bb_zeros ( int n1, int n2, int ml, int mu )

//****************************************************************************80
//
//  Purpose:
//
//    R8BB_ZEROS zeros an R8BB matrix.
//
//  Discussion:
//
//    The R8BB storage format is for a border banded matrix.  Such a
//    matrix has the logical form:
//
//      A1 | A2
//      ---+---
//      A3 | A4
//
//    with A1 a (usually large) N1 by N1 banded matrix, while A2, A3 and A4
//    are dense rectangular matrices of orders N1 by N2, N2 by N1, and N2 by N2,
//    respectively.
//
//    A should be defined as a vector.  The user must then store
//    the entries of the four blocks of the matrix into the vector A.
//    Each block is stored by columns.
//
//    A1, the banded portion of the matrix, is stored in
//    the first (2*ML+MU+1)*N1 entries of A, using standard LINPACK
//    general band format.  The reason for the factor of 2 in front of
//    ML is to allocate space that may be required if pivoting occurs.
//
//    The following formulas should be used to determine how to store
//    the entry corresponding to row I and column J in the original matrix:
//
//    Entries of A1:
//
//      1 <= I <= N1, 1 <= J <= N1, (J-I) <= MU and (I-J) <= ML.
//
//      Store the I, J entry into location
//      (I-J+ML+MU+1)+(J-1)*(2*ML+MU+1).
//
//    Entries of A2:
//
//      1 <= I <= N1, N1+1 <= J <= N1+N2.
//
//      Store the I, J entry into location
//      (2*ML+MU+1)*N1+(J-N1-1)*N1+I.
//
//    Entries of A3:
//
//      N1+1 <= I <= N1+N2, 1 <= J <= N1.
//
//      Store the I, J entry into location
//      (2*ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//
//    Entries of A4:
//
//      N1+1 <= I <= N1+N2, N1+1 <= J <= N1+N2
//
//      Store the I, J entry into location
//      (2*ML+MU+1)*N1+N1*N2+(J-1)*N2+(I-N1).
//      (same formula used for A3).
//
//  Example:
//
//    With N1 = 4, N2 = 1, ML = 1, MU = 2, the matrix entries would be:
//
//       00
//       00  00
//       00  00  00 --- ---
//      A11 A12 A13  00 ---  A16 A17
//      A21 A22 A23 A24  00  A26 A27
//      --- A32 A33 A34 A35  A36 A37
//      --- --- A43 A44 A45  A46 A47
//      --- --- --- A54 A55  A56 A57
//                       00
//
//      A61 A62 A63 A64 A65  A66 A67
//      A71 A72 A73 A74 A75  A76 A77
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
//    Input, int N1, N2, the order of the banded and dense blocks.
//    N1 and N2 must be nonnegative, and at least one must be positive.
//
//    Input, int ML, MU, the lower and upper bandwidths.
//    ML and MU must be nonnegative and no greater than N1-1.
//
//    Output, double R8BB_ZERO[(2*ML+MU+1)*N1+2*N1*N2+N2*N2], the R8BB matrix.
//
{
  double *a;

  a = r8vec_zeros_new ( ( 2 * ml + mu + 1 ) * n1 + 2 * n1 * n2 + n2 * n2 );

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

  x = r8vec_zeros_new ( n );

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

  x = r8vec_zeros_new ( n );

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
