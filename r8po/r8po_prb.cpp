# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8po.hpp"

int main ( );
void r8ge_to_r8po_test ( );
void r8po_det_test ( );
void r8po_dif2_test ( );
void r8po_fa_test ( );
void r8po_indicator_test ( );
void r8po_inverse_test ( );
void r8po_ml_test ( );
void r8po_mm_test ( );
void r8po_mv_test ( );
void r8po_print_test ( );
void r8po_print_some_test ( );
void r8po_random_test ( );
void r8po_sl_test ( );
void r8po_to_r8ge_test ( );
void r8po_zeros_test ( );

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
//    20 August 2015
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

  r8ge_to_r8po_test ( );

  r8po_det_test ( );
  r8po_dif2_test ( );
  r8po_fa_test ( );
  r8po_indicator_test ( );
  r8po_inverse_test ( );
  r8po_ml_test ( );
  r8po_mm_test ( );
  r8po_mv_test ( );
  r8po_print_test ( );
  r8po_print_some_test ( );
  r8po_random_test ( );
  r8po_sl_test ( );
  r8po_to_r8ge_test ( );
  r8po_zeros_test ( );
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

void r8ge_to_r8po_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_TO_R8PO_TEST tests R8GE_TO_R8PO.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 August 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *b;
  int n = 5;
  int seed = 123456789;

  cout << "\n";
  cout << "R8GE_TO_R8PO_TEST\n";
  cout << "  R8GE_TO_R8PO converts an R8GE matrix to R8PO format.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r8ge_random ( n, n, seed );

  r8ge_print ( n, n, a, "  The random R8GE matrix A:" );

  b = r8ge_to_r8po ( n, a );

  r8po_print ( n, b, "  The R8PO matrix" );

  delete [] a;
  delete [] b;

  return;
}
//****************************************************************************80

void r8po_det_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PO_DET_TEST tests R8PO_DET.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    29 July 2015
//
//  Author:
//
//    John Burkardt
//
{
# define N 4

  double a[N*N];
  double det;
  int i;
  int info;
  int j;
  int k;
  double *r;

  cout << "\n";
  cout << "R8PO_DET_TEST\n";
  cout << "  R8PO_DET computes the determinant of\n";
  cout << "  a symmetric positive definite matrix\n";
  cout << "  factored by R8PO_FA,\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
//
//  Set the matrix.
//
  for ( i = 0; i < N; i++ )
  {
    for ( j = 0; j < N; j++ )
    {
      if ( j == i - 1 )
      {
        a[i+j*N] = - 1.0;
      }
      else if ( j == i )
      {
        a[i+j*N] = 2.0;
      }
      else if ( j == i + 1 )
      {
        a[i+j*N] = - 1.0;
      }
      else
      {
        a[i+j*N] = 0.0;
      }
    }
  }

  r8po_print ( N, a, "  Matrix A:" );
//
//  Factor the matrix.
//
  r = r8po_fa ( N, a );
//
//  Compute the determinant.
//
  det = r8po_det ( N, r );
 
  cout << "\n";
  cout << "  Determinant of A = " << det << "\n";

  delete [] r;

  return;
# undef N
}
//****************************************************************************80

void r8po_dif2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PO_DIF2_TEST tests R8PO_DIF2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    20 August 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n = 5;

  cout << "\n";
  cout << "R8PO_DIF2_TEST\n";
  cout << "  R8PO_DIF2 sets the second difference matrix in R8PO format.\n";

  a = r8po_dif2 ( n );

  r8po_print ( n, a, "  The R8PO DIF2 matrix:" );
 
  delete [] a;

  return;
}
//****************************************************************************80

void r8po_fa_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PO_FA_TEST tests R8PO_FA;
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

  double a[N*N];
  int i;
  int j;
  int k;
  double *r;

  cout << "\n";
  cout << "R8PO_FA_TEST\n";
  cout << "  R8PO_FA factors a positive definite symmetric\n";
  cout << "  linear system,\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";

  for ( i = 0; i < N; i++ )
  {
    for ( j = 0; j < N; j++ )
    {
      a[i+j*N] = ( double ) ( i4_min ( i + 1, j + 1 ) );
    }
  }

  r8po_print ( N, a, "  The matrix A:" );
//
//  Factor the matrix.
//
  r = r8po_fa ( N, a );

  if ( r == NULL )
  {
    cout << "\n";
    cout << "  Fatal error!\n";
    cout << "  R8PO_FA declares the matrix is singular!\n";
    return;
  }
  r8ut_print ( N, N, r, "  The factor R (an R8UT matrix):" );
//
//  Compute the product R' * R.
//
  for ( i = 0; i < N; i++ )
  {
    for ( j = 0; j < N; j++ )
    {
      a[i+j*N] = 0.0;
      for ( k = 0; k < N; k++ )
      {
        a[i+j*N] = a[i+j*N] + r[k+i*N] * r[k+j*N];
      }
    }
  }

  r8ge_print ( N, N, a, "  The product R' * R:" );

  delete [] r;

  return;
# undef N
}
//****************************************************************************80

