# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8cc.hpp"

int main ( );
void r8cc_dif2_test ( );
void r8cc_get_test ( );
void r8cc_ijk_test ( );
void r8cc_inc_test ( );
void r8cc_indicator_test ( );
void r8cc_kij_test ( );
void r8cc_mtv_test ( );
void r8cc_mv_test ( );
void r8cc_print_test ( );
void r8cc_print_some_test ( );
void r8cc_random_test ( );
void r8cc_read_test ( );
void r8cc_set_test ( );
void r8cc_to_r8ge_test ( );
void r8cc_write_test ( );
void r8cc_zeros_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for R8CC_PRB.
//
//  Discussion:
//
//    R8CC_PRB tests the R8CC library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 October 2015
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "R8CC_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the R8CC library.\n";

  r8cc_dif2_test ( );
  r8cc_get_test ( );
  r8cc_ijk_test ( );
  r8cc_inc_test ( );
  r8cc_indicator_test ( );
  r8cc_kij_test ( );
  r8cc_mtv_test ( );
  r8cc_mv_test ( );
  r8cc_print_test ( );
  r8cc_print_some_test ( );
  r8cc_random_test ( );
  r8cc_read_test ( );
  r8cc_set_test ( );
  r8cc_to_r8ge_test ( );
  r8cc_write_test ( );
  r8cc_zeros_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "R8CC_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void r8cc_dif2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CC_DIF2_TEST tests R8CC_DIF2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 October 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int *colptr;
  int m = 5;
  int n = 5;
  int nz_num = 13;
  int *rowind;

  cout << "\n";
  cout << "R8CC_DIF2_TEST\n";
  cout << "  R8CC_DIF2 sets the second difference as an R8CC matrix;\n";
  cout << "\n";
  cout << "  Matrix rows M    = " << m << "\n";
  cout << "  Matrix columns N = " << n << "\n";
  cout << "  Nonzeros NZ_NUM  = " << nz_num << "\n";

  colptr = new int[n+1];
  rowind = new int[nz_num];
  a = new double[nz_num];
  r8cc_dif2 ( m, n, nz_num, colptr, rowind, a );

  r8cc_print ( m, n, nz_num, colptr, rowind, a, "  The R8CC matrix:" );

  delete [] a;
  delete [] colptr;
  delete [] rowind;

  return;
}
//****************************************************************************80

void r8cc_get_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CC_GET_TEST tests R8CC_GET.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 October 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int colptr[6] = { 0, 3, 5, 7, 9, 12 };
  int i;
  int j;
  int k;
  int m = 5;
  int n = 5;
  int nz_num = 12;
  int rowind[12] = { 0, 1, 3, 0, 1, 2, 4, 3, 4, 0, 1, 4 };
  int seed = 123456789;
  int test;
  double value;

  cout << "\n";
  cout << "R8CC_GET_TEST\n";
  cout << "  R8CC_GET gets entries of an R8CC matrix;\n";
  cout << "\n";
  cout << "  Matrix rows M    = " << m << "\n";
  cout << "  Matrix columns N = " << n << "\n";
  cout << "  Nonzeros NZ_NUM  = " << nz_num << "\n";

  i4vec_print ( n + 1, colptr, "  The COLPTR vector:" );

  i4vec_print ( nz_num, rowind, "  The ROWIND vector:" );
//
//  Initialize the matrix to random values.
//
  a = r8cc_random ( m, n, nz_num, colptr, rowind, seed );

  r8cc_print ( m, n, nz_num, colptr, rowind, a, "  The R8CC matrix:" );

  cout << "\n";
  cout << "  R8CC_GET retrieves 10 entries.\n";
  cout << "\n";
  cout << "         I         J         K      VALUE\n";
  cout << "\n";

  for ( test = 1; test <= 10; test++ )
  {
    k = i4_uniform_ab ( 0, nz_num - 1, seed );
    r8cc_kij ( m, n, nz_num, colptr, rowind, k, i, j );
    value = r8cc_get ( m, n, nz_num, colptr, rowind, a, i, j );
    cout << "  " << setw(8)  << i
         << "  " << setw(8)  << j
         << "  " << setw(8)  << k 
         << "  " << setw(14) << value << "\n";
  }

  delete [] a;

  return;
}
//****************************************************************************80

