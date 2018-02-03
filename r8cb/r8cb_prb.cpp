# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8cb.hpp"

int main ( );
void r8cb_det_test ( );
void r8cb_dif2_test ( );
void r8cb_indicator_test ( );
void r8cb_ml_test ( );
void r8cb_mtv_test ( );
void r8cb_mv_test ( );
void r8cb_np_fa_test ( );
void r8cb_np_sl_test ( );
void r8cb_print_test ( );
void r8cb_print_some_test ( );
void r8cb_random_test ( );
void r8cb_to_r8ge_test ( );
void r8cb_to_r8vec_test ( );
void r8cb_zeros_test ( );
void r8vec_to_r8cb_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for R8CB_PRB.
//
//  Discussion:
//
//    R8CB_PRB tests the R8CB library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    27 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "R8CB_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the R8CB library.\n";

  r8cb_det_test ( );
  r8cb_dif2_test ( );
  r8cb_indicator_test ( );
  r8cb_ml_test ( );
  r8cb_mtv_test ( );
  r8cb_mv_test ( );
  r8cb_np_fa_test ( );
  r8cb_np_sl_test ( );
  r8cb_print_test ( );
  r8cb_print_some_test ( );
  r8cb_random_test ( );
  r8cb_to_r8ge_test ( );
  r8cb_to_r8vec_test ( );
  r8cb_zeros_test ( );
  r8vec_to_r8cb_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "R8CB_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void r8cb_det_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CB_DET_TEST tests R8CB_DET.
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
# define ML 2
# define MU 3

  double *a;
  double *a2;
  double det;
  int info;
  int pivot[N];
  int seed = 123456789;

  cout << "\n";
  cout << "R8CB_DET_TEST\n";
  cout << "  R8CB_DET computes the determinant of an R8CB matrix\n";
  cout << "  after it was factored by R8CB_NP_FA.\n";
  cout << "\n";
  cout << "  Matrix order N     = " << N << "\n";
  cout << "  Lower bandwidth ML = " << ML << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";
//
//  Set the matrix.
//
  a = r8cb_random ( N, N, ML, MU, seed );

  r8cb_print ( N, N, ML, MU, a, "  The compact band matrix:" );
//
//  Copy the matrix into a general array.
//
  a2 = r8cb_to_r8ge ( N, N, ML, MU, a );
//
//  Factor the matrix.
//
  info = r8cb_np_fa ( N, ML, MU, a );
//
//  Compute the determinant.
//
  det = r8cb_det ( N, ML, MU, a );

  cout << "\n";
  cout << "  R8CB_DET computes the determinant = " << det << "\n";
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
# undef N
# undef ML
# undef MU
}
//****************************************************************************80

