# include <cmath>
# include <iomanip>
# include <iostream>
# include <ctime>

using namespace std;

# include "gegenbauer_cc.hpp"

//****************************************************************************80

double besselj ( double order, double x )

//****************************************************************************80
//
//  Purpose:
//
//    BESSELJ evaluates the Bessel J function at an arbitrary real order.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    15 January 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double ORDER, the order.
//    0.0 <= ORDER.
//
//    Input, double, X, the evaluation point. 
//
//    Output, double BESSELJ, the value.
//
{
  double alpha;
  double *b;
  int n;
  int nb;
  int ncalc;
  double value;

  n = ( int ) ( order );
  nb = n + 1;
  alpha = order - ( double ) ( n );
  b = new double[nb];

  rjbesl ( x, alpha, nb, b, ncalc );

  value = b[n];

  delete [] b;

  return value;
}
//****************************************************************************80

double *chebyshev_even1 ( int n, double f ( double x ) )

//****************************************************************************80
//
//  Purpose:
//
//    CHEBYSHEV_EVEN1 returns the even Chebyshev coefficients of F.
//
//  Discussion:
//
//    The coefficients are calculated using the extreme points of Tn(x).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    15 January 2016
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    D B Hunter, H V Smith,
//    A quadrature formula of Clenshaw-Curtis type for the Gegenbauer 
//    weight function,
//    Journal of Computational and Applied Mathematics,
//    Volume 177, 2005, pages 389-400.
//
//  Parameters:
//
//    Input, int N, the number of points to use.
//    1 <= N.
//
//    Input, double F ( double x ), the function to be 
//    integrated with the Gegenbauer weight.
//
//    Output, double CHEBYSHEV_EVEN1[1+N/2], the even Chebyshev coefficients of F.
//
{
  double *a2;
  int j;
  int r;
  int rh;
  double r8_n;
  const double r8_pi = 3.141592653589793E+00;
  int s;
  int sigma;
  double total;

  s = ( n / 2 );
  sigma = ( n % 2 );

  r8_n = ( double ) ( n );

  a2 = new double[s+1];

  for ( r = 0; r <= 2 * s; r = r + 2 )
  {
    total = 0.5 * f ( 1.0 );
    for ( j = 1; j < n; j++ )
    {
      total = total + f ( cos ( j * r8_pi / r8_n ) ) 
        * cos ( r * j * r8_pi / r8_n );
    }
    total = total + 0.5 * r8_mop ( r ) * f ( -1.0 );
    rh = r / 2;
    a2[rh] = ( 2.0 / r8_n ) * total;
  }

  return a2;
}
//****************************************************************************80

double *chebyshev_even2 ( int n, double f ( double x ) )

//****************************************************************************80
//
//  Purpose:
//
//    CHEBYSHEV_EVEN2 returns the even Chebyshev coefficients of F.
//
//  Discussion:
//
//    The coefficients are calculated using the zeros of Tn(x).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    15 January 2016
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    D B Hunter, H V Smith,
//    A quadrature formula of Clenshaw-Curtis type for the Gegenbauer 
//    weight function,
//    Journal of Computational and Applied Mathematics,
//    Volume 177, 2005, pages 389-400.
//
//  Parameters:
//
//    Input, int N, the number of points to use.
//    1 <= N.
//
//    Input, double F ( double x ), the function to be 
//    integrated with the Gegenbauer weight.
//
//    Output, double CHEBYSHEV_EVEN2(0:N/2), the even Chebyshev coefficients of F.
//
{
  double *b2;
  int j;
  int r;
  const double r8_pi = 3.141592653589793E+00;
  int rh;
  int s;
  int sigma;
  double total;
  double value;
  double x1;
  double x2;

  s = ( n / 2 );
  sigma = ( n % 2 );

  b2 = new double[s+1];

  for ( r = 0; r <= 2 * s; r = r + 2 )
  {
    total = 0.0;
    for ( j = 0; j <= n; j++ )
    {
      x1 = ( double ) ( 2 * j + 1 ) * r8_pi / 2.0 / ( double ) ( n + 1 );
      x2 = ( double ) ( r * ( 2 * j + 1 ) ) * r8_pi 
        / 2.0 / ( double ) ( n + 1 );
      total = total + f ( cos ( x1 ) ) * cos ( x2 );
    }
    rh = r / 2;
    b2[rh] = ( 2.0 / ( double ) ( n + 1 ) ) * total;
  }

  return b2;
}
//****************************************************************************80

