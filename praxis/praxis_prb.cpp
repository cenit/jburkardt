# include <cmath>
# include <cstdlib>
# include <cstring>
# include <ctime>
# include <iomanip>
# include <iostream>

using namespace std;

# include "praxis.hpp"

int main ( );
void beale_test ( );
double beale_f ( double x[], int n );
void box_test ( );
double box_f ( double x[], int n );
void chebyquad_test ( );
double chebyquad_f ( double x[], int n );
void cube_test ( );
double cube_f ( double x[], int n );
void helix_test ( );
double helix_f ( double x[], int n );
void hilbert_test ( );
double hilbert_f ( double x[], int n );
void powell3d_test ( );
double powell3d_f ( double x[], int n );
void rosenbrock_test ( );
double rosenbrock_f ( double x[], int n );
void singular_test ( );
double singular_f ( double x[], int n );
void tridiagonal_test ( );
double tridiagonal_f ( double x[], int n );
void watson_test ( );
double watson_f ( double x[], int n );
void wood_test ( );
double wood_f ( double x[], int n );
void minfit_test ( );
void svsort_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for PRAXIS_PRB.
//
//  Discussion:
//
//    PRAXIS_PRB tests the PRAXIS library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 August 2016
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "PRAXIS_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the PRAXIS library.\n";
//
//  Minimization tests.
//
  beale_test ( );
  box_test ( );
  chebyquad_test ( );
  cube_test ( );
  helix_test ( );
  hilbert_test ( );
  powell3d_test ( );
  rosenbrock_test ( );
  singular_test ( );
  tridiagonal_test ( );
  watson_test ( );
  wood_test ( );
//
//  Utility tests.
//
  minfit_test ( );
  svsort_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "PRAXIS_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void beale_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    BEALE_TEST calls PRAXIS for the Beale function.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 August 2016
//
//  Author:
//
//    John Burkardt
//
{
  double h0;
  int i;
  int n = 2;
  double pr;
  int prin;
  double t0;
  double x[2] = { 0.1, 0.1 };

  cout << "\n";
  cout << "BEALE_TEST\n";
  cout << "  The Beale function.\n";

  t0 = 0.00001;
  h0 = 0.25;
  prin = 0;

  r8vec_print ( n, x, "  Initial point:" );

  cout << "  Function value = " << beale_f ( x, n ) << "\n";

  pr = praxis ( t0, h0, n, prin, x, beale_f );

  r8vec_print ( n, x, "  Computed minimizer:" );
  
  cout << "  Function value = " << beale_f ( x, n ) << "\n";

  return;
}
//****************************************************************************80

double beale_f ( double x[], int n )

//****************************************************************************80
//
//  Purpose:
//
//    BEALE_F evaluates the Beale function.
//
//  Discussion:
//
//    The function is the sum of the squares of three functions.
//
//    This function has a valley approaching the line X(2) = 1.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 August 2016
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    E Beale,
//    On an Iterative Method for Finding a Local Minimum of a Function
//    of More than One Variable,
//    Technical Report 25, Statistical Techniques Research Group,
//    Princeton University, 1958.
//
//    Richard Brent,
//    Algorithms for Finding Zeros and Extrema of Functions Without
//    Calculating Derivatives,
//    Stanford University Technical Report STAN-CS-71-198.
//
//  Parameters:
//
//    Input, double X[N], the evaluation point.
//
//    Input, int N, the number of variables.
//
//    Output, double BEALE_F, the function value.
//
{
  const double c1 = 1.5;
  const double c2 = 2.25;
  const double c3 = 2.625;
  double fx1;
  double fx2;
  double fx3;
  double value;

  fx1 = c1 - x[0] * ( 1.0 -       x[1]      );
  fx2 = c2 - x[0] * ( 1.0 - pow ( x[1], 2 ) );
  fx3 = c3 - x[0] * ( 1.0 - pow ( x[1], 3 ) );

  value = fx1 * fx1 + fx2 * fx2 + fx3 * fx3;

  return value;
}
//****************************************************************************80

