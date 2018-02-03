# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8sm.hpp"

int main ( );
void r8sm_indicator_test ( );
void r8sm_ml_test ( );
void r8sm_mtv_test ( );
void r8sm_mv_test ( );
void r8sm_print_test ( );
void r8sm_print_some_test ( );
void r8sm_random_test ( );
void r8sm_sl_test ( );
void r8sm_to_r8ge_test ( );
void r8sm_zeros_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for R8SM_PRB.
//
//  Discussion:
//
//    R8SM_PRB tests the R8SM library.
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
  timestamp ( );
  cout << "\n";
  cout << "R8SM_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the R8SM library.\n";

  r8sm_indicator_test ( );
  r8sm_ml_test ( );
  r8sm_mtv_test ( );
  r8sm_mv_test ( );
  r8sm_print_test ( );
  r8sm_print_some_test ( );
  r8sm_random_test ( );
  r8sm_sl_test ( );
  r8sm_to_r8ge_test ( );
  r8sm_zeros_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "R8SM_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void r8sm_indicator_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SM_INDICATOR_TEST tests R8SM_INDICATOR.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    30 May 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int m = 5;
  int n = 4;
  double *u;
  double *v;

  cout << "\n";
  cout << "R8SM_INDICATOR_TEST\n";
  cout << "  R8SM_INDICATOR sets up an R8SM indicator matrix;\n";
  cout << "\n";
  cout << "  M = " << m << "\n";
  cout << "  N = " << n << "\n";

  a = new double[m*n];
  u = new double[m];
  v = new double[n];

  r8sm_indicator ( m, n, a, u, v );

  r8sm_print ( m, n, a, u, v, "  The R8SM indicator matrix:" );

  delete [] a;
  delete [] u;
  delete [] v;

  return;
}
//****************************************************************************80

void r8sm_ml_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SM_ML_TEST tests R8SM_ML.
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
# define M 7
# define N 7

  double a[M*N];
  double *b;
  double *b2;
  int info;
  int i;
  int job;
  int pivot[N];
  int seed = 123456789;
  double u[M];
  double v[N];
  double *x;

  cout << "\n";
  cout << "R8SM_ML_TEST\n";
  cout << "  R8SM_ML computes A*x or A'*X\n";
  cout << "  where A is a Sherman Morrison matrix.\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << M << "\n";
  cout << "  Matrix columns N = " << N << "\n";

  for ( job = 0; job <= 1; job++ )
  {
//
//  Set the matrix.
//
    r8sm_random ( M, N, seed, a, u, v );

    r8sm_print ( M, N, a, u, v, "  The Sherman Morrison matrix:" );
//
//  Set the desired solution.
//
    x = r8vec_indicator1_new ( N );
//
//  Compute the corresponding right hand side.
//
    if ( job == 0 )
    {
      b = r8sm_mv ( M, N, a, u, v, x );
    }
    else
    {
      b = r8sm_mtv ( M, N, a, u, v, x );
    }
//
//  Factor the matrix.
//
    info = r8ge_fa ( N, a, pivot );

    if ( info != 0 )
    {
      cout << "\n";
      cout << "  Fatal error!\n";
      cout << "  R8GE_FA declares the matrix is singular!\n";
      cout << "  The value of INFO is " << info << "\n";
      return;
    }
//
//  Now multiply factored matrix times solution to get right hand side again.
//
    b2 = r8sm_ml ( N, a, u, v, pivot, x, job );

    if ( job == 0 )
    {
      r8vec2_print_some ( N, b, b2, 10, "  A*x and PLU*x" );
    }
    else
    {
      r8vec2_print_some ( N, b, b2, 10, "  A'*x and (PLU)'*x" );
    }

    delete [] b;
    delete [] b2;
    delete [] x;
  }

  return;
# undef M
# undef N
}
//****************************************************************************80

