# include <cmath>
# include <cstdlib>
# include <cstring>
# include <ctime>
# include <iomanip>
# include <iostream>

using namespace std;

# include "log_normal.hpp"

//****************************************************************************80

double log_normal_cdf ( double x, double mu, double sigma )

//****************************************************************************80
//
//  Purpose:
//
//    LOG_NORMAL_CDF evaluates the Log Normal CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    19 September 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double X, the argument of the PDF.
//    0.0 < X.
//
//    Input, double MU, SIGMA, the parameters of the PDF.
//    0.0 < SIGMA.
//
//    Output, double LOG_NORMAL_CDF, the value of the CDF.
//
{
  double cdf;
  double logx;

  if ( x <= 0.0 )
  {
    cdf = 0.0;
  }
  else
  {
    logx = log ( x );

    cdf = normal_cdf ( logx, mu, sigma );
  }

  return cdf;
}
//****************************************************************************80

double log_normal_cdf_inv ( double cdf, double mu, double sigma )

//****************************************************************************80
//
//  Purpose:
//
//    LOG_NORMAL_CDF_INV inverts the Log Normal CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    19 September 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double CDF, the value of the CDF.
//    0.0 <= CDF <= 1.0.
//
//    Input, double MU, SIGMA, the parameters of the PDF.
//    0.0 < SIGMA.
//
//    Input, double LOG_NORMAL_CDF_INV, the corresponding argument.
//
{
  double logx;
  double x;

  if ( cdf < 0.0 || 1.0 < cdf )
  {
    cerr << "\n";
    cerr << "LOG_NORMAL_CDF_INV - Fatal error!\n";
    cerr << "  CDF < 0 or 1 < CDF.\n";
    exit ( 1 );
  }

  logx = normal_cdf_inv ( cdf, mu, sigma );

  x = exp ( logx );

  return x;
}
//****************************************************************************80

void log_normal_cdf_values ( int &n_data, double &mu, double &sigma,
  double &x, double &fx )

//****************************************************************************80
//
//  Purpose:
//
//    LOG_NORMAL_CDF_VALUES returns some values of the Log Normal CDF.
//
//  Discussion:
//
//    In Mathematica, the function can be evaluated by:
//
//      Needs["Statistics`ContinuousDistributions`"]
//      dist = Log NormalDistribution [ mu, sigma ]
//      CDF [ dist, x ]
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    28 August 2004
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Milton Abramowitz, Irene Stegun,
//    Handbook of Mathematical Functions,
//    National Bureau of Standards, 1964,
//    ISBN: 0-486-61272-4,
//    LC: QA47.A34.
//
//    Stephen Wolfram,
//    The Mathematica Book,
//    Fourth Edition,
//    Cambridge University Press, 1999,
//    ISBN: 0-521-64314-7,
//    LC: QA76.95.W65.
//
//  Parameters:
//
//    Input/output, int &N_DATA.  The user sets N_DATA to 0 before the
//    first call.  On each call, the routine increments N_DATA by 1, and
//    returns the corresponding data; when there is no more data, the
//    output value of N_DATA will be 0 again.
//
//    Output, double &MU, the mean of the distribution.
//
//    Output, double &SIGMA, the shape parameter of the distribution.
//
//    Output, double &X, the argument of the function.
//
//    Output, double &FX, the value of the function.
//
{
# define N_MAX 12

  static double fx_vec[N_MAX] = {
     0.2275013194817921E-01,
     0.2697049307349095E+00,
     0.5781741008028732E+00,
     0.7801170895122241E+00,
     0.4390310097476894E+00,
     0.4592655190218048E+00,
     0.4694258497695908E+00,
     0.4755320473858733E+00,
     0.3261051056816658E+00,
     0.1708799040927608E+00,
     0.7343256357952060E-01,
     0.2554673736161761E-01 };

  static double mu_vec[N_MAX] = {
     0.1000000000000000E+01,
     0.1000000000000000E+01,
     0.1000000000000000E+01,
     0.1000000000000000E+01,
     0.1000000000000000E+01,
     0.1000000000000000E+01,
     0.1000000000000000E+01,
     0.1000000000000000E+01,
     0.2000000000000000E+01,
     0.3000000000000000E+01,
     0.4000000000000000E+01,
     0.5000000000000000E+01 };

  static double sigma_vec[N_MAX] = {
     0.5000000000000000E+00,
     0.5000000000000000E+00,
     0.5000000000000000E+00,
     0.5000000000000000E+00,
     0.2000000000000000E+01,
     0.3000000000000000E+01,
     0.4000000000000000E+01,
     0.5000000000000000E+01,
     0.2000000000000000E+01,
     0.2000000000000000E+01,
     0.2000000000000000E+01,
     0.2000000000000000E+01 };

  static double x_vec[N_MAX] = {
     0.1000000000000000E+01,
     0.2000000000000000E+01,
     0.3000000000000000E+01,
     0.4000000000000000E+01,
     0.2000000000000000E+01,
     0.2000000000000000E+01,
     0.2000000000000000E+01,
     0.2000000000000000E+01,
     0.3000000000000000E+01,
     0.3000000000000000E+01,
     0.3000000000000000E+01,
     0.3000000000000000E+01 };

  if ( n_data < 0 )
  {
    n_data = 0;
  }

  n_data = n_data + 1;

  if ( N_MAX < n_data )
  {
    n_data = 0;
    mu = 0.0;
    sigma = 0.0;
    x = 0.0;
    fx = 0.0;
  }
  else
  {
    mu = mu_vec[n_data-1];
    sigma = sigma_vec[n_data-1];
    x = x_vec[n_data-1];
    fx = fx_vec[n_data-1];
  }

  return;
# undef N_MAX
}
//****************************************************************************80

