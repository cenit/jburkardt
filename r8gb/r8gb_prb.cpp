# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8gb.hpp"

int main ( );
void r8gb_det_test ( );
void r8gb_dif2_test ( );
void r8gb_fa_test ( );
void r8gb_indicator_test ( );
void r8gb_ml_test ( );
void r8gb_mtv_test ( );
void r8gb_mu_test ( );
void r8gb_mv_test ( );
void r8gb_nz_num_test ( );
void r8gb_print_test ( );
void r8gb_print_some_test ( );
void r8gb_random_test ( );
void r8gb_sl_test ( );
void r8gb_to_r8ge_test ( );
void r8gb_to_r8vec_test ( );
void r8gb_trf_test ( );
void r8gb_trs_test ( );
void r8gb_zeros_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for R8GB_PRB.
//
//  Discussion:
//
//    R8GB_PRB tests the R8GB library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 June 2016
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "R8GB_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the R8GB library.\n";

  r8gb_det_test ( );
  r8gb_dif2_test ( );
  r8gb_fa_test ( );
  r8gb_indicator_test ( );
  r8gb_ml_test ( );
  r8gb_mtv_test ( );
  r8gb_mu_test ( );
  r8gb_mv_test ( );
  r8gb_nz_num_test ( );
  r8gb_print_test ( );
  r8gb_print_some_test ( );
  r8gb_random_test ( );
  r8gb_sl_test ( );
  r8gb_to_r8ge_test ( );
  r8gb_to_r8vec_test ( );
  r8gb_trf_test ( );
  r8gb_trs_test ( );
  r8gb_zeros_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "R8GB_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void r8gb_det_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GB_DET_TEST tests R8GB_DET.
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
# define ML 3
# define MU 2
# define N 10

  double *a;
  double *a2;
  double det;
  int info;
  int m = 10;
  int pivot[N];
  int seed = 123456789;

  cout << "\n";
  cout << "R8GB_DET_TEST\n";
  cout << "  R8GB_DET computes the determinant of a general banded matrix.\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << m << "\n";
  cout << "  Matrix columns N = " << N << "\n";
  cout << "  Lower bandwidth ML  = " << ML << "\n";
  cout << "  Upper bandwidth MU  = " << MU << "\n";
//
//  Set the matrix.
//
  a = r8gb_random ( m, N, ML, MU, seed );
//
//  Copy the matrix into a general array.
//
  a2 = r8gb_to_r8ge ( m, N, ML, MU, a );
//
//  Print the matrix just to show what it looks like.
//
  r8ge_print ( m, N, a2, "  The banded matrix:" );
//
//  Factor the matrix.
//
  info = r8gb_fa ( N, ML, MU, a, pivot );
//
//  Compute the determinant.
//
  det = r8gb_det ( N, ML, MU, a, pivot );

  cout << "\n";
  cout << "  R8GB_DET computes the determinant = " << det << "\n";
//
//  Factor the general matrix.
//
  info = r8ge_fa ( N, a2, pivot );
//
//  Compute the determinant.
//
  det = r8ge_det ( N, a2, pivot );

  cout << "  R8GE_DET computes the determinant = " << det << "\n";

  delete [] a;
  delete [] a2;

  return;
# undef ML
# undef MU
# undef N
}
//****************************************************************************80

void r8gb_dif2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GB_DIF2_TEST tests R8GB_DIF2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    20 June 2016
//
//  Author:
//
//    John Burkardt
//
{
# define M 5
# define ML 1
# define MU 1
# define N 5

  double *a;

  cout << "\n";
  cout << "R8GB_DIF2_TEST\n";
  cout << "  R8GB_DIF2 sets up an R8GB second difference matrix .\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << M << "\n";
  cout << "  Matrix columns N = " << N << "\n";
  cout << "  Lower bandwidth ML  = " << ML << "\n";
  cout << "  Upper bandwidth MU  = " << MU << "\n";

  a = r8gb_dif2 ( M, N, ML, MU );

  r8gb_print ( M, N, ML, MU, a, "  The R8GB second difference matrix:" );

  free ( a );

  return;
# undef M
# undef ML
# undef MU
# undef N
}
//****************************************************************************80

