# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8ss.hpp"

int main ( );
void r8ss_dif2_test ( );
void r8ss_indicator_test ( );
void r8ss_mv_test ( );
void r8ss_print_test ( );
void r8ss_print_some_test ( );
void r8ss_random_test ( );
void r8ss_to_r8ge_test ( );
void r8ss_zeros_test ( );
void r8vec_to_r8cb_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for R8SS_PRB.
//
//  Discussion:
//
//    R8SS_PRB tests the R8SS library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    04 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "R8SS_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the R8SS library.\n";

  r8ss_dif2_test ( );
  r8ss_indicator_test ( );
  r8ss_mv_test ( );
  r8ss_print_test ( );
  r8ss_print_some_test ( );
  r8ss_random_test ( );
  r8ss_to_r8ge_test ( );
  r8ss_zeros_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "R8SS_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void r8ss_dif2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SS_DIF2_TEST tests R8SS_DIF2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    01 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int *diag;
  int n = 5;
  int na;

  cout << "\n";
  cout << "R8SS_DIF2_TEST\n";
  cout << "  R8SS_DIF2 returns the second difference matrix in R8SS format.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  diag = new int[n];
  na = 2 * n - 1;
  a = new double[na];
  r8ss_dif2 ( n, na, diag, a );

  r8ss_print ( n, na, diag, a, "  The R8SS second difference matrix:" );

  delete [] a;
  delete [] diag;

  return;  
}
//****************************************************************************80

void r8ss_indicator_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SS_INDICATOR_TEST tests R8SS_INDICATOR.
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

  double *a;
  int diag[N];
  int na;

  cout << "\n";
  cout << "R8SS_INDICATOR_TEST\n";
  cout << "  R8SS_INDICATOR sets up an indicator matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";

  a = r8ss_indicator ( N, na, diag );

  r8ss_print ( N, na, diag, a, "  The R8SS indicator matrix:" );

  delete [] a;

  return;  
# undef N
}
//****************************************************************************80

void r8ss_mv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SS_MV_TEST tests R8SS_MV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    01 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *a_r8ge;
  double *b;
  double *b_r8ge;
  int *diag;
  int i;
  int ij;
  int ilo;
  int j;
  int n = 5;
  int na;
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8SS_MV_TEST\n";
  cout << "  R8SS_MV computes A*x for an R8SS matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
//
//  Set the matrix.
//
  diag = new int[n];
  a = new double[(n*(n+1))/2];
  r8ss_random ( n, na, diag, a, seed );
//
//  Replace the random entries by marker values.
//
  ij = 0;
  for ( j = 0; j < n; j++ )
  {
    if ( j == 0 )
    {
      ilo = 0;
    }
    else
    {
      ilo = j + 1 - ( diag[j] - diag[j-1] );
    }

    for ( i = ilo; i <= j; i++ )
    {
      a[ij] = ( double ) ( 10 * ( i + 1 ) + ( j + 1 ) );
      ij = ij + 1;
    }
  }
//
//  Print.
//
  cout << "\n";
  cout << "  Number of nonzero entries stored is " << na << "\n";

  i4vec_print ( n, diag, "  Diagonal storage indices:" );

  r8ss_print ( n, na, diag, a, "  The R8SS matrix:" );
//
//  Copy the matrix into a general matrix.
//
  a_r8ge = r8ss_to_r8ge ( n, na, diag, a );
//
//  Set the vector X.
//
  x = r8vec_indicator1_new ( n );
//
//  Compute the product.
//
  b = r8ss_mv ( n, na, diag, a, x );
//
//  Compute the product using the general matrix.
//
  b_r8ge = r8ge_mv ( n, n, a_r8ge, x );
//
//  Compare the results.
//
  r8vec2_print ( n, b, b_r8ge, "  R8SS_MV verse R8GE_MV" );

  delete [] a;
  delete [] a_r8ge;
  delete [] b;
  delete [] b_r8ge;
  delete [] diag;
  delete [] x;

  return;  
}
//****************************************************************************80

void r8ss_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SS_PRINT_TEST tests R8SS_PRINT.
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

  double a[(N*(N+1))/2];
  int diag[N];
  int na;
  int seed = 123456789;

  cout << "\n";
  cout << "R8SS_PRINT_TEST\n";
  cout << "  R8SS_PRINT prints an R8SS matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
