# include <cmath>
# include <cstdlib>
# include <cstring>
# include <ctime>
# include <iostream>
# include <iomanip>

using namespace std;

# include "root_rc.hpp"

//****************************************************************************80

double root_rc ( double x, double fx, double &ferr, double &xerr, double q[9] )

//****************************************************************************80
//
//  Purpose:
//
//    ROOT_RC solves a single nonlinear equation using reverse communication.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    24 January 2013
//
//  Author:
//
//    Original FORTRAN77 version by Gaston Gonnet.
//    C++ version by John Burkardt.
//
//  Reference:
// 
//    Gaston Gonnet,
//    On the Structure of Zero Finders,
//    BIT Numerical Mathematics,
//    Volume 17, Number 2, June 1977, pages 170-183.
//
//  Parameters:
//
//    Input, double X, an estimate for the root.  On the first
//    call, this must be a value chosen by the user.  Thereafter, it may
//    be a value chosen by the user, or the value of ROOT returned on the
//    previous call to the function.
//
//    Input, double FX, the value of the function at X.
//
//    Output, double &FERR, the smallest value of F encountered.
//
//    Output, double &XERR, the width of the change-in-sign interval,
//    if one was encountered.
//
//    Input/output, double Q[9], storage needed by the function.
//    Before the first call, the user must set Q(1) to 0.
//
//    Output, double ROOT_RC, an improved estimate for the root.
//
{
  double d;
  double decr;
  int i;
  double p;
  double r;
  double u;
  double v;
  double w;
  double xnew;
  double z;
//
//  If we found an exact zero, there is nothing more to do.
//
  if ( fx == 0.0 )
  {
    ferr = 0.0;
    xerr = 0.0;
    xnew = x;
    return xnew;
  }

  ferr = fabs ( fx );
//
//  If this is the first time, initialize, estimate the first root, and exit.
//
  if ( q[0] == 0.0 )
  {
    q[0] = fx;
    q[1] = x;
    for ( i = 2; i < 9; i++ )
    {
      q[i] = 0.0;
    }
    xnew = x + fx;
    xerr = r8_huge ( );
    return xnew;
  }
//
//  This is not the first call.
//
  q[8] = q[8] + 1.0;
//
//  Check for too many iterations.
//
  if ( 80.0 < q[8] )
  {
    cout << "\n";
    cout << "ROOT_RC - Fatal error!\n";
    cout << "  Number of iterations = " << ( int ) q[8] << "\n";
    exit ( 1 );
  }
//
//  Check for a repeated X value.
//
  if ( ( 2.0 <= q[8] && x == q[3] ) || x == q[1] )
  {
    cout << "\n";
    cout << "ROOT_RC - Fatal error!\n";
    cout << "  Value of X has been input before.\n";
    exit ( 1 );
  }
//
//  Push X -> A -> B -> C
//
  for ( i = 5; 2 <= i; i-- )
  {
    q[i] = q[i-2];
  }
  q[0] = fx;
  q[1] = x;
//
//  If we have a change-in-sign interval, store the opposite value.
//
  if ( r8_sign ( q[0] ) != r8_sign ( q[2] ) )
  {
    q[6] = q[2];
    q[7] = q[3];
  }
//
//  Calculate XERR.
//
  if ( q[6] != 0.0 )
  {
    xerr = fabs ( q[7] - q[1] );
  }
  else
  {
    xerr = r8_huge ( );
  }
//
//  If more than 30 iterations, and we have change-in-sign interval, bisect.
//
  if ( 30.0 < q[8] && q[6] != 0.0 )
  {
    xnew = q[1] + ( q[7] - q[1] ) / 2.0;
    return xnew;
  }

  v = ( q[2] - q[0] ) / ( q[3] - q[1] );
//
//  If 3 or more points, try Muller.
//
  if ( q[4] != 0.0 )
  {
    u = ( q[4] - q[2] ) / ( q[5] - q[3] );
    w = q[3] - q[1];
    z = ( q[5] - q[1] ) / w;
    r = ( z + 1.0 ) * v - u;

    if ( r != 0.0 )
    {
      p = 2.0 * z * q[0] / r;
      d = 2.0 * p / ( w * r ) * ( v - u );
      if ( -1.0 <= d )
      {
        xnew = q[1] - p / ( 1.0 + sqrt ( 1.0 + d ) );
        if ( q[6] == 0.0 || 
             ( q[1] < xnew && xnew < q[7] ) || 
             ( q[7] < xnew && xnew < q[1] ) )
        {
          return xnew;
        }
      }
    }
  }
//
//  Try the secant step.
//
  if ( q[0] != q[2] || q[6] == 0.0 )
  {
    if ( q[0] == q[2] )
    {
      cout << "\n";
      cout << "ROOT_RC - Fatal error!\n";
      cout << "  Cannot apply any method.\n";
      exit ( 1 );
    }
    decr = q[0] / v;
    if ( fabs ( decr ) * 4.6E+18 < fabs ( q[1] ) )
    {
      decr = 1.74E-18 * fabs ( q[1] ) * r8_sign ( decr );
    }
    xnew = q[1] - decr;
    if ( q[6] == 0.0 || 
        ( q[1] < xnew && xnew < q[7] ) || 
        ( q[7] < xnew && xnew < q[1] ) )
    {
      return xnew;
    }
  }
//
//  Apply bisection.
//
  xnew = q[1] + ( q[7] - q[1] ) / 2.0;

  return xnew;
}
//****************************************************************************80

double r8_epsilon ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_EPSILON returns the R8 roundoff unit.
//
//  Discussion:
//
//    The roundoff unit is a number R which is a power of 2 with the
//    property that, to the precision of the computer's arithmetic,
//      1 < 1 + R
//    but
//      1 = ( 1 + R / 2 )
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 September 2012
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, double R8_EPSILON, the R8 round-off unit.
//
{
  const double value = 2.220446049250313E-016;

  return value;
}
//****************************************************************************80

double r8_huge ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8_HUGE returns a "huge" R8.
//
//  Discussion:
//
//    The value returned by this function is NOT required to be the
//    maximum representable R8.  This value varies from machine to machine,
//    from compiler to compiler, and may cause problems when being printed.
//    We simply want a "very large" but non-infinite number.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    06 October 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, double R8_HUGE, a "huge" R8 value.
//
{
  double value;

  value = 1.0E+30;

  return value;
}
//****************************************************************************80

double r8_sign ( double x )

//****************************************************************************80
//
//  Purpose:
//
//    R8_SIGN returns the sign of an R8.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    18 October 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double X, the number whose sign is desired.
//
//    Output, double R8_SIGN, the sign of X.
//
{
  double value;

  if ( x < 0.0 )
  {
    value = -1.0;
  }
  else
  {
    value = 1.0;
  }
  return value;
}
//****************************************************************************80

void timestamp ( )

//****************************************************************************80
//
//  Purpose:
//
//    TIMESTAMP prints the current YMDHMS date as a time stamp.
//
//  Example:
//
//    31 May 2001 09:45:54 AM
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    08 July 2009
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    None
//
{
# define TIME_SIZE 40

  static char time_buffer[TIME_SIZE];
  const struct std::tm *tm_ptr;
  size_t len;
  std::time_t now;

  now = std::time ( NULL );
  tm_ptr = std::localtime ( &now );

  len = std::strftime ( time_buffer, TIME_SIZE, "%d %B %Y %I:%M:%S %p", tm_ptr );

  std::cout << time_buffer << "\n";

  return;
# undef TIME_SIZE
}