void r8gb_fa_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GB_FA_TEST tests R8GB_FA.
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
# define M 5
# define ML 1
# define MU 2
# define N 5

  double *a;
  double *b;
  int i;
  int info;
  int job;
  int pivot[N];
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8GB_FA_TEST\n";
  cout << "  R8GB_FA computes the PLU factors of an R8GB matrix.\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << M << "\n";
  cout << "  Matrix columns N = " << N << "\n";
  cout << "  Lower bandwidth ML = " << ML << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";
//
//  Set the matrix.
//
  a = r8gb_random ( M, N, ML, MU, seed );

  r8gb_print ( M, N, ML, MU, a, "  The banded matrix:" );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( N );
//
//  Compute the corresponding right hand side.
//
  b = r8gb_mv ( M, N, ML, MU, a, x );
//
//  Factor the matrix.
//
  info = r8gb_fa ( N, ML, MU, a, pivot );

  if ( info != 0 )
  {
    cout << "\n";
    cout << "R8GB_FA_TEST - Fatal error!\n";
    cout << "  R8GB_FA declares the matrix is singular!\n";
    cout << "  The value of INFO is " << info << "\n";
    return;
  }
//
//  Solve the linear system.
//
  job = 0;
  delete [] x;
  x = r8gb_sl ( N, ML, MU, a, pivot, b, job );
 
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
  b = r8gb_ml ( N, ML, MU, a, pivot, x, job );
  r8vec_print ( N, b, "  Right hand side of transposed system:" );
//
//  Solve the linear system.
//
  job = 1;
  delete [] x;
  x = r8gb_sl ( N, ML, MU, a, pivot, b, job );
 
  r8vec_print ( N, x, "  Solution to transposed system:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
# undef M
# undef ML
# undef MU
# undef N
}
//****************************************************************************80

void r8gb_indicator_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GB_INDICATOR_TEST tests R8GB_INDICATOR.
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
# define M 10
# define ML 3
# define MU 2
# define N 8

  double *a;

  cout << "\n";
  cout << "R8GB_INDICATOR_TEST\n";
  cout << "  For a general banded matrix,\n";
  cout << "  R8GB_INDICATOR sets up an indicator matrix.\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << M << "\n";
  cout << "  Matrix columns N = " << N << "\n";
  cout << "  Lower bandwidth ML = " << ML << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";

  a = r8gb_indicator ( M, N, ML, MU );

  r8ge_print ( 2*ML+MU+1, N, a, "  The banded matrix in R8GE format:" );

  r8gb_print ( M, N, ML, MU, a, "  The R8GB indicator matrix:" );

  delete [] a;

  return;
# undef M
# undef ML
# undef MU
# undef N
}
//****************************************************************************80

void r8gb_ml_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GB_ML_TEST tests R8GB_ML.
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
# define M 10
# define ML 1
# define MU 2
# define N 10

  double *a;
  double *b;
  double *b2;
  int i;
  int info;
  int job;
  int pivot[N];
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8GB_ML_TEST\n";
  cout << "  For a general banded matrix,\n";
  cout << "  R8GB_ML computes A*x or A'*X\n";
  cout << "  where A has been factored by R8GB_FA.\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << M << "\n";
  cout << "  Matrix columns N = " << N << "\n";
  cout << "  Lower bandwidth ML = " << ML << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";

  for ( job = 0; job <= 1; job++ )
  {
//
//  Set the matrix.
//
    a = r8gb_random ( M, N, ML, MU, seed );
//
//  Set the desired solution.
//
    x = r8vec_indicator1_new ( N );
//
//  Compute the corresponding right hand side.
//
    if ( job == 0 )
    {
      b = r8gb_mv ( M, N, ML, MU, a, x );
    }
    else
    {
      b = r8gb_mtv ( M, N, ML, MU, a, x );
    }
//
//  Factor the matrix.
//
    info = r8gb_fa ( N, ML, MU, a, pivot );

    if ( info != 0 )
    {
      cout << "\n";
      cout << "R8GB_ML_TEST - Fatal error!\n";
      cout << "  R8GB_FA declares the matrix is singular!\n";
      cout << "  The value of INFO is " << info << "\n";
      return;
    }
//
//  Now multiply factored matrix times solution to get right hand side again.
//
    b2 = r8gb_ml ( N, ML, MU, a, pivot, x, job );

    if ( job == 0 )
    {
      r8vec2_print ( N, b, b2, "  A*x and PLU*x" );
    }
    else
    {
      r8vec2_print ( N, b, b2, "  A'*x and (PLU)'*x" );
    }

    delete [] a;
    delete [] b;
    delete [] b2;
    delete [] x;
  }

  return;
