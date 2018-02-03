# include <cmath>
# include <complex>
# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8ci.hpp"

int main ( );
void r8ci_det_test ( );
void r8ci_dif2_test ( );
void r8ci_eval_test ( );
void r8ci_indicator_test ( );
void r8ci_mtv_test ( );
void r8ci_mv_test ( );
void r8ci_print_test ( );
void r8ci_print_some_test ( );
void r8ci_random_test ( );
void r8ci_sl_test ( );
void r8ci_to_r8ge_test ( );
void r8ci_zeros_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for R8CI_PRB.
//
//  Discussion:
//
//    R8CI_PRB tests the R8CI library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    19 June 2016
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "R8CI_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the R8CI library.\n";

  r8ci_det_test ( );
  r8ci_dif2_test ( );
  r8ci_eval_test ( );
  r8ci_indicator_test ( );
  r8ci_mtv_test ( );
  r8ci_mv_test ( );
  r8ci_print_test ( );
  r8ci_print_some_test ( );
  r8ci_random_test ( );
  r8ci_sl_test ( );
  r8ci_to_r8ge_test ( );
  r8ci_zeros_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "R8CI_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void r8ci_det_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CI_DET_TEST tests R8CI_DET.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 June 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double det;
  int n = 5;
  int seed = 123456789;

  cout << "\n";
  cout << "R8CI_DET_TEST\n";
  cout << "  R8CI_DET finds the determinant of an R8CI matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
//
//  Set the matrix.
//
  a = r8ci_random ( n, seed );

  r8ci_print ( n, a, "  The R8CI matrix:" );

  det = r8ci_det ( n, a );

  cout << "\n";
  cout << "  Computed determinant = " << det << "\n";

  delete [] a;

  return;
}
//****************************************************************************80

void r8ci_dif2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CI_DIF2_TEST tests R8CI_DIF2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 June 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n = 5;

  cout << "\n";
  cout << "R8CI_DIF2_TEST\n";
  cout << "  R8CI_DIF2 sets up an R8CI periodic second difference matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r8ci_dif2 ( n );

  r8ci_print ( n, a, "  The R8CI matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8ci_eval_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CI_EVAL_TEST tests R8CI_EVAL.
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
  complex <double> *lambda;
  int n = 5;
  int seed = 123456789;

  cout << "\n";
  cout << "R8CI_EVAL_TEST\n";
  cout << "  R8CI_EVAL finds the eigenvalues of an R8CI matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
//
//  Set the matrix.
//
  a = r8ci_random ( n, seed );

  r8ci_print ( n, a, "  The circulant matrix:" );

  lambda = r8ci_eval ( n, a );

  c8vec_print ( n, lambda, "  The eigenvalues:" );

  delete [] a;
  delete [] lambda;

  return;
}
//****************************************************************************80

void r8ci_indicator_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CI_INDICATOR_TEST tests R8CI_INDICATOR.
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
  int n = 5;

  cout << "\n";
  cout << "R8CI_INDICATOR_TEST\n";
  cout << "  R8CI_INDICATOR sets up an R8CI indicator matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r8ci_indicator ( n );

  r8ci_print ( n, a, "  The R8CI matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8ci_mtv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CI_MTV_TEST tests R8CI_MTV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 June 2016
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
  cout << "R8CI_MTV_TEST\n";
  cout << "  R8CI_MTV computes b=A'*x, where A is an R8CI matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r8ci_indicator ( n );
  r8ci_print ( n, a, "  The R8CI matrix:" );

  x = r8vec_indicator1_new ( n );
  r8vec_print ( n, x, "  The vector x:" );

  b = r8ci_mtv ( n, a, x );
  r8vec_print ( n, b, "  The product b=A'*x:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

void r8ci_mv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CI_MV_TEST tests R8CI_MV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 June 2016
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
  cout << "R8CI_MV_TEST\n";
  cout << "  R8CI_MV computes b=A*x, where A is an R8CI matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r8ci_indicator ( n );
  r8ci_print ( n, a, "  The R8CI matrix:" );

  x = r8vec_indicator1_new ( n );
  r8vec_print ( n, x, "  The vector x:" );

  b = r8ci_mv ( n, a, x );
  r8vec_print ( n, b, "  The product b=A*x:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

void r8ci_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CI_PRINT_TEST tests R8CI_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 June 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n = 5;

  cout << "\n";
  cout << "R8CI_PRINT_TEST\n";
  cout << "  R8CI_PRINT prints an R8CI matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r8ci_indicator ( n );

  r8ci_print ( n, a, "  The R8CI matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8ci_print_some_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CI_PRINT_SOME_TEST tests R8CI_PRINT_SOME.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 June 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n = 10;

  cout << "\n";
  cout << "R8CI_PRINT_SOME_TEST\n";
  cout << "  R8CI_PRINT_SOME prints some of an R8CI matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r8ci_indicator ( n );

  r8ci_print_some ( n, a, 1, 2, 5, 4, "  Rows 1-5, Cols 2-4:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8ci_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CI_RANDOM_TEST tests R8CI_RANDOM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 June 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n = 5;
  int seed = 123456789;

  cout << "\n";
  cout << "R8CI_RANDOM_TEST\n";
  cout << "  R8CI_RANDOM returns a randon R8CI matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r8ci_random ( n, seed );

  r8ci_print ( n, a, "  The R8CI matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8ci_sl_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CI_SL_TEST tests R8CI_SL.
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
  double *b;
  int i;
  int job;
  int n = 10;
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8CI_SL_TEST\n";
  cout << "  R8CI_SL solves a circulant system.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
//
//  Set the matrix.
//
  a = r8ci_random ( n, seed );

  r8ci_print ( n, a, "  The circulant matrix:" );

  for ( job = 0; job <= 1; job++ )
  {
//
//  Set the desired solution.
//
    x = r8vec_indicator1_new ( n );
//
//  Compute the corresponding right hand side.
//
    if ( job == 0 )
    {
      b = r8ci_mv ( n, a, x );
    }
    else
    {
      b = r8ci_mtv ( n, a, x );
    }
//
//  Solve the linear system.
//
    delete [] x;
    x = r8ci_sl ( n, a, b, job );

    if ( job == 0 )
    {
      r8vec_print ( n, x, "  Solution to A*x=b:" );
    }
    else
    {
      r8vec_print ( n, x, "  Solution to A'*x=b:" );
    }

    delete [] b;
    delete [] x;

  }
 
  delete [] a;

  return;
}
//****************************************************************************80

void r8ci_to_r8ge_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CI_TO_R8GE_TEST tests R8CI_TO_R8GE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 June 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *a_r8ge;
  int n = 5;

  cout << "\n";
  cout << "R8CI_TO_R8GE_TEST\n";
  cout << "  R8CI_TO_R8GE converts an R8CI matrix to R8GE format.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r8ci_indicator ( n );

  r8ci_print ( n, a, "  The R8CI matrix:" );

  a_r8ge = r8ci_to_r8ge ( n, a );

  r8ge_print ( n, n, a_r8ge, "  The R8GE matrix:" );

  delete [] a;
  delete [] a_r8ge;

  return;
}
//****************************************************************************80

void r8ci_zeros_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CI_ZEROS_TEST tests R8CI_ZEROS.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 June 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n = 5;

  cout << "\n";
  cout << "R8CI_ZEROS_TEST\n";
  cout << "  R8CI_ZEROS sets up a zero R8CI matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r8ci_zeros ( n );

  r8ci_print ( n, a, "  The R8CI zero matrix:" );

  delete [] a;

  return;
}
