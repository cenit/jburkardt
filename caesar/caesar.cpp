# include <cstdlib>
# include <cstring>
# include <ctime>
# include <iomanip>
# include <iostream>

using namespace std;

# include "caesar.hpp"

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

string s_to_caesar ( string s1, int k )

//****************************************************************************80
//
//  Purpose:
//
//    S_TO_CAESAR applies a Caesar shift cipher to a string.
//
//  Discussion:
//
//    The Caesar shift cipher incremented each letter by 1, with Z going to A.
//
//    This function can apply a Caesar shift cipher to a string of characters,
//    using an arbitrary shift K, which can be positive, negative or zero.
//
//    Letters A through Z will be shifted by K, mod 26.
//    Letters a through z will be shifted by K, mod 26.
//    Non-alphabetic characters are unchanged.
//
//    s2 = s_to_caesar ( s1, 1 ) will apply the traditional Caesar shift cipher.
//    s3 = s_to_caesar ( s2, -1 ) will decipher the result.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    31 January 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, string S1, a string of characters.
//
//    Input, int K, the increment.
//
//    Output, string S2, the string of enciphered characters.
//
{
  int i;
  int s1_length;
  string s2;

  s1_length = s1.length ( );

  s2 = s1;
  
  for ( i = 0; i < s1_length; i++ )
  {
    if ( 'A' <= s1[i] && s1[i] <= 'A' + 25 )
    {
      s2[i] = i4_modp ( s1[i] + k - 'A', 26 ) + 'A';
    }
    else if ( 'a' <= s1[i] && s1[i] <= 'a' + 25 )
    {
      s2[i] = i4_modp ( s1[i] + k - 'a', 26 ) + 'a';
    }
  }

  return s2;
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