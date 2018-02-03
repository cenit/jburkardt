# include <cmath>
# include <cstdlib>
# include <cstring>
# include <ctime>
# include <fstream>
# include <iomanip>
# include <iostream>
# include <sstream>

using namespace std;

# include "newton_interp_1d.hpp"
# include "test_interp.hpp"

int main ( );
void newton_coef_1d_test ( );
void newton_value_1d_test ( );
void newton_interp_1d_test01 ( int prob );
string i4_to_string ( int i4 );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    NEWTON_INTERP_1D_TEST tests the NEWTON_INTERP_1D library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 July 2015
//
//  Author:
//
//    John Burkardt
//
{
  int prob;
  int prob_num;

  timestamp ( );
  cout << "\n";
  cout << "NEWTON_INTERP_1D_TEST:\n";
  cout << "  C++ version\n";
  cout << "  Test the NEWTON_INTERP_1D library.\n";
  cout << "  The R8LIB library is needed.\n";
  cout << "  This test needs the TEST_INTERP library as well.\n";

  newton_coef_1d_test ( );

  newton_value_1d_test ( );

  prob_num = p00_prob_num ( );

  for ( prob = 1; prob <= prob_num; prob++ )
  {
     newton_interp_1d_test01 ( prob );
  }
//
//  Terminate.
//
  cout << "\n";
  cout << "NEWTON_INTERP_1D_TEST:\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void newton_coef_1d_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    NEWTON_COEF_1D_TEST tests NEWTON_COEF_1D.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 July 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *cd;
  int nd = 5;
  double xd[5] = { 0.0, 1.0, 2.0, 3.0, 4.0 };
  double yd[5] = { 24.0, 0.0, 0.0, 0.0, 0.0 };

  cout << "\n";
  cout << "NEWTON_COEF_1D_TEST\n";
  cout << "  NEWTON_COEF_1D sets the coefficients for a 1D Newton interpolation.\n";

  r8vec2_print ( nd, xd, yd, "  Interpolation data:" );

  cd = newton_coef_1d ( nd, xd, yd );

  r8vec_print ( nd, cd, "  Newton interpolant coefficients:" );

  delete [] cd;

  return;
}
//****************************************************************************80

void newton_value_1d_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    NEWTON_VALUE_1D_TEST tests NEWTON_VALUE_1D.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 July 2015
//
//  Author:
//
//    John Burkardt
//
{
  double cd[5] = { 24.0, -24.0, +12.0, -4.0, 1.0 };
  int nd = 5;
  int ni = 16;
  double x_hi;
  double x_lo;
  double xd[5] = { 0.0, 1.0, 2.0, 3.0, 4.0 };
  double *xi;
  double *yi;

  cout << "\n";
  cout << "NEWTON_VALUE_1D_TEST\n";
  cout << "  NEWTON_VALUE_1D evaluates a Newton 1d interpolant.\n";

  r8vec2_print ( nd, xd, cd, "  The Newton interpolant data:" );

  x_lo = 0.0;
  x_hi = 5.0;
  xi = r8vec_linspace_new ( ni, x_lo, x_hi );
  yi = newton_value_1d ( nd, xd, cd, ni, xi );

  r8vec2_print ( ni, xi, yi, "  Newton interpolant values:" );

  delete [] xi;
  delete [] yi;

  return;
}
//****************************************************************************80

void newton_interp_1d_test01 ( int prob )

//****************************************************************************80
//
//  Purpose:
//
//    NEWTON_INTERP_1D_TEST01 tests NEWTON_INTERP_1D.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 July 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *cd;
  string command_filename;
  ofstream command_unit;
  string data_filename;
  ofstream data_unit;
  int i;
  double interp_error;
  string interp_filename;
  ofstream interp_unit;
  int j;
  double ld;
  double li;
  int nd;
  int ni;
  string output_filename;
  string title;
  double *xd;
  double *xi;
  double xmax;
  double xmin;
  double *xy;
  double *yd;
  double *yi;
  double ymax;
  double ymin;

  cout << "\n";
  cout << "NEWTON_INTERP_1D_TEST01:\n";
  cout << "  Interpolate data from TEST_INTERP problem #" << prob << "\n";

  nd = p00_data_num ( prob );
  cout << "  Number of data points = " << nd << "\n";

  xy = p00_data ( prob, 2, nd );
  
  xd = new double[nd];
  yd = new double[nd];

  for ( i = 0; i < nd; i++ )
  {
    xd[i] = xy[0+i*2];
    yd[i] = xy[1+i*2];
  }

  r8vec2_print ( nd, xd, yd, "  X, Y data:" );
//
//  Get the Newton coefficients.
//
  cd = newton_coef_1d ( nd, xd, yd );
