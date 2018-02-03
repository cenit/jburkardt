# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8ncf.hpp"

int main ( );
void r8ncf_dif2_test ( );
void r8ncf_indicator_test  ( );
void r8ncf_mtv_test ( );
void r8ncf_mv_test ( );
void r8ncf_print_test  ( );
void r8ncf_print_some_test ( );
void r8ncf_random_test ( );
void r8ncf_to_r8ge_test ( );
void r8ncf_zeros_test ( );

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
//    22 July 2016
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

  r8ncf_dif2_test ( );
  r8ncf_indicator_test( );
  r8ncf_mtv_test ( );
  r8ncf_mv_test ( );
  r8ncf_print_test ( );
  r8ncf_print_some_test ( );
  r8ncf_random_test ( );
  r8ncf_to_r8ge_test ( );
  r8ncf_zeros_test ( );
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

void r8ncf_dif2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8NCF_DIF2_TEST tests R8NCF_DIF2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    20 July 2016
//
//  Author:
//
//   John Burkardt
//
{
  double *a;
  int m = 5;
  int n = 7;
  int nz_num;
  int *rowcol;

  cout << "\n";
  cout << "R8NCF_DIF2_TEST\n";
  cout << "  R8NCF_DIF2 sets up a R8NCF second difference matrix;\n";
  cout << "\n";
  cout << "  Matrix rows M = " << m << "\n";
  cout << "  Matrix columns N = " << n << "\n";

  nz_num = r8ncf_dif2_nz_num ( m, n );

  cout << "  Matrix nonzeros NZ_NUM = " << nz_num << "\n";

  rowcol = r8ncf_dif2_rowcol ( m, n, nz_num );

  a = r8ncf_dif2 ( m, n, nz_num, rowcol );

  r8ncf_print ( m, n, nz_num, rowcol, a, "  The R8NCF second difference matrix:" );

  delete [] a;
  delete [] rowcol;

  return;
}
//****************************************************************************80

