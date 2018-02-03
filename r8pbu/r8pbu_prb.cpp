# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8pbu.hpp"

int main ( );
void r8pbu_cg_test ( );
void r8pbu_det_test ( );
void r8pbu_dif2_test ( );
void r8pbu_fa_test ( );
void r8pbu_indicator_test ( );
void r8pbu_ml_test ( );
void r8pbu_mv_test ( );
void r8pbu_print_test ( );
void r8pbu_print_some_test ( );
void r8pbu_random_test ( );
void r8pbu_res_test ( );
void r8pbu_sl_test ( );
void r8pbu_sor_test ( );
void r8pbu_to_r8ge_test ( );
void r8pbu_zeros_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for R8PBU_PRB.
//
//  Discussion:
//
//    R8PBU_PRB tests the R8PBU library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    04 June 2016
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "R8PBU_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the R8PBU library.\n";

  r8pbu_cg_test ( );
  r8pbu_det_test ( );
  r8pbu_dif2_test ( );
  r8pbu_fa_test ( );
  r8pbu_indicator_test ( );
  r8pbu_ml_test ( );
  r8pbu_mv_test ( );
  r8pbu_print_test ( );
  r8pbu_print_some_test ( );
  r8pbu_random_test ( );
  r8pbu_res_test ( );
  r8pbu_sl_test ( );
  r8pbu_sor_test ( );
  r8pbu_to_r8ge_test ( );
  r8pbu_zeros_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "R8PBU_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void r8pbu_cg_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PBU_CG_TEST tests R8PBU_CG.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 August 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 50
# define MU 1

  double a[(MU+1)*N];
  double *b;
  int i;
  int j;
  double *r;
  double res_max;
  double *x;
  double *x_init;

  cout << "\n";
  cout << "R8PBU_CG_TEST\n";
  cout << "  R8PBU_CG applies the conjugate gradient method\n";
  cout << "  to a symmetric positive definite banded\n";
  cout << "  linear system.\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";
//
//  Set the matrix values.
//
  a[0+0*(MU+1)] = 0.0;
  for ( j = 1; j < N; j++ )
  {
    a[0+j*(MU+1)] = -1.0;
  }
  for ( j = 0; j < N; j++ )
  {
    a[1+j*(MU+1)] = 2.0;
  }

  r8pbu_print_some ( N, MU, a, 1, 1, 10, 10, "The symmetric banded matrix:" );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( N );
//
//  Compute the right hand side.
//
  b = r8pbu_mv ( N, N, MU, a, x );
//
//  Set the approximate solution.
//
  x_init = new double[N];
  for ( i = 0; i < N; i++ )
  {
    x_init[i] = 1.0;
  }
//
//  Call the conjugate gradient method.
//
  delete [] x;

  x = r8pbu_cg ( N, MU, a, b, x_init );

  r8vec_print_some ( N, x, 10, "  Solution:" );
//
//  Compute the residual, A*x-b
//
  r = r8pbu_mv ( N, N, MU, a, x );

  res_max = 0.0;
  for ( i = 0; i < N; i++ )
  { 
    res_max = r8_max ( res_max, fabs ( r[i] - b[i] ) );
  }

  cout << "\n";
  cout << "  Maximum residual = " << res_max << "\n";

  delete [] r;
  delete [] x;
  delete [] x_init;
 
  return;
# undef MU
# undef N
}
//****************************************************************************80

void r8pbu_det_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PBU_DET_TEST tests R8PBU_DET.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    26 August 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 10
# define MU 3

  double *a;
  double *a2;
  double *a_lu;
  double det;
  int info;
  int pivot[N];
  int seed = 123456789;

  cout << " \n";  
  cout << "R8PBU_DET_TEST\n";
  cout << "  R8PBU_DET, determinant of a positive definite\n";
  cout << "  symmetric banded matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";
//
//  Set the matrix.
//
  a = r8pbu_random ( N, MU, seed );

  r8pbu_print ( N, MU, a, "  The R8PBU matrix:" );
//
//  Copy the matrix into a general array.
//
  a2 = r8pbu_to_r8ge ( N, MU, a );
//
//  Factor the matrix.
//
  a_lu = r8pbu_fa ( N, MU, a );
  r8pbu_print ( N, MU, a_lu, "  The factored R8PBU matrix:" );
//
//  Compute the determinant.
//
  det = r8pbu_det ( N, MU, a_lu );

  cout << "\n";
  cout << "  R8PBU_DET computes the determinant = " << det << "\n";
