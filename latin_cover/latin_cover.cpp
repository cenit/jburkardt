# include <cstdlib>
# include <iostream>
# include <iomanip>
# include <cmath>
# include <ctime>
# include <cstring>

using namespace std;

# include "latin_cover.hpp"

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

int i4_modp ( int i, int j )

//****************************************************************************80
//
//  Purpose:
//
//    I4_MODP returns the nonnegative remainder of I4 division.
//
//  Discussion:
//
//    If
//      NREM = I4_MODP ( I, J )
//      NMULT = ( I - NREM ) / J
//    then
//      I = J * NMULT + NREM
//    where NREM is always nonnegative.
//
//    The MOD function computes a result with the same sign as the
//    quantity being divided.  Thus, suppose you had an angle A,
//    and you wanted to ensure that it was between 0 and 360.
//    Then mod(A,360) would do, if A was positive, but if A
//    was negative, your result would be between -360 and 0.
//
//    On the other hand, I4_MODP(A,360) is between 0 and 360, always.
//
//        I         J     MOD  I4_MODP   I4_MODP Factorization
//
//      107        50       7       7    107 =  2 *  50 + 7
//      107       -50       7       7    107 = -2 * -50 + 7
//     -107        50      -7      43   -107 = -3 *  50 + 43
//     -107       -50      -7      43   -107 =  3 * -50 + 43
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    26 May 1999
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int I, the number to be divided.
//
//    Input, int J, the number that divides I.
//
//    Output, int I4_MODP, the nonnegative remainder when I is
//    divided by J.
//
{
  int value;

  if ( j == 0 )
  {
    cerr << "\n";
    cerr << "I4_MODP - Fatal error!\n";
    cerr << "  I4_MODP ( I, J ) called with J = " << j << "\n";
    exit ( 1 );
  }

  value = i % j;

  if ( value < 0 )
  {
    value = value + abs ( j );
  }

  return value;
}
//****************************************************************************80

