# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8sd.hpp"

int main ( );
void r8sd_cg_test ( );
void r8sd_dif2_test ( );
void r8sd_indicator_test ( );
void r8sd_mv_test ( );
void r8sd_print_test ( );
void r8sd_print_some_test ( );
void r8sd_random_test ( );
void r8sd_res_test ( );
void r8sd_to_r8ge_test ( );
void r8sd_zeros_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for R8SD_PRB.
//
//  Discussion:
//
//    R8SD_PRB tests the R8SD library.
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
  timestamp ( );
  cout << "\n";
  cout << "R8SD_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the R8SD library.\n";

  r8sd_cg_test ( );
  r8sd_dif2_test ( );
  r8sd_indicator_test ( );
  r8sd_mv_test ( );
  r8sd_print_test ( );
  r8sd_print_some_test ( );
  r8sd_random_test ( );
  r8sd_res_test ( );
  r8sd_to_r8ge_test ( );
  r8sd_zeros_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "R8SD_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void r8sd_cg_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SD_CG_TEST tests R8SD_CG.
//
//  Discussion:
//
//    NX and NY are the number of grid points in the X and Y directions.
//    N is the number of unknowns.
//    NDIAG is the number of nonzero diagonals we will store.  We only
//    store the main diagonal, and the superdiagonals.
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
# define NDIAG 3
# define NX 10
# define NY 10
# define N ( NX * NY )

  double a[N*NDIAG];
  double *b;
  double *b2;
  double err;
  int i;
  int j;
  int k;
  int offset[NDIAG] = { 0, 1, NX };
  double *x;
  double x_init[N];

  cout << "\n";
  cout << "R8SD_CG_TEST\n";
  cout << "  R8SD_CG applies the conjugate gradient method\n";
  cout << "  to a symmetric positive definite linear\n";
  cout << "  system stored by diagonals.\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
  cout << "  Matrix diagonals NDIAG = " << NDIAG << "\n";
  cout << "\n";
//
//  OFFSET tells us where the nonzero diagonals are.  It does this
//  by recording how "high" or to the right the diagonals are from
//  the main diagonal.
//
//
//  Now we compute the numbers that go into the diagonals.  For this
//  problem, we could simply store a column of 4's, and two columns of
//  -1's, but I wanted to go through the motions of thinking about the
//  value of each entry.  "K" counts the row of the original matrix
//  that we are working on.
//
  k = 0;

  for ( j = 1; j <= NY; j++ )
  {
    for ( i = 1; i <= NX; i++ )
    {
//
//  Central
//
      a[k+0*N] = 4.0;
//
//  East ( = West )
//
      if ( i == NX )
      {
        a[k+1*N] = 0.0;
      }
      else
      {
        a[k+1*N] = -1.0;
      }
//
//  North ( = South )
//
      if ( j == NY )
      {
        a[k+2*N] = 0.0;
      }
      else
      {
        a[k+2*N] = -1.0;
      }
      k = k + 1;
    }
  }
//
//  Print some of the matrix.
//
  r8sd_print_some ( N, NDIAG, offset, a, 1, 1, 10, 10, 
    "  First 10 rows and columns of matrix." );
//
//  Set the desired solution.
//
  x = new double[N];
  k = 0;
  for ( j = 1; j <= NY; j++ )
  {
    for ( i = 1; i <= NX; i++ )
    {
      x[k] = ( double ) ( 10 * i + j );
      k = k + 1;
    }
  }
//
//  Compute the corresponding right hand side.
//
  b = r8sd_mv ( N, N, NDIAG, offset, a, x );

  r8vec_print_some ( N, b, 10, "  Right hand side:" );
//
//  Set X to zero so no one accuses us of cheating.
//
  for ( i = 0; i < N; i++ )
  {
    x_init[i] = 0.0;
  }
//
//  Call the conjugate gradient method.
//
  delete [] x;
  x = r8sd_cg ( N, NDIAG, offset, a, b, x_init );
