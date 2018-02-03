# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>
# include <ctime>

using namespace std;

# include "toms515.hpp"

//****************************************************************************80

int binom ( int n, int k )

//****************************************************************************80
//
//  Purpose:
//
//    BINOM computes the binomial coefficient.
//
//  Discussion:
//
//    This is ACM algorithm 160 translated to Fortran.
//
//    It calculates the number of combinations of N things taken K at a time.
//
//  Modified:
//
//    01 April 2016
//
//  Author:
//
//    Bill Buckles, Matthew Lybanon
//
//  Reference:
//
//    Bill Buckles, Matthew Lybanon,
//    Algorithm 515: Generation of a Vector from the Lexicographical Index,
//    ACM Transactions on Mathematical Software,
//    Volume 3, Number 2, June 1977, pages 180-182.
//
//  Parameters:
//
//    Input, int N, K, the parameters for the binomial 
//    coefficient.
//
//    Output, int BINOM, the binomial coefficient.
//
{
  int i;
  int k1;
  int n1;
  int p;
  int r;

  k1 = k;
  p = n - k1;

  if ( k1 < p )
  {
    p = k1;
    k1 = n - p;
  }

  if ( p == 0 )
  {
    r = 1;
  }
  else
  {
    r = k1 + 1;
  }

  for ( i = 2; i <= p; i++ )
  {
    r = ( r * ( k1 + i ) ) / i;
  }

  return r;
}
//****************************************************************************80

int *comb ( int n, int p, int l )

//****************************************************************************80
//
//  Purpose:
//
//    COMB selects a subset of order P from a set of order N.
//
//  Discussion:
//
//    This subroutine finds the combination set of N things taken
//    P at a time for a given lexicographic index.
//
//  Modified:
//
//    01 April 2016
//
//  Author:
//
//    Bill Buckles, Matthew Lybanon
//
//  Reference:
//
//    Bill Buckles, Matthew Lybanon,
//    Algorithm 515: Generation of a Vector from the Lexicographical Index,
//    ACM Transactions on Mathematical Software,
//    Volume 3, Number 2, June 1977, pages 180-182.
//
//  Parameters:
//
//    Input, int N, the number of things in the set.
//
//    Input, int P, the number of things in each combination.
//    0 < P < N.
//
//    Input, int L, the lexicographic index of the 
//    desired combination.  1 <= L <= choose(N,P).
//
//    Output, int COMB[P], the combination set.
//
{
  int *c;
  int i;
  int k;
  int p1;
  int r;

  c = new int[p];
//
//  Special case: P = 1
//
  if ( p == 1 )
  {
    c[0] = l;
    return c;
  }
//
//  Initialize lower bound index.
//
  k = 0;
//
//  Select elements in ascending order.
//
  p1 = p - 1;
  c[0] = 0;

  for ( i = 1; i <= p1; i++ )
  {
//
//  Update lower bound as the previously selected element.
//
    if ( 1 < i )
    {
      c[i-1] = c[i-2];
    }
//
//  Check validity of each entry.
//
    for ( ; ; )
    {
      c[i-1] = c[i-1] + 1;
      r = binom ( n - c[i-1], p - i );
      k = k + r;

      if ( l <= k )
      {
        break;
      }
    }
    k = k - r;
  }

  c[p-1] = c[p1-1] + l - k;

  return c;
}
//****************************************************************************80

bool i4_choose_check ( int n, int k )

