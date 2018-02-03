# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r83p.hpp"

int main ( );
void r83p_det_test ( );
void r83p_fa_test ( );
void r83p_indicator_test ( );
void r83p_ml_test ( );
void r83p_mtv_test ( );
void r83p_mv_test ( );
void r83p_print_test ( );
void r83p_print_some_test ( );
void r83p_random_test ( );
void r83p_sl_test ( );
void r83p_to_r8ge_test ( );
void r83p_zeros_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for R83P_PRB.
//
//  Discussion:
//
//    R83P_PRB tests the R83P library.
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
  cout << "R83P_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the R83P library.\n";

  r83p_det_test ( );
  r83p_fa_test ( );
  r83p_indicator_test ( );
  r83p_ml_test ( );
  r83p_mtv_test ( );
  r83p_mv_test ( );
  r83p_print_test ( );
  r83p_print_some_test ( );
  r83p_random_test ( );
  r83p_sl_test ( );
  r83p_to_r8ge_test ( );
  r83p_zeros_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "R83P_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void r83p_det_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83P_DET_TEST tests R83P_DET.
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
# define N 12

  double *a;
  double *b;
  double det;
  int info;
  int pivot[N];
  int seed = 123456789;
  double work2[N-1];
  double work3[N-1];
  double work4;

  cout << "\n";
  cout << "R83P_DET_TEST\n";
  cout << "  R83P_DET, determinant of a tridiagonal\n";
  cout << "  periodic matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
//
//  Set the matrix.
//
  a = r83p_random ( N, seed );

  r83p_print ( N, a, "  The periodic tridiagonal matrix:" );
//
//  Copy the matrix into a general array.
//
  b = r83p_to_r8ge ( N, a );
//
//  Factor the matrix.
//
  info = r83p_fa ( N, a, work2, work3, &work4 );
//
//  Compute the determinant.
//
  det = r83p_det ( N, a, work4 );

  cout << "\n";
  cout << "  R83P_DET computes the determinant = " << det << "\n";
//
//  Factor the general matrix.
//
  info = r8ge_fa ( N, b, pivot );
//
//  Compute the determinant.
//
  det = r8ge_det ( N, b, pivot );

  cout << "  R8GE_DET computes the determinant = " << det << "\n";

  delete [] a;
  delete [] b;

  return;
# undef N
}
//****************************************************************************80

void r83p_fa_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83P_FA_TEST tests R83P_FA.
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
  int info;
  int job;
  int seed = 123456789;
  double work2[N-1];
  double work3[N-1];
  double work4;
  double *x;

  cout << "\n";
  cout << "R83P_FA_TEST\n";
  cout << "  R83P_FA factors a tridiagonal periodic system.\n";
  cout << "  which can then be solved by R83P_SL.\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
//
//  Set the matrix.
//
  a = r83p_random ( N, seed );
//
//  Factor the matrix.
//
  info = r83p_fa ( N, a, work2, work3, &work4 );

  if ( info != 0 )
  {
    cout << "\n";
    cout << "R83P_FA_TEST - Fatal error!\n";
    cout << "  R83P_FA returns INFO = " << info << "\n";
    return;
  }

  for ( job = 0; job <= 1; job++ )
  {
//
//  Set the desired solution.
//
    x = r8vec_indicator1_new ( N );
//
//  Compute the corresponding right hand side.
//
    b = r83p_ml ( N, a, x, job );
//
//  Solve the linear system.
//
    delete [] x;

    x = r83p_sl ( N, a, b, job, work2, work3, work4 );

    if ( job == 0 )
    {
      r8vec_print ( N, x, "  Solution to A*x=b:" );
    }
    else
    {
      r8vec_print ( N, x, "  Solution to A'*x=b:" );
    }

    delete [] x;
    delete [] b;
  }
 
  delete [] a;

  return;
# undef N
}
//****************************************************************************80

void r83p_indicator_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83P_INDICATOR_TEST tests R83P_INDICATOR.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    16 May 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n = 5;

  cout << "\n";
  cout << "R83P_INDICATOR_TEST\n";
  cout << "  R83P_INDICATOR sets up an R83P indicator matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r83p_indicator ( n );

  r83p_print ( n, a, "  The R83P indicator matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r83p_ml_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83P_ML_TEST tests R83P_ML.
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
  double work2[N-1];
  double work3[N-1];
  double work4;
  double *x;

  cout << "\n";
  cout << "R83P_ML_TEST\n";
  cout << "  R83P_ML computes A*x or A'*X\n";
  cout << "  where A has been factored by R83P_FA.\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";

  for ( job = 0; job <= 1; job++ )
  {
//
//  Set the matrix.
//
    a = r83p_random ( N, seed );
//
//  Set the desired solution.
//
    x = r8vec_indicator1_new ( N );
//
//  Compute the corresponding right hand side.
//
    if ( job == 0 )
    {
      b = r83p_mv ( N, a, x );
    }
    else
    {
      b = r83p_mtv ( N, a, x );
    }
//
//  Factor the matrix.
//
    info = r83p_fa ( N, a, work2, work3, &work4 );

    if ( info != 0 )
    {
      cout << "\n";
      cout << "R83P_ML_TEST - Fatal error!\n";
      cout << "  R83P_FA declares the matrix is singular!\n";
      cout << "  The value of INFO is " << info << "\n";
      return;
    }
//
//  Now multiply factored matrix times solution to get right hand side again.
//
    b2 = r83p_ml ( N, a, x, job );

    if ( job == 0 )
    {
      r8vec2_print_some ( N, b, b2, 10, "  A*x and PLU*x" );
    }
    else
    {
      r8vec2_print_some ( N, b, b2, 10, "  A'*x and (PLU)'*x" );
    }

    delete [] a;
    delete [] x;
    delete [] b;
    delete [] b2;
  }

  return;
# undef N
}
//****************************************************************************80