# undef M
# undef ML
# undef MU
# undef N
}
//****************************************************************************80

void r8gb_mtv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GB_MTV_TEST tests R8GB_MTV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    20 June 2016
//
//  Author:
//
//    John Burkardt
//
{
# define M 5
# define ML 1
# define MU 2
# define N 5

  double *a;
  double *b;
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8GB_MTV_TEST\n";
  cout << "  R8GB_MTV computes b=A'*x where A is an R8GB matrix.\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << M << "\n";
  cout << "  Matrix columns N = " << N << "\n";
  cout << "  Lower bandwidth ML = " << ML << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";

  a = r8gb_random ( M, N, ML, MU, seed );
  r8gb_print ( M, N, ML, MU, a, "  Matrix A:" );

  x = r8vec_indicator1_new ( M );
  r8vec_print ( M, x, "  Vector x:" );

  b = r8gb_mtv ( M, N, ML, MU, a, x );
  r8vec_print ( N, b, "  Product b=A'*x:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
# undef M
# undef ML
# undef MU
# undef N
}
//****************************************************************************80

void r8gb_mu_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GB_MU_TEST tests R8GB_MU.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    20 June 2016
//
//  Author:
//
//    John Burkardt
//
{
# define M 10
# define ML 1
# define MU 2
# define N 10

  double *a;
  double *b;
  double *b2;
  int i;
  int info;
  int job;
  int pivot[N];
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8GB_MU_TEST\n";
  cout << "  R8GB_MU computes A*x or A'*X\n";
  cout << "  where the R8GB matrix A has been factored by R8GB_TRF.\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << M << "\n";
  cout << "  Matrix columns N = " << N << "\n";
  cout << "  Lower bandwidth ML = " << ML << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";

  for ( job = 0; job <= 1; job++ )
  {
//
//  Set the matrix.
//
    a = r8gb_random ( M, N, ML, MU, seed );
//
//  Set the desired solution.
//
    x = r8vec_indicator1_new ( N );
//
//  Compute the corresponding right hand side.
//
    if ( job == 0 )
    {
      b = r8gb_mv ( M, N, ML, MU, a, x );
    }
    else
    {
      b = r8gb_mtv ( M, N, ML, MU, a, x );
    }
//
//  Factor the matrix.
//
    info = r8gb_trf ( N, N, ML, MU, a, pivot );

    if ( info != 0 )
    {
      cout << "\n";
      cout << "R8GB_MU_TEST - Fatal error!\n";
      cout << "  R8GB_TRF declares the matrix is singular!\n";
      cout << "  The value of INFO is " << info << "\n";
      return;
    }
//
//  Now multiply factored matrix times solution to get right hand side again.
//
    b2 = r8gb_mu ( N, ML, MU, a, pivot, x, job );

    if ( job == 0 )
    {
      r8vec2_print ( N, b, b2, "  A*x and PLU*x" );
    }
    else
    {
      r8vec2_print ( N, b, b2, "  A'*x and (PLU)'*x" );
    }

    delete [] a;
    delete [] b;
    delete [] b2;
    delete [] x;
  }

  return;
# undef M
# undef ML
# undef MU
# undef N
}
//****************************************************************************80

void r8gb_mv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GB_MV_TEST tests R8GB_MV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    20 June 2016
//
//  Author:
//
//    John Burkardt
//
{
# define M 5
# define ML 1
# define MU 2
# define N 5

  double *a;
  double *b;
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8GB_MV_TEST\n";
  cout << "  R8GB_MV computes b=A*x where A is an R8GB matrix.\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << M << "\n";
  cout << "  Matrix columns N = " << N << "\n";
  cout << "  Lower bandwidth ML = " << ML << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";

  a = r8gb_random ( M, N, ML, MU, seed );
  r8gb_print ( M, N, ML, MU, a, "  Matrix A:" );

  x = r8vec_indicator1_new ( N );
  r8vec_print ( N, x, "  Vector x:" );

  b = r8gb_mv ( M, N, ML, MU, a, x );
  r8vec_print ( M, b, "  Product b=A*x:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
# undef M
# undef ML
# undef MU
# undef N
}
//****************************************************************************80

void r8gb_nz_num_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GB_NZ_NUM_TEST tests R8GB_NZ_NUM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    01 August 2006
//
//  Author:
//
//    John Burkardt
//
{
# define M 10
# define N 10
# define ML 1
# define MU 2

  double *a;
  int diag;
  int i;
  int j;
  int nz_num;
  int seed = 123456789;

  cout << "\n";
  cout << "R8GB_NZ_NUM_TEST\n";
  cout << "  For a general banded matrix,\n";
  cout << "  R8GB_NZ_NUM counts the nonzero entries.\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << M << "\n";
  cout << "  Matrix columns N = " << N << "\n";
  cout << "  Lower bandwidth ML = " << ML << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";
//
//  Set the matrix.
//
  a = r8gb_random ( M, N, ML, MU, seed );
//
//  Make some zero entries.
//
  for ( j = 0; j < N; j++ )
  {
    for ( diag = 0; diag < 2*ML+MU+1; diag++ )
    {
      if ( a[diag+j*(2*ML+MU+1)] < 0.3 )
      {
        a[diag+j*(2*ML+MU+1)] = 0.0;
      }
    }
  }

  r8gb_print ( M, N, ML, MU, a, "  The R8GB matrix:" );

  nz_num = r8gb_nz_num ( M, N, ML, MU, a );

  cout << "\n";
  cout << "  Nonzero entries = " << nz_num << "\n";

  delete [] a;

  return;
# undef M
# undef N
# undef ML
# undef MU
}
//****************************************************************************80

void r8gb_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GB_PRINT_TEST tests R8GB_PRINT.
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
# define M 8
# define ML 1
# define MU 3
# define N 10

  double *a;

  cout << "\n";
  cout << "R8GB_PRINT_TEST\n";
  cout << "  R8GB_PRINT prints a general band matrix.\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << M << "\n";
  cout << "  Matrix columns N = " << N << "\n";
  cout << "  Lower bandwidth ML = " << ML << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";

  a = r8gb_indicator ( M, N, ML, MU );

  r8gb_print ( M, N, ML, MU, a, "  The banded matrix:" );

  delete [] a;

  return;
# undef M
# undef ML
# undef MU
# undef N
}
//****************************************************************************80

void r8gb_print_some_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GB_PRINT_SOME_TEST tests R8GB_PRINT_SOME.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    20 June 2016
//
//  Author:
//
//    John Burkardt
//
{
# define M 8
# define ML 1
# define MU 3
# define N 10

  double *a;

  cout << "\n";
  cout << "R8GB_PRINT_SOME_TEST\n";
  cout << "  R8GB_PRINT_SOME prints some of a general band matrix.\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << M << "\n";
  cout << "  Matrix columns N = " << N << "\n";
  cout << "  Lower bandwidth ML = " << ML << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";

  a = r8gb_indicator ( M, N, ML, MU );

  r8gb_print_some ( M, N, ML, MU, a, 4, 3, 6, 9, "  Rows(4-6), Cols (3-9)" );

  delete [] a;

  return;
# undef M
# undef ML
# undef MU
# undef N
}
//****************************************************************************80

void r8gb_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GB_RANDOM_TEST tests R8GB_RANDOM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    20 June 2016
//
//  Author:
//
//    John Burkardt
//
{
# define M 5
# define ML 2
# define MU 1
# define N 5

  double *a;
  int seed;

  cout << "\n";
  cout << "R8GB_RANDOM_TEST\n";
  cout << "  R8GB_RANDOM sets up a random R8GB matrix.\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << M << "\n";
  cout << "  Matrix columns N = " << N << "\n";
  cout << "  Lower bandwidth ML = " << ML << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";

  seed = 123456789;
  a = r8gb_random ( M, N, ML, MU, seed );

  r8gb_print ( M, N, ML, MU, a, "  The random R8GB matrix:" );

  free ( a );

  return;
# undef M
# undef ML
# undef MU
# undef N
}
//****************************************************************************80

void r8gb_sl_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GB_SL_TEST tests R8GB_SL.
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
# define M 5
# define ML 1
# define MU 2
# define N 5

  double *a;
  double *b;
  int i;
  int info;
  int job;
  int pivot[N];
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8GB_SL_TEST\n";
  cout << "  R8GB_SL solves a linear system factored by R8GB_FA.\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << M << "\n";
  cout << "  Matrix columns N = " << N << "\n";
  cout << "  Lower bandwidth ML = " << ML << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";
//
//  Set the matrix.
//
  a = r8gb_random ( M, N, ML, MU, seed );

  r8gb_print ( M, N, ML, MU, a, "  The banded matrix:" );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( N );
//
//  Compute the corresponding right hand side.
//
  b = r8gb_mv ( M, N, ML, MU, a, x );
//
//  Factor the matrix.
//
  info = r8gb_fa ( N, ML, MU, a, pivot );

  if ( info != 0 )
  {
    cout << "\n";
    cout << "R8GB_SL_TEST - Fatal error!\n";
    cout << "  R8GB_FA declares the matrix is singular!\n";
    cout << "  The value of INFO is " << info << "\n";
    return;
  }
//
//  Solve the linear system.
//
  job = 0;
  delete [] x;
  x = r8gb_sl ( N, ML, MU, a, pivot, b, job );
 
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
  b = r8gb_ml ( N, ML, MU, a, pivot, x, job );
  r8vec_print ( N, b, "  Right hand side of transposed system:" );
//
//  Solve the linear system.
//
  job = 1;
  delete [] x;
  x = r8gb_sl ( N, ML, MU, a, pivot, b, job );
 
  r8vec_print ( N, x, "  Solution to transposed system:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
# undef M
# undef ML
# undef MU
# undef N
}
//****************************************************************************80

void r8gb_to_r8ge_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GB_TO_R8GE_TEST tests R8GB_TO_R8GE.
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
# define M 5
# define ML 2
# define MU 1
# define N 8

  double *a;
  double *b;
  double *c;

  cout << "\n";
  cout << "R8GB_TO_R8GE_TEST\n";
  cout << "  R8GB_TO_R8GE copies a R8GB matrix to a R8GE matrix.\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << M << "\n";
  cout << "  Matrix columns N = " << N << "\n";
  cout << "  Lower bandwidth ML = " << ML << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";

  a = r8gb_indicator ( M, N, ML, MU );

  r8gb_print ( M, N, ML, MU, a, "  The R8GB matrix:" );

  b = r8gb_to_r8ge ( M, N, ML, MU, a );

  r8ge_print ( M, N, b, "  The R8GE matrix:" );

  c = r8ge_to_r8gb ( M, N, ML, MU, b );

  r8gb_print ( M, N, ML, MU, c, "  The recovered R8GB matrix:" );

  delete [] a;
  delete [] b;
  delete [] c;

  return;
# undef M
# undef ML
# undef MU
# undef N
}
//****************************************************************************80

