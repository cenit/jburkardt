# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8blt.hpp"

int main ( );
void r8blt_det_test ( );
void r8blt_indicator_test ( );
void r8blt_mtv_test ( );
void r8blt_mv_test ( );
void r8blt_print_test ( );
void r8blt_print_some_test ( );
void r8blt_random_test ( );
void r8blt_sl_test ( );
void r8blt_slt_test ( );
void r8blt_to_r8ge_test ( );
void r8blt_zeros_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for R8BLT_PRB.
//
//  Discussion:
//
//    R8BLT_PRB tests the R8BLT library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    08 October 2015
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "R8BLT_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the R8BLT library.\n";

  r8blt_det_test ( );
  r8blt_indicator_test ( );
  r8blt_mtv_test ( );
  r8blt_mv_test ( );
  r8blt_print_test ( );
  r8blt_print_some_test ( );
  r8blt_random_test ( );
  r8blt_sl_test ( );
  r8blt_slt_test ( );
  r8blt_to_r8ge_test ( );
  r8blt_zeros_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "R8BLT_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void r8blt_det_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8BLT_DET_TEST tests R8BLT_DET.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    08 October 2015
//
//  Author:
//
//    John Burkardt
//
{
# define ML 3
# define N 10

  double *a;
  double det;
  int seed = 123456789;

  cout << "\n";
  cout << "R8BLT_DET_TEST\n";
  cout << "  R8BLT_DET gets the determinant of an R8BLT matrix;\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
  cout << "  Lower bandwidth ML = " << ML << "\n";

  a = r8blt_random ( N, ML, seed );

  r8blt_print ( N, ML, a, "  The R8BLT matrix:" );

  det = r8blt_det ( N, ML, a );

  cout << "\n";
  cout << "  Determinant = " << det << "\n";

  delete [] a;

  return;
# undef ML
# undef N
}
//****************************************************************************80

