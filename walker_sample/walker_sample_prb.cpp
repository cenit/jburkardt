# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "walker_sample.hpp"

int main ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN tests WALKER_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    20 February 2016
//
//  Author:
//
//    John Burkardt
//
{ 
  unsigned int n;
  double p;
  unsigned int seed;

  timestamp ( );
  cout << "\n";
  cout << "WALKER_SAMPLE_PRB:\n";
  cout << "  C++ version.\n";
  cout << "  Test the WALKER_SAMPLE library.\n";
  
  walker_sampler_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "WALKER_SAMPLE_PRB:\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
