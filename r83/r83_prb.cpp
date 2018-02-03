# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r83.hpp"

int main ( );
void r83_cg_test ( );
void r83_cr_fa_test ( );
void r83_cr_sl_test ( );
void r83_cr_sls_test ( );
void r83_dif2_test ( );
void r83_gs_sl_test ( );
void r83_indicator_test ( );
void r83_jac_sl_test ( );
void r83_mtv_test ( );
void r83_mv_test ( );
void r83_print_test ( );
void r83_print_some_test ( );
void r83_random_test ( );
void r83_res_test ( );
void r83_to_r8ge_test ( );
void r83_zeros_test ( );

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
//    02 September 2015
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

  r83_cg_test ( );
  r83_cr_fa_test ( );
  r83_cr_sl_test ( );
  r83_cr_sls_test ( );
  r83_dif2_test ( );
  r83_gs_sl_test ( );
  r83_indicator_test ( );
  r83_jac_sl_test ( );
  r83_mtv_test ( );
  r83_mv_test ( );
  r83_print_test ( );
  r83_print_some_test ( );
  r83_random_test ( );
  r83_res_test ( );
  r83_to_r8ge_test ( );
  r83_zeros_test ( );
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

void r83_cg_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83_CG_TEST tests R83_CG.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 June 2014
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *b;
  double e_norm;
  int i;
  int n;
  double *r;
  double r_norm;
  int seed;
  double *x1;
  double *x2;

  n = 10;

  cout << "\n";
  cout << "R83_CG_TEST\n";
  cout << "  R83_CG applies CG to an R83 matrix.\n";
  cout << "  Matrix order is " << n << " by " << n << "\n";

//
//  Let A be the -1 2 -1 matrix.
//
  a = r83_dif2 ( n, n );
//
//  Choose a random solution.
//
  seed = 123456789;
  x1 = r8vec_uniform_01_new ( n, seed );
//
//  Compute the corresponding right hand side.
//
  b = r83_mv ( n, n, a, x1 );
//
//  Call the CG routine.
//
  x2 = new double[n];
  for ( i = 0; i < n; i++ )
  {
    x2[i] = 1.0;
  }
  r83_cg ( n, a, b, x2 );
//
//  Compute the residual.
//
  r = r83_res ( n, n, a, x2, b );
  r_norm = r8vec_norm ( n, r );
//
//  Compute the error.
//
  e_norm = r8vec_norm_affine ( n, x1, x2 );
//
//  Report.
//
  cout << "\n";
  cout << "  Number of variables N = " << n << "\n";
  cout << "  Norm of residual ||Ax-b|| = " << r_norm << "\n";
  cout << "  Norm of error ||x1-x2|| = " << e_norm << "\n";
//
//  Free memory.
//
  delete [] a;
  delete [] b;
  delete [] r;
  delete [] x1;
  delete [] x2;

  return;
}
//****************************************************************************80

void r83_cr_fa_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83_CR_FA_TEST tests R83_CR_FA.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 September 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *a_cr;
  double *b;
  int i;
  int j;
  int n = 10;
  double *x;

  cout << "\n";
  cout << "R83_CR_FA_TEST:\n";
  cout << "  R83_CR_FA factors an R83 matrix via cyclic reduction;\n";
  cout << "  Matrix order is " << n << " by " << n << "\n";
  cout << "  The matrix is NOT symmetric.\n";
//
//  Set the matrix values.
//
  a = new double[3*n];
  a[0+0*3] = 0.0;
  for ( j = 1; j < n; j++ )
  {
    a[0+j*3] = ( double ) ( j + 1 );
  }

  for ( j = 0; j < n; j++ )
  {
    a[1+j*3] = 4.0 * ( double ) ( j + 1 );
  }

  for ( j = 0; j < n - 1; j++ )
  {
    a[2+j*3] = ( double ) ( j + 1 );
  }
  a[2+(n-1)*3] = 0.0;

  r83_print ( n, n, a, "  The matrix:" );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( n );
//
//  Compute the corresponding right hand side.
//
  b = r83_mv ( n, n, a, x );
//
//  Factor the matrix.
//
  a_cr = r83_cr_fa ( n, a );
//
//  Solve the linear system.
//
  x = r83_cr_sl ( n, a_cr, b );

  r8vec_print ( n, x, "  Solution:" );

  delete [] a;
  delete [] a_cr;
  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