//
//  Factor the general matrix.
//
  info = r8ge_fa ( N, a2, pivot );
//
//  Compute the determinant.
//
  det = r8ge_det ( N, a2, pivot );

  cout << "  R8GE_DET computes the determinant =  " << det << "\n";

  delete [] a;
  delete [] a2;
  delete [] a_lu;

  return;
# undef MU
# undef N
}
//****************************************************************************80

void r8pbu_dif2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PBU_DIF2_TEST tests R8PBU_DIF2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    04 June 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int mu = 1;
  int n = 5;

  cout << " \n";
  cout << "R8PBU_DIF2_TEST\n";
  cout << "  R8PBU_DIF2 sets up an R8PBU second difference matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
  cout << "  Bandwidth MU = " << mu << "\n";

  a = r8pbu_dif2 ( n, n, mu );

  r8pbu_print ( n, mu, a, "  The R8PBU second difference matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8pbu_fa_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PBU_FA_TEST tests R8PBU_FA.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    26 August 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 50
# define MU 1

  double *a;
  double *a_lu;
  double *b;
  int i;
  int info;
  int j;
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8PBU_FA_TEST\n";
  cout << "  R8PBU_FA factors an R8PBU matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";
  cout << "\n";
//
//  Set the matrix values.
//
  a = r8pbu_random ( N, MU, seed );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( N );
//
//  Compute the right hand side.
//
  b = r8pbu_mv ( N, N, MU, a, x );
//
//  Factor the matrix.
//
  a_lu = r8pbu_fa ( N, MU, a );
//
//  Solve the linear system.
//
  delete [] x;
  x = r8pbu_sl ( N, MU, a_lu, b );

  r8vec_print_some ( N, x, 10, "  Solution:" );

  delete [] a;
  delete [] a_lu;
  delete [] b; 
  delete [] x;

  return;
# undef MU
# undef N
}
//****************************************************************************80

void r8pbu_indicator_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PBU_INDICATOR_TEST tests R8PBU_INDICATOR.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    26 August 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 5
# define MU 3

  double *a;

  cout << " \n";
  cout << "R8PBU_INDICATOR_TEST\n";
  cout << "  R8PBU_INDICATOR sets up an R8PBU indicator matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
  cout << "  Bandwidth MU = " << MU << "\n";

  a = r8pbu_indicator ( N, MU );

  r8pbu_print ( N, MU, a, "  The R8PBU indicator matrix:" );

  delete [] a;

  return;
# undef MU
# undef N
}
//****************************************************************************80

void r8pbu_ml_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PBU_ML_TEST tests R8PBU_ML.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    26 August 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 10
# define MU 3

  double *a;
  double *a_lu;
  double *b;
  double *b2;
  int i;
  int info;
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8PBU_ML_TEST\n";
  cout << "  R8PBU_ML computes A*x \n";
  cout << "  where A has been factored by R8PBU_FA.\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";
//
//  Set the matrix.
//
  a = r8pbu_random ( N, MU, seed );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( N );
//
//  Compute the corresponding right hand side.
//
  b = r8pbu_mv ( N, N, MU, a, x );
//
//  Factor the matrix.
//
  a_lu = r8pbu_fa ( N, MU, a );
//
//  Now multiply the factored matrix times solution to get right hand side again.
//
  b2 = r8pbu_ml ( N, MU, a_lu, x );

  r8vec2_print_some ( N, b, b2, 10, "  A*x and PLU*x" );

  delete [] a;
  delete [] a_lu;
  delete [] b;
  delete [] b2;
  delete [] x;

  return;
# undef MU
# undef N
}
//****************************************************************************80

void r8pbu_mv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PBU_MV_TEST tests R8PBU_MV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    04 June 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *b;
  int mu = 2;
  int n = 5;
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8PBU_MV_TEST\n";
  cout << "  R8PBU_MV computes A*x where A is an R8PBU matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
  cout << "  Upper bandwidth MU = " << mu << "\n";
//
//  Set the matrix.
//
  a = r8pbu_random ( n, mu, seed );
  r8pbu_print ( n, mu, a, "  Matrix A:" );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( n );
  r8vec_print ( n, x, "  Vector x:" );
//
//  Compute the right hand side.
//
  b = r8pbu_mv ( n, n, mu, a, x );
  r8vec_print ( n, b, "  Product b=A*x:" );

  delete [] a;
  delete [] b; 
  delete [] x;

  return;
}
//****************************************************************************80

