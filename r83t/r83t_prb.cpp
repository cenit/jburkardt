# include <cmath>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r83t.hpp"

int main ( );
void r83t_cg_test ( );
void r83t_dif2_test ( );
void r83t_gs_sl_test ( );
void r83t_indicator_test ( );
void r83t_jac_sl_test ( );
void r83t_mtv_test ( );
void r83t_mv_test ( );
void r83t_print_test ( );
void r83t_print_some_test ( );
void r83t_random_test ( );
void r83t_res_test ( );
void r83t_to_r8ge_test ( );
void r83t_zeros_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for R83T_PRB.
//
//  Discussion:
//
//    R83T_PRB tests R83T.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    29 May 2016
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "R83T_PRB\n";
  cout << "  C version\n";
  cout << "  Test the R83T library.\n";

  r83t_cg_test ( );
  r83t_dif2_test ( );
  r83t_gs_sl_test ( );
  r83t_indicator_test ( );
  r83t_jac_sl_test ( );
  r83t_mtv_test ( );
  r83t_mv_test ( );
  r83t_print_test ( );
  r83t_print_some_test ( );
  r83t_random_test ( );
  r83t_res_test ( );
  r83t_to_r8ge_test ( );
  r83t_zeros_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "R83T_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void r83t_cg_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83T_CG_TEST tests R83T_CG.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    29 May 2016
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

  cout << "\n";
  cout << "R83T_CG_TEST\n";
  cout << "  R83T_CG applies CG to an R83 matrix.\n";

  n = 10;
//
//  Let A be the -1 2 -1 matrix.
//
  a = r83t_dif2 ( n, n );
//
//  Choose a random solution.
//
  seed = 123456789;
  x1 = r8vec_uniform_01_new ( n, seed );
//
//  Compute the corresponding right hand side.
//
  b = r83t_mv ( n, n, a, x1 );
//
//  Call the CG routine.
//
  x2 = new double[n];
  for ( i = 0; i < n; i++ )
  {
    x2[i] = 1.0;
  }
  r83t_cg ( n, a, b, x2 );
//
//  Compute the residual.
//
  r = r83t_res ( n, n, a, x2, b );
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

void r83t_dif2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83T_DIF2_TEST tests R83T_DIF2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    29 May 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int i;
  int m;
  int n;

  cout << "\n";
  cout << "R83T_DIF2_TEST\n";
  cout << "  R83T_DIF2 sets up the second difference matrix.\n";
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

    a = r83t_dif2 ( m, n );

    r83t_print ( m, n, a, "  The R83T matrix:" );

    delete [] a;
  }

  return;
}
//****************************************************************************80

void r83t_gs_sl_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83T_GS_SL_TEST tests R83T_GS_SL.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    29 May 2016
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
  cout << "R83T_GS_SL_TEST\n";
  cout << "  R83T_GS_SL solves a linear system using Gauss-Seidel iteration.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
  cout << "  Iterations per call = " << maxit << "\n";
//
//  Set the matrix values.
//
  a = r83t_dif2 ( n, n );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( n );
//
//  Compute the corresponding right hand side.
//
  b = r83t_mv ( n, n, a, x );

  r8vec_print ( n, b, "  Right hand side b:" );
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
    r83t_gs_sl ( n, a, b, x, maxit );

    r8vec_print ( n, x, "  Current estimated solution:" );
  }

  delete [] a;
  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

void r83t_indicator_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83T_INDICATOR_TEST tests R83T_INDICATOR.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    29 May 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int i;
  int m;
  int n;

  cout << "\n";
  cout << "R83T_INDICATOR_TEST\n";
  cout << "  R83T_INDICATOR sets up an R83T indicator matrix.\n";
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

    a = r83t_indicator ( m, n );

    r83t_print ( m, n, a, "  The R83T indicator matrix:" );

    delete [] a;
  }

  return;
}
//****************************************************************************80

void r83t_jac_sl_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83T_JAC_SL_TEST tests R83T_JAC_SL.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    29 May 2016
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
  cout << "R83T_JAC_SL_TEST\n";
  cout << "  R83T_JAC_SL solves a linear system using Jacobi iteration,\n";
  cout << "  for an R83T matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
  cout << "  Iterations per call = " << maxit << "\n";
//
//  Set the matrix values.
//
  a = r83t_dif2 ( n, n );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( n );
