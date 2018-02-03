# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>
# include <string>

using namespace std;

# include "pdflib.hpp"
# include "rnglib.hpp"

int main ( );
void i4_binomial_pdf_test ( );
void r8_chi_sample_test ( );
void r8po_fa_test ( );
void r8vec_multinormal_pdf_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for PDFLIB_TEST.
//
//  Discussion:
//
//    PDFLIB_TEST tests the PDFLIB library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 August 2015
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "PDFLIB_TEST\n";
  cout << "  C++ version\n";
  cout << "  Test the PDFLIB library.\n";

  i4_binomial_pdf_test ( );
  r8_chi_sample_test ( );
  r8po_fa_test ( );
  r8vec_multinormal_pdf_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "PDFLIB_TEST\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void i4_binomial_pdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_BINOMIAL_PDF_TEST calls I4_BINOMIAL_PDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 January 2018
//
//  Author:
//
//    John Burkardt
//
{
  int k;
  int n;
  double p;
  double prob;

  initialize ( );

  cout << "\n";
  cout << "I4_BINOMIAL_PDF_TEST\n";
  cout << "  I4_BINOMIAL_PDF reports\n";
  cout << "  PROB, the probability that\n";
  cout << "  N trials, with\n";
  cout << "  P probability of success result in\n";
  cout << "  K successes.\n";
  cout << "\n";
  cout << "   N         P   K        PROB\n";
  cout << "\n";

  n = 5;
  p = 0.25;
 
  for ( k = 0; k <= n; k++ )
  {
    prob = i4_binomial_pdf ( n, p, k );
    cout << "  " << setw(2) << n
         << "  " << setw(8) << p
         << "  " << setw(2) << k
         << "  " << setw(14) << prob << "\n";
  }

  return;
}
//****************************************************************************80

void r8_chi_sample_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_CHI_SAMPLE_TEST calls R8_CHI_SAMPLE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 August 2013
//
//  Author:
//
//    John Burkardt
//
{
  double df;
  int g;
  int i;
  double u;

  initialize ( );

  cout << "\n";
  cout << "R8_CHI_SAMPLE_TEST\n";
  cout << "  R8_CHI_SAMPLE ( DF ) samples the Chi distribution with\n";
  cout << "  DF degrees of freedom.\n";
//
//  Set the current generator index to #2, which (this being C++) has index 1!.
//
  g = 1;
  cgn_set ( g );
  cout << "\n";
  cout << "  Current generator index = " << g << "\n";
//
//  Repeatedly call R8_CHI_SAMPLE ( DF ).
//
  cout << "\n";
  cout << "   I       DF       R8_CHI_SAMPLE ( DF )\n";
  cout << "\n";

  for ( i = 0; i <= 10; i++ )
  {
    df = 5.0 * r8_uniform_01_sample ( ) + 1.0;
    u = r8_chi_sample ( df );
    cout << "  " << setw(2) << i
         << "  " << setw(14) << df
         << "  " << setw(14) << u << "\n";
  }

  return;
}
//****************************************************************************80

void r8po_fa_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8PO_FA_TEST tests R8PO_FA.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 June 2013
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double diff;
  int i;
  int j;
  int n = 5;
  double *r1;
  double *r2;

  initialize ( );

  cout << "\n";
  cout << "R8PO_FA_TEST\n";
  cout << "  R8PO_FA computes the Cholesky factor R of a\n";
  cout << "  positive definite matrix A, so that A = R' * R.\n";
  cout << "\n";
  cout << "  Start with random R1;\n";
  cout << "  Compute A = R1' * R1.\n";
  cout << "  Call R8MAT_POFAC and see if you recover R2 = R1.\n";
//
//  Generate a random upper triangular matrix with positive diagonal.
//
  r1 = new double[n*n];

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i <= j; i++ )
    {
      r1[i+j*n] = r8_uniform_01_sample ( );
    }
    for ( i = j + 1; i < n; i++ )
    {
      r1[i+j*n] = 0.0;
    }
  }
  r8ge_print ( n, n, r1, "  R1:" );