void r8pbu_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PBU_PRINT_TEST tests R8PBU_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 June 2016
//
//  Author:
//
//    John Burkardt
//
{
# define N 5
# define MU 3

  double *a;

  cout << " \n";
  cout << "R8PBU_PRINT_TEST\n";
  cout << "  R8PBU_PRINT prints an R8PBU matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
  cout << "  Bandwidth MU = " << MU << "\n";

  a = r8pbu_indicator ( N, MU );

  r8pbu_print ( N, MU, a, "  The R8PBU matrix:" );

  delete [] a;

  return;
# undef MU
# undef N
}
//****************************************************************************80

void r8pbu_print_some_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PBU_PRINT_SOME_TEST tests R8PBU_PRINT_SOME.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 June 2016
//
//  Author:
//
//    John Burkardt
//
{
# define N 9
# define MU 4

  double *a;

  cout << " \n";
  cout << "R8PBU_PRINT_SOME_TEST\n";
  cout << "  R8PBU_PRINT_SOME prints some of an R8PBU matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
  cout << "  Bandwidth MU = " << MU << "\n";

  a = r8pbu_indicator ( N, MU );

  r8pbu_print_some ( N, MU, a, 3, 4, 7, 8, "  Row(3:7), Col(4:8):" );

  delete [] a;

  return;
# undef MU
# undef N
}
//****************************************************************************80

void r8pbu_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PBU_RANDOM_TEST tests R8PBU_RANDOM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 June 2016
//
//  Author:
//
//    John Burkardt
//
{
# define N 5
# define MU 3

  double *a;
  int seed = 123456789;

  cout << "\n";
  cout << "R8PBU_RANDOM_TEST\n";
  cout << "  R8PBU_RANDOM returns a random banded positive definite symmetric matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";
  cout << "\n";
//
//  Set the matrix.
//
  a = r8pbu_random ( N, MU, seed );

  r8pbu_print ( N, MU, a, "  The R8PBU matrix:" );

  delete [] a;

  return;
# undef MU
# undef N
}
//*****************************************************************************/

void r8pbu_res_test ( )

//*****************************************************************************/
//
//  Purpose:
//
//    R8PBU_RES_TEST tests R8PBU_RES.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    04 June 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *b;
  double *e;
  int i;
  int mu = 2;
  int n = 5;
  double *r;
  int seed = 123456789;
  double *x;
  double *x2;

  cout << "\n";
  cout << "R8PBU_RES_TEST\n";
  cout << "  R8PBU_RES computes the residual b-A*x where A is an R8PBU matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
  cout << "  Upper bandwidth MU = " << mu << "\n";
//
//  Set the matrix.
//
  a = r8pbu_random ( n, mu, seed );
  r8pbu_print ( n, mu, a, "  Matrix A:" );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( n );
  r8vec_print ( n, x, "  Vector x:" );
//
//  Compute the right hand side.
//
  b = r8pbu_mv ( n, n, mu, a, x );
  r8vec_print ( n, b, "  Product b=A*x:" );
//
//  Jostle the solution.
//
  e = r8vec_uniform_01_new ( n, seed );
  x2 = new double[n];
  for ( i = 0; i < n; i++)
  {
    x2[i] = x[i] + 0.01 * e[i];
  }
  r8vec_print ( n, x2, "  Approximate solution x2:" );
//
//  Compute the residual.
//
  r = r8pbu_res ( n, n, mu, a, x2, b );
  r8vec_print ( n, r, "  Residual r = b-A*x2:" );
//
//  Free memory.
//
  delete [] a;
  delete [] b;
  delete [] e;
  delete [] r; 
  delete [] x;
  delete [] x2;

  return;
}
//****************************************************************************80

void r8pbu_sl_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PBU_SL_TEST tests R8PBU_SL.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    26 August 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 50
# define MU 1

  double *a;
  double *a_lu;
  double *b;
  int i;
  int info;
  int j;
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8PBU_SL_TEST\n";
  cout << "  R8PBU_SL solves a linear system factored by R8PBU_FA.\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";
  cout << "\n";
//
//  Set the matrix values.
//
  a = r8pbu_random ( N, MU, seed );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( N );
//
//  Compute the right hand side.
//
  b = r8pbu_mv ( N, N, MU, a, x );
//
//  Factor the matrix.
//
  a_lu = r8pbu_fa ( N, MU, a );
