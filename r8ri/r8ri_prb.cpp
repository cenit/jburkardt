# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8ri.hpp"

int main ( );
void r8ri_dif2_test ( );
void r8ri_indicator_test ( );
void r8ri_mtv_test ( );
void r8ri_mv_test ( );
void r8ri_print_test ( );
void r8ri_print_some_test ( );
void r8ri_random_test ( );
void r8ri_to_r8ge_test ( );
void r8ri_zeros_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for R8RI_PRB.
//
//  Discussion:
//
//    R8RI_PRB tests the R8RI library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    15 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "R8RI_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the R8RI library.\n";

  r8ri_dif2_test ( );
  r8ri_indicator_test ( );
  r8ri_mtv_test ( );
  r8ri_mv_test ( );
  r8ri_print_test ( );
  r8ri_print_some_test ( );
  r8ri_random_test ( );
  r8ri_to_r8ge_test ( );
  r8ri_zeros_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "R8RI_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void r8ri_dif2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8RI_DIF2_TEST tests R8RI_DIF2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    12 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double a[14];
  int ija[14];
  int n = 5;
  int nz = 14;

  cout << "\n";
  cout << "R8RI_DIF2_TEST\n";
  cout << "  R8RI_DIF2 sets up an R8RI indicator matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
  cout << "  Storage NZ =     " << nz << "\n";

  r8ri_dif2 ( n, nz, ija, a );

  r8ri_print ( n, nz, ija, a, "  The R8RI second difference matrix:" );

  return;
}
//****************************************************************************80

void r8ri_indicator_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8RI_INDICATOR_TEST tests R8RI_INDICATOR.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    12 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int ija[11] = {
     6,  7,  7,  9, 10, 
    11,  2,  1,  3,  4, 
     3 };
  int n = 5;
  int nz = 11;

  cout << "\n";
  cout << "R8RI_INDICATOR_TEST\n";
  cout << "  R8RI_INDICATOR returns an R8RI indicator matrix\n";
  cout << "  for a given sparsity pattern.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
  cout << "  Storage NZ =     " << nz << "\n";

  a = r8ri_indicator ( n, nz, ija );

  r8ri_print ( n, nz, ija, a, "  The R8RI matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8ri_mtv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8RI_MTV_TEST tests R8RI_MTV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    12 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double a[11] = {
    3.0, 4.0, 5.0, 0.0, 8.0, 
    0.0, 1.0, 7.0, 9.0, 2.0, 
    6.0  };
  double *b;
  int ija[11] = {
     6,  7,  7,  9, 10, 
    11,  2,  1,  3,  4, 
     3 };
  int n = 5;
  int nz = 11;
  double *x;

  cout << "\n";
  cout << "R8RI_MTV_TEST\n";
  cout << "  R8RI_MTV computes b=A'*x, where A is an R8RI matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
  cout << "  Storage NZ =     " << nz << "\n";

  r8ri_print ( n, nz, ija, a, "  The R8RI matrix:" );

  x = r8vec_indicator1_new ( n );

  r8vec_print ( n, x, "  The vector x:" );

  b = r8ri_mtv ( n, nz, ija, a, x );

  r8vec_print ( n, b, "  The product b=A'*x:" );

  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

void r8ri_mv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8RI_MV_TEST tests R8RI_MV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    12 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double a[11] = {
    3.0, 4.0, 5.0, 0.0, 8.0, 
    0.0, 1.0, 7.0, 9.0, 2.0, 
    6.0  };
  double *b;
  int ija[11] = {
     6,  7,  7,  9, 10, 
    11,  2,  1,  3,  4, 
     3 };
  int n = 5;
  int nz = 11;
  double *x;

  cout << "\n";
  cout << "R8RI_MV_TEST\n";
  cout << "  R8RI_MV computes b=A*x, where A is an R8RI matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
  cout << "  Storage NZ =     " << nz << "\n";

  r8ri_print ( n, nz, ija, a, "  The R8RI matrix:" );

  x = r8vec_indicator1_new ( n );

  r8vec_print ( n, x, "  The vector x:" );

  b = r8ri_mv ( n, nz, ija, a, x );

  r8vec_print ( n, b, "  The product b=A*x:" );

  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

