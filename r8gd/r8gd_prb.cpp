# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8gd.hpp"

int main ( );
void r8gd_dif2_test ( );
void r8gd_indicator_test ( );
void r8gd_mtv_test ( );
void r8gd_mv_test ( );
void r8gd_print_test ( );
void r8gd_print_some_test ( );
void r8gd_random_test ( );
void r8gd_to_r8ge_test ( );
void r8gd_zeros_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for R8GD_PRB.
//
//  Discussion:
//
//    R8GD_PRB tests the R8GD library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    19 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "R8GD_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the R8GD library.\n";

  r8gd_dif2_test ( );
  r8gd_indicator_test ( );
  r8gd_mtv_test ( );
  r8gd_mv_test ( );
  r8gd_print_test ( );
  r8gd_print_some_test ( );
  r8gd_random_test ( );
  r8gd_to_r8ge_test ( );
  r8gd_zeros_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "R8GD_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//*****************************************************************************/

void r8gd_dif2_test ( )

//*****************************************************************************/
//
//  Purpose:
//
//    R8GD_DIF2_TEST tests R8GD_DIF2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    18 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n = 5;
  int ndiag = 3;
  int offset[3] = { -1, 0, 1 };

  cout << "\n";
  cout << "R8GD_DIF2_TEST\n";
  cout << "  R8GD_DIF2 sets up an R8GD second difference matrix;\n";
  cout << "\n";
  cout << "  Matrix order N            = " << n << "\n";
  cout << "  Number of diagonals NDIAG = " << ndiag << "\n";

  i4vec_print ( ndiag, offset, "  The offset vector:" );

  a = r8gd_dif2 ( n, ndiag, offset );

  r8gd_print ( n, ndiag, offset, a, "  The R8GD second difference matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8gd_indicator_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GD_INDICATOR_TEST tests R8GD_INDICATOR.
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
  int n = 10;
  int ndiag = 4;
  int offset[4] = { -2, 0, 1, 3 };

  cout << "\n";
  cout << "R8GD_INDICATOR_TEST\n";
  cout << "  R8GD_INDICATOR sets up an R8GD indicator matrix;\n";
  cout << "\n";
  cout << "  Matrix order N            = " << n << "\n";
  cout << "  Number of diagonals NDIAG = " << ndiag << "\n";

  i4vec_print ( ndiag, offset, "  The offset vector:" );

  a = r8gd_indicator ( n, ndiag, offset );

  r8gd_print ( n, ndiag, offset, a, "  The R8GD indicator matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8gd_mtv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GD_MTV_TEST tests R8GD_MTV.
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
# define NDIAG 4

  double *a;
  double *b;
  int i;
  int j;
  int offset[NDIAG] = { -2, 0, 1, N-1 };
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8GD_MTV_TEST\n";
  cout << "  R8GD_MTV computes A'*x for an R8GD matrix;\n";
  cout << "\n";
  cout << "  Matrix order N            = " << N << "\n";
  cout << "  Number of diagonals NDIAG = " << NDIAG << "\n";

  i4vec_print ( NDIAG, offset, "  The offset vector:" );
//
//  Set the matrix.
//
  a = r8gd_random ( N, NDIAG, offset, seed );

  r8ge_print ( N, NDIAG, a, "  The raw matrix: " );

  r8gd_print ( N, NDIAG, offset, a, "  The general diagonal matrix:" );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( N );
//
//  Compute the corresponding right hand side.
//
  b = r8gd_mtv ( N, NDIAG, offset, a, x );

  r8vec_print ( N, b, "  A' * x:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
# undef N
# undef NDIAG
}
//****************************************************************************80

void r8gd_mv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GD_MV_TEST tests R8GD_MV.
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
# define NDIAG 4

  double *a;
  double *b;
  int i;
  int j;
  int offset[NDIAG] = { -2, 0, 1, N-1 };
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8GD_MV_TEST\n";
  cout << "  R8GD_MV computes A * x for an R8GD matrix;\n";
  cout << "\n";
  cout << "  Matrix order N            = " << N << "\n";
  cout << "  Number of diagonals NDIAG = " << NDIAG << "\n";

  i4vec_print ( NDIAG, offset, "  The offset vector:" );
//
//  Set the matrix.
//
  a = r8gd_random ( N, NDIAG, offset, seed );

  r8ge_print ( N, NDIAG, a, "  The raw matrix: " );

  r8gd_print ( N, NDIAG, offset, a, "  The general diagonal matrix:" );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( N );
//
//  Compute the corresponding right hand side.
//
  b = r8gd_mv ( N, NDIAG, offset, a, x );

  r8vec_print ( N, b, "  A * x:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
# undef N
# undef NDIAG
}
//****************************************************************************80

void r8gd_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GD_PRINT_TEST tests R8GD_PRINT.
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
  double *a;
  int n = 10;
  int ndiag = 4;
  int offset[4] = { -2, 0, 1, 3 };
  int seed = 123456789;

  cout << "\n";
  cout << "R8GD_PRINT_TEST\n";
  cout << "  R8GD_PRINT prints an R8GD matrix;\n";
  cout << "\n";
  cout << "  Matrix order N            = " << n << "\n";
  cout << "  Number of diagonals NDIAG = " << ndiag << "\n";

  i4vec_print ( ndiag, offset, "  The offset vector:" );
//
//  Set the matrix.
//
  a = r8gd_random ( n, ndiag, offset, seed );

  r8gd_print ( n, ndiag, offset, a, "  The R8GD matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8gd_print_some_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GD_PRINT_SOME_TEST tests R8GD_PRINT_SOME.
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
  double *a;
  int n = 10;
  int ndiag = 4;
  int offset[4] = { -2, 0, 1, 3 };
  int seed = 123456789;

  cout << "\n";
  cout << "R8GD_PRINT_SOME_TEST\n";
  cout << "  R8GD_PRINT_SOME prints some of an R8GD matrix;\n";
  cout << "\n";
  cout << "  Matrix order N            = " << n << "\n";
  cout << "  Number of diagonals NDIAG = " << ndiag << "\n";

  i4vec_print ( ndiag, offset, "  The offset vector:" );
//
//  Set the matrix.
//
  a = r8gd_random ( n, ndiag, offset, seed );

  r8gd_print_some ( n, ndiag, offset, a, 3, 3, 6, 6, "  Rows 3-6, Cols 3-6:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8gd_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GD_RANDOM_TEST tests R8GD_RANDOM.
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
# define NDIAG 4

  double *a;
  int offset[NDIAG] = { -2, 0, 1, N-1 };
  int seed = 123456789;

  cout << "\n";
  cout << "R8GD_RANDOM_TEST\n";
  cout << "  R8GD_RANDOM randomly generates an R8GD matrix;\n";
  cout << "  R8GD_MTV computes A'*x;\n";
  cout << "\n";
  cout << "  Matrix order N            = " << N << "\n";
  cout << "  Number of diagonals NDIAG = " << NDIAG << "\n";

  i4vec_print ( NDIAG, offset, "  The offset vector:" );
//
//  Set the matrix.
//
  a = r8gd_random ( N, NDIAG, offset, seed );

  r8gd_print ( N, NDIAG, offset, a, "  The general diagonal matrix:" );

  delete [] a;

  return;
# undef N
# undef NDIAG
}
//****************************************************************************80

void r8gd_to_r8ge_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GD_TO_R8GE_TEST tests R8GD_TO_R8GE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    18 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *a_r8ge;
  int n = 5;
  int ndiag = 4;
  int offset[4] = { -2, 0, 1, 3 };

  cout << "\n";
  cout << "R8GD_TO_R8GE_TEST\n";
  cout << "  R8GD_TO_R8GE converts an R8GD matrix to R8GE format;\n";
  cout << "\n";
  cout << "  Matrix order N            = " << n << "\n";
  cout << "  Number of diagonals NDIAG = " << ndiag << "\n";

  i4vec_print ( ndiag, offset, "  The offset vector:" );

  a = r8gd_indicator ( n, ndiag, offset );

  r8gd_print ( n, ndiag, offset, a, "  The R8GD matrix:" );

  a_r8ge = r8gd_to_r8ge ( n, ndiag, offset, a );

  r8ge_print ( n, n, a_r8ge, "  The R8GE matrix:" );

  delete [] a;
  delete [] a_r8ge;

  return;
}
//****************************************************************************80

void r8gd_zeros_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GD_ZEROS_TEST tests R8GD_ZEROS.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    18 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n = 5;
  int ndiag = 4;
  int offset[4] = { -2, 0, 1, 3 };

  cout << "\n";
  cout << "R8GD_ZEROS_TEST\n";
  cout << "  R8GD_ZEROS zeros an R8GD matrix;\n";
  cout << "\n";
  cout << "  Matrix order N            = " << n << "\n";
  cout << "  Number of diagonals NDIAG = " << ndiag << "\n";

  i4vec_print ( ndiag, offset, "  The offset vector:" );

  a = r8gd_zeros ( n, ndiag, offset );

  r8gd_print ( n, ndiag, offset, a, "  The R8GD zero matrix:" );

  delete [] a;

  return;
}