void r8po_indicator_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PO_INDICATOR_TEST tests R8PO_INDICATOR.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    01 August 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n = 5;

  cout << "\n";
  cout << "R8PO_INDICATOR_TEST\n";
  cout << "  R8PO_INDICATOR sets up an R8PO indicator matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
//
//  Set the matrix.
//
  a = r8po_indicator ( n );

  r8po_print ( n, a, "  The R8PO indicator matrix:" );
 
  delete [] a;

  return;
}
//****************************************************************************80

void r8po_inverse_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PO_INVERSE_TEST tests R8PO_INVERSE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    29 July 2015
//
//  Author:
//
//    John Burkardt
//
{
# define N 4

  double a[N*N];
  double *a_inv;
  double *c;
  int i;
  int info;
  int j;
  int k;
  double *r;

  cout << "\n";
  cout << "R8PO_INVERSE_TEST\n";
  cout << "  R8PO_INVERSE computes the inverse of\n";
  cout << "  a symmetric positive definite matrix\n";
  cout << "  factored by R8PO_FA,\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
//
//  Set the matrix.
//
  for ( i = 0; i < N; i++ )
  {
    for ( j = 0; j < N; j++ )
    {
      a[i+j*N] = ( double ) ( i4_min ( i + 1, j + 1 ) );
    }
  }

  r8po_print ( N, a, "  Matrix A:" );
//
//  Factor the matrix.
//
  r = r8po_fa ( N, a );
//
//  Compute the inverse.
//
  a_inv = r8po_inverse ( N, r );

  r8po_print ( N, a_inv, "  Inverse matrix A_INV:" );
//
//  Check.
//
  c = r8po_mm ( N, a, a_inv );

  r8po_print ( N, c, "  Product A * A_INV:" );

  delete [] a_inv;
  delete [] c;
  delete [] r;

  return;
# undef N
}
//****************************************************************************80

void r8po_ml_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PO_ML_TEST tests R8PO_ML.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    20 August 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *b;
  int i;
  int info;
  int j;
  int n = 10;
  double *r;
  double *x;

  cout << "\n";
  cout << "R8PO_ML_TEST\n";
  cout << "  R8PO_ML can compute A*x for an R8PO matrix A\n";
  cout << "  even after it has been factored by R8PO_FA.\n";

  a = new double[n*n];
  for ( i = 0; i < n; i++ )
  {
    for ( j = 0; j < n; j++ )
    {
      a[i+j*n] = ( double ) ( i4_min ( i + 1, j + 1 ) );
    }
  }
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( n );
//
//  Compute the corresponding right hand side.
//
  b = r8po_mv ( n, a, x );
//
//  Factor the matrix.
//
  r = r8po_fa ( n, a );

  if ( r == NULL )
  {
    cout << "\n";
    cout << "  Fatal error!\n";
    cout << "  R8PO_FA declares the matrix is singular!\n";
    return;
  }
//
//  Solve the linear system.
//
  delete [] x;
  x = r8po_sl ( n, r, b );
 
  r8vec_print ( n, x, "  Solution:" );
//
//  Set the desired solution.
//
  delete [] x;
  x = new double[n];

  for ( i = 0; i < n; i++ )
  {
    x[i] = 1.0;
  }
//
//  Compute the corresponding right hand side, using the factored matrix.
//
  delete [] b;
  b = r8po_ml ( n, r, x );
//
//  Solve the linear system.
//
  delete [] x;
  x = r8po_sl ( n, r, b );
 
  r8vec_print ( n, x, "  Solution:" );

  delete [] a;
  delete [] b;
  delete [] r;
  delete [] x;

  return;
}
//****************************************************************************80

void r8po_mm_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PO_MM_TEST tests R8PO_MM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    31 July 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *b;
  double *c;
  int i;
  int n = 5;

  cout << "\n";
  cout << "R8PO_MM_TEST\n";
  cout << "  R8PO_MM computes the product of two\n";
  cout << "  symmetric positive definite matrices.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
//
//  Set (the upper half of) matrix A.
//
  a = r8po_zeros ( n );

  for ( i = 0; i < n; i++ )
  {
    a[i+i*n] = 2.0;
  }

  for ( i = 0; i < n - 1; i++ )
  {
    a[i+(i+1)*n] = -1.0;
  }

  r8po_print ( n, a, "  Matrix A:" );
//
//  Set (the upper half of) matrix B.
//
  b = r8po_zeros ( n );

  for ( i = 0; i < n; i++ )
  {
    b[i+i*n] = ( double ) ( i + i + 1 );
  }

  for ( i = 0; i < n - 1; i++ )
  {
    b[i+(i+1)*n] = ( double ) ( i + i + 1 + 1 );
  }

  r8po_print ( n, b, "  Matrix B:" );
//
//  Compute the product.
//
  c = r8po_mm ( n, a, b );

  r8po_print ( n, c, "  Product matrix C = A * B:" );

  delete [] a;
  delete [] b;
  delete [] c;

  return;
}
//****************************************************************************80

