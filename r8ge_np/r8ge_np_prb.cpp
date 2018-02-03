# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8ge_np.hpp"

int main ( );
void r8ge_np_det_test ( );
void r8ge_np_fa_test ( );
void r8ge_np_inverse_test ( );
void r8ge_np_ml_test ( );
void r8ge_np_sl_test ( );
void r8ge_np_trf_test ( );
void r8ge_np_trm_test ( );
void r8ge_np_trs_test ( );
void r8ge_to_r8lt_test ( );
void r8ge_to_r8po_test ( );
void r8ge_to_r8ut_test ( );
void r8ge_to_r8vm_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for R8GE_NP_PRB.
//
//  Discussion:
//
//    R8GE_NP_PRB tests the R8GE_NP library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 June 2016
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "R8GE_NP_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the R8GE_NP library.\n";

  r8ge_np_det_test ( );
  r8ge_np_fa_test ( );
  r8ge_np_inverse_test ( );
  r8ge_np_ml_test ( );
  r8ge_np_sl_test ( );
  r8ge_np_trf_test ( );
  r8ge_np_trm_test ( );
  r8ge_np_trs_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "R8GE_NP_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void r8ge_np_det_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_NP_DET_TEST tests R8GE_NP_DET.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    06 June 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double det;
  int info;
  int n = 10;

  cout << "\n";
  cout << "R8GE_NP_DET_TEST\n";
  cout << "  R8GE_NP_DET computes the determinant of a matrix\n";
  cout << "  that was factored by R8GE_NP_FA,\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
//
//  Set the matrix.
//
  a = r8ge_dif2 ( n, n );
//
//  Factor the matrix.
//
  info = r8ge_np_fa ( n, a );

  if ( info != 0 )
  {
    cout << "\n";
    cout << "R8GE_NP_DET_TEST - Fatal error!\n";
    cout << "  R8GE_NP_FA declares the matrix is singular!\n";
    cout << "  The value of INFO is " << info << "\n";
    return;
  }
//
//  Get the determinant.
//
  det = r8ge_np_det ( n, a );
  cout << "\n";
  cout << "  Determinant of -1, 2, -1 matrix is " << det << "\n";
  cout << "  Exact value is " << ( double ) ( n + 1 ) << "\n";

  delete [] a;

  return;
}
//****************************************************************************80

void r8ge_np_fa_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_NP_FA_TEST tests R8GE_NP_FA.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    31 August 2006
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
  int info;
  int job;
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8GE_NP_FA_TEST\n";
  cout << "  R8GE_NP_FA LU factors an R8GE matrix without pivoting,\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
//
//  Set the matrix.
//
  a = r8ge_random ( N, N, seed );
//
//  Set the desired solution.
//
  x = new double[N];

  for ( i = 0; i < N; i++ )
  {
    x[i] = 1.0;
  }
//
//  Compute the corresponding right hand side.
//
  b = r8ge_mv ( N, N, a, x );
//
//  Factor the matrix.
//
  info = r8ge_np_fa ( N, a );

  if ( info != 0 )
  {
    cout << "\n";
    cout << "R8GE_NP_FA_TEST - Fatal error!\n";
    cout << "  R8GE_NP_FA declares the matrix is singular!\n";
    cout << "  The value of INFO is " << info << "\n";
    return;
  }
//
//  Solve the linear system.
//
  job = 0;
  delete [] x;
  x = r8ge_np_sl ( N, a, b, job );
 
  r8vec_print_some ( N, x, 10, "  Solution:" );
//
//  Set the desired solution.
//
  delete [] x;
  x = r8vec_indicator1_new ( N );
//
//  Compute the corresponding right hand side.
//
  job = 0;
  delete [] b;
  b = r8ge_np_ml ( N, a, x, job );
//
//  Solve the system
//
  job = 0;
  delete [] x;
  x = r8ge_np_sl ( N, a, b, job );

  r8vec_print_some ( N, x, 10, "  Solution:" );
