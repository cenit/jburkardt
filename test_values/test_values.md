TEST\_VALUES\
Sample Function Values {#test_values-sample-function-values align="center"}
======================

------------------------------------------------------------------------

**TEST\_VALUES** is a C++ library which stores a few selected values of
various mathematical functions.

The intent of TEST\_VALUES is to provide a means of making very simple
tests for correctness of software designed to compute a variety of
functions. The testing can be done automatically. The data provided is
generally skimpy, and might not test the algorithm over a suitably wide
range. It does, however, provide a small amount of reassurance that a
given computation is (or is not) computing the appropriate quantity, and
doing so reasonably accurately.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TEST\_VALUES** is available in [a C
version](../../c_src/test_values/test_values.md) and [a C++
version](../../master/test_values/test_values.md) and [a FORTRAN90
version](../../f_src/test_values/test_values.md) and [a MATLAB
version](../../m_src/test_values/test_values.md) and [a Python
version](../../py_src/test_values/test_values.md).

### Related Programs: {#related-programs align="center"}

[CORDIC](../../master/cordic/cordic.md), a C++ library which uses the
CORDIC method to compute certain elementary functions.

[FN](../../master/fn/fn.md), a C++ library which contains routines by
Wayne Fullerton for evaluating elementary and special functions.

[GSL](../../master/gsl/gsl.md), a C++ library which includes routines
that evaluate many special functions.

[LEGENDRE\_POLYNOMIAL](../../master/legendre_polynomial/legendre_polynomial.md),
a C++ library which evaluates the Legendre polynomial and associated
functions.

[LOBATTO\_POLYNOMIAL](../../master/lobatto_polynomial/lobatto_polynomial.md),
a C++ library which evaluates Lobatto polynomials, similar to Legendre
polynomials except that they are zero at both endpoints.

[POLPAK](../../master/polpak/polpak.md), a C++ library which computes
various mathematical functions; test values for many of these functions
are available in TEST\_VALUES.

[PROB](../../master/prob/prob.md), a C++ library which computes
various statistical functions; test values for many of these functions
are available in TEST\_VALUES.

### Reference: {#reference align="center"}

1.  Milton Abramowitz, Irene Stegun,\
    Handbook of Mathematical Functions,\
    National Bureau of Standards, 1964,\
    ISBN: 0-486-61272-4,\
    LC: QA47.A34.
2.  Robert Corless, Gaston Gonnet, David Hare, David Jeffrey, Donald
    Knuth,\
    On the Lambert W Function,\
    Advances in Computational Mathematics,\
    Volume 5, 1996, pages 329-359.
3.  Gerard Cornuejols, Regina Urbaniak, Robert Weismantel, Laurence
    Wolsey,\
    Decomposition of Integer Programs and of Generating Sets,\
    in Algorithms - ESA '97,\
    Lecture Notes in Computer Science 1284,\
    edited by R Burkard, G Woeginger,\
    Springer, 1997, pages 92-103,\
    LC: QA76.9.A43.E83.
4.  Marc Deleglise, Joel Rivat,\
    Computing the Summation of the Moebius Function,\
    Experimental Mathematics,\
    Volume 5, 1996, pages 291-295.
5.  Lester Haar, John Gallagher, George Kell,\
    NBS/NRC Steam Tables:\
    Thermodynamic and Transport Properties and Computer Programs for
    Vapor and Liquid States of Water in SI Units,\
    Hemisphere Publishing Corporation, Washington, 1984,\
    ISBN: 0-89116-353-0,\
    LC: TJ270.H3.
6.  Brian Hayes,\
    "Why W?",\
    The American Scientist,\
    Volume 93, March-April 2005, pages 104-108.
7.  Kanti Mardia, Peter Jupp,\
    Directional Statistics,\
    Wiley, 2000,\
    ISBN: 0471953334,\
    LC: QA276.M335
8.  Allan McLeod,\
    Algorithm 757: MISCFUN: A software package to compute uncommon
    special functions,\
    ACM Transactions on Mathematical Software,\
    Volume 22, Number 3, September 1996, pages 288-301.
9.  National Bureau of Standards,\
    Tables of the Bivariate Normal Distribution and Related Functions,\
    Applied Mathematics Series, Number 50, 1959.
10. Robert Owens,\
    An Algorithm to Solve the Frobenius Problem,\
    Mathematics Magazine,\
    Volume 76, Number 4, October 2003, 264-275.
11. Karl Pearson,\
    Tables of the Incomplete Beta Function,\
    Cambridge University Press, 1968,\
    ISBN: 0521059224,\
    LC: QA351.P38.
12. Frank Powell,\
    Statistical Tables for Sociology, Biology and Physical Sciences,\
    Cambridge University Press, 1982,\
    ISBN: 0521284732,\
    LC: QA276.25.S73.
13. Edward Reingold, Nachum Dershowitz,\
    Calendrical Calculations: The Millennium Edition,\
    Cambridge University Press, 2001,\
    ISBN: 0-521-77752-6,\
    LC: CE12.R45.
14. Johannes van der Corput,\
    Verteilungsfunktionen,\
    Proc Akad Amsterdam,\
    Volume 38, 1935,\
    Volume 39, 1936.
15. Eric Weisstein,\
    CRC Concise Encyclopedia of Mathematics,\
    CRC Press, 2002,\
    Second edition,\
    ISBN: 1584883472,\
    LC: QA5.W45
16. Stephen Wolfram,\
    The Mathematica Book,\
    Fourth Edition,\
    Cambridge University Press, 1999,\
    ISBN: 0-521-64314-7,\
    LC: QA76.95.W65.
17. Shanjie Zhang, Jianming Jin,\
    Computation of Special Functions,\
    Wiley, 1996,\
    ISBN: 0-471-11963-6,\
    LC: QA351.C45.
18. Daniel Zwillinger, editor,\
    CRC Standard Mathematical Tables and Formulae,\
    30th Edition,\
    CRC Press, 1996,\
    ISBN: 0-8493-2479-3,\
    LC: QA47.M315.
19. Daniel Zwillinger, Steven Kokoska,\
    Standard Probability and Statistical Tables,\
    CRC Press, 2000,\
    ISBN: 1-58488-059-7,\
    LC: QA273.3.Z95.

### Source Code: {#source-code align="center"}

-   [test\_values.cpp](test_values.cpp), the source code.
-   [test\_values.hpp](test_values.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [test\_values\_prb.cpp](test_values_prb.cpp), a sample calling
    program.
-   [test\_values\_prb\_output.txt](test_values_prb_output.txt), the
    output file.

### List of Routines: {#list-of-routines align="center"}

-   **ABRAM0\_VALUES** returns some values of the Abramowitz0 function.
-   **ABRAM1\_VALUES** returns some values of the Abramowitz1 function.
-   **ABRAM2\_VALUES** returns some values of the Abramowitz2 function.
-   **AGM\_VALUES** returns some values of the AGM.
-   **AIRY\_AI\_VALUES** returns some values of the Airy Ai(x) function.
-   **AIRY\_AI\_INT\_VALUES** returns some values of the integral of the
    Airy function.
-   **AIRY\_AI\_PRIME\_VALUES** returns some values of the Airy function
    Ai'(x).
-   **AIRY\_BI\_VALUES** returns some values of the Airy Bi(x) function.
-   **AIRY\_BI\_INT\_VALUES** returns some values of the integral of the
    Airy function.
-   **AIRY\_BI\_PRIME\_VALUES** returns some values of the Airy function
    Bi'(x).
-   **AIRY\_CAI\_VALUES** returns some values of the Airy Ai(x) for
    complex argument.
-   **AIRY\_CBI\_VALUES** returns some values of the Airy Bi(x) for
    complex argument.
-   **AIRY\_GI\_VALUES** returns some values of the Airy Gi function.
-   **AIRY\_HI\_VALUES** returns some values of the Airy Hi function.
-   **ARCCOS\_VALUES** returns some values of the arc cosine function.
-   **ARCCOSH\_VALUES** returns some values of the hyperbolic arc cosine
    function.
-   **ARCSIN\_VALUES** returns some values of the arc sine function.
-   **ARCSINH\_VALUES** returns some values of the hyperbolic arc sine
    function.
-   **ARCTAN\_VALUES** returns some values of the arc tangent function.
-   **ARCTAN\_INT\_VALUES** returns some values of the inverse tangent
    integral.
-   **ARCTAN2\_VALUES:** arc tangent function of two arguments.
-   **ARCTANH\_VALUES** returns some values of the hyperbolic arc
    tangent function.
-   **BEI0\_VALUES** returns some values of the Kelvin BEI function of
    order NU = 0.
-   **BEI1\_VALUES** returns some values of the Kelvin BEI function of
    order NU = 1.
-   **BELL\_VALUES** returns some values of the Bell numbers.
-   **BER0\_VALUES** returns some values of the Kelvin BER function of
    order NU = 0.
-   **BER1\_VALUES** returns some values of the Kelvin BER function of
    order NU = 1.
-   **BERNOULLI\_NUMBER\_VALUES** returns some values of the Bernoulli
    numbers.
-   **BERNOULLI\_POLY\_VALUES** returns some values of the Bernoulli
    polynomials.
-   **BERNSTEIN\_POLY\_01\_VALUES** returns some values of the Bernstein
    polynomials.
-   **BESSEL\_I0\_INT\_VALUES** returns some values of the Bessel I0
    integral.
-   **BESSEL\_I0\_SPHERICAL\_VALUES** returns some values of the
    Spherical Bessel function i0.
-   **BESSEL\_I0\_VALUES** returns some values of the I0 Bessel
    function.
-   **BESSEL\_I1\_SPHERICAL\_VALUES** returns some values of the
    Spherical Bessel function i1.
-   **BESSEL\_I1\_VALUES** returns some values of the I1 Bessel
    function.
-   **BESSEL\_IN\_VALUES** returns some values of the In Bessel
    function.
-   **BESSEL\_IX\_VALUES** returns some values of the Ix Bessel
    function.
-   **BESSEL\_J0\_INT\_VALUES** returns some values of the Bessel J0
    integral.
-   **BESSEL\_J0\_SPHERICAL\_VALUES** returns some values of the
    Spherical Bessel function j0.
-   **BESSEL\_J0\_VALUES** returns some values of the J0 Bessel
    function.
-   **BESSEL\_J1\_SPHERICAL\_VALUES** returns some values of the
    Spherical Bessel function j1.
-   **BESSEL\_J1\_VALUES** returns some values of the J1 Bessel
    function.
-   **BESSEL\_JN\_VALUES** returns some values of the Jn Bessel
    function.
-   **BESSEL\_JX\_VALUES** returns some values of the Jx Bessel
    function.
-   **BESSEL\_K0\_VALUES** returns some values of the K0 Bessel
    function.
-   **BESSEL\_K0\_INT\_VALUES** returns some values of the Bessel K0
    integral.
-   **BESSEL\_K1\_VALUES** returns some values of the K1 Bessel
    function.
-   **BESSEL\_KN\_VALUES** returns some values of the Kn Bessel
    function.
-   **BESSEL\_KX\_VALUES** returns some values of the Kx Bessel
    function.
-   **BESSEL\_Y0\_VALUES** returns some values of the Y0 Bessel
    function.
-   **BESSEL\_Y0\_INT\_VALUES** returns some values of the Bessel Y0
    integral.
-   **BESSEL\_Y0\_SPHERICAL\_VALUES** returns some values of the
    Spherical Bessel function y0.
-   **BESSEL\_Y1\_VALUES** returns some values of the Y1 Bessel
    function.
-   **BESSEL\_Y1\_SPHERICAL\_VALUES** returns some values of the
    Spherical Bessel function y1.
-   **BESSEL\_YN\_VALUES** returns some values of the Yn Bessel
    function.
-   **BESSEL\_YX\_VALUES** returns some values of the Yx Bessel
    function.
-   **BETA\_CDF\_VALUES** returns some values of the Beta CDF.
-   **BETA\_INC\_VALUES** returns some values of the incomplete Beta
    function.
-   **BETA\_LOG\_VALUES** returns some values of the logarithm of the
    Beta function.
-   **BETA\_NONCENTRAL\_CDF\_VALUES** returns some values of the
    noncentral Beta CDF.
-   **BETA\_VALUES** returns some values of the Beta function.
-   **BINOMIAL\_VALUES** returns some values of the binomial
    coefficients.
-   **BINOMIAL\_CDF\_VALUES** returns some values of the binomial CDF.
-   **BINOMIAL\_PDF\_VALUES** returns some values of the binomial PDF.
-   **BIVARIATE\_NORMAL\_CDF\_VALUES** returns some values of the
    bivariate normal CDF.
-   **CATALAN\_VALUES** returns some values of the Catalan numbers.
-   **CAUCHY\_CDF\_VALUES** returns some values of the Cauchy CDF.
-   **CBRT\_VALUES** returns some values of the cube root function.
-   **CHEBY\_T\_POLY\_VALUES** returns values of Chebyshev polynomials
    T(n,x).
-   **CHEBY\_T01\_POLY\_VALUES:** values of shifted Chebyshev
    polynomials T01(n,x).
-   **CHEBY\_U\_POLY\_VALUES** returns values of Chebyshev polynomials
    U(n,x).
-   **CHEBY\_U01\_POLY\_VALUES:** values of shifted Chebyshev
    polynomials U01(n,x).
-   **CHEBY\_V\_POLY\_VALUES** returns values of Chebyshev polynomials
    V(n,x).
-   **CHEBY\_V01\_POLY\_VALUES:** values of shifted Chebyshev
    polynomials V01(n,x).
-   **CHEBY\_W\_POLY\_VALUES** returns values of Chebyshev polynomials
    W(n,x).
-   **CHEBY\_W01\_POLY\_VALUES:** values of shifted Chebyshev
    polynomials W01(n,x).
-   **CHI\_VALUES** returns some values of the hyperbolic cosine
    integral function.
-   **CHI\_SQUARE\_CDF\_VALUES** returns some values of the Chi-Square
    CDF.
-   **CHI\_SQUARE\_NONCENTRAL\_CDF\_VALUES** returns values of the
    noncentral chi CDF.
-   **CI\_VALUES** returns some values of the cosine integral function.
-   **CIN\_VALUES** returns some values of the alternate cosine integral
    function.
-   **CINH\_VALUES** returns some values of the alternate hyperbolic
    cosine integral.
-   **CLAUSEN\_VALUES** returns some values of the Clausen's integral.
-   **CLEBSCH\_GORDAN\_VALUES** returns some values of the
    Clebsch-Gordan function.
-   **COLLATZ\_COUNT\_VALUES** returns some values of the Collatz count
    function.
-   **COS\_VALUES** returns some values of the cosine function.
-   **COS\_DEGREE\_VALUES:** values of the cosine function for degree
    arguments.
-   **COS\_POWER\_INT\_VALUES** returns some values of the sine power
    integral.
-   **COSH\_VALUES** returns some values of the hyperbolic cosine
    function.
-   **COT\_VALUES** returns some values of the cotangent function.
-   **CP\_VALUES** returns some values of the specific heat at constant
    pressure.
-   **DAWSON\_VALUES** returns some values of Dawson's integral.
-   **DEBYE1\_VALUES** returns some values of Debye's function of
    order 1.
-   **DEBYE2\_VALUES** returns some values of Debye's function of
    order 2.
-   **DEBYE3\_VALUES** returns some values of Debye's function of
    order 3.
-   **DEBYE4\_VALUES** returns some values of Debye's function of
    order 4.
-   **DIELECTRIC\_VALUES** returns some values of the static dielectric
    constant.
-   **DEDEKIND\_SUM\_VALUES** returns some values of the Dedekind sum.
-   **DILOGARITHM\_VALUES** returns some values of the dilogarithm
    function.
-   **E1\_VALUES** returns some values of the exponential integral
    function E1(X).
-   **EI\_VALUES** returns some values of the exponential integral
    function EI(X).
-   **ELLIPTIC\_EA\_VALUES** returns values of the complete elliptic
    integral E(ALPHA).
-   **ELLIPTIC\_EM\_VALUES** returns values of the complete elliptic
    integral E(M).
-   **ELLIPTIC\_KA\_VALUES** returns values of the complete elliptic
    integral K(ALPHA).
-   **ELLIPTIC\_KM\_VALUES** returns values of the complete elliptic
    integral K(M).
-   **ERF\_VALUES** returns some values of the ERF or "error" function.
-   **ERFC\_VALUES** returns some values of the ERFC or "complementary
    error" function.
-   **EULER\_NUMBER\_VALUES** returns some values of the Euler numbers.
-   **EULER\_POLY\_VALUES** returns some values of the Euler
    polynomials.
-   **EXP\_VALUES** returns some values of the exponential function.
-   **EXP3\_INT\_VALUES** returns some values of the EXP3 integral
    function.
-   **EXPONENTIAL\_CDF\_VALUES** returns some values of the Exponential
    CDF.
-   **EXTREME\_VALUES\_CDF\_VALUES** returns some values of the Extreme
    Values CDF.
-   **F\_CDF\_VALUES** returns some values of the F CDF test function.
-   **F\_NONCENTRAL\_CDF\_VALUES** returns some values of the F CDF test
    function.
-   **FRESNEL\_COS\_VALUES** returns values of the Fresnel cosine
    integral function.
-   **FRESNEL\_SIN\_VALUES** returns some values of the Fresnel sine
    integral function.
-   **FROBENIUS\_NUMBER\_DATA\_VALUES** returns data for the Frobenius
    problem.
-   **FROBENIUS\_NUMBER\_ORDER\_VALUES** returns orders of the Frobenius
    problem.
-   **FROBENIUS\_NUMBER\_ORDER2\_VALUES** returns values of the order 2
    Frobenius number.
-   **GAMMA\_VALUES** returns some values of the Gamma function.
-   **GAMMA\_CDF\_VALUES** returns some values of the Gamma CDF.
-   **GAMMA\_INC\_P\_VALUES:** values of normalized incomplete Gamma
    function P(A,X).
-   **GAMMA\_INC\_Q\_VALUES:** values of normalized incomplete Gamma
    function Q(A,X).
-   **GAMMA\_INC\_TRICOMI\_VALUES:** values of Tricomi's incomplete
    Gamma function.
-   **GAMMA\_INC\_VALUES** returns some values of the incomplete Gamma
    function.
-   **GAMMA\_LOG\_VALUES** returns some values of the Log Gamma
    function.
-   **GEGENBAUER\_POLY\_VALUES** returns some values of the Gegenbauer
    polynomials.
-   **GEOMETRIC\_CDF\_VALUES** returns values of the geometric CDF.
-   **GOODWIN\_VALUES** returns some values of the Goodwin and Staton
    function.
-   **GUD\_VALUES** returns some values of the Gudermannian function.
-   **HERMITE\_FUNCTION\_VALUES** returns some values of the Hermite
    function.
-   **HERMITE\_POLY\_PHYS\_VALUES** returns some values of the
    physicist's Hermite polynomial.
-   **HERMITE\_POLY\_PROB\_VALUES:** values of the probabilist's Hermite
    polynomial.
-   **HYPER\_1F1\_VALUES** returns some values of the hypergeometric
    function 1F1.
-   **HYPER\_2F1\_VALUES** returns some values of the hypergeometric
    function 2F1.
-   **HYPERGEOMETRIC\_CDF\_VALUES** returns some values of the
    hypergeometric CDF.
-   **HYPERGEOMETRIC\_PDF\_VALUES** returns some values of the
    hypergeometric PDF.
-   **HYPERGEOMETRIC\_U\_VALUES:** some values of the hypergeometric
    function U(a,b,x).
-   **I0ML0\_VALUES** returns some values of the I0ML0 function.
-   **I1ML1\_VALUES** returns some values of the I1ML1 function.
-   **I4\_FACTORIAL\_VALUES** returns values of the factorial function.
-   **I4\_FACTORIAL2\_VALUES** returns values of the double factorial
    function.
-   **I4\_FALL\_VALUES** returns values of the integer falling factorial
    function.
-   **I4\_RISE\_VALUES** returns values of the integer rising factorial
    function.
-   **INT\_VALUES** returns some values of the "integer part" function.
-   **JACOBI\_CN\_VALUES** returns some values of the Jacobi elliptic
    function CN(A,X).
-   **JACOBI\_DN\_VALUES** returns some values of the Jacobi elliptic
    function DN(A,X).
-   **JACOBI\_POLY\_VALUES** returns some values of the Jacobi
    polynomial.
-   **JACOBI\_SN\_VALUES** returns some values of the Jacobi elliptic
    function SN(A,X).
-   **JED\_CE\_VALUES** returns the Common Era dates for Julian
    Ephemeris Dates.
-   **JED\_MJD\_VALUES** returns the MJD for Julian Ephemeris Dates.
-   **JED\_RD\_VALUES** returns the RD for Julian Ephemeris Dates.
-   **JED\_WEEKDAY\_VALUES** returns the day of the week for Julian
    Ephemeris Dates.
-   **KEI0\_VALUES** returns some values of the Kelvin KEI function of
    order NU = 0.
-   **KEI1\_VALUES** returns some values of the Kelvin KEI function of
    order NU = 1.
-   **KER0\_VALUES** returns some values of the Kelvin KER function of
    order NU = 0.
-   **KER1\_VALUES** returns some values of the Kelvin KER function of
    order NU = 1.
-   **LAGUERRE\_ASSOCIATED\_VALUES** returns some values of the
    associated Laguerre polynomials.
-   **LAGUERRE\_GENERAL\_VALUES** returns some values of the generalized
    Laguerre function.
-   **LAGUERRE\_POLYNOMIAL\_VALUES** returns some values of the Laguerre
    polynomial.
-   **LAMBERT\_W\_VALUES** returns some values of the Lambert W
    function.
-   **LAPLACE\_CDF\_VALUES** returns some values of the Laplace CDF.
-   **LEGENDRE\_ASSOCIATED\_VALUES** returns values of associated
    Legendre functions.
-   **LEGENDRE\_ASSOCIATED\_NORMALIZED\_SPHERE\_VALUES:** normalized
    associated Legendre.
-   **LEGENDRE\_ASSOCIATED\_NORMALIZED\_VALUES:** normalized associated
    Legendre.
-   **LEGENDRE\_FUNCTION\_Q\_VALUES** returns values of the Legendre Q
    function.
-   **LEGENDRE\_POLY\_VALUES** returns values of the Legendre
    polynomials.
-   **LOBATTO\_POLYNOMIAL\_VALUES** returns values of the completed
    Lobatto polynomials.
-   **LOBATTO\_POLYNOMIAL\_DERIVATIVES:** derivatives of the completed
    Lobatto polynomials.
-   **LERCH\_VALUES** returns some values of the Lerch transcendent
    function.
-   **LINEAR\_SYSTEM\_VALUES** returns some linear systems.
-   **LOBACHEVSKY\_VALUES** returns some values of the Lobachevsky
    function.
-   **LOG\_VALUES** returns some values of the natural logarithm
    function.
-   **LOG\_NORMAL\_CDF\_VALUES** returns some values of the Log Normal
    CDF.
-   **LOG\_SERIES\_CDF\_VALUES** returns some values of the log series
    CDF.
-   **LOG10\_VALUES** returns some values of the logarithm base 10
    function.
-   **LOGARITHMIC\_INTEGRAL\_VALUES** returns values of the logarithmic
    integral LI(X).
-   **LOGISTIC\_CDF\_VALUES** returns some values of the Logistic CDF.
-   **MERTENS\_VALUES** returns some values of the Mertens function.
-   **MOEBIUS\_VALUES** returns some values of the Moebius function.
-   **NEGATIVE\_BINOMIAL\_CDF\_VALUES** returns values of the negative
    binomial CDF.
-   **NINE\_J\_VALUES** returns some values of the Wigner 9J function.
-   **NORMAL\_01\_CDF\_VALUES** returns some values of the Normal 01
    CDF.
-   **NORMAL\_CDF\_VALUES** returns some values of the Normal CDF.
-   **NORMAL\_PDF\_VALUES** returns some values of the Normal PDF.
-   **OMEGA\_VALUES** returns some values of the OMEGA function.
-   **OWEN\_VALUES** returns some values of Owen's T function.
-   **PARTITION\_COUNT\_VALUES** returns some values of the int
    \*partition count.
-   **PARTITION\_DISTINCT\_COUNT\_VALUES** returns some values of Q(N).
-   **PHI\_VALUES** returns some values of the PHI function.
-   **PI\_VALUES** returns values of the Pi function.
-   **POISSON\_CDF\_VALUES** returns some values of the Poisson CDF.
-   **POLYLOGARITHM\_VALUES** returns some values of the polylogarithm.
-   **PRANDTL\_VALUES** returns some values of the Prandtl number.
-   **PRIME\_VALUES** returns values of the prime function.
-   **PSAT\_VALUES** returns some values of the saturation pressure.
-   **PSI\_VALUES** returns some values of the Psi or Digamma function.
-   **R8\_FACTORIAL\_VALUES** returns values of the real factorial
    function.
-   **R8\_FACTORIAL\_LOG\_VALUES** returns values of log(n!).
-   **R8\_FACTORIAL2\_VALUES** returns values of the double factorial
    function.
-   **R8\_FALL\_VALUES** returns some values of the falling factorial
    function.
-   **R8\_RISE\_VALUES** returns some values of the rising factorial
    function.
-   **RAYLEIGH\_CDF\_VALUES** returns some values of the Rayleigh CDF.
-   **SECVIR\_VALUES** returns some values of the second virial
    coefficient.
-   **SHI\_VALUES** returns some values of the hyperbolic sine integral
    function.
-   **SI\_VALUES** returns some values of the sine integral function.
-   **SIGMA\_VALUES** returns some values of the Sigma function.
-   **SIN\_VALUES** returns some values of the sine function.
-   **SIN\_DEGREE\_VALUES:** the sine function with argument in degrees.
-   **SIN\_POWER\_INT\_VALUES** returns some values of the sine power
    integral.
-   **SINH\_VALUES** returns some values of the hyperbolic sine
    function.
-   **SIX\_J\_VALUES** returns some values of the Wigner 6J function.
-   **SOUND\_VALUES** returns some values of the speed of sound.
-   **SPHERE\_UNIT\_AREA\_VALUES** returns some areas of the unit sphere
    in ND.
-   **SPHERE\_UNIT\_VOLUME\_VALUES** returns some volumes of the unit
    sphere in ND.
-   **SPHERICAL\_HARMONIC\_VALUES** returns values of spherical harmonic
    functions.
-   **SQRT\_VALUES** returns some values of the square root function.
-   **STIRLING1\_VALUES** returns some values of the Stirling numbers,
    kind 1.
-   **STIRLING2\_VALUES** returns some values of the Stirling numbers,
    kind 2.
-   **STROMGEN\_VALUES** returns some values of the Stromgen function.
-   **STRUVE\_H0\_VALUES** returns some values of the Struve H0
    function.
-   **STRUVE\_H1\_VALUES** returns some values of the Struve H1
    function.
-   **STRUVE\_L0\_VALUES** returns some values of the Struve L0
    function.
-   **STRUVE\_L1\_VALUES** returns some values of the Struve L1
    function.
-   **STUDENT\_CDF\_VALUES** returns some values of the Student CDF.
-   **STUDENT\_NONCENTRAL\_CDF\_VALUES** returns values of the
    noncentral Student CDF.
-   **SUBFACTORIAL\_VALUES** returns values of the subfactorial
    function.
-   **SURTEN\_VALUES** returns some values of the surface tension.
-   **SYNCH1\_VALUES** returns some values of the synchrotron radiation
    function.
-   **SYNCH2\_VALUES** returns some values of the synchrotron radiation
    function.
-   **TAN\_VALUES** returns some values of the tangent function.
-   **TANH\_VALUES** returns some values of the hyperbolic tangent
    function.
-   **TAU\_VALUES** returns some values of the Tau function.
-   **THERCON\_VALUES** returns some values of the thermal conductivity.
-   **THREE\_J\_VALUES** returns some values of the Wigner 3J function.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TRAN02\_VALUES** returns some values of the order 2 transportation
    function.
-   **TRAN03\_VALUES** returns some values of the order 3 transportation
    function.
-   **TRAN04\_VALUES** returns some values of the order 4 transportation
    function.
-   **TRAN05\_VALUES** returns some values of the order 5 transportation
    function.
-   **TRAN06\_VALUES** returns some values of the order 6 transportation
    function.
-   **TRAN07\_VALUES** returns some values of the order 7 transportation
    function.
-   **TRAN08\_VALUES** returns some values of the order 8 transportation
    function.
-   **TRAN09\_VALUES** returns some values of the order 9 transportation
    function.
-   **TRIGAMMA\_VALUES** returns some values of the TriGamma function.
-   **TRUNCATED\_NORMAL\_AB\_CDF\_VALUES:** values of the Truncated
    Normal CDF.
-   **TRUNCATED\_NORMAL\_AB\_PDF\_VALUES:** values of the Truncated
    Normal PDF.
-   **TRUNCATED\_NORMAL\_A\_CDF\_VALUES:** values of the Lower Truncated
    Normal CDF.
-   **TRUNCATED\_NORMAL\_A\_PDF\_VALUES:** values of the Lower Truncated
    Normal PDF.
-   **TRUNCATED\_NORMAL\_B\_CDF\_VALUES:** values of the upper Truncated
    Normal CDF.
-   **TRUNCATED\_NORMAL\_B\_PDF\_VALUES:** values of the Upper Truncated
    Normal PDF.
-   **TSAT\_VALUES** returns some values of the saturation temperature.
-   **VAN\_DER\_CORPUT\_VALUES** returns some values of the van der
    Corput sequence.
-   **VISCOSITY\_VALUES** returns some values of the viscosity function.
-   **VON\_MISES\_CDF\_VALUES** returns some values of the von Mises
    CDF.
-   **WEEKDAY\_VALUES** returns the day of the week for various dates.
-   **WEIBULL\_CDF\_VALUES** returns some values of the Weibull CDF.
-   **ZETA\_VALUES** returns some values of the Riemann Zeta function.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 27 July 2015.*
