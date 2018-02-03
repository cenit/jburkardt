# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "vandermonde_interp_1d.hpp"
# include "qr_solve.hpp"
# include "r8lib.hpp"

//****************************************************************************80

double *vandermonde_coef_1d ( int nd, double xd[], double yd[] )

//****************************************************************************80
//
//  Purpose:
//
//    VANDERMONDE_COEF_1D computes coefficients of a 1D Vandermonde interpolant.
//
//  Discussion:
//
//    We assume the interpolant has the form
//
//      p(x) = c1 + c2 * x + c3 * x^2 + ... + cn * x^(n-1).
//
//    We have n data values (x(i),y(i)) which must be interpolated:
//
//      p(x(i)) = c1 + c2 * x(i) + c3 * x(i)^2 + ... + cn * x(i)^(n-1) = y(i)
//
//    This can be cast as an NxN linear system for the polynomial
//    coefficients:
//
//      [ 1 x1 x1^2 ... x1^(n-1) ] [  c1 ] = [  y1 ]
//      [ 1 x2 x2^2 ... x2^(n-1) ] [  c2 ] = [  y2 ]
//      [ ...................... ] [ ... ] = [ ... ]
//      [ 1 xn xn^2 ... xn^(n-1) ] [  cn ] = [  yn ]
//
//    and if the x values are distinct, the system is theoretically
//    invertible, so we can retrieve the coefficient vector c and
//    evaluate the interpolant.
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
//  Parameters:
//
//    Input, int ND, the number of data points.
//
//    Input, double XD[ND], YD[ND], the data values.
//
//    Output, double VANDERMONDE_COEF_1D[ND], the coefficients of the 
//    interpolating polynomial.
//
{
  double *ad;
  double *cd;

  ad = vandermonde_matrix_1d ( nd, xd );

  cd = qr_solve ( nd, nd, ad, yd );

  delete [] ad;

  return cd;
}
//****************************************************************************80

double *vandermonde_matrix_1d ( int nd, double xd[] )

//****************************************************************************80
//
//  Purpose:
//
//    VANDERMONDE_MATRIX_1D computes a Vandermonde 1D interpolation matrix.
//
//  Discussion:
//
//    We assume the interpolant has the form
//
//      p(x) = c1 + c2 * x + c3 * x^2 + ... + cn * x^(n-1).
//
//    We have n data values (x(i),y(i)) which must be interpolated:
//
//      p(x(i)) = c1 + c2 * x(i) + c3 * x(i)^2 + ... + cn * x(i)^(n-1) = y(i)
//
//    This can be cast as an NxN linear system for the polynomial
//    coefficients:
//
//      [ 1 x1 x1^2 ... x1^(n-1) ] [  c1 ] = [  y1 ]
//      [ 1 x2 x2^2 ... x2^(n-1) ] [  c2 ] = [  y2 ]
//      [ ...................... ] [ ... ] = [ ... ]
//      [ 1 xn xn^2 ... xn^(n-1) ] [  cn ] = [  yn ]
//
//    and if the x values are distinct, the matrix A is theoretically
//    invertible (though in fact, generally badly conditioned).
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
//  Parameters:
//
//    Input, int ND, the number of data points.
//
//    Input, double XD[ND], the data values.
//
//    Output, double VANDERMONDE_MATRIX_1D[ND*ND], the Vandermonde matrix for X.
//
{
  double *ad;
  int i;
  int j;

  ad = ( double * ) malloc ( nd * nd * sizeof ( double ) );

  for ( i = 0; i < nd; i++ )
  {
    ad[i+0*nd] = 1.0;
  }
  for ( j = 1; j < nd; j++ )
  {
    for ( i = 0; i < nd; i++ )
    {
      ad[i+j*nd] = ad[i+(j-1)*nd] * xd[i];
    }
  }
  return ad;
}
//****************************************************************************80

double *vandermonde_value_1d ( int nd, double cd[], int ni, double xi[] )

//****************************************************************************80
//
//  Purpose:
//
//    VANDERMONDE_VALUE_1D evaluates a Vandermonde interpolant.
//
//  Discussion:
//
//    The polynomial 
//
//      p(x) = cd0 + cd1 * x + cd2 * x^2 + ... + cd(nd-1) * x^(nd-1)
//
//    is to be evaluated at the vector of values X.
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
//  Parameters:
//
//    Input, int ND, the number of data values.
//
//    Input, double CD[ND], the polynomial coefficients.  
//    CD[I] is the coefficient of X^I.
//
//    Input, int NI, the number of interpolation points.
//
//    Input, double XI[NI], the interpolation points.
//
//    Output, double VANDERMONDE_VALUE_1D[NI], the interpolation values.
//
{
  int i;
  int j;
  double *yi;

  yi = new double[ni];

  for ( j = 0; j < ni; j++ )
  {
    yi[j] = cd[nd-1];
  }

  for ( i = nd - 2; 0 <= i; i-- )
  {
    for ( j = 0; j < ni; j++ )
    {
      yi[j] = yi[j] * xi[j] + cd[i];
    }
  }
  return yi;
}
