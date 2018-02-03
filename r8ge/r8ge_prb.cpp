# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8ge.hpp"

int main ( );

void i4_log_10_test ( );
void i4_max_test ( );
void i4_min_test ( );
void i4_power_test ( );
void i4_uniform_ab_test ( );

void i4vec_print_test ( );

void r8_max_test ( );
void r8_sign_test ( );
void r8_uniform_01_test ( );
void r8_uniform_ab_test ( );

void r8ge_cg_test ( );
void r8ge_co_test ( );
void r8ge_copy_new_test ( );
void r8ge_det_test ( );
void r8ge_dif2_test ( );
void r8ge_dilu_test ( );
void r8ge_fa_test ( );
void r8ge_fs_new_test ( );
void r8ge_fss_new_test ( );
void r8ge_hilbert_test ( );
void r8ge_hilbert_inverse_test ( );
void r8ge_identity_new_test ( );
void r8ge_ilu_test ( );
void r8ge_indicator_test ( );
void r8ge_inverse_test ( );
void r8ge_ml_test ( );
void r8ge_mm_new_test ( );
void r8ge_mtm_new_test ( );
void r8ge_mtv_test ( );
void r8ge_mu_test ( );
void r8ge_mv_test ( );
void r8ge_plu_test ( );
void r8ge_poly_test ( );
void r8ge_print_test ( );
void r8ge_print_some_test ( );
void r8ge_random_test ( );
void r8ge_res_test ( );
void r8ge_sl_test ( );
void r8ge_sl_it_test ( );
void r8ge_to_r8vec_test ( );
void r8ge_transpose_new_test ( );
void r8ge_transpose_print_test ( );
void r8ge_transpose_print_some_test ( );
void r8ge_trf_test ( );
void r8ge_trs_test ( );
void r8ge_zeros_test ( );

void r8vec_dot_product_test ( );
void r8vec_indicator1_new_test ( );
void r8vec_norm_test ( );
void r8vec_norm_affine_test ( );
void r8vec_print_test ( );
void r8vec_print_some_test ( );
void r8vec_to_r8ge_test ( );
void r8vec_uniform_01_new_test ( );
void r8vec_zeros_new_test ( );

void r8vec2_print_test ( );
void r8vec2_print_some_test ( );

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
//    09 February 2016
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

  i4_log_10_test ( );
  i4_max_test ( );
  i4_min_test ( );
  i4_power_test ( );
  i4_uniform_ab_test ( );

  i4vec_print_test ( );

  r8_max_test ( );
  r8_sign_test ( );
  r8_uniform_01_test ( );
  r8_uniform_ab_test ( );

  r8ge_cg_test ( );
  r8ge_co_test ( );
  r8ge_copy_new_test ( );
  r8ge_det_test ( );
  r8ge_dif2_test ( );
  r8ge_dilu_test ( );
  r8ge_fa_test ( );
  r8ge_fs_new_test ( );
  r8ge_fss_new_test ( );
  r8ge_hilbert_test ( );
  r8ge_hilbert_inverse_test ( );
  r8ge_identity_new_test ( );
  r8ge_ilu_test ( );
  r8ge_indicator_test ( );
  r8ge_inverse_test ( );
  r8ge_ml_test ( );
  r8ge_mm_new_test ( );
  r8ge_mtm_new_test ( );
  r8ge_mtv_test ( );
  r8ge_mu_test ( );
  r8ge_mv_test ( );
  r8ge_plu_test ( );
  r8ge_poly_test ( );
  r8ge_print_test ( );
  r8ge_print_some_test ( );
  r8ge_random_test ( );
  r8ge_res_test ( );
  r8ge_sl_test ( );
  r8ge_sl_it_test ( );
  r8ge_to_r8vec_test ( );
  r8ge_transpose_new_test ( );
  r8ge_transpose_print_test ( );
  r8ge_transpose_print_some_test ( );
  r8ge_trf_test ( );
  r8ge_trs_test ( );
  r8ge_zeros_test ( );

  r8vec_dot_product_test ( );
  r8vec_indicator1_new_test ( );
  r8vec_norm_test ( );
  r8vec_norm_affine_test ( );
  r8vec_print_test ( );
  r8vec_print_some_test ( );
  r8vec_to_r8ge_test ( );
  r8vec_uniform_01_new_test ( );
  r8vec_zeros_new_test ( );

  r8vec2_print_test ( );
  r8vec2_print_some_test ( );
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

void i4_log_10_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_LOG_10_TEST tests I4_LOG_10.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    16 October 2006
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int x[13] = { 0, 1, 2, 3, 9, 10, 11, 99, 101, -1, -2, -3, -9 };

  cout << "\n";
  cout << "I4_LOG_10_TEST\n";
  cout << "  I4_LOG_10: whole part of log base 10,\n";
  cout << "\n";
  cout << "     X     I4_LOG_10(X)\n";
  cout << "\n";

  for ( i = 0; i < 13; i++ )
  {
    cout                                 << "  "
         << setw(6) << x[i]              << "  "
         << setw(6) << i4_log_10 ( x[i] ) << "\n";
  }

  return;
}
//****************************************************************************80

void i4_max_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_MAX_TEST tests I4_MAX.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 March 2015
//
//  Author:
//
//    John Burkardt
//
{
  int a;
  int b;
  int c;
  int i;
  int i4_hi;
  int i4_lo;
  int seed;

  cout << "\n";
  cout << "I4_MAX_TEST\n";
  cout << "  I4_MAX returns the maximum of two I4's.\n";
  cout << "\n";
  cout << "       A       B      C=I4_MAX(A,B)\n";
  cout << "\n";

  i4_lo = -100;
  i4_hi = +100;
  seed = 123456789;

  for ( i = 0; i < 10; i++ )
  {
    a = i4_uniform_ab ( i4_lo, i4_hi, seed );
    b = i4_uniform_ab ( i4_lo, i4_hi, seed );
    c = i4_max ( a, b );
    cout << "  " << setw(8) << a
         << "  " << setw(8) << b
         << "  " << setw(8) << c << "\n";
  }

  return;
}
//****************************************************************************80

void i4_min_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_MIN_TEST tests I4_MIN.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 March 2015
//
//  Author:
//
//    John Burkardt
//
{
  int a;
  int b;
  int c;
  int i;
  int i4_hi;
  int i4_lo;
  int seed;

  cout << "\n";
  cout << "I4_MIN_TEST\n";
  cout << "  I4_MIN returns the minimum of two I4's.\n";
  cout << "\n";
  cout << "       A       B      C=I4_MIN(A,B)\n";
  cout << "\n";

  i4_lo = -100;
  i4_hi = +100;
  seed = 123456789;

  for ( i = 0; i < 10; i++ )
  {
    a = i4_uniform_ab ( i4_lo, i4_hi, seed );
    b = i4_uniform_ab ( i4_lo, i4_hi, seed );
    c = i4_min ( a, b );
    cout << "  " << setw(8) << a
         << "  " << setw(8) << b
         << "  " << setw(8) << c << "\n";
  }

  return;
}
//****************************************************************************80

void i4_power_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_POWER_TEST tests I4_POWER.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 January 2016
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int i_test[7] = { 0, 1, 2, 3, 10, -1, -2 };
  int j;
  int j_test[7] = { 1, 2, 3, 3, 3, 4, 5 };
  int test;
  int test_num;

  test_num = 7;

  cout << "\n";
  cout << "I4_POWER_TEST\n";
  cout << "  I4_POWER computes I^J\n";
  cout << "\n";
  cout << "         I       J  I4_POWER(I,J)\n";
  cout << "\n";

  for ( test = 0; test < test_num; test++ )
  {
    i = i_test[test];
    j = j_test[test];
    cout << "  " << setw(8) << i
         << "  " << setw(8) << j
         << "  " << setw(8) << i4_power ( i, j ) << "\n";
  }

  return;
}
//****************************************************************************80

void i4_uniform_ab_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_UNIFORM_AB_TEST tests I4_UNIFORM_AB.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    27 October 2014
//
//  Author:
//
//    John Burkardt
//
{
  int a = -100;
  int b = 200;
  int i;
  int j;
  int seed = 123456789;

  cout << "\n";
  cout << "I4_UNIFORM_AB_TEST\n";
  cout << "  I4_UNIFORM_AB computes pseudorandom values\n";
  cout << "  in an interval [A,B].\n";

  cout << "\n";
  cout << "  The lower endpoint A = " << a << "\n";
  cout << "  The upper endpoint B = " << b << "\n";
  cout << "  The initial seed is " << seed << "\n";
  cout << "\n";

  for ( i = 1; i <= 20; i++ )
  {
    j = i4_uniform_ab ( a, b, seed );

    cout << "  " << setw(8) << i
         << "  " << setw(8) << j << "\n";
  }

  return;
}
//****************************************************************************80

