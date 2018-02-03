# include <cstdlib>
# include <iostream>
# include <iomanip>

using namespace std;

# include "correlation.hpp"

int main ( );
void correlation_test01 ( );
void correlation_test02 ( );
void correlation_test03 ( );
void correlation_test04 ( );
void correlation_test05 ( );
void correlation_test06 ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for CORRELATION_PRB.
//
//  Discussion:
//
//    CORRELATION_PRB tests the CORRELATION library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    12 November 2012
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "CORRELATION_PRB\n";
  cout << "  C++ version.\n";
  cout << "  Test the CORRELATION library.\n";

  correlation_test01 ( );
  correlation_test02 ( );
  correlation_test03 ( );
  correlation_test04 ( );
  correlation_test05 ( );
  correlation_test06 ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "CORRELATION_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void correlation_test01 ( )

//****************************************************************************80
//
//  Purpose:
//
//    CORRELATION_TEST01 plots the correlation functions.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 November 2012
//
//  Author:
//
//    John Burkardt
//
{
  double *c;
  double e;
  int n;
  double nu;
  double *rho;
  double rho0;

  cout << "\n";
  cout << "CORRELATION_TEST01\n";
  cout << "  Make plots of correlation functions.\n";
  cout << "\n";

  n = 101;
//
//  besselj
//
  rho0 = 1.0;
  rho = r8vec_linspace_new ( n, -8.0, 8.0 );
  c = correlation_besselj ( n, rho, rho0 );
  correlation_plot ( n, rho, c, "besselj", "Bessel J correlation" );
  delete [] c;
  delete [] rho;
//
//  besselk
//
  rho0 = 1.0;
  rho = r8vec_linspace_new ( n, -4.0, 4.0 );
  c = correlation_besselk ( n, rho, rho0 );
  correlation_plot ( n, rho, c, "besselk", "Bessel K correlation" );
  delete [] c;
  delete [] rho;
//
//  circular
//
  rho0 = 1.0;
  rho = r8vec_linspace_new ( n, -2.0, 2.0 );
  c = correlation_circular ( n, rho, rho0 );
  correlation_plot ( n, rho, c, "circular", "Circular correlation" );
  delete [] c;
  delete [] rho;
//
//  constant
//
  rho0 = 1.0;
  rho = r8vec_linspace_new ( n, -2.0, 2.0 );
  c = correlation_constant ( n, rho, rho0 );
  correlation_plot ( n, rho, c, "constant", "Constant correlation" );
  delete [] c;
  delete [] rho;
//
//  cubic
//
  rho0 = 1.0;
  rho = r8vec_linspace_new ( n, -2.0, 2.0 );
  c = correlation_cubic ( n, rho, rho0 );
  correlation_plot ( n, rho, c, "cubic", "Cubic correlation" );
  delete [] c;
  delete [] rho;
//
//  damped_cosine
//
  rho0 = 1.0;
  rho = r8vec_linspace_new ( n, -6.0, 6.0 );
  c = correlation_damped_cosine ( n, rho, rho0 );
  correlation_plot ( n, rho, c, "damped_cosine", "Damped cosine correlation" );
  delete [] c;
  delete [] rho;
//
//  damped_sine
//
  rho0 = 1.0;
  rho = r8vec_linspace_new ( n, -12.0, 12.0 );
  c = correlation_damped_sine ( n, rho, rho0 );
  correlation_plot ( n, rho, c, "damped_sine", "Damped sine correlation" );
  delete [] c;
  delete [] rho;
//
//  exponential
//
  rho0 = 1.0;
  rho = r8vec_linspace_new ( n, -2.0, 2.0 );
  c = correlation_exponential ( n, rho, rho0 );
  correlation_plot ( n, rho, c, "exponential", "Exponential correlation" );
  delete [] c;
  delete [] rho;
//
//  gaussian
//
  rho0 = 1.0;
  rho = r8vec_linspace_new ( n, -2.0, 2.0 );
  c = correlation_gaussian ( n, rho, rho0 );
  correlation_plot ( n, rho, c, "gaussian", "Gaussian correlation" );
  delete [] c;
  delete [] rho;
//
//  hole
//
  rho0 = 1.0;
  rho = r8vec_linspace_new ( n, -6.0, 6.0 );
  c = correlation_hole ( n, rho, rho0 );
  correlation_plot ( n, rho, c, "hole", "Hole correlation" );
  delete [] c;
  delete [] rho;
//
//  linear
//
  rho0 = 1.0;
  rho = r8vec_linspace_new ( n, -2.0, 2.0 );
  c = correlation_linear ( n, rho, rho0 );
  correlation_plot ( n, rho, c, "linear", "Linear correlation" );
  delete [] c;
  delete [] rho;
//
//  matern, nu = 2.5
//
  rho0 = 1.0;
  nu = 2.5;
  rho = r8vec_linspace_new ( n, -2.0, 2.0 );
  c = correlation_matern ( n, rho, rho0 );
  correlation_plot ( n, rho, c, "matern", "Matern correlation (NU = 2.5)" );
  delete [] c;
  delete [] rho;
//
//  pentaspherical
//
  rho0 = 1.0;
  rho = r8vec_linspace_new ( n, -2.0, 2.0 );
  c = correlation_pentaspherical ( n, rho, rho0 );
  correlation_plot ( n, rho, c, "pentaspherical", "Pentaspherical correlation" );
  delete [] c;
  delete [] rho;
//
//  power, e = 2.0
//
  rho0 = 1.0;
  e = 2.0;
  rho = r8vec_linspace_new ( n, -2.0, 2.0 );
  c = correlation_power ( n, rho, rho0 );
  correlation_plot ( n, rho, c, "power", "Power correlation" );
  delete [] c;
  delete [] rho;
//
//  rational_quadratic
//
  rho0 = 1.0;
  rho = r8vec_linspace_new ( n, -4.0, 4.0 );
  c = correlation_rational_quadratic ( n, rho, rho0 );
  correlation_plot ( n, rho, c, "rational_quadratic", "Rational quadratic correlation" );
  delete [] c;
  delete [] rho;
//
//  spherical
//
  rho0 = 1.0;
  rho = r8vec_linspace_new ( n, -2.0, 2.0 );
  c = correlation_spherical ( n, rho, rho0 );
  correlation_plot ( n, rho, c, "spherical", "Spherical correlation" );
  delete [] c;
  delete [] rho;
//
//  white_noise
//
  rho0 = 1.0;
  rho = r8vec_linspace_new ( n, -2.0, 2.0 );
  c = correlation_white_noise ( n, rho, rho0 );
  correlation_plot ( n, rho, c, "white_noise", "White noise correlation" );
  delete [] c;
  delete [] rho;

  return;
}
//****************************************************************************80

