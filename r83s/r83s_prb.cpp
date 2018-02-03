# include <cmath>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r83s.hpp"

int main ( );

void r83s_cg_test ( );
void r83s_dif2_test ( );
void r83s_gs_sl_test ( );
void r83s_indicator_test ( );
void r83s_jac_sl_test ( );
void r83s_mtv_test ( );
void r83s_mv_test ( );
void r83s_print_test ( );
void r83s_print_some_test ( );
void r83s_random_test ( );
void r83s_res_test ( );
void r83s_to_r8ge_test ( );
void r83s_zeros_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for R83S_PRB.
//
//  Discussion:
//
//    R83S_PRB tests R83S.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 September 2015
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "R83S_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test R83S.\n";

  r83s_cg_test ( );
  r83s_dif2_test ( );
  r83s_gs_sl_test ( );
  r83s_indicator_test ( );
  r83s_jac_sl_test ( );
  r83s_mtv_test ( );
  r83s_mv_test ( );
  r83s_print_test ( );
  r83s_print_some_test ( );
  r83s_random_test ( );
  r83s_res_test ( );
  r83s_to_r8ge_test ( );
  r83s_zeros_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "R83S_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void r83s_cg_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83S_CG_TEST tests R83S_CG.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    05 September 2015
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
  cout << "R83S_CG_TEST\n";
  cout << "  R83S_CG applies CG to an R83S matrix.\n";

  n = 10;
//
//  Let A be the -1 2 -1 matrix.
//
  a = r83s_dif2 ( n, n );
//
//  Choose a random solution.
//
  seed = 123456789;
  x1 = r8vec_uniform_01_new ( n, seed );
//
//  Compute the corresponding right hand side.
//
  b = r83s_mv ( n, n, a, x1 );
//
//  Call the CG routine.
//
  x2 = new double[n];
  for ( i = 0; i < n; i++ )
  {
    x2[i] = 1.0;
  }
  r83s_cg ( n, a, b, x2 );
//
//  Compute the residual.
//
  r = r83s_res ( n, n, a, x2, b );
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

void r83s_dif2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83S_DIF2_TEST tests R83S_DIF2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 September 2015
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
  cout << "R83S_DIF2_TEST\n";
  cout << "  R83S_DIF2 sets up the second difference matrix in R83S format.\n";
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

    a = r83s_dif2 ( m, n );

    r83s_print ( m, n, a, "  The R83S matrix:" );

    delete [] a;
  }

  return;
}
//****************************************************************************80

void r83s_gs_sl_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83S_GS_SL_TEST tests R83S_GS_SL.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 September 2015
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
  cout << "R83S_GS_SL_TEST\n";
  cout << "  R83S_GS_SL uses Gauss-Seidel iteration on an R83S matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
  cout << "  Iterations per call = " << maxit << "\n";
//
//  Set the matrix values.
//
  a = r83s_dif2 ( n, n );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( n );
//
//  Compute the corresponding right hand side.
//
  b = r83s_mv ( n, n, a, x );
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
    r83s_gs_sl ( n, a, b, x, maxit );

    r8vec_print ( n, x, "  Current estimated solution:" );
  }

  delete [] a;
  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

void r83s_indicator_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83S_INDICATOR_TEST tests R83S_INDICATOR.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 September 2015
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
  cout << "R83S_INDICATOR_TEST\n";
  cout << "  R83S_INDICATOR sets up an R83S indicator matrix.\n";

  a = r83s_indicator ( m, n );

  r83s_print ( m, n, a, "  The R83S indicator matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r83s_jac_sl_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83S_JAC_SL_TEST tests R83S_JAC_SL.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 September 2015
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
  cout << "R83S_JAC_SL_TEST\n";
  cout << "  R83S_JAC_SL solves a linear system using Jacobi iteration,\n";
  cout << "  for an R83S matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
  cout << "  Iterations per call = " << maxit << "\n";
//
//  Set the matrix values.
//
  a = r83s_dif2 ( n, n );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( n );
//
//  Compute the corresponding right hand side.
//
  b = r83s_mv ( n, n, a, x );
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
    r83s_jac_sl ( n, a, b, x, maxit );

    r8vec_print ( n, x, "  Current estimated solution:" );
  }

  delete [] a;
  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