void i4vec_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_PRINT_TEST tests I4VEC_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    31 October 2014
//
//  Author:
//
//    John Burkardt
//
{
  int n = 4;
  int v[4] = { 91, 92, 93, 94 };

  cout << "\n";
  cout << "I4VEC_PRINT_TEST\n";
  cout << "  I4VEC_PRINT prints an I4VEC\n";

  i4vec_print ( n, v, "  Here is the I4VEC:" );

  return;
}
//****************************************************************************80

void r8_max_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_MAX_TEST tests R8_MAX.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 March 2015
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double c;
  int i;
  double r8_hi;
  double r8_lo;
  int seed;

  cout << "\n";
  cout << "R8_MAX_TEST\n";
  cout << "  R8_MAX returns the maximum of two R8's.\n";
  cout << "\n";
  cout << "       A       B      C=R8_MAX(A,B)\n";
  cout << "\n";

  r8_lo = -5.0;
  r8_hi = +5.0;
  seed = 123456789;

  for ( i = 0; i < 10; i++ )
  {
    a = r8_uniform_ab ( r8_lo, r8_hi, seed );
    b = r8_uniform_ab ( r8_lo, r8_hi, seed );
    c = r8_max ( a, b );
    cout << "  " << setw(8) << a
         << "  " << setw(8) << b
         << "  " << setw(8) << c << "\n";
  }

  return;
# undef N
}
//****************************************************************************80

void r8_sign_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_SIGN_TEST tests R8_SIGN.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    28 September 2014
//
//  Author:
//
//    John Burkardt
//
{
  double r8;
  double r8_test[5] = { -1.25, -0.25, 0.0, +0.5, +9.0 };
  double s;
  int test;
  const int test_num = 5;

  cout << "\n";
  cout << "R8_SIGN_TEST\n";
  cout << "  R8_SIGN returns the sign of an R8.\n";
  cout << "\n";
  cout << "      R8      R8_SIGN(R8)\n";
  cout << "\n";

  for ( test = 0; test < test_num; test++ )
  {
    r8 = r8_test[test];
    s = r8_sign ( r8 );
    cout << setw(10) << r8 << "  "
         << setw(10) << s << "\n";
  }

  return;
}
//****************************************************************************80

void r8_uniform_01_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_UNIFORM_01_TEST tests R8_UNIFORM_01.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    12 September 2005
//
//  Author:
//
//    John Burkardt
//
{
# define N 10

  int i;
  int n;
  int seed = 123456789;
  double x[N];

  cout << "\n";
  cout << "R8_UNIFORM_01_TEST\n";
  cout << "  R8_UNIFORM_01 samples a uniform random distribution in [0,1].\n";
  cout << "  distributed random numbers.\n";
  cout << "  Using initial random number seed = " << seed << "\n";

  for ( i = 0; i < N; i++ )
  {
    x[i] = r8_uniform_01 ( seed );
  }

  cout << "\n";
  cout << "  First few values:\n";
  cout << "\n";
  for ( i = 0; i < 10; i++ )
  {
    cout << "  " << setw(6) << i
         << "  " << setw(14) << x[i] << "\n";
  }

  return;
# undef N
}
//****************************************************************************80

void r8_uniform_ab_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_UNIFORM_AB_TEST tests R8_UNIFORM_AB.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 April 2007
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double c;
  int i;
  int seed;

  b = 10.0;
  c = 25.0;
  seed = 17;

  cout << "\n";
  cout << "R8_UNIFORM_AB_TEST\n";
  cout << "  R8_UNIFORM_AB produces a random real in a given range.\n";
  cout << "\n";
  cout << "  Using range " << b << " <= A <= " << c << ".\n";
  cout << "\n";

  cout << "\n";
  cout << "      I       A\n";
  cout << "\n";
  for ( i = 0; i < 10; i++ )
  {
    a = r8_uniform_ab ( b, c, seed );
    cout << setw ( 6 )  << i << " "
         << setw ( 10 ) << a << "\n";
  }

  return;
}
//****************************************************************************80

void r8ge_cg_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_CG_TEST tests R8GE_CG.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 February 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *b;
  double e_norm;
  int i;
  int n;
  double *r;
  double r_norm;
  int seed;
  double *x1;
  double *x2;

  cout << "\n";
  cout << "R8GE_CG_TEST:\n";
  cout << "  R8GE_CG applies CG to an R8GE matrix.\n";

  n = 10;
//
//  Let A be the -1 2 -1 matrix.
//
  a = r8ge_dif2 ( n, n );
//
//  Choose a random solution.
//
  seed = 123456789;
  x1 = r8vec_uniform_01_new ( n, seed );
//
//  Compute the corresponding right hand side.
//
  b = r8ge_mv ( n, n, a, x1 );
//
//  Call the CG routine.
//
  x2 = new double[n];
  for ( i = 0; i < n; i++ )
  {
    x2[i] = 1.0;
  }
  r8ge_cg ( n, a, b, x2 );
//
//  Compute the residual.
//
  r = r8ge_res ( n, n, a, x2, b );
  r_norm = r8vec_norm ( n, r );
//
//  Compute the error.
//
  e_norm = r8vec_norm_affine ( n, x1, x2 );
//
//  Report.
//
  cout << "\n";
  cout << "  Number of variables N = " << n << "\n";
  cout << "  Norm of residual ||Ax-b|| = " << r_norm << "\n";
  cout << "  Norm of error ||x1-x2|| = " << e_norm << "\n";
//
//  Free memory.
//
  delete [] a;
  delete [] b;
  delete [] r;
  delete [] x1;
  delete [] x2;

  return;
}
//****************************************************************************80

void r8ge_co_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_CO_TEST tests R8GE_CO.
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
# define N 4

  double a[N*N];
  double *a_inverse;
  double a_inverse_norm_l1;
  double a_lu[N*N];
  double a_norm_l1;
  double cond_l1;
  int i;
  int info;
  int j;
  int pivot[N];
  double rcond;
  double row_sum;
  double x = 2.0;
  double y = 3.0;

  cout << "\n";
  cout << "R8GE_CO_TEST\n";
  cout << "  For a matrix in general storage,\n";
  cout << "  R8GE_CO estimates the condition number.\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
//
//  Set the matrix.
//
  for ( i = 0; i < N; i++ )
  {
    for ( j = 0; j < N; j++ )
    {
      if ( i == j )
      {
        a[i+j*N] = x + y;
      }
      else
      {
        a[i+j*N] = y;
      }
    }
  }

  a_norm_l1 = 0.0;
  for ( j = 0; j < N; j++ )
  {
    row_sum = 0.0;
    for ( i = 0; i < N; i++ )
    {
      row_sum = row_sum + fabs ( a[i+j*N] );
    }
    a_norm_l1 = r8_max ( a_norm_l1, row_sum );
  }

  for ( j = 0; j < N; j++ )
  {
    for ( i = 0; i < N; i++ )
    {
      a_lu[i+j*N] = a[i+j*N];
    }
  }

  info = r8ge_fa ( N, a_lu, pivot );

  a_inverse = r8ge_inverse ( N, a_lu, pivot );

  a_inverse_norm_l1 = 0.0;
  for ( j = 0; j < N; j++ )
  {
    row_sum = 0.0;
    for ( i = 0; i < N; i++ )
    {
      row_sum = row_sum + fabs ( a_inverse[i+j*N] );
    }
    a_inverse_norm_l1 = r8_max ( a_inverse_norm_l1, row_sum );
  }

  cond_l1 = a_norm_l1 * a_inverse_norm_l1;

  cout << "\n";
  cout << "  The L1 condition number is " << cond_l1 << "\n";
//
//  Factor the matrix.
//
  rcond = r8ge_co ( N, a, pivot );

  cout << "\n";
  cout << "  The R8GE_CO estimate is     " << 1.0 / rcond << "\n";

  delete [] a_inverse;

  return;
# undef N
}
//****************************************************************************80

void r8ge_copy_new_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_COPY_NEW_TEST tests R8GE_COPY_NEW.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 February 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *b;
  int m = 7;
  int n = 5;

  cout << "\n";
  cout << "R8GE_COPY_NEW_TEST\n";
  cout << "  R8GE_COPY_NEW makes a copy of an R8GE.\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << m << "\n";
  cout << "  Matrix columns N = " << n << "\n";

  a = r8ge_indicator ( m, n );

  r8ge_print ( m, n, a, "  The matrix A:" );

  b = r8ge_copy_new ( m, n, a );

  r8ge_print ( m, n, b, "  The copied matrix B:" );

  delete [] a;
  delete [] b;

  return;
}
//****************************************************************************80