void box_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    BOX_TEST calls PRAXIS for the Box function.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 August 2016
//
//  Author:
//
//    John Burkardt
//
{
  double h0;
  int i;
  int n = 3;
  double pr;
  int prin;
  double t0;
  double x[3] = { 0.0, 10.0, 20.0 };

  cout << "\n";
  cout << "BOX_TEST\n";
  cout << "  The Box function.\n";

  t0 = 0.00001;
  h0 = 20.0;
  prin = 0;

  r8vec_print ( n, x, "  Initial point:" );

  cout << "  Function value = " << box_f ( x, n ) << "\n";

  pr = praxis ( t0, h0, n, prin, x, box_f );

  r8vec_print ( n, x, "  Computed minimizer:" );

  cout << "  Function value = " << box_f ( x, n ) << "\n";

  return;
}
//****************************************************************************80

double box_f ( double x[], int n )

//****************************************************************************80
//
//  Purpose:
//
//    BOX_F evaluates the Box function.
//
//  Discussion:
//
//    The function is formed by the sum of squares of 10 separate terms.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 August 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double X[N], the evaluation point.
//
//    Input, int N, the number of variables.
//
//    Output, double BOX_F, the function value.
//
{
  double c;
  double fx;
  int i;
  double value;

  value = 0.0;

  for ( i = 1; i <= 10; i++ )
  {
    c = - ( double ) ( i ) / 10.0;

    fx = exp ( c * x[0] ) - exp ( c * x[1] ) - x[2] * ( exp ( c ) 
      - exp ( 10.0 * c ) );
   
    value = value + fx * fx;
  }

  return value;
}
//****************************************************************************80

void chebyquad_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    CHEBYQUAD_TEST calls PRAXIS for the Chebyquad function.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 August 2016
//
//  Author:
//
//    John Burkardt
//
{
  double h0;
  int i;
  int n = 8;
  double pr;
  int prin;
  double t0;
  double x[8];

  cout << "\n";
  cout << "CHEBYQUAD_TEST\n";
  cout << "  The Chebyquad function.\n";

  t0 = 0.00001;
  h0 = 0.1;
  prin = 0;

  for ( i = 0; i < n; i++ )
  {
    x[i] = ( double ) ( i + 1 ) / ( double ) ( n + 1 );
  }

  r8vec_print ( n, x, "  Initial point:" );

  cout << "  Function value = " << chebyquad_f ( x, n ) << "\n";

  pr = praxis ( t0, h0, n, prin, x, chebyquad_f );

  r8vec_print ( n, x, "  Computed minimizer:" );

  cout << "  Function value = " << chebyquad_f ( x, n ) << "\n";

  return;
}
//****************************************************************************80

double chebyquad_f ( double x[], int n )

//****************************************************************************80
//
//  Purpose:
//
//    CHEBYQUAD_F evaluates the Chebyquad function.
//
//  Discussion:
//
//    The function is formed by the sum of squares of N separate terms.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 August 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double X[N], the evaluation point.
//
//    Input, int N, the number of variables.
//
//    Output, double CHEBYQUAD_F, the function value.
//
{
  double *fvec;
  int i;
  int j;
  double t;
  double t1;
  double t2;
  double th;
  double value;

  fvec = new double[n];

  for ( i = 0; i < n; i++ )
  {
    fvec[i] = 0.0;
  }

  for ( j = 0; j < n; j++ )
  {
    t1 = 1.0;
    t2 = 2.0 * x[j] - 1.0;
    t = 2.0 * t2;

    for ( i = 0; i < n; i++ )
    {
      fvec[i] = fvec[i] + t2;
      th = t * t2 - t1;
      t1 = t2;
      t2 = th;
    }

  }

  for ( i = 0; i < n; i++ )
  {
    fvec[i] = fvec[i] / ( double ) ( n );
    if ( ( i % 2 ) == 1 )
    {
      fvec[i] = fvec[i] + 1.0 / ( double ) ( i * ( i + 2 ) );
    }
  }
//
//  Compute F.
//
  value = 0.0;
  for ( i = 0; i < n; i++ )
  {
    value = value + fvec[i] * fvec[i];
  }

  delete [] fvec;

  return value;
}
//****************************************************************************80

