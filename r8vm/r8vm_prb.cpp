# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8vm.hpp"

int main ( );
void r8ge_to_r8vm_test ( );
void r8vm_det_test ( );
void r8vm_indicator_test ( );
void r8vm_mtv_test ( );
void r8vm_mv_test ( );
void r8vm_print_test ( );
void r8vm_print_some_test ( );
void r8vm_random_test ( );
void r8vm_sl_new_test ( );
void r8vm_slt_new_test ( );
void r8vm_to_r8ge_test ( );
void r8vm_zeros_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for R8VM_PRB.
//
//  Discussion:
//
//    R8VM_PRB tests the R8VM library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    26 August 2015
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "R8VM_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the R8VM library.\n";

  r8ge_to_r8vm_test ( );

  r8vm_det_test ( );
  r8vm_indicator_test ( );
  r8vm_mtv_test ( );
  r8vm_mv_test ( );
  r8vm_print_test ( );
  r8vm_print_some_test ( );
  r8vm_random_test ( );
  r8vm_sl_new_test ( );
  r8vm_slt_new_test ( );
  r8vm_to_r8ge_test ( );
  r8vm_zeros_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "R8VM_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void r8ge_to_r8vm_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_TO_R8VM_TEST tests R8GE_TO_R8VM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 August 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a_ge;
  double *a_vm;
  int m = 5;
  int n = 4;
  int seed = 123456789;

  cout << "\n";
  cout << "R8GE_TO_R8VM_TEST\n";
  cout << "  R8GE_TO_R8VM converts an R8GE matrix to R8VM format.\n";

  a_ge = r8ge_random ( m, n, seed );

  r8ge_print ( m, n, a_ge, "  The random R8GE matrix:" );

  a_vm = r8ge_to_r8vm ( m, n, a_ge );

  r8vm_print ( m, n, a_vm, "  The R8VM matrix" );

  delete [] a_ge;
  delete [] a_vm;

  return;
}
//****************************************************************************80

void r8vm_det_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VM_DET_TEST tests R8VM_DET.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    18 August 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double det1;
  double det2;
  int n = 5;

  cout << "\n";
  cout << "R8VM_DET_TEST\n";
  cout << "  R8VM_DET, determinant of an R8VM matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
//
//  Set the matrix.
//
  a = r8vm_indicator ( n, n );

  r8vm_print ( n, n, a, "  The R8VM matrix:" );
//
//  Compute the determinant.
//
  det1 = r8vm_det ( n, a );
//
//  Compare to exact value.
//
  det2 = r8vm_indicator_det ( n );

  cout << "\n";
  cout << "  R8VM_DET    = " << det1 << "\n";
  cout << "  Exact value = " << det2 << "\n";

  delete [] a;

  return;
}
//****************************************************************************80