bool log_normal_check ( double mu, double sigma )

//****************************************************************************80
//
//  Purpose:
//
//    LOG_NORMAL_CHECK checks the parameters of the Log Normal PDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    19 September 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double MU, SIGMA, the parameters of the PDF.
//    0.0 < SIGMA.
//
//    Output, bool LOG_NORMAL_CHECK, is true if the parameters are legal.
//
{
  bool check;

  check = true;

  if ( sigma <= 0.0 )
  {
    cout << "\n";
    cout << "LOG_NORMAL_CHECK - Fatal error!\n";
    cout << "  SIGMA <= 0.\n";
    check = false;
  }

  return check;
}
//****************************************************************************80

double log_normal_mean ( double mu, double sigma )

//****************************************************************************80
//
//  Purpose:
//
//    LOG_NORMAL_MEAN returns the mean of the Log Normal PDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    19 September 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double MU, SIGMA, the parameters of the PDF.
//    0.0 < SIGMA.
//
//    Output, double LOG_NORMAL_MEAN, the mean of the PDF.
//
{
  double mean;

  mean = exp ( mu + 0.5 * sigma * sigma );

  return mean;
}
//****************************************************************************80

double log_normal_pdf ( double x, double mu, double sigma )

//****************************************************************************80
//
//  Purpose:
//
//    LOG_NORMAL_PDF evaluates the Log Normal PDF.
//
//  Discussion:
//
//    PDF(A,B;X)
//      = exp ( - 0.5 * ( ( log ( X ) - MU ) / SIGMA )^2 )
//        / ( SIGMA * X * sqrt ( 2 * PI ) )
//
//    The Log Normal PDF is also known as the Cobb-Douglas PDF,
//    and as the Antilog_normal PDF.
//
//    The Log Normal PDF describes a variable X whose logarithm
//    is normally distributed.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    19 September 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double X, the argument of the PDF.
//    0.0 < X
//
//    Input, double MU, SIGMA, the parameters of the PDF.
//    0.0 < SIGMA.
//
//    Output, double LOG_NORMAL_PDF, the value of the PDF.
//
{
  double pdf;
  const double r8_pi = 3.14159265358979323;
  double y;

  if ( x <= 0.0 )
  {
    pdf = 0.0;
  }
  else
  {
    y = ( log ( x ) - mu ) / sigma;
    pdf = exp ( - 0.5 * y * y ) / ( sigma * x * sqrt ( 2.0 * r8_pi ) );
  }

  return pdf;
}
//****************************************************************************80

