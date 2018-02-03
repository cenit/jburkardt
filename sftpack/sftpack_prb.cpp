# include <cmath>
# include <cstdlib>
# include <ctime>
# include <complex>
# include <iostream>
# include <iomanip>

using namespace std;

# include "sftpack.hpp"

int main ( );

void c4mat_sft_test ( );
void c4vec_sft_test ( );

void c8mat_sft_test ( );
void c8vec_sft_test ( );

void r4vec_sft_test ( );

void r8vec_sct_test ( );
void r8vec_sft_test ( );
void r8vec_sht_test ( );
void r8vec_sqct_test ( );
void r8vec_sqst_test ( );
void r8vec_sst_test ( );
void r8vec_swt_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for SFTPACK_PRB.
//
//  Discussion:
//
//    SFTPACK_PRB tests the SFTPACK library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//   27 June 2015
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "SFTPACK_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the SFTPACK library.\n";

  c4mat_sft_test ( );
  c4vec_sft_test ( );

  c8mat_sft_test ( );
  c8vec_sft_test ( );

  r4vec_sft_test ( );

  r8vec_sct_test ( );
  r8vec_sft_test ( );
  r8vec_sht_test ( );
  r8vec_sqct_test ( );
  r8vec_sqst_test ( );
  r8vec_sst_test ( );
  r8vec_swt_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "SFTPACK_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void c4mat_sft_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    C4MAT_SFT_TEST tests C4MAT_SFTB and C4MAT_SFTF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    22 June 2010
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int n1 = 10;
  int n2 = 4;
  int seed;
  complex <float> *x;
  complex <float> *x2;
  complex <float> *y;

  cout << "\n";
  cout << "C4MAT_SFT_TEST\n";
  cout << "  C4MAT_SFTF computes the forward slow Fourier transform.\n";
  cout << "  C4MAT_SFTB computes the backward slow Fourier transform.\n";
  cout << "\n";
  cout << "  The data has dimensions N1 = " << n1 << ", N2 = " << n2 << "\n";

  seed = 123456789;

  x = c4mat_uniform_01_new ( n1, n2, seed );

  c4mat_print_some ( n1, n2, x, 1, 1, 10, 10, "  The original data:" );
//
//  Compute the slow Fourier transform of the data.
//
  y = c4mat_sftf ( n1, n2, x );

  c4mat_print_some ( n1, n2, y, 1, 1, 10, 10, "  The Fourier coefficients:" );
//
//  Now try to retrieve the data from the coefficients.
//
  x2 = c4mat_sftb ( n1, n2, y );

  c4mat_print_some ( n1, n2, x2, 1, 1, 10, 10, "  The retrieved data:" );

  delete [] x;
  delete [] x2;
  delete [] y;

  return;
}
//****************************************************************************80

void c4vec_sft_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    C4VEC_SFT_TEST tests C4VEC_SFTB and C4VEC_SFTF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    10 June 2010
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int n = 36;
  int seed;
  complex <float> *x;
  complex <float> *x2;
  complex <float> *y;

  cout << "\n";
  cout << "C4VEC_SFT_TEST\n";
  cout << "  C4VEC_SFTF computes the forward slow Fourier transform.\n";
  cout << "  C4VEC_SFTB computes the backward slow Fourier transform.\n";
  cout << "\n";
  cout << "  The number of data values, N = " << n << "\n";

  seed = 123456789;

  x = c4vec_uniform_01_new ( n, seed );

  c4vec_print_part ( n, x, 10, "  The original data:" );
//
//  Compute the slow Fourier transform of the data.
//
  y = c4vec_sftf ( n, x );

  c4vec_print_part ( n, y, 10, "  The Fourier coefficients:" );
//
//  Now try to retrieve the data from the coefficients.
//
  x2 = c4vec_sftb ( n, y );

  c4vec_print_part ( n, x2, 10, "  The retrieved data:" );

  delete [] x;
  delete [] x2;
  delete [] y;

  return;
}

//****************************************************************************80

void c8mat_sft_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    C8MAT_SFT_TEST tests C8MAT_SFTB and C8MAT_SFTF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    22 June 2010
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int n1 = 10;
  int n2 = 4;
  int seed;
  complex <double> *x;
  complex <double> *x2;
  complex <double> *y;

  cout << "\n";
  cout << "C8MAT_SFT_TEST\n";
  cout << "  C8MAT_SFTF computes the forward slow Fourier transform.\n";
  cout << "  C8MAT_SFTB computes the backward slow Fourier transform.\n";
  cout << "\n";
  cout << "  The data has dimensions N1 = " << n1 << ", N2 = " << n2 << "\n";

  seed = 123456789;

  x = c8mat_uniform_01_new ( n1, n2, seed );

  c8mat_print_some ( n1, n2, x, 1, 1, 10, 10, "  The original data:" );