//
//  Set the desired solution.
//
  delete [] x;
  x = r8vec_indicator1_new ( N );
//
//  Compute the corresponding right hand side.
//
  job = 1;
  delete [] b;
  b = r8ge_np_ml ( N, a, x, job );
//
//  Solve the system
//
  job = 1;
  delete [] x;
  x = r8ge_np_sl ( N, a, b, job );

  r8vec_print ( N, x, "  Solution of transposed system:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
# undef N
}
//****************************************************************************80

void r8ge_np_inverse_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_NP_INVERSE_TEST tests R8GE_NP_INVERSE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    31 August 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 5

  double *a;
  double *a_lu;
  double *b;
  double *c;
  int i;
  int info;
  int seed = 123456789;
  int j;

  cout << "\n";
  cout << "R8GE_NP_INVERSE_TEST\n";
  cout << "  R8GE_NP_INVERSE computes the inverse of a matrix\n";
  cout << "  that was factored by R8GE_NP_FA.\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
//
//  Set the matrix.
//
  a = r8ge_random ( N, N, seed );

  r8ge_print ( N, N, a, "  The random matrix:" );
//
//  Factor and invert the matrix.
//
  a_lu = new double[N*N];

  for ( i = 0; i < N; i++ )
  {
    for ( j = 0; j < N; j++ )
    {
      a_lu[i+j*N] = a[i+j*N];
    }
  }

  info = r8ge_np_fa ( N, a_lu );

  if ( info != 0 )
  {
    cout << "\n";
    cout << "R8GE_NP_INVERSE_TEST - Fatal error!\n";
    cout << "  R8GE_NP_FA declares the matrix is singular!\n";
    cout << "  The value of INFO is " << info << "\n";
    return;
  }

  b = r8ge_np_inverse ( N, a_lu );

  r8ge_print ( N, N, b, "  The inverse matrix:" );
//
//  Compute A * B = C.
//
  c = r8ge_mm ( N, N, N, a, b );

  r8ge_print ( N, N, c, "  The product:" );

  delete [] a;
  delete [] a_lu;
  delete [] b;
  delete [] c;

  return;
# undef N
}
//****************************************************************************80

void r8ge_np_ml_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_NP_ML_TEST tests R8GE_NP_ML.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    31 August 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 10

  double *a;
  double *b;
  double *b2;
  int info;
  int i;
  int job;
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8GE_NP_ML_TEST\n";
  cout << "  For a matrix in general storage,\n"; 
  cout << "  R8GE_NP_ML computes A*x or A'*X\n";
  cout << "  where A has been factored by R8GE_NP_FA.\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";

  for ( job = 0; job <= 1; job++ )
  {
//
//  Set the matrix.
//
    a = r8ge_random ( N, N, seed );
//
//  Set the desired solution.
//
    x = r8vec_indicator1_new ( N );
//
//  Compute the corresponding right hand side.
//
    if ( job == 0 )
    {
      b = r8ge_mv ( N, N, a, x );
    }
    else
    {
      b = r8ge_mtv ( N, N, a, x );
    }
//
//  Factor the matrix.
//
    info = r8ge_np_fa ( N, a );

    if ( info != 0 )
    {
      cout << "\n";
      cout << "R8GE_NP_ML_TEST - Fatal error!\n";
      cout << "  R8GE_NP_FA declares the matrix is singular!\n";
      cout << "  The value of INFO is " << info << "\n";
      continue;
    }
//
//  Now multiply factored matrix times solution to get right hand side again.
//
    b2 = r8ge_np_ml ( N, a, x, job );

    if ( job == 0 )
    {
      r8vec2_print_some ( N, b, b2, 10, "  A*x and PLU*x" );
    }
    else
    {
      r8vec2_print_some ( N, b, b2, 10, "  A'*x and (PLU)'*x" );
    }

    delete [] a;
    delete [] b;
    delete [] b2;
    delete [] x;
  }

  return;
