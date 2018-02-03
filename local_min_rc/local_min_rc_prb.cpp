# include <cmath>
# include <cstdlib>
# include <ctime>
# include <iomanip>
# include <iostream>
# include <string>

using namespace std;

# include "local_min_rc.hpp"

int main ( );
void example_test ( double a, double b, double t, 
  double f ( double x ), string title );
double g_01 ( double x );
double g_02 ( double x );
double g_03 ( double x );
double g_04 ( double x );
double g_05 ( double x );
double g_06 ( double x );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for LOCAL_MIN_RC_PRB.
//
//  Discussion:
//
//    LOCAL_MIN_RC_PRB tests the LOCAL_MIN_RC library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    17 July 2011
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double b;
  double t;

  timestamp ( );
  cout << "\n";
  cout << "LOCAL_MIN_RC_PRB\n";
  cout << "  C++ version\n";
  cout << "  LOCAL_MIN_RC seeks a local minimizer of a function F(X)\n";
  cout << "  in an interval [A,B], using reverse communication.\n";

  t = 10.0 * sqrt ( r8_epsilon ( ) );

  a = 0.0;
  b = 3.141592653589793;

  example_test ( a, b, t, g_01,
    "g_01(x) = ( x - 2 ) * ( x - 2 ) + 1" );

  a = 0.0;
  b = 1.0;

  example_test ( a, b, t, g_02,
    "g_02(x) = x * x + exp ( - x )" );

  a = -2.0;
  b =  2.0;

  example_test ( a, b, t, g_03,
    "g_03(x) = x^4 + 2x^2 + x + 3" );

  a =  0.0001;
  b =  1.0;

  example_test ( a, b, t, g_04,
    "g_04(x) = exp ( x ) + 1 / ( 100 x )" );

  a =  0.0002;
  b = 2.0;

  example_test ( a, b, t, g_05,
    "g_05(x) = exp ( x ) - 2x + 1/(100x) - 1/(1000000x^2)" );

  a = 1.8;
  b = 1.9;

  example_test ( a, b, t, g_06,
    "g_06(x) = - x sin ( 10 pi x ) - 1" );
//
//  Terminate.
//
  cout << "\n";
  cout << "LOCAL_MIN_RC_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void example_test ( double a, double b, double t,
  double f ( double x ), string title )

//****************************************************************************80
//
//  Purpose:
//
//    EXAMPLE_TEST tests LOCAL_MIN_RC on one test function.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    16 April 2008
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double A, B, the endpoints of the interval.
//
//    Input, double T, a positive absolute error tolerance.
//
//    Input, double F ( double x ), the name of a user-supplied
//    function, whose local minimum is being sought.
//
//    Input, string TITLE, a title for the problem.
//
{
  double a2;
  double arg;
  double b2;
  int status;
  int step;
  double value;

  cout << "\n";
  cout << "  " << title << "\n";
  cout << "\n";
  cout << "  Step      X                          F(X)\n";
  cout << "\n";
  step = 0;

  arg = a;
  value = f ( arg );
  cout << "  " << setw(4) << step
       << "  " << setprecision(16) << setw(24) << arg
       << "  " << setprecision(16) << setw(24) << value << "\n";

  arg = b;
  value = f ( arg );
  cout << "  " << setw(4) << step
       << "  " << setprecision(16) << setw(24) << arg
       << "  " << setprecision(16) << setw(24) << value << "\n";

  a2 = a;
  b2 = b;
  status = 0;

  for ( ; ; )
  {
    arg = local_min_rc ( a2, b2, status, value );

    if ( status < 0 )
    {
      cout << "\n";
      cout << "EXAMPLE_TEST - Fatal error!\n";
      cout << "  LOCAL_MIN_RC returned negative status.\n";
      break;
    }

    value = f ( arg );

    step = step + 1;
    cout << "  " << setw(4) << step
         << "  " << setprecision(16) << setw(24) << arg
         << "  " << setprecision(16) << setw(24) << value << "\n";

    if ( 50 < step )
    {
      cout << "\n";
      cout << "EXAMPLE_TEST - Fatal error!\n";
      cout << "  Too many steps!\n";
      break;
     }
    if ( status == 0 )
    {
      break;
    }
  }

  return;
}
//****************************************************************************80

double g_01 ( double x )

//****************************************************************************80
//
//  Purpose:
//
//    G_01 evaluates (x-2)^2 + 1.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    14 April 2008
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double X, the point at which F is to be evaluated.
//
//    Output, double G_01, the value of the function at X.
//
{
  double value;

  value = ( x - 2.0 ) * ( x - 2.0 ) + 1.0;

  return value;
}
//****************************************************************************80

double g_02 ( double x )

//****************************************************************************80
//
//  Purpose:
//
//    G_02 evaluates x^2 + exp ( - x ).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    14 April 2008
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double X, the point at which F is to be evaluated.
//
//    Output, double G_02, the value of the function at X.
//
{
  double value;

  value = x * x + exp ( - x );

  return value;
}
//****************************************************************************80

double g_03 ( double x )

//****************************************************************************80
//
//  Purpose:
//
//    G_03 evaluates x^4+2x^2+x+3.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    14 April 2008
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double X, the point at which F is to be evaluated.
//
//    Output, double G_03, the value of the function at X.
//
{
  double value;

  value = ( ( x * x + 2.0 ) * x + 1.0 ) * x + 3.0;

  return value;
}
//****************************************************************************80

double g_04 ( double x )

//****************************************************************************80
//
//  Purpose:
//
//    G_04 evaluates exp(x)+1/(100X)
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    14 April 2008
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double X, the point at which F is to be evaluated.
//
//    Output, double G_04, the value of the function at X.
//
{
  double value;

  value = exp ( x ) + 0.01 / x;

  return value;
}
//****************************************************************************80

double g_05 ( double x )

//****************************************************************************80
//
//  Purpose:
//
//    G_05 evaluates exp(x) - 2x + 1/(100x) - 1/(1000000x^2)
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    14 April 2008
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double X, the point at which F is to be evaluated.
//
//    Output, double G_05, the value of the function at X.
//
{
  double value;

  value = exp ( x ) - 2.0 * x + 0.01 / x - 0.000001 / x / x;

  return value;
}
//****************************************************************************80

double g_06 ( double x )

//****************************************************************************80
//
//  Purpose:
//
//    G_06 evaluates - x sin ( 10 pi x ) - 1
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    14 April 2008
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double X, the point at which F is to be evaluated.
//
//    Output, double G_06, the value of the function at X.
//
{
  const double r8_pi = 3.141592653589793;
  double value;

  value = - x * sin ( 10.0 * r8_pi * x ) - 1.0;

  return value;
}