void r8ge_det_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_DET_TEST tests R8GE_DET.
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
# define N 4

  double a[N*N];
  double det;
  double exact;
  int i;
  int info;
  int j;
  int pivot[N];
  double x = 2.0;
  double y = 3.0;

  cout << "\n";
  cout << "R8GE_DET_TEST\n";
  cout << "  R8GE_DET, determinant of an R8GE matrix.\n";
//
//  Set the matrix.
//
  for ( j = 0; j < N; j++ )
  {
    for ( i = 0; i < N; i++ )
    {
      if ( i == j )
      {
        a[i+j*N] = x + y;
      }
      else
      {
        a[i+j*N] = y;
      }
    }
  }
//
//  Factor the matrix.
//
  info = r8ge_fa ( N, a, pivot );
//
//  Compute the determinant.
//
  det = r8ge_det ( N, a, pivot );
  exact = pow ( x, N - 1 ) * ( x + ( ( double ) N ) * y );

  cout << "\n";
  cout << "  R8GE_DET computes the determinant = " << det   << "\n";
  cout << "  Correct determinant =               " << exact << "\n";

  return;
# undef N
}
//****************************************************************************80

void r8ge_dif2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_DIF2_TEST tests R8GE_DIF2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 February 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int m = 7;
  int n = 5;

  cout << "\n";
  cout << "R8GE_DIF2_TEST\n";
  cout << "  R8GE_DIF2 sets up a second difference matrix.\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << m << "\n";
  cout << "  Matrix columns N = " << n << "\n";

  a = r8ge_dif2 ( m, n );

  r8ge_print ( m, n, a, "  The second difference matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8ge_dilu_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_DILU_TEST tests R8GE_DILU.
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
# define NCOL 3
# define NROW 3
# define N NROW * NCOL
# define M N

  double a[M*N];
  double *d;
  int i;
  int j;
  int k;

  cout << "\n";
  cout << "R89GE_DILU_TEST\n";
  cout << "  R8GE_DILU returns the DILU factors of an R8GE matrix.\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << M << "\n";
  cout << "  Matrix columns N = " << N << "\n";

  for ( i = 1; i <= NROW * NCOL; i++ )
  {
    for ( j = 1; j <= NROW * NCOL; j++ )
    {
      if ( i == j )
      {
        a[i-1+(j-1)*M] = 4.0;
      }
      else if ( 
        i == j + 1 ||
        i == j - 1 ||
        i == j + NROW ||
        i == j - NROW )
      {
        a[i-1+(j-1)*M] = -1.0;
      }
      else
      {
        a[i-1+(j-1)*M] = 0.0;
      }
    }
  }

  r8ge_print ( M, N, a, "  Matrix A:" );
//
//  Compute the incomplete LU factorization.
//
  d = r8ge_dilu ( M, N, a );

  r8vec_print ( M, d, "  DILU factor of A:" );

  delete [] d;

  return;
# undef M
# undef N
# undef NCOL
# undef NROW
}
//****************************************************************************80

void r8ge_fa_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_FA_TEST tests R8GE_FA.
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
# define N 5

  double *a;
  double *b;
  int i;
  int info;
  int job;
  int pivot[N];
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8GE_FA_TEST\n";
  cout << "  R8GE_FA factors a general linear system so that it can be\n";
  cout << "  solved by R8GE_SL.\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
//
//  Set the matrix.
//
  a = r8ge_random ( N, N, seed );

  r8ge_print ( N, N, a, "  Random matrix A:" );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( N );
//
//  Compute the corresponding right hand side.
//
  b = r8ge_mv ( N, N, a, x );
//
//  Factor the matrix.
//
  info = r8ge_fa ( N, a, pivot );

  if ( info != 0 )
  {
    cout << "\n";
    cout << "R8GE_FA_TEST\n";
    cout << "  Fatal error!\n";
    cout << "  R8GE_FA declares the matrix is singular!\n";
    cout << "  The value of INFO is " << info << "\n";
    return;
  }
//
//  Solve the linear system.
//
  job = 0;
  delete [] x;
  x = r8ge_sl_new ( N, a, pivot, b, job );

  r8vec_print ( N, x, "  Solution:" );
//
//  Set the desired solution.
//
  for ( i = 0; i < N; i++ )
  {
    x[i] = 1.0;
  }
//
//  Compute the corresponding right hand side.
//
  job = 0;
  delete [] b;
  b = r8ge_ml ( N, a, pivot, x, job );
//
//  Solve the system
//
  job = 0;
  delete [] x;
  x = r8ge_sl_new ( N, a, pivot, b, job );

  r8vec_print ( N, x, "  Solution:" );
//
//  Set the desired solution.
//
  delete [] x;
  x = r8vec_indicator1_new ( N );
//
//  Compute the corresponding right hand side.
//
  job = 1;
  delete [] b;
  b = r8ge_ml ( N, a, pivot, x, job );
//
//  Solve the system
//
  job = 1;
  delete [] x;
  x = r8ge_sl_new ( N, a, pivot, b, job );

  r8vec_print ( N, x, "  Solution of transposed system:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
# undef N
}
//****************************************************************************80

void r8ge_hilbert_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_HILBERT_TEST tests R8GE_HILBERT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 February 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int m = 7;
  int n = 5;

  cout << "\n";
  cout << "R8GE_HILBERT_TEST\n";
  cout << "  R8GE_HILBERT sets up a Hilbert matrix.\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << m << "\n";
  cout << "  Matrix columns N = " << n << "\n";

  a = r8ge_hilbert ( m, n );

  r8ge_print ( m, n, a, "  The Hilbert matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8ge_hilbert_inverse_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_HILBERT_INVERSE_TEST tests R8GE_HILBERT_INVERSE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 February 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *b;
  double *c;
  int m = 4;
  int n = 4;

  cout << "\n";
  cout << "R8GE_HILBERT_INVERSE_TEST\n";
  cout << "  R8GE_HILBERT_INVERSE sets up the Hilbert matrix inverse.\n";

  a = r8ge_hilbert ( n, n );
  r8ge_print ( n, n, a, "  The Hilbert matrix A:" );

  b = r8ge_hilbert_inverse ( n );
  r8ge_print ( n, n, b, "  The inverse Hilbert matrix B:" );

  c = r8ge_mm_new ( n, n, n, a, b );
  r8ge_print ( n, n, c, "  C = A * B:" );

  delete [] a;
  delete [] b;
  delete [] c;

  return;
}
//****************************************************************************80

void r8ge_identity_new_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_IDENTITY_NEW_TEST tests R8GE_IDENTITY_NEW.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 February 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int m = 7;
  int n = 5;

  cout << "\n";
  cout << "R8GE_IDENTITY_NEW_TEST\n";
  cout << "  R8GE_IDENTITY_NEW sets up an identity matrix.\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << m << "\n";
  cout << "  Matrix columns N = " << n << "\n";

  a = r8ge_identity_new ( m, n );

  r8ge_print ( m, n, a, "  The identity matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8ge_ilu_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_ILU_TEST tests R8GE_ILU.
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
# define NCOL 3
# define NROW 3
# define N NROW * NCOL
# define M N

  double a[M*N];
  int i;
  int j;
  int k;
  double l[M*M];
  double lu[M*N];
  double u[M*N];

  cout << "\n";
  cout << "R8GE_ILU_TEST\n";
  cout << "  R8GE_ILU returns the ILU factors of an R8GE matrix.\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << M << "\n";
  cout << "  Matrix columns N = " << N << "\n";

  for ( i = 0; i < NROW * NCOL; i++ )
  {
    for ( j = 0; j < NROW * NCOL; j++ )
    {
      if ( i == j )
      {
        a[i+j*M] = 4.0;
      }
      else if ( 
        i == j + 1 | 
        i == j - 1 | 
        i == j + NROW | 
        i == j - NROW 
      )
      {
        a[i+j*M] = -1.0;
      }
      else
      {
        a[i+j*M] = 0.0;
      }
    }
  }

  r8ge_print ( M, N, a, "  Matrix A:" );
//
//  Compute the incomplete LU factorization.
//
  r8ge_ilu ( M, N, a, l, u );

  r8ge_print ( M, M, l, "  Factor L:" );

  r8ge_print ( M, N, u, "  Factor U:" );

  for ( j = 0; j < N; j++ )
  {
    for ( i = 0; i < M; i++ )
    {
      lu[i+j*M] = 0.0;
      for ( k = 0; k < M; k++ )
      {
        lu[i+j*M] = lu[i+j*M] + l[i+k*M] * u[k+j*M];
      }
    }
  }

  r8ge_print ( M, N, lu, "  Product L*U:" );

  return;
# undef M
# undef N
# undef NCOL
# undef NROW
}
//****************************************************************************80