void cube_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    CUBE_TEST calls PRAXIS for the Cube function.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 August 2016
//
//  Author:
//
//    John Burkardt
//
{
  double h0;
  int i;
  int n = 2;
  double pr;
  int prin;
  double t0;
  double x[2] = { -1.2, -1.0 };

  cout << "\n";
  cout << "CUBE_TEST\n";
  cout << "  The Cube function.\n";

  t0 = 0.00001;
  h0 = 1.0;
  prin = 0;

  r8vec_print ( n, x, "  Initial point:" );

  cout << "  Function value = " << cube_f ( x, n ) << "\n";

  pr = praxis ( t0, h0, n, prin, x, cube_f );

  r8vec_print ( n, x, "  Computed minimizer:" );

  cout << "  Function value = " << cube_f ( x, n ) << "\n";

  return;
}
//****************************************************************************80

double cube_f ( double x[], int n )

//****************************************************************************80
//
//  Purpose:
//
//    CUBE_F evaluates the Cube function.
//
//  Discussion:
//
//    The function is the sum of the squares of two functions.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 August 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double X[N], the evaluation point.
//
//    Input, int N, the number of variables.
//
//    Output, double CUBE_F, the function value.
//
{
  double fx1;
  double fx2;
  double value;

  fx1 = 10.0 * ( x[1] - x[0] * x[0] * x[0] );
  fx2 = 1.0 - x[0];

  value = fx1 * fx1 + fx2 * fx2;

  return value;
}
//****************************************************************************80

void helix_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    HELIX_TEST calls PRAXIS for the Fletcher-Powell Helix function.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 August 2016
//
//  Author:
//
//    John Burkardt
//
{
  double h0;
  int i;
  int n = 3;
  double pr;
  int prin;
  double t0;
  double x[3] = { -1.0, 0.0, 0.0 };

  cout << "\n";
  cout << "HELIX_TEST\n";
  cout << "  The Fletcher-Powell Helix function.\n";

  t0 = 0.00001;
  h0 = 1.0;
  prin = 0;

  r8vec_print ( n, x, "  Initial point:" );

  cout << "  Function value = " << helix_f ( x, n ) << "\n";

  pr = praxis ( t0, h0, n, prin, x, helix_f );

  r8vec_print ( n, x, "  Computed minimizer:" );

  cout << "  Function value = " << helix_f ( x, n ) << "\n";

  return;
}
//****************************************************************************80

double helix_f ( double x[], int n )

//****************************************************************************80
//
//  Purpose:
//
//    HELIX_F evaluates the Helix function.
//
//  Discussion:
//
//    The function is the sum of the squares of three functions.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 August 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double X[N], the evaluation point.
//
//    Input, int N, the number of variables.
//
//    Output, double HELIX_F, the function value.
//
{
  double fx1;
  double fx2;
  double fx3;
  double r;
  const double r8_pi = 3.141592653589793;
  double theta;
  double value;

  r = sqrt ( x[0] * x[0] + x[1] * x[1] );

  if ( 0.0 <= x[0] )
  {
    theta = 0.5 * atan2 ( x[1], x[0] ) / r8_pi;
  }
  else if ( x[0] < 0.0 )
  {
    theta = 0.5 * ( atan2 ( x[1], x[0] ) + r8_pi ) / r8_pi;
  }

  fx1 = 10.0 * ( x[2] - 10.0 * theta );
  fx2 = 10.0 * ( r - 1.0 );
  fx3 = x[2];

  value = fx1 * fx1 + fx2 * fx2 + fx3 * fx3;

  return value;
}
//****************************************************************************80

void hilbert_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    HILBERT_TEST calls PRAXIS for the Hilbert function.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 August 2016
//
//  Author:
//
//    John Burkardt
//
{
  double h0;
  int i;
  int n = 10;
  double pr;
  int prin;
  double t0;
  double x[10];

  cout << "\n";
  cout << "HILBERT_TEST\n";
  cout << "  The Hilbert function.\n";

  t0 = 0.00001;
  h0 = 10.0;
  prin = 0;

  for ( i = 0; i < n; i++ )
  {
    x[i] = 1.0;
  }

  r8vec_print ( n, x, "  Initial point:" );

  cout << "  Function value = " << hilbert_f ( x, n ) << "\n";

  pr = praxis ( t0, h0, n, prin, x, hilbert_f );

  r8vec_print ( n, x, "  Computed minimizer:" );

  cout << "  Function value = " << hilbert_f ( x, n ) << "\n";

  return;
}
//****************************************************************************80