double log_normal_sample ( double mu, double sigma, int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    LOG_NORMAL_SAMPLE samples the Log Normal PDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    19 September 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double MU, SIGMA, the parameters of the PDF.
//    0.0 < SIGMA.
//
//    Input/output, int &SEED, a seed for the random number generator.
//
//    Output, double LOG_NORMAL_SAMPLE, a sample of the PDF.
//
{
  double cdf;
  double x;

  cdf = r8_uniform_01 ( seed );

  x = log_normal_cdf_inv ( cdf, mu, sigma );

  return x;
}
//****************************************************************************80

double log_normal_variance ( double mu, double sigma )

//****************************************************************************80
//
//  Purpose:
//
//    LOG_NORMAL_VARIANCE returns the variance of the Log Normal PDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    19 September 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double MU, SIGMA, the parameters of the PDF.
//    0.0 < SIGMA.
//
//    Output, double LOG_NORMAL_VARIANCE, the variance of the PDF.
//
{
  double variance;

  variance = exp ( 2.0 * mu + sigma * sigma ) * ( exp ( sigma * sigma ) - 1.0 );

  return variance;
}
//****************************************************************************80

double normal_01_cdf ( double x )

//****************************************************************************80
//
//  Purpose:
//
//    NORMAL_01_CDF evaluates the Normal 01 CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 February 1999
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    A G Adams,
//    Areas Under the Normal Curve,
//    Algorithm 39,
//    Computer j.,
//    Volume 12, pages 197-198, 1969.
//
//  Parameters:
//
//    Input, double X, the argument of the CDF.
//
//    Output, double CDF, the value of the CDF.
//
{
  double a1 = 0.398942280444;
  double a2 = 0.399903438504;
  double a3 = 5.75885480458;
  double a4 = 29.8213557808;
  double a5 = 2.62433121679;
  double a6 = 48.6959930692;
  double a7 = 5.92885724438;
  double b0 = 0.398942280385;
  double b1 = 3.8052E-08;
  double b2 = 1.00000615302;
  double b3 = 3.98064794E-04;
  double b4 = 1.98615381364;
  double b5 = 0.151679116635;
  double b6 = 5.29330324926;
  double b7 = 4.8385912808;
  double b8 = 15.1508972451;
  double b9 = 0.742380924027;
  double b10 = 30.789933034;
  double b11 = 3.99019417011;
  double cdf;
  double q;
  double y;
//
//  |X| <= 1.28.
//
  if ( fabs ( x ) <= 1.28 )
  {
    y = 0.5 * x * x;

    q = 0.5 - fabs ( x ) * ( a1 - a2 * y / ( y + a3 - a4 / ( y + a5
      + a6 / ( y + a7 ) ) ) );
//
//  1.28 < |X| <= 12.7
//
  }
  else if ( fabs ( x ) <= 12.7 )
  {
    y = 0.5 * x * x;

    q = exp ( - y ) * b0 / ( fabs ( x ) - b1
      + b2 / ( fabs ( x ) + b3
      + b4 / ( fabs ( x ) - b5
      + b6 / ( fabs ( x ) + b7
      - b8 / ( fabs ( x ) + b9
      + b10 / ( fabs ( x ) + b11 ) ) ) ) ) );
//
//  12.7 < |X|
//
  }
  else
  {
    q = 0.0;
  }
//
//  Take account of negative X.
//
  if ( x < 0.0 )
  {
    cdf = q;
  }
  else
  {
    cdf = 1.0 - q;
  }

  return cdf;
}
//****************************************************************************80

double normal_01_cdf_inv ( double p )

//****************************************************************************80
//
//  Purpose:
//
//    NORMAL_01_CDF_INV inverts the standard normal CDF.
//
//  Discussion:
//
//    The result is accurate to about 1 part in 10**16.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 December 2004
//
//  Author:
//
//    Original FORTRAN77 version by Michael Wichura.
//    C++ version by John Burkardt.
//
//  Reference:
//
//    Michael Wichura,
//    The Percentage Points of the Normal Distribution,
//    Algorithm AS 241,
//    Applied Statistics,
//    Volume 37, Number 3, pages 477-484, 1988.
//
//  Parameters:
//
//    Input, double P, the value of the cumulative probability
//    densitity function.  0 < P < 1.  If P is outside this range, an
//    "infinite" value is returned.
//
//    Output, double NORMAL_01_CDF_INV, the normal deviate value
//    with the property that the probability of a standard normal deviate being
//    less than or equal to this value is P.
//
{
  double a[8] = {
    3.3871328727963666080,     1.3314166789178437745e+2,
    1.9715909503065514427e+3,  1.3731693765509461125e+4,
    4.5921953931549871457e+4,  6.7265770927008700853e+4,
    3.3430575583588128105e+4,  2.5090809287301226727e+3 };
  double b[8] = {
    1.0,                       4.2313330701600911252e+1,
    6.8718700749205790830e+2,  5.3941960214247511077e+3,
    2.1213794301586595867e+4,  3.9307895800092710610e+4,
    2.8729085735721942674e+4,  5.2264952788528545610e+3 };
  double c[8] = {
    1.42343711074968357734,     4.63033784615654529590,
    5.76949722146069140550,     3.64784832476320460504,
    1.27045825245236838258,     2.41780725177450611770e-1,
    2.27238449892691845833e-2,  7.74545014278341407640e-4 };
  double const1 = 0.180625;
  double const2 = 1.6;
  double d[8] = {
    1.0,                        2.05319162663775882187,
    1.67638483018380384940,     6.89767334985100004550e-1,
    1.48103976427480074590e-1,  1.51986665636164571966e-2,
    5.47593808499534494600e-4,  1.05075007164441684324e-9 };
  double e[8] = {
    6.65790464350110377720,     5.46378491116411436990,
    1.78482653991729133580,     2.96560571828504891230e-1,
    2.65321895265761230930e-2,  1.24266094738807843860e-3,
    2.71155556874348757815e-5,  2.01033439929228813265e-7 };
  double f[8] = {
    1.0,                        5.99832206555887937690e-1,
    1.36929880922735805310e-1,  1.48753612908506148525e-2,
    7.86869131145613259100e-4,  1.84631831751005468180e-5,
    1.42151175831644588870e-7,  2.04426310338993978564e-15 };
  double q;
  double r;
  const double r8_huge = 1.0E+30;
  double split1 = 0.425;
  double split2 = 5.0;
  double value;

  if ( p <= 0.0 )
  {
    value = - r8_huge;
    return value;
  }

  if ( 1.0 <= p )
  {
    value = r8_huge;
    return value;
  }

  q = p - 0.5;

  if ( fabs ( q ) <= split1 )
  {
    r = const1 - q * q;
    value = q * r8poly_value_horner ( 7, a, r ) / r8poly_value_horner ( 7, b, r );
  }
  else
  {
    if ( q < 0.0 )
    {
      r = p;
    }
    else
    {
      r = 1.0 - p;
    }

    if ( r <= 0.0 )
    {
      value = r8_huge;
    }
    else
    {
      r = sqrt ( - log ( r ) );

      if ( r <= split2 )
      {
        r = r - const2;
        value = r8poly_value_horner ( 7, c, r ) / r8poly_value_horner ( 7, d, r );
       }
       else
       {
         r = r - split2;
         value = r8poly_value_horner ( 7, e, r ) / r8poly_value_horner ( 7, f, r );
      }
    }

    if ( q < 0.0 )
    {
      value = - value;
    }

  }

  return value;
}
//****************************************************************************80

double normal_cdf ( double x, double mu, double sigma )

//****************************************************************************80
//
//  Purpose:
//
//    NORMAL_CDF evaluates the Normal CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    19 September 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double X, the argument of the CDF.
//
//    Input, double MU, SIGMA, the parameters of the PDF.
//    0.0 < SIGMA.
//
//    Output, double CDF, the value of the CDF.
//
{
  double cdf;
  double y;

  y = ( x - mu ) / sigma;

  cdf = normal_01_cdf ( y );

  return cdf;
}
//****************************************************************************80

double normal_cdf_inv ( double cdf, double mu, double sigma )

//****************************************************************************80
//
//  Purpose:
//
//    NORMAL_CDF_INV inverts the Normal CDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    19 September 2004
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Algorithm AS 111,
//    Applied Statistics,
//    Volume 26, pages 118-121, 1977.
//
//  Parameters:
//
//    Input, double CDF, the value of the CDF.
//    0.0 <= CDF <= 1.0.
//
//    Input, double MU, SIGMA, the parameters of the PDF.
//    0.0 < SIGMA.
//
//    Output, double NORMAL_CDF_INV, the corresponding argument.
//
{
  double x;
  double x2;

  if ( cdf < 0.0 || 1.0 < cdf )
  {
    cerr << "\n";
    cerr << "NORMAL_CDF_INV - Fatal error!\n";
    cerr << "  CDF < 0 or 1 < CDF.\n";
    exit ( 1 );
  }

  x2 = normal_01_cdf_inv ( cdf );

  x = mu + sigma * x2;

  return x;
}
//****************************************************************************80

bool normal_check ( double mu, double sigma )

//****************************************************************************80
//
//  Purpose:
//
//    NORMAL_CHECK checks the parameters of the Normal PDF.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    19 September 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double MU, SIGMA, the parameters of the PDF.
//    0.0 < SIGMA.
//
//    Output, bool NORMAL_CHECK, is true if the parameters are legal.
//
{
  if ( sigma <= 0.0 )
  {
    cout << "\n";
    cout << "NORMAL_CHECK - Fatal error!\n";
    cout << "  SIGMA <= 0.\n";
    return false;
  }

  return true;
}
//****************************************************************************80

double r8_uniform_01 ( int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    R8_UNIFORM_01 returns a unit pseudorandom R8.
//
//  Discussion:
//
//    This routine implements the recursion
//
//      seed = 16807 * seed mod ( 2^31 - 1 )
//      unif = seed / ( 2^31 - 1 )
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
//    11 August 2004
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Paul Bratley, Bennett Fox, Linus Schrage,
//    A Guide to Simulation,
//    Springer Verlag, pages 201-202, 1983.
//
//    Bennett Fox,
//    Algorithm 647:
//    Implementation and Relative Efficiency of Quasirandom
//    Sequence Generators,
//    ACM Transactions on Mathematical Software,
//    Volume 12, Number 4, pages 362-376, 1986.
//
//  Parameters:
//
//    Input/output, int &SEED, the "seed" value.  Normally, this
//    value should not be 0.  On output, SEED has been updated.
//
//    Output, double R8_UNIFORM_01, a new pseudorandom variate, strictly between
//    0 and 1.
//
{
  int k;
  double r;

  k = seed / 127773;

  seed = 16807 * ( seed - k * 127773 ) - k * 2836;

  if ( seed < 0 )
  {
    seed = seed + 2147483647;
  }

  r = ( double ) ( seed ) * 4.656612875E-10;

  return r;
}
//****************************************************************************80

double r8poly_value_horner ( int m, double c[], double x )

//****************************************************************************80
//
//  Purpose:
//
//    R8POLY_VALUE_HORNER evaluates a polynomial using Horner's method.
//
//  Discussion:
//
//    The polynomial 
//
//      p(x) = c0 + c1 * x + c2 * x^2 + ... + cm * x^m
//
//    is to be evaluated at the value X.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 January 2015
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M, the degree of the polynomial.
//
//    Input, double C[M+1], the coefficients of the polynomial.
//    A[0] is the constant term.
//
//    Input, double X, the point at which the polynomial is to be evaluated.
//
//    Output, double R8POLY_VALUE_HORNER, the value of the polynomial at X.
//
{
  int i;
  double value;

  value = c[m];

  for ( i = m - 1; 0 <= i; i-- )
  {
    value = value * x + c[i];
  }

  return value;
}
//****************************************************************************80

double r8vec_max ( int n, double *dvec )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_MAX returns the value of the maximum element in an R8VEC.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    15 October 1998
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of entries in the array.
//
//    Input, double *RVEC, a pointer to the first entry of the array.
//
//    Output, double R8VEC_MAX, the value of the maximum element.  This
//    is set to 0.0 if N <= 0.
//
{
  int i;
  double rmax;
  double *r8vec_pointer;

  if ( n <= 0 )
  {
    return 0.0;
  }

  for ( i = 0; i < n; i++ )
  {
    if ( i == 0 )
    {
      rmax = *dvec;
      r8vec_pointer = dvec;
    }
    else
    {
      r8vec_pointer++;
      if ( rmax < *r8vec_pointer )
      {
        rmax = *r8vec_pointer;
      }
    }
  }

  return rmax;

}
//****************************************************************************80

double r8vec_mean ( int n, double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_MEAN returns the mean of an R8VEC.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 May 1999
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of entries in the vector.
//
//    Input, double X[N], the vector whose mean is desired.
//
//    Output, double R8VEC_MEAN, the mean, or average, of the vector entries.
//
{
  int i;
  double mean;

  mean = 0.0;
  for ( i = 0; i < n; i++ )
  {
    mean = mean + x[i];
  }

  mean = mean / ( double ) n;

  return mean;
}
//****************************************************************************80

double r8vec_min ( int n, double *dvec )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_MIN returns the value of the minimum element in an R8VEC.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    15 October 1998
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of entries in the array.
//
//    Input, double *RVEC, a pointer to the first entry of the array.
//
//    Output, double R8VEC_MIN, the value of the minimum element.  This
//    is set to 0.0 if N <= 0.
//
{
  int i;
  double rmin;
  double *r8vec_pointer;

  if ( n <= 0 )
  {
    return 0.0;
  }

  for ( i = 0; i < n; i++ )
  {
    if ( i == 0 )
    {
      rmin = *dvec;
      r8vec_pointer = dvec;
    }
    else
    {
      r8vec_pointer++;
      if ( *r8vec_pointer < rmin )
      {
        rmin = *r8vec_pointer;
      }
    }
  }

  return rmin;

}
//****************************************************************************80

double r8vec_variance ( int n, double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_VARIANCE returns the variance of an R8VEC.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 May 1999
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of entries in the vector.
//
//    Input, double X[N], the vector whose variance is desired.
//
//    Output, double R8VEC_VARIANCE, the variance of the vector entries.
//
{
  int i;
  double mean;
  double variance;

  mean = r8vec_mean ( n, x );

  variance = 0.0;
  for ( i = 0; i < n; i++ )
  {
    variance = variance + ( x[i] - mean ) * ( x[i] - mean );
  }

  if ( 1 < n )
  {
    variance = variance / ( double ) ( n - 1 );
  }
  else
  {
    variance = 0.0;
  }

  return variance;
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
