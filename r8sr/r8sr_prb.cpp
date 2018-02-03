# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8sr.hpp"

int main ( );
void r8sr_dif2_test ( );
void r8sr_indicator_test ( );
void r8sr_mtv_test ( );
void r8sr_mv_test ( );
void r8sr_print_test ( );
void r8sr_print_some_test ( );
void r8sr_random_test ( );
void r8sr_to_r8ge_test ( );
void r8sr_zeros_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for R8SR_PRB.
//
//  Discussion:
//
//    R8SR_PRB tests the R8SR library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    16 June 2016
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "R8SR_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the R8SR library.\n";

  r8sr_dif2_test ( );
  r8sr_indicator_test ( );
  r8sr_mtv_test ( );
  r8sr_mv_test ( );
  r8sr_print_test ( );
  r8sr_print_some_test ( );
  r8sr_random_test ( );
  r8sr_to_r8ge_test ( );
  r8sr_zeros_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "R8SR_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//*****************************************************************************/

void r8sr_dif2_test ( )

//*****************************************************************************/
//
//  Purpose:
//
//    R8SR_DIF2_TEST tests R8SR_DIF2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    13 June 2016
//
//  Author:
//
//    John Burkardt
//
{
  int *col;
  double *diag;
  int n = 5;
  int nz = 8;
  double *off;
  int *row;

  cout << "\n";
  cout << "R8SR_DIF2_TEST\n";
  cout << "  R8SR_DIF2 sets an R8SR second difference matrix;\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  col = new int[nz];
  diag = new double[n];
  off = new double[2*(n-1)];
  row = new int[n+1];

  r8sr_dif2 ( n, nz, row, col, diag, off );

  r8sr_print ( n, nz, row, col, diag, off, "  The R8SR second difference matrix:" );

  delete [] col;
  delete [] diag;
  delete [] off;
  delete [] row;

  return;
}
//****************************************************************************80

void r8sr_indicator_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SR_INDICATOR_TEST tests R8SR_INDICATOR.
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
# define N 5
# define NZ 7

  int col[NZ] = { 1, 4, 4, 0, 0, 1, 2 };
  double diag[N];
  double off[NZ];
  int row[N+1] = { 0, 2, 3, 4, 5, 7 };

  cout << "\n";
  cout << "R8SR_INDICATOR_TEST\n";
  cout << "  R8SR_INDICATOR sets up an R8SR indicator matrix;\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";

  r8sr_indicator ( N, NZ, row, col, diag, off );

  r8sr_print ( N, NZ, row, col, diag, off, "  The R8SR indicator matrix:" );

  return;
# undef N
# undef NZ
}
//****************************************************************************80

void r8sr_mv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SR_MV_TEST tests R8SR_MV.
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
# define N 5
# define NZ 7

  double *b;
  double *c;
  int col[NZ] = { 1, 4, 4, 0, 0, 1, 2 };
  double diag[N];
  int i;
  double off[NZ];
  int row[N+1] = { 0, 2, 3, 4, 5, 7 };
  int seed = 123456789;
  double x[N];

  cout << "\n";
  cout << "R8SR_MV_TEST\n";
  cout << "  R8SR_MV multiplies an R8SR matrix by a vector;\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
//
//  Set the matrix.
//
  r8sr_random ( N, NZ, row, col, diag, off, seed );
//
//  Make an R8GE copy.
//
  c = r8sr_to_r8ge ( N, NZ, row, col, diag, off );
//
//  Print the R8GE copy.
//
  r8ge_print ( N, N, c, "  The R8SR matrix, in R8GE form:" );

  x[0] = 1.0;
  for ( i = 1; i < N-1; i++ )
  {
    x[i] = 0.0;
  }
  x[N-1] = -1.0;

  r8vec_print ( N, x, "  The vector x:" );

  b = r8sr_mv ( N, NZ, row, col, diag, off, x );

  r8vec_print ( N, b, "  The product A * x:" );

  delete [] b;
  delete [] c;

  return;
# undef N
# undef NZ
}
//****************************************************************************80

void r8sr_mtv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SR_MTV_TEST tests R8SR_MTV.
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
# define N 5
# define NZ 7

  double *b;
  double *c;
  int col[NZ] = { 1, 4, 4, 0, 0, 1, 2 };
  double diag[N];
  int i;
  double off[NZ];
  int row[N+1] = { 0, 2, 3, 4, 5, 7 };
  int seed = 123456789;
  double x[N];

  cout << "\n";
  cout << "R8SR_MTV_TEST\n";
  cout << "  R8SR_MTV multiplies a vector by an R8SR matrix;\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
//
//  Set the matrix.
//
  r8sr_random ( N, NZ, row, col, diag, off, seed );
//
//  Make an R8GE copy.
//
  c = r8sr_to_r8ge ( N, NZ, row, col, diag, off );
