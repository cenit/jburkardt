# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8cbb.hpp"

int main ( );
void r8cbb_add_test ( );
void r8cbb_dif2_test ( );
void r8cbb_fa_test ( );
void r8cbb_get_test ( );
void r8cbb_indicator_test ( );
void r8cbb_mtv_test ( );
void r8cbb_mv_test ( );
void r8cbb_print_test ( );
void r8cbb_print_some_test ( );
void r8cbb_random_test ( );
void r8cbb_set_test ( );
void r8cbb_sl_test ( );
void r8cbb_to_r8ge_test ( );
void r8cbb_zeros_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for R8CBB_PRB.
//
//  Discussion:
//
//    R8CBB_PRB tests the R8CBB library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    25 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "R8CBB_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the R8CBB library.\n";

  r8cbb_add_test ( );
  r8cbb_dif2_test ( );
  r8cbb_fa_test ( );
  r8cbb_get_test ( );
  r8cbb_indicator_test ( );
  r8cbb_mtv_test ( );
  r8cbb_mv_test ( );
  r8cbb_print_test ( );
  r8cbb_print_some_test ( );
  r8cbb_random_test ( );
  r8cbb_set_test ( );
  r8cbb_sl_test ( );
  r8cbb_to_r8ge_test ( );
  r8cbb_zeros_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "R8CBB_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void r8cbb_add_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CBB_ADD_TEST tests R8CBB_ADD.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int i;
  int j;
  int ml = 1;
  int mu = 0;
  int n1 = 3;
  int n2 = 2;
  double value;

  cout << "\n";
  cout << "R8CBB_ADD_TEST\n";
  cout << "  R8CBB_ADD adds a value to elements of an R8CBB matrix.\n";
  cout << "\n";
  cout << "  Matrix order N     = " << n1 + n2 << "\n";
  cout << "  Matrix suborder N1 = " << n1 << "\n";
  cout << "  Matrix suborder N2 = " << n2 << "\n";
  cout << "  Lower bandwidth ML = " << ml << "\n";
  cout << "  Upper bandwidth MU = " << mu << "\n";
//
//  Initialize matrix to indicator matrix.
//
  a = r8cbb_indicator ( n1, n2, ml, mu );
//
//  Print initial matrix.
//
  r8cbb_print ( n1, n2, ml, mu, a, "  Matrix before additions:" );
//
//  Add 100 to band diagonal.
//
  for ( i = 0; i < n1; i++ )
  {
    j = i;
    value = 100.0;
    r8cbb_add ( n1, n2, ml, mu, a, i, j, value );
  }
//
//  Add 200 to right border.
//
  for ( i = 0; i < n1; i++ )
  {
    for ( j = n1; j < n1 + n2; j++ )
    {
      value = 200.0;
      r8cbb_add ( n1, n2, ml, mu, a, i, j, value );
    }
  }
