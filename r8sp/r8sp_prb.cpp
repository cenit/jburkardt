# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8sp.hpp"

int main ( );
void r8sp_cg_test ( );
void r8sp_diagonal_test ( );
void r8sp_dif2_test ( );
void r8sp_ij_to_k_test ( );
void r8sp_indicator_test ( );
void r8sp_jac_sl_test ( );
void r8sp_mtv_test ( );
void r8sp_mv_test ( );
void r8sp_print_test ( );
void r8sp_print_some_test ( );
void r8sp_random_test ( );
void r8sp_read_test ( );
void r8sp_res_test ( );
void r8sp_to_r8ge_test ( );
void r8sp_to_r8ncf_test ( );
void r8sp_write_test ( );
void r8sp_zeros_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for R8SP_PRB.
//
//  Discussion:
//
//    R8SP_PRB tests the R8SP library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 September 2015
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "R8SP_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the R8SP library.\n";

  r8sp_cg_test ( );
  r8sp_diagonal_test ( );
  r8sp_dif2_test ( );
  r8sp_ij_to_k_test ( );
  r8sp_indicator_test ( );
  r8sp_jac_sl_test ( );
  r8sp_mtv_test ( );
  r8sp_mv_test ( );
  r8sp_print_test ( );
  r8sp_print_some_test ( );
  r8sp_random_test ( );
  r8sp_read_test ( );
  r8sp_res_test ( );
  r8sp_to_r8ge_test ( );
  r8sp_to_r8ncf_test ( );
  r8sp_write_test ( );
  r8sp_zeros_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "R8SP_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void r8sp_cg_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SP_CG_TEST tests R8SP_CG.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    05 June 2014
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *b;
  int *col;
  double e_norm;
  int i;
  int n;
  int nz_num;
  double *r;
  double r_norm;
  int *row;
  int seed;
  double *x1;
  double *x2;

  cout << "\n";
  cout << "R8SP_CG_TEST\n";
  cout << "  R8SP_CG applies CG to an R8SP matrix.\n";

  n = 10;

  nz_num = 3 * n;
  row = ( int * ) malloc ( nz_num * sizeof ( int ) );
  col = ( int * ) malloc ( nz_num * sizeof ( int ) );
//
//  Let A be the -1 2 -1 matrix.
//
  a = r8sp_dif2 ( n, n, nz_num, row, col );
//
//  Choose a random solution.
//
  seed = 123456789;
  x1 = r8vec_uniform_01_new ( n, seed );
//
//  Compute the corresponding right hand side.
//
  b = r8sp_mv ( n, n, nz_num, row, col, a, x1 );
//
//  Call the CG routine.
//
  x2 = new double[n];
  for ( i = 0; i < n; i++ )
  {
    x2[i] = 1.0;
  }
  r8sp_cg ( n, nz_num, row, col, a, b, x2 );
//
//  Compute the residual.
//
  r = r8sp_res ( n, n, nz_num, row, col, a, x2, b );
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
  delete [] col;
  delete [] r;
  delete [] row;
  delete [] x1;
  delete [] x2;

  return;
}
//****************************************************************************80

void r8sp_diagonal_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SP_DIAGONAL_TEST tests R8SP_DIAGONAL.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 September 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int col[20] = {
    4, 5, 1, 1, 1, 3, 3, 4, 0, 5, 
    3, 5, 4, 0, 5, 2, 0, 1, 0, 2 };
  int k;
  int m;
  int n;
  int nz_num;
  int row[20] = {
    0, 2, 3, 5, 4, 1, 5, 2, 0, 1, 
    3, 5, 4, 3, 3, 2, 5, 1, 2, 3 };

  cout << "\n";
  cout << "R8SP_DIAGONAL_TEST\n";
  cout << "  R8SP_DIAGONAL rearranges an R8SP matrix\n";
  cout << "  so that the diagonal is listed first.\n";

  m = 6;
  n = 6;
  nz_num = 20;

  cout << "\n";
  cout << "  Matrix order M =         " << m << "\n";
  cout << "  Matrix order N =         " << n << "\n";
  cout << "  Matrix nonzeros NZ_NUM = " << nz_num << "\n";

  a = r8sp_indicator ( m, n, nz_num, row, col );

  cout << "\n";
  cout << "  Before rearrangement:\n";
  cout << "       K  ROW(K)  COL(K)      A(K)\n";
  cout << "\n";
  for ( k = 0; k < nz_num; k++ )
  {
    cout << "  " << setw(8) << k
         << "  " << setw(8) << row[k]
         << "  " << setw(8) << col[k]
         << "  " << setw(14) << a[k] << "\n";
  }

  r8sp_diagonal ( m, n, nz_num, row, col, a );

  cout << "\n";
  cout << "  After rearrangement:\n";
  cout << "       K  ROW(K)  COL(K)      A(K)\n";
  cout << "\n";
  for ( k = 0; k < nz_num; k++ )
  {
    cout << "  " << setw(8) << k
         << "  " << setw(8) << row[k]
         << "  " << setw(8) << col[k]
         << "  " << setw(14) << a[k] << "\n";
  }

  delete [] a;

  return;
}
//****************************************************************************80

