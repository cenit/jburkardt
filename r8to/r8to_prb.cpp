# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8to.hpp"

int main ( );
void r8to_dif2_test ( );
void r8to_indicator_test ( );
void r8to_mtv_test ( );
void r8to_mv_test ( );
void r8to_print_test ( );
void r8to_print_some_test ( );
void r8to_random_test ( );
void r8to_sl_test ( );
void r8to_slt_test ( );
void r8to_to_r8ge_test ( );
void r8to_zeros_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for R8TO_PRB.
//
//  Discussion:
//
//    R8TO_PRB tests the R8TO library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    27 September 2015
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "R8TO_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the R8TO library.\n";

  r8to_dif2_test ( );
  r8to_indicator_test ( );
  r8to_mtv_test ( );
  r8to_mv_test ( );
  r8to_print_test ( );
  r8to_print_some_test ( );
  r8to_random_test ( );
  r8to_sl_test ( );
  r8to_slt_test ( );
  r8to_to_r8ge_test ( );
  r8to_zeros_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "R8TO_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void r8to_dif2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8TO_DIF2_TEST tests R8TO_DIF2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    25 September 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n = 5;

  cout << "\n";
  cout << "R8TO_DIF2_TEST\n";
  cout << "  R8TO_DIF2 sets the second difference as an R8TO matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r8to_dif2 ( n );

  r8to_print ( n, a, "  The R8TO matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8to_indicator_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8TO_INDICATOR_TEST tests R8TO_INDICATOR.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    06 September 2006
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n = 5;

  cout << "\n";
  cout << "R8TO_INDICATOR_TEST\n";
  cout << "  R8TO_INDICATOR sets up an R8TO indicator matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r8to_indicator ( n );

  r8to_print ( n, a, "  The R8TO indicator matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8to_mtv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8TO_MTV_TEST tests R8TO_MTV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    27 September 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *b;
  int n = 5;
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8TO_MTV_TEST\n";
  cout << "  R8TO_MTV computes b=A'*x=b, where A is an R8TO matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r8to_indicator ( n );
  r8to_print ( n, a, "  The Toeplitz matrix:" );

  x = r8vec_indicator1_new ( n );
  r8vec_print ( n, x, "  x:" );
//
//  Compute b=A'*x.
//
  b = r8to_mtv ( n, a, x );
  r8vec_print ( n, b, "  b=A'*x:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

void r8to_mv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8TO_MV_TEST tests R8TO_MV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    27 September 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *b;
  int n = 5;
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8TO_MV_TEST\n";
  cout << "  R8TO_MV computes b=A*x=b, where A is an R8TO matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r8to_indicator ( n );
  r8to_print ( n, a, "  The Toeplitz matrix:" );

  x = r8vec_indicator1_new ( n );
  r8vec_print ( n, x, "  x:" );
//
//  Compute b=A*x.
//
  b = r8to_mv ( n, a, x );
  r8vec_print ( n, b, "  b=A*x:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

void r8to_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8TO_PRINT_TEST tests R8TO_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    27 September 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n = 5;

  cout << "\n";
  cout << "R8TO_PRINT_TEST\n";
  cout << "  R8TO_PRINT prints an R8TO matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r8to_indicator ( n );

  r8to_print ( n, a, "  The R8TO indicator matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8to_print_some_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8TO_PRINT_SOME_TEST tests R8TO_PRINT_SOME.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    27 September 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n = 5;

  cout << "\n";
  cout << "R8TO_PRINT_SOME_TEST\n";
  cout << "  R8TO_PRINT_SOME prints some of an R8TO matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r8to_indicator ( n );

  r8to_print_some ( n, a, 1, 0, 4, 2, "  Rows 1:4, Cols 0:2" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8to_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8TO_RANDOM_TEST tests R8TO_RANDOM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    27 September 2006
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n;
  int seed;

  cout << "\n";
  cout << "R8TO_RANDOM_TEST\n";
  cout << "  R8TO_RANDOM randomizes an R8TO matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  n = 5;
  seed = 123456789;
  a = r8to_random ( n, seed );

  r8to_print ( n, a, "  The R8TO matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8to_sl_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8TO_SL_TEST tests R8TO_SL.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    25 September 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *b;
  int n = 5;
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8TO_SL_TEST\n";
  cout << "  R8TO_SL solves a Toeplitz system.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
//
//  Set the matrix.
//
  a = r8to_random ( n, seed );

  r8to_print ( n, a, "  The Toeplitz matrix:" );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( n );
//
//  Compute the corresponding right hand side.
//
  b = r8to_mv ( n, a, x );
//
//  Solve the linear system.
//
  delete [] x;
  x = r8to_sl ( n, a, b );

  r8vec_print ( n, x, "  Solution:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

void r8to_slt_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8TO_SLT_TEST tests R8TO_SLT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    25 September 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *b;
  int n = 5;
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8TO_SLT_TEST\n";
  cout << "  R8TO_SLT solves A'*x=b, where A is an R8TO matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
//
//  Set the matrix.
//
  a = r8to_random ( n, seed );

  r8to_print ( n, a, "  The Toeplitz matrix:" );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( n );
//
//  Compute the corresponding right hand side.
//
  b = r8to_mtv ( n, a, x );
//
//  Solve the linear system.
//
  delete [] x;
  x = r8to_slt ( n, a, b );
  r8vec_print ( n, x, "  Solution to transposed system:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

void r8to_to_r8ge_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8TO_TO_R8GE_TEST tests R8TO_TO_R8GE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    27 September 2006
//
//  Author:
//
//    John Burkardt
//
{
  double *a_r8ge;
  double *a_r8to;
  int n;
  int seed;

  cout << "\n";
  cout << "R8TO_TO_R8GE_TEST\n";
  cout << "  R8TO_TO_R8GE converts a matrix from R8TO to R8GE format.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  n = 5;
  seed = 123456789;
  a_r8to = r8to_random ( n, seed );

  r8to_print ( n, a_r8to, "  The R8TO matrix:" );

  a_r8ge = r8to_to_r8ge ( n, a_r8to );

  r8ge_print ( n, n, a_r8ge, "  The R8GE matrix:" );

  delete [] a_r8ge;
  delete [] a_r8to;

  return;
}
//****************************************************************************80

void r8to_zeros_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8TO_ZEROS_TEST tests R8TO_ZEROS.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    27 September 2006
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n = 5;

  cout << "\n";
  cout << "R8TO_ZEROS_TEST\n";
  cout << "  R8TO_ZEROS zeros an R8TO matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r8to_zeros ( n );

  r8to_print ( n, a, "  The R8TO matrix:" );

  delete [] a;

  return;
}