void r8gb_to_r8vec_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GB_TO_R8VEC_TEST tests R8GB_TO_R8VEC.
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
  int m = 5;
  int n = 8;
  int ml = 2;
  int mu = 1;

  double *a;
  int i;
  int j;
  int k;
  double *x;

  cout << "\n";
  cout << "R8GB_TO_R8VEC_TEST\n";
  cout << "  R8GB_TO_R8VEC converts an R8GB matrix to an R8VEC.\n";
  cout << "\n";
  cout << "  Matrix rows M =       " << m  << "\n";
  cout << "  Matrix columns N =    " << n  << "\n";
  cout << "  Lower bandwidth ML  = " << ml << "\n";
  cout << "  Upper bandwidth MU  = " << mu << "\n";

  a = r8gb_indicator ( m, n, ml, mu );

  r8gb_print ( m, n, ml, mu, a, "  The R8GB indicator matrix:" );

  x = r8gb_to_r8vec ( m, n, ml, mu, a );

  k = 0;
  for ( j = 1; j <= n; j++ )
  {
    for ( i = 1; i <= 2*ml+mu+1; i++ )
    {
      k = k + 1;
      cout << setw(6)  << i      << "  "
           << setw(6)  << j      << "  "
           << setw(6)  << k      << "  "
           << setw(12) << x[k-1] << "\n";
    }
  }

  delete [] a;
  a = r8vec_to_r8gb ( m, n, ml, mu, x );

  r8gb_print ( m, n, ml, mu, a, "  The recovered R8GB indicator matrix:" );

  delete [] a;
  delete [] x;

  return;
}
//****************************************************************************80

