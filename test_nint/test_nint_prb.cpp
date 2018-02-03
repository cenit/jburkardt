# include <cstdlib>
# include <iostream>
# include <iomanip>
# include <cmath>

using namespace std;

# include "test_nint.hpp"

int main ( );
void test01 ( );
void test02 ( );
void test03 ( );
void test04 ( );
void test05 ( );
void test06 ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for TEST_NINT_PRB.
//
//  Discussion:
//
//    TEST_NINT_PRB tests the TEST_NINT library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "TEST_NINT_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the TEST_NINT library.\n";
 
  test01 ( );
  test02 ( );
  test03 ( );
  test04 ( );
  test05 ( );
  test06 ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "TEST_NINT_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void test01 ( )

//****************************************************************************80
//
//  Purpose:
//
//    TEST01 retrieves and prints the problem names.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    12 March 2007
//
//  Author:
//
//    John Burkardt
//
{
  char *name;
  int problem;
  int problem_num;

  cout << "\n";
  cout << "TEST01\n";
  cout << "  GET_PROBLEM_NUM returns the number of problems.\n";
  cout << "  P00_NAME(#) returns the name for problem #.\n";
  cout << "\n";
  cout << "  We use these two routines to print a directory\n";
  cout << "  of all the problems.\n";

  problem_num = get_problem_num ( );

  cout << "\n";
  cout << "  The number of problems available is " << problem_num << "\n";
  cout << "\n";

  for ( problem = 1; problem <= problem_num; problem++ )
  {
    name = p00_name ( problem );
    cout << "  " << setw(8) << problem
         << "  \"" << name << "\".\n";

    delete [] name;
  }

  return;
}
//****************************************************************************80

void test02 ( )

//****************************************************************************80
//
//  Purpose:
//
//    TEST02 just prints out the title information.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
{
  int problem;
  int problem_num;

  cout << "\n";
  cout << "TEST02\n";
  cout << "  GET_PROBLEM_NUM returns the number of problems.\n";
  cout << "  P00_TITLE(#) prints the title for problem #.\n";
  cout << "\n";
  cout << "  We use these two routines to print a directory\n";
  cout << "  of all the problems.\n";

  problem_num = get_problem_num ( );

  cout << "\n";
  cout << "  The number of problems available is " << problem_num << "\n";
  cout << "\n";

  for ( problem = 1; problem <= problem_num; problem++ )
  {
    p00_title ( problem );
  }

  return;
}
//****************************************************************************80

void test03 ( )

//****************************************************************************80
//
//  Purpose:
//
//    TEST03 applies a composite midpoint rule to box regions.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    12 March 2007
//
//  Author:
//
//    John Burkardt
//
{
  int dim_num;
  double error;
  double exact;
  int problem;
  int problem_num;
  char *region;
  double result;
  int sub_num;

  cout << "\n";
  cout << "TEST03\n";
  cout << "  Use a simple product rule on box regions.\n";
  cout << "  Use a fixed spatial dimension.\n";

  problem_num = get_problem_num ( );

  dim_num = 3;

  cout << "\n";
  cout << "  Prob   Dim  Subs      Approx        Exact        Error\n";
  cout << "\n";

  for ( problem = 1; problem <= problem_num; problem++ )
  {
//
//  Set data to default values.
//
    p00_default ( problem, dim_num );

    region = p00_region ( problem );

    if ( s_eqi ( region, "BOX" ) )
    {
      for ( sub_num = 1; sub_num <= 5; sub_num = sub_num + 2 )
      {
        result = p00_box_gl05 ( problem, dim_num, sub_num );

        exact = p00_exact ( problem, dim_num );

        if ( exact == r8_huge ( ) )
        {
          cout << "  " << setw(4)  << problem
               << "  " << setw(4)  << dim_num
               << "  " << setw(4)  << sub_num
               << "  " << setw(12) << result
               << "  " << "------------"
               << "  " << "------------" << "\n";
        }
        else
        {
          error = r8_abs ( result - exact );

          cout << "  " << setw(4)  << problem
               << "  " << setw(4)  << dim_num
               << "  " << setw(4)  << sub_num
               << "  " << setw(12) << result
               << "  " << setw(12) << exact
               << "  " << setw(12) << error << "\n";
        }
      }
      cout << "\n";
    }
    delete [] region;
  }
  return;
}
//****************************************************************************80

void test04 ( )

//****************************************************************************80
//
//  Purpose:
//
//    TEST04 applies a Monte Carlo rule to box regions.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 June 2007
//
//  Author:
//
//    John Burkardt
//
{
  int dim_num;
  double error;
  double exact;
  int i;
  int point_num;
  int problem;
  int problem_num;
  char *region;
  double result;
  unsigned int seed;

  cout << "\n";
  cout << "TEST04\n";
  cout << "  Use a Monte Carlo rule on box regions.\n";
  cout << "  Use a fixed spatial dimension.\n";
  cout << "\n";
  cout << "  Repeatedly multiply the number of points by 16.\n";

  problem_num = get_problem_num ( );

  cout << "\n";
  cout << "  Prob   Dim      Points      Approx        Exact         Error\n";
  cout << "\n";

  dim_num = 3;

  for ( problem = 1; problem <= problem_num; problem++ )
  {
//
//  Set data to default values.
//
    p00_default ( problem, dim_num );

    region = p00_region ( problem );

    if ( s_eqi ( region, "BOX" ) )
    {
      for ( i = 1; i <= 5; i++ )
      {
        if ( i == 1 )
        {
          point_num = 1;
        }
        else
        {
          point_num = 16 * point_num;
        }

        seed = 123456789;
        srand ( seed );

        result = p00_box_mc ( problem, dim_num, point_num );

        exact = p00_exact ( problem, dim_num );

        if ( exact == r8_huge ( ) )
        {
          cout << "  " << setw(4)  << problem
               << "  " << setw(4)  << dim_num
               << "  " << setw(10) << point_num
               << "  " << setw(12) << result
               << "  " << "------------"
               << "  " << "------------" << "\n";
        }
        else
        {
          error = r8_abs ( result - exact );

          cout << "  " << setw(4)  << problem
               << "  " << setw(4)  << dim_num
               << "  " << setw(10) << point_num
               << "  " << setw(12) << result
               << "  " << setw(12) << exact
               << "  " << setw(12) << error << "\n";
        }
      }
      cout << "\n";
    }
    delete [] region;
  }

  return;
}
//****************************************************************************80

