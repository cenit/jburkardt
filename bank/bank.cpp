# include <cmath>
# include <cstdlib>
# include <cstring>
# include <ctime>
# include <iomanip>
# include <iostream>

using namespace std;

# include "bank.hpp"

//****************************************************************************80

int bank_check_digit_calculate ( string s )

//****************************************************************************80
//
//  Purpose:
//
//    BANK_CHECK_DIGIT_CALCULATE returns the check digit of a bank checksum.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    06 October 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, string S, a string containing at least 8 digits.
//    Dashes and other characters will be ignored.  A 9th digit may be
//    included, but it will be ignored.
//
//    Output, int BANK_CHECK_DIGIT_CALCULATE, the check digit.
//
{
  int d;
  int *dvec;
  int n;

  n = 8;
  dvec = s_to_digits ( s, n );

  d = 3 * ( dvec[0] + dvec[3] + dvec[6] )
    + 7 * ( dvec[1] + dvec[4] + dvec[7] )
    +     ( dvec[2] + dvec[5] );

  d = ( d % 10 );

  d = ( ( 10 - d ) % 10 );

  delete [] dvec;

  return d;
}
//****************************************************************************80

bool bank_is_valid ( string s )

//****************************************************************************80
//
//  Purpose:
//
//    BANK_IS_VALID reports whether a UPC is valid.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    06 October 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, string S, a string containing 9 digits.
//    Dashes and other characters will be ignored.
//
//    Output, bool BANK_IS_VALID, is TRUE if the string is valid.
//
{
  int d1;
  int d2;
  int *dvec;
  int n;
  bool value;

  n = 9;
  dvec = s_to_digits ( s, n );

  d1 = bank_check_digit_calculate ( s );
  d2 = dvec[8];

  if ( d1 == d2 )
  {
    value = true;
  }
  else
  {
    value = false;
  }

  delete [] dvec;

  return value;
}
//****************************************************************************80

bool ch_is_digit ( char ch )

//****************************************************************************80
//
//  Purpose:
//
//    CH_IS_DIGIT returns TRUE if a character is a decimal digit.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 September 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char CH, the character to be analyzed.
//
//    Output, bool CH_IS_DIGIT, is TRUE if the character is a digit.
//
{
  bool value;

  if ( '0' <= ch && ch <= '9' )
  {
    value = true;
  }
  else
  {
    value = false;
  }
  return value;
}
//****************************************************************************80

int ch_to_digit ( char ch )

//****************************************************************************80
//
//  Purpose:
//
//    CH_TO_DIGIT returns the integer value of a base 10 digit.
//
//  Example:
//
//     CH  DIGIT
//    ---  -----
//    '0'    0
//    '1'    1
//    ...  ...
//    '9'    9
//    ' '   -1
//    'X'   -1
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 September 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char CH, the decimal digit, '0' through '9' are legal.
//
//    Output, int CH_TO_DIGIT, the corresponding integer value.  If the
//    character was 'illegal', then DIGIT is -1.
//
{
  int value;

  if ( '0' <= ch && ch <= '9' )
  {
    value = ch - '0';
  }
  else
  {
    value = -1;
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
//    An I4VEC is a vector of integer values.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    30 August 2009
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
//    Input, string TITLE, a title to be printed first.
//    TITLE may be blank.
//
{
  int i;

  cout << "\n";
  cout << title << "\n";
  cout << "\n";
  for ( i = 0; i <= n-1; i++ )
  {
    cout << setw(6) << i + 1 << "  "
         << setw(8) << a[i]  << "\n";
  }

  return;
}
//****************************************************************************80

int *s_to_digits ( string s, int n )

//****************************************************************************80
//
//  Purpose:
//
//    S_TO_DIGITS extracts N digits from a string.
//
//  Discussion:
//
//    The string may include spaces, letters, and dashes, but only the
//    digits 0 through 9 will be extracted.
//
//  Example:
//
//    S  => 34E94-70.6
//    N  => 5
//    D <=  (/ 3, 4, 9, 4, 7 /)
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 September 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, string S, the string.
//
//    Input, int N, the number of digits to extract.
//
//    Output, int S_TO_DIGITS[N], the extracted digits.
//
{
  char c;
  int d;
  int d_pos;
  int *dvec;
  int s_len;
  int s_pos;

  dvec = new int[n];

  s_len = s.length ( );

  s_pos = 0;
  d_pos = 0;

  while ( d_pos < n )
  {
    if ( s_len <= s_pos )
    {
      cerr << "\n";
      cerr << "S_TO_DIGITS - Fatal error!\n";
      cerr << "  Could not read enough data from string.\n";
      exit ( 1 );
    }

    c = s[s_pos];
    s_pos = s_pos + 1;

    if ( ch_is_digit ( c ) )
    {
      d = ch_to_digit ( c );
      dvec[d_pos] = d;
      d_pos = d_pos + 1;
    }
  }

  return dvec;
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