void r8ncf_indicator_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8NCF_INDICATOR_TEST tests R8NCF_INDICATOR.
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
//   John Burkardt
//
{
  double *a;
  int m = 5;
  int n = 7;
  int nz_num = 15;
  int rowcol[2*15] = {
    0, 0, 
    1, 1,
    2, 2,
    3, 3, 
    4, 4, 
    1, 0, 
    4, 0, 
    0, 1, 
    4, 1,
    0, 3, 
    1, 3, 
    2, 3,
    3, 4, 
    3, 5, 
    0, 6 };

  cout << "\n";
  cout << "R8NCF_INDICATOR_TEST\n";
  cout << "  R8NCF_INDICATOR sets up an R8NCF indicator matrix;\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << m << "\n";
  cout << "  Matrix columns N = " << n << "\n";
  cout << "  Matrix nonzeros =  " << nz_num << "\n";

  a = r8ncf_indicator ( m, n, nz_num, rowcol );

  r8ncf_print ( m, n, nz_num, rowcol, a, "  The R8NCF indicator matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8ncf_mtv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8NCF_MTV_TEST tests R8NCF_MTV.
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
//   John Burkardt
//
{
  double *a;
  double *b;
  int m = 5;
  int n = 7;
  int nz_num = 15;
  int rowcol[2*15] = {
    0, 0, 
    1, 1,
    2, 2,
    3, 3, 
    4, 4, 
    1, 0, 
    4, 0, 
    0, 1, 
    4, 1,
    0, 3, 
    1, 3, 
    2, 3,
    3, 4, 
    3, 5, 
    0, 6 };
  double *x;

  cout << "\n";
  cout << "R8NCF_MTV_TEST\n";
  cout << "  R8NCF_MTV computes b=A'*x, where A is an R8NCF matrix;\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << m << "\n";
  cout << "  Matrix columns N = " << n << "\n";
  cout << "  Matrix nonzeros =  " << nz_num << "\n";

  a = r8ncf_indicator ( m, n, nz_num, rowcol );

  r8ncf_print ( m, n, nz_num, rowcol, a, "  The matrix A:" );

  x = r8vec_indicator1_new ( m );

  r8vec_print ( m, x, "  The vector x:" );

  b = r8ncf_mtv ( m, n, nz_num, rowcol, a, x );

  r8vec_print ( n, b, "  The product b=A'*x:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

void r8ncf_mv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8NCF_MV_TEST tests R8NCF_MV.
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
//   John Burkardt
//
{
  double *a;
  double *b;
  int m = 5;
  int n = 7;
  int nz_num = 15;
  int rowcol[2*15] = {
    0, 0, 
    1, 1,
    2, 2,
    3, 3, 
    4, 4, 
    1, 0, 
    4, 0, 
    0, 1, 
    4, 1,
    0, 3, 
    1, 3, 
    2, 3,
    3, 4, 
    3, 5, 
    0, 6 };
  double *x;

  cout << "\n";
  cout << "R8NCF_MV_TEST\n";
  cout << "  R8NCF_MV computes b=A*x, where A is an R8NCF matrix;\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << m << "\n";
  cout << "  Matrix columns N = " << n << "\n";
  cout << "  Matrix nonzeros =  " << nz_num << "\n";

  a = r8ncf_indicator ( m, n, nz_num, rowcol );

  r8ncf_print ( m, n, nz_num, rowcol, a, "  The matrix A:" );

  x = r8vec_indicator1_new ( n );

  r8vec_print ( n, x, "  The vector x:" );

  b = r8ncf_mv ( m, n, nz_num, rowcol, a, x );

  r8vec_print ( m, b, "  The product b=A*x:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

void r8ncf_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8NCF_PRINT_TEST tests R8NCF_PRINT.
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
//   John Burkardt
//
{
  double *a;
  int m = 5;
  int n = 7;
  int nz_num = 15;
  int rowcol[2*15] = {
    0, 0, 
    1, 1,
    2, 2,
    3, 3, 
    4, 4, 
    1, 0, 
    4, 0, 
    0, 1, 
    4, 1,
    0, 3, 
    1, 3, 
    2, 3,
    3, 4, 
    3, 5, 
    0, 6 };

  cout << "\n";
  cout << "R8NCF_PRINT_TEST\n";
  cout << "  R8NCF_PRINT prints an R8NCF indicator matrix;\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << m << "\n";
  cout << "  Matrix columns N = " << n << "\n";
  cout << "  Matrix nonzeros =  " << nz_num << "\n";

  a = r8ncf_indicator ( m, n, nz_num, rowcol );

  r8ncf_print ( m, n, nz_num, rowcol, a, "  The R8NCF matrix:" );

  delete [] a;

  return;
}
///***************************************************************************80

void r8ncf_print_some_test ( )

///***************************************************************************80
//
//  Purpose:
//
//    R8NCF_PRINT_SOME_TEST tests R8NCF_PRINT_SOME.
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
//   John Burkardt
//
{
  double *a;
  int m = 5;
  int n = 7;
  int nz_num = 15;
  int rowcol[2*15] = {
    0, 0, 
    1, 1,
    2, 2,
    3, 3, 
    4, 4, 
    1, 0, 
    4, 0, 
    0, 1, 
    4, 1,
    0, 3, 
    1, 3, 
    2, 3,
    3, 4, 
    3, 5, 
    0, 6 };

  cout << "\n";
  cout << "R8NCF_PRINT_SOME_TEST\n";
  cout << "  R8NCF_PRINT_SOME prints some of an R8NCF matrix;\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << m << "\n";
  cout << "  Matrix columns N = " << n << "\n";
  cout << "  Matrix nonzeros =  " << nz_num << "\n";

  a = r8ncf_indicator ( m, n, nz_num, rowcol );

  r8ncf_print_some ( m, n, nz_num, rowcol, a, 0, 1, 4, 3, 
    "  Rows 0-4, Cols 1-3:" );

  delete [] a;

  return;
}
///***************************************************************************80

void r8ncf_random_test ( )

///***************************************************************************80
//
//  Purpose:
//
//    R8NCF_RANDOM_TEST tests R8NCF_RANDOM.
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
//   John Burkardt
//
{
  double *a;
  int m = 5;
  int n = 7;
  int nz_num = 15;
  int rowcol[2*15] = {
    0, 0, 
    1, 1,
    2, 2,
    3, 3, 
    4, 4, 
    1, 0, 
    4, 0, 
    0, 1, 
    4, 1,
    0, 3, 
    1, 3, 
    2, 3,
    3, 4, 
    3, 5, 
    0, 6 };
  int seed;

  cout << "\n";
  cout << "R8NCF_RANDOM_TEST\n";
  cout << "  R8NCF_RANDOM randomizes an R8NCF  matrix;\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << m << "\n";
  cout << "  Matrix columns N = " << n << "\n";
  cout << "  Matrix nonzeros =  " << nz_num << "\n";

  seed = 123456789;
  a = r8ncf_random ( m, n, nz_num, rowcol, seed );

  r8ncf_print ( m, n, nz_num, rowcol, a, "  The R8NCF random matrix:" );

  delete [] a;

  return;
}
///***************************************************************************80

void r8ncf_to_r8ge_test ( )

///***************************************************************************80
//
//  Purpose:
//
//    R8NCF_TO_R8GE_TEST tests R8NCF_TO_R8GE.
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
//   John Burkardt
//
{
  double *a;
  double *a_r8ge;
  int m = 5;
  int n = 7;
  int nz_num = 15;
  int rowcol[2*15] = {
    0, 0, 
    1, 1,
    2, 2,
    3, 3, 
    4, 4, 
    1, 0, 
    4, 0, 
    0, 1, 
    4, 1,
    0, 3, 
    1, 3, 
    2, 3,
    3, 4, 
    3, 5, 
    0, 6 };

  cout << "\n";
  cout << "R8NCF_TO_R8GE_TEST\n";
  cout << "  R8NCF_TO_R8GE converts an R8NCF matrix to R8GE format;\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << m << "\n";
  cout << "  Matrix columns N = " << n << "\n";
  cout << "  Matrix nonzeros =  " << nz_num << "\n";

  a = r8ncf_indicator ( m, n, nz_num, rowcol );

  r8ncf_print ( m, n, nz_num, rowcol, a, "  The R8NCF matrix:" );

  a_r8ge = r8ncf_to_r8ge ( m, n, nz_num, rowcol, a );

  r8ge_print ( m, n, a_r8ge, "  The R8GE matrix:" );

  delete [] a;
  delete [] a_r8ge;

  return;
}
///***************************************************************************80

void r8ncf_zeros_test ( )

///***************************************************************************80
//
//  Purpose:
//
//    R8NCF_ZEROS_TEST tests R8NCF_ZEROS.
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
//   John Burkardt
//
{
  double *a;
  int m = 5;
  int n = 7;
  int nz_num;
  int *rowcol;

  cout << "\n";
  cout << "R8NCF_ZEROS_TEST\n";
  cout << "  R8NCF_ZEROS zeros an R8NCF matrix;\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << m << "\n";
  cout << "  Matrix columns N = " << n << "\n";

  nz_num = r8ncf_dif2_nz_num ( m, n );

  cout << "  Matrix nonzeros NZ_NUM = " << nz_num << "\n";

  rowcol = r8ncf_dif2_rowcol ( m, n, nz_num );

  a = r8ncf_zeros ( m, n, nz_num, rowcol );

  r8ncf_print ( m, n, nz_num, rowcol, a, "  The R8NCF zero matrix:" );

  delete [] a;
  delete [] rowcol;

  return;
}