double gegenbauer_cc1 ( int n, double lambda, double f ( double x ) )

//****************************************************************************80
//
//  Purpose:
//
//    GEGENBAUER_CC1 estimates the Gegenbauer integral of a function.
//
//  Discussion:
//
//     value = integral ( -1 <= x <= + 1 ) ( 1 - x^2 )^(lambda-1/2) * f(x) dx
//
//     The approximation uses the practical abscissas, that is, the extreme
//     points of Tn(x).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    15 January 2016
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    D B Hunter, H V Smith,
//    A quadrature formula of Clenshaw-Curtis type for the Gegenbauer 
//    weight function,
//    Journal of Computational and Applied Mathematics,
//    Volume 177, 2005, pages 389-400.
//
//  Parameters:
//
//    Input, int N, the number of points to use.
//    1 <= N.
//
//    Input, double LAMBDA, used in the exponent of (1-x^2).
//    -0.5 < LAMBDA.
//
//    Input, double, external, F(x), the function to be integrated 
//    with the Gegenbauer weight.
//
//    Output, double WEIGHT, the estimate for the Gegenbauer 
//    integral of F.
//
{
  double *a2;
  const double r8_pi = 3.141592653589793E+00;
  int rh;
  int s;
  int sigma;
  double u;
  double value;
  double weight;

  value = 0.0;

  s = ( n / 2 );
  sigma = ( n % 2 );

  a2 = chebyshev_even1 ( n, f );

  rh = s;
  u = 0.5 * ( double ) ( sigma + 1 ) * a2[rh];
  for ( rh = s - 1; 1 <= rh; rh-- )
  {
    u = ( ( double ) ( rh ) - lambda ) 
      / ( ( double ) ( rh ) + lambda + 1.0 ) * u + a2[rh];
  }
  u = - lambda * u / ( lambda + 1.0 ) + 0.5 * a2[0];

  value = tgamma ( lambda + 0.5 ) * sqrt ( r8_pi ) * u 
    / tgamma ( lambda + 1.0 );

  delete [] a2;

  return value;
}
//****************************************************************************80

double gegenbauer_cc2 ( int n, double lambda, double f ( double x ) )

//****************************************************************************80
//
//  Purpose:
//
//    GEGENBAUER_CC2 estimates the Gegenbauer integral of a function.
//
//  Discussion:
//
//     value = integral ( -1 <= x <= + 1 ) ( 1 - x^2 )^(lambda-1/2) * f(x) dx
//
//     The approximation uses the classical abscissas, that is, the zeros
//     of Tn(x).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    15 January 2016
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    D B Hunter, H V Smith,
//    A quadrature formula of Clenshaw-Curtis type for the Gegenbauer 
//    weight function,
//    Journal of Computational and Applied Mathematics,
//    Volume 177, 2005, pages 389-400.
//
//  Parameters:
//
//    Input, int N, the number of points to use.
//    1 <= N.
//
//    Input, double LAMBDA, used in the exponent of (1-x^2).
//    -0.5 < LAMBDA.
//
//    Input, double F( double x ), the function to be integrated with
//    the Gegenbauer weight.
//
//    Output, double WEIGHT, the estimate for the Gegenbauer 
//    integral of F.
//
{
  double *b2;
  int rh;
  const double r8_pi = 3.141592653589793E+00;
  int s;
  int sigma;
  double u;
  double value;
  double weight;

  value = 0.0;

  s = ( n / 2 );
  sigma = ( n % 2 );

  b2 = chebyshev_even2 ( n, f );

  rh = s;
  u = ( double ) ( sigma + 1 ) * b2[rh];
  for ( rh = s - 1; 1 <= rh; rh-- )
  {
    u = ( ( double ) ( rh ) - lambda ) 
      / ( ( double ) ( rh ) + lambda + 1.0 ) * u + b2[rh];
  }
  u = - lambda * u / ( lambda + 1.0 ) + 0.5 * b2[0];

  value = tgamma ( lambda + 0.5 ) * sqrt ( r8_pi ) * u 
    / tgamma ( lambda + 1.0 );

  delete [] b2;

  return value;
}
//****************************************************************************80

