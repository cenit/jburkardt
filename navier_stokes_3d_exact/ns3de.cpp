# include <cmath>
# include <cstdlib>
# include <ctime>
# include <iostream>
# include <iomanip>

using namespace std;

# include "ns3de.hpp"

//****************************************************************************80

double r8_erf ( double x )

//****************************************************************************80
//
//  Purpose:
//
//    R8_ERF evaluates the error function ERF(X).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 May 2007
//
//  Author:
//
//    Original FORTRAN77 version by William Cody.
//    C++ version by John Burkardt.
//
//  Reference:
//
//    William Cody,
//    "Rational Chebyshev approximations for the error function",
//    Mathematics of Computation, 
//    1969, pages 631-638.
//
//  Parameters:
//
//    Input, double X, the argument of the error function.
//
//    Output, double R8_ERF, the value of the error function.
//
{
  double a[5] = {
    3.16112374387056560, 
    1.13864154151050156E+02, 
    3.77485237685302021E+02, 
    3.20937758913846947E+03, 
    1.85777706184603153E-01 };
  double b[4] = {
    2.36012909523441209E+01, 
    2.44024637934444173E+02, 
    1.28261652607737228E+03, 
    2.84423683343917062E+03 };
  double c[9] = {
    5.64188496988670089E-01, 
    8.88314979438837594, 
    6.61191906371416295E+01, 
    2.98635138197400131E+02, 
    8.81952221241769090E+02, 
    1.71204761263407058E+03, 
    2.05107837782607147E+03, 
    1.23033935479799725E+03, 
    2.15311535474403846E-08 };
  double d[8] = {
    1.57449261107098347E+01, 
    1.17693950891312499E+02, 
    5.37181101862009858E+02, 
    1.62138957456669019E+03, 
    3.29079923573345963E+03, 
    4.36261909014324716E+03, 
    3.43936767414372164E+03, 
    1.23033935480374942E+03 };
  double del;
  double erfx;
  int i;
  double p[6] = {
    3.05326634961232344E-01, 
    3.60344899949804439E-01, 
    1.25781726111229246E-01, 
    1.60837851487422766E-02, 
    6.58749161529837803E-04, 
    1.63153871373020978E-02 };
  double q[5] = {
    2.56852019228982242, 
    1.87295284992346047, 
    5.27905102951428412E-01, 
    6.05183413124413191E-02, 
    2.33520497626869185E-03 };
  double sqrpi = 0.56418958354775628695;
  double thresh = 0.46875;
  double xbig = 26.543;
  double xabs;
  double xden;
  double xnum;
  double xsmall = 1.11E-16;
  double xsq;

  xabs = fabs ( x );
//
//  Evaluate ERF(X) for |X| <= 0.46875.
//
  if ( xabs <= thresh )
  {
    if ( xsmall < xabs )
    {
      xsq = xabs * xabs;
    }
    else
    {
      xsq = 0.0;
    }

    xnum = a[4] * xsq;
    xden = xsq;
    for ( i = 0; i < 3; i++ )
    {
      xnum = ( xnum + a[i] ) * xsq;
      xden = ( xden + b[i] ) * xsq;
    }

    erfx = x * ( xnum + a[3] ) / ( xden + b[3] );
  }
//
//  Evaluate ERFC(X) for 0.46875 <= |X| <= 4.0.
//
  else if ( xabs <= 4.0 )
  {
    xnum = c[8] * xabs;
    xden = xabs;
    for ( i = 0; i < 7; i++ )
    {
      xnum = ( xnum + c[i] ) * xabs;
      xden = ( xden + d[i] ) * xabs;
    }

    erfx = ( xnum + c[7] ) / ( xden + d[7] );
    xsq = ( double ) ( ( int ) ( ( xabs * 16.0 ) / 16.0 ) );
    del = ( xabs - xsq ) * ( xabs + xsq );
    erfx = exp ( - xsq * xsq ) * exp ( - del ) * erfx;

    erfx = ( 0.5 - erfx ) + 0.5;

    if ( x < 0.0 )
    {
      erfx = - erfx;
    }
  }
//
//  Evaluate ERFC(X) for 4.0 < |X|.
//
  else
  {
    if ( xbig <= xabs )
    {
      if ( 0.0 < x )
      {
        erfx = 1.0;
      }
      else
      {
        erfx = - 1.0;
      }
    }
    else
    {
      xsq = 1.0 / ( xabs * xabs );

      xnum = p[5] * xsq;
      xden = xsq;
      for ( i = 0; i < 4; i++ )
      {
        xnum = ( xnum + p[i] ) * xsq;
        xden = ( xden + q[i] ) * xsq;
      }

      erfx = xsq * ( xnum + p[4] ) / ( xden + q[4] );
      erfx = ( sqrpi - erfx ) / xabs;
      xsq = ( double ) ( ( int ) ( ( xabs * 16.0 ) / 16.0 ) );
      del = ( xabs - xsq ) * ( xabs + xsq );
      erfx = exp ( - xsq * xsq ) * exp ( - del ) * erfx;

      erfx = ( 0.5 - erfx ) + 0.5;
      if ( x < 0.0 )
      {
        erfx = - erfx;
      }

    }

  }

  return erfx;
}
//****************************************************************************80

