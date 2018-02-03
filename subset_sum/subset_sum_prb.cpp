# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "subset_sum.hpp"

int main ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for SUBSET_SUM_PRB.
//
//  Discussion:
//
//    SUBSET_SUM_PRB tests the SUBSET_SUM library.
//
//  Licensing:
//
//    I don't care what you do with this code.
//
//  Modified:
//
//    15 July 2017
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "SUBSET_SUM_PRB:\n";
  cout << "  C++ version\n";
  cout << "  Test the SUBSET_SUM library.\n";

  subset_sum_count_tests ( );
  subset_sum_find_tests ( );
  subset_sum_next_tests ( );
  subset_sum_table_tests ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "SUBSET_SUM_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}