int i4_uniform_ab ( int a, int b, int &seed )

//****************************************************************************80
//
//  Purpose:
//
//    I4_UNIFORM_AB returns a scaled pseudorandom I4 between A and B.
//
//  Discussion:
//
//    The pseudorandom number should be uniformly distributed
//    between A and B.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 October 2012
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
//    Input, int A, B, the limits of the interval.
//
//    Input/output, int &SEED, the "seed" value, which should NOT be 0.
//    On output, SEED has been updated.
//
//    Output, int I4_UNIFORM, a number between A and B.
//
{
  int c;
  const int i4_huge = 2147483647;
  int k;
  float r;
  int value;

  if ( seed == 0 )
  {
    cerr << "\n";
    cerr << "I4_UNIFORM_AB - Fatal error!\n";
    cerr << "  Input value of SEED = 0.\n";
    exit ( 1 );
  }
//
//  Guarantee A <= B.
//
  if ( b < a )
  {
    c = a;
    a = b;
    b = c;
  }

  k = seed / 127773;

  seed = 16807 * ( seed - k * 127773 ) - k * 2836;

  if ( seed < 0 )
  {
    seed = seed + i4_huge;
  }

  r = ( float ) ( seed ) * 4.656612875E-10;
//
//  Scale R to lie between A-0.5 and B+0.5.
//
  r = ( 1.0 - r ) * ( ( float ) a - 0.5 ) 
    +         r   * ( ( float ) b + 0.5 );
//
//  Use rounding to convert R to an integer between A and B.
//
  value = round ( r );
//
//  Guarantee A <= VALUE <= B.
//
  if ( value < a )
  {
    value = a;
  }
  if ( b < value )
  {
    value = b;
  }

  return value;
}
//****************************************************************************80

double r8_mop ( int i )