void r8ge_indicator_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_INDICATOR_TEST tests R8GE_INDICATOR.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    31 August 2006
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int m = 7;
  int n = 5;

  cout << "\n";
  cout << "R8GE_INDICATOR_TEST\n";
  cout << "  R8GE_INDICATOR sets up an indicator matrix.\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << m << "\n";
  cout << "  Matrix columns N = " << n << "\n";

  a = r8ge_indicator ( m, n );

  r8ge_print ( m, n, a, "  The R8GE indicator matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8ge_fs_new_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_FS_NEW_TEST tests R8GE_FS_NEW.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    31 August 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 10

  double *a;
  double *b;
  int i;
  int info;
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8GE_FS_NEW_TESST\n";
  cout << "  R8GE_FS_NEW factors and solves a linear system.\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
//
//  Set the matrix.
//
  a = r8ge_random ( N, N, seed );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( N );
//
//  Compute the corresponding right hand side.
//
  b = r8ge_mv ( N, N, a, x );
//
//  Factor and solve the system.
//
  delete [] x;
  x = r8ge_fs_new ( N, a, b );
  
  if ( x == NULL )
  {
    cout << "\n";
    cout << "R8GE_FS_NEW_TEST - Fatal error!\n";
    cout << "  R8GE_FS_NEW reports the matrix is singular.\n";
    return;
  }
  r8vec_print ( N, x, "  Solution:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
# undef N
}
//****************************************************************************80

void r8ge_fss_new_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_FSS_NEW_TEST tests R8GE_FSS_NEW.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    23 June 209
//
//  Author:
//
//    John Burkardt
//
{
# define N 10
# define NB 3

  double *a;
  double *b;
  int i;
  int info;
  int j;
  int k;
  int n = N;
  int nb = NB;
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8GE_FSS_NEW_TEST\n";
  cout << "  R8GE_FSS_NEW factors and solves multiple linear systems.\n";
  cout << "\n";
  cout << "  Matrix order N = " << n << "\n";
  cout << "  Number of systems NB = " << nb << "\n";
//
//  Set the matrix.
//
  a = r8ge_random ( n, n, seed );
//
//  Set the desired solutions.
//
  b = new double[n * nb];

  x = new double[n];

  for ( i = 0; i < n; i++ )
  {
    x[i] = 1.0;
  }
  k = 0;
  for ( i = 0; i < n; i++ )
  {
    b[i+k*n] = 0.0;
    for ( j = 0; j < n; j++ )
    {
      b[i+k*n] = b[i+k*n] + a[i+j*n] * x[j];
    }
  }
  for ( i = 0; i < n; i++ )
  {
    x[i] = ( double ) ( i + 1 );
  }
  k = 1;
  for ( i = 0; i < n; i++ )
  {
    b[i+k*n] = 0.0;
    for ( j = 0; j < n; j++ )
    {
      b[i+k*n] = b[i+k*n] + a[i+j*n] * x[j];
    }
  }
  for ( i = 0; i < n; i++ )
  {
    x[i] = ( i % 3 ) + 1;
  }
  k = 2;
  for ( i = 0; i < n; i++ )
  {
    b[i+k*n] = 0.0;
    for ( j = 0; j < n; j++ )
    {
      b[i+k*n] = b[i+k*n] + a[i+j*n] * x[j];
    }
  }
//
//  Factor and solve the system.
//
  delete [] x;

  x = r8ge_fss_new ( n, a, nb, b );
  
  r8ge_print ( n, nb, x, "  Solutions:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
# undef N
# undef NB
}
//****************************************************************************80

void r8ge_inverse_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_INVERSE_TEST tests R8GE_INVERSE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    31 August 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 4

  double a[N*N];
  double a_lu[N*N];
  double *a_inverse;
  double *c;
  int i;
  int info;
  int j;
  int pivot[N];
  double x = 2.0;
  double y = 3.0;

  cout << "\n";
  cout << "R8GE_INVERSE_TEST\n";
  cout << "  R8GE_INVERSE inverts an R8GE matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
//
//  Set the matrix.
//
  for ( j = 0; j < N; j++ )
  {
    for ( i = 0; i < N; i++ )
    {
      if ( i == j )
      {
        a[i+j*N] = x + y;
      }
      else
      {
        a[i+j*N] = y;
      }
    }
  }

  r8ge_print ( N, N, a, "  Matrix A:" );
//
//  Factor and invert the matrix.
//
  for ( j = 0; j < N; j++ )
  {
    for ( i = 0; i < N; i++ )
    {
      a_lu[i+j*N] = a[i+j*N];
    }
  }

  info = r8ge_fa ( N, a_lu, pivot );

  if ( info != 0 )
  {
    cout << "\n";
    cout << "R8GE_INVERSE_TEST - Fatal error!\n";
    cout << "  R8GE_FA reports the matrix is singular.\n";
    return;
  }
  a_inverse = r8ge_inverse ( N, a_lu, pivot );

  r8ge_print ( N, N, a_inverse, "  Inverse matrix B:" );
//
//  Check.
//
  c = r8ge_mm_new ( N, N, N, a, a_inverse );

  r8ge_print ( N, N, c, "  Product matrix:" );

  delete [] a_inverse;
  delete [] c;

  return;
# undef N
}
//****************************************************************************80

void r8ge_ml_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_ML_TEST tests R8GE_ML.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    31 August 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 10

  double *a;
  double *b;
  double *b2;
  int info;
  int i;
  int job;
  int pivot[N];
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8GE_ML_TEST\n";
  cout << "  R8GE_ML computes A*x or A'*X\n";
  cout << "  where A has been factored by R8GE_FA.\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";

  for ( job = 0; job <= 1; job++ )
  {
//
//  Set the matrix.
//
    a = r8ge_random ( N, N, seed );
//
//  Set the desired solution.
//
    x = r8vec_indicator1_new ( N );
//
//  Compute the corresponding right hand side.
//
    if ( job == 0 )
    {
      b = r8ge_mv ( N, N, a, x );
    }
    else
    {
      b = r8ge_mtv ( N, N, a, x );
    }
//
//  Factor the matrix.
//
    info = r8ge_fa ( N, a, pivot );

    if ( info != 0 )
    {
      cout << "\n";
      cout << "R8GE_ML_TEST\n";
      cout << "  Fatal error!\n";
      cout << "  R8GE_FA declares the matrix is singular!\n";
      cout << "  The value of INFO is " << info << "\n";
      continue;
    }
//
//  Now multiply factored matrix times solution to get right hand side again.
//
    b2 = r8ge_ml ( N, a, pivot, x, job );

    if ( job == 0 )
    {
      r8vec2_print_some ( N, b, b2, 10, "  A*x and PLU*x" );
    }
    else
    {
      r8vec2_print_some ( N, b, b2, 10, "  A'*x and (PLU)'*x" );
    }

    delete [] a;
    delete [] b;
    delete [] b2;
    delete [] x;
  }

  return;
# undef N
}
//****************************************************************************80

void r8ge_mm_new_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_MM_NEW_TEST tests R8GE_MM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 February 2016
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
  int j;
  int n1 = 4;
  int n2 = 3;
  int n3 = 4;

  cout << "\n";
  cout << "R8GE_MM_NEW_TEST\n";
  cout << "  R8GE_MM_NEW computes a matrix-matrix product C = A * B.\n";

  a = new double[n1*n2];

  for ( i = 0; i < n1; i++ )
  {
    for ( j = 0; j < n2; j++ )
    {
      if ( j == 0 )
      {
        a[i+j*n1] = 1.0;
      }
      else if ( i == 0 )
      {
        a[i+j*n1] = 0.0;
      }
      else
      {
        a[i+j*n1] = a[i-1+(j-1)*n1] + a[i-1+j*n1];
      }
    }
  }

  b = r8ge_transpose_new ( n1, n2, a );

  c = r8ge_mm_new ( n1, n2, n3, a, b );

  r8ge_print ( n1, n2, a, "  A:" );
  r8ge_print ( n2, n3, b, "  B:" );
  r8ge_print ( n1, n3, c, "  C = A*B:" );

  delete [] a;
  delete [] b;
  delete [] c;

  return;
}
//****************************************************************************80

