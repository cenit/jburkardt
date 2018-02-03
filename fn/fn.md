FN\
The Fullerton Function Library. {#fn-the-fullerton-function-library. align="center"}
===============================

------------------------------------------------------------------------

**FN** is a C++ library which approximates elementary and special
functions using Chebyshev polynomials; functions include Airy, Bessel I,
Bessel J, Bessel K, Bessel Y, beta, confluent hypergeometric, cosine
integral, Dawson's integral, digamma (psi), error, exponential integral,
gamma, hyperbolic cosine integral, hyperbolic sine integral, incomplete
gamma, log gamma, logarithmic integral, Pochhammer, psi, sine integral,
Spence; by Wayne Fullerton.

The original version of the library provided routines for complex,
single precision real, and double precision real arguments and used the
prefixes "C" and "D" to indicate the complex and double precision
versions.

This scheme has been modified for consistency, and also to avoid
conflict with the names of functions commonly provided by various
compilers. The prefixes "C4\_", "R4\_" and "R8\_" are used to indicate
functions for complex, single precision real, and double precision real
arguments. For example, the sine function can be calculated by the
functions **C4\_SIN**, **R4\_SIN** or **R8\_SIN**.

The original, true, correct version of FN is available through NETLIB:
<http://www.netlib.org/fn/index.md>.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FN** is available in [a C version](../../c_src/fn/fn.md) and [a C++
version](../../master/fn/fn.md) and [a FORTRAN77
version](../../f77_src/fn/fn.md) and [a FORTRAN90
version](../../f_src/fn/fn.md) and [a MATLAB
version](../../m_src/fn/fn.md) and [a Python
version](../../py_src/fn/fn.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BESSELJ](../../master/besselj/besselj.md), a C++ library which
evaluates Bessel J functions of noninteger order.

[C4LIB](../../master/c4lib/c4lib.md), a C++ library which implements
certain elementary functions for "C4" or single precision complex
variables using the C++ "complex " datatype.

[C8LIB](../../master/c8lib/c8lib.md), a C++ library which implements
certain elementary functions for "C8" or double precision complex
variables using the C++ "complex " datatype.

[CHEBYSHEV\_SERIES](../../master/chebyshev_series/chebyshev_series.md),
a C++ library which can evaluate a Chebyshev series approximating a
function f(x), while efficiently computing one, two or three derivatives
of the series, which approximate f'(x), f''(x), and f'''(x).

[CLAUSEN](../../master/clausen/clausen.md), a C++ library which
evaluates a Chebyshev interpolant to the Clausen function Cl2(x).

[CORDIC](../../master/cordic/cordic.md), a C++ library which uses the
CORDIC method to compute certain elementary functions.

[G++\_INTRINSICS](../../master/g++_intrinsics/g++_intrinsics.md), a
C++ program which tests or demonstrates some of the intrinsic functions
provided by the G++ compiler.

[LEGENDRE\_POLYNOMIAL](../../master/legendre_polynomial/legendre_polynomial.md),
a C++ library which evaluates the Legendre polynomial and associated
functions.

[MACHAR](../../master/machar/machar.md), a C++ library which computes
the appropriate values of machine constants for a given machine.

[MACHINE](../../master/machine/machine.md), a C++ library which
stores the appropriate values of machine constants for a given machine.

[R4LIB](../../master/r4lib/r4lib.md), a C++ library which contains
many utility routines, using "R4" or "single precision real" arithmetic.

[R8LIB](../../master/r8lib/r8lib.md), a C++ library which contains
many utility routines, using "R8" or "double precision real" arithmetic.

[TEST\_VALUES](../../master/test_values/test_values.md), a C++
library which supplies test values of various mathematical functions.

### Reference: {#reference align="center"}

1.  Wayne Fullerton,\
    Portable Special Function Routines,\
    in Portability of Numerical Software,\
    edited by Wayne Cowell,\
    Lecture Notes in Computer Science, Volume 57, pages 452-483,\
    Springer 1977,\
    ISBN: 978-3-540-08446-4,\
    LC: QA297.W65.

### Source Code: {#source-code align="center"}