void test05 ( )

//****************************************************************************80
//
//  Purpose:
//
//    TEST05 demonstrates how a base point can be moved.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 June 2007
//
//  Author:
//
//    John Burkardt
//
{
# define DIM_NUM 2
# define TEST_NUM 5

  int dim;
  double error;
  double exact;
  int i;
  int problem;
  int point_num;
  int problem_index[TEST_NUM] = { 16, 17, 18, 19, 31 };
  double result;
  int run;
  int test;
  double z[DIM_NUM];

  cout << "\n";
  cout << "TEST05\n";
  cout << "  Demonstrate problems that use a base point\n";
  cout << "  by moving the base point around.\n";
  cout << "  Use a Monte Carlo rule on box regions.\n";
  cout << "  Use a fixed spatial dimension.\n";
  
  for ( test = 0; test < TEST_NUM; test++ )
  {
    problem = problem_index[test];

    cout << "\n";
    cout << "  Problem number = " << problem << "\n";

    p00_default ( problem, DIM_NUM );

    for ( run = 1; run <= 3; run++ )
    {
      p00_r8vec ( problem, 'R', 'Z', DIM_NUM, z );

      cout << "\n";
      cout << "  Run number " << run << "\n";
      cout << "  Basis point Z = ";
      for ( dim = 0; dim < DIM_NUM; dim++ )
      {
        cout << "  " << setw(12) << z[dim];
      }
      cout << "\n";
      cout << "\n";
      cout << "  Prob   Dim      Points      Approx        Exact            Error\n";
      cout << "\n";

      for ( i = 1; i <= 3; i++ )
      {
        if ( i == 1 )
        {
          point_num = 10;
        }
        else if ( i == 2 )
        {
          point_num = 1000;
        }
        else if ( i == 3 )
        {
          point_num = 100000;
        }

        result = p00_box_mc ( problem, DIM_NUM, point_num );

        exact = p00_exact ( problem, DIM_NUM );

        if ( exact == r8_huge ( ) )
        {
          cout << "  " << setw(4)  << problem
               << "  " << setw(4)  << DIM_NUM
               << "  " << setw(10) << point_num
               << "  " << setw(12) << result
               << "  " << "------------"
               << "  " << "------------" << "\n";
        }
        else
        {
          error = r8_abs ( result - exact );

          cout << "  " << setw(4)  << problem
               << "  " << setw(4)  << DIM_NUM
               << "  " << setw(10) << point_num
               << "  " << setw(12) << result
               << "  " << setw(12) << exact
               << "  " << setw(12) << error << "\n";
        }
      }
      cout << "\n";
    }
  }
  return;
# undef DIM_NUM
# undef TEST_NUM
}
//****************************************************************************80

void test06 ( )

//****************************************************************************80
//
//  Purpose:
//
//    TEST06 applies a composite midpoint rule for increasing spatial dimension.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    12 March 2007
//
//  Author:
//
//    John Burkardt
//
{
  int calls;
  double error;
  double exact;
  int problem;
  int dim_num;
  double result;
  int sub_num;

  cout << "\n";
  cout << "TEST06\n";
  cout << "  Use a simple product rule on a box region.\n";
  cout << "  Use a fixed problem;\n";
  cout << "  Let the spatial dimension increase.\n";

  problem = 6;

  cout << "\n";
  cout << "  Prob   Dim  Subs        Approx         "
       << "Exact        Error          Calls\n";
  cout << "\n";

  for ( dim_num = 1; dim_num <= 6; dim_num++ )
  {
    p00_default ( problem, dim_num );

    for ( sub_num = 1; sub_num <= 5; sub_num = sub_num + 2 )
    {
      calls = 0;
      p00_i4 ( problem, 'S', '#', &calls );

      result = p00_box_gl05 ( problem, dim_num, sub_num );

      p00_i4 ( problem, 'G', '#', &calls );

      exact = p00_exact ( problem, dim_num );

      if ( exact == r8_huge ( ) )
      {
        cout << "  " << setw(4) << problem
             << "  " << setw(4) << dim_num
             << "  " << setw(4) << sub_num
             << "  " << setw(12) << result
             << "  " << "------------"
             << "  " << "------------"
             << "  " << setw(12) << calls << "\n";
      }
      else
      {
        error = r8_abs ( result - exact );

        cout << "  " << setw(4) << problem
             << "  " << setw(4) << dim_num
             << "  " << setw(4) << sub_num
             << "  " << setw(12) << result
             << "  " << setw(12) << exact
             << "  " << setw(12) << error
             << "  " << setw(12) << calls << "\n";
      }
    }
    cout << "\n";
  }

  return;
}
