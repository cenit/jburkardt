# include <cmath>
# include <cstdlib>
# include <ctime>
# include <fstream>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8but.hpp"

int main ( );
void test05 ( );
void r8but_det_test ( );
void r8but_indicator_test ( );
void r8but_mtv_test ( );
void r8but_mv_test ( );
void r8but_print_test ( );
void r8but_print_some_test ( );
void r8but_random_test ( );
void r8but_sl_test ( );
void r8but_slt_test ( );
void r8but_to_r8ge_test ( );
void r8but_zeros_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for R8BUT_PRB.
//
//  Discussion:
//
//    R8BUT_PRB tests R8BUT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    12 October 2015
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "R8BUT_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the R8BUT library.\n";

  r8but_det_test ( );
  r8but_indicator_test ( );
  r8but_mtv_test ( );
  r8but_mv_test ( );
  r8but_print_test ( );
  r8but_print_some_test ( );
  r8but_random_test ( );
  r8but_sl_test ( );
  r8but_slt_test ( );
  r8but_to_r8ge_test ( );
  r8but_zeros_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "R8BUT_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void r8but_det_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8BUT_DET_TEST tests R8BUT_DET.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    13 October 2015
//
//  Author:
//
//    John Burkardt
//
{
# define MU 3
# define N 5

  double *a;
  double det;
  int seed = 123456789;

  cout << "\n";
  cout << "R8BUT_DET\n";
  cout << "  R8BUT_DET computes the determinant of an R8BUT matrix.\n";
  cout << "\n";
  cout << "  Matrix order N =     " << N << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";

  a = r8but_random ( N, MU, seed );
  r8but_print ( N, MU, a, "  The R8BUT matrix:" );

  det = r8but_det ( N, MU, a );
  cout << "\n";
  cout << "  Determinant = " << det << "\n";

  delete [] a;

  return;
# undef MU
# undef N
}
//****************************************************************************80

void r8but_indicator_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8BUT_INDICATOR_TEST tests R8BUT_INDICATOR.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    13 October 2015
//
//  Author:
//
//    John Burkardt
//
{
# define N 5
# define MU 3

  double *a;

  cout << "\n";
  cout << "R8BUT_INDICATOR_TEST\n";
  cout << "  R8BUT_INDICATOR sets an R8BUT indicator matrix.\n";
  cout << "\n";
  cout << "  Matrix order N =     " << N << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";
//
//  Set the matrix.
//
  a = r8but_indicator ( N, MU );

  r8but_print ( N, MU, a, "  The R8BUT matrix:" );

  delete [] a;

  return;
# undef N
# undef MU
}
//****************************************************************************80

