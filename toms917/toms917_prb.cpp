# include <cmath>
# include <complex>
# include <cstdlib>
# include <fstream>
# include <iomanip>
# include <iostream>

using namespace std;

# include "toms917.hpp"

int main ( );
void driver ( complex <double> z );
void test_boundary ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for TOMS917_PRB.
//
//  Discussion:
//
//    WALSH_PRB tests the WALSH library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    14 May 2016
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double pi = M_PI;
  complex <double> z;

  timestamp ( );
  cout << "\n";
  cout << "TOMS917_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the TOMS917 library.\n";

  a = 0.0;
  b = 0.0;
  z = complex <double> ( a, b );
  driver ( z );

  a = 1.0;
  b = 0.0;
  z = complex <double> ( a, b );
  driver ( z );

  a = 1.0 + exp ( 1.0 );
  b = 0.0;
  z = complex <double> ( a, b );
  driver ( z );

  a = - 1.0;
  b = pi;
  z = complex <double> ( a, b );
  driver ( z );

  a = - 1.0;
  b = - pi;
  z = complex <double> ( a, b );
  driver ( z );

  a = - 2.0 + log ( 2.0 );
  b = pi;
  z = complex <double> ( a, b );
  driver ( z );

  a = - 2.0 + log ( 2.0 );
  b = - pi;
  z = complex <double> ( a, b );
  driver ( z );

  a = 0.0;
  b = 1.0 + pi / 2.0;
  z = complex <double> ( a, b );
  driver ( z );

  a = 0.0;
  b = pi;
  z = complex <double> ( a, b );
  driver ( z );

  a = 1.0;
  b = 1.0;
  z = complex <double> ( a, b );
  driver ( z );
//
//  Test the function near the region boundaries.
//
  test_boundary ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "TOMS917_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void driver ( complex <double> z )

//****************************************************************************80
//
//  Purpose:
//
//    DRIVER calls the simple and extended Wright Omega evaluators.
//
//  Modified:
//
//    14 May 2016
//
//  Author:
//
//    Piers Lawrence, Robert Corless, David Jeffrey
//
//  Reference:
//
//    Piers Lawrence, Robert Corless, David Jeffrey,
//    Algorithm 917: Complex Double-Precision Evaluation of the Wright Omega 
//    Function,
//    ACM Transactions on Mathematical Software,
//    Volume 38, Number 3, Article 20, April 2012, 17 pages.
//
//  Parameters:
//
//    Input, complex <double> Z, the argument of the Wright Omega function.
//
{
  complex <double> condest;
  complex <double> e;
  complex <double> r;
  complex <double> r_ult;
  complex <double> w;

  cout << "\n";
  cout << "DRIVER:\n";
  cout << "  Demonstrate simple and extended Wright Omega evaluators.\n";
//
//  Simple evaluator.
//
  w = wrightomega ( z );

  cout << "\n";
  cout << "  Calling:\n";
  cout << "    w = wrightomega(z);\n";
  cout << "  returns:\n";
  cout << "    w = omega(" << real ( z ) 
       << ", " << imag ( z ) 
       << ") =  ( " << real ( w )
       << ", " << imag ( w ) << ")\n";
//
//  Extended evaluator.
//
  wrightomega_ext ( z, w, e, r, condest );

  cout << "\n";
  cout << "  Calling:\n";
  cout << "    wrightomega_ext ( z, w, e, r, condest );\n";
  cout << "  returns:\n";
  cout << "    w = omega(" << real ( z ) 
       << ", " << imag ( z ) 
       << ") =  ( " << real ( w ) 
       << ", " << imag ( w ) << ")\n";
  cout << "  e = last update step = ( " << real ( e ) 
       << ", " << imag ( e ) << ")\n";
  cout << "  r = penultimate residual = ( " << real ( r ) 
       << ", " << imag ( r ) << ")\n";
  cout << "  condest = condition number estimate = ( " << real ( condest ) 
       << ", " << imag ( condest ) << ")\n";
//
//  Calculate and print ultimate residual.
//
  r_ult = ( 2.0 * w * w - 8.0 * w - 1.0 ) 
    / pow ( 1.0 + w, 6.0 ) * r * r * r * r;
  cout << "\n";
  cout << "  ultimate residual = ( " << real ( r_ult )
       << ", " << imag ( r_ult ) << ")\n";

  return;
}
//****************************************************************************80