void r8sm_mtv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SM_MTV_TEST tests R8SM_MTV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    30 May 2016
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
  double *u;
  double *v;
  double *x;

  cout << "\n";
  cout << "R8SM_MTV_TEST\n";
  cout << "  R8SM_MTV computes b=A'*x, where A is an R8SM matrix;\n";
  cout << "\n";
  cout << "  M = " << m << "\n";
  cout << "  N = " << n << "\n";

  a = new double[m*n];
  u = new double[m];
  v = new double[n];
  
  r8sm_indicator ( m, n, a, u, v );

  r8sm_print ( m, n, a, u, v, "  The R8SM matrix:" );

  x = r8vec_indicator1_new ( m );

  r8vec_print ( m, x, "  The vector x:" );

  b = r8sm_mtv ( m, n, a, u, v, x );

  r8vec_print ( n, b, "  The result b=A'*x:" );

  delete [] a;
  delete [] b;
  delete [] u;
  delete [] v;
  delete [] x;

  return;
}
//****************************************************************************80

void r8sm_mv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SM_MV_TEST tests R8SM_MV.
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
  double *a;
  double *b;
  int m = 5;
  int n = 4;
  double *u;
  double *v;
  double *x;

  cout << "\n";
  cout << "R8SM_MV_TEST\n";
  cout << "  R8SM_MV computes b=A*x, where A is an R8SM matrix;\n";
  cout << "\n";
  cout << "  M = " << m << "\n";
  cout << "  N = " << n << "\n";

  a = new double[m*n];
  u = new double[m];
  v = new double[n];
  
  r8sm_indicator ( m, n, a, u, v );

  r8sm_print ( m, n, a, u, v, "  The R8SM matrix:" );

  x = r8vec_indicator1_new ( n );

  r8vec_print ( n, x, "  The vector x:" );

  b = r8sm_mv ( m, n, a, u, v, x );

  r8vec_print ( m, b, "  The result b=A*x:" );

  delete [] a;
  delete [] b;
  delete [] u;
  delete [] v;
  delete [] x;

  return;
}
//****************************************************************************80

void r8sm_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SM_PRINT_TEST tests R8SM_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    30 May 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int m = 5;
  int n = 4;
  double *u;
  double *v;

  cout << "\n";
  cout << "R8SM_PRINT_TEST\n";
  cout << "  R8SM_PRINT prints an R8SM matrix;\n";
  cout << "\n";
  cout << "  M = " << m << "\n";
  cout << "  N = " << n << "\n";

  a = new double[m*n];
  u = new double[m];
  v = new double[n];

  r8sm_indicator ( m, n, a, u, v );

  r8sm_print ( m, n, a, u, v, "  The R8SM matrix:" );

  delete [] a;
  delete [] u;
  delete [] v;

  return;
}
//****************************************************************************80

void r8sm_print_some_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SM_PRINT_SOME_TEST tests R8SM_PRINT_SOME.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    30 May 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int m = 9;
  int n = 9;
  double *u;
  double *v;

  cout << "\n";
  cout << "R8SM_PRINT_SOME_TEST\n";
  cout << "  R8SM_PRINT_SOME prints some of an R8SM matrix;\n";
  cout << "\n";
  cout << "  M = " << m << "\n";
  cout << "  N = " << n << "\n";

  a = new double[m*n];
  u = new double[m];
  v = new double[n];

  r8sm_indicator ( m, n, a, u, v );

  r8sm_print_some ( m, n, a, u, v, 2, 3, 5, 7, "  Rows 2-5, Cols 3-7:" );

  delete [] a;
  delete [] u;
  delete [] v;

  return;
}
//****************************************************************************80

void r8sm_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SM_RANDOM_TEST tests R8SM_RANDOM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    30 May 2016
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
  double *u;
  double *v;

  cout << "\n";
  cout << "R8SM_RANDOM_TEST\n";
  cout << "  R8SM_RANDOM sets up a random R8SM matrix;\n";
  cout << "\n";
  cout << "  M = " << m << "\n";
  cout << "  N = " << n << "\n";

  a = new double[m*n];
  u = new double[m];
  v = new double[n];

  seed = 123456789;
  r8sm_random ( m, n, seed, a, u, v );

  r8sm_print ( m, n, a, u, v, "  The random R8SM matrix:" );

  delete [] a;
  delete [] u;
  delete [] v;

  return;
}
//****************************************************************************80