# undef N
}
//****************************************************************************80

void r8ge_np_sl_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_NP_SL_TEST tests R8GE_NP_SL.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    31 August 2006
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
  int info;
  int job;
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8GE_NP_SL_TEST\n";
  cout << "  R8GE_NP_SL solves a linear system factored by R8GE_NP_FA.\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
//
//  Set the matrix.
//
  a = r8ge_random ( N, N, seed );
//
//  Set the desired solution.
//
  x = new double[N];

  for ( i = 0; i < N; i++ )
  {
    x[i] = 1.0;
  }
//
//  Compute the corresponding right hand side.
//
  b = r8ge_mv ( N, N, a, x );
//
//  Factor the matrix.
//
  info = r8ge_np_fa ( N, a );

  if ( info != 0 )
  {
    cout << "\n";
    cout << "R8GE_NP_SL_TEST - Fatal error!\n";
    cout << "  R8GE_NP_FA declares the matrix is singular!\n";
    cout << "  The value of INFO is " << info << "\n";
    return;
  }
//
//  Solve the linear system.
//
  job = 0;
  delete [] x;
  x = r8ge_np_sl ( N, a, b, job );
 
  r8vec_print_some ( N, x, 10, "  Solution:" );
//
//  Set the desired solution.
//
  delete [] x;
  x = r8vec_indicator1_new ( N );
//
//  Compute the corresponding right hand side.
//
  job = 0;
  delete [] b;
  b = r8ge_np_ml ( N, a, x, job );
//
//  Solve the system
//
  job = 0;
  delete [] x;
  x = r8ge_np_sl ( N, a, b, job );

  r8vec_print_some ( N, x, 10, "  Solution:" );
//
//  Set the desired solution.
//
  delete [] x;
  x = r8vec_indicator1_new ( N );
//
//  Compute the corresponding right hand side.
//
  job = 1;
  delete [] b;
  b = r8ge_np_ml ( N, a, x, job );
//
//  Solve the system
//
  job = 1;
  delete [] x;
  x = r8ge_np_sl ( N, a, b, job );

  r8vec_print ( N, x, "  Solution of transposed system:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
# undef N
}
//****************************************************************************80

void r8ge_np_trf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_NP_TRF_TEST tests R8GE_NP_TRF.
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
# define M 10
# define N 10
# define NRHS 1

  double *a;
  double *b;
  int i;
  int info;
  int job;
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8GE_NP_TRF_TEST\n";;
  cout << "  R8GE_NP_TRF factors an R8GE matrix without pivoting,\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << M << "\n";
  cout << "  Matrix columns N = " << N << "\n";
//
//  Set the matrix.
//
  a = r8ge_random ( M, N, seed );
//
//  Set the desired solution.
//
  x = new double[N];
  for ( i = 0; i < N; i++ )
  {
    x[i] = 1.0;
  }
//
//  Compute the corresponding right hand side.
//
  b = r8ge_mv ( M, N, a, x );
//
//  Factor the matrix.
//
  info = r8ge_np_trf ( M, N, a );

  if ( info != 0 )
  {
    cout << "\n";
    cout << "R8GE_NP_TRF_TEST - Fatal error!\n";
    cout << "  R8GE_NP_TRF declares the matrix is singular!\n";
    cout << "  The value of INFO is " << info << "\n";
    return;
  }
//
//  Solve the linear system.
//
  delete [] x;
  x = r8ge_np_trs ( N, NRHS, 'N', a, b );
 
  if ( info != 0 )
  {
    cout << "\n";
    cout << "R8GE_NP_TRF_TEST - Fatal error!\n";
    cout << "  R8GE_TRS returned an error condition!\n";
    cout << "  The value of INFO is " << info << "\n";
    return;
  }
  r8vec_print ( N, x, "  Solution:" );