void r8gb_trf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GB_TRF_TEST tests R8GB_TRF.
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
# define M 10
# define N 10
# define ML 1
# define MU 2
# define NRHS 1

  double *a;
  double *b;
  int i;
  int info;
  int job;
  int pivot[N];
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8GB_TRF_TEST\n";
  cout << "  R8GB_TRF computes the PLU factors of an R8GB matrix.\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << M << "\n";
  cout << "  Matrix columns N = " << N << "\n";
  cout << "  Lower bandwidth ML = " << ML << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";
//
//  Set the matrix.
//
  a = r8gb_random ( M, N, ML, MU, seed );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( N );
//
//  Compute the corresponding right hand side.
//
  b = r8gb_mv ( M, N, ML, MU, a, x );
//
//  Factor the matrix.
//
  info = r8gb_trf ( M, N, ML, MU, a, pivot );

  if ( info != 0 )
  {
    cout << "\n";
    cout << "R8GB_TRF_TEST - Fatal error!\n";
    cout << "  R8GB_TRF declares the matrix is singular!\n";
    cout << "  The value of INFO is " << info << "\n";
    return;
  }
//
//  Solve the linear system.
//
  delete [] x;
  x = r8gb_trs ( N, ML, MU, NRHS, 'N', a, pivot, b );

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
  b = r8gb_mu ( N, ML, MU, a, pivot, x, job );
