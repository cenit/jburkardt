# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>

# include "owens.hpp"

using namespace std;

int main ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for OWENS_PRB.
//
//  Discussion:
//
//    OWENS_PRB tests the OWENS library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    14 July 2017
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "OWENS_PRB:\n";
  cout << "  C++ version\n";
  cout << "  Test the OWENS library.\n";

  bivnor_test ( );
  t_test ( );
  znorm1_test ( );
  znorm2_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "OWENS_PRB:\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}