double hilbert_f ( double x[], int n )

//****************************************************************************80
//
//  Purpose:
//
//    HILBERT_F evaluates the Hilbert function.
//
//  Discussion:
//
//    The function is a positive definite quadratic double of the form
//
//      f(x) = x" A x
//
//    where A is the Hilbert matrix, A(I,J) = 1/(I+J-1).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 August 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double X[N], the evaluation point.
//
//    Input, int N, the number of variables.
//
//    Output, double HILBERT_F, the function value.
//
{
  int i;
  int j;
  double value;

  value = 0.0;

  for ( i = 0; i < n; i++ )
  {
    for ( j = 0; j < n; j++ )
    {
      value = value + x[i] * x[j] / ( double ) ( i + j + 1 );
    }
  }

  return value;
}
//****************************************************************************80

void minfit_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    MINFIT_TEST tests MINFIT, which is a sort of SVD computation.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 August 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  double *a2;
  double *d;
  int i;
  int j;
  int k;
  int n = 5;
  double tol;

  cout << "\n";
  cout << "MINFIT_TEST\n";
  cout << "  MINFIT computes part of the SVD of a matrix A.\n";
  cout << "    SVD: A = U * D * V'\n";
  cout << "  MINFIT is given A, and returns the diagonal D\n";
  cout << "  and the orthogonal matrix V.\n";
 
  a = new double[n*n];

  for ( j = 0; j < n; j++ )
  {
    for ( i = 0; i < n; i++ )
    {
      if ( j == i - 1 || j == i + 1 )
      {
        a[i+j*n] = -1.0;
      }
      else if ( i == j )
      {
        a[i+j*n] = 2.0;
      }
      else
      {
        a[i+j*n] = 0.0;
      }
    }
  }

  r8mat_print ( n, n, a, "  The matrix A:" );

  tol = sqrt ( r8_epsilon ( ) );

  d = new double[n];

  minfit ( n, tol, a, d );

  r8mat_print ( n, n, a, "  The vector V:" );

  r8vec_print ( n, d, "  The singular values D:" );
//
//  Because A is positive definite symmetric, the "missing" matrix V = U.
//
  cout << "\n";
  cout << "  Because A is positive definite symmetric,\n";
  cout << "  we can reconstruct it as A = V * D * V'\n";

  a2 = new double[n*n];

  for ( i = 0; i < n; i++ )
  {
    for ( j = 0; j < n; j++ )
    {
      a2[i+j*n] = 0.0;
      for ( k = 0; k < n; k++ )
      {
        a2[i+j*n] = a2[i+j*n] + a[i+k*n] * d[k] * a[j+k*n];
      }
    }
  }

  r8mat_print ( n, n, a2, "  The product A2 = V * D * V'" );

  delete [] a;
  delete [] a2;
  delete [] d;

  return;
}
//****************************************************************************80

void powell3d_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    POWELL3D_TEST calls PRAXIS for the Powell 3D function.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 August 2016
//
//  Author:
//
//    John Burkardt
//
{
  double h0;
  int i;
  int n = 3;
  double pr;
  int prin;
  double t0;
  double x[3] = { 0.0, 1.0, 2.0 };

  cout << "\n";
  cout << "POWELL3D_TEST\n";
  cout << "  The Powell 3D function.\n";

  t0 = 0.00001;
  h0 = 1.0;
  prin = 0;

  r8vec_print ( n, x, "  Initial point:" );

  cout << "  Function value = " << powell3d_f ( x, n ) << "\n";

  pr = praxis ( t0, h0, n, prin, x, powell3d_f );

  r8vec_print ( n, x, "  Computed minimizer:" );

  cout << "  Function value = " << powell3d_f ( x, n ) << "\n";

  return;
}
//****************************************************************************80

double powell3d_f ( double x[], int n )