double r8vec_amax ( int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_AMAX returns the maximum absolute value in an R8VEC.
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
//    18 September 2005
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of entries in the array.
//
//    Input, double A[N], the array.
//
//    Output, double AMAX, the value of the entry
//    of largest magnitude.
//
{
  double amax;
  int i;

  amax = 0.0;
  for ( i = 0; i < n; i++ )
  {
    if ( amax < fabs ( a[i] ) )
    {
      amax = fabs ( a[i] );
    }
  }

  return amax;
}
//****************************************************************************80

double r8vec_amin ( int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_AMIN returns the minimum absolute value in an R8VEC.
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
//    18 September 2005
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of entries in the array.
//
//    Input, double A[N], the array.
//
//    Output, double R8VEC_AMIN, the value of the entry
//    of smallest magnitude.
//
{
  int i;
  const double r8_huge = 1.79769313486231571E+308;
  double value;

  value = r8_huge;
  for ( i = 0; i < n; i++ )
  {
    if ( fabs ( a[i] ) < value )
    {
      value = fabs ( a[i] );
    }
  }

  return value;
}
//****************************************************************************80

double r8vec_max ( int n, double r8vec[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_MAX returns the value of the maximum element in an R8VEC.
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
//    22 August 2010
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of entries in the array.
//
//    Input, double R8VEC[N], a pointer to the first entry of the array.
//
//    Output, double R8VEC_MAX, the value of the maximum element.  This
//    is set to 0.0 if N <= 0.
//
{
  int i;
  double value;

  value = r8vec[0];

  for ( i = 1; i < n; i++ )
  {
    if ( value < r8vec[i] )
    {
      value = r8vec[i];
    }
  }
  return value;
}
//****************************************************************************80

double r8vec_min ( int n, double r8vec[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_MIN returns the value of the minimum element in an R8VEC.
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
//    02 July 2005
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of entries in the array.
//
//    Input, double R8VEC[N], the array to be checked.
//
//    Output, double R8VEC_MIN, the value of the minimum element.
//
{
  int i;
  double value;

  value = r8vec[0];

  for ( i = 1; i < n; i++ )
  {
    if ( r8vec[i] < value )
    {
      value = r8vec[i];
    }
  }
  return value;
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

double *r8vec_zeros_new ( int n )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_ZEROS_NEW creates and zeroes an R8VEC.
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
//    10 July 2008
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of entries in the vector.
//
//    Output, double R8VEC_ZEROS_NEW[N], a vector of zeroes.
//
{
  double *a;
  int i;

  a = new double[n];

  for ( i = 0; i < n; i++ )
  {
    a[i] = 0.0;
  }
  return a;
}
//****************************************************************************80

void resid_burgers ( double nu, int n, double x[], double y[], 
  double z[], double t[], double ur[], double vr[], double wr[], double pr[] )

//****************************************************************************80
//
//  Purpose:
//
//    RESID_BURGERS evaluates the Burgers residual.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    17 January 2015
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Martin Bazant, Henry Moffatt,
//    Exact solutions of the Navier-Stokes equations having steady vortex 
//    structures,
//    Journal of Fluid Mechanics,
//    Volume 541, pages 55-64, 2005.
//
//    Johannes Burgers,
//    A mathematical model illustrating the theory of turbulence,
//    Advances in Applied Mechanics,
//    Volume 1, pages 171-199, 1948.
//
//  Parameters:
//
//    Input, double NU, the kinematic viscosity.
//
//    Input, int N, the number of points at which the solution 
//    is to be evaluated.
//
//    Input, double X[N], Y[N], Z[N], the coordinates of the points.
//
//    Input, double T[N], the time coordinates.
//
//    Output, double UR[N], VR[N], WR[N], PR[N], the residuals.
//
{
  int i;
  double p;
  double px;
  double py;
  double pz;
  const double r8_pi = 3.141592653589793;
  double u;
  double ut;
  double ux;
  double uxx;
  double uy;
  double uyy;
  double uz;
  double uzz;
  double v;
  double vt;
  double vx;
  double vxx;
  double vy;
  double vyy;
  double vz;
  double vzz;
  double w;
  double wt;
  double wx;
  double wxx;
  double wy;
  double wyy;
  double wz;
  double wzz;

  for ( i = 0; i < n; i++ )
  {
//
//  Form the functions and derivatives.
//
    u =   2.0 * x[i];
    ux =  2.0;
    uxx = 0.0;
    uy =  0.0;
    uyy = 0.0;
    uz =  0.0;
    uzz = 0.0;
    ut =  0.0;

    v =   - 2.0 * y[i];
    vx =  0.0;
    vxx = 0.0;
    vy =  - 2.0;
    vyy = 0.0;
    vz =  0.0;
    vzz = 0.0;
    vt =  0.0;

    w =   r8_erf ( y[i] / sqrt ( nu ) );
    wx =  0.0;
    wxx = 0.0;
    wy =    2.0 * sqrt ( 1.0 / nu / r8_pi )        * exp ( - y[i] * y[i] / nu );
    wyy = - 4.0 * sqrt ( 1.0 / nu / r8_pi ) * y[i] * exp ( - y[i] * y[i] / nu ) / nu;
    wz =  0.0;
    wzz = 0.0;
    wt =  0.0;

    p = - 2.0 * ( x[i] * x[i] + y[i] * y[i] );
    px = - 4.0 * x[i];
    py = - 4.0 * y[i];
    pz = 0.0;
//
//  Evaluate the residuals.
//
    ur[i] = ut 
      + u * ux + v * uy + w * uz + px 
      - nu * ( uxx + uyy + uzz );
 
    vr[i] = vt 
      + u * vx + v * vy + w * vz + py 
      - nu * ( vxx + vyy + vzz );

    wr[i] = wt
      + u * wx + v * wy + w * wz + pz 
      - nu * ( wxx + wyy + wzz );

    pr[i] = ux + vy + wz;
  }

  return;
}
//****************************************************************************80

void resid_ethier ( double a, double d, int n, double x[], double y[], 
  double z[], double t[], double ur[], double vr[], double wr[], double pr[] )

//****************************************************************************80
//
//  Purpose:
//
//    RESID_ETHIER evaluates the Ethier residual.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    17 January 2015
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    C Ross Ethier, David Steinman,
//    Exact fully 3D Navier-Stokes solutions for benchmarking,
//    International Journal for Numerical Methods in Fluids,
//    Volume 19, Number 5, March 1994, pages 369-375.
//
//  Parameters:
//
//    Input, double A, D, the parameters.  Sample values are A = PI/4 
//    and D = PI/2.
//
//    Input, int N, the number of points at which the solution 
//    is to be evaluated.
//
//    Input, double X[N], Y[N], Z[N], the coordinates of the points.
//
//    Input, double T[N], the time coordinates.
//
//    Output, double UR[N], VR[N], WR[N], PR[N], the residuals.
//
{
  double cxy;
  double cyz;
  double czx;
  double e2t;
  double e2x;
  double e2y;
  double e2z;
  double e4t;
  double ex;
  double exy;
  double ey;
  double eyz;
  double ez;
  double ezx;
  int i;
  double p;
  double px;
  double py;
  double pz;
  double sxy;
  double syz;
  double szx;
  double u;
  double ut;
  double ux;
  double uxx;
  double uy;
  double uyy;
  double uz;
  double uzz;
  double v;
  double vt;
  double vx;
  double vxx;
  double vy;
  double vyy;
  double vz;
  double vzz;
  double w;
  double wt;
  double wx;
  double wxx;
  double wy;
  double wyy;
  double wz;
  double wzz;
//
//  Make some temporaries.
//
  for ( i = 0; i < n; i++ )
  {
    ex = exp ( a * x[i] );
    ey = exp ( a * y[i] );
    ez = exp ( a * z[i] );

    e2x = exp ( 2.0 * a * x[i] );
    e2y = exp ( 2.0 * a * y[i] );
    e2z = exp ( 2.0 * a * z[i] );

    e2t = exp  ( -       d * d * t[i] );
    e4t = exp  ( - 2.0 * d * d * t[i] );

    exy = exp ( a * ( x[i] + y[i] ) );
    eyz = exp ( a * ( y[i] + z[i] ) );
    ezx = exp ( a * ( z[i] + x[i] ) );

    sxy = sin ( a * x[i] + d * y[i] );
    syz = sin ( a * y[i] + d * z[i] );
    szx = sin ( a * z[i] + d * x[i] );

    cxy = cos ( a * x[i] + d * y[i] );
    cyz = cos ( a * y[i] + d * z[i] );
    czx = cos ( a * z[i] + d * x[i] );
//
//  Form the functions and derivatives.
//
    u =   -         a * (           ex * syz 
                          +         ez * cxy ) * e2t;
    ux =  -         a * (       a * ex * syz 
                          -     a * ez * sxy ) * e2t;
    uxx = -         a * (   a * a * ex * syz 
                          - a * a * ez * cxy ) * e2t;
    uy =  -         a * (       a * ex * cyz 
                          -     d * ez * sxy ) * e2t;
    uyy = -         a * ( - a * a * ex * syz 
                          - d * d * ez * cxy ) * e2t;
    uz =  -         a * (       d * ex * cyz
                          +     a * ez * cxy ) * e2t;
    uzz =  -        a * ( - d * d * ex * syz 
                          + a * a * ez * cxy ) * e2t;
    ut =  + d * d * a * (           ex * syz
                          +         ez * cxy ) * e2t;

    v =   -         a * (           ey * szx
                          +         ex * cyz ) * e2t;
    vx =  -         a * (       d * ey * czx
                          +     a * ex * cyz ) * e2t;
    vxx = -         a * ( - d * d * ey * szx 
                          + a * a * ex * cyz ) * e2t;
    vy =  -         a * (       a * ey * szx 
                          -     a * ex * syz ) * e2t;
    vyy = -         a * (   a * a * ey * szx 
                          - a * a * ex * cyz ) * e2t;
    vz =  -         a * (       a * ey * czx 
                          -     d * ex * syz ) * e2t;
    vzz =  -        a * ( - a * a * ey * szx 
                          - d * d * ex * cyz ) * e2t;
    vt =  + d * d * a * (           ey * szx 
                          +         ex * cyz ) * e2t;

    w =   -         a * (           ez * sxy 
                          +         ey * czx ) * e2t;
    wx =  -         a * (       a * ez * cxy 
                          -     d * ey * szx ) * e2t;
    wxx = -         a * ( - a * a * ez * sxy 
                          - d * d * ey * czx ) * e2t;
    wy =  -         a * (       d * ez * cxy 
                          +     a * ey * czx ) * e2t;
    wyy = -         a * ( - d * d * ez * sxy 
                          + a * a * ey * czx ) * e2t;
    wz =  -         a * (       a * ez * sxy 
                          -     a * ey * szx ) * e2t;
    wzz = -         a * (   a * a * ez * sxy 
                          - a * a * ey * czx ) * e2t;
    wt =  + d * d * a * (           ez * sxy 
                          +         ey * czx ) * e2t;

    p = - 0.5 * a * a * e4t * ( 
      + e2x + 2.0 * sxy * czx * eyz 
      + e2y + 2.0 * syz * cxy * ezx 
      + e2z + 2.0 * szx * cyz * exy );

    px = - 0.5 * a * a * e4t * ( 
      + 2.0 * a * e2x 
      + 2.0 * a * cxy * czx * eyz 
      - 2.0 * d * sxy * szx * eyz 
      - 2.0 * a * syz * sxy * ezx 
      + 2.0 * a * syz * cxy * ezx 
      + 2.0 * d * czx * cyz * exy 
      + 2.0 * a * szx * cyz * exy );

    py = - 0.5 * a * a * e4t * ( 
      + 2.0 * d * cxy * czx * eyz
      + 2.0 * a * sxy * czx * eyz
      + 2.0 * a * e2y 
      + 2.0 * a * cyz * cxy * ezx
      - 2.0 * d * syz * sxy * ezx
      - 2.0 * a * szx * syz * exy
      + 2.0 * a * szx * cyz * exy );

    pz = - 0.5 * a * a * e4t * ( 
      - 2.0 * a * sxy * szx * eyz 
      + 2.0 * a * sxy * czx * eyz 
      + 2.0 * d * cyz * cxy * ezx 
      + 2.0 * a * syz * cxy * ezx 
      + 2.0 * a * e2z 
      + 2.0 * a * czx * cyz * exy 
      - 2.0 * d * szx * syz * exy );
//
//  Evaluate the residuals.
//
    ur[i] = ut 
      + u * ux + v * uy + w * uz + px 
      - ( uxx + uyy + uzz );
 
    vr[i] = vt 
      + u * vx + v * vy + w * vz + py 
      - ( vxx + vyy + vzz );

    wr[i] = wt
      + u * wx + v * wy + w * wz + pz 
      - ( wxx + wyy + wzz );

    pr[i] = ux + vy + wz;
  }

  return;
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
//****************************************************************************80

void uvwp_burgers ( double nu, int n, double x[], double y[], 
  double z[], double t[], double u[], double v[], double w[], double p[] )

//****************************************************************************80
//
//  Purpose:
//
//    UVWP_BURGERS evaluates the Burgers solution.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    17 January 2015
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Martin Bazant, Henry Moffatt,
//    Exact solutions of the Navier-Stokes equations having steady vortex 
//    structures,
//    Journal of Fluid Mechanics,
//    Volume 541, pages 55-64, 2005.
//
//    Johannes Burgers,
//    A mathematical model illustrating the theory of turbulence,
//    Advances in Applied Mechanics,
//    Volume 1, pages 171-199, 1948.
//
//  Parameters:
//
//    Input, double NU, the kinematic viscosity.
//
//    Input, int N, the number of points at which the solution 
//    is to be evaluated.
//
//    Input, double X[N], Y[N], Z[N], the coordinates of the points.
//
//    Input, double T[N], the time coordinates.
//
//    Output, double U[N], V[N], W[N], P[N], the solution values.
//
{
  int i;

  for ( i = 0; i < n; i++ )
  {
//
//  Form the functions and derivatives.
//
    u[i] =   2.0 * x[i];
    v[i] =   - 2.0 * y[i];
    w[i] =   r8_erf ( y[i] / sqrt ( nu ) );
    p[i] = - 2.0 * ( x[i] * x[i] + y[i] * y[i] );
  }

  return;
}
//****************************************************************************80

void uvwp_ethier ( double a, double d, int n, double x[], double y[], 
  double z[], double t[], double u[], double v[], double w[], double p[] )

//****************************************************************************80
//
//  Purpose:
//
//    UVWP_ETHIER evaluates the Ethier solution.
//
//  Discussion:
//
//    The reference asserts that the given velocity and pressure fields
//    are exact solutions for the 3D incompressible time-dependent
//    Navier Stokes equations over any region.
//
//    To define a typical problem, one chooses a bounded spatial region 
//    and a starting time, and then imposes boundary and initial conditions
//    by referencing the exact solution appropriately.
//
//    In the reference paper, a calculation is made for the cube centered
//    at (0,0,0) with a "radius" of 1 unit, and over the time interval
//    from t = 0 to t = 0.1, with parameters a = PI/4 and d = PI/2,
//    and with Dirichlet boundary conditions on all faces of the cube.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    17 January 2015
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    C Ross Ethier, David Steinman,
//    Exact fully 3D Navier-Stokes solutions for benchmarking,
//    International Journal for Numerical Methods in Fluids,
//    Volume 19, Number 5, March 1994, pages 369-375.
//
//  Parameters:
//
//    Input, double A, D, the parameters.  Sample values are A = PI/4 and
//    D = PI/2.
//
//    Input, int N, the number of points at which the solution is to
//    be evaluated.
//
//    Input, double X[N], Y[N], Z[N], the coordinates of the points.
//
//    Input, double T[N], the time coordinates.
//
//    Output, double U[N], V[N], W[N], P[N], the velocity components and
//    pressure at each of the points.
//
{
  double cxy;
  double cyz;
  double czx;
  double e2t;
  double ex;
  double exy;
  double ey;
  double eyz;
  double ez;
  double ezx;
  int i;
  double sxy;
  double syz;
  double szx;

  for ( i = 0; i < n; i++ )
  {
    ex = exp ( a * x[i] );
    ey = exp ( a * y[i] );
    ez = exp ( a * z[i] );

    e2t = exp  ( - d * d * t[i] );

    exy = exp ( a * ( x[i] + y[i] ) );
    eyz = exp ( a * ( y[i] + z[i] ) );
    ezx = exp ( a * ( z[i] + x[i] ) );

    sxy = sin ( a * x[i] + d * y[i] );
    syz = sin ( a * y[i] + d * z[i] );
    szx = sin ( a * z[i] + d * x[i] );

    cxy = cos ( a * x[i] + d * y[i] );
    cyz = cos ( a * y[i] + d * z[i] );
    czx = cos ( a * z[i] + d * x[i] );

    u[i] = - a * ( ex * syz + ez * cxy ) * e2t;
    v[i] = - a * ( ey * szx + ex * cyz ) * e2t;
    w[i] = - a * ( ez * sxy + ey * czx ) * e2t;
    p[i] = 0.5 * a * a * e2t * e2t * ( 
      + ex * ex + 2.0 * sxy * czx * eyz 
      + ey * ey + 2.0 * syz * cxy * ezx 
      + ez * ez + 2.0 * szx * cyz * exy );
  }

  return;
}