//
//  #1:  Does interpolant match function at interpolation points?
//
  ni = nd;
  xi = r8vec_copy_new ( ni, xd );
  yi = newton_value_1d ( nd, xd, cd, ni, xi );

  interp_error = r8vec_norm_affine ( ni, yi, yd ) / ( double ) ( ni );

  cout << "\n";
  cout << "  L2 interpolation error averaged per interpolant node = " << interp_error << "\n";

  delete [] xi;
  delete [] yi;
//
//  #2: Compare estimated curve length to piecewise linear (minimal) curve length.
//  Assume data is sorted, and normalize X and Y dimensions by (XMAX-XMIN) and
//  (YMAX-YMIN).
//
  xmin = r8vec_min ( nd, xd );
  xmax = r8vec_max ( nd, xd );
  ymin = r8vec_min ( nd, yd );
  ymax = r8vec_max ( nd, yd );

  ni = 501;
  xi = r8vec_linspace_new ( ni, xmin, xmax );
  yi = newton_value_1d ( nd, xd, cd, ni, xi );

  ld = 0.0;
  for ( i = 0; i < nd - 1; i++ )
  {
    ld = ld + sqrt ( pow ( ( xd[i+1] - xd[i] ) / ( xmax - xmin ), 2 )
                   + pow ( ( yd[i+1] - yd[i] ) / ( ymax - ymin ), 2 ) ); 
  }

  li = 0.0;
  for ( i = 0; i < ni - 1; i++ )
  {
    li = li + sqrt ( pow ( ( xi[i+1] - xi[i] ) / ( xmax - xmin ), 2 )
                   + pow ( ( yi[i+1] - yi[i] ) / ( ymax - ymin ), 2 ) );
  }

  cout << "\n";
  cout << "  Normalized length of piecewise linear interpolant = " << ld << "\n";
  cout << "  Normalized length of Newton interpolant           = " << li << "\n";

  delete [] xi;
  delete [] yi;
//
//  Create data file.
//
  data_filename = "data" + i4_to_string ( prob ) + ".txt";
  data_unit.open ( data_filename.c_str ( ) );
  for ( j = 0; j < nd; j++ )
  {
    data_unit << "  " << xd[j]
              << "  " << yd[j] << "\n";
  }
  data_unit.close ( );
  cout << "\n";
  cout << "  Created graphics data file \"" << data_filename << "\".\n";
//
//  Create interp file.
//
  ni = 501;
  xmin = r8vec_min ( nd, xd );
  xmax = r8vec_max ( nd, xd );
  xi = r8vec_linspace_new ( ni, xmin, xmax );
  yi = newton_value_1d ( nd, xd, cd, ni, xi );

  interp_filename = "interp" + i4_to_string ( prob ) + ".txt";
  interp_unit.open ( interp_filename.c_str ( ) );
  for ( j = 0; j < ni; j++ )
  {
    interp_unit << "  " << xi[j]
                << "  " << yi[j] << "\n";
  }
  interp_unit.close ( );
  cout << "  Created graphics interp file \"" << interp_filename << "\".\n";
//
//  Plot the data and the interpolant.
//
  command_filename = "commands" + i4_to_string ( prob ) + ".txt";
  command_unit.open ( command_filename.c_str ( ) );

  output_filename = "plot" + i4_to_string ( prob ) + ".png";

  command_unit << "# " << command_filename << "\n";
  command_unit << "#\n";
  command_unit << "# Usage:\n";
  command_unit << "#  gnuplot < " << command_filename << "\n";
  command_unit << "#\n";
  command_unit << "set term png\n";
  command_unit << "set output '" << output_filename << "'\n";
  command_unit << "set xlabel '<---X--->'\n";
  command_unit << "set ylabel '<---Y--->'\n";
  command_unit << "set title 'Data versus Newton polynomial interpolant'\n";
  command_unit << "set grid\n";
  command_unit << "set style data lines\n";
  command_unit << "plot '" << data_filename 
               << "' using 1:2 with points pt 7 ps 2 lc rgb 'blue',\\\n";
  command_unit << "     '" << interp_filename 
               << "' using 1:2 lw 3 linecolor rgb 'red'\n";

  command_unit.close ( );
  cout << "  Created graphics command file \"" << command_filename << "\".\n";
//
//  Free memory.
//
  delete [] cd;
  delete [] xd;
  delete [] xi;
  delete [] xy;
  delete [] yd;
  delete [] yi;

  return;
}
//****************************************************************************80

string i4_to_string ( int i4 )

//****************************************************************************80
//
//  Purpose:
//
//    I4_TO_STRING converts an I4 to a C++ string.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    16 January 2013
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int I4, an integer.
//
//    Input, string FORMAT, the format string.
//
//    Output, string I4_TO_STRING, the string.
//
{
  ostringstream fred;
  string value;

  fred << i4;

  value = fred.str ( );

  return value;
}
