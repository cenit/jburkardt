# include <chrono>
# include <cmath>
# include <cstdlib>
# include <ctime>
# include <iomanip>
# include <iostream>

using namespace std;
using namespace std::chrono;

int main ( );
void chrono_test ( );
int i4_power ( int i, int j );
double r8_huge ( );
double r8_max ( double x, double y );
double r8_min ( double x, double y );
void timestamp ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for TIMER_CHRONO.
//
//  Discussion:
//
//    TIMER_CHRONO uses the C++ high precision CHRONO facility as the timer.
//
//    ???
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    16 May 2017
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );

  cout << "\n";
  cout << "TIMER_CHRONO\n";
  cout << "  C++ version\n";
  cout << "  Demonstrate the CHRONO timing facility.\n";

  chrono_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "TIMER_CLOCK\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void chrono_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    CHRONO_TEST times the RAND routine using CHRONO.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    16 May 2017
//
//  Author:
//
//    John Burkardt
//
{

  int i;
  int n;
  int n_log;
  int n_log_min = 0;
  int n_log_max = 24;
  int n_max;
  int n_min;
  int rep;
  int rep_num = 5;
  double t;
  high_resolution_clock::time_point t1;
  high_resolution_clock::time_point t2;
  double t_ave;
  double t_max;
  double t_min;
  duration <double> t_span;
  int *x;

  n_min = i4_power ( 2, n_log_min );
  n_max = i4_power ( 2, n_log_max );

  cout << "\n";
  cout << "CHRONO_TEST\n";
  cout << "  Time the RAND function by computing N values.\n";
  cout << "  For a given N, repeat the computation 5 times.\n";
  cout << "\n";
  cout << "  Data vectors will be of minimum size " << n_min << "\n";
  cout << "  Data vectors will be of maximum size " << n_max << "\n";
  cout << "\n";
  cout << "  Times are in seconds.\n";
  cout << "\n";
  cout << "         N      Rep #1      Rep #2      Rep #2      Rep #4      Rep #5"
       << "         Min         Ave         Max\n";
  cout << "\n";

  cout << setprecision ( 5 );

  for ( n_log = n_log_min; n_log <= n_log_max; n_log++ )
  {
    n = i4_power ( 2, n_log );
    x = new int[n];

    cout << "  " << setw(8) << n;

    t_min = r8_huge ( );
    t_max = 0.0;
    t_ave = 0.0;

    for ( rep = 1; rep <= rep_num; rep++ )
    {
      t1 = high_resolution_clock::now ( );

      for ( i = 0; i < n; i++ )
      {
        x[i] = rand ( );
      }

      t2 = high_resolution_clock::now ( );
      t_span = duration_cast < duration < double > > ( t2 - t1 );

      t = t_span.count ( );
      t_max = r8_max ( t_max, t );
      t_min = r8_min ( t_min, t );
      t_ave = t_ave + t;

      cout << "  " << setw(10) << t;
    }
    t_ave = t_ave / ( double ) rep_num;

    cout << "  " << setw(12) << t_min
         << "  " << setw(12) << t_ave
         << "  " << setw(12) << t_max << "\n";

    delete [] x;
  }

  return;
}
//****************************************************************************80

int i4_power ( int i, int j )

//****************************************************************************80
//
//  Purpose:
//
//    I4_POWER returns the value of I^J.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    01 April 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int I, J, the base and the power.  J should be nonnegative.
//
//    Output, int I4_POWER, the value of I^J.
//
{
  int k;
  int value;

  if ( j < 0 )
  {
    if ( i == 1 )
    {
      value = 1;
    }
    else if ( i == 0 )
    {
      cout << "\n";
      cout << "I4_POWER - Fatal error!\n";
      cout << "  I^J requested, with I = 0 and J negative.\n";
      exit ( 1 );
    }
    else
    {
      value = 0;
    }
  }
  else if ( j == 0 )
  {
    if ( i == 0 )
    {
      cout << "\n";
      cout << "I4_POWER - Fatal error!\n";
      cout << "  I^J requested, with I = 0 and J = 0.\n";
      exit ( 1 );
    }
    else
    {
      value = 1;
    }
  }
  else if ( j == 1 )
  {
    value = i;
  }
  else
  {
    value = 1;
    for ( k = 1; k <= j; k++ )
    {
      value = value * i;
    }
  }
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

double r8_max ( double x, double y )

//****************************************************************************80
//
//  Purpose:
//
//    R8_MAX returns the maximum of two R8's.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    18 August 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double X, Y, the quantities to compare.
//
//    Output, double R8_MAX, the maximum of X and Y.
//
{
  double value;

  if ( y < x )
  {
    value = x;
  } 
  else
  {
    value = y;
  }
  return value;
}
//****************************************************************************80

double r8_min ( double x, double y )

//****************************************************************************80
//
//  Purpose:
//
//    R8_MIN returns the minimum of two R8's.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    31 August 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double X, Y, the quantities to compare.
//
//    Output, double R8_MIN, the minimum of X and Y.
//
{
  double value;

  if ( y < x )
  {
    value = y;
  } 
  else
  {
    value = x;
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
//    24 September 2003
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
  const struct tm *tm;
  size_t len;
  time_t now;

  now = time ( NULL );
  tm = localtime ( &now );

  len = strftime ( time_buffer, TIME_SIZE, "%d %B %Y %I:%M:%S %p", tm );

  cout << time_buffer << "\n";

  return;
# undef TIME_SIZE
}