void r8ge_mtm_new_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_MTM_NEW_TEST tests R8GE_MTM_NEW.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 February 2016
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
  int j;
  int n1 = 4;
  int n2 = 3;

  cout << "\n";
  cout << "R8GE_MTM_NEW_TEST\n";
  cout << "  R8GE_MTM_NEW computes a matrix-transpose-matrix product C = A' * B.\n";

  a = new double[n1*n2];

  for ( i = 0; i < n1; i++ )
  {
    for ( j = 0; j < n2; j++ )
    {
      if ( j == 0 )
      {
        a[i+j*n1] = 1.0;
      }
      else if ( i == 0 )
      {
        a[i+j*n1] = 0.0;
      }
      else
      {
        a[i+j*n1] = a[i-1+(j-1)*n1] + a[i-1+j*n1];
      }
    }
  }

  b = r8ge_copy_new ( n1, n2, a );

  c = r8ge_mtm_new ( n2, n1, n2, a, b );

  r8ge_print ( n1, n2, a, "  A:" );
  r8ge_print ( n1, n2, b, "  B:" );
  r8ge_print ( n2, n2, c, "  C = A'*B:" );

  delete [] a;
  delete [] b;
  delete [] c;

  return;
}
//****************************************************************************80

void r8ge_mtv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_MTV_TEST tests R8GE_MTV
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 February 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *b;
  int m = 5;
  int n = 4;
  double *x;

  cout << "\n";
  cout << "R8GE_MTV_TEST\n";
  cout << "  R8GE_MTV computes a product b=A'*x for an R8GE matrix.\n";

  a = r8ge_indicator ( m, n );
  r8ge_print ( m, n, a, "  The R8GE matrix A:" );

  x = r8vec_indicator1_new ( m );
  r8vec_print ( m, x, "  Vector x:" );

  b = r8ge_mtv ( m, n, a, x );
  r8vec_print ( n, b, "  Vector b = A'*x:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

void r8ge_mu_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_MU_TEST tests R8GE_MU.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    31 August 2006
//
//  Author:
//
//    John Burkardt
//
{
# define M 5
# define N 3

  double *amn;
  double *anm;
  double *bm;
  double *bn;
  double *cm;
  double *cn;
  int info;
  int i;
  int job;
  int pivot[M+N];
  int seed = 123456789;
  char trans;
  double *xm;
  double *xn;

  cout << "\n";
  cout << "R8GE_MU_TEST\n";
  cout << "  R8GE_MU computes A*x or A'*X\n";
  cout << "  where A has been factored by R8GE_TRF.\n";
//
//  First test.
//  A is 5 x 3, and we compute A * x.
//
  cout << "\n";
  cout << "  Matrix rows M =    " << M << "\n";
  cout << "  Matrix columns N = " << N << "\n";

  job = 0;
  trans = 'N';

  amn = r8ge_random ( M, N, seed );
  xn = r8vec_indicator1_new ( N );
  cm = r8ge_mv ( M, N, amn, xn );

  info = r8ge_trf ( M, N, amn, pivot );

  if ( info != 0 )
  {
    cout << "\n";
    cout << "R8GE_MU_TEST - Fatal error!\n";
    cout << "  R8GE_TRF declares the matrix is singular!\n";
    cout << "  The value of INFO is " << info << "\n";
    return;
  }

  bm = r8ge_mu ( M, N, amn, trans, pivot, xn );

  r8vec2_print_some ( M, cm, bm, 10, "  A*x and PLU*x" );

  delete [] bm;
  delete [] cm;
  delete [] xn;
  delete [] amn;
//
//  Second test.
//  A is 5 x 3, and we compute A' * x.
//
  cout << "\n";
  cout << "  Matrix rows M =    " << M << "\n";
  cout << "  Matrix columns N = " << N << "\n";

  job = 1;
  trans = 'T';

  amn = r8ge_random ( M, N, seed );

  xm = r8vec_indicator1_new ( M );

  cn = r8ge_mtv ( M, N, amn, xm );

  info = r8ge_trf ( M, N, amn, pivot );

  if ( info != 0 )
  {
    cout << "\n";
    cout << "R8GE_MU_TEST - Fatal error!\n";
    cout << "  R8GE_TRF declares the matrix is singular!\n";
    cout << "  The value of INFO is " << info << "\n";
    return;
  }

  bn = r8ge_mu ( M, N, amn, trans, pivot, xm );

  r8vec2_print_some ( N, cn, bn, 10, "  A'*x and (PLU)'*x" );

  delete [] bn;
  delete [] cn;
  delete [] xm;
  delete [] amn;
//
//  Third test.
//  A is 3 x 5, and we compute A * x.
//
  cout << "\n";
  cout << "  Matrix rows M =    " << N << "\n";
  cout << "  Matrix columns N = " << M << "\n";

  job = 0;
  trans = 'N';

  anm = r8ge_random ( N, M, seed );

  xm = r8vec_indicator1_new ( M );
  cn = r8ge_mv ( N, M, anm, xm );
 
  info = r8ge_trf ( N, M, anm, pivot );

  if ( info != 0 )
  {
    cout << "\n";
    cout << "R8GE_MU_TEST - Fatal error!\n";
    cout << "  R8GE_TRF declares the matrix is singular!\n";
    cout << "  The value of INFO is " << info << "\n";
    return;
  }

  bn = r8ge_mu ( N, M, anm, trans, pivot, xm );

  r8vec2_print_some ( N, cn, bn, 10, "  A*x and PLU*x" );

  delete [] bn;
  delete [] cn;
  delete [] xm;
  delete [] anm;
//
//  Fourth test.
//  A is 3 x 5, and we compute A' * x.
//
  cout << "\n";
  cout << "  Matrix rows M =    " << N << "\n";
  cout << "  Matrix columns N = " << M << "\n";

  job = 1;
  trans = 'T';

  anm = r8ge_random ( N, M, seed );

  xn = r8vec_indicator1_new ( N );
  cm = r8ge_mtv ( N, M, anm, xn );

  info = r8ge_trf ( N, M, anm, pivot );

  if ( info != 0 )
  {
    cout << "\n";
    cout << "R8GE_MU_TEST - Fatal error!\n";
    cout << "  R8GE_TRF declares the matrix is singular!\n";
    cout << "  The value of INFO is " << info << "\n";
    return;
  }

  bm = r8ge_mu ( N, M, anm, trans, pivot, xn );

  r8vec2_print_some ( M, cm, bm, 10, "  A'*x and (PLU)'*x" );

  delete [] bm;
  delete [] cm;
  delete [] xn;
  delete [] anm;

  return;
# undef M
# undef N
}
//****************************************************************************80

void r8ge_mv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_MV_TEST tests R8GE_MV
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 February 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *b;
  int m = 5;
  int n = 4;
  double *x;

  cout << "\n";
  cout << "R8GE_MV_TEST\n";
  cout << "  R8GE_MV computes a product b=A*x for an R8GE matrix.\n";

  a = r8ge_indicator ( m, n );
  r8ge_print ( m, n, a, "  The R8GE matrix A:" );

  x = r8vec_indicator1_new ( n );
  r8vec_print ( n, x, "  Vector x:" );

  b = r8ge_mv ( m, n, a, x );
  r8vec_print ( m, b, "  Vector b = A*x:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
}
//****************************************************************************80

void r8ge_plu_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_PLU_TEST tests R8GE_PLU.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    31 August 2006
//
//  Author:
//
//    John Burkardt
//
{
# define M 5
# define N 4

  double *a;
  int i;
  int j;
  int k;
  double l[M*M];
  double lu[M*N];
  double p[M*M];
  double plu[M*N];
  int seed;
  double u[M*N];

  cout << "\n";
  cout << "R8GE_PLU_TEST\n";
  cout << "  For a matrix in general storage,\n";
  cout << "  R8GE_PLU returns the PLU factors of a matrix.\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << M << "\n";
  cout << "  Matrix columns N = " << N << "\n";

  seed = 123456789;

  a = r8ge_random ( M, N, seed );

  r8ge_print ( M, N, a, "  Matrix A:" );
//
//  Compute the PLU factors.
//
  r8ge_plu ( M, N, a, p, l, u );

  r8ge_print ( M, M, p, "  Factor P:" );

  r8ge_print ( M, M, l, "  Factor L:" );

  r8ge_print ( M, N, u, "  Factor U:" );

  for ( i = 0; i < M; i++ )
  {
    for ( j = 0; j < N; j++ )
    {
      lu[i+j*M] = 0.0;
      for ( k = 0; k < M; k++ )
      {
        lu[i+j*M] = lu[i+j*M] + l[i+k*M] * u[k+j*M];
      }
    }
  }

  for ( i = 0; i < M; i++ )
  {
    for ( j = 0; j < N; j++ )
    {
      plu[i+j*M] = 0.0;
      for ( k = 0; k < M; k++ )
      {
        plu[i+j*M] = plu[i+j*M] + p[i+k*M] * lu[k+j*M];
      }
    }
  }
  r8ge_print ( M, N, plu, "  Product P*L*U:" );

  delete [] a;

  return;
# undef M
# undef N
}
//****************************************************************************80

void r8ge_poly_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_POLY_TEST tests R8GE_POLY.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    31 August 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 12

  double a[N*N];
  int i;
  int j;
  double *p;
  double p_true[N+1] = {   
         1.0,    -23.0,    231.0,  -1330.0,    4845.0, 
    -11628.0,  18564.0, -19448.0,  12870.0,   -5005.0, 
      1001.0,    -78.0,      1.0 };

  cout << "\n";
  cout << "R8GE_POLY_TEST\n";
  cout << "  R8GE_POLY computes the characteristic polynomial\n";
  cout << "  for a matrix in general storage.\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
//
//  Set the matrix.
//
  for ( i = 0; i < N; i++ )
  {
    for ( j = 0; j < N; j++ )
    {
      a[i+j*N] = ( double ) i4_min ( i + 1, j + 1 );
    }
  }
//
//  Get the characteristic polynomial.
//
  p = r8ge_poly ( N, a );
//
//  Compare.
//
  r8vec2_print_some ( N+1, p, p_true, 10, "I, P(I), True P(I)" );

  delete [] p;

  return;
# undef N
}
//****************************************************************************80