//****************************************************************************80
//
//  Purpose:
//
//    I4_CHOOSE_CHECK reports whether the binomial coefficient can be computed.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    28 March 2016
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, K, the binomial parameters.
//
//    Output, bool I4_CHOOSE_CHECK is:
//    TRUE, if C(N,K) < maximum integer.
//    FALSE, otherwise.
//
{
  bool check;
  double choose_nk_log;
  const int i4_huge = 2147483647;
  double i4_huge_log;

  i4_huge_log = log ( ( double ) ( i4_huge ) );

  choose_nk_log = 
      r8_gamma_log ( ( double ) ( n + 1 ) ) 
    - r8_gamma_log ( ( double ) ( k + 1 ) ) 
    - r8_gamma_log ( ( double ) ( n - k + 1 ) );

  check = ( choose_nk_log < i4_huge_log );
        
  return check;
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

double r8_gamma_log ( double x )

//****************************************************************************80
//
//  Purpose:
//
//    R8_GAMMA_LOG evaluates the logarithm of the gamma function.
//
//  Discussion:
//
//    This routine calculates the LOG(GAMMA) function for a positive real
//    argument X.  Computation is based on an algorithm outlined in
//    references 1 and 2.  The program uses rational functions that
//    theoretically approximate LOG(GAMMA) to at least 18 significant
//    decimal digits.  The approximation for X > 12 is from reference
//    3, while approximations for X < 12.0 are similar to those in
//    reference 1, but are unpublished.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    28 March 2016
//
//  Author:
//
//    Original FORTRAN77 version by William Cody, Laura Stoltz.
//    C++ version by John Burkardt.
//
//  Reference:
//
//    William Cody, Kenneth Hillstrom,
//    Chebyshev Approximations for the Natural Logarithm of the
//    Gamma Function,
//    Mathematics of Computation,
//    Volume 21, Number 98, April 1967, pages 198-203.
//
//    Kenneth Hillstrom,
//    ANL/AMD Program ANLC366S, DGAMMA/DLGAMA,
//    May 1969.
//
//    John Hart, Ward Cheney, Charles Lawson, Hans Maehly,
//    Charles Mesztenyi, John Rice, Henry Thatcher,
//    Christoph Witzgall,
//    Computer Approximations,
//    Wiley, 1968,
//    LC: QA297.C64.
//
//  Parameters:
//
//    Input, double X, the argument of the function.
//
//    Output, double R8_GAMMA_LOG, the value of the function.
//
{
  double c[7] = {
    -1.910444077728E-03, 
     8.4171387781295E-04, 
    -5.952379913043012E-04,
     7.93650793500350248E-04, 
    -2.777777777777681622553E-03, 
     8.333333333333333331554247E-02, 
     5.7083835261E-03 };
  double corr;
  const double d1 = -5.772156649015328605195174E-01;
  const double d2 = 4.227843350984671393993777E-01;
  const double d4 = 1.791759469228055000094023;
  const double frtbig = 2.25E+76;
  int i;
  double p1[8] = {
    4.945235359296727046734888, 
    2.018112620856775083915565E+02, 
    2.290838373831346393026739E+03, 
    1.131967205903380828685045E+04, 
    2.855724635671635335736389E+04, 
    3.848496228443793359990269E+04, 
    2.637748787624195437963534E+04, 
    7.225813979700288197698961E+03 };
  double p2[8] = { 
    4.974607845568932035012064, 
    5.424138599891070494101986E+02, 
    1.550693864978364947665077E+04, 
    1.847932904445632425417223E+05, 
    1.088204769468828767498470E+06, 
    3.338152967987029735917223E+06, 
    5.106661678927352456275255E+06, 
    3.074109054850539556250927E+06 };
  double p4[8] = {
    1.474502166059939948905062E+04, 
    2.426813369486704502836312E+06, 
    1.214755574045093227939592E+08, 
    2.663432449630976949898078E+09, 
    2.940378956634553899906876E+10, 
    1.702665737765398868392998E+11, 
    4.926125793377430887588120E+11, 
    5.606251856223951465078242E+11 };
  double q1[8] = { 
    6.748212550303777196073036E+01, 
    1.113332393857199323513008E+03, 
    7.738757056935398733233834E+03, 
    2.763987074403340708898585E+04, 
    5.499310206226157329794414E+04, 
    6.161122180066002127833352E+04, 
    3.635127591501940507276287E+04, 
    8.785536302431013170870835E+03 };
  double q2[8] = { 
    1.830328399370592604055942E+02, 
    7.765049321445005871323047E+03, 
    1.331903827966074194402448E+05, 
    1.136705821321969608938755E+06, 
    5.267964117437946917577538E+06, 
    1.346701454311101692290052E+07, 
    1.782736530353274213975932E+07, 
    9.533095591844353613395747E+06 };
  double q4[8] = { 
    2.690530175870899333379843E+03, 
    6.393885654300092398984238E+05, 
    4.135599930241388052042842E+07, 
    1.120872109616147941376570E+09, 
    1.488613728678813811542398E+10, 
    1.016803586272438228077304E+11, 
    3.417476345507377132798597E+11, 
    4.463158187419713286462081E+11 };
  const double r8_epsilon = 2.220446049250313E-016;
  double res;
  const double sqrtpi = 0.9189385332046727417803297;
  const double xbig = 2.55E+305;
  double xden;
  const double xinf = 1.79E+308;
  double xm1;
  double xm2;
  double xm4;
  double xnum;
  double y;
  double ysq;

  y = x;

  if ( 0.0 < y && y <= xbig )
  {
    if ( y <= r8_epsilon )
    {
      res = - log ( y );
    }
//
//  EPS < X <= 1.5.
//
    else if ( y <= 1.5 )
    {
      if ( y < 0.6796875 )
      {
        corr = -log ( y );
        xm1 = y;
      }
      else
      {
        corr = 0.0;
        xm1 = ( y - 0.5 ) - 0.5;
      }

      if ( y <= 0.5 || 0.6796875 <= y )
      {
        xden = 1.0;
        xnum = 0.0;
        for ( i = 0; i < 8; i++ )
        {
          xnum = xnum * xm1 + p1[i];
          xden = xden * xm1 + q1[i];
        }
        res = corr + ( xm1 * ( d1 + xm1 * ( xnum / xden ) ) );
      }
      else
      {
        xm2 = ( y - 0.5 ) - 0.5;
        xden = 1.0;
        xnum = 0.0;
        for ( i = 0; i < 8; i++ )
        {
          xnum = xnum * xm2 + p2[i];
          xden = xden * xm2 + q2[i];
        }
        res = corr + xm2 * ( d2 + xm2 * ( xnum / xden ) );
      }
    }
//
//  1.5 < X <= 4.0.
//
    else if ( y <= 4.0 )
    {
      xm2 = y - 2.0;
      xden = 1.0;
      xnum = 0.0;
      for ( i = 0; i < 8; i++ )
      {
        xnum = xnum * xm2 + p2[i];
        xden = xden * xm2 + q2[i];
      }
      res = xm2 * ( d2 + xm2 * ( xnum / xden ) );
    }
//
//  4.0 < X <= 12.0.
//
    else if ( y <= 12.0 )
    {
      xm4 = y - 4.0;
      xden = -1.0;
      xnum = 0.0;
      for ( i = 0; i < 8; i++ )
      {
        xnum = xnum * xm4 + p4[i];
        xden = xden * xm4 + q4[i];
      }
      res = d4 + xm4 * ( xnum / xden );
    }
//
//  Evaluate for 12 <= argument.
//
    else
    {
      res = 0.0;

      if ( y <= frtbig )
      {
        res = c[6];
        ysq = y * y;
        for ( i = 0; i < 6; i++ )
        {
          res = res / ysq + c[i];
        }
      }
      res = res / y;
      corr = log ( y );
      res = res + sqrtpi - 0.5 * corr;
      res = res + y * ( corr - 1.0 );
    }
  }
//
//  Return for bad arguments.
//
  else
  {
    res = xinf;
  }
//
//  Final adjustments and return.
//
  return res;
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