//****************************************************************************80
//
//  Purpose:
//
//    POWELL3D_F evaluates the Powell 3D function.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 August 2016
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    M J D Powell,
//    An Efficient Method for Finding the Minimum of a double of
//    Several Variables Without Calculating Derivatives,
//    Computer Journal, 
//    Volume 7, Number 2, pages 155-162, 1964.
//
//  Parameters:
//
//    Input, double X[N], the evaluation point.
//
//    Input, int N, the number of variables.
//
//    Output, double POWELL3D_F, the function value.
//
{
  const double r8_pi = 3.141592653589793;
  double value;

  value = 3.0 - 1.0 / ( 1.0 + pow ( x[0] - x[1], 2 ) ) 
    - sin ( 0.5 * r8_pi * x[1] * x[2] ) 
    - exp ( - pow ( ( x[0] - 2.0 * x[1] + x[2] ) / x[1], 2 ) );

  return value;
}
//****************************************************************************80

void rosenbrock_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    ROSENBROCK_TEST calls PRAXIS for the Rosenbrock function.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 August 2016
//
//  Author:
//
//    John Burkardt
//
{
  double h0;
  int i;
  int n = 2;
  double pr;
  int prin;
  double t0;
  double x[2] = { -1.2, 1.0 };

  cout << "\n";
  cout << "ROSENBROCK_TEST\n";
  cout << "  The Rosenbrock function.\n";

  t0 = 0.00001;
  h0 = 1.0;
  prin = 0;

  r8vec_print ( n, x, "  Initial point:" );

  cout << "  Function value = " << rosenbrock_f ( x, n ) << "\n";

  pr = praxis ( t0, h0, n, prin, x, rosenbrock_f );

  r8vec_print ( n, x, "  Computed minimizer:" );

  cout << "  Function value = " << rosenbrock_f ( x, n ) << "\n";

  return;
}
//****************************************************************************80

double rosenbrock_f ( double x[], int n )

//****************************************************************************80
//
//  Purpose:
//
//    ROSENBROCK_F evaluates the Rosenbrock function.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 August 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double X[N], the evaluation point.
//
//    Input, int N, the number of variables.
//
//    Output, double ROSENBROCK_F, the function value.
//
{
  int j;
  double value;

  value = 0.0;

  for ( j = 0; j < n; j++ )
  {
    if ( ( j % 2 ) == 0 )
    {
      value = value + pow ( 1.0 - x[j], 2 );
    }
    else
    {
      value = value + 100.0 * pow ( x[j] - x[j-1] * x[j-1], 2 );
    }
  }

  return value;
}
//****************************************************************************80

void singular_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    SINGULAR_TEST calls PRAXIS for the Powell Singular function.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 August 2016
//
//  Author:
//
//    John Burkardt
//
{
  double h0;
  int i;
  int n = 4;
  double pr;
  int prin;
  double t0;
  double x[4] = { 3.0, -1.0, 0.0, 1.0 };

  cout << "\n";
  cout << "SINGULAR_TEST\n";
  cout << "  The Powell Singular function.\n";

  t0 = 0.00001;
  h0 = 1.0;
  prin = 0;

  r8vec_print ( n, x, "  Initial point:" );

  cout << "  Function value = " << singular_f ( x, n ) << "\n";

  pr = praxis ( t0, h0, n, prin, x, singular_f );

  r8vec_print ( n, x, "  Computed minimizer:" );

  cout << "  Function value = " << singular_f ( x, n ) << "\n";

  return;
}
//****************************************************************************80

double singular_f ( double x[], int n )