void r8ge_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_PRINT_TEST tests R8GE_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    31 August 2014
//
//  Author:
//
//    John Burkardt
//
{
# define M 6
# define N 4

  double a[M*N];
  int i;
  int j;
  int m = M;
  int n = N;

  cout << "\n";
  cout << "R8GE_PRINT_TEST\n";
  cout << "  R8GE_PRINT prints an R8GE.\n";

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < m; i++ )
    {
      a[i+j*m] = ( double ) ( ( i + 1 ) * 10 + ( j + 1 ) );
    }
  }
  r8ge_print ( m, n, a, "  The R8GE:" );

  return;
# undef M
# undef N
}
//****************************************************************************80

void r8ge_print_some_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_PRINT_SOME_TEST tests R8GE_PRINT_SOME.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    31 August 2014
//
//  Author:
//
//    John Burkardt
//
{
# define M 6
# define N 4

  double a[M*N];
  int i;
  int j;
  int m = M;
  int n = N;

  cout << "\n";
  cout << "R8GE_PRINT_SOME_TEST\n";
  cout << "  R8GE_PRINT_SOME prints some of an R8GE.\n";

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < m; i++ )
    {
      a[i+j*m] = ( double ) ( ( i + 1 ) * 10 + ( j + 1 ) );
    }
  }
  r8ge_print_some ( m, n, a, 2, 1, 4, 2, "  The R8GE, rows 2:4, cols 1:2:" );

  return;
# undef M
# undef N
}
//****************************************************************************80

void r8ge_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_RANDOM_TEST tests R8GE_RANDOM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 February 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int m = 7;
  int n = 5;
  int seed;

  cout << "\n";
  cout << "R8GE_RANDOM_TEST\n";
  cout << "  R8GE_RANDOM sets up a random matrix.\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << m << "\n";
  cout << "  Matrix columns N = " << n << "\n";

  seed = 123456789;
  a = r8ge_random ( m, n, seed );

  r8ge_print ( m, n, a, "  A random matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8ge_res_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_RES_TEST tests R8GE_RES.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 February 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *b;
  int i;
  int m;
  int n;
  double *r;
  int seed;
  double *x;

  cout << "\n";
  cout << "R8GE_RES_TEST\n";
  cout << "  R8GE_RES computes b-A*x, where A is an R8GE matrix.\n";
  cout << "  We check three cases, M<N, M=N, M>N.\n";

  for ( i = 1; i <= 3; i++ )
  {
    if ( i == 1 )
    {
      m = 3;
      n = 5;
    }
    else if ( i == 2 )
    {
      m = 5;
      n = 5;
    }
    else if ( i == 3 )
    {
      m = 5;
      n = 3;
    }

    seed = 123456789;
    a = r8ge_random ( m, n, seed );
    x = r8vec_indicator1_new ( n );
    b = r8ge_mv ( m, n, a, x );
    r = r8ge_res ( m, n, a, x, b );
    r8vec_print ( m, r, "  Residual A*x-b:" );

    delete [] a;
    delete [] b;
    delete [] r;
    delete [] x;
  }

  return;
}
//****************************************************************************80

void r8ge_sl_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_SL_TEST tests R8GE_SL;
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
# define N 5

  double *a;
  double *b;
  int i;
  int info;
  int job;
  int pivot[N];
  int seed = 123456789;
  double *x;

  cout << "\n";
  cout << "R8GE_SL_TEST\n";
  cout << "  R8GE_SL solves a linear system factored by R8GE_FA.\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
//
//  Set the matrix.
//
  a = r8ge_random ( N, N, seed );

  r8ge_print ( N, N, a, "  Random matrix A:" );
//
//  Set the desired solution.
//
  x = r8vec_indicator1_new ( N );
//
//  Compute the corresponding right hand side.
//
  b = r8ge_mv ( N, N, a, x );
//
//  Factor the matrix.
//
  info = r8ge_fa ( N, a, pivot );

  if ( info != 0 )
  {
    cout << "\n";
    cout << "R8GE_SL_TEST\n";
    cout << "  Fatal error!\n";
    cout << "  R8GE_FA declares the matrix is singular!\n";
    cout << "  The value of INFO is " << info << "\n";
    return;
  }
//
//  Solve the linear system.
//
  job = 0;
  delete [] x;
  x = r8ge_sl_new ( N, a, pivot, b, job );

  r8vec_print ( N, x, "  Solution:" );
//
//  Set the desired solution.
//
  for ( i = 0; i < N; i++ )
  {
    x[i] = 1.0;
  }
//
//  Compute the corresponding right hand side.
//
  job = 0;
  delete [] b;
  b = r8ge_ml ( N, a, pivot, x, job );
//
//  Solve the system
//
  job = 0;
  delete [] x;
  x = r8ge_sl_new ( N, a, pivot, b, job );

  r8vec_print ( N, x, "  Solution:" );
//
//  Set the desired solution.
//
  delete [] x;
  x = r8vec_indicator1_new ( N );
//
//  Compute the corresponding right hand side.
//
  job = 1;
  delete [] b;
  b = r8ge_ml ( N, a, pivot, x, job );
//
//  Solve the system
//
  job = 1;
  delete [] x;
  x = r8ge_sl_new ( N, a, pivot, b, job );

  r8vec_print ( N, x, "  Solution of transposed system:" );

  delete [] a;
  delete [] b;
  delete [] x;

  return;
# undef N
}
//****************************************************************************80

void r8ge_sl_it_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_SL_IT_TEST tests R8GE_SL_IT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    31 August 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 6

  double *a;
  double a_lu[N*N];
  double b[N];
  int i;
  int info;
  int j;
  int job;
  int pivot[N];
  double *r;
  double *x;
  double *x_new;

  cout << "\n";
  cout << "R8GE_SL_IT_TEST\n";
  cout << "  R8GE_SL_IT applies one step of iterative \n";
  cout << "  refinement to an R8GE_SL solution, for an R8GE matrix.\n";
  cout << "\n";
  cout << "  Matrix order N = " << N << "\n";
//
//  Set the coefficient matrix.
//
  a = r8ge_hilbert_inverse ( N );
//
//  Set the right hand side b.
//
  for ( i = 0; i < N-1; i++ )
  {
    b[i] = 0.0;
  }
  b[N-1] = 1.0;
//
//  It is necessary to keep both an unfactored and factored copy
//  of the coefficient matrix.
//
  for ( i = 0; i < N; i++ )
  {
    for ( j = 0; j < N; j++ )
    {
      a_lu[i+j*N] = a[i+j*N];
    }
  }
//
//  Compute the factored coefficient matrix.
//
  info = r8ge_fa ( N, a_lu, pivot );

  if ( info != 0 )
  {
    cout << "\n";
    cout << "R8GE_SL_IT_TEST - Fatal error!\n";
    cout << "  R8GE_FA declares the matrix is singular!\n";
    cout << "  The value of INFO is " << info << "\n";
    return;
  }
//
//  Solve the system.
//  (Careful!  R8GE_SL overwrites the right hand side with the solution!)
//
  job = 0;
  x = r8ge_sl_new ( N, a_lu, pivot, b, job );
//
//  Compute and print the residual.
//
  r = r8ge_res ( N, N, a, x, b );

  r8vec2_print_some ( N, x, r, 10, "  i, x, b-A*x" );
//
//  Take a few steps of iterative refinement.
//
  for ( j = 1; j <= 5; j++ )
  {
    cout << "\n";
    cout << "Iterative refinement step " << j << "\n";
    cout << "\n";
//
//  Improve the solution.
//
    job = 0;
    x_new = r8ge_sl_it ( N, a, a_lu, pivot, b, job, x );
//
//  Compute and print the residual.
//
    delete [] r;

    r = r8ge_res ( N, N, a, x_new, b );

    r8vec2_print_some ( N, x_new, r, 10, "  i, x, b-A*x" );

    for ( i = 0; i < N; i++ )
    {
      x[i] = x_new[i];
    }
    delete [] x_new;
  }

  delete [] a;
  delete [] r;
  delete [] x;

  return;
