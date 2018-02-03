# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r83_np.hpp"

int main ( );
void r83_np_det_test ( );
void r83_np_fa_test ( );
void r83_np_fs_test ( );
void r83_np_ml_test ( );
void r83_np_sl_test ( );

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
//    18 May 2016
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

  r83_np_det_test ( );
  r83_np_fa_test ( );
  r83_np_fs_test ( );
  r83_np_ml_test ( );
  r83_np_sl_test ( );
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

void r83_np_det_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83_NP_DET_TEST tests R83_NP_DET.
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
  double det;
  int info;
  int n = 10;

  cout << "\n";
  cout << "R83_NP_DET_TEST\n";
  cout << "  R83_NP_DET computes the determinant of a matrix\n";
  cout << "  that was factored by R83_NP_FA.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
//
//  Set the matrix.
//
  a = r83_dif2 ( n, n );

  r83_print ( n, n, a, "  The R83 matrix:" );
//
//  Factor the matrix.
//
  info = r83_np_fa ( n, a );

  r83_print ( n, n, a, "  The factored matrix:" );

  if ( info != 0 )
  {
    cout << "\n";
    cout << "R83_NP_DET_TEST - Warning!\n";
    cout << "  R83_NP_FA returns INFO = " << info << "\n";
  }
//
//  Compute the determinant.
//
  det = r83_np_det ( n, a );

  cout << "\n";
  cout << "  R83_NP_DET computes determinant =  " << det << "\n";
  cout << "  Exact determinant = " << n + 1 << "\n";

  delete [] a;

  return;
}
//****************************************************************************80

void r83_np_fa_test ( )

//****************************************************************************80
//
// R83_NP_FA_TEST tests R83_NP_FA.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    18 May 2016
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
  cout << "R83_NP_FA_TEST\n";
  cout << "  R83_NP_FA factors a tridiagonal matrix without pivoting.\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
//
//  Set the matrix.
//
  a = r83_random ( N, N, seed );

  r83_print ( N, N, a, "  The tridiagonal matrix:" );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( N );
//
//  Compute the corresponding right hand side.
//
  b = r83_mv ( N, N, a, x );
  delete [] x;
//
//  Factor the matrix.
//
  info = r83_np_fa ( N, a );

  if ( info != 0 )
  {
    cout << "\n";
    cout << "R83_NP_FA_TEST - Fatal error!\n";
    cout << "  The test matrix is singular.\n";
    return;
  }
//
//  Solve the linear system.
//
  job = 0;
  x = r83_np_sl ( N, a, b, job );
 
  r8vec_print ( N, x, "  Solution to A*x=b:" );
//
//  Set the desired solution
//
  delete [] x;
  x = r8vec_indicator1_new ( N );
//
//  Compute the corresponding right hand side, using the factored matrix.
//
  job = 1;
  delete [] b;
  b = r83_np_ml ( N, a, x, job );
//
//  Solve the linear system.
//
  job = 1;
  delete [] x;
  x = r83_np_sl ( N, a, b, job );
 
  r8vec_print ( N, x, "  Solution to A'*x=b:" );
 
  delete [] a;
  delete [] b;
  delete [] x;

  return;
# undef N
}
//****************************************************************************80

void r83_np_fs_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83_NP_FS_TEST tests R83_NP_FS.
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
  cout << "R83_NP_FS_TEST\n";
  cout << "  R83_NP_FS factors and solves a tridiagonal\n";
  cout << "  linear system.\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
//
//  Set the matrix elements.
//
  a = r83_random ( N, N, seed );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( N );
//
//  Compute b = A * x.
//
  b = r83_mv ( N, N, a, x );
//
//  Wipe out the solution.
//
  delete [] x;
//
//  Solve the system.
//
  x = r83_np_fs ( N, a, b );

  r8vec_print ( N, x, "  Solution to A*x=b:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
# undef N
}
//****************************************************************************80

void r83_np_ml_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83_NP_ML_TEST tests R83_NP_ML.
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
  double *b2;
  int info;
  int i;
  int job;
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R83_NP_ML_TEST\n";
  cout << "  R83_NP_ML computes A*x or A'*x\n";
  cout << "  where A has been factored by R83_FA.\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";

  for ( job = 0; job <= 1; job++ )
  {
//
//  Set the matrix.
//
    a = r83_random ( N, N, seed );
//
//  Set the desired solution.
//
    x = r8vec_indicator1_new ( N );
//
//  Compute the corresponding right hand side.
//
    if ( job == 0 )
    {
      b = r83_mv ( N, N, a, x );
    }
    else
    {
      b = r83_mtv ( N, N, a, x );
    }
//
//  Factor the matrix.
//
    info = r83_np_fa ( N, a );

    if ( info != 0 )
    {
      cout << "\n";
      cout << "TEST08 - Fatal error!\n";
      cout << "  R83_NP_FA declares the matrix is singular!\n";
      cout << "  The value of INFO is " << info << "\n";
      return;
    }
//
//  Now multiply factored matrix times solution to get right hand side again.
//
    b2 = r83_np_ml ( N, a, x, job );

    if ( job == 0 )
    {
      r8vec2_print_some ( N, b, b2, 10, "  A*x and PLU*x:" );
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

void r83_np_sl_test ( )

//****************************************************************************80
//
// R83_NP_SL_TEST tests R83_NP_SL.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    18 May 2016
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
  cout << "R83_NP_SL_TEST\n";
  cout << "  R83_NP_SL solves a tridiagonal linear system after it has\n";
  cout << "  been factored by R83_NP_FA.\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
//
//  Set the matrix.
//
  a = r83_random ( N, N, seed );

  r83_print ( N, N, a, "  The tridiagonal matrix:" );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( N );
//
//  Compute the corresponding right hand side.
//
  b = r83_mv ( N, N, a, x );
  delete [] x;
//
//  Factor the matrix.
//
  info = r83_np_fa ( N, a );

  if ( info != 0 )
  {
    cout << "\n";
    cout << "R83_NP_SL_TEST - Fatal error!\n";
    cout << "  The test matrix is singular.\n";
    return;
  }
//
//  Solve the linear system.
//
  job = 0;
  x = r83_np_sl ( N, a, b, job );
 
  r8vec_print ( N, x, "  Solution to A*x=b:" );
//
//  Set the desired solution
//
  delete [] x;
  x = r8vec_indicator1_new ( N );
//
//  Compute the corresponding right hand side, using the factored matrix.
//
  job = 1;
  delete [] b;
  b = r83_np_ml ( N, a, x, job );
//
//  Solve the linear system.
//
  job = 1;
  delete [] x;
  x = r83_np_sl ( N, a, b, job );
 
  r8vec_print ( N, x, "  Solution to A'*x=b:" );
 
  delete [] a;
  delete [] b;
  delete [] x;

  return;
# undef N
}
