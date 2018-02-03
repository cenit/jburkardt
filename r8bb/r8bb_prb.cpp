# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8bb.hpp"

int main ( );
void r8bb_add_test ( );
void r8bb_dif2_test ( );
void r8bb_fa_test ( );
void r8bb_get_test ( );
void r8bb_indicator_test ( );
void r8bb_mtv_test ( );
void r8bb_mv_test ( );
void r8bb_print_test ( );
void r8bb_print_some_test ( );
void r8bb_random_test ( );
void r8bb_set_test ( );
void r8bb_sl_test ( );
void r8bb_to_r8ge_test ( );
void r8bb_zeros_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for R8BB_PRB.
//
//  Discussion:
//
//    R8BB_PRB tests the R8BB library.
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
  timestamp ( );
  cout << "\n";
  cout << "R8BB_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the R8BB library.\n";

  r8bb_add_test ( );
  r8bb_dif2_test ( );
  r8bb_fa_test ( );
  r8bb_get_test ( );
  r8bb_indicator_test ( );
  r8bb_mtv_test ( );
  r8bb_mv_test ( );
  r8bb_print_test ( );
  r8bb_print_some_test ( );
  r8bb_random_test ( );
  r8bb_set_test ( );
  r8bb_sl_test ( );
  r8bb_to_r8ge_test ( );
  r8bb_zeros_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "R8BB_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//*****************************************************************************/

void r8bb_add_test ( )

//*****************************************************************************/
//
//  Purpose:
//
//    R8BB_ADD_TEST tests R8BB_ADD.
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

  double *a;
  int i;
  int j;
  int ml;
  int mu;
  int n;
  int n1;
  int n2;
  int na;
  double value;

  n1 = 3;
  n2 = 2;
  n = n1 + n2;
  ml = 1;
  mu = 0;
  na = ( 2 * ml + mu + 1 ) * n1 + 2 * n1 * n2 + n2 * n2;

  cout << "\n";
  cout << "R8BB_ADD_TEST\n";
  cout << "  R8BB_ADD adds a value to elements of an R8BB matrix.\n";
  cout << "\n";
  cout << "  Matrix order N     = " << n1 + n2 << "\n";
  cout << "  Matrix suborder N1 = " << n1 << "\n";
  cout << "  Matrix suborder N2 = " << n2 << "\n";
  cout << "  Lower bandwidth ML = " << ml << "\n";
  cout << "  Upper bandwidth MU = " << mu << "\n";
//
//  Initialize matrix to indicator matrix.
//
  a = r8bb_indicator ( n1, n2, ml, mu );
//
//  Print initial matrix.
//
  r8bb_print ( n1, n2, ml, mu, a, "  Matrix before additions:" );
//
//  Add 100 to band diagonal.
//
  for ( i = 0; i < n1; i++ )
  {
    j = i;
    value = 100.0;
    r8bb_add ( n1, n2, ml, mu, a, i, j, value );
  }
//
//  Add 200 to right border.
//
  for ( i = 0; i < n1; i++ )
  {
    for ( j = n1; j < n1 + n2; j++ )
    {
      value = 200.0;
      r8bb_add ( n1, n2, ml, mu, a, i, j, value );
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
        r8bb_add ( n1, n2, ml, mu, a, i, j, value );
      }
    }
  }

  r8bb_print ( n1, n2, ml, mu, a, "  The R8BB matrix after additions:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8bb_dif2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8BB_DIF2_TEST tests R8BB_DIF2.
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
# define N1 6
# define N2 2
# define ML 1
# define MU 1

  double *a;

  cout << "\n";
  cout << "R8BB_DIF2_TEST\n";
  cout << "  R8BB_DIF2 sets up an R8BB second difference matrix.\n";
  cout << "\n";
  cout << "  Matrix order N     = " << N1 + N2 << "\n";
  cout << "  Matrix suborder N1 = " << N1 << "\n";
  cout << "  Matrix suborder N2 = " << N2 << "\n";
  cout << "  Lower bandwidth ML = " << ML << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";

  a = r8bb_dif2 ( N1, N2, ML, MU );

  r8bb_print ( N1, N2, ML, MU, a, "  The R8BB second difference matrix:" );

  delete [] a;

  return;
# undef ML
# undef MU
# undef N1
# undef N2
}
//****************************************************************************80

