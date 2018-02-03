# include <cstdlib>
# include <iostream>
# include <fstream>
# include <iomanip>
# include <cmath>
# include <cstring>
# include <ctime>

using namespace std;

# include "line_cvt_lloyd.hpp"

//****************************************************************************80

void energy_plot ( int it_num, double e_plot[], string header )

//****************************************************************************80
//
//  Purpose:
//
//    ENERGY_PLOT plots the energy as a function of the iterations.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    29 July 2014
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int IT_NUM, the number of iterations to take.
//
//    Input, double E_PLOT[IT_NUM+1], the energy per iteration.
//
//    Input, string HEADER, an identifying string.
//
{
  string command_filename;
  ofstream command_unit;
  string data_filename;
  ofstream data_unit;
  int it;
  string plot_filename;
//
//  Write data file.
//
  data_filename = header + "_energy_data.txt";
  data_unit.open ( data_filename.c_str ( ) );
  for ( it = 0; it <= it_num; it++ )
  {
    if ( 0.0 < e_plot[it] )
    {
      data_unit << it << "  "
                << log ( e_plot[it] ) << "\n";;
    }
  }
  data_unit.close ( );

  cout << "\n";
  cout << "  Gnuplot data written to file '" << data_filename << "'\n";
//
//  Write command file.
//
  command_filename = header + "_energy_commands.txt";
  command_unit.open ( command_filename.c_str ( ) );

  plot_filename = header + "_energy.png";

  command_unit << "set term png\n";
  command_unit << "set output '" << plot_filename << "'\n";
  command_unit << "set grid\n";
  command_unit << "set style data lines\n";
  command_unit << "set timestamp\n";
  command_unit << "unset key\n";
  command_unit << "set xlabel '<---Iteration--->'\n";
  command_unit << "set ylabel '<---Log(Energy)--->'\n";
  command_unit << "set title 'Energy Decrease with Iteration'\n";
  command_unit << "plot '" << data_filename << "' using 1:2 with points pt 7 ps 1\n";
  command_unit << "quit\n";

  command_unit.close ( );

  cout << "  Gnuplot commands written to '" << command_filename << "'\n";

  return;
}
//****************************************************************************80

void evolution_plot ( int n, int it_num, double x_plot[], string header )

//****************************************************************************80
//
//  Purpose:
//
//    EVOLUTION_PLOT plots all points as a function of the iterations.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    29 July 2014
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of points.
//
//    Input, int IT_NUM, the number of iterations to take.
//
//    Input, double X_PLOT[N*IT_NUM], the point locations over time.
//
//    Input, string HEADER, an identifying string.
//
{
  string command_filename;
  ofstream command_unit;
  string data_filename;
  ofstream data_unit;
  int i;
  int it;
  string plot_filename;
//
//  Write data file.
//
  data_filename = header + "_evolution_data.txt";
  data_unit.open ( data_filename.c_str ( ) );

  for ( it = 0; it <= it_num; it++ )
  {
    data_unit << it << "  ";
    for ( i = 0; i < n; i++ )
    {
      data_unit << x_plot[i+it*n] << "  ";
    }
    data_unit << "\n";
  }

  data_unit.close ( );

  cout << "\n";
  cout << "  Gnuplot data written to file '" << data_filename << "'\n";
//
//  Write command file.
//
  command_filename = header + "_evolution_commands.txt";
  command_unit.open ( command_filename.c_str ( ) );

  plot_filename = header + "_evolution.png";

  command_unit << "set term png\n";
  command_unit << "set output '" << plot_filename << "'\n";
  command_unit << "set grid\n";
  command_unit << "set style data lines\n";
  command_unit << "set timestamp\n";
  command_unit << "unset key\n";
  command_unit << "set xlabel '<---X--->'\n";
  command_unit << "set ylabel '<---Iteration--->'\n";
  command_unit << "set title 'Point Motion with Iteration'\n";
  command_unit << "plot for [i=2:" << n + 1 << "] '"
               << data_filename << "' using i:1 with points pt 7 ps 1\n"; 

  command_unit << "quit\n";

  command_unit.close ( );

  cout << "  Gnuplot commands written to '" << command_filename << "'\n";

  return;
}
//****************************************************************************80