void r83_cr_sl_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83_CR_SL_TEST tests R83_CR_SL.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 September 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *a_cr;
  double *b;
  int i;
  int j;
  int n = 10;
  double *x;

  cout << "\n";
  cout << "R83_CR_SL_TEST:\n";
  cout << "  R83_CR_SL solves an linear system with R83 matrix\n";
  cout << "  that has been factored by R83_CR_FA.\n";
  cout << "  Matrix order is " << n << " by " << n << "\n";
  cout << "  The matrix is NOT symmetric.\n";
//
//  Set the matrix values.
//
  a = new double[n*3];

  a[0+0*3] = 0.0;
  for ( j = 1; j < n; j++ )
  {
    a[0+j*3] = ( double ) ( j + 1 );
  }

  for ( j = 0; j < n; j++ )
  {
    a[1+j*3] = 4.0 * ( double ) ( j + 1 );
  }

  for ( j = 0; j < n - 1; j++ )
  {
    a[2+j*3] = ( double ) ( j + 1 );
  }
  a[2+(n-1)*3] = 0.0;

  r83_print ( n, n, a, "  The matrix:" );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( n );
//
//  Compute the corresponding right hand side.
//
  b = r83_mv ( n, n, a, x );
//
//  Factor the matrix.
//
  a_cr = r83_cr_fa ( n, a );
//
//  Solve the linear system.
//
  x = r83_cr_sl ( n, a_cr, b );

  r8vec_print ( n, x, "  Solution:" );

  delete [] a;
  delete [] a_cr;
  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

void r83_cr_sls_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83_CR_SLS_TEST tests R83_CR_SLS.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 September 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *a_cr;
  double *b;
  int i;
  int j;
  int n = 5;
  int nb = 2;
  double *x;

  cout << "\n";
  cout << "R83_CR_SLS_TEST\n";
  cout << "  R83_CR_SLS solves multiple linear systems with R83 matrix\n";
  cout << "  after the matrix has been factored by R83_CR_FA.\n";
  cout << "  Matrix order is " << n << " by " << n << "\n";
  cout << "  Demonstrate multiple system solution method.\n";
//
//  Set the matrix values.
//
  a = r83_dif2 ( n, n );
//
//  Factor the matrix once.
//
  a_cr = r83_cr_fa ( n, a );
//
//  Set the right hand sides.
//
  b = new double[n*nb];

  j = 0;
  for ( i = 0; i < n-1; i++ )
  {
    b[i+j*n] = 0.0;
  }
  b[n-1+j*n] = ( double ) ( n + 1 );

  j = 1;
  b[0+j*n] = 1.0;
  for ( i = 1; i < n-1; i++ )
  {
    b[i+j*n] = 0.0;
  }
  b[n-1+j*n] = 1.0;
//
//  Solve the linear systems.
//
  x = r83_cr_sls ( n, a_cr, nb, b );

  r8ge_print ( n, nb, x, "  Solutions:" );

  delete [] a;
  delete [] a_cr;
  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