//****************************************************************************80
//
//  Purpose:
//
//    R8_MOP returns the I-th power of -1 as an R8 value.
//
//  Discussion:
//
//    An R8 is an double value.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    16 November 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int I, the power of -1.
//
//    Output, double R8_MOP, the I-th power of -1.
//
{
  double value;

  if ( ( i % 2 ) == 0 )
  {
    value = 1.0;
  }
  else
  {
    value = -1.0;
  }

  return value;
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

void r8vec2_print ( int n, double a1[], double a2[], string title )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC2_PRINT prints an R8VEC2.
//
//  Discussion:
//
//    An R8VEC2 is a dataset consisting of N pairs of real values, stored
//    as two separate vectors A1 and A2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    19 November 2002
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of components of the vector.
//
//    Input, double A1[N], double A2[N], the vectors to be printed.
//
//    Input, string TITLE, a title.
//
{
  int i;

  cout << "\n";
  cout << title << "\n";
  cout << "\n";
  for ( i = 0; i <= n - 1; i++ )
  {
    cout << setw(6)  << i
         << ": " << setw(14) << a1[i]
         << "  " << setw(14) << a2[i] << "\n";
  }

  return;
}
//****************************************************************************80

void rjbesl ( double x, double alpha, int nb, double b[], int &ncalc )

//****************************************************************************80
//
//  Purpose:
//
//    RJBESL evaluates a sequence of Bessel J functions.
//
//  Discussion:
//
//    This routine calculates Bessel functions J sub(N+ALPHA) (X)
//    for non-negative argument X, and non-negative order N+ALPHA.
//
//    This program is based on a program written by David Sookne
//    that computes values of the Bessel functions J or I of real
//    argument and integer order.  Modifications include the restriction
//    of the computation to the J Bessel function of non-negative real
//    argument, the extension of the computation to arbitrary positive
//    order, and the elimination of most underflow.
//
//  Modified:
//
//    15 January 2016
//
//  Author:
//
//    Original FORTRAN77 version by William Cody.
//    C++ version by John Burkardt.
//
//  Reference: 
//
//    F Olver, David Sookne,
//    A Note on Backward Recurrence Algorithms," 
//    Math. Comp.,
//    Volume 26, 1972, pages 941-947.
//
//    David Sookne,
//    Bessel Functions of Real Argument and Integer Order,
//    NBS Journal of Res. B,
//    Volume 77B, 1973, pages 125-132.
//
//  Parameters:
//
//    Input, double X, non-negative real argument for which
//    J's are to be calculated.
//
//    Input, double ALPHA, fractional part of order for which
//    J's or exponentially scaled J'r (J*exp(X)) are
//    to be calculated.  0 <= ALPHA < 1.0.
//
//    Input, int NB, number of functions to be calculated, 
//    NB > 0.  The first function calculated is of order ALPHA, and the
//    last is of order (NB - 1 + ALPHA).
//
//    Output, double B(NB).  If RJBESL
//    terminates normally (NCALC=NB), the vector B contains the
//    functions J/ALPHA/(X) through J/NB-1+ALPHA/(X), or the
//    corresponding exponentially scaled functions.
//
//    Output, int &NCALC, indicates possible errors.
//    Before using the vector B, the user should check that
//    NCALC=NB, i.e., all orders have been calculated to
//    the desired accuracy.  See Error Returns below.
//
//  Internal Parameters:
//
//    IT = Number of bits in the mantissa of a working precision variable
//
//    NSIG   = Decimal significance desired.  Should be set to
//    INT(LOG10(2)*it+1).  Setting NSIG lower will result
//    in decreased accuracy while setting NSIG higher will
//    increase CPU time without increasing accuracy.  The
//    truncation error is limited to a relative error of
//    T=.5*10**(-NSIG).
//
//    Then the following machine-dependent constants must be declared
//    in DATA statements.  IEEE values are provided as a default.
//
//    ENTEN  = 10.0 ** K, where K is the largest integer such that
//    ENTEN is machine-representable in working precision.
//
//    ENSIG  = 10.0 ** NSIG
//
//    RTNSIG = 10.0 ** (-K) for the smallest integer K such that K >= NSIG/4
//
//    ENMTEN = Smallest ABS(X) such that X/4 does not underflow
//
//    XLARGE = Upper limit on the magnitude of X.  If ABS(X)=N,
//    then at least N iterations of the backward recursion
//    will be executed.  The value of 10.0 ** 4 is used on
//    every machine.
//
//  Error returns:
//
//    In case of an error,  NCALC != NB, and not all J's are
//    calculated to the desired accuracy.
//
//    NCALC < 0:  An argument is out of range. For example,
//    NBES <= 0, ALPHA < 0 or > 1, or X is too large.
//    In this case, B(1) is set to zero, the remainder of the
//    B-vector is not calculated, and NCALC is set to
//    MIN(NB,0)-1 so that NCALC != NB.
//
//    NB > NCALC > 0: Not all requested function values could
//    be calculated accurately.  This usually occurs because NB is
//    much larger than ABS(X).  In this case, B(N) is calculated
//    to the desired accuracy for N <= NCALC, but precision
//    is lost for NCALC < N <= NB.  If B(N) does not vanish
//    for N > NCALC (because it is too small to be represented),
//    and B(N)/B(NCALC) = 10**(-K), then only the first NSIG-K
//    significant figures of B(N) can be trusted.
//
{
  double alpem;
  double alp2em;
  double capp;
  double capq;
  const double eighth = 0.125E+00;
  double em;
  double en;
  const double enmten = 8.90E-308;
  const double ensig = 1.0E+16;
  const double enten = 1.0E+308;
  const double fact[25] = {
    1.0E+00, 
    1.0E+00, 
    2.0E+00, 
    6.0E+00, 
    24.0E+00, 
    1.2E+02, 
    7.2E+02, 
    5.04E+03, 
    4.032E+04, 
    3.6288E+05, 
    3.6288E+06, 
    3.99168E+07, 
    4.790016E+08, 
    6.2270208E+09, 
    8.71782912E+10, 
    1.307674368E+12, 
    2.0922789888E+13, 
    3.55687428096E+14, 
    6.402373705728E+15, 
    1.21645100408832E+17, 
    2.43290200817664E+18, 
    5.109094217170944E+19, 
    1.1240007277776076E+21, 
    2.585201673888497664E+22, 
    6.2044840173323943936E+23 };
  const double four = 4.0E+00;
  double gnu;
  const double half = 0.5E+00;
  double halfx;
  int i;
  int j;
  bool jump;
  int k;
  int l;
  int m;
  int magx;
  int n;
  int nbmx;
  int nend;
  int nstart;
  const double one = 1.0E+00;
  const double one30 = 130.0E+00;
  double p;
  const double pi2 = 0.636619772367581343075535E+00;
  double plast;
  double pold;
  double psave;
  double psavel;
  const double rtnsig = 1.0E-04;
  double s;
  double sum;
  double t;
  double t1;
  double tempa;
  double tempb;
  double tempc;
  double test;
  const double three = 3.0E+00;
  const double three5 = 35.0E+00;
  double tover;
  const double two = 2.0E+00;
  const double twofiv = 25.0E+00;
  const double twopi1 = 6.28125E+00;
  const double twopi2 = 1.935307179586476925286767E-03;
  double xc;
  double xin;
  double xk;
  const double xlarge = 1.0E+04;
  double xm;
  double vcos;
  double vsin;
  double z;
  const double zero = 0.0E+00;

  jump = false;
//
//  Check for out of range arguments.
//
  magx = ( int ) ( x );

  if ( 
    ( 0 < nb ) &&
    ( zero <= x ) &&
    ( x <= xlarge ) &&
    ( zero <= alpha ) &&
    ( alpha < one ) )
  {
//
//  Initialize result array to zero.
//
    ncalc = nb;
    for ( i = 1; i <= nb; i++ )
    {
      b[i-1] = zero;
    }
//
//  Branch to use 2-term ascending series for small X and asymptotic
//  form for large X when NB is not too large.
//
    if ( x < rtnsig )
    {
//
//  Two-term ascending series for small X.
//
      tempa = one;
      alpem = one + alpha;

      if ( enmten < x )
      {
        halfx = half * x;
      }
      else
      {
        halfx = zero;
      }

      if ( alpha != zero )
      {
        tempa = pow ( halfx, alpha ) / ( alpha * tgamma ( alpha ) );
      }

      if ( one < ( x + one ) )
      {
        tempb = - halfx * halfx;
      }
      else
      {
        tempb = zero;
      }

      b[0] = tempa + tempa * tempb / alpem;

      if ( ( x != zero ) && ( b[0] == zero ) )
      {
        ncalc = 0;
      }

      if ( nb != 1 )
      {
        if ( x <= zero )
        {
          for ( n = 2; n <= nb; n++ )
          {
            b[n-1] = zero;
          }
        }
//
//  Calculate higher order functions.
//
        else
        {
          tempc = halfx;

          if ( tempb != zero )
          {
            tover = enmten / tempb;
          }
          else
          {
            tover = ( enmten + enmten ) / x;
          }

          for ( n = 2; n <= nb; n++ )
          {
            tempa = tempa / alpem;
            alpem = alpem + one;

            tempa = tempa * tempc;
            if ( tempa <= tover * alpem )
            {
              tempa = zero;
            }

            b[n-1] = tempa + tempa * tempb / alpem;

            if ( ( b[n-1] == zero ) && ( n < ncalc ) )
            {
              ncalc = n - 1;
            }
          }
        }
      }
    }
//
//  Asymptotic series for 21.0 < X.
//
    else if ( ( twofiv < x ) && ( nb <= magx + 1 ) )
    {
      xc = sqrt ( pi2 / x );
      xin = pow ( eighth / x, 2 );

      if ( x < three5 )
      {
        m = 11;
      }
      else if ( x < one30 )
      {
        m = 8;
      }
      else
      {
        m = 4;
      }

      xm = four * ( double ) ( m );
//
//  Argument reduction for SIN and COS routines.
//
      t = trunc ( x / ( twopi1 + twopi2 ) + half );
      z = ( ( x - t * twopi1 ) - t * twopi2 ) - ( alpha + half ) / pi2;
      vsin = sin ( z );
      vcos = cos ( z );
      gnu = alpha + alpha;

      for ( i = 1; i <= 2; i++ )
      {
        s = ( ( xm - one ) - gnu ) * ( ( xm - one ) + gnu ) * xin * half;
        t = ( gnu - ( xm - three ) ) * ( gnu + ( xm - three ) );
        capp = s * t / fact[2*m];
        t1 = ( gnu - ( xm + one ) ) * ( gnu + ( xm + one ) );
        capq = s * t1 / fact[2*m+1];
        xk = xm;
        k = m + m;
        t1 = t;

        for ( j = 2; j <= m; j++ )
        {
          xk = xk - four;
          s = ( ( xk - one ) - gnu ) * ( ( xk - one ) + gnu );
          t = ( gnu - ( xk - three ) ) * ( gnu + ( xk - three ) );
          capp = ( capp + one / fact[k-2] ) * s * t * xin;
          capq = ( capq + one / fact[k-1] ) * s * t1 * xin;
          k = k - 2;
          t1 = t;
        }

        capp = capp + one;
        capq = ( capq + one ) * ( gnu * gnu - one ) * ( eighth / x );
        b[i-1] = xc * ( capp * vcos - capq * vsin );

        if ( nb == 1 )
        {
          return;
        }

        t = vsin;
        vsin = - vcos;
        vcos = t;
        gnu = gnu + two;
      }
//
//  If 2 < NB, compute J(X,ORDER+I)  I = 2, NB-1
//
      if ( 2 < nb )
      {
        gnu = alpha + alpha + two;
        for ( j = 3; j <= nb; j++ )
        {
          b[j-1] = gnu * b[j-2] / x - b[j-3];
          gnu = gnu + two;
        }
      }
    }
//
//  Use recurrence to generate results.  First initialize the calculation of P*S.
//
    else
    {
      nbmx = nb - magx;
      n = magx + 1;
      en = ( double ) ( n + n ) + ( alpha + alpha );
      plast = one;
      p = en / x;
//
//  Calculate general significance test.
//
      test = ensig + ensig;
//
//  Calculate P*S until N = NB-1.  Check for possible overflow.
//
      if ( 3 <= nbmx )
      {
        tover = enten / ensig;
        nstart = magx + 2;
        nend = nb - 1;
        en = ( double ) ( nstart + nstart ) - two + ( alpha + alpha );

        for ( k = nstart; k <= nend; k++ )
        {
          n = k;
          en = en + two;
          pold = plast;
          plast = p;
          p = en * plast / x - pold;
//
//  To avoid overflow, divide P*S by TOVER.  Calculate P*S until 1 < ABS(P).
//
          if ( tover < p )
          {
            tover = enten;
            p = p / tover;
            plast = plast / tover;
            psave = p;
            psavel = plast;
            nstart = n + 1;

            for ( ; ; )
            {
              n = n + 1;
              en = en + two;
              pold = plast;
              plast = p;
              p = en * plast / x - pold;
              if ( one < p )
              {
                break;
              }
            }

            tempb = en / x;
//
//  Calculate backward test and find NCALC, the highest N such that
//  the test is passed.
//
            test = pold * plast * ( half - half / ( tempb * tempb ) );
            test = test / ensig;
            p = plast * tover;
            n = n - 1;
            en = en - two;
            if ( nb < n )
            {
              nend = nb;
            }
            else
            {
              nend = n;
            }

            for ( l = nstart; l <= nend; l++ )
            {
              pold = psavel;
              psavel = psave;
              psave = en * psavel / x - pold;
              if ( test < psave * psavel )
              {
                ncalc = l - 1;
                jump = true;
                break;
              }
            }

            if ( jump )
            {
              break;
            }

            ncalc = nend;
            jump = true;
            break;
          }
        }

        if ( ! jump )
        {
          n = nend;
          en = ( double ) ( n + n ) + ( alpha + alpha );
//
//  Calculate special significance test for 2 < NBMX.
//
          if ( test < sqrt ( plast * ensig ) * sqrt ( p + p ) )
          {
            test = sqrt ( plast * ensig ) * sqrt ( p + p );
          }
        }
      }
//
//  Calculate P*S until significance test passes.
//
      if ( ! jump )
      {
        for ( ; ; )
        {
          n = n + 1;
          en = en + two;
          pold = plast;
          plast = p;
          p = en * plast / x - pold;

          if ( test <= p )
          {
            break;
          }
        }
      }
//
//  Initialize the backward recursion and the normalization sum.
//
      n = n + 1;
      en = en + two;
      tempb = zero;
      tempa = one / p;
      m = 2 * n - 4 * ( n / 2 );
      sum = zero;
      em = ( double ) ( n / 2 );
      alpem = ( em - one ) + alpha;
      alp2em = ( em + em ) + alpha;
      if ( m != 0 )
      {
        sum = tempa * alpem * alp2em / em;
      }
      nend = n - nb;
//
//  Recur backward via difference equation, calculating (but not
//  storing) B, until N = NB.
//
      if ( 0 < nend )
      {
        for ( l = 1; l <= nend; l++ )
        {
          n = n - 1;
          en = en - two;
          tempc = tempb;
          tempb = tempa;
          tempa = ( en * tempb ) / x - tempc;
          m = 2 - m;

          if ( m != 0 )
          {
            em = em - one;
            alp2em = ( em + em ) + alpha;
            if ( n == 1 )
            {
              break;
            }
            alpem = ( em - one ) + alpha;
            if ( alpem == zero )
            {
              alpem = one;
            }
            sum = ( sum + tempa * alp2em ) * alpem / em;
          }
        }
      }
//
//  Store B[NB-1].
//
      b[n-1] = tempa;

      if ( 0 <= nend )
      {
        if ( nb <= 1 )
        {
          alp2em = alpha;
          if ( ( alpha + one ) == one )
          {
            alp2em = one;
          }
          sum = sum + b[0] * alp2em;

          if ( ( alpha + one ) != one )
          {
            sum = sum * tgamma ( alpha ) * pow ( x * half, - alpha );
          }

          tempa = enmten;

          if ( one < sum )
          {
            tempa = tempa * sum;
          }

          for ( n = 1; n <= nb; n++ )
          {
            if ( fabs ( b[n-1] ) < tempa )
            {
              b[n-1] = zero;
            }
            b[n-1] = b[n-1] / sum;
          }

          return;
        }
//
//  Calculate and store B[NB-2].
//
        else
        {
          n = n - 1;
          en = en - two;
          b[n-1] = ( en * tempa ) / x - tempb;

          if ( n == 1 )
          {
            em = em - one;
            alp2em = ( em + em ) + alpha;
            if ( alp2em == zero )
            {
              alp2em = one;
            }
            sum = sum + b[0] * alp2em;
//
//  Normalize.  Divide all B by sum.
//
            if ( ( alpha + one ) != one )
            {
              sum = sum * tgamma ( alpha ) * pow ( x * half, - alpha );
            }

            tempa = enmten;

            if ( one < sum )
            {
              tempa = tempa * sum;
            }
  
            for ( n = 1; n <= nb; n++ )
            {
              if ( fabs ( b[n-1] ) < tempa )
              {
                b[n-1] = zero;
              }
              b[n-1] = b[n-1] / sum;
            }
            return;
          }

          m = 2 - m;

          if ( m != 0 )
          {
            em = em - one;
            alp2em = ( em + em ) + alpha;
            alpem = ( em - one ) + alpha;
            if ( alpem == zero )
            {
              alpem = one;
            }
            sum = ( sum + b[n-1] * alp2em ) * alpem / em;
          }
        }
      }

      nend = n - 2;
//
//  Calculate via difference equation and store B, until N = 2.
//
      if ( nend != 0 )
      {
        for ( l = 1; l <= nend; l++ )
        {
          n = n - 1;
          en = en - two;
          b[n-1] = ( en * b[n] ) / x - b[n+1];
          m = 2 - m;

          if ( m != 0 )
          {
            em = em - one;
            alp2em = ( em + em ) + alpha;
            alpem = ( em - one ) + alpha;
            if ( alpem == zero )
            {
              alpem = one;
            }
            sum = ( sum + b[n-1] * alp2em ) * alpem / em;
          }
        }
      }
//
//  Calculate B[0].
//
      b[0] = two * ( alpha + one ) * b[1] / x - b[2];

      em = em - one;
      alp2em = ( em + em ) + alpha;
      if ( alp2em == zero )
      {
        alp2em = one;
      }
      sum = sum + b[0] * alp2em;
//
//  Normalize.  Divide all B by sum.
//
      if ( ( alpha + one ) != one )
      {
        sum = sum * tgamma ( alpha ) * pow ( x * half, - alpha );
      }

      tempa = enmten;

      if ( one < sum )
      {
        tempa = tempa * sum;
      }

      for ( n = 1; n <= nb; n++ )
      {
        if ( fabs ( b[n-1] ) < tempa )
        {
          b[n-1] = zero;
        }
        b[n-1] = b[n-1] / sum;
      }
    }
  }
//
//  Error return.
//
  else
  {
    b[0] = zero;
    if ( nb < 0 )
    {
      ncalc = nb - 1;
    }
    else
    {
      ncalc = -1;
    }
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
