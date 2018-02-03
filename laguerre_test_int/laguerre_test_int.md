LAGUERRE\_TEST\_INT\
Quadrature Tests for Semi-Infinite Intervals {#laguerre_test_int-quadrature-tests-for-semi-infinite-intervals align="center"}
============================================

------------------------------------------------------------------------

**LAGUERRE\_TEST\_INT** is a C++ library which defines integration
problems over semi-infinite intervals of the form \[ALPHA,+oo).

The test integrands would normally be used to testing one dimensional
quadrature software. It is possible to invoke a particular function by
index, or to try out all available functions, as demonstrated in the
sample calling program.

The test integrands include:

1.  1 / ( x \* log(x)\^2 );
2.  1 / ( x \* log(x)\^(3/2) );
3.  1 / ( x\^1.01 );
4.  Sine integral;
5.  Fresnel integral;
6.  Complementary error function;
7.  Bessel function;
8.  Debye function;
9.  Gamma(Z=4) function;
10. 1/(1+x\*x);
11. 1 / ( (1+x) \* sqrt(x) );
12. exp ( - x ) \* cos ( x );
13. sin(x) / x;
14. sin ( exp(-x) + exp(-4x) );
15. log(x) / ( 1+100\*x\*x);
16. cos(0.5\*pi\*x) / sqrt(x);
17. exp ( - x / 2\^beta ) \* cos ( x ) / sqrt ( x )
18. x\^2 \* exp ( - x / 2\^beta )
19. x\^(beta-1) / ( 1 + 10 x )\^2
20. 1 / ( 2\^beta \* ( ( x - 1 )\^2 + (1/4)\^beta ) \* ( x - 2 ) )

The library includes not just the integrand, but also the value of ALPHA
which defines the interval of integration, and the exact value of the
integral (or, typically, an estimate of this value). Thus, for each
integrand function, three subroutines are supplied. For instance, for
function \#1, we have the routines:

-   **P01\_FUN** evaluates the integrand for problem 1.
-   **P01\_ALPHA** returns the value of ALPHA for problem 1.
-   **P01\_EXACT** returns the estimated integral for problem 1.
-   **P01\_TITLE** returns a title for problem 1.

So once you have the calling sequences for these routines, you can
easily evaluate the function, or integrate it on the appropriate
interval, or compare your estimate of the integral to the exact value.

Moreover, since the same interface is used for each function, if you
wish to work with problem 5 instead, you simply change the "01" to "05"
in your routine calls.

If you wish to call *all* of the functions, then you simply use the
generic interface, which again has three subroutines, but which requires
you to specify the problem number as an extra input argument:

-   **P00\_FUN** evaluates the integrand for any problem.
-   **P00\_ALPHA** returns the value of ALPHA for any problem.
-   **P00\_EXACT** returns the exact integral for any problem.
-   **P00\_TITLE** returns a title for any problem.

Finally, some demonstration routines are built in for simple quadrature
methods. These routines include

-   **P00\_EXP\_TRANSFORM** applies an exponential change of variables,
    and then uses a Gauss-Legendre quadrature formula to estimate the
    integral for any problem.
-   **P00\_GAUSS\_LAGUERRE** uses a Gauss-Laguerre quadrature formula to
    estimate the integral for any problem.
-   **P00\_RAT\_TRANSFORM** applies a rational change of variables, and
    then uses a Gauss-Legendre quadrature formula to estimate the
    integral for any problem.

and can be used with any of the sample integrands.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**LAGUERRE\_TEST\_INT** is available in [a C
version](../../c_src/laguerre_test_int/laguerre_test_int.html) and [a
C++ version](../../cpp_src/laguerre_test_int/laguerre_test_int.html) and
[a FORTRAN77
version](../../f77_src/laguerre_test_int/laguerre_test_int.html) and [a
FORTRAN90 version](../../f_src/laguerre_test_int/laguerre_test_int.html)
and [a MATLAB
version](../../m_src/laguerre_test_int/laguerre_test_int.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[QUADPACK](../../f_src/quadpack/quadpack.html), a FORTRAN90 library
which estimates integrals of functions in one dimension.

[QUADRULE](../../cpp_src/quadrule/quadrule.html), a C++ library which
defines various quadrature rules.

[TEST\_INT](../../cpp_src/test_int/test_int.html), a C++ library which
defines test integrands for 1D quadrature rules.

[TEST\_INT\_2D](../../cpp_src/test_int_2d/test_int_2d.html), a C++
library which defines test integrands for 2D quadrature rules.

[TEST\_INT\_HERMITE](../../cpp_src/test_int_hermite/test_int_hermite.html),
a C++ library which defines some test integration problems over infinite
intervals.

### Reference: {#reference align="center"}

1.  Philip Davis, Philip Rabinowitz,\
    Methods of Numerical Integration,\
    Second Edition,\
    Dover, 2007,\
    ISBN: 0486453391,\
    LC: QA299.3.D28.
2.  Robert Piessens, Elise deDoncker-Kapenga, Christian Ueberhuber,
    David Kahaner,\
    QUADPACK: A Subroutine Package for Automatic Integration,\
    Springer, 1983,\
    ISBN: 3540125531,\
    LC: QA299.3.Q36.
3.  Arthur Stroud, Don Secrest,\
    Gaussian Quadrature Formulas,\
    Prentice Hall, 1966,\
    LC: QA299.4G3S7.

### Source Code: {#source-code align="center"}

-   [laguerre\_test\_int.cpp](laguerre_test_int.cpp), the source code;
-   [laguerre\_test\_int.hpp](laguerre_test_int.hpp), the include file;

### Examples and Tests: {#examples-and-tests align="center"}

-   [laguerre\_test\_int\_prb.cpp](laguerre_test_int_prb.cpp), the
    calling program;
-   [laguerre\_test\_int\_prb\_output.txt](laguerre_test_int_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **LAGUERRE\_COMPUTE** computes a Gauss-Laguerre quadrature rule.
-   **LAGUERRE\_RECUR** finds the value and derivative of a Laguerre
    polynomial.
-   **LAGUERRE\_ROOT** improves an approximate root of a Laguerre
    polynomial.
-   **LEGENDRE\_COMPUTE** computes a Gauss-Legendre quadrature rule.
-   **P00\_ALPHA** returns the value of ALPHA for any problem.
-   **P00\_EXACT** returns the exact integral for any problem.
-   **P00\_EXP\_TRANSFORM** applies an exponential transform and
    Gauss-Legendre rule.
-   **P00\_FUN** evaluates the integrand for any problem.
-   **P00\_GAUSS\_LAGUERRE** applies a Gauss-Laguerre rule.
-   **P00\_PROBLEM\_NUM** returns the number of test integration
    problems.
-   **P00\_RAT\_TRANSFORM** applies a rational transform and
    Gauss-Legendre rule.
-   **P00\_TITLE** returns the title for any problem.
-   **P01\_ALPHA** returns ALPHA for problem 1.
-   **P01\_EXACT** returns the exact integral for problem 1.
-   **P01\_FUN** evaluates the integrand for problem 1.
-   **P01\_TITLE** returns the title for problem 1.
-   **P02\_ALPHA** returns ALPHA for problem 2.
-   **P02\_EXACT** returns the exact integral for problem 2.
-   **P02\_FUN** evaluates the integrand for problem 2.
-   **P02\_TITLE** returns the title for problem 2.
-   **P03\_ALPHA** returns ALPHA for problem 3.
-   **P03\_EXACT** returns the exact integral for problem 3.
-   **P03\_FUN** evaluates the integrand for problem 3.
-   **P03\_TITLE** returns the title for problem 3.
-   **P04\_ALPHA** returns ALPHA for problem 4.
-   **P04\_EXACT** returns the estimated integral for problem 4.
-   **P04\_FUN** evaluates the integrand for problem 4.
-   **P04\_TITLE** returns the title for problem 4.
-   **P05\_ALPHA** returns ALPHA for problem 5.
-   **P05\_EXACT** returns the estimated integral for problem 5.
-   **P05\_FUN** evaluates the integrand for problem 5.
-   **P05\_TITLE** returns the title for problem 5.
-   **P06\_ALPHA** returns ALPHA for problem 6.
-   **P06\_EXACT** returns the exact integral for problem 6.
-   **P06\_FUN** evaluates the integrand for problem 6.
-   **P06\_TITLE** returns the title for problem 6.
-   **P07\_ALPHA** returns ALPHA for problem 7.
-   **P07\_EXACT** returns the exact integral for problem 7.
-   **P07\_FUN** evaluates the integrand for problem 7.
-   **P07\_TITLE** returns the title for problem 7.
-   **P08\_ALPHA** returns ALPHA for problem 8.
-   **P08\_EXACT** returns the estimated integral for problem 8.
-   **P08\_FUN** evaluates the integrand for problem 8.
-   **P08\_TITLE** returns the title for problem 8.
-   **P09\_ALPHA** returns ALPHA for problem 9.
-   **P09\_EXACT** returns the estimated integral for problem 9.
-   **P09\_FUN** evaluates the integrand for problem 9.
-   **P09\_TITLE** returns the title for problem 9.
-   **P10\_ALPHA** returns ALPHA for problem 10.
-   **P10\_EXACT** returns the estimated integral for problem 10.
-   **P10\_FUN** evaluates the integrand for problem 10.
-   **P10\_TITLE** returns the title for problem 10.
-   **P11\_ALPHA** returns ALPHA for problem 11.
-   **P11\_EXACT** returns the estimated integral for problem 11.
-   **P11\_FUN** evaluates the integrand for problem 11.
-   **P11\_TITLE** returns the title for problem 11.
-   **P12\_ALPHA** returns ALPHA for problem 12.
-   **P12\_EXACT** returns the estimated integral for problem 12.
-   **P12\_FUN** evaluates the integrand for problem 12.
-   **P12\_TITLE** returns the title for problem 12.
-   **P13\_ALPHA** returns ALPHA for problem 13.
-   **P13\_EXACT** returns the estimated integral for problem 13.
-   **P13\_FUN** evaluates the integrand for problem 13.
-   **P13\_TITLE** returns the title for problem 13.
-   **P14\_ALPHA** returns ALPHA for problem 14.
-   **P14\_EXACT** returns the estimated integral for problem 14.
-   **P14\_FUN** evaluates the integrand for problem 14.
-   **P14\_TITLE** returns the title for problem 14.
-   **P15\_ALPHA** returns ALPHA for problem 15.
-   **P15\_EXACT** returns the estimated integral for problem 15.
-   **P15\_FUN** evaluates the integrand for problem 15.
-   **P15\_TITLE** returns the title for problem 15.
-   **P16\_ALPHA** returns ALPHA for problem 16.
-   **P16\_EXACT** returns the estimated integral for problem 16.
-   **P16\_FUN** evaluates the integrand for problem 16.
-   **P16\_TITLE** returns the title for problem 16.
-   **P17\_ALPHA** returns ALPHA for problem 17.
-   **P17\_EXACT** returns the exact integral for problem 17.
-   **P17\_FUN** evaluates the integrand for problem 17.
-   **P17\_TITLE** returns the title for problem 17.
-   **P18\_ALPHA** returns ALPHA for problem 18.
-   **P18\_EXACT** returns the exact integral for problem 18.
-   **P18\_FUN** evaluates the integrand for problem 18.
-   **P18\_TITLE** returns the title for problem 18.
-   **P19\_ALPHA** returns ALPHA for problem 19.
-   **P19\_EXACT** returns the exact integral for problem 19.
-   **P19\_FUN** evaluates the integrand for problem 19.
-   **P19\_TITLE** returns the title for problem 19.
-   **P20\_ALPHA** returns ALPHA for problem 20.
-   **P20\_EXACT** returns the exact integral for problem 20.
-   **P20\_FUN** evaluates the integrand for problem 20.
-   **P20\_TITLE** returns the title for problem 20.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_EPSILON** returns the R8 roundoff unit.
-   **R8\_GAMMA** evaluates Gamma(X) for a real argument.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8VEC\_DOT** computes the dot product of a pair of R8VEC's.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 27 December 2011.*