void r8cb_dif2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CB_DIF2_TEST tests R8CB_DIF2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    27 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int m = 8;
  int ml = 2;
  int mu = 3;
  int n = 8;

  cout << "\n";
  cout << "R8CB_DIF2_TEST\n";
  cout << "  R8CB_DIF2 sets up an R8CB second difference matrix.\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << m << "\n";
  cout << "  Matrix columns N = " << n << "\n";
  cout << "  Lower bandwidth ML = " << ml << "\n";
  cout << "  Upper bandwidth MU = " << mu << "\n";

  a = r8cb_dif2 ( m, n, ml, mu );

  r8cb_print ( m, n, ml, mu, a, "  The R8CB second difference matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8cb_indicator_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CB_INDICATOR_TEST tests R8CB_INDICATOR.
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
  double *a;
  int m = 8;
  int ml = 2;
  int mu = 3;
  int n = 10;

  cout << "\n";
  cout << "R8CB_INDICATOR_TEST\n";
  cout << "  R8CB_INDICATOR sets up an R8CB indicator matrix.\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << m << "\n";
  cout << "  Matrix columns N = " << n << "\n";
  cout << "  Lower bandwidth ML = " << ml << "\n";
  cout << "  Upper bandwidth MU = " << mu << "\n";

  a = r8cb_indicator ( m, n, ml, mu );

  r8cb_print ( m, n, ml, mu, a, "  The R8CB indicator matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8cb_ml_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CB_ML_TEST tests R8CB_ML.
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
# define ML 1
# define MU 2

  double *a;
  double *b;
  double *b2;
  int i;
  int info;
  int job;
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8CB_ML_TEST\n";
  cout << "  For a compact band matrix:\n";
  cout << "  R8CB_ML computes A*x or A'*X\n";
  cout << "  where A has been factored by R8CB_FA.\n";
  cout << "\n";
  cout << "  Matrix order N     = " << N << "\n";
  cout << "  Lower bandwidth ML = " << ML << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";

  for ( job = 0; job <= 1; job++ )
  {
//
//  Set the matrix.
//
    a = r8cb_random ( N, N, ML, MU, seed );
//
//  Set the desired solution.
//
    x = r8vec_indicator1_new ( N );
//
//  Compute the corresponding right hand side.
//
    if ( job == 0 )
    {
      b = r8cb_mv ( N, N, ML, MU, a, x );
    }
    else
    {
      b = r8cb_mtv ( N, N, ML, MU, a, x );
    }
//
//  Factor the matrix.
//
    info = r8cb_np_fa ( N, ML, MU, a );

    if ( info != 0 )
    {
      cout << "\n";
      cout << "R8CB_ML_TEST - Fatal error!\n";
      cout << "  R8CB_FA declares the matrix is singular!\n";
      cout << "  The value of INFO is " << info << "\n";
      return;
    }
//
//  Now multiply factored matrix times solution to get right hand side again.
//
    b2 = r8cb_ml ( N, ML, MU, a, x, job );

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
# undef N
# undef ML
# undef MU
}
//****************************************************************************80

void r8cb_mtv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CB_MTV_TEST tests R8CB_MTV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    27 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *b;
  int m = 8;
  int ml = 2;
  int mu = 1;
  int n = 8;
  double *x;

  cout << "\n";
  cout << "R8CB_MTV_TEST\n";
  cout << "  R8CB_MTV computes b=A'*x, where A is an R8CB matrix.\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << m << "\n";
  cout << "  Matrix columns N = " << n << "\n";
  cout << "  Lower bandwidth ML = " << ml << "\n";
  cout << "  Upper bandwidth MU = " << mu << "\n";

  a = r8cb_indicator ( n, n, ml, mu );

  r8cb_print ( n, n, ml, mu, a, "  The R8CB matrix:" );

  x = r8vec_indicator1_new ( m );

  r8vec_print ( m, x, "  The vector x:" );

  b = r8cb_mtv ( n, n, ml, mu, a, x );

  r8vec_print ( n, b, "  The product b=A'*x:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

void r8cb_mv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CB_MV_TEST tests R8CB_MV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    27 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *b;
  int m = 8;
  int ml = 2;
  int mu = 1;
  int n = 8;
  double *x;

  cout << "\n";
  cout << "R8CB_MV_TEST\n";
  cout << "  R8CB_MV computes b=A*x, where A is an R8CB matrix.\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << m << "\n";
  cout << "  Matrix columns N = " << n << "\n";
  cout << "  Lower bandwidth ML = " << ml << "\n";
  cout << "  Upper bandwidth MU = " << mu << "\n";

  a = r8cb_indicator ( n, n, ml, mu );

  r8cb_print ( n, n, ml, mu, a, "  The R8CB matrix:" );

  x = r8vec_indicator1_new ( m );

  r8vec_print ( m, x, "  The vector x:" );

  b = r8cb_mv ( n, n, ml, mu, a, x );

  r8vec_print ( n, b, "  The product b=A*x:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

void r8cb_np_fa_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CB_NP_FA_TEST tests R8CB_NP_FA.
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
# define ML 1
# define MU 2

  double *a;
  double *b;
  int i;
  int info;
  int job;
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8CB_NP_FA_TEST\n";
  cout << "  R8CB_NP_FA factors an R8CB matrix witn no pivoting;\n";
  cout << "\n";
  cout << "  Matrix order N     = " << N << "\n";
  cout << "  Lower bandwidth ML = " << ML << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";

  for ( job = 0; job <= 1; job++ )
  {
//
//  Set the matrix.
//
    a = r8cb_random ( N, N, ML, MU, seed );
//
//  Set the desired solution.
//
    x = r8vec_indicator1_new ( N );
//
//  Compute the right hand side.
//
    if ( job == 0 )
    {
      b = r8cb_mv ( N, N, ML, MU, a, x );
    }
    else
    {
      b = r8cb_mtv ( N, N, ML, MU, a, x );
    }
//
//  Factor the matrix.
//
    info = r8cb_np_fa ( N, ML, MU, a );

    if ( info != 0 )
    {
      cout << "\n";
      cout << "R8CB_NP_FA_TEST - Fatal error!\n";
      cout << "  R8CB_NP_FA claims the matrix is singular.\n";
      cout << "  The value of info is " << info << "\n";
      return;
    }
//
//  Solve the system.
//
    delete [] x;

    x = r8cb_np_sl ( N, ML, MU, a, b, job );

    if ( job == 0 )
    {
      r8vec_print ( N, x, "  Solution to A*x=b:" );
    }
    else
    {
      r8vec_print ( N, x, "  Solution to A'x=b:" );
    }

    delete [] a;
    delete [] b;
    delete [] x;

  }

  return;
# undef N
# undef ML
# undef MU
}
//****************************************************************************80

void r8cb_np_sl_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CB_NP_SL_TEST tests R8CB_NP_SL.
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
# define ML 1
# define MU 2

  double *a;
  double *b;
  int i;
  int info;
  int job;
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8CB_NP_SL_TEST\n";
  cout << "  R8CB_NP_SL solves a system factored by R8CB_NP_FA.\n";
  cout << "\n";
  cout << "  Matrix order N     = " << N << "\n";
  cout << "  Lower bandwidth ML = " << ML << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";

  for ( job = 0; job <= 1; job++ )
  {
//
//  Set the matrix.
//
    a = r8cb_random ( N, N, ML, MU, seed );
//
//  Set the desired solution.
//
    x = r8vec_indicator1_new ( N );
//
//  Compute the right hand side.
//
    if ( job == 0 )
    {
      b = r8cb_mv ( N, N, ML, MU, a, x );
    }
    else
    {
      b = r8cb_mtv ( N, N, ML, MU, a, x );
    }
//
//  Factor the matrix.
//
    info = r8cb_np_fa ( N, ML, MU, a );

    if ( info != 0 )
    {
      cout << "\n";
      cout << "R8CB_NP_SL_TEST - Fatal error!\n";
      cout << "  R8CB_NP_FA claims the matrix is singular.\n";
      cout << "  The value of info is " << info << "\n";
      return;
    }
//
//  Solve the system.
//
    delete [] x;

    x = r8cb_np_sl ( N, ML, MU, a, b, job );

    if ( job == 0 )
    {
      r8vec_print ( N, x, "  Solution to A*x=b:" );
    }
    else
    {
      r8vec_print ( N, x, "  Solution to A'x=b:" );
    }

    delete [] a;
    delete [] b;
    delete [] x;

  }

  return;
# undef N
# undef ML
# undef MU
}
//****************************************************************************80

void r8cb_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CB_PRINT_TEST tests R8CB_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    21 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int m = 8;
  int ml = 2;
  int mu = 3;
  int n = 10;

  cout << "\n";
  cout << "R8CB_PRINT_TEST\n";
  cout << "  R8CB_PRINT prints an R8CB matrix.\n";
  cout << "\n";
  cout << "  Matrix rows M =       " << m  << "\n";
  cout << "  Matrix columns N =    " << n  << "\n";
  cout << "  Lower bandwidth ML  = " << ml << "\n";
  cout << "  Upper bandwidth MU  = " << mu << "\n";

  a = r8cb_indicator ( m, n, ml, mu );

  r8cb_print ( m, n, ml, mu, a, "  The R8CB matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8cb_print_some_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CB_PRINT_SOME_TEST tests R8CB_PRINT_SOME.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    21 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int m = 8;
  int ml = 2;
  int mu = 3;
  int n = 10;

  cout << "\n";
  cout << "R8CB_PRINT_SOME_TEST\n";
  cout << "  R8CB_PRINT_SOME prints some of an R8CB matrix.\n";
  cout << "\n";
  cout << "  Matrix rows M =       " << m  << "\n";
  cout << "  Matrix columns N =    " << n  << "\n";
  cout << "  Lower bandwidth ML  = " << ml << "\n";
  cout << "  Upper bandwidth MU  = " << mu << "\n";

  a = r8cb_indicator ( m, n, ml, mu );

  r8cb_print_some ( m, n, ml, mu, a, 2, 2, 5, 5, "  Rows 2-5, Cols 2-5:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8cb_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CB_RANDOM_TEST tests R8CB_RANDOM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    27 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int m = 8;
  int ml = 2;
  int mu = 3;
  int n = 10;
  int seed = 123456789;

  cout << "\n";
  cout << "R8CB_RANDOM_TEST\n";
  cout << "  R8CB_RANDOM randomizes an R8CB matrix.\n";
  cout << "\n";
  cout << "  Matrix rows M =       " << m  << "\n";
  cout << "  Matrix columns N =    " << n  << "\n";
  cout << "  Lower bandwidth ML  = " << ml << "\n";
  cout << "  Upper bandwidth MU  = " << mu << "\n";
//
//  Set the matrix.
//
  a = r8cb_random ( m, n, ml, mu, seed );

  r8cb_print ( m, n, ml, mu, a, "  The R8CB random matrix:" );

  free ( a );

  return;
}
//****************************************************************************80

void r8cb_to_r8ge_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CB_TO_R8GE_TEST tests R8CB_TO_R8GE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    27 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *a_r8ge;
  int m = 5;
  int ml = 2;
  int mu = 1;
  int n = 8;

  cout << "\n";
  cout << "R8CB_TO_R8GE_TEST\n";
  cout << "  R8CB_TO_R8GE converts an R8CB matrix to R8GE format.\n";
  cout << "\n";
  cout << "  Matrix rows M =       " << m  << "\n";
  cout << "  Matrix columns N =    " << n  << "\n";
  cout << "  Lower bandwidth ML  = " << ml << "\n";
  cout << "  Upper bandwidth MU  = " << mu << "\n";

  a = r8cb_indicator ( m, n, ml, mu );

  r8cb_print ( m, n, ml, mu, a, "  The R8CB matrix:" );

  a_r8ge = r8cb_to_r8ge ( m, n, ml, mu, a );

  r8ge_print ( m, n, a_r8ge, "  The R8GE matrix:" );

  delete [] a;
  delete [] a_r8ge;

  return;
}
//****************************************************************************80

void r8cb_to_r8vec_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CB_TO_R8VEC_TEST tests R8CB_TO_R8VEC.
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
  cout << "R8CB_TO_R8VEC_TEST\n";
  cout << "  R8CB_TO_R8VEC converts an R8CB matrix to a real vector.\n";
  cout << "\n";
  cout << "  Matrix rows M =       " << m  << "\n";
  cout << "  Matrix columns N =    " << n  << "\n";
  cout << "  Lower bandwidth ML  = " << ml << "\n";
  cout << "  Upper bandwidth MU  = " << mu << "\n";

  a = r8cb_indicator ( m, n, ml, mu );

  r8cb_print ( m, n, ml, mu, a, "  The R8CB indicator matrix:" );

  x = r8cb_to_r8vec ( m, n, ml, mu, a );

  k = 0;
  for ( j = 1; j <= n; j++ )
  {
    for ( i = 1; i <= ml+mu+1; i++ )
    {
      k = k + 1;
      cout << setw(6)  << i      << "  "
           << setw(6)  << j      << "  "
           << setw(6)  << k      << "  "
           << setw(12) << x[k-1] << "\n";
    }
  }

  delete [] a;
  a = r8vec_to_r8cb ( m, n, ml, mu, x );

  r8cb_print ( m, n, ml, mu, a, "  The recovered R8CB indicator matrix:" );

  delete [] a;
  delete [] x;

  return;
}
//****************************************************************************80

void r8cb_zeros_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CB_ZEROS_TEST tests R8CB_ZEROS.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    10 July 2016
//
//  Author:
//
//    John Burkardt
//
{
# define M 8
# define N 10
# define ML 2
# define MU 3

  double *a;

  cout << "\n";
  cout << "R8CB_ZEROS_TEST\n";
  cout << "  R8CB_ZEROS zeros an R8CB matrix.\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << M << "\n";
  cout << "  Matrix columns N = " << N << "\n";
  cout << "  Lower bandwidth ML = " << ML << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";

  a = r8cb_zeros ( N, ML, MU );

  r8cb_print ( M, N, ML, MU, a, "  The R8CB indicator matrix:" );

  delete [] a;

  return;
# undef M
# undef N
# undef ML
# undef MU
}
//****************************************************************************80

void r8vec_to_r8cb_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_TO_R8CB_TEST tests R8VEC_TO_R8CB.
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
  cout << "R8VEC_TO_R8CB_TEST\n";
  cout << "  R8VEC_TO_R8CB converts a real vector to an R8CB matrix.\n";
  cout << "\n";
  cout << "  Matrix rows M =       " << m  << "\n";
  cout << "  Matrix columns N =    " << n  << "\n";
  cout << "  Lower bandwidth ML  = " << ml << "\n";
  cout << "  Upper bandwidth MU  = " << mu << "\n";

  a = r8cb_indicator ( m, n, ml, mu );

  r8cb_print ( m, n, ml, mu, a, "  The R8CB indicator matrix:" );

  x = r8cb_to_r8vec ( m, n, ml, mu, a );

  k = 0;
  for ( j = 1; j <= n; j++ )
  {
    for ( i = 1; i <= ml+mu+1; i++ )
    {
      k = k + 1;
      cout << setw(6)  << i      << "  "
           << setw(6)  << j      << "  "
           << setw(6)  << k      << "  "
           << setw(12) << x[k-1] << "\n";
    }
  }

  delete [] a;
  a = r8vec_to_r8cb ( m, n, ml, mu, x );

  r8cb_print ( m, n, ml, mu, a, "  The recovered R8CB indicator matrix:" );

  delete [] a;
  delete [] x;

  return;
}

