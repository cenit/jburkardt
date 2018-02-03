# include <math.h>
# include <stdio.h>
# include <stdlib.h>

# include "gegenbauer_cc.h"

int main ( );
double f ( double x );
void chebyshev_even1_test ( );
void chebyshev_even2_test ( );
void gegenbauer_cc1_test ( );
void gegenbauer_cc2_test ( );
void i4_uniform_ab_test ( );
void r8_mop_test ( );
void r8vec_print_test ( );
void r8vec2_print_test ( );

/******************************************************************************/

int main ( )

/******************************************************************************/
/*
  Purpose:

    MAIN is the main program for GEGENBAUER_CC_PRB.

  Licensing:

    This code is distributed under the GNU LGPL license. 

  Modified:

    15 January 2016

  Author:

    John Burkardt
*/
{
  timestamp ( );
  printf ( "\n" );
  printf ( "GEGENBAUER_CC_PRB:\n" );
  printf ( "  C version.\n" );
  printf ( "  Test the GEGENBAUER_CC library.\n" );

  chebyshev_even1_test ( );
  chebyshev_even2_test ( );
  gegenbauer_cc1_test ( );
  gegenbauer_cc2_test ( );
  i4_uniform_ab_test ( );
  r8_mop_test ( );
  r8vec_print_test ( );
  r8vec2_print_test ( );
/*
  Terminate.
*/
  printf ( "\n" );
  printf ( "GEGENBAUER_CC_PRB:\n" );
  printf ( "  Normal end of execution.\n" );
  printf ( "\n" );
  timestamp ( );

  return 0;
}
/******************************************************************************/

double f ( double x )

/******************************************************************************/
/*
  Purpose:

    F is the function to be integrated.

  Licensing:

    This code is distributed under the GNU LGPL license. 

  Modified:

    15 January 2016

  Author:

    John Burkardt

  Parameters:

    Input, double X, the argument.

    Output, double F, the value.
*/
{
  double a;
  double value;

  a = 2.0;
  value = cos ( a * x );

  return value;
}
/******************************************************************************/

void chebyshev_even1_test ( )

/******************************************************************************/
/*
  Purpose:

    CHEBYSHEV_EVEN1_TEST tests CHEBYSHEV_EVEN1.

  Licensing:

    This code is distributed under the GNU LGPL license. 

  Modified:

    15 January 2016

  Author:

    John Burkardt
*/
{
  double a;
  double *a2;
  double a2_exact[4] = {
    0.4477815660, 
   -0.7056685603, 
    0.0680357987, 
   -0.0048097159 };
  double lambda;
  int s;
  int n;

  printf ( "\n" );
  printf ( "CHEBYSHEV_EVEN1_TEST:\n" );
  printf ( "  CHEBYSHEV_EVEN1 computes the even Chebyshev coefficients\n" );
  printf ( "  of a function F, using the extreme points of Tn(x).\n" );

  lambda = 0.75;
  a = 2.0;
  n = 6;

  a2 = chebyshev_even1 ( n, f );

  s = ( n / 2 );
  r8vec2_print ( s + 1, a2, a2_exact, "  Computed and Exact Coefficients:" );

  free ( a2 );

  return;
}
/******************************************************************************/

void chebyshev_even2_test ( )

/******************************************************************************/
/*
  Purpose:

    CHEBYSHEV_EVEN2_TEST tests CHEBYSHEV_EVEN2.

  Licensing:

    This code is distributed under the GNU LGPL license. 

  Modified:

    15 January 2016

  Author:

    John Burkardt
*/
{
  double a;
  double *b2;
  double lambda;
  int n;
  int s;

  printf ( "\n" );
  printf ( "CHEBYSHEV_EVEN2_TEST:\n" );
  printf ( "  CHEBYSHEV_EVEN2 computes the even Chebyshev coefficients\n" );
  printf ( "  of a function F, using the zeros of Tn(x).\n" );

  lambda = 0.75;
  a = 2.0;
  n = 6;

  b2 = chebyshev_even2 ( n, f );

  s = ( n / 2 );
  r8vec_print ( s + 1, b2,"  Computed Coefficients:" );

  free ( b2 );

  return;
}
/******************************************************************************/

void gegenbauer_cc1_test ( )

/******************************************************************************/
/*
  Purpose:

    GEGENBAUER_CC1_TEST tests GEGENBAUER_CC1.

  Licensing:

    This code is distributed under the GNU LGPL license. 

  Modified:

    15 January 2016

  Author:

    John Burkardt
*/
{
  double a;
  double exact;
  double lambda;
  int n;
  const double r8_pi = 3.141592653589793;
  double value;

  printf ( "\n" );
  printf ( "GEGENBAUER_CC1_TEST:\n" );
  printf ( "  GEGENBAUER_CC1 estimates the Gegenbauer integral of\n" );
  printf ( "  a function f(x) using a Clenshaw-Curtis type approach\n" );
  printf ( "  based on the extreme points of Tn(x).\n" );

  lambda = 0.75;
  a = 2.0;
  n = 6;

  value = gegenbauer_cc1 ( n, lambda, f );

  printf ( "\n" );
  printf ( "  Value = %g\n", value );
  exact = tgamma ( lambda + 0.5 ) * sqrt ( r8_pi ) * besselj ( lambda, a ) 
    / pow ( 0.5 * a, lambda );
  printf ( "  Exact = %g\n", exact );

  return;
}
/******************************************************************************/

