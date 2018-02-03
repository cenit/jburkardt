# include <cstdlib>
# include <iostream>
# include <iomanip>
# include <cmath>
# include <ctime>
# include <cstring>

using namespace std;

# include "test_nint.hpp"

//****************************************************************************80

char ch_cap ( char ch )

//****************************************************************************80
//
//  Purpose:
//
//    CH_CAP capitalizes a single character.
//
//  Discussion:
//
//    This routine should be equivalent to the library "toupper" function.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    19 July 1998
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char CH, the character to capitalize.
//
//    Output, char CH_CAP, the capitalized character.
//
{
  if ( 97 <= ch && ch <= 122 ) 
  {
    ch = ch - 32;
  }   

  return ch;
}
//****************************************************************************80

double csevl ( double x, double cs[], int n )

//****************************************************************************80
//
//  Purpose:
//
//    CSEVL evaluates an N term Chebyshev series.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    Original FORTRAN77 version by Roger Broucke,
//    FORTRAN90 version by John Burkardt.
//
//  Reference:
//
//    Roger Broucke,
//    Algorithm 446:
//    Ten Subroutines for the Manipulation of Chebyshev Series,
//    Communications of the ACM,
//    Volume 16, 1973, pages 254-256.
//
//    Leslie Fox, Ian Parker,
//    Chebyshev Polynomials in Numerical Analysis,
//    Oxford Press, 1968,
//    LC: QA297.F65.
//
//    David Kahaner, Cleve Moler, Steven Nash,
//    Numerical Methods and Software,
//    Prentice Hall, 1989,
//    ISBN: 0-13-627258-4,
//    LC: TA345.K34.
//
//  Parameters:
//
//    Input, double X, the argument at which the series is 
//    to be evaluated.
//    X must satisfy -1.0 <= X <= 1.0.
//
//    Input, double CS(N), the array of N terms of a Chebyshev series.
//    In evaluating CS, only half the first coefficient is summed.
//
//    Input, int N, the number of terms in array CS.
//    N must be at least 1, and no more than 1000.
//
//    Output, double CSEVL, the value of the Chebyshev series.
//
{
  double b0;
  double b1;
  double b2;
  int i;
  double value;

  if ( n < 1 )
  {
    cout << "\n";
    cout << "CSEVL - Fatal error!\n";
    cout << "  Number of terms N is less than 1.\n";
    exit ( 1 );
  }

  if ( 1000 < n )
  {
    cout << "\n";
    cout << "CSEVL - Fatal error!\n";
    cout << "  The number of terms is more than 1000.\n";
    exit ( 1 );
  }

  if ( x < -1.0 || 1.0 < x )
  {
    cout << "\n";
    cout << "CSEVL - Fatal error!\n";
    cout << "  The input argument X is outside the interval [-1,1].\n";
    exit ( 1 );
  }

  b1 = 0.0;
  b0 = 0.0;

  for ( i = n; 1 <= i; i-- )
  {
    b2 = b1;
    b1 = b0;
    b0 = 2.0 * x * b1 - b2 + cs[i-1];
  }

  value = 0.5 * ( b0 - b2 );

  return value;
}
//****************************************************************************80

double error_f ( double x )

//****************************************************************************80
//
//  Purpose:
//
//    ERROR_F computes the error function.
//
//  Discussion:
//
//    This function was renamed "ERROR_F" from "ERF", to avoid a conflict
//    with the name of a corresponding routine often, but not always,
//    supplied as part of the math support library.
//
//    The definition of the error function is:
//
//      ERF(X) = ( 2 / SQRT ( PI ) ) * Integral ( 0 <= T <= X ) EXP ( -T**2 ) dT
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    Original FORTRAN77 version by Wayne Fullerton,
//    FORTRAN90 version by John Burkardt.
//
//  Reference:
//
//    David Kahaner, Cleve Moler, Steven Nash,
//    Numerical Methods and Software,
//    Prentice Hall, 1989,
//    ISBN: 0-13-627258-4,
//    LC: TA345.K34.
//
//  Parameters:
//
//    Input, double X, the argument of the error function.
//
//    Output, double ERROR_F, the value of the error function at X.
//
{
  double erfcs[13] = {
    -0.049046121234691808, -0.14226120510371364, 
     0.010035582187599796, -0.000576876469976748, 
     0.000027419931252196, -0.000001104317550734, 
     0.000000038488755420, -0.000000001180858253, 
     0.000000000032334215, -0.000000000000799101, 
     0.000000000000017990, -0.000000000000000371, 
     0.000000000000000007 };
  static int nterf = 0;
  static double sqeps = 0.0;
  double sqrtpi = 1.7724538509055160;
  double value;
  static double xbig = 0.0;
  double y;
//
//  Initialize the Chebyshev series.
//
  if ( nterf == 0 )
  {
    nterf = inits ( erfcs, 13, 0.1 * r8_epsilon ( ) );
    xbig = sqrt ( - log ( sqrtpi * r8_epsilon ( ) ) );
    sqeps = sqrt ( 2.0 * r8_epsilon ( ) );
  }

  y = r8_abs ( x );

  if ( y <= sqeps )
  {
    value = 2.0 * x / sqrtpi;
  }
  else if ( y <= 1.0 )
  {
    value = x * ( 1.0 + csevl ( 2.0 * x * x - 1.0, erfcs, nterf ) );
  }
  else if ( y <= xbig )
  {
    value = ( 1.0 - error_fc ( y ) ) * r8_sign ( x );
  }
  else
  {
    value = r8_sign ( x );
  }

  return value;
}
//****************************************************************************80

double error_fc ( double x )

//****************************************************************************80
//
//  Purpose:
//
//    ERROR_FC computes the complementary error function.
//
//  Discussion:
//
//    This function was renamed "ERROR_FC" from "ERFC", to avoid a conflict
//    with the name of a corresponding routine often, but not always,
//    supplied as part of the math support library.
//
//    The definition of the complementary error function is:
//
//      ERFC(X) = 1 - ERF(X)
//
//    where ERF(X) is the error function.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    Original FORTRAN77 version by Wayne Fullerton,
//    FORTRAN90 version by John Burkardt.
//
//  Reference:
//
//    David Kahaner, Cleve Moler, Steven Nash,
//    Numerical Methods and Software,
//    Prentice Hall, 1989,
//    ISBN: 0-13-627258-4,
//    LC: TA345.K34.
//
//  Parameters:
//
//    Input, double X, the argument of the error function.
//
//    Output, double ERROR_FC, the value of the complementary 
//    error function at X.
//
{
  double erfcs[13] = {
   -0.049046121234691808, 
   -0.14226120510371364,  
    0.010035582187599796, 
   -0.000576876469976748, 
    0.000027419931252196, 
   -0.000001104317550734, 
    0.000000038488755420, 
   -0.000000001180858253, 
    0.000000000032334215, 
   -0.000000000000799101, 
    0.000000000000017990, 
   -0.000000000000000371, 
    0.000000000000000007 };
  double erfccs[24] = {
    0.0715179310202925, 
   -0.026532434337606719, 
    0.001711153977920853, 
   -0.000163751663458512, 
    0.000019871293500549, 
   -0.000002843712412769, 
    0.000000460616130901, 
   -0.000000082277530261, 
    0.000000015921418724, 
   -0.000000003295071356, 
    0.000000000722343973, 
   -0.000000000166485584, 
    0.000000000040103931, 
   -0.000000000010048164, 
    0.000000000002608272, 
   -0.000000000000699105, 
    0.000000000000192946, 
   -0.000000000000054704, 
    0.000000000000015901, 
   -0.000000000000004729, 
    0.000000000000001432, 
   -0.000000000000000439,
    0.000000000000000138, 
   -0.000000000000000048 };
  double erc2cs[23] = {
   -0.069601346602309501, 
   -0.041101339362620893, 
    0.003914495866689626, 
   -0.000490639565054897, 
    0.000071574790013770, 
   -0.000011530716341312, 
    0.000001994670590201, 
   -0.000000364266647159, 
    0.000000069443726100, 
   -0.000000013712209021, 
    0.000000002788389661, 
   -0.000000000581416472, 
    0.000000000123892049, 
   -0.000000000026906391, 
    0.000000000005942614, 
   -0.000000000001332386, 
    0.000000000000302804, 
   -0.000000000000069666, 
    0.000000000000016208, 
   -0.000000000000003809, 
    0.000000000000000904, 
   -0.000000000000000216, 
    0.000000000000000052 };
  double eta;
  static int nterc2 = 0;
  static int nterf = 0;
  static int nterfc = 0;
  static double sqeps = 0.0;
  double sqrtpi = 1.7724538509055160;
  double value;
  static double xmax = 0.0;
  static double xsml = 0.0;
  double y;

  if ( nterf == 0 )
  {
    eta = 0.1 * r8_epsilon ( );
    nterf = inits ( erfcs, 13, eta );
    nterfc = inits ( erfccs, 24, eta );
    nterc2 = inits ( erc2cs, 23, eta );

    xsml = -sqrt ( - log ( sqrtpi * r8_epsilon ( ) ) );
    xmax = sqrt ( - log ( sqrtpi * r8_tiny ( ) ) );
    xmax = xmax - 0.5 * log ( xmax ) / xmax - 0.01;
    sqeps = sqrt ( 2.0 * r8_epsilon ( ) );
  }

  if ( x <= xsml )
  {
    value = 2.0;
    return value;
  }
//
//  X so big that ERFC will underflow.
//
  if ( xmax < x )
  {
    value = 0.0;
    return value;
  }

  y = r8_abs ( x );
//
//  erfc(x) = 1.0 - erf(x) for -1 <= x <= 1.
//
  if ( y <= 1.0 )
  {
    if ( y < sqeps )
    {
      value = 1.0 - 2.0 * x / sqrtpi;
    }
    else if ( sqeps <= y )
    {
      value = 1.0 - x * ( 1.0 + csevl ( 2.0 * x * x - 1.0, erfcs, nterf ) );
    }
    return value;
  }
//
//  For 1 < |x| <= xmax, erfc(x) = 1.0 - erf(x)
//
  y = y * y;

  if ( y <= 4.0 )
  {
    value = exp ( -y ) / r8_abs ( x ) * ( 0.5 
      + csevl ( ( 8.0 / y - 5.0 ) / 3.0, erc2cs, nterc2 ) );
  }
  else
  {
    value = exp ( -y ) / r8_abs ( x ) * ( 0.5 
      + csevl ( 8.0 / y - 1.0, erfccs, nterfc ) );
  }

  if ( x < 0.0 )
  {
    value = 2.0 - value;
  }

  return value;
}
//****************************************************************************80

double gamma_log ( double x )

//****************************************************************************80
//
//  Purpose:
//
//    GAMMA_LOG calculates the natural logarithm of GAMMA ( X ) for positive X.
//
//  Discussion:
//
//    Computation is based on an algorithm outlined in references 1 and 2.
//    The program uses rational functions that theoretically approximate
//    LOG(GAMMA(X)) to at least 18 significant decimal digits.  The
//    approximation for 12 < X is from reference 3, while approximations
//    for X < 12.0 are similar to those in reference 1, but are unpublished.
//
//    The accuracy achieved depends on the arithmetic system, the compiler,
//    intrinsic functions, and proper selection of the machine-dependent
//    constants.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    28 May 2003
//
//  Author:
//
//    Original FORTRAN77 version by William Cody, Laura Stoltz,
//    FORTRAN90 version by John Burkardt.
//
//  Reference:
//
//    William Cody, Kenneth Hillstrom,
//    Chebyshev Approximations for the Natural Logarithm of the Gamma Function,
//    Mathematics of Computation,
//    Volume 21, Number 98, April 1967, pages 198-203.
//
//    Kenneth Hillstrom,
//    ANL/AMD Program ANLC366S, DGAMMA/DLGAMA,
//    May 1969.
//
//    John Hart, Ward Cheney, Charles Lawson, Hans Maely, Charles Mesztenyi,
//    John Rice, Henry Thatcher, Christop Witzgall,
//    Computer Approximations,
//    Wiley, 1968,
//    LC: QA297.C64.
//
//  Parameters:
//
//    Input, double X, the argument of the Gamma function.  X must be positive.
//
//    Output, double GAMMA_LOG, the logarithm of the Gamma function of X.
//    If X <= 0.0, or if overflow would occur, the program returns the
//    value XINF, the largest representable double precision number.
//
//
//  Explanation of machine-dependent constants
//
//  BETA   - radix for the real number representation.
//
//  MAXEXP - the smallest positive power of BETA that overflows.
//
//  XBIG   - largest argument for which LN(GAMMA(X)) is representable
//           in the machine, i.e., the solution to the equation
//             LN(GAMMA(XBIG)) = BETA**MAXEXP.
//
//  FRTBIG - Rough estimate of the fourth root of XBIG
//
//
//  Approximate values for some important machines are:
//
//                            BETA      MAXEXP         XBIG
//
//  CRAY-1        (S.P.)        2        8191       9.62E+2461
//  Cyber 180/855
//    under NOS   (S.P.)        2        1070       1.72E+319
//  IEEE (IBM/XT,
//    SUN, etc.)  (S.P.)        2         128       4.08E+36
//  IEEE (IBM/XT,
//    SUN, etc.)  (D.P.)        2        1024       2.55D+305
//  IBM 3033      (D.P.)       16          63       4.29D+73
//  VAX D-Format  (D.P.)        2         127       2.05D+36
//  VAX G-Format  (D.P.)        2        1023       1.28D+305
//
//
//                           FRTBIG
//
//  CRAY-1        (S.P.)   3.13E+615
//  Cyber 180/855
//    under NOS   (S.P.)   6.44E+79
//  IEEE (IBM/XT,
//    SUN, etc.)  (S.P.)   1.42E+9
//  IEEE (IBM/XT,
//    SUN, etc.)  (D.P.)   2.25D+76
//  IBM 3033      (D.P.)   2.56D+18
//  VAX D-Format  (D.P.)   1.20D+9
//  VAX G-Format  (D.P.)   1.89D+76
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
  double d1 = - 5.772156649015328605195174E-01;
  double d2 =   4.227843350984671393993777E-01;
  double d4 =   1.791759469228055000094023E+00;
  double frtbig = 1.42E+09;
  int i;
  double p1[8] = {
    4.945235359296727046734888E+00, 
    2.018112620856775083915565E+02, 
    2.290838373831346393026739E+03, 
    1.131967205903380828685045E+04, 
    2.855724635671635335736389E+04, 
    3.848496228443793359990269E+04, 
    2.637748787624195437963534E+04, 
    7.225813979700288197698961E+03 };
  double p2[8] = {
    4.974607845568932035012064E+00, 
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
    2.940378956634553899906876E+010,
    1.702665737765398868392998E+011,
    4.926125793377430887588120E+011, 
    5.606251856223951465078242E+011 };
  double pnt68 = 0.6796875E+00;
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
    1.488613728678813811542398E+010, 
    1.016803586272438228077304E+011, 
    3.417476345507377132798597E+011, 
    4.463158187419713286462081E+011 };
  double res;
  double sqrtpi = 0.9189385332046727417803297;
  double xbig = 4.08E+36;
  double xden;
  double xm1;
  double xm2;
  double xm4;
  double xnum;
  double xsq;
//
//  Return immediately if the argument is out of range.
//
  if ( x <= 0.0 || xbig < x )
  {
    return r8_huge ( );
  }

  if ( x <= r8_epsilon ( ) )
  {
    res = -log ( x );
  }
  else if ( x <= 1.5 )
  {
    if ( x < pnt68 )
    {
      corr = - log ( x );
      xm1 = x;
    }
    else
    {
      corr = 0.0;
      xm1 = ( x - 0.5 ) - 0.5;
    }

    if ( x <= 0.5 || pnt68 <= x )
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
      xm2 = ( x - 0.5 ) - 0.5;
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
  else if ( x <= 4.0 )
  {
    xm2 = x - 2.0;
    xden = 1.0;
    xnum = 0.0;
    for ( i = 0; i < 8; i++ )
    {
      xnum = xnum * xm2 + p2[i];
      xden = xden * xm2 + q2[i];
    }

    res = xm2 * ( d2 + xm2 * ( xnum / xden ) );
  }
  else if ( x <= 12.0 )
  {
    xm4 = x - 4.0;
    xden = - 1.0;
    xnum = 0.0;
    for ( i = 0; i < 8; i++ )
    {
      xnum = xnum * xm4 + p4[i];
      xden = xden * xm4 + q4[i];
    }
    res = d4 + xm4 * ( xnum / xden );
  }
  else
  {
    res = 0.0;

    if ( x <= frtbig )
    {
      res = c[6];
      xsq = x * x;

      for ( i = 0; i < 6; i++ )
      {
        res = res / xsq + c[i];
      }
    }
    res = res / x;
    corr = log ( x );
    res = res + sqrtpi - 0.5 * corr;
    res = res + x * ( corr - 1.0 );
  }

  return res;
}
//****************************************************************************80

int get_problem_num ( void )

//****************************************************************************80
//
//  Purpose:
//
//    GET_PROBLEM_NUM returns the number of test integration problems.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, int PROBLEM_NUM, the number of test integration problems.
//
{
  int problem_num;

  problem_num = 32;

  return problem_num;
}
//****************************************************************************80

int i4_huge ( void )

//****************************************************************************80
//
//  Purpose:
//
//    I4_HUGE returns a "huge" I4.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    16 May 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, int I4_HUGE, a "huge" I4.
//
{
  return 2147483647;
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

void i4vec_copy ( int n, int a1[], int a2[] )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_COPY copies an I4VEC.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    29 June 2005
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of entries in the vectors.
//
//    Input, int A1[N], the vector to be copied.
//
//    Input, int A2[N], the copy of A1.
//
{
  int i;

  for ( i = 0; i < n; i++ )
  {
    a2[i] = a2[i];
  }
  return;
}
//****************************************************************************80

int i4vec_sum ( int n, int a[] )

//****************************************************************************80
//
//  Purpose:
//
//    I4VEC_SUM sums the entries of an I4VEC.
//
//  Example:
//
//    Input:
//
//      A = ( 1, 2, 3, 4 )
//
//    Output:
//
//      I4VEC_SUM = 10
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    26 May 1999
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of entries in the vector.
//
//    Input, int A[N], the vector to be summed.
//
//    Output, int I4VEC_SUM, the sum of the entries of A.
//
{
  int i;
  int sum;

  sum = 0;
  for ( i = 0; i < n; i++ )
  {
    sum = sum + a[i];
  }

  return sum;
}
//****************************************************************************80

int inits ( double os[], int nos, double eta )

//****************************************************************************80
//
//  Purpose:
//
//    INITS estimates the order of an orthogonal series for a given accuracy.
//
//  Discussion:
//
//    Because this is a function, it is not possible to print out
//    warning error messages.  Therefore, if an error condition is
//    detected, a bogus value of INITS is returned.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    Original FORTRAN77 version by Roger Broucke,
//    FORTRAN90 version by John Burkardt.
//
//  Reference:
//
//    Roger Broucke,
//    Algorithm 446:
//    Ten Subroutines for the Manipulation of Chebyshev Series,
//    Communications of the ACM,
//    Volume 16, 1973, pages 254-256.
//
//    David Kahaner, Cleve Moler, Steven Nash,
//    Numerical Methods and Software,
//    Prentice Hall, 1989,
//    ISBN: 0-13-627258-4,
//    LC: TA345.K34.
//
//  Parameters:
//
//    Input, double OS[NOS], the coefficients in the series.
//
//    Input, int NOS, the number of coefficients.  NOS must be
//    at least 1, or an error condition arises.
//
//    Input, double ETA, the requested accuracy of the series.
//    Ordinarily, ETA will be chosen to be one-tenth machine precision.
//
//    Output, int INITS, the order of the series guaranteeing the
//    given accuracy.  However, on error, INITS will be returned
//    as a negative number.
//
{
  double err;
  int i;
  int ii;
  int value;
//
//  Fatal error.  Number of coefficients less than 1.
//  But an error message cannot be printed out because this is a function.
//
  if ( nos < 1 )
  {
    value = - i4_huge ( );
    return value;
  }

  err = 0.0;

  i = 0;

  for ( ii = 1; ii <= nos; ii++ )
  {
    i = nos + 1 - ii;
    err = err + r8_abs ( os[i-1] );

    if ( eta < err )
    {
      i = nos + 1 - ii;
      break;
    }
  }
//
//  Eta may be too small.  Accuracy cannot be guaranteed.
//  But an error message cannot be printed out because this is a function.
//
  if ( i == 0 )
  {
    i = - nos;
  }

  value = i;

  return value;
}
//****************************************************************************80

double normal_01_cdf_inv ( double cdf )

//****************************************************************************80
//
//  Purpose:
//
//    NORMAL_01_CDF_INV inverts the Normal 01 CDF.
//
//  Discussion:
//
//    Modified to handle cases where R = 0 would result in LOG(0).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    05 June 2007
//
//  Author:
//
//    Original FORTRAN77 version by JD Beasley, SG Springer,
//    FORTRAN90 version by John Burkardt.
//
//  Reference:
//
//    JD Beasley, SG Springer,
//    Algorithm AS 111:
//    The Percentage Points of the Normal Distribution,
//    Applied Statistics,
//    Volume 26, 1977, pages 118-121.
//
//  Parameters:
//
//    Input, double CDF, the value of the CDF.
//    0.0 <= CDF <= 1.0.
//
//    Input, double NORMAL_01_CDF_INV, the corresponding argument.
//
{
  double a0 =   2.50662823884;
  double a1 = -18.61500062529;
  double a2 =  41.39119773534;
  double a3 = -25.44106049637;
  double b1 =  -8.47351093090;
  double b2 =  23.08336743743;
  double b3 = -21.06224101826;
  double b4 =   3.13082909833;
  double c0 =  -2.78718931138;
  double c1 =  -2.29796479134;
  double c2 =   4.85014127135;
  double c3 =   2.32121276858;
  double d1 =   3.54388924762;
  double d2 =   1.63706781897;
  double q;
  double r;
  double x;

  if ( cdf < 0.0 || 1.0 < cdf )
  {
    cout << "\n";
    cout << "NORMAL_01_CDF_INV - Fatal error!\n";
    cout << "  CDF < 0 or 1 < CDF.\n";
    exit ( 1 );
  }

  q = cdf - 0.5;

  q = r8_min ( q,  0.5 );
  q = r8_max ( q, -0.5 );
//
//  0.08 < CDF < 0.92
//
  if ( r8_abs ( q ) <= 0.42 )
  {
    r = q * q;

    x = q * ( ( ( 
           a3   * r 
         + a2 ) * r 
         + a1 ) * r 
         + a0 ) / ( ( ( ( 
           b4   * r 
         + b3 ) * r 
         + b2 ) * r 
         + b1 ) * r + 1.0 );
  }
//
//  CDF < 0.08 or 0.92 < CDF.
//
  else
  {
    r = r8_min ( cdf, 1.0 - cdf );
    r = r8_max ( r, 0.0 );
    r = r8_min ( r, 1.0 );

    if ( r <= 0.0 )
    {
      x = r8_huge ( );
    }
    else
    {
      r = sqrt ( - log ( r ) );

      x = ( ( ( 
             c3   * r 
           + c2 ) * r 
           + c1 ) * r 
           + c0 ) / ( ( 
             d2   * r 
           + d1 ) * r + 1.0 );
    }

    if ( q < 0.0 )
    {
      x = - x;
    }
  }

  return x;
}
//****************************************************************************80

double p00_box_gl05 ( int problem, int dim_num, int sub_num )

//****************************************************************************80
//
//  Purpose:
//
//    P00_BOX_GL05 uses Gauss-Legendre quadrature in an N-dimensional box. 
//
//  Discussion:
//
//    The rule is the product of 5-point Gauss-Legendre rules 
//    in each spatial dimension.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int PROBLEM, the problem number.
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Input, int SUB_NUM, the number of subdivisions in each dimension.
//
//    Output, double P00_BOX_GL05, the approximate integral.
//
{
# define NORDER 5

  double *a;
  double *a_sub;
  double *b;
  double *b_sub;
  int dim;
  int *indx;
  int j;
  int k;
  int point;
  int point_num = 1;
  double result;
  int *sub_indx;
  double *value;
  double volume;
  double w;
  double weight[NORDER] = {
    0.236926885056189087514264040720, 
    0.478628670499366468041291514836, 
    0.568888888888888888888888888889, 
    0.478628670499366468041291514836, 
    0.236926885056189087514264040720 };
  double *x;
  double xtab[NORDER] = {
    - 0.906179845938663992797626878299, 
    - 0.538469310105683091036314420700, 
      0.0, 
      0.538469310105683091036314420700, 
      0.906179845938663992797626878299 };
//
//  Get the integration limits, and the weight adjustment factor.
//
  a = new double[dim_num];
  a_sub = new double[dim_num];
  b = new double[dim_num];
  b_sub = new double[dim_num];
  indx = new int[dim_num];
  sub_indx = new int[dim_num];
  x = new double[dim_num*point_num];

  p00_lim ( problem, dim_num, a, b );
//
//  Carry out the product rule.
//
  result = 0.0;
//
//  In the outer loop, we pick a sub-box.
//
  j = 0;

  for ( ; ; )
  {
    tuple_next ( 1, sub_num, dim_num, &j, sub_indx );

    if ( j == 0 )
    {
      break;
    }

    for ( dim = 0; dim < dim_num; dim++ )
    {
      a_sub[dim] = ( ( double ) ( sub_num + 1 - sub_indx[dim] ) * a[dim] 
                   + ( double ) (         - 1 + sub_indx[dim] ) * b[dim] ) 
                   / ( double ) ( sub_num );

      b_sub[dim] = ( ( double ) ( sub_num     - sub_indx[dim] ) * a[dim] 
                   + ( double ) (               sub_indx[dim] ) * b[dim] ) 
                   / ( double ) ( sub_num );
    }
//
//  In the inner loop, we go through all the points in the
//  cross product of the quadrature rule.
//
    k = 0;

    for ( ; ; )
    {
      tuple_next ( 1, NORDER, dim_num, &k, indx );

      if ( k == 0  )
      {
        break;
      }

      w = 1.0;
      for ( dim = 0; dim < dim_num; dim++ )
      {
      w = w * weight[indx[dim]-1];
      }

      point = 0;
      for ( dim = 0; dim < dim_num; dim++ )
      {
        x[dim+point*dim_num] = 0.5 * ( 
            a_sub[dim] * ( 1.0 - xtab[indx[dim]-1] ) 
          + b_sub[dim] * ( 1.0 + xtab[indx[dim]-1] ) );
      }
      value = p00_f ( problem, dim_num, point_num, x );

      for ( point = 0; point < point_num; point++ )
      {
        result = result + w * value[point];
      }
      delete [] value;
    }
  }
//
//  Get the volume.
//
  volume = p00_volume ( problem, dim_num );

  result = result * volume / ( double ) ( i4_power ( 2 * sub_num, dim_num ) );

  delete [] a;
  delete [] a_sub;
  delete [] b;
  delete [] b_sub;
  delete [] indx;
  delete [] sub_indx;
  delete [] x;

  return result;
# undef NORDER
}
//****************************************************************************80

double p00_box_mc ( int problem, int dim_num, int point_num )

//****************************************************************************80
//
//  Purpose:
//
//    P00_BOX_MC integrates over an multi-dimensional box using Monte Carlo.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int PROBLEM, the problem number.
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Input, int POINT_NUM, the number of points to use.
//
//    Output, double P00_BOX_MC, the approximate integral.
//
{
  double *a;
  double *b;
  int dim;
  int point;
  double quad;
  double result;
  int seed = 123456789;
  double *value;
  double volume;
  double *x;
//
//  Get the volume.
//
  volume = p00_volume ( problem, dim_num );
//
//  Get the integration limits.
//
  a = new double[dim_num];
  b = new double[dim_num];

  p00_lim ( problem, dim_num, a, b );
//
//  Get the random values.
//
  x = r8vec_uniform_01 ( dim_num*point_num, &seed );
//
//  Map them to the integration retion.
//
  for ( point = 0; point < point_num; point++ )
  {
    for ( dim = 0; dim < dim_num; dim++ )
    {
      x[dim+point*dim_num] = ( a[dim] * ( 1.0 - x[dim+point*dim_num] ) 
                             + b[dim] * (     + x[dim+point*dim_num] ) );
    }
  }
//
//  Evaluate the function.
//
  value = p00_f ( problem, dim_num, point_num, x );
//
//  Estimate the integral.
//
  result = r8vec_sum ( point_num, value ) * volume / ( double ) ( point_num );

  delete [] a;
  delete [] b;
  delete [] value;
  delete [] x;

  return result;
}
//****************************************************************************80

void p00_default ( int problem, int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P00_DEFAULT sets a problem to a default state.
//
//  Discussion:
//
//    If a problem uses vector parameters, then the spatial dimension
//    DIM_NUM is needed as input, so that the vector parameters can be
//    properly dimensioned.
//
//    Every problem keeps a count of the number of function calls.  Calling
//    this routine causes that count to be reset to 0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int PROBLEM, the number of the desired test problem.
//
//    Input, int DIM_NUM, the dimension of the problem.
//
{
  if ( problem == 1 )
  {
    p01_default ( dim_num );
  }
  else if ( problem == 2 )
  {
    p02_default ( dim_num );
  }
  else if ( problem == 3 )
  {
    p03_default ( dim_num );
  }
  else if ( problem == 4 )
  {
    p04_default ( dim_num );
  }
  else if ( problem == 5 )
  {
    p05_default ( dim_num );
  }
  else if ( problem == 6 )
  {
    p06_default ( dim_num );
  }
  else if ( problem == 7 )
  {
    p07_default ( dim_num );
  }
  else if ( problem == 8 )
  {
    p08_default ( dim_num );
  }
  else if ( problem == 9 )
  {
    p09_default ( dim_num );
  }
  else if ( problem == 10 )
  {
    p10_default ( dim_num );
  }
  else if ( problem == 11 )
  {
    p11_default ( dim_num );
  }
  else if ( problem == 12 )
  {
    p12_default ( dim_num );
  }
  else if ( problem == 13 )
  {
    p13_default ( dim_num );
  }
  else if ( problem == 14 )
  {
    p14_default ( dim_num );
  }
  else if ( problem == 15 )
  {
    p15_default ( dim_num );
  }
  else if ( problem == 16 )
  {
    p16_default ( dim_num );
  }
  else if ( problem == 17 )
  {
    p17_default ( dim_num );
  }
  else if ( problem == 18 )
  {
    p18_default ( dim_num );
  }
  else if ( problem == 19 )
  {
    p19_default ( dim_num );
  }
  else if ( problem == 20 )
  {
    p20_default ( dim_num );
  }
  else if ( problem == 21 )
  {
    p21_default ( dim_num );
  }
  else if ( problem == 22 )
  {
    p22_default ( dim_num );
  }
  else if ( problem == 23 )
  {
    p23_default ( dim_num );
  }
  else if ( problem == 24 )
  {
    p24_default ( dim_num );
  }
  else if ( problem == 25 )
  {
    p25_default ( dim_num );
  }
  else if ( problem == 26 )
  {
    p26_default ( dim_num );
  }
  else if ( problem == 27 )
  {
    p27_default ( dim_num );
  }
  else if ( problem == 28 )
  {
    p28_default ( dim_num );
  }
  else if ( problem == 29 )
  {
    p29_default ( dim_num );
  }
  else if ( problem == 30 )
  {
    p30_default ( dim_num );
  }
  else if ( problem == 31 )
  {
    p31_default ( dim_num );
  }
  else if ( problem == 32 )
  {
    p32_default ( dim_num );
  }
  else
  {
    cout << "\n";
    cout << "P00_DEFAULT - Fatal error!\n";
    cout << "  Illegal problem number = " << problem << "\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

double p00_exact ( int problem, int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P00_EXACT returns the exact integral for any problem.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int PROBLEM, the number of the desired test problem.
//
//    Input, int DIM_NUM, the dimension of the problem.
//
//    Output, double P00_EXACT, the exact value of the integral.
//
{
  double exact;

  if ( problem == 1 )
  {
    exact = p01_exact ( dim_num );
  }
  else if ( problem == 2 )
  {
    exact = p02_exact ( dim_num );
  }
  else if ( problem == 3 )
  {
    exact = p03_exact ( dim_num );
  }
  else if ( problem == 4 )
  {
    exact = p04_exact ( dim_num );
  }
  else if ( problem == 5 )
  {
    exact = p05_exact ( dim_num );
  }
  else if ( problem == 6 )
  {
    exact = p06_exact ( dim_num );
  }
  else if ( problem == 7 )
  {
    exact = p07_exact ( dim_num );
  }
  else if ( problem == 8 )
  {
    exact = p08_exact ( dim_num );
  }
  else if ( problem == 9 )
  {
    exact = p09_exact ( dim_num );
  }
  else if ( problem == 10 )
  {
    exact = p10_exact ( dim_num );
  }
  else if ( problem == 11 )
  {
    exact = p11_exact ( dim_num );
  }
  else if ( problem == 12 )
  {
    exact = p12_exact ( dim_num );
  }
  else if ( problem == 13 )
  {
    exact = p13_exact ( dim_num );
  }
  else if ( problem == 14 )
  {
    exact = p14_exact ( dim_num );
  }
  else if ( problem == 15 )
  {
    exact = p15_exact ( dim_num );
  }
  else if ( problem == 16 )
  {
    exact = p16_exact ( dim_num );
  }
  else if ( problem == 17 )
  {
    exact = p17_exact ( dim_num );
  }
  else if ( problem == 18 )
  {
    exact = p18_exact ( dim_num );
  }
  else if ( problem == 19 )
  {
    exact = p19_exact ( dim_num );
  }
  else if ( problem == 20 )
  {
    exact = p20_exact ( dim_num );
  }
  else if ( problem == 21 )
  {
    exact = p21_exact ( dim_num );
  }
  else if ( problem == 22 )
  {
    exact = p22_exact ( dim_num );
  }
  else if ( problem == 23 )
  {
    exact = p23_exact ( dim_num );
  }
  else if ( problem == 24 )
  {
    exact = p24_exact ( dim_num );
  }
  else if ( problem == 25 )
  {
    exact = p25_exact ( dim_num );
  }
  else if ( problem == 26 )
  {
    exact = p26_exact ( dim_num );
  }
  else if ( problem == 27 )
  {
    exact = p27_exact ( dim_num );
  }
  else if ( problem == 28 )
  {
    exact = p28_exact ( dim_num );
  }
  else if ( problem == 29 )
  {
    exact = p29_exact ( dim_num );
  }
  else if ( problem == 30 )
  {
    exact = p30_exact ( dim_num );
  }
  else if ( problem == 31 )
  {
    exact = p31_exact ( dim_num );
  }
  else if ( problem == 32 )
  {
    exact = p32_exact ( dim_num );
  }
  else
  {
    cout << "\n";
    cout << "P00_EXACT - Fatal error!\n";
    cout << "  Illegal problem number = " << problem << "\n";
    exit ( 1 );
  }

  return exact;
}
//****************************************************************************80

double *p00_f ( int problem, int dim_num, int point_num, double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    P00_F evaluates the integrand for any problem.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int PROBLEM, the number of the desired test problem.
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Input, int POINT_NUM, the number of points.
//
//    Input, double X[DIM_NUM*POINT_NUM], the evaluation points.
//
//    Output, double P00_F[POINT_NUM], the integrand values.
//
{
  double *value;

  if ( problem == 1 )
  {
    value = p01_f ( dim_num, point_num, x );
  }
  else if ( problem == 2 )
  {
    value = p02_f ( dim_num, point_num, x );
  }
  else if ( problem == 3 )
  {
    value = p03_f ( dim_num, point_num, x );
  }
  else if ( problem == 4 )
  {
    value = p04_f ( dim_num, point_num, x );
  }
  else if ( problem == 5 )
  {
    value = p05_f ( dim_num, point_num, x );
  }
  else if ( problem == 6 )
  {
    value = p06_f ( dim_num, point_num, x );
  }
  else if ( problem == 7 )
  {
    value = p07_f ( dim_num, point_num, x );
  }
  else if ( problem == 8 )
  {
    value = p08_f ( dim_num, point_num, x );
  }
  else if ( problem == 9 )
  {
    value = p09_f ( dim_num, point_num, x );
  }
  else if ( problem == 10 )
  {
    value = p10_f ( dim_num, point_num, x );
  }
  else if ( problem == 11 )
  {
    value = p11_f ( dim_num, point_num, x );
  }
  else if ( problem == 12 )
  {
    value = p12_f ( dim_num, point_num, x );
  }
  else if ( problem == 13 )
  {
    value = p13_f ( dim_num, point_num, x );
  }
  else if ( problem == 14 )
  {
    value = p14_f ( dim_num, point_num, x );
  }
  else if ( problem == 15 )
  {
    value = p15_f ( dim_num, point_num, x );
  }
  else if ( problem == 16 )
  {
    value = p16_f ( dim_num, point_num, x );
  }
  else if ( problem == 17 )
  {
    value = p17_f ( dim_num, point_num, x );
  }
  else if ( problem == 18 )
  {
    value = p18_f ( dim_num, point_num, x );
  }
  else if ( problem == 19 )
  {
    value = p19_f ( dim_num, point_num, x );
  }
  else if ( problem == 20 )
  {
    value = p20_f ( dim_num, point_num, x );
  }
  else if ( problem == 21 )
  {
    value = p21_f ( dim_num, point_num, x );
  }
  else if ( problem == 22 )
  {
    value = p22_f ( dim_num, point_num, x );
  }
  else if ( problem == 23 )
  {
    value = p23_f ( dim_num, point_num, x );
  }
  else if ( problem == 24 )
  {
    value = p24_f ( dim_num, point_num, x );
  }
  else if ( problem == 25 )
  {
    value = p25_f ( dim_num, point_num, x );
  }
  else if ( problem == 26 )
  {
    value = p26_f ( dim_num, point_num, x );
  }
  else if ( problem == 27 )
  {
    value = p27_f ( dim_num, point_num, x );
  }
  else if ( problem == 28 )
  {
    value = p28_f ( dim_num, point_num, x );
  }
  else if ( problem == 29 )
  {
    value = p29_f ( dim_num, point_num, x );
  }
  else if ( problem == 30 )
  {
    value = p30_f ( dim_num, point_num, x );
  }
  else if ( problem == 31 )
  {
    value = p31_f ( dim_num, point_num, x );
  }
  else if ( problem == 32 )
  {
    value = p32_f ( dim_num, point_num, x );
  }
  else
  {
    cout << "\n";
    cout << "P00_F - Fatal error!\n";
    cout << "  Illegal problem number = " << problem << "\n";
    exit ( 1 );
  }

  return value;
}
//****************************************************************************80

void p00_i4 ( int problem, char action, char name, int *value )

//****************************************************************************80
//
//  Purpose:
//
//    P00_I4 sets or gets I4 parameters for any problem.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int PROBLEM, the number of the desired test problem.
//
//    Input, char ACTION,
//    'D' to set a parameter to its default value;
//    'S' to set a parameter to VALUE,
//    'G' to set VALUE to the parameter's value,
//    'I' to increment a parameter.
//
//    Input, char NAME, the name of the variable.
//    '#' is the number of calls to the integrand routine.
//
//    Input/output, int VALUE.
//    * If ACTION = 'I', then VALUE is an input quantity, and is the
//      new value to be added to NAME.
//    * If ACTION = 'S', then VALUE is an input quantity, and is the
//      new value to be assigned to NAME.
//    * If ACTION = 'G', then VALUE is an output quantity, and is the
//      current value of NAME.
//
{
  if ( problem == 1 )
  {
    p01_i4 ( action, name, value );
  }
  else if ( problem == 2 )
  {
    p02_i4 ( action, name, value );
  }
  else if ( problem == 3 )
  {
    p03_i4 ( action, name, value );
  }
  else if ( problem == 4 )
  {
    p04_i4 ( action, name, value );
  }
  else if ( problem == 5 )
  {
    p05_i4 ( action, name, value );
  }
  else if ( problem == 6 )
  {
    p06_i4 ( action, name, value );
  }
  else if ( problem == 7 )
  {
    p07_i4 ( action, name, value );
  }
  else if ( problem == 8 )
  {
    p08_i4 ( action, name, value );
  }
  else if ( problem == 9 )
  {
    p09_i4 ( action, name, value );
  }
  else if ( problem == 10 )
  {
    p10_i4 ( action, name, value );
  }
  else if ( problem == 11 )
  {
    p11_i4 ( action, name, value );
  }
  else if ( problem == 12 )
  {
    p12_i4 ( action, name, value );
  }
  else if ( problem == 13 )
  {
    p13_i4 ( action, name, value );
  }
  else if ( problem == 14 )
  {
    p14_i4 ( action, name, value );
  }
  else if ( problem == 15 )
  {
    p15_i4 ( action, name, value );
  }
  else if ( problem == 16 )
  {
    p16_i4 ( action, name, value );
  }
  else if ( problem == 17 )
  {
    p17_i4 ( action, name, value );
  }
  else if ( problem == 18 )
  {
    p18_i4 ( action, name, value );
  }
  else if ( problem == 19 )
  {
    p19_i4 ( action, name, value );
  }
  else if ( problem == 20 )
  {
    p20_i4 ( action, name, value );
  }
  else if ( problem == 21 )
  {
    p21_i4 ( action, name, value );
  }
  else if ( problem == 22 )
  {
    p22_i4 ( action, name, value );
  }
  else if ( problem == 23 )
  {
    p23_i4 ( action, name, value );
  }
  else if ( problem == 24 )
  {
    p24_i4 ( action, name, value );
  }
  else if ( problem == 25 )
  {
    p25_i4 ( action, name, value );
  }
  else if ( problem == 26 )
  {
    p26_i4 ( action, name, value );
  }
  else if ( problem == 27 )
  {
    p27_i4 ( action, name, value );
  }
  else if ( problem == 28 )
  {
    p28_i4 ( action, name, value );
  }
  else if ( problem == 29 )
  {
    p29_i4 ( action, name, value );
  }
  else if ( problem == 30 )
  {
    p30_i4 ( action, name, value );
  }
  else if ( problem == 31 )
  {
    p31_i4 ( action, name, value );
  }
  else if ( problem == 32 )
  {
    p32_i4 ( action, name, value );
  }
  else
  {
    cout << "\n";
    cout << "P00_I4 - Fatal error!\n";
    cout << "  Illegal problem number = " << problem << "\n";
    exit ( 1 );
  }

  return;
}
//****************************************************************************80

void p00_lim ( int problem, int dim_num, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    P00_LIM returns the integration limits for any problem.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int PROBLEM, the number of the desired test problem.
//
//    Input, int DIM_NUM, the dimension of the argument.
//
//    Output, double A[DIM_NUM], B[DIM_NUM], the lower and upper 
//    limits of integration.
//    Note that if A = -HUGE(A), the lower limit is
//    actually negative infinity, and if B = HUGE(B), the upper limit
//    is actually infinity.
//
{
  if ( problem == 1 )
  {
    p01_lim ( dim_num, a, b );
  }
  else if ( problem == 2 )
  {
    p02_lim ( dim_num, a, b );
  }
  else if ( problem == 3 )
  {
    p03_lim ( dim_num, a, b );
  }
  else if ( problem == 4 )
  {
    p04_lim ( dim_num, a, b );
  }
  else if ( problem == 5 )
  {
    p05_lim ( dim_num, a, b );
  }
  else if ( problem == 6 )
  {
    p06_lim ( dim_num, a, b );
  }
  else if ( problem == 7 )
  {
    p07_lim ( dim_num, a, b );
  }
  else if ( problem == 8 )
  {
    p08_lim ( dim_num, a, b );
  }
  else if ( problem == 9 )
  {
    p09_lim ( dim_num, a, b );
  }
  else if ( problem == 10 )
  {
    p10_lim ( dim_num, a, b );
  }
  else if ( problem == 11 )
  {
    p11_lim ( dim_num, a, b );
  }
  else if ( problem == 12 )
  {
    p12_lim ( dim_num, a, b );
  }
  else if ( problem == 13 )
  {
    p13_lim ( dim_num, a, b );
  }
  else if ( problem == 14 )
  {
    p14_lim ( dim_num, a, b );
  }
  else if ( problem == 15 )
  {
    p15_lim ( dim_num, a, b );
  }
  else if ( problem == 16 )
  {
    p16_lim ( dim_num, a, b );
  }
  else if ( problem == 17 )
  {
    p17_lim ( dim_num, a, b );
  }
  else if ( problem == 18 )
  {
    p18_lim ( dim_num, a, b );
  }
  else if ( problem == 19 )
  {
    p19_lim ( dim_num, a, b );
  }
  else if ( problem == 20 )
  {
    p20_lim ( dim_num, a, b );
  }
  else if ( problem == 21 )
  {
    p21_lim ( dim_num, a, b );
  }
  else if ( problem == 22 )
  {
    p22_lim ( dim_num, a, b );
  }
  else if ( problem == 23 )
  {
    p23_lim ( dim_num, a, b );
  }
  else if ( problem == 24 )
  {
    p24_lim ( dim_num, a, b );
  }
  else if ( problem == 25 )
  {
    p25_lim ( dim_num, a, b );
  }
  else if ( problem == 26 )
  {
    p26_lim ( dim_num, a, b );
  }
  else if ( problem == 27 )
  {
    p27_lim ( dim_num, a, b );
  }
  else if ( problem == 28 )
  {
    p28_lim ( dim_num, a, b );
  }
  else if ( problem == 29 )
  {
    p29_lim ( dim_num, a, b );
  }
  else if ( problem == 30 )
  {
    p30_lim ( dim_num, a, b );
  }
  else if ( problem == 31 )
  {
    p31_lim ( dim_num, a, b );
  }
  else if ( problem == 32 )
  {
    p32_lim ( dim_num, a, b );
  }
  else
  {
    cout << "\n";
    cout << "P00_LIM - Fatal error!\n";
    cout << "  Illegal problem number = " << problem << "\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

char *p00_name ( int problem )

//****************************************************************************80
//
//  Purpose:
//
//    P00_NAME returns the name of the problem.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int PROBLEM, the number of the desired test problem.
//
//    Output, char *P00_NAME, the name of the problem.
//
{
  char *value;

  if ( problem == 1 )
  {
    value = p01_name ( );
  }
  else if ( problem == 2 )
  {
    value = p02_name ( );
  }
  else if ( problem == 3 )
  {
    value = p03_name ( );
  }
  else if ( problem == 4 )
  {
    value = p04_name ( );
  }
  else if ( problem == 5 )
  {
    value = p05_name ( );
  }
  else if ( problem == 6 )
  {
    value = p06_name ( );
  }
  else if ( problem == 7 )
  {
    value = p07_name ( );
  }
  else if ( problem == 8 )
  {
    value = p08_name ( );
  }
  else if ( problem == 9 )
  {
    value = p09_name ( );
  }
  else if ( problem == 10 )
  {
    value = p10_name ( );
  }
  else if ( problem == 11 )
  {
    value = p11_name ( );
  }
  else if ( problem == 12 )
  {
    value = p12_name ( );
  }
  else if ( problem == 13 )
  {
    value = p13_name ( );
  }
  else if ( problem == 14 )
  {
    value = p14_name ( );
  }
  else if ( problem == 15 )
  {
    value = p15_name ( );
  }
  else if ( problem == 16 )
  {
    value = p16_name ( );
  }
  else if ( problem == 17 )
  {
    value = p17_name ( );
  }
  else if ( problem == 18 )
  {
    value = p18_name ( );
  }
  else if ( problem == 19 )
  {
    value = p19_name ( );
  }
  else if ( problem == 20 )
  {
    value = p20_name ( );
  }
  else if ( problem == 21 )
  {
    value = p21_name ( );
  }
  else if ( problem == 22 )
  {
    value = p22_name ( );
  }
  else if ( problem == 23 )
  {
    value = p23_name ( );
  }
  else if ( problem == 24 )
  {
    value = p24_name ( );
  }
  else if ( problem == 25 )
  {
    value = p25_name ( );
  }
  else if ( problem == 26 )
  {
    value = p26_name ( );
  }
  else if ( problem == 27 )
  {
    value = p27_name ( );
  }
  else if ( problem == 28 )
  {
    value = p28_name ( );
  }
  else if ( problem == 29 )
  {
    value = p29_name ( );
  }
  else if ( problem == 30 )
  {
    value = p30_name ( );
  }
  else if ( problem == 31 )
  {
    value = p31_name ( );
  }
  else if ( problem == 32 )
  {
    value = p32_name ( );
  }
  else
  {
    cout << "\n";
    cout << "P00_NAME - Fatal error!\n";
    cout << "  Illegal problem number = " << problem << "\n";
    exit ( 1 );
  }
  return value;
}
//****************************************************************************80

void p00_r8vec ( int problem, char action, char name, int dim_num, 
  double value[] )

//****************************************************************************80
//
//  Purpose:
//
//    P00_R8VEC sets or gets R8VEC parameters for any problem.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int PROBLEM, the number of the desired test problem.
//
//    Input, char ACTION, the action.
//    'D' sets the internal value of the object to a default value.
//    If NAME = '*', then all variables are defaulted.
//    'G' means the current value of the should be returned.
//    'R' means randomize the object and return it.
//    'S' means the input value of the object should be stored.
//
//    Input, char NAME, the name of the variable.
//
//    Input, int DIM_NUM, the dimension of the variable.
//
//    Input/output, double VALUE[DIM_NUM], the value of the variable.
//
{
  if ( problem == 1 )
  {
  }
  else if ( problem == 2 )
  {
  }
  else if ( problem == 3 )
  {
  }
  else if ( problem == 4 )
  {
  }
  else if ( problem == 5 )
  {
  }
  else if ( problem == 6 )
  {
  }
  else if ( problem == 7 )
  {
  }
  else if ( problem == 8 )
  {
  }
  else if ( problem == 9 )
  {
    p09_r8vec ( action, name, dim_num, value );
  }
  else if ( problem == 10 )
  {
  }
  else if ( problem == 11 )
  {
  }
  else if ( problem == 12 )
  {
  }
  else if ( problem == 13 )
  {
  }
  else if ( problem == 14 )
  {
  }
  else if ( problem == 15 )
  {
  }
  else if ( problem == 16 )
  {
    p16_r8vec ( action, name, dim_num, value );
  }
  else if ( problem == 17 )
  {
    p17_r8vec ( action, name, dim_num, value );
  }
  else if ( problem == 18 )
  {
    p18_r8vec ( action, name, dim_num, value );
  }
  else if ( problem == 19 )
  {
    p19_r8vec ( action, name, dim_num, value );
  }
  else if ( problem == 20 )
  {
  }
  else if ( problem == 21 )
  {
  }
  else if ( problem == 22 )
  {
  }
  else if ( problem == 23 )
  {
  }
  else if ( problem == 24 )
  {
    p24_r8vec ( action, name, dim_num, value );
  }
  else if ( problem == 25 )
  {
  }
  else if ( problem == 26 )
  {
    p26_r8vec ( action, name, dim_num, value );
  }
  else if ( problem == 27 )
  {
    p27_r8vec ( action, name, dim_num, value );
  }
  else if ( problem == 28 )
  {
    p28_r8vec ( action, name, dim_num, value );
  }
  else if ( problem == 29 )
  {
    p29_r8vec ( action, name, dim_num, value );
  }
  else if ( problem == 30 )
  {
    p30_r8vec ( action, name, dim_num, value );
  }
  else if ( problem == 31 )
  {
    p31_r8vec ( action, name, dim_num, value );
  }
  else if ( problem == 32 )
  {
    p32_r8vec ( action, name, dim_num, value );
  }
  else
  {
    cout << "\n";
    cout << "P00_R8VEC - Fatal error!\n";
    cout << "  Illegal problem number = " << problem << "\n";
    exit ( 1 );
  }

  return;
}
//****************************************************************************80

char *p00_region ( int problem )

//****************************************************************************80
//
//  Purpose:
//
//    P00_REGION returns the name of the integration region for any problem.
//
//  Discussion:
//
//    I thought I was going to use this idea a lot, but most of my test
//    regions are boxes.
//
//    BALL
//      the interior of a 2D circle,
//      the interior of a 3D sphere,
//      the interior of an ND sphere.
//
//    BOX
//      a 1D finite line segment,
//      a 2D finite rectangle,
//      a 3D box,
//      an ND box.
//
//    SIMPLEX 
//      a 2D triangle,
//      a 3D tetrahedron,
//      an ND simplex.
//      The "unit simplex" in ND is the set of nonnegative points X 
//      such that sum ( X(1:N) ) <= 1.
//
//    SPACE
//      a 1D infinite line,
//      a 2D infinite place,
//      a 3D space,
//      an ND space.
//
//    SPHERE
//      the circumference of a 2D circle,
//      the surface of a 3D sphere,
//      the surface of an ND sphere.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int PROBLEM, the number of the desired test problem.
//
//    Output, char *REGION, the name of the integration region.
//
{
  char *value;

  if ( problem == 1 )
  {
    value = p01_region ( );
  }
  else if ( problem == 2 )
  {
    value = p02_region ( );
  }
  else if ( problem == 3 )
  {
    value = p03_region ( );
  }
  else if ( problem == 4 )
  {
    value = p04_region ( );
  }
  else if ( problem == 5 )
  {
    value = p05_region ( );
  }
  else if ( problem == 6 )
  {
    value = p06_region ( );
  }
  else if ( problem == 7 )
  {
    value = p07_region ( );
  }
  else if ( problem == 8 )
  {
    value = p08_region ( );
  }
  else if ( problem == 9 )
  {
    value = p09_region ( );
  }
  else if ( problem == 10 )
  {
    value = p10_region ( );
  }
  else if ( problem == 11 )
  {
    value = p11_region ( );
  }
  else if ( problem == 12 )
  {
    value = p12_region ( );
  }
  else if ( problem == 13 )
  {
    value = p13_region ( );
  }
  else if ( problem == 14 )
  {
    value = p14_region ( );
  }
  else if ( problem == 15 )
  {
    value = p15_region ( );
  }
  else if ( problem == 16 )
  {
    value = p16_region ( );
  }
  else if ( problem == 17 )
  {
    value = p17_region ( );
  }
  else if ( problem == 18 )
  {
    value = p18_region ( );
  }
  else if ( problem == 19 )
  {
    value = p19_region ( );
  }
  else if ( problem == 20 )
  {
    value = p20_region ( );
  }
  else if ( problem == 21 )
  {
    value = p21_region ( );
  }
  else if ( problem == 22 )
  {
    value = p22_region ( );
  }
  else if ( problem == 23 )
  {
    value = p23_region ( );
  }
  else if ( problem == 24 )
  {
    value = p24_region ( );
  }
  else if ( problem == 25 )
  {
    value = p25_region ( );
  }
  else if ( problem == 26 )
  {
    value = p26_region ( );
  }
  else if ( problem == 27 )
  {
    value = p27_region ( );
  }
  else if ( problem == 28 )
  {
    value = p28_region ( );
  }
  else if ( problem == 29 )
  {
    value = p29_region ( );
  }
  else if ( problem == 30 )
  {
    value = p30_region ( );
  }
  else if ( problem == 31 )
  {
    value = p31_region ( );
  }
  else if ( problem == 32 )
  {
    value = p32_region ( );
  }
  else
  {
    cout << "\n";
    cout << "P00_REGION - Fatal error!\n";
    cout << "  Illegal problem number = " << problem << "\n";
    exit ( 1 );
  }

  return value;
}
//****************************************************************************80

void p00_remap01 ( int problem, int dim_num, int point_num, double x01[], 
  double xab[] )

//****************************************************************************80
//
//  Purpose:
//
//    P00_REMAP01 remaps points in [0,1]^DIM_NUM into [A(1:DIM_NUM),B(1:DIM_NUM)].
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    08 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int PROBLEM, the problem number.
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Input, int POINT_NUM, the number of points.
//
//    Input, double X01[DIM_NUM*N], the points, in [0,1], 
//    to be transformed.
//
//    Output, double XAB[DIM_NUM*N], the transformed points.
//
{
  double *a;
  double *b;
  int dim;
  int point;

  a = new double[dim_num];
  b = new double[dim_num];

  p00_lim ( problem, dim_num, a, b );

  for ( dim = 0; dim < dim_num; dim++ )
  {
    for ( point = 0; point < point_num; point++ )
    {
      xab[dim+point*dim_num] = 
        a[dim] + ( b[dim] - a[dim] ) * x01[dim+point*dim_num];
    }
  }

  delete [] a;
  delete [] b;

  return;
}
//****************************************************************************80

void p00_title ( int problem )

//****************************************************************************80
//
//  Purpose:
//
//    P00_TITLE prints a title for any problem.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int PROBLEM, the number of the desired test problem.
//
{
  if ( problem == 1 )
  {
    p01_title ( );
  }
  else if ( problem == 2 )
  {
    p02_title ( );
  }
  else if ( problem == 3 )
  {
    p03_title ( );
  }
  else if ( problem == 4 )
  {
    p04_title ( );
  }
  else if ( problem == 5 )
  {
    p05_title ( );
  }
  else if ( problem == 6 )
  {
    p06_title ( );
  }
  else if ( problem == 7 )
  {
    p07_title ( );
  }
  else if ( problem == 8 )
  {
    p08_title ( );
  }
  else if ( problem == 9 )
  {
    p09_title ( );
  }
  else if ( problem == 10 )
  {
    p10_title ( );
  }
  else if ( problem == 11 )
  {
    p11_title ( );
  }
  else if ( problem == 12 )
  {
    p12_title ( );
  }
  else if ( problem == 13 )
  {
    p13_title ( );
  }
  else if ( problem == 14 )
  {
    p14_title ( );
  }
  else if ( problem == 15 )
  {
    p15_title ( );
  }
  else if ( problem == 16 )
  {
    p16_title ( );
  }
  else if ( problem == 17 )
  {
    p17_title ( );
  }
  else if ( problem == 18 )
  {
    p18_title ( );
  }
  else if ( problem == 19 )
  {
    p19_title ( );
  }
  else if ( problem == 20 )
  {
    p20_title ( );
  }
  else if ( problem == 21 )
  {
    p21_title ( );
  }
  else if ( problem == 22 )
  {
    p22_title ( );
  }
  else if ( problem == 23 )
  {
    p23_title ( );
  }
  else if ( problem == 24 )
  {
    p24_title ( );
  }
  else if ( problem == 25 )
  {
    p25_title ( );
  }
  else if ( problem == 26 )
  {
    p26_title ( );
  }
  else if ( problem == 27 )
  {
    p27_title ( );
  }
  else if ( problem == 28 )
  {
    p28_title ( );
  }
  else if ( problem == 29 )
  {
    p29_title ( );
  }
  else if ( problem == 30 )
  {
    p30_title ( );
  }
  else if ( problem == 31 )
  {
    p31_title ( );
  }
  else if ( problem == 32 )
  {
    p32_title ( );
  }
  else
  {
    cout << "\n";
    cout << "P00_TITLE - Fatal error!\n";
    cout << "  Illegal problem number = " << problem << "\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

double p00_volume ( int problem, int dim_num  )

//****************************************************************************80
//
//  Purpose:
//
//    P00_VOLUME returns the volume of the integration region.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int PROBLEM, the number of the desired test problem.
//
//    Input, int DIM_NUM, the dimension of the problem.
//
//    Output, double P00_VOLUME, the volume of the integration region.
//
{
  double *a;
  double *b;
  int dim;
  double r;
  double volume;

  if ( 1 <= problem && problem <= 20 )
  {
    a = new double[dim_num];
    b = new double[dim_num];

    p00_lim ( problem, dim_num, a, b );

    volume = 1.0;
    for ( dim = 0; dim < dim_num; dim++ )
    {
      volume = volume * ( b[dim] - a[dim] );
    }

    delete [] a;
    delete [] b;
  }
  else if ( problem == 21 )
  {
    volume = sphere_unit_area_nd ( dim_num );
  }
  else if ( problem == 22 )
  {
    p22_r8 ( 'G', 'R', &r );

    volume = sphere_volume_nd ( dim_num, r );
  }
  else if ( problem == 23 )
  {
    volume = simplex_unit_volume_nd ( dim_num );
  }
  else if ( 24 <= problem && problem <= 32 )
  {
    a = new double[dim_num];
    b = new double[dim_num];

    p00_lim ( problem, dim_num, a, b );

    volume = 1.0;
    for ( dim = 0; dim < dim_num; dim++ )
    {
      volume = volume * ( b[dim] - a[dim] );
    }

    delete [] a;
    delete [] b;
  }
  else
  {
    cout << "\n";
    cout << "P00_VOLUME - Fatal error!\n";
    cout << "  Illegal value of PROBLEM.\n";
    exit ( 1 );
  }
  return volume;
}
//****************************************************************************80

void p01_default ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P01_DEFAULT sets default values for problem 01.
//
//  Discussion:
//
//    If a problem uses vector parameters, then the spatial dimension
//    DIM_NUM is needed as input, so that the vector parameters can be
//    properly dimensioned.
//
//    Every problem keeps a count of the number of function calls.  Calling
//    this routine causes that count to be reset to 0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the problem.
//
{
  int i4;

  p01_i4 ( 'D', '*', &i4 );

  return;
}
//****************************************************************************80

double p01_exact ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P01_EXACT returns the exact integral for problem 01.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Output, double P01_EXACT, the exact value of the integral.
//
{
  double exact;

  exact = ( double ) ( ( dim_num ) * ( 3 * dim_num + 1 ) ) / 12.0;

  return exact;
}
//****************************************************************************80

double *p01_f ( int dim_num, int point_num, double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    P01_F evaluates the integrand for problem 01.
//
//  Discussion:
//
//    The spatial dimension DIM_NUM is arbitrary.
//
//  Region:
//
//    0 <= X(1:DIM_NUM) <= 1
//
//  Integrand:
//
//    f(x) = ( sum ( x(1:dim_num) ) )**2
//
//  Exact Integral:
//
//    dim_num * ( 3 * dim_num + 1 ) / 12
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Input, int POINT_NUM, the number of points.
//
//    Input, double X[DIM_NUM*POINT_NUM], the evaluation points.
//
//    Output, double P01_F[POINT_NUM], the integrand values.
//
{
  int dim;
  int inc;
  int point;
  double *value;

  value = new double[point_num];

  for ( point = 0; point < point_num; point++ )
  {
    value[point] = 0.0;
    for ( dim = 0; dim < dim_num; dim++ )
    {
      value[point] = value[point] + x[dim+point*dim_num];
    }
    value[point] = pow ( value[point], 2 );
  }

  inc = point_num;
  p01_i4 ( 'I', '#', &inc );

  return value;
}
//****************************************************************************80

void p01_i4 ( char action, char name, int *value )

//****************************************************************************80
//
//  Purpose:
//
//    P01_I4 sets or gets I4 parameters for problem 01.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION,
//    'D' to set a parameter to its default value;
//    'S' to set a parameter to VALUE,
//    'G' to set VALUE to the parameter's value,
//    'I' to increment a parameter.
//
//    Input, char NAME, the name of the variable.
//    '#' is the number of calls to the integrand routine.
//
//    Input/output, int *VALUE.
//    * If ACTION = 'I', then VALUE is an input quantity, and is the
//      new value to be added to NAME.
//    * If ACTION = 'S', then VALUE is an input quantity, and is the
//      new value to be assigned to NAME.
//    * If ACTION = 'G', then VALUE is an output quantity, and is the
//      current value of NAME.
//
{
  static int calls = 0;

  if ( action == 'D' )
  {
    if ( name == '#' || name == '*' )
    {
      calls = 0;
    }
  }
  else if ( action == 'G' )
  {
    if ( name == '#' )
    {
      *value = calls;
    }
    else
    {
      cout << "\n";
      cout << "P01_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'I' )
  {
    if ( name == '#' )
    {
      calls = calls + *value;
    }
    else
    {
      cout << "\n";
      cout << "P01_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == '#' )
    {
      calls = *value;
    }
    else
    {
      cout << "\n";
      cout << "P01_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P01_I4 - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

void p01_lim ( int dim_num, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    P01_LIM returns the integration limits for problem 01.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the argument.
//
//    Output, double A[DIM_NUM], B[DIM_NUM], the lower and upper
//    limits of integration.
//    Note that if A = -HUGE(A), the lower limit is
//    actually negative infinity, and if B = HUGE(B), the upper limit
//    is actually infinity.
//
{
  int dim;

  for ( dim = 0; dim < dim_num; dim++ )
  {
    a[dim] = 0.0;
  }
  for ( dim = 0; dim < dim_num; dim++ )
  {
    b[dim] = 1.0;
  }

  return;
}
//****************************************************************************80

char *p01_name ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P01_NAME returns the name of problem 01.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P01_NAME, the name of the problem.
//
{
  char *value;

  value = new char[10];

  strcpy ( value, "SquareSum" );

  return value;
}
//****************************************************************************80

char *p01_region ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P01_REGION returns the name of the integration region for problem 01.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P01_REGION, the name of the integration region.
//
{
  char *value;

  value = new char[4];

  strcpy ( value, "BOX" );

  return value;
}
//****************************************************************************80

void p01_title ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P01_TITLE prints a title for problem 01.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
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
  cout << "\n";
  cout << "Problem 01\n";
  cout << "  Name:       SquareSum\n";
  cout << "  Region:     0 <= X(i) <= 1\n";
  cout << "  Integrand:  F(X) = ( sum ( X(i) ) )^2\n";

  return;
}
//****************************************************************************80

void p02_default ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P02_DEFAULT sets default values for problem 02.
//
//  Discussion:
//
//    If a problem uses vector parameters, then the spatial dimension
//    DIM_NUM is needed as input, so that the vector parameters can be
//    properly dimensioned.
//
//    Every problem keeps a count of the number of function calls.  Calling
//    this routine causes that count to be reset to 0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the problem.
//
{
  int i4;

  p02_i4 ( 'D', '*', &i4 );

  return;
}
//****************************************************************************80

double p02_exact ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P02_EXACT returns the exact integral for problem 02.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Output, double P02_EXACT, the exact value of the integral.
//
{
  double exact;

  exact = ( double ) ( dim_num * ( 5 * dim_num - 2 ) ) / 15.0;

  return exact;
}
//****************************************************************************80

double *p02_f ( int dim_num, int point_num, double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    P02_F evaluates the integrand for problem 02.
//
//  Discussion:
//
//    The spatial dimension DIM_NUM is arbitrary.
//
//  Region:
//
//    0 <= X(1:DIM_NUM) <= 1
//
//  Integrand:
//
//    ( sum ( 2 * x(1:dim_num) - 1 ) )**4
//
//  Exact Integral:
//
//    DIM_NUM * (5*DIM_NUM-2) / 15
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Philip Davis, Philip Rabinowitz,
//    Methods of Numerical Integration,
//    Second Edition,
//    Dover, 2007,
//    ISBN: 0486453391,
//    LC: QA299.3.D28.
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Input, int POINT_NUM, the number of points.
//
//    Input, double X[DIM_NUM*POINT_NUM], the evaluation points.
//
//    Output, double P02_F[POINT_NUM], the integrand values.
//
{
  int dim;
  int inc;
  int point;
  double *value;

  value = new double[point_num];

  for ( point = 0; point < point_num; point++ )
  {
    value[point] = 0.0;
    for ( dim = 0; dim < dim_num; dim++ )
    {
      value[point] = value[point] + ( 2.0 * x[dim+point*dim_num] - 1.0 );
    }
    value[point] = pow ( value[point], 4 );
  }

  inc = point_num;
  p02_i4 ( 'I', '#', &inc );

  return value;
}
//****************************************************************************80

void p02_i4 ( char action, char name, int *value )

//****************************************************************************80
//
//  Purpose:
//
//    P02_I4 sets or gets I4 parameters for problem 02.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION,
//    'D' to set a parmater to its default value;
//    'S' to set a parameter to VALUE,
//    'G' to set VALUE to the parameter's value,
//    'I' to increment a parameter.
//
//    Input, char NAME, the name of the variable.
//    '#' is the number of calls to the integrand routine.
//
//    Input/output, int *VALUE.
//    * If ACTION = 'I', then VALUE is an input quantity, and is the
//      new value to be added to NAME.
//    * If ACTION = 'S', then VALUE is an input quantity, and is the
//      new value to be assigned to NAME.
//    * If ACTION = 'G', then VALUE is an output quantity, and is the
//      current value of NAME.
//
{
  static int calls = 0;

  if ( action == 'D' )
  {
    if ( name == '#' || name == '*' )
    {
      calls = 0;
    }
  }
  else if ( action == 'G' )
  {
    if ( name == '#' )
    {
      *value = calls;
    }
    else
    {
      cout << "\n";
      cout << "P02_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'I' )
  {
    if ( name == '#' )
    {
      calls = calls + *value;
    }
    else
    {
      cout << "\n";
      cout << "P02_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == '#' )
    {
      calls = *value;
    }
    else
    {
      cout << "\n";
      cout << "P02_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P02_I4 - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

void p02_lim ( int dim_num, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    P02_LIM returns the integration limits for problem 02.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the argument.
//
//    Output, double A[DIM_NUM], B[DIM_NUM], the lower and upper limits
//    of integration.
//    Note that if A = -HUGE(A), the lower limit is
//    actually negative infinity, and if B = HUGE(B), the upper limit
//    is actually infinity.
//
{
  int dim;

  for ( dim = 0; dim < dim_num; dim++ )
  {
    a[dim] = 0.0;
  }
  for ( dim = 0; dim < dim_num; dim++ )
  {
    b[dim] = 1.0;
  }

  return;
}
//****************************************************************************80

char *p02_name ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P02_NAME returns the name of problem 02.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P02_NAME, the name of the problem.
//
{
  char *value;

  value = new char[8];

  strcpy ( value, "QuadSum" );

  return value;
}
//****************************************************************************80

char *p02_region ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P02_REGION returns the name of the integration region for problem 02.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P02_REGION, the name of the integration region.
//
{
  char *value;

  value = new char[4];

  strcpy ( value, "BOX" );

  return value;
}
//****************************************************************************80

void p02_title ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P02_TITLE prints a title for problem 02.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
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
  cout << "\n";
  cout << "Problem 02\n";
  cout << "  Name:       QuadSum\n";
  cout << "              Davis, Rabinowitz, page 370, #1.\n";
  cout << "  Region:     0 <= X(i) <= 1\n";
  cout << "  Integrand:  F(X) = ( sum ( 2 * X(i) - 1 ) )^4\n";

  return;
}
//****************************************************************************80

void p03_default ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P03_DEFAULT sets default values for problem 03.
//
//  Discussion:
//
//    If a problem uses vector parameters, then the spatial dimension
//    DIM_NUM is needed as input, so that the vector parameters can be
//    properly dimensioned.
//
//    Every problem keeps a count of the number of function calls.  Calling
//    this routine causes that count to be reset to 0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the problem.
//
{
  int i4;

  p03_i4 ( 'D', '*', &i4 );

  return;
}
//****************************************************************************80

double p03_exact ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P03_EXACT returns the exact integral for problem 03.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Output, double P03_EXACT, the exact value of the integral.
//
{
  double exact;

  exact = 0.0;

  return exact;
}
//****************************************************************************80

double *p03_f ( int dim_num, int point_num, double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    P03_F evaluates the integrand for problem 03.
//
//  Discussion:
//
//    The spatial dimension DIM_NUM is arbitrary.
//
//  Region:
//
//    0 <= X(1:DIM_NUM) <= 1
//
//  Integrand:
//
//    ( sum ( 2 * x(1:dim_num) - 1 ) )**5
//
//  Exact Integral:
//
//    0
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Philip Davis, Philip Rabinowitz,
//    Methods of Numerical Integration,
//    Second Edition,
//    Dover, 2007,
//    ISBN: 0486453391,
//    LC: QA299.3.D28.
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Input, int POINT_NUM, the number of points.
//
//    Input, double X[DIM_NUM*POINT_NUM], the evaluation points.
//
//    Output, double P03_F[POINT_NUM], the integrand values.
//
{
  int dim;
  int inc;
  int point;
  double *value;

  value = new double[point_num];

  for ( point = 0; point < point_num; point++ )
  {
    value[point] = 0.0;
    for ( dim = 0; dim < dim_num; dim++ )
    {
      value[point] = value[point] + ( 2.0 * x[dim+point*dim_num] - 1.0 );
    }
    value[point] = pow ( value[point], 5 );
  }

  inc = point_num;
  p03_i4 ( 'I', '#', &inc );

  return value;
}
//****************************************************************************80

void p03_i4 ( char action, char name, int *value )

//****************************************************************************80
//
//  Purpose:
//
//    P03_I4 sets or gets I4 parameters for problem 03.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION,
//    'D' to set a parmater to its default value;
//    'S' to set a parameter to VALUE,
//    'G' to set VALUE to the parameter's value,
//    'I' to increment a parameter.
//
//    Input, char NAME, the name of the variable.
//    '#' is the number of calls to the integrand routine.
//
//    Input/output, int *VALUE.
//    * If ACTION = 'I', then VALUE is an input quantity, and is the
//      new value to be added to NAME.
//    * If ACTION = 'S', then VALUE is an input quantity, and is the
//      new value to be assigned to NAME.
//    * If ACTION = 'G', then VALUE is an output quantity, and is the
//      current value of NAME.
//
{
  static int calls = 0;

  if ( action == 'D' )
  {
    if ( name == '#' || name == '*' )
    {
      calls = 0;
    }
  }
  else if ( action == 'G' )
  {
    if ( name == '#' )
    {
      *value = calls;
    }
    else
    {
      cout << "\n";
      cout << "P03_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'I' )
  {
    if ( name == '#' )
    {
      calls = calls + *value;
    }
    else
    {
      cout << "\n";
      cout << "P03_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == '#' )
    {
      calls = *value;
    }
    else
    {
      cout << "\n";
      cout << "P03_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P03_I4 - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

void p03_lim ( int dim_num, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    P03_LIM returns the integration limits for problem 03.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the argument.
//
//    Output, double A[DIM_NUM], B[DIM_NUM], the lower and upper
//    limits of integration.
//    Note that if A = -HUGE(A), the lower limit is
//    actually negative infinity, and if B = HUGE(B), the upper limit
//    is actually infinity.
//
{
  int dim;

  for ( dim = 0; dim < dim_num; dim++ )
  {
    a[dim] = 0.0;
  }
  for ( dim = 0; dim < dim_num; dim++ )
  {
    b[dim] = 1.0;
  }

  return;
}
//****************************************************************************80

char *p03_name ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P03_NAME returns the name of problem 03.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P03_NAME, the name of the problem.
//
{
  char *value;

  value = new char[9];

  strcpy ( value, "QuintSum" );

  return value;
}
//****************************************************************************80

char *p03_region ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P03_REGION returns the name of the integration region for problem 03.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P03_REGION, the name of the integration region.
//
{
  char *value;

  value = new char[4];

  strcpy ( value, "BOX" );

  return value;
}
//****************************************************************************80

void p03_title ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P03_TITLE prints a title for problem 03.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
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
  cout << "\n";
  cout << "Problem 03\n";
  cout << "  Name:       QuintSum\n";
  cout << "              Davis, Rabinowitz, page 370, #3.\n";
  cout << "  Region:     0 <= X(i) <= 1\n";
  cout << "  Integrand:  F(X) = ( sum ( X(i) ) )^5\n";

  return;
}
//****************************************************************************80

void p04_default ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P04_DEFAULT sets default values for problem 04.
//
//  Discussion:
//
//    If a problem uses vector parameters, then the spatial dimension
//    DIM_NUM is needed as input, so that the vector parameters can be
//    properly dimensioned.
//
//    Every problem keeps a count of the number of function calls.  Calling
//    this routine causes that count to be reset to 0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the problem.
//
{
  int i4;

  p04_i4 ( 'D', '*', &i4 );

  return;
}
//****************************************************************************80

double p04_exact ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P04_EXACT returns the exact integral for problem 04.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Output, double P04_EXACT, the exact value of the integral.
//
{
  double exact;

  exact = ( double ) ( dim_num * ( 7 * ( dim_num - 1 ) 
    * ( 5 * dim_num - 1 ) + 9 ) ) / 63.0;

  return exact;
}
//****************************************************************************80

double *p04_f ( int dim_num, int point_num, double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    P04_F evaluates the integrand for problem 04.
//
//  Discussion:
//
//    The spatial dimension DIM_NUM is arbitrary.
//
//  Region:
//
//    0 <= X(1:DIM_NUM) <= 1
//
//  Integrand:
//
//    ( sum ( 2 * x(1:dim_num) - 1 ) )**6
//
//  Exact Integral:
//
//    DIM_NUM * ( 7 * (DIM_NUM-1) * (5*DIM_NUM-1) + 9 ) / 63
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Philip Davis, Philip Rabinowitz,
//    Methods of Numerical Integration,
//    Second Edition,
//    Dover, 2007,
//    ISBN: 0486453391,
//    LC: QA299.3.D28.
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Input, int POINT_NUM, the number of points.
//
//    Input, double X[DIM_NUM*POINT_NUM], the evaluation points.
//
//    Output, double P04_F[POINT_NUM], the integrand values.
//
{
  int dim;
  int inc;
  int point;
  double *value;

  value = new double[point_num];

  for ( point = 0; point < point_num; point++ )
  {
    value[point] = 0.0;
    for ( dim = 0; dim < dim_num; dim++ )
    {
      value[point] = value[point] + ( 2.0 * x[dim+point*dim_num] - 1.0 );
    }
    value[point] = pow ( value[point], 6 );
  }

  inc = point_num;
  p04_i4 ( 'I', '#', &inc );

  return value;
}
//****************************************************************************80

void p04_i4 ( char action, char name, int *value )

//****************************************************************************80
//
//  Purpose:
//
//    P04_I4 sets or gets I4 parameters for problem 04.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION,
//    'D' to set a parmater to its default value;
//    'S' to set a parameter to VALUE,
//    'G' to set VALUE to the parameter's value,
//    'I' to increment a parameter.
//
//    Input, char NAME, the name of the variable.
//    '#' is the number of calls to the integrand routine.
//
//    Input/output, int *VALUE.
//    * If ACTION = 'I', then VALUE is an input quantity, and is the
//      new value to be added to NAME.
//    * If ACTION = 'S', then VALUE is an input quantity, and is the
//      new value to be assigned to NAME.
//    * If ACTION = 'G', then VALUE is an output quantity, and is the
//      current value of NAME.
//
{
  static int calls = 0;

  if ( action == 'D' )
  {
    if ( name == '#' || name == '*' )
    {
      calls = 0;
    }
  }
  else if ( action == 'G' )
  {
    if ( name == '#' )
    {
      *value = calls;
    }
    else
    {
      cout << "\n";
      cout << "P04_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'I' )
  {
    if ( name == '#' )
    {
      calls = calls + *value;
    }
    else
    {
      cout << "\n";
      cout << "P04_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == '#' )
    {
      calls = *value;
    }
    else
    {
      cout << "\n";
      cout << "P04_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P04_I4 - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

void p04_lim ( int dim_num, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    P04_LIM returns the integration limits for problem 04.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the dimension of the argument.
//
//    Output, double A(DIM_NUM),B(DIM_NUM), the lower and upper
//    limits of integration.
//    Note that if A = -HUGE(A), the lower limit is
//    actually negative infinity, and if B = HUGE(B), the upper limit
//    is actually infinity.
//
{
  int dim;

  for ( dim = 0; dim < dim_num; dim++ )
  {
    a[dim] = 0.0;
  }
  for ( dim = 0; dim < dim_num; dim++ )
  {
    b[dim] = 1.0;
  }

  return;
}
//****************************************************************************80

char *p04_name ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P04_NAME returns the name of problem 04.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P04_NAME, the name of the problem.
//
{
  char *value;

  value = new char[7];

  strcpy ( value, "HexSum" );

  return value;
}
//****************************************************************************80

char *p04_region ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P04_REGION returns the name of the integration region for problem 04.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P04_REGION, the name of the integration region.
//
{
  char *value;

  value = new char[4];

  strcpy ( value, "BOX" );

  return value;
}
//****************************************************************************80

void p04_title ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P04_TITLE prints a title for problem 04.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
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
  cout << "\n";
  cout << "Problem 04\n";
  cout << "  Name:       HexSum\n";
  cout << "              Davis, Rabinowitz, page 370, #2.\n";
  cout << "  Region:     0 <= X(i) <= 1\n";
  cout << "  Integrand:  F(X) = ( sum ( 2 * X(i) - 1 ) )^6\n";

  return;
}
//****************************************************************************80

void p05_default ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P05_DEFAULT sets default values for problem 05.
//
//  Discussion:
//
//    If a problem uses vector parameters, then the spatial dimension
//    DIM_NUM is needed as input, so that the vector parameters can be
//    properly dimensioned.
//
//    Every problem keeps a count of the number of function calls.  Calling
//    this routine causes that count to be reset to 0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the problem.
//
{
  int i4;

  p05_i4 ( 'D', '*', &i4 );

  return;
}
//****************************************************************************80

double p05_exact ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P05_EXACT returns the exact integral for problem 05.
//
//  Discussion:
//
//    The exact value is given only for DIM_NUM = 1, 2, 3, 4 and 5.
//    For all other dimensions, the value R8_HUGE is returned.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    12 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Output, double P05_EXACT, the exact value of the integral.
//
{
  double exact;

  if ( dim_num == 1 )
  {
    exact = log ( 3.0 );
  }
  else if ( dim_num == 2 )
  {
    exact = 5.0 * log ( 5.0 ) - 6.0 * log ( 3.0 );
  }
  else if ( dim_num == 3 )
  {
    exact = 0.5 * ( 49.0 * log ( 7.0 ) 
      - 75.0 * log ( 5.0 ) + 27.0 * log ( 3.0 ) );
  }
  else if ( dim_num == 4 )
  {
    exact = 225.0 * log ( 3.0 ) + 125.0 * log ( 5.0 ) 
      - 686.0 * log ( 7.0 ) / 3.0;
  }
  else if ( dim_num == 5 )
  {
    exact = ( 
      - 65205.0 * log ( 3.0 ) 
      - 6250.0 * log ( 5.0 ) 
      + 24010.0 * log ( 7.0 ) 
      + 14641.0 * log ( 11.0 ) ) / 24.0;
  }
  else
  {
    exact = r8_huge ( );
  }
  return exact;
}
//****************************************************************************80

double *p05_f ( int dim_num, int point_num, double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    P05_F evaluates the integrand for problem 05.
//
//  Discussion:
//
//    The spatial dimension DIM_NUM is arbitrary.
//
//  Region:
//
//    0 <= X(1:DIM_NUM) <= 1
//
//  Integrand:
//
//    2**DIM_NUM / ( 1 + sum ( 2 * x(1:dim_num) ) )
//
//  Exact Integral:
//
//    For DIM_NUM = 1:
//
//      ln ( 3 )
//
//    For DIM_NUM = 2:
//
//      ln ( 3125 / 729 )
//
//    For DIM_NUM = 3:
//
//      0.5 * ( 49 * ln ( 7 ) - 75 * ln ( 5 ) + 27 * ln ( 3 ) )
// 
//    For DIM_NUM = 4:
//
//      225 * ln ( 3 ) + 125 * ln ( 5 ) - 686 * ln ( 7 ) / 3
//
//    For DIM_NUM = 5:
//
//      ( -65205 * ln ( 3 ) - 6250 * ln ( 5 ) + 24010 * ln ( 7 ) 
//      + 14641 * ln ( 11 ) ) / 24
//
//  Approximate Integral:
//
//    DIM_NUM  VALUE
//
//       1  1.098612289
//       2  1.455514830
//       3  2.152142833
//       4  3.402716587
//       5  5.620255523
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Arthur Stroud,
//    Approximate Calculation of Multiple Integrals,
//    Prentice Hall, 1971,
//    ISBN: 0130438936,
//    LC: QA311.S85.
//
//    Arthur Stroud, Don Secrest,
//    Gaussian Quadrature Formulas,
//    Prentice Hall, 1966,
//    LC: QA299.4G3S7.
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Input, int POINT_NUM, the number of points.
//
//    Input, double X[DIM_NUM*POINT_NUM], the evaluation points.
//
//    Output, double P05_F[POINT_NUM], the integrand values.
//
{
  double denom;
  int dim;
  int inc;
  int point;
  double *value;

  value = new double[point_num];

  for ( point = 0; point < point_num; point++ )
  {
    denom = 1.0;
    for ( dim = 0; dim < dim_num; dim++ )
    {
      denom = denom + 2.0 * x[dim+point*dim_num];
    }
    value[point] = pow ( 2.0, dim_num ) / denom;
  }

  inc = point_num;
  p05_i4 ( 'I', '#', &inc );

  return value;
}
//****************************************************************************80

void p05_i4 ( char action, char name, int *value )

//****************************************************************************80
//
//  Purpose:
//
//    P05_I4 sets or gets I4 parameters for problem 05.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION,
//    'D' to set a parmater to its default value;
//    'S' to set a parameter to VALUE,
//    'G' to set VALUE to the parameter's value,
//    'I' to increment a parameter.
//
//    Input, char NAME, the name of the variable.
//    '#' is the number of calls to the integrand routine.
//
//    Input/output, int *VALUE.
//    * If ACTION = 'I', then VALUE is an input quantity, and is the
//      new value to be added to NAME.
//    * If ACTION = 'S', then VALUE is an input quantity, and is the
//      new value to be assigned to NAME.
//    * If ACTION = 'G', then VALUE is an output quantity, and is the
//      current value of NAME.
//
{
  static int calls = 0;

  if ( action == 'D' )
  {
    if ( name == '#' || name == '*' )
    {
      calls = 0;
    }
  }
  else if ( action == 'G' )
  {
    if ( name == '#' )
    {
      *value = calls;
    }
    else
    {
      cout << "\n";
      cout << "P05_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'I' )
  {
    if ( name == '#' )
    {
      calls = calls + *value;
    }
    else
    {
      cout << "\n";
      cout << "P05_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == '#' )
    {
      calls = *value;
    }
    else
    {
      cout << "\n";
      cout << "P05_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P05_I4 - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

void p05_lim ( int dim_num, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    P05_LIM returns the integration limits for problem 05.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the argument.
//
//    Output, double A[DIM_NUM], B[DIM_NUM], the lower and upper
//    limits of integration.
//    Note that if A = -HUGE(A), the lower limit is
//    actually negative infinity, and if B = HUGE(B), the upper limit
//    is actually infinity.
//
{
  int dim;

  for ( dim = 0; dim < dim_num; dim++ )
  {
    a[dim] = 0.0;
  }
  for ( dim = 0; dim < dim_num; dim++ )
  {
    b[dim] = 1.0;
  }

  return;
}
//****************************************************************************80

char *p05_name ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P05_NAME returns the name of problem 05.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P05_NAME, the name of the problem.
//
{
  char *value;

  value = new char[5];

  strcpy ( value, "ST04" );

  return value;
}
//****************************************************************************80

char *p05_region ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P05_REGION returns the name of the integration region for problem 05.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P05_REGION, the name of the integration region.
//
{
  char *value;

  value = new char[4];

  strcpy ( value, "BOX" );

  return value;
}
//****************************************************************************80

void p05_title ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P05_TITLE prints a title for problem 05.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
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
  cout << "\n";
  cout << "Problem 05\n";
  cout << "  Name:       ST04\n";
  cout << "              Stroud #4, page 26.\n";
  cout << "  Region:     0 <= X(i) <= 1\n";
  cout << "  Integrand:  F(X) = 1 / ( 1 + sum ( 2 * X(i) ) )\n";

  return;
}
//****************************************************************************80

void p06_default ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P06_DEFAULT sets default values for problem 06.
//
//  Discussion:
//
//    If a problem uses vector parameters, then the spatial dimension
//    DIM_NUM is needed as input, so that the vector parameters can be
//    properly dimensioned.
//
//    Every problem keeps a count of the number of function calls.  Calling
//    this routine causes that count to be reset to 0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the problem.
//
{
  int i4;

  p06_i4 ( 'D', '*', &i4 );

  return;
}
//****************************************************************************80

double p06_exact ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P06_EXACT returns the exact integral for problem 06.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Output, double P06_EXACT, the exact value of the integral.
//
{
  double exact;

  exact = 1.0;

  return exact;
}
//****************************************************************************80

double *p06_f ( int dim_num, int point_num, double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    P06_F evaluates the integrand for problem 06.
//
//  Discussion:
//
//    The spatial dimension DIM_NUM is arbitrary.
//
//  Region:
//
//    0 <= X(1:DIM_NUM) <= 1
//
//  Integrand:
//
//    product ( 2 * abs ( 2 * x(1:dim_num) - 1 ) )
//
//  Exact Integral:
//
//    1
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Paul Bratley, Bennett Fox, Harald Niederreiter,
//    Implementation and Tests of Low-Discrepancy Sequences,
//    ACM Transactions on Modeling and Computer Simulation,
//    Volume 2, Number 3, pages 195-213, 1992.
//
//    Philip Davis, Philip Rabinowitz,
//    Methods of Numerical Integration,
//    Second Edition,
//    Dover, 2007,
//    ISBN: 0486453391,
//    LC: QA299.3.D28.
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Input, int POINT_NUM, the number of points.
//
//    Input, double X[DIM_NUM*POINT_NUM], the evaluation points.
//
//    Output, double P06_F[POINT_NUM], the integrand values.
//
{
  int dim;
  int inc;
  int point;
  double *value;

  value = new double[point_num];

  for ( point = 0; point < point_num; point++ )
  {
    value[point] = 1.0;
    for ( dim = 0; dim < dim_num; dim++ )
    {
      value[point] = value[point] 
        * 2.0 * r8_abs ( 2.0 * x[dim+point*dim_num] - 1.0 );
    }
  }

  inc = point_num;
  p06_i4 ( 'I', '#', &inc );

  return value;
}
//****************************************************************************80

void p06_i4 ( char action, char name, int *value )

//****************************************************************************80
//
//  Purpose:
//
//    P06_I4 sets or gets I4 parameters for problem 06.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION,
//    'D' to set a parmater to its default value;
//    'S' to set a parameter to VALUE,
//    'G' to set VALUE to the parameter's value,
//    'I' to increment a parameter.
//
//    Input, char NAME, the name of the variable.
//    '#' is the number of calls to the integrand routine.
//
//    Input/output, int *VALUE.
//    * If ACTION = 'I', then VALUE is an input quantity, and is the
//      new value to be added to NAME.
//    * If ACTION = 'S', then VALUE is an input quantity, and is the
//      new value to be assigned to NAME.
//    * If ACTION = 'G', then VALUE is an output quantity, and is the
//      current value of NAME.
//
{
  static int calls = 0;

  if ( action == 'D' )
  {
    if ( name == '#' || name == '*' )
    {
      calls = 0;
    }
  }
  else if ( action == 'G' )
  {
    if ( name == '#' )
    {
      *value = calls;
    }
    else
    {
      cout << "\n";
      cout << "P06_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'I' )
  {
    if ( name == '#' )
    {
      calls = calls + *value;
    }
    else
    {
      cout << "\n";
      cout << "P06_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == '#' )
    {
      calls = *value;
    }
    else
    {
      cout << "\n";
      cout << "P06_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P06_I4 - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

void p06_lim ( int dim_num, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    P06_LIM returns the integration limits for problem 06.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the argument.
//
//    Output, double A[DIM_NUM], B[DIM_NUM], the lower and upper
//    limits of integration.
//    Note that if A = -HUGE(A), the lower limit is
//    actually negative infinity, and if B = HUGE(B), the upper limit
//    is actually infinity.
//
{
  int dim;

  for ( dim = 0; dim < dim_num; dim++ )
  {
    a[dim] = 0.0;
  }
  for ( dim = 0; dim < dim_num; dim++ )
  {
    b[dim] = 1.0;
  }

  return;
}
//****************************************************************************80

char *p06_name ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P06_NAME returns the name of problem 06.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P06_NAME, the name of the problem.
//
{
  char *value;

  value = new char[7];

  strcpy ( value, "DR4061" );

  return value;
}
//****************************************************************************80

char *p06_region ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P06_REGION returns the name of the integration region for problem 06.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P06_REGION, the name of the integration region.
//
{
  char *value;

  value = new char[4];

  strcpy ( value, "BOX" );

  return value;
}
//****************************************************************************80

void p06_title ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P06_TITLE prints a title for problem 06.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
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
  cout << "\n";
  cout << "Problem 07\n";
  cout << "  Name:       DR4061\n";
  cout << "              Davis, Rabinowitz, page 406, #1.\n";
  cout << "  Region:     0 <= X(i) <= 1\n";
  cout << "  Integrand:  F(X) = product ( abs ( 4 * X(i) - 2 ) )\n";

  return;
}
//****************************************************************************80

void p07_default ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P07_DEFAULT sets default values for problem 07.
//
//  Discussion:
//
//    If a problem uses vector parameters, then the spatial dimension
//    DIM_NUM is needed as input, so that the vector parameters can be
//    properly dimensioned.
//
//    Every problem keeps a count of the number of function calls.  Calling
//    this routine causes that count to be reset to 0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the problem.
//
{
  int i4;

  p07_i4 ( 'D', '*', &i4 );

  return;
}
//****************************************************************************80

double p07_exact ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P07_EXACT returns the exact integral for problem 07.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Output, double P07_EXACT, the exact value of the integral.
//
{
  double exact;

  exact = 1.0;

  return exact;
}
//****************************************************************************80

double *p07_f ( int dim_num, int point_num, double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    P07_F evaluates the integrand for problem 07.
//
//  Discussion:
//
//    The spatial dimension DIM_NUM is arbitrary.
//
//  Region:
//
//    0 <= X(1:DIM_NUM) <= 1
//
//  Integrand:
//
//    product ( pi / 2 ) * sin ( pi * x(1:dim_num) )
//
//  Exact Integral:
//
//    1
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Philip Davis, Philip Rabinowitz,
//    Methods of Numerical Integration,
//    Second Edition,
//    Dover, 2007,
//    ISBN: 0486453391,
//    LC: QA299.3.D28.
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Input, int POINT_NUM, the number of points.
//
//    Input, double X[DIM_NUM*POINT_NUM], the evaluation points.
//
//    Output, double P07_F[POINT_NUM], the integrand values.
//
{
  int dim;
  int inc;
  double pi = 3.141592653589793;
  int point;
  double *value;

  value = new double[point_num];

  for ( point = 0; point < point_num; point++ )
  {
    value[point] = 1.0;
    for ( dim = 0; dim < dim_num; dim++ )
    {
      value[point] = value[point] 
        * ( 0.5 * pi * sin ( pi * x[dim+point*dim_num] ) );
    }
  }

  inc = point_num;
  p07_i4 ( 'I', '#', &inc );

  return value;
}
//****************************************************************************80

void p07_i4 ( char action, char name, int *value )

//****************************************************************************80
//
//  Purpose:
//
//    P07_I4 sets or gets I4 parameters for problem 07.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION,
//    'D' to set a parmater to its default value;
//    'S' to set a parameter to VALUE,
//    'G' to set VALUE to the parameter's value,
//    'I' to increment a parameter.
//
//    Input, char NAME, the name of the variable.
//    '#' is the number of calls to the integrand routine.
//
//    Input/output, int *VALUE.
//    * If ACTION = 'I', then VALUE is an input quantity, and is the
//      new value to be added to NAME.
//    * If ACTION = 'S', then VALUE is an input quantity, and is the
//      new value to be assigned to NAME.
//    * If ACTION = 'G', then VALUE is an output quantity, and is the
//      current value of NAME.
//
{
  static int calls = 0;

  if ( action == 'D' )
  {
    if ( name == '#' || name == '*' )
    {
      calls = 0;
    }
  }
  else if ( action == 'G' )
  {
    if ( name == '#' )
    {
      *value = calls;
    }
    else
    {
      cout << "\n";
      cout << "P07_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'I' )
  {
    if ( name == '#' )
    {
      calls = calls + *value;
    }
    else
    {
      cout << "\n";
      cout << "P07_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == '#' )
    {
      calls = *value;
    }
    else
    {
      cout << "\n";
      cout << "P07_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P07_I4 - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

void p07_lim ( int dim_num, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    P07_LIM returns the integration limits for problem 07.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the argument.
//
//    Output, double A[DIM_NUM], B[DIM_NUM], the lower and upper 
//    limits of integration.
//    Note that if A = -HUGE(A), the lower limit is
//    actually negative infinity, and if B = HUGE(B), the upper limit
//    is actually infinity.
//
{
  int dim;

  for ( dim = 0; dim < dim_num; dim++ )
  {
    a[dim] = 0.0;
  }
  for ( dim = 0; dim < dim_num; dim++ )
  {
    b[dim] = 1.0;
  }

  return;
}
//****************************************************************************80

char *p07_name ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P07_NAME returns the name of problem 07.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P07_NAME, the name of the problem.
//
{
  char *value;

  value = new char[7];

  strcpy ( value, "DR4062" );

  return value;
}
//****************************************************************************80

char *p07_region ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P07_REGION returns the name of the integration region for problem 07.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P07_REGION, the name of the integration region.
//
{
  char *value;

  value = new char[4];

  strcpy ( value, "BOX" );

  return value;
}
//****************************************************************************80

void p07_title ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P07_TITLE prints a title for problem 07.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
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
  cout << "\n";
  cout << "Problem 07\n";
  cout << "  Name:       DR4062\n";
  cout << "              Davis, Rabinowitz, page 406, #2.\n";
  cout << "  Region:     0 <= X(i) <= 1\n";
  cout << "  Integrand:  F(X) = product ( pi * sin ( pi * X(i) ) / 2 )\n";

  return;
}
//****************************************************************************80

void p08_default ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P08_DEFAULT sets default values for problem 08.
//
//  Discussion:
//
//    If a problem uses vector parameters, then the spatial dimension
//    DIM_NUM is needed as input, so that the vector parameters can be
//    properly dimensioned.
//
//    Every problem keeps a count of the number of function calls.  Calling
//    this routine causes that count to be reset to 0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the problem.
//
{
  int i4;

  p08_i4 ( 'D', '*', &i4 );

  return;
}
//****************************************************************************80

double p08_exact ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P08_EXACT returns the exact integral for problem 08.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Output, double P08_EXACT, the exact value of the integral.
//
{
  double exact;
  double pi = 3.141592653589793;

  exact = 0.5 - sqrt ( pow ( 2.0, 3 * dim_num ) ) 
    * cos ( 0.25 * pi * ( double ) ( dim_num ) ) 
    / ( 2.0 * pow ( pi, dim_num ) );

  return exact;
}
//****************************************************************************80

double *p08_f ( int dim_num, int point_num, double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    P08_F evaluates the integrand for problem 08.
//
//  Discussion:
//
//    The spatial dimension DIM_NUM is arbitrary.
//
//  Region:
//
//    0 <= X(1:DIM_NUM) <= 1
//
//  Integrand:
//
//    ( sin ( (pi/4) * sum ( x(1:dim_num) ) ) )**2
//
//  Exact Integral:
//
//    1/2 - sqrt ( 2**(3*DIM_NUM) ) * cos ( DIM_NUM * pi / 4 ) ) / ( 2 * pi**DIM_NUM )
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Richard Crandall,
//    Projects in Scientific Computing,
//    Springer, 2000,
//    ISBN: 0387950095,
//    LC: Q183.9.C733.
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Input, int POINT_NUM, the number of points.
//
//    Input, double X[DIM_NUM*POINT_NUM], the evaluation points.
//
//    Output, double P08_F[POINT_NUM], the integrand values.
//
{
  int inc;
  double pi = 3.141592653589793;
  int point;
  double *value;

  value = new double[point_num];

  for ( point = 0; point < point_num; point++ )
  {
    value[point] = pow ( sin ( pi 
      * r8vec_sum ( dim_num, x+point*dim_num ) / 4.0 ), 2 );
  }

  inc = point_num;
  p08_i4 ( 'I', '#', &inc );

  return value;
}
//****************************************************************************80

void p08_i4 ( char action, char name, int *value )

//****************************************************************************80
//
//  Purpose:
//
//    P08_I4 sets or gets I4 parameters for problem 08.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION,
//    'D' to set a parmater to its default value;
//    'S' to set a parameter to VALUE,
//    'G' to set VALUE to the parameter's value,
//    'I' to increment a parameter.
//
//    Input, char NAME, the name of the variable.
//    '#' is the number of calls to the integrand routine.
//
//    Input/output, int *VALUE.
//    * If ACTION = 'I', then VALUE is an input quantity, and is the
//      new value to be added to NAME.
//    * If ACTION = 'S', then VALUE is an input quantity, and is the
//      new value to be assigned to NAME.
//    * If ACTION = 'G', then VALUE is an output quantity, and is the
//      current value of NAME.
//
{
  static int calls = 0;

  if ( action == 'D' )
  {
    if ( name == '#' || name == '*' )
    {
      calls = 0;
    }
  }
  else if ( action == 'G' )
  {
    if ( name == '#' )
    {
      *value = calls;
    }
    else
    {
      cout << "\n";
      cout << "P08_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'I' )
  {
    if ( name == '#' )
    {
      calls = calls + *value;
    }
    else
    {
      cout << "\n";
      cout << "P08_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == '#' )
    {
      calls = *value;
    }
    else
    {
      cout << "\n";
      cout << "P08_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P08_I4 - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

void p08_lim ( int dim_num, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    P08_LIM returns the integration limits for problem 08.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the argument.
//
//    Output, double A[DIM_NUM], B[DIM_NUM], the lower and upper limits
//    of integration.
//    Note that if A = -HUGE(A), the lower limit is
//    actually negative infinity, and if B = HUGE(B), the upper limit
//    is actually infinity.
//
{
  int dim;

  for ( dim = 0; dim < dim_num; dim++ )
  {
    a[dim] = 0.0;
  }
  for ( dim = 0; dim < dim_num; dim++ )
  {
    b[dim] = 1.0;
  }

  return;
}
//****************************************************************************80

char *p08_name ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P08_NAME returns the name of problem 08.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P08_NAME, the name of the problem.
//
{
  char *value;

  value = new char[5];

  strcpy ( value, "RC01" );

  return value;
}
//****************************************************************************80

char *p08_region ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P08_REGION returns the name of the integration region for problem 08.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P08_REGION, the name of the integration region.
//
{
  char *value;

  value = new char[4];

  strcpy ( value, "BOX" );

  return value;
}
//****************************************************************************80

void p08_title ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P08_TITLE prints a title for problem 08.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
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
  cout << "\n";
  cout << "Problem 08\n";
  cout << "  Name:       RC01\n";
  cout << "              Crandall, page 49, #1\n";
  cout << "  Region:     0 <= X(i) <= 1\n";
  cout << "  Integrand:  F(X) = sin^2 ( pi/4 * sum ( X(i) ) )\n";

  return;
}
//****************************************************************************80

void p09_default ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P09_DEFAULT sets default values for problem 09.
//
//  Discussion:
//
//    If a problem uses vector parameters, then the spatial dimension
//    DIM_NUM is needed as input, so that the vector parameters can be
//    properly dimensioned.
//
//    Every problem keeps a count of the number of function calls.  Calling
//    this routine causes that count to be reset to 0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the problem.
//
{
  int i4;

  p09_i4 ( 'D', '*', &i4 );
  p09_r8vec ( 'D', '*', dim_num, NULL );

  return;
}
//****************************************************************************80

double p09_exact ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P09_EXACT returns the exact integral for problem 09.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Output, double P09_EXACT, the exact value of the integral.
//
{
  double *c;
  int dim;
  double exact;

  c = new double[dim_num];
  p09_r8vec ( 'G', 'C', dim_num, c );

  exact = 1.0;
  for ( dim = 0; dim < dim_num; dim++ )
  {
    exact = exact * ( ( exp ( c[dim] ) - 1.0 ) / c[dim] );
  }

  delete [] c;

  return exact;
}
//****************************************************************************80

double *p09_f ( int dim_num, int point_num, double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    P09_F evaluates the integrand for problem 09.
//
//  Discussion:
//
//    Thanks to Jeffrey Sax of Extreme Optimization for pointing out a
//    mistake in a previous version of this function, 28 May 2008.
//
//    The spatial dimension DIM_NUM is arbitrary.
//
//  Region:
//
//    0 <= X(1:DIM_NUM) <= 1
//
//  Integral Parameters:
//
//    The integral depends on a parameter vector C(1:N).
//
//    The reference suggests choosing C at random in [0,1]
//    and then multiplying by the normalizing factor (60/N).
//
//    To get or set C, call P09_R8VEC.
//
//    The default value of C(1:N) is 1/N.
//
//  Integrand:
//
//    exp ( sum ( c(1:dim_num) * x(1:dim_num) ) )
//
//  Exact Integral:
//
//    product ( ( exp ( c(1:n) - 1 ) / c(1:n) )
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    28 May 2008
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    [Integral #7]
//    Thomas Patterson,
//    On the Construction of a Practical Ermakov-Zolotukhin 
//    Multiple Integrator,
//    in Numerical Integration: Recent Developments, Software
//    and Applications,
//    edited by Patrick Keast and Graeme Fairweather,
//    D. Reidel, 1987, pages 269-290.
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Input, int POINT_NUM, the number of points.
//
//    Input, double X[DIM_NUM*POINT_NUM], the evaluation points.
//
//    Output, double P09_F[POINT_NUM], the integrand values.
//
{
  double *c;
  int inc;
  int point;
  double *value;

  c = new double[dim_num];
  p09_r8vec ( 'G', 'C', dim_num, c );

  value = new double[point_num];

  for ( point = 0; point < point_num; point++ )
  {
    value[point] = exp ( r8vec_dot ( dim_num, c, x+point*dim_num ) );
  }

  inc = point_num;
  p09_i4 ( 'I', '#', &inc );

  delete [] c;

  return value;
}
//****************************************************************************80

void p09_i4 ( char action, char name, int *value )

//****************************************************************************80
//
//  Purpose:
//
//    P09_I4 sets or gets I4 parameters for problem 09.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION,
//    'D' to set a parmater to its default value;
//    'S' to set a parameter to VALUE,
//    'G' to set VALUE to the parameter's value,
//    'I' to increment a parameter.
//
//    Input, char NAME, the name of the variable.
//    '#' is the number of calls to the integrand routine.
//
//    Input/output, int *VALUE.
//    * If ACTION = 'I', then VALUE is an input quantity, and is the
//      new value to be added to NAME.
//    * If ACTION = 'S', then VALUE is an input quantity, and is the
//      new value to be assigned to NAME.
//    * If ACTION = 'G', then VALUE is an output quantity, and is the
//      current value of NAME.
//
{
  static int calls = 0;

  if ( action == 'D' )
  {
    if ( name == '#' || name == '*' )
    {
      calls = 0;
    }
  }
  else if ( action == 'G' )
  {
    if ( name == '#' )
    {
      *value = calls;
    }
    else
    {
      cout << "\n";
      cout << "P09_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'I' )
  {
    if ( name == '#' )
    {
      calls = calls + *value;
    }
    else
    {
      cout << "\n";
      cout << "P09_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == '#' )
    {
      calls = *value;
    }
    else
    {
      cout << "\n";
      cout << "P09_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P09_I4 - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

void p09_lim ( int dim_num, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    P09_LIM returns the integration limits for problem 09.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the argument.
//
//    Output, double A[DIM_NUM], B[DIM_NUM], the lower and upper limits
//    of integration.
//    Note that if A = -HUGE(A), the lower limit is
//    actually negative infinity, and if B = HUGE(B), the upper limit
//    is actually infinity.
//
{
  int dim;

  for ( dim = 0; dim < dim_num; dim++ )
  {
    a[dim] = 0.0;
  }
  for ( dim = 0; dim < dim_num; dim++ )
  {
    b[dim] = 1.0;
  }

  return;
}
//****************************************************************************80

char *p09_name ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P09_NAME returns the name of problem 09.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P09_NAME, the name of the problem.
//
{
  char *value;

  value = new char[13];

  strcpy ( value, "Patterson #7" );

  return value;
}
//****************************************************************************80

void p09_r8vec ( char action, char name, int dim_num, double value[] )

//****************************************************************************80
//
//  Purpose:
//
//    P09_R8VEC sets or gets R8VEC parameters for problem 09.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION, the action.
//    'D' sets the internal value of the object to a default value.
//    If NAME = '*', then all variables are defaulted.
//    'G' means the current value of the object should be returned.
//    'R' means randomize the object and return its value.
//    'S' means the object should be set to the input VALUE.
//
//    Input, char NAME, the name of the parameter.
//    'C' is the coefficient vector.
//
//    Input, int DIM_NUM, the dimension of the object.
//
//    Input/output, double VALUE[DIM_NUM], the value of the object.
//
{
  static double *c = NULL;
  int dim;
  static int dim_num_save = 0;

  if ( dim_num_save != dim_num )
  {
    dim_num_save = 0;
    if ( c )
    {
      delete [] c;
      c = NULL;
    }
  }

  if ( dim_num_save == 0 )
  {
    dim_num_save = dim_num;
    c = new double[dim_num_save];
  }

  if ( action == 'D' )
  {
    if ( name == 'C' || name == '*' )
    {
      for ( dim = 0; dim < dim_num; dim++ )
      {
        c[dim] = 1.0 / ( double ) ( dim_num );
      }
    }
  }
  else if ( action == 'G' )
  {
    if ( name == 'C' )
    {
      r8vec_copy ( dim_num, c, value );
    }
    else
    {
      cout << "\n";
      cout << "P09_R8VEC - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'R' )
  {
    if ( name == 'C' )
    {
      for ( dim = 0; dim < dim_num; dim++ )
      {
        c[dim] = ( double ) rand ( ) * 60.0 / ( double ) RAND_MAX
          / ( double ) ( dim_num );
      }
      r8vec_copy ( dim_num, c, value );
    }
    else
    {
      cout << "\n";
      cout << "P09_R8VEC - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == 'C' )
    {
      r8vec_copy ( dim_num, value, c );
    }
    else
    {
      cout << "\n";
      cout << "P09_R8VEC - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P09_R8VEC - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

char *p09_region ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P09_REGION returns the name of the integration region for problem 09.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P09_REGION, the name of the integration region.
//
{
  char *value;

  value = new char[4];

  strcpy ( value, "BOX" );

  return value;
}
//****************************************************************************80

void p09_title ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P09_TITLE prints a title for problem 09.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
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
  cout << "\n";
  cout << "Problem 09\n";
  cout << "  Name:       Patterson #7\n";
  cout << "  Region:     0 <= X(i) <= 1\n";
  cout << "  Integrand:  F(X) = exp ( sum ( C(i) * X(i) ) )\n";
  cout << "  Parameters:\n";
  cout << "              C(1:DIM_NUM) defaults to 1/DIM_NUM.\n";

  return;
}
//****************************************************************************80

void p10_default ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P10_DEFAULT sets default values for problem 10.
//
//  Discussion:
//
//    If a problem uses vector parameters, then the spatial dimension
//    DIM_NUM is needed as input, so that the vector parameters can be
//    properly dimensioned.
//
//    Every problem keeps a count of the number of function calls.  Calling
//    this routine causes that count to be reset to 0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the problem.
//
{
  int i4;

  p10_i4 ( 'D', '*', &i4 );

  return;
}
//****************************************************************************80

double p10_exact ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P10_EXACT returns the exact integral for problem 10.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Output, double P10_EXACT, the exact value of the integral.
//
{
  double exact;

  exact = ( double ) ( dim_num ) / 4.0;

  return exact;
}
//****************************************************************************80

double *p10_f ( int dim_num, int point_num, double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    P10_F evaluates the integrand for problem 10.
//
//  Discussion:
//
//    The spatial dimension DIM_NUM is arbitrary.
//
//  Region:
//
//    0 <= X(1:DIM_NUM) <= 1
//
//  Integrand:
//
//    sum ( abs ( x(1:dim_num) - 0.5 ) )
//
//  Exact Integral:
//
//    DIM_NUM / 4
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Philip Davis, Philip Rabinowitz,
//    Methods of Numerical Integration,
//    Second Edition,
//    Dover, 2007,
//    ISBN: 0486453391,
//    LC: QA299.3.D28.
//
//    [Integral #4],
//    Thomas Patterson,
//    On the Construction of a Practical Ermakov-Zolotukhin 
//    Multiple Integrator,
//    in Numerical Integration: Recent Developments, Software
//    and Applications,
//    edited by Patrick Keast, Graeme Fairweather,
//    D. Reidel, 1987, pages 269-290.
//
//    Arthur Stroud,
//    Approximate Calculation of Multiple Integrals,
//    Prentice Hall, 1971,
//    ISBN: 0130438936,
//    LC: QA311.S85.
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Input, int POINT_NUM, the number of points.
//
//    Input, double X[DIM_NUM*POINT_NUM], the evaluation points.
//
//    Output, double P10_F[POINT_NUM], the integrand values.
//
{
  int dim;
  int inc;
  int point;
  double *value;

  value = new double[point_num];

  for ( point = 0; point < point_num; point++ )
  {
    value[point] = 0.0;
    for ( dim = 0; dim < dim_num; dim++ )
    {
      value[point] = value[point] + r8_abs ( x[dim+point*dim_num] - 0.5 );
    }
  }

  inc = point_num;
  p10_i4 ( 'I', '#', &inc );

  return value;
}
//****************************************************************************80

void p10_i4 ( char action, char name, int *value )

//****************************************************************************80
//
//  Purpose:
//
//    P10_I4 sets or gets I4 parameters for problem 10.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION,
//    'D' to set a parmater to its default value;
//    'S' to set a parameter to VALUE,
//    'G' to set VALUE to the parameter's value,
//    'I' to increment a parameter.
//
//    Input, char NAME, the name of the variable.
//    '#' is the number of calls to the integrand routine.
//
//    Input/output, int *VALUE.
//    * If ACTION = 'I', then VALUE is an input quantity, and is the
//      new value to be added to NAME.
//    * If ACTION = 'S', then VALUE is an input quantity, and is the
//      new value to be assigned to NAME.
//    * If ACTION = 'G', then VALUE is an output quantity, and is the
//      current value of NAME.
//
{
  static int calls = 0;

  if ( action == 'D' )
  {
    if ( name == '#' || name == '*' )
    {
      calls = 0;
    }
  }
  else if ( action == 'G' )
  {
    if ( name == '#' )
    {
      *value = calls;
    }
    else
    {
      cout << "\n";
      cout << "P10_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'I' )
  {
    if ( name == '#' )
    {
      calls = calls + *value;
    }
    else
    {
      cout << "\n";
      cout << "P10_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == '#' )
    {
      calls = *value;
    }
    else
    {
      cout << "\n";
      cout << "P10_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P10_I4 - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

void p10_lim ( int dim_num, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    P10_LIM returns the integration limits for problem 10.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the argument.
//
//    Output, double A[DIM_NUM], B[DIM_NUM], the lower and upper
//    limits of integration.
//    Note that if A = -HUGE(A), the lower limit is
//    actually negative infinity, and if B = HUGE(B), the upper limit
//    is actually infinity.
//
{
  int dim;

  for ( dim = 0; dim < dim_num; dim++ )
  {
    a[dim] = 0.0;
  }
  for ( dim = 0; dim < dim_num; dim++ )
  {
    b[dim] = 1.0;
  }

  return;
}
//****************************************************************************80

char *p10_name ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P10_NAME returns the name of problem 10.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P10_NAME, the name of the problem.
//
{
  char *value;

  value = new char[13];

  strcpy ( value, "Patterson #4" );

  return value;
}
//****************************************************************************80

char *p10_region ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P10_REGION returns the name of the integration region for problem 10.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P10_REGION, the name of the integration region.
//
{
  char *value;

  value = new char[4];

  strcpy ( value, "BOX" );

  return value;
}
//****************************************************************************80

void p10_title ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P10_TITLE prints a title for problem 10.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
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
  cout << "\n";
  cout << "Problem 10\n";
  cout << "  Name:       Patterson #4\n";
  cout << "              Stroud, page ?\n";
  cout << "  Region:     0 <= X(i) <= 1\n";
  cout << "  Integrand:  F(X) = sum ( abs ( X(i) - 0.5 ) )\n";

  return;
}
//****************************************************************************80

void p11_default ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P11_DEFAULT sets default values for problem 11.
//
//  Discussion:
//
//    If a problem uses vector parameters, then the spatial dimension
//    DIM_NUM is needed as input, so that the vector parameters can be
//    properly dimensioned.
//
//    Every problem keeps a count of the number of function calls.  Calling
//    this routine causes that count to be reset to 0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the problem.
//
{
  int i4;

  p11_i4 ( 'D', '*', &i4 );

  return;
}
//****************************************************************************80

double p11_exact ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P11_EXACT returns the exact integral for problem 11.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Output, double P11_EXACT, the exact value of the integral.
//
{
  double exact;

  exact = pow ( exp ( 1.0 ) - 1.0, dim_num );

  return exact;
}
//****************************************************************************80

double *p11_f ( int dim_num, int point_num, double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    P11_F evaluates the integrand for problem 11.
//
//  Discussion:
//
//    The spatial dimension DIM_NUM is arbitrary.
//
//  Region:
//
//    0 <= X(1:DIM_NUM) <= 1
//
//  Integrand:
//
//    exp ( sum ( abs ( 2 * X(1:DIM_NUM) - 1 ) ) )
//
//  Exact Integral:
//
//    ( E - 1.0 )**DIM_NUM
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    [Integral #2],
//    Thomas Patterson,
//    On the Construction of a Practical Ermakov-Zolotukhin 
//    Multiple Integrator,
//    in Numerical Integration: Recent Developments, Software
//    and Applications,
//    edited by Patrick Keast and Graeme Fairweather,
//    D. Reidel, 1987, pages 269-290.
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Input, int POINT_NUM, the number of points.
//
//    Input, double X[DIM_NUM*POINT_NUM], the evaluation points.
//
//    Output, double P11_F[POINT_NUM], the integrand values.
//
{
  int dim;
  int inc;
  int point;
  double *value;

  value = new double[point_num];

  for ( point = 0; point < point_num; point++ )
  {
    value[point] = 0.0;
    for ( dim = 0; dim < dim_num; dim++ )
    {
      value[point] = value[point] 
        + r8_abs ( 2.0 * x[dim+point*dim_num] - 1.0 );
    }
    value[point] = exp ( value[point] );
  }

  inc = point_num;
  p11_i4 ( 'I', '#', &inc );

  return value;
}
//****************************************************************************80

void p11_i4 ( char action, char name, int *value )

//****************************************************************************80
//
//  Purpose:
//
//    P11_I4 sets or gets I4 parameters for problem 11.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION,
//    'D' to set a parmater to its default value;
//    'S' to set a parameter to VALUE,
//    'G' to set VALUE to the parameter's value,
//    'I' to increment a parameter.
//
//    Input, char NAME, the name of the variable.
//    '#' is the number of calls to the integrand routine.
//
//    Input/output, int *VALUE.
//    * If ACTION = 'I', then VALUE is an input quantity, and is the
//      new value to be added to NAME.
//    * If ACTION = 'S', then VALUE is an input quantity, and is the
//      new value to be assigned to NAME.
//    * If ACTION = 'G', then VALUE is an output quantity, and is the
//      current value of NAME.
//
{
  static int calls = 0;

  if ( action == 'D' )
  {
    if ( name == '#' || name == '*' )
    {
      calls = 0;
    }
  }
  else if ( action == 'G' )
  {
    if ( name == '#' )
    {
      *value = calls;
    }
    else
    {
      cout << "\n";
      cout << "P11_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'I' )
  {
    if ( name == '#' )
    {
      calls = calls + *value;
    }
    else
    {
      cout << "\n";
      cout << "P11_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == '#' )
    {
      calls = *value;
    }
    else
    {
      cout << "\n";
      cout << "P11_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P11_I4 - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

void p11_lim ( int dim_num, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    P11_LIM returns the integration limits for problem 11.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the argument.
//
//    Output, double A[DIM_NUM], B[DIM_NUM], the lower and upper
//    limits of integration.
//    Note that if A = -HUGE(A), the lower limit is
//    actually negative infinity, and if B = HUGE(B), the upper limit
//    is actually infinity.
//
{
  int dim;

  for ( dim = 0; dim < dim_num; dim++ )
  {
    a[dim] = 0.0;
  }
  for ( dim = 0; dim < dim_num; dim++ )
  {
    b[dim] = 1.0;
  }

  return;
}
//****************************************************************************80

char *p11_name ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P11_NAME returns the name of problem 11.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P11_NAME, the name of the problem.
//
{
  char *value;

  value = new char[31];

  strcpy ( value, "Patterson #2, exp(sum(abs(X)))" );

  return value;
}
//****************************************************************************80

char *p11_region ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P11_REGION returns the name of the integration region for problem 11.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P11_REGION, the name of the integration region.
//
{
  char *value;

  value = new char[4];

  strcpy ( value, "BOX" );

  return value;
}
//****************************************************************************80

void p11_title ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P11_TITLE prints a title for problem 11.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
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
  cout << "\n";
  cout << "Problem 11\n";
  cout << "  Name:       Patterson #2, exp(sum(abs(X)))\n";
  cout << "  Region:     0 <= X(i) <= 1\n";
  cout << "  Integrand:  F(X) = exp ( sum ( abs ( X(i) )))\n";

  return;
}
//****************************************************************************80

void p12_default ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P12_DEFAULT sets default values for problem 12.
//
//  Discussion:
//
//    If a problem uses vector parameters, then the spatial dimension
//    DIM_NUM is needed as input, so that the vector parameters can be
//    properly dimensioned.
//
//    Every problem keeps a count of the number of function calls.  Calling
//    this routine causes that count to be reset to 0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the problem.
//
{
  int i4;

  p12_i4 ( 'D', '*', &i4 );

  return;
}
//****************************************************************************80

double p12_exact ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P12_EXACT returns the exact integral for problem 12.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Output, double P12_EXACT, the exact value of the integral.
//
{
  double exact;
  int i;

  exact = 1.0;
  for ( i = 1; i <= dim_num; i++ )
  {
    exact = exact * sin ( ( double ) ( i ) );
  }

  return exact;
}
//****************************************************************************80

double *p12_f ( int dim_num, int point_num, double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    P12_F evaluates the integrand for problem 12.
//
//  Discussion:
//
//    The highly oscillatory nature of the integrand makes this
//    a difficult and perhaps even dubious test.
//
//    The spatial dimension DIM_NUM is arbitrary.
//
//  Region:
//
//    0 <= X(1:DIM_NUM) <= 1
//
//  Integrand:
//
//    product ( 1 <= i <= dim_num ) ( i * cos ( i * x(i) ) )
//
//  Exact Integral:
//
//    product ( 1 <= I <= DIM_NUM ) sin ( i )
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Paul Bratley, Bennett Fox, Harald Niederreiter,
//    Implementation and Tests of Low-Discrepancy Sequences,
//    ACM Transactions on Modeling and Computer Simulation,
//    Volume 2, Number 3, July 1992, pages 195-213.
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Input, int POINT_NUM, the number of points.
//
//    Input, double X[DIM_NUM*POINT_NUM], the evaluation points.
//
//    Output, double P12_F[POINT_NUM], the integrand values.
//
{
  int dim;
  int inc;
  int point;
  double *value;

  value = new double[point_num];

  for ( point = 0; point < point_num; point++ )
  {
    value[point] = 1.0;
    for ( dim = 0; dim < dim_num; dim++ )
    {
      value[point] = value[point] * ( double ) ( dim + 1 ) 
        * cos ( ( double ) ( dim + 1 ) * x[dim+point*dim_num] );
    }
  }

  inc = point_num;
  p12_i4 ( 'I', '#', &inc );

  return value;
}
//****************************************************************************80

void p12_i4 ( char action, char name, int *value )

//****************************************************************************80
//
//  Purpose:
//
//    P12_I4 sets or gets I4 parameters for problem 12.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION,
//    'D' to set a parmater to its default value;
//    'S' to set a parameter to VALUE,
//    'G' to set VALUE to the parameter's value,
//    'I' to increment a parameter.
//
//    Input, char NAME, the name of the variable.
//    '#' is the number of calls to the integrand routine.
//
//    Input/output, int *VALUE.
//    * If ACTION = 'I', then VALUE is an input quantity, and is the
//      new value to be added to NAME.
//    * If ACTION = 'S', then VALUE is an input quantity, and is the
//      new value to be assigned to NAME.
//    * If ACTION = 'G', then VALUE is an output quantity, and is the
//      current value of NAME.
//
{
  static int calls = 0;

  if ( action == 'D' )
  {
    if ( name == '#' || name == '*' )
    {
      calls = 0;
    }
  }
  else if ( action == 'G' )
  {
    if ( name == '#' )
    {
      *value = calls;
    }
    else
    {
      cout << "\n";
      cout << "P12_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'I' )
  {
    if ( name == '#' )
    {
      calls = calls + *value;
    }
    else
    {
      cout << "\n";
      cout << "P12_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == '#' )
    {
      calls = *value;
    }
    else
    {
      cout << "\n";
      cout << "P12_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P12_I4 - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

void p12_lim ( int dim_num, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    P12_LIM returns the integration limits for problem 12.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the argument.
//
//    Output, double A[DIM_NUM], B[DIM_NUM], the lower and upper
//    limits of integration.
//    Note that if A = -HUGE(A), the lower limit is
//    actually negative infinity, and if B = HUGE(B), the upper limit
//    is actually infinity.
//
{
  int dim;

  for ( dim = 0; dim < dim_num; dim++ )
  {
    a[dim] = 0.0;
  }
  for ( dim = 0; dim < dim_num; dim++ )
  {
    b[dim] = 1.0;
  }

  return;
}
//****************************************************************************80

char *p12_name ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P12_NAME returns the name of problem 12.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P12_NAME, the name of the problem.
//
{
  char *value;

  value = new char[6];

  strcpy ( value, "BFN02" );

  return value;
}
//****************************************************************************80

char *p12_region ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P12_REGION returns the name of the integration region for problem 12.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P12_REGION, the name of the integration region.
//
{
  char *value;

  value = new char[4];

  strcpy ( value, "BOX" );

  return value;
}
//****************************************************************************80

void p12_title ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P12_TITLE prints a title for problem 12.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
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
  cout << "\n";
  cout << "Problem 12\n";
  cout << "  Name:       BFN02\n";
  cout << "              Bratley, Fox, Niederreiter, #2\n";
  cout << "  Region:     0 <= X(i) <= 1\n";
  cout << "  Integrand:  F(X) = product ( i * cos ( X(i) ) )\n";

  return;
}
//****************************************************************************80

void p13_default ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P13_DEFAULT sets default values for problem 13.
//
//  Discussion:
//
//    If a problem uses vector parameters, then the spatial dimension
//    DIM_NUM is needed as input, so that the vector parameters can be
//    properly dimensioned.
//
//    Every problem keeps a count of the number of function calls.  Calling
//    this routine causes that count to be reset to 0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the problem.
//
{
  int i4;

  p13_i4 ( 'D', '*', &i4 );

  return;
}
//****************************************************************************80

double p13_exact ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P13_EXACT returns the exact integral for problem 13.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Output, double P13_EXACT, the exact value of the integral.
//
{
  double exact;

  exact = 0.0;

  return exact;
}
//****************************************************************************80

double *p13_f ( int dim_num, int point_num, double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    P13_F evaluates the integrand for problem 13.
//
//  Discussion:
//
//    The spatial dimension DIM_NUM is arbitrary.
//
//  Region:
//
//    0 <= X(1:DIM_NUM) <= 1
//
//  Integrand:
//
//    product ( 1 <= i <= dim_num ) t(n(i))(2*x(i)-1)
//
//    where T(N)(X) is the Chebyshev polynomial of order N,
//    and N(I) = mod ( i, 4 ) + 1.
//
//  Exact Integral:
//
//    0
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Paul Bratley, Bennett Fox, Harald Niederreiter,
//    Implementation and Tests of Low-Discrepancy Sequences,
//    ACM Transactions on Modeling and Computer Simulation,
//    Volume 2, Number 3, July 1992, pages 195-213.
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Input, int POINT_NUM, the number of points.
//
//    Input, double X[DIM_NUM*POINT_NUM], the evaluation points.
//
//    Output, double P13_F[POINT_NUM], the integrand values.
//
{
  int dim;
  double factor;
  int inc;
  int k;
  int point;
  double t;
  double *value;

  value = new double[point_num];

  for ( point = 0; point < point_num; point++ )
  {
    value[point] = 1.0;
    for ( dim = 0; dim < dim_num; dim++ )
    {
      t = 2.0 * x[dim+point*dim_num] - 1.0;
      k = ( dim + 1 ) % 4;

      if ( k == 1 )
      {
        factor = t;
      }
      else if ( k == 2 )
      {
        factor = 2.0 * t - 1.0;
      }
      else if ( k == 3 )
      {
        factor = ( 4.0 * t - 3.0 ) * t;
      }
      else if ( k == 4 )
      {
        factor = ( 8.0 * t - 8.0 * t + 1.0 );
      }
      value[point] = value[point] * factor;
    }
  }

  inc = point_num;
  p13_i4 ( 'I', '#', &inc );

  return value;
}
//****************************************************************************80

void p13_i4 ( char action, char name, int *value )

//****************************************************************************80
//
//  Purpose:
//
//    P13_I4 sets or gets I4 parameters for problem 13.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION,
//    'D' to set a parmater to its default value;
//    'S' to set a parameter to VALUE,
//    'G' to set VALUE to the parameter's value,
//    'I' to increment a parameter.
//
//    Input, char NAME, the name of the variable.
//    '#' is the number of calls to the integrand routine.
//
//    Input/output, int *VALUE.
//    * If ACTION = 'I', then VALUE is an input quantity, and is the
//      new value to be added to NAME.
//    * If ACTION = 'S', then VALUE is an input quantity, and is the
//      new value to be assigned to NAME.
//    * If ACTION = 'G', then VALUE is an output quantity, and is the
//      current value of NAME.
//
{
  static int calls = 0;

  if ( action == 'D' )
  {
    if ( name == '#' || name == '*' )
    {
      calls = 0;
    }
  }
  else if ( action == 'G' )
  {
    if ( name == '#' )
    {
      *value = calls;
    }
    else
    {
      cout << "\n";
      cout << "P13_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'I' )
  {
    if ( name == '#' )
    {
      calls = calls + *value;
    }
    else
    {
      cout << "\n";
      cout << "P13_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == '#' )
    {
      calls = *value;
    }
    else
    {
      cout << "\n";
      cout << "P13_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P13_I4 - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

void p13_lim ( int dim_num, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    P13_LIM returns the integration limits for problem 13.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the argument.
//
//    Output, double A[DIM_NUM], B[DIM_NUM], the lower and upper
//    limits of integration.
//    Note that if A = -HUGE(A), the lower limit is
//    actually negative infinity, and if B = HUGE(B), the upper limit
//    is actually infinity.
//
{
  int dim;

  for ( dim = 0; dim < dim_num; dim++ )
  {
    a[dim] = 0.0;
  }
  for ( dim = 0; dim < dim_num; dim++ )
  {
    b[dim] = 1.0;
  }

  return;
}
//****************************************************************************80

char *p13_name ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P13_NAME returns the name of problem 13.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P13_NAME, the name of the problem.
//
{
  char *value;

  value = new char[6];

  strcpy ( value, "BFN03" );

  return value;
}
//****************************************************************************80

char *p13_region ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P13_REGION returns the name of the integration region for problem 13.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P13_REGION, the name of the integration region.
//
{
  char *value;

  value = new char[4];

  strcpy ( value, "BOX" );

  return value;
}
//****************************************************************************80

void p13_title ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P13_TITLE prints a title for problem 13.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
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
  cout << "\n";
  cout << "Problem 13\n";
  cout << "  Name:       BFN03\n";
  cout << "              Bratley, Fox, Niederreiter, #3\n";
  cout << "  Region:     0 <= X(i) <= 1\n";
  cout << "  Integrand:  F(X) = product ( low order Chebyshevs )\n";

  return;
}
//****************************************************************************80

void p14_default ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P14_DEFAULT sets default values for problem 14.
//
//  Discussion:
//
//    If a problem uses vector parameters, then the spatial dimension
//    DIM_NUM is needed as input, so that the vector parameters can be
//    properly dimensioned.
//
//    Every problem keeps a count of the number of function calls.  Calling
//    this routine causes that count to be reset to 0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the problem.
//
{
  int i4;

  p14_i4 ( 'D', '*', &i4 );

  return;
}
//****************************************************************************80

double p14_exact ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P14_EXACT returns the exact integral for problem 14.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Output, double P14_EXACT, the exact value of the integral.
//
{
  double exact;

  exact = ( - 1.0 / 3.0 ) * ( 1.0 - pow ( -1.0 / 2.0, dim_num ) );

  return exact;
}
//****************************************************************************80

double *p14_f ( int dim_num, int point_num, double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    P14_F evaluates the integrand for problem 14.
//
//  Discussion:
//
//    The spatial dimension DIM_NUM is arbitrary.
//
//  Region:
//
//    0 <= X(1:DIM_NUM) <= 1
//
//  Integrand:
//
//    sum ( 1 <= i <= dim_num ) (-1)**i * product ( 1 <= j <= i ) x(j)
//
//  Exact Integral:
//
//    -1/3 ( 1 - (-1/2)**DIM_NUM )
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Paul Bratley, Bennett Fox, Harald Niederreiter,
//    Implementation and Tests of Low-Discrepancy Sequences,
//    ACM Transactions on Modeling and Computer Simulation,
//    Volume 2, Number 3, July 1992, pages 195-213.
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Input, int POINT_NUM, the number of points.
//
//    Input, double X[DIM_NUM*POINT_NUM], the evaluation points.
//
//    Output, double P14_F[POINT_NUM], the integrand values.
//
{
  int dim;
  double factor;
  int inc;
  int point;
  double *value;

  value = new double[point_num];

  for ( point = 0; point < point_num; point++ )
  {
    value[point] = 0.0;
    factor = 1.0;

    for ( dim = 0; dim < dim_num; dim++ )
    {
      factor = - factor * x[dim+point*dim_num];
      value[point] = value[point] + factor;
    }
  }

  inc = point_num;
  p14_i4 ( 'I', '#', &inc );

  return value;
}
//****************************************************************************80

void p14_i4 ( char action, char name, int *value )

//****************************************************************************80
//
//  Purpose:
//
//    P14_I4 sets or gets I4 parameters for problem 14.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION,
//    'D' to set a parmater to its default value;
//    'S' to set a parameter to VALUE,
//    'G' to set VALUE to the parameter's value,
//    'I' to increment a parameter.
//
//    Input, char NAME, the name of the variable.
//    '#' is the number of calls to the integrand routine.
//
//    Input/output, int *VALUE.
//    * If ACTION = 'I', then VALUE is an input quantity, and is the
//      new value to be added to NAME.
//    * If ACTION = 'S', then VALUE is an input quantity, and is the
//      new value to be assigned to NAME.
//    * If ACTION = 'G', then VALUE is an output quantity, and is the
//      current value of NAME.
//
{
  static int calls = 0;

  if ( action == 'D' )
  {
    if ( name == '#' || name == '*' )
    {
      calls = 0;
    }
  }
  else if ( action == 'G' )
  {
    if ( name == '#' )
    {
      *value = calls;
    }
    else
    {
      cout << "\n";
      cout << "P14_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'I' )
  {
    if ( name == '#' )
    {
      calls = calls + *value;
    }
    else
    {
      cout << "\n";
      cout << "P14_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == '#' )
    {
      calls = *value;
    }
    else
    {
      cout << "\n";
      cout << "P14_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P14_I4 - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

void p14_lim ( int dim_num, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    P14_LIM returns the integration limits for problem 14.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the argument.
//
//    Output, double A[DIM_NUM], B[DIM_NUM], the lower and upper
//    limits of integration.
//    Note that if A = -HUGE(A), the lower limit is
//    actually negative infinity, and if B = HUGE(B), the upper limit
//    is actually infinity.
//
{
  int dim;

  for ( dim = 0; dim < dim_num; dim++ )
  {
    a[dim] = 0.0;
  }
  for ( dim = 0; dim < dim_num; dim++ )
  {
    b[dim] = 1.0;
  }

  return;
}
//****************************************************************************80

char *p14_name ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P14_NAME returns the name of problem 14.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P14_NAME, the name of the problem.
//
{
  char *value;

  value = new char[6];

  strcpy ( value, "BFN04" );

  return value;
}
//****************************************************************************80

char *p14_region ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P14_REGION returns the name of the integration region for problem 14.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P14_REGION, the name of the integration region.
//
{
  char *value;

  value = new char[4];

  strcpy ( value, "BOX" );

  return value;
}
//****************************************************************************80

void p14_title ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P14_TITLE prints a title for problem 14.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
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
  cout << "\n";
  cout << "Problem 14\n";
  cout << "  Name:       BFN04\n";
  cout << "              Bratley, Fox, Niederreiter, #4\n";
  cout << "  Region:     0 <= X(i) <= 1\n";
  cout << "  Integrand:  F(X) = sum ( -1^I * product(X(1:I)) )\n";

  return;
}
//****************************************************************************80

void p15_default ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P15_DEFAULT sets default values for problem 15.
//
//  Discussion:
//
//    If a problem uses vector parameters, then the spatial dimension
//    DIM_NUM is needed as input, so that the vector parameters can be
//    properly dimensioned.
//
//    Every problem keeps a count of the number of function calls.  Calling
//    this routine causes that count to be reset to 0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the problem.
//
{
  int i4;
  int n;

  p15_i4 ( 'D', '*', &i4 );

  n = ( 3 * dim_num ) / 2;
  p15_i4 ( 'S', 'N', &n );

  return;
}
//****************************************************************************80

double p15_exact ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P15_EXACT returns the exact integral for problem 15.
//
//  Discussion:
//
//    Thanks to Jeffrey Sax of Extreme Optimiziation for suggesting a revision 
//    of this routine to improve its clarity, 12 August 2008.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    12 August 2008
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Output, double P15_EXACT, the exact value of the integral.
//
{
  int dim;
  double exact;
  int fraction;
  int n;
  int remainder;

  p15_i4 ( 'G', 'N', &n );

  fraction = n / dim_num;
  remainder = n - fraction * dim_num;

  exact = 1.0;

  for ( dim = 0; dim < dim_num; dim++ )
  {
    if ( dim < remainder )
    {
      exact = exact / ( double ) ( fraction + 2 );
    }
    else
    {
      exact = exact / ( double ) ( fraction + 1 );
    }
  }

  return exact;
}
//****************************************************************************80

double *p15_f ( int dim_num, int point_num, double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    P15_F evaluates the integrand for problem 15.
//
//  Discussion:
//
//    The spatial dimension DIM_NUM is arbitrary.
//
//  Region:
//
//    0 <= X(1:DIM_NUM) <= 1
//
//  Integral Parameters:
//
//    N determines the order of the product.  It defaults to 1.
//    You can modify N by calling P15_I4.
//
//  Integrand:
//
//    f(x) = product ( 1 <= I <= N ) X(MOD(I-1,DIM_NUM)+1)
//
//  Exact integral:
//
//    product ( 1 / exponent(1:DIM_NUM) )
//
//    where, if I <= N - DIM_NUM * ( N/DIM_NUM),
//    
//      exponent ( I ) = ( N / dim_num ) + 2 
//
//    else
//
//      exponent ( I ) = ( N / dim_num ) + 1
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Input, int POINT_NUM, the number of points.
//
//    Input, double X[DIM_NUM*POINT_NUM], the evaluation points.
//
//    Output, double P15_F[POINT_NUM], the integrand values.
//
{
  bool any_zero;
  int dim;
  int fraction;
  int inc;
  int n;
  int point;
  int remainder;
  double *value;

  p15_i4 ( 'G', 'N', &n );

  fraction = n / dim_num;
  remainder = n - fraction * dim_num;

  value = new double[point_num];

  for ( point = 0; point < point_num; point++ )
  {
    any_zero = false;
    for ( dim = 0; dim < dim_num; dim++ )
    {
      if ( x[dim+point*dim_num] == 0.0 )
      {
        any_zero = true;
        break;
      }
    }

    if ( any_zero )
    {
      value[point] = 0.0;
    }
    else
    {
      value[point] = 1.0;

      for ( dim = 0; dim < dim_num; dim++ )
      {
        if ( dim <= remainder )
        {
          value[point] = value[point] 
            * pow ( x[dim+point*dim_num], fraction + 1 );
        }
        else if ( fraction != 0 )
        {
          value[point] = value[point] * pow ( x[dim+point*dim_num], fraction );
        }
      }
    }
  }

  inc = point_num;
  p15_i4 ( 'I', '#', &inc );

  return value;
}
//****************************************************************************80

void p15_i4 ( char action, char name, int *value )

//****************************************************************************80
//
//  Purpose:
//
//    P15_I4 sets or gets I4 parameters for problem 15.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION,
//    'D' to set a parmater to its default value;
//    'S' to set a parameter to VALUE,
//    'G' to set VALUE to the parameter's value,
//    'I' to increment a parameter.
//
//    Input, char NAME, the name of the variable.
//    '#' is the number of calls to the integrand routine.
//    'N' is the number of factors to multiply in the integrand.
//
//    Input/output, int *VALUE.
//    * If ACTION = 'I', then VALUE is an input quantity, and is the
//      new value to be added to NAME.
//    * If ACTION = 'S', then VALUE is an input quantity, and is the
//      new value to be assigned to NAME.
//    * If ACTION = 'G', then VALUE is an output quantity, and is the
//      current value of NAME.
//
{
  static int calls = 0;
  static int n = 1;

  if ( action == 'D' )
  {
    if ( name == '#' || name == '*' )
    {
      calls = 0;
    }
    if ( name == 'N' || name == '*' )
    {
      n = 1;
    }
  }
  else if ( action == 'G' )
  {
    if ( name == '#' )
    {
      *value = calls;
    }
    else if ( name == 'N' )
    {
      *value = n;
    }
    else
    {
      cout << "\n";
      cout << "P15_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'I' )
  {
    if ( name == '#' )
    {
      calls = calls + *value;
    }
    else if ( name == 'N' )
    {
      n = n + *value;
    }
    else
    {
      cout << "\n";
      cout << "P15_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == '#' )
    {
      calls = *value;
    }
    else if ( name == 'N' )
    {
      n = *value;
    }
    else
    {
      cout << "\n";
      cout << "P15_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P15_I4 - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

void p15_lim ( int dim_num, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    P15_LIM returns the integration limits for problem 15.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the argument.
//
//    Output, double A[DIM_NUM], B[DIM_NUM], the lower and upper
//    limits of integration.
//    Note that if A = -HUGE(A), the lower limit is
//    actually negative infinity, and if B = HUGE(B), the upper limit
//    is actually infinity.
//
{
  int dim;

  for ( dim = 0; dim < dim_num; dim++ )
  {
    a[dim] = 0.0;
  }
  for ( dim = 0; dim < dim_num; dim++ )
  {
    b[dim] = 1.0;
  }

  return;
}
//****************************************************************************80

char *p15_name ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P15_NAME returns the name of problem 15.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P15_NAME, the name of the problem.
//
{
  char *value;

  value = new char[27];

  strcpy ( value, "Partial product ( X(1:N) )" );

  return value;
}
//****************************************************************************80

char *p15_region ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P15_REGION returns the name of the integration region for problem 15.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P15_REGION, the name of the integration region.
//
{
  char *value;

  value = new char[4];

  strcpy ( value, "BOX" );

  return value;
}
//****************************************************************************80

void p15_title ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P15_TITLE prints a title for problem 15.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
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
  cout << "\n";
  cout << "Problem 15\n";
  cout << "  Name:       Partial product ( X(1:N) )\n";
  cout << "  Region:     0 <= X(i) <= 1\n";
  cout << "  Integrand:  F(X) = product ( X(1:N) )\n";
  cout << "  Parameters:\n";
  cout << "              N, defaults to 1\n";

  return;
}
//****************************************************************************80

void p16_default ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P16_DEFAULT sets default values for problem 16.
//
//  Discussion:
//
//    If a problem uses vector parameters, then the spatial dimension
//    DIM_NUM is needed as input, so that the vector parameters can be
//    properly dimensioned.
//
//    Every problem keeps a count of the number of function calls.  Calling
//    this routine causes that count to be reset to 0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the problem.
//
{
  int i4;

  p16_i4 ( 'D', '*', &i4 );
  p16_r8vec ( 'D', '*', dim_num, NULL );

  return;
}
//****************************************************************************80

double p16_exact ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P16_EXACT returns the exact integral for problem 16.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Output, double P16_EXACT, the exact value of the integral.
//
{
  double *a;
  double *b;
  int dim;
  double exact;
  double integral;
  double volume;
  double *z;
//
//  Get the limits of integration.
//
  a = new double[dim_num];
  b = new double[dim_num];

  p16_lim ( dim_num, a, b );
//
//  Get the location of Z.
//
  z = new double[dim_num];
  p16_r8vec ( 'G', 'Z', dim_num, z );
//
//  The value of the DIM_NUM dimensional integral can be broken down
//  into the weighted sum of 1 dimensional integrals.
//
  exact = 0.0;

  volume = 1.0;
  for ( dim = 0; dim < dim_num; dim++ )
  {
    volume = volume * ( b[dim] - a[dim] );
  }

  for ( dim = 0; dim < dim_num; dim++ )
  {
//
//  Z < A < B
//
    if ( z[dim] < a[dim] )
    {
      integral = 0.5 * ( b[dim] - a[dim] ) * ( b[dim] + a[dim] - 2.0 * z[dim] );
    }
//
//  A < Z < B
//
    else if ( z[dim] < b[dim] )
    {
      integral = 0.5 * ( pow ( b[dim] - z[dim], 2 ) 
                       + pow ( z[dim] - a[dim], 2 ) );
    }
//
//  A < B < Z
//
    else
    {
      integral = 0.5 * ( b[dim] - a[dim] ) * ( 2.0 * z[dim] - a[dim] - b[dim] );
    }

    exact = exact + volume * integral / ( b[dim] - a[dim] );
  }

  delete [] a;
  delete [] b;
  delete [] z;

  return exact;
}
//****************************************************************************80

double *p16_f ( int dim_num, int point_num, double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    P16_F evaluates the integrand for problem 16.
//
//  Discussion:
//
//    The integrand can be regarded as the L1 norm of X - Z.
//
//    It would be nice to allow the use to specify several
//    base points Z, to make the function more jagged more places.
//
//    The spatial dimension DIM_NUM is arbitrary.
//
//  Region:
//
//    0 <= X(1:DIM_NUM) <= 1
//
//  Integral Parameters:
//
//    The integrand can be regarded as the L1 norm of X - Z.
//
//    There is a basis point Z associated with the integrand.
//    Z(1:DIM_NUM) defaults to ( 0.5, 0.5, ..., 0.5 ).
//    The user can set, get, or randomize this value by calling
//    P16_R8VEC.
//
//  Integrand:
//
//    sum ( abs ( x(1:dim_num) - z(1:dim_num) ) )
//
//  Exact Integral:
//
//    The integral is separable into
//
//       Int ( A(1) <= X(1) <= B(1) ) abs ( X(1) - Z(1) ) 
//     * Product ( B(1:N)-A(1:N), skip index 1 )
//     + Int ( A(2) <= X(2) <= B(2) ) abs ( X(2) - Z(2) )
//     * Product ( B(1:N)-A(1:N), skip index 2 )
//     ...
//     + Int ( A(N) <= X(N) <= B(N) ) abs ( X(N) - Z(N) )
//     * Product ( B(1:N)-A(1:N), skip index N )
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Input, int POINT_NUM, the number of points.
//
//    Input, double X[DIM_NUM*POINT_NUM], the evaluation points.
//
//    Output, double P16_F[POINT_NUM], the integrand values.
//
{
  int dim;
  int inc;
  int point;
  double *value;
  double *z;

  z = new double[dim_num];
  p16_r8vec ( 'G', 'Z', dim_num, z );

  value = new double[point_num];

  for ( point = 0; point < point_num; point++ )
  {
    value[point] = 0.0;
    for ( dim = 0; dim < dim_num; dim++ )
    {
      value[point] = value[point] + r8_abs ( x[dim+point*dim_num] - z[dim] );
    }
  }

  inc = point_num;
  p16_i4 ( 'I', '#', &inc );

  delete [] z;

  return value;
}
//****************************************************************************80

void p16_i4 ( char action, char name, int *value )

//****************************************************************************80
//
//  Purpose:
//
//    P16_I4 sets or gets I4 parameters for problem 16.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION,
//    'D' to set a parmater to its default value;
//    'S' to set a parameter to VALUE,
//    'G' to set VALUE to the parameter's value,
//    'I' to increment a parameter.
//
//    Input, char NAME, the name of the variable.
//    '#' is the number of calls to the integrand routine.
//
//    Input/output, int *VALUE.
//    * If ACTION = 'I', then VALUE is an input quantity, and is the
//      new value to be added to NAME.
//    * If ACTION = 'S', then VALUE is an input quantity, and is the
//      new value to be assigned to NAME.
//    * If ACTION = 'G', then VALUE is an output quantity, and is the
//      current value of NAME.
//
{
  static int calls = 0;

  if ( action == 'D' )
  {
    if ( name == '#' || name == '*' )
    {
      calls = 0;
    }
  }
  else if ( action == 'G' )
  {
    if ( name == '#' )
    {
      *value = calls;
    }
    else
    {
      cout << "\n";
      cout << "P16_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'I' )
  {
    if ( name == '#' )
    {
      calls = calls + *value;
    }
    else
    {
      cout << "\n";
      cout << "P16_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == '#' )
    {
      calls = *value;
    }
    else
    {
      cout << "\n";
      cout << "P16_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P16_I4 - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

void p16_lim ( int dim_num, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    P16_LIM returns the integration limits for problem 16.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the argument.
//
//    Output, double A[DIM_NUM], B[DIM_NUM], the lower and upper
//    limits of integration.
//    Note that if A = -HUGE(A), the lower limit is
//    actually negative infinity, and if B = HUGE(B), the upper limit
//    is actually infinity.
//
{
  int dim;

  for ( dim = 0; dim < dim_num; dim++ )
  {
    a[dim] = 0.0;
  }
  for ( dim = 0; dim < dim_num; dim++ )
  {
    b[dim] = 1.0;
  }

  return;
}
//****************************************************************************80

char *p16_name ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P16_NAME returns the name of problem 16.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P16_NAME, the name of the problem.
//
{
  char *value;

  value = new char[8];

  strcpy ( value, "L1(X-Z)" );

  return value;
}
//****************************************************************************80

void p16_r8vec ( char action, char name, int dim_num, double value[] )

//****************************************************************************80
//
//  Purpose:
//
//    P16_R8VEC sets or gets R8VEC parameters for problem 16.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION, the action.
//    'D' sets the internal value of the object to a default value.
//    If NAME = '*', then all variables are defaulted.
//    'G' means the current value of the object should be returned.
//    'R' means randomize the object and return its value.
//    'S' means the object should be set to the input VALUE.
//
//    Input, char NAME, the name of the parameter.
//    'Z' is the base vector.
//
//    Input, int DIM_NUM, the dimension of the object.
//
//    Input/output, double VALUE[DIM_NUM], the value of the object.
//
{
  int dim;
  static int dim_num_save = 0;
  static double *z = NULL;

  if ( dim_num_save != dim_num )
  {
    dim_num_save = 0;
    if ( z )
    {
      delete [] z;
      z = NULL;
    }
  }

  if ( dim_num_save == 0 )
  {
    dim_num_save = dim_num;
    z = new double[dim_num_save];
  }

  if ( action == 'D' )
  {
    if ( name == 'Z' || name == '*' )
    {
      for ( dim = 0; dim < dim_num; dim++ )
      {
        z[dim] = 0.5;
      }
    }
  }
  else if ( action == 'G' )
  {
    if ( name == 'Z' )
    {
      r8vec_copy ( dim_num, z, value );
    }
    else
    {
      cout << "\n";
      cout << "P16_R8VEC - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'R' )
  {
    if ( name == 'Z' )
    {
      for ( dim = 0; dim < dim_num; dim++ )
      {
        z[dim] = ( double ) rand ( ) / ( double ) RAND_MAX;
      }
      r8vec_copy ( dim_num, z, value );
    }
    else
    {
      cout << "\n";
      cout << "P16_R8VEC - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == 'Z' )
    {
      r8vec_copy ( dim_num, value, z );
    }
    else
    {
      cout << "\n";
      cout << "P16_R8VEC - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P16_R8VEC - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

char *p16_region ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P16_REGION returns the name of the integration region for problem 16.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P16_REGION, the name of the integration region.
//
{
  char *value;

  value = new char[4];

  strcpy ( value, "BOX" );

  return value;
}
//****************************************************************************80

void p16_title ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P16_TITLE prints a title for problem 16.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
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
  cout << "\n";
  cout << "Problem 16\n";
  cout << "  Name:       L1(X-Z)\n";
  cout << "              Lipschitz continuous.\n";
  cout << "  Region:     0 <= X(i) <= 1\n";
  cout << "  Integrand:  F(X) = sum ( | X(i) - Z(i) | )\n";
  cout << "  Parameters:\n";
  cout << "              Z(1:DIM_NUM) defaults to (0.5,0.5,...)\n";

  return;
}
//****************************************************************************80

void p17_default ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P17_DEFAULT sets default values for problem 17.
//
//  Discussion:
//
//    If a problem uses vector parameters, then the spatial dimension
//    DIM_NUM is needed as input, so that the vector parameters can be
//    properly dimensioned.
//
//    Every problem keeps a count of the number of function calls.  Calling
//    this routine causes that count to be reset to 0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the problem.
//
{
  int i4;

  p17_i4 ( 'D', '*', &i4 );
  p17_r8vec ( 'D', '*', dim_num, NULL );

  return;
}
//****************************************************************************80

double p17_exact ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P17_EXACT returns the exact integral for problem 17.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Output, double P17_EXACT, the exact value of the integral.
//
{
  double *a;
  double *b;
  int dim;
  double exact;
  double integral;
  double volume;
  double *z;
//
//  Get the limits of integration.
//
  a = new double[dim_num];
  b = new double[dim_num];

  p17_lim ( dim_num, a, b );
//
//  Get the location of Z.
//
  z = new double[dim_num];
  p17_r8vec ( 'G', 'Z', dim_num, z );
//
//  The value of the DIM_NUM dimensional integral can be broken
//  into the weighted sum of integrals over each dimension.
//
  exact = 0.0;

  volume = 1.0;
  for ( dim = 0; dim < dim_num; dim++ )
  {
    volume = volume * ( b[dim] - a[dim] );
  }

  for ( dim = 0; dim < dim_num; dim++ )
  {
//
//  Z < A < B
//
    if ( z[dim] < a[dim] )
    {
      integral = ( pow ( b[dim] - z[dim], 3 ) 
                 - pow ( a[dim] - z[dim], 3 ) ) / 3.0;
    }
//
//  A < Z < B
//
    else if ( z[dim] < b[dim] )
    {
      integral = ( pow ( b[dim] - z[dim], 3 ) 
                 + pow ( z[dim] - a[dim], 3 ) ) / 3.0;
    }
//
//  A < B < Z
//
    else
    {
      integral = ( pow ( z[dim] - b[dim], 3 ) 
                 - pow ( z[dim] - a[dim], 3 ) ) / 3.0;
    }

    exact = exact + volume * integral / ( b[dim] - a[dim] );
  }

  delete [] a;
  delete [] b;
  delete [] z;

  return exact;
}
//****************************************************************************80

double *p17_f ( int dim_num, int point_num, double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    P17_F evaluates the integrand for problem 17.
//
//  Discussion:
//
//    This integrand can be regarded as the square of the L2
//    norm of X - Z.
//
//    This integrand has the advantage of symmetry under rotation
//    about Z.  Thus, it is possible to test whether a particular
//    quadrature rule has an occasional advantage because it
//    "lines up" with the X and Y coordinate axes and hence can
//    integrate some separable integrals very well.
//
//    The spatial dimension DIM_NUM is arbitrary.
//
//  Region:
//
//    0 <= X(1:DIM_NUM) <= 1
//
//  Integral Parameters:
//
//    There is a basis point Z associated with the integrand.
//    Z(1:DIM_NUM) defaults to ( 0.5, 0.5, ..., 0.5 ).
//    The user can set, get, or randomize this value by calling
//    P17_R8VEC.
//
//  Integrand:
//
//    sum ( ( x(1:dim_num) - z(1:dim_num) )**2 )
//
//  Exact Integral:
//
//    The integral may be broken into the sum of weighted 
//    one dimensional integrals.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Input, int POINT_NUM, the number of points.
//
//    Input, double X[DIM_NUM*POINT_NUM], the evaluation points.
//
//    Output, double P17_F[POINT_NUM], the integrand values.
//
{
  int dim;
  int inc;
  int point;
  double *value;
  double *z;

  z = new double[dim_num];
  p17_r8vec ( 'G', 'Z', dim_num, z );

  value = new double[point_num];

  for ( point = 0; point < point_num; point++ )
  {
    value[point] = 0.0;
    for ( dim = 0; dim < dim_num; dim++ )
    {
      value[point] = value[point] + pow ( x[dim+point*dim_num] - z[dim], 2 );
    }
  }

  inc = point_num;
  p17_i4 ( 'I', '#', &inc );

  delete [] z;

  return value;
}
//****************************************************************************80

void p17_i4 ( char action, char name, int *value )

//****************************************************************************80
//
//  Purpose:
//
//    P17_I4 sets or gets I4 parameters for problem 17.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION,
//    'D' to set a parmater to its default value;
//    'S' to set a parameter to VALUE,
//    'G' to set VALUE to the parameter's value,
//    'I' to increment a parameter.
//
//    Input, char NAME, the name of the variable.
//    '#' is the number of calls to the integrand routine.
//
//    Input/output, int *VALUE.
//    * If ACTION = 'I', then VALUE is an input quantity, and is the
//      new value to be added to NAME.
//    * If ACTION = 'S', then VALUE is an input quantity, and is the
//      new value to be assigned to NAME.
//    * If ACTION = 'G', then VALUE is an output quantity, and is the
//      current value of NAME.
//
{
  static int calls = 0;

  if ( action == 'D' )
  {
    if ( name == '#' || name == '*' )
    {
      calls = 0;
    }
  }
  else if ( action == 'G' )
  {
    if ( name == '#' )
    {
      *value = calls;
    }
    else
    {
      cout << "\n";
      cout << "P17_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'I' )
  {
    if ( name == '#' )
    {
      calls = calls + *value;
    }
    else
    {
      cout << "\n";
      cout << "P17_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == '#' )
    {
      calls = *value;
    }
    else
    {
      cout << "\n";
      cout << "P17_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P17_I4 - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

void p17_lim ( int dim_num, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    P17_LIM returns the integration limits for problem 17.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the argument.
//
//    Output, double A[DIM_NUM], B[DIM_NUM], the lower and upper
//    limits of integration.
//    Note that if A = -HUGE(A), the lower limit is
//    actually negative infinity, and if B = HUGE(B), the upper limit
//    is actually infinity.
//
{
  int dim;

  for ( dim = 0; dim < dim_num; dim++ )
  {
    a[dim] = 0.0;
  }
  for ( dim = 0; dim < dim_num; dim++ )
  {
    b[dim] = 1.0;
  }

  return;
}
//****************************************************************************80

char *p17_name ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P17_NAME returns the name of problem 17.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P17_NAME, the name of the problem.
//
{
  char *value;

  value = new char[10];

  strcpy ( value, "L2(X-Z)^2" );

  return value;
}
//****************************************************************************80

void p17_r8vec ( char action, char name, int dim_num, double value[] )

//****************************************************************************80
//
//  Purpose:
//
//    P17_R8VEC sets or gets R8VEC parameters for problem 17.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION, the action.
//    'D' sets the internal value of the object to a default value.
//    If NAME = '*', then all variables are defaulted.
//    'G' means the current value of the object should be returned.
//    'R' means randomize the object and return its value.
//    'S' means the object should be set to the input VALUE.
//
//    Input, char NAME, the name of the parameter.
//    'Z' is the base vector.
//
//    Input, int DIM_NUM, the dimension of the object.
//
//    Input/output, double VALUE[DIM_NUM], the value of the object.
//
{
  int dim;
  static int dim_num_save = 0;
  static double *z = NULL;

  if ( dim_num_save != dim_num )
  {
    dim_num_save = 0;
    if ( z )
    {
      delete [] z;
      z = NULL;
    }
  }

  if ( dim_num_save == 0 )
  {
    dim_num_save = dim_num;
    z = new double[dim_num_save];
  }

  if ( action == 'D' )
  {
    if ( name == 'Z' || name == '*' )
    {
      for ( dim = 0; dim < dim_num; dim++ )
      {
        z[dim] = 0.5;
      }
    }
  }
  else if ( action == 'G' )
  {
    if ( name == 'Z' )
    {
      r8vec_copy ( dim_num, z, value );
    }
    else
    {
      cout << "\n";
      cout << "P17_R8VEC - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'R' )
  {
    if ( name == 'Z' )
    {
      for ( dim = 0; dim < dim_num; dim++ )
      {
        z[dim] = ( double ) rand ( ) / ( double ) RAND_MAX;
      }
      r8vec_copy ( dim_num, z, value );
    }
    else
    {
      cout << "\n";
      cout << "P17_R8VEC - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == 'Z' )
    {
      r8vec_copy ( dim_num, value, z );
    }
    else
    {
      cout << "\n";
      cout << "P17_R8VEC - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P17_R8VEC - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

char *p17_region ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P17_REGION returns the name of the integration region for problem 17.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P17_REGION, the name of the integration region.
//
{
  char *value;

  value = new char[4];

  strcpy ( value, "BOX" );

  return value;
}
//****************************************************************************80

void p17_title ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P17_TITLE prints a title for problem 17.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
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
  cout << "\n";
  cout << "Problem 17\n";
  cout << "  Name:       L2(X-Z)^2\n";
  cout << "              Zero at point Z.\n";
  cout << "              Radially symmetric.\n";
  cout << "  Region:     0 <= X(i) <= 1\n";
  cout << "  Integrand:  F(X) = sum ( ( X(i) - Z(i) )^2 )\n";
  cout << "  Parameters:\n";
  cout << "              Z(1:DIM_NUM) defaults to (0.5,0.5,...)\n";

  return;
}
//****************************************************************************80

void p18_default ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P18_DEFAULT sets default values for problem 18.
//
//  Discussion:
//
//    If a problem uses vector parameters, then the spatial dimension
//    DIM_NUM is needed as input, so that the vector parameters can be
//    properly dimensioned.
//
//    Every problem keeps a count of the number of function calls.  Calling
//    this routine causes that count to be reset to 0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the problem.
//
{
  int i4;
  double r8;

  p18_i4 ( 'D', '*', &i4 );
  p18_r8 ( 'D', '*', &r8 );
  p18_r8vec ( 'D', '*', dim_num, NULL );

  return;
}
//****************************************************************************80

double p18_exact ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P18_EXACT returns the exact integral for problem 18.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Output, double P18_EXACT, the exact value of the integral.
//
{
  double exact;
  double r;

  p18_r8 ( 'G', 'R', &r );

  exact = sphere_volume_nd ( dim_num, r );

  return exact;
}
//****************************************************************************80

double *p18_f ( int dim_num, int point_num, double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    P18_F evaluates the integrand for problem 18.
//
//  Discussion:
//
//    This is the characteristic function of the interior of the 
//    N sphere of radius R and center Z, to be integrated within the
//    unit hypercube [0,1]^N.  If the user picks a combination of R
//    and Z that causes the volume of the sphere to lie at least
//    partially outside the unit hypercube, the formula for the
//    exact integral will no longer be correct.
//
//    The spatial dimension DIM_NUM is arbitrary.
//
//  Region:
//
//    0 <= X(1:DIM_NUM) <= 1
//
//  Integral Parameters:
//
//    R defaults to 0.50.  
//    You can change R by calling P18_R8.
//
//    Z(1:DIM_NUM) defaults to (0.5,0.5,...0.5).  
//    You can change Z by calling P18_R8VEC.
//
//  Integrand:
//
//    f(x) = 1 if X(1:DIM_NUM) is less than R from Z(1:DIM_NUM),
//           0 otherwise.
//
//  Exact Integral:
//
//    The volume of the DIM_NUM sphere of radius R.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Input, int POINT_NUM, the number of points.
//
//    Input, double X[DIM_NUM*POINT_NUM], the evaluation points.
//
//    Output, double P18_F[POINT_NUM], the integrand values.
//
{
  double d;
  int dim;
  int inc;
  int point;
  double r;
  double *value;
  double *z;

  z = new double[dim_num];
  p18_r8vec ( 'G', 'Z', dim_num, z );

  p18_r8 ( 'G', 'R', &r );

  value = new double[point_num];

  for ( point = 0; point < point_num; point++ )
  {
    d = 0.0;
    for ( dim = 0; dim < dim_num; dim++ )
    {
      d = d + pow ( x[dim+point*dim_num] - z[dim], 2 );
    }
    d = sqrt ( d );

    if ( d <= r )
    {
      value[point] = 1.0;
    }
    else
    {
      value[point] = 0.0;
    }
  }

  inc = point_num;
  p18_i4 ( 'I', '#', &inc );

  delete [] z;

  return value;
}
//****************************************************************************80

void p18_i4 ( char action, char name, int *value )

//****************************************************************************80
//
//  Purpose:
//
//    P18_I4 sets or gets I4 parameters for problem 18.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION,
//    'D' to set a parmater to its default value;
//    'S' to set a parameter to VALUE,
//    'G' to set VALUE to the parameter's value,
//    'I' to increment a parameter.
//
//    Input, char NAME, the name of the variable.
//    '#' is the number of calls to the integrand routine.
//
//    Input/output, int *VALUE.
//    * If ACTION = 'I', then VALUE is an input quantity, and is the
//      new value to be added to NAME.
//    * If ACTION = 'S', then VALUE is an input quantity, and is the
//      new value to be assigned to NAME.
//    * If ACTION = 'G', then VALUE is an output quantity, and is the
//      current value of NAME.
//
{
  static int calls = 0;

  if ( action == 'D' )
  {
    if ( name == '#' || name == '*' )
    {
      calls = 0;
    }
  }
  else if ( action == 'G' )
  {
    if ( name == '#' )
    {
      *value = calls;
    }
    else
    {
      cout << "\n";
      cout << "P18_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'I' )
  {
    if ( name == '#' )
    {
      calls = calls + *value;
    }
    else
    {
      cout << "\n";
      cout << "P18_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == '#' )
    {
      calls = *value;
    }
    else
    {
      cout << "\n";
      cout << "P18_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P18_I4 - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

void p18_lim ( int dim_num, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    P18_LIM returns the integration limits for problem 18.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the argument.
//
//    Output, double A[DIM_NUM], B[DIM_NUM], the lower and upper
//    limits of integration.
//    Note that if A = -HUGE(A), the lower limit is
//    actually negative infinity, and if B = HUGE(B), the upper limit
//    is actually infinity.
//
{
  int dim;

  for ( dim = 0; dim < dim_num; dim++ )
  {
    a[dim] = 0.0;
  }
  for ( dim = 0; dim < dim_num; dim++ )
  {
    b[dim] = 1.0;
  }

  return;
}
//****************************************************************************80

char *p18_name ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P18_NAME returns the name of problem 18.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P18_NAME, the name of the problem.
//
{
  char *value;

  value = new char[5];

  strcpy ( value, "Disk" );

  return value;
}
//****************************************************************************80

void p18_r8 ( char action, char name, double *value )

//****************************************************************************80
//
//  Purpose:
//
//    P18_R8 sets or gets R8 parameters for problem 18.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION,
//    'D' sets the parameter to its default value;
//    'G' gets a parameter.
//    'R' sets the parameter to a random value.
//    'S' sets a parameter to VALUE,
//
//    Input, char NAME, the name of the variable.
//    'R' is the radius.
//
//    Input/output, double *VALUE.
//    * If ACTION = 'S', then VALUE is an input quantity, and is the
//      new value to be assigned to NAME.
//    * If ACTION = 'D', 'G' or 'R', then VALUE is an output quantity, 
//      and is the current value of NAME.
//
{
  static double r = 0.50;

  if ( action == 'D' )
  {
    if ( name == 'R' || name == '*' )
    {
      r = 0.50;
      *value = r;
    }
  }
  else if ( action == 'G' )
  {
    if ( name == 'R' )
    {
      *value = r;
    }
    else
    {
      cout << "\n";
      cout << "P18_R8 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'R' )
  {
    if ( name == 'R' )
    {
      r = ( double ) rand ( ) / ( double ) RAND_MAX;
      *value = r;
    }
    else
    {
      cout << "\n";
      cout << "P18_R8 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == 'R' )
    {
      r = *value;
    }
    else
    {
      cout << "\n";
      cout << "P18_R8 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P18_R8 - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }

  return;
}
//****************************************************************************80

void p18_r8vec ( char action, char name, int dim_num, double value[] )

//****************************************************************************80
//
//  Purpose:
//
//    P18_R8VEC sets or gets R8VEC parameters for problem 18.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION, the action.
//    'D' sets the internal value of the object to a default value.
//    If NAME = '*', then all variables are defaulted.
//    'G' means the current value of the object should be returned.
//    'R' means randomize the object and return its value.
//    'S' means the object should be set to the input VALUE.
//
//    Input, char NAME, the name of the parameter.
//    'Z' is the base vector.
//
//    Input, int DIM_NUM, the dimension of the object.
//
//    Input/output, double VALUE[DIM_NUM], the value of the object.
//
{
  int dim;
  static int dim_num_save = 0;
  static double *z = NULL;

  if ( dim_num_save != dim_num )
  {
    dim_num_save = 0;
    if ( z )
    {
      delete [] z;
      z = NULL;
    }
  }

  if ( dim_num_save == 0 )
  {
    dim_num_save = dim_num;
    z = new double[dim_num_save];
  }

  if ( action == 'D' )
  {
    if ( name == 'Z' || name == '*' )
    {
      for ( dim = 0; dim < dim_num; dim++ )
      {
        z[dim] = 0.5;
      }
    }
  }
  else if ( action == 'G' )
  {
    if ( name == 'Z' )
    {
      r8vec_copy ( dim_num, z, value );
    }
    else
    {
      cout << "\n";
      cout << "P18_R8VEC - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'R' )
  {
    if ( name == 'Z' )
    {
      for ( dim = 0; dim < dim_num; dim++ )
      {
        z[dim] = ( double ) rand ( ) / ( double ) RAND_MAX;
      }
      r8vec_copy ( dim_num, z, value );
    }
    else
    {
      cout << "\n";
      cout << "P18_R8VEC - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == 'Z' )
    {
      r8vec_copy ( dim_num, value, z );
    }
    else
    {
      cout << "\n";
      cout << "P18_R8VEC - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P18_R8VEC - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

char *p18_region ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P18_REGION returns the name of the integration region for problem 18.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P18_REGION, the name of the integration region.
//
{
  char *value;

  value = new char[4];

  strcpy ( value, "BOX" );

  return value;
}
//****************************************************************************80

void p18_title ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P18_TITLE prints a title for problem 18.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
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
  cout << "\n";
  cout << "Problem 18\n";
  cout << "  Name:       Disk\n";
  cout << "              Disk of radius R centered at Z.\n";
  cout << "  Region:     0 <= X(i) <= 1\n";
  cout << "  Integrand:  F(X) = sphere interior characteristic\n";
  cout << "  Parameters:\n";
  cout << "              R, defaults to 0.5\n";
  cout << "              Z(1:DIM_NUM) defaults to (0.5,0.5,...0.5)\n";

  return;
}
//****************************************************************************80

void p19_default ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P19_DEFAULT sets default values for problem 19.
//
//  Discussion:
//
//    If a problem uses vector parameters, then the spatial dimension
//    DIM_NUM is needed as input, so that the vector parameters can be
//    properly dimensioned.
//
//    Every problem keeps a count of the number of function calls.  Calling
//    this routine causes that count to be reset to 0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the problem.
//
{
  int i4;

  p19_i4 ( 'D', '*', &i4 );
  p19_r8vec ( 'D', '*', dim_num, NULL );

  return;
}
//****************************************************************************80

double p19_exact ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P19_EXACT returns the exact integral for problem 19.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Output, double EXACT, the exact value of the integral.
//
{
  int dim;
  double exact;
  double *z;

  z = new double[dim_num];
  p19_r8vec ( 'G', 'Z', dim_num, z );

  exact = 1.0;

  for ( dim = 0; dim < dim_num; dim++ )
  {
    if ( z[dim] <= 0.0 )
    {
      exact = exact * ( 2.0 / 3.0 ) * 
        ( sqrt (   pow ( 1.0 - z[dim], 3 ) ) 
        - sqrt ( - pow ( z[dim],       3 ) ) );
    }
    else if ( z[dim] < 1.0 )
    {
      exact = exact * ( 2.0 / 3.0 ) * 
        ( sqrt ( pow ( z[dim], 3 ) ) 
        + sqrt ( pow ( 1.0 - z[dim], 3 ) ) );
    }
    else if ( 1.0 <= z[dim] )
    {
      exact = exact * ( 2.0 / 3.0 ) * 
        ( sqrt ( pow ( z[dim], 3 ) ) 
        - sqrt ( pow ( z[dim] - 1.0, 3 ) ) );
    }
  }

  delete [] z;

  return exact;
}
//****************************************************************************80

double *p19_f ( int dim_num, int point_num, double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    P19_F evaluates the integrand for problem 19.
//
//  Discussion:
//
//    The spatial dimension DIM_NUM is arbitrary.
//
//  Region:
//
//    0 <= X(1:DIM_NUM) <= 1
//
//  Integral Parameters:
//
//    Z defaults to (1/3,1/3,...,1/3).  
//    You can reset Z by calling P19_R8VEC.
//
//  Integrand:
//
//    f(x) = product ( sqrt ( abs ( x(1:dim_num) - z(1:dim_num) ) ) )
//
//  Exact Integral:
//
//    With Z as given, 
//
//      (2/3)**DIM_NUM * ( (2/3)**(3/2) + (1/3)**(3/2) )**DIM_NUM
//
//    or approximately 0.49**DIM_NUM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Arnold Krommer, Christoph Ueberhuber,
//    Numerical Integration on Advanced Systems,
//    Springer, 1994,
//    ISBN: 3540584102,
//    LC: QA299.3.K76.
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Input, int POINT_NUM, the number of points.
//
//    Input, double X[DIM_NUM*POINT_NUM], the evaluation points.
//
//    Output, double P19_F[POINT_NUM], the integrand values.
//
{
  int dim;
  int inc;
  int point;
  double *value;
  double *z;

  z = new double[dim_num];
  p19_r8vec ( 'G', 'Z', dim_num, z );

  value = new double[point_num];

  for ( point = 0; point < point_num; point++ )
  {
    value[point] = 1.0;
    for ( dim = 0; dim < dim_num; dim++ )
    {
      value[point] = value[point] 
        * sqrt ( r8_abs ( x[dim+point*dim_num] - z[dim] ) );
    }
  }

  inc = point_num;
  p19_i4 ( 'I', '#', &inc );

  delete [] z;

  return value;
}
//****************************************************************************80

void p19_i4 ( char action, char name, int *value )

//****************************************************************************80
//
//  Purpose:
//
//    P19_I4 sets or gets I4 parameters for problem 19.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION,
//    'D' to set a parmater to its default value;
//    'S' to set a parameter to VALUE,
//    'G' to set VALUE to the parameter's value,
//    'I' to increment a parameter.
//
//    Input, char NAME, the name of the variable.
//    '#' is the number of calls to the integrand routine.
//
//    Input/output, int *VALUE.
//    * If ACTION = 'I', then VALUE is an input quantity, and is the
//      new value to be added to NAME.
//    * If ACTION = 'S', then VALUE is an input quantity, and is the
//      new value to be assigned to NAME.
//    * If ACTION = 'G', then VALUE is an output quantity, and is the
//      current value of NAME.
//
{
  static int calls = 0;

  if ( action == 'D' )
  {
    if ( name == '#' || name == '*' )
    {
      calls = 0;
    }
  }
  else if ( action == 'G' )
  {
    if ( name == '#' )
    {
      *value = calls;
    }
    else
    {
      cout << "\n";
      cout << "P19_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'I' )
  {
    if ( name == '#' )
    {
      calls = calls + *value;
    }
    else
    {
      cout << "\n";
      cout << "P19_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == '#' )
    {
      calls = *value;
    }
    else
    {
      cout << "\n";
      cout << "P19_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P19_I4 - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

void p19_lim ( int dim_num, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    P19_LIM returns the integration limits for problem 19.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the argument.
//
//    Output, double A[DIM_NUM], B[DIM_NUM], the lower and upper
//    limits of integration.
//    Note that if A = -HUGE(A), the lower limit is
//    actually negative infinity, and if B = HUGE(B), the upper limit
//    is actually infinity.
//
{
  int dim;

  for ( dim = 0; dim < dim_num; dim++ )
  {
    a[dim] = 0.0;
  }
  for ( dim = 0; dim < dim_num; dim++ )
  {
    b[dim] = 1.0;
  }

  return;
}
//****************************************************************************80

char *p19_name ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P19_NAME returns the name of problem 19.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P19_NAME, the name of the problem.
//
{
  char *value;

  value = new char[10];

  strcpy ( value, "Sqrt-Prod" );

  return value;
}
//****************************************************************************80

void p19_r8vec ( char action, char name, int dim_num, double value[] )

//****************************************************************************80
//
//  Purpose:
//
//    P19_R8VEC sets or gets R8VEC parameters for problem 19.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION, the action.
//    'D' sets the internal value of the object to a default value.
//    If NAME = '*', then all variables are defaulted.
//    'G' means the current value of the object should be returned.
//    'R' means randomize the object and return its value.
//    'S' means the object should be set to the input VALUE.
//
//    Input, char NAME, the name of the parameter.
//    'Z' is the base vector.
//
//    Input, int DIM_NUM, the dimension of the object.
//
//    Input/output, double VALUE[DIM_NUM], the value of the object.
//
{
  int dim;
  static int dim_num_save = 0;
  static double *z = NULL;

  if ( dim_num_save != dim_num )
  {
    dim_num_save = 0;
    if ( z )
    {
      delete [] z;
      z = NULL;
    }
  }

  if ( dim_num_save == 0 )
  {
    dim_num_save = dim_num;
    z = new double[dim_num_save];
  }

  if ( action == 'D' )
  {
    if ( name == 'Z' || name == '*' )
    {
      for ( dim = 0; dim < dim_num; dim++ )
      {
        z[dim] = 1.0 / 3.0;
      }
    }
  }
  else if ( action == 'G' )
  {
    if ( name == 'Z' )
    {
      r8vec_copy ( dim_num, z, value );
    }
    else
    {
      cout << "\n";
      cout << "P19_R8VEC - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'R' )
  {
    if ( name == 'Z' )
    {
      for ( dim = 0; dim < dim_num; dim++ )
      {
        z[dim] = ( double ) rand ( ) / ( double ) RAND_MAX;
      }
      r8vec_copy ( dim_num, z, value );
    }
    else
    {
      cout << "\n";
      cout << "P19_R8VEC - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == 'Z' )
    {
      r8vec_copy ( dim_num, value, z );
    }
    else
    {
      cout << "\n";
      cout << "P19_R8VEC - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P19_R8VEC - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

char *p19_region ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P19_REGION returns the name of the integration region for problem 19.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P19_REGION, the name of the integration region.
//
{
  char *value;

  value = new char[4];

  strcpy ( value, "BOX" );

  return value;
}
//****************************************************************************80

void p19_title ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P19_TITLE prints a title for problem 19.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
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
  cout << "\n";
  cout << "Problem 19\n";
  cout << "  Name:       Sqrt-Prod\n";
  cout << "  Region:     0 <= X(i) <= 1\n";
  cout << "  Integrand:  F(X) = prod ( sqrt ( | X(i) - Z(i) | ) )\n";
  cout << "  Parameters: \n";
  cout << "              Z(1:DIM_NUM) defaults to (1/3,1/3,...,1/3)\n";

  return;
}
//****************************************************************************80

void p20_default ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P20_DEFAULT sets default values for problem 20.
//
//  Discussion:
//
//    If a problem uses vector parameters, then the spatial dimension
//    DIM_NUM is needed as input, so that the vector parameters can be
//    properly dimensioned.
//
//    Every problem keeps a count of the number of function calls.  Calling
//    this routine causes that count to be reset to 0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the problem.
//
{
  int i4;
  double r8;

  p20_i4 ( 'D', '*', &i4 );
  p20_r8 ( 'D', '*', &r8 );

  return;
}
//****************************************************************************80

double p20_exact ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P20_EXACT returns the exact integral for problem 20.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Output, double P20_EXACT, the exact value of the integral.
//
{
  double aval;
  double bval;
  double exact;
  double exponent;
  int i;
  double minus_one;
  double p;

  p20_r8 ( 'G', 'A', &aval );
  p20_r8 ( 'G', 'B', &bval );
  p20_r8 ( 'G', 'P', &p );

  exact = 0.0;
  exponent = ( double ) ( dim_num + p );

  minus_one = -1.0;

  for ( i = 0; i <= dim_num; i++ )
  {
    minus_one = - minus_one;

    exact = exact + minus_one * r8_choose ( dim_num, i ) 
      * pow ( ( double ) ( dim_num - i ) * bval + ( double ) ( i ) 
      * aval, exponent );
  }

  for ( i = 1; i <= dim_num; i++ )
  {
    exact = exact / ( p + ( double ) ( i ) );
  }

  return exact;
}
//****************************************************************************80

double *p20_f ( int dim_num, int point_num, double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    P20_F evaluates the integrand for problem 20.
//
//  Discussion:
//
//    The spatial dimension DIM_NUM is arbitrary.
//
//  Region:
//
//    A <= X(1:DIM_NUM) <= B
//
//  Integrand:
//
//    f(x) = ( sum ( x(1:dim_num) ) )^p
//
//    power is greater than -dim_num, and is not a negative integer.
//
//  Exact Integral:
//
//    sum ( 0 <= i <= dim_num ) (-1)**i * choose(dim_num,i) 
//      * ((dim_num-i)*b+i*a)**(dim_num+p)
//      / ( (t+1) * (t+2) * ... * (t+dim_num) )
//
//  Parameters:
//
//    A defaults to 0.0.  You can change A by calling P20_R8.
//
//    B defaults to 1.0.  You can change B by calling P20_R8.
//
//    P defaults to 2.0.  You can change P by calling P20_R8.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Philip Davis, Philip Rabinowitz,
//    Methods of Numerical Integration,
//    Second Edition,
//    Dover, 2007,
//    ISBN: 0486453391,
//    LC: QA299.3.D28.
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Input, int POINT_NUM, the number of points.
//
//    Input, double X[DIM_NUM*POINT_NUM], the evaluation points.
//
//    Output, double P20_F[POINT_NUM], the integrand values.
//
{
  int inc;
  double p;
  int point;
  double *value;

  p20_r8 ( 'G', 'P', &p );

  value = new double[point_num];

  for ( point = 0; point < point_num; point++ )
  {
    value[point] = r8vec_sum ( dim_num, x+point*dim_num );
    value[point] = pow ( value[point], p );
  }

  inc = point_num;
  p20_i4 ( 'I', '#', &inc );

  return value;
}
//****************************************************************************80

void p20_i4 ( char action, char name, int *value )

//****************************************************************************80
//
//  Purpose:
//
//    P20_I4 sets or gets I4 parameters for problem 20.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION,
//    'D' to set a parmater to its default value;
//    'S' to set a parameter to VALUE,
//    'G' to set VALUE to the parameter's value,
//    'I' to increment a parameter.
//
//    Input, char NAME, the name of the variable.
//    '#' is the number of calls to the integrand routine.
//
//    Input/output, int *VALUE.
//    * If ACTION = 'I', then VALUE is an input quantity, and is the
//      new value to be added to NAME.
//    * If ACTION = 'S', then VALUE is an input quantity, and is the
//      new value to be assigned to NAME.
//    * If ACTION = 'G', then VALUE is an output quantity, and is the
//      current value of NAME.
//
{
  static int calls = 0;

  if ( action == 'D' )
  {
    if ( name == '#' || name == '*' )
    {
      calls = 0;
    }
  }
  else if ( action == 'G' )
  {
    if ( name == '#' )
    {
      *value = calls;
    }
    else
    {
      cout << "\n";
      cout << "P20_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'I' )
  {
    if ( name == '#' )
    {
      calls = calls + *value;
    }
    else
    {
      cout << "\n";
      cout << "P20_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == '#' )
    {
      calls = *value;
    }
    else
    {
      cout << "\n";
      cout << "P20_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P20_I4 - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

void p20_lim ( int dim_num, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    P20_LIM returns the integration limits for problem 20.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the argument.
//
//    Output, double A[DIM_NUM], B[DIM_NUM], the lower and upper
//    limits of integration.
//    Note that if A = -HUGE(A), the lower limit is
//    actually negative infinity, and if B = HUGE(B), the upper limit
//    is actually infinity.
//
{
  double aval;
  double bval;
  int dim;

  p20_r8 ( 'G', 'A', &aval );
  p20_r8 ( 'G', 'B', &bval );

  for ( dim = 0; dim < dim_num; dim++ )
  {
    a[dim] = aval;
  }
  for ( dim = 0; dim < dim_num; dim++ )
  {
    b[dim] = bval;
  }

  return;
}
//****************************************************************************80

char *p20_name ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P20_NAME returns the name of problem 20.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P20_NAME, the name of the problem.
//
{
  char *value;

  value = new char[6];

  strcpy ( value, "Sum^P" );

  return value;
}
//****************************************************************************80

void p20_r8 ( char action, char name, double *value )

//****************************************************************************80
//
//  Purpose:
//
//    P20_R8 sets or gets R8 parameters for problem 20.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION,
//    'D' sets the parameter to its default value;
//    'G' gets a parameter.
//    'R' sets the parameter to a random value.
//    'S' sets a parameter to VALUE,
//
//    Input, char NAME, the name of the variable.
//    'R' is the radius.
//
//    Input/output, double *VALUE.
//    * If ACTION = 'S', then VALUE is an input quantity, and is the
//      new value to be assigned to NAME.
//    * If ACTION = 'D', 'G' or 'R', then VALUE is an output quantity, 
//      and is the current value of NAME.
//
{
  static double a = 0.0;
  static double b = 1.0;
  static double p = 2.0;

  if ( action == 'D' )
  {
    if ( name == 'A' || name == '*' )
    {
      a = 0.0;
    }
    if ( name == 'B' || name == '*' )
    {
      b = 1.0;
    }
    if ( name == 'P' || name == '*' )
    {
      p = 2.0;
    }
  }
  else if ( action == 'G' )
  {
    if ( name == 'A' )
    {
      *value = a;
    }
    else if ( name == 'B' )
    {
      *value = b;
    }
    else if ( name == 'P' )
    {
      *value = p;
    }
    else
    {
      cout << "\n";
      cout << "P20_R8 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'R' )
  {
    if ( name == 'A' )
    {
      a = ( double ) rand ( ) / ( double ) RAND_MAX;
      *value = a;
    }
    else if ( name == 'B' )
    {
      b = ( double ) rand ( ) / ( double ) RAND_MAX;
      *value = b;
    }
    else if ( name == 'P' )
    {
      p = ( double ) rand ( ) / ( double ) RAND_MAX;
      *value = p;
    }
    else
    {
      cout << "\n";
      cout << "P20_R8 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == 'A' )
    {
      a = *value;
    }
    else if ( name == 'B' )
    {
      b = *value;
    }
    else if ( name == 'P' )
    {
      p = *value;
    }
    else
    {
      cout << "\n";
      cout << "P20_R8 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P20_R8 - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }

  return;
}
//****************************************************************************80

char *p20_region ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P20_REGION returns the name of the integration region for problem 20.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P20_REGION, the name of the integration region.
//
{
  char *value;

  value = new char[4];

  strcpy ( value, "BOX" );

  return value;
}
//****************************************************************************80

void p20_title ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P20_TITLE prints a title for problem 20.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
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
  cout << "\n";
  cout << "Problem 20\n";
  cout << "  Name:       Sum^P\n";
  cout << "  Region:     A <= X(i) <= B\n";
  cout << "  Integrand:  F(X) = ( sum ( X(i) ) )^p\n";
  cout << "  Parameters:\n";
  cout << "              A, defaults to 0.0,\n";
  cout << "              B, defaults to 1.0,\n";
  cout << "              P, defaults to 2.0,\n";

  return;
}
//****************************************************************************80

void p21_default ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P21_DEFAULT sets default values for problem 21.
//
//  Discussion:
//
//    If a problem uses vector parameters, then the spatial dimension
//    DIM_NUM is needed as input, so that the vector parameters can be
//    properly dimensioned.
//
//    Every problem keeps a count of the number of function calls.  Calling
//    this routine causes that count to be reset to 0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the problem.
//
{
  int i4;
  double r8;

  p21_i4 ( 'D', '*', &i4 );
  p21_r8 ( 'D', '*', &r8 );
  p21_i4vec ( 'D', '*', dim_num, NULL );

  return;
}
//****************************************************************************80

double p21_exact ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P21_EXACT returns the exact integral for problem 21.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Output, double P21_EXACT, the exact value of the integral.
//
{
  double arg;
  double c;
  int dim;
  int *e;
  double exact;

  p21_r8 ( 'G', 'C', &c );

  e = new int[dim_num];

  p21_i4vec ( 'G', 'E', dim_num, e );

  for ( dim = 0; dim < dim_num; dim++ )
  {
    if ( ( e[dim] % 2 ) == 1 )
    {
      exact = 0.0;
      return exact;
    }
  }

  exact = 2.0 * c;
  for ( dim = 0; dim < dim_num; dim++ )
  {
    arg = ( double ) ( e[dim] + 1 ) / 2.0;
    exact = exact * r8_gamma ( arg );
  }

  arg = 0.0;
  for ( dim = 0; dim < dim_num; dim++ )
  {
    arg = arg + ( double ) ( e[dim] + 1 );
  }
  arg = arg / 2.0;

  exact = exact / r8_gamma ( arg );

  delete [] e;

  return exact;
}
//****************************************************************************80

double *p21_f ( int dim_num, int point_num, double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    P21_F evaluates the integrand for problem 21.
//
//  Discussion:
//
//    The spatial dimension DIM_NUM is arbitrary.
//
//  Region:
//
//    The (surface of the) unit sphere
//
//  Integral Parameters:
//
//    C defaults to 1.0.  
//    Call P21_R8 to get or set this value.
//
//    E(1:DIM_NUM) defaults to (/ 2, 2, ..., 2 /).  
//    Call P21_I4VEC to get or set this value.
//
//  Integrand:
//
//    F(X) = C * X1^E1 * X2^E2 * ... * Xn^En
//
//    C is real, all exponents E are nonnegative integers.
//
//  Exact Integral:
//
//    0, if any exponent is odd.
//    2 * C * Gamma((E1+1)/2) * Gamma((E2+1)/2) * ... * Gamma((En+1)/2) 
//      / Gamma( (E1+E2+...+En+N)/2 ), otherwise.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Philip Davis, Philip Rabinowitz,
//    Methods of Numerical Integration,
//    Second Edition,
//    Dover, 2007,
//    ISBN: 0486453391,
//    LC: QA299.3.D28.
//
//    Gerald Folland,
//    How to Integrate a Polynomial Over a Sphere,
//    American Mathematical Monthly, 
//    May 2001, pages 446-448.
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Input, int POINT_NUM, the number of points.
//
//    Input, double X[DIM_NUM*POINT_NUM], the evaluation points.
//
//    Output, double P21_F[POINT_NUM], the integrand values.
//
{
  double c;
  int dim;
  int *e;
  int inc;
  int point;
  double *value;

  p21_r8 ( 'G', 'C', &c );

  e = new int[dim_num];
  p21_i4vec ( 'G', 'E', dim_num, e );

  value = new double[point_num];

  for ( point = 0; point < point_num; point++ )
  {
    value[point] = c;
    for ( dim = 0; dim < dim_num; dim++ )
    {
      value[point] = value[point] * pow ( x[dim+point*dim_num], e[dim] );
    }
  }

  inc = point_num;
  p21_i4 ( 'I', '#', &inc );

  delete [] e;

  return value;
}
//****************************************************************************80

void p21_i4 ( char action, char name, int *value )

//****************************************************************************80
//
//  Purpose:
//
//    P21_I4 sets or gets I4 parameters for problem 21.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION,
//    'D' to set a parmater to its default value;
//    'S' to set a parameter to VALUE,
//    'G' to set VALUE to the parameter's value,
//    'I' to increment a parameter.
//
//    Input, char NAME, the name of the variable.
//    '#' is the number of calls to the integrand routine.
//
//    Input/output, int *VALUE.
//    * If ACTION = 'I', then VALUE is an input quantity, and is the
//      new value to be added to NAME.
//    * If ACTION = 'S', then VALUE is an input quantity, and is the
//      new value to be assigned to NAME.
//    * If ACTION = 'G', then VALUE is an output quantity, and is the
//      current value of NAME.
//
{
  static int calls = 0;

  if ( action == 'D' )
  {
    if ( name == '#' || name == '*' )
    {
      calls = 0;
    }
  }
  else if ( action == 'G' )
  {
    if ( name == '#' )
    {
      *value = calls;
    }
    else
    {
      cout << "\n";
      cout << "P21_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'I' )
  {
    if ( name == '#' )
    {
      calls = calls + *value;
    }
    else
    {
      cout << "\n";
      cout << "P21_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == '#' )
    {
      calls = *value;
    }
    else
    {
      cout << "\n";
      cout << "P21_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P21_I4 - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

void p21_i4vec ( char action, char name, int dim_num, int value[] )

//****************************************************************************80
//
//  Purpose:
//
//    P21_I4VEC sets or gets I4VEC parameters for problem 21.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION, the action.
//    'D' sets the internal value of the object to the default value.
//    'G' means the current value of the object should be returned.
//    'S' means the input values of the object and its dimension
//    should be stored.
//
//    Input, char NAME, the name of the parameter.
//    'E' is the exponent vector.
//
//    Input, int DIM_NUM, the dimension of the object.
//
//    Input/output, int VALUE[DIM_NUM], the value of the object.
//
{
  int dim;
  static int dim_num_save = 0;
  static int *e = NULL;

  if ( dim_num_save != dim_num )
  {
    dim_num_save = 0;
    if ( e )
    {
      delete [] e;
      e = NULL;
    }
  }

  if ( dim_num_save == 0 )
  {
    dim_num_save = dim_num;
    e = new int[dim_num_save];
  }

  if ( action == 'D' )
  {
    if ( name == 'E' || name == '*' )
    {
      for ( dim = 0; dim < dim_num; dim++ )
      {
        e[dim] = 2;
      }
    }
  }
  else if ( action == 'G' )
  {
    if ( name == 'E' )
    {
      i4vec_copy ( dim_num, e, value );
    }
    else
    {
      cout << "\n";
      cout << "P21_I4VEC - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == 'E' )
    {
      i4vec_copy ( dim_num, value, e );
    }
    else
    {
      cout << "\n";
      cout << "P21_I4VEC - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P21_I4VEC - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

void p21_lim ( int dim_num, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    P21_LIM returns the integration limits for problem 21.
//
//  Discussion:
//
//    Because the integration region is the surface of the unit sphere,
//    the integration limits simply specify the limits of a box
//    containing the integration region.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the argument.
//
//    Output, double A[DIM_NUM], B[DIM_NUM], the lower and upper
//    limits of integration.
//    Note that if A = -HUGE(A), the lower limit is
//    actually negative infinity, and if B = HUGE(B), the upper limit
//    is actually infinity.
//
{
  int dim;

  for ( dim = 0; dim < dim_num; dim++ )
  {
    a[dim] = -1.0;
  }
  for ( dim = 0; dim < dim_num; dim++ )
  {
    b[dim] = 1.0;
  }

  return;
}
//****************************************************************************80

char *p21_name ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P21_NAME returns the name of problem 21.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P21_NAME, the name of the problem.
//
{
  char *value;

  value = new char[15];

  strcpy ( value, "SphereMonomial" );

  return value;
}
//****************************************************************************80

void p21_r8 ( char action, char name, double *value )

//****************************************************************************80
//
//  Purpose:
//
//    P21_R8 sets or gets R8 parameters for problem 21.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION,
//    'D' sets the parameter to its default value;
//    'G' gets a parameter.
//    'R' sets the parameter to a random value.
//    'S' sets a parameter to VALUE,
//
//    Input, char NAME, the name of the variable.
//    'R' is the radius.
//
//    Input/output, double *VALUE.
//    * If ACTION = 'S', then VALUE is an input quantity, and is the
//      new value to be assigned to NAME.
//    * If ACTION = 'D', 'G' or 'R', then VALUE is an output quantity, 
//      and is the current value of NAME.
//
{
  static double c = 1.0;

  if ( action == 'D' )
  {
    if ( name == 'C' || name == '*' )
    {
      c = 1.0;
    }
  }
  else if ( action == 'G' )
  {
    if ( name == 'C' )
    {
      *value = c;
    }
    else
    {
      cout << "\n";
      cout << "P21_R8 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'R' )
  {
    if ( name == 'C' )
    {
      c = ( double ) rand ( ) / ( double ) RAND_MAX;
      *value = c;
    }
    else
    {
      cout << "\n";
      cout << "P21_R8 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == 'C' || name == 'c' )
    {
      c = *value;
    }
    else
    {
      cout << "\n";
      cout << "P21_R8 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P21_R8 - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }

  return;
}
//****************************************************************************80

char *p21_region ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P21_REGION returns the name of the integration region for problem 21.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P21_REGION, the name of the integration region.
//
{
  char *value;

  value = new char[7];

  strcpy ( value, "SPHERE" );

  return value;
}
//****************************************************************************80

void p21_title ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P21_TITLE prints a title for problem 21.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
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
  cout << "\n";
  cout << "Problem 21\n";
  cout << "  Name:       SphereMonomial\n";
  cout << "  Region:     Sphere surface, radius 1, center 0\n";
  cout << "  Integrand:  F(X) = C * product ( X(i)^E(i) )\n";
  cout << "  Parameters:\n";
  cout << "              C, defaults to 1.0\n";
  cout << "              E(1:DIM_NUM) defaults to 2.\n";

  return;
}
//****************************************************************************80

void p22_default ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P22_DEFAULT sets default values for problem 22.
//
//  Discussion:
//
//    If a problem uses vector parameters, then the spatial dimension
//    DIM_NUM is needed as input, so that the vector parameters can be
//    properly dimensioned.
//
//    Every problem keeps a count of the number of function calls.  Calling
//    this routine causes that count to be reset to 0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the problem.
//
{
  int i4;
  double r8;

  p22_i4 ( 'D', '*', &i4 );
  p22_r8 ( 'D', '*', &r8 );
  p22_i4vec ( 'D', '*', dim_num, NULL );

  return;
}
//****************************************************************************80

double p22_exact ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P22_EXACT returns the exact integral for problem 22.
//
//  Discussion:
//
//    Thanks to Jeffrey Sax of Extreme Optimization for pointing out a mistake
//    in a previous version of this routine, 28 May 2008.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    28 May 2008
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Output, double P22_EXACT, the exact value of the integral.
//
{
  double arg;
  double c;
  int dim;
  int *e;
  int e_sum;
  double exact;
  double r;

  p22_r8 ( 'G', 'C', &c );
  p22_r8 ( 'G', 'R', &r );

  e = new int[dim_num];
  p22_i4vec ( 'G', 'E', dim_num, e );

  for ( dim = 0; dim < dim_num; dim++ )
  {
    if ( e[dim] % 2 == 1 )
    {
      exact = 0.0;
      return exact;
    }
  }

  e_sum = i4vec_sum ( dim_num, e ) + dim_num;

  exact = 2.0 * c;
  for ( dim = 0; dim < dim_num; dim++ )
  {
    arg = ( double ) ( e[dim] + 1 ) / 2.0;
    exact = exact * r8_gamma ( arg );
  }

  arg = ( double ) ( e_sum ) / 2.0;

  exact = exact / r8_gamma ( arg );

  exact = exact * pow ( r, e_sum ) / ( double ) ( e_sum );

  delete [] e;

  return exact;
}
//****************************************************************************80

double *p22_f ( int dim_num, int point_num, double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    P22_F evaluates the integrand for problem 22.
//
//  Discussion:
//
//    The spatial dimension DIM_NUM is arbitrary.
//
//  Region:
//
//    The interior of a sphere of radius R centered at the origin.
//
//  Integral Parameters:
//
//    C defaults to 1.0.  
//    Call P22_R8 to get or set this value.
//
//    R defaults to 1.0.  
//    Call P22_R8 to get or set this value.
//
//    E(1:DIM_NUM) defaults to (/ 2, 2, ..., 2 /).  
//    Call P22_I4VEC to get or set this value.
//
//  Integrand:
//
//    F(X) = C * X1^E1 * X2^E2 * ... * Xn^En
//
//    C is real, all exponents E are nonnegative integers.
//
//  Exact Integral:
//
//    0, if any exponent is odd.
//    2 * C * R^(E1+E2+...+EN+N) 
//      * Gamma((E1+1)/2) * Gamma((E2+1)/2) * ... * Gamma((En+1)/2) 
//      / ( Gamma( (E1+E2+...+En+N)/2 ) * ( E1+E2+...+EN+N) ), otherwise.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Philip Davis, Philip Rabinowitz,
//    Methods of Numerical Integration,
//    Second Edition,
//    Dover, 2007,
//    ISBN: 0486453391,
//    LC: QA299.3.D28.
//
//    Gerald Folland,
//    How to Integrate a Polynomial Over a Sphere,
//    American Mathematical Monthly, 
//    May 2001, pages 446-448.
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Input, int POINT_NUM, the number of points.
//
//    Input, double X[DIM_NUM*POINT_NUM], the evaluation points.
//
//    Output, double P22_F[POINT_NUM], the integrand values.
//
{
  double c;
  int dim;
  int *e;
  int inc;
  int point;
  double *value;

  p22_r8 ( 'G', 'C', &c );

  e = new int[dim_num];
  p22_i4vec ( 'G', 'E', dim_num, e );

  value = new double[point_num];

  for ( point = 0; point < point_num; point++ )
  {
    value[point] = c;
    for ( dim = 0; dim < dim_num; dim++ )
    {
      value[point] = value[point] * pow ( x[dim+point*dim_num], e[dim] );
    }
  }

  inc = point_num;
  p22_i4 ( 'I', '#', &inc );

  delete [] e;

  return value;
}
//****************************************************************************80

void p22_i4 ( char action, char name, int *value )

//****************************************************************************80
//
//  Purpose:
//
//    P22_I4 sets or gets I4 parameters for problem 22.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION,
//    'D' to set a parmater to its default value;
//    'S' to set a parameter to VALUE,
//    'G' to set VALUE to the parameter's value,
//    'I' to increment a parameter.
//
//    Input, char NAME, the name of the variable.
//    '#' is the number of calls to the integrand routine.
//
//    Input/output, int *VALUE.
//    * If ACTION = 'I', then VALUE is an input quantity, and is the
//      new value to be added to NAME.
//    * If ACTION = 'S', then VALUE is an input quantity, and is the
//      new value to be assigned to NAME.
//    * If ACTION = 'G', then VALUE is an output quantity, and is the
//      current value of NAME.
//
{
  static int calls = 0;

  if ( action == 'D' )
  {
    if ( name == '#' || name == '*' )
    {
      calls = 0;
    }
  }
  else if ( action == 'G' )
  {
    if ( name == '#' )
    {
      *value = calls;
    }
    else
    {
      cout << "\n";
      cout << "P22_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'I' )
  {
    if ( name == '#' )
    {
      calls = calls + *value;
    }
    else
    {
      cout << "\n";
      cout << "P22_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == '#' )
    {
      calls = *value;
    }
    else
    {
      cout << "\n";
      cout << "P22_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P22_I4 - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

void p22_i4vec ( char action, char name, int dim_num, int value[] )

//****************************************************************************80
//
//  Purpose:
//
//    P22_I4VEC sets or gets I4VEC parameters for problem 22.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION, the action.
//    'D' sets the internal value of the object to the default value.
//    'G' means the current value of the object should be returned.
//    'S' means the input values of the object and its dimension
//    should be stored.
//
//    Input, char NAME, the name of the parameter.
//    'E' is the exponent vector.
//
//    Input, int DIM_NUM, the dimension of the object.
//
//    Input/output, int VALUE[DIM_NUM], the value of the object.
//
{
  int dim;
  static int dim_num_save = 0;
  static int *e = NULL;

  if ( dim_num_save != dim_num )
  {
    dim_num_save = 0;
    if ( e )
    {
      delete [] e;
      e = NULL;
    }
  }

  if ( dim_num_save == 0 )
  {
    dim_num_save = dim_num;
    e = new int[dim_num_save];
  }

  if ( action == 'D' )
  {
    if ( name == 'E'  || name == '*' )
    {
      for ( dim = 0; dim < dim_num; dim++ )
      {
        e[dim] = 2;
      }
    }
  }
  else if ( action == 'G' )
  {
    if ( name == 'E' )
    {
      i4vec_copy ( dim_num, e, value );
    }
    else
    {
      cout << "\n";
      cout << "P22_I4VEC - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == 'E' )
    {
      i4vec_copy ( dim_num, value, e );
    }
    else
    {
      cout << "\n";
      cout << "P22_I4VEC - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P22_I4VEC - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

void p22_lim ( int dim_num, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    P22_LIM returns the integration limits for problem 22.
//
//  Discussion:
//
//    Because the integration region is the interior of a sphere
//    of radius R centered at the origin, the integration limits simply 
//    specify the limits of a box containing the integration region.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the argument.
//
//    Output, double A[DIM_NUM], B[DIM_NUM], the lower and upper
//    limits of integration.
//    Note that if A = -HUGE(A), the lower limit is
//    actually negative infinity, and if B = HUGE(B), the upper limit
//    is actually infinity.
//
{
  int dim;
  double r;

  p22_r8 ( 'G', 'R', &r );

  for ( dim = 0; dim < dim_num; dim++ )
  {
    a[dim] = -r;
  }
  for ( dim = 0; dim < dim_num; dim++ )
  {
    b[dim] = r;
  }

  return;
}
//****************************************************************************80

char *p22_name ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P22_NAME returns the name of problem 22.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P22_NAME, the name of the problem.
//
{
  char *value;

  value = new char[13];

  strcpy ( value, "BallMonomial" );

  return value;
}
//****************************************************************************80

void p22_r8 ( char action, char name, double *value )

//****************************************************************************80
//
//  Purpose:
//
//    P22_R8 sets or gets R8 parameters for problem 22.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION,
//    'D' sets the parameter to its default value;
//    'G' gets a parameter.
//    'R' sets the parameter to a random value.
//    'S' sets a parameter to VALUE,
//
//    Input, char NAME, the name of the variable.
//    'R' is the radius.
//
//    Input/output, double *VALUE.
//    * If ACTION = 'S', then VALUE is an input quantity, and is the
//      new value to be assigned to NAME.
//    * If ACTION = 'D', 'G' or 'R', then VALUE is an output quantity, 
//      and is the current value of NAME.
//
{
  static double c = 1.0;
  static double r = 1.0;

  if ( action == 'D' )
  {
    if ( name == 'C' || name == '*' )
    {
      c = 1.0;
      *value = c;
    }
    if ( name == 'R' || name == '*' )
    {
      r = 1.0;
      *value = r;
    }
  }
  else if ( action == 'G' )
  {
    if ( name == 'C' )
    {
      *value = c;
    }
    else if ( name == 'R' )
    {
      *value = r;
    }
    else
    {
      cout << "\n";
      cout << "P22_R8 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'R' )
  {
    if ( name == 'C' )
    {
      c = ( double ) rand ( ) / ( double ) RAND_MAX;
      *value = c;
    }
    else if ( name == 'R' )
    {
      r = ( double ) rand ( ) / ( double ) RAND_MAX;
      *value = r;
    }
    else
    {
      cout << "\n";
      cout << "P22_R8 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == 'C' )
    {
      c = *value;
    }
    else if ( name == 'R' )
    {
      r = *value;
    }
    else
    {
      cout << "\n";
      cout << "P22_R8 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P22_R8 - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }

  return;
}
//****************************************************************************80

char *p22_region ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P22_REGION returns the name of the integration region for problem 22.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P22_REGION, the name of the integration region.
//
{
  char *value;

  value = new char[5];

  strcpy ( value, "BALL" );

  return value;
}
//****************************************************************************80

void p22_title ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P22_TITLE prints a title for problem 22.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
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
  double c;
  double r;

  p22_r8 ( 'G', 'C', &c );
  p22_r8 ( 'G', 'R', &r );

  cout << "\n";
  cout << "Problem 22\n";
  cout << "  Name:       BallMonomial\n";
  cout << "  Region:     Sphere interior, radius R, center 0\n";
  cout << "  Integrand:  F(X) = C * product ( X(i)^E(i) )\n";
  cout << "  Parameters:\n";
  cout << "              C, defaults to 1.0;\n";
  cout << "              R, defaults to 1.0;\n";
  cout << "              E(1:DIM_NUM) defaults to 2;\n";

  return;
}
//****************************************************************************80

void p23_default ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P23_DEFAULT sets default values for problem 23.
//
//  Discussion:
//
//    If a problem uses vector parameters, then the spatial dimension
//    DIM_NUM is needed as input, so that the vector parameters can be
//    properly dimensioned.
//
//    Every problem keeps a count of the number of function calls.  Calling
//    this routine causes that count to be reset to 0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the problem.
//
{
  int i4;
  double r8;

  p23_i4 ( 'D', '*', &i4 );
  p23_r8 ( 'D', '*', &r8 );
  p23_i4vec ( 'D', '*', dim_num, NULL );

  return;
}
//****************************************************************************80

double p23_exact ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P23_EXACT returns the exact integral for problem 23.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Output, double P23_EXACT, the exact value of the integral.
//
{
  double c;
  int dim;
  int *e;
  double exact;

  p23_r8 ( 'G', 'C', &c );

  e = new int[dim_num];
  p23_i4vec ( 'G', 'E', dim_num, e );

  exact = c;
  for ( dim = 0; dim < dim_num; dim++ )
  {
    exact = exact * r8_gamma ( ( double ) ( e[dim] + 1 ) );
  }

  exact = exact / r8_gamma ( ( double ) ( i4vec_sum ( dim_num, e ) + 1 ) );

  delete [] e;

  return exact;
}
//****************************************************************************80

double *p23_f ( int dim_num, int point_num, double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    P23_F evaluates the integrand for problem 23.
//
//  Discussion:
//
//    The spatial dimension DIM_NUM is arbitrary.
//
//  Region:
//
//    The interior of the unit simplex, for which all X's are nonnegative,
//    and sum ( X(1:N) ) <= 1.
//
//  Integral Parameters:
//
//    C defaults to 1.0.  
//    Call P23_R8 to get or set this value.
//
//    E(1:DIM_NUM) defaults to (/ 2, 2, ..., 2 /).  
//    Call P23_I4VEC to get or set this value.
//
//  Integrand:
//
//    F(X) = C * X1^E1 * X2^E2 * ... * Xn^En
//
//    C is real, all exponents E are nonnegative integers.
//
//  Exact Integral:
//
//    C * Gamma(E1+1) * Gamma(E2+1) * ... * Gamma(En+1) / Gamma(E1+E2+...+En+1)
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Philip Davis, Philip Rabinowitz,
//    Methods of Numerical Integration,
//    Second Edition,
//    Dover, 2007,
//    ISBN: 0486453391,
//    LC: QA299.3.D28.
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Input, int POINT_NUM, the number of points.
//
//    Input, double X[DIM_NUM*POINT_NUM], the evaluation points.
//
//    Output, double P23_F[POINT_NUM], the integrand values.
//
{
  double c;
  int dim;
  int *e;
  int inc;
  int point;
  double *value;

  p23_r8 ( 'G', 'C', &c );

  e = new int[dim_num];
  p23_i4vec ( 'G', 'E', dim_num, e );

  value = new double[point_num];

  for ( point = 0; point < point_num; point++ )
  {
    value[point] = c;
    for ( dim = 0; dim < dim_num; dim++ )
    {
      value[point] = value[point] * pow ( x[dim+point*dim_num], e[dim] );
    }
  }

  inc = point_num;
  p23_i4 ( 'I', '#', &inc );

  delete [] e;

  return value;
}
//****************************************************************************80

void p23_i4 ( char action, char name, int *value )

//****************************************************************************80
//
//  Purpose:
//
//    P23_I4 sets or gets I4 parameters for problem 23.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION,
//    'D' to set a parmater to its default value;
//    'S' to set a parameter to VALUE,
//    'G' to set VALUE to the parameter's value,
//    'I' to increment a parameter.
//
//    Input, char NAME, the name of the variable.
//    '#' is the number of calls to the integrand routine.
//
//    Input/output, int *VALUE.
//    * If ACTION = 'I', then VALUE is an input quantity, and is the
//      new value to be added to NAME.
//    * If ACTION = 'S', then VALUE is an input quantity, and is the
//      new value to be assigned to NAME.
//    * If ACTION = 'G', then VALUE is an output quantity, and is the
//      current value of NAME.
//
{
  static int calls = 0;

  if ( action == 'D' )
  {
    if ( name == '#' || name == '*' )
    {
      calls = 0;
    }
  }
  else if ( action == 'G' )
  {
    if ( name == '#' )
    {
      *value = calls;
    }
    else
    {
      cout << "\n";
      cout << "P23_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'I' )
  {
    if ( name == '#' )
    {
      calls = calls + *value;
    }
    else
    {
      cout << "\n";
      cout << "P23_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == '#' )
    {
      calls = *value;
    }
    else
    {
      cout << "\n";
      cout << "P23_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P23_I4 - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

void p23_i4vec ( char action, char name, int dim_num, int value[] )

//****************************************************************************80
//
//  Purpose:
//
//    P23_I4VEC sets or gets I4VEC parameters for problem 23.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION, the action.
//    'D' sets the internal value of the object to the default value.
//    'G' means the current value of the object should be returned.
//    'S' means the input values of the object and its dimension
//    should be stored.
//
//    Input, char NAME, the name of the parameter.
//    'E' is the exponent vector.
//
//    Input, int DIM_NUM, the dimension of the object.
//
//    Input/output, int VALUE[DIM_NUM], the value of the object.
//
{
  int dim;
  static int dim_num_save = 0;
  static int *e = NULL;

  if ( dim_num_save != dim_num )
  {
    dim_num_save = 0;
    if ( e )
    {
      delete [] e;
      e = NULL;
    }
  }

  if ( dim_num_save == 0 )
  {
    dim_num_save = dim_num;
    e = new int[dim_num_save];
  }

  if ( action == 'D' )
  {
    if ( name == 'E'  || name == '*' )
    {
      for ( dim = 0; dim < dim_num; dim++ )
      {
        e[dim] = 2;
      }
    }
  }
  else if ( action == 'G' )
  {
    if ( name == 'E' )
    {
      i4vec_copy ( dim_num, e, value );
    }
    else
    {
      cout << "\n";
      cout << "P23_I4VEC - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == 'E' )
    {
      i4vec_copy ( dim_num, value, e );
    }
    else
    {
      cout << "\n";
      cout << "P23_I4VEC - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P23_I4VEC - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

void p23_lim ( int dim_num, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    P23_LIM returns the integration limits for problem 23.
//
//  Discussion:
//
//    Because the integration region is the interior of the unit simplex,
//    the integration limits simply specify the limits of a box containing 
//    the integration region.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the argument.
//
//    Output, double A[DIM_NUM], B[DIM_NUM], the lower and upper
//    limits of integration.
//    Note that if A = -HUGE(A), the lower limit is
//    actually negative infinity, and if B = HUGE(B), the upper limit
//    is actually infinity.
//
{
  int dim;

  for ( dim = 0; dim < dim_num; dim++ )
  {
    a[dim] = 0.0;
  }
  for ( dim = 0; dim < dim_num; dim++ )
  {
    b[dim] = 1.0;
  }

  return;
}
//****************************************************************************80

char *p23_name ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P23_NAME returns the name of problem 23.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P23_NAME, the name of the problem.
//
{
  char *value;

  value = new char[16];

  strcpy ( value, "SimplexMonomial" );

  return value;
}
//****************************************************************************80

void p23_r8 ( char action, char name, double *value )

//****************************************************************************80
//
//  Purpose:
//
//    P23_R8 sets or gets R8 parameters for problem 23.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION,
//    'D' sets the parameter to its default value;
//    'G' gets a parameter.
//    'R' sets the parameter to a random value.
//    'S' sets a parameter to VALUE,
//
//    Input, char NAME, the name of the variable.
//    'R' is the radius.
//
//    Input/output, double *VALUE.
//    * If ACTION = 'S', then VALUE is an input quantity, and is the
//      new value to be assigned to NAME.
//    * If ACTION = 'D', 'G' or 'R', then VALUE is an output quantity, 
//      and is the current value of NAME.
//
{
  static double c = 1.0;

  if ( action == 'D' )
  {
    if ( name == 'C' || name == '*' )
    {
      c = 1.0;
    }
  }
  else if ( action == 'G' )
  {
    if ( name == 'C' )
    {
      *value = c;
    }
    else
    {
      cout << "\n";
      cout << "P23_R8 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'R' )
  {
    if ( name == 'C' )
    {
      c = ( double ) rand ( ) / ( double ) RAND_MAX;
      *value = c;
    }
    else
    {
      cout << "\n";
      cout << "P23_R8 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == 'C' )
    {
      c = *value;
    }
    else
    {
      cout << "\n";
      cout << "P23_R8 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P23_R8 - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }

  return;
}
//****************************************************************************80

char *p23_region ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P23_REGION returns the name of the integration region for problem 23.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P23_REGION, the name of the integration region.
//
{
  char *value;

  value = new char[8];

  strcpy ( value, "SIMPLEX" );

  return value;
}
//****************************************************************************80

void p23_title ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P23_TITLE prints a title for problem 23.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
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
  double c;

  p23_r8 ( 'G', 'C', &c );

  cout << "\n";
  cout << "Problem 23\n";
  cout << "  Name:       SimplexMonomial\n";
  cout << "  Region:     Interior of unit simplex\n";
  cout << "  Integrand:  F(X) = C * product ( X(i)^E(i) )\n";
  cout << "  Parameters:\n";
  cout << "              C, defaults to 1.0;\n";
  cout << "              E(1:DIM_NUM) defaults to 2;\n";

  return;
}
//****************************************************************************80

void p24_default ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P24_DEFAULT sets default values for problem 24.
//
//  Discussion:
//
//    If a problem uses vector parameters, then the spatial dimension
//    DIM_NUM is needed as input, so that the vector parameters can be
//    properly dimensioned.
//
//    Every problem keeps a count of the number of function calls.  Calling
//    this routine causes that count to be reset to 0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the problem.
//
{
  int i4;

  p24_i4 ( 'D', '*', &i4 );
  p24_r8vec ( 'D', '*', dim_num, NULL );

  return;
}
//****************************************************************************80

double p24_exact ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P24_EXACT returns the exact integral for problem 24.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Output, double P24_EXACT, the exact value of the integral.
//
{
  double exact;

  exact = 1.0;

  return exact;
}
//****************************************************************************80

double *p24_f ( int dim_num, int point_num, double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    P24_F evaluates the integrand for problem 24.
//
//  Discussion:
//
//    The spatial dimension DIM_NUM is arbitrary.
//
//  Region:
//
//    0 <= X(1:DIM_NUM) <= 1
//
//  Integral Parameters:
//
//    C(1:DIM_NUM) defaults to 0.0.
//
//    A typical, more difficult problem, has
//      C(I) = I**(1/3)
// 
//    Call P24_R8VEC to get or set C.
//
//  Integrand:
//
//    F(X) = product (   ( abs ( 4 * X(1:DIM_NUM) - 2 ) + C(1:DIM_NUM) ) 
//                     / ( 1 + C(1:DIM_NUM) ) 
//                   )
//
//  Exact Integral:
//
//    1
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Stephen Joe, Frances Kuo,
//    Remark on Algorithm 659:
//    Implementing Sobol's Quasirandom Seqence Generator,
//    ACM Transactions on Mathematical Software,
//    Volume 29, Number 1, March 2003, pages 49-57.
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Input, int POINT_NUM, the number of points.
//
//    Input, double X[DIM_NUM*POINT_NUM], the evaluation points.
//
//    Output, double P24_F[POINT_NUM], the integrand values.
//
{
  double *c;
  int dim;
  int inc;
  int point;
  double *value;

  c = new double[dim_num];
  p24_r8vec ( 'G', 'C', dim_num, c );

  value = new double[point_num];

  for ( point = 0; point < point_num; point++ )
  {
    value[point] = 1.0;
    for ( dim = 0; dim < dim_num; dim++ )
    {
      value[point] = value[point] * ( r8_abs ( 4.0 
        * x[dim+point*dim_num] - 2.0 ) + c[dim] ) / ( 1.0 + c[dim] );
    }
  }

  inc = point_num;
  p24_i4 ( 'I', '#', &inc );

  delete [] c;

  return value;
}
//****************************************************************************80

void p24_i4 ( char action, char name, int *value )

//****************************************************************************80
//
//  Purpose:
//
//    P24_I4 sets or gets I4 parameters for problem 24.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION,
//    'D' to set a parmater to its default value;
//    'S' to set a parameter to VALUE,
//    'G' to set VALUE to the parameter's value,
//    'I' to increment a parameter.
//
//    Input, char NAME, the name of the variable.
//    '#' is the number of calls to the integrand routine.
//
//    Input/output, int *VALUE.
//    * If ACTION = 'I', then VALUE is an input quantity, and is the
//      new value to be added to NAME.
//    * If ACTION = 'S', then VALUE is an input quantity, and is the
//      new value to be assigned to NAME.
//    * If ACTION = 'G', then VALUE is an output quantity, and is the
//      current value of NAME.
//
{
  static int calls = 0;

  if ( action == 'D' )
  {
    if ( name == '#' || name == '*' )
    {
      calls = 0;
    }
  }
  else if ( action == 'G' )
  {
    if ( name == '#' )
    {
      *value = calls;
    }
    else
    {
      cout << "\n";
      cout << "P24_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'I' )
  {
    if ( name == '#' )
    {
      calls = calls + *value;
    }
    else
    {
      cout << "\n";
      cout << "P24_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == '#' )
    {
      calls = *value;
    }
    else
    {
      cout << "\n";
      cout << "P24_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P24_I4 - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

void p24_lim ( int dim_num, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    P24_LIM returns the integration limits for problem 24.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the argument.
//
//    Output, double A[DIM_NUM], B[DIM_NUM], the lower and upper
//    limits of integration.
//    Note that if A = -HUGE(A), the lower limit is
//    actually negative infinity, and if B = HUGE(B), the upper limit
//    is actually infinity.
//
{
  int dim;

  for ( dim = 0; dim < dim_num; dim++ )
  {
    a[dim] = 0.0;
  }
  for ( dim = 0; dim < dim_num; dim++ )
  {
    b[dim] = 1.0;
  }

  return;
}
//****************************************************************************80

char *p24_name ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P24_NAME returns the name of problem 24.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P24_NAME, the name of the problem.
//
{
  char *value;

  value = new char[17];

  strcpy ( value, "(|4X-2|+c)/(1+c)" );

  return value;
}
//****************************************************************************80

void p24_r8vec ( char action, char name, int dim_num, double value[] )

//****************************************************************************80
//
//  Purpose:
//
//    P24_R8VEC sets or gets R8VEC parameters for problem 24.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    06 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION, the action.
//    'D' sets the internal value of the object to a default value.
//    If NAME = '*', then all variables are defaulted.
//    'G' means the current value of the object should be returned.
//    'R' means randomize the object and return its value.
//    'S' means the object should be set to the input VALUE.
//
//    Input, char NAME, the name of the parameter.
//    'C' is the coefficient vector.
//
//    Input, int DIM_NUM, the dimension of the object.
//
//    Input/output, double VALUE[DIM_NUM], the value of the object.
//
{
  static double *c = NULL;
  int dim;
  static int dim_num_save = 0;

  if ( dim_num_save != dim_num )
  {
    dim_num_save = 0;
    if ( c )
    {
      delete [] c;
      c = NULL;
    }
  }

  if ( dim_num_save == 0 )
  {
    dim_num_save = dim_num;
    c = new double[dim_num_save];
  }

  if ( action == 'D' )
  {
    if ( name == 'C' || name == '*' )
    {
      for ( dim = 0; dim < dim_num; dim++ )
      {
        c[dim] = 0.0;
      }
    }
  }
  else if ( action == 'G' )
  {
    if ( name == 'C' )
    {
      r8vec_copy ( dim_num, c, value );
    }
    else
    {
      cout << "\n";
      cout << "P24_R8VEC - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'R' )
  {
    if ( name == 'C' )
    {
      for ( dim = 0; dim < dim_num; dim++ )
      {
        c[dim] = ( double ) rand ( ) / ( double ) RAND_MAX;
      }
      r8vec_copy ( dim_num, c, value );
    }
    else
    {
      cout << "\n";
      cout << "P24_R8VEC - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == 'C' )
    {
      r8vec_copy ( dim_num, value, c );
    }
    else
    {
      cout << "\n";
      cout << "P24_R8VEC - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P24_R8VEC - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

char *p24_region ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P24_REGION returns the name of the integration region for problem 24.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P24_REGION, the name of the integration region.
//
{
  char *value;

  value = new char[4];

  strcpy ( value, "BOX" );

  return value;
}
//****************************************************************************80

void p24_title ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P24_TITLE prints a title for problem 24.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
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
  cout << "\n";
  cout << "Problem 24\n";
  cout << "  Name:       (|4X-2|+c)/(1+c)\n";
  cout << "  Region:     0 <= X(i) <= 1,\n";
  cout << "  Integrand:  F(X) = product ( "
       << "( |4*X(i)-2| + C(i) ) / (1 + C(i) )\n";
  cout << "  Parameters:\n";
  cout << "              C(1:DIM_NUM) defaults to 0.0;\n";

  return;
}
//****************************************************************************80

void p25_default ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P25_DEFAULT sets default values for problem 25.
//
//  Discussion:
//
//    If a problem uses vector parameters, then the spatial dimension
//    DIM_NUM is needed as input, so that the vector parameters can be
//    properly dimensioned.
//
//    Every problem keeps a count of the number of function calls.  Calling
//    this routine causes that count to be reset to 0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the problem.
//
{
  int i4;
  double r8;

  p25_i4 ( 'D', '*', &i4 );
  p25_r8 ( 'D', '*', &r8 );

  return;
}
//****************************************************************************80

double p25_exact ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P25_EXACT returns the exact integral for problem 25.
//
//  Discussion:
//
//    The formula in the reference seems to yield a result
//    that is too small by 1.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Output, double P25_EXACT, the exact value of the integral.
//
{
  double c;
  double exact;
  int i;
  double roundoff;
  double term;
  double term2;

  p25_r8 ( 'G', 'C', &c );

  roundoff = r8_epsilon ( );

  exact = 1.0;

  term = 1.0;
  i = 0;

  for ( ; ; )
  {
    i = i + 1;
    term = term * c / ( double ) ( i );

    term2 = term / ( double ) ( i4_power ( i + 1, dim_num ) );

    if ( r8_abs ( term2 ) <= roundoff * ( 1.0 + r8_abs ( exact ) ) )
    {
      break;
    }
    exact = exact + term2;
  }

  return exact;
}
//****************************************************************************80

double *p25_f ( int dim_num, int point_num, double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    P25_F evaluates the integrand for problem 25.
//
//  Discussion:
//
//    The spatial dimension DIM_NUM is arbitrary.
//
//  Region:
//
//    0 <= X(1:DIM_NUM) <= 1
//
//  Integrand:
//
//    exp ( C * product ( X(1:N) ) )
//
//  Parameters:
//
//    C defaults to 0.3, and can be changed by calling P25_R8.
//
//  Exact Integral:
//
//    sum ( 1 <= i <= Infinity ) C**i / ( ( i + 1 )**N * i// )
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    [Integral #3],
//    Thomas Patterson,
//    On the Construction of a Practical Ermakov-Zolotukhin 
//    Multiple Integrator,
//    in Numerical Integration: Recent Developments, Software
//    and Applications,
//    edited by Patrick Keast and Graeme Fairweather,
//    D. Reidel, 1987, pages 269-290.
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Input, int POINT_NUM, the number of points.
//
//    Input, double X[DIM_NUM*POINT_NUM], the evaluation points.
//
//    Output, double P25_F[POINT_NUM], the integrand values.
//
{
  double c;
  int inc;
  int point;
  double *value;

  p25_r8 ( 'G', 'C', &c );

  value = new double[point_num];

  for ( point = 0; point < point_num; point++ )
  {
    value[point] = exp ( c * r8vec_product ( dim_num, x+point*dim_num ) );
  }

  inc = point_num;
  p25_i4 ( 'I', '#', &inc );

  return value;
}
//****************************************************************************80

void p25_i4 ( char action, char name, int *value )

//****************************************************************************80
//
//  Purpose:
//
//    P25_I4 sets or gets I4 parameters for problem 25.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION,
//    'D' to set a parmater to its default value;
//    'S' to set a parameter to VALUE,
//    'G' to set VALUE to the parameter's value,
//    'I' to increment a parameter.
//
//    Input, char NAME, the name of the variable.
//    '#' is the number of calls to the integrand routine.
//
//    Input/output, int *VALUE.
//    * If ACTION = 'I', then VALUE is an input quantity, and is the
//      new value to be added to NAME.
//    * If ACTION = 'S', then VALUE is an input quantity, and is the
//      new value to be assigned to NAME.
//    * If ACTION = 'G', then VALUE is an output quantity, and is the
//      current value of NAME.
//
{
  static int calls = 0;

  if ( action == 'D' )
  {
    if ( name == '#' || name == '*' )
    {
      calls = 0;
    }
  }
  else if ( action == 'G' )
  {
    if ( name == '#' )
    {
      *value = calls;
    }
    else
    {
      cout << "\n";
      cout << "P25_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'I' )
  {
    if ( name == '#' )
    {
      calls = calls + *value;
    }
    else
    {
      cout << "\n";
      cout << "P25_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == '#' )
    {
      calls = *value;
    }
    else
    {
      cout << "\n";
      cout << "P25_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P25_I4 - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

void p25_lim ( int dim_num, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    P25_LIM returns the integration limits for problem 25.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the argument.
//
//    Output, double A[DIM_NUM], B[DIM_NUM], the lower and upper
//    limits of integration.
//    Note that if A = -HUGE(A), the lower limit is
//    actually negative infinity, and if B = HUGE(B), the upper limit
//    is actually infinity.
//
{
  int dim;

  for ( dim = 0; dim < dim_num; dim++ )
  {
    a[dim] = 0.0;
  }
  for ( dim = 0; dim < dim_num; dim++ )
  {
    b[dim] = 1.0;
  }

  return;
}
//****************************************************************************80

char *p25_name ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P25_NAME returns the name of problem 25.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    12 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P25_NAME, the name of the problem.
//
{
  char *value;

  value = new char[23];

  strcpy ( value, "Patterson #3, exp(c*X)" );

  return value;
}
//****************************************************************************80

void p25_r8 ( char action, char name, double *value )

//****************************************************************************80
//
//  Purpose:
//
//    P25_R8 sets or gets R8 parameters for problem 25.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION,
//    'D' sets the parameter to its default value;
//    'G' gets a parameter.
//    'R' sets the parameter to a random value.
//    'S' sets a parameter to VALUE,
//
//    Input, char NAME, the name of the variable.
//    'R' is the radius.
//
//    Input/output, double *VALUE.
//    * If ACTION = 'S', then VALUE is an input quantity, and is the
//      new value to be assigned to NAME.
//    * If ACTION = 'D', 'G' or 'R', then VALUE is an output quantity, 
//      and is the current value of NAME.
//
{
  static double c = 0.3;

  if ( action == 'D' )
  {
    if ( name == 'C' || name == '*' )
    {
      c = 0.3;
    }
  }
  else if ( action == 'G' )
  {
    if ( name == 'C' )
    {
      *value = c;
    }
    else
    {
      cout << "\n";
      cout << "P25_R8 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'R' )
  {
    if ( name == 'C' )
    {
      c = ( double ) rand ( ) / ( double ) RAND_MAX;
      *value = c;
    }
    else
    {
      cout << "\n";
      cout << "P25_R8 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == 'C' )
    {
      c = *value;
    }
    else
    {
      cout << "\n";
      cout << "P25_R8 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P25_R8 - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }

  return;
}
//****************************************************************************80

char *p25_region ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P25_REGION returns the name of the integration region for problem 25.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P25_REGION, the name of the integration region.
//
{
  char *value;

  value = new char[4];

  strcpy ( value, "BOX" );

  return value;
}
//****************************************************************************80

void p25_title ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P25_TITLE prints a title for problem 10.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
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
  double c;

  p25_r8 ( 'G', 'C', &c );

  cout << "\n";
  cout << "Problem 25\n";
  cout << "  Name:       Patterson #3, exp(c*X))\n";
  cout << "  Region:     0 <= X(i) <= 1\n";
  cout << "  Integrand:  F(X) = exp ( C * product ( X(i) ) )\n";
  cout << "  Parameters:\n";
  cout << "              C, defaults to 0.3\n";

  return;
}
//****************************************************************************80

void p26_default ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P26_DEFAULT sets default values for problem 26.
//
//  Discussion:
//
//    If a problem uses vector parameters, then the spatial dimension
//    DIM_NUM is needed as input, so that the vector parameters can be
//    properly dimensioned.
//
//    Every problem keeps a count of the number of function calls.  Calling
//    this routine causes that count to be reset to 0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the problem.
//
{
  int i4;

  p26_i4 ( 'D', '*', &i4 );
  p26_r8vec ( 'D', '*', dim_num, NULL );

  return;
}
//****************************************************************************80

double p26_exact ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P26_EXACT returns the exact integral for problem 26.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Output, double P26_EXACT, the exact value of the integral.
//
{
  double *c;
  int dim;
  double exact;

  c = new double[dim_num];
  p26_r8vec ( 'G', 'C', dim_num, c );

  exact = 1.0;
  for ( dim = 0; dim < dim_num; dim++ )
  {
    exact = exact * ( 1.0 - exp ( -c[dim] ) );
  }

  delete [] c;

  return exact;
}
//****************************************************************************80

double *p26_f ( int dim_num, int point_num, double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    P26_F evaluates the integrand for problem 26.
//
//  Discussion:
//
//    The integrand is similar to that for the Patterson integral #7,
//    except for a normalization of the constants, and a (random) constant
//    factor in the integrand.
//
//    The spatial dimension DIM_NUM is arbitrary.
//
//  Region:
//
//    0 <= X(1:DIM_NUM) <= 1
//
//  Integral Parameters:
//
//    The integral depends on a parameter vector C(1:N).
//
//    The reference suggests choosing C at random in [0,1].
//    C(1:N) defaults to 1/N.
//
//    To get or set C, call P26_R8VEC.
//
//  Integrand:
//
//    product ( c(1:dim_num) * ( exp ( - c(1:dim_num) * x(1:dim_num) ) ) )
//    = product ( c(1:dim_num) ) * exp ( - sum ( c(1:dim_num) * x(1:dim_num) ) )
//
//  Exact Integral:
//
//    product ( 1 - exp ( c(1:n) ) )
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    [Integral #1],
//    Thomas Patterson,
//    On the Construction of a Practical Ermakov-Zolotukhin 
//    Multiple Integrator,
//    in Numerical Integration: Recent Developments, Software
//    and Applications,
//    edited by Patrick Keast and Graeme Fairweather,
//    D. Reidel, 1987, pages 269-290.
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Input, int POINT_NUM, the number of points.
//
//    Input, double X[DIM_NUM*POINT_NUM], the evaluation points.
//
//    Output, double P26_F[POINT_NUM], the integrand values.
//
{
  double *c;
  int inc;
  int point;
  double *value;

  c = new double[dim_num];
  p26_r8vec ( 'G', 'C', dim_num, c );

  value = new double[point_num];

  for ( point = 0; point < point_num; point++ )
  {
    value[point] = r8vec_product ( dim_num, c ) 
      * exp ( - r8vec_dot ( dim_num, c, x+point*dim_num ) );
  }

  inc = point_num;
  p26_i4 ( 'I', '#', &inc );

  delete [] c;

  return value;
}
//****************************************************************************80

void p26_i4 ( char action, char name, int *value )

//****************************************************************************80
//
//  Purpose:
//
//    P26_I4 sets or gets I4 parameters for problem 26.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION,
//    'D' to set a parmater to its default value;
//    'S' to set a parameter to VALUE,
//    'G' to set VALUE to the parameter's value,
//    'I' to increment a parameter.
//
//    Input, char NAME, the name of the variable.
//    '#' is the number of calls to the integrand routine.
//
//    Input/output, int *VALUE.
//    * If ACTION = 'I', then VALUE is an input quantity, and is the
//      new value to be added to NAME.
//    * If ACTION = 'S', then VALUE is an input quantity, and is the
//      new value to be assigned to NAME.
//    * If ACTION = 'G', then VALUE is an output quantity, and is the
//      current value of NAME.
//
{
  static int calls = 0;

  if ( action == 'D' )
  {
    if ( name == '#' || name == '*' )
    {
      calls = 0;
    }
  }
  else if ( action == 'G' )
  {
    if ( name == '#' )
    {
      *value = calls;
    }
    else
    {
      cout << "\n";
      cout << "P26_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'I' )
  {
    if ( name == '#' )
    {
      calls = calls + *value;
    }
    else
    {
      cout << "\n";
      cout << "P26_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == '#' )
    {
      calls = *value;
    }
    else
    {
      cout << "\n";
      cout << "P26_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P26_I4 - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

void p26_lim ( int dim_num, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    P26_LIM returns the integration limits for problem 26.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the argument.
//
//    Output, double A[DIM_NUM], B[DIM_NUM], the lower and upper
//    limits of integration.
//    Note that if A = -HUGE(A), the lower limit is
//    actually negative infinity, and if B = HUGE(B), the upper limit
//    is actually infinity.
//
{
  int dim;

  for ( dim = 0; dim < dim_num; dim++ )
  {
    a[dim] = 0.0;
  }
  for ( dim = 0; dim < dim_num; dim++ )
  {
    b[dim] = 1.0;
  }

  return;
}
//****************************************************************************80

char *p26_name ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P26_NAME returns the name of problem 26.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P26_NAME, the name of the problem.
//
{
  char *value;

  value = new char[13];

  strcpy ( value, "Patterson #1" );

  return value;
}
//****************************************************************************80

void p26_r8vec ( char action, char name, int dim_num, double value[] )

//****************************************************************************80
//
//  Purpose:
//
//    P26_R8VEC sets or gets R8VEC parameters for problem 26.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION, the action.
//    'D' sets the internal value of the object to a default value.
//    If NAME = '*', then all variables are defaulted.
//    'G' means the current value of the object should be returned.
//    'R' means randomize the object and return its value.
//    'S' means the object should be set to the input VALUE.
//
//    Input, char NAME, the name of the parameter.
//    'C' is the coefficient vector.
//
//    Input, int DIM_NUM, the dimension of the object.
//
//    Input/output, double VALUE[DIM_NUM], the value of the object.
//
{
  static double *c = NULL;
  int dim;
  static int dim_num_save = 0;

  if ( dim_num_save != dim_num )
  {
    dim_num_save = 0;
    if ( c )
    {
      delete [] c;
      c = NULL;
    }
  }

  if ( dim_num_save == 0 )
  {
    dim_num_save = dim_num;
    c = new double[dim_num_save];
  }

  if ( action == 'D' )
  {
    if ( name == 'C' || name == '*' )
    {
      for ( dim = 0; dim< dim_num; dim++ )
      {
        c[dim] = 1.0 / ( double ) ( dim_num );
      }
    }
  }
  else if ( action == 'G' )
  {
    if ( name == 'C' )
    {
      r8vec_copy ( dim_num, c, value );
    }
    else
    {
      cout << "\n";
      cout << "P26_R8VEC - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'R' )
  {
    if ( name == 'C' )
    {
      for ( dim = 0; dim < dim_num; dim++ )
      {
        c[dim] = ( double ) rand ( ) / ( double ) RAND_MAX;
      }
      r8vec_copy ( dim_num, c, value );
    }
    else
    {
      cout << "\n";
      cout << "P26_R8VEC - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == 'C' )
    {
      r8vec_copy ( dim_num, value, c );
    }
    else
    {
      cout << "\n";
      cout << "P26_R8VEC - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P26_R8VEC - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

char *p26_region ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P26_REGION returns the name of the integration region for problem 26.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P26_REGION, the name of the integration region.
//
{
  char *value;

  value = new char[4];

  strcpy ( value, "BOX" );

  return value;
}
//****************************************************************************80

void p26_title ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P26_TITLE prints a title for problem 26.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
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
  cout << "\n";
  cout << "Problem 26\n";
  cout << "  Name:       Patterson #1\n";
  cout << "  Region:     0 <= X(i) <= 1\n";
  cout << "  Integrand:  F(X) = product ( C(i) * exp ( - C(i) * X(i) ) )\n";
  cout << "  Parameters:\n";
  cout << "              C(1:DIM_NUM) defaults to 1/DIM_NUM.\n";

  return;
}
//****************************************************************************80

void p27_default ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P27_DEFAULT sets default values for problem 27.
//
//  Discussion:
//
//    If a problem uses vector parameters, then the spatial dimension
//    DIM_NUM is needed as input, so that the vector parameters can be
//    properly dimensioned.
//
//    Every problem keeps a count of the number of function calls.  Calling
//    this routine causes that count to be reset to 0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the problem.
//
{
  int i4;
  double r8;

  p27_i4 ( 'D', '*', &i4 );
  p27_r8 ( 'D', '*', &r8 );
  p27_r8vec ( 'D', '*', dim_num, NULL );

  return;
}
//****************************************************************************80

double p27_exact ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P27_EXACT returns the exact integral for problem 27.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Output, double P27_EXACT, the exact value of the integral.
//
{
  double *c;
  int dim;
  double exact;
  double r;
  double pi = 3.141592653589793;

  p27_r8 ( 'G', 'R', &r );

  c = new double[dim_num];
  p27_r8vec ( 'G', 'C', dim_num, c );

  exact = pow ( 2.0, dim_num ) * 
    cos ( 2.0 * pi * r + 0.5 * r8vec_sum ( dim_num, c ) );

  for ( dim = 0; dim < dim_num; dim++ )
  {
    exact = exact * sin ( 0.5 * c[dim] ) / c[dim];
  }

  delete [] c;

  return exact;
}
//****************************************************************************80

double *p27_f ( int dim_num, int point_num, double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    P27_F evaluates the integrand for problem 27.
//
//  Discussion:
//
//    The spatial dimension DIM_NUM is arbitrary.
//
//  Region:
//
//    0 <= X(1:DIM_NUM) <= 1
//
//  Integral Parameters:
//
//    The integral depends on a parameter R and vector C(1:N).
//
//    R defaults to 0.3.
//
//    The reference suggests choosing C at random in [0,1]
//    and then multiplying by the normalizing factor (25/N).
//    C(1:N) defaults to 1/N.
//
//    To get or set R, call P27_R8.
//    To get or set C, call P27_R8VEC.
//
//  Integrand:
//
//    cos ( 2 * pi * R + sum ( c(1:n) * x(1:n) ) )
//
//  Exact Integral:
//
//    2**N * cos ( 2 * pi * R + 0.5 * sum ( c(1:n) ) )
//      * product ( sin ( 0.5 * c(1:n) ) / c(1:n) )
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Alan Genz,
//    [ Integral #1]
//    A Package for Testing Multiple Integration Subroutines,
//    in Numerical Integration: Recent Developments, Software
//    and Applications,
//    edited by Patrick Keast and Graeme Fairweather,
//    D Reidel, 1987, pages 337-340.
//
//    [Integral #5],
//    Thomas Patterson,
//    On the Construction of a Practical Ermakov-Zolotukhin 
//    Multiple Integrator,
//    in Numerical Integration: Recent Developments, Software
//    and Applications,
//    edited by Patrick Keast and Graeme Fairweather,
//    D. Reidel, 1987, pages 269-290.
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Input, int POINT_NUM, the number of points.
//
//    Input, double X[DIM_NUM*POINT_NUM], the evaluation points.
//
//    Output, double P27_F[POINT_NUM], the integrand values.
//
{
  double arg;
  double *c;
  int inc;
  double r;
  double pi = 3.141592653589793;
  int point;
  double *value;

  p27_r8 ( 'G', 'R', &r );

  c = new double[dim_num];
  p27_r8vec ( 'G', 'C', dim_num, c );

  value = new double[point_num];

  for ( point = 0; point < point_num; point++ )
  {
    arg = 2.0 * pi * r + r8vec_dot ( dim_num, c, x+point*dim_num );
    value[point] = cos ( arg );
  }

  inc = point_num;
  p27_i4 ( 'I', '#', &inc );

  delete [] c;

  return value;
}
//****************************************************************************80

void p27_i4 ( char action, char name, int *value )

//****************************************************************************80
//
//  Purpose:
//
//    P27_I4 sets or gets I4 parameters for problem 27.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION,
//    'D' to set a parmater to its default value;
//    'S' to set a parameter to VALUE,
//    'G' to set VALUE to the parameter's value,
//    'I' to increment a parameter.
//
//    Input, char NAME, the name of the variable.
//    '#' is the number of calls to the integrand routine.
//
//    Input/output, int *VALUE.
//    * If ACTION = 'I', then VALUE is an input quantity, and is the
//      new value to be added to NAME.
//    * If ACTION = 'S', then VALUE is an input quantity, and is the
//      new value to be assigned to NAME.
//    * If ACTION = 'G', then VALUE is an output quantity, and is the
//      current value of NAME.
//
{
  static int calls = 0;

  if ( action == 'D' )
  {
    if ( name == '#' || name == '*' )
    {
      calls = 0;
    }
  }
  else if ( action == 'G' )
  {
    if ( name == '#' )
    {
      *value = calls;
    }
    else
    {
      cout << "\n";
      cout << "P27_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'I' )
  {
    if ( name == '#' )
    {
      calls = calls + *value;
    }
    else
    {
      cout << "\n";
      cout << "P27_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == '#' )
    {
      calls = *value;
    }
    else
    {
      cout << "\n";
      cout << "P27_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P27_I4 - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

void p27_lim ( int dim_num, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    P27_LIM returns the integration limits for problem 27.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the argument.
//
//    Output, double A[DIM_NUM], B[DIM_NUM], the lower and upper
//    limits of integration.
//    Note that if A = -HUGE(A), the lower limit is
//    actually negative infinity, and if B = HUGE(B), the upper limit
//    is actually infinity.
//
{
  int dim;

  for ( dim = 0; dim < dim_num; dim++ )
  {
    a[dim] = 0.0;
  }
  for ( dim = 0; dim < dim_num; dim++ )
  {
    b[dim] = 1.0;
  }

  return;
}
//****************************************************************************80

char *p27_name ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P27_NAME returns the name of problem 27.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P27_NAME, the name of the problem.
//
{
  char *value;

  value = new char[36];

  strcpy ( value, "Genz #1 / Patterson #5, Oscillatory" );

  return value;
}
//****************************************************************************80

void p27_r8 ( char action, char name, double *value )

//****************************************************************************80
//
//  Purpose:
//
//    P27_R8 sets or gets R8 parameters for problem 27.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION,
//    'D' sets the parameter to its default value;
//    'G' gets a parameter.
//    'R' sets the parameter to a random value.
//    'S' sets a parameter to VALUE,
//
//    Input, char NAME, the name of the variable.
//    'R' is the radius.
//
//    Input/output, double *VALUE.
//    * If ACTION = 'S', then VALUE is an input quantity, and is the
//      new value to be assigned to NAME.
//    * If ACTION = 'D', 'G' or 'R', then VALUE is an output quantity, 
//      and is the current value of NAME.
//
{
  static double r = 0.3;

  if ( action == 'D' )
  {
    if ( name == 'R' || name == '*' )
    {
      r = 0.3;
    }
  }
  else if ( action == 'G' )
  {
    if ( name == 'R' )
    {
      *value = r;
    }
    else
    {
      cout << "\n";
      cout << "P27_R8 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'R' )
  {
    if ( name == 'R' )
    {
      r = ( double ) rand ( ) / ( double ) RAND_MAX;
      *value = r;
    }
    else
    {
      cout << "\n";
      cout << "P27_R8 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == 'R' )
    {
      r = *value;
    }
    else
    {
      cout << "\n";
      cout << "P27_R8 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P27_R8 - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }

  return;
}
//****************************************************************************80

void p27_r8vec ( char action, char name, int dim_num, double value[] )

//****************************************************************************80
//
//  Purpose:
//
//    P27_R8VEC sets or gets R8VEC parameters for problem 27.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION, the action.
//    'D' sets the internal value of the object to a default value.
//    If NAME = '*', then all variables are defaulted.
//    'G' means the current value of the object should be returned.
//    'R' means randomize the object and return its value.
//    'S' means the object should be set to the input VALUE.
//
//    Input, char NAME, the name of the parameter.
//    'C' is the coefficient vector.
//
//    Input, int DIM_NUM, the dimension of the object.
//
//    Input/output, double VALUE[DIM_NUM], the value of the object.
//
{
  static double *c = NULL;
  int dim;
  static int dim_num_save = 0;

  if ( dim_num_save != dim_num )
  {
    dim_num_save = 0;
    if ( c )
    {
      delete [] c;
      c = NULL;
    }
  }

  if ( dim_num_save == 0 )
  {
    dim_num_save = dim_num;
    c = new double[dim_num_save];
  }

  if ( action == 'D' )
  {
    if ( name == 'C' || name == '*' )
    {
      for ( dim = 0; dim < dim_num; dim++ )
      {
        c[dim] = 1.0 / ( double ) ( dim_num );
      }
    }
  }
  else if ( action == 'G' )
  {
    if ( name == 'C' )
    {
      r8vec_copy ( dim_num, c, value );
    }
    else
    {
      cout << "\n";
      cout << "P27_R8VEC - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'R' )
  {
    if ( name == 'C' )
    {
      for ( dim = 0; dim < dim_num; dim++ )
      {
        c[dim] = ( double ) rand ( ) / ( double ) RAND_MAX;
      }
      r8vec_copy ( dim_num, c, value );
    }
    else
    {
      cout << "\n";
      cout << "P27_R8VEC - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == 'C' )
    {
      r8vec_copy ( dim_num, value, c );
    }
    else
    {
      cout << "\n";
      cout << "P27_R8VEC - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P27_R8VEC - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

char *p27_region ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P27_REGION returns the name of the integration region for problem 27.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P27_REGION, the name of the integration region.
//
{
  char *value;

  value = new char[4];

  strcpy ( value, "BOX" );

  return value;
}
//****************************************************************************80

void p27_title ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P27_TITLE prints a title for problem 27.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
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
  cout << "\n";
  cout << "Problem 27\n";
  cout << "  Name:       Genz #1 / Patterson #5, Oscillatory\n";
  cout << "  Region:     0 <= X(i) <= 1\n";
  cout << "  Integrand:  F(X) = cos ( 2 * pi * R + sum ( C(i) * X(i) ) )\n";
  cout << "  Parameters:\n";
  cout << "              R, defaults to 0.3\n";
  cout << "              C(1:DIM_NUM) defaults to 1/DIM_NUM\n";

  return;
}
//****************************************************************************80

void p28_default ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P28_DEFAULT sets default values for problem 28.
//
//  Discussion:
//
//    If a problem uses vector parameters, then the spatial dimension
//    DIM_NUM is needed as input, so that the vector parameters can be
//    properly dimensioned.
//
//    Every problem keeps a count of the number of function calls.  Calling
//    this routine causes that count to be reset to 0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the problem.
//
{
  int i4;

  p28_i4 ( 'D', '*', &i4 );
  p28_r8vec ( 'D', '*', dim_num, NULL );

  return;
}
//****************************************************************************80

double p28_exact ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P28_EXACT returns the exact integral for problem 28.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Output, double P28_EXACT, the exact value of the integral.
//
{
  double *c;
  int dim;
  double exact;
  double *z;

  c = new double[dim_num];
  p28_r8vec ( 'G', 'C', dim_num, c );

  z = new double[dim_num];
  p28_r8vec ( 'G', 'Z', dim_num, z );

  exact = 1.0;
  for ( dim = 0; dim < dim_num;dim++ )
  {
    exact = exact * (   atan ( ( 1.0 - z[dim] ) / c[dim] ) 
                      + atan (         z[dim]   / c[dim] ) ) 
                    / c[dim];
  }

  delete [] c;
  delete [] z;

  return exact;
}
//****************************************************************************80

double *p28_f ( int dim_num, int point_num, double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    P28_F evaluates the integrand for problem 28.
//
//  Discussion:
//
//    The spatial dimension DIM_NUM is arbitrary.
//
//  Region:
//
//    0 <= X(1:DIM_NUM) <= 1
//
//  Integral Parameters:
//
//    The integral depends on vectors C(1:N) and Z(1:N).
//    To get or set C or Z, call P28_R8VEC.
//
//    The reference suggests choosing C by initializing
//    it to random values in [0,1], and then normalizing so that
//
//      sum ( 1/C(1:N)**2 ) = 170 / N**(7/2)
//
//    C(1:N) used to default to N**(9/4) / sqrt(170)
//    but this is INSUPPORTABLE for large dimension N.
//
//    So now we're setting C(1:N) to default to 1.0, but
//    see P28_R8VEC_DEFAULT to be sure.
//
//    The reference suggests choosing Z at random in [0,1].
//
//    Z(1:N) defaults to 0.5.
//
//  Integrand:
//
//    1 / product ( C(1:DIM_NUM)**2 + ( X(1:DIM_NUM) - Z(1:DIM_NUM) )**2 )
//
//  Exact Integral:
//
//    product ( (   arctan ( ( 1 - Z(1:DIM_NUM) ) / C(1:DIM_NUM) )
//                + arctan (       Z(1:DIM_NUM)   / C(1:DIM_NUM) ) 
//              ) / C(1:DIM_NUM)
//            )
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Alan Genz,
//    [ Integral #2]
//    A Package for Testing Multiple Integration Subroutines,
//    in Numerical Integration: Recent Developments, Software
//    and Applications,
//    edited by Patrick Keast and Graeme Fairweather,
//    D Reidel, 1987, pages 337-340.
//
//    [Integral #6],
//    Thomas Patterson,
//    On the Construction of a Practical Ermakov-Zolotukhin 
//    Multiple Integrator,
//    in Numerical Integration: Recent Developments, Software
//    and Applications,
//    edited by Patrick Keast and Graeme Fairweather,
//    D. Reidel, 1987, pages 269-290.
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Input, int POINT_NUM, the number of points.
//
//    Input, double X[DIM_NUM*POINT_NUM], the evaluation points.
//
//    Output, double P28_F[POINT_NUM], the integrand values.
//
{
  double *c;
  int dim;
  int inc;
  int point;
  double *value;
  double *z;

  c = new double[dim_num];
  p28_r8vec ( 'G', 'C', dim_num, c );

  z = new double[dim_num];
  p28_r8vec ( 'G', 'Z', dim_num, z );

  value = new double[point_num];

  for ( point = 0; point < point_num; point++ )
  {
    value[point] = 1.0;
    for ( dim = 0; dim < dim_num; dim++ )
    {
      value[point] = value[point] 
        * ( pow ( c[dim], 2 ) + pow ( x[dim+point*dim_num] - z[dim], 2 ) );
    }
    value[point] = 1.0 / value[point];
  }

  inc = point_num;
  p28_i4 ( 'I', '#', &inc );

  delete [] c;
  delete [] z;

  return value;
}
//****************************************************************************80

void p28_i4 ( char action, char name, int *value )

//****************************************************************************80
//
//  Purpose:
//
//    P28_I4 sets or gets I4 parameters for problem 28.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION,
//    'D' to set a parmater to its default value;
//    'S' to set a parameter to VALUE,
//    'G' to set VALUE to the parameter's value,
//    'I' to increment a parameter.
//
//    Input, char NAME, the name of the variable.
//    '#' is the number of calls to the integrand routine.
//
//    Input/output, int *VALUE.
//    * If ACTION = 'I', then VALUE is an input quantity, and is the
//      new value to be added to NAME.
//    * If ACTION = 'S', then VALUE is an input quantity, and is the
//      new value to be assigned to NAME.
//    * If ACTION = 'G', then VALUE is an output quantity, and is the
//      current value of NAME.
//
{
  static int calls = 0;

  if ( action == 'D' )
  {
    if ( name == '#' || name == '*' )
    {
      calls = 0;
    }
  }
  else if ( action == 'G' )
  {
    if ( name == '#' )
    {
      *value = calls;
    }
    else
    {
      cout << "\n";
      cout << "P28_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'I' )
  {
    if ( name == '#' )
    {
      calls = calls + *value;
    }
    else
    {
      cout << "\n";
      cout << "P28_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == '#' )
    {
      calls = *value;
    }
    else
    {
      cout << "\n";
      cout << "P28_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P28_I4 - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

void p28_lim ( int dim_num, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    P28_LIM returns the integration limits for problem 28.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the argument.
//
//    Output, double A[DIM_NUM], B[DIM_NUM], the lower and upper
//    limits of integration.
//    Note that if A = -HUGE(A), the lower limit is
//    actually negative infinity, and if B = HUGE(B), the upper limit
//    is actually infinity.
//
{
  int dim;

  for ( dim = 0; dim < dim_num; dim++ )
  {
    a[dim] = 0.0;
  }
  for ( dim = 0; dim < dim_num; dim++ )
  {
    b[dim] = 1.0;
  }

  return;
}
//****************************************************************************80

char *p28_name ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P28_NAME returns the name of problem 28.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P28_NAME, the name of the problem.
//
{
  char *value;

  value = new char[37];

  strcpy ( value, "Genz #2 / Patterson #6, Product Peak" );

  return value;
}
//****************************************************************************80

void p28_r8vec ( char action, char name, int dim_num, double value[] )

//****************************************************************************80
//
//  Purpose:
//
//    P28_R8VEC sets or gets R8VEC parameters for problem 28.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION, the action.
//    'D' sets the internal value of the object to a default value.
//    If NAME = '*', then all variables are defaulted.
//    'G' means the current value of the object should be returned.
//    'R' means randomize the object and return its value.
//    'S' means the object should be set to the input VALUE.
//
//    Input, char NAME, the name of the parameter.
//    'C' is the coefficient vector.
//    'Z' is the base vector.
//
//    Input, int DIM_NUM, the dimension of the object.
//
//    Input/output, double VALUE[DIM_NUM], the value of the object.
//
{
  static double *c = NULL;
  int dim;
  static int dim_num_save = 0;
  double s;
  double t;
  static double *z = NULL;

  if ( dim_num_save != dim_num )
  {
    dim_num_save = 0;
    if ( c )
    {
      delete [] c;
      c = NULL;
    }
    if ( z )
    {
      delete [] z;
      z = NULL;
    }
  }

  if ( dim_num_save == 0 )
  {
    dim_num_save = dim_num;
    c = new double[dim_num_save];
    z = new double[dim_num_save];
  }

  if ( action == 'D' )
  {
    if ( name == 'C' || name == '*' )
    {
      for ( dim = 0; dim < dim_num; dim++ )
      {
        c[dim] = 1.0;
      }
    }
    if ( name == 'Z' || name == '*' )
    {
      for ( dim = 0; dim < dim_num; dim++ )
      {
        z[dim] = 0.5;
      }
    }
  }
  else if ( action == 'G' )
  {
    if ( name == 'C' )
    {
      r8vec_copy ( dim_num, c, value );
    }
    else if ( name == 'Z' )
    {
      r8vec_copy ( dim_num, z, value );
    }

    else
    {
      cout << "\n";
      cout << "P28_R8VEC - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'R' )
  {
    if ( name == 'C' )
    {
      t = 0.0;
      for ( dim = 0; dim < dim_num; dim++ )
      {
        c[dim] = ( double ) rand ( ) / ( double ) RAND_MAX;
        t = t + 1.0 / pow ( c[dim], 2 );
      }

      s = sqrt ( sqrt ( ( double ) i4_power ( dim_num, 7 ) ) * t / 170.0 );

      for ( dim = 0; dim < dim_num; dim++ )
      {
        c[dim] = s * c[dim];
      }
      r8vec_copy ( dim_num, c, value );
    }
    else if ( name == 'Z' )
    {
      for ( dim = 0; dim < dim_num; dim++ )
      {
        z[dim] = ( double ) rand ( ) / ( double ) RAND_MAX;
      }
      r8vec_copy ( dim_num, z, value );
    }
    else
    {
      cout << "\n";
      cout << "P28_R8VEC - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == 'C' )
    {
      r8vec_copy ( dim_num, value, c );
    }
    else if ( name == 'Z' )
    {
      r8vec_copy ( dim_num, value, z );
    }
    else
    {
      cout << "\n";
      cout << "P28_R8VEC - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P28_R8VEC - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }

  return;
}
//****************************************************************************80

char *p28_region ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P28_REGION returns the name of the integration region for problem 28.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P28_REGION, the name of the integration region.
//
{
  char *value;

  value = new char[4];

  strcpy ( value, "BOX" );

  return value;
}
//****************************************************************************80

void p28_title ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P28_TITLE prints a title for problem 28.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
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
  cout << "\n";
  cout << "Problem 28\n";
  cout << "  Name:       Genz #2 / Patterson #6, Product Peak\n";
  cout << "  Region:     0 <= X(i) <= 1\n";
  cout << "  Integrand:  F(X) = 1 / product ( C(i)^2 + ( X(i) - Z(i) )^2 )\n";
  cout << "  Parameters:\n";
  cout << "              C(1:DIM_NUM) defaults to DIM_NUM^(9/4)/sqrt(170)\n";
  cout << "              Z(1:DIM_NUM) defaults to 0.5.\n";

  return;
}
//****************************************************************************80

void p29_default ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P29_DEFAULT sets default values for problem 29.
//
//  Discussion:
//
//    If a problem uses vector parameters, then the spatial dimension
//    DIM_NUM is needed as input, so that the vector parameters can be
//    properly dimensioned.
//
//    Every problem keeps a count of the number of function calls.  Calling
//    this routine causes that count to be reset to 0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the problem.
//
{
  int i4;
  double r8;

  p29_i4 ( 'D', '*', &i4 );
  p29_r8 ( 'D', '*', &r8 );
  p29_r8vec ( 'D', '*', dim_num, NULL );

  return;
}
//****************************************************************************80

double p29_exact ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P29_EXACT returns the exact integral for problem 29.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Output, double EXACT, the exact value of the integral.
//
{
  double a;
  double *c;
  int d;
  int dim;
  double e;
  double exact;
  int *ivec;
  double r;
  int rank;
  double total;

  ivec = new int[dim_num];

  p29_r8 ( 'G', 'R', &r );

  c = new double[dim_num];
  p29_r8vec ( 'G', 'C', dim_num, c );
//
//  Here, we need to generate all possible DIM_NUM tuples with
//  values of 0 or 1.
// 
  total = 0.0;
  rank = 0;

  for ( ; ; )
  {
    tuple_next ( 0, 1, dim_num, &rank, ivec );

    if ( rank == 0 )
    {
      break;
    }

    d = i4vec_sum ( dim_num, ivec );

    e = 0.0;
    for ( dim = 0; dim < dim_num; dim++ )
    {
      e = e + ( double ) ivec[dim] * c[dim];
    }

    total = total + ( double ) i4_power ( -1, d ) / pow ( 1.0 + e, r );
  }

  a = 1.0;
  for ( dim = 0; dim <= dim_num-1; dim++ )
  {
    a = a * ( r + ( double ) ( dim ) );
  }

  exact = total / ( a * r8vec_product ( dim_num, c ) );

  delete [] c;
  delete [] ivec;

  return exact;
}
//****************************************************************************80

double *p29_f ( int dim_num, int point_num, double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    P29_F evaluates the integrand for problem 29.
//
//  Discussion:
//
//    The spatial dimension DIM_NUM is arbitrary.
//
//  Region:
//
//    0 <= X(1:DIM_NUM) <= 1
//
//  Integral parameters:
//
//    The integral depends on a parameter R,
//    and a vector C(1:N).
//
//    The Genz reference uses R = 1.  The Patterson reference
//    suggests using R = 0.3.
//
//    The Patterson reference suggests choosing C at random in [0,1]
//    and then multiplying by the normalizing factor (80/N**2).
//    This is what you will get if you "RANDOMIZE" C.
//
//    C defaults to 1/DIM_NUM.
//
//    To get or set R, call P29_R8.
//    To get or set C, call P29_R8VEC.
//
//  Integrand:
//
//    1 / ( 1 + sum ( c(1:dim_num) * x(1:dim_num) ) )**(r+dim_num)
//
//  Exact Integral:
//
//    (1/A) * ( 1 / product ( c(1:dim_num) ) ) *
//    sum(0<=I(1)<=1) sum (0<=I(2)<=1) ... sum(0<=I(dim_num)<=1)
//    (-1)**sum(I(1:dim_num)) / ( 1 + sum ( i(1:dim_num)*c(1:dim_num) ) )**r
//
//    with A = r * ( r + 1 ) * ... * ( r + dim_num - 1 )
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    [ Integral #3]
//    Alan Genz,
//    A Package for Testing Multiple Integration Subroutines,
//    in Numerical Integration: Recent Developments, Software
//    and Applications,
//    edited by Patrick Keast and Graeme Fairweather,
//    D Reidel, 1987, pages 337-340.
//
//    [Integral #8],
//    Thomas Patterson,
//    On the Construction of a Practical Ermakov-Zolotukhin 
//    Multiple Integrator,
//    in Numerical Integration: Recent Developments, Software
//    and Applications,
//    edited by Patrick Keast and Graeme Fairweather,
//    D. Reidel, 1987, pages 269-290.
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Input, int POINT_NUM, the number of points.
//
//    Input, double X[DIM_NUM*POINT_NUM], the evaluation points.
//
//    Output, double P29_F[POINT_NUM], the integrand values.
//
{
  double *c;
  int inc;
  int point;
  double r;
  double *value;

  p29_r8 ( 'G', 'R', &r );

  c = new double[dim_num];
  p29_r8vec ( 'G', 'C', dim_num, c );

  value = new double[point_num];

  for ( point = 0; point < point_num; point++ )
  {
    value[point] = 1.0 
      / pow ( 1.0 + r8vec_dot ( dim_num, c, x+point*dim_num ), r + dim_num );
  }

  inc = point_num;
  p29_i4 ( 'I', '#', &inc );

  delete [] c;

  return value;
}
//****************************************************************************80

void p29_i4 ( char action, char name, int *value )

//****************************************************************************80
//
//  Purpose:
//
//    P29_I4 sets or gets I4 parameters for problem 29.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION,
//    'D' to set a parmater to its default value;
//    'S' to set a parameter to VALUE,
//    'G' to set VALUE to the parameter's value,
//    'I' to increment a parameter.
//
//    Input, char NAME, the name of the variable.
//    '#' is the number of calls to the integrand routine.
//
//    Input/output, int *VALUE.
//    * If ACTION = 'I', then VALUE is an input quantity, and is the
//      new value to be added to NAME.
//    * If ACTION = 'S', then VALUE is an input quantity, and is the
//      new value to be assigned to NAME.
//    * If ACTION = 'G', then VALUE is an output quantity, and is the
//      current value of NAME.
//
{
  static int calls = 0;

  if ( action == 'D' )
  {
    if ( name == '#' || name == '*' )
    {
      calls = 0;
    }
  }
  else if ( action == 'G' )
  {
    if ( name == '#' )
    {
      *value = calls;
    }
    else
    {
      cout << "\n";
      cout << "P29_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'I' )
  {
    if ( name == '#' )
    {
      calls = calls + *value;
    }
    else
    {
      cout << "\n";
      cout << "P29_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == '#' )
    {
      calls = *value;
    }
    else
    {
      cout << "\n";
      cout << "P29_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P29_I4 - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

void p29_lim ( int dim_num, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    P29_LIM returns the integration limits for problem 29.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the argument.
//
//    Output, double A[DIM_NUM], B[DIM_NUM], the lower and upper
//    limits of integration.
//    Note that if A = -HUGE(A), the lower limit is
//    actually negative infinity, and if B = HUGE(B), the upper limit
//    is actually infinity.
//
{
  int dim;

  for ( dim = 0; dim < dim_num; dim++ )
  {
    a[dim] = 0.0;
  }
  for ( dim = 0; dim < dim_num; dim++ )
  {
    b[dim] = 1.0;
  }

  return;
}
//****************************************************************************80

char *p29_name ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P29_NAME returns the name of problem 29.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P29_NAME, the name of the problem.
//
{
  char *value;

  value = new char[36];

  strcpy ( value, "Genz #3 / Patterson #8, Corner Peak" );

  return value;
}
//****************************************************************************80

void p29_r8 ( char action, char name, double *value )

//****************************************************************************80
//
//  Purpose:
//
//    P29_R8 sets or gets R8 parameters for problem 29.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION,
//    'D' sets the parameter to its default value;
//    'G' gets a parameter.
//    'R' sets the parameter to a random value.
//    'S' sets a parameter to VALUE,
//
//    Input, char NAME, the name of the variable.
//    'R' is the radius.
//
//    Input/output, double *VALUE.
//    * If ACTION = 'S', then VALUE is an input quantity, and is the
//      new value to be assigned to NAME.
//    * If ACTION = 'D', 'G' or 'R', then VALUE is an output quantity, 
//      and is the current value of NAME.
//
{
  static double r = 0.3;

  if ( action == 'D' )
  {
    if ( name == 'R' || name == '*' )
    {
      r = 0.3;
    }
  }
  else if ( action == 'G' )
  {
    if ( name == 'R' )
    {
      *value = r;
    }
    else
    {
      cout << "\n";
      cout << "P29_R8 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'R' )
  {
    if ( name == 'R' )
    {
      r = ( double ) rand ( ) / ( double ) RAND_MAX;
      *value = r;
    }
    else
    {
      cout << "\n";
      cout << "P29_R8 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == 'R' )
    {
      r = *value;
    }
    else
    {
      cout << "\n";
      cout << "P29_R8 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P29_R8 - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }

  return;
}
//****************************************************************************80

void p29_r8vec ( char action, char name, int dim_num, double value[] )

//****************************************************************************80
//
//  Purpose:
//
//    P29_R8VEC sets or gets R8VEC parameters for problem 29.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION, the action.
//    'D' sets the internal value of the object to a default value.
//    If NAME = '*', then all variables are defaulted.
//    'G' means the current value of the object should be returned.
//    'R' means randomize the object and return its value.
//    'S' means the object should be set to the input VALUE.
//
//    Input, char NAME, the name of the parameter.
//    'C' is the coefficient vector.
//
//    Input, int DIM_NUM, the dimension of the object.
//
//    Input/output, double VALUE[DIM_NUM], the value of the object.
//
{
  static double *c = NULL;
  int dim;
  static int dim_num_save = 0;

  if ( dim_num_save != dim_num )
  {
    dim_num_save = 0;
    if ( c )
    {
      delete [] c;
      c = NULL;
    }
  }

  if ( dim_num_save == 0 )
  {
    dim_num_save = dim_num;
    c = new double[dim_num_save];
  }

  if ( action == 'D' )
  {
    if ( name == 'C' || name == '*' )
    {
      for ( dim = 0; dim < dim_num; dim++ )
      {
        c[dim] = 1.0 / ( double ) ( dim_num );
      }
    }
  }
  else if ( action == 'G' )
  {
    if ( name == 'C' )
    {
      r8vec_copy ( dim_num, c, value );
    }
    else
    {
      cout << "\n";
      cout << "P29_R8VEC - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'R' )
  {
    if ( name == 'C' )
    {
      for ( dim = 0; dim < dim_num; dim++ )
      {
        c[dim] = 80.0 * ( double ) rand ( ) / ( double ) RAND_MAX
          / ( double ) ( i4_power ( dim_num, 2 ) );
      }
      r8vec_copy ( dim_num, c, value );
    }
    else
    {
      cout << "\n";
      cout << "P29_R8VEC - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == 'C' )
    {
      r8vec_copy ( dim_num, value, c );
    }
    else
    {
      cout << "\n";
      cout << "P29_R8VEC - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P29_R8VEC - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

char *p29_region ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P29_REGION returns the name of the integration region for problem 29.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P29_REGION, the name of the integration region.
//
{
  char *value;

  value = new char[4];

  strcpy ( value, "BOX" );

  return value;
}
//****************************************************************************80

void p29_title ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P29_TITLE prints a title for problem 29.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
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
  cout << "\n";
  cout << "Problem 29\n";
  cout << "  Name:       Genz #3 / Patterson #8, Corner Peak\n";
  cout << "  Region:     0 <= X(i) <= 1\n";
  cout << "  Integrand:  F(X) = 1 / ( 1 + sum ( C(i) * X(i) ) )^R\n";
  cout << "  Parameters:\n";
  cout << "              R, defaults to 0.3\n";
  cout << "              C(1:DIM_NUM) defaults to 1/DIM_NUM.\n";

  return;
}
//****************************************************************************80

void p30_default ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P30_DEFAULT sets default values for problem 30.
//
//  Discussion:
//
//    If a problem uses vector parameters, then the spatial dimension
//    DIM_NUM is needed as input, so that the vector parameters can be
//    properly dimensioned.
//
//    Every problem keeps a count of the number of function calls.  Calling
//    this routine causes that count to be reset to 0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the problem.
//
{
  int i4;

  p30_i4 ( 'D', '*', &i4 );
  p30_r8vec ( 'D', '*', dim_num, NULL );

  return;
}
//****************************************************************************80

double p30_exact ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P30_EXACT returns the exact integral for problem 30.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Output, double P30_EXACT, the exact value of the integral.
//
{
  double *c;
  int dim;
  double exact;
  double pi = 3.141592653589793;
  double *z;

  c = new double[dim_num];
  p30_r8vec ( 'G', 'C', dim_num, c );

  z = new double[dim_num];
  p30_r8vec ( 'G', 'Z', dim_num, z );

  exact = 1.0;

  for ( dim = 0; dim < dim_num; dim++ )
  {
    exact = exact * 
      sqrt ( pi ) 
      * ( error_f ( c[dim] * ( 1.0 - z[dim] ) ) 
        + error_f ( c[dim] *         z[dim]   ) ) 
      / ( 2.0 * c[dim] );
  }

  delete [] c;
  delete [] z;

  return exact;
}
//****************************************************************************80

double *p30_f ( int dim_num, int point_num, double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    P30_F evaluates the integrand for problem 30.
//
//  Discussion:
//
//    The spatial dimension DIM_NUM is arbitrary.
//
//  Region:
//
//    0 <= X(1:DIM_NUM) <= 1
//
//  Integral Parameters:
//
//    The integral depends on vectors C(1:N) and Z(1:N).
//
//    The reference suggests choosing C at random in [0,1]
//    and then multiplying by the normalizing factor sqrt(140/N**(3/2)).
//
//    C(1:N) defaults to 1/N.
//    Z(1:N) defaults to 0.5.
//
//    To get or set C or Z, call P30_R8VEC.
//
//  Integrand:
//
//    exp ( - sum ( c(1:n)**2 * ( x(1:n) - z(1:n) )**2 )
//
//  Exact Integral:
//
//    product
//    ( sqrt ( pi )
//      * (   erf ( c(1:n) * ( 1 - z(1:n) ) ) 
//          + erf ( c(1:n) *       z(1:n)   ) ) 
//      / ( 2 * c(1:n) )
//    )
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    [ Integral #4]
//    Alan Genz,
//    A Package for Testing Multiple Integration Subroutines,
//    in Numerical Integration: Recent Developments, Software
//    and Applications,
//    edited by Patrick Keast and Graeme Fairweather,
//    D Reidel, 1987, pages 337-340.
//
//    [Integral #9],
//    Thomas Patterson,
//    On the Construction of a Practical Ermakov-Zolotukhin 
//    Multiple Integrator,
//    in Numerical Integration: Recent Developments, Software
//    and Applications,
//    edited by Patrick Keast and Graeme Fairweather,
//    D. Reidel, 1987, pages 269-290.
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Input, int POINT_NUM, the number of points.
//
//    Input, double X[DIM_NUM*POINT_NUM], the evaluation points.
//
//    Output, double P30_F[POINT_NUM], the integrand values.
//
{
  double *c;
  int dim;
  int inc;
  int point;
  double *value;
  double *z;

  c = new double[dim_num];
  p30_r8vec ( 'G', 'C', dim_num, c );

  z = new double[dim_num];
  p30_r8vec ( 'G', 'Z', dim_num, z );

  value = new double[point_num];

  for ( point = 0; point < point_num; point++ )
  {
    value[point] = 0.0;
    for ( dim = 0; dim < dim_num; dim++ )
    {
      value[point] = value[point] 
        + pow ( c[dim] * ( x[dim+point*dim_num] - z[dim] ), 2 );
    }
    value[point] = exp ( - value[point] );
  }

  inc = point_num;
  p30_i4 ( 'I', '#', &inc );

  delete [] c;
  delete [] z;

  return value;
}
//****************************************************************************80

void p30_i4 ( char action, char name, int *value )

//****************************************************************************80
//
//  Purpose:
//
//    P30_I4 sets or gets I4 parameters for problem 30.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION,
//    'D' to set a parmater to its default value;
//    'S' to set a parameter to VALUE,
//    'G' to set VALUE to the parameter's value,
//    'I' to increment a parameter.
//
//    Input, char NAME, the name of the variable.
//    '#' is the number of calls to the integrand routine.
//
//    Input/output, int *VALUE.
//    * If ACTION = 'I', then VALUE is an input quantity, and is the
//      new value to be added to NAME.
//    * If ACTION = 'S', then VALUE is an input quantity, and is the
//      new value to be assigned to NAME.
//    * If ACTION = 'G', then VALUE is an output quantity, and is the
//      current value of NAME.
//
{
  static int calls = 0;

  if ( action == 'D' )
  {
    if ( name == '#' || name == '*' )
    {
      calls = 0;
    }
  }
  else if ( action == 'G' )
  {
    if ( name == '#' )
    {
      *value = calls;
    }
    else
    {
      cout << "\n";
      cout << "P30_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'I' )
  {
    if ( name == '#' )
    {
      calls = calls + *value;
    }
    else
    {
      cout << "\n";
      cout << "P30_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == '#' )
    {
      calls = *value;
    }
    else
    {
      cout << "\n";
      cout << "P30_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P30_I4 - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

void p30_lim ( int dim_num, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    P30_LIM returns the integration limits for problem 30.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the argument.
//
//    Output, double A[DIM_NUM], B[DIM_NUM], the lower and upper
//    limits of integration.
//    Note that if A = -HUGE(A), the lower limit is
//    actually negative infinity, and if B = HUGE(B), the upper limit
//    is actually infinity.
//
{
  int dim;

  for ( dim = 0; dim < dim_num; dim++ )
  {
    a[dim] = 0.0;
  }
  for ( dim = 0; dim < dim_num; dim++ )
  {
    b[dim] = 1.0;
  }

  return;
}
//****************************************************************************80

char *p30_name ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P30_NAME returns the name of problem 30.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    11 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P30_NAME, the name of the problem.
//
{
  char *value;

  value = new char[33];

  strcpy ( value, "Genz #4 / Patterson #9, Gaussian" );

  return value;
}
//****************************************************************************80

void p30_r8vec ( char action, char name, int dim_num, double value[] )

//****************************************************************************80
//
//  Purpose:
//
//    P30_R8VEC sets or gets R8VEC parameters for problem 30.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    09 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION, the action.
//    'D' sets the internal value of the object to a default value.
//    If NAME = '*', then all variables are defaulted.
//    'G' means the current value of the object should be returned.
//    'R' means randomize the object and return its value.
//    'S' means the object should be set to the input VALUE.
//
//    Input, char NAME, the name of the parameter.
//    'C' is the coefficient vector.
//    'Z' is the base vector.
//
//    Input, int DIM_NUM, the dimension of the object.
//
//    Input/output, double VALUE[DIM_NUM], the value of the object.
//
{
  static double *c = NULL;
  int dim;
  static int dim_num_save = 0;
  static double *z = NULL;

  if ( dim_num_save != dim_num )
  {
    dim_num_save = 0;
    if ( c )
    {
      delete [] c;
      c = NULL;
    }
    if ( z )
    {
      delete [] z;
      z = NULL;
    }
  }

  if ( dim_num_save == 0 )
  {
    dim_num_save = dim_num;
    c = new double[dim_num_save];
    z = new double[dim_num_save];
  }

  if ( action == 'D' )
  {
    if ( name == 'C' || name == '*' )
    {
      for ( dim = 0; dim < dim_num; dim++ )
      {
        c[dim] = 1.0 / ( double ) ( dim_num );
      }
    }
    if ( name == 'Z' || name == '*' )
    {
      for ( dim = 0; dim < dim_num; dim++ )
      {
        z[dim] = 0.5;
      }
    }
  }
  else if ( action == 'G' )
  {
    if ( name == 'C' )
    {
      r8vec_copy ( dim_num, c, value );
    }
    else if ( name == 'Z' )
    {
      r8vec_copy ( dim_num, z, value );
    }

    else
    {
      cout << "\n";
      cout << "P30_R8VEC - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'R' )
  {
    if ( name == 'C' )
    {
      for ( dim = 0; dim < dim_num; dim++ )
      {
        c[dim] = ( double ) rand ( ) / ( double ) RAND_MAX
          * sqrt ( 140.0 / sqrt ( ( double ) i4_power ( dim_num, 3 ) ) ) 
        / sqrt ( 170.0 );
      }
      r8vec_copy ( dim_num, c, value );
    }
    else if ( name == 'Z' )
    {
      for ( dim = 0; dim < dim_num; dim++ )
      {
        z[dim] = ( double ) rand ( ) / ( double ) RAND_MAX;
      }
      r8vec_copy ( dim_num, z, value );
    }
    else
    {
      cout << "\n";
      cout << "P30_R8VEC - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == 'C' )
    {
      r8vec_copy ( dim_num, value, c );
    }
    else if ( name == 'Z' )
    {
      r8vec_copy ( dim_num, value, z );
    }
    else
    {
      cout << "\n";
      cout << "P30_R8VEC - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P30_R8VEC - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }

  return;
}
//****************************************************************************80

char *p30_region ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P30_REGION returns the name of the integration region for problem 30.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P30_REGION, the name of the integration region.
//
{
  char *value;

  value = new char[4];

  strcpy ( value, "BOX" );

  return value;
}
//****************************************************************************80

void p30_title ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P30_TITLE prints a title for problem 30.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    07 March 2007
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
  cout << "\n";
  cout << "Problem 30\n";
  cout << "  Name:       Genz #4 / Patterson #9, Gaussian\n";
  cout << "  Region:     0 <= X(i) <= 1\n";
  cout << "  Integrand:  F(X) = exp ( sum ( C(i)^2 * ( X(i) - Z(i) )^2 )\n";
  cout << "  Parameters:\n";
  cout << "              C(1:DIM_NUM) defaults to 1/DIM_NUM.\n";
  cout << "              Z(1:DIM_NUM) defaults to 0.5.\n";

  return;
}
//****************************************************************************80

void p31_default ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P31_DEFAULT sets default values for problem 31.
//
//  Discussion:
//
//    If a problem uses vector parameters, then the spatial dimension
//    DIM_NUM is needed as input, so that the vector parameters can be
//    properly dimensioned.
//
//    Every problem keeps a count of the number of function calls.  Calling
//    this routine causes that count to be reset to 0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the problem.
//
{
  int i4;

  p31_i4 ( 'D', '*', &i4 );
  p31_r8vec ( 'D', '*', dim_num, NULL );

  return;
}
//****************************************************************************80

double p31_exact ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P31_EXACT returns the exact integral for problem 31.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Kenneth Hanson,
//    Quasi-Monte Carlo: halftoning in high dimensions?
//    in Computatinal Imaging,
//    Edited by CA Bouman and RL Stevenson,
//    Proceedings SPIE,
//    Volume 5016, 2003, pages 161-172.
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Output, double P31_EXACT, the exact value of the integral.
//
{
  double *a;
  double *b;
  double *c;
  int dim;
  double exact;
  double *z;
//
//  Get the limits of integration.
//
  a = new double[dim_num];
  b = new double[dim_num];

  p31_lim ( dim_num, a, b );
//
//  Get the coefficient vector C.
//
  c = new double[dim_num];
  p31_r8vec ( 'G', 'C', dim_num, c );
//
//  Get the location of Z.
//
  z = new double[dim_num];
  p31_r8vec ( 'G', 'Z', dim_num, z );
//
//  The value of the DIM_NUM dimensional integral is separable
//  into the product of integrals over each dimension.
//
//  Each of these 1 dimensional integrals, in turn, is
//  easily computed, depending on where Z(I) lies with
//  respect to the limits of integration A(I) and B(I).
//
  exact = 1.0;

  for ( dim = 0; dim < dim_num; dim++ )
  {
//
//  Z < A < B
//
//  | X - Z | = X - Z from A to B.
//
    if ( z[dim] < a[dim] )
    {
      exact = exact * 
      ( exp ( - c[dim] * ( a[dim] - z[dim] ) ) 
      - exp ( - c[dim] * ( b[dim] - z[dim] ) ) ) / c[dim];
    }
//
//  A < Z < B
//
//  | X - Z | = Z - X from B to Z,
//            = X - Z from      Z to A.
//
    else if ( z[dim] < b[dim] )
    {
      exact = exact * ( 2.0 
          - exp ( - c[dim] * ( z[dim] - a[dim] ) ) 
          - exp ( - c[dim] * ( b[dim] - z[dim] ) ) ) / c[dim];
    }
//
//  A < B < Z
//
//  | X - Z | = Z - X from A to B.
//
    else
    {
      exact = exact * 
      ( exp ( - c[dim] * ( z[dim] - b[dim] ) ) 
      - exp ( - c[dim] * ( z[dim] - a[dim] ) ) ) / c[dim];
    }
  }

  delete [] a;
  delete [] b;
  delete [] c;
  delete [] z;

  return exact;
}
//****************************************************************************80

double *p31_f ( int dim_num, int point_num, double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    P31_F evaluates the integrand for problem 31.
//
//  Discussion:
//
//    The spatial dimension DIM_NUM is arbitrary.
//
//  Region:
//
//    0 <= X(1:DIM_NUM) <= 1
//
//  Integral Parameters:
//
//    There is a basis point Z associated with the integrand.
//    Z defaults to ( 0.5, 0.5, ..., 0.5 ).
//    The user can set, get, or randomize this value by calling
//    P31_R8VEC.
//
//    The coefficient vector C (whose entries are usually positive)
//    controls the steepness and circularity of the pseudo-Gaussian.
//    C defaults to 2.0.
//    The user can set, get, or randomize this value by calling
//    P31_R8VEC.
//
//  Integrand:
//
//    exp ( - sum ( c(1:dim_num) * abs ( x(1:dim_num) - z(1:dim_num) ) ) )
//
//  Exact Integral:
//
//    The integral is separable into
//
//      Int ( A(1) <= X(1) <= B(1) ) exp ( - C(1) * abs ( X(1) - Z(1) ) ) 
//        * Int ( A(2) <= X(2) <= B(2) ) exp ( - C(2) * abs ( X(2) - Z(2) ) )
//          * ...
//
//    Hence, the exact integral is computed as the product of
//    one dimensional integrals.  Each of these is easily computed
//    once the location of Z(I) with respect to A(I) and B(I) is
//    determined.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Alan Genz,
//    [ Integral #5]
//    A Package for Testing Multiple Integration Subroutines,
//    in Numerical Integration: Recent Developments, Software
//    and Applications,
//    edited by Patrick Keast and Graeme Fairweather,
//    D. Reidel, 1987, pages 337-340.
//
//    Kenneth Hanson,
//    Quasi-Monte Carlo: halftoning in high dimensions?
//    in Computatinal Imaging,
//    Edited by CA Bouman and RL Stevenson,
//    Proceedings SPIE,
//    Volume 5016, 2003, pages 161-172.
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Input, int POINT_NUM, the number of points.
//
//    Input, double X[DIM_NUM*POINT_NUM], the evaluation points.
//
//    Output, double P31_F[POINT_NUM], the integrand values.
//
{
  double *c;
  int dim;
  int inc;
  int point;
  double *value;
  double *z;

  c = new double[dim_num];
  p31_r8vec ( 'G', 'C', dim_num, c );

  z = new double[dim_num];
  p31_r8vec ( 'G', 'Z', dim_num, z );

  value = new double[point_num];

  for ( point = 0; point < point_num; point++ )
  {
    value[point] = 0.0;
    for ( dim = 0; dim < dim_num; dim++ )
    {
      value[point] = value[point] 
        - c[dim] * r8_abs ( x[dim+point*dim_num] - z[dim] );
    }
    value[point] = exp ( value[point] );
  }

  inc = point_num;
  p31_i4 ( 'I', '#', &inc );

  delete [] c;
  delete [] z;

  return value;
}
//****************************************************************************80

void p31_i4 ( char action, char name, int *value )

//****************************************************************************80
//
//  Purpose:
//
//    P31_I4 sets or gets I4 parameters for problem 31.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION,
//    'D' to set a parmater to its default value;
//    'S' to set a parameter to VALUE,
//    'G' to set VALUE to the parameter's value,
//    'I' to increment a parameter.
//
//    Input, char NAME, the name of the variable.
//    '#' is the number of calls to the integrand routine.
//
//    Input/output, int *VALUE.
//    * If ACTION = 'I', then VALUE is an input quantity, and is the
//      new value to be added to NAME.
//    * If ACTION = 'S', then VALUE is an input quantity, and is the
//      new value to be assigned to NAME.
//    * If ACTION = 'G', then VALUE is an output quantity, and is the
//      current value of NAME.
//
{
  static int calls = 0;

  if ( action == 'D' )
  {
    if ( name == '#' || name == '*' )
    {
      calls = 0;
    }
  }
  else if ( action == 'G' )
  {
    if ( name == '#' )
    {
      *value = calls;
    }
    else
    {
      cout << "\n";
      cout << "P31_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'I' )
  {
    if ( name == '#' )
    {
      calls = calls + *value;
    }
    else
    {
      cout << "\n";
      cout << "P31_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == '#' )
    {
      calls = *value;
    }
    else
    {
      cout << "\n";
      cout << "P31_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P31_I4 - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

void p31_lim ( int dim_num, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    P31_LIM returns the integration limits for problem 31.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the argument.
//
//    Output, double A[DIM_NUM], B[DIM_NUM], the lower and upper
//    limits of integration.
//    Note that if A = -HUGE(A), the lower limit is
//    actually negative infinity, and if B = HUGE(B), the upper limit
//    is actually infinity.
//
{
  int dim;

  for ( dim = 0; dim < dim_num; dim++ )
  {
    a[dim] = 0.0;
  }
  for ( dim = 0; dim < dim_num; dim++ )
  {
    b[dim] = 1.0;
  }

  return;
}
//****************************************************************************80

char *p31_name ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P31_NAME returns the name of problem 31.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P31_NAME, the name of the problem.
//
{
  char *value;

  value = new char[28];

  strcpy ( value, "Genz #5, C0 Pseudo-Gaussian" );

  return value;
}
//****************************************************************************80

void p31_r8vec ( char action, char name, int dim_num, double value[] )

//****************************************************************************80
//
//  Purpose:
//
//    P31_R8VEC sets or gets R8VEC parameters for problem 31.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION, the action.
//    'D' sets the internal value of the object to a default value.
//    If NAME = '*', then all variables are defaulted.
//    'G' means the current value of the object should be returned.
//    'R' means randomize the object and return its value.
//    'S' means the object should be set to the input VALUE.
//
//    Input, char NAME, the name of the parameter.
//    'C' is the coefficient vector.
//    'Z' is the base vector.
//
//    Input, int DIM_NUM, the dimension of the object.
//
//    Input/output, double VALUE[DIM_NUM], the value of the object.
//
{
  static double *c = NULL;
  int dim;
  static int dim_num_save = 0;
  static double *z = NULL;

  if ( dim_num_save != dim_num )
  {
    dim_num_save = 0;
    if ( c )
    {
      delete [] c;
      c = NULL;
    }
    if ( z )
    {
      delete [] z;
      z = NULL;
    }
  }

  if ( dim_num_save == 0 )
  {
    dim_num_save = dim_num;
    c = new double[dim_num_save];
    z = new double[dim_num_save];
  }

  if ( action == 'D' )
  {
    if ( name == 'C' || name == '*' )
    {
      for ( dim = 0; dim < dim_num; dim++ )
      {
        c[dim] = 2.0;
      }
    }
    if ( name == 'Z' || name == '*' )
    {
      for ( dim = 0; dim < dim_num; dim++ )
      {
        z[dim] = 0.5;
      }
    }
  }
  else if ( action == 'G' )
  {
    if ( name == 'C' )
    {
      r8vec_copy ( dim_num, c, value );
    }
    else if ( name == 'Z' )
    {
      r8vec_copy ( dim_num, z, value );
    }

    else
    {
      cout << "\n";
      cout << "P31_R8VEC - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'R' )
  {
    if ( name == 'C' )
    {
      for ( dim = 0; dim < dim_num; dim++ )
      {
        c[dim] = 4.0 * ( double ) rand ( ) / ( double ) RAND_MAX;
      }
      r8vec_copy ( dim_num, c, value );
    }
    else if ( name == 'Z' )
    {
      for ( dim = 0; dim < dim_num; dim++ )
      {
        z[dim] = ( double ) rand ( ) / ( double ) RAND_MAX;
      }
      r8vec_copy ( dim_num, z, value );
    }
    else
    {
      cout << "\n";
      cout << "P31_R8VEC - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == 'C' )
    {
      r8vec_copy ( dim_num, value, c );
    }
    else if ( name == 'Z' )
    {
      r8vec_copy ( dim_num, value, z );
    }
    else
    {
      cout << "\n";
      cout << "P31_R8VEC - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P31_R8VEC - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }

  return;
}
//****************************************************************************80

char *p31_region ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P31_REGION returns the name of the integration region for problem 31.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P31_REGION, the name of the integration region.
//
{
  char *value;

  value = new char[4];

  strcpy ( value, "BOX" );

  return value;
}
//****************************************************************************80

void p31_title ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P31_TITLE prints a title for problem 31.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 June 2007
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
  cout << "\n";
  cout << "Problem 31\n";
  cout << "  Name:       Genz #5, C0 Pseudo-Gaussian\n";
  cout << "              Nondifferentiable peak at point Z.\n";
  cout << "  Region:     0 <= X(i) <= 1\n";
  cout << "  Integrand:  F(X) = exp ( -sum ( C(i) * | X(i) - Z(i) | ) )\n";
  cout << "  Parameters:\n";
  cout << "              C(1:DIM_NUM) defaults to 2.0;\n";
  cout << "              Z(1:DIM_NUM) defaults to 0.5;\n";

  return;
}
//****************************************************************************80

void p32_default ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P32_DEFAULT sets default values for problem 32.
//
//  Discussion:
//
//    If a problem uses vector parameters, then the spatial dimension
//    DIM_NUM is needed as input, so that the vector parameters can be
//    properly dimensioned.
//
//    Every problem keeps a count of the number of function calls.  Calling
//    this routine causes that count to be reset to 0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the problem.
//
{
  int i4;

  p32_i4 ( 'D', '*', &i4 );
  p32_r8vec ( 'D', '*', dim_num, NULL );

  return;
}
//****************************************************************************80

double p32_exact ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    P32_EXACT returns the exact integral for problem 32.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Output, double P32_EXACT, the exact value of the integral.
//
{
  double *a;
  double *b;
  double *c;
  int dim;
  double exact;
  double *z;

  c = new double[dim_num];
  p32_r8vec ( 'G', 'C', dim_num, c );

  z = new double[dim_num];
  p32_r8vec ( 'G', 'Z', dim_num, z );

  a = new double[dim_num];
  b = new double[dim_num];

  p32_lim ( dim_num, a, b );

  exact = 1.0;

  for ( dim = 0; dim < dim_num; dim++ )
  {
    if ( z[dim] <= a[dim] )
    {
      exact = exact * 0.0;
    }
    else if ( z[dim] <= b[dim] )
    {
      if ( c[dim] == 0.0 )
      {
        exact = exact * ( z[dim] - a[dim] );
      }
      else
      {
        exact = exact 
          * ( exp ( c[dim] * z[dim] ) - exp ( c[dim] * a[dim] ) ) / c[dim];
      }
    }
    else
    {
      if ( c[dim] == 0.0 )
      {
        exact = exact * ( b[dim] - a[dim] );
      }
      else
      {
        exact = exact 
          * ( exp ( c[dim] * z[dim] ) - exp ( c[dim] * a[dim] ) ) / c[dim];
      }
    }
  }

  delete [] a;
  delete [] b;
  delete [] c;
  delete [] z;

  return exact;
}
//****************************************************************************80

double *p32_f ( int dim_num, int point_num, double x[] )

//****************************************************************************80
//
//  Purpose:
//
//    P32_F evaluates the integrand for problem 32.
//
//  Discussion:
//
//    The spatial dimension DIM_NUM is arbitrary.
//
//  Region:
//
//    0 <= X(1:DIM_NUM) <= 1
//
//  Integral Parameters:
//
//    The integral depends on vectors C(1:N) and Z(1:N).
//
//    The reference suggests choosing C at random in [0,1]
//    and then multiplying by the normalizing factor sqrt(140/N**(3/2)).
//
//    The default value of C(1:N) is (1/2)^(1/N).
//
//    The default value of Z(1:N) is (1/2)^(1/N).
//
//  Integrand:
//
//    exp ( c(1:n)*x(1:n) ) if all x(1:n) <= z(1:n)
//    0                        otherwise
//
//  Exact Integral:
//
//    product ( g(1:n)(x,z,a,b,c) )
//
//    where g(i)(x,z,a,b,c) =
//
//      0                                         if z(i) <= a(i)
//      ( e^(c(i)*z(i) ) - e^(c(i)*a(i)) ) / c(i) if a(i) <= z(i) <= b(i)
//      ( e^(c(i)*b(i) ) - e^(c(i)*a(i)) ) / c(i) if b(i) <= z(i)
//      
//    with obvious modifications when c(i) = 0.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    03 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    [ Integral #6]
//    Alan Genz,
//    A Package for Testing Multiple Integration Subroutines,
//    in Numerical Integration: Recent Developments, Software
//    and Applications,
//    edited by Patrick Keast and Graeme Fairweather,
//    D Reidel, 1987, pages 337-340.
//
//  Parameters:
//
//    Input, int DIM_NUM, the spatial dimension.
//
//    Input, int POINT_NUM, the number of points.
//
//    Input, double X[DIM_NUM*POINT_NUM], the evaluation points.
//
//    Output, double P32_F[POINT_NUM], the integrand values.
//
{
  double *c;
  int dim;
  int inc;
  int point;
  double *value;
  double *z;

  c = new double[dim_num];
  p32_r8vec ( 'G', 'C', dim_num, c );

  z = new double[dim_num];
  p32_r8vec ( 'G', 'Z', dim_num, z );

  value = new double[point_num];

  for ( point = 0; point < point_num; point++ )
  {
    value[point] = exp ( r8vec_dot ( dim_num, c, x+point*dim_num ) );

    for ( dim = 0; dim < dim_num; dim++ )
    {
      if ( z[dim] < x[dim+point*dim_num] )
      {
        value[point] = 0.0;
      }
    }
  }

  inc = point_num;
  p32_i4 ( 'I', '#', &inc );

  delete [] c;
  delete [] z;

  return value;
}
//****************************************************************************80

void p32_i4 ( char action, char name, int *value )

//****************************************************************************80
//
//  Purpose:
//
//    P32_I4 sets or gets I4 parameters for problem 32.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION,
//    'D' to set a parmater to its default value;
//    'S' to set a parameter to VALUE,
//    'G' to set VALUE to the parameter's value,
//    'I' to increment a parameter.
//
//    Input, char NAME, the name of the variable.
//    '#' is the number of calls to the integrand routine.
//
//    Input/output, int *VALUE.
//    * If ACTION = 'I', then VALUE is an input quantity, and is the
//      new value to be added to NAME.
//    * If ACTION = 'S', then VALUE is an input quantity, and is the
//      new value to be assigned to NAME.
//    * If ACTION = 'G', then VALUE is an output quantity, and is the
//      current value of NAME.
//
{
  static int calls = 0;

  if ( action == 'D' )
  {
    if ( name == '#' || name == '*' )
    {
      calls = 0;
    }
  }
  else if ( action == 'G' )
  {
    if ( name == '#' )
    {
      *value = calls;
    }
    else
    {
      cout << "\n";
      cout << "P32_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'I' )
  {
    if ( name == '#' )
    {
      calls = calls + *value;
    }
    else
    {
      cout << "\n";
      cout << "P32_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == '#' )
    {
      calls = *value;
    }
    else
    {
      cout << "\n";
      cout << "P32_I4 - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P32_I4 - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }
  return;
}
//****************************************************************************80

void p32_lim ( int dim_num, double a[], double b[] )

//****************************************************************************80
//
//  Purpose:
//
//    P32_LIM returns the integration limits for problem 32.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the argument.
//
//    Output, double A[DIM_NUM], B[DIM_NUM], the lower and upper
//    limits of integration.
//    Note that if A = -HUGE(A), the lower limit is
//    actually negative infinity, and if B = HUGE(B), the upper limit
//    is actually infinity.
//
{
  int dim;

  for ( dim = 0; dim < dim_num; dim++ )
  {
    a[dim] = 0.0;
  }
  for ( dim = 0; dim < dim_num; dim++ )
  {
    b[dim] = 1.0;
  }

  return;
}
//****************************************************************************80

char *p32_name ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P32_NAME returns the name of problem 32.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P32_NAME, the name of the problem.
//
{
  char *value;

  value = new char[23];

  strcpy ( value, "Genz #6, Discontinuous" );

  return value;
}
//****************************************************************************80

void p32_r8vec ( char action, char name, int dim_num, double value[] )

//****************************************************************************80
//
//  Purpose:
//
//    P32_R8VEC sets or gets R8VEC parameters for problem 32.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char ACTION, the action.
//    'D' sets the internal value of the object to a default value.
//    If NAME = '*', then all variables are defaulted.
//    'G' means the current value of the object should be returned.
//    'R' means randomize the object and return its value.
//    'S' means the object should be set to the input VALUE.
//
//    Input, char NAME, the name of the parameter.
//    'C' is the coefficient vector.
//    'Z' is the base vector.
//
//    Input, int DIM_NUM, the dimension of the object.
//
//    Input/output, double VALUE[DIM_NUM], the value of the object.
//
{
  static double *c = NULL;
  int dim;
  static int dim_num_save = 0;
  static double *z = NULL;

  if ( dim_num_save != dim_num )
  {
    dim_num_save = 0;
    if ( c )
    {
      delete [] c;
      c = NULL;
    }
    if ( z )
    {
      delete [] z;
      z = NULL;
    }
  }

  if ( dim_num_save == 0 )
  {
    dim_num_save = dim_num;
    c = new double[dim_num_save];
    z = new double[dim_num_save];
  }

  if ( action == 'D' )
  {
    if ( name == 'C' || name == '*' )
    {
      for ( dim = 0; dim < dim_num; dim++ )
      {
        c[dim] = pow ( 0.5, 1.0 / ( double ) ( dim_num ) );
      }
    }
    if ( name == 'Z' || name == '*' )
    {
      for ( dim = 0; dim < dim_num; dim++ )
      {
        z[dim] = pow ( 0.5, 1.0 / ( double ) ( dim_num ) );
      }
    }
  }
  else if ( action == 'G' )
  {
    if ( name == 'C' )
    {
      r8vec_copy ( dim_num, c, value );
    }
    else if ( name == 'Z' )
    {
      r8vec_copy ( dim_num, z, value );
    }

    else
    {
      cout << "\n";
      cout << "P32_R8VEC - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'R' )
  {
    if ( name == 'C' )
    {
      for ( dim= 0; dim < dim_num; dim++ )
      {
        c[dim] = 4.0 * ( double ) rand ( ) / ( double ) RAND_MAX;
      }
      r8vec_copy ( dim_num, c, value );
    }
    else if ( name == 'Z' )
    {
      for ( dim = 0; dim < dim_num; dim++ )
      {
        z[dim] = ( double ) rand ( ) / ( double ) RAND_MAX;
      }
      r8vec_copy ( dim_num, z, value );
    }
    else
    {
      cout << "\n";
      cout << "P32_R8VEC - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else if ( action == 'S' )
  {
    if ( name == 'C' )
    {
      r8vec_copy ( dim_num, value, c );
    }
    else if ( name == 'Z' )
    {
      r8vec_copy ( dim_num, value, z );
    }
    else
    {
      cout << "\n";
      cout << "P32_R8VEC - Fatal error!\n";
      cout << "  Unrecognized name = \"" << name << "\".\n";
      exit ( 1 );
    }
  }
  else
  {
    cout << "\n";
    cout << "P32_R8VEC - Fatal error!\n";
    cout << "  Unrecognized action = \"" << action << "\".\n";
    exit ( 1 );
  }

  return;
}
//****************************************************************************80

char *p32_region ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P32_REGION returns the name of the integration region for problem 32.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, char *P32_REGION, the name of the integration region.
//
{
  char *value;

  value = new char[4];

  strcpy ( value, "BOX" );

  return value;
}
//****************************************************************************80

void p32_title ( void )

//****************************************************************************80
//
//  Purpose:
//
//    P32_TITLE prints a title for problem 32.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 June 2007
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
  cout << "\n";
  cout << "Problem 32\n";
  cout << "  Name:       Genz #6, Discontinuous\n";
  cout << "  Region:     0 <= X(i) <= 1\n";
  cout << "  Integrand:  F(X) = exp ( C(i) * X(i) ) "
       << "if X <= Z, 0 otherwise.\n";
  cout << "  Parameters:\n";
  cout << "              C(1:DIM_NUM) defaults to 1/DIM_NUM.\n";
  cout << "              Z(1:DIM_NUM) defaults to 0.5.\n";

  return;
}
//****************************************************************************80

double r8_abs ( double x )

//****************************************************************************80
//
//  Purpose:
//
//    R8_ABS returns the absolute value of an R8.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    14 November 2006
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double X, the quantity whose absolute value is desired.
//
//    Output, double R8_ABS, the absolute value of X.
//
{
  double value;

  if ( 0.0 <= x )
  {
    value = x;
  } 
  else
  {
    value = -x;
  }
  return value;
}
//****************************************************************************80

double r8_choose ( int n, int k )

//****************************************************************************80
//
//  Purpose:
//
//    R8_CHOOSE computes the combinatorial coefficient C(N,K).
//
//  Discussion:
//
//    C(N,K) is the number of distinct combinations of K objects
//    chosen from a set of N distinct objects.  A combination is
//    like a set, in that order does not matter.
//
//    The formula is:
//
//      C(N,K) = N! / ( (N-K)! * K! )
//
//    Real arithmetic is used, and C(N,K) is computed directly, via
//    Gamma functions, rather than recursively.
//
//    For example, the number of combinations of 2 things chosen from 
//    5 is 10.  Our formula is
//
//      C(5,2) = ( 5 * 4 * 3 * 2 * 1 ) / ( ( 3 * 2 * 1 ) * ( 2 * 1 ) ) = 10.
//
//    The actual combinations may be represented as:
//
//      (1,2), (1,3), (1,4), (1,5), (2,3),
//      (2,4), (2,5), (3,4), (3,5), (4,5).
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 June 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the value of N.
//
//    Input, int K, the value of K.
//
//    Output, double R8_CHOOSE, the value of C(N,K)
//
{
  double arg;
  double fack;
  double facn;
  double facnmk;
  double value;

  if ( n < 0 )
  {
    value = 0.0;
  }
  else if ( k == 0 )
  {
    value = 1.0;
  }
  else if ( k == 1 )
  {
    value = ( double ) ( n );
  }
  else if ( 1 < k && k < n - 1 )
  {
    arg = ( double ) ( n + 1 );
    facn = gamma_log ( arg );

    arg = ( double ) ( k + 1 );
    fack = gamma_log ( arg );

    arg = ( double ) ( n - k + 1 );
    facnmk = gamma_log ( arg );

    value = ( double ) ( r8_nint ( exp ( facn - fack - facnmk ) ) );
  }
  else if ( k == n - 1 )
  {
    value = ( double ) ( n );
  }
  else if ( k == n )
  {
    value = 1.0;
  }
  else
  {
    value = 0.0;
  }

  return value;
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

double r8_gamma ( double x )

//****************************************************************************80
//
//  Purpose:
//
//    R8_GAMMA evaluates Gamma(X) for a real argument.
//
//  Discussion:
//
//    This routine calculates the gamma function for a real argument X.
//
//    Computation is based on an algorithm outlined in reference 1.
//    The program uses rational functions that approximate the gamma
//    function to at least 20 significant decimal digits.  Coefficients
//    for the approximation over the interval (1,2) are unpublished.
//    Those for the approximation for 12 <= X are from reference 2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    18 January 2008
//
//  Author:
//
//    Original FORTRAN77 version by William Cody, Laura Stoltz.
//    C++ version by John Burkardt.
//
//  Reference:
//
//    William Cody,
//    An Overview of Software Development for Special Functions,
//    in Numerical Analysis Dundee, 1975,
//    edited by GA Watson,
//    Lecture Notes in Mathematics 506,
//    Springer, 1976.
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
//    Output, double R8_GAMMA, the value of the function.
//
{
//
//  Coefficients for minimax approximation over (12, INF).
//
  double c[7] = {
   -1.910444077728E-03, 
    8.4171387781295E-04, 
   -5.952379913043012E-04, 
    7.93650793500350248E-04, 
   -2.777777777777681622553E-03, 
    8.333333333333333331554247E-02, 
    5.7083835261E-03 };
  double eps = 2.22E-16;
  double fact;
  double half = 0.5;
  int i;
  int n;
  double one = 1.0;
  double p[8] = {
  -1.71618513886549492533811E+00,
   2.47656508055759199108314E+01, 
  -3.79804256470945635097577E+02,
   6.29331155312818442661052E+02, 
   8.66966202790413211295064E+02,
  -3.14512729688483675254357E+04, 
  -3.61444134186911729807069E+04,
   6.64561438202405440627855E+04 };
  bool parity;
  double pi = 3.1415926535897932384626434;
  double q[8] = {
  -3.08402300119738975254353E+01,
   3.15350626979604161529144E+02, 
  -1.01515636749021914166146E+03,
  -3.10777167157231109440444E+03, 
   2.25381184209801510330112E+04,
   4.75584627752788110767815E+03, 
  -1.34659959864969306392456E+05,
  -1.15132259675553483497211E+05 };
  double res;
  double sqrtpi = 0.9189385332046727417803297;
  double sum;
  double twelve = 12.0;
  double two = 2.0;
  double value;
  double xbig = 171.624;
  double xden;
  double xinf = 1.79E+308;
  double xminin = 2.23E-308;
  double xnum;
  double y;
  double y1;
  double ysq;
  double z;
  double zero = 0.0;;

  parity = false;
  fact = one;
  n = 0;
  y = x;
//
//  Argument is negative.
//
  if ( y <= zero )
  {
    y = - x;
    y1 = ( double ) ( int ) ( y );
    res = y - y1;

    if ( res != zero )
    {
      if ( y1 != ( double ) ( int ) ( y1 * half ) * two )
      {
        parity = true;
      }

      fact = - pi / sin ( pi * res );
      y = y + one;
    }
    else
    {
      res = xinf;
      value = res;
      return value;
    }
  }
//
//  Argument is positive.
//
  if ( y < eps )
  {
//
//  Argument < EPS.
//
    if ( xminin <= y )
    {
      res = one / y;
    }
    else
    {
      res = xinf;
      value = res;
      return value;
    }
  }
  else if ( y < twelve )
  {
    y1 = y;
//
//  0.0 < argument < 1.0.
//
    if ( y < one )
    {
      z = y;
      y = y + one;
    }
//
//  1.0 < argument < 12.0.
//  Reduce argument if necessary.
//
    else
    {
      n = ( int ) ( y ) - 1;
      y = y - ( double ) ( n );
      z = y - one;
    }
//
//  Evaluate approximation for 1.0 < argument < 2.0.
//
    xnum = zero;
    xden = one;
    for ( i = 0; i < 8; i++ )
    {
      xnum = ( xnum + p[i] ) * z;
      xden = xden * z + q[i];
    }
    res = xnum / xden + one;
//
//  Adjust result for case  0.0 < argument < 1.0.
//
    if ( y1 < y )
    {
      res = res / y1;
    }
//
//  Adjust result for case 2.0 < argument < 12.0.
//
    else if ( y < y1 )
    {
      for ( i = 1; i <= n; i++ )
      {
        res = res * y;
        y = y + one;
      }
    }
  }
  else
  {
//
//  Evaluate for 12.0 <= argument.
//
    if ( y <= xbig )
    {
      ysq = y * y;
      sum = c[6];
      for ( i = 0; i < 6; i++ )
      {
        sum = sum / ysq + c[i];
      }
      sum = sum / y - y + sqrtpi;
      sum = sum + ( y - half ) * log ( y );
      res = exp ( sum );
    }
    else
    {
      res = xinf;
      value = res;
      return value;
    }
  }
//
//  Final adjustments and return.
//
  if ( parity )
  {
    res = - res;
  }

  if ( fact != one )
  {
    res = fact / res;
  }

  value = res;

  return value;
}
//****************************************************************************80

double r8_huge ( void )

//****************************************************************************80
//
//  Purpose:
//
//    R8_HUGE returns a "huge" R8.
//
//  Discussion:
//
//    HUGE_VAL is the largest representable legal real number, and is usually
//    defined in math.h, or sometimes in stdlib.h.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    08 May 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, double R8_HUGE, a "huge" real value.
//
{
  return HUGE_VAL;
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

int r8_nint ( double x )

//****************************************************************************80
//
//  Purpose:
//
//    R8_NINT returns the integer that is nearest to a double value.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 May 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, double X, the real number.
//
//    Output, int R8_NINT, the nearest integer.
//
{
  double d;
  int i;

  i = int ( x );
  d = x - i;

  if ( r8_abs ( d ) <= 0.5 )
  {
    return i;
  }
  else if ( x < i ) 
  {
    return (i-1);
  }
  else
  {
    return (i+1);
  }
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

double r8_tiny ( void )

//****************************************************************************80
//
//  Purpose:
//
//    R8_TINY returns a "tiny" R8.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    08 March 2007
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Output, float R8_TINY, a "tiny" R8 value.
//
{
  float value;

  value = 0.4450147717014E-307;

  return value;
}
//****************************************************************************80

void r8vec_copy ( int n, double a1[], double a2[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_COPY copies an R8VEC.
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
//    Input, double A2[N], the copy of A1.
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

double r8vec_dot ( int n, double a1[], double a2[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_DOT computes the dot product of a pair of R8VEC's.
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
//    Input, double A1[N], A2[N], the two vectors to be considered.
//
//    Output, double R8VEC_DOT, the dot product of the vectors.
//
{
  int i;
  double value;

  value = 0.0;
  for ( i = 0; i < n; i++ )
  {
    value = value + a1[i] * a2[i];
  }

  return value;
}
//****************************************************************************80

void r8vec_print ( int n, double a[], char *title )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_PRINT prints an R8VEC
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    29 May 2003
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
//    Input, char *TITLE, a title to be printed first.
//    TITLE may be blank.
//
{
  int i;

  if ( s_len_trim ( title ) != 0 )
  {
    cout << "\n";
    cout << title << "\n";
  }

  cout << "\n";
  for ( i = 0; i <= n-1; i++ ) 
  {
    cout << "  " << setw(8)  << i 
         << "  " << setw(12) << a[i] << "\n";
  }

  return;
}
//****************************************************************************80

double r8vec_product ( int n, double a[] )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_PRODUCT returns the product of the entries of an R8VEC.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    17 September 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of entries in the vector.
//
//    Input, double A[N], the vector.
//
//    Output, double R8VEC_PRODUCT, the product of the vector.
//
{
  int i;
  double product;

  product = 1.0;
  for ( i = 0; i < n; i++ )
  {
    product = product * a[i];
  }

  return product;
}
//****************************************************************************

double r8vec_sum ( int n, double a[] )

//****************************************************************************
//
//  Purpose:
//
//    R8VEC_SUM returns the sum of an R8VEC.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    15 October 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int N, the number of entries in the vector.
//
//    Input, double A[N], the vector.
//
//    Output, double R8VEC_SUM, the sum of the vector.
//
{
  int i;
  double sum;

  sum = 0.0;
  for ( i = 0; i < n; i++ )
  {
    sum = sum + a[i];
  }

  return sum;
}
//****************************************************************************80

double *r8vec_uniform_01 ( int n, int *seed )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_UNIFORM_01 returns a unit pseudorandom R8VEC.
//
//  Discussion:
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
//    19 August 2004
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
//    Input/output, int *SEED, a seed for the random number generator.
//
//    Output, double R8VEC_UNIFORM_01[N], the vector of pseudorandom values.
//
{
  int i;
  int i4_huge = 2147483647;
  int k;
  double *r;

  if ( *seed == 0 )
  {
    cerr << "\n";
    cerr << "R8VEC_UNIFORM_01 - Fatal error!\n";
    cerr << "  Input value of SEED = 0.\n";
    exit ( 1 );
  }

  r = new double[n];

  for ( i = 0; i < n; i++ )
  {
    k = *seed / 127773;

    *seed = 16807 * ( *seed - k * 127773 ) - k * 2836;

    if ( *seed < 0 )
    {
      *seed = *seed + i4_huge;
    }

    r[i] = ( double ) ( *seed ) * 4.656612875E-10;
  }

  return r;
}
//****************************************************************************80

bool s_eqi ( char *s1, char *s2 )

//****************************************************************************80
//
//  Purpose:
//
//    S_EQI reports whether two strings are equal, ignoring case.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    05 May 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char *S1, char *S2, pointers to two strings.
//
//    Output, bool S_EQI, is true if the strings are equal. 
//
{
  int i;
  int nchar;
  int nchar1;
  int nchar2;

  nchar1 = strlen ( s1 );
  nchar2 = strlen ( s2 );
  if ( nchar1 < nchar2 )
  {
    nchar = nchar1;
  }
  else
  {
    nchar = nchar2;
  }
//
//  The strings are not equal if they differ over their common length.
//
  for ( i = 0; i < nchar; i++ ) 
  {

    if ( ch_cap ( s1[i] ) != ch_cap ( s2[i] ) ) 
    {
      return false;
    }
  }
//
//  The strings are not equal if the longer one includes nonblanks
//  in the tail.
//
  if ( nchar < nchar1 ) 
  {
    for ( i = nchar; i < nchar1; i++ ) 
    {
      if ( s1[i] != ' ' ) 
      {
        return false;
      }
    } 
  }
  else if ( nchar < nchar2 ) 
  {
    for ( i = nchar; i < nchar2; i++ )
    {
      if ( s2[i] != ' ' ) 
      {
        return false;
      }
    } 
  }

  return true;
}
//****************************************************************************80

int s_len_trim ( char *s )

//****************************************************************************80
//
//  Purpose:
//
//    S_LEN_TRIM returns the length of a string to the last nonblank.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    26 April 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char *S, a pointer to a string.
//
//    Output, int S_LEN_TRIM, the length of the string to the last nonblank.
//    If S_LEN_TRIM is 0, then the string is entirely blank.
//
{
  int n;
  char *t;

  n = strlen ( s );
  t = s + strlen ( s ) - 1;

  while ( 0 < n ) 
  {
    if ( *t != ' ' )
    {
      return n;
    }
    t--;
    n--;
  }

  return n;
}
//****************************************************************************80

double simplex_unit_volume_nd ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    SIMPLEX_UNIT_VOLUME_ND computes the volume of the unit simplex in ND.
//
//  Discussion:
//
//    The formula is simple: volume = 1/DIM_NUM!.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 September 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the space.
//
//    Output, double SIMPLEX_UNIT_VOLUME_ND, the volume of the cone.
//
{
  int i;
  double volume;

  volume = 1.0;
  for ( i = 1; i <= dim_num; i++ )
  {
    volume = volume / ( ( double ) i );
  }

  return volume;
}
//****************************************************************************80

double sphere_unit_area_nd ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    SPHERE_UNIT_AREA_ND computes the surface area of a unit sphere in ND.
//
//  Discussion:
//
//    The unit sphere in ND satisfies the equation:
//
//      Sum ( 1 <= I <= DIM_NUM ) X(I) * X(I) = 1
//
//    DIM_NUM   Area
//
//     2    2        * PI
//     3    4        * PI
//     4  ( 2 /   1) * PI**2
//     5  ( 8 /   3) * PI**2
//     6  ( 1 /   1) * PI**3
//     7  (16 /  15) * PI**3
//     8  ( 1 /   3) * PI**4
//     9  (32 / 105) * PI**4
//    10  ( 1 /  12) * PI**5
//
//    For the unit sphere, Area(DIM_NUM) = DIM_NUM * Volume(DIM_NUM)
//
//    Sphere_Unit_Area ( DIM_NUM ) = 2 * PI**(DIM_NUM/2) / Gamma ( DIM_NUM / 2 )
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    05 September 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the space.
//
//    Output, double SPHERE_UNIT_AREA_ND, the area of the sphere.
//
{
  double area;
  int i;
  int m;
  double pi = 3.141592653589793;

  if ( ( dim_num % 2 ) == 0 )
  {
    m = dim_num / 2;
    area = 2.0 * pow ( pi, m );
    for ( i = 1; i <= m-1; i++ )
    {
      area = area / ( ( double ) i );
    }
  }
  else
  {
    m = ( dim_num - 1 ) / 2;
    area = pow ( 2.0, dim_num ) * pow ( pi, m );
    for ( i = m+1; i <= 2*m; i++ )
    {
      area = area / ( ( double ) i );
    }
  }

  return area;
}
//****************************************************************************80

double sphere_unit_volume_nd ( int dim_num )

//****************************************************************************80
//
//  Purpose:
//
//    SPHERE_UNIT_VOLUME_ND computes the volume of a unit sphere in ND.
//
//  Discussion:
//
//    The unit sphere in ND satisfies the equation:
//
//      Sum ( 1 <= I <= DIM_NUM ) X(I) * X(I) = 1
//
//     DIM_NUM  Volume
//
//     1    2
//     2    1        * PI
//     3  ( 4 /   3) * PI
//     4  ( 1 /   2) * PI**2
//     5  ( 8 /  15) * PI**2
//     6  ( 1 /   6) * PI**3
//     7  (16 / 105) * PI**3
//     8  ( 1 /  24) * PI**4
//     9  (32 / 945) * PI**4
//    10  ( 1 / 120) * PI**5
//
//    For the unit sphere, Volume(N) = 2 * PI * Volume(N-2)/ N
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 September 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the space.
//
//    Output, double SPHERE_UNIT_VOLUME_ND, the volume of the sphere.
//
{
  int i;
  int m;
  double pi = 3.141592653589793;
  double volume;

  if ( dim_num % 2== 0 )
  {
    m = dim_num / 2;
    volume = 1.0;
    for ( i = 1; i <= m; i++ )
    {
      volume = volume * pi / ( ( double ) i );
    }
  }
  else
  {
    m = ( dim_num - 1 ) / 2;
    volume = pow ( pi, m ) * pow ( 2.0, dim_num );
    for ( i = m+1; i <= 2*m+1; i++ )
    {
      volume = volume / ( ( double ) i );
    }
  }

  return volume;
}
//****************************************************************************80

double sphere_volume_nd ( int dim_num, double r )

//****************************************************************************80
//
//  Purpose:
//
//    SPHERE_VOLUME_ND computes the volume of an implicit sphere in ND.
//
//  Discussion:
//
//    The implicit form of a sphere in 3D is:
//
//        pow ( P[0] - PC[0], 2 ) 
//      + pow ( P[1] - PC[1], 2 ) 
//      + pow ( P[2] - PC[2], 2 ) = pow ( R, 2 )
//
//    DIM_NUM  Volume
//
//    2             PI    * R**2
//    3  (4/3)    * PI    * R**3
//    4  (1/2)    * PI**2 * R**4
//    5  (8/15)   * PI**2 * R**5
//    6  (1/6)    * PI**3 * R**6
//    7  (16/105) * PI**3 * R**7
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 September 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int DIM_NUM, the dimension of the space.
//
//    Input, double R, the radius of the sphere.
//
//    Output, double SPHERE_VOLUME_ND, the volume of the sphere.
//
{
  return ( pow ( r, dim_num ) * sphere_unit_volume_nd ( dim_num ) );
}
//****************************************************************************80

void timestamp ( void )

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
//****************************************************************************80

void tuple_next ( int m1, int m2, int n, int *rank, int x[] )

//****************************************************************************80
//
//  Purpose:
//
//    TUPLE_NEXT computes the next element of a tuple space.
//
//  Discussion:
//
//    The elements are N vectors.  Each entry is constrained to lie
//    between M1 and M2.  The elements are produced one at a time.
//    The first element is
//      (M1,M1,...,M1),
//    the second element is
//      (M1,M1,...,M1+1),
//    and the last element is
//      (M2,M2,...,M2)
//    Intermediate elements are produced in lexicographic order.
//
//  Example:
//
//    N = 2, M1 = 1, M2 = 3
//
//    INPUT        OUTPUT
//    -------      -------
//    Rank  X      Rank   X
//    ----  ---    -----  ---
//    0     * *    1      1 1
//    1     1 1    2      1 2
//    2     1 2    3      1 3
//    3     1 3    4      2 1
//    4     2 1    5      2 2
//    5     2 2    6      2 3
//    6     2 3    7      3 1
//    7     3 1    8      3 2
//    8     3 2    9      3 3
//    9     3 3    0      0 0
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    29 April 2003
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int M1, M2, the minimum and maximum entries.
//
//    Input, int N, the number of components.
//
//    Input/output, int *RANK, counts the elements.
//    On first call, set RANK to 0.  Thereafter, the output value of RANK
//    will indicate the order of the element returned.  When there are no
//    more elements, RANK will be returned as 0.
//
//    Input/output, int X[N], on input the previous tuple.
//    On output, the next tuple.
//
{
  int i;
  int j;

  if ( m2 < m1 )
  {
    *rank = 0;
    return;
  }

  if ( *rank <= 0 )
  {
    for ( i = 0; i < n; i++ )
    {
      x[i] = m1;
    }
    *rank = 1;
  }
  else
  {
    *rank = *rank + 1;
    i = n - 1;

    for ( ; ; )
    {

      if ( x[i] < m2 )
      {
        x[i] = x[i] + 1;
        break;
      }

      x[i] = m1;

      if ( i == 0 )
      {
        *rank = 0;
        for ( j = 0; j < n; j++ )
        {
          x[j] = m1;
        }
        break;
      }
      i = i - 1;
    }
  }
  return;
}