void correlation_test02 ( )

//****************************************************************************80
//
//  Purpose:
//
//    CORRELATION_TEST02 plots sample paths with SAMPLE_PATHS_CHOLESKY.
//
//  Discussion:
//
//    Most paths will be blue, but make the LAST one red so that there will
//    always be one distinguished path that is easy to follow.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 November 2012
//
//  Author:
//
//    John Burkardt
//
{
  int n;
  int n2;
  double *rho;
  double rho0 = 1.0;
  double rhomax = 10.0;
  double rhomin = 0.0;
  int seed;
  double *x;

  cout << "\n";
  cout << "CORRELATION_TEST02\n";
  cout << "  SAMPLE_PATHS_CHOLESKY generates sample paths from the\n";
  cout << "  correlation matrix, factored using the Cholesky factor.\n";
  cout << "  It requires that the correlation matrix is nonnegative definite.\n";
  cout << "\n";
  cout << "  SAMPLE_PATHS_EIGEN generates sample paths from the\n";
  cout << "  correlation matrix, factored using the eigen factorization.\n";
  cout << "  If the correlation matrix is not nonnegative definite,\n";
  cout << "  we simply suppress negative eigenvalues.\n";
  cout << "\n";

  n = 101;
  n2 = 3;
  rho = r8vec_linspace_new ( n, rhomin, rhomax );
//
//  besselj
//  Use EIGEN, because CHOLESKY fails.
//
  seed = 123456789;
  x = sample_paths_eigen ( n, n2, rhomax, rho0, correlation_besselj, seed );
  paths_plot ( n, n2, rho, x, "besselj", "Bessel J correlation" );
  delete [] x;
//
//  besselk
//
  seed = 123456789;
  x = sample_paths_cholesky ( n, n2, rhomax, rho0, correlation_besselk, seed );
  paths_plot ( n, n2, rho, x, "besselk", "Bessel K correlation" );
  delete [] x;
//
//  circular
//
  seed = 123456789;
  x = sample_paths_cholesky ( n, n2, rhomax, rho0, correlation_circular, seed );
  paths_plot ( n, n2, rho, x, "circular", "Circular correlation" );
  delete [] x;
//
//  constant
//
  seed = 123456789;
  x = sample_paths_cholesky ( n, n2, rhomax, rho0, correlation_constant, seed );
  paths_plot ( n, n2, rho, x, "constant", "Constant correlation" );
  delete [] x;
//
//  cubic
//
  seed = 123456789;
  x = sample_paths_cholesky ( n, n2, rhomax, rho0, correlation_cubic, seed );
  paths_plot ( n, n2, rho, x, "cubic", "Cubic correlation" );
  delete [] x;
//
//  damped_cosine
//
  seed = 123456789;
  x = sample_paths_cholesky ( n, n2, rhomax, rho0, correlation_damped_cosine, seed );
  paths_plot ( n, n2, rho, x, "damped_cosine", "Damped cosine correlation" );
  delete [] x;
//
//  damped_sine
//  Use EIGEN, because CHOLESKY fails.
//
  seed = 123456789;
  x = sample_paths_eigen ( n, n2, rhomax, rho0, correlation_damped_sine, seed );
  paths_plot ( n, n2, rho, x, "damped_sine", "Damped sine correlation" );
  delete [] x;
//
//  exponential
//
  seed = 123456789;
  x = sample_paths_cholesky ( n, n2, rhomax, rho0, correlation_exponential, seed );
  paths_plot ( n, n2, rho, x, "exponential", "Exponential correlation" );
  delete [] x;
//
//  gaussian
//  Use EIGEN, because CHOLESKY fails.
//
  seed = 123456789;
  x = sample_paths_eigen ( n, n2, rhomax, rho0, correlation_gaussian, seed );
  paths_plot ( n, n2, rho, x, "gaussian", "Gaussian correlation" );
  delete [] x;
//
//  hole
//
  seed = 123456789;
  x = sample_paths_cholesky ( n, n2, rhomax, rho0, correlation_hole, seed );
  paths_plot ( n, n2, rho, x, "hole", "Hole correlation" );
  delete [] x;
//
//  linear
//
  seed = 123456789;
  x = sample_paths_cholesky ( n, n2, rhomax, rho0, correlation_linear, seed );
  paths_plot ( n, n2, rho, x, "linear", "Linear correlation" );
  delete [] x;
//
//  matern ( nu = 2.5 )
//
  seed = 123456789;
  x = sample_paths_cholesky ( n, n2, rhomax, rho0, correlation_matern, seed );
  paths_plot ( n, n2, rho, x, "matern", "Matern correlation (nu=2.5)" );
  delete [] x;
//
//  pentaspherical
//
  seed = 123456789;
  x = sample_paths_cholesky ( n, n2, rhomax, rho0, correlation_pentaspherical, seed );
  paths_plot ( n, n2, rho, x, "pentaspherical", "Pentaspherical correlation" );
  delete [] x;
//
//  power ( e = 2.0 )
//
  seed = 123456789;
  x = sample_paths_cholesky ( n, n2, rhomax, rho0, correlation_power, seed );
  paths_plot ( n, n2, rho, x, "power", "Power correlation (e=2.0)" );
  delete [] x;
//
//  rational_quadratic
//  Use EIGEN, because CHOLESKY fails.
//
  seed = 123456789;
  x = sample_paths_eigen ( n, n2, rhomax, rho0, correlation_rational_quadratic, seed );
  paths_plot ( n, n2, rho, x, "rational_quadratic", "Rational quadratic correlation" );
  delete [] x;
//
//  spherical
//
  seed = 123456789;
  x = sample_paths_cholesky ( n, n2, rhomax, rho0, correlation_spherical, seed );
  paths_plot ( n, n2, rho, x, "spherical", "Spherical correlation" );
  delete [] x;
//
//  white_noise
//
  seed = 123456789;
  x = sample_paths_cholesky ( n, n2, rhomax, rho0, correlation_white_noise, seed );
  paths_plot ( n, n2, rho, x, "white_noise", "White noise correlation" );
  delete [] x;

  delete [] rho;

  return;
}
//****************************************************************************80

