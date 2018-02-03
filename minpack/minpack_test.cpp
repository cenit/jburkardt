# include <cmath>
# include <complex>
# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "minpack.hpp"

int main ( );
void chkder_test ( );
void chkder_f ( int n, double x[], double fvec[], double fjac[], int ldfjac,
  int &iflag );
void hybrd1_test ( );
void hybrd1_f ( int n, double x[], double fvec[], int &iflag );
void qform_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for MINPACK_TEST.
//
//  Discussion:
//
//    MINPACK_TEST tests the MINPACK library.
//
//  Licensing:
//
//    This code may freely be copied, modified, and used for any purpose.
//
//  Modified:
//
//    02 January 2018
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "MINPACK_TEST\n";
  cout << "  C++ version:\n";
  cout << "  Test the MINPACK library.\n";

  chkder_test ( );
  hybrd1_test ( );
  qform_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "MINPACK_TEST\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void chkder_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    CHKDER_TEST tests CHKDER.
//
//  Licensing:
//
//    This code may freely be copied, modified, and used for any purpose.
//
//  Modified:
//
//    06 April 2010
//
//  Author:
//
//    John Burkardt
//
{
  double *err;
  double *fjac;
  double *fvec;
  double *fvecp;
  int i;
  int ido;
  int iflag;
  int j;
  int ldfjac;
  int m;
  int mode;
  int n;
  int seed;
  double *x;
  double *xp;

  m = 5;
  n = 5;
  ldfjac = n;
  err = new double[m];
  fjac = new double[ldfjac*n];
  fvec = new double[m];
  fvecp = new double[m];
  x = new double[n];
  xp = new double[n];

  cout << "\n";
  cout << "CHKDER_TEST\n";
  cout << "  CHKDER compares a user supplied jacobian\n";
  cout << "  and a finite difference approximation to it\n";
  cout << "  and judges whether the jacobian is correct.\n";

  for ( ido = 1; ido <= 2; ido++ )
  {
    seed = 123456789;
    if ( ido == 1 )
    {
      cout << "\n";
      cout << "  On the first test, use a correct jacobian.\n";
    }
    else if ( ido == 2 )
    {
       cout << "\n";
       cout << "  Repeat the test, but use a bad jacobian\n";
       cout << "  and see if the routine notices.\n";
    }
//
//  Set the point at which the test is to be made:
//
    for ( i = 0; i < n; i++ )
    {
      x[i] = r8_uniform_01 ( seed );
    }

    cout << "\n";
    cout << "  Evaluation point X:\n";
    cout << "\n";
    for ( i = 0; i < n; i++ )
    {
      cout << "  " << setw(14) << x[i] << "\n";
    }

    mode = 1;
    chkder ( m, n, x, fvec, fjac, ldfjac, xp, fvecp, mode, err );

    iflag = 1;
    chkder_f ( n, x, fvec, fjac, ldfjac, iflag );
    chkder_f ( n, xp, fvecp, fjac, ldfjac, iflag );

    cout << "\n";
    cout << "  Sampled function values F(X) and F(XP)\n";
    cout << "\n";
    for ( i = 0; i < m; i++ )
    {
      cout << "  " << setw(8) << i
           << "  " << setw(14) << fvec[i]
           << "  " << setw(14) << fvecp[i] << "\n";
    }
    iflag = 2;
    chkder_f ( n, x, fvec, fjac, ldfjac, iflag );
//
//  Here's where we put a mistake into the jacobian, on purpose.
//
    if ( ido == 2 )
    {
      fjac[0+0*ldfjac] = 1.01 * fjac[0+0*ldfjac];
      fjac[1+2*ldfjac] = - fjac[1+2*ldfjac];
    }

    cout << "\n";
    cout << "  Computed jacobian:\n";
    cout << "\n";
    for ( i = 0; i < m; i++ )
    {
      for ( j = 0; j < n; j++ )
      {
        cout << "  " << setw(12) << fjac[i+j*ldfjac];
      }
      cout << "\n";
    }

    mode = 2;
    chkder ( m, n, x, fvec, fjac, ldfjac, xp, fvecp, mode, err );

    cout << "\n";
    cout << "  CHKDER gradient component error estimates:\n";
    cout << "     > 0.5, the component is probably correct.\n";
    cout << "     < 0.5, the component is probably incorrect.\n";
    cout << "\n";
    for ( i = 0; i < m; i++ )
    {
      cout << "  " << setw(8) << i
           << "  " << setw(14) << err[i] << "\n";
    }
  }
//
//  Free memory.
//
  delete [] err;
  delete [] fjac;
  delete [] fvec;
  delete [] fvecp;;
  delete [] x;
  delete [] xp;

  return;
}
//****************************************************************************80