# undef N
}
//****************************************************************************80

void r8ge_to_r8vec_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_TO_R8VEC_TEST tests R8GE_TO_R8VEC.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 February 2016
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
  int m = 4;
  int n = 6;
  double *x;

  cout << "\n";
  cout << "R8GE_TO_R8VEC\n";
  cout << "  R8GE_TO_R8VEC converts an R8GE matrix to an R8VEC.\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << m << "\n";
  cout << "  Matrix columns N = " << n << "\n";

  a = r8ge_indicator ( m, n );

  r8ge_print ( m, n, a, " The R8GE indicator matrix:" );

  x = r8ge_to_r8vec ( m, n, a );

  r8vec_print ( m * n, x, "  The R8VEC:" );

  delete [] a;
  delete [] x;

  return;
}
//****************************************************************************80

void r8ge_transpose_new_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_TRANSPOSE_NEW_TEST tests R8GE_TRANSPOSE_NEW.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 February 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *b;
  int m = 7;
  int n = 5;

  cout << "\n";
  cout << "R8GE_TRANSPOSE_NEW_TEST\n";
  cout << "  R8GE_TRANSPOSE_NEW makes a transposed copy of an R8GE.\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << m << "\n";
  cout << "  Matrix columns N = " << n << "\n";

  a = r8ge_indicator ( m, n );

  r8ge_print ( m, n, a, "  The matrix A:" );

  b = r8ge_transpose_new ( m, n, a );

  r8ge_print ( n, m, b, "  The transposed copy matrix B:" );

  delete [] a;
  delete [] b;

  return;
}
//****************************************************************************80

void r8ge_transpose_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_TRANSPOSE_PRINT_TEST tests R8GE_TRANSPOSE_PRINT;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    05 September 2005
//
//  Author:
//
//    John Burkardt
//
{
# define M 7
# define N 12

  double a[M*N];
  int i;
  int j;

  cout << "\n";
  cout << "R8GE_TRANSPOSE_PRINT_TEST\n";
  cout << "  R8GE_TRANSPOSE_PRINT prints an R8GE,\n";
  cout << "  transposed.\n";
  cout << "\n";
  cout << "  Matrix row order M =    " << M << "\n";
  cout << "  Matrix column order N = " << N << "\n";
//
//  Set the matrix.
//
  for ( i = 1; i <= M; i++ )
  {
    for ( j = 1; j <= N; j++ )
    {
      a[i-1+(j-1)*M] = ( double ) ( i * 100 + j );
    }
  }

  r8ge_transpose_print ( M, N, a, "  The transposed matrix A:" );

  return;
# undef M
# undef N
}
//****************************************************************************80

void r8ge_transpose_print_some_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_TRANSPOSE_PRINT_SOME_TEST tests R8GE_TRANSPOSE_PRINT_SOME;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 February 2016
//
//  Author:
//
//    John Burkardt
//
{
# define M 7
# define N 12

  double a[M*N];
  int i;
  int j;

  cout << "\n";
  cout << "R8GE_TRANSPOSE_PRINT_SOME_TEST\n";
  cout << "  R8GE_TRANSPOSE_PRINT_SOME prints some of an R8GE,\n";
  cout << "  transposed.\n";
  cout << "\n";
  cout << "  Matrix row order M =    " << M << "\n";
  cout << "  Matrix column order N = " << N << "\n";
//
//  Set the matrix.
//
  for ( i = 1; i <= M; i++ )
  {
    for ( j = 1; j <= N; j++ )
    {
      a[i-1+(j-1)*M] = ( double ) ( i * 100 + j );
    }
  }

  r8ge_transpose_print_some ( M, N, a, 3, 4, 5, 8, "  Rows 3:5, Cols 4:8:" );

  return;
# undef M
# undef N
}
//****************************************************************************80

void r8ge_trf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_TRF_TEST tests R8GE_TRF.
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
# define M 5
# define NRHS 1

  double a[N*N];
  double b[N*NRHS];
  int i;
  int info;
  int j;
  int pivot[N];
  double *x;

  cout << "\n";
  cout << "R8GE_TRF_TEST\n";
  cout << "  R8GE_TRF computes the LU factors of an R8GE matrix, so that\n";
  cout << "  R8GE_TRS can solve a factored system.\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << M << "\n";
  cout << "  Matrix columns N = " << N << "\n";

  for ( i = 0; i < N; i++ )
  {
    for ( j = 0; j < N; j++ )
    {
      if ( i == j )
      {
        a[i+j*N] = 2.0;
      }
      else if ( i == j - 1 )
      {
        a[i+j*N] = - 1.0;
      }
      else if ( i == j + 1 )
      {
        a[i+j*N] = - 1.0;
      }
      else
      {
        a[i+j*N] = 0.0;
      }
    }
  }

  info = r8ge_trf ( M, N, a, pivot );

  if ( info != 0 )
  {
    cout << "\n";
    cout << "R8GE_TRF_TEST - Fatal error!\n";
    cout << "  R8GE_TRF declares the matrix is singular!\n";
    cout << "  The value of INFO is " << info << "\n";
    return;
  }

  for ( i = 0; i < N-1; i++ )
  {
    b[i+0*N] = 0.0;
  }
  b[N-1+0*N] = ( double ) ( N + 1 );

  x = r8ge_trs ( N, NRHS, 'N', a, pivot, b );

  if ( x == NULL )
  {
    cout << "\n";
    cout << "R8GE_TRF_TEST - Fatal error!\n";
    cout << "  R8GE_TRS returned an error condition!\n";
    return;
  }
  r8vec_print ( N, x, "  Solution:" );

  for ( i = 0; i < N-1; i++ )
  {
    b[i+0*N] = 0.0;
  }
  b[N-1+0*N] = ( double ) ( N + 1 );

  delete [] x;

  x = r8ge_trs ( N, NRHS, 'T', a, pivot, b );

  if ( x == NULL )
  {
    cout << "\n";
    cout << "R8GE_TRF_TEST - Fatal error!\n";
    cout << "  R8GE_TRS returned an error condition!\n";
    return;
  }

  r8vec_print ( N, x, "  Solution to transposed system:" );

  delete [] x;

  return;
# undef M
# undef N
# undef NRHS
}
//****************************************************************************80

void r8ge_trs_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_TRS_TEST tests R8GE_TRS.
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
# define M 5
# define NRHS 1

  double a[N*N];
  double b[N*NRHS];
  int i;
  int info;
  int j;
  int pivot[N];
  double *x;

  cout << "\n";
  cout << "R8GE_TRS_TEST\n";
  cout << "  R8GE_TRS solves a linear system that was factored by R8GE_TRF.\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << M << "\n";
  cout << "  Matrix columns N = " << N << "\n";

  for ( i = 0; i < N; i++ )
  {
    for ( j = 0; j < N; j++ )
    {
      if ( i == j )
      {
        a[i+j*N] = 2.0;
      }
      else if ( i == j - 1 )
      {
        a[i+j*N] = - 1.0;
      }
      else if ( i == j + 1 )
      {
        a[i+j*N] = - 1.0;
      }
      else
      {
        a[i+j*N] = 0.0;
      }
    }
  }

  info = r8ge_trf ( M, N, a, pivot );

  if ( info != 0 )
  {
    cout << "\n";
    cout << "R8GE_TRS_TEST - Fatal error!\n";
    cout << "  R8GE_TRF declares the matrix is singular!\n";
    cout << "  The value of INFO is " << info << "\n";
    return;
  }

  for ( i = 0; i < N-1; i++ )
  {
    b[i+0*N] = 0.0;
  }
  b[N-1+0*N] = ( double ) ( N + 1 );

  x = r8ge_trs ( N, NRHS, 'N', a, pivot, b );

  if ( x == NULL )
  {
    cout << "\n";
    cout << "R8GE_TRS_TEST - Fatal error!\n";
    cout << "  R8GE_TRS returned an error condition!\n";
    return;
  }
  r8vec_print ( N, x, "  Solution:" );

  for ( i = 0; i < N-1; i++ )
  {
    b[i+0*N] = 0.0;
  }
  b[N-1+0*N] = ( double ) ( N + 1 );

  delete [] x;

  x = r8ge_trs ( N, NRHS, 'T', a, pivot, b );

  if ( x == NULL )
  {
    cout << "\n";
    cout << "R8GE_TRS_TEST - Fatal error!\n";
    cout << "  R8GE_TRS returned an error condition!\n";
    return;
  }

  r8vec_print ( N, x, "  Solution to transposed system:" );

  delete [] x;

  return;