//
//  Compute the residual, A*x-b
//
  b2 = r8sd_mv ( N, N, NDIAG, offset, a, x );
 
  err = 0.0;
  for ( i = 0; i < N; i++ )
  {
    err = r8_max ( err, fabs ( b2[i] - b[i] ) );
  }
 
  r8vec_print_some ( N, x, 10, "  Solution:" );

  cout << "\n";
  cout << "  Maximum residual = " << err << "\n";
//
//  Note that if we're not satisfied with the solution, we can
//  call again, using the computed X as our starting estimate.
//
//  Call the conjugate gradient method AGAIN.
//
  for ( i = 0; i < N; i++ )
  {
    x_init[i] = x[i];
  }
  delete [] x;

  x = r8sd_cg ( N, NDIAG, offset, a, b, x_init );
//
//  Compute the residual, A*x-b
//
  delete [] b2;
  b2 = r8sd_mv ( N, N, NDIAG, offset, a, x );
 
  err = 0.0;
  for ( i = 0; i < N; i++ )
  {
    err = r8_max ( err, fabs ( b2[i] - b[i] ) );
  }
 
  r8vec_print_some ( N, x, 10, "  Second attempt at solution:" );

  cout << "\n";
  cout << "  Maximum residual of second attempt = " << err << "\n";

  delete [] b;
  delete [] b2;
  delete [] x;

  return;
# undef N
# undef NDIAG
# undef NX
# undef NY
}
//****************************************************************************80