void chkder_f ( int n, double x[], double fvec[], double fjac[], int ldfjac,
  int &iflag )

//****************************************************************************80
//
//  Purpose:
//
//    CHKDER_F is a function/jacobian routine for the CHKDER test.
//
//  Licensing:
//
//    This code may freely be copied, modified, and used for any purpose.
//
//  Modified:
//
//    06 April 2010
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of variables.
//
//    Input, double X[N], the variable values.
//
//    Output, double FVEC[N], the function values at X, if IFLAG = 1.
//
//    Output, double FJAC[LDFJAC*N], the N by N jacobian at X, if IFLAG = 2.
//
//    Input, int LDFJAC, the leading dimension of FJAC, which must
//    be at least N.
//
//    Input, int &IFLAG:
//    1, please compute F(I) (X).
//    2, please compute FJAC(I,J) (X).
//
{
  int i;
  int j;
  double x_prod;
  double x_sum;
//
//  If IFLAG is 1, we are supposed to evaluate F(X).
//
  if ( iflag == 1 )
  {
    x_sum = 0.0;
    x_prod = 1.0;
    for ( i = 0; i < n; i++ )
    {
      x_sum = x_sum + x[i];
      x_prod = x_prod * x[i];
    }

    for ( i = 0; i < n - 1; i++ )
    {
      fvec[i] = x[i] - ( double ) ( n + 1 ) + x_sum;
    }
    fvec[n-1] = x_prod - 1.0;
  }
//
//  If IFLAG is 2, we are supposed to evaluate FJAC(I,J) = d F(I)/d X(J)
//
  else if ( iflag == 2 )
  {
    for ( j = 0; j < n; j++ )
    {
      for ( i = 0; i < n - 1; i++ )
      {
        fjac[i+j*ldfjac] = 1.0;
      }
    }
    for ( i = 0; i < n - 1; i++ )
    {
      fjac[i+i*ldfjac] = 2.0;
    }
    x_prod = 1.0;
    for ( i = 0; i < n; i++ )
    {
      x_prod = x_prod * x[i];
    }
    for ( j = 0; j < n; j++ )
    {
      fjac[n-1+j*ldfjac] = x_prod / x[j];
    }
  }

  return;
}
//****************************************************************************80

void hybrd1_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    HYBRD1_TEST tests HYBRD1.
//
//  Discussion:
//
//    This is an example of what your main program would look
//    like if you wanted to use MINPACK to solve N nonlinear equations
//    in N unknowns.  In this version, we avoid computing the jacobian
//    matrix, and request that MINPACK approximate it for us.
//
//    The set of nonlinear equations is:
//
//      x1 * x1 - 10 * x1 + x2 * x2 + 8 = 0
//      x1 * x2 * x2 + x1 - 10 * x2 + 8 = 0
//
//    with solution x1 = x2 = 1
//
//  Licensing:
//
//    This code may freely be copied, modified, and used for any purpose.
//
//  Modified:
//
//    08 April 2010
//
//  Author:
//
//    John Burkardt
//
{
  double *fvec;
  int iflag;
  int info;
  int lwa;
  int n = 2;
  double tol = 0.00001;
  double *wa;
  double *x;

  lwa = ( n * ( 3 * n + 13 ) ) / 2;
  fvec = new double[n];
  wa = new double[lwa];
  x = new double[n];

  cout << "\n";
  cout << "HYBRD1_TEST\n";
  cout << "  HYBRD1 solves a nonlinear system of equations.\n";

  x[0] = 3.0;
  x[1] = 0.0;
  r8vec_print ( n, x, "  Initial X" );
  iflag = 1;
  hybrd1_f ( n, x, fvec, iflag );

  r8vec_print ( n, fvec, "  F(X)" );

  info = hybrd1 ( hybrd1_f, n, x, fvec, tol, wa, lwa );

  cout << "\n";
  cout << "  Returned value of INFO = " << info << "\n";
  r8vec_print ( n, x, "  X" );
  r8vec_print ( n, fvec, "  F(X)" );
//
//  Free memory.
//
  delete [] fvec;
  delete [] wa;
  delete [] x;

  return;
}
//****************************************************************************80

