# include <cstdlib>
# include <cstring>
# include <iomanip>
# include <iostream>

using namespace std;

# include "chrpak.hpp"

int main ( );
void s_to_caesar_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for CAESAR_PRB.
//
//  Discussion:
//
//    CAESAR_PRB tests the CAESAR library.
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
{
  timestamp ( );
  cout << "\n";
  cout << "CAESAR_PRB:\n";
  cout << "  C++ version\n";
  cout << "  Test the CAESAR library.\n";

  s_to_caesar_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "CAESAR_PRB:\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void s_to_caesar_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    S_TO_CAESAR_TEST tests the S_TO_CAESAR library.
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
{
  int k;
  string s1;
  string s2;
  string s3;

  cout << "\n";
  cout << "S_TO_CAESAR_TEST\n";
  cout << "  S_TO_CAESAR applies a Caesar Shift cipher to a string.\n";

  cout << "\n";
  cout << "  S2 = S_TO_CAESAR ( S1, K ), varying K.\n";
  cout << "\n";
  cout << "   K  ---------------S1----------------  ---------------S2----------------\n";
  cout << "\n";
  for ( k = -5; k <= 5; k++ )
  {
    s1 = "A man, a plan, a canal: Panama!";
    s2 = s_to_caesar ( s1, k );
    cout << "  " << setw(2) << k
         << "  '" << s1
         << "'  '" << s2 << "'\n";
  }

  cout << "\n";
  cout << "  S2 = S_TO_CAESAR ( S1,  K ).\n";
  cout << "  S3 = S_TO_CAESAR ( S2, -K )\n";
  cout << "\n";
  cout << "   K  ------------S1------------  ------------S2------------  ------------S3------------\n";
  cout << "\n";
  for ( k = -5; k <= 5; k++ )
  {
    s1 = "The key is under the mat";
    s2 = s_to_caesar ( s1, k );
    s3 = s_to_caesar ( s2, -k );
    cout << "  " << setw(2) << k
         << "  '" << s1
         << "'  '" << s2 
         << "'  '" << s3 << "'\n";
  }

  return;
}