//
//  Add 400 to offdiagonals in lower right dense matrix.
//
  for ( i = n1; i < n1 + n2; i++ )
  {
    for ( j = n1; j < n1 + n2; j++ )
    {
      if ( i != j )
      {
        value = 400.0;
        r8cbb_add ( n1, n2, ml, mu, a, i, j, value );
      }
    }
  }

  r8cbb_print ( n1, n2, ml, mu, a, "  The R8BB matrix after additions:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8cbb_dif2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CBB_DIF2_TEST tests R8CBB_DIF2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int ml = 1;
  int mu = 1;
  int n1 = 6;
  int n2 = 2;

  cout << "\n";
  cout << "R8CBB_DIF2_TEST\n";
  cout << "  R8CBB_DIF2 sets up an R8CBB second difference matrix.\n";
  cout << "\n";
  cout << "  Matrix order N     = " << n1 + n2 << "\n";
  cout << "  Matrix suborder N1 = " << n1 << "\n";
  cout << "  Matrix suborder N2 = " << n2 << "\n";
  cout << "  Lower bandwidth ML = " << ml << "\n";
  cout << "  Upper bandwidth MU = " << mu << "\n";

  a = r8cbb_dif2 ( n1, n2, ml, mu );

  r8cbb_print ( n1, n2, ml, mu, a, "  The R8CBB second difference matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8cbb_fa_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CBB_FA_TEST tests R8CBB_FA.
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
# define N1 8
# define N2 2
# define ML 1
# define MU 1

  double *a;
  double *b;
  int i;
  int info;
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8CBB_FA_TEST\n";
  cout << "  R8CBB_FA factors an R8CBB matrix with no pivoting;\n";
  cout << "\n";
  cout << "  Matrix order N     = " << N1 + N2  << "\n";
  cout << "  Matrix suborder N1 = " << N1 << "\n";
  cout << "  Matrix suborder N2 = " << N2 << "\n";
  cout << "  Lower bandwidth ML = " << ML << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";
//
//  Set the matrix.
//
  a = r8cbb_random ( N1, N2, ML, MU, seed );

  r8cbb_print ( N1, N2, ML, MU, a, "  The R8CBB matrix:" );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( N1 + N2 );
//
//  Compute the corresponding right hand side.
//
  b = r8cbb_mv ( N1, N2, ML, MU, a, x );
//
//  Factor the matrix
//
  info = r8cbb_fa ( N1, N2, ML, MU, a );

  r8cbb_print ( N1, N2, ML, MU, a, "  The factored R8CBB matrix:" );

  if ( info != 0 )
  {
    cout << "\n";
    cout << "R8CBB_FA_TEST - Fatal error!\n";
    cout << "  R8CBB_FA claims the matrix is singular.\n";
    cout << "  The value of INFO is " << info << "\n";
    return;
  }
//
//  Solve the system.
//
  r8vec_print ( N1 + N2, b, "  The right hand side vector b:" );

  delete [] x;
  x = r8cbb_sl ( N1, N2, ML, MU, a, b );

  r8vec_print ( N1 + N2, x, "  Solution to A*x=b:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
# undef ML
# undef MU
# undef N1
# undef N2
}
//****************************************************************************80

void r8cbb_get_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CBB_GET_TEST tests R8CBB_GET.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int i;
  int j;
  int k;
  int ml = 1;
  int mu = 0;
  int n1 = 3;
  int n2 = 2;
  int seed;
  double value;

  cout << "\n";
  cout << "R8CBB_GET_TEST\n";
  cout << "  R8CBB_GET gets a value of an element of an R8CBB matrix.\n";
  cout << "\n";
  cout << "  Matrix order N     = " << n1 + n2 << "\n";
  cout << "  Matrix suborder N1 = " << n1 << "\n";
  cout << "  Matrix suborder N2 = " << n2 << "\n";
  cout << "  Lower bandwidth ML = " << ml << "\n";
  cout << "  Upper bandwidth MU = " << mu << "\n";
//
//  Set matrix to indicator matrix.
//
  a = r8cbb_indicator ( n1, n2, ml, mu );
//
//  Print matrix.
//
  r8cbb_print ( n1, n2, ml, mu, a, "  The R8CBB matrix to be queried:" );
//
//  Request random entries.
//
  seed = 123456789;

  cout << "\n";

  for ( k = 0; k < 10; k++ )
  {
    i = i4_uniform_ab ( 0, n1 + n2 - 1, seed );
    j = i4_uniform_ab ( 0, n1 + n2 - 1, seed );
    value = r8cbb_get ( n1, n2, ml, mu, a, i, j );
    cout << "  A[" << i << "," << j << "] = " << value << "\n";
  }

  delete [] a;

  return;
}
//****************************************************************************80

void r8cbb_indicator_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CBB_INDICATOR_TEST tests R8CBB_INDICATOR.
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
  int ml = 1;
  int mu = 1;
  int n1 = 6;
  int n2 = 2;

  cout << "\n";
  cout << "R8CBB_INDICATOR_TEST\n";
  cout << "  R8CBB_INDICATOR sets up an R8CBB indicator matrix.\n";
  cout << "\n";
  cout << "  Matrix order N     = " << n1 + n2 << "\n";
  cout << "  Matrix suborder N1 = " << n1 << "\n";
  cout << "  Matrix suborder N2 = " << n2 << "\n";
  cout << "  Lower bandwidth ML = " << ml << "\n";
  cout << "  Upper bandwidth MU = " << mu << "\n";

  a = r8cbb_indicator ( n1, n2, ml, mu );

  r8cbb_print ( n1, n2, ml, mu, a, "  The R8CBB indicator matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8cbb_mtv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CBB_MTV_TEST tests R8CBB_MTV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *b;
  int ml = 1;
  int mu = 1;
  int n;
  int n1 = 6;
  int n2 = 2;
  double *x;

  n = n1 + n2;

  cout << "\n";
  cout << "R8CBB_MTV_TEST\n";
  cout << "  R8CBB_MTV computes b=A'*x, where A is an R8CBB matrix.\n";
  cout << "\n";
  cout << "  Matrix order N     = " << n1 + n2 << "\n";
  cout << "  Matrix suborder N1 = " << n1 << "\n";
  cout << "  Matrix suborder N2 = " << n2 << "\n";
  cout << "  Lower bandwidth ML = " << ml << "\n";
  cout << "  Upper bandwidth MU = " << mu << "\n";

  a = r8cbb_indicator ( n1, n2, ml, mu );

  r8cbb_print ( n1, n2, ml, mu, a, "  The R8CBB indicator matrix:" );

  x = r8vec_indicator1_new ( n );

  r8vec_print ( n, x, "  The vector x:" );

  b = r8cbb_mtv ( n1, n2, ml, mu, a, x );

  r8vec_print ( n, b, "  The product b=A'*x:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

void r8cbb_mv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CBB_MV_TEST tests R8CBB_MV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *b;
  int ml = 1;
  int mu = 1;
  int n;
  int n1 = 6;
  int n2 = 2;
  double *x;

  n = n1 + n2;

  cout << "\n";
  cout << "R8CBB_MV_TEST\n";
  cout << "  R8CBB_MV computes b=A*x, where A is an R8CBB matrix.\n";
  cout << "\n";
  cout << "  Matrix order N     = " << n1 + n2 << "\n";
  cout << "  Matrix suborder N1 = " << n1 << "\n";
  cout << "  Matrix suborder N2 = " << n2 << "\n";
  cout << "  Lower bandwidth ML = " << ml << "\n";
  cout << "  Upper bandwidth MU = " << mu << "\n";

  a = r8cbb_indicator ( n1, n2, ml, mu );

  r8cbb_print ( n1, n2, ml, mu, a, "  The R8CBB indicator matrix:" );

  x = r8vec_indicator1_new ( n );

  r8vec_print ( n, x, "  The vector x:" );

  b = r8cbb_mv ( n1, n2, ml, mu, a, x );

  r8vec_print ( n, b, "  The product b=A*x:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

void r8cbb_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CBB_PRINT_TEST tests R8CBB_PRINT.
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
# define N1 8
# define N2 2
# define ML 1
# define MU 1

  double *a;
  int seed = 123456789;

  cout << "\n";
  cout << "R8CBB_PRINT_TEST\n";
  cout << "  R8CBB_PRINT prints an R8CBB matrix;\n";
  cout << "\n";
  cout << "  Matrix order N     = " << N1 + N2  << "\n";
  cout << "  Matrix suborder N1 = " << N1 << "\n";
  cout << "  Matrix suborder N2 = " << N2 << "\n";
  cout << "  Lower bandwidth ML = " << ML << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";
//
//  Set the matrix.
//
  a = r8cbb_random ( N1, N2, ML, MU, seed );

  r8cbb_print ( N1, N2, ML, MU, a, "  The R8CBB matrix:" );

  delete [] a;

  return;
# undef ML
# undef MU
# undef N1
# undef N2
}
//****************************************************************************80

void r8cbb_print_some_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CBB_PRINT_SOME_TEST tests R8CBB_PRINT_SOME.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int ml = 1;
  int mu = 1;
  int n1 = 8;
  int n2 = 2;
  int seed = 123456789;

  cout << "\n";
  cout << "R8CBB_PRINT_TEST\n";
  cout << "  R8CBB_PRINT prints an R8CBB matrix;\n";
  cout << "\n";
  cout << "  Matrix order N     = " << n1 + n2 << "\n";
  cout << "  Matrix suborder N1 = " << n1 << "\n";
  cout << "  Matrix suborder N2 = " << n2 << "\n";
  cout << "  Lower bandwidth ML = " << ml << "\n";
  cout << "  Upper bandwidth MU = " << mu << "\n";
//
//  Set the matrix.
//
  a = r8cbb_random ( n1, n2, ml, mu, seed );

  r8cbb_print_some ( n1, n2, ml, mu, a, 0, 8, 9, 9, "  Rows 0-9, Cols 8-9" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8cbb_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CBB_RANDOM_TEST tests R8CBB_RANDOM.
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
# define N1 8
# define N2 2
# define ML 1
# define MU 1

  double *a;
  int seed = 123456789;

  cout << "\n";
  cout << "R8CBB_RANDOM_TEST\n";
  cout << "  R8CBB_RANDOM returns a random R8CBB matrix\n";
  cout << "\n";
  cout << "  Matrix order N     = " << N1 + N2  << "\n";
  cout << "  Matrix suborder N1 = " << N1 << "\n";
  cout << "  Matrix suborder N2 = " << N2 << "\n";
  cout << "  Lower bandwidth ML = " << ML << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";
//
//  Set the matrix.
//
  a = r8cbb_random ( N1, N2, ML, MU, seed );

  r8cbb_print ( N1, N2, ML, MU, a, "  The R8CBB matrix:" );

  delete [] a;

  return;
# undef ML
# undef MU
# undef N1
# undef N2
}
//****************************************************************************80

void r8cbb_set_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CBB_SET_TEST tests R8CBB_SET.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int i;
  int j;
  int ml = 1;
  int mu = 0;
  int n1 = 3;
  int n2 = 2;
  double value;

  cout << "\n";
  cout << "R8CBB_SET_TEST\n";
  cout << "  R8CBB_SET sets the value of elements of an R8CBB matrix.\n";
  cout << "\n";
  cout << "  Matrix order N     = " << n1 + n2 << "\n";
  cout << "  Matrix suborder N1 = " << n1 << "\n";
  cout << "  Matrix suborder N2 = " << n2 << "\n";
  cout << "  Lower bandwidth ML = " << ml << "\n";
  cout << "  Upper bandwidth MU = " << mu << "\n";
//
//  Initialize matrix to zero.
//
  a = r8cbb_zeros ( n1, n2, ml, mu );
//
//  A1:
//
  for ( i = 0; i < n1; i++ )
  {
    for ( j = 0; j < n1; j++ )
    {
      if ( i - ml <= j && j <= i + mu )
      {
        value = ( double ) ( 10 * ( i + 1 ) + ( j + 1 ) );
        r8cbb_set ( n1, n2, ml, mu, a, i, j, value );
      }
    }
  }
//
//  A2:
//
  for ( i = 0; i < n1; i++ )
  {
    for ( j = n1; j < n1 + n2; j++ )
    {
      value = ( double ) ( 10 * ( i + 1 ) + ( j + 1 ) );
      r8cbb_set ( n1, n2, ml, mu, a, i, j, value );
    }
  }
//
//  A3
//
  for ( i = n1; i < n1 + n2; i++ )
  {
    for ( j = 0; j < n1; j++ )
    {
      value = ( double ) ( 10 * ( i + 1 ) + ( j + 1 ) );
      r8cbb_set ( n1, n2, ml, mu, a, i, j, value );
    }
  }
//
//  A4
//
  for ( i = n1; i < n1 + n2; i++ )
  {
    for ( j = n1; j < n1 + n2; j++ )
    {
      value = ( double ) ( 10 * ( i + 1 ) + ( j + 1 ) );
      r8cbb_set ( n1, n2, ml, mu, a, i, j, value );
    }
  }

  r8cbb_print ( n1, n2, ml, mu, a, "  The R8BB matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8cbb_sl_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CBB_SL_TEST tests R8CBB_SL.
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
# define N1 8
# define N2 2
# define ML 1
# define MU 1

  double *a;
  double *b;
  int i;
  int info;
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8CBB_SL_TEST\n";
  cout << "  R8CBB_SL solves linear systems factored by R8CBB_FA.\n";
  cout << "\n";
  cout << "  Matrix order N     = " << N1 + N2  << "\n";
  cout << "  Matrix suborder N1 = " << N1 << "\n";
  cout << "  Matrix suborder N2 = " << N2 << "\n";
  cout << "  Lower bandwidth ML = " << ML << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";
//
//  Set the matrix.
//
  a = r8cbb_random ( N1, N2, ML, MU, seed );

  r8cbb_print ( N1, N2, ML, MU, a, "  The R8CBB matrix:" );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( N1 + N2 );
//
//  Compute the corresponding right hand side.
//
  b = r8cbb_mv ( N1, N2, ML, MU, a, x );
//
//  Factor the matrix
//
  info = r8cbb_fa ( N1, N2, ML, MU, a );

  r8cbb_print ( N1, N2, ML, MU, a, "  The factored R8CBB matrix:" );

  if ( info != 0 )
  {
    cout << "\n";
    cout << "R8CBB_SL_TEST - Fatal error!\n";
    cout << "  R8CBB_FA claims the matrix is singular.\n";
    cout << "  The value of INFO is " << info << "\n";
    return;
  }
//
//  Solve the system.
//
  r8vec_print ( N1 + N2, b, "  The right hand side vector b:" );

  delete [] x;
  x = r8cbb_sl ( N1, N2, ML, MU, a, b );

  r8vec_print ( N1 + N2, x, "  Solution to A*x=b:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
# undef ML
# undef MU
# undef N1
# undef N2
}
//****************************************************************************80

void r8cbb_to_r8ge_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CBB_TO_R8GE_TEST tests R8CBB_TO_R8GE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *a_r8ge;
  int ml = 1;
  int mu = 1;
  int n1 = 6;
  int n2 = 2;

  cout << "\n";
  cout << "R8CBB_TO_R8GE_TEST\n";
  cout << "  R8CBB_TO_R8GE converts an R8CBB matrix to R8GE format.\n";
  cout << "\n";
  cout << "  Matrix order N     = " << n1 + n2 << "\n";
  cout << "  Matrix suborder N1 = " << n1 << "\n";
  cout << "  Matrix suborder N2 = " << n2 << "\n";
  cout << "  Lower bandwidth ML = " << ml << "\n";
  cout << "  Upper bandwidth MU = " << mu << "\n";

  a = r8cbb_indicator ( n1, n2, ml, mu );

  r8cbb_print ( n1, n2, ml, mu, a, "  The R8CBB matrix:" );

  a_r8ge = r8cbb_to_r8ge ( n1, n2, ml, mu, a );

  r8ge_print ( n1 + n2, n1 + n2, a_r8ge, "  The R8GE matrix:" );

  delete [] a;
  delete [] a_r8ge;

  return;
}
//****************************************************************************80

void r8cbb_zeros_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8CBB_ZEROS_TEST tests R8CBB_ZEROS.
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
# define N1 6
# define N2 2
# define ML 1
# define MU 1

  double *a;

  cout << "\n";
  cout << "R8CBB_ZEROS_TEST\n";
  cout << "  R8CBB_ZEROS zeros an R8CBB matrix.\n";
  cout << "\n";
  cout << "\n";
  cout << "  Matrix order N     = " << N1 + N2 << "\n";
  cout << "  Matrix suborder N1 = " << N1 << "\n";
  cout << "  Matrix suborder N2 = " << N2 << "\n";
  cout << "  Lower bandwidth ML = " << ML << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";

  a = r8cbb_zeros ( N1, N2, ML, MU );

  r8cbb_print ( N1, N2, ML, MU, a, "  The R8CBB zero matrix:" );

  delete [] a;

  return;
# undef ML
# undef MU
# undef N1
# undef N2
}