void r8cc_ijk_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CC_IJK_TEST tests R8CC_IJK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 October 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int colptr[6] = { 0, 3, 5, 7, 9, 12 };
  int i;
  int j;
  int k;
  int m = 5;
  int n = 5;
  int nz_num = 12;
  int rowind[12] = { 0, 1, 3, 0, 1, 2, 4, 3, 4, 0, 1, 4 };
  int seed = 123456789;
  int test;
  double value;

  cout << "\n";
  cout << "R8CC_IJK_TEST\n";
  cout << "  R8CC_IJK gets K from (I,J) for an R8CC matrix.\n";
  cout << "\n";
  cout << "  Matrix rows M    = " << m << "\n";
  cout << "  Matrix columns N = " << n << "\n";
  cout << "  Nonzeros NZ_NUM  = " << nz_num << "\n";

  i4vec_print ( n + 1, colptr, "  The COLPTR vector:" );

  i4vec_print ( nz_num, rowind, "  The ROWIND vector:" );
//
//  Initialize the matrix to random values.
//
  a = r8cc_random ( m, n, nz_num, colptr, rowind, seed );

  r8cc_print ( m, n, nz_num, colptr, rowind, a, "  The initial R8CC matrix:" );

  cout << "\n";
  cout << "  R8CC_IJK locates some (I,J) entries.\n";
  cout << "\n";
  cout << "         I         J         K\n";
  cout << "\n";

  for ( test = 1; test <= 10; test++ )
  {
    i = i4_uniform_ab ( 0, m - 1, seed );
    j = i4_uniform_ab ( 0, n - 1, seed );
    k = r8cc_ijk ( m, n, nz_num, colptr, rowind, i, j );
    cout << "  " << setw(8) << i
         << "  " << setw(8) << j
         << "  " << setw(8) << k << "\n";
  }

  delete [] a;

  return;
}
//****************************************************************************80

void r8cc_inc_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CC_INC_TEST tests R8CC_INC.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 October 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int colptr[6] = { 0, 3, 5, 7, 9, 12 };
  int i;
  int j;
  int k;
  int m = 5;
  int n = 5;
  int nz_num = 12;
  int rowind[12] = { 0, 1, 3, 0, 1, 2, 4, 3, 4, 0, 1, 4 };
  int seed = 123456789;
  int test;
  double value;

  cout << "\n";
  cout << "R8CC_INC_TEST\n";
  cout << "  R8CC_INC increments the entries of an R8CC matrix;\n";
  cout << "\n";
  cout << "  Matrix rows M    = " << m << "\n";
  cout << "  Matrix columns N = " << n << "\n";
  cout << "  Nonzeros NZ_NUM  = " << nz_num << "\n";

  i4vec_print ( n + 1, colptr, "  The COLPTR vector:" );

  i4vec_print ( nz_num, rowind, "  The ROWIND vector:" );