void line_ccvt_lloyd ( int n, double a, double b, int it_num, string header, 
  double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    LINE_CCVT_LLOYD carries out the constrained Lloyd algorithm.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    28 July 2014
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of generators.
//
//    Input, double A, B, the left and right endpoints.
//
//    Input, int IT_NUM, the number of iterations to take.
//
//    Input, string HEADER, an identifying string.
//
//    Input/output, double X[N], the point locations.
//
{
  double e;
  double *e_plot;
  int i;
  int it;
  double *x_old;
  double *x_plot;
  double xm;
  double *xm_plot;

  e_plot = new double[it_num+1];

  e = line_cvt_energy ( n, a, b, x );
  e_plot[0] = e;

  x_plot = new double[n*(it_num+1)];
  for ( i = 0; i < n; i++ )
  {
    x_plot[i+0*n] = x[i];
  }

  xm_plot = new double[it_num];

  x_old = new double[n];
  
  for ( it = 1; it <= it_num; it++ )
  {
    r8vec_copy ( n, x, x_old );

    line_ccvt_lloyd_step ( n, a, b, x );

    for ( i = 0; i < n; i++ )
    {
      x_plot[i+it*n] = x[i];
    }

    e = line_cvt_energy ( n, a, b, x );
    e_plot[it] = e;

    xm = 0.0;
    for ( i = 0; i < n; i++ )
    {
      xm = xm + pow ( x_old[i] - x[i], 2 );
    }
    xm = xm / ( double ) ( n );
    xm_plot[it-1] = xm;
  }

  energy_plot ( it_num, e_plot, header );
  motion_plot ( it_num, xm_plot, header );
  evolution_plot ( n, it_num, x_plot, header );

  delete [] e_plot;
  delete [] x_old;
  delete [] x_plot;
  delete [] xm_plot;

  return;
}
//****************************************************************************80

void line_ccvt_lloyd_step ( int n, double a, double b, double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    LINE_CCVT_LLOYD_STEP takes one step of Lloyd"s constrained CVT algorithm.
//
//  Discussion:
//
//    Each step of Lloyd"s algorithm replaces a point by the center of mass
//    of the associated region.  For points on a line, with a uniform
//    density, the associated region is demarcated by the midways between 
//    successive points.
//
//    Here, we include the additional constraint that we want the first and last
//    points to be fixed at the endpoints of the line, that is, X(1) = A
//    and X(2) = B.  In that case, the calculation of the updates for the
//    first two and last two points must be handled differently.
//
//    For points away from the boundary, a step of Lloyd"s method can be 
//    regarded as replacing each point by the average of the left and right
//    midways.  The midways, of course, are the average of two points.
//    So for point J, we have:
//
//      M(J-1,J) = ( X(J-1) + X(J) ) / 2
//      M(J,J+1) = ( X(J) + X(J+1) ) / 2
//      X*(J) = ( M(J-1,J) + M(J,J+1) ) / 2 = ( X(J-1) + 2 X(J) + X(J+1) ) / 4
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    29 July 2014
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of points.
//    1 <= N.
//
//    Input, double A, B, the left and right endpoints.
//
//    Input/output, double X[N], the point locations.
//
{
  int j;
  double *x_old;

  x_old = r8vec_copy_new ( n, x );

  if ( n == 1 )
  {
    x[0] = ( a + b ) / 2.0;
  }
  else if ( n == 2 )
  {
    x[0] = a;
    x[1] = b;
  }
  else
  {
    x[0] = a;
 
    for ( j = 1; j < n - 1; j++ )
    {
      x[j] = ( 0.5 * ( x_old[j-1] + x_old[j] ) 
             + 0.5 * ( x_old[j] + x_old[j+1] ) ) / 2.0;
    }

    x[n-1] = b;
  }

  delete [] x_old;

  return;
}
//****************************************************************************80

double line_cvt_energy ( int n, double a, double b, double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    LINE_CVT_ENERGY computes the CVT energy for a given set of generators.
//
//  Discussion:
//
//    Given a set of generators G over the line [A,B], then the energy
//    is defined as
//      E = integral ( a <= x <= b ) ( x - g(x) )^2 dx
//    where g(x) is the nearest generator to the point x.
//
//    For the 1D case, this integral can be evaluated exactly as the
//    sum of integrals over each subinterval:
//
//      E(i) = integral ( xl <= x <= xr ) ( x - x(i) )^2 dx
//           = ( ( x(i) - xl )^3 + ( xr - x(i) )^3 ) / 3
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    28 July 2014
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of generators.
//
//    Input, double A, B, the left and right endpoints.
//
//    Input, double X[N], the generator locations.
//
//    Output, double LINE_CVT_ENERGY, the energy of the generator distribution.
//
{
  double e;
  int j;
  double xl;
  double xr;

  e = 0.0;

  for ( j = 0; j < n; j++ )
  {
    if ( j == 0 )
    {
      xl = a;
    }
    else
    {
      xl = ( x[j-1] + x[j] ) / 2.0;
    }

    if ( j == n - 1 )
    {
      xr = b;
    }
    else
    {
      xr = ( x[j] + x[j+1] ) / 2.0;
    }

    e = e + ( pow ( x[j] - xl, 3 ) + pow ( xr - x[j], 3 )  ) / 3.0;
  }

  return e;
}
//****************************************************************************80

void line_cvt_lloyd ( int n, double a, double b, int it_num, string header, 
  double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    LINE_CVT_LLOYD carries out the Lloyd algorithm.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    28 July 2014
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of generators.
//
//    Input, double A, B, the left and right endpoints.
//
//    Input, int IT_NUM, the number of iterations to take.
//
//    Input, string HEADER, an identifying string.
//
//    Input/output, double X[N], the point locations.
//
{
  double e;
  double *e_plot;
  int i;
  int it;
  double *x_old;
  double *x_plot;
  double xm;
  double *xm_plot;

  e_plot = new double[it_num+1];

  e = line_cvt_energy ( n, a, b, x );
  e_plot[0] = e;

  x_plot = new double[n*(it_num+1)];
  for ( i = 0; i < n; i++ )
  {
    x_plot[i+0*n] = x[i];
  }

  xm_plot = new double[it_num];

  x_old = new double[n];
  
  for ( it = 1; it <= it_num; it++ )
  {
    r8vec_copy ( n, x, x_old );

    line_cvt_lloyd_step ( n, a, b, x );

    for ( i = 0; i < n; i++ )
    {
      x_plot[i+it*n] = x[i];
    }

    e = line_cvt_energy ( n, a, b, x );
    e_plot[it] = e;

    xm = 0.0;
    for ( i = 0; i < n; i++ )
    {
      xm = xm + pow ( x_old[i] - x[i], 2 );
    }
    xm = xm / ( double ) ( n );
    xm_plot[it-1] = xm;
  }

  energy_plot ( it_num, e_plot, header );
  motion_plot ( it_num, xm_plot, header );
  evolution_plot ( n, it_num, x_plot, header );

  delete [] e_plot;
  delete [] x_old;
  delete [] x_plot;
  delete [] xm_plot;

  return;
}
//****************************************************************************80

void line_cvt_lloyd_step ( int n, double a, double b, double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    LINE_CVT_LLOYD_STEP takes one step of Lloyd"s unconstrained CVT algorithm.
//
//  Discussion:
//
//    Each step of Lloyd"s algorithm replaces a point by the center of mass
//    of the associated region.  For points on a line, with a uniform
//    density, the associated region is demarcated by the midways between 
//    successive points.
//
//    For points away from the boundary, a step of Lloyd"s method can be 
//    regarded as replacing each point by the average of the left and right
//    midways.  The midways, of course, are the average of two points.
//    So for point J, we have:
//
//      M(J-1,J) = ( X(J-1) + X(J) ) / 2
//      M(J,J+1) = ( X(J) + X(J+1) ) / 2
//      X*(J) = ( M(J-1,J) + M(J,J+1) ) / 2 = ( X(J-1) + 2 X(J) + X(J+1) ) / 4
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    28 July 2014
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of points.
//    1 <= N.
//
//    Input, double A, B, the left and right endpoints.
//
//    Input, double X[N], the point locations.
//
{
  int j;
  double *x_old;

  x_old = r8vec_copy_new ( n, x );

  if ( n == 1 )
  {
    x[0] = ( a + b ) / 2.0;
  }
  else
  {
    j = 0;
    x[j] = (           a                     
             + 0.5 * ( x_old[j] + x_old[j+1] ) ) / 2.0;

    for ( j = 1; j < n - 1; j++ )
    {
      x[j] = ( 0.5 * ( x_old[j-1] + x_old[j] ) 
             + 0.5 * ( x_old[j] + x_old[j+1] ) ) / 2.0;
    }

    j = n - 1;
    x[j] =   ( 0.5 * ( x_old[j-1] + x_old[j] ) 
             +                             b )   / 2.0;

  }

  delete [] x_old;

  return;
}
//****************************************************************************80

void motion_plot ( int it_num, double xm_plot[], string header )

//****************************************************************************80
//
//  Purpose:
//
//    MOTION_PLOT plots the motion as a function of the iterations.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    29 July 2014
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int IT_NUM, the number of iterations to take.
//
//    Input, double XM_PLOT[IT_NUM], the average motion per iteration.
//
//    Input, string HEADER, an identifying string.
//
{
  string command_filename;
  ofstream command_unit;
  string data_filename;
  ofstream data_unit;
  int it;
  string plot_filename;
//
//  Write data file.
//
  data_filename = header + "_motion_data.txt";
  data_unit.open ( data_filename.c_str ( ) );

  for ( it = 1; it <= it_num; it++ )
  {
    if ( 0.0 < xm_plot[it-1] )
    {
      data_unit << it << "  "
                << log ( xm_plot[it-1] ) << "\n";
    }
  }
  data_unit.close ( );

  cout << "\n";
  cout << "  Gnuplot data written to file '" << data_filename << "'\n";
//
//  Write command file.
//
  command_filename = header + "_motion_commands.txt";
  command_unit.open ( command_filename.c_str ( ) );

  plot_filename = header + "_motion.png";

  command_unit << "set term png\n";
  command_unit << "set output '" << plot_filename << "'\n";
  command_unit << "set grid\n";
  command_unit << "set style data lines\n";
  command_unit << "set timestamp\n";
  command_unit << "unset key\n";
  command_unit << "set xlabel '<---Iteration--->'\n";
  command_unit << "set ylabel '<---Average Motion--->'\n";
  command_unit << "set title 'Generator Motion with Iteration'\n";
  command_unit << "plot '" << data_filename 
               << "' using 1:2 with points pt 7 ps 1\n";
  command_unit << "quit\n";

  command_unit.close ( );

  cout << "  Gnuplot commands written to '" << command_filename << "'\n";

  return;
}
//****************************************************************************80

void r8vec_copy ( int n, double a1[], double a2[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_COPY copies an R8VEC.
//
//  Discussion:
//
//    An R8VEC is a vector of R8's.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 July 2005
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of entries in the vectors.
//
//    Input, double A1[N], the vector to be copied.
//
//    Output, double A2[N], the copy of A1.
//
{
  int i;

  for ( i = 0; i < n; i++ )
  {
    a2[i] = a1[i];
  }
  return;
}
//****************************************************************************80

double *r8vec_copy_new ( int n, double a1[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_COPY_NEW copies an R8VEC to a new R8VEC.
//
//  Discussion:
//
//    An R8VEC is a vector of R8's.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 July 2008
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of entries in the vectors.
//
//    Input, double A1[N], the vector to be copied.
//
//    Output, double R8VEC_COPY_NEW[N], the copy of A1.
//
{
  double *a2;
  int i;

  a2 = new double[n];

  for ( i = 0; i < n; i++ )
  {
    a2[i] = a1[i];
  }
  return a2;
}
//****************************************************************************80

void r8vec_print ( int n, double a[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_PRINT prints an R8VEC.
//
//  Discussion:
//
//    An R8VEC is a vector of R8's.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    16 August 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of components of the vector.
//
//    Input, double A[N], the vector to be printed.
//
//    Input, string TITLE, a title.
//
{
  int i;

  cout << "\n";
  cout << title << "\n";
  cout << "\n";
  for ( i = 0; i < n; i++ )
  {
    cout << "  " << setw(8)  << i
         << ": " << setw(14) << a[i]  << "\n";
  }

  return;
}
//****************************************************************************80

void r8vec_sort_insert_a ( int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_SORT_INSERT_A ascending sorts an R8VEC using an insertion sort.
//
//  Discussion:
//
//    An R8VEC is a vector of R8's.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    13 April 1999
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Donald Kreher, Douglas Simpson,
//    Algorithm 1.1,
//    Combinatorial Algorithms,
//    CRC Press, 1998, page 11.
//
//  Parameters:
//
//    Input, int N, the number of items in the vector.
//    N must be positive.
//
//    Input/output, double A[N].
//
//    On input, A contains data to be sorted.
//    On output, the entries of A have been sorted in ascending order.
//
{
  int i;
  int j;
  double x;

  for ( i = 1; i < n; i++ )
  {
    x = a[i];

    j = i;

    while ( 1 <= j && x < a[j-1] )
    {
      a[j] = a[j-1];
      j = j - 1;
    }
    a[j] = x;
  }

  return;
}
//****************************************************************************80

double *r8vec_uniform_ab_new ( int n, double a, double b, int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_UNIFORM_AB_NEW returns a scaled pseudorandom R8VEC.
//
//  Discussion:
//
//    Each dimension ranges from A to B.
//
//    This routine implements the recursion
//
//      seed = ( 16807 * seed ) mod ( 2^31 - 1 )
//      u = seed / ( 2^31 - 1 )
//
//    The integer arithmetic never requires more than 32 bits,
//    including a sign bit.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 April 2012
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Paul Bratley, Bennett Fox, Linus Schrage,
//    A Guide to Simulation,
//    Second Edition,
//    Springer, 1987,
//    ISBN: 0387964673,
//    LC: QA76.9.C65.B73.
//
//    Bennett Fox,
//    Algorithm 647:
//    Implementation and Relative Efficiency of Quasirandom
//    Sequence Generators,
//    ACM Transactions on Mathematical Software,
//    Volume 12, Number 4, December 1986, pages 362-376.
//
//    Pierre L'Ecuyer,
//    Random Number Generation,
//    in Handbook of Simulation,
//    edited by Jerry Banks,
//    Wiley, 1998,
//    ISBN: 0471134031,
//    LC: T57.62.H37.
//
//    Peter Lewis, Allen Goodman, James Miller,
//    A Pseudo-Random Number Generator for the System/360,
//    IBM Systems Journal,
//    Volume 8, Number 2, 1969, pages 136-143.
//
//  Parameters:
//
//    Input, int N, the number of entries in the vector.
//
//    Input, double A, B, the lower and upper limits of the pseudorandom values.
//
//    Input/output, int &SEED, a seed for the random number generator.
//
//    Output, double R8VEC_UNIFORM_AB_NEW[N], the vector of pseudorandom values.
//
{
  int i;
  const int i4_huge = 2147483647;
  int k;
  double *r;

  if ( seed == 0 )
  {
    cerr << "\n";
    cerr << "R8VEC_UNIFORM_AB_NEW - Fatal error!\n";
    cerr << "  Input value of SEED = 0.\n";
    exit ( 1 );
  }

  r = new double[n];

  for ( i = 0; i < n; i++ )
  {
    k = seed / 127773;

    seed = 16807 * ( seed - k * 127773 ) - k * 2836;

    if ( seed < 0 )
    {
      seed = seed + i4_huge;
    }

    r[i] = a + ( b - a ) * ( double ) ( seed ) * 4.656612875E-10;
  }

  return r;
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