void r83s_mtv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83S_MTV_TEST tests R83S_MTV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    05 September 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a_83s;
  double *a_ge;
  double *ax_83s;
  double *ax_ge;
  int i;
  int m;
  int n;
  int seed;
  double *x;

  cout << "\n";
  cout << "R83S_MTV_TEST\n";
  cout << "  R83S_MTV computes b=A'*x, where A is an R83S matrix.\n";
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
    a_83s = r83s_random ( m, n, seed );
    x = r8vec_indicator1_new ( m );
    ax_83s = r83s_mtv ( m, n, a_83s, x );
    a_ge = r83s_to_r8ge ( m, n, a_83s );
    ax_ge = r8ge_mtv ( m, n, a_ge, x );
    r8vec2_print ( n, ax_83s, ax_ge, "  Product comparison:" );

    delete [] a_83s;
    delete [] a_ge;
    delete [] ax_83s;
    delete [] ax_ge;
    delete [] x;
  }
  return;
}
//****************************************************************************80

void r83s_mv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83S_MV_TEST tests R83S_MV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    05 September 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a_83s;
  double *a_ge;
  double *ax_83s;
  double *ax_ge;
  int i;
  int m;
  int n;
  int seed;
  double *x;

  cout << "\n";
  cout << "R83S_MV_TEST\n";
  cout << "  R83S_MV computes b=A*x, where A is an R83S matrix.\n";
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
    a_83s = r83s_random ( m, n, seed );
    x = r8vec_indicator1_new ( n );
    ax_83s = r83s_mv ( m, n, a_83s, x );
    a_ge = r83s_to_r8ge ( m, n, a_83s );
    ax_ge = r8ge_mv ( m, n, a_ge, x );
    r8vec2_print ( m, ax_83s, ax_ge, "  Product comparison:" );

    delete [] a_83s;
    delete [] a_ge;
    delete [] ax_83s;
    delete [] ax_ge;
    delete [] x;
  }
  return;
}
//****************************************************************************80

void r83s_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83S_PRINT_TEST tests R83S_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 September 2015
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
  cout << "R83S_PRINT_TEST\n";
  cout << "  R83S_PRINT prints an R83S matrix.\n";

  a = r83s_indicator ( m, n );

  r83s_print ( m, n, a, "  The R83S  matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r83s_print_some_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83S_PRINT_SOME_TEST tests R83S_PRINT_SOME.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 September 2015
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
  cout << "R83S_PRINT_SOME_TEST\n";
  cout << "  R83S_PRINT_SOME prints some of an R83S matrix.\n";

  a = r83s_indicator ( m, n );

  r83s_print_some ( m, n, a, 1, 1, 4, 3, "  Rows 1-4, Cols 1-3:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r83s_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83S_RANDOM_TEST tests R83S_RANDOM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 September 2015
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
  cout << "R83S_RANDOM_TEST\n";
  cout << "  R83S_RANDOM randomizes an R83S matrix.\n";

  seed = 123456789;
  a = r83s_random ( m, n, seed );

  r83s_print ( m, n, a, "  The R83  matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r83s_res_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83S_RES_TEST tests R83S_RES.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    05 September 2015
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
  cout << "R83S_RES_TEST\n";
  cout << "  R83S_RES computes b-A*x, where A is an R83S matrix.\n";
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
    a = r83s_random ( m, n, seed );
    x = r8vec_indicator1_new ( n );
    b = r83s_mv ( m, n, a, x );
    r = r83s_res ( m, n, a, x, b );
    r8vec_print ( m, r, "  Residual A*x-b:" );

    delete [] a;
    delete [] b;
    delete [] r;
    delete [] x;
  }

  return;
}
//****************************************************************************80

void r83s_to_r8ge_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83S_TO_R8GE_TEST tests R83S_TO_R8GE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    05 September 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a_83s;
  double *a_ge;
  int i;
  int m;
  int n;
  int seed;

  cout << "\n";
  cout << "R83S_TO_R8GE_TEST\n";
  cout << "  R83S_TO_R8GE converts an R83S matrix to R8GE format.\n";
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
    a_83s = r83s_random ( m, n, seed );
    r83s_print ( m, n, a_83s, "  The R83S matrix:" );
    a_ge = r83s_to_r8ge ( m, n, a_83s );
    r8ge_print ( m, n, a_ge, "  The R8GE matrix:" );

    delete [] a_83s;
    delete [] a_ge;
  }
  return;
}
//****************************************************************************80

void r83s_zeros_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83S_ZEROS_TEST tests R83S_ZEROS.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 September 2015
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
  cout << "R83S_ZEROS_TEST\n";
  cout << "  R83S_ZEROS zeros an R83S matrix.\n";

  a = r83s_zeros ( m, n );

  r83s_print ( m, n, a, "  The R83S matrix:" );

  delete [] a;

  return;
}