//
//  Set the desired solution.
//
  delete [] x;
  x = r8vec_indicator1_new ( N );
//
//  Compute the corresponding right hand side.
//
  job = 0;
  delete [] b;
  b = r8ge_np_trm ( M, N, a, x, job );
//
//  Solve the system
//
  x = r8ge_np_trs ( N, NRHS, 'N', a, b );

  if ( info != 0 )
  {
    cout << "\n";
    cout << "R8GE_NP_TRF_TEST - Fatal error!\n";
    cout << "  R8GE_TRS returned an error condition!\n";
    cout << "  The value of INFO is " << info << "\n";
    return;
  }

  r8vec_print ( N, x, "  Solution:" );
//
//  Set the desired solution.
//
  delete [] x;
  x = r8vec_indicator1_new ( N );
//
//  Compute the corresponding right hand side.
//
  job = 1;
  delete [] b;
  b = r8ge_np_trm ( M, N, a, x, job );
//
//  Solve the system.
//
  delete [] x;
  x = r8ge_np_trs ( N, NRHS, 'T', a, b );

  if ( info != 0 )
  {
    cout << "\n";
    cout << "R8GE_NP_TRF_TEST - Fatal error!\n";
    cout << "  R8GE_TRS returned an error condition!\n";
    cout << "  The value of INFO is " << info << "\n";
    return;
  }

  r8vec_print ( N, x, "  Solution of transposed system:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
# undef M
# undef N
# undef NRHS
}
//****************************************************************************80

void r8ge_np_trm_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_NP_TRM_TEST tests R8GE_NP_TRM.
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
# define M 10
# define N 10
# define NRHS 1

  double *a;
  double *b;
  int i;
  int info;
  int job;
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8GE_NP_TRM_TEST\n";
  cout << "  R8GE_NP_TRM computes A*x after A has been factored by R8GE_NP_FA.\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << M << "\n";
  cout << "  Matrix columns N = " << N << "\n";
//
//  Set the matrix.
//
  a = r8ge_random ( M, N, seed );
//
//  Set the desired solution.
//
  x = new double[N];
  for ( i = 0; i < N; i++ )
  {
    x[i] = 1.0;
  }
//
//  Compute the corresponding right hand side.
//
  b = r8ge_mv ( M, N, a, x );
//
//  Factor the matrix.
//
  info = r8ge_np_trf ( M, N, a );

  if ( info != 0 )
  {
    cout << "\n";
    cout << "R8GE_NP_TRM_TEST - Fatal error!\n";
    cout << "  R8GE_NP_TRF declares the matrix is singular!\n";
    cout << "  The value of INFO is " << info << "\n";
    return;
  }
//
//  Solve the linear system.
//
  delete [] x;
  x = r8ge_np_trs ( N, NRHS, 'N', a, b );
 
  if ( info != 0 )
  {
    cout << "\n";
    cout << "R8GE_NP_TRM_TEST - Fatal error!\n";
    cout << "  R8GE_TRS returned an error condition!\n";
    cout << "  The value of INFO is " << info << "\n";
    return;
  }
  r8vec_print ( N, x, "  Solution:" );
//
//  Set the desired solution.
//
  delete [] x;
  x = r8vec_indicator1_new ( N );
//
//  Compute the corresponding right hand side.
//
  job = 0;
  delete [] b;
  b = r8ge_np_trm ( M, N, a, x, job );
//
//  Solve the system
//
  x = r8ge_np_trs ( N, NRHS, 'N', a, b );

  if ( info != 0 )
  {
    cout << "\n";
    cout << "R8GE_NP_TRM_TEST - Fatal error!\n";
    cout << "  R8GE_TRS returned an error condition!\n";
    cout << "  The value of INFO is " << info << "\n";
    return;
  }

  r8vec_print ( N, x, "  Solution:" );