void r8sd_dif2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SD_DIF2_TEST tests R8SD_DIF2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n = 5;
  int ndiag = 2;
  int offset[2] = { 0, 1 };

  cout << "\n";
  cout << "R8SD_DIF2_TEST\n";
  cout << "  R8SD_DIF2 sets up an R8SD second difference matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
  cout << "  Matrix diagonals NDIAG = " << ndiag << "\n";

  a = r8sd_dif2 ( n, ndiag, offset );

  r8sd_print ( n, ndiag, offset, a, "  The R8SD second difference matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8sd_indicator_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SD_INDICATOR_TEST tests R8SD_INDICATOR.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n = 5;
  int ndiag = 3;
  int offset[3] = { 0, 1, 3 };

  cout << "\n";
  cout << "R8SD_INDICATOR_TEST\n";
  cout << "  R8SD_INDICATOR sets up an R8SD indicator matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
  cout << "  Matrix diagonals NDIAG = " << ndiag << "\n";

  a = r8sd_indicator ( n, ndiag, offset );

  r8sd_print ( n, ndiag, offset, a, "  The R8SD indicator matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8sd_mv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SD_MV_TEST tests R8SD_MV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *b;
  int n = 5;
  int ndiag = 3;
  int offset[3] = { 0, 1, 3 };
  double *x;

  cout << "\n";
  cout << "R8SD_MV_TEST\n";
  cout << "  R8SD_MV computes b=A*x, where A is an R8SD matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
  cout << "  Matrix diagonals NDIAG = " << ndiag << "\n";

  a = r8sd_indicator ( n, ndiag, offset );

  r8sd_print ( n, ndiag, offset, a, "  The R8SD indicator matrix:" );

  x = r8vec_indicator1_new ( n );

  r8vec_print ( n, x, "  The vector x:" );

  b = r8sd_mv ( n, n, ndiag, offset, a, x );

  r8vec_print ( n, b, "  The product b=A*x:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

void r8sd_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SD_PRINT_TEST tests R8SD_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n = 5;
  int ndiag = 3;
  int offset[3] = { 0, 1, 3 };

  cout << "\n";
  cout << "R8SD_PRINT_TEST\n";
  cout << "  R8SD_PRINT prints an R8SD matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
  cout << "  Matrix diagonals NDIAG = " << ndiag << "\n";

  a = r8sd_indicator ( n, ndiag, offset );

  r8sd_print ( n, ndiag, offset, a, "  The R8SD  matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8sd_print_some_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SD_PRINT_SOME_TEST tests R8SD_PRINT_SOME.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n = 10;
  int ndiag = 3;
  int offset[3] = { 0, 1, 3 };

  cout << "\n";
  cout << "R8SD_PRINT_SOME_TEST\n";
  cout << "  R8SD_PRINT_SOME prints some of an R8SD matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
  cout << "  Matrix diagonals NDIAG = " << ndiag << "\n";

  a = r8sd_indicator ( n, ndiag, offset );

  r8sd_print_some ( n, ndiag, offset, a, 1, 2, 7, 6, "  Rows 1-7, Cols 2-6:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8sd_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SD_RANDOM_TEST tests R8SD_RANDOM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n = 5;
  int ndiag = 3;
  int offset[3] = { 0, 1, 3 };
  int seed;

  cout << "\n";
  cout << "R8SD_RANDOM_TEST\n";
  cout << "  R8SD_RANDOM randomizes an R8SD matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
  cout << "  Matrix diagonals NDIAG = " << ndiag << "\n";

  seed = 123456789;
  a = r8sd_random ( n, ndiag, offset, seed );

  r8sd_print ( n, ndiag, offset, a, "  The random R8SD matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8sd_res_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SD_RES_TEST tests R8SD_RES.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *b;
  double e;
  int i;
  int n = 10;
  int ndiag = 2;
  int offset[2] = { 0, 1 };
  double *r;
  int seed;
  double *x;
  double *x2;

  cout << "\n";
  cout << "R8SD_RES_TEST\n";
  cout << "  R8SD_RES computes a residual R=b-A*x\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
  cout << "  Matrix diagonals NDIAG = " << ndiag << "\n";

  seed = 123456789;
  a = r8sd_random ( n, ndiag, offset, seed );
//
//  Print some of the matrix.
//
  r8sd_print ( n, ndiag, offset, a, "  The R8SD matrix:" );
  x = r8vec_indicator1_new ( n );

  r8vec_print ( n, x, "  The vector x:" );

  b = r8sd_mv ( n, n, ndiag, offset, a, x );

  r8vec_print ( n, b, "  The product b=A*x" );
//
//  Make X2, a bad copy of X.
//
  x2 = new double[n];

  for ( i = 0; i < n; i++ )
  {
    e = r8_uniform_01 ( seed );
    x2[i] = x[i] + 0.1 * e;
  }
  r8vec_print ( n, x2, "  The defective vector X2:" );
//
//  Compute R = B-A*X2.
//
  r = r8sd_res ( n, n, ndiag, offset, a, x2, b );
  
  r8vec_print ( n, r, "  Residual b-A*x2:" );

  delete [] a;
  delete [] b;
  delete [] r;
  delete [] x;
  delete [] x2;

  return;
}
//****************************************************************************80

void r8sd_to_r8ge_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SD_TO_R8GE_TEST tests R8SD_TO_R8GE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *a_r8ge;
  int n = 5;
  int ndiag = 3;
  int offset[3] = { 0, 1, 3 };

  cout << "\n";
  cout << "R8SD_TO_R8GE_TEST\n";
  cout << "  R8SD_TO_R8GE converts an R8SD matrix to R8GE format.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
  cout << "  Matrix diagonals NDIAG = " << ndiag << "\n";

  a = r8sd_indicator ( n, ndiag, offset );

  r8sd_print ( n, ndiag, offset, a, "  The R8SD matrix:" );

  a_r8ge = r8sd_to_r8ge ( n, ndiag, offset, a );

  r8ge_print ( n, n, a_r8ge, "  The R8GE matrix:" );

  delete [] a;
  delete [] a_r8ge;

  return;
}
//****************************************************************************80

void r8sd_zeros_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8SD_ZEROS_TEST tests R8SD_ZEROS.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n = 5;
  int ndiag = 3;
  int offset[3] = { 0, 1, 3 };

  cout << "\n";
  cout << "R8SD_ZEROS_TEST\n";
  cout << "  R8SD_ZEROS zeros an R8SD matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
  cout << "  Matrix diagonals NDIAG = " << ndiag << "\n";

  a = r8sd_zeros ( n, ndiag, offset );

  r8sd_print ( n, ndiag, offset, a, "  The R8SD zero matrix:" );

  delete [] a;

  return;
}