//
//  Compute the corresponding right hand side.
//
  b = r83t_mv ( n, n, a, x );

  r8vec_print  ( n, b, "  The right hand side b:" );
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
    r83t_jac_sl ( n, a, b, x, maxit );

    r8vec_print ( n, x, "  Current estimated solution:" );
  }

  delete [] a;
  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

void r83t_mtv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83T_MTV_TEST tests R83T_MTV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    29 May 2016
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
  cout << "R83T_MTV_TEST\n";
  cout << "  R83T_MTV computes b=A'*x, where A is an R83T matrix.\n";
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
    a_83 = r83t_random ( m, n, seed );
    x = r8vec_indicator1_new ( m );
    ax_83 = r83t_mtv ( m, n, a_83, x );
    a_ge = r83t_to_r8ge ( m, n, a_83 );
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
//****************************************************************************80

void r83t_mv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83T_MV_TEST tests R83T_MV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    29 May 2016
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
  cout << "R83T_MV_TEST\n";
  cout << "  R83T_MV computes b=A*x, where A is an R83T matrix.\n";
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
    a_83 = r83t_random ( m, n, seed );
    x = r8vec_indicator1_new ( n );
    ax_83 = r83t_mv ( m, n, a_83, x );
    a_ge = r83t_to_r8ge ( m, n, a_83 );
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

void r83t_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83T_PRINT_TEST tests R83T_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    29 May 2016
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
  cout << "R83T_PRINT_TEST\n";
  cout << "  R83T_PRINT prints an R83T matrix.\n";

  a = r83t_indicator ( m, n );

  r83t_print ( m, n, a, "  The R83T matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r83t_print_some_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83T_PRINT_SOME_TEST tests R83T_PRINT_SOME.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    29 May 2016
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
  cout << "R83T_PRINT_SOME_TEST\n";
  cout << "  R83T_PRINT_SOME prints some of an R83T matrix.\n";

  a = r83t_indicator ( m, n );

  r83t_print_some ( m, n, a, 1, 1, 4, 3, "  Rows 1-4, Cols 1-3:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r83t_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83T_RANDOM_TEST tests R83T_RANDOM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    29 May 2016
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
  cout << "R83T_RANDOM_TEST\n";
  cout << "  R83T_RANDOM randomizes an R83T matrix.\n";

  seed = 123456789;
  a = r83t_random ( m, n, seed );

  r83t_print ( m, n, a, "  The R83T matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r83t_res_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83T_RES_TEST tests R83T_RES.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    29 May 2016
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
  cout << "R83T_RES_TEST\n";
  cout << "  R83T_RES computes b-A*x, where A is an R83T matrix.\n";
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
    a = r83t_random ( m, n, seed );
    x = r8vec_indicator1_new ( n );
    b = r83t_mv ( m, n, a, x );
    r = r83t_res ( m, n, a, x, b );
    r8vec_print ( m, r, "  Residual A*x-b:" );

    delete [] a;
    delete [] b;
    delete [] r;
    delete [] x;
  }

  return;
}
//****************************************************************************80

void r83t_to_r8ge_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83T_TO_R8GE_TEST tests R83T_TO_R8GE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    29 May 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a_83t;
  double *a_ge;
  int i;
  int m;
  int n;
  int seed;

  cout << "\n";
  cout << "R83T_TO_R8GE_TEST\n";
  cout << "  R83T_TO_R8GE converts an R83T matrix to R8GE format.\n";
  cout << "  We check three cases, M<N, M=N, M>N.\n";

  for ( i = 0; i < 3; i++ )
  {
    if ( i == 0 )
    {
      m = 3;
      n = 5;
    }
    else if ( i == 1 )
    {
      m = 5;
      n = 5;
    }
    else if ( i == 2 )
    {
      m = 5;
      n = 3;
    }

    seed = 123456789;
    a_83t = r83t_random ( m, n, seed );
    r83t_print ( m, n, a_83t, "  The R83T matrix:" );
    a_ge = r83t_to_r8ge ( m, n, a_83t );
    r8ge_print ( m, n, a_ge, "  The R8GE matrix:" );

    delete [] a_83t;
    delete [] a_ge;
  }
  return;
}
//****************************************************************************80

void r83t_zeros_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83T_ZEROS_TEST tests R83T_ZEROS.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    29 May 2016
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
  cout << "R83T_ZEROS_TEST\n";
  cout << "  R83T_ZEROS zeros an R83T matrix.\n";

  a = r83t_zeros ( m, n );

  r83t_print ( m, n, a, "  The R83T matrix:" );

  delete [] a;

  return;
}