//
//  Compute the slow Fourier transform of the data.
//
  y = c8mat_sftf ( n1, n2, x );

  c8mat_print_some ( n1, n2, y, 1, 1, 10, 10, "  The Fourier coefficients:" );
//
//  Now try to retrieve the data from the coefficients.
//
  x2 = c8mat_sftb ( n1, n2, y );

  c8mat_print_some ( n1, n2, x2, 1, 1, 10, 10, "  The retrieved data:" );

  delete [] x;
  delete [] x2;
  delete [] y;

  return;
}
//****************************************************************************80

void c8vec_sft_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    C8VEC_SFT_TEST tests C8VEC_SFTB and C8VEC_SFTF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    10 June 2010
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int n = 36;
  int seed;
  complex <double> *x;
  complex <double> *x2;
  complex <double> *y;

  cout << "\n";
  cout << "C8VEC_SFT_TEST\n";
  cout << "  C8VEC_SFTF computes the forward slow Fourier transform.\n";
  cout << "  C8VEC_SFTB computes the backward slow Fourier transform.\n";
  cout << "\n";
  cout << "  The number of data values, N = " << n << "\n";

  seed = 123456789;

  x = c8vec_uniform_01_new ( n, seed );

  c8vec_print_part ( n, x, 10, "  The original data:" );
//
//  Compute the slow Fourier transform of the data.
//
  y = c8vec_sftf ( n, x );

  c8vec_print_part ( n, y, 10, "  The Fourier coefficients:" );
//
//  Now try to retrieve the data from the coefficients.
//
  x2 = c8vec_sftb ( n, y );

  c8vec_print_part ( n, x2, 10, "  The retrieved data:" );

  delete [] x;
  delete [] x2;
  delete [] y;

  return;
}
//****************************************************************************80

void r4vec_sft_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R4VEC_SFT_TEST tests R4VEC_SFTB and R4VEC_SFTF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    10 June 2010
//
//  Author:
//
//    John Burkardt
//
{
  float *a;
  float ahi = 5.0;
  float alo = 0.0;
  float azero;
  float *b;
  int i;
  int n = 36;
  int seed;
  float *x;
  float *z;

  cout << "\n";
  cout << "R4VEC_SFT_TEST\n";
  cout << "  R4VEC_SFTF computes the forward slow Fourier transform.\n";
  cout << "  R4VEC_SFTB computes the backward slow Fourier transform.\n";
  cout << "\n";
  cout << "  The number of data values, N = " << n << "\n";

  seed = 123456789;

  x = r4vec_uniform_ab_new ( n, alo, ahi, seed );

  r4vec_print_part ( n, x, 10, "  The original data:" );
//
//  Compute the slow Fourier transform of the data.
//
  a = new float[n/2];
  b = new float[n/2];

  r4vec_sftf ( n, x, &azero, a, b );

  cout << "\n";
  cout << "  A (cosine) coefficients:\n";
  cout << "\n";

  cout << "  " << setw(4) << 0
       << "  " << setw(14) << azero << "\n";

  for ( i = 0; i < ( n / 2 ); i++ )
  {
    cout << "  " << setw(4) << i
         << "  " << setw(14) << a[i] << "\n";
  }

  cout << "\n";
  cout << "  B (sine) coefficients:\n";
  cout << "\n";

  for ( i = 0; i < ( n / 2 ); i++ )
  {
    cout << "  " << setw(4) << i
         << "  " << setw(14) << b[i] << "\n";
  }
//
//  Now try to retrieve the data from the coefficients.
//
  z = r4vec_sftb ( n, azero, a, b );

  r4vec_print_part ( n, z, 10, "  The retrieved data:" );

  delete [] a;
  delete [] b;
  delete [] x;
  delete [] z;

  return;
}
//****************************************************************************80

void r8vec_sct_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_SCT_TEST tests R8VEC_SCT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    27 February 2010
//
//  Author:
//
//    John Burkardt
//
{
  double ahi = 5.0;
  double alo = 0.0;
  double *c;
  double *d;
  double *e;
  int i;
  int n = 256;
  int seed;

  cout << "\n";
  cout << "R8VEC_SCTTEST\n";
  cout << "  R8VEC_SCT does a forward or backward slow cosine transform.\n";
  cout << "\n";
  cout << "  The number of data items is N = " << n << "\n";
//
//  Set the data values.
//
  seed = 123456789;

  c = r8vec_uniform_ab_new ( n, alo, ahi, seed );

  r8vec_print_part ( n, c, 10, "  The original data:" );
//
//  Compute the coefficients.
//
  d = r8vec_sct ( n, c );

  r8vec_print_part ( n, d, 10, "  The cosine coefficients:" );
//
//  Now compute inverse transform of coefficients.  Should get back the
//  original data.
//
  e = r8vec_sct ( n, d );

  for ( i = 0; i < n; i++ )
  {
    e[i] = e[i] / ( double ) ( 2 * n );
  }

  r8vec_print_part ( n, e, 10, "  The retrieved data:" );

  delete [] c;
  delete [] d;
  delete [] e;

  return;
}
//****************************************************************************80

