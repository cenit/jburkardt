# include <cmath>
# include <cstdlib>
# include <ctime>
# include <iomanip>
# include <iostream>
# include <string>

# include "zero_rc.hpp"

using namespace std;

int main ( );
void example_test ( double a, double b, double t, double f ( double x ),
  string title );
double f_01 ( double x );
double f_02 ( double x );
double f_03 ( double x );
double f_04 ( double x );
double f_05 ( double x );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for ZERO_RC_PRB.
//
//  Discussion:
//
//    ZERO_RC_PRB tests the ZERO_RC library.
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
  cout << "ZERO_RC_PRB\n";
  cout << "  C++ version\n";
  cout << "  ZERO_RC seeks a root of a function F(X)\n";
  cout << "  in an interval [A,B] using reverse communication.\n";

  t = r8_epsilon ( );

  a = 1.0;
  b = 2.0;

  example_test ( a, b, t, f_01,
    "f_01(x) = sin ( x ) - x / 2" );

  a = 0.0;
  b = 1.0;

  example_test ( a, b, t, f_02,
    "f_02(x) = 2 * x - exp ( - x )" );

  a = -1.0;
  b =  0.5;

  example_test ( a, b, t, f_03,
    "f_03(x) = x * exp ( - x )" );

  a =  0.0001;
  b =  20.0;

  example_test ( a, b, t, f_04,
    "f_04(x) = exp ( x ) - 1 / ( 100 * x * x )" );

  a = -5.0;
  b =  2.0;

  example_test ( a, b, t, f_05,
    "f_05(x) = (x+3) * (x-1) * (x-1)" );
//
//  Terminate.
//
  cout << "\n";
  cout << "ZERO_RC_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void example_test ( double a, double b, double t, double f ( double x ),
  string title )

//****************************************************************************80
//
//  Purpose:
//
//    EXAMPLE_TEST tests ZERO_RC on one test function.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    14 October 2008
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double A, B, the two endpoints of the change of sign
//    interval.
//
//    Input, double MACHEP, an estimate for the relative machine
//    precision.
//
//    Input, double T, a positive error tolerance.
//
//    Input, double F ( double x ), the name of a user-supplied
//    function which evaluates the function whose zero is being sought.
//
//    Input, string TITLE, a title for the problem.
//
{
  double arg;
  int status;
  double value;

  cout << "\n";
  cout << "  " << title << "\n";
  cout << "\n";
  cout << "    STATUS      X               F(X)\n";
  cout << "\n";

  status = 0;

  for ( ; ; )
  {
    zero_rc ( a, b, t, arg, status, value );

    if ( status < 0 )
    {
      cout << "\n";
      cout << "  ZERO_RC returned an error flag!\n";
      break;
    }

    value = f ( arg );

    cout << "  " << setw(8) << status
         << "  " << setw(14) << arg
         << "  " << setw(14) << value << "\n";

    if ( status == 0 )
    {
      break;
    }
  }

  return;
}
//****************************************************************************80

double f_01 ( double x )

//****************************************************************************80
//
//  Purpose:
//
//    F_01 evaluates sin ( x ) - x / 2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    13 April 2008
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double X, the point at which F is to be evaluated.
//
//    Output, double F_01, the value of the function at X.
//
{
  double value;

  value = sin ( x ) - 0.5 * x;

  return value;
}
//****************************************************************************80

double f_02 ( double x )

//****************************************************************************80
//
//  Purpose:
//
//    F_02 evaluates 2*x-exp(-x).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    13 April 2008
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double X, the point at which F is to be evaluated.
//
//    Output, double F_02, the value of the function at X.
//
{
  double value;

  value = 2.0 * x - exp ( - x );

  return value;
}
//****************************************************************************80

double f_03 ( double x )

//****************************************************************************80
//
//  Purpose:
//
//    F_03 evaluates x*exp(-x).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    13 April 2008
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double X, the point at which F is to be evaluated.
//
//    Output, double F_03, the value of the function at X.
//
{
  double value;

  value = x * exp ( - x );

  return value;
}
//****************************************************************************80

double f_04 ( double x )

//****************************************************************************80
//
//  Purpose:
//
//    F_04 evaluates exp(x) - 1 / (100*x*x).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    13 April 2008
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double X, the point at which F is to be evaluated.
//
//    Output, double F_04, the value of the function at X.
//
{
  double value;

  value = exp ( x ) - 1.0 / 100.0 / x / x;

  return value;
}
//****************************************************************************80

double f_05 ( double x )

//****************************************************************************80
//
//  Purpose:
//
//    F_05 evaluates (x+3)*(x-1)*(x-1).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    13 April 2008
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double X, the point at which F is to be evaluated.
//
//    Output, double F_05, the value of the function at X.
//
{
  double value;

  value = ( x + 3.0 ) * ( x - 1.0 ) * ( x - 1.0 );

  return value;
}