void correlation_test03 ( )

//****************************************************************************80
//
//  Purpose:
//
//    CORRELATION_TEST03 plots a correlation function for several values of RH00.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 November 2012
//
//  Author:
//
//    John Burkardt
//
{
  double *c;
  double *cvec;
  int i;
  int j;
  int n;
  int n2;
  double *rho;
  double *rho0;
  double rhomax;
  double rhomin;

  cout << "\n";
  cout << "CORRELATION_TEST03\n";
  cout << "  Make plots of correlation functions for\n";
  cout << "  a range of correlation lengths.\n";
  cout << "\n";
//
//  besselj
//
  n = 101;
  n2 = 5;
  rho0 = new double[n2];
  rho0[0] = 1.0;
  rho0[1] = 1.5;
  rho0[2] = 2.0;
  rho0[3] = 4.0;
  rho0[4] = 8.0;
  rhomin = -8.0;
  rhomax = +8.0;
  rho = r8vec_linspace_new ( n, rhomin, rhomax );
  c = new double[n*n2];
  for ( j = 0; j < n2; j++ )
  {
    cvec = correlation_besselj ( n, rho, rho0[j] );
    for ( i = 0; i < n; i++ )
    {
      c[i+j*n] = cvec[i];
    }
    delete [] cvec;
  }
  correlation_plots ( n, n2, rho, rho0, c, "besselj", "Bessel J correlation" );
  delete [] c;
  delete [] rho;
  delete [] rho0;
//
//  besselk
//
  n = 101;
  n2 = 5;
  rho0 = new double[n2];
  rho0[0] = 1.0;
  rho0[1] = 1.5;
  rho0[2] = 2.0;
  rho0[3] = 4.0;
  rho0[4] = 8.0;
  rhomin = -4.0;
  rhomax = +4.0;
  rho = r8vec_linspace_new ( n, rhomin, rhomax );
  c = new double[n*n2];
  for ( j = 0; j < n2; j++ )
  {
    cvec = correlation_besselk ( n, rho, rho0[j] );
    for ( i = 0; i < n; i++ )
    {
      c[i+j*n] = cvec[i];
    }
    delete [] cvec;
  }
  correlation_plots ( n, n2, rho, rho0, c, "besselk", "Bessel K correlation" );
  delete [] c;
  delete [] rho;
  delete [] rho0;
//
//  circular
//
  n = 101;
  n2 = 6;
  rho0 = new double[n2];
  rho0[0] = 0.5;
  rho0[1] = 1.0;
  rho0[2] = 1.5;
  rho0[3] = 2.0;
  rho0[4] = 4.0;
  rho0[5] = 8.0;
  rhomin = -4.0;
  rhomax = +4.0;
  rho = r8vec_linspace_new ( n, rhomin, rhomax );
  c = new double[n*n2];
  for ( j = 0; j < n2; j++ )
  {
    cvec = correlation_circular ( n, rho, rho0[j] );
    for ( i = 0; i < n; i++ )
    {
      c[i+j*n] = cvec[i];
    }
    delete [] cvec;
  }
  correlation_plots ( n, n2, rho, rho0, c, "circular", "Circular correlation" );
  delete [] c;
  delete [] rho;
  delete [] rho0;
//
//  constant
//  1 plot is enough
//
  n = 101;
  n2 = 1;
  rho0 = new double[n2];
  rho0[0] = 1.0;
  rhomin = -2.0;
  rhomax = +2.0;
  rho = r8vec_linspace_new ( n, rhomin, rhomax );
  c = new double[n*n2];
  for ( j = 0; j < n2; j++ )
  {
    cvec = correlation_constant ( n, rho, rho0[j] );
    for ( i = 0; i < n; i++ )
    {
      c[i+j*n] = cvec[i];
    }
    delete [] cvec;
  }
  correlation_plots ( n, n2, rho, rho0, c, "constant", "Constant correlation" );
  delete [] c;
  delete [] rho;
  delete [] rho0;
//
//  cubic
//
  n = 101;
  n2 = 6;
  rho0 = new double[n2];
  rho0[0] = 0.5;
  rho0[1] = 1.0;
  rho0[2] = 1.5;
  rho0[3] = 2.0;
  rho0[4] = 4.0;
  rho0[5] = 8.0;
  rhomin = -8.0;
  rhomax = +8.0;
  rho = r8vec_linspace_new ( n, rhomin, rhomax );
  c = new double[n*n2];
  for ( j = 0; j < n2; j++ )
  {
    cvec = correlation_cubic ( n, rho, rho0[j] );
    for ( i = 0; i < n; i++ )
    {
      c[i+j*n] = cvec[i];
    }
    delete [] cvec;
  }
  correlation_plots ( n, n2, rho, rho0, c, "cubic", "Cubic correlation" );
  delete [] c;
  delete [] rho;
  delete [] rho0;
//
//  damped_cosine
//
  n = 101;
  n2 = 6;
  rho0 = new double[n2];
  rho0[0] = 0.5;
  rho0[1] = 1.0;
  rho0[2] = 1.5;
  rho0[3] = 2.0;
  rho0[4] = 4.0;
  rho0[5] = 8.0;
  rhomin = -6.0;
  rhomax = +6.0;
  rho = r8vec_linspace_new ( n, rhomin, rhomax );
  c = new double[n*n2];
  for ( j = 0; j < n2; j++ )
  {
    cvec = correlation_damped_cosine ( n, rho, rho0[j] );
    for ( i = 0; i < n; i++ )
    {
      c[i+j*n] = cvec[i];
    }
    delete [] cvec;
  }
  correlation_plots ( n, n2, rho, rho0, c, "damped_cosine", "Damped cosine correlation" );
  delete [] c;
  delete [] rho;
  delete [] rho0;
//
//  damped_sine
//
  n = 101;
  n2 = 6;
  rho0 = new double[n2];
  rho0[0] = 0.5;
  rho0[1] = 1.0;
  rho0[2] = 1.5;
  rho0[3] = 2.0;
  rho0[4] = 4.0;
  rho0[5] = 8.0;
  rhomin = -8.0;
  rhomax = +8.0;
  rho = r8vec_linspace_new ( n, rhomin, rhomax );
  c = new double[n*n2];
  for ( j = 0; j < n2; j++ )
  {
    cvec = correlation_damped_sine ( n, rho, rho0[j] );
    for ( i = 0; i < n; i++ )
    {
      c[i+j*n] = cvec[i];
    }
    delete [] cvec;
  }
  correlation_plots ( n, n2, rho, rho0, c, "damped_sine", "Damped sine correlation" );
  delete [] c;
  delete [] rho;
  delete [] rho0;
//
//  exponential
//
  n = 101;
  n2 = 7;
  rho0 = new double[n2];
  rho0[0] = 0.25;
  rho0[1] = 0.5;
  rho0[2] = 1.0;
  rho0[3] = 1.5;
  rho0[4] = 2.0;
  rho0[5] = 4.0;
  rho0[6] = 8.0;
  rhomin = -2.0;
  rhomax = +2.0;
  rho = r8vec_linspace_new ( n, rhomin, rhomax );
  c = new double[n*n2];
  for ( j = 0; j < n2; j++ )
  {
    cvec = correlation_exponential ( n, rho, rho0[j] );
    for ( i = 0; i < n; i++ )
    {
      c[i+j*n] = cvec[i];
    }
    delete [] cvec;
  }
  correlation_plots ( n, n2, rho, rho0, c, "exponential", "Exponential correlation" );
  delete [] c;
  delete [] rho;
  delete [] rho0;
//
//  gaussian
//
  n = 101;
  n2 = 7;
  rho0 = new double[n2];
  rho0[0] = 0.25;
  rho0[1] = 0.5;
  rho0[2] = 1.0;
  rho0[3] = 1.5;
  rho0[4] = 2.0;
  rho0[5] = 4.0;
  rho0[6] = 8.0;
  rhomin = -2.0;
  rhomax = +2.0;
  rho = r8vec_linspace_new ( n, rhomin, rhomax );
  c = new double[n*n2];
  for ( j = 0; j < n2; j++ )
  {
    cvec = correlation_gaussian ( n, rho, rho0[j] );
    for ( i = 0; i < n; i++ )
    {
      c[i+j*n] = cvec[i];
    }
    delete [] cvec;
  }
  correlation_plots ( n, n2, rho, rho0, c, "gaussian", "Gaussian correlation" );
  delete [] c;
  delete [] rho;
  delete [] rho0;
//
//  hole
//
  n = 101;
  n2 = 7;
  rho0 = new double[n2];
  rho0[0] = 0.25;
  rho0[1] = 0.5;
  rho0[2] = 1.0;
  rho0[3] = 1.5;
  rho0[4] = 2.0;
  rho0[5] = 4.0;
  rho0[6] = 8.0;
  rhomin = -2.0;
  rhomax = +2.0;
  rho = r8vec_linspace_new ( n, rhomin, rhomax );
  c = new double[n*n2];
  for ( j = 0; j < n2; j++ )
  {
    cvec = correlation_hole ( n, rho, rho0[j] );
    for ( i = 0; i < n; i++ )
    {
      c[i+j*n] = cvec[i];
    }
    delete [] cvec;
  }
  correlation_plots ( n, n2, rho, rho0, c, "hole", "Hole correlation" );
  delete [] c;
  delete [] rho;
  delete [] rho0;
//
//  linear
//
  n = 101;
  n2 = 6;
  rho0 = new double[n2];
  rho0[0] = 0.5;
  rho0[1] = 1.0;
  rho0[2] = 1.5;
  rho0[3] = 2.0;
  rho0[4] = 4.0;
  rho0[5] = 8.0;
  rhomin = -2.0;
  rhomax = +2.0;
  rho = r8vec_linspace_new ( n, rhomin, rhomax );
  c = new double[n*n2];
  for ( j = 0; j < n2; j++ )
  {
    cvec = correlation_linear ( n, rho, rho0[j] );
    for ( i = 0; i < n; i++ )
    {
      c[i+j*n] = cvec[i];
    }
    delete [] cvec;
  }
  correlation_plots ( n, n2, rho, rho0, c, "linear", "Linear correlation" );
  delete [] c;
  delete [] rho;
  delete [] rho0;
//
//  matern, nu = 2.5
//
  n = 101;
  n2 = 6;
  rho0 = new double[n2];
  rho0[0] = 0.5;
  rho0[1] = 1.0;
  rho0[2] = 1.5;
  rho0[3] = 2.0;
  rho0[4] = 4.0;
  rho0[5] = 8.0;
  rhomin = -2.0;
  rhomax = +2.0;
  rho = r8vec_linspace_new ( n, rhomin, rhomax );
  c = new double[n*n2];
  for ( j = 0; j < n2; j++ )
  {
    cvec = correlation_matern ( n, rho, rho0[j] );
    for ( i = 0; i < n; i++ )
    {
      c[i+j*n] = cvec[i];
    }
    delete [] cvec;
  }
  correlation_plots ( n, n2, rho, rho0, c, "matern", "Matern correlation (NU = 2.5)" );
  delete [] c;
  delete [] rho;
  delete [] rho0;
//
//  pentaspherical
//
  n = 101;
  n2 = 6;
  rho0 = new double[n2];
  rho0[0] = 0.5;
  rho0[1] = 1.0;
  rho0[2] = 1.5;
  rho0[3] = 2.0;
  rho0[4] = 4.0;
  rho0[5] = 8.0;
  rhomin = -2.0;
  rhomax = +2.0;
  rho = r8vec_linspace_new ( n, rhomin, rhomax );
  c = new double[n*n2];
  for ( j = 0; j < n2; j++ )
  {
    cvec = correlation_pentaspherical ( n, rho, rho0[j] );
    for ( i = 0; i < n; i++ )
    {
      c[i+j*n] = cvec[i];
    }
    delete [] cvec;
  }
  correlation_plots ( n, n2, rho, rho0, c, "pentaspherical", "Pentaspherical correlation" );
  delete [] c;
  delete [] rho;
  delete [] rho0;
//
//  power, e = 2.0
//
  n = 101;
  n2 = 6;
  rho0 = new double[n2];
  rho0[0] = 0.5;
  rho0[1] = 1.0;
  rho0[2] = 1.5;
  rho0[3] = 2.0;
  rho0[4] = 4.0;
  rho0[5] = 8.0;
  rhomin = -2.0;
  rhomax = +2.0;
  rho = r8vec_linspace_new ( n, rhomin, rhomax );
  c = new double[n*n2];
  for ( j = 0; j < n2; j++ )
  {
    cvec = correlation_power ( n, rho, rho0[j] );
    for ( i = 0; i < n; i++ )
    {
      c[i+j*n] = cvec[i];
    }
    delete [] cvec;
  }
  correlation_plots ( n, n2, rho, rho0, c, "power", "Power correlation (E = 2.0)" );
  delete [] c;
  delete [] rho;
  delete [] rho0;
//
//  rational_quadratic
//
  n = 101;
  n2 = 6;
  rho0 = new double[n2];
  rho0[0] = 0.5;
  rho0[1] = 1.0;
  rho0[2] = 1.5;
  rho0[3] = 2.0;
  rho0[4] = 4.0;
  rho0[5] = 8.0;
  rhomin = -4.0;
  rhomax = +4.0;
  rho = r8vec_linspace_new ( n, rhomin, rhomax );
  c = new double[n*n2];
  for ( j = 0; j < n2; j++ )
  {
    cvec = correlation_rational_quadratic ( n, rho, rho0[j] );
    for ( i = 0; i < n; i++ )
    {
      c[i+j*n] = cvec[i];
    }
    delete [] cvec;
  }
  correlation_plots ( n, n2, rho, rho0, c, "rational_quadratic", "Rational quadratic correlation" );
  delete [] c;
  delete [] rho;
  delete [] rho0;
//
//  spherical
//
  n = 101;
  n2 = 6;
  rho0 = new double[n2];
  rho0[0] = 0.5;
  rho0[1] = 1.0;
  rho0[2] = 1.5;
  rho0[3] = 2.0;
  rho0[4] = 4.0;
  rho0[5] = 8.0;
  rhomin = -8.0;
  rhomax = +8.0;
  rho = r8vec_linspace_new ( n, rhomin, rhomax );
  c = new double[n*n2];
  for ( j = 0; j < n2; j++ )
  {
    cvec = correlation_spherical ( n, rho, rho0[j] );
    for ( i = 0; i < n; i++ )
    {
      c[i+j*n] = cvec[i];
    }
    delete [] cvec;
  }
  correlation_plots ( n, n2, rho, rho0, c, "spherical", "Spherical correlation" );
  delete [] c;
  delete [] rho;
  delete [] rho0;
//
//  white_noise
//  1 plot is enough
//
  n = 101;
  n2 = 1;
  rho0 = new double[n2];
  rho0[0] = 1.0;
  rhomin = -2.0;
  rhomax = +2.0;
  rho = r8vec_linspace_new ( n, rhomin, rhomax );
  c = new double[n*n2];
  for ( j = 0; j < n2; j++ )
  {
    cvec = correlation_white_noise ( n, rho, rho0[j] );
    for ( i = 0; i < n; i++ )
    {
      c[i+j*n] = cvec[i];
    }
    delete [] cvec;
  }
  correlation_plots ( n, n2, rho, rho0, c, "white_noise", "White noise correlation" );
  delete [] c;
  delete [] rho;
  delete [] rho0;

  return;
}
//****************************************************************************80

