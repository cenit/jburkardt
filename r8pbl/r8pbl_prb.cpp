# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8pbl.hpp"

int main ( );
void r8pbl_dif2_test ( );
void r8pbl_indicator_test ( );
void r8pbl_mv_test ( );
void r8pbl_print_test ( );
void r8pbl_print_some_test ( );
void r8pbl_random_test ( );
void r8pbl_to_r8ge_test ( );
void r8pbl_zeros_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for R8PBL_PRB.
//
//  Discussion:
//
//    R8PBL_PRB tests the R8PBL library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    23 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "R8PBL_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the R8PBL library.\n";

  r8pbl_dif2_test ( );
  r8pbl_indicator_test ( );
  r8pbl_mv_test ( );
  r8pbl_print_test ( );
  r8pbl_print_some_test ( );
  r8pbl_random_test ( );
  r8pbl_to_r8ge_test ( );
  r8pbl_zeros_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "R8PBL_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void r8pbl_dif2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PBL_DIF2_TEST tests R8PBL_DIF2.
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
  int ml = 3;
  int n = 9;

  cout << "\n";
  cout << "R8PBL_DIF2_TEST\n";
  cout << "  R8PBL_DIF2 sets up an R8PBL second difference matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
  cout << "  Bandwidth ML = " << ml << "\n";

  a = r8pbl_dif2 ( n, ml );

  r8pbl_print ( n, ml, a, "  The R8PBL second difference matrix:" );

  delete [] a;

  return;
}
///***************************************************************************80

void r8pbl_indicator_test ( )

///***************************************************************************80
//
//  Purpose:
//
//    R8PBL_INDICATOR_TEST tests R8PBL_INDICATOR.
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
  int ml = 3;
  int n = 9;

  cout << "\n";
  cout << "R8PBL_INDICATOR_TEST\n";
  cout << "  R8PBL_INDICATOR sets up an R8PBL indicator matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
  cout << "  Bandwidth ML = " << ml << "\n";

  a = r8pbl_indicator ( n, ml );

  r8pbl_print ( n, ml, a, "  The R8PBL indicator matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8pbl_mv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PBL_MV_TEST tests R8PBL_MV.
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
  double *a;
  double *b;
  int ml = 2;
  int n = 5;
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8PBL_MV_TEST\n";
  cout << "  R8PBL_MV computes A*x, where A is an R8PBL matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
  cout << "  Bandwidth ML = " << ml << "\n";
//
//  Set the matrix.
//
  a = r8pbl_random ( n, ml, seed );

  r8pbl_print ( n, ml, a, "  Matrix A:" );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( n );

  r8vec_print ( n, x, "  Vector x:" );
//
//  Compute the corresponding right hand side.
//
  b = r8pbl_mv ( n, ml, a, x );

  r8vec_print ( n, b, "  Product b=A*x" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

void r8pbl_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PBL_PRINT_TEST tests R8PBL_PRINT.
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
  int ml = 3;
  int n = 9;

  cout << "\n";
  cout << "R8PBL_PRINT_TEST\n";
  cout << "  R8PBL_PRINT prints an R8PBL  matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
  cout << "  Bandwidth ML = " << ml << "\n";

  a = r8pbl_indicator ( n, ml );

  r8pbl_print ( n, ml, a, "  The R8PBL matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8pbl_print_some_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PBL_PRINT_SOME_TEST tests R8PBL_PRINT_SOME.
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
  double *a;
  int i;
  int j;
  int ml = 4;
  int n = 9;

  cout << "\n";
  cout << "R8PBL_PRINT_SOME_TEST\n";
  cout << "  R8PBL_PRINT_SOME prints soem of an R8PBL matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
  cout << "  Bandwidth ML = " << ml << "\n";

  a = r8pbl_indicator ( n, ml );

  r8pbl_print_some ( n, ml, a, 3, 4, 7, 8, "  Row(3:7), Col(4:8):" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8pbl_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PBL_RANDOM_TEST tests R8PBL_RANDOM.
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
  double *a;
  int ml = 3;
  int n = 9;
  int seed = 123456789;

  cout << "\n";
  cout << "R8PBL_RANDOM_TEST\n";
  cout << "  R8PBL_RANDOM randomizes an R8PBL matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
  cout << "  Bandwidth ML = " << ml << "\n";

  a = r8pbl_random ( n, ml, seed );

  r8pbl_print ( n, ml, a, "  The R8PBL random matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8pbl_to_r8ge_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PBL_TO_R8GE_TEST tests R8PBL_TO_R8GE.
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
  double *a;
  double *a_r8ge;
  int ml = 3;
  int n = 9;

  cout << "\n";
  cout << "R8PBL_TO_R8GE_TEST\n";
  cout << "  R8PBL_TO_R8GE converts an R8PBL matrix to R8GE format.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
  cout << "  Bandwidth ML = " << ml << "\n";

  a = r8pbl_indicator ( n, ml );

  r8pbl_print ( n, ml, a, "  The R8PBL matrix:" );

  a_r8ge = r8pbl_to_r8ge ( n, ml, a );

  r8ge_print ( n, n, a_r8ge, "  The R8GE matrix:" );

  delete [] a;
  delete [] a_r8ge;

  return;
}
//****************************************************************************80

void r8pbl_zeros_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PBL_ZEROS_TEST tests R8PBL_ZEROS.
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
  double *a;
  int i;
  int j;
  int ml = 3;
  int n = 5;

  cout << "\n";
  cout << "R8PBL_ZEROS_TEST\n";
  cout << "  R8PBL_ZEROS zeros an R8PBL matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
  cout << "  Bandwidth ML = " << ml << "\n";

  a = r8pbl_zeros ( n, ml );

  r8pbl_print ( n, ml, a, "  The R8PBL zero matrix:" );

  delete [] a;

  return;
}