//
//  Solve the linear system.
//
  delete [] x;
  x = r8gb_trs ( N, ML, MU, NRHS, 'T', a, pivot, b );

  r8vec_print ( N, x, "  Solution to transposed system:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
# undef M
# undef N
# undef ML
# undef MU
# undef NRHS
}
//****************************************************************************80

void r8gb_trs_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GB_TRS_TEST tests R8GB_TRS.
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
# define M 10
# define N 10
# define ML 1
# define MU 2
# define NRHS 1

  double *a;
  double *b;
  int i;
  int info;
  int job;
  int pivot[N];
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8GB_TRS_TEST\n";
  cout << "  R8GB_TRS solves a linear system factored by R8GB_TRF.\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << M << "\n";
  cout << "  Matrix columns N = " << N << "\n";
  cout << "  Lower bandwidth ML = " << ML << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";
//
//  Set the matrix.
//
  a = r8gb_random ( M, N, ML, MU, seed );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( N );
//
//  Compute the corresponding right hand side.
//
  b = r8gb_mv ( M, N, ML, MU, a, x );
//
//  Factor the matrix.
//
  info = r8gb_trf ( M, N, ML, MU, a, pivot );

  if ( info != 0 )
  {
    cout << "\n";
    cout << "R8GB_TRS_TEST - Fatal error!\n";
    cout << "  R8GB_TRF declares the matrix is singular!\n";
    cout << "  The value of INFO is " << info << "\n";
    return;
  }
//
//  Solve the linear system.
//
  delete [] x;
  x = r8gb_trs ( N, ML, MU, NRHS, 'N', a, pivot, b );

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
  b = r8gb_mu ( N, ML, MU, a, pivot, x, job );
//
//  Solve the linear system.
//
  delete [] x;
  x = r8gb_trs ( N, ML, MU, NRHS, 'T', a, pivot, b );

  r8vec_print ( N, x, "  Solution to transposed system:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
# undef M
# undef N
# undef ML
# undef MU
# undef NRHS
}
//****************************************************************************80

void r8gb_zeros_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GB_ZEROS_TEST tests R8GB_ZEROS.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    20 June 2016
//
//  Author:
//
//    John Burkardt
//
{
# define M 5
# define ML 1
# define MU 1
# define N 5

  double *a;

  cout << "\n";
  cout << "R8GB_ZEROS_TEST\n";
  cout << "  R8GB_ZEROS sets up an R8GB zero matrix .\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << M << "\n";
  cout << "  Matrix columns N = " << N << "\n";
  cout << "  Lower bandwidth ML  = " << ML << "\n";
  cout << "  Upper bandwidth MU  = " << MU << "\n";

  a = r8gb_zeros ( M, N, ML, MU );

  r8gb_print ( M, N, ML, MU, a, "  The R8GB zero matrix:" );

  free ( a );

  return;
# undef M
# undef ML
# undef MU
# undef N
}