-   [fn.cpp](fn.cpp), the source code.
-   [fn.hpp](fn.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [fn\_prb.cpp](fn_prb.cpp), a sample calling program.
-   [fn\_prb\_output.txt](fn_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **C4\_COS** evaluates the cosine of a C4 argument.
-   **C4\_SIN** evaluates the sine of a C4 argument.
-   **I4\_ABS** returns the absolute value of an I4.
-   **I4\_MACH** returns integer machine constants.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_POW** returns the value of I\^J.
-   **R4\_ABS** returns the absolute value of an R4.
-   **R4\_ACOS** evaluates the arc-cosine of an R4 argument.
-   **R4\_ACOSH** evaluates the arc-hyperbolic cosine of an R4 argument.
-   **R4\_ADMP:** modulus and phase of the derivative of the Airy
    function.
-   **R4\_AI** evaluates the Airy function Ai of an R4 argument.
-   **R4\_AID** evaluates the derivative of the Airy function Ai of an
    R4 argument.
-   **R4\_AIDE:** exponentially scaled derivative, Airy function Ai of
    an R4 argument.
-   **R4\_AIE** evaluates the exponential scaled Airy function Ai of an
    R4 argument.
-   **R4\_AIMP** evaluates the modulus and phase of the Airy function.
-   **R4\_AINT** truncates an R4 argument to an integer.
-   **R4\_ASIN** evaluates the arc-sine of an R4 argument.
-   **R4\_ASINH** evaluates the arc-sine of an R4 argument.
-   **R4\_ATAN** evaluates the arc-tangent of an R4 argument.
-   **R4\_ATAN2** evaluates the arc-tangent of two R4 arguments.
-   **R4\_ATANH** evaluates the arc-hyperbolic tangent of an R4
    argument.
-   **R4\_BESI0** evaluates the Bessel function I of order 0 of an R4
    argument.
-   **R4\_BESI0E** evaluates the exponentially scaled Bessel function
    I0(X).
-   **R4\_BESI1** evaluates the Bessel function I of order 1 of an R4
    argument.
-   **R4\_BESJ0** evaluates the Bessel function J of order 0 of an R4
    argument.
-   **R4\_BESJ1** evaluates the Bessel function J of order 1 of an R4
    argument.
-   **R4\_BESK0** evaluates the Bessel function K of order 0 of an R4
    argument.
-   **R4\_BESK0E** evaluates the exponentially scaled Bessel function
    K0(X).
-   **R4\_BESK1** evaluates the Bessel function K of order 1 of an R4
    argument.
-   **R4\_BESK1E** evaluates the exponentially scaled Bessel function
    K1(X).
-   **R4\_BESKES** evaluates a sequence of exponentially scaled K Bessel
    functions at X.
-   **R4\_BESKS** evaluates a sequence of K Bessel functions at X.
-   **R4\_BESY0** evaluates the Bessel function Y of order 0 of an R4
    argument.
-   **R4\_BESY1** evaluates the Bessel function Y of order 1 of an R4
    argument.
-   **R4\_BETA** evaluates the beta function of R4 arguments.
-   **R4\_BETAI** evaluates the incomplete beta ratio of R4 arguments.
-   **R4\_BI** evaluates the Airy function Bi of an R4 argument.
-   **R4\_BID** evaluates the derivative of the Airy function Bi of an
    R4 argument.
-   **R4\_BIDE:** exponentially scaled derivative, Airy function Bi of
    an R4 argument.
-   **R4\_BIE** evaluates the exponentially scaled Airy function Bi of
    an R4 argument.
-   **R4\_BINOM** evaluates the binomial coefficient using R4
    arithmetic.
-   **R4\_CBRT** computes the cube root of an R4.
-   **R4\_CHI** evaluates the hyperbolic cosine integral of an R4
    argument.
-   **R4\_CHU** evaluates the confluent hypergeometric function of R4
    arguments.
-   **R4\_CHU\_SCALED:** scaled confluent hypergeometric function of R4
    arguments.
-   **R4\_CI** evaluates the cosine integral Ci of an R4 argument.
-   **R4\_CIN** evaluates the alternate cosine integral Cin of an R4
    argument.
-   **R4\_CINH** evaluates the alternate hyperbolic cosine integral Cinh
    of an R4 argument.
-   **R4\_COS** evaluates the cosine of an R4 argument.
-   **R4\_COS\_DEG** evaluates the cosine of an R4 argument in degrees.
-   **R4\_COSH** evaluates the hyperbolic cosine of an R4 argument.
-   **R4\_COT** evaluates the cotangent of an R4 argument.
-   **R4\_CSEVL** evaluates a Chebyshev series.
-   **R4\_DAWSON** evaluates Dawson's integral of an R4 argument.
-   **R4\_E1** evaluates the exponential integral E1 for an R4 argument.
-   **R4\_EI** evaluates the exponential integral Ei for an R4 argument.
-   **R4\_ERF** evaluates the error function of an R4 argument.
-   **R4\_ERFC** evaluates the co-error function of an R4 argument.
-   **R4\_EXP** evaluates the exponential of an R4 argument.
-   **R4\_EXPREL** evaluates the exponential relative error term of an
    R4 argument.
-   **R4\_FAC** evaluates the factorial of an I4 argument.
-   **R4\_GAMI** evaluates the incomplete gamma function for an R4
    argument.
-   **R4\_GAMIC** evaluates the complementary incomplete gamma function.
-   **R4\_GAMIT** evaluates Tricomi's incomplete gamma function for an
    R4 argument.
-   **R4\_GAML** evaluates bounds for an R4 argument of the gamma
    function.
-   **R4\_GAMMA** evaluates the gamma function of an R4 argument.
-   **R4\_GAMR** evaluates the reciprocal gamma function of an R4
    argument.
-   **R4\_GMIC:** complementary incomplete gamma, small X, A near
    negative integer.
-   **R4\_GMIT:** Tricomi's incomplete gamma function for small X.
-   **R4\_INITS** initializes a Chebyshev series.
-   **R4\_INT** returns the integer part of an R4 argument.
-   **R4\_KNUS** computes a sequence of K Bessel functions.
-   **R4\_LBETA** evaluates the logarithm of the beta function of R4
    arguments.
-   **R4\_LGAMS** evaluates the log of |gamma(x)| and sign, for an R4
    argument.
-   **R4\_LGIC** evaluates the log complementary incomplete gamma
    function for large X.
-   **R4\_LGIT** evaluates the log of Tricomi's incomplete gamma
    function.
-   **R4\_LGMC** evaluates the log gamma correction factor for an R4
    argument.
-   **R4\_LI** evaluates the logarithmic integral for an R4 argument.
-   **R4\_LNGAM** evaluates the log of the absolute value of gamma of an
    R4 argument.
-   **R4\_LNREL** evaluates log ( 1 + X ) for an R4 argument.
-   **R4\_LOG** evaluates the logarithm of an R4.
-   **R4\_LOG10** evaluates the logarithm, base 10, of an R4.
-   **R4\_MACH** returns single precision real machine constants.
-   **R4\_MACHAR** computes machine constants for R4 arithmetic.
-   **R4\_MAX** returns the maximum of two R4's.
-   **R4\_MIN** returns the minimum of two R4's..
-   **R4\_MOD** returns the remainder of R4 division.
-   **R4\_MOP** returns the I-th power of -1 as an R4 value.
-   **R4\_PAK** packs a base 2 exponent into an R4.
-   **R4\_POCH** evaluates Pochhammer's function of R4 arguments.
-   **R4\_POCH1** evaluates a quantity related to Pochhammer's symbol.
-   **R4\_POW** evaluates A\^B.
-   **R4\_PSI** evaluates the psi function of an R4 argument.
-   **R4\_RAND** is a portable pseudorandom number generator.
-   **R4\_RANDGS** generates a normally distributed random number.
-   **R4\_RANDOM** is a portable pseudorandom number generator.
-   **R4\_RANF** is a driver for R4\_RANDOM.
-   **R4\_REN** is a simple random number generator.
-   **R4\_SHI** evaluates the hyperbolic sine integral Shi of an R4
    argument.
-   **R4\_SI** evaluates the sine integral Si of an R4 argument.
-   **R4\_SIFG** is a utility routine.
-   **R4\_SIGN** returns the sign of an R4.
-   **R4\_SIN** evaluates the sine of an R4 argument.
-   **R4\_SIN\_DEG** evaluates the sine of an R4 argument in degrees.
-   **R4\_SINH** evaluates the hyperbolic sine of an R4 argument.
-   **R4\_SPENCE** evaluates a form of Spence's function for an R4
    argument.
-   **R4\_SQRT** computes the square root of an R4.
-   **R4\_TAN** evaluates the tangent of an R4 argument.
-   **R4\_TANH** evaluates the hyperbolic tangent of an R4 argument.
-   **R4\_UPAK** unpacks an R4 into a mantissa and exponent.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_ACOS** evaluates the arc-cosine of an R8 argument.
-   **R8\_ACOSH** evaluates the arc-hyperbolic cosine of an R8 argument.
-   **R8\_ADMP:** modulus and phase of the derivative of the Airy
    function.
-   **R8\_AI** evaluates the Airy function Ai of an R8 argument.
-   **R8\_AID** evaluates the derivative of the Airy function Ai of an
    R8 argument.
-   **R8\_AIDE:** exponentially scaled derivative, Airy function Ai of
    an R8 argument.
-   **R8\_AIE** evaluates the exponentially scaled Airy function Ai of
    an R8 argument.
-   **R8\_AIMP** evaluates the modulus and phase of the Airy function.
-   **R8\_AINT** truncates an R8 argument to an integer.
-   **R8\_ASIN** evaluates the arc-sine of an R8 argument.
-   **R8\_ASINH** evaluates the arc-sine of an R8 argument.
-   **R8\_ATAN** evaluates the arc-tangent of an R8 argument.
-   **R8\_ATAN2** evaluates the arc-tangent of two R8 arguments.
-   **R8\_B0MP** evaluates the modulus and phase for the Bessel J0 and
    Y0 functions.
-   **R8\_B1MP** evaluates the modulus and phase for the Bessel J1 and
    Y1 functions.
-   **R8\_BESI0** evaluates the Bessel function I of order 0 of an R8
    argument.
-   **R8\_BESI0E** evaluates the exponentially scaled Bessel function
    I0(X).
-   **R8\_BESI1** evaluates the Bessel function I of order 1 of an R8
    argument.
-   **R8\_BESI1E** evaluates the exponentially scaled Bessel function
    I1(X).
-   **R8\_BESJ0** evaluates the Bessel function J of order 0 of an R8
    argument.
-   **R8\_BESJ1** evaluates the Bessel function J of order 1 of an R8
    argument.
-   **R8\_BESK0** evaluates the Bessel function K of order 0 of an R8
    argument.
-   **R8\_BESK0E** evaluates the exponentially scaled Bessel function
    K0(X).
-   **R8\_BESK1** evaluates the Bessel function K of order 1 of an R8
    argument.
-   **R8\_BESK1E** evaluates the exponentially scaled Bessel function
    K1(X).
-   **R8\_BESKES:** a sequence of exponentially scaled K Bessel
    functions at X.
-   **R8\_BESKS** evaluates a sequence of K Bessel functions at X.
-   **R8\_BESY0** evaluates the Bessel function Y of order 0 of an R8
    argument.
-   **R8\_BESY1** evaluates the Bessel function Y of order 1 of an R8
    argument.
-   **R8\_BETA** evaluates the beta function of R8 arguments.
-   **R8\_BETAI** evaluates the incomplete beta ratio of R8 arguments.
-   **R8\_BI** evaluates the Airy function Bi of an R8 argument.
-   **R8\_BID** evaluates the derivative of the Airy function Bi of an
    R8 argument.
-   **R8\_BIDE:** exponentially scaled derivative, Airy function Bi of
    an R8 argument.
-   **R8\_BIE** evaluates the exponentially scaled Airy function Bi of
    an R8 argument.
-   **R8\_BINOM** evaluates the binomial coefficient using R8
    arithmetic.
-   **R8\_CBRT** computes the cube root of an R8.
-   **R8\_CHI** evaluates the hyperbolic cosine integral of an R8
    argument.
-   **R8\_CHU** evaluates the confluent hypergeometric function of R8
    arguments.
-   **R8\_CHU\_SCALED:** scaled confluent hypergeometric function of R8
    arguments.
-   **R8\_CI** evaluates the cosine integral Ci of an R8 argument.
-   **R8\_CIN** evaluates the alternate cosine integral Cin of an R8
    argument.
-   **R8\_CINH:** alternate hyperbolic cosine integral Cinh of an R8
    argument.
-   **R8\_COS** evaluates the cosine of an R8 argument.
-   **R8\_COS\_DEG** evaluates the cosine of an R8 argument in degrees.
-   **R8\_COSH** evaluates the hyperbolic cosine of an R8 argument.
-   **R8\_COT** evaluates the cotangent of an R8 argument.
-   **R8\_CSEVL** evaluates a Chebyshev series.
-   **R8\_DAWSON** evaluates Dawson's integral of an R8 argument.
-   **R8\_E1** evaluates the exponential integral E1 for an R8 argument.
-   **R8\_EI** evaluates the exponential integral Ei for an R8 argument.
-   **R8\_ERF** evaluates the error function of an R8 argument.
-   **R8\_ERFC** evaluates the co-error function of an R8 argument.
-   **R8\_EXP** evaluates the exponential of an R8 argument.
-   **R8\_EXPREL** evaluates the exponential relative error term of an
    R8 argument.
-   **R8\_FAC** evaluates the factorial of an I4 argument.
-   **R8\_GAMI** evaluates the incomplete gamma function for an R8
    argument.
-   **R8\_GAMIC** evaluates the complementary incomplete gamma function.
-   **R8\_GAMIT** evaluates Tricomi's incomplete gamma function for an
    R8 argument.
-   **R8\_GAML** evaluates bounds for an R8 argument of the gamma
    function.
-   **R8\_GAMMA** evaluates the gamma function of an R8 argument.
-   **R8\_GAMR** evaluates the reciprocal gamma function of an R8
    argument.
-   **R8\_GMIC:** complementary incomplete gamma, small X, A near
    negative int.
-   **R8\_GMIT:** Tricomi's incomplete gamma function for small X.
-   **R8\_INITS** initializes a Chebyshev series.
-   **R8\_INT** returns the integer part of an R8 argument.
-   **R8\_KNUS** computes a sequence of K Bessel functions.
-   **R8\_LBETA** evaluates the logarithm of the beta function of R8
    arguments.
-   **R8\_LGAMS** evaluates the log of |gamma(x)| and sign, for an R8
    argument.
-   **R8\_LGIC** evaluates the log complementary incomplete gamma
    function for large X.
-   **R8\_LGIT** evaluates the log of Tricomi's incomplete gamma
    function.
-   **R8\_LGMC** evaluates the log gamma correction factor for an R8
    argument.
-   **R8\_LI** evaluates the logarithmic integral for an R8 argument.
-   **R8\_LNGAM:** log of the absolute value of gamma of an R8 argument.
-   **R8\_LNREL** evaluates log ( 1 + X ) for an R8 argument.
-   **R8\_LOG** evaluates the logarithm of an R8.
-   **R8\_LOG10** evaluates the logarithm, base 10, of an R8.
-   **R8\_MACH** returns double precision real machine constants.
-   **R8\_MACHAR** computes machine constants for R8 arithmetic.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_MIN** returns the minimum of two R8's.
-   **R8\_MOD** returns the remainder of R8 division.
-   **R8\_MOP** returns the I-th power of -1 as an R8 value.
-   **R8\_PAK** packs a base 2 exponent into an R8.
-   **R8\_POCH** evaluates Pochhammer's function of R8 arguments.
-   **R8\_POCH1** evaluates a quantity related to Pochhammer's symbol.
-   **R8\_POW** evaluates A\^B.
-   **R8\_PSI** evaluates the psi function of an R8 argument.
-   **R8\_REN** is a simple random number generator.
-   **R8\_SHI** evaluates the hyperbolic sine integral Shi of an R8
    argument.
-   **R8\_SI** evaluates the sine integral Si of an R8 argument.
-   **R8\_SIFG** is a utility routine.
-   **R8\_SIGN** returns the sign of an R8.
-   **R8\_SIN** evaluates the sine of an R8 argument.
-   **R8\_SIN\_DEG** evaluates the sine of an R8 argument in degrees.
-   **R8\_SINH** evaluates the hyperbolic sine of an R8 argument.
-   **R8\_SPENCE** evaluates a form of Spence's function for an R8
    argument.
-   **R8\_SQRT** computes the square root of an R8.
-   **R8\_TAN** evaluates the tangent of an R8 argument.
-   **R8\_TANH** evaluates the hyperbolic tangent of an R8 argument.
-   **R8\_UPAK** unpacks an R8 into a mantissa and exponent.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 16 September 2011.*
