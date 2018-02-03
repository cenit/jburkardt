# include <cmath>
# include <cstdlib>
# include <ctime>
# include <iomanip>
# include <iostream>

using namespace std;

# include "ubvec.hpp"

//****************************************************************************80

int i4_choose ( int n, int k )

//****************************************************************************80
//
//  Purpose:
//
//    I4_CHOOSE computes the binomial coefficient C(N,K).
//
//  Discussion:
//
//    The value is calculated in such a way as to avoid overflow and
//    roundoff.  The calculation is done in integer arithmetic.
//
//    The formula used is:
//
//      C(N,K) = N! / ( K! * (N-K)! )
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    06 January 2013
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    ML Wolfson, HV Wright,
//    Algorithm 160:
//    Combinatorial of M Things Taken N at a Time,
//    Communications of the ACM,
//    Volume 6, Number 4, April 1963, page 161.
//
//  Parameters:
//
//    Input, int N, K, the values of N and K.
//
//    Output, int I4_CHOOSE, the number of combinations of N
//    things taken K at a time.
//
{
  int i;
  int mn;
  int mx;
  int value;

  mn = k;
  mx = n - k;
  if ( mx < mn )
  {
    mn = n - k;
    mx = k;
  }

  if ( mn < 0 )
  {
    value = 0;
  }
  else if ( mn == 0 )
  {
    value = 1;
  }
  else
  {
    value = mx + 1;

    for ( i = 2; i <= mn; i++ )
    {
      value = ( value * ( mx + i ) ) / i;
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

int i4vec_sum ( int n, int a[] )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_SUM sums the entries of an I4VEC.
//
//  Discussion:
//
//    An I4VEC is a vector of I4's.
//
//  Example:
//
//    Input:
//
//      A = ( 1, 2, 3, 4 )
//
//    Output:
//
//      I4VEC_SUM = 10
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
//    Input, int N, the number of entries in the vector.
//
//    Input, int A[N], the vector to be summed.
//
//    Output, int I4VEC_SUM, the sum of the entries of A.
//
{
  int i;
  int sum;

  sum = 0;
  for ( i = 0; i < n; i++ )
  {
    sum = sum + a[i];
  }

  return sum;
}
//****************************************************************************80

void i4vec_transpose_print ( int n, int a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_TRANSPOSE_PRINT prints an I4VEC "transposed".
//
//  Discussion:
//
//    An I4VEC is a vector of I4's.
//
//  Example:
//
//    A = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 }
//    TITLE = "My vector:  "
//
//    My vector:      1    2    3    4    5
//                    6    7    8    9   10
//                   11
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 July 2004
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
  int ihi;
  int ilo;
  int title_len;

  title_len = title.length ( );

  if ( 0 < title_len )
  {
    cout << "\n";
    cout << title << "\n";
  }

  if ( 0 < n )
  {
    for ( ilo = 1; ilo <= n; ilo = ilo + 5 )
    {
      ihi = ilo + 5 - 1;
      if ( n < ihi )
      {
        ihi = n;
      }
      for ( i = ilo; i <= ihi; i++ )
      {
        cout << setw(12) << a[i-1];
      }
      cout << "\n";
    }
  }
  else
  {
    cout << "  (empty vector)\n";
  }

  return;
}
//****************************************************************************80

int *ksubset_colex_unrank ( int rank, int k, int n )

//****************************************************************************80
// 
//  Purpose:
//
//    KSUBSET_COLEX_UNRANK computes the K subset of given colex rank.
// 
//  Licensing:
// 
//    This code is distributed under the GNU LGPL license.
// 
//  Modified:
// 
//    25 July 2011
// 
//  Author:
// 
//    John Burkardt
// 
//  Reference:
// 
//    Donald Kreher, Douglas Simpson,
//    Combinatorial Algorithms,
//    CRC Press, 1998,
//    ISBN: 0-8493-3988-X,
//    LC: QA164.K73.
// 
//  Parameters:
// 
//    Input, int RANK, the rank of the K subset.
// 
//    Input, int K, the number of elements each K subset must
//    have.  0 <= K <= N.
// 
//    Input, int N, the number of elements in the master set.
//    N must be positive.
// 
//    Output, int KSUBSET_COLEX_UNRANK[K], describes the K subset of the given
//    rank.  T(I) is the I-th element.  The elements must be listed in
//    DESCENDING order.
// 
{
  int i;
  int nksub;
  int rank_copy;
  int *t;
  int x;
// 
//  Check.
// 
  if ( n < 1 )
  {
    cerr << "\n";
    cerr << "KSUBSET_COLEX_UNRANK - Fatal error!\n";
    cerr << "  Input N is illegal.\n";
    exit ( 1 );
  }

  if ( k == 0 )
  {
    t = new int[k];
    return t;
  }

  if ( k < 0 || n < k )
  {
    cerr << "\n";
    cerr << "KSUBSET_COLEX_UNRANK - Fatal error!\n";
    cerr << "  Input K is illegal.\n";
    exit ( 1 );
  }

  nksub = ksubset_enum ( k, n );

  if ( rank < 0 || nksub < rank )
  {
    cerr << "\n";
    cerr << "KSUBSET_COLEX_UNRANK - Fatal error!\n";
    cerr << "  The input rank is illegal.\n";
    exit ( 1 );
  }
// 
  rank_copy = rank;

  x = n;

  t = new int[k];

  for ( i = 1; i <= k; i++ )
  {
    while ( rank_copy < i4_choose ( x, k + 1 - i ) )
    {
      x = x - 1;
    }

    t[i-1] = x + 1;
    rank_copy = rank_copy - i4_choose ( x, k + 1 - i );
  }

  return t;
}
//****************************************************************************80

int ksubset_enum ( int k, int n )

//****************************************************************************80
// 
//  Purpose:
//
//    KSUBSET_ENUM enumerates the K element subsets of an N set.
// 
//  Licensing:
// 
//    This code is distributed under the GNU LGPL license.
// 
//  Modified:
// 
//    24 July 2011
// 
//  Author:
// 
//    John Burkardt
// 
//  Parameters:
// 
//    Input, int K, the number of elements each K subset must
//    have. 0 <= K <= N.
// 
//    Input, int N, the number of elements in the master set.
//    0 <= N.
// 
//    Output, int KSUBSET_ENUM, the number of distinct elements.
// 
{
  int value;

  value = i4_choose ( n, k );

  return value;
}
//****************************************************************************80

int morse_thue ( int i )

//****************************************************************************80
//
//  Purpose:
//
//    MORSE_THUE generates a Morse_Thue number.
//
//  Discussion:
//
//    The Morse_Thue sequence can be defined in a number of ways.
//
//    A) Start with the string containing the single letter '0'; then
//       repeatedly apply the replacement rules '0' -> '01' and
//       '1' -> '10' to the letters of the string.  The Morse_Thue sequence
//       is the resulting letter sequence.
//
//    B) Starting with the string containing the single letter '0',
//       repeatedly append the binary complement of the string to itself.
//       Thus, '0' becomes '0' + '1' or '01', then '01' becomes
//       '01' + '10', which becomes '0110' + '1001', and so on.
//
//    C) Starting with I = 0, the I-th Morse-Thue number is determined
//       by taking the binary representation of I, adding the digits,
//       and computing the remainder modulo 2.
//
//  Example:
//
//     I  binary   S
//    --  ------  --
//     0       0   0
//     1       1   1
//     2      10   1
//     3      11   0
//     4     100   1
//     5     101   0
//     6     110   0
//     7     111   1
//     8    1000   1
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int I, the index of the Morse-Thue number.
//
//    Output, int MORSE_THUE, the Morse-Thue number of index I.
//
{
  int nbits = 32;
  int s;
  int *ubvec;
  int ui;
  int value;
//
//  Expand I into binary form.
//
  ui = i;

  ubvec = ui4_to_ubvec ( ui, nbits );
//
//  Sum the 1's in the binary representation.
//
  s = 0;
  for ( i = 0; i < nbits; i++ )
  {
    s = s + ubvec[i];
  }
//
//  Take the value modulo 2.
//
  s = s % 2;

  value = ( int ) s;

  delete [] ubvec;

  return value;
}
//****************************************************************************80

int nim_sum ( int ui, int uj )

//****************************************************************************80
//
//  Purpose:
//
//    NIM_SUM computes the Nim sum of two integers.
//
//  Discussion:
//
//    If K is the Nim sum of I and J, then each bit of K is the exclusive
//    OR of the corresponding bits of I and J.
//
//  Example:
//
//     I     J     K       I_2        J_2         K_2
//   ----  ----  ----  ----------  ----------  ----------
//      0     0     0           0           0           0
//      1     0     1           1           0           1
//      1     1     0           1           1           0
//      2     7     5          10         111         101
//     11    28    23        1011       11100       10111
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int UI, UJ, the integers to be Nim-summed.
//
//    Output, int NIM_SUM, the Nim sum of I and J.
//
{
  int nbits = 32;
  int *ubvec1;
  int *ubvec2;
  int *ubvec3;
  int value;

  ubvec1 = ui4_to_ubvec ( ui, nbits );

  ubvec2 = ui4_to_ubvec ( uj, nbits );

  ubvec3 = ubvec_xor ( nbits, ubvec1, ubvec2 );

  value = ubvec_to_ui4 ( nbits, ubvec3 );

  delete [] ubvec1;
  delete [] ubvec2;
  delete [] ubvec3;

  return value;
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
//****************************************************************************80

int *ubvec_add ( int n, int ubvec1[], int ubvec2[] )

//****************************************************************************80
//
//  Purpose:
//
//    UBVEC_ADD adds two unsigned binary vectors.
//
//  Discussion:
//
//    A UBVEC is a vector of binary digits representing an unsigned integer.  
//
//    UBVEC[N-1] contains the units digit, UBVEC[N-2]
//    the coefficient of 2, UBVEC[N-3] the coefficient of 4 and so on,
//    so that printing the digits in order gives the binary form of the number.
//
//  Example:
//
//    N = 4
//
//     UBVEC1       +  UBVEC2       =  UBVEC3
//
//    ( 0 0 0 1 )   + ( 0 0 1 1 )   = ( 0 1 0 0 )
//
//      1           +   3           =   4
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    21 March 2009
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the length of the vectors.
//
//    Input, int UBVEC1[N], UBVEC2[N], the vectors to be added.
//
//    Output, int UBVEC_ADD[N], the sum of the two input vectors.
//
{
  int i;
  int *ubvec3;

  ubvec3 = new int[n];

  for ( i = 0; i < n; i++ )
  {
    ubvec3[i] = ubvec1[i] + ubvec2[i];
  }

  for ( i = n - 1; 0 <= i; i-- )
  {
    while ( 2 <= ubvec3[i] )
    {
      ubvec3[i] = ubvec3[i] - 2;
      if ( 0 < i )
      {
        ubvec3[i-1] = ubvec3[i-1] + 1;
      }
      else
      {
        cerr << "\n";
        cerr << "UBVEC_ADD - Fatal error!\n";
        cerr << "  Addition overflow.\n";
        exit ( 1 );
      }
    }
  }

  return ubvec3;
}
//****************************************************************************80

int *ubvec_and ( int n, int ubvec1[], int ubvec2[] )

//****************************************************************************80
//
//  Purpose:
//
//    UBVEC_AND computes the AND of two unsigned binary vectors.
//
//  Discussion:
//
//    A UBVEC is a vector of N binary digits.
//
//    A UBVEC can be interpreted as a binary representation of an
//    unsigned integer, with the first entry being the coefficient of
//    2^(N-1) and the last entry the coefficient of 1.
//
//    UBVEC   #
//    -----  --
//    00000   0
//    00001   1
//    00010   2
//    10000  16
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 December 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the length of the vectors.
//
//    Input, int UBVEC1[N], UBVEC2[N], the vectors.
//
//    Input, int UBVEC_AND[N], the AND of the two vectors.
//
{
  int i;
  int *ubvec3;

  ubvec3 = new int[n];

  for ( i = 0; i < n; i++ )
  {
    ubvec3[i] = i4_min ( ubvec1[i], ubvec2[i] );
  }

  return ubvec3;
}
//****************************************************************************80

bool ubvec_check ( int n, int ubvec[] )

//****************************************************************************80
//
//  Purpose:
//
//    UBVEC_CHECK checks an unsigned binary vector.
//
//  Discussion:
//
//    The only check made is that the entries are all 0 or 1.
//
//    A UBVEC is a vector of N binary digits.
//
//    A UBVEC can be interpreted as a binary representation of an
//    unsigned integer, with the first entry being the coefficient of
//    2^(N-1) and the last entry the coefficient of 1.
//
//    UBVEC   #
//    -----  --
//    00000   0
//    00001   1
//    00010   2
//    10000  16
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 December 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the length of the vectors.
//
//    Input, int UBVEC[N], the vector to be checked.
//
//    Output, bool UBVEC_CHECK.
//    TRUE, the data is legal.
//    FALSE, the data is illegal.
//
{
  bool check;
  int i;

  check = true;

  for ( i = 0; i < n; i++ )
  {
    if ( ubvec[i] < 0 || 1 < ubvec[i] )
    {
      check = false;
      break;
    }
  }

  return check;
}
//****************************************************************************80

int *ubvec_complement1 ( int n, int ubvec1[] )

//****************************************************************************80
//
//  Purpose:
//
//    UBVEC_COMPLEMENT1 computes the one's complement of an unsigned binary vector.
//
//  Discussion:
//
//    A UBVEC is a vector of N binary digits.
//
//    A UBVEC can be interpreted as a binary representation of an
//    unsigned integer, with the first entry being the coefficient of
//    2^(N-1) and the last entry the coefficient of 1.
//
//    UBVEC   #
//    -----  --
//    00000   0
//    00001   1
//    00010   2
//    10000  16
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 December 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the length of the vectors.
//
//    Input, int UBVEC1[N], the vector to be complemented.
//
//    Output, int UBVEC_COMPLEMENT1[N], the complemented vector.
//
{
  int i;
  int *ubvec2;

  ubvec2 = new int[n];

  for ( i = 0; i < n; i++ )
  {
    ubvec2[i] = 1 - ubvec1[i];
  }

  return ubvec2;
}
//****************************************************************************80

int ubvec_enum ( int n )

//****************************************************************************80
//
//  Purpose:
//
//    UBVEC_ENUM enumerates the unsigned binary vectors of length N.
//
//  Discussion:
//
//    A UBVEC is a vector of N binary digits.
//
//    A UBVEC can be interpreted as a binary representation of an
//    unsigned integer, with the first entry being the coefficient of
//    2^(N-1) and the last entry the coefficient of 1.
//
//    UBVEC   #
//    -----  --
//    00000   0
//    00001   1
//    00010   2
//    10000  16
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 December 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the length of the vectors.
//
//    Output, int UBVEC_ENUM, the number of binary vectors.
//
{
  int value;

  value = i4_power ( 2, n );

  return value;
}
//****************************************************************************80

void ubvec_next ( int n, int ubvec[] )

//****************************************************************************80
//
//  Purpose:
//
//    UBVEC_NEXT generates the next UBVEC.
//
//  Discussion:
//
//    The vectors are produced in the order:
//
//    (0,0,...,0),
//    (0,0,...,1),
//    ...
//    (1,1,...,1)
//
//    and the "next" vector after (1,1,...,1) is (0,0,...,0).  That is,
//    we allow wrap around.
//
//    A UBVEC is a vector of N binary digits.
//
//    A UBVEC can be interpreted as a binary representation of an
//    unsigned integer, with the first entry being the coefficient of
//    2^(N-1) and the last entry the coefficient of 1.
//
//    UBVEC   #
//    -----  --
//    00000   0
//    00001   1
//    00010   2
//    10000  16
//
//  Example:
//
//    N = 3
//
//    Input      Output
//    -----      ------
//    0 0 0  =>  0 0 1
//    0 0 1  =>  0 1 0
//    0 1 0  =>  0 1 1
//    0 1 1  =>  1 0 0
//    1 0 0  =>  1 0 1
//    1 0 1  =>  1 1 0
//    1 1 0  =>  1 1 1
//    1 1 1  =>  0 0 0
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 December 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the dimension of the vectors.
//
//    Input/output, int UBVEC[N], on output, the successor 
//    to the input vector.
//
{
  int i;

  for ( i = n - 1; 0 <= i; i-- )
  {
    if ( ubvec[i] == 0 )
    {
      ubvec[i] = 1;
      return;
    }
    ubvec[i] = 0;
  }

  return;
}
//****************************************************************************80

void ubvec_next_gray ( int n, int t[] )

//****************************************************************************80
//
//  Purpose:
//
//    UBVEC_NEXT_GRAY computes the next UBVEC in the Gray code.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 December 201
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Donald Kreher, Douglas Simpson,
//    Combinatorial Algorithms,
//    CRC Press, 1998,
//    ISBN: 0-8493-3988-X,
//    LC: QA164.K73.
//
//  Parameters:
//
//    Input, int N, the number of digits in each element.
//    N must be positive.
//
//    Input/output, int T[N].
//    On input, T contains an element of the Gray code, that is,
//    each entry T(I) is either 0 or 1.
//    On output, T contains the successor to the input value; this
//    is an element of the Gray code, which differs from the input
//    value in a single position.
//
{
  int i;
  int weight;

  weight = i4vec_sum ( n, t );

  if ( ( weight % 2 ) == 0 )
  {
    if ( t[n-1] == 0 )
    {
      t[n-1] = 1;
    }
    else
    {
      t[n-1] = 0;
    }
    return;
  }
  else
  {
    for ( i = n - 1; 1 <= i; i-- )
    {
      if ( t[i] == 1 )
      {
        if ( t[i-1] == 0 )
        {
          t[i-1] = 1;
        }
        else
        {
          t[i-1] = 0;
        }
        return;
      }
    }
//
//  The final element was input.
//  Return the first element.
//
    for ( i = 0; i < n; i++ )
    {
      t[i] = 0;
    }
  }
  return;
}
//****************************************************************************80

void ubvec_next_grlex ( int n, int ubvec[] )

//****************************************************************************80
//
//  Purpose:
//
//    UBVEC_NEXT_GRLEX generates the next UBVEC in GRLEX order.
//
//  Discussion:
//
//    N = 3
//
//    Input      Output
//    -----      ------
//    0 0 0  =>  0 0 1
//    0 0 1  =>  0 1 0
//    0 1 0  =>  1 0 0
//    1 0 0  =>  0 1 1
//    0 1 1  =>  1 0 1
//    1 0 1  =>  1 1 0
//    1 1 0  =>  1 1 1
//    1 1 1  =>  0 0 0
//
//    A UBVEC is a vector of N binary digits.
//
//    A UBVEC can be interpreted as a binary representation of an
//    unsigned integer, with the first entry being the coefficient of
//    2^(N-1) and the last entry the coefficient of 1.
//
//    UBVEC   #
//    -----  --
//    00000   0
//    00001   1
//    00010   2
//    10000  16
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 December 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the dimension.
//
//    Input/output, int UBVEC[N], the binary vector whose 
//    successor is desired, and on output, the successor.
//
{
  int i;
  int o;
  int s;
  int z;
//
//  Initialize locations of 0 and 1.
//
  if ( ubvec[0] == 0 )
  {
    z = 0;
    o = -1;
  }
  else
  {
    z = -1;
    o = 0;
  }
//
//  Moving from right to left, search for a "1", preceded by a "0".
//
  for ( i = n - 1; 1 <= i; i-- )
  {
    if ( ubvec[i] == 1 )
    {
      o = i;
      if ( ubvec[i-1] == 0 )
      {
        z = i - 1;
        break;
      }
    }
  }
//
//  UBVEC = 0
//
  if ( o == -1 )
  {
    ubvec[n-1] = 1;
  }
//
//  01 never occurs.  So for sure, B(1) = 1.
//
  else if ( z == -1 )
  {
    s = i4vec_sum ( n, ubvec );
    if ( s == n )
    {
      for ( i = 0; i < n; i++ )
      {
        ubvec[i] = 0;
      }
    }
    else
    {
      for ( i = 0; i < n - s - 1; i++ )
      {
        ubvec[i] = 0;
      }
      for ( i = n - s - 1; i < n; i++ )
      {
        ubvec[i] = 1;
      }
    }
  }
//
//  Found the rightmost "01" string.
//  Replace it by "10".
//  Shift following 1's to the right.
//
  else
  {
    ubvec[z] = 1;
    ubvec[o] = 0;
    s = 0;
    for ( i = o + 1; i < n; i++ )
    {
      s = s + ubvec[i];
    }
    for ( i = o + 1; i < n - s; i++ )
    {
      ubvec[i] = 0;
    }
    for ( i = n - s; i < n; i++ )
    {
      ubvec[i] = 1;
    }
  }

  return;
}
//****************************************************************************80

int *ubvec_or ( int n, int ubvec1[], int ubvec2[] )

//****************************************************************************80
//
//  Purpose:
//
//    UBVEC_OR computes the OR of two unsigned binary vectors.
//
//  Discussion:
//
//    A UBVEC is a vector of N binary digits.
//
//    A UBVEC can be interpreted as a binary representation of an
//    unsigned integer, with the first entry being the coefficient of
//    2^(N-1) and the last entry the coefficient of 1.
//
//    UBVEC   #
//    -----  --
//    00000   0
//    00001   1
//    00010   2
//    10000  16
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 December 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the length of the vectors.
//
//    Input, int UBVEC1[N], UBVEC2[N], the vectors.
//
//    Input, int UBVEC_OR[N], the OR of the two vectors.
//
{
  int i;
  int *ubvec3;

  ubvec3 = new int[n];

  for ( i = 0; i < n; i++ )
  {
    ubvec3[i] = i4_max ( ubvec1[i], ubvec2[i] );
  }

  return ubvec3;
}
//****************************************************************************80

void ubvec_print ( int n, int ubvec[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    UBVEC_PRINT prints a UBVEC, with an optional title.
//
//  Discussion:
//
//    A UBVEC is a vector of binary digits representing an unsigned integer.  
//
//    UBVEC[N-1] contains the units digit, UBVEC[N-2]
//    the coefficient of 2, UBVEC[N-3] the coefficient of 4 and so on,
//    so that printing the digits in order gives the binary form of the number.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    21 March 2009
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of components of the vector.
//
//    Input, int UBVEC[N], the vector to be printed.
//
//    Input, string TITLE, a title.
//
{
  int i;
  int ihi;
  int ilo;

  if ( 0 < title.length ( ) )
  {
    cout << "\n";
    cout << title << "\n";
  }

  for ( ilo = 0; ilo < n; ilo = ilo + 70 )
  {
    ihi = i4_min ( ilo + 70 - 1, n - 1 );
    cout << "  ";

    for ( i = ilo; i <= ihi; i++ )
    {
      cout << ubvec[i];
    }
    cout << "\n";
  }

  return;
}
//****************************************************************************80

int *ubvec_random ( int n, int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    UBVEC_RANDOM returns a pseudorandom UBVEC.
//
//  Discussion:
//
//    A UBVEC is a vector of N binary digits.
//
//    A UBVEC can be interpreted as a binary representation of an
//    unsigned integer, with the first entry being the coefficient of
//    2^(N-1) and the last entry the coefficient of 1.
//
//    UBVEC   #
//    -----  --
//    00000   0
//    00001   1
//    00010   2
//    10000  16
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    01 December 2015
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
//    Input, int N, the order of the vector.
//
//    Input/output, int &SEED, the "seed" value, which should
//    NOT be 0.  On output, SEED has been updated.
//
//    Output, int UBVEC_RANDOM[N], a pseudorandom binary vector.
//
{
  const int i4_huge = 2147483647;
  const int i4_huge_half = 1073741823;
  int i;
  int k;
  int *ubvec;

  if ( seed == 0 )
  {
    cerr << "\n";
    cerr << "UBVEC_RANDOM - Fatal error!\n";
    cerr << "  Input value of SEED = 0.\n";
    exit ( 1 );
  }

  ubvec = new int[n];

  for ( i = 0; i < n; i++ )
  {

    k = seed / 127773;

    seed = 16807 * ( seed - k * 127773 ) - k * 2836;

    if ( seed < 0 )
    {
      seed = seed + i4_huge;
    }

    if ( i4_huge_half < seed )
    {
      ubvec[i] = 0;
    }
    else
    {
      ubvec[i] = 1;
    }
  }

  return ubvec;
}
//****************************************************************************80

int ubvec_rank_gray ( int n, int ubvec[] )

//****************************************************************************80
//
//  Purpose:
//
//    UBVEC_RANK_GRAY ranks a UBVEC according to the Gray ordering.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 December 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of components of the vector.
//
//    Input, int UBVEC[N], the vector to be printed.
//
//    Output, int UBVEC_RANK, the rank of the UBVEC.
//
{
  int rank;
  int ui4;

  ui4 = ubvec_to_ui4 ( n, ubvec );
  rank = ui4_rank_gray ( ui4 );

  return rank;
}
//****************************************************************************80

int *ubvec_reverse ( int n, int ubvec1[] )

//****************************************************************************80
//
//  Purpose:
//
//    UBVEC_REVERSE reverses a UBVEC.
//
//  Discussion:
//
//    A UBVEC is a vector of N binary digits.
//
//    A UBVEC can be interpreted as a binary representation of an
//    unsigned integer, with the first entry being the coefficient of
//    2^(N-1) and the last entry the coefficient of 1.
//
//    UBVEC   #
//    -----  --
//    00000   0
//    00001   1
//    00010   2
//    10000  16
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    19 September 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the length of the vectors.
//
//    Input, int UBVEC1[N], the vector to be reversed.
//
//    Output, int UBVEC_REVERSE[N], the reversed vector.
//
{
  int i;
  int *ubvec2;

  ubvec2 = new int[n];

  for ( i = 0; i < n; i++ )
  {
    ubvec2[i] = ubvec1[n-1-i];
  }

  return ubvec2;
}
//****************************************************************************80

int ubvec_to_ui4 ( int n, int ubvec[] )

//****************************************************************************80
//
//  Purpose:
//
//    UBVEC_TO_UI4 makes an unsigned integer from an unsigned binary vector.
//
//  Discussion:
//
//    A UBVEC is a vector of binary digits representing an unsigned integer.  
//
//    UBVEC[N-1] contains the units digit, UBVEC[N-2]
//    the coefficient of 2, UBVEC[N-3] the coefficient of 4 and so on,
//    so that printing the digits in order gives the binary form of the number.
//
//  Example:
//
//    N = 4
//
//         BVEC   binary  I
//    ----------  -----  --
//    1  2  3  4
//    ----------
//    0  0  0  1       1  1
//    0  0  1  0      10  2
//    0  0  1  1      11  3
//    0  1  0  0     100  4
//    1  0  0  1    1001  9
//    1  1  1  1    1111 15
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    21 March 2009
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the dimension of the vector.
//
//    Input, int UBVEC[N], the binary representation.
//
//    Input, int UBVEC_TO_UI4, the integer value.
//
{
  int i;
  int ui4;

  ui4 = 0;
  for ( i = 0; i < n; i++ )
  {
    ui4 = 2 * ui4 + ubvec[i];
  }

  return ui4;
}
//****************************************************************************80

int *ubvec_unrank_gray ( int rank, int n )

//****************************************************************************80
//
//  Purpose:
//
//    UBVEC_UNRANK_GRAY unranks a UBVEC.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 December 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int RANK, the rank of the UBVEC.
//    0 <= RANK < 2^N.
//
//    Input, int N, the size of the UBVEC.
//
//    Output, int UBVEC_UNRANK_GRAY[N], the UBVEC of given rank.
//
{
  int *ubvec;
  int ui4;

  ui4 = ui4_unrank_gray ( rank );
  ubvec = ui4_to_ubvec ( ui4, n );

  return ubvec;
}
//****************************************************************************80

int *ubvec_unrank_grlex ( int rank, int n )

//****************************************************************************80
//
//  Purpose:
//
//    UBVEC_UNRANK_GRLEX unranks a UBVEC using the GRLEX ordering.
//
//  Discussion:
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 December 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int RANK, the rank.
//    0 <= RANK < 2^N.
//
//    Input, int N, the size of the UBVEC.
//
//    Output, int UBVEC_UNRANK_GRLEX[N], the UBVEC of the given rank.
//
{
  int i;
  int k;
  int mk;
  int mk_old;
  int mk_plus;
  int rank_k;
  int *t;
  int *ubvec;

  ubvec = new int[n];

  mk = 0;

  for ( k = 0; k <= n; k++ )
  {
    mk_old = mk;
    mk_plus = i4_choose ( n, k );
    mk = mk_old + mk_plus;

    if ( rank < mk )
    {
      rank_k = rank - mk_old;
      t = ksubset_colex_unrank ( rank_k, k, n );
      for ( i = 0; i < n; i++ )
      {
        ubvec[i] = 0;
      }
      for ( i = 0; i < k; i++ )
      {
        ubvec[n-t[i]] = 1;
      }
      free ( t );
      return ubvec;
    }

  }
//
//  If we got here, the rank is too large.
//
  cerr << "\n";
  cerr << "UBVEC_UNRANK_GRLEX - Fatal error!\n";
  cerr << "  Input value of rank is too high.\n";
  exit ( 1 );
}
//****************************************************************************80

int *ubvec_xor ( int n, int ubvec1[], int ubvec2[] )

//****************************************************************************80
//
//  Purpose:
//
//    UBVEC_XOR computes the exclusive OR of two UBVECs.
//
//  Discussion:
//
//    A UBVEC is a vector of binary digits representing an unsigned integer.  
//
//    UBVEC[N-1] contains the units digit, UBVEC[N-2]
//    the coefficient of 2, UBVEC[N-3] the coefficient of 4 and so on,
//    so that printing the digits in order gives the binary form of the number.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    01 December 2006
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the length of the vectors.
//
//    Input, int UBVEC1[N], UBVEC2[N], the binary vectors to be XOR'ed.
//
//    Input, int UBVEC_XOR[N], the exclusive OR of the two vectors.
//
{
  int i;
  int *ubvec3;

  ubvec3 = new int[n];

  for ( i = 0; i < n; i++ )
  {
    ubvec3[i] = ( ( ubvec1[i] + ubvec2[i] ) % 2 );
  }

  return ubvec3;
}
//****************************************************************************80

int ui4_rank_gray ( int ui4 )

//****************************************************************************80
//
//  Purpose:
//
//    UI4_RANK_GRAY ranks a Gray code.
//
//  Discussion:
//
//    This routine is entirely arithmetical,
//    and does not require access to bit testing and setting routines.
//
//    Given the number GRAY, its ranking is the order in which it would be
//    visited in the Gray code ordering.  The Gray code ordering begins
//
//    Rank  Gray  Gray
//          (Dec) (Bin)
//
//       0     0  0000
//       1     1  0001
//       2     3  0011
//       3     2  0010
//       4     6  0110
//       5     7  0111
//       6     5  0101
//       7     4  0100
//       8    12  0110
//       etc
//
//   This routine is given a Gray code, and has to return the rank.
//
//  Example:
//
//    Gray  Gray  Rank
//    (Dec) (Bin)
//
//     0       0     0
//     1       1     1
//     2      10     3
//     3      11     2
//     4     100     7
//     5     101     6
//     6     110     4
//     7     111     5
//     8    1000    15
//     9    1001    14
//    10    1010    12
//    11    1011    13
//    12    1100     8
//    13    1101     9
//    14    1110    11
//    15    1111    10
//    16   10000    31
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 December 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int UI4, the Gray code to be ranked.
//
//    Output, int UI4_RANK_GRAY, the rank of UI4.
//
{
  int k;
  bool last;
  bool next;
  int rank;
  int two_k;
  int ui4_copy;

  ui4_copy = ui4;

  if ( ui4_copy == 0 )
  {
    rank = 0;
    return rank;
  }
//
//  Find TWO_K, the largest power of 2 less than or equal to GRAY.
//
  k = 0;
  two_k = 1;
  while ( 2 * two_k <= ui4_copy )
  {
    two_k = two_k * 2;
    k = k + 1;
  }

  rank = two_k;
  last = true;
  ui4_copy = ui4_copy - two_k;

  while ( 0 < k )
  {
    two_k = two_k / 2;
    k = k - 1;

    next = ( two_k <= ui4_copy && ui4_copy < two_k * 2 );

    if ( next )
    {
      ui4_copy = ui4_copy - two_k;
    }

    if ( next != last )
    {
      rank = rank + two_k;
      last = true;
    }
    else
    {
      last = false;
    }
  }

  return rank;
}
//****************************************************************************80

int *ui4_to_ubvec ( int ui4, int n )

//****************************************************************************80
//
//  Purpose:
//
//    UI4_TO_UBVEC makes a unsigned binary vector from an integer.
//
//  Discussion:
//
//    A UBVEC is a vector of binary digits representing an unsigned integer.  
//
//    UBVEC[N-1] contains the units digit, UBVEC[N-2]
//    the coefficient of 2, UBVEC[N-3] the coefficient of 4 and so on,
//    so that printing the digits in order gives the binary form of the number.
//
//    To guarantee that there will be enough space for any
//    value of I, it would be necessary to set N = 32.
//
//  Example:
//
//    UI4      BVEC         binary
//        0  1  2  3  4  5
//        1  2  4  8 16 32
//    --  ----------------  ------
//     1  1  0  0  0  0  1       1
//     2  0  1  0  0  1  0      10
//     3  1  1  0  0  1  1      11
//     4  0  0  0  1  0  0     100
//     9  0  0  1  0  0  1    1001
//    57  1  1  1  0  1  1  110111
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    21 March 2009
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int UI4, an integer to be represented.
//
//    Input, int N, the dimension of the vector.
//
//    Output, int UI4_TO_UBVEC[N], the binary representation.
//
{
  int i;
  int *ubvec;

  ubvec = new int[n];

  for ( i = n - 1; 0 <= i; i-- )
  {
    ubvec[i] = ui4 % 2;
    ui4 = ui4 / 2;
  }

  return ubvec;
}
//****************************************************************************80

int ui4_unrank_gray ( int rank )

//****************************************************************************80
//
//  Purpose:
//
//    UI4_UNRANK_GRAY unranks a Gray code.
//
//  Discussion:
//
//    This routine is entirely arithmetical,
//    and does not require access to bit testing and setting routines.
//
//    The binary values of the Gray codes of successive integers differ in
//    just one bit.
//
//    The sequence of Gray codes for 0 to (2^N)-1 can be interpreted as a
//    Hamiltonian cycle on a graph of the cube in N dimensions.
//
//  Example:
//
//    Rank  Gray  Gray
//          (Dec) (Bin)
//
//     0     0       0
//     1     1       1
//     2     3      11
//     3     2      10
//     4     6     110
//     5     7     111
//     6     5     101
//     7     4     100
//     8    12    1100
//     9    14    1001
//    10    12    1010
//    11    13    1011
//    12     8    1100
//    13     9    1101
//    14    11    1110
//    15    10    1111
//    16    31   10000
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 December 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int RANK, the integer whose Gray code is desired.
//
//    Output, int UI4_UNRANK_GRAY, the Gray code of the given rank.
//
{
  int k;
  bool last;
  bool next;
  int rank_copy;
  int two_k;
  int ui4;

  if ( rank <= 0 )
  {
    ui4 = 0;
    return ui4;
  }

  rank_copy = rank;
  k = 0;
  two_k = 1;
  while ( 2 * two_k <= rank_copy )
  {
    two_k = two_k * 2;
    k = k + 1;
  }

  ui4 = two_k;
  rank_copy = rank_copy - two_k;
  next = true;

  while ( 0 < k )
  {
    two_k = two_k / 2;
    k = k - 1;

    last = next;
    next = ( two_k <= rank_copy && rank_copy <= two_k * 2 );

    if ( next != last )
    {
      ui4 = ui4 + two_k;
    }

    if ( next )
    {
      rank_copy = rank_copy - two_k;
    }
  }

  return ui4;
}