void r8vm_indicator_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VM_INDICATOR_TEST tests R8VM_INDICATOR.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 August 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int m = 5;
  int n = 4;

  cout << "\n";
  cout << "R8VM_INDICATOR_TEST\n";
  cout << "  R8VM_INDICATOR sets an R8VM indicator matrix.\n";

  a = r8vm_indicator ( m, n );

  r8vm_print ( m, n, a, "  The R8VM matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8vm_mtv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VM_MTV_TEST tests R8VM_MTV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    26 August 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *b;
  int m = 5;
  int n = 4;
  int seed;
  double *x;

  cout << "\n";
  cout << "R8VM_MTV_TEST\n";
  cout << "  R8VM_MTV computes a product b=A'*x where A is in R8VM format.\n";

  seed = 123456789;
  a = r8vm_random ( m, n, seed );

  x = r8vec_indicator1_new ( m );

  b = r8vm_mtv ( m, n, a, x );

  r8vec_print ( n, b, "  Vector b=A'*x:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

void r8vm_mv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VM_MV_TEST tests R8VM_MV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    26 August 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *b;
  int m = 5;
  int n = 4;
  int seed;
  double *x;

  cout << "\n";
  cout << "R8VM_MV_TEST\n";
  cout << "  R8VM_MV computes a product b=A*x where A is in R8VM format.\n";

  seed = 123456789;
  a = r8vm_random ( m, n, seed );

  x = r8vec_indicator1_new ( n );

  b = r8vm_mv ( m, n, a, x );

  r8vec_print ( m, b, "  Vector b=A*x:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

void r8vm_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VM_PRINT_TEST tests R8VM_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    26 August 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int m = 5;
  int n = 4;

  cout << "\n";
  cout << "R8VM_PRINT_TEST\n";
  cout << "  R8VM_PRINT prints an R8VM marix.\n";

  a = r8vm_indicator ( m, n );

  r8vm_print ( m, n, a, "  The matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8vm_print_some_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VM_PRINT_SOME_TEST tests R8VM_PRINT_SOME.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    26 August 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int m = 5;
  int n = 4;

  cout << "\n";
  cout << "R8VM_PRINT_SOME_TEST\n";
  cout << "  R8VM_PRINT_SOME prints some of an R8VM marix.\n";

  a = r8vm_indicator ( m, n );

  r8vm_print_some ( m, n, a, 2, 2, 5, 4, "  Rows 2-5, Cols 2:4" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8vm_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VM_RANDOM_TEST tests R8VM_RANDOM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 August 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int m = 5;
  int n = 4;
  int seed;

  cout << "\n";
  cout << "R8VM_RANDOM_TEST\n";
  cout << "  R8VM_RANDOM randomizes an R8VM matrix.\n";

  seed = 123456789;
  a = r8vm_random ( m, n, seed );

  r8vm_print ( m, n, a, "  The R8VM matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8vm_sl_new_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VM_SL_NEW_TEST tests R8VM_SL_NEW.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    18 August 2015
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
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8VM_SL_NEW_TEST\n";
  cout << "  R8VM_SL_NEW solves a Vandermonde system.\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
//
//  Set the matrix.
//
  a = r8vm_random ( N, N, seed );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( N );
//
//  Compute the corresponding right hand side.
//
  b = r8vm_mv ( N, N, a, x );
//
//  Solve the linear system.
//
  delete [] x;
  x = r8vm_sl_new ( N, a, b, &info );

 r8vec_print_some ( N, x, 1, 10, "  Solution:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
# undef N
}
//****************************************************************************80

void r8vm_slt_new_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VM_SLT_NEW_TEST tests R8VM_SLT_NEW.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    18 August 2015
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
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8VM_SLT_NEW_TEST\n";
  cout << "  R8VM_SLT_NEW solves a transposed Vandermonde system.\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
//
//  Set the matrix.
//
  a = r8vm_random ( N, N, seed );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( N );
//
//  Compute the corresponding right hand side.
//
  b = r8vm_mtv ( N, N, a, x );
//
//  Solve the linear system.
//
  delete [] x;
  x = r8vm_slt_new ( N, a, b, &info );

  r8vec_print_some ( N, x, 1, 10, "  Solution to transposed system:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
# undef N
}
//****************************************************************************80

void r8vm_to_r8ge_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VM_TO_R8GE_TEST tests R8VM_TO_R8GE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    26 August 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a_ge;
  double *a_vm;
  int m;
  int n;
  int seed;

  m = 5;
  n = 4;
  seed = 123456789;

  cout << "\n";
  cout << "R8VM_TO_R8GE_TEST\n";
  cout << "  R8VM_TO_R8GE converts an R8VM matrix to R8GE format.\n";

  a_vm = r8vm_random ( m, n, seed );

  r8vm_print ( m, n, a_vm, "  R8VM matrix:" );

  a_ge = r8vm_to_r8ge ( m, n, a_vm );

  r8ge_print ( m, n, a_ge, "  R8GE matrix" );

  delete [] a_ge;
  delete [] a_vm;

  return;
}
//****************************************************************************80

void r8vm_zeros_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VM_ZEROS_TEST tests R8VM_ZEROS.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 August 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int m = 5;
  int n = 4;

  cout << "\n";
  cout << "R8VM_ZEROS_TEST\n";
  cout << "  R8VM_ZEROS zeros an R8VM matrix.\n";

  a = r8vm_zeros ( m, n );

  r8vm_print ( m, n, a, "  The R8VM matrix:" );

  delete [] a;

  return;
}