# undef M
# undef N
# undef NRHS
}
//****************************************************************************80

void r8ge_zeros_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8GE_ZEROS_TEST tests R8GE_ZEROS.
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
  int m = 5;
  int n = 4;

  cout << "\n";
  cout << "R8GE_ZEROS_TEST\n";
  cout << "  R8GE_ZEROS returns zeroed out space for an R8GE matrix.\n";
  cout << "\n";
  cout << "  Matrix order M, N = " << m << ", " << n << "\n";

  a = r8ge_zeros ( m, n );

  r8ge_print ( m, n, a, "  Matrix A:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8vec_dot_product_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_DOT_PRODUCT_TEST tests R8VEC_DOT_PRODUCT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    04 February 2016
//
//  Author:
//
//    John Burkardt
//
{
  int n;
  int seed;
  double *v1;
  double *v2;
  double value;

  cout << "\n";
  cout << "R8VEC_DOT_PRODUCT_TEST\n";
  cout << "  R8VEC_DOT_PRODUCT computes the dot product of two R8VEC's.\n";

  n = 10;
  seed = 123456789;
  v1 = r8vec_uniform_01_new ( n, seed );
  v2 = r8vec_uniform_01_new ( n, seed );
  r8vec2_print ( n, v1, v2, "  V1 and V2:" );
  value = r8vec_dot_product ( n, v1, v2 );
  cout << "\n";
  cout << "  V1 dot V2 = " << value << "\n";

  delete [] v1;
  delete [] v2;

  return;
}
//****************************************************************************80

void r8vec_indicator1_new_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_INDICATOR1_NEW_TEST tests R8VEC_INDICATOR1_NEW.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    27 September 2014
//
//  Author:
//
//    John Burkardt
//
{
  int n;
  double *v;

  cout << "\n";
  cout << "R8VEC_INDICATOR1_NEW_TEST\n";
  cout << "  R8VEC_INDICATOR1_NEW returns an indicator1 vector.\n";

  n = 10;
  v = r8vec_indicator1_new ( n );
  r8vec_print ( n, v, "  Indicator1 vector:" );
  delete [] v;

  return;
}
//****************************************************************************80

void r8vec_norm_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_NORM_TEST tests R8VEC_NORM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    26 September 2005
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int n;
  int seed;

  cout << "\n";
  cout << "R8VEC_NORM_TEST\n";
  cout << "  R8VEC_NORM computes the L2 norm of an R8VEC.\n";

  n = 10;

  seed = 123456789;

  a = r8vec_uniform_01_new ( n, seed );

  r8vec_print ( n, a, "  Input vector:" );

  cout << "\n";
  cout << "  L2 norm: " << r8vec_norm ( n, a ) << "\n";

  delete [] a;

  return;
}
//****************************************************************************80

void r8vec_norm_affine_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_NORM_AFFINE_TEST tests R8VEC_NORM_AFFINE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    30 June 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int n = 10;
  int seed;
  double *x;
  double *y;
  double *z;

  cout << "\n";
  cout << "R8VEC_NORM_AFFINE_TEST\n";
  cout << "  R8VEC_NORM_AFFINE computes the L2 norm of\n";
  cout << "  the difference of two R8VECs.\n";

  seed = 123456789;

  x = r8vec_uniform_01_new ( n, seed );
  y = r8vec_uniform_01_new ( n, seed );
  z = new double[n];
  for ( i = 0; i < n; i++ )
  {
    z[i] = x[i] - y[i];
  }
  cout << "\n";
  cout << "  R8VEC_NORM_AFFINE(X,Y) = " << r8vec_norm_affine ( n, x, y ) << "\n";
  cout << "  R8VEC_NORM(X-Y) =        " << r8vec_norm ( n, z ) << "\n";

  delete [] x;
  delete [] y;
  delete [] z;

  return;
}
//****************************************************************************80

void r8vec_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_PRINT_TEST tests R8VEC_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    31 August 2014
//
//  Author:
//
//    John Burkardt
//
{
  double a[4] = { 123.456, 0.000005, -1.0E+06, 3.14159265 };
  int n = 4;

  cout << "\n";
  cout << "R8VEC_PRINT_TEST\n";
  cout << "  R8VEC_PRINT prints an R8VEC.\n";

  r8vec_print ( n, a, "  The R8VEC:" );

  return;
}
//****************************************************************************80

void r8vec_print_some_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_PRINT_SOME_TEST tests R8VEC_PRINT_SOME.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    26 June 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int max_print = 10;
  int n = 100;

  cout << "\n";
  cout << "R8VEC_PRINT_SOME\n";
  cout << "  R8VEC_PRINT_SOME prints some of an R8VEC.\n";

  a = r8vec_indicator1_new ( n );

  r8vec_print_some ( n, a, max_print, "  No more than 10 lines of R8VEC:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8vec_to_r8ge_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_TO_R8GE tests R8VEC_TO_R8GE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 February 2016
//
//  Author:
//
//    John Burkardt
//
{
  int m = 4;
  int n = 6;

  double *a;
  int i;
  int j;
  int k;
  double *x;

  cout << "\n";
  cout << "R8VEC_TO_R8GE_TEST\n";
  cout << "  R8VEC_TO_R8GE converts an R8VEC to an R8GE matrix.\n";
  cout << "\n";
  cout << "  Matrix rows M =    " << m << "\n";
  cout << "  Matrix columns N = " << n << "\n";

  x = r8vec_indicator1_new ( m * n );
  r8vec_print ( m * n, x, "  The vector:" );

  a = r8vec_to_r8ge ( m, n, x );

  r8ge_print ( m, n, a, " The R8GE matrix:" );

  delete [] a;
  delete [] x;

  return;
}
//****************************************************************************80

void r8vec_uniform_01_new_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_UNIFORM_01_NEW_TEST tests R8VEC_UNIFORM_01_NEW.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    16 October 2006
//
//  Author:
//
//    John Burkardt
//
{
# define N 10

  int j;
  double *r;
  int seed;

  cout << "\n";
  cout << "R8VEC_UNIFORM_01_NEW_TEST\n";
  cout << "  R8VEC_UNIFORM returns a random R8VEC\n";
  cout << "  with entries in [ 0.0, 1.0 ]\n";
  cout << "\n";

  seed = 123456789;

  for ( j = 1; j <= 3; j++ )
  {
    cout << "\n";
    cout << "  Input SEED = " << seed << "\n";
    cout << "\n";

    r = r8vec_uniform_01_new ( N, seed );

    r8vec_print ( N, r, "  Random R8VEC:" );

    delete [] r;
  }

  return;
# undef N
}
//****************************************************************************80

void r8vec_zeros_new_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_ZEROS_NEW_TEST tests R8VEC_ZEROS_NEW.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 February 2016
//
//  Author:
//
//    John Burkardt
//
{
  int n = 10;
  double *x;

  cout << "\n";
  cout << "R8VEC_ZEROS_NEW_TEST\n";
  cout << "  R8VEC_ZEROS returns a zero R8VEC\n";
  cout << "\n";

  x = r8vec_zeros_new ( n );

  r8vec_print ( n, x, "  Random R8VEC:" );

  delete [] x;

  return;
}
//****************************************************************************80

void r8vec2_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC2_PRINT_TEST tests R8VEC2_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    08 January 2016
//
//  Author:
//
//    John Burkardt
//
{
  double a[5] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
  double b[5];
  double c[5];
  int i;
  int n = 5;

  cout << "\n";
  cout << "R8VEC2_PRINT_TEST\n";
  cout << "  R8VEC2_PRINT prints a pair of R8VEC's.\n";

  for ( i = 0; i < n; i++ )
  {
    b[i] = a[i] * a[i];
    c[i] = sqrt ( a[i] );
  }

  r8vec2_print ( n, b, c, "  Squares and square roots:" );

  return;
}
//****************************************************************************80

void r8vec2_print_some_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC2_PRINT_SOME_TEST tests R8VEC2_PRINT_SOME.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 February 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *b;
  int i;
  int n = 100;
  double x;

  cout << "\n";
  cout << "R8VEC2_PRINT_SOME_TEST\n";
  cout << "  R8VEC2_PRINT_SOME prints some of a pair of R8VEC's.\n";

  a = new double[n];
  b = new double[n];

  for ( i = 0; i < n; i++ )
  {
    x = ( double ) ( i + 1 );
    a[i] = x * x;
    b[i] = sqrt ( x );
  }

  r8vec2_print_some ( n, a, b, 10, "  No more than 10 lines of two vectors:" );

  delete [] a;
  delete [] b;

  return;
}
