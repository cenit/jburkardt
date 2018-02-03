# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r85.hpp"

int main ( );
void r85_dif2_test ( );
void r85_indicator_test ( );
void r85_mtv_test ( );
void r85_mv_test ( );
void r85_np_fs_test ( );
void r85_print_test ( );
void r85_print_some_test ( );
void r85_random_test ( );
void r85_to_r8ge_test ( );
void r85_zeros_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for R85_PRB.
//
//  Discussion:
//
//    R85_PRB tests the R85 library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    16 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "R85_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the R85 library.\n";

  r85_dif2_test ( );
  r85_indicator_test ( );
  r85_mtv_test ( );
  r85_mv_test ( );
  r85_np_fs_test ( );
  r85_print_test ( );
  r85_print_some_test ( );
  r85_random_test ( );
  r85_to_r8ge_test ( );
  r85_zeros_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "R85_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void r85_dif2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R85_DIF2_TEST tests R85_DIF2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    12 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n = 5;

  cout << "\n";
  cout << "R85_DIF2_TEST\n";
  cout << "  R85_DIF2 sets up an R85 second difference matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r85_dif2 ( n );

  r85_print ( n, a, "  The R85 indicator matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r85_indicator_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R85_INDICATOR_TEST tests R85_INDICATOR.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    25 August 2006
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n = 5;

  cout << "\n";
  cout << "R85_INDICATOR_TEST\n";
  cout << "  R85_INDICATOR sets up an R85 indicator matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r85_indicator ( n );

  r85_print ( n, a, "  The R85 indicator matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r85_mtv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R85_MTV_TEST tests R85_MTV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    14 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *b;
  int n = 5;
  double *x;

  cout << "\n";
  cout << "R85_MTV_TEST\n";
  cout << "  R85_MTV computes b=A'*x where A is an R85 matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r85_indicator ( n );

  r85_print ( n, a, "  The R85 matrix:" );

  x = r8vec_indicator1_new ( n );

  r8vec_print ( n, x, "  The vector x:" );

  b = r85_mtv ( n, a, x );

  r8vec_print ( n, b, "  The product b=A'*x:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

void r85_mv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R85_MV_TEST tests R85_MV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    14 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *b;
  int n = 5;
  double *x;

  cout << "\n";
  cout << "R85_MV_TEST\n";
  cout << "  R85_MV computes b=A*x where A is an R85 matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r85_indicator ( n );

  r85_print ( n, a, "  The R85 matrix:" );

  x = r8vec_indicator1_new ( n );

  r8vec_print ( n, x, "  The vector x:" );

  b = r85_mv ( n, a, x );

  r8vec_print ( n, b, "  The product b=A*x:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

void r85_np_fs_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R85_NP_FS_TEST tests R85_NP_FS.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    25 August 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 10

  double *a;
  double *b;
  int i;
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R85_NP_FS_TEST\n";
  cout << "  R85_NP_FS factors and solves a pentadiagonal\n";
  cout << "  linear system, with no pivoting.\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
//
//  Set the matrix to a random value.
//
  a = r85_random ( N, seed );

  r85_print ( N, a, "  The pentadiagonal matrix:" );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( N );
//
//  Compute b = A * x.
//
  b = r85_mv ( N, a, x );

  r8vec_print ( N, b, "  Right hand side:" );
//
//  Wipe out the solution.
//
  for ( i = 0; i < N; i++ )
  {
    x[i] = 0.0;
  }
//
//  Solve the system.
//
  delete [] x;
  x = r85_np_fs ( N, a, b );

  r8vec_print ( N, x, "  Solution to A*x=b:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
# undef N
}
//****************************************************************************80

void r85_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R85_PRINT_TEST tests R85_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    14 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n = 5;

  cout << "\n";
  cout << "R85_PRINT_TEST\n";
  cout << "  R85_PRINT prints an R85 matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r85_indicator ( n );

  r85_print ( n, a, "  The R85 matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r85_print_some_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R85_PRINT_SOME_TEST tests R85_PRINT_SOME.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    14 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n = 8;

  cout << "\n";
  cout << "R85_PRINT_SOME_TEST\n";
  cout << "  R85_PRINT_SOME prints some of an R85 matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r85_indicator ( n );

  r85_print_some ( n, a, 1, 2, 5, 4, "  Rows 1-5, Cols 2-4:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r85_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R85_RANDOM_TEST tests R85_RANDOM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    14 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n = 5;
  int seed;

  cout << "\n";
  cout << "R85_RANDOM_TEST\n";
  cout << "  R85_RANDOM randomizes an R85 matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  seed = 123456789;
  a = r85_random ( n, seed );

  r85_print ( n, a, "  The R85 matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r85_to_r8ge_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R85_TO_R8GE_TEST tests R85_TO_R8GE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    25 August 2006
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *a_r8ge;
  int n = 5;

  cout << "\n";
  cout << "R85_TO_R8GE_TEST\n";
  cout << "  R85_TO_R8GE converts an R85 matrix to R8GE format.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r85_indicator ( n );

  r85_print ( n, a, "  The R85 matrix:" );

  a_r8ge = r85_to_r8ge ( n, a );

  r8ge_print ( n, n, a_r8ge, "  The R8GE matrix:" );

  delete [] a;
  delete [] a_r8ge;

  return;
}
//****************************************************************************80

void r85_zeros_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R85_ZEROS_TEST tests R85_ZEROS.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    12 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n = 5;

  cout << "\n";
  cout << "R85_ZEROS_TEST\n";
  cout << "  R85_ZEROS zeros an R85 indicator matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r85_zeros ( n );

  r85_print ( n, a, "  The R85 zero matrix:" );

  delete [] a;

  return;
}
