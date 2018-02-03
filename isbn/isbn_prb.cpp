# include <cstdlib>
# include <cstring>
# include <iomanip>
# include <iostream>

using namespace std;

# include "isbn.hpp"

int main ( );
void ch_is_digit_test ( );
void ch_is_isbn_digit_test ( );
void ch_to_digit_test ( );
void i4_to_isbn_digit_test ( );
void isbn_check_digit_calculate_test ( );
void isbn_digit_to_i4_test ( );
void isbn_is_valid_test ( );
void s_to_digits_test ( );
void s_to_isbn_digits_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    ISBN_PRB tests the ISBN library.
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
{
  timestamp ( );
  cout << "\n";
  cout << "ISBN_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the ISBN library.\n";

  ch_is_digit_test ( );
  ch_is_isbn_digit_test ( );
  ch_to_digit_test ( );
  i4_to_isbn_digit_test ( );
  isbn_check_digit_calculate_test ( );
  isbn_digit_to_i4_test ( );
  isbn_is_valid_test ( );
  s_to_digits_test ( );
  s_to_isbn_digits_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "ISBN_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void ch_is_digit_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    CH_IS_DIGIT_TEST tests CH_IS_DIGIT.
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
{
  char c;
  char c_test[13] = { 
    '0', '1', '2', '3', '4', 
    '5', '6', '7', '8', '9', 
    'X', '?', ' ' };
  int i;
  bool value;

  cout << "\n";
  cout << "CH_IS_DIGIT_TEST\n";
  cout << "  CH_IS_DIGIT is TRUE if a character represents a digit.\n";
  cout << "\n";
  cout << "       C  CH_IS_DIGIT(C)\n";
  cout << "\n";

  for ( i = 0; i < 13; i++ )
  {
    c = c_test[i];
    value = ch_is_digit ( c );
    cout << "  " << setw(6) << i
         << " '" << setw(1) << c
         << "' " << setw(6) << value << "\n";
  }

  return;
}
//****************************************************************************80

void ch_is_isbn_digit_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    CH_IS_ISBN_DIGIT_TEST tests CH_IS_ISBN_DIGIT.
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
{
  char c;
  char c_test[16] = { 
    '0', '1', '2', '3', '4', 
    '5', '6', '7', '8', '9', 
    'X', 'x', 'Y', '*', '?', 
    ' ' };
  int i;
  bool value;

  cout << "\n";
  cout << "CH_IS_ISBN_DIGIT_TEST\n";
  cout << "  CH_IS_ISBN_DIGIT is TRUE if a character represents an ISBN digit.\n";
  cout << "\n";
  cout << "  C  CH_IS_ISBN_DIGIT(C)\n";
  cout << "\n";

  for ( i = 0; i < 16; i++ )
  {
    c = c_test[i];
    value = ch_is_isbn_digit ( c );
    cout << " '" << setw(1) << c
         << "' " << setw(6) << value << "\n";
  }

  return;
}
//****************************************************************************80

void ch_to_digit_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    CH_TO_DIGIT_TEST tests CH_TO_DIGIT.
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
{
  char c;
  char c_test[13] = { 
    '0', '1', '2', '3', '4', 
    '5', '6', '7', '8', '9', 
    'X', '?', ' ' };
  int i;
  int i2;

  cout << "\n";
  cout << "CH_TO_DIGIT_TEST\n";
  cout << "  CH_TO_DIGIT: character -> decimal digit\n";
  cout << "\n";

  for ( i = 0; i < 13; i++ )
  {
    c = c_test[i];
    i2 = ch_to_digit ( c );
    cout << "  " << setw(6) << i
         << "  " << setw(1) << c
         << "  " << setw(6) << i2 << "\n";
  }

  return;
}
//****************************************************************************80

void i4_to_isbn_digit_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_TO_ISBN_DIGIT_TEST tests I4_TO_ISBN_DIGIT.
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
{
  char c;
  int i;
  int i4;

  cout << "\n";
  cout << "I4_TO_ISBN_DIGIT_TEST\n";
  cout << "  I4_TO_ISBN_DIGIT converts digits 0 to 10 to an ISBN digit.\n";
  cout << "\n";

  for ( i4 = 0; i4 <= 10; i4++ )
  {
    c = i4_to_isbn_digit ( i4 );
    cout << "  " << setw(2) << i4
         << "  '" << c << "'\n";
  }

  return;
}
//*****************************************************************************/

void isbn_check_digit_calculate_test ( )

//*****************************************************************************/
//
//  Purpose:
//
//    ISBN_CHECK_DIGIT_CALCULATE_TEST tests ISBN_CHECK_DIGIT_CALCULATE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    14 September 2015
//
//  Author:
//
//    John Burkardt
//
{
  char c1;
  char c2;
  string s1;

  cout << "\n";
  cout << "ISBN_CHECK_DIGIT_CALCULATE_TEST\n";
  cout << "  ISBN_CHECK_DIGIT_CALCULATE calculates the 10-th digit\n";
  cout << "  (the check digit) of a 10-digit ISBN.\n";
  cout << "\n";
//
//  Supply the full code, with dashes.
//
  s1 = "0-306-40615-2";
  c1 = '2';
  c2 = isbn_check_digit_calculate ( s1 );
  cout << "  Check digit of '" << s1 
       << " is '" << c2
       << "', expecting '" << c1 << "'\n";
//
//  Supply a partial code, with spaces.
//
  s1 = "0 8493 9640";
  c1 = '9';
  c2 = isbn_check_digit_calculate ( s1 );
  cout << "  Check digit of '" << s1 
       << " is '" << c2
       << "', expecting '" << c1 << "'\n";
//
//  Supply a partial code, no spaces.
//
  s1 = "158488059";
  c1 = '7';
  c2 = isbn_check_digit_calculate ( s1 );
  cout << "  Check digit of '" << s1 
       << " is '" << c2
       << "', expecting '" << c1 << "'\n";
//
//  Supply a partial code, no spaces.
//
  s1 = "246897531";
  c1 = '6';
  c2 = isbn_check_digit_calculate ( s1 );
  cout << "  Check digit of '" << s1 
       << " is '" << c2
       << "', expecting '" << c1 << "'\n";
//
//  Supply a partial code, no spaces.
//
  s1 = "135798642";
  c1 = '4';
  c2 = isbn_check_digit_calculate ( s1 );
  cout << "  Check digit of '" << s1 
       << " is '" << c2
       << "', expecting '" << c1 << "'\n";

  return;
}
//****************************************************************************80

void isbn_digit_to_i4_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    ISBN_DIGIT_TO_I4_TEST tests ISBN_DIGIT_TO_I4.
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
{
  char c;
  char c_test[16] = {
    '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'X', 'x', 'Y', '*', '?', ' ' };
  int i;
  int i4;

  cout << "\n";
  cout << "ISBN_DIGIT_TO_I4_TEST\n";
  cout << "  ISBN_DIGIT_TO_I4 converts an ISBN digit to an I4\n";
  cout << "\n";

  for ( i = 0; i < 16; i++ )
  {
    c = c_test[i];
    i4 = isbn_digit_to_i4 ( c );
    cout << "  '" << c
         << "'  " << setw(2) << i4 << "\n";
  }

  return;
}
//*****************************************************************************/

void isbn_is_valid_test ( )

//*****************************************************************************/
//
//  Purpose:
//
//    ISBN_IS_VALID_TEST tests ISBN_IS_VALID.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    14 September 2015
//
//  Author:
//
//    John Burkardt
//
{
  string s1;
  bool value1;
  bool value2;

  cout << "\n";
  cout << "ISBN_IS_VALID_TEST\n";
  cout << "  ISBN_IS_VALID reports whether a ISBN is valid.\n";
  cout << "\n";
//
//  Print true as "true" and false as "false".
//
  cout << std::boolalpha;
//
//  Supply a valid code, with dashes.
//
  s1 = "0-306-40615-2";
  value1 = true;
  value2 = isbn_is_valid ( s1 );
  cout << "  Validity of '" << s1 
       << "' is " << value2
       << ", expecting " << value1 << "\n";
//
//  Modify one digit.
//
  s1 = "0-326-40615-2";
  value1 = false;
  value2 = isbn_is_valid ( s1 );
  cout << "  Validity of '" << s1 
       << "' is " << value2
       << ", expecting " << value1 << "\n";
//
//  Supply a valid code, with spaces.
//
  s1 = "0 8493 9640 9";
  value1 = true;
  value2 = isbn_is_valid ( s1 );
  cout << "  Validity of '" << s1 
       << "' is " << value2
       << ", expecting " << value1 << "\n";
//
//  Modify the check digit.
//
  s1 = "0 8493 9640 3";
  value1 = false;
  value2 = isbn_is_valid ( s1 );
  cout << "  Validity of '" << s1 
       << "' is " << value2
       << ", expecting " << value1 << "\n";
//
//  Supply a valid code, with a final digit of 'X'.
//
  s1 = "0-3870-9654-X";
  value1 = true;
  value2 = isbn_is_valid ( s1 );
  cout << "  Validity of '" << s1 
       << "' is " << value2
       << ", expecting " << value1 << "\n";
//
//  Supply a valid code, with a final digit of 'x'.
//
  s1 = "0-201-38597-x";
  value1 = true;
  value2 = isbn_is_valid ( s1 );
  cout << "  Validity of '" << s1 
       << "' is " << value2
       << ", expecting " << value1 << "\n";

  return;
}
//****************************************************************************80

void s_to_digits_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    S_TO_DIGITS_TEST tests S_TO_DIGITS.
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
//   John Burkardt
//
{
  int *dvec;
  int n;
  string s;

  cout << "\n";
  cout << "S_TO_DIGITS_TEST\n";
  cout << "  S_TO_DIGITS: string -> digit vector\n";

  s = "34E94-70.6";
  cout << "\n";
  cout << "  Test string: '" << s << "'\n";
  n = 5;
  dvec = s_to_digits ( s, n );
  i4vec_print ( n, dvec, "  Extracted 5 digits:" );
  delete [] dvec;

  s = "34E94-70.6";
  cout << "\n";
  cout << "  Test string: '" << s << "'\n";
  n = 7;
  dvec = s_to_digits ( s, n );
  i4vec_print ( n, dvec, "  Extracted 7 digits:" );
  delete [] dvec;

  return;
}
//****************************************************************************80

void s_to_isbn_digits_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    S_TO_ISBN_DIGITS_TEST tests S_TO_ISBN_DIGITS.
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
//   John Burkardt
//
{
  int *dvec;
  int n;
  string s;

  cout << "\n";
  cout << "S_TO_ISBN_DIGITS_TEST\n";
  cout << "  S_TO_ISBN_DIGITS: string -> ISBN digit vector\n";

  s = "34E9X-70.6";
  cout << "\n";
  cout << "  Test string: '" << s << "'\n";
  n = 5;
  dvec = s_to_isbn_digits ( s, n );
  i4vec_print ( n, dvec, "  Extracted 5 digits:" );
  delete [] dvec;

  s = "34E9X-70.6";
  cout << "\n";
  cout << "  Test string: '" << s << "'\n";
  n = 7;
  dvec = s_to_isbn_digits ( s, n );
  i4vec_print ( n, dvec, "  Extracted 7 digits:" );
  delete [] dvec;

  return;
}