void r8sm_sl_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SM_SL_TEST tests R8SM_SL.
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
# define M 5
# define N 5

  double a[M*N];
  double *b;
  int i;
  int ierror;
  int info;
  int job;
  int pivot[N];
  int seed = 123456789;
  double u[M];
  double v[N];
  double *x;

  cout << "\n";
  cout << "R8SM_SL_TEST\n";
  cout << "  R8SM_SL implements the Sherman-Morrison method \n";
  cout << "  for solving a perturbed linear system.\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << M << "\n";
  cout << "  Matrix columns N = " << N << "\n";

  for ( job = 1; 0 <= job; job-- )
  {
//
//  Set the matrix.
//
    r8sm_random ( M, N, seed, a, u, v );

    r8sm_print ( M, N, a, u, v, "  The Sherman-Morrison matrix A:" );
//
//  Set the desired solution.
//
    x = r8vec_indicator1_new ( N );
//
//  Compute the corresponding right hand side.
//
    if ( job == 0 )
    {
      b = r8sm_mv ( M, N, a, u, v, x );
    }
    else
    {
      b = r8sm_mtv ( M, N, a, u, v, x );
    }

    r8vec_print ( N, b, "  The right hand side vector B:" );
//
//  Factor the matrix.
//
    info = r8ge_fa ( N, a, pivot );

    if ( info != 0 )
    {
      cout << "\n";
      cout << "R8SM_SL_TEST - Fatal error!\n";
      cout << "  R8GE_FA declares the matrix is singular!\n";
      cout << "  The value of INFO is " << info << "\n";
      continue;
    }
//
//  Solve the linear system.
//
    b = r8sm_sl ( N, a, u, v, b, pivot, job );
 
    if ( job == 0 )
    {
      r8vec_print ( N, b, "  Solution to A * X = B:" );
    }
    else
    {
      r8vec_print ( N, b, "  Solution to A' * X = B:" );
    }

    delete [] b;
  }

  return;
# undef M
# undef N
}
//****************************************************************************80

void r8sm_to_r8ge_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SM_TO_R8GE_TEST tests R8SM_TO_R8GE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    30 May 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *a_r8ge;
  int m = 5;
  int n = 4;
  double *u;
  double *v;

  cout << "\n";
  cout << "R8SM_TO_R8GE_TEST\n";
  cout << "  R8SM_TO_R8GE converts an R8SM matrix to R8GE format;\n";
  cout << "\n";
  cout << "  M = " << m << "\n";
  cout << "  N = " << n << "\n";

  a = new double[m*n];
  u = new double[m];
  v = new double[n];

  r8sm_indicator ( m, n, a, u, v );

  r8sm_print ( m, n, a, u, v, "  The R8SM matrix:" );

  a_r8ge = r8sm_to_r8ge ( m, n, a, u, v );

  r8ge_print ( m, n, a_r8ge, "  The R8GE matrix:" );

  delete [] a;
  delete [] a_r8ge;
  delete [] u;
  delete [] v;

  return;
}
//****************************************************************************80

void r8sm_zeros_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SM_ZEROS_TEST tests R8SM_ZEROS.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    30 May 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int m = 5;
  int n = 4;
  double *u;
  double *v;

  cout << "\n";
  cout << "R8SM_ZEROS_TEST\n";
  cout << "  R8SM_ZEROS sets up a zero R8SM matrix;\n";
  cout << "\n";
  cout << "  M = " << m << "\n";
  cout << "  N = " << n << "\n";

  a = new double[m*n];
  u = new double[m];
  v = new double[n];

  r8sm_zeros ( m, n, a, u, v );

  r8sm_print ( m, n, a, u, v, "  The R8SM zero matrix:" );

  delete [] a;
  delete [] u;
  delete [] v;

  return;
}