void r83_dif2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83_DIF2_TEST tests R83_DIF2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 September 2015
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
  cout << "R83_DIF2_TEST\n";
  cout << "  R83_DIF2 sets up the second difference matrix.\n";
  cout << "  Matrix order is " << m << " by " << n << "\n";

  a = r83_dif2 ( m, n );

  r83_print ( m, n, a, "  The R83 matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r83_gs_sl_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83_GS_SL_TEST tests R83_GS_SL.
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
  double *b;
  int i;
  int j;
  int maxit = 25;
  int n = 10;
  double *x;

  cout << "\n";
  cout << "R83_GS_SL_TEST\n";
  cout << "  R83_GS_SL solves a linear system using Gauss-Seidel iteration\n";
  cout << "  for an R83 matrix.\n";
  cout << "  Matrix order is " << n << " by " << n << "\n";
  cout << "  Iterations per call = " << maxit << "\n";
  cout << "\n";
//
//  Set the matrix values.
//
  a = r83_dif2 ( n, n );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( n );
//
//  Compute the corresponding right hand side.
//
  b = r83_mv ( n, n, a, x );
//
//  Set the starting solution.
//
  for ( i = 0; i < n; i++ )
  {
    x[i] = 0.0;
  }
//
//  Solve the linear system.
//
  for ( i = 1; i <= 3; i++ )
  {
    r83_gs_sl ( n, a, b, x, maxit );

    r8vec_print ( n, x, "  Current estimated solution:" );
  }

  delete [] a;
  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

void r83_indicator_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83_INDICATOR_TEST tests R83_INDICATOR.
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
  int m = 5;
  int n = 4;

  cout << "\n";
  cout << "R83_INDICATOR_TEST\n";
  cout << "  R83_INDICATOR sets up an R83 indicator matrix.\n";
  cout << "  Matrix order is " << m << " by " << n << "\n";

  a = r83_indicator ( m, n );

  r83_print ( m, n, a, "  The R83 indicator matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r83_jac_sl_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83_JAC_SL_TEST tests R83_JAC_SL.
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
  double *b;
  int i;
  int j;
  int maxit = 25;
  int n = 10;
  double *x;

  cout << "\n";
  cout << "R83_JAC_SL_TEST\n";
  cout << "  R83_JAC_SL solves a linear system using Jacobi iteration\n";
  cout << "  for an R83 matrix.\n";
  cout << "  Matrix order is " << n << " by " << n << "\n";
  cout << "  Iterations per call = " << maxit << "\n";
  cout << "\n";
//
//  Set the matrix values.
//
  a = r83_dif2 ( n, n );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( n );
//
//  Compute the corresponding right hand side.
//
  b = r83_mv ( n, n, a, x );

  r8vec_print ( n, b, "  The right hand side:" );
//
//  Set the starting solution.
//
  for ( i = 0; i < n; i++ )
  {
    x[i] = 0.0;
  }
//
//  Solve the linear system.
//
  for ( i = 1; i <= 3; i++ )
  {
    r83_jac_sl ( n, a, b, x, maxit );

    r8vec_print ( n, x, "  Current estimated solution:" );
  }

  delete [] a;
  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

void r83_mtv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83_MTV_TEST tests R83_MTV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    08 September 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a_83;
  double *a_ge;
  double *ax_83;
  double *ax_ge;
  int i;
  int m;
  int n;
  int seed;
  double *x;

  cout << "\n";
  cout << "R83_MTV_TEST\n";
  cout << "  R83_MTV computes b=A'*x, where A is an R83 matrix.\n";
  cout << "  We check three cases, M<N, M=N, M>N.\n";

  for ( i = 1; i <= 3; i++ )
  {
    if ( i == 1 )
    {
      m = 3;
      n = 5;
    }
    else if ( i == 2 )
    {
      m = 5;
      n = 5;
    }
    else if ( i == 3 )
    {
      m = 5;
      n = 3;
    }

    seed = 123456789;
    a_83 = r83_random ( m, n, seed );
    x = r8vec_indicator1_new ( m );
    ax_83 = r83_mtv ( m, n, a_83, x );
    a_ge = r83_to_r8ge ( m, n, a_83 );
    ax_ge = r8ge_mtv ( m, n, a_ge, x );
    r8vec2_print ( n, ax_83, ax_ge, "  Product comparison:" );

    delete [] a_83;
    delete [] a_ge;
    delete [] ax_83;
    delete [] ax_ge;
    delete [] x;
  }
  return;
}
//*****************************************************************************/

void r83_mv_test ( )

//*****************************************************************************/
//
//  Purpose:
//
//    R83_MV_TEST tests R83_MV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    08 September 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a_83;
  double *a_ge;
  double *ax_83;
  double *ax_ge;
  int i;
  int m;
  int n;
  int seed;
  double *x;

  cout << "\n";
  cout << "R83_MV_TEST\n";
  cout << "  R83_MV computes b=A*x, where A is an R83 matrix.\n";
  cout << "  We check three cases, M<N, M=N, M>N.\n";

  for ( i = 1; i <= 3; i++ )
  {
    if ( i == 1 )
    {
      m = 3;
      n = 5;
    }
    else if ( i == 2 )
    {
      m = 5;
      n = 5;
    }
    else if ( i == 3 )
    {
      m = 5;
      n = 3;
    }

    seed = 123456789;
    a_83 = r83_random ( m, n, seed );
    x = r8vec_indicator1_new ( n );
    ax_83 = r83_mv ( m, n, a_83, x );
    a_ge = r83_to_r8ge ( m, n, a_83 );
    ax_ge = r8ge_mv ( m, n, a_ge, x );
    r8vec2_print ( m, ax_83, ax_ge, "  Product comparison:" );

    delete [] a_83;
    delete [] a_ge;
    delete [] ax_83;
    delete [] ax_ge;
    delete [] x;
  }
  return;
}
//****************************************************************************80

