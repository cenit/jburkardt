# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8sto.hpp"

int main ( );
void r8sto_dif2_test ( );
void r8sto_indicator_test ( );
void r8sto_inverse_test ( );
void r8sto_mv_test ( );
void r8sto_print_test ( );
void r8sto_print_some_test ( );
void r8sto_random_test ( );
void r8sto_sl_test ( );
void r8sto_to_r8ge_test ( );
void r8sto_yw_sl_test ( );
void r8sto_zeros_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for R8STO_PRB.
//
//  Discussion:
//
//    R8STO_PRB tests the R8STO library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    28 September 2015
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "R8STO_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the R8STO library.\n";

  r8sto_dif2_test ( );
  r8sto_indicator_test ( );
  r8sto_inverse_test ( );
  r8sto_mv_test ( );
  r8sto_print_test ( );
  r8sto_print_some_test ( );
  r8sto_random_test ( );
  r8sto_sl_test ( );
  r8sto_to_r8ge_test ( );
  r8sto_yw_sl_test ( );
  r8sto_zeros_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "R8STO_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void r8sto_dif2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8STO_DIF2_TEST tests R8STO_DIF2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    28 September 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n = 5;

  cout << "\n";
  cout << "R8STO_DIF2_TEST\n";
  cout << "  R8STO_DIF2 sets the second difference as an R8STO matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r8sto_dif2 ( n );

  r8sto_print ( n, a, "  The R8STO matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8sto_indicator_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8STO_INDICATOR_TEST tests R8STO_INDICATOR.
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
  cout << "R8STO_INDICATOR_TEST\n";
  cout << "  R8STO_INDICATOR sets up an R8STO indicator matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r8sto_indicator ( n );

  r8sto_print ( n, a, "  The R8STO indicator matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8sto_inverse_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8STO_INVERSE_TEST tests R8STO_INVERSE.
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
# define N 3

  double a[N] = { 4.0, 2.0, 0.8 };
  double *a2;
  double *b;
  double *c;

  cout << "\n";
  cout << "R8STO_INVERSE_TEST\n";
  cout << "  R8STO_INVERSE computes the inverse of a positive\n";
  cout << "  definite symmetric Toeplitz matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";

  r8sto_print ( N, a, "  The symmetric Toeplitz matrix A:" );

  b = r8sto_inverse ( N, a );

  r8ge_print ( N, N, b, "  The inverse matrix B:" );

  a2 = r8sto_to_r8ge ( N, a );

  c = r8ge_mm ( N, a2, b );

  r8ge_print ( N, N, c, "  The product C = A * B:" );

  delete [] a2;
  delete [] b;
  delete [] c;

  return;
# undef N
}
//****************************************************************************80

void r8sto_mv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8STO_MV_TEST tests R8STO_MV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    28 September 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *b;
  int n = 5;
  int seed;
  double *x;

  cout << "\n";
  cout << "R8STO_MV_TEST\n";
  cout << "  R8STO_MV computes b=A*x, where A is an R8STO matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  seed = 123456789;
  a = r8sto_random ( n, seed );
  r8sto_print ( n, a, "  The R8STO matrix:" );

  x = r8vec_indicator1_new ( n );
  r8vec_print ( n, x, "  x:" );

  b = r8sto_mv ( n, a, x );
  r8vec_print ( n, x, "  b=A*x" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

void r8sto_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8STO_PRINT_TEST tests R8STO_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    28 September 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n = 5;

  cout << "\n";
  cout << "R8STO_PRINT_TEST\n";
  cout << "  R8STO_PRINT prints an R8STO matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r8sto_indicator ( n );

  r8sto_print ( n, a, "  The R8STO matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8sto_print_some_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8STO_PRINT_SOME_TEST tests R8STO_PRINT_SOME.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    28 September 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n = 5;

  cout << "\n";
  cout << "R8STO_PRINT_SOME_TEST\n";
  cout << "  R8STO_PRINT_SOME prints some of an R8STO matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r8sto_indicator ( n );

  r8sto_print_some ( n, a, 1, 0, 4, 2, "  Rows 1:4, Cols 0:2" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8sto_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8STO_RANDOM_TEST tests R8STO_RANDOM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    28 September 2015
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
  cout << "R8STO_RANDOM_TEST\n";
  cout << "  R8STO_RANDOM randomizes an R8STO matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  seed = 123456789;
  a = r8sto_random ( n, seed );

  r8sto_print ( n, a, "  The R8STO matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8sto_sl_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8STO_SL_TEST tests R8STO_SL.
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
# define N 3

  double a[N] = { 1.0, 0.5, 0.2 };
  double *ax;
  double b[N] = { 4.0, -1.0, 3.0 };
  double *x;

  cout << "\n";
  cout << "R8STO_SL_TEST\n";
  cout << "  R8STO_SL solves a positive definite symmetric Toeplitz system.\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";

  r8sto_print ( N, a, "  The symmetric Toeplitz matrix A:" );

  r8vec_print ( N, b, "  The right hand side vector b:" );

  x = r8sto_sl ( N, a, b );

  r8vec_print ( N, x, "  The computed solution x:" );

  ax = r8sto_mv ( N, a, x );

  r8vec_print ( N, ax, "  The product vector A * x:" );

  delete [] ax;
  delete [] x;

  return;
# undef N
}
//****************************************************************************80

void r8sto_to_r8ge_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8STO_TO_R8GE_TEST tests R8STO_TO_R8GE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    28 September 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a_r8ge;
  double *a_r8sto;
  int n = 5;
  int seed;

  cout << "\n";
  cout << "R8STO_TO_R8GE_TEST\n";
  cout << "  R8STO_TO_R8GE converts a matrix from R8STO to R8GE format.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  seed = 123456789;
  a_r8sto = r8sto_random ( n, seed );
  r8sto_print ( n, a_r8sto, "  The R8STO matrix:" );

  a_r8ge = r8sto_to_r8ge ( n, a_r8sto );
  r8ge_print ( n, n, a_r8ge, "  The R8GE matrix:" );

  delete [] a_r8ge;
  delete [] a_r8sto;

  return;
}
//****************************************************************************80

void r8sto_yw_sl_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8STO_YW_SL_TEST tests R8STO_YW_SL.
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
# define N 3

  double a[N];
  double *b;
  int i;
  int job;
  double r[N+1] = { 1.0, 0.5, 0.2, 0.1 };
  double *x;

  for ( i = 0; i < N; i++ )
  {
    a[i] = r[i];
  }

  cout << "\n";
  cout << "R8STO_YW_SL_TEST\n";
  cout << "  R8STO_YW_SL solves the Yule-Walker equations for a\n";
  cout << "  symmetric Toeplitz system.\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";

  r8sto_print ( N, a, "  The symmetric Toeplitz matrix:" );

  b = new double[N];
  for ( i = 0; i < N; i++ )
  {
    b[i] = -r[i+1];
  }

  r8vec_print ( N, b, "  The right hand side, B:" );

  for ( i = 0; i < N; i++ )
  {
    b[i] = -b[i];
  }

  x = r8sto_yw_sl ( N, b );

  r8vec_print ( N, x, "  The computed solution, X:" );

  delete [] b;
  b = r8sto_mv ( N, a, x );

  r8vec_print ( N, b, "  The product A*x:" );

  delete [] b;
  delete [] x;

  return;
# undef N
}
//****************************************************************************80

void r8sto_zeros_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8STO_ZEROS_TEST tests R8STO_ZEROS.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    28 September 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n = 5;

  cout << "\n";
  cout << "R8STO_ZEROS_TEST\n";
  cout << "  R8STO_ZEROS zeros an R8STO indicator matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r8sto_zeros ( n );

  r8sto_print ( n, a, "  The R8STO matrix:" );

  delete [] a;

  return;
}