void r8blt_indicator_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8BLT_INDICATOR_TEST tests R8BLT_INDICATOR.
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
  int n = 6;
  int ml = 2;

  cout << "\n";
  cout << "R8BLT_INDICATOR_TEST\n";
  cout << "  R8BLT_INDICATOR sets up an R8BLT indicator matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
  cout << "  Lower bandwidth ML = " << ml << "\n";

  a = r8blt_indicator ( n, ml );

  r8blt_print ( n, ml, a, "  The R8BLT indicator matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8blt_mtv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8BLT_MTV_TEST tests R8BLT_MTV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 October 2015
//
//  Author:
//
//    John Burkardt
//
{
# define ML 3
# define N 10

  double *a;
  double *b;
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8BLT_MTV_TEST\n";
  cout << "  R8BLT_MTV computes A'*x, where A is an R8BLT matrix;\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
  cout << "  Lower bandwidth ML = " << ML << "\n";

  a = r8blt_random ( N, ML, seed );

  r8blt_print ( N, ML, a, "  The R8BLT matrix:" );
//
//  Set X.
//
  x = r8vec_indicator1_new ( N );
  r8vec_print ( N, x, "  x:" );
//
//  Compute b=A'*x.
//
  b = r8blt_mtv ( N, ML, a, x );
  r8vec_print ( N, b, "  b = A'*x:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
# undef ML
# undef N
}
//****************************************************************************80

void r8blt_mv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8BLT_MV_TEST tests R8BLT_MV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 October 2015
//
//  Author:
//
//    John Burkardt
//
{
# define ML 3
# define N 10

  double *a;
  double *b;
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8BLT_MV_TEST\n";
  cout << "  R8BLT_MV computes A*x, where A is an R8BLT matrix;\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
  cout << "  Lower bandwidth ML = " << ML << "\n";

  a = r8blt_random ( N, ML, seed );

  r8blt_print ( N, ML, a, "  The R8BLT matrix:" );
//
//  Set X.
//
  x = r8vec_indicator1_new ( N );
  r8vec_print ( N, x, "  x:" );
//
//  Compute b=A*x.
//
  b = r8blt_mv ( N, ML, a, x );
  r8vec_print ( N, b, "  b = A*x:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
# undef ML
# undef N
}
//****************************************************************************80

void r8blt_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8BLT_PRINT_TEST tests R8BLT_PRINT.
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
  int n = 6;
  int ml = 2;

  cout << "\n";
  cout << "R8BLT_PRINT_TEST\n";
  cout << "  R8BLT_PRINT prints an R8BLT matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
  cout << "  Lower bandwidth ML = " << ml << "\n";

  a = r8blt_indicator ( n, ml );

  r8blt_print ( n, ml, a, "  The R8BLT matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8blt_print_some_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8BLT_PRINT_SOME_TEST tests R8BLT_PRINT_SOME.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 October 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n = 10;
  int ml = 3;

  cout << "\n";
  cout << "R8BLT_PRINT_SOME_TEST\n";
  cout << "  R8BLT_PRINT_SOME prints some of an R8BLT matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
  cout << "  Lower bandwidth ML = " << ml << "\n";

  a = r8blt_indicator ( n, ml );

  r8blt_print_some ( n, ml, a, 1, 2, 4, 4, "  Rows 1:4, Cols 2:4:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8blt_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8BLT_RANDOM_TEST tests R8BLT_RANDOM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 October 2015
//
//  Author:
//
//    John Burkardt
//
{
# define ML 3
# define N 10

  double *a;
  int seed = 123456789;

  cout << "\n";
  cout << "R8BLT_RANDOM_TEST\n";
  cout << "  R8BLT_RANDOM randomizes an R8BLT matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
  cout << "  Lower bandwidth ML = " << ML << "\n";

  a = r8blt_random ( N, ML, seed );

  r8blt_print ( N, ML, a, "  The R8BLT matrix:" );

  delete [] a;

  return;
# undef ML
# undef N
}
//****************************************************************************80

void r8blt_sl_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R89BLT_SL_TEST tests R8BLT_SL
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 October 2015
//
//  Author:
//
//    John Burkardt
//
{
# define ML 3
# define N 10

  double *a;
  double *b;
  int i;
  int j;
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8BLT_SL_TEST\n";
  cout << "  R8BLT_SL solves A*x=b, where A is an R8BLT matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
  cout << "  Lower bandwidth ML = " << ML << "\n";

  a = r8blt_random ( N, ML, seed );

  r8blt_print ( N, ML, a, "  The R8BLT matrix:" );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( N );
//
//  Compute the corresponding right hand side.
//
  b = r8blt_mv ( N, ML, a, x );
  r8vec_print ( N, b, "  The right hand side:" );
//
//  Solve the linear system.
//
  delete [] x;
  x = r8blt_sl ( N, ML, a, b );
  r8vec_print ( N, x, "  Solution to A*x=b:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
# undef ML
# undef N
}
//****************************************************************************80

void r8blt_slt_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8BLT_SLT_TEST tests R8BLT_SLT
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 October 2015
//
//  Author:
//
//    John Burkardt
//
{
# define ML 3
# define N 10

  double *a;
  double *b;
  int i;
  int j;
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8BLT_SLT_TEST\n";
  cout << "  R8BLT_SLT solves A'*x=b, where A is an R8BLT matrix;\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
  cout << "  Lower bandwidth ML = " << ML << "\n";

  a = r8blt_random ( N, ML, seed );

  r8blt_print ( N, ML, a, "  The R8BLT matrix:" );

  x = r8vec_indicator1_new ( N );
//
//  Compute the corresponding right hand side.
//  
  b = r8blt_mtv ( N, ML, a, x );
  r8vec_print ( N, b, "  The right hand side:" );
//
//  Solve the linear system.
//
  delete [] x;
  x = r8blt_slt ( N, ML, a, b );
  r8vec_print ( N, x, "  Solution to A'*x=b:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
# undef ML
# undef N
}
//****************************************************************************80

void r8blt_to_r8ge_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8BLT_TO_R8GE_TEST tests R8BLT_TO_R8GE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    04 October 2015
//
//  Author:
//
//    John Burkardt
//
{
# define ML 3
# define N 10

  double *a_r8blt;
  double *a_r8ge;
  int seed = 123456789;

  cout << "\n";
  cout << "R8BLT_TO_R8GE_TEST\n";
  cout << "  R8BLT_TO_R8GE converts a matrix from R8BLT to R8GE format;\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
  cout << "  Lower bandwidth ML = " << ML << "\n";

  a_r8blt = r8blt_random ( N, ML, seed );

  r8blt_print ( N, ML, a_r8blt, "  The R8BLT matrix:" );

  a_r8ge = r8blt_to_r8ge ( N, ML, a_r8blt );

  r8ge_print ( N, N, a_r8ge, "  The R8GE matrix:" );

  delete [] a_r8blt;
  delete [] a_r8ge;

  return;
# undef ML
# undef N
}
//****************************************************************************80

void r8blt_zeros_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8BLT_ZEROS_TEST tests R8BLT_ZEROS.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 October 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n = 6;
  int ml = 2;

  cout << "\n";
  cout << "R8BLT_ZEROS_TEST\n";
  cout << "  R8BLT_ZEROS zeros an R8BLT matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
  cout << "  Lower bandwidth ML = " << ml << "\n";

  a = r8blt_zeros ( n, ml );

  r8blt_print ( n, ml, a, "  The R8BLT matrix:" );

  delete [] a;

  return;
}

