# include <cmath>
# include <cstdlib>
# include <cstring>
# include <ctime>
# include <iomanip>
# include <iostream>

using namespace std;

# include "isbn.hpp"

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

bool ch_is_isbn_digit ( char ch )

//****************************************************************************80
//
//  Purpose:
//
//    CH_IS_ISBN_DIGIT returns TRUE if a character is an ISBN digit.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    15 September 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char CH, the character to be analyzed.
//
//    Output, bool CH_IS_ISBN_DIGIT, is TRUE if the character is an ISBN digit.
//
{
  bool value;

  if ( '0' <= ch && ch <= '9' )
  {
    value = true;
  }
  else if ( ch == 'X' || ch == 'x' )
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

char i4_to_isbn_digit ( int i )

//****************************************************************************80
//
//  Purpose:
//
//    I4_TO_ISBN_DIGIT converts an I4 to an ISBN digit.
//
//  Discussion:
//
//    Only the integers 0 through 10 can be input.  The representation
//    of 10 is 'X'.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    16 September 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int I, an integer between 0 and 10.
//
//    Output, char I4_TO_ISBN_DIGIT, the ISBN character code of the integer.
//    If I is illegal, then the value is set to '?'.
//
{
       if ( i == 0 )
  {
    return '0';
  }
  else if ( i == 1 )
  {
    return '1';
  }
  else if ( i == 2 )
  {
    return '2';
  }
  else if ( i == 3 )
  {
    return '3';
  }
  else if ( i == 4 )
  {
    return '4';
  }
  else if ( i == 5 )
  {
    return '5';
  }
  else if ( i == 6 )
  {
    return '6';
  }
  else if ( i == 7 )
  {
    return '7';
  }
  else if ( i == 8 )
  {
    return '8';
  }
  else if ( i == 9 )
  {
    return '9';
  }
  else if ( i == 10 )
  {
    return 'X';
  }
  else
  {
    return '?';
  }
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

char isbn_check_digit_calculate ( string s )

//****************************************************************************80
//
//  Purpose:
//
//    ISBN_CHECK_DIGIT_CALCULATE determines the check digit for an ISBN.
//
//  Discussion:
//
//    ISBN stands for International Standard Book Number.  A unique ISBN
//    is assigned to each new book.  The ISBN includes 10 digits.  There is
//    an initial digit, then a dash, then a set of digits which are a
//    code for the publisher, another digit, and then the check digit:
//
//      initial-publisher-book-check
//
//    The number of digits used for the publisher and book codes can vary,
//    but the check digit is always one digit, and the total number of
//    digits is always 10.
//
//    The check digit is interesting, because it is a way of trying to
//    make sure that an ISBN has not been incorrectly copied.  Specifically,
//    if the ISBN is correct, then its ten digits will satisfy
//
//       10 * A + 9 * B + 8 * C + 7 * D + 6 * E
//      + 5 * F * 4 * G * 3 * H + 2 * I +     J  = 0 mod 11.
//
//    Here, we've taken 'A' to represent the first digit and 'J' the
//    last (which is the check digit).  In order for the code to work,
//    the value of J must be allowed to be anything from 0 to 10.  In
//    cases where J works out to be 10, the special digit 'X' is used.
//    An 'X' digit can only occur in this last check-digit position
//    on an ISBN.
//
//  Example:
//
//    S  => 0-8493-9640-?
//    D <=  9
//
//    meaning the ISBN is 0-8493-9640-9
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 September 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, string S, a string.  Dashes and spaces and other
//    nonnumeric data is ignored, but at least 9 digits are expected, and only
//    the first 9 digits will be examined.
//
//    Output, char ISBN_CHECK_DIGIT_CALCULATE, the ISBN 
//    check digit that should be appended to form the full 10 digit ISBN.
//
{
  char c;
  int d;
  int *dvec;
  int i;
  int n;
//
//  Extract first 9 digits.
//
  n = 9;
  dvec = s_to_digits ( s, n );
//
//  Compute the check digit.
//
  d = 0;
  for ( i = 0; i < 9; i++ )
  {
    d = d + ( 10 - i ) * dvec[i];
  }

  d = ( ( 11 - ( d % 11 ) ) % 11 );
//
//  Convert digits 0 through 9, 10 to characters '0' through '9', 'X'.
//
  c = i4_to_isbn_digit ( d );

  return c;
}
//****************************************************************************80

int isbn_digit_to_i4 ( char c )

//****************************************************************************80
//
//  Purpose:
//
//    ISBN_DIGIT_TO_I4 converts an ISBN digit into an I4.
//
//  Discussion:
//
//    The characters '0' through '9' stand for themselves, but
//    the character 'X' or 'x' stands for 10.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    16 September 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char C, the ISBN character code to be converted.
//
//    Output, int ISBN_DIGIT_TO_I4, the numeric value of the character
//    code, between 0 and 10.  This value is returned as -1 if C is
//    not a valid character code.
//
{
  int value;

  if ( '0' <= c && c <= '9' )
  {
    value = c - '0';
  }
  else if ( c == 'X' || c == 'x' )
  {
    value = 10;
  }
  else
  {
    value = -1;
  }

  return value;
}
//****************************************************************************80

bool isbn_is_valid ( string s )

//****************************************************************************80
//
//  Purpose:
//
//    ISBN_IS_VALID reports whether an ISBN is valid.
//
//  Discussion:
//
//    ISBN stands for International Standard Book Number.  A unique ISBN
//    is assigned to each new book.  The ISBN includes 10 digits.  There is
//    an initial digit, then a dash, then a set of digits which are a
//    code for the publisher, another digit, and then the check digit:
//
//      initial-publisher-book-check
//
//    The number of digits used for the publisher and book codes can vary,
//    but the check digit is always one digit, and the total number of
//    digits is always 10.
//
//    The check digit is interesting, because it is a way of trying to
//    make sure that an ISBN has not been incorrectly copied.  Specifically,
//    if the ISBN is correct, then its ten digits will satisfy
//
//       10 * A + 9 * B + 8 * C + 7 * D + 6 * E
//      + 5 * F * 4 * G * 3 * H + 2 * I +     J  = 0 mod 11.
//
//    Here, we've taken 'A' to represent the first digit and 'J' the
//    last (which is the check digit).  In order for the code to work,
//    the value of J must be allowed to be anything from 0 to 10.  In
//    cases where J works out to be 10, the special digit 'X' is used.
//    An 'X' digit can only occur in this last check-digit position
//    on an ISBN.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 September 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, string S, a string containing 12 digits.
//    Dashes and other characters will be ignored.
//
//    Output, bool ISBN_IS_VALID, is TRUE if the string is valid.
//
{
  char c1;
  int d1;
  int d2;
  int *dvec;
  int n;
  int value;

  n = 10;
  dvec = s_to_isbn_digits ( s, n );

  c1 = isbn_check_digit_calculate ( s );
  d1 = isbn_digit_to_i4 ( c1 );

  d2 = dvec[9];

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

int *s_to_isbn_digits ( string s, int n )

//****************************************************************************80
//
//  Purpose:
//
//    S_TO_ISBN_DIGITS extracts N ISBN digits from a string.
//
//  Discussion:
//
//    The string may include spaces, letters, and dashes, but only the
//    digits '0' through '9' and 'X' will be extracted.
//
//  Example:
//
//    S  => 34E9X-70.6
//    N  => 5
//    D <=  (/ 3, 4, 9, 10, 7 /)
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    16 September 2015
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
//    Output, int S_TO_ISBN_DIGITS[N], the extracted digits.
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
      cerr << "S_TO_ISBN_DIGITS - Fatal error!\n";
      cerr << "  Could not read enough data from string.\n";
      exit ( 1 );
    }

    c = s[s_pos];
    s_pos = s_pos + 1;

    if ( ch_is_isbn_digit ( c ) )
    {
      d = isbn_digit_to_i4 ( c );
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