void test_boundary ( )

//****************************************************************************80
//
//  Purpose:
//
//    TEST_BOUNDARY tests wrightomega() near boundaries.
//
//  Discussion:
//
//    This is a test driver to evaluate the Wright Omega function along the
//    boundaries of the different regions of the approximations.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    17 May 2016
//
//  Author:
//
//    Piers Lawrence, Robert Corless, David Jeffrey
//
//  Reference:
//
//    Piers Lawrence, Robert Corless, David Jeffrey,
//    Algorithm 917: Complex Double-Precision Evaluation of the Wright Omega 
//    Function,
//    ACM Transactions on Mathematical Software,
//    Volume 38, Number 3, Article 20, April 2012, 17 pages.
//
{
  double a;
  double b;
  complex <double> cond;
  complex <double> e;
  double exp_num = 160.0;
  string filename = "results.txt";
  ofstream fp;
  int i;
  int n = 100;
  double pi = M_PI;
  complex <double> r;
  double td;
  complex <double> w;
  double x[2];
  double y[2];
  complex <double> z;

  cout << "\n";
  cout << "TEST_BOUNDARY:\n";
  cout << "  Test wrightomega_ext() near approximation region boundaries.\n";
  cout << "  Store results in a file for comparison with benchmark data.\n";

  fp.open ( filename.c_str ( ) );
//
//  We want trailing zeros, to make comparison with benchmark easier.
//
  fp << fixed;
//
//  Region 1;
//  x=(-2.0,1.0] ,y=2*pi
//
  x[0] = nextafter ( - 2.0, 1.0 );
  x[1] = 1.0;
  y[0] = nextafter ( 2.0 * pi, -1.0 );
  td = ( x[1] - x[0] ) / ( double ) n;

  for ( i = 0; i < n; i++ )
  {
    z = complex <double> ( x[0] + td * ( double ) i, y[0] );
    wrightomega_ext ( z, w, e, r, cond );
    fp << real ( z ) << " " 
       << imag ( z ) << " " 
       << real ( w ) << " "
       << imag ( w ) << "\n"; 
  }
//
//  Region 2;
//  x=1.0 ,y=(1.0,2*pi)
//
  x[0] = 1.0;
  y[0] = nextafter ( 1.0, 2.0 );
  y[1] = nextafter ( 2.0 * pi, 1.0 );
  td = - ( y[1] - y[0] ) / ( double ) n;

  for ( i = 0; i < n; i++ )
  {
    z = complex <double> ( x[0], ( y[1] + td * ( double ) i ) );
    wrightomega_ext ( z, w, e, r, cond );
    fp << real ( z ) << " " 
       << imag ( z ) << " " 
       << real ( w ) << " "
       << imag ( w ) << "\n"; 
  }
//
//  Region 3;
//  x=(-2.0,1.0] ,y=1.0
//
  x[0] = nextafter ( - 2.0, 1.0 );
  x[1] = 1.0;
  td = - ( x[1] - x[0] ) / ( double ) n;
  y[0] = nextafter ( 1.0, 2.0 );

  for ( i = 0; i < n; i++ )
  {
    z = complex <double> ( x[1] + td * ( double ) i, y[0] );
    wrightomega_ext ( z, w, e, r, cond );
    fp << real ( z ) << " " 
       << imag ( z ) << " " 
       << real ( w ) << " "
       << imag ( w ) << "\n"; 
  }
//
//  Region 4;
//  x=-2.0 ,y=(1.0,2*pi)
//
  y[0] = nextafter ( 1.0, 2.0 );
  y[1] = nextafter ( 2.0 * pi, - 1.0 );
  td = ( y[1] - y[0] ) / ( double ) n;
  x[0] = nextafter ( - 2.0, 1.0 );

  for ( i = 0; i < n; i++ )
  {
    z = complex <double> ( x[0], ( y[0] + td * ( double ) i ) );
    wrightomega_ext ( z, w, e, r, cond );
    fp << real ( z ) << " " 
       << imag ( z ) << " " 
       << real ( w ) << " "
       << imag ( w ) << "\n"; 
  }
//
//  Region 5;
//  x=(-2.0,1.0] ,y=-2*pi
//
  x[0] = nextafter ( - 2.0, 1.0 );
  x[1] = 1.0;
  y[0] = nextafter ( - 2.0 * pi, 1.0 );
  td = ( x[1] - x[0] ) / ( double ) n;

  for ( i = 0; i < n; i++ )
  {
    z = complex <double> ( x[0] + td * ( double ) i, y[0] );
    wrightomega_ext ( z, w, e, r, cond );
    fp << real ( z ) << " " 
       << imag ( z ) << " " 
       << real ( w ) << " "
       << imag ( w ) << "\n"; 
  }
//
//  Region 6;
//  x=1.0, y=(-2*pi,-1.0)
//
  y[0] = nextafter ( - 2.0 * pi, 1.0 );
  y[1] = nextafter ( - 1.0, - 2.0 );
  td = ( y[1] - y[0] ) / ( double ) n;
  x[0] = 1.0;

  for ( i = 0; i < n; i++ )
  {
    z = complex <double> ( x[0], ( y[0] + td * ( double ) i ) );
    wrightomega_ext ( z, w, e, r, cond );
    fp << real ( z ) << " " 
       << imag ( z ) << " " 
       << real ( w ) << " "
       << imag ( w ) << "\n"; 
  }
//
//  Region 7;
//  x=(-2.0,1.0] ,y=-1.0
//
  x[0] = nextafter ( - 2.0, 1.0 );
  x[1] = 1.0;
  td = ( x[0] - x[1] ) / ( double ) n;
  y[0] = nextafter ( - 1.0, - 2.0 );

  for ( i = 0; i < n; i++ )
  {
    z = complex <double> ( x[1] + td * ( double ) i, y[0] );
    wrightomega_ext ( z, w, e, r, cond );
    fp << real ( z ) << " " 
       << imag ( z ) << " " 
       << real ( w ) << " "
       << imag ( w ) << "\n"; 
    }
//
//  Region 8;
//  x=-2.0 ,y=(-2*pi,-1.0)
//
  y[0] = nextafter ( - 2.0 * pi, 1.0 );
  y[1] = nextafter ( - 1.0, -2.0 );
  td = ( y[0] - y[1] ) / ( double ) n;
  x[0] = nextafter ( - 2.0, 1.0 );

  for ( i = 0; i < n; i++ )
  {
    z = complex <double> ( x[0], ( y[1] + td * ( double ) i ) );
    wrightomega_ext ( z, w, e, r, cond );
    fp << real ( z ) << " " 
       << imag ( z ) << " " 
       << real ( w ) << " "
       << imag ( w ) << "\n"; 
  }
//
//  Region 9;
//  x=-2.0 y=[-1.0,1.0]
//
  y[0] = - 1.0;
  y[1] = 1.0;
  td = ( y[1] - y[0] ) / ( double ) n;
  x[0] = nextafter ( - 2.0, 1.0 );

  for ( i = 0; i < n; i++ )
  {
    z = complex <double> ( x[0], ( y[0] + td * ( double ) i ) );
    wrightomega_ext ( z, w, e, r, cond );
    fp << real ( z ) << " " 
       << imag ( z ) << " " 
       << real ( w ) << " "
       << imag ( w ) << "\n"; 
  }
//
//  Region 10;
//  x=(-2.0,1.0] y=1.0
//
  x[0] = nextafter ( - 2.0, 1.0 );
  x[1] = 1.0;
  td = ( x[1] - x[0] ) / ( double ) n;
  y[0] = 1.0;

  for ( i = 0; i < n; i++ )
  {
    z = complex <double> ( x[0] + td * ( double ) i, y[0] );
    wrightomega_ext ( z, w, e, r, cond );
    fp << real ( z ) << " " 
       << imag ( z ) << " " 
       << real ( w ) << " "
       << imag ( w ) << "\n"; 
    }
//
//  Region 11
//  x=1.0 y=[1.0,pi]
//
  y[0] = 1.0;
  y[1] = pi;
  td = ( y[1] - y[0] ) / ( double ) n;
  x[0] = nextafter ( 1.0, 2.0 );
  for ( i = 0; i < n; i++ )
  {
    z = complex <double> ( x[0], ( y[0] + td * ( double ) i ) );
    wrightomega_ext ( z, w, e, r, cond );
    fp << real ( z ) << " " 
       << imag ( z ) << " " 
       << real ( w ) << " "
       << imag ( w ) << "\n"; 
  }
//
//  Region 12
//  (x-0.1e1)*(x-0.1e1)+y*y=pi*pi)
//  (on inside)
//
  td = pi / ( double ) n;
  x[0] = pi / 2.0;

  for ( i = 0; i < n; i++ )
  {
    a = nextafter ( pi, -1.0 ) * cos ( x[0] - td * ( double ) i ) 
      + nextafter ( 1.0, - 1.0 );
    b = nextafter ( pi, -1.0 ) * sin ( x[0] - td * ( double ) i );
    z = complex <double> ( a, b );
    wrightomega_ext ( z, w, e, r, cond );
    fp << real ( z ) << " " 
       << imag ( z ) << " " 
       << real ( w ) << " "
       << imag ( w ) << "\n"; 
  }
//
//  Region 13
//  x=1.0 y=[-pi,-1.0]
//
  y[0] = - pi;
  y[1] = - 1.0;
  td = ( y[1] - y[0] ) / ( double ) n;
  x[0] = nextafter ( 1.0, 2.0 );

  for ( i = 0; i < n; i++ )
  {
    z = complex <double> ( x[0], ( y[0] + td * ( double ) i ) );
    wrightomega_ext ( z, w, e, r, cond );
    fp << real ( z ) << " " 
       << imag ( z ) << " " 
       << real ( w ) << " "
       << imag ( w ) << "\n"; 
  }
//
//  Region 14
//  x=(-2.0,1.0] y=-1.0
//
  x[0] = nextafter ( - 2.0, 1.0 );
  x[1] = 1.0;
  td = ( x[1] - x[0] ) / ( double ) n;
  y[0] = -1.0;

  for ( i = 0; i < n; i++ )
  {
    z = complex <double> ( x[0] + td * ( double ) i, y[0] );
    wrightomega_ext ( z, w, e, r, cond );
    fp << real ( z ) << " " 
       << imag ( z ) << " " 
       << real ( w ) << " "
       << imag ( w ) << "\n"; 
  }
//
//  Region 15
//  x=(-inf,-2) y=pi^+
//
  for ( i = 0; i < n; i++ )
  {
    x[0] = nextafter ( - 1.0 - exp ( ( double ) ( n - 1 - i ) / exp_num ), HUGE_VAL );
    y[0] = nextafter ( pi - 0.75 * ( x[0] + 1.0 ), HUGE_VAL );
    z = complex <double> ( x[0], y[0] );
    wrightomega_ext ( z, w, e, r, cond );
    fp << real ( z ) << " " 
       << imag ( z ) << " " 
       << real ( w ) << " "
       << imag ( w ) << "\n"; 
  }
//
//  Region 16
//
  y[0] = 0.75 + pi;
  y[1] = 2.0 * pi;
  td = ( y[1] - y[0] ) / ( double ) n;
  x[0] = nextafter ( - 2.0, - 3.0 );

  for ( i = 0; i < n; i++ )
  {
    z = complex <double> ( x[0], ( y[0] + td * ( double ) i ) );
    wrightomega_ext ( z, w, e, r, cond );
    fp << real ( z ) << " " 
       << imag ( z ) << " " 
       << real ( w ) << " "
       << imag ( w ) << "\n"; 
  }
//
//  Region 17
//  x=(-2.0,1.0] ,y=2*pi
//
  x[0] = nextafter ( - 2.0, 1.0 );
  x[1] = 1.0;
  y[0] = 2.0 * pi;
  td = ( x[1] - x[0] ) / ( double ) n;

  for ( i = 0; i < n; i++ )
  {
    z = complex <double> ( x[0] + td * ( double ) i, y[0] );
    wrightomega_ext ( z, w, e, r, cond );
    fp << real ( z ) << " " 
       << imag ( z ) << " " 
       << real ( w ) << " "
       << imag ( w ) << "\n"; 
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
    z = complex <double> ( x[0], ( y[1] + td * ( double ) i ) );
    wrightomega_ext ( z, w, e, r, cond );
    fp << real ( z ) << " " 
       << imag ( z ) << " " 
       << real ( w ) << " "
       << imag ( w ) << "\n"; 
  }
//
//  Region 19
//  (x-0.1e1)*(x-0.1e1)+y*y=pi*pi)
//  (on outside)
//
  td = pi / ( double ) ( n - 1 );
  y[0] = pi / 2.0;

  for ( i = 0; i < n; i++ )
  {
    y[1] = pi * sin ( y[0] - td * i );
    x[0] = sqrt ( pi * pi - y[1] * y[1] ) + 1.0;
    if ( y[1] < 0 )
    {
      z = complex <double> ( nextafter ( x[0], HUGE_VAL ), nextafter ( y[1], - HUGE_VAL ) );
    }
    else
    {
      z = complex <double> ( nextafter ( x[0], HUGE_VAL ), nextafter ( y[1], HUGE_VAL ) );
    } 
    wrightomega_ext ( z, w, e, r, cond );
    fp << real ( z ) << " " 
       << imag ( z ) << " " 
       << real ( w ) << " "
       << imag ( w ) << "\n"; 
  }
//
//  Region 20;
//  x=1.0 ,y=(-2*pi,-pi)
//
  y[0] = nextafter ( - 2.0 * pi, 1.0 );
  y[1] = nextafter ( - pi, - 6.0 );
  td = - ( y[1] - y[0] ) / ( double ) n;
  x[0] = nextafter ( 1.0, 2.0 );

  for ( i = 0; i < n; i++ )
  {
    z = complex <double> ( x[0], ( y[1] + td * ( double ) i ) );
    wrightomega_ext ( z, w, e, r, cond );
    fp << real ( z ) << " " 
       << imag ( z ) << " " 
       << real ( w ) << " "
       << imag ( w ) << "\n"; 
  }
//
//  Region 21;
//  x=(-2.0,1.0] ,y=-2*pi
//
  x[0] = nextafter ( - 2.0, 1.0 );
  x[1] = 1.0;
  y[0] = nextafter ( - 2.0 * pi, - 7.0 );
  td = - ( x[1] - x[0] ) / ( double ) n;

  for ( i = 0; i < n; i++ )
  {
    z = complex <double> ( x[1] + td * ( double ) i, y[0] );
    wrightomega_ext ( z, w, e, r, cond );
    fp << real ( z ) << " " 
       << imag ( z ) << " " 
       << real ( w ) << " "
       << imag ( w ) << "\n"; 
  }
//
//  Region 22
//
  y[0] = - 0.75 - pi;
  y[1] = - 2.0 * pi;
  td = - ( y[1] - y[0] ) / ( double ) n;
  x[0] = nextafter ( - 2.0, - 3.0 );

  for ( i = 0; i < n; i++ )
  {
    z = complex <double> ( x[0], ( y[1] + td * ( double ) i ) );
    wrightomega_ext ( z, w, e, r, cond );
    fp << real ( z ) << " " 
       << imag ( z ) << " " 
       << real ( w ) << " "
       << imag ( w ) << "\n"; 
  }
//
//  Region 23
//  x=(-inf,-2) y=pi^+
//
  for ( i = 0; i < n; i++ )
  {
    x[0] = nextafter ( - 1.0 - exp ( ( double ) ( i ) / exp_num ), HUGE_VAL );
    y[0] = nextafter ( - pi + 0.75 * ( x[0] + 1.0 ), - HUGE_VAL );
    z = complex <double> ( x[0], y[0] );
    wrightomega_ext ( z, w, e, r, cond );
    fp << real ( z ) << " " 
       << imag ( z ) << " " 
       << real ( w ) << " "
       << imag ( w ) << "\n"; 
  }
//
//  Region 24
//  x=(-inf,-2) y=pi^+
//
  for ( i = 0; i < n; i++ )
  {
    x[0] = nextafter ( - 1.0 - exp ( ( double ) ( n - 1 - i ) / exp_num ), - HUGE_VAL );
    y[0] = nextafter ( - pi + 0.75 * ( x[0] + 1.0 ), HUGE_VAL );
    z = complex <double> ( x[0], y[0] );
    wrightomega_ext ( z, w, e, r, cond );
    fp << real ( z ) << " " 
       << imag ( z ) << " " 
       << real ( w ) << " "
       << imag ( w ) << "\n"; 
  }
//
//  Region 25
//
  y[0] = - pi;
  y[1] = - 0.75 - pi;
  td = - ( y[1] - y[0] ) / ( double ) n;
  x[0] = nextafter ( - 2.0, - 3.0 );

  for ( i = 0; i < n; i++ )
  {
    z = complex <double> ( x[0], ( y[1] + td * (double) i ) );
    wrightomega_ext ( z, w, e, r, cond );
    fp << real ( z ) << " " 
       << imag ( z ) << " " 
       << real ( w ) << " "
       << imag ( w ) << "\n"; 
  }
//
//  Region 26
//  x=(-inf,-2) y=pi^+
//
  y[0] = nextafter ( - pi, -7.0 );

  for ( i = 0; i < n; i++ )
  {
    x[0] = - 1.0 - exp ( ( double ) ( i ) / exp_num );
    z = complex <double> ( x[0], y[0] );
    wrightomega_ext ( z, w, e, r, cond );
    fp << real ( z ) << " " 
       << imag ( z ) << " " 
       << real ( w ) << " "
       << imag ( w ) << "\n"; 
  }
//
//  Region 27
//  x=(-inf,-2) y=pi^+
//
  y[0] = nextafter ( - pi, 1.0 );

  for ( i = 0; i < n; i++ )
  {
    x[0] = - 1.0 - exp ( ( double ) ( n - 1 - i ) / exp_num );
    z = complex <double> ( x[0], y[0] );
    wrightomega_ext ( z, w, e, r, cond );
    fp << real ( z ) << " " 
       << imag ( z ) << " " 
       << real ( w ) << " "
       << imag ( w ) << "\n"; 
  }
//
//  Region 28
//
  y[0] = nextafter ( - pi, 1.0 );
  y[1] = pi;
  td = ( y[1] - y[0] ) / ( double ) n;
  x[0] = nextafter ( - 2.0, -3.0 );

  for ( i = 0; i < n; i++ )
  {
    z = complex <double> ( x[0], ( y[0] + td * ( double ) i ) );
    wrightomega_ext ( z, w, e, r, cond );
    fp << real ( z ) << " " 
       << imag ( z ) << " " 
       << real ( w ) << " "
       << imag ( w ) << "\n"; 
  }
//
//  Region 29
//  x=(-inf,-2) y=pi^+
//
  y[0] = nextafter ( pi, 1.0 );

  for ( i = 0; i < n; i++ )
  {
    x[0] = - 1.0 - exp ( ( double ) ( i ) / exp_num );
    z = complex <double> ( x[0], y[0] );
    wrightomega_ext ( z, w, e, r, cond );
    fp << real ( z ) << " " 
       << imag ( z ) << " " 
       << real ( w ) << " "
       << imag ( w ) << "\n"; 
  }
//
//  Region 30
//  x=(-inf,-2) y=pi^+
//
  y[0] = nextafter ( pi, 7.0 );

  for ( i = 0; i < n; i++ )
  {
    x[0] = - 1.0 - exp ( ( double ) ( n - 1 - i ) / exp_num );
    z = complex <double> ( x[0], y[0] );
    wrightomega_ext ( z, w, e, r, cond );
    fp << real ( z ) << " " 
       << imag ( z ) << " " 
       << real ( w ) << " "
       << imag ( w ) << "\n"; 
  }
//
//  Region 31
//
  y[0] = nextafter ( pi, 7.0 );
  y[1] = 0.75 + pi;
  td = ( y[1] - y[0] ) / ( double ) n;
  x[0] = nextafter ( - 2.0, - 3.0 );

  for ( i = 0; i < n; i++ )
  {
    z = complex <double> ( x[0], ( y[0] + td * ( double ) i ) );
    wrightomega_ext ( z, w, e, r, cond );
    fp << real ( z ) << " " 
       << imag ( z ) << " " 
       << real ( w ) << " "
       << imag ( w ) << "\n"; 
  }
//
//  Region 32
//  x=(-inf,-2) y=pi^+
//
  for ( i = 0; i < n; i++ )
  {
    x[0] = -1.0 - exp ( ( double ) ( n - 1 - i ) / exp_num );
    y[0] = nextafter ( pi - 0.75 * ( x[0] + 1.0 ), 0.1 );
    z = complex <double> ( x[0], y[0] );
    wrightomega_ext ( z, w, e, r, cond );
    fp << real ( z ) << " " 
       << imag ( z ) << " " 
       << real ( w ) << " "
       << imag ( w ) << "\n"; 
  }
//
//  Terminate.
//
  fp.close ( );

  cout << "\n";
  cout << "TEST_BOUNDARY:\n";
  cout << "  Results saved in file '" << filename << "'\n";

  return;
}

