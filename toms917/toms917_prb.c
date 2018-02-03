# include <complex.h>
# include <math.h>
# include <fenv.h>
# include <float.h>
# include <stdio.h>
# include <stdlib.h>

# include "toms917.h"

int main ( );
void driver ( double complex z );
void test_boundary ( );

/******************************************************************************/

int main ( )

/******************************************************************************/
/*
  Purpose:

    MAIN is the main program for TOMS917_PRB.

  Discussion:

    WALSH_PRB tests the WALSH library.

  Licensing:

    This code is distributed under the GNU LGPL license. 

  Modified:

    13 May 2016

  Author:

    John Burkardt
*/
{
  double a;
  double b;
  double pi = M_PI;
  double complex z;

  timestamp ( );
  printf ( "\n" );
  printf ( "TOMS917_PRB\n" );
  printf ( "  C version\n" );
  printf ( "  Test the TOMS917 library.\n" );

  a = 0.0;
  b = 0.0;
  z = a + b * I;
  driver ( z );

  a = 1.0;
  b = 0.0;
  z = a + b * I;
  driver ( z );

  a = 1.0 + exp ( 1.0 );
  b = 0.0;
  z = a + b * I;
  driver ( z );

  a = - 1.0;
  b = pi;
  z = a + b * I;
  driver ( z );

  a = - 1.0;
  b = - pi;
  z = a + b * I;
  driver ( z );

  a = - 2.0 + log ( 2.0 );
  b = pi;
  z = a + b * I;
  driver ( z );

  a = - 2.0 + log ( 2.0 );
  b = - pi;
  z = a + b * I;
  driver ( z );

  a = 0.0;
  b = 1.0 + pi / 2.0;
  z = a + b * I;
  driver ( z );

  a = 0.0;
  b = pi;
  z = a + b * I;
  driver ( z );

  a = 1.0;
  b = 1.0;
  z = a + b * I;
  driver ( z );
/*
  Test the function near the region boundaries.
*/
  test_boundary ( );
/*
  Terminate.
*/
  printf ( "\n" );
  printf ( "TOMS917_PRB\n" );
  printf ( "  Normal end of execution.\n" );
  printf ( "\n" );
  timestamp ( );

  return 0;
}
/******************************************************************************/

void driver ( double complex z )

/******************************************************************************/
/*
  Purpose:

    DRIVER calls the simple and extended Wright Omega evaluators.

  Modified:

    13 May 2016

  Author:

    Piers Lawrence, Robert Corless, David Jeffrey

  Reference:

    Piers Lawrence, Robert Corless, David Jeffrey,
    Algorithm 917: Complex Double-Precision Evaluation of the Wright Omega 
    Function,
    ACM Transactions on Mathematical Software,
    Volume 38, Number 3, Article 20, April 2012, 17 pages.

  Parameters:

    Input, double complex Z, the argument of the Wright Omega function.
*/
{
  double complex condest;
  double complex e;
  double complex r;
  double complex r_ult;
  double complex w;

  printf ( "\n" );
  printf ( "DRIVER:\n" );
  printf ( "  Demonstrate simple and extended Wright Omega evaluators.\n" );
/*
  Simple evaluator.
*/
  w = wrightomega ( z );

  printf ( "\n" );
  printf ( "  Calling:\n" );
  printf ( "    w = wrightomega(z);\n" );
  printf ( "  returns:\n" );
  printf ( "    w = omega(%24.16g %+24.16g I)=%24.16g %+24.16g I\n", creal ( z ), cimag ( z ), 
    creal ( w ), cimag ( w ) );
/*
  Extended evaluator.
*/
  wrightomega_ext ( z, &w, &e, &r, &condest );

  printf ( "\n" );
  printf ( "  Calling:\n" );
  printf ( "    wrightomega_ext ( z, &w, &e, &r, &condest );\n" );
  printf ( "  returns:\n" );
  printf ( "  w = omega(%f %+f I)=%f %+f I\n", creal ( z ), cimag ( z ), 
    creal ( w ), cimag ( w ) );
  printf ( "  e = last update step: %g %+g I\n", creal ( e ), cimag ( e ) );
  printf ( "  r = penultimate residual: %g %+g I\n", creal ( r ), cimag ( r ) );
  printf ( "  condest = condition number estimate: %g %+g I\n", 
    creal ( condest ), cimag ( condest ) );
/*
  Calculate and print ultimate residual.
*/
  r_ult = ( 2.0 * w * w - 8.0 * w - 1.0 ) 
    / cpow ( 1.0 + w, 6.0 ) * r * r * r * r;
  printf ( "\n" );
  printf ( "  ultimate residual: %g %+g I\n", creal ( r_ult ), 
    cimag ( r_ult ) );

  return;
}
/******************************************************************************/