void gegenbauer_cc2_test ( )

/******************************************************************************/
/*
  Purpose:

    GEGENBAUER_CC2_TEST tests GEGENBAUER_CC2.

  Licensing:

    This code is distributed under the GNU LGPL license. 

  Modified:

    15 January 2016

  Author:

    John Burkardt
*/
{
  double a;
  double exact;
  double lambda;
  int n;
  const double r8_pi = 3.141592653589793;
  double value;

  printf ( "\n" );
  printf ( "GEGENBAUER_CC2_TEST:\n" );
  printf ( "  GEGENBAUER_CC2 estimates the Gegenbauer integral of\n" );
  printf ( "  a function f(x) using a Clenshaw-Curtis type approach\n" );
  printf ( "  based on the zeros of Tn(x).\n" );

  lambda = 0.75;
  a = 2.0;
  n = 6;

  value = gegenbauer_cc2 ( n, lambda, f );

  printf ( "\n" );
  printf ( "  Value = %g\n", value );
  exact = tgamma ( lambda + 0.5 ) * sqrt ( r8_pi ) * besselj ( lambda, a ) 
    / pow ( 0.5 * a, lambda );
  printf ( "  Exact = %g\n", exact );

  return;
}
/******************************************************************************/

void i4_uniform_ab_test ( )

/******************************************************************************/
/*
  Purpose:

    I4_UNIFORM_TEST tests I4_UNIFORM_AB.

  Licensing:

    This code is distributed under the GNU LGPL license. 

  Modified:

    27 October 2014

  Author:

    John Burkardt
*/
{
  int a = -100;
  int b = 200;
  int i;
  int j;
  int seed = 123456789;

  printf ( "\n" );
  printf ( "I4_UNIFORM_TEST\n" );
  printf ( "  I4_UNIFORM_AB computes pseudorandom values\n" );
  printf ( "  in an interval [A,B].\n" );

  printf ( "\n" );
  printf ( "  The lower endpoint A = %d\n", a );
  printf ( "  The upper endpoint B = %d\n", b );
  printf ( "  The initial seed is %d\n", seed );
  printf ( "\n" );

  for ( i = 1; i <= 20; i++ )
  {
    j = i4_uniform_ab ( a, b, &seed );
    printf ( "  %8d  %d\n", i, j );
  }

  return;
}
/******************************************************************************/

void r8_mop_test ( )

/******************************************************************************/
/*
  Purpose:

    R8_MOP_TEST tests R8_MOP.

  Licensing:

    This code is distributed under the GNU LGPL license.

  Modified:

    06 December 2014

  Author:

    John Burkardt
*/
{
  int i4;
  int i4_max;
  int i4_min;
  double r8;
  int seed = 123456789;
  int test;

  printf ( "\n" );
  printf ( "R8_MOP_TEST\n" );
  printf ( "  R8_MOP evaluates (-1.0)^I4 as an R8.\n" );
  printf ( "\n" );
  printf ( "    I4  R8_MOP(I4)\n" );
  printf ( "\n" );

  i4_min = -100;
  i4_max = +100;

  for ( test = 1; test <= 10; test++ )
  {
    i4 = i4_uniform_ab ( i4_min, i4_max, &seed );
    r8 = r8_mop ( i4 );
    printf ( "  %4d  %4.1f\n", i4, r8 );
  }

  return;
}
/******************************************************************************/

void r8vec_print_test ( )

/******************************************************************************/
/*
  Purpose:

    R8VEC_PRINT_TEST tests R8VEC_PRINT.

  Licensing:

    This code is distributed under the GNU LGPL license.

  Modified:

    31 August 2014

  Author:

    John Burkardt
*/
{
  double a[4] = { 123.456, 0.000005, -1.0E+06, 3.14159265 };
  int n = 4;

  printf ( "\n" );
  printf ( "R8VEC_PRINT_TEST\n" );
  printf ( "  R8VEC_PRINT prints an R8VEC.\n" );

  r8vec_print ( n, a, "  The R8VEC:" );

  return;
}
/******************************************************************************/

void r8vec2_print_test ( )

/******************************************************************************/
/*
  Purpose:

    R8VEC2_PRINT_TEST tests R8VEC2_PRINT.

  Licensing:

    This code is distributed under the GNU LGPL license.

  Modified:

    08 January 2016

  Author:

    John Burkardt
*/
{
  double a[5] = { 123.456, 0.000005, -1.0E+06, 3.14159265 };
  double b[5];
  double c[5];
  int i;
  int n = 5;

  printf ( "\n" );
  printf ( "R8VEC2_PRINT_TEST\n" );
  printf ( "  R8VEC2_PRINT prints a pair of R8VEC's\n" );

  for ( i = 0; i < n; i++ )
  {
    b[i] = a[i] * a[i];
    c[i] = sqrt ( a[i] );
  }

  r8vec2_print ( n, b, c, "  Squares and roots:" );

  return;
}