# include <cstdlib>
# include <cstring>
# include <iomanip>
# include <iostream>

using namespace std;

# include "luhn.hpp"

int main ( );
void ch_is_digit_test ( );
void ch_to_digit_test ( );
void luhn_check_digit_calculate_test ( );
void luhn_is_valid_test ( );
void s_digits_count_test ( );
void s_to_digits_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for LUHN_PRB.
//
//  Discussion:
//
//    LUHN_PRB tests the LUHN library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    11 September 2015
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "LUHN_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the LUHN library.\n";

  ch_is_digit_test ( );
  ch_to_digit_test ( );
  s_digits_count_test ( );
  s_to_digits_test ( );
  luhn_check_digit_calculate_test ( );
  luhn_is_valid_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "LUHN_PRB\n";
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

void luhn_check_digit_calculate_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    LUHN_CHECK_DIGIT_CALCULATE_TEST tests LUHN_CHECK_DIGIT_CALCULATE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 September 2015
//
//  Author:
//
//    John Burkardt
//
{
  int d1;
  int d2;
  string s1;
 
  cout << "\n";
  cout << "LUHN_CHECK_DIGIT_CALCULATE_TEST\n";
  cout << "  LUHN_CHECK_DIGIT_CALCULATE calculates the check digit\n";
  cout << "  for a string of digits\n";
  cout << "\n";

  s1 = "7992739871";
  d1 = 3;
  d2 = luhn_check_digit_calculate ( s1 );
  cout << "  Check digit of '" << s1 
       << "' is " << d2 
       << ", expecting " << d1 << "\n";

  s1 = "9876234510";
  d1 = 0;
  d2 = luhn_check_digit_calculate ( s1 );
  cout << "  Check digit of '" << s1 
       << "' is " << d2 
       << ", expecting " << d1 << "\n";

  s1 = "246897531";
  d1 = 9;
  d2 = luhn_check_digit_calculate ( s1 );
  cout << "  Check digit of '" << s1 
       << "' is " << d2 
       << ", expecting " << d1 << "\n";

  s1 = "135798642";
  d1 = 9;
  d2 = luhn_check_digit_calculate ( s1 );
  cout << "  Check digit of '" << s1 
       << "' is " << d2 
       << ", expecting " << d1 << "\n";

  return;
}
//****************************************************************************80

void luhn_is_valid_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    LUHN_IS_VALID_TEST tests LUHN_IS_VALID.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 September 2015
//
//  Author:
//
//    John Burkardt
//
{
  string s1;
  int value1;
  int value2;
 
  cout << "\n";
  cout << "LUHN_IS_VALID_TEST\n";
  cout << "  LUHN_IS_VALID determines whether a string with final\n";
  cout << "  Luhn check digit is valid.\n";
  cout << "\n";

  s1 = "79927398713";
  value1 = 1;
  value2 = luhn_is_valid ( s1 );
  cout << "  Validity of '" << s1 
       << "' is " << value2
       << ", expecting " << value1 << "\n";
//
//  Change a digit.
//
  s1 = "79924398713";
  value1 = 0;
  value2 = luhn_is_valid ( s1 );
  cout << "  Validity of '" << s1 
       << "' is " << value2
       << ", expecting " << value1 << "\n";
//
//  Change a check digit.
//
  s1 = "79927398711";
  value1 = 0;
  value2 = luhn_is_valid ( s1 );
  cout << "  Validity of '" << s1 
       << "' is " << value2
       << ", expecting " << value1 << "\n";

  return;
}
//****************************************************************************80

void s_digits_count_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    S_DIGITS_COUNT_TEST tests S_DIGITS_COUNT.
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
  int n;
  string s;
 
  cout << "\n";
  cout << "S_DIGITS_COUNT_TEST\n";
  cout << "  S_DIGITS_COUNT counts the digits in a string.\n";
  cout << "\n";

  s = "34E94-70.6";
  n = s_digits_count ( s );
  cout << "  We count " << n << " digits in '" << s << "'\n";

  s = "Not a one!";
  n = s_digits_count ( s );
  cout << "  We count " << n << " digits in '" << s << "'\n";

  s = "!8*k >>>> & SEVEN-0.3";
  n = s_digits_count ( s );
  cout << "  We count " << n << " digits in '" << s << "'\n";

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