//****************************************************************************80
//
//  Purpose:
//
//    SINGULAR_F evaluates the Powell Singular function.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 August 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double X[N], the evaluation point.
//
//    Input, int N, the number of variables.
//
//    Output, double SINGULAR_F, the function value.
//
{
  double f1;
  double f2;
  double f3;
  double f4;
  int j;
  double value;
  double xjp1;
  double xjp2;
  double xjp3;

  value = 0.0;

  for ( j = 1; j <= n; j = j + 4 )
  {
    if ( j + 1 <= n )
    {
      xjp1 = x[j];
    }
    else
    {
      xjp1 = 0.0;
    }

    if ( j + 2 <= n )
    {
      xjp2 = x[j+1];
    }
    else
    {
      xjp2 = 0.0;
    }

    if ( j + 3 <= n )
    {
      xjp3 = x[j+2];
    }
    else
    {
      xjp3 = 0.0;
    }
 
    f1 = x[j-1] + 10.0 * xjp1;

    if ( j + 1 <= n )
    {
      f2 = xjp2 - xjp3;
    }
    else
    {
      f2 = 0.0;
    }

    if ( j + 2 <= n )
    {
      f3 = xjp1 - 2.0 * xjp2;
    }
    else
    {
      f3 = 0.0;
    }

    if ( j + 3 <= n )
    {
      f4 = x[j-1] - xjp3;
    }
    else
    {
      f4 = 0.0;
    }

    value = value 
      +        pow ( f1, 2 ) 
      +  5.0 * pow ( f2, 2 )
      +        pow ( f3, 4 )
      + 10.0 * pow ( f4, 4 );
  }

  return value;
}
//****************************************************************************80

void tridiagonal_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    TRIDIAGONAL_TEST calls PRAXIS for the Tridiagonal function.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 August 2016
//
//  Author:
//
//    John Burkardt
//
{
  double h0;
  int i;
  int n = 4;
  double pr;
  int prin;
  double t0;
  double x[4];

  cout << "\n";
  cout << "TRIDIAGONAL_TEST\n";
  cout << "  The Tridiagonal function.\n";

  t0 = 0.00001;
  h0 = 8.0;
  prin = 0;

  for ( i = 0; i < n; i++ )
  {
    x[i] = 0.0;
  }

  r8vec_print ( n, x, "  Initial point:" );

  cout << "  Function value = " << tridiagonal_f ( x, n ) << "\n";

  pr = praxis ( t0, h0, n, prin, x, tridiagonal_f );

  r8vec_print ( n, x, "  Computed minimizer:" );

  cout << "  Function value = " << tridiagonal_f ( x, n ) << "\n";

  return;
}
//****************************************************************************80

double tridiagonal_f ( double x[], int n )

//****************************************************************************80
//
//  Purpose:
//
//    TRIDIAGONAL_F evaluates the tridiagonal function.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 August 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double X[N], the evaluation point.
//
//    Input, int N, the number of variables.
//
//    Output, double TRIDIAGONAL_F, the function value.
//
{
  int i;
  double value;

  value = x[0] * x[0];
  for ( i = 1; i < n; i++ )
  {
    value = value + 2.0 * x[i] * x[i];
  }

  for ( i = 0; i < n - 1; i++ )
  {
    value = value - 2.0 * x[i] * x[i+1];
  }

  value = value - 2.0 * x[0];

  return value;
}
//****************************************************************************80

void watson_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    WATSON_TEST calls PRAXIS for the Watson function.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    30 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double h0;
  int i;
  int n = 6;
  double pr;
  int prin;
  double t0;
  double value;
  double x[6];

  cout << "\n";
  cout << "WATSON_TEST\n";
  cout << "  The Watson function.\n";

  t0 = 0.00001;
  h0 = 1.0;
  prin = 0;

  for ( i = 0; i < n; i++ )
  {
    x[i] = 0.0;
  }

  r8vec_print ( n, x, "  Initial point:" );

  cout << "  Function value = " << watson_f ( x, n ) << "\n";

  pr = praxis ( t0, h0, n, prin, x, watson_f );

  r8vec_print ( n, x, "  Computed minimizer:" );

  cout << "  Function value = " << watson_f ( x, n ) << "\n";

  return;
}
//****************************************************************************80

double watson_f ( double x[], int n )