//
//  Compute a positive definite symmetric matrix A.
//
  a = r8ge_mtm ( n, r1, r1 );

  r8ge_print ( n, n, a, "  A:" );

  r2 = r8po_fa ( n, a );

  diff = r8mat_norm_fro_affine ( n, n, r1, r2 );

  cout << "\n";
  cout << "  Frobenius difference between R1 and R2 = " << diff << "\n";

  delete [] a;
  delete [] r1;
  delete [] r2;

  return;
}
//****************************************************************************80

void r8vec_multinormal_pdf_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_MULTINORMAL_PDF_TEST tests R8VEC_MULTINORMAL_PDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 August 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *c;
  double c_det;
  double *c_inv;
  double eps;
  int i;
  int j;
  double *mu;
  int n = 5;
  double pdf1;
  double pdf2;
  const double r8_pi = 3.141592653589793;
  double *r1;
  double *r2;
  double *x;
  double xcx;
  double *y;

  initialize ( );

  cout << "\n";
  cout << "R8VEC_MULTINORMAL_PDF_TEST\n";
  cout << "  R8VEC_MULTINORMAL_PDF evaluates the PDF for the\n";
  cout << "  multinormal distribution.\n";
  cout << "\n";
  cout << "  The covariance matrix is C.\n";
  cout << "  The definition uses the inverse of C;\n";
  cout << "  R8VEC_MULTINORMAL_PDF uses the Cholesky factor.\n";
  cout << "  Verify that the algorithms are equivalent.\n";
//
//  Generate a random upper triangular matrix with positive diagonal.
//
  r1 = new double[n*n];

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i <= j; i++ )
    {
      if ( i == j )
      {
        r1[i+j*n] = fabs ( r8_uniform_01_sample ( ) );
      }
      else
      {
        r1[i+j*n] = r8_uniform_01_sample ( );
      }
    }
    for ( i = j + 1; i < n; i++ )
    {
      r1[i+j*n] = 0.0;
    }
  }
  r8ge_print ( n, n, r1, "  R1:" );
//
//  Compute a positive definite symmetric matrix C.
//
  c = r8ge_mtm ( n, r1, r1 );
  r8ge_print ( n, n, c, "  C:" );
//
//  Compute the Cholesky factor.
//
  r2 = r8mat_pofac ( n, c );
  r8ge_print ( n, n, r2, "  R2:" );
//
//  Compute the determinant of C.
//
  c_det = r8mat_podet ( n, r2 );
  cout << "\n";
  cout << "  Determinant of C = " << c_det << "\n";
//
//  Compute the inverse of C.
//
  c_inv = r8mat_poinv ( n, r2 );
//
//  Compute a random set of means.
//
  mu = new double[n];
  for ( i = 0; i < n; i++ )
  {
    mu[i] = r8_normal_01_sample ( );
  }
//
//  Compute X as small variations from MU.
//
  x = new double[n];
  for ( i = 0; i < n; i++ )
  {
    eps = 0.01 * r8_normal_01_sample ( );
    x[i] = ( 1.0 + eps ) * mu[i];
  }
//
//  Compute PDF1 from the function.
//
  pdf1 = r8vec_multinormal_pdf ( n, mu, r2, c_det, x );
//
//  Compute PDF2 from the definition.
//
  y = new double[n];
  for ( i = 0; i < n; i++ )
  {
    y[i] = x[i] - mu[i];
  }

  xcx = 0.0;
  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < n; i++ )
    {
      if ( i <= j )
      {
        xcx = xcx + y[i] * c_inv[i+j*n] * y[j];
      }
      else
      {
        xcx = xcx + y[i] * c_inv[j+i*n] * y[j];
      }
    }
  }

  pdf2 = 1.0 / sqrt ( pow ( 2.0 * r8_pi, n ) ) 
    * 1.0 / sqrt ( c_det ) 
    * exp ( - 0.5 * xcx );

  cout << "\n";
  cout << "  PDF1 = " << pdf1 << "\n";
  cout << "  PDF2 = " << pdf2 << "\n";
//
//  Free memory.
//
  delete [] c;
  delete [] c_inv;
  delete [] mu;
  delete [] r1;
  delete [] r2;
  delete [] x;
  delete [] y;

  return;
}

