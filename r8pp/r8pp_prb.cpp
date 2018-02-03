# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8pp.hpp"

int main ( );
void r8pp_det_test ( );
void r8pp_dif2_test ( );
void r8pp_fa_test ( );
void r8pp_indicator_test ( );
void r8pp_mv_test ( );
void r8pp_print_test ( );
void r8pp_print_some_test ( );
void r8pp_random_test ( );
void r8pp_sl_test ( );
void r8pp_to_r8ge_test ( );
void r8pp_zeros_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for LINPLUS_PRB.
//
//  Discussion:
//
//    LINPLUS_PRB tests the LINPLUS library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    18 June 2016
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "LINPLUS_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the LINPLUS library.\n";

  r8pp_det_test ( );
  r8pp_dif2_test ( );
  r8pp_fa_test ( );
  r8pp_indicator_test ( );
  r8pp_mv_test ( );
  r8pp_print_test ( );
  r8pp_print_some_test ( );
  r8pp_random_test ( );
  r8pp_sl_test ( );
  r8pp_to_r8ge_test ( );
  r8pp_zeros_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "LINPLUS_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void r8pp_det_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PP_DET_TEST tests R8PP_DET.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    16 June 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double det;
  int n = 5;
  double *r;

  cout << "\n";
  cout << "R8PP_DET_TEST\n";
  cout << "  R8PP_DET computes the determinant of an R8PP matrix\n";
  cout << "  that was factored by R8PP_FA.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r8pp_dif2 ( n );
  r8pp_print ( n, a, "  The R8PP second difference matrix:" );

  r = r8pp_fa ( n, a );

  det = r8pp_det ( n, r );

  cout << "\n";
  cout << "  Computed determinant = " << det << "\n";
  cout << "  Exact determinant = " << ( double ) ( n + 1 ) << "\n";

  delete [] a;
  delete [] r;
 
  return;
}
//****************************************************************************80

void r8pp_dif2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PP_DIF2_TEST tests R8PP_DIF2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    15 June 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n = 5;

  cout << "\n";
  cout << "R8PP_DIF2_TEST\n";
  cout << "  R8PP_DIF2 sets up an R8PP second difference matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r8pp_dif2 ( n );

  r8pp_print ( n, a, "  The R8PP second difference matrix:" );

  delete [] a;
 
  return;
}
//****************************************************************************80

void r8pp_fa_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PP_FA_TEST tests R8PP_FA.
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
# define N 5

  double *a;
  double *b;
  int i;
  int info;
  int j;
  double *r;
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8PP_FA_TEST\n";
  cout << "  R8PP_FA factors an R8PP system,\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
//
//  Set the matrix.
//
  a = r8pp_random ( N, seed );

  r8pp_print ( N, a, "  The R8PP matrix:" );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( N );

  r8vec_print ( N, x, "  The desired solution:" );
//
//  Compute the corresponding right hand side.
//
  b = r8pp_mv ( N, a, x );

  r8vec_print ( N, b, "  The right hand side:" );
//
//  Factor the matrix.
//
  r = r8pp_fa ( N, a );

  if ( r == NULL )
  {
    cout << "\n";
    cout << "R8PP_FA_TEST - Fatal error!\n";
    cout << "  R8PP_FA declares the matrix is singular!\n";
    return;
  }
  cout << "\n";
  cout << "  The R8PP matrix has been factored.\n";
//
//  Solve the linear system.
//
  delete [] x;
  x = r8pp_sl ( N, r, b );
 
  r8vec_print ( N, x, "  Solution:" );

  delete [] a;
  delete [] b;
  delete [] r;
  delete [] x;

  return;
# undef N
}
//****************************************************************************80

void r8pp_indicator_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PP_INDICATOR_TEST tests R8PP_INDICATOR.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    01 August 2006
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n = 5;

  cout << "\n";
  cout << "R8PP_INDICATOR_TEST\n";
  cout << "  R8PP_INDICATOR sets up an R8PP indicator matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r8pp_indicator ( n );

  r8pp_print ( n, a, "  The R8PP indicator matrix:" );
 
  delete [] a;

  return;
}
//****************************************************************************80

