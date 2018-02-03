HERMITE\_TEST\_INT\
Quadrature Tests for Infinite Intervals {#hermite_test_int-quadrature-tests-for-infinite-intervals align="center"}
=======================================

------------------------------------------------------------------------

**HERMITE\_TEST\_INT** is a C++ library which defines integration
problems over infinite intervals of the form (-oo,+oo).

The test integrands would normally be used to testing one dimensional
quadrature software. It is possible to invoke a particular function by
index, or to try out all available functions, as demonstrated in the
sample calling program.

For a given integrand function f(x), the problem is to estimate

            I(f) = integral ( -oo < x < +oo ) w(x) * f(x) dx
          

We consider three variations of the problem, depending on the form of
the weight factor w(x):

-   **option** = 0, the unweighted integral:

                    Integral ( -oo < x < +oo ) f(x) dx
                  

-   **option** = 1, the physicist weighted integral:

                    Integral ( -oo < x < +oo ) exp(-x*x) f(x) dx
                  

-   **option** = 2, the probabilist weighted integral:

                    Integral ( -oo < x < +oo ) exp(-x*x/2) f(x) dx
                  

For option 0, the test integrands have the form:

1.  f1(x) = exp(-x\*x) \* cos(2\*omega\*x);
2.  f2(x) = exp(-x\*x);
3.  f3(x) = exp(-px)/(1+exp(-qx));
4.  f4(x) = sin ( x\^2 );
5.  f5(x) = 1 / (1+x\^2) sqrt (4+3x\^2) );
6.  f6(x) = exp(-x\*x) \* x\^m;
7.  f7(x) = x\^2 cos(x) exp(-x\*x);
8.  f8(x) = sqrt ( 1 + x \* x / 2 ) \* exp(-x\*x/2);

For option 1, the test integrands have the form:

1.  f1(x) = cos(2\*omega\*x);
2.  f2(x) = 1
3.  f3(x) = exp(x\*x) \* exp(-px)/(1+exp(-qx));
4.  f4(x) = exp(x\*x) \* sin ( x\^2 );
5.  f5(x) = exp(x\*x) \* 1 / (1+x\^2) sqrt (4+3x\^2) );
6.  f6(x) = x\^m;
7.  f7(x) = x\^2 cos(x);
8.  f8(x) = sqrt ( 1 + x \* x / 2 ) \* exp(+x\*x/2);

For option 2, the test integrands have the form:

1.  f1(x) = exp(-x\*x/2) \* cos(2\*omega\*x);
2.  f2(x) = exp(-x\*x/2);
3.  f3(x) = exp(+x\*x/2) \* exp(-px)/(1+exp(-qx));
4.  f4(x) = exp(+x\*x/2) \* sin ( x\^2 );
5.  f5(x) = exp(+x\*x/2) \* 1 / (1+x\^2) sqrt (4+3x\^2) );
6.  f6(x) = exp(-x\*x/2) \* x\^m;
7.  f7(x) = x\^2 cos(x) exp(-x\*x/2);
8.  f8(x) = sqrt ( 1 + x \* x / 2 );

The library includes not just the integrand, but also the exact value of
the integral (or, typically, an estimate of this value), and a title for
the problem. Thus, for each integrand function, several routines are
supplied. For instance, for function \#1, we have the routines:

-   **P01\_FUN** evaluates the integrand for problem 1.
-   **P01\_EXACT** returns the estimated integral for problem 1.
-   **P01\_TITLE** returns a title for problem 1.

So once you have the calling sequences for these routines, you can
easily evaluate the function, or integrate it on the appropriate
interval, or compare your estimate of the integral to the exact value.

Moreover, since the same interface is used for each function, if you
wish to work with problem 5 instead, you simply change the "01" to "05"
in your routine calls.

If you wish to call *all* of the functions, then you simply use the
generic interface, which requires you to specify the problem number as
an extra input argument:

-   **P00\_FUN** evaluates the integrand for any problem.
-   **P00\_EXACT** returns the exact integral for any problem.
-   **P00\_TITLE** returns a title for any problem.

Some demonstration routines are built in for simple quadrature methods:

-   **P00\_GAUSS\_HERMITE** uses a Gauss-Hermite quadrature formula;
-   **P00\_MONTE\_CARLO** uses a Monte Carlo scheme, with sample points
    selected according to the standard normal probability distribution;
-   **P00\_TURING** applies a simple equally spaced method of Turing.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**HERMITE\_TEST\_INT** is available in [a C
version](../../c_src/hermite_test_int/hermite_test_int.md) and [a C++
version](../../master/hermite_test_int/hermite_test_int.md) and [a
FORTRAN77 version](../../f77_src/hermite_test_int/hermite_test_int.md)
and [a FORTRAN90
version](../../f_src/hermite_test_int/hermite_test_int.md) and [a
MATLAB version](../../m_src/hermite_test_int/hermite_test_int.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[HERMITE\_EXACTNESS](../../master/hermite_exactness/hermite_exactness.md),
a C++ program which tests the polynomial exactness of Gauss-Hermite
quadrature rules.

[HERMITE\_RULE](../../master/hermite_rule/hermite_rule.md), a C++
program which can compute and print a Gauss-Hermite quadrature rule.

[LAGUERRE\_TEST\_INT](../../master/laguerre_test_int/laguerre_test_int.md),
a C++ library which defines test integrands for quadrature rules for
estimating the integral of a function with density exp(-x) over the
interval \[0,+oo).

[QUADRATURE\_RULES\_HERMITE\_PHYSICIST](../../datasets/quadrature_rules_hermite_physicist/quadrature_rules_hermite_physicist.md),
a dataset directory which contains Gauss-Hermite quadrature rules, for
integration on the interval (-oo,+oo), with weight function exp(-x\^2).

[QUADRATURE\_RULES\_HERMITE\_PROBABILIST](../../datasets/quadrature_rules_hermite_probabilist/quadrature_rules_hermite_probabilist.md),
a dataset directory which contains Gauss-Hermite quadrature rules, for
integration on the interval (-oo,+oo), with weight function
exp(-x\^2/2).

[QUADRATURE\_RULES\_HERMITE\_UNWEIGHTED](../../datasets/quadrature_rules_hermite_unweighted/quadrature_rules_hermite_unweighted.md),
a dataset directory which contains Gauss-Hermite quadrature rules, for
integration on the interval (-oo,+oo), with weight function 1.

[TEST\_INT](../../master/test_int/test_int.md), a C++ library which
defines test integrands for 1D quadrature rules.

[TEST\_INT\_2D](../../master/test_int_2d/test_int_2d.md), a C++
library which defines test integrands for 2D quadrature rules.

### Reference: {#reference align="center"}

1.  Philip Davis, Philip Rabinowitz,\
    Methods of Numerical Integration,\
    Second Edition,\
    Dover, 2007,\
    ISBN: 0486453391,\
    LC: QA299.3.D28.
2.  Prem Kythe, Michael Schaeferkotter,\
    Handbook of Computational Methods for Integration,\
    Chapman and Hall, 2004,\
    ISBN: 1-58488-428-2,\
    LC: QA299.3.K98.
3.  Robert Piessens, Elise deDoncker-Kapenga, Christian Ueberhuber,
    David Kahaner,\
    QUADPACK: A Subroutine Package for Automatic Integration,\
    Springer, 1983,\
    ISBN: 3540125531,\
    LC: QA299.3.Q36.
4.  William Squire,\
    Comparison of Gauss-Hermite and Midpoint Quadrature with Application
    to the Voigt Function,\
    in Numerical Integration: Recent Developments, Software and
    Applications,\
    edited by Patrick Keast, Graeme Fairweather,\
    Reidel, 1987, pages 337-340,\
    ISBN: 9027725144,\
    LC: QA299.3.N38.
5.  Arthur Stroud, Don Secrest,\
    Gaussian Quadrature Formulas,\
    Prentice Hall, 1966,\
    LC: QA299.4G3S7.
6.  Alan Turing,\
    A Method for the Calculation of the Zeta Function,\
    Proceedings of the London Mathematical Society,\
    Volume 48, 1943, pages 180-197.

### Source Code: {#source-code align="center"}

-   [hermite\_test\_int.cpp](hermite_test_int.cpp), the source code;
-   [hermite\_test\_int.hpp](hermite_test_int.hpp), the include file;

### Examples and Tests: {#examples-and-tests align="center"}

-   [hermite\_test\_int\_prb.cpp](hermite_test_int_prb.cpp), the calling
    program;
-   [hermite\_test\_int\_prb\_output.txt](hermite_test_int_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **HERMITE\_COMPUTE** computes a Gauss-Hermite quadrature rule.
-   **HERMITE\_INTEGRAL** returns the value of a Hermite polynomial
    integral.
-   **HERMITE\_RECUR** finds the value and derivative of a Hermite
    polynomial.
-   **HERMITE\_ROOT** improves an approximate root of a Hermite
    polynomial.
-   **I4\_FACTORIAL2** computes the double factorial function.
-   **P00\_EXACT** returns the exact integral for any problem.
-   **P00\_FUN** evaluates the integrand for any problem.
-   **P00\_GAUSS\_HERMITE** applies a Gauss-Hermite quadrature rule.
-   **P00\_MONTE\_CARLO** applies a Monte Carlo procedure to Hermite
    integrals.
-   **P00\_PROBLEM\_NUM** returns the number of test integration
    problems.
-   **P00\_TITLE** returns the title for any problem.
-   **P00\_TURING** applies the Turing quadrature rule.
-   **P01\_EXACT** returns the exact integral for problem 1.
-   **P01\_FUN** evaluates the integrand for problem 1.
-   **P01\_TITLE** returns the title for problem 1.
-   **P02\_EXACT** returns the exact integral for problem 2.
-   **P02\_FUN** evaluates the integrand for problem 2.
-   **P02\_TITLE** returns the title for problem 2.
-   **P03\_EXACT** returns the exact integral for problem 3.
-   **P03\_FUN** evaluates the integrand for problem 3.
-   **P03\_TITLE** returns the title for problem 3.
-   **P04\_EXACT** returns the estimated integral for problem 4.
-   **P04\_FUN** evaluates the integrand for problem 4.
-   **P04\_TITLE** returns the title for problem 4.
-   **P05\_EXACT** returns the estimated integral for problem 5.
-   **P05\_FUN** evaluates the integrand for problem 5.
-   **P05\_TITLE** returns the title for problem 5.
-   **P06\_EXACT** returns the exact integral for problem 6.
-   **P06\_FUN** evaluates the integrand for problem 6.
-   **P06\_PARAM** gets or sets parameters for problem 6.
-   **P06\_TITLE** returns the title for problem 6.
-   **P07\_EXACT** returns the exact integral for problem 7.
-   **P07\_FUN** evaluates the integrand for problem 7.
-   **P07\_TITLE** returns the title for problem 7.
-   **P08\_EXACT** returns the exact integral for problem 8.
-   **P08\_FUN** evaluates the integrand for problem 8.
-   **P08\_TITLE** returns the title for problem 8.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_EPSILON** returns the R8 roundoff unit.
-   **R8\_GAMMA** evaluates Gamma(X) for a real argument.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8VEC\_DOT\_PRODUCT** computes the dot product of a pair of
    R8VEC's.
-   **R8VEC\_NORMAL\_01\_NEW** returns a unit pseudonormal R8VEC.
-   **R8VEC\_REVERSE** reverses the elements of an R8VEC.
-   **R8VEC\_SUM** returns the sum of an R8VEC.
-   **R8VEC\_UNIFORM\_01\_NEW** returns a new unit pseudorandom R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 31 July 2010.*