void r8ri_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8RI_PRINT_TEST tests R8RI_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    12 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double a[11] = {
    3.0, 4.0, 5.0, 0.0, 8.0, 
    0.0, 1.0, 7.0, 9.0, 2.0, 
    6.0  };
  double *b;
  int ija[11] = {
     6,  7,  7,  9, 10, 
    11,  2,  1,  3,  4, 
     3 };
  int n = 5;
  int nz = 11;
  double *x;

  cout << "\n";
  cout << "R8RI_PRINT_TEST\n";
  cout << "  R8RI_PRINT prints an R8RI matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
  cout << "  Storage NZ =     " << nz << "\n";

  r8ri_print ( n, nz, ija, a, "  The R8RI matrix:" );

  return;
}
//****************************************************************************80

void r8ri_print_some_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8RI_PRINT_SOME_TEST tests R8RI_PRINT_SOME.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    12 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double a[34] = {
    4.0,  4.0,  4.0,  4.0,  4.0, 
    4.0,  4.0,  4.0,  4.0,  0.0, 
   -1.0, -1.0, -1.0, -1.0, -1.0, 
   -1.0, -1.0, -1.0, -1.0, -1.0, 
   -1.0, -1.0, -1.0, -1.0, -1.0, 
   -1.0, -1.0, -1.0, -1.0, -1.0, 
   -1.0, -1.0, -1.0, -1.0  };
  int ija[34] = {
     10, 12, 15, 17, 20, 
     24, 27, 29, 32, 34, 
      1,  3,  0,  2,  4, 
      1,  5,  0,  4,  6, 
      1,  3,  5,  7,  2, 
      4,  8,  3,  7,  4, 
      6,  8,  5,  7 };
  int n = 9;
  int nz = 34;

  cout << "\n";
  cout << "R8RI_PRINT_SOME_TEST\n";
  cout << "  R8RI_PRINT_SOME prints some of an R8RI matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
  cout << "  Storage NZ =     " << nz << "\n";

  r8ri_print_some ( n, nz, ija, a, 0, 3, 8, 5, "  Rows(0-8), Cols(3-5):" );

  return;
}
//****************************************************************************80

void r8ri_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8RI_RANDOM_TEST tests R8RI_RANDOM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    13 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int ija[11] = {
     6,  7,  7,  9, 10, 
    11,  2,  1,  3,  4, 
     3 };
  int n = 5;
  int nz = 11;
  int seed;

  cout << "\n";
  cout << "R8RI_RANDOM_TEST\n";
  cout << "  R8RI_RANDOM randomizes an R8RI matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
  cout << "  Storage NZ =     " << nz << "\n";

  seed = 123456789;
  a = r8ri_random ( n, nz, ija, seed );

  r8ri_print ( n, nz, ija, a, "  The R8RI matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8ri_to_r8ge_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8RI_TO_R8GE_TEST tests R8RI_TO_R8GE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    13 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *a_r8ge;
  int ija[11] = {
     6,  7,  7,  9, 10, 
    11,  2,  1,  3,  4, 
     3 };
  int n = 5;
  int nz = 11;

  cout << "\n";
  cout << "R8RI_TO_R8GE_TEST\n";
  cout << "  R8RI_TO_R8GE converts an R8RI matrix to R8GE format.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
  cout << "  Storage NZ =     " << nz << "\n";

  a = r8ri_indicator ( n, nz, ija );

  r8ri_print ( n, nz, ija, a, "  The R8RI matrix:" );

  a_r8ge = r8ri_to_r8ge ( n, nz, ija, a );

  r8ge_print ( n, n, a_r8ge, "  The R8GE matrix:" );

  delete [] a;
  delete [] a_r8ge;

  return;
}
//****************************************************************************80

void r8ri_zeros_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8RI_ZEROS_TEST tests R8RI_ZEROS.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    13 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int ija[11] = {
     6,  7,  7,  9, 10, 
    11,  2,  1,  3,  4, 
     3 };
  int n = 5;
  int nz = 11;

  cout << "\n";
  cout << "R8RI_ZEROS_TEST\n";
  cout << "  R8RI_ZEROS zeros an R8RI matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
  cout << "  Storage NZ =     " << nz << "\n";

  a = r8ri_zeros ( n, nz, ija );

  r8ri_print ( n, nz, ija, a, "  The R8RI matrix:" );

  delete [] a;

  return;
}