//
//  Set the desired solution.
//
  delete [] x;
  x = r8vec_indicator1_new ( N );
//
//  Compute the corresponding right hand side.
//
  job = 1;
  delete [] b;
  b = r8ge_np_trm ( M, N, a, x, job );
//
//  Solve the system.
//
  delete [] x;
  x = r8ge_np_trs ( N, NRHS, 'T', a, b );

  if ( info != 0 )
  {
    cout << "\n";
    cout << "R8GE_NP_TRM_TEST - Fatal error!\n";
    cout << "  R8GE_TRS returned an error condition!\n";
    cout << "  The value of INFO is " << info << "\n";
    return;
  }

  r8vec_print ( N, x, "  Solution of transposed system:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
# undef M
# undef N
# undef NRHS
}
//****************************************************************************80

void r8ge_np_trs_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_NP_TRS_TEST tests R8GE_NP_TRS.
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
# define M 10
# define N 10
# define NRHS 1

  double *a;
  double *b;
  int i;
  int info;
  int job;
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8GE_NP_TRS_TEST\n";
  cout << "  R8GE_NP_TRS solves a system factored by R8GE_NP_TRF.\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << M << "\n";
  cout << "  Matrix columns N = " << N << "\n";
//
//  Set the matrix.
//
  a = r8ge_random ( M, N, seed );
//
//  Set the desired solution.
//
  x = new double[N];
  for ( i = 0; i < N; i++ )
  {
    x[i] = 1.0;
  }
//
//  Compute the corresponding right hand side.
//
  b = r8ge_mv ( M, N, a, x );
//
//  Factor the matrix.
//
  info = r8ge_np_trf ( M, N, a );

  if ( info != 0 )
  {
    cout << "\n";
    cout << "R8GE_NP_TRS_TEST - Fatal error!\n";
    cout << "  R8GE_NP_TRF declares the matrix is singular!\n";
    cout << "  The value of INFO is " << info << "\n";
    return;
  }
//
//  Solve the linear system.
//
  delete [] x;
  x = r8ge_np_trs ( N, NRHS, 'N', a, b );
 
  if ( info != 0 )
  {
    cout << "\n";
    cout << "R8GE_NP_TRS_TEST - Fatal error!\n";
    cout << "  R8GE_TRS returned an error condition!\n";
    cout << "  The value of INFO is " << info << "\n";
    return;
  }
  r8vec_print ( N, x, "  Solution:" );
//
//  Set the desired solution.
//
  delete [] x;
  x = r8vec_indicator1_new ( N );
//
//  Compute the corresponding right hand side.
//
  job = 0;
  delete [] b;
  b = r8ge_np_trm ( M, N, a, x, job );
//
//  Solve the system
//
  x = r8ge_np_trs ( N, NRHS, 'N', a, b );

  if ( info != 0 )
  {
    cout << "\n";
    cout << "R8GE_NP_TRS_TEST - Fatal error!\n";
    cout << "  R8GE_TRS returned an error condition!\n";
    cout << "  The value of INFO is " << info << "\n";
    return;
  }

  r8vec_print ( N, x, "  Solution:" );
//
//  Set the desired solution.
//
  delete [] x;
  x = r8vec_indicator1_new ( N );
//
//  Compute the corresponding right hand side.
//
  job = 1;
  delete [] b;
  b = r8ge_np_trm ( M, N, a, x, job );
//
//  Solve the system.
//
  delete [] x;
  x = r8ge_np_trs ( N, NRHS, 'T', a, b );

  if ( info != 0 )
  {
    cout << "\n";
    cout << "R8GE_NP_TRS_TEST - Fatal error!\n";
    cout << "  R8GE_TRS returned an error condition!\n";
    cout << "  The value of INFO is " << info << "\n";
    return;
  }

  r8vec_print ( N, x, "  Solution of transposed system:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
# undef M
# undef N
# undef NRHS
}