//
//  Print the R8GE copy.
//
  r8ge_print ( N, N, c, "  The R8SR matrix, in R8GE form:" );

  x[0] = 1.0;
  for ( i = 1; i < N-1; i++ )
  {
    x[i] = 0.0;
  }
  x[N-1] = -1.0;

  r8vec_print ( N, x, "  The vector x:" );

  b = r8sr_mtv ( N, NZ, row, col, diag, off, x );

  r8vec_print ( N, b, "  The product A' * x:" );

  delete [] b;
  delete [] c;

  return;
# undef N
# undef NZ
}
//****************************************************************************80

void r8sr_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SR_PRINT_TEST tests R8SR_PRINT.
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
# define N 5
# define NZ 7

  int col[NZ] = { 1, 4, 4, 0, 0, 1, 2 };
  double diag[N];
  double off[NZ];
  int row[N+1] = { 0, 2, 3, 4, 5, 7 };
  int seed = 123456789;

  cout << "\n";
  cout << "R8SR_PRINT_TEST\n";
  cout << "  R8SR_PRINT prints an R8SR matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
//
//  Set the matrix.
//
  r8sr_random ( N, NZ, row, col, diag, off, seed );
//
//  Print the matrix.
//
  r8sr_print ( N, NZ, row, col, diag, off, "  The R8SR matrix:" );

  return;
# undef N
# undef NZ
}
//****************************************************************************80

void r8sr_print_some_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SR_PRINT_SOME_TEST tests R8SR_PRINT_SOME.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    13 June 2016
//
//  Author:
//
//    John Burkardt
//
{
  int col[7] = { 1, 4, 4, 0, 0, 1, 2 };
  double diag[5];
  int n = 5;
  int nz = 7;
  double off[7];
  int row[6] = { 0, 2, 3, 4, 5, 7 };
  int seed = 123456789;

  cout << "\n";
  cout << "R8SR_PRINT_SOME_TEST\n";
  cout << "  R8SR_PRINT_SOME prints some of an R8SR matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
/*
  Set the matrix.
*/
  r8sr_random ( n, nz, row, col, diag, off, seed );
/*
  Print the matrix.
*/
  r8sr_print_some ( n, nz, row, col, diag, off, 
    0, 4, n - 1, 4, "  Rows 0:N-1, column 4" );

  return;
}
//****************************************************************************80

void r8sr_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SR_RANDOM_TEST tests R8SR_RANDOM.
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
# define N 5
# define NZ 7

  double *b;
  int col[NZ] = { 1, 4, 4, 0, 0, 1, 2 };
  double diag[N];
  double off[NZ];
  int row[N+1] = { 0, 2, 3, 4, 5, 7 };
  int seed = 123456789;

  cout << "\n";
  cout << "R8SR_RANDOM_TEST\n";
  cout << "  R8SR_RANDOM randomizes an R8SR matrix\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
//
//  Set the matrix.
//
  r8sr_random ( N, NZ, row, col, diag, off, seed );
//
//  Make an R8GE copy.
//
  b = r8sr_to_r8ge ( N, NZ, row, col, diag, off );
//
//  Print the R8GE copy.
//
  r8ge_print ( N, N, b, "  The R8SR matrix, in R8GE form:" );

  delete [] b;

  return;
# undef N
# undef NZ
}
//*****************************************************************************/

void r8sr_to_r8ge_test ( )

//*****************************************************************************/
//
//  Purpose:
//
//    R8SR_TO_R8GE_TEST tests R8SR_TO_R8GE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    13 June 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a_r8ge;
  int col[7] = { 1, 4, 4, 0, 0, 1, 2 };
  double diag[5];
  int n = 5;
  int nz = 7;
  double off[7];
  int row[6] = { 0, 2, 3, 4, 5, 7 };
  int seed = 123456789;

  cout << "\n";
  cout << "R8SR_TO_R8GE_TEST\n";
  cout << "  R8SR_TO_R8GE converts a matrix from R8SR to R8GE format.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
//
//  Set the matrix.
//
  r8sr_random ( n, nz, row, col, diag, off, seed );
//
//  Print the matrix.
//
  r8sr_print ( n, nz, row, col, diag, off, "  The R8SR matrix:" );
//
//  Convert the matrix.
//
  a_r8ge = r8sr_to_r8ge ( n, nz, row, col, diag, off );
//
//  Print the R8GE matrix.
//
  r8ge_print ( n, n, a_r8ge, "  The R8GE matrix:" );

  delete [] a_r8ge;

  return;
}
//****************************************************************************80

void r8sr_zeros_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SR_ZEROS_TEST tests R8SR_ZEROS.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    13 June 2016
//
//  Author:
//
//    John Burkardt
//
{
# define N 5
# define NZ 7

  int col[NZ] = { 1, 4, 4, 0, 0, 1, 2 };
  double diag[N];
  double off[NZ];
  int row[N+1] = { 0, 2, 3, 4, 5, 7 };

  cout << "\n";
  cout << "R8SR_ZEROS_TEST\n";
  cout << "  R8SR_ZEROS sets up a zero R8SR matrix;\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";

  r8sr_zeros ( N, NZ, row, col, diag, off );

  r8sr_print ( N, NZ, row, col, diag, off, "  The R8SR zero matrix:" );

  return;
# undef N
# undef NZ
}