void r8bb_fa_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8BB_FA_TEST tests R8BB_FA.
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
# define N1 8
# define N2 2
# define ML 1
# define MU 1
# define N N1+N2

  double *a;
  double *b;
  int i;
  int info;
  int pivot[N];
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8BB_FA_TEST\n";
  cout << "  R8BB_FA factors an R8BB matrix.\n";
  cout << "\n";
  cout << "  Matrix order N     = " << N  << "\n";
  cout << "  Matrix suborder N1 = " << N1 << "\n";
  cout << "  Matrix suborder N2 = " << N2 << "\n";
  cout << "  Lower bandwidth ML = " << ML << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";
//
//  Set the matrix.
//
  a = r8bb_random ( N1, N2, ML, MU, seed );

  r8bb_print ( N1, N2, ML, MU, a, "  The border-banded matrix:" );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( N );
//
//  Compute the corresponding right hand side.
//
  b = r8bb_mv ( N1, N2, ML, MU, a, x );

  r8vec_print ( N, b, "  The right hand side vector:" );
//
//  Factor the matrix.
//
  info = r8bb_fa ( N1, N2, ML, MU, a, pivot );

  r8bb_print ( N1, N2, ML, MU, a, "  The FACTORED border-banded matrix:" );

  if ( info != 0 )
  {
    cout << "\n";
    cout << "R8BB_FA_TEST - Fatal error!\n";
    cout << "  R8BB_FA claims the matrix is singular.\n";
    cout << "  The value of INFO is " << info << "\n";
    return;
  }
//
//  Solve the system.
//
  delete [] x;
  x = r8bb_sl ( N1, N2, ML, MU, a, pivot, b );

  r8vec_print ( N, x, "  Solution to A*x=b:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
# undef ML
# undef MU
# undef N
# undef N1
# undef N2
}
//****************************************************************************80

void r8bb_get_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8BB_GET_TEST tests R8BB_GET.
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
  cout << "R8BB_GET_TEST\n";
  cout << "  R8BB_GET gets an element from an R8BB matrix.\n";
  cout << "\n";
  cout << "  Matrix order N     = " << n1 + n2 << "\n";
  cout << "  Matrix suborder N1 = " << n1 << "\n";
  cout << "  Matrix suborder N2 = " << n2 << "\n";
  cout << "  Lower bandwidth ML = " << ml << "\n";
  cout << "  Upper bandwidth MU = " << mu << "\n";

  a = r8bb_indicator ( n1, n2, ml, mu );

  r8bb_print ( n1, n2, ml, mu, a, "  The R8BB matrix:" );
//
//  Request random entries.
//
  seed = 123456789;

  cout << "\n";

  for ( k = 1; k <= 10; k++ )
  {
    i = i4_uniform_ab ( 0, n1 + n2 - 1, seed );
    j = i4_uniform_ab ( 0, n1 + n2 - 1, seed );
    value = r8bb_get ( n1, n2, ml, mu, a, i, j );
    cout << "  A(" << i << "," << j << ") = " << value << "\n";
  }

  delete [] a;

  return;
}
//****************************************************************************80