void hybrd1_f ( int n, double x[], double fvec[], int &iflag )

//****************************************************************************80
//
//  Purpose:
//
//    HYBRD1_F is a function routine for use with HYBRD1_TEST.
//
//  Licensing:
//
//    This code may freely be copied, modified, and used for any purpose.
//
//  Modified:
//
//    08 April 2010
//
//  Author:
//
//    John Burkardt
//
{
  fvec[0] = x[0] * x[0] - 10.0 * x[0] + x[1] * x[1] + 8.0;
  fvec[1] = x[0] * x[1] * x[1] + x[0] - 10.0 * x[1] + 8.0;

  return;
}
//****************************************************************************80

void qform_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    QFORM_TEST tests QFORM.
//
//  Licensing:
//
//    This code may freely be copied, modified, and used for any purpose.
//
//  Modified:
//
//    02 January 2018
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *a2;
  double *acnorm;
  int i;
  int *ipivot;
  int j;
  int k;
  int lda = 5;
  int lipvt;
  int m = 5;
  int n = 7;
  bool pivot;
  double *q;
  double *r;
  double *rdiag;
  int seed;

  cout << "\n";
  cout << "QFORM_TEST:\n";
  cout << "  QFORM constructs the Q factor explicitly\n";
  cout << "  after the use of QRFAC.\n";
//
//  Set the matrix A.
//
  a = new double[m*n];

  seed = 123456789;
  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < m; i++ )
    {
      a[i+j*m] = r8_uniform_01 ( seed );
    }
  }
  r8mat_print ( m, n, a, "  Matrix A:" );
//
//  Compute the QR factors.
//
  pivot = false;
  ipivot = new int[n];
  lipvt = n;
  rdiag = new double[n];
  acnorm = new double[n];

  qrfac ( m, n, a, lda, pivot, ipivot, lipvt, rdiag, acnorm );
//
//  Extract the R factor.
//
  r = new double[m*n];
  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < m; i++ )
    {
      r[i+j*m] = 0.0;
    }
  }

  for ( k = 0; k < i4_min ( m, n ); k++ )
  {
    r[k+k*m] = rdiag[k];
  }

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < i4_min ( j, m ); i++ )
    {
      r[i+j*m] = a[i+j*m];
    }
  }
  r8mat_print ( m, n, r, "  Matrix R:" );
//
//  Call QRFORM to form the Q factor.
//
  q = new double[m*m];
  for ( j = 0; j < m; j++ )
  {
    for ( i = 0; i < m; i++ )
    {
      q[i+j*m] = 0.0;
    }
  }

  for ( j = 0; j < i4_min ( m, n ); j++ )
  {
    for ( i = 0; i < m; i++ )
    {
      q[i+j*m] = a[i+j*m];
    }
  }
  qform ( m, n, q, m );

  r8mat_print ( m, m, q, "  Matrix Q:" );
//
//  Compute Q*R.
//
  a2 = r8mat_mm_new ( m, m, n, q, r );
//
//  Compare Q*R to A.
//
  r8mat_print ( m, n, a2, "  Matrix A2 = Q * R:" );
//
//  Free memory.
//
  delete [] a;
  delete [] a2;
  delete [] acnorm;
  delete [] ipivot;
  delete [] q;
  delete [] r;
  delete [] rdiag;

  return;
}