//****************************************************************************80
//
//  Purpose:
//
//    WATSON_F evaluates the Watson function.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    30 July 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double X[N], the evaluation point.
//
//    Input, int N, the number of variables.
//
//    Output, double WATSON_F, the function value.
//
{
  double d;
  int i;
  int j;
  double s1;
  double s2;
  double value;

  value = 0.0;

  for ( i = 1; i <= 29; i++ )
  {
    s1 = 0.0;
    d = 1.0;
    for ( j = 1; j < n; j++ )
    {
      s1 = s1 + ( double ) ( j ) * d * x[j];
      d = d * ( double ) ( i ) / 29.0;
    }

    s2 = 0.0;
    d = 1.0;
    for ( j = 0; j < n; j++ )
    {
      s2 = s2 + d * x[j];
      d = d * ( double ) ( i ) / 29.0;
    }

    value = value + pow ( s1 - s2 * s2 - 1.0, 2 );
  }

  value = value + x[0] * x[0] + pow ( x[1] - x[0] * x[0] - 1.0, 2 );

  return value;
}
//****************************************************************************80

void wood_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    WOOD_TEST calls PRAXIS for the Wood function.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    30 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double h0;
  int i;
  int n = 4;
  double pr;
  int prin;
  double t0;
  double value;
  double x[4] = { -3.0, -1.0, -3.0, -1.0 };

  cout << "\n";
  cout << "WOOD_TEST\n";
  cout << "  The Wood function.\n";

  t0 = 0.00001;
  h0 = 10.0;
  prin = 0;

  r8vec_print ( n, x, "  Initial point:" );

  cout << "  Function value = " << wood_f ( x, n ) << "\n";

  pr = praxis ( t0, h0, n, prin, x, wood_f );

  r8vec_print ( n, x, "  Computed minimizer:" );

  cout << "  Function value = " << wood_f ( x, n ) << "\n";

  return;
}
//****************************************************************************80

double wood_f ( double x[], int n )

//****************************************************************************80
//
//  Purpose:
//
//    WOOD_F evaluates the Wood function.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    30 July 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double X[N], the evaluation point.
//
//    Input, int N, the number of variables.
//
//    Output, double WOOD_F, the function value.
//
{
  double f1;
  double f2;
  double f3;
  double f4;
  double f5;
  double f6;
  double value;

  f1 = x[1] - x[0] * x[0];
  f2 = 1.0 - x[0];
  f3 = x[3] - x[2] * x[2];
  f4 = 1.0 - x[2];
  f5 = x[1] + x[3] - 2.0;
  f6 = x[1] - x[3];

  value = 
      100.0 * f1 * f1
    +         f2 * f2 
    +  90.0 * f3 * f3 
    +         f4 * f4 
    +  10.0 * f5 * f5 
    +   0.1 * f6 * f6;

  return value;
}
//****************************************************************************80

void svsort_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    SVSORT_TEST tests SVSORT, which sorts singular value information.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 August 2016
//
//  Author:
//
//    John Burkardt
//
{
  double d[5];
  int i;
  int j;
  int n = 5;
  int seed;
  double v[5*5];

  cout << "\n";
  cout << "SVSORT_TEST\n";
  cout << "  SVSORT sorts a vector D, and the corresponding columns\n";
  cout << "  of a matrix V.\n";
  
  seed = 123456789;

  for ( i = 0; i < n; i++ )
  {
    d[i] = r8_uniform_01 ( seed );
  }

  for ( i = 0; i < n; i++ )
  {
    for ( j = 0; j < n; j++ )
    {
      v[i+j*n] = ( double ) ( 10 * ( i + 1 ) + j + 1 );
    }
  }

  cout << "\n";
  cout << "  First row = entries of D.\n";
  cout << "  Corresponding columns of V below.\n";
  cout << "\n";
  for ( j = 0; j < n; j++ )
  {
    cout << setw(14) << d[j];
  }
  cout << "\n";
  cout << "\n";
  for ( i = 0; i < n; i++ )
  {
    for ( j = 0; j < n; j++ )
    {
      cout << setw(14)<< v[i+j*n];
    }
    cout << "\n";
  }

  svsort ( n, d, v );

  cout << "\n";
  cout << "  After sorting D and rearranging V:\n";
  cout << "\n";
  for ( j = 0; j < n; j++ )
  {
    cout << setw(14) << d[j];
  }
  cout << "\n";
  cout << "\n";
  for ( i = 0; i < n; i++ )
  {
    for ( j = 0; j < n; j++ )
    {
      cout << setw(14)<< v[i+j*n];
    }
    cout << "\n";
  }

  return;
}