//
//  Set the matrix.
//
  r8ss_random ( N, na, diag, a, seed );

  cout << "\n";
  cout << "  Number of nonzero entries stored is " << na << "\n";

  i4vec_print ( N, diag, "  Diagonal storage indices:" );

  r8ss_print ( N, na, diag, a, "  The R8SS matrix:" );

  return;  
# undef N
}
//****************************************************************************80

void r8ss_print_some_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SS_PRINT_SOME_TEST tests R8SS_PRINT_SOME.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    01 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int *diag;
  int i;
  int ij;
  int ilo;
  int j;
  int n = 9;
  int na;
  int seed = 123456789;

  cout << "\n";
  cout << "R8SS_PRINT_SOME_TEST\n";
  cout << "  R8SS_PRINT_SOME prints some of an R8SS matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
//
//  Set the matrix.
//
  diag = new int[n];
  a = new double[(n*(n+1))/2];
  r8ss_random ( n, na, diag, a, seed );
//
//  Replace the random entries by marker values.
//
  ij = 0;
  for ( j = 0; j < n; j++ )
  {
    if ( j == 0 )
    {
      ilo = 0;
    }
    else
    {
      ilo = j + 1 - ( diag[j] - diag[j-1] );
    }

    for ( i = ilo; i <= j; i++ )
    {
      a[ij] = ( double ) ( 10 * ( i + 1 ) + ( j + 1 ) );
      ij = ij + 1;
    }
  }
  cout << "\n";
  cout << "  Number of nonzero entries stored is " << na << "\n";

  i4vec_print ( n, diag, "  Diagonal storage indices:" );

  r8ss_print_some ( n, na, diag, a, 1, 0, 7, 4, "  Rows 1-7, Cols 0:4" );

  delete [] a;
  delete [] diag;

  return;  
}
//****************************************************************************80

void r8ss_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SS_RANDOM_TEST tests R8SS_RANDOM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    01 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int *diag;
  int i;
  int n = 5;
  int na;
  int seed = 123456789;

  cout << "\n";
  cout << "R8SS_RANDOM_TEST\n";
  cout << "  R8SS_RANDOM returns a random symmetric skyline storage matrix,\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
//
//  Set the matrix.
//
  diag = new int[n];
  a = new double[(n*(n+1))/2];
  r8ss_random ( n, na, diag, a, seed );

  cout << "\n";
  cout << "  Number of nonzero entries stored is " << na << "\n";

  i4vec_print ( n, diag, "  Diagonal storage indices:" );

  r8ss_print ( n, na, diag, a, "  The R8SS matrix:" );

  return;  
}
//****************************************************************************80

void r8ss_to_r8ge_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SS_To_R8GE_TEST tests R8SS_TO_R*GE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    01 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *a_r8ge;
  int *diag;
  int i;
  int n = 5;
  int na;
  int seed = 123456789;

  cout << "\n";
  cout << "R8SS_TO_R8GE_TEST\n";
  cout << "  R8SS_TO_R8GE converts an R8SS matrix to R8GE format.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
//
//  Set the matrix.
//
  diag = new int[n];
  a = new double[(n*(n+1))/2];
  r8ss_random ( n, na, diag, a, seed );

  cout << "\n";
  cout << "  Number of nonzero entries stored is " << na << "\n";

  i4vec_print ( n, diag, "  Diagonal storage indices:" );

  r8ss_print ( n, na, diag, a, "  The R8SS matrix:" );

  a_r8ge = r8ss_to_r8ge ( n, na, diag, a );

  r8ge_print ( n, n, a_r8ge, "  The R8GE matrix:" );

  delete [] a;
  delete [] a_r8ge;
  delete [] diag;

  return;  
}
//****************************************************************************80

void r8ss_zeros_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SS_ZEROS_TEST tests R8SS_ZEROS.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    01 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int *diag;
  int i;
  int n = 5;
  int na;

  cout << "\n";
  cout << "R8SS_ZEROS_TEST\n";
  cout << "  R8SS_ZEROS zeros an R8SS matrix,\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
//
//  Set the matrix.
//
  diag = new int[n];
  a = new double[(n*(n+1))/2];
  a = r8ss_zeros ( n, na, diag );

  r8ss_print ( n, na, diag, a, "  The R8SS matrix:" );

  delete [] a;
  delete [] diag;

  return;  
}