void r8vec_sft_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_SFT_TEST tests R8VEC_SFTB and R8VEC_SFTF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    27 February 2010
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double ahi = 5.0;
  double alo = 0.0;
  double azero;
  double *b;
  int i;
  int n = 36;
  int seed;
  double *x;
  double *z;

  cout << "\n";
  cout << "R8VEC_SFT_TEST\n";
  cout << "  R8VEC_SFTF computes the forward slow Fourier transform.\n";
  cout << "  R8VEC_SFTB computes the backward slow Fourier transform.\n";
  cout << "\n";
  cout << "  The number of data values, N = " << n << "\n";

  seed = 123456789;

  x = r8vec_uniform_ab_new ( n, alo, ahi, seed );

  r8vec_print_part ( n, x, 10, "  The original data:" );
//
//  Compute the slow Fourier transform of the data.
//
  a = new double[n/2];
  b = new double[n/2];

  r8vec_sftf ( n, x, &azero, a, b );

  cout << "\n";
  cout << "  A (cosine) coefficients:\n";
  cout << "\n";

  cout << "  " << setw(4) << 0
       << "  " << setw(14) << azero << "\n";

  for ( i = 0; i < ( n / 2 ); i++ )
  {
    cout << "  " << setw(4) << i
         << "  " << setw(14) << a[i] << "\n";
  }

  cout << "\n";
  cout << "  B (sine) coefficients:\n";
  cout << "\n";

  for ( i = 0; i < ( n / 2 ); i++ )
  {
    cout << "  " << setw(4) << i
         << "  " << setw(14) << b[i] << "\n";
  }
//
//  Now try to retrieve the data from the coefficients.
//
  z = r8vec_sftb ( n, azero, a, b );

  r8vec_print_part ( n, z, 10, "  The retrieved data:" );

  delete [] a;
  delete [] b;
  delete [] x;
  delete [] z;

  return;
}
//****************************************************************************80

void r8vec_sht_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_SHT_TEST tests R8VEC_SHT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    27 February 2010
//
//  Author:
//
//    John Burkardt
//
{
  double ahi = 5.0;
  double alo = 0.0;
  double *c;
  double *d;
  double *e;
  int n = 17;
  int seed;

  cout << "\n";
  cout << "R8VEC_SHT_TEST\n";
  cout << "  R8VEC_SHT does a forward or backward slow Hartley transform.\n";
  cout << "\n";
  cout << "  The number of data items is N = " << n << "\n";
//
//  Set the data values.
//
  seed = 123456789;

  c = r8vec_uniform_ab_new ( n, alo, ahi, seed );

  r8vec_print_part ( n, c, 10, "  The original data:" );
//
//  Compute the coefficients.
//
  d = r8vec_sht ( n, c );

  r8vec_print_part ( n, d, 10, "  The Hartley coefficients:" );
//
//  Now compute inverse transform of coefficients.  Should get back the
//  original data.
//
  e = r8vec_sht ( n, d );

  r8vec_print_part ( n, e, 10, "  The retrieved data:" );

  delete [] c;
  delete [] d;
  delete [] e;

  return;
}
//****************************************************************************80

void r8vec_sqct_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_SQCT_TEST tests R8VEC_SQCTB and R8VEC_SQCTF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    27 February 2010
//
//  Author:
//
//    John Burkardt
//
{
  double ahi = 5.0;
  double alo = 0.0;
  int n = 256;
  int seed;
  double *x;
  double *y;
  double *z;

  cout << "\n";
  cout << "R8VEC_SQCT_TEST\n";
  cout << "  R8VEC_SQCTF does a forward slow quarter wave cosine transform;\n";
  cout << "  R8VEC_SQCTB does a backward slow quarter wave cosine transform.\n";
  cout << "\n";
  cout << "  The number of data items is N = " << n << "\n";
//
//  Set the data values.
//
  seed = 123456789;

  x = r8vec_uniform_ab_new ( n, alo, ahi, seed );

  r8vec_print_part ( n, x, 10, "  The original data:" );
//
//  Compute the coefficients.
//
  y = r8vec_sqctf ( n, x );

  r8vec_print_part ( n, y, 10, "  The cosine coefficients:" );
//
//  Now compute inverse transform of coefficients.  Should get back the
//  original data.
//
  z = r8vec_sqctb ( n, y );

  r8vec_print_part ( n, z, 10, "  The retrieved data:" );

  delete [] x;
  delete [] y;
  delete [] z;

  return;
}
//****************************************************************************80