void test_boundary ( )

/******************************************************************************/
/*
  Purpose:

    TEST_BOUNDARY tests wrightomega() near boundaries.

  Discussion:

    This is a test driver to evaluate the Wright Omega function along the
    boundaries of the different regions of the approximations.

  Licensing:

    This code is distributed under the GNU LGPL license. 

  Modified:

    13 May 2016

  Author:

    Piers Lawrence, Robert Corless, David Jeffrey

  Reference:

    Piers Lawrence, Robert Corless, David Jeffrey,
    Algorithm 917: Complex Double-Precision Evaluation of the Wright Omega 
    Function,
    ACM Transactions on Mathematical Software,
    Volume 38, Number 3, Article 20, April 2012, 17 pages.
*/
{
  double complex cond;
  double complex e;
  double exp_num = 160.0;
  char filename[] = "results.txt";
  FILE *fp;
  int i;
  int n = 100;
  double pi = M_PI;
  double complex r;
  double td;
  double complex w;
  double x[2];
  double y[2];
  double complex z;

  printf ( "\n" );
  printf ( "TEST_BOUNDARY:\n" );
  printf ( "  Test wrightomega_ext() near approximation region boundaries.\n" );
  printf ( "  Store results in a file for comparison with benchmark data.\n" );

  fp = fopen ( filename, "w" );
/*
  Region 1;
  x=(-2.0,1.0] ,y=2*pi
*/
  x[0] = nextafter ( - 2.0, 1.0 );
  x[1] = 1.0;
  y[0] = nextafter ( 2.0 * pi, -1.0 );
  td = ( x[1] - x[0] ) / ( double ) n;

  for ( i = 0; i < n; i++ )
  {
    z = x[0] + td * ( double ) i + I * y[0];
    wrightomega_ext ( z, &w, &e, &r, &cond );
    fprintf ( fp, "%f %f %f %f\n", creal ( z ), cimag ( z ), creal ( w ), 
      cimag ( w ) );
  }
/*
  Region 2;
  x=1.0 ,y=(1.0,2*pi)
*/
  x[0] = 1.0;
  y[0] = nextafter ( 1.0, 2.0 );
  y[1] = nextafter ( 2.0 * pi, 1.0 );
  td = - ( y[1] - y[0] ) / ( double ) n;

  for ( i = 0; i < n; i++ )
  {
    z = x[0] + I * ( y[1] + td * ( double ) i );
    wrightomega_ext ( z, &w, &e, &r, &cond );
    fprintf ( fp, "%f %f %f %f\n", creal ( z ), cimag ( z ), creal ( w ),
      cimag ( w ) );
  }
 /*  
  Region 3;
  x=(-2.0,1.0] ,y=1.0
*/
  x[0] = nextafter ( - 2.0, 1.0 );
  x[1] = 1.0;
  td = - ( x[1] - x[0] ) / ( double ) n;
  y[0] = nextafter ( 1.0, 2.0 );

  for ( i = 0; i < n; i++ )
  {
    z = x[1] + td * ( double ) i + y[0] * I;
    wrightomega_ext ( z, &w, &e, &r, &cond );
    fprintf ( fp, "%f %f %f %f\n", creal ( z ), cimag ( z ), creal ( w ),
      cimag ( w ) );
  }
/*
  Region 4;
  x=-2.0 ,y=(1.0,2*pi)
*/
  y[0] = nextafter ( 1.0, 2.0 );
  y[1] = nextafter ( 2.0 * pi, - 1.0 );
  td = ( y[1] - y[0] ) / ( double ) n;
  x[0] = nextafter ( - 2.0, 1.0 );

  for ( i = 0; i < n; i++ )
  {
    z = x[0] + I * ( y[0] + td * ( double ) i );
    wrightomega_ext ( z, &w, &e, &r, &cond );
    fprintf ( fp, "%f %f %f %f\n", creal ( z ), cimag ( z ), creal ( w ),
      cimag ( w ) );
  }
/*
  Region 5;
  x=(-2.0,1.0] ,y=-2*pi
*/
  x[0] = nextafter ( - 2.0, 1.0 );
  x[1] = 1.0;
  y[0] = nextafter ( - 2.0 * pi, 1.0 );
  td = ( x[1] - x[0] ) / ( double ) n;

  for ( i = 0; i < n; i++ )
  {
    z = x[0] + td * ( double ) i + I * y[0];
    wrightomega_ext ( z, &w, &e, &r, &cond );
    fprintf ( fp, "%f %f %f %f\n", creal ( z ), cimag ( z ), creal ( w ),
      cimag ( w ) );
  }
/* 
  Region 6;
  x=1.0, y=(-2*pi,-1.0)
*/
  y[0] = nextafter ( - 2.0 * pi, 1.0 );
  y[1] = nextafter ( - 1.0, - 2.0 );
  td = ( y[1] - y[0] ) / ( double ) n;
  x[0] = 1.0;

  for ( i = 0; i < n; i++ )
  {
    z = x[0] + I * ( y[0] + td * ( double ) i );
    wrightomega_ext ( z, &w, &e, &r, &cond );
    fprintf ( fp, "%f %f %f %f\n", creal ( z ), cimag ( z ), creal ( w ),
      cimag ( w ) );
  }
/*
  Region 7;
  x=(-2.0,1.0] ,y=-1.0
*/
  x[0] = nextafter ( - 2.0, 1.0 );
  x[1] = 1.0;
  td = ( x[0] - x[1] ) / ( double ) n;
  y[0] = nextafter ( - 1.0, - 2.0 );

  for ( i = 0; i < n; i++ )
  {
    z = x[1] + td * ( double ) i + y[0] * I;
    wrightomega_ext ( z, &w, &e, &r, &cond );
    fprintf ( fp, "%f %f %f %f\n", creal ( z ), cimag ( z ), creal ( w ),
      cimag ( w ) );
    }
/*
  Region 8;
  x=-2.0 ,y=(-2*pi,-1.0)
*/
  y[0] = nextafter ( - 2.0 * pi, 1.0 );
  y[1] = nextafter ( - 1.0, -2.0 );
  td = ( y[0] - y[1] ) / ( double ) n;
  x[0] = nextafter ( - 2.0, 1.0 );

  for ( i = 0; i < n; i++ )
  {
    z = x[0] + I * ( y[1] + td * ( double ) i );
    wrightomega_ext ( z, &w, &e, &r, &cond );
    fprintf ( fp, "%f %f %f %f\n", creal ( z ), cimag ( z ), creal ( w ),
      cimag ( w ) );
  }
/*
  Region 9;
  x=-2.0 y=[-1.0,1.0]
*/
  y[0] = - 1.0;
  y[1] = 1.0;
  td = ( y[1] - y[0] ) / ( double ) n;
  x[0] = nextafter ( - 2.0, 1.0 );

  for ( i = 0; i < n; i++ )
  {
    z = x[0] + I * ( y[0] + td * ( double ) i );
    wrightomega_ext ( z, &w, &e, &r, &cond );
    fprintf ( fp, "%f %f %f %f\n", creal ( z ), cimag ( z ), creal ( w ),
      cimag ( w ) );
  }
/*
  Region 10;
  x=(-2.0,1.0] y=1.0
*/
  x[0] = nextafter ( - 2.0, 1.0 );
  x[1] = 1.0;
  td = ( x[1] - x[0] ) / ( double ) n;
  y[0] = 1.0;

  for ( i = 0; i < n; i++ )
  {
    z = x[0] + td * ( double ) i + y[0] * I;
    wrightomega_ext ( z, &w, &e, &r, &cond );
    fprintf ( fp, "%f %f %f %f\n", creal ( z ), cimag ( z ), creal ( w ),
      cimag ( w ) );
    }
/*  
  Region 11
  x=1.0 y=[1.0,pi]
*/
  y[0] = 1.0;
  y[1] = pi;
  td = ( y[1] - y[0] ) / ( double ) n;
  x[0] = nextafter ( 1.0, 2.0 );
  for ( i = 0; i < n; i++ )
  {
    z = x[0] + I * ( y[0] + td * ( double ) i );
    wrightomega_ext ( z, &w, &e, &r, &cond );
    fprintf ( fp, "%f %f %f %f\n", creal ( z ), cimag ( z ), creal ( w ),
      cimag ( w ) );
  }
/*
  Region 12
  (x-0.1e1)*(x-0.1e1)+y*y=pi*pi)
  (on inside)
*/
  td = pi / ( double ) n;
  x[0] = pi / 2.0;

  for ( i = 0; i < n; i++ )
  {
    z = nextafter ( pi, -1.0 ) 
      * ( cos ( x[0] - td * ( double ) i ) 
      + I * sin ( x[0] - td * ( double ) i ) ) + nextafter ( 1.0, - 1.0 );
    wrightomega_ext ( z, &w, &e, &r, &cond );
    fprintf ( fp, "%f %f %f %f\n", creal ( z ), cimag ( z ), creal ( w ),
      cimag ( w ) );
  }
/*  
  Region 13
  x=1.0 y=[-pi,-1.0]
*/
  y[0] = - pi;
  y[1] = - 1.0;
  td = ( y[1] - y[0] ) / ( double ) n;
  x[0] = nextafter ( 1.0, 2.0 );

  for ( i = 0; i < n; i++ )
  {
    z = x[0] + I * ( y[0] + td * ( double ) i );
    wrightomega_ext ( z, &w, &e, &r, &cond );
    fprintf ( fp, "%f %f %f %f\n", creal ( z ), cimag ( z ), creal ( w ),
      cimag ( w ) );
  }
/*
  Region 14
  x=(-2.0,1.0] y=-1.0
*/
  x[0] = nextafter ( - 2.0, 1.0 );
  x[1] = 1.0;
  td = ( x[1] - x[0] ) / ( double ) n;
  y[0] = -1.0;

  for ( i = 0; i < n; i++ )
  {
    z = x[0] + td * ( double ) i + y[0] * I;
    wrightomega_ext ( z, &w, &e, &r, &cond );
    fprintf ( fp, "%f %f %f %f\n", creal ( z ), cimag ( z ), creal ( w ),
      cimag ( w ) );
  }
/* 
  Region 15
  x=(-inf,-2) y=pi^+
*/
  for ( i = 0; i < n; i++ )
  {
    x[0] = nextafter ( - 1.0 - exp ( ( double ) ( n - 1 - i ) / exp_num ), HUGE_VAL );
    y[0] = nextafter ( pi - 0.75 * ( x[0] + 1.0 ), HUGE_VAL );
    z = x[0] + I * y[0];
    wrightomega_ext ( z, &w, &e, &r, &cond );
    fprintf ( fp, "%f %f %f %f\n", creal ( z ), cimag ( z ), creal ( w ),
      cimag ( w ) );
  }
/*
  Region 16
*/
  y[0] = 0.75 + pi;
  y[1] = 2.0 * pi;
  td = ( y[1] - y[0] ) / ( double ) n;
  x[0] = nextafter ( - 2.0, - 3.0 );

  for ( i = 0; i < n; i++ )
  {
    z = x[0] + I * ( y[0] + td * ( double ) i );
    wrightomega_ext ( z, &w, &e, &r, &cond );
    fprintf ( fp, "%f %f %f %f\n", creal ( z ), cimag ( z ), creal ( w ),
      cimag ( w ) );
  }
/*
  Region 17
  x=(-2.0,1.0] ,y=2*pi
*/
  x[0] = nextafter ( - 2.0, 1.0 );
  x[1] = 1.0;
  y[0] = 2.0 * pi;
  td = ( x[1] - x[0] ) / ( double ) n;

  for ( i = 0; i < n; i++ )
  {
    z = x[0] + td * ( double ) i + I * y[0];
    wrightomega_ext ( z, &w, &e, &r, &cond );
    fprintf ( fp, "%f %f %f %f\n", creal ( z ), cimag ( z ), creal ( w ),
      cimag ( w ) );
  }
/*
  Region 18
  x=1.0 ,y=(pi,2*pi)
*/
  y[0] = nextafter ( pi, 6.0 );
  y[1] = nextafter ( 2.0 * pi, 1.0 );
  td = - ( y[1] - y[0] ) / ( double ) n;
  x[0] = nextafter ( 1.0, 2.0 );

  for ( i = 0; i < n; i++ )
  {
    z = x[0] + I * ( y[1] + td * ( double ) i );
    wrightomega_ext ( z, &w, &e, &r, &cond );
    fprintf ( fp, "%f %f %f %f\n", creal ( z ), cimag ( z ), creal ( w ),
      cimag ( w ) );
  }
/*
  Region 19
  (x-0.1e1)*(x-0.1e1)+y*y=pi*pi)
  (on outside)
*/
  td = pi / ( double ) ( n - 1 );
  y[0] = pi / 2.0;

  for ( i = 0; i < n; i++ )
  {
    y[1] = pi * sin ( y[0] - td * i );
    x[0] = sqrt ( pi * pi - y[1] * y[1] ) + 1.0;
    if ( y[1] < 0 )
    {
      z = nextafter ( x[0], HUGE_VAL ) + I * nextafter ( y[1], - HUGE_VAL );
    }
    else
    {
      z = nextafter ( x[0], HUGE_VAL ) + I * nextafter ( y[1], HUGE_VAL );
    } 
    wrightomega_ext ( z, &w, &e, &r, &cond );
    fprintf ( fp, "%f %f %f %f\n", creal ( z ), cimag ( z ), creal ( w ),
      cimag ( w ) );
  }
/*
  Region 20;
  x=1.0 ,y=(-2*pi,-pi)
*/
  y[0] = nextafter ( - 2.0 * pi, 1.0 );
  y[1] = nextafter ( - pi, - 6.0 );
  td = - ( y[1] - y[0] ) / ( double ) n;
  x[0] = nextafter ( 1.0, 2.0 );

  for ( i = 0; i < n; i++ )
  {
    z = x[0] + I * ( y[1] + td * ( double ) i );
    wrightomega_ext ( z, &w, &e, &r, &cond );
    fprintf ( fp, "%f %f %f %f\n", creal ( z ), cimag ( z ), creal ( w ),
      cimag ( w ) );
  }
/*
  Region 21;
  x=(-2.0,1.0] ,y=-2*pi
*/
  x[0] = nextafter ( - 2.0, 1.0 );
  x[1] = 1.0;
  y[0] = nextafter ( - 2.0 * pi, - 7.0 );
  td = - ( x[1] - x[0] ) / ( double ) n;

  for ( i = 0; i < n; i++ )
  {
    z = x[1] + td * ( double ) i + I * y[0];
    wrightomega_ext ( z, &w, &e, &r, &cond );
    fprintf ( fp, "%f %f %f %f\n", creal ( z ), cimag ( z ), creal ( w ),
      cimag ( w ) );
  }
/*
  Region 22
*/
  y[0] = - 0.75 - pi;
  y[1] = - 2.0 * pi;
  td = - ( y[1] - y[0] ) / ( double ) n;
  x[0] = nextafter ( - 2.0, - 3.0 );

  for ( i = 0; i < n; i++ )
  {
    z = x[0] + I * ( y[1] + td * ( double ) i );
    wrightomega_ext ( z, &w, &e, &r, &cond );
    fprintf ( fp, "%f %f %f %f\n", creal ( z ), cimag ( z ), creal ( w ),
      cimag ( w ) );
  }
/*
  Region 23
  x=(-inf,-2) y=pi^+
*/
  for ( i = 0; i < n; i++ )
  {
    x[0] = nextafter ( - 1.0 - exp ( ( double ) ( i ) / exp_num ), HUGE_VAL );
    y[0] = nextafter ( - pi + 0.75 * ( x[0] + 1.0 ), - HUGE_VAL );
    z = x[0] + I * y[0];
    wrightomega_ext ( z, &w, &e, &r, &cond );
    fprintf ( fp, "%f %f %f %f\n", creal ( z ), cimag ( z ), creal ( w ),
      cimag ( w ) );
  }
/*  
  Region 24
  x=(-inf,-2) y=pi^+
*/
  for ( i = 0; i < n; i++ )
  {
    x[0] = nextafter ( - 1.0 - exp ( ( double ) ( n - 1 - i ) / exp_num ), - HUGE_VAL );
    y[0] = nextafter ( - pi + 0.75 * ( x[0] + 1.0 ), HUGE_VAL );
    z = x[0] + I * y[0];
    wrightomega_ext ( z, &w, &e, &r, &cond );
    fprintf ( fp, "%f %f %f %f\n", creal ( z ), cimag ( z ), creal ( w ),
      cimag ( w ) );
  }
/*
  Region 25
*/
  y[0] = - pi;
  y[1] = - 0.75 - pi;
  td = - ( y[1] - y[0] ) / ( double ) n;
  x[0] = nextafter ( - 2.0, - 3.0 );

  for ( i = 0; i < n; i++ )
  {
    z = x[0] + I * ( y[1] + td * (double) i );
    wrightomega_ext ( z, &w, &e, &r, &cond );
    fprintf ( fp, "%f %f %f %f\n", creal ( z ), cimag ( z ), creal ( w ),
      cimag ( w ) );
  }
/*
  Region 26
  x=(-inf,-2) y=pi^+
*/
  y[0] = nextafter ( - pi, -7.0 );

  for ( i = 0; i < n; i++ )
  {
    x[0] = - 1.0 - exp ( ( double ) ( i ) / exp_num );
    z = x[0] + I * y[0];
    wrightomega_ext ( z, &w, &e, &r, &cond );
    fprintf ( fp, "%f %f %f %f\n", creal ( z ), cimag ( z ), creal ( w ),
      cimag ( w ) );
  }
/*
  Region 27
  x=(-inf,-2) y=pi^+
*/
  y[0] = nextafter ( - pi, 1.0 );

  for ( i = 0; i < n; i++ )
  {
    x[0] = - 1.0 - exp ( ( double ) ( n - 1 - i ) / exp_num );
    z = x[0] + I * y[0];
    wrightomega_ext ( z, &w, &e, &r, &cond );
    fprintf ( fp, "%f %f %f %f\n", creal ( z ), cimag ( z ), creal ( w ),
      cimag ( w ) );
  }
/*
  Region 28
*/
  y[0] = nextafter ( - pi, 1.0 );
  y[1] = pi;
  td = ( y[1] - y[0] ) / ( double ) n;
  x[0] = nextafter ( - 2.0, -3.0 );

  for ( i = 0; i < n; i++ )
  {
    z = x[0] + I * ( y[0] + td * ( double ) i );
    wrightomega_ext ( z, &w, &e, &r, &cond );
    fprintf ( fp, "%f %f %f %f\n", creal ( z ), cimag ( z ), creal ( w ),
      cimag ( w ) );
  }
/*
  Region 29
  x=(-inf,-2) y=pi^+
*/
  y[0] = nextafter ( pi, 1.0 );

  for ( i = 0; i < n; i++ )
  {
    x[0] = - 1.0 - exp ( ( double ) ( i ) / exp_num );
    z = x[0] + I * y[0];
    wrightomega_ext ( z, &w, &e, &r, &cond );
    fprintf ( fp, "%f %f %f %f\n", creal ( z ), cimag ( z ), creal ( w ),
      cimag ( w ) );
  }
/*
  Region 30
  x=(-inf,-2) y=pi^+
*/
  y[0] = nextafter ( pi, 7.0 );

  for ( i = 0; i < n; i++ )
  {
    x[0] = - 1.0 - exp ( ( double ) ( n - 1 - i ) / exp_num );
    z = x[0] + I * y[0];
    wrightomega_ext ( z, &w, &e, &r, &cond );
    fprintf ( fp, "%f %f %f %f\n", creal ( z ), cimag ( z ), creal ( w ),
      cimag ( w ) );
  }
/*
  Region 31
*/
  y[0] = nextafter ( pi, 7.0 );
  y[1] = 0.75 + pi;
  td = ( y[1] - y[0] ) / ( double ) n;
  x[0] = nextafter ( - 2.0, - 3.0 );

  for ( i = 0; i < n; i++ )
  {
    z = x[0] + I * ( y[0] + td * ( double ) i );
    wrightomega_ext ( z, &w, &e, &r, &cond );
    fprintf ( fp, "%f %f %f %f\n", creal ( z ), cimag ( z ), creal ( w ),
      cimag ( w ) );
  }
/*
  Region 32
  x=(-inf,-2) y=pi^+
*/
  for ( i = 0; i < n; i++ )
  {
    x[0] = -1.0 - exp ( ( double ) ( n - 1 - i ) / exp_num );
    y[0] = nextafter ( pi - 0.75 * ( x[0] + 1.0 ), 0.1 );
    z = x[0] + I * y[0];
    wrightomega_ext ( z, &w, &e, &r, &cond );
    fprintf ( fp, "%f %f %f %f\n", creal ( z ), cimag ( z ), creal ( w ),
      cimag ( w ) );
  }
/*
  Terminate.
*/
  fclose ( fp );

  printf ( "\n" );
  printf ( "TEST_BOUNDARY:\n" );
  printf ( "  Results saved in file '%s'\n", filename );

  return;
}