void r8pp_mv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PP_MV_TEST tests R8PP_MV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    16 June 2016
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
  cout << "R8PP_MV_TEST\n";
  cout << "  R8PP_MV computes b=A*x, where A is an R8PP matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r8pp_indicator ( n );
  r8pp_print ( n, a, "  The R8PP matrix A:" );
 
  x = r8vec_indicator1_new ( n );
  r8vec_print ( n, x, "  The vector x:" );

  b = r8pp_mv ( n, a, x );
  r8vec_print ( n, b, "  The product b=A*x:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

void r8pp_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PP_PRINT_TEST tests R8PP_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    16 June 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n = 5;

  cout << "\n";
  cout << "R8PP_PRINT_TEST\n";
  cout << "  R8PP_PRINT prints an R8PP matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r8pp_indicator ( n );

  r8pp_print ( n, a, "  The R8PP matrix:" );
 
  delete [] a;

  return;
}
//****************************************************************************80

void r8pp_print_some_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PP_PRINT_SOME_TEST tests R8PP_PRINT_SOME.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    16 June 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n = 10;

  cout << "\n";
  cout << "R8PP_PRINT_SOME_TEST\n";
  cout << "  R8PP_PRINT_SOME prints some of an R8PP matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r8pp_indicator ( n );

  r8pp_print_some ( n, a, 1, 2, 5, 4, "  Rows 1-5, Cols 2-4:" );
 
  delete [] a;

  return;
}
//****************************************************************************80

void r8pp_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PP_RANDOM_TEST tests R8PP_RANDOM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    01 August 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 5

  double *a;
  double *b;
  int seed = 123456789;

  cout << "\n";
  cout << "R8PP_RANDOM_TEST\n";
  cout << "  R8PP_RANDOM, compute a random positive definite\n";
  cout << "  symmetric packed matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
//
//  Set the matrix.
//
  a = r8pp_random ( N, seed );

  r8pp_print ( N, a, "  The matrix (printed by R8PP_PRINT):" );
 
  b = r8pp_to_r8ge ( N, a );

  r8ge_print ( N, N, b, "  The random R8PP matrix (printed by R8GE_PRINT):" );

  delete [] a;
  delete [] b;

  return;
# undef N
}
//****************************************************************************80

void r8pp_sl_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PP_SL_TEST tests R8PP_SL.
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
# define N 5

  double *a;
  double *b;
  int i;
  int info;
  int j;
  double *r;
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8PP_SL_TEST\n";
  cout << "  R8PP_SL solves a linear system factored by R8PP_FA.\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
//
//  Set the matrix.
//
  a = r8pp_random ( N, seed );

  r8pp_print ( N, a, "  The R8PP matrix:" );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( N );

  r8vec_print ( N, x, "  The desired solution:" );
//
//  Compute the corresponding right hand side.
//
  b = r8pp_mv ( N, a, x );

  r8vec_print ( N, b, "  The right hand side:" );
//
//  Factor the matrix.
//
  r = r8pp_fa ( N, a );

  if ( r == NULL )
  {
    cout << "\n";
    cout << "R8PP_SL_TEST - Fatal error!\n";
    cout << "  R8PP_FA declares the matrix is singular!\n";
    return;
  }
  cout << "\n";
  cout << "  The R8PP matrix has been factored.\n";
//
//  Solve the linear system.
//
  delete [] x;
  x = r8pp_sl ( N, r, b );
 
  r8vec_print ( N, x, "  Solution:" );

  delete [] a;
  delete [] b;
  delete [] r;
  delete [] x;

  return;
# undef N
}
//****************************************************************************80

void r8pp_to_r8ge_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PP_TO_R8GE_TEST tests R8PP_TO_R8GE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    01 August 2006
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
  cout << "R8PP_TO_R8GE_TEST\n";
  cout << "  R8PP_TO_R8GE converts an R8PP matrix to R8GE format.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r8pp_indicator ( n );
  r8pp_print ( n, a, "  The R8PP matrix:" );
 
  a_r8ge = r8pp_to_r8ge ( n, a );
  r8ge_print ( n, n, a_r8ge, "  The R8GE matrix:" );

  delete [] a;
  delete [] a_r8ge;

  return;
}
//****************************************************************************80

void r8pp_zeros_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PP_ZEROS_TEST tests R8PP_ZEROS.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    15 June 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n = 5;

  cout << "\n";
  cout << "R8PP_ZEROS_TEST\n";
  cout << "  R8PP_ZEROS sets up a zero R8PP matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r8pp_zeros ( n );

  r8pp_print ( n, a, "  The R8PP zero matrix:" );

  delete [] a;
 
  return;
}