void r8bb_indicator_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8BB_INDICATOR_TEST tests R8BB_INDICATOR.
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
  double *a;
  int ml = 1;
  int mu = 1;
  int n1 = 6;
  int n2 = 2;

  cout << "\n";
  cout << "R8BB_INDICATOR_TEST\n";
  cout << "  R8BB_INDICATOR sets up an R8BB indicator matrix.\n";
  cout << "\n";
  cout << "  Matrix order N     = " << n1 + n2 << "\n";
  cout << "  Matrix suborder N1 = " << n1 << "\n";
  cout << "  Matrix suborder N2 = " << n2 << "\n";
  cout << "  Lower bandwidth ML = " << ml << "\n";
  cout << "  Upper bandwidth MU = " << mu << "\n";

  a = r8bb_indicator ( n1, n2, ml, mu );

  r8bb_print ( n1, n2, ml, mu, a, "  The R8BB indicator matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8bb_mtv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8BB_MTV_TEST tests R8BB_MTV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    11 July 2016
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
  cout << "R8BB_MTV_TEST\n";
  cout << "  R8BB_MTV computes b=A'*x, where A is an R8BB matrix.\n";
  cout << "\n";
  cout << "  Matrix order N     = " << n << "\n";
  cout << "  Matrix suborder N1 = " << n1 << "\n";
  cout << "  Matrix suborder N2 = " << n2 << "\n";
  cout << "  Lower bandwidth ML = " << ml << "\n";
  cout << "  Upper bandwidth MU = " << mu << "\n";

  a = r8bb_indicator ( n1, n2, ml, mu );

  r8bb_print ( n1, n2, ml, mu, a, "  The R8BB matrix:" );

  x = r8vec_indicator1_new ( n );

  r8vec_print ( n, x, "  The vector x:" );

  b = r8bb_mtv ( n1, n2, ml, mu, a, x );

  r8vec_print ( n, b, "  The product b=A'*x:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

void r8bb_mv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8BB_MV_TEST tests R8BB_MV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    11 July 2016
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
  cout << "R8BB_MV_TEST\n";
  cout << "  R8BB_MV computes b=A*x, where A is an R8BB matrix.\n";
  cout << "\n";
  cout << "  Matrix order N     = " << n << "\n";
  cout << "  Matrix suborder N1 = " << n1 << "\n";
  cout << "  Matrix suborder N2 = " << n2 << "\n";
  cout << "  Lower bandwidth ML = " << ml << "\n";
  cout << "  Upper bandwidth MU = " << mu << "\n";

  a = r8bb_indicator ( n1, n2, ml, mu );

  r8bb_print ( n1, n2, ml, mu, a, "  The R8BB matrix:" );

  x = r8vec_indicator1_new ( n1 + n2 );

  r8vec_print ( n, x, "  The vector x:" );

  b = r8bb_mv ( n1, n2, ml, mu, a, x );

  r8vec_print ( n, b, "  The product b=A*x:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

void r8bb_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8BB_PRINT_TEST tests R8BB_PRINT.
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
  double *a;
  int ml = 1;
  int mu = 1;
  int n;
  int n1 = 8;
  int n2 = 2;
  int seed = 123456789;

  n = n1 + n2;

  cout << "\n";
  cout << "R8BB_PRINT_TEST\n";
  cout << "  R8BB_PRINT prints an R8BB matrix;\n";
  cout << "\n";
  cout << "  Matrix order N     = " << n1 + n2 << "\n";
  cout << "  Matrix suborder N1 = " << n1 << "\n";
  cout << "  Matrix suborder N2 = " << n2 << "\n";
  cout << "  Lower bandwidth ML = " << ml << "\n";
  cout << "  Upper bandwidth MU = " << mu << "\n";
//
//  Set the matrix.
//
  a = r8bb_random ( n1, n2, ml, mu, seed );

  r8bb_print ( n1, n2, ml, mu, a, "  The border-banded matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8bb_print_some_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8BB_PRINT_SOME_TEST tests R8BB_PRINT_SOME.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    11 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int ml = 1;
  int mu = 1;
  int n;
  int n1 = 8;
  int n2 = 2;
  int seed = 123456789;

  n = n1 + n2;

  cout << "\n";
  cout << "R8BB_PRINT_SOME_TEST\n";
  cout << "  R8BB_PRINT_SOME prints some of an R8BB matrix;\n";
  cout << "\n";
  cout << "  Matrix order N     = " << n1 + n2 << "\n";
  cout << "  Matrix suborder N1 = " << n1 << "\n";
  cout << "  Matrix suborder N2 = " << n2 << "\n";
  cout << "  Lower bandwidth ML = " << ml << "\n";
  cout << "  Upper bandwidth MU = " << mu << "\n";
//
//  Set the matrix.
//
  a = r8bb_random ( n1, n2, ml, mu, seed );

  r8bb_print_some ( n1, n2, ml, mu, a, 6, 6, 7, 7, 
    "  The lower right dense matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8bb_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8BB_RANDOM_TEST tests R8BB_RANDOM.
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
# define N1 8
# define N2 2
# define ML 1
# define MU 1
# define N N1+N2

  double *a;
  int seed = 123456789;

  cout << "\n";
  cout << "R8BB_RANDOM_TEST\n";
  cout << "  R8BB_RANDOM returns a random R8BB matrix;\n";
  cout << "  R8BB_SL solves.\n";
  cout << "\n";
  cout << "  Matrix order N     = " << N  << "\n";
  cout << "  Matrix suborder N1 = " << N1 << "\n";
  cout << "  Matrix suborder N2 = " << N2 << "\n";
  cout << "  Lower bandwidth ML = " << ML << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";
//
//  Set the matrix.
//
  a = r8bb_random ( N1, N2, ML, MU, seed );

  r8bb_print ( N1, N2, ML, MU, a, "  The border-banded matrix:" );

  delete [] a;

  return;
# undef ML
# undef MU
# undef N
# undef N1
# undef N2
}
//****************************************************************************80

void r8bb_set_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8BB_SET_TEST tests R8BB_SET.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    11 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int i;
  int j;
  int ml = 2;
  int mu = 1;
  int n1 = 4;
  int n2 = 1;
  double value;

  cout << "\n";
  cout << "R8BB_SET_TEST\n";
  cout << "  R8BB_SET sets entries of an R8BB matrix.\n";
  cout << "\n";
  cout << "  Matrix order N     = " << n1 + n2 << "\n";
  cout << "  Matrix suborder N1 = " << n1 << "\n";
  cout << "  Matrix suborder N2 = " << n2 << "\n";
  cout << "  Lower bandwidth ML = " << ml << "\n";
  cout << "  Upper bandwidth MU = " << mu << "\n";
//
//  A = 0.
//
  a = r8bb_zeros ( n1, n2, ml, mu );
//
//  Fill in band matrix.
//
  for ( i = 0; i < n1; i++ )
  {
    for ( j = 0; j < n1; j++ )
    {
      if ( i - ml <= j && j <= i + mu )
      {
        value = ( double ) ( 10 * i + j );
        r8bb_set ( n1, n2, ml, mu, a, i, j, value );
      }
    }
  }
//
//  Fill in right border vector.
//
  for ( i = 0; i < n1; i++ )
  {
    for ( j = n1; j < n1 + n2; j++ )
    {
      value = ( double ) ( 10 * i + j );
      r8bb_set ( n1, n2, ml, mu, a, i, j, value );
    }
  }
//
//  Fill in lower border vector.
//
  for ( i = n1; i < n1 + n2; i++ )
  {
    for ( j = 0; j < n1; j++ )
    {
      value = ( double ) ( 10 * i + j );
      r8bb_set ( n1, n2, ml, mu, a, i, j, value );
    }
  }
//
//  Fill in lower right dense matrix.
//
  for ( i = n1; i < n1 + n2; i++ )
  {
    for ( j = n1; j < n1 + n2; j++ )
    {
      value = ( double ) ( 10 * i + j );
      r8bb_set ( n1, n2, ml, mu, a, i, j, value );
    }
  }

  r8bb_print ( n1, n2, ml, mu, a, "  The R8BB zero matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8bb_sl_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8BB_SL_TEST tests R8BB_SL.
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
# define N1 8
# define N2 2
# define ML 1
# define MU 1
# define N N1+N2

  double *a;
  double *b;
  int i;
  int info;
  int pivot[N];
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8BB_SL_TEST\n";
  cout << "  R8BB_SL solves a linear system factored by R8BB_FA.\n";
  cout << "\n";
  cout << "  Matrix order N     = " << N  << "\n";
  cout << "  Matrix suborder N1 = " << N1 << "\n";
  cout << "  Matrix suborder N2 = " << N2 << "\n";
  cout << "  Lower bandwidth ML = " << ML << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";
//
//  Set the matrix.
//
  a = r8bb_random ( N1, N2, ML, MU, seed );

  r8bb_print ( N1, N2, ML, MU, a, "  The border-banded matrix:" );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( N );
//
//  Compute the corresponding right hand side.
//
  b = r8bb_mv ( N1, N2, ML, MU, a, x );

  r8vec_print ( N, b, "  The right hand side vector:" );
//
//  Factor the matrix.
//
  info = r8bb_fa ( N1, N2, ML, MU, a, pivot );

  r8bb_print ( N1, N2, ML, MU, a, "  The FACTORED border-banded matrix:" );

  if ( info != 0 )
  {
    cout << "\n";
    cout << "R8BB_SL_TEST - Fatal error!\n";
    cout << "  R8BB_FA claims the matrix is singular.\n";
    cout << "  The value of INFO is " << info << "\n";
    return;
  }
//
//  Solve the system.
//
  delete [] x;
  x = r8bb_sl ( N1, N2, ML, MU, a, pivot, b );

  r8vec_print ( N, x, "  Solution to A*x=b:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
# undef ML
# undef MU
# undef N
# undef N1
# undef N2
}
//****************************************************************************80

void r8bb_to_r8ge_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8BB_TO_R8GE_TEST tests R8BB_TO_R8GE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    11 July 2016
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
  cout << "R8BB_TO_R8GE_TEST\n";
  cout << "  R8BB_TO_R8GE converts an R8BB matrix to R8GE format.\n";
  cout << "\n";
  cout << "  Matrix order N     = " << n1 + n2 << "\n";
  cout << "  Matrix suborder N1 = " << n1 << "\n";
  cout << "  Matrix suborder N2 = " << n2 << "\n";
  cout << "  Lower bandwidth ML = " << ml << "\n";
  cout << "  Upper bandwidth MU = " << mu << "\n";

  a = r8bb_indicator ( n1, n2, ml, mu );

  r8bb_print ( n1, n2, ml, mu, a, "  The R8BB matrix:" );

  a_r8ge = r8bb_to_r8ge ( n1, n2, ml, mu, a );

  r8ge_print ( n1 + n2, n1 + n2, a_r8ge, "  The R8GE matrix:" );

  delete [] a;
  delete [] a_r8ge;

  return;
}
//****************************************************************************80

void r8bb_zeros_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8BB_ZEROS_TEST tests R8BB_ZEROS.
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
# define N1 6
# define N2 2
# define ML 1
# define MU 1

  double *a;

  cout << "\n";
  cout << "R8BB_ZEROS_TEST\n";
  cout << "  R8BB_ZEROS zeros an R8BB matrix.\n";
  cout << "\n";
  cout << "  Matrix order N     = " << N1 + N2 << "\n";
  cout << "  Matrix suborder N1 = " << N1 << "\n";
  cout << "  Matrix suborder N2 = " << N2 << "\n";
  cout << "  Lower bandwidth ML = " << ML << "\n";
  cout << "  Upper bandwidth MU = " << MU << "\n";

  a = r8bb_zeros ( N1, N2, ML, MU );

  r8bb_print ( N1, N2, ML, MU, a, "  The R8BB zero matrix:" );

  delete [] a;

  return;
# undef ML
# undef MU
# undef N1
# undef N2
}