void r8sp_dif2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SP_DIF2_TEST tests R8SP_DIF2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 September 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int *col;
  int m;
  int n;
  int nz_num;
  int *row;

  cout << "\n";
  cout << "R8SP_DIF2_TEST\n";
  cout << "  R8SP_DIF2 sets an R8SP matrix to the second difference.\n";

  m = 5;
  n = 5;
  nz_num = 3 * n - 2;

  cout << "\n";
  cout << "  Matrix order M =         " << m << "\n";
  cout << "  Matrix order N =         " << n << "\n";
  cout << "  Matrix nonzeros NZ_NUM = " << nz_num << "\n";

  row = new int[nz_num];
  col = new int[nz_num];

  a = r8sp_dif2 ( m, n, nz_num, row, col );

  r8sp_print ( m, n, nz_num, row, col, a, "  R8SP matrix A:" );

  delete [] a;
  delete [] col;
  delete [] row;

  return;
}
//****************************************************************************80

void r8sp_ij_to_k_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SP_IJ_TO_K_TEST tests R8SP_IJ_TO_K.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 September 2015
//
//  Author:
//
//    John Burkardt
//
{
  bool check;
  int col[10] = { 1, 4, 0, 4, 0, 1, 2, 3, 3, 0 };
  int i;
  int j;
  int k;
  int m = 7;
  int n = 5;
  int nz_num = 10;
  int row[10] = { 0, 0, 1, 1, 3, 3, 3, 4, 5, 6 };

  cout << "\n";
  cout << "R8SP_IJ_TO_K_TEST\n";
  cout << "  R8SP_IJ_TO_K returns the R8SP index of (I,J).\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << m << "\n";
  cout << "  Matrix columns N = " << n << "\n";
  cout << "  Matrix nonzeros =  " << nz_num << "\n";

  check = r8sp_check ( m, n, nz_num, row, col );

  if ( !check )
  {
    cout << "\n";
    cout << "R8SP_CHECK - Error!\n";
    cout << "  The matrix is not in the proper sorted format.\n";
    return;
  }

  cout << "\n";
  cout << "         I         J         K\n";
  cout << "\n";
  for ( i = 0; i < m; i++ )
  {
    for ( j = 0; j < n; j++ )
    {
      k = r8sp_ij_to_k ( nz_num, row, col, i, j );

      cout << "  " << setw(8) << i
           << "  " << setw(8) << j
           << "  " << setw(8) << k << "\n";
    }
  }

  return;
}
//****************************************************************************80

void r8sp_indicator_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SP_INDICATOR_TEST tests R8SP_INDICATOR.
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
# define N 5
# define NZ_NUM 10

  double *a;
  int col[NZ_NUM] = { 1, 4, 0, 4, 0, 1, 2, 3, 3, 0 };
  int row[NZ_NUM] = { 0, 0, 1, 1, 3, 3, 3, 4, 5, 6 };

  cout << "\n";
  cout << "R8SP_INDICATOR_TEST\n";
  cout << "  R8SP_INDICATOR sets up an R8SP indicator matrix;\n";
  cout << "\n";
  cout << "  Matrix rows M =          " << M << "\n";
  cout << "  Matrix columns N =       " << N << "\n";
  cout << "  Matrix nonzeros NZ_NUM = " << NZ_NUM << "\n";

  a = r8sp_indicator ( M, N, NZ_NUM, row, col );

  r8sp_print ( M, N, NZ_NUM, row, col, a, "  The R8SP indicator matrix:" );

  delete [] a;

  return;