void r8but_mtv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8BUT_MTV_TEST tests R8BUT_MTV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    13 October 2015
//
//  Author:
//
//    John Burkardt
//
{
# define MU 3
# define N 10

  double *a;
  double *b;
  int i;
  int j;
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8BUT_MTV_TEST\n";
  cout << "  R8BUT_MTV computes b=A'*x, where A is an R8BUT matrix;\n";
  cout << "\n";
  cout << "  Matrix order N =     " << N << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";

  a = r8but_random ( N, MU, seed );
  r8but_print ( N, MU, a, "  The R8BUT matrix:" );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( N );
  r8vec_print ( N, x, "  x:" );
//
//  Compute the corresponding right hand side.
//
  b = r8but_mtv ( N, MU, a, x );
  r8vec_print ( N, b, "  b=A'*x:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
# undef MU
# undef N
}
//****************************************************************************80

void r8but_mv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8BUT_MV_TEST tests R8BUT_MV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    13 October 2015
//
//  Author:
//
//    John Burkardt
//
{
# define MU 3
# define N 10

  double *a;
  double *b;
  int i;
  int j;
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8BUT_MV_TEST\n";
  cout << "  R8BUT_MV computes b=A*x, where A is an R8BUT matrix;\n";
  cout << "\n";
  cout << "  Matrix order N =     " << N << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";

  a = r8but_random ( N, MU, seed );
  r8but_print ( N, MU, a, "  The R8BUT matrix:" );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( N );
  r8vec_print ( N, x, "  x:" );
//
//  Compute the corresponding right hand side.
//
  b = r8but_mv ( N, MU, a, x );
  r8vec_print ( N, b, "  b=A*x:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
# undef MU
# undef N
}
//****************************************************************************80

void r8but_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8BUT_PRINT_TEST tests R8BUT_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    13 October 2015
//
//  Author:
//
//    John Burkardt
//
{
# define N 5
# define MU 3

  double *a;

  cout << "\n";
  cout << "R8BUT_PRINT_TEST\n";
  cout << "  R8BUT_PRINT prints an R8BUT matrix.\n";
  cout << "\n";
  cout << "  Matrix order N =     " << N << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";
//
//  Set the matrix.
//
  a = r8but_indicator ( N, MU );

  r8but_print ( N, MU, a, "  The R8BUT matrix:" );

  delete [] a;

  return;
# undef N
# undef MU
}
//****************************************************************************80

void r8but_print_some_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8BUT_PRINT_SOME_TEST tests R8BUT_PRINT_SOME.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    13 October 2015
//
//  Author:
//
//    John Burkardt
//
{
# define N 5
# define MU 3

  double *a;

  cout << "\n";
  cout << "R8BUT_PRINT_SOME_TEST\n";
  cout << "  R8BUT_PRINT_SOME prints some of an R8BUT matrix.\n";
  cout << "\n";
  cout << "  Matrix order N =     " << N << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";
//
//  Set the matrix.
//
  a = r8but_indicator ( N, MU );

  r8but_print_some ( N, MU, a, 1, 2, 4, 4, "  Rows 1:4, Cols 2:4:" );

  delete [] a;

  return;
# undef N
# undef MU
}
//****************************************************************************80

void r8but_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8BUT_RANDOM_TEST tests R8BUT_RANDOM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    13 October 2015
//
//  Author:
//
//    John Burkardt
//
{
# define MU 3
# define N 5

  double *a;
  int seed = 123456789;

  cout << "\n";
  cout << "R8BUT_RANDOM\n";
  cout << "  R8BUT_RANDOM sets a random R8BUT matrix.\n";
  cout << "\n";
  cout << "  Matrix order N =     " << N << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";

  a = r8but_random ( N, MU, seed );

  r8but_print ( N, MU, a, "  The R8BUT matrix:" );

  delete [] a;

  return;
# undef MU
# undef N
}
//****************************************************************************80

void r8but_sl_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8BUT_SL_TEST tests R8BUT_SL.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    13 October 2015
//
//  Author:
//
//    John Burkardt
//
{
# define MU 3
# define N 10

  double *a;
  double *b;
  int i;
  int j;
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8BUT_SL_TEST\n";
  cout << "  R8BUT_SL solves A*x=b, where A is an R8BUT matrix;\n";
  cout << "\n";
  cout << "  Matrix order N =     " << N << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";

  a = r8but_random ( N, MU, seed );
  r8but_print ( N, MU, a, "  The R8BUT matrix:" );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( N );
  r8vec_print ( N, x, "  x:" );
//
//  Compute the corresponding right hand side.
//
  b = r8but_mv ( N, MU, a, x );
  r8vec_print ( N, b, "  b=A*x" );
//
//  Solve the linear system.
//
  delete [] x;
  x = r8but_sl ( N, MU, a, b );
  r8vec_print ( N, x, "  x:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
# undef MU
# undef N
}
//****************************************************************************80

void r8but_slt_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8BUT_SLT_TEST tests R8BUT_SLT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    13 October 2015
//
//  Author:
//
//    John Burkardt
//
{
# define MU 3
# define N 10

  double *a;
  double *b;
  int i;
  int j;
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8BUT_SLT_TEST\n";
  cout << "  R8BUT_SLT solves A'*x=b, where A is an R8BUT matrix;\n";
  cout << "\n";
  cout << "  Matrix order N =     " << N << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";

  a = r8but_random ( N, MU, seed );
  r8but_print ( N, MU, a, "  The R8BUT matrix:" );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( N );
  r8vec_print ( N, x, "  x:" );
//
//  Compute the corresponding right hand side.
//
  b = r8but_mtv ( N, MU, a, x );
  r8vec_print ( N, b, "  b=A'*x" );
//
//  Solve the linear system.
//
  delete [] x;
  x = r8but_slt ( N, MU, a, b );
  r8vec_print ( N, x, "  x:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
# undef MU
# undef N
}
//****************************************************************************80

void r8but_to_r8ge_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8BUT_TO_R8GE_TEST tests R8BUT_TO_R8GE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    13 October 2015
//
//  Author:
//
//    John Burkardt
//
{
# define MU 3
# define N 5

  double *a_r8but;
  double *a_r8ge;
  int seed = 123456789;

  cout << "\n";
  cout << "R8BUT_TO_R8GE\n";
  cout << "  R8BUT_TO_R8GE converts a matrix from R8BUT to R8GE format.\n";
  cout << "\n";
  cout << "  Matrix order N =     " << N << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";

  a_r8but = r8but_random ( N, MU, seed );

  r8but_print ( N, MU, a_r8but, "  The R8BUT matrix:" );

  a_r8ge = r8but_to_r8ge ( N, MU, a_r8but );

  r8ge_print ( N, N, a_r8ge, "  The R8GE matrix:" );

  delete [] a_r8but;
  delete [] a_r8ge;

  return;
# undef MU
# undef N
}
//****************************************************************************80

void r8but_zeros_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8BUT_ZEROS_TEST tests R8BUT_ZEROS.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    13 October 2015
//
//  Author:
//
//    John Burkardt
//
{
# define MU 3
# define N 5

  double *a;
  int seed = 123456789;

  cout << "\n";
  cout << "R8BUT_ZEROS\n";
  cout << "  R8BUT_ZEROS zeros an R8BUT matrix.\n";
  cout << "\n";
  cout << "  Matrix order N =     " << N << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";

  a = r8but_zeros ( N, MU );

  r8but_print ( N, MU, a, "  The R8BUT matrix:" );

  delete [] a;

  return;
# undef MU
# undef N
}