//
//  Initialize the matrix to random values.
//
  a = r8cc_random ( m, n, nz_num, colptr, rowind, seed );

  r8cc_print ( m, n, nz_num, colptr, rowind, a, "  The initial R8CC matrix:" );

  cout << "\n";
  cout << "  R8CC_INC increments 10 entries at random.\n";
  cout << "\n";
  cout << "         I         J         K       NEW_VALUE\n";
  cout << "\n";

  for ( test = 1; test <= 10; test++ )
  {
    k = i4_uniform_ab ( 0, nz_num - 1, seed );
    r8cc_kij ( m, n, nz_num, colptr, rowind, k, i, j );
    value = 20.0 + ( double ) ( test );
    r8cc_inc ( m, n, nz_num, colptr, rowind, a, i, j, value );
    value = r8cc_get ( m, n, nz_num, colptr, rowind, a, i, j );
    cout << "  " << setw(8)  << i
         << "  " << setw(8)  << j
         << "  " << setw(8)  << k 
         << "  " << setw(14) << value << "\n";
  }

  r8cc_print ( m, n, nz_num, colptr, rowind, a, "  The final R8CC matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8cc_indicator_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CC_INDICATOR_TEST tests R8CC_INDICATOR.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    01 September 2006
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int colptr[6] = { 0, 3, 5, 7, 9, 12 };
  int m = 5;
  int n = 5;
  int nz_num = 12;
  int rowind[12] = { 0, 1, 3, 0, 1, 2, 4, 3, 4, 0, 1, 4 };

  cout << "\n";
  cout << "R8CC_INDICATOR_TEST\n";
  cout << "  R8CC_INDICATOR sets up an R8CC indicator matrix;\n";
  cout << "\n";
  cout << "  Matrix rows M    = " << m << "\n";
  cout << "  Matrix columns N = " << n << "\n";
  cout << "  Nonzeros NZ_NUM  = " << nz_num << "\n";

  a = r8cc_indicator ( m, n, nz_num, colptr, rowind );

  r8cc_print ( m, n, nz_num, colptr, rowind, a, "  The R8CC indicator matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8cc_kij_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CC_KIJ_TEST tests R8CC_KIJ.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 October 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int colptr[6] = { 0, 3, 5, 7, 9, 12 };
  int i;
  int j;
  int k;
  int m = 5;
  int n = 5;
  int nz_num = 12;
  int rowind[12] = { 0, 1, 3, 0, 1, 2, 4, 3, 4, 0, 1, 4 };
  int seed = 123456789;
  int test;
  double value;

  cout << "\n";
  cout << "R8CC_KIJ_TEST\n";
  cout << "  R8CC_KIJ gets (I,J) from K for an R8CC matrix;\n";
  cout << "\n";
  cout << "  Matrix rows M    = " << m << "\n";
  cout << "  Matrix columns N = " << n << "\n";
  cout << "  Nonzeros NZ_NUM  = " << nz_num << "\n";

  i4vec_print ( n + 1, colptr, "  The COLPTR vector:" );

  i4vec_print ( nz_num, rowind, "  The ROWIND vector:" );
//
//  Initialize the matrix to random values.
//
  a = r8cc_random ( m, n, nz_num, colptr, rowind, seed );

  r8cc_print ( m, n, nz_num, colptr, rowind, a, "  The R8CC matrix:" );

  cout << "\n";
  cout << "  R8CC_KIJ locates some K entries.\n";
  cout << "\n";
  cout << "         K         I         J\n";
  cout << "\n";

  for ( test = 1; test <= 10; test++ )
  {
    k = i4_uniform_ab ( 0, nz_num - 1, seed );
    r8cc_kij ( m, n, nz_num, colptr, rowind, k, i, j );
    cout << "  " << setw(8) << k
         << "  " << setw(8) << i
         << "  " << setw(8) << j << "\n";
  }

  delete [] a;

  return;
}
//****************************************************************************80

void r8cc_mtv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CC_MTV_TEST tests R8CC_MTV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 October 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *b;
  int colptr[6] = { 0, 3, 5, 7, 9, 12 };
  int i;
  int m = 5;
  int n = 5;
  int nz_num = 12;
  int rowind[12] = { 0, 1, 3, 0, 1, 2, 4, 3, 4, 0, 1, 4 };
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8CC_MTV_TEST\n";
  cout << "  R8CC_MTV computes b=A'*x, where A is an R8CC matrix;\n";
  cout << "\n";
  cout << "  Matrix rows M    = " << m << "\n";
  cout << "  Matrix columns N = " << n << "\n";
  cout << "  Nonzeros NZ_NUM  = " << nz_num << "\n";
//
//  Set the matrix.
//
  a = r8cc_random ( m, n, nz_num, colptr, rowind, seed );
//
//  Print the matrix.
//
  r8cc_print ( m, n, nz_num, colptr, rowind, a, "  The R8CC matrix:" );
//
//  Compute A'*x = b.
//
  x = ( double * ) malloc ( m * sizeof ( double ) );
  x[0] = 1.0;
  for ( i = 1; i < m - 1; i++ )
  {
    x[i] = 0.0;
  }
  x[m-1] = -1.0;

  b = r8cc_mtv ( m, n, nz_num, colptr, rowind, a, x );

  r8vec_print ( n, b, "  b=A'*x:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

void r8cc_mv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CC_MV_TEST tests R8CC_MV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 October 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *b;
  int colptr[6] = { 0, 3, 5, 7, 9, 12 };
  int i;
  int m = 5;
  int n = 5;
  int nz_num = 12;
  int rowind[12] = { 0, 1, 3, 0, 1, 2, 4, 3, 4, 0, 1, 4 };
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8CC_MV_TEST\n";
  cout << "  R8CC_MV computes b=A*x, where A is an R8CC matrix.\n";
  cout << "\n";
  cout << "  Matrix rows M    = " << m << "\n";
  cout << "  Matrix columns N = " << n << "\n";
  cout << "  Nonzeros NZ_NUM  = " << nz_num << "\n";
//
//  Set the matrix.
//
  a = r8cc_random ( m, n, nz_num, colptr, rowind, seed );
//
//  Print the matrix.
//
  r8cc_print ( m, n, nz_num, colptr, rowind, a, "  The R8CC matrix:" );
//
//  Compute A * x = b.
//
  x = ( double * ) malloc ( n * sizeof ( double ) );
  x[0] = 1.0;
  for ( i = 1; i < n - 1; i++ )
  {
    x[i] = 0.0;
  }
  x[n-1] = -1.0;

  r8vec_print ( n, x, "  x:" );

  b = r8cc_mv ( m, n, nz_num, colptr, rowind, a, x );

  r8vec_print ( m, b, "  b=A*x:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

void r8cc_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CC_PRINT_TEST tests R8CC_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    01 September 2006
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int colptr[6] = { 0, 3, 5, 7, 9, 12 };
  int m = 5;
  int n = 5;
  int nz_num = 12;
  int rowind[12] = { 0, 1, 3, 0, 1, 2, 4, 3, 4, 0, 1, 4 };
  int seed = 123456789;

  cout << "\n";
  cout << "R8CC_PRINT_TEST\n";
  cout << "  R8CC_PRINT prints an R8CC matrix.\n";
  cout << "\n";
  cout << "  Matrix rows M    = " << m << "\n";
  cout << "  Matrix columns N = " << n << "\n";
  cout << "  Nonzeros NZ_NUM  = " << nz_num << "\n";
//
//  Set the matrix.
//
  a = r8cc_random ( m, n, nz_num, colptr, rowind, seed );
//
//  Print the matrix.
//
  r8cc_print ( m, n, nz_num, colptr, rowind, a, "  The R8CC matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8cc_print_some_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CC_PRINT_SOME_TEST tests R8CC_PRINT_SOME.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 October 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int colptr[11] = { 0, 2, 5, 8, 11, 14, 17, 20, 23, 26, 28  };
  int m = 10;
  int n = 10;
  int nz_num = 28;
  int rowind[28] = { 
    0,  1,
    0,  1,  2,  
    1,  2,  3, 
    2,  3,  4, 
    3,  4,  5, 
    4,  5,  6, 
    5,  6,  7, 
    6,  7,  8, 
    7,  8,  9, 
    8,  9 };

  cout << "\n";
  cout << "R8CC_PRINT_SOME_TEST\n";
  cout << "  R8CC_PRINT_SOME prints some of an R8CC matrix.\n";
  cout << "\n";
  cout << "  Matrix rows M    = " << m << "\n";
  cout << "  Matrix columns N = " << n << "\n";
  cout << "  Nonzeros NZ_NUM  = " << nz_num << "\n";
//
//  Set the matrix.
//
  a = r8cc_indicator ( m, n, nz_num, colptr, rowind );
//
//  Print the matrix.
//
  r8cc_print_some ( m, n, nz_num, colptr, rowind, a, 1, 4, 5, 7, 
    "  Rows 1:5, Cols 4:7:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8cc_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CC_RANDOM_TEST tests R8CC_RANDOM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 October 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int colptr[6] = { 0, 3, 5, 7, 9, 12 };
  int m = 5;
  int n = 5;
  int nz_num = 12;
  int rowind[12] = { 0, 1, 3, 0, 1, 2, 4, 3, 4, 0, 1, 4 };
  int seed = 123456789;

  cout << "\n";
  cout << "R8CC_RANDOM_TEST\n";
  cout << "  R8CC_RANDOM randomizes an R8CC matrix;\n";
  cout << "\n";
  cout << "  Matrix rows M    = " << m << "\n";
  cout << "  Matrix columns N = " << n << "\n";
  cout << "  Nonzeros NZ_NUM  = " << nz_num << "\n";

  a = r8cc_random ( m, n, nz_num, colptr, rowind, seed );

  r8cc_print ( m, n, nz_num, colptr, rowind, a, "  The R8CC matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8cc_read_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CC_READ_TEST tests R8CC_READ.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 October 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  string a_file = "r8cc_a.txt";
  int *col;
  string col_file = "r8cc_col.txt";
  int m;
  int n;
  int nz_num;
  int *row;
  string row_file = "r8cc_row.txt";

  cout << "\n";
  cout << "R8CC_READ_TEST\n";
  cout << "  R8CC_READ reads an R8CC matrix from 3 files.\n";

  r8cc_read_size ( col_file, row_file, m, n, nz_num );

  cout << "\n";
  cout << "  Matrix rows M     = " << m      << "\n";
  cout << "  Matrix columns N  = " << n      << "\n";
  cout << "  Nonzeros NZ_NUM   = " << nz_num << "\n";

  a = new double[nz_num];
  col = new int[n+1];
  row = new int[nz_num];

  r8cc_read ( col_file, row_file, a_file, m, n, nz_num, col, row, a );

  i4vec_print ( n+1, col, "  The COL vector:" );

  i4vec_print ( nz_num, row, "  The ROW vector:" );

  r8cc_print ( m, n, nz_num, col, row, a, "  The R8CC matrix:" );

  delete [] a;
  delete [] col;
  delete [] row;

  return;
}
//****************************************************************************80

void r8cc_set_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CC_SET_TEST tests R8CC_SET.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 October 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int colptr[6] = { 0, 3, 5, 7, 9, 12 };
  int i;
  int j;
  int k;
  int m = 5;
  int n = 5;
  int nz_num = 12;
  int rowind[12] = { 0, 1, 3, 0, 1, 2, 4, 3, 4, 0, 1, 4 };
  int seed = 123456789;
  int test;
  int test_num = 20;
  double value;

  cout << "\n";
  cout << "R8CC_SET_TEST\n";
  cout << "  R8CC_SET sets entries of an R8CC matrix;\n";
  cout << "\n";
  cout << "  Matrix rows M    = " << m << "\n";
  cout << "  Matrix columns N = " << n << "\n";
  cout << "  Nonzeros NZ_NUM  = " << nz_num << "\n";

  i4vec_print ( n + 1, colptr, "  The COLPTR vector:" );

  i4vec_print ( nz_num, rowind, "  The ROWIND vector:" );
//
//  Initialize the matrix to random values.
//
  a = r8cc_random ( m, n, nz_num, colptr, rowind, seed );

  r8cc_print ( m, n, nz_num, colptr, rowind, a, "  The initial R8CC matrix:" );

  cout << "\n";
  cout << "  R8CC_SET sets 10 entries at random.\n";
  cout << "\n";
  cout << "         I         J         K      NEW_VALUE\n";
  cout << "\n";

  for ( test = 1; test <= 10; test++ )
  {
    k = i4_uniform_ab ( 0, nz_num - 1, seed );
    r8cc_kij ( m, n, nz_num, colptr, rowind, k, i, j );
    value = 100.0 + ( double ) ( test );
    r8cc_set ( m, n, nz_num, colptr, rowind, a, i, j, value );
    cout << "  " << setw(8)  << i
         << "  " << setw(8)  << j
         << "  " << setw(8)  << k 
         << "  " << setw(14) << value << "\n";
  }

  r8cc_print ( m, n, nz_num, colptr, rowind, a, "  The final R8CC matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8cc_to_r8ge_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CC_TO_R8GE_TEST tests R8CC_TO_R8GE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 October 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a_r8cc;
  double *a_r8ge;
  int colptr[6] = { 0, 3, 5, 7, 9, 12 };
  int m = 5;
  int n = 5;
  int nz_num = 12;
  int rowind[12] = { 0, 1, 3, 0, 1, 2, 4, 3, 4, 0, 1, 4 };
  int seed = 123456789;

  cout << "\n";
  cout << "R8CC_TO_R8GE_TEST\n";
  cout << "  R8CC_TO_R8GE converts a matrix from R8CC to R8GE format\n";
  cout << "\n";
  cout << "  Matrix rows M    = " << m << "\n";
  cout << "  Matrix columns N = " << n << "\n";
  cout << "  Nonzeros NZ_NUM  = " << nz_num << "\n";

  a_r8cc = r8cc_random ( m, n, nz_num, colptr, rowind, seed );

  r8cc_print ( m, n, nz_num, colptr, rowind, a_r8cc, "  The R8CC matrix:" );

  a_r8ge = r8cc_to_r8ge ( m, n, nz_num, colptr, rowind, a_r8cc );

  r8ge_print ( m, n, a_r8ge, "  The R8GE matrix:" );

  delete [] a_r8cc;
  delete [] a_r8ge;

  return;
}
//****************************************************************************80

void r8cc_write_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CC_WRITE_TEST tests R8CC_WRITE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    30 August 2006
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  string a_file = "r8cc_a.txt";
  int colptr[6] = { 0, 3, 5, 7, 9, 12 };
  string col_file = "r8cc_col.txt";
  int m = 5;
  int n = 5;
  int nz_num = 12;
  int rowind[12] = { 0, 1, 3, 0, 1, 2, 4, 3, 4, 0, 1, 4 };
  string row_file = "r8cc_row.txt";

  cout << "\n";
  cout << "R8CC_WRITE_TEST\n";
  cout << "  R8CC_WRITE writes an R8CC matrix to 3 files.\n";
  cout << "\n";
  cout << "  Matrix rows M     = " << m << "\n";
  cout << "  Matrix columns N  = " << n << "\n";
  cout << "  Nonzeros NZ_NUM   = " << nz_num << "\n";

  i4vec_print ( n + 1, colptr, "  The COL vector:" );

  i4vec_print ( nz_num, rowind, "  The ROW vector:" );

  a = r8cc_indicator ( m, n, nz_num, colptr, rowind );

  r8cc_print ( m, n, nz_num, colptr, rowind, a, "  The R8CC matrix:" );

  r8cc_write ( col_file, row_file, a_file, m, n, nz_num, colptr, rowind, a );

  delete [] a;

  return;
}
//****************************************************************************80

void r8cc_zeros_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CC_ZEROS_TEST tests R8CC_ZEROS.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    03 October 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int colptr[6] = { 0, 3, 5, 7, 9, 12 };
  int m = 5;
  int n = 5;
  int nz_num = 12;
  int rowind[12] = { 0, 1, 3, 0, 1, 2, 4, 3, 4, 0, 1, 4 };

  cout << "\n";
  cout << "R8CC_ZEROS_TEST\n";
  cout << "  R8CC_ZEROS zeros an R8CC matrix;\n";
  cout << "\n";
  cout << "  Matrix rows M    = " << m << "\n";
  cout << "  Matrix columns N = " << n << "\n";
  cout << "  Nonzeros NZ_NUM  = " << nz_num << "\n";

  a = r8cc_zeros ( m, n, nz_num, colptr, rowind );

  r8cc_print ( m, n, nz_num, colptr, rowind, a, "  The R8CC matrix:" );

  delete [] a;

  return;
}
