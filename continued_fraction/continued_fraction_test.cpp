# include <iomanip>
# include <iostream>

using namespace std;

# include "continued_fraction.hpp"

int main ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    CONTINUED_FRACTION_TEST tests the CONTINUED_FRACTION library.
//
//  Licensing:
//
//    I don't care what you do with this code.
//
//  Modified:
//
//    07 August 2017
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "CONTINUED_FRACTION_TEST:\n";
  cout << "  C version\n";
  cout << "  CONTINUED_FRACTION is a library for dealing with\n";
  cout << "  expresssions representing a continued fraction.\n";

  i4cf_evaluate_test ( );
  i4scf_evaluate_test ( );
  i8cf_evaluate_test ( );
  i8scf_evaluate_test ( );
  r8_to_i4scf_test ( );
  r8_to_i8scf_test ( );
  r8cf_evaluate_test ( );
  r8scf_evaluate_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "CONTINUED_FRACTION_TEST:\n";
  cout << "  Normal end of execution.\n";
  timestamp ( );

  return 0;
}