# undef M
# undef N
# undef NZ_NUM
}
//****************************************************************************80

void r8sp_jac_sl_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SP_JAC_SL_TEST tests R8SP_JAC_SL.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 September 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *b;
  int *col;
  int i;
  int it_max;
  int k;
  int m;
  int n;
  int nz_num;
  int *row;
  double *x;

  cout << "\n";
  cout << "R8SP_JAC_SL_TEST\n";
  cout << "  R8SP_JAC_SL uses Jacobi iteration to solve a linear system\n";
  cout << "  with an R8SP matrix.\n";

  m = 10;
  n = 10;
  nz_num = 3 * n - 2;
  it_max = 25;

  cout << "\n";
  cout << "  Matrix order M =         " << m << "\n";
  cout << "  Matrix order N =         " << n << "\n";
  cout << "  Matrix nonzeros NZ_NUM = " << nz_num << "\n";
  cout << "  Iterations per call    = " << it_max << "\n";
//
//  Set the matrix values.
//
  row = new int[nz_num];
  col = new int[nz_num];

  a = r8sp_dif2 ( m, n, nz_num, row, col );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( n );
//
//  Compute the corresponding right hand side.
//
  b = r8sp_mv ( n, n, nz_num, row, col, a, x );
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
    r8sp_jac_sl ( n, nz_num, row, col, a, b, x, it_max );

    r8vec_print ( n, x, "  Current solution estimate:" );
  }

  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

void r8sp_mtv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SP_MTV_TEST tests R8SP_MTV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 September 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *b;
  int col[10] = { 1, 4, 0, 4, 0, 1, 2, 3, 3, 0 };
  int i;
  int m = 7;
  int n = 5;
  int nz_num = 10;
  int row[10] = { 0, 0, 1, 1, 3, 3, 3, 4, 5, 6 };
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8SP_MTV_TEST\n";
  cout << "  R8SP_MTV multiplies a vector by an R8SP matrix;\n";
  cout << "\n";
  cout << "  Matrix rows M =          " << m << "\n";
  cout << "  Matrix columns N =       " << n << "\n";
  cout << "  Matrix nonzeros NZ_NUM = " << nz_num << "\n";
