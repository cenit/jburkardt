# include <cmath>
# include <cstdlib>
# include <fstream>
# include <iomanip>
# include <iostream>
# include <sstream>

using namespace std;

# include "vandermonde_interp_1d.hpp"
# include "condition.hpp"
# include "qr_solve.hpp"
# include "test_interp.hpp"
# include "r8lib.hpp"

int main ( );
void vandermonde_coef_1d_test ( );
void vandermonde_matrix_1d_test ( );
void vandermonde_value_1d_test ( );
void test01 ( int prob );
void test02 ( int prob );
string i4_to_string ( int i4 );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for VANDERMONDE_INTERP_1D_PRB.
//
//  Discussion:
//
//    VANDERMONDE_INTERP_1D_PRB tests the VANDERMONDE_INTERP_1D library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 July 2013
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
  cout << "VANDERMONDE_INTERP_1D_PRB:\n";
  cout << "  C++ version\n";
  cout << "  Test the VANDERMONDE_INTERP_1D library.\n";
  cout << "  The QR_SOLVE library is needed.\n";
  cout << "  The R8LIB library is needed.\n";
  cout << "  This test needs the CONDITION library.\n";
  cout << "  This test needs the TEST_INTERP library.\n";

  vandermonde_coef_1d_test ( );

  vandermonde_matrix_1d_test ( );

  vandermonde_value_1d_test ( );

  prob_num = p00_prob_num ( );

  for ( prob = 1; prob <= prob_num; prob++ )
  {
    test01 ( prob );
  }

  for ( prob = 1; prob <= prob_num; prob++ )
  {
    test02 ( prob );
  }
//
//  Terminate.
//
  cout << "\n";
  cout << "VANDERMONDE_INTERP_1D_PRB:\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void vandermonde_coef_1d_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    VANDERMONDE_COEF_1D_TEST tests VANDERMONDE_COEF_1D.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 July 2015
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
  cout << "VANDERMONDE_COEF_1D_TEST\n";
  cout << "  VANDERMONDE_COEF_1D sets the Vandermonde coefficients for 1D interpolation.\n";

  r8vec2_print ( nd, xd, yd, "  Interpolation data:" );

  cd = vandermonde_coef_1d ( nd, xd, yd );

  r8vec_print ( nd, cd, "  Vandermonde interpolant coefficients:" );

  r8poly_print ( nd - 1, cd, "  Vandermonde interpolant polynomial:" );

  delete [] cd;

  return;
}
//****************************************************************************80

void vandermonde_matrix_1d_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    VANDERMONDE_MATRIX_1D_TEST tests VANDERMONDE_MATRIX_1D.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 July 2015
//
//  Author:
//
//    John Burkardt
//
{
  double *ad;
  int nd = 4;
  double xd[4] = { -1.0, 2.0, 3.0, 5.0 };

  cout << "\n";
  cout << "VANDERMONDE_MATRIX_1D_TEST\n";
  cout << "  VANDERMONDE_MATRIX_1D sets the Vandermonde matrix for 1D interpolation.\n";

  ad = vandermonde_matrix_1d ( nd, xd );

  r8mat_print ( nd, nd, ad, "  Vandermonde matrix:" );

  delete [] ad;

  return;
}
//****************************************************************************80

void vandermonde_value_1d_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    VANDERMONDE_VALUE_1D_TEST tests VANDERMONDE_VALUE_1D.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 July 2015
//
//  Author:
//
//    John Burkardt
//
{
  double cd[5] = { 24.0, -50.0, +35.0, -10.0, 1.0 };
  int i;
  int nd = 5;
  int ni = 16;
  double x_hi;
  double x_lo;
  double *xi;
  double *yi;

  cout << "\n";
  cout << "VANDERMONDE_VALUE_1D_TEST\n";
  cout << "  VANDERMONDE_VALUE_1D evaluates a Vandermonde interpolant.\n";

  r8poly_print ( nd - 1, cd, "  The polynomial:" );

  x_lo = 0.0;
  x_hi = 5.0;
  xi = r8vec_linspace_new ( ni, x_lo, x_hi );

  yi = vandermonde_value_1d ( nd, cd, ni, xi );

  r8vec2_print ( ni, xi, yi, "  X, P(X):" );

  delete [] xi;
  delete [] yi;

  return;
}
//****************************************************************************80