void correlation_test04 ( )

//****************************************************************************80
//
//  Purpose:
//
//    CORRELATION_TEST04 converts between covariance and correlation matrices.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 November 2012
//
//  Author:
//
//    John Burkardt
//
{
  double *c;
  double *k;
  double *k2;
  int n;
  double *sigma;

  cout << "\n";
  cout << "CORRELATION_TEST04\n";
  cout << "  Convert between a correlation and a covariance matrix.\n";

  n = 5;
  k = minij ( n, n );

  r8mat_print ( n, n, k, "  Covariance matrix K:" );

  c = new double[n*n];
  sigma = new double[n];

  covariance_to_correlation ( n, k, c, sigma );

  r8mat_print ( n, n, c, "  Correlation matrix C:" );

  r8vec_print ( n, sigma, "  Variances:" );

  k2 = correlation_to_covariance ( n, c, sigma );

  r8mat_print ( n, n, k2, "  Recovered covariance matrix K2:" );

  delete [] c;
  delete [] k;
  delete [] k2;
  delete [] sigma;

  return;
}
//****************************************************************************80

void correlation_test05 ( )

//****************************************************************************80
//
//  Purpose:
//
//    CORRELATION_TEST05 calls CORRELATION_BROWNIAN_DISPLAY.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 November 2012
//
//  Author:
//
//    John Burkardt
//
{
  cout << "\n";
  cout << "CORRELATION_TEST05\n";
  cout << "  CORRELATION_BROWNIAN_DISPLAY displays 4 slices of\n";
  cout << "  the Brownian correlation function.\n";

  correlation_brownian_display ( );

  return;
}
//****************************************************************************80