//
//  Set the matrix.
//
  a = r8sp_random ( m, n, nz_num, row, col, seed );

  r8sp_print ( m, n, nz_num, row, col, a, "  The R8SP matrix:" );

  x = new double[m];

  x[0] = 1.0;
  for ( i = 1; i < m-1; i++ )
  {
    x[i] = 0.0;
  }
  x[m-1] = -1.0;

  r8vec_print ( m, x, "  The vector x:" );

  b = r8sp_mtv ( m, n, nz_num, row, col, a, x );

  r8vec_print ( n, b, "  The product A' * x:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

void r8sp_mv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SP_MV_TEST tests R8SP_MV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 September 2015
//
//  Author:
//
//    John Burkardt
//
{
# define M 7
# define N 5
# define NZ_NUM 10

  double *a;
  double *b;
  int col[10] = { 1, 4, 0, 4, 0, 1, 2, 3, 3, 0 };
  int i;
  int row[10] = { 0, 0, 1, 1, 3, 3, 3, 4, 5, 6 };
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8SP_MV_TEST\n";
  cout << "  R8SP_MV multiplies an R8SP matrix by a vector;\n";
  cout << "\n";
  cout << "  Matrix rows M =          " << M << "\n";
  cout << "  Matrix columns N =       " << N << "\n";
  cout << "  Matrix nonzeros NZ_NUM = " << NZ_NUM << "\n";
//
//  Set the matrix.
//
  a = r8sp_random ( M, N, NZ_NUM, row, col, seed );

  x = new double[N];

  x[0] = 1.0;
  for ( i = 1; i < N-1; i++ )
  {
    x[i] = 0.0;
  }
  x[N-1] = -1.0;

  r8vec_print ( N, x, "  The vector x:" );

  b = r8sp_mv ( M, N, NZ_NUM, row, col, a, x );

  r8vec_print ( M, b, "  The product A * x:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
# undef M
# undef N
# undef NZ_NUM
}
//****************************************************************************80

void r8sp_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SP_PRINT_TEST tests R8SP_PRINT.
//
//  Discussion:
//
//    Because MATLAB seems to allow a R8SP matrix to store the same index
//    several times, presumably with the matrix entry being the SUM of
//    these occurrences, I modified R8SP_PRINT to handle this situation
//    (I hope).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 September 2015
//
//  Author:
//
//    John Burkardt
//
{
# define M 5
# define N 7
# define NZ_NUM 12

  double a[NZ_NUM] = {
    21.0,  51.0, 12.0, 52.0, 14.0, 
    24.0,  34.0, 45.0, 46.0, 17.0, 
   100.0, 200.0 };
  int col[NZ_NUM] = { 0, 0, 1, 1, 3, 3, 3, 4, 5, 6, 1, 3 };
  int row[NZ_NUM] = { 1, 4, 0, 4, 0, 1, 2, 3, 3, 0, 0, 2 };


  cout << "\n";
  cout << "R8SP_PRINT_TEST\n";
  cout << "  R8SP_PRINT prints a R8SP matrix;\n";
  cout << "  In this example, we have listed several matrix\n";
  cout << "  locations TWICE.  R8SP_PRINT should compute the\n";
  cout << "  sum of these values.\n";
  cout << "\n";
  cout << "  In particular, we want A(1,2) = 112 and A(3,4) = 234;\n";
  cout << "\n";
  cout << "  Matrix rows M =          " << M << "\n";
  cout << "  Matrix columns N =       " << N << "\n";
  cout << "  Matrix nonzeros NZ_NUM = " << NZ_NUM << "\n";

  r8sp_print ( M, N, NZ_NUM, row, col, a, "  The R8SP matrix:" );

  return;
# undef M
# undef N
# undef NZ_NUM
}
//****************************************************************************80

void r8sp_print_some_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SP_PRINT_SOME_TEST tests R8SP_PRINT_SOME.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 September 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int *col;
  int m;
  int n;
  int nz_num;
  int *row;

  cout << "\n";
  cout << "R8SP_PRINT_SOME_TEST\n";
  cout << "  R8SP_PRINT_SOME prints some of an R8SP matrix.\n";

  m = 5;
  n = 5;
  nz_num = 3 * n - 2;

  row = new int[nz_num];
  col = new int[nz_num];

  a = r8sp_dif2 ( m, n, nz_num, row, col );

  cout << "\n";
  cout << "  Matrix order M =         " << m << "\n";
  cout << "  Matrix order N =         " << n << "\n";
  cout << "  Matrix nonzeros NZ_NUM = " << nz_num << "\n";
 
  r8sp_print_some ( m, n, nz_num, row, col, a, 1, 2, 3, 4, "  Rows 1:3, Cols 2:4:" );

  delete [] a;
  delete [] col;
  delete [] row;

  return;
}
//****************************************************************************80

void r8sp_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SP_RANDOM_TEST tests R8SP_RANDOM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 September 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int col1[13] = { 0, 1, 2, 3, 4, 1, 3, 1, 4, 0, 4, 0, 2 };
  int col2[10] = { 0, 1, 2, 3, 4, 1, 0, 0, 2 };
  int m;
  int n;
  int nz_num1 = 13;
  int nz_num2 = 10;
  int row1[13] = { 0, 1, 2, 3, 4, 0, 1, 2, 2, 3, 3, 4, 4 };
  int row2[10] = { 0, 1, 2, 3, 4, 2, 3, 4, 4 };
  int seed;

  cout << "\n";
  cout << "R8SP_RANDOM_TEST\n";
  cout << "  R8SP_RANDOM randomizes an R8SP matrix.\n";

  m = 5;
  n = 5;
  seed = 123456789;

  a = r8sp_random ( m, n, nz_num1, row1, col1, seed );

  cout << "\n";
  cout << "  Matrix order M =         " << m << "\n";
  cout << "  Matrix order N =         " << n << "\n";
  cout << "  Matrix nonzeros NZ_NUM = " << nz_num1 << "\n";

  r8sp_print ( m, n, nz_num1, row1, col1, a, "  R8SP matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8sp_read_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SP_READ_TEST tests R8SP_READ.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 August 2006
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int *col;
  int m;
  int n;
  int nz_num;
  string input_file = "r8sp_matrix.txt";
  int *row;

  cout << "\n";
  cout << "R8SP_READ_TEST\n";
  cout << "  R8SP_READ reads an R8SP matrix from a file.\n";

  r8sp_read_size ( input_file, m, n, nz_num );

  cout << "\n";
  cout << "  R8SP_READ_SIZE reports matrix size data:\n";
  cout << "\n";

  cout << "\n";
  cout << "  Matrix number of rows M =    " << m << "\n";
  cout << "  Matrix number of columns N = " << n << "\n";
  cout << "  Matrix nonzeros NZ_NUM =     " << nz_num << "\n";

  row = new int[nz_num];
  col = new int[nz_num];
  a = new double[nz_num];

  r8sp_read ( input_file, m, n, nz_num, row, col, a );

  r8sp_print_some ( m, n, nz_num, row, col, a, 1, 1, 
    10, 10, "  Initial 10x10 block of R8SP matrix:" );

  delete [] a;
  delete [] col;
  delete [] row;

  return;
}
//****************************************************************************80

void r8sp_res_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SP_RES_TEST tests R8SP_RES.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 September 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *b;
  int *col;
  int m;
  int n;
  int nz_num;
  double *r;
  int *row;
  double *x;

  cout << "\n";
  cout << "R8SP_RES_TEST\n";
  cout << "  R8SP_RES computes r=b-A*x, where A is an R8SP matrix.\n";

  m = 5;
  n = 4;
  if ( m == n )
  {
    nz_num = 3 * n - 2;
  }
  else
  {
    nz_num = 3 * n - 1;
  }

  row = new int[nz_num];
  col = new int[nz_num];

  a = r8sp_dif2 ( m, n, nz_num, row, col );

  cout << "\n";
  cout << "  Matrix order M =         " << m << "\n";
  cout << "  Matrix order N =         " << n << "\n";
  cout << "  Matrix nonzeros NZ_NUM = " << nz_num << "\n";

  x = r8vec_indicator1_new ( n );
  r8vec_print ( n, x, "  x:" );

  b = r8sp_mv ( m, n, nz_num, row, col, a, x );

  r = r8sp_res ( m, n, nz_num, row, col, a, x, b );

  r8vec_print ( m, r, "  r=b-A*x:" );

  delete [] a;
  delete [] b;
  delete [] col;
  delete [] r;
  delete [] row;
  delete [] x;

  return;
}
//****************************************************************************80