void test01 ( int prob )

//****************************************************************************80
//
//  Purpose:
//
//    TEST01 tests VANDERMONDE_INTERP_1D.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 October 2012
//
//  Author:
//
//    John Burkardt
//
{
  double *ad;
  int debug = 0;
  double *cd;
  double condition;
  int i;
  double int_error;
  double ld;
  double li;
  int nd;
  int ni;
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
  cout << "TEST01:\n";
  cout << "  Interpolate data from TEST_INTERP problem #" << prob << "\n";

  nd = p00_data_num ( prob );
  cout << "  Number of data points = " << nd << "\n";

  xy = p00_data ( prob, 2, nd );
  
  if ( debug )
  {
    r8mat_transpose_print ( 2, nd, xy, "  Data array:" );
  }

  xd = new double[nd];
  yd = new double[nd];

  for ( i = 0; i < nd; i++ )
  {
    xd[i] = xy[0+i*2];
    yd[i] = xy[1+i*2];
  }
//
//  Compute Vandermonde matrix and get condition number.
//
  ad = vandermonde_matrix_1d ( nd, xd );

  condition = condition_hager ( nd, ad );

  cout << "\n";
  cout << "  Condition of Vandermonde matrix is " << condition << "\n";
//
//  Solve linear system.
//
  cd = qr_solve ( nd, nd, ad, yd );
//
//  #1:  Does interpolant match function at interpolation points?
//
  ni = nd;
  xi = r8vec_copy_new ( ni, xd );
  yi = vandermonde_value_1d ( nd, cd, ni, xi );

  int_error = r8vec_norm_affine ( ni, yi, yd ) / ( double ) ( ni );

  cout << "\n";
  cout << "  L2 interpolation error averaged per interpolant node = " << int_error << "\n";

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
  yi = vandermonde_value_1d ( nd, cd, ni, xi );

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
  cout << "  Normalized length of polynomial interpolant       = " << li << "\n";

  delete [] ad;
  delete [] cd;
  delete [] xd;
  delete [] xi;
  delete [] xy;
  delete [] yd;
  delete [] yi;

  return;
}
//****************************************************************************80

void test02 ( int prob )

//****************************************************************************80
//
//  Purpose:
//
//    TEST02 tests VANDERMONDE_INTERP_1D_MATRIX.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 June 2013
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int PROB, the problem index.
//
{
  double *ad;
  double *cd;
  string command_filename;
  ofstream command_unit;
  string data_filename;
  ofstream data_unit;
  int i;
  string interp_filename;
  ofstream interp_unit;
  int j;
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

  cout << "\n";
  cout << "TEST02:\n";
  cout << "  VANDERMONDE_INTERP_1D_MATRIX sets the Vandermonde linear system\n";
  cout << "  for the interpolating polynomial.\n";
  cout << "  Interpolate data from TEST_INTERP problem #" << prob << "\n";

  nd = p00_data_num ( prob );
  cout << "  Number of data points = " << nd << "\n";

  xy = p00_data ( prob, 2, nd );
  
  r8mat_transpose_print ( 2, nd, xy, "  Data array:" );

  xd = new double[nd];
  yd = new double[nd];

  for ( i = 0; i < nd; i++ )
  {
    xd[i] = xy[0+2*i];
    yd[i] = xy[1+2*i];
  }
//
//  Compute Vandermonde matrix and get condition number.
//
  ad = vandermonde_matrix_1d ( nd, xd );
//
//  Solve linear system.
//
  cd = qr_solve ( nd, nd, ad, yd );
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
  yi = vandermonde_value_1d ( nd, cd, ni, xi );

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
  command_unit << "set title 'Data versus Vandermonde polynomial interpolant'\n";
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
  delete [] ad;
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