void r83p_mtv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83P_MTV_TEST tests R83P_MTV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    16 May 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *b;
  int n = 5;
  double *x;

  cout << "\n";
  cout << "R83P_MTV_TEST\n";
  cout << "  R83P_MTV computes A'*x=b for an R83P matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r83p_indicator ( n );

  r83p_print ( n, a, "  The R83P indicator matrix:" );

  x = r8vec_indicator1_new ( n );

  r8vec_print ( n, x, "  Vector x:" );

  b = r83p_mtv ( n, a, x );

  r8vec_print ( n, b, "  b=A'*x:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

void r83p_mv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83P_MV_TEST tests R83P_MV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    16 May 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *b;
  int n = 5;
  double *x;

  cout << "\n";
  cout << "R83P_MV_TEST\n";
  cout << "  R83P_MV computes A*x=b for an R83P matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r83p_indicator ( n );

  r83p_print ( n, a, "  The R83P indicator matrix:" );

  x = r8vec_indicator1_new ( n );

  r8vec_print ( n, x, "  Vector x:" );

  b = r83p_mv ( n, a, x );

  r8vec_print ( n, b, "  b=A*x:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

void r83p_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83P_PRINT_TEST tests R83P_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    16 May 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n = 5;

  cout << "\n";
  cout << "R83P_PRINT_TEST\n";
  cout << "  R83P_PRINT prints an R83P matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r83p_indicator ( n );

  r83p_print ( n, a, "  The R83P indicator matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r83p_print_some_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83P_PRINT_SOME_TEST tests R83P_PRINT_SOME.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    16 May 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n = 5;

  cout << "\n";
  cout << "R83P_PRINT_SOME_TEST\n";
  cout << "  R83P_PRINT_SOME prints some of an R83P matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r83p_indicator ( n );

  r83p_print_some ( n, a, 1, 1, n, 2, "  Row(1:N),Col(1:2)" );

  delete [] a;

  return;
}
//****************************************************************************80

void r83p_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83P_RANDOM_TEST tests R83P_RANDOM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    16 May 2016
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
  cout << "R83P_RANDOM_TEST\n";
  cout << "  R83P_RANDOM returns a random R83P matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  seed = 123456789;
  a = r83p_random ( n, seed );

  r83p_print ( n, a, "  The R83P matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r83p_sl_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83P_SL_TEST tests R83P_SL.
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
  int info;
  int job;
  int seed = 123456789;
  double work2[N-1];
  double work3[N-1];
  double work4;
  double *x;

  cout << "\n";
  cout << "R83P_SL_TEST\n";
  cout << "  R83P_SL solves a tridiagonal periodic system.\n";
  cout << "  after it has been factored by R83P_FA.\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
//
//  Set the matrix.
//
  a = r83p_random ( N, seed );
//
//  Factor the matrix.
//
  info = r83p_fa ( N, a, work2, work3, &work4 );

  if ( info != 0 )
  {
    cout << "\n";
    cout << "R83P_SL_TEST - Fatal error!\n";
    cout << "  R83P_FA returns INFO = " << info << "\n";
    return;
  }

  for ( job = 0; job <= 1; job++ )
  {
//
//  Set the desired solution.
//
    x = r8vec_indicator1_new ( N );
//
//  Compute the corresponding right hand side.
//
    b = r83p_ml ( N, a, x, job );
//
//  Solve the linear system.
//
    delete [] x;

    x = r83p_sl ( N, a, b, job, work2, work3, work4 );

    if ( job == 0 )
    {
      r8vec_print ( N, x, "  Solution to A*x=b:" );
    }
    else
    {
      r8vec_print ( N, x, "  Solution to A'*x=b:" );
    }

    delete [] x;
    delete [] b;
  }
 
  delete [] a;

  return;
# undef N
}
//****************************************************************************80

void r83p_to_r8ge_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83P_TO_R8GE_TEST tests R83P_TO_R8GE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    16 May 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a_r83p;
  double *a_r8ge;
  int n = 5;

  cout << "\n";
  cout << "R83P_TO_R8GE_TEST\n";
  cout << "  R83P_R8GE converts a matrix from R83P to R8GE format.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a_r83p = r83p_indicator ( n );
  r83p_print ( n, a_r83p, "  The R83P matrix:" );

  a_r8ge = r83p_to_r8ge ( n, a_r83p );
  r8ge_print ( n, n, a_r8ge, "  The R8GE matrix:" );

  delete [] a_r83p;
  delete [] a_r8ge;

  return;
}
//****************************************************************************80

void r83p_zeros_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R83P_ZEROS_TEST tests R83P_ZEROS.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    16 May 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n = 5;

  cout << "\n";
  cout << "R83P_ZEROS_TEST\n";
  cout << "  R83P_ZEROS returns a zero R83P matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r83p_zeros ( n );

  r83p_print ( n, a, "  The R83P matrix:" );

  delete [] a;

  return;
}
