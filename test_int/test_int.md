TEST\_INT\
Quadrature Tests {#test_int-quadrature-tests align="center"}
================

------------------------------------------------------------------------

**TEST\_INT** is a C++ library which evaluates test integrands.

The test integrands would normally be used to testing one dimensional
quadrature software. It is possible to invoke a particular function by
number, or to try out all available functions, as demonstrated in the
sample calling program.

The library includes not just the integrand, but also the interval of
integration, and the exact value of the integral. Thus, for each
integrand function, three subroutines are supplied. For instance, for
function \#9, we have the routines:

-   **P09\_FUN** evaluates the integrand for problem 9.
-   **P09\_LIM** returns the integration limits for problem 9.
-   **P09\_EXACT** returns the exact integral for problem 9.

So once you have the calling sequences for these routines, you can
easily evaluate the function, or integrate it between the appropriate
limits, or compare your estimate of the integral to the exact value.

Moreover, since the same interface is used for each function, if you
wish to work with problem 16 instead, you simply change the "09" to "16"
in your routine calls.

If you wish to call *all* of the functions, then you simply use the
generic interface, which again has three subroutines, but which requires
you to specify the problem number as an extra input argument:

-   **P00\_FUN** evaluates the integrand for any problem.
-   **P00\_LIM** returns the integration limits for any problem.
-   **P00\_EXACT** returns the exact integral for any problem.

Finally, some demonstration routines are built in for simple quadrature
methods. These routines include

-   **P00\_GAUSS\_LEGENDRE**
-   **P00\_EVEN**
-   **P00\_HALTON**
-   **P00\_MIDPOINT**
-   **P00\_MONTECARLO**
-   **P00\_SIMPSON**
-   **P00\_TRAPEZOID**

and can be used with any of the sample integrands.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TEST\_INT** is available in [a C
version](../../c_src/test_int/test_int.html) and [a C++
version](../../cpp_src/test_int/test_int.html) and [a FORTRAN77
version](../../f77_src/test_int/test_int.html) and [a FORTRAN90
version](../../f_src/test_int/test_int.html) and [a MATLAB
version](../../m_src/test_int/test_int.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[TEST\_INT\_2D](../../cpp_src/test_int_2d/test_int_2d.html), a C++
library which defines test integrands for 2D quadrature rules.

[TEST\_INT\_HERMITE](../../cpp_src/test_int_hermite/test_int_hermite.html),
a C++ library which defines some test integration problems over infinite
intervals.

[TEST\_INT\_LAGUERRE](../../cpp_src/test_int_laguerre/test_int_laguerre.html),
a C++ library which defines test integrands for integration over
\[ALPHA,+Infinity).

### Reference: {#reference align="center"}

1.  Kendall Atkinson,\
    An Introduction to Numerical Analysis,\
    Prentice Hall, 1989,\
    ISBN: 0471624896,\
    LC: QA297.A94.1989.
2.  Roger Broucke,\
    Algorithm 446: Ten Subroutines for the Manipulation of Chebyshev
    Series,\
    Communications of the ACM,\
    Volume 16, 1973, pages 254-256.
3.  Charles Clenshaw, Alan Curtis,\
    A Method for Numerical Integration on an Automatic Computer,\
    Numerische Mathematik,\
    Volume 2, Number 1, December 1960, pages 197-205.
4.  Richard Crandall,\
    Projects in Scientific Computing,\
    Springer, 2005,\
    ISBN: 0387950095,\
    LC: Q183.9.C733.
5.  Philip Davis, Philip Rabinowitz,\
    Methods of Numerical Integration,\
    Second Edition,\
    Dover, 2007,\
    ISBN: 0486453391,\
    LC: QA299.3.D28.
6.  Hermann Engels,\
    Numerical Quadrature and Cubature,\
    Academic Press, 1980,\
    ISBN: 012238850X,\
    LC: QA299.3E5.
7.  Leslie Fox, Ian Parker,\
    Chebyshev Polynomials in Numerical Analysis,\
    Oxford Press, 1968,\
    LC: QA297.F65.
8.  John Halton,\
    On the efficiency of certain quasi-random sequences of points in
    evaluating multi-dimensional integrals,\
    Numerische Mathematik,\
    Volume 2, Number 1, December 1960, pages 84-90.
9.  John Hart, Ward Cheney, Charles Lawson, Hans Maehly, Charles
    Mesztenyi, John Rice, Henry Thacher, Christoph Witzgall,\
    Computer Approximations,\
    Wiley, 1968,\
    LC: QA297.C64.
10. David Kahaner,\
    Comparison of Numerical Quadrature Formulas,\
    in Mathematical Software,\
    edited by John Rice,\
    Academic Press, 1971,\
    ISBN: 012587250X,\
    LC: QA1.M766.
11. Prem Kythe, Pratap Puri,\
    Computational Methods for Linear Integral Equations,\
    Birkhaeuser, 2002,\
    ISBN: 0817641920,\
    LC: QA431.K97.
12. Robert Piessens, Elise deDoncker-Kapenga, Christian Ueberhuber,
    David Kahaner,\
    QUADPACK: A Subroutine Package for Automatic Integration,\
    Springer, 1983,\
    ISBN: 3540125531,\
    LC: QA299.3.Q36.
13. Herbert Salzer, Norman Levine,\
    Table of a Weierstrass Continuous Nondifferentiable Function,\
    Mathematics of Computation,\
    Volume 15, Number 74, April 1961, pages 120-130.
14. Arthur Stroud, Don Secrest,\
    Gaussian Quadrature Formulas,\
    Prentice Hall, 1966,\
    LC: QA299.4G3S7.

### Source Code: {#source-code align="center"}

-   [test\_int.cpp](test_int.cpp), the source code;
-   [test\_int.hpp](test_int.hpp), the include file;

### Examples and Tests: {#examples-and-tests align="center"}

-   [test\_int\_prb.cpp](test_int_prb.cpp), the calling program;
-   [test\_int\_prb\_output.txt](test_int_prb_output.txt), the sample
    output.

### List of Routines: {#list-of-routines align="center"}

-   **CH\_CAP** capitalizes a single character.
-   **EULER\_CONSTANT** returns the value of the Euler-Mascheroni
    constant.
-   **GET\_SEED** returns a random seed for the random number generator.
-   **I4\_HUGE** returns a "huge" I4.
-   **I4\_LOG\_2** returns the integer part of the logarithm base 2 of
    an I4.
-   **I4\_POWER** returns the value of I\^J.
-   **I4\_TO\_HALTON\_NUMBER\_SEQUENCE:** next N elements of a scalar
    Halton sequence.
-   **I4VEC\_INDICATOR\_NEW** sets an I4VEC to the indicator vector.
-   **P00\_EVEN** uses evenly spaced points to integrate a function.
-   **P00\_EXACT** returns the exact integral for any problem.
-   **P00\_FUN** evaluates the integrand for any problem.
-   **P00\_GAUSS\_LEGENDRE** applies a composite Gauss-Legendre rule.
-   **P00\_HALTON** applies a Halton sequence rule to integrate a
    function.
-   **P00\_LIM** returns the integration limits for any problem.
-   **P00\_MIDPOINT** applies the composite midpoint rule to integrate a
    function.
-   **P00\_MONTECARLO** applies the Monte Carlo rule to integrate a
    function.
-   **P00\_PROB\_NUM** returns the number of test integration problems.
-   **P00\_SIMPSON** applies the composite Simpson rule to integrate a
    function.
-   **P00\_TRAPEZOID** applies the composite trapezoid rule to integrate
    a function.
-   **P01\_EXACT** returns the exact integral for problem 1.
-   **P01\_FUN** evaluates the integrand for problem 1.
-   **P01\_LIM** returns the integration limits for problem 1.
-   **P02\_EXACT** returns the exact integral for problem 2.
-   **P02\_FUN** evaluates the integrand for problem 2.
-   **P02\_LIM** returns the integration limits for problem 2.
-   **P03\_EXACT** returns the exact integral for problem 3.
-   **P03\_FUN** evaluates the integrand for problem 3.
-   **P03\_LIM** returns the integration limits for problem 3.
-   **P04\_EXACT** returns the estimated integral for problem 4.
-   **P04\_FUN** evaluates the integrand for problem 4.
-   **P04\_LIM** returns the integration limits for problem 4.
-   **P05\_EXACT** returns the estimated integral for problem 5.
-   **P05\_FUN** evaluates the integrand for problem 5.
-   **P05\_LIM** returns the integration limits for problem 5.
-   **P06\_EXACT** returns the exact integral for problem 6.
-   **P06\_FUN** evaluates the integrand for problem 6.
-   **P06\_LIM** returns the integration limits for problem 6.
-   **P07\_EXACT** returns the exact integral for problem 7.
-   **P07\_FUN** evaluates the integrand for problem 7.
-   **P07\_LIM** returns the integration limits for problem 7.
-   **P08\_EXACT** returns the estimated integral for problem 8.
-   **P08\_FUN** evaluates the integrand for problem 8.
-   **P08\_LIM** returns the integration limits for problem 8.
-   **P09\_EXACT** returns the estimated integral for problem 9.
-   **P09\_FUN** evaluates the integrand for problem 9.
-   **P09\_LIM** returns the integration limits for problem 9.
-   **P10\_EXACT** returns the estimated integral for problem 10.
-   **P10\_FUN** evaluates the integrand for problem 10.
-   **P10\_LIM** returns the integration limits for problem 10.
-   **P11\_EXACT** returns the estimated integral for problem 11.
-   **P11\_FUN** evaluates the integrand for problem 11.
-   **P11\_LIM** returns the integration limits for problem 11.
-   **P12\_EXACT** returns the estimated integral for problem 12.
-   **P12\_FUN** evaluates the integrand for problem 12.
-   **P12\_LIM** returns the integration limits for problem 12.
-   **P13\_EXACT** returns the estimated integral for problem 13.
-   **P13\_FUN** evaluates the integrand for problem 13.
-   **P13\_LIM** returns the integration limits for problem 13.
-   **P14\_EXACT** returns the estimated integral for problem 14.
-   **P14\_FUN** evaluates the integrand for problem 14.
-   **P14\_LIM** returns the integration limits for problem 14.
-   **P15\_EXACT** returns the exact integral for problem 15.
-   **P15\_FUN** evaluates the integrand for problem 15.
-   **P15\_LIM** returns the integration limits for problem 15.
-   **P16\_EXACT** returns the exact integral for problem 16.
-   **P16\_FUN** evaluates the integrand for problem 16.
-   **P16\_LIM** returns the integration limits for problem 16.
-   **P17\_EXACT** returns the estimated integral for problem 17.
-   **P17\_FUN** evaluates the integrand for problem 17.
-   **P17\_LIM** returns the integration limits for problem 17.
-   **P18\_EXACT** returns the estimated integral for problem 18.
-   **P18\_FUN** evaluates the integrand for problem 18.
-   **P18\_LIM** returns the integration limits for problem 18.
-   **P19\_EXACT** returns the exact integral for problem 19.
-   **P19\_FUN** evaluates the integrand for problem 19.
-   **P19\_LIM** returns the integration limits for problem 19.
-   **P20\_EXACT** returns the estimated integral for problem 20.
-   **P20\_FUN** evaluates the integrand for problem 20.
-   **P20\_LIM** returns the integration limits for problem 20.
-   **P21\_EXACT** returns the estimated integral for problem 21.
-   **P21\_FUN** evaluates the integrand for problem 21.
-   **P21\_LIM** returns the integration limits for problem 21.
-   **P22\_EXACT** returns the estimated integral for problem 22.
-   **P22\_FUN** evaluates the integrand for problem 22.
-   **P22\_LIM** returns the integration limits for problem 22.
-   **P23\_EXACT** returns the estimated integral for problem 23.
-   **P23\_FUN** evaluates the integrand for problem 23.
-   **P23\_LIM** returns the integration limits for problem 23.
-   **P24\_EXACT** returns the estimated integral for problem 24.
-   **P24\_FUN** evaluates the integrand for problem 24.
-   **P24\_LIM** returns the integration limits for problem 24.
-   **P25\_EXACT** returns the estimated integral for problem 25.
-   **P25\_FUN** evaluates the integrand for problem 25.
-   **P25\_LIM** returns the integration limits for problem 25.
-   **P26\_EXACT** returns the exact integral for problem 26.
-   **P26\_FUN** evaluates the integrand for problem 26.
-   **P26\_LIM** returns the integration limits for problem 26.
-   **P27\_EXACT** returns the exact integral for problem 27.
-   **P27\_FUN** evaluates the integrand for problem 27.
-   **P27\_LIM** returns the integration limits for problem 27.
-   **P28\_EXACT** returns the exact integral for problem 28.
-   **P28\_FUN** evaluates the integrand for problem 28.
-   **P28\_LIM** returns the integration limits for problem 28.
-   **P29\_EXACT** returns the exact integral for problem 29.
-   **P29\_FUN** evaluates the integrand for problem 29.
-   **P29\_LIM** returns the integration limits for problem 29.
-   **P30\_EXACT** returns the exact integral for problem 30.
-   **P30\_FUN** evaluates the integrand for problem 30.
-   **P30\_LIM** returns the integration limits for problem 30.
-   **P31\_EXACT** returns the exact integral for problem 31.
-   **P31\_FUN** evaluates the integrand for problem 31.
-   **P31\_LIM** returns the integration limits for problem 31.
-   **P32\_EXACT** returns the exact integral for problem 32.
-   **P32\_FUN** evaluates the integrand for problem 32.
-   **P32\_LIM** returns the integration limits for problem 32.
-   **P33\_EXACT** returns the exact integral for problem 33.
-   **P33\_FUN** evaluates the integrand for problem 33.
-   **P33\_LIM** returns the integration limits for problem 33.
-   **P34\_EXACT** returns the exact integral for problem 34.
-   **P34\_FUN** evaluates the integrand for problem 34.
-   **P34\_LIM** returns the integration limits for problem 34.
-   **P35\_EXACT** returns the exact integral for problem 35.
-   **P35\_FUN** evaluates the integrand for problem 35.
-   **P35\_LIM** returns the integration limits for problem 35.
-   **P36\_EXACT** returns the exact integral for problem 36.
-   **P36\_FUN** evaluates the integrand for problem 36.
-   **P36\_LIM** returns the integration limits for problem 36.
-   **P36\_PARAM** gets or sets the parameter values for problem 36.
-   **P36\_PARAM\_GET** returns the parameter values for problem 36.
-   **P36\_PARAM\_SET** sets the parameter values for problem 36.
-   **P37\_EXACT** returns the exact integral for problem 37.
-   **P37\_FUN** evaluates the integrand for problem 37.
-   **P37\_LIM** returns the integration limits for problem 37.
-   **P37\_PARAM** gets or sets the parameter values for problem 37.
-   **P37\_PARAM\_GET** returns the parameter values for problem 37.
-   **P37\_PARAM\_SET** sets the parameter values for problem 37.
-   **P38\_EXACT** returns the exact integral for problem 38.
-   **P38\_FUN** evaluates the integrand for problem 38.
-   **P38\_LIM** returns the integration limits for problem 38.
-   **P38\_PARAM** gets or sets the parameter values for problem 38.
-   **P38\_PARAM\_GET** returns the parameter values for problem 38.
-   **P38\_PARAM\_SET** sets the parameter values for problem 38.
-   **P39\_EXACT** returns the exact integral for problem 39.
-   **P39\_FUN** evaluates the integrand for problem 39.
-   **P39\_LIM** returns the integration limits for problem 39.
-   **P39\_PARAM** gets or sets the parameter values for problem 39.
-   **P39\_PARAM\_GET** returns the parameter values for problem 39.
-   **P39\_PARAM\_SET** sets the parameter values for problem 39.
-   **P40\_EXACT** returns the exact integral for problem 40.
-   **P40\_FUN** evaluates the integrand for problem 40.
-   **P40\_LIM** returns the integration limits for problem 40.
-   **P40\_PARAM** gets or sets the parameter values for problem 40.
-   **P40\_PARAM\_GET** returns the parameter values for problem 40.
-   **P40\_PARAM\_SET** sets the parameter values for problem 40.
-   **P41\_EXACT** returns the exact integral for problem 41.
-   **P41\_FUN** evaluates the integrand for problem 41.
-   **P41\_LIM** returns the integration limits for problem 41.
-   **P41\_PARAM** gets or sets the parameter values for problem 41.
-   **P41\_PARAM\_GET** returns the parameter values for problem 41.
-   **P41\_PARAM\_SET** sets the parameter values for problem 41.
-   **P42\_EXACT** returns the exact integral for problem 42.
-   **P42\_FUN** evaluates the integrand for problem 42.
-   **P42\_LIM** returns the integration limits for problem 42.
-   **P42\_PARAM** gets or sets the parameter values for problem 42.
-   **P42\_PARAM\_GET** returns the parameter values for problem 42.
-   **P42\_PARAM\_SET** sets the parameter values for problem 42.
-   **P43\_EXACT** returns the exact integral for problem 43.
-   **P43\_FUN** evaluates the integrand for problem 43.
-   **P43\_LIM** returns the integration limits for problem 43.
-   **P43\_PARAM** gets or sets the parameter values for problem 43.
-   **P43\_PARAM\_GET** returns the parameter values for problem 43.
-   **P43\_PARAM\_SET** sets the parameter values for problem 43.
-   **P44\_EXACT** returns the exact integral for problem 44.
-   **P44\_FUN** evaluates the integrand for problem 44.
-   **P44\_LIM** returns the integration limits for problem 44.
-   **P44\_PARAM** gets or sets the parameter values for problem 44.
-   **P44\_PARAM\_GET** returns the parameter values for problem 44.
-   **P44\_PARAM\_SET** sets the parameter values for problem 44.
-   **P45\_EXACT** returns the exact integral for problem 45.
-   **P45\_FUN** evaluates the integrand for problem 45.
-   **P45\_LIM** returns the integration limits for problem 45.
-   **P45\_PARAM** gets or sets the parameter values for problem 45.
-   **P45\_PARAM\_GET** returns the parameter values for problem 45.
-   **P45\_PARAM\_SET** sets the parameter values for problem 45.
-   **P46\_EXACT** returns the exact integral for problem 46.
-   **P46\_FUN** evaluates the integrand for problem 46.
-   **P46\_LIM** returns the integration limits for problem 46.
-   **P46\_PARAM** gets or sets the parameter values for problem 46.
-   **P46\_PARAM\_GET** returns the parameter values for problem 46.
-   **P46\_PARAM\_SET** sets the parameter values for problem 46.
-   **P47\_EXACT** returns the exact integral for problem 47.
-   **P47\_FUN** evaluates the integrand for problem 47.
-   **P47\_LIM** returns the integration limits for problem 47.
-   **P48\_EXACT** returns the exact integral for problem 48.
-   **P48\_FUN** evaluates the integrand for problem 48.
-   **P48\_LIM** returns the integration limits for problem 48.
-   **P49\_EXACT** returns the exact integral for problem 49.
-   **P49\_FUN** evaluates the integrand for problem 49.
-   **P49\_LIM** returns the integration limits for problem 49.
-   **P50\_EXACT** returns the exact integral for problem 50.
-   **P50\_FUN** evaluates the integrand for problem 50.
-   **P50\_LIM** returns the integration limits for problem 50.
-   **P51\_EXACT** returns the exact integral for problem 51.
-   **P51\_FUN** evaluates the integrand for problem 51.
-   **P51\_LIM** returns the integration limits for problem 51.
-   **P52\_EXACT** returns the exact integral for problem 52.
-   **P52\_FUN** evaluates the integrand for problem 52.
-   **P52\_LIM** returns the integration limits for problem 52.
-   **P53\_EXACT** returns the exact integral for problem 53.
-   **P53\_FUN** evaluates the integrand for problem 53.
-   **P53\_LIM** returns the integration limits for problem 53.
-   **P54\_EXACT** returns the exact integral for problem 54.
-   **P54\_FUN** evaluates the integrand for problem 54.
-   **P54\_LIM** returns the integration limits for problem 54.
-   **P55\_EXACT** returns the exact integral for problem 55.
-   **P55\_FUN** evaluates the integrand for problem 55.
-   **P55\_LIM** returns the integration limits for problem 55.
-   **P55\_PARAM** sets or gets real scalar parameters for problem 55.
-   **P56\_EXACT** returns the estimated integral for problem 56.
-   **P56\_FUN** evaluates the integrand for problem 56.
-   **P56\_LIM** returns the integration limits for problem 56.
-   **P57\_EXACT** returns the exact integral for problem 57.
-   **P57\_FUN** evaluates the integrand for problem 57.
-   **P57\_LIM** returns the integration limits for problem 57.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_ADD** adds two R8's.
-   **R8\_AINT** truncates an R8 argument to an integer.
-   **R8\_B0MP** evaluates the modulus and phase for the Bessel J0 and
    Y0 functions.
-   **R8\_BESJ0** evaluates the Bessel function J of order 0 of an R8
    argument.
-   **R8\_CI** evaluates the cosine integral Ci of an R8 argument.
-   **R8\_CSEVL** evaluates a Chebyshev series.
-   **R8\_EPSILON** returns the R8 roundoff unit.
-   **R8\_ERF** evaluates the error function of an R8 argument.
-   **R8\_ERFC** evaluates the co-error function of an R8 argument.
-   **R8\_GAML** evaluates bounds for an R8 argument of the gamma
    function.
-   **R8\_GAMMA** evaluates the gamma function of an R8 argument.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8\_INITS** initializes a Chebyshev series.
-   **R8\_LGMC** evaluates the log gamma correction factor for an R8
    argument.
-   **R8\_MACH** returns double precision real machine constants.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_MIN** returns the minimum of two R8's.
-   **R8\_SECH** evaluates the hyperbolic secant, while avoiding COSH
    overflow.
-   **R8\_SI** evaluates the sine integral Si of an R8 argument.
-   **R8\_SIFG** is a utility routine.
-   **R8VEC\_DOT\_PRODUCT** computes the dot product of a pair of
    R8VEC's.
-   **R8VEC\_LINSPACE\_NEW** creates a vector of linearly spaced values.
-   **R8VEC\_SUM** returns the sum of an R8VEC.
-   **R8VEC\_UNIFORM\_01\_NEW** returns a new unit pseudorandom R8VEC.
-   **S\_EQI** reports whether two strings are equal, ignoring case.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 29 December 2011.*