void r8vec_sqst_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_SQST_TEST tests R8VEC_SQSTB and R8VEC_SQSTF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    27 February 2010
//
//  Author:
//
//    John Burkardt
//
{
  double ahi = 5.0;
  double alo = 0.0;
  int n = 256;
  int seed;
  double *x;
  double *y;
  double *z;

  cout << "\n";
  cout << "R8VEC_SQST_TEST\n";
  cout << "  R8VEC_SQSTF does a forward slow quarter wave sine transform;\n";
  cout << "  R8VEC_SQSTB does a backward slow quarter wave sine transform.\n";
  cout << "\n";
  cout << "  The number of data items is N = " << n << "\n";
//
//  Set the data values.
//
  seed = 123456789;

  x = r8vec_uniform_ab_new ( n, alo, ahi, seed );

  r8vec_print_part ( n, x, 10, "  The original data:" );
//
//  Compute the coefficients.
//
  y = r8vec_sqstf ( n, x );

  r8vec_print_part ( n, y, 10, "  The sine coefficients:" );
//
//  Now compute inverse transform of coefficients.  Should get back the
//  original data.
//
  z = r8vec_sqstb ( n, y );

  r8vec_print_part ( n, z, 10, "  The retrieved data:" );

  delete [] x;
  delete [] y;
  delete [] z;

  return;
}
//****************************************************************************80

void r8vec_sst_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_SST_TEST tests R8VEC_SST.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    27 February 2010
//
//  Author:
//
//    John Burkardt
//
{
  double ahi = 5.0;
  double alo = 0.0;
  double *c;
  double *d;
  double *e;
  int i;
  int n = 256;
  int seed;

  cout << "\n";
  cout << "R8VEC_SST_TEST\n";
  cout << "  R8VEC_SST does a forward or backward slow sine transform.\n";
  cout << "\n";
  cout << "  The number of data items is N = " << n << "\n";
//
//  Set the data values.
//
  seed = 123456789;

  c = r8vec_uniform_ab_new ( n, alo, ahi, seed );

  r8vec_print_part ( n, c, 10, "  The original data:" );
//
//  Compute the coefficients;
//
  d = r8vec_sst ( n, c );

  r8vec_print_part ( n, d, 10, "  The sine coefficients:" );
//
//  Now compute inverse transform of coefficients.  Should get back the
//  original data.
//
  e = r8vec_sst ( n, d );

  for ( i = 0; i < n; i++ )
  {
    e[i] = e[i] / ( double ) ( 2 * ( n + 1 ) );
  }

  r8vec_print_part ( n, e, 10, "  The retrieved data:" );

  delete [] c;
  delete [] d;
  delete [] e;

  return;
}
//****************************************************************************80

void r8vec_swt_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_SWT_TEST tests R8VEC_SWTB and R8VEC_SWTF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 June 2015
//
//  Author:
//
//    John Burkardt
//
{
  double ahi;
  double alo;
  double *d;
  int i;
  int n = 36;
  int np1h;
  double *s;
  int seed;
  double *x;

  alo = 0.0;
  ahi = 5.0;

  cout << "\n";
  cout << "R8VEC_SWT_TEST\n";
  cout << "  R8VEC_SWTF computes the forward slow wavelet transform.\n";
  cout << "  R8VEC_SWTB computes the backward slow wavelet transform.\n";
  cout << "\n";
  cout << "  The number of data values, N = " << n << "\n";

  seed = 123456789;

  x = r8vec_uniform_ab_new ( n, alo, ahi, seed );

  r8vec_print_part ( n, x, 10, "  The original data:" );
//
//  Compute the slow wavelet transform of the data.
//
  np1h = ( ( n + 1 ) / 2 );
  s = new double[np1h];
  d = new double[np1h];

  r8vec_swtf ( n, x, s, d );

  cout << "\n";
  cout << "     I          S(I)            D(I)\n";
  cout << "\n";
  for ( i = 0; i < np1h; i++ )
  {
    cout << "  " << setw(4) << i
         << "  " << setw(14) << s[i]
         << "  " << setw(14) << d[i] << "\n";
  }
//
//  Now try to retrieve the data from the coefficients.
//
  delete [] x;

  x = r8vec_swtb ( n, s, d );

  r8vec_print_part ( n, x, 10, "  The retrieved data:" );

  delete [] d;
  delete [] s;
  delete [] x;

  return;
}