void r8sp_to_r8ge_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SP_TO_R8GE_TEST tests R8SP_TO_R8GE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 September 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a_r8sp;
  double *a_r8ge;
  int *col;
  int m;
  int n;
  int nz_num;
  int *row;

  cout << "\n";
  cout << "R8SP_TO_R8GE_TEST\n";
  cout << "  R8SP_TO_R8GE converts an R8SP matrix to R8GE format.\n";

  m = 5;
  n = 5;
  nz_num = 3 * n - 2;

  row = new int[nz_num];
  col = new int[nz_num];

  a_r8sp = r8sp_dif2 ( m, n, nz_num, row, col );

  cout << "\n";
  cout << "  Matrix order M =         " << m << "\n";
  cout << "  Matrix order N =         " << n << "\n";
  cout << "  Matrix nonzeros NZ_NUM = " << nz_num << "\n";

  r8sp_print ( m, n, nz_num, row, col, a_r8sp, "  R8SP matrix A:" );

  a_r8ge = r8sp_to_r8ge ( m, n, nz_num, row, col, a_r8sp );

  r8ge_print ( m, n, a_r8ge, "  R8GE matrix A:" );

  delete [] a_r8ge;
  delete [] a_r8sp;
  delete [] col;
  delete [] row;

  return;
}
//****************************************************************************80