void correlation_test06 ( )

//****************************************************************************80
//
//  Purpose:
//
//    CORRELATION_TEST06 plots sample paths with SAMPLE_PATHS2_CHOLESKY/EIGEN/FFT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    12 November 2012
//
//  Author:
//
//    John Burkardt
//
{
  int n;
  int n2;
  double *rho;
  double rho0;
  double rhomax;
  double rhomin;
  int seed;
  double *x;

  cout << "\n";
  cout << "CORRELATION_TEST06\n";
  cout << "  For non-stationary correlation functions:\n";
  cout << "\n";
  cout << "  SAMPLE_PATHS2_CHOLESKY generates sample paths from the\n";
  cout << "  correlation matrix, factored using the Cholesky factor.\n";
  cout << "  It requires that the correlation matrix is nonnegative definite.\n";
  cout << "\n";
  cout << "  SAMPLE_PATHS2_EIGEN generates sample paths from the\n";
  cout << "  correlation matrix, factored using the eigen factorization.\n";
  cout << "  If the correlation matrix is not nonnegative definite,\n";
  cout << "  we simply suppress negative eigenvalues.\n";
  cout << "\n";
  cout << "  SAMPLE_PATHS2_FFT generates sample paths from the\n";
  cout << "  correlation matrix, factored using the FFT factorization\n";
  cout << "  of the correlation matrix after embedding in a circulant.\n";
  cout << "\n";
/*
  brownian
*/
  n = 101;
  n2 = 3;
  rhomin = 0.0;
  rhomax = 10.0;
  rho0 = 1.0;
  seed = 123456789;
  x = sample_paths2_cholesky ( n, n2, rhomin, rhomax, rho0, correlation_brownian, seed );
  rho = r8vec_linspace_new ( n, rhomin, rhomax );
  paths_plot ( n, n2, rho, x, "brownian", "Brownian correlation" );

  delete [] rho;
  delete [] x;

  return;
}