int i4_uniform ( int a, int b, int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    I4_UNIFORM returns a scaled pseudorandom I4.
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
//    24 May 2012
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
  int i4_huge = 2147483647;
  int k;
  float r;
  int value;

  if ( seed == 0 )
  {
    cerr << "\n";
    cerr << "I4_UNIFORM - Fatal error!\n";
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

int i4_wrap ( int ival, int ilo, int ihi )

//****************************************************************************80
//
//  Purpose:
//
//    I4_WRAP forces an I4 to lie between given limits by wrapping.
//
//  Example:
//
//    ILO = 4, IHI = 8
//
//    I   Value
//
//    -2     8
//    -1     4
//     0     5
//     1     6
//     2     7
//     3     8
//     4     4
//     5     5
//     6     6
//     7     7
//     8     8
//     9     4
//    10     5
//    11     6
//    12     7
//    13     8
//    14     4
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    19 August 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int IVAL, an integer value.
//
//    Input, int ILO, IHI, the desired bounds for the integer value.
//
//    Output, int I4_WRAP, a "wrapped" version of IVAL.
//
{
  int jhi;
  int jlo;
  int value;
  int wide;

  jlo = i4_min ( ilo, ihi );
  jhi = i4_max ( ilo, ihi );

  wide = jhi + 1 - jlo;

  if ( wide == 1 )
  {
    value = jlo;
  }
  else
  {
    value = jlo + i4_modp ( ival - jlo, wide );
  }

  return value;
}
//****************************************************************************80

void i4block_print ( int l, int m, int n, int a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    I4BLOCK_PRINT prints an I4BLOCK.
//
//  Discussion:
//
//    An I4BLOCK is a 3D array of I4 values.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    25 June 2012
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int L, M, N, the dimensions of the block.
//
//    Input, int A[L*M*N], the matrix to be printed.
//
//    Input, string TITLE, a title.
//
{
  int i;
  int j;
  int jhi;
  int jlo;
  int k;

  cout << "\n";
  cout << title << "\n";

  for ( k = 0; k < n; k++ )
  {
    cout << "\n";
    cout << "  K = " << k << "\n";
    for ( jlo = 0; jlo < m; jlo = jlo + 10 )
    {
      jhi = i4_min ( jlo + 10, m );
      cout << "\n";
      cout << "        J:";
      for ( j = jlo; j < jhi; j++ )
      {
        cout << "  " << setw(6) << j;
      }
      cout << "\n";
      cout << "       I:\n";
      for ( i = 0; i < l; i++ )
      {
        cout << "  " << setw(6) << i << ": ";
        for ( j = jlo; j < jhi; j++ )
        {
          cout << "  " << setw(6) << a[i+j*l+k*l*m];
        }
        cout << "\n";
      }
    }
  }
  return;
}
//****************************************************************************80

void i4mat_print ( int m, int n, int a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    I4MAT_PRINT prints an I4MAT.
//
//  Discussion:
//
//    An I4MAT is an MxN array of I4's, stored by (I,J) -> [I+J*M].
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 September 2009
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, the number of rows in A.
//
//    Input, int N, the number of columns in A.
//
//    Input, int A[M*N], the M by N matrix.
//
//    Input, string TITLE, a title.
//
{
  i4mat_print_some ( m, n, a, 1, 1, m, n, title );

  return;
}
//****************************************************************************80

void i4mat_print_some ( int m, int n, int a[], int ilo, int jlo, int ihi,
  int jhi, string title )

//****************************************************************************80
//
//  Purpose:
//
//    I4MAT_PRINT_SOME prints some of an I4MAT.
//
//  Discussion:
//
//    An I4MAT is an MxN array of I4's, stored by (I,J) -> [I+J*M].
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    20 August 2010
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
//    Input, int A[M*N], the matrix.
//
//    Input, int ILO, JLO, IHI, JHI, designate the first row and
//    column, and the last row and column to be printed.
//
//    Input, string TITLE, a title.
//
{
# define INCX 10

  int i;
  int i2hi;
  int i2lo;
  int j;
  int j2hi;
  int j2lo;

  cout << "\n";
  cout << title << "\n";

  if ( m <= 0 || n <= 0 )
  {
    cout << "\n";
    cout << "  (None)\n";
    return;
  }
//
//  Print the columns of the matrix, in strips of INCX.
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
    cout << "  Col:";
    for ( j = j2lo; j <= j2hi; j++ )
    {
      cout << "  " << setw(6) << j - 1;
    }
    cout << "\n";
    cout << "  Row\n";
    cout << "\n";
//
//  Determine the range of the rows in this strip.
//
    i2lo = i4_max ( ilo, 1 );
    i2hi = i4_min ( ihi, m );

    for ( i = i2lo; i <= i2hi; i++ )
    {
//
//  Print out (up to INCX) entries in row I, that lie in the current strip.
//
      cout << setw(5) << i - 1 << ":";
      for ( j = j2lo; j <= j2hi; j++ )
      {
        cout << "  " << setw(6) << a[i-1+(j-1)*m];
      }
      cout << "\n";
    }
  }

  return;
# undef INCX
}
//****************************************************************************80

void i4vec_print ( int n, int a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_PRINT prints an I4VEC.
//
//  Discussion:
//
//    An I4VEC is a vector of I4's.
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
//    Input, int A[N], the vector to be printed.
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
    cout << "  " << setw(8) << i
         << ": " << setw(8) << a[i]  << "\n";
  }
  return;
}
//****************************************************************************80

int *latin_cover ( int n, int p[] )

//****************************************************************************80
//
//  Purpose:
//
//    LATIN_COVER returns a 2D Latin Square Covering.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 August 2012
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of points.
//
//    Input, int P[N], a permutation which describes the
//    first Latin square.
//
//    Output, int LATIN_COVER[N*N], the Latin cover.  A(I,J) = K
//    means that (I,J) is one element of the K-th Latin square.
//
{
  int *a;
  int i;
  int ik;
  int j;
  int k;

  a = new int[n*n];

  perm_check ( n, p );

  for ( i = 0; i < n; i++ )
  {
    for ( k = 0; k < n; k++ )
    {
      ik = i4_wrap ( i + k, 0, n - 1 );
      j = p[ik] - 1;
      a[i+j*n] = k + 1;
    }
  }
  return a;
}
//****************************************************************************80

int *latin_cover_2d ( int n, int p1[], int p2[] )

//****************************************************************************80
//
//  Purpose:
//
//    LATIN_COVER_2D returns a 2D Latin Square Covering.
//
//  Discussion:
//
//    This procedure has a chance of being extended to M dimensions.
//
//    A basic solution is computed, and the user is permitted to permute
//    both the I and J coordinates.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 August 2012
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of points.
//
//    Input, int P1[N], P2[N], permutations to be applied
//    to the spatial dimensions.
//
//    Output, int LATIN_COVER_2D[N*N], the Latin cover.  A(I,J) = K
//    means that (I,J) is one element of the K-th Latin square.
//
{
  int *a;
  int *b;
  int i;
  int i1;
  int j;
  int j1;

  perm_check ( n, p1 );
  perm_check ( n, p2 );

  a = new int[n*n];
  b = new int[n*n];
//
//  Set up the basic solution.
//
  for ( i = 0; i < n; i++ )
  {
    for ( j = 0; j < n; j++ )
    {
      a[i+j*n] = i4_wrap ( i - j + 1, 1, n );
    }
  }
//
//  Apply permutation to dimension I.
//
  for ( i = 0; i < n; i++ )
  {
    i1 = p1[i] - 1;
    for ( j = 0; j < n; j++ )
    {
      b[i1+j*n] = a[i+j*n];
    }
  }
//
//  Apply permutation to dimension J.
//
  for ( j = 0; j < n; j++ )
  {
    j1 = p2[j] - 1;
    for ( i = 0; i < n; i++ )
    {
      a[i+j1*n] = b[i+j*n];
    }
  }

  free ( b );

  return a;
}
//****************************************************************************80

int *latin_cover_3d ( int n, int p1[], int p2[], int p3[] )

//****************************************************************************80
//
//  Purpose:
//
//    LATIN_COVER_3D returns a 3D Latin Square Covering.
//
//  Discussion:
//
//    A basic solution is computed, and the user is permitted to permute
//    I, J and K coordinates.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 June 2012
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of points.
//
//    Input, int P1[N], P2[N], P3[N], permutations to be applied
//    to the spatial dimensions.
//
//    Output, int LATIN_COVER_3D[N*N*N], the Latin cover.  A(I,J,K) = L
//    means that (I,J,K) is one element of the L-th Latin square.
//
{
  int *a;
  int *b;
  int i;
  int i1;
  int ik;
  int j;
  int j1;
  int jk;
  int k;
  int k1;

  perm_check ( n, p1 );
  perm_check ( n, p2 );
  perm_check ( n, p3 );

  a = new int[n*n*n];
  b = new int[n*n*n];
//
//  Set up the basic solution.
//
  for ( i = 0; i < n; i++ )
  {
    for ( j = 0; j < n; j++ )
    {
      for ( k = 0; k < n; k++ )
      {
        ik = i4_wrap ( i + 1 - k, 1, n );
        jk = i4_wrap ( j + 1 - k, 1, n );
        b[i+j*n+k*n*n] = ik + ( jk - 1 ) * n;
      }
    }
  }
//
//  Apply permutation to dimension I.
//
  for ( i = 0; i < n; i++ )
  {
    i1 = p1[i] - 1;
    for ( j = 0; j < n; j++ )
    {
      for ( k = 0; k < n; k++ )
      {
        a[i1+j*n+k*n*n] = b[i+j*n+k*n*n];
      }
    }
  }
//
//  Apply permutation to dimension J.
//
  for ( i = 0; i < n; i++ )
  {
    for ( j = 0; j < n; j++ )
    {
      j1 = p2[j] - 1;
      for ( k = 0; k < n; k++ )
      {
        b[i+j1*n+k*n*n] = a[i+j*n+k*n*n];
      }
    }
  }
//
//  Apply permutation to dimension K.
//
  for ( i = 0; i < n; i++ )
  {
    for ( j = 0; j < n; j++ )
    {
      for ( k = 0; k < n; k++ )
      {
        k1 = p3[k] - 1;
        a[i+j*n+k1*n*n] = b[i+j*n+k*n*n];
      }
    }
  }

  delete [] b;

  return a;
}
//****************************************************************************80

void perm_check ( int n, int p[] )

//****************************************************************************80
//
//  Purpose:
//
//    PERM_CHECK checks that a vector represents a permutation.
//
//  Discussion:
//
//    The routine verifies that each of the integers from 1
//    to N occurs among the N entries of the permutation.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    06 May 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of entries.
//
//    Input, int P[N], the permutation, in standard index form.
//
{
  bool error;
  int ifind;
  int iseek;

  for ( iseek = 1; iseek <= n; iseek++ )
  {
    error = true;

    for ( ifind = 1; ifind <= n; ifind++ )
    {
      if ( p[ifind-1] == iseek )
      {
        error = false;
        break;
      }
    }

    if ( error )
    {
      cerr << "\n";
      cerr << "PERM_CHECK - Fatal error!\n";
      cerr << "  The input permutation is not legal.\n";
      exit ( 1 );
    }
  }

  return;
}
//****************************************************************************80

void perm_print ( int n, int p[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    PERM_PRINT prints a permutation.
//
//  Discussion:
//
//    The permutation is assumed to be zero-based.
//
//  Example:
//
//    Input:
//
//      P = 6 1 2 0 4 2 5
//
//    Printed output:
//
//      "This is the permutation:"
//
//      0 1 2 3 4 5 6
//      6 1 2 0 4 2 5
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    14 May 2011
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of objects permuted.
//
//    Input, int P[N], the permutation, in standard index form.
//
//    Input, string TITLE, a title.
//    If no title is supplied, then only the permutation is printed.
//
{
  int i;
  int ihi;
  int ilo;
  int inc = 20;

  if ( s_len_trim ( title ) != 0 )
  {
    cout << "\n";
    cout << title << "\n";

    for ( ilo = 0; ilo < n; ilo = ilo + inc )
    {
      ihi = ilo + inc;
      if ( n < ihi ) 
      {
        ihi = n;
      }
      cout << "\n";
      cout << "  ";
      for ( i = ilo; i < ihi; i++ )
      {
        cout << setw(4) << i;
      }
      cout << "\n";
      cout << "  ";
      for ( i = ilo; i < ihi; i++ )
      {
        cout << setw(4) << p[i];
      }
      cout << "\n";
    }
  }
  else
  {
    for ( ilo = 0; ilo < n; ilo = ilo + inc )
    {
      ihi = ilo + inc;
      if ( n < ihi ) 
      {
        ihi = n;
      }
      cout << "  ";
      for ( i = ilo; i < ihi; i++ )
      {
        cout << setw(4) << p[i];
      }
      cout << "\n";
    }
  }

  return;
}
//****************************************************************************80

int *perm_uniform_new ( int n, int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    PERM_UNIFORM_NEW selects a random permutation of N objects.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 August 2012
//
//  Author:
//
//    Original FORTRAN77 version by Albert Nijenhuis, Herbert Wilf.
//    C++ version by John Burkardt.
//
//  Reference:
//
//    Albert Nijenhuis, Herbert Wilf,
//    Combinatorial Algorithms for Computers and Calculators,
//    Second Edition,
//    Academic Press, 1978,
//    ISBN: 0-12-519260-6,
//    LC: QA164.N54.
//
//  Parameters:
//
//    Input, int N, the number of objects to be permuted.
//
//    Input/output, int &SEED, a seed for the random number generator.
//
//    Output, int PERM_UNIFORM_NEW[N], a permutation of (1, 2, ..., N).
//
{
  int i;
  int j;
  int k;
  int *p;

  p = new int[n];

  for ( i = 0; i < n; i++ )
  {
    p[i] = i + 1;
  }

  for ( i = 0; i < n; i++ )
  {
    j = i4_uniform ( i, n - 1, seed );
    k = p[i];
    p[i] = p[j];
    p[j] = k;
  }
 
  return p;
}
//****************************************************************************80

int s_len_trim ( string s )

//****************************************************************************80
//
//  Purpose:
//
//    S_LEN_TRIM returns the length of a string to the last nonblank.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    05 July 2009
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, string S, a string.
//
//    Output, int S_LEN_TRIM, the length of the string to the last nonblank.
//    If S_LEN_TRIM is 0, then the string is entirely blank.
//
{
  int n;

  n = s.length ( );

  while ( 0 < n )
  {
    if ( s[n-1] != ' ' )
    {
      return n;
    }
    n = n - 1;
  }

  return n;
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