void r8sp_to_r8ncf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SP_TO_R8NCF_TEST tests R8SP_TO_R8NCF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 September 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int *col;
  int m;
  int n;
  int nz_num;
  int *row;
  int *rowcol;

  cout << "\n";
  cout << "R8SP_TO_R8NCF_TEST\n";
  cout << "  R8SP_TO_R8NCF converts an R8SP matrix to R8NCF format.\n";

  m = 5;
  n = 5;
  nz_num = 3 * n - 2;

  row = new int[nz_num];
  col = new int[nz_num];

  a = r8sp_dif2 ( m, n, nz_num, row, col );

  cout << "\n";
  cout << "  Matrix order M =         " << m << "\n";
  cout << "  Matrix order N =         " << n << "\n";
  cout << "  Matrix nonzeros NZ_NUM = " << nz_num << "\n";

  r8sp_print ( m, n, nz_num, row, col, a, "  R8SP matrix A:" );

  rowcol = new int[2*nz_num];

  r8sp_to_r8ncf ( m, n, nz_num, row, col, a, rowcol );

  r8ncf_print ( m, n, nz_num, rowcol, a, "  R8NCF matrix A:" );

  delete [] a;
  delete [] col;
  delete [] row;
  delete [] rowcol;

  return;
}
//****************************************************************************80

void r8sp_write_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SP_WRITE_TEST tests R8SP_WRITE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 August 2006
//
//  Author:
//
//    John Burkardt
//
{
# define M 100
# define N 100
# define NZ_NUM ( 3 * N - 2 )

  double a[NZ_NUM];
  int col[NZ_NUM];
  int i;
  int j;
  int k;
  string output_file = "r8sp_matrix.txt";
  int row[NZ_NUM];

  cout << "\n";
  cout << "R8SP_WRITE_TEST\n";
  cout << "  R8SP_WRITE writes an R8SP matrix to a file.\n";
  cout << "\n";
  cout << "  Matrix number of rows M =    " << M << "\n";
  cout << "  Matrix number of columns N = " << N << "\n";
  cout << "  Matrix nonzeros NZ_NUM =     " << NZ_NUM << "\n";
//
//  Set the matrix values.
//
  k = 0;
  for ( i = 1; i <= N; i++ )
  {

    j = i;
    row[k] = i;
    col[k] = j;
    a[k] = ( double ) ( 100 * i + j );
    k = k + 1;
  }

  for ( i = 2; i <= N; i++ )
  {
    j = i - 1;
    row[k] = i;
    col[k] = j;
    a[k] = ( double ) ( 100 * i + j );
    k = k + 1;
  }

  for ( i = 1; i <= N-1; i++ )
  {
    j = i + 1;
    row[k] = i;
    col[k] = j;
    a[k] = ( double ) ( 100 * i + j );
    k = k + 1;
  }

  r8sp_print_some ( M, N, NZ_NUM, row, col, a, 1, 1, 
    10, 10, "  Initial 10x10 block of R8SP matrix:" );

  r8sp_write ( M, N, NZ_NUM, row, col, a, output_file );

  cout << "  R8SP_WRITE wrote the matrix data to \"" << output_file << "\".\n";

  return;
# undef M
# undef N
# undef NZ_NUM
}
//****************************************************************************80

void r8sp_zeros_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SP_ZEROS_TEST tests R8SP_ZEROS.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 September 2015
//
//  Author:
//
//   John Burkardt
//
{
  double *a;
  int col1[13] = { 0, 1, 2, 3, 4, 1, 3, 1, 4, 0, 4, 0, 2 };
  int col2[10] = { 0, 1, 2, 3, 4, 1, 0, 0, 2 };
  int m;
  int n;
  int nz_num1 = 13;
  int nz_num2 = 10;
  int row1[13] = { 0, 1, 2, 3, 4, 0, 1, 2, 2, 3, 3, 4, 4 };
  int row2[10] = { 0, 1, 2, 3, 4, 2, 3, 4, 4 };

  cout << "\n";
  cout << "R8SP_ZEROS_TEST\n";
  cout << "  R8SP_ZEROS sets an R8SP matrix to zeros.\n";

  m = 5;
  n = 5;
 
  a = r8sp_zeros ( m, n, nz_num1, row1, col1 );

  cout << "\n";
  cout << "  Matrix order M =         " << m << "\n";
  cout << "  Matrix order N =         " << n << "\n";
  cout << "  Matrix nonzeros NZ_NUM = " << nz_num1 << "\n";

  r8sp_print ( m, n, nz_num1, row1, col1, a, "  R8SP matrix:" );

  delete [] a;

  return;
}