//
//  Solve the linear system.
//
  delete [] x;
  x = r8pbu_sl ( N, MU, a_lu, b );

  r8vec_print_some ( N, x, 10, "  Solution:" );

  delete [] a;
  delete [] a_lu;
  delete [] b; 
  delete [] x;

  return;
# undef MU
# undef N
}
//****************************************************************************80

void r8pbu_sor_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PBU_SOR_TEST tests R8PBU_SOR.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    26 August 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 50
# define MU 1

  double a[(MU+1)*N];
  double *b;
  double *b2;
  double eps;
  double err;
  int i;
  int itchk;
  int itmax;
  int j;
  int k;
  double omega;
  double pi = 3.14159265;
  double t;
  double *x;
  double x_init[N];

  cout << "\n";
  cout << "R8PBU_SOR_TEST\n";
  cout << "  R8PBU_SOR, SOR routine for iterative\n";
  cout << "  solution of A*x=b.\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";

  for ( k = 1; k <= 3; k++ )
  {
    if ( k == 1 )
    {
      omega = 0.25;
    }
    else if ( k == 2 )
    {
      omega = 0.75;
    }
    else
    {
      omega = 1.00;
    }
//
//  Set matrix values.
//
    a[0+0*(MU+1)] = 0.0;
    for ( j = 1; j < N; j++ )
    {
      a[0+j*(MU+1)] = -1.0;
    }

    for ( j = 0; j < N; j++ )
    {
      a[1+j*(MU+1)] = 2.0;
    }
//
//  Set the desired solution.
//
    x = new double[N];
    for ( i = 0; i < N; i++ )
    {
      t = pi * ( double ) ( i ) / ( double ) ( N - 1 );
      x[i] = sin ( t );
    }
//
//  Compute the right hand side.
//
    b = r8pbu_mv ( N, N, MU, a, x );
//
//  Set the initial solution estimate.
//
    for ( i = 0; i < N; i++ )
    {
      x_init[i] = 1.0;
    }
 
    itchk = 1;
    itmax = 8000;
    eps = 0.0001;

    delete [] x;
    x = r8pbu_sor ( N, MU, a, b, eps, itchk, itmax, omega, x_init );
//
//  Compute residual, A*x-b
//
    b2 = r8pbu_mv ( N, N, MU, a, x );
 
    err = 0.0;
    for ( i = 0; i < N; i++ )
    {
      err = r8_max ( err, fabs ( b2[i] - b[i] ) );
    }
 
    cout << "\n";
    cout << "SOR iteration.\n";
    cout << "\n";
    cout << "  Relaxation factor OMEGA = " << omega << "\n";

    r8vec_print_some ( N, x, 10, "  Solution:" );

    cout << "\n";
    cout << "  Maximum error = " << err << "\n";

    delete [] b;
    delete [] b2;
    delete [] x;
  }
 
  return;
# undef MU
# undef N
}
//****************************************************************************80

void r8pbu_to_r8ge_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PBU_TO_R8GE_TEST tests R8PBU_TO_R8GE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    14 April 2013
//
//  Author:
//
//    John Burkardt
//
{
# define N 5
# define MU 3

  double *a;
  double *a_r8ge;

  cout << " \n";
  cout << "R8PBU_TO_R8GE_TEST\n";
  cout << "  R8PBU_TO_R8GE converts an R8PBU  matrix to R8GE format.\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
  cout << "  Bandwidth MU = " << MU << "\n";

  a = r8pbu_indicator ( N, MU );

  r8pbu_print ( N, MU, a, "  The R8PBU matrix:" );

  a_r8ge = r8pbu_to_r8ge ( N, MU, a );

  r8ge_print ( N, N, a_r8ge, "  The R8GE matrix:" );

  delete [] a;
  delete [] a_r8ge;

  return;
# undef MU
# undef N
}
//****************************************************************************80

void r8pbu_zeros_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PBU_ZEROS_TEST tests R8PBU_ZEROS.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 June 2016
//
//  Author:
//
//    John Burkardt
//
{
# define N 5
# define MU 3

  double *a;

  cout << " \n";
  cout << "R8PBU_ZEROS_TEST\n";
  cout << "  R8PBU_ZEROS sets up an R8PBU zero matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
  cout << "  Bandwidth MU = " << MU << "\n";

  a = r8pbu_indicator ( N, MU );

  r8pbu_print ( N, MU, a, "  The R8PBU zero matrix:" );

  delete [] a;

  return;
# undef MU
# undef N
}