void r83_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83_PRINT_TEST tests R83_PRINT.
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
  int m = 5;
  int n = 4;

  cout << "\n";
  cout << "R83_PRINT_TEST\n";
  cout << "  R83_PRINT prints an R83 matrix.\n";
   cout << "  Matrix order is " << m << " by " << n << "\n";

  a = r83_indicator ( m, n );

  r83_print ( m, n, a, "  The R83 matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r83_print_some_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83_PRINT_SOME_TEST tests R83_PRINT_SOME.
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
  int m = 5;
  int n = 5;

  cout << "\n";
  cout << "R83_PRINT_SOME_TEST\n";
  cout << "  R83_PRINT prints some of an R83 matrix.\n";
  cout << "  Matrix order is " << m << " by " << n << "\n";

  a = r83_indicator ( m, n );

  r83_print_some ( m, n, a, 1, 1, 4, 3, "  Rows 1-4, Cols 1-3:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r83_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83_RANDOM_TEST tests R83_RANDOM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 September 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int m = 5;
  int n = 4;
  int seed = 123456789;

  cout << "\n";
  cout << "R83_RANDOM_TEST\n";
  cout << "  R83_RANDOM randomizes an R83 matrix.\n";
  cout << "  Matrix order is " << n << " by " << n << "\n";

  seed = 123456789;
  a = r83_random ( m, n, seed );

  r83_print ( m, n, a, "  The R83 matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r83_res_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83_RES_TEST tests R83_RES.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 September 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *b;
  int i;
  int m;
  int n;
  double *r;
  int seed;
  double *x;

  cout << "\n";
  cout << "R83_RES_TEST\n";
  cout << "  R83_RES computes b-A*x, where A is an R83 matrix.\n";
  cout << "  We check three cases, M<N, M=N, M>N.\n";

  for ( i = 1; i <= 3; i++ )
  {
    if ( i == 1 )
    {
      m = 3;
      n = 5;
    }
    else if ( i == 2 )
    {
      m = 5;
      n = 5;
    }
    else if ( i == 3 )
    {
      m = 5;
      n = 3;
    }

    seed = 123456789;
    a = r83_random ( m, n, seed );
    x = r8vec_indicator1_new ( n );
    b = r83_mv ( m, n, a, x );
    r = r83_res ( m, n, a, x, b );
    r8vec_print ( m, r, "  Residual A*x-b:" );

    delete [] a;
    delete [] b;
    delete [] r;
    delete [] x;
  }

  return;
}
//****************************************************************************80

void r83_to_r8ge_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83_TO_R8GE_TEST tests R83_TO_R8GE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 September 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a_83;
  double *a_ge;
  int i;
  int m;
  int n;
  int seed;

  cout << "\n";
  cout << "R83_TO_R8GE_TEST\n";
  cout << "  R83_TO_R8GE converts an R83 matrix to R8GE format.\n";
  cout << "  We check three cases, M<N, M=N, M>N.\n";

  for ( i = 1; i <= 3; i++ )
  {
    if ( i == 1 )
    {
      m = 3;
      n = 5;
    }
    else if ( i == 2 )
    {
      m = 5;
      n = 5;
    }
    else if ( i == 3 )
    {
      m = 5;
      n = 3;
    }

    seed = 123456789;
    a_83 = r83_random ( m, n, seed );
    r83_print ( m, n, a_83, "  The R83 matrix:" );
    a_ge = r83_to_r8ge ( m, n, a_83 );
    r8ge_print ( m, n, a_ge, "  The R8GE matrix:" );

    delete [] a_83;
    delete [] a_ge;
  }
  return;
}
//****************************************************************************80

void r83_zeros_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83_ZEROS_TEST tests R83_ZEROS.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 September 2015
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
  cout << "R83_ZEROS_TEST\n";
  cout << "  R83_ZEROS zeros an R83 matrix.\n";
  cout << "  Matrix order is " << n << " by " << n << "\n";

  a = r83_zeros ( m, n );

  r83_print ( m, n, a, "  The R83 matrix:" );

  delete [] a;

  return;
}