void r8po_mv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PO_MV_TEST tests R8PO_MV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 August 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int i;
  int n = 5;
  double *v;
  double *w;

  cout << "\n";
  cout << "R8PO_MV_TEST\n";
  cout << "  R8PO_MV computes the product of an R8PO matrix and a vector.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
//
//  Set (the upper half of) matrix A.
//
  a = r8po_zeros ( n );

  for ( i = 0; i < n; i++ )
  {
    a[i+i*n] = 2.0;
  }

  for ( i = 0; i < n - 1; i++ )
  {
    a[i+(i+1)*n] = -1.0;
  }

  r8po_print ( n, a, "  Matrix A:" );
//
//  Set the vector V.
//
  v = r8vec_indicator1_new ( n );

  r8vec_print ( n, v, "  Vector V:" );
//
//  Compute the product.
//
  w = r8po_mv ( n, a, v );

  r8vec_print ( n, w, "  Product w = A * v:" );

  delete [] a;
  delete [] v;
  delete [] w;

  return;
}
//****************************************************************************80

void r8po_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PO_PRINT_TEST tests R8PO_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    20 August 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n = 5;

  cout << "\n";
  cout << "R8PO_PRINT_TEST\n";
  cout << "  R8PO_PRINT prints an R8PO matrix.\n";

  a = r8po_indicator ( n );

  r8po_print ( n, a, "  The R8PO matrix:" );
 
  delete [] a;

  return;
}
//****************************************************************************80

void r8po_print_some_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PO_PRINT_SOME_TEST tests R8PO_PRINT_SOME.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    20 August 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n = 10;

  cout << "\n";
  cout << "R8PO_PRINT_SOME_TEST\n";
  cout << "  R8PO_PRINT_SOME prints some of an R8PO matrix.\n";

  a = r8po_indicator ( n );

  r8po_print_some ( n, a, 2, 5, 6, 7, "  Rows 2-6, 5-7:" );
 
  delete [] a;

  return;
}
//****************************************************************************80

void r8po_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PO_RANDOM_TEST tests R8PO_RANDOM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    01 August 2015
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
  cout << "R8PO_RANDOM_TEST\n";
  cout << "  R8PO_RANDOM computes a random positive definite\n";
  cout << "  symmetric matrix.\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r8po_random ( n, seed );

  r8po_print ( n, a, "  The random R8PO matrix:" );
 
  delete [] a;

  return;
}
//****************************************************************************80

void r8po_sl_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PO_SL_TEST tests R8PO_SL.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 August 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *b;
  int i;
  int info;
  int n = 5;
  double *r;
  double *x;

  cout << "\n";
  cout << "R8PO_SL_TEST\n";
  cout << "  R8PO_SL solves a linear system with an R8PO matrix\n";
  cout << "  after it has been factored by R8PO_FA.\n";
//
//  Set (the upper half of) matrix A.
//
  a = r8po_zeros ( n );

  for ( i = 0; i < n; i++ )
  {
    a[i+i*n] = 2.0;
  }

  for ( i = 0; i < n - 1; i++ )
  {
    a[i+(i+1)*n] = -1.0;
  }

  r8po_print ( n, a, "  Matrix A:" );
//
//  Factor the matrix.
//
  r = r8po_fa ( n, a );

  if ( r == NULL )
  {
    cout << "\n";
    cout << "  R8PO_FA declares the matrix is singular!\n";
    return;
  }
//
//  Set the right hand side.
//
  b = r8vec_zeros_new ( n );
  b[n-1] = ( double ) ( n + 1 );
  r8vec_print ( n, b, "  Right hand side b:" );
//
//  Solve the linear system.
//
  x = r8po_sl ( n, r, b );
 
  r8vec_print ( n, x, "  Solution x:" );
//
//  Free memory.
//
  delete [] a;
  delete [] b;
  delete [] r;
  delete [] x;

  return;
}
//****************************************************************************80

void r8po_to_r8ge_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PO_TO_R8GE_TEST tests R8PO_TO_R8GE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    01 August 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *b;
  int n = 5;
  int seed = 123456789;

  cout << "\n";
  cout << "R8PO_TO_R8GE_TEST\n";
  cout << "  R8PO_TO_R8GE converts an R8PO matrix to R8GE format.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r8po_random ( n, seed );

  r8po_print ( n, a, "  The random R8PO matrix:" );
 
  r8ge_print ( n, n, a, "  The random R8PO matrix (printed by R8GE_PRINT):" );

  b = r8po_to_r8ge ( n, a );

  r8ge_print ( n, n, b, "  The random R8GE matrix (printed by R8GE_PRINT):" );

  delete [] a;
  delete [] b;

  return;
}
//****************************************************************************80

void r8po_zeros_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PO_ZEROS_TEST tests R8PO_ZEROS.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 August 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n = 5;

  cout << "\n";
  cout << "R8PO_ZEROS_TEST\n";
  cout << "  R8PO_ZEROS returns zeroed out space for a\n";
  cout << "  symmetric positive definite matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r8po_zeros ( n );

  r8po_print ( n, a, "  Matrix A:" );

  delete [] a;

  return;
}
