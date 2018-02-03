TEST\_ZERO\
Zero Finder Tests {#test_zero-zero-finder-tests align="center"}
=================

------------------------------------------------------------------------

**TEST\_ZERO** is a C++ library which defines nonlinear functions that
may be used to test zero finders.

Zero finders are programs that seek a (scalar) root of a scalar equation
F(X) = 0. Some zero finders require that an initial "change-of-sign"
interval \[A,B\] be supplied, with the function having opposite sign at
the two endpoints, thus guaranteeing that there is some value C between
A and B for which F(C) = 0 (assuming that the function F is continuous).
In other cases, a particular zero finder may want information about the
first or second derivative of the function. And some zero finders can
handle situations where the function has a multiple root, or where the
function is a polynomial.

TEST\_ZERO supplies a set of nonlinear functions, along with change of
sign interval, first and second derivatives, suggested starting points,
so that the behavior of any zero finder can be analyzed.

**TEST\_ZERO** also includes implementations of some simple zero
finders, as a demonstration of how the package might be used.

The functions, which are accessible by number, are

1.  f(x) = sin ( x ) - x / 2.
2.  f(x) = 2 \* x - exp ( - x ).
3.  f(x) = x \* exp ( - x ).
4.  f(x) = exp ( x ) - 1 / ( 10 \* x )\^2.
5.  f(x) = ( x + 3 ) \* ( x - 1 )\^2.
6.  f(x) = exp ( x ) - 2 - 1 / ( 10 \* x )\^2 + 2 / ( 100 \* x )\^3.
7.  f(x) = x\^3.
8.  f(x) = cos ( x ) - x.
9.  the Newton Baffler.
10. the Repeller.
11. the Pinhead.
12. Flat Stanley.
13. Lazy Boy.
14. the Camel.
15. a pathological function for Newton's method.
16. Kepler's Equation.
17. f(x) = x\^3 - 2\*x - 5, Wallis's function.
18. f(x) = (x-1)\^7, written term by term.
19. f(x) = cos(100\*x)-4\*erf(30\*x-10), the jumping cosine.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TEST\_ZERO** is available in [a C
version](../../c_src/test_zero/test_zero.md) and [a C++
version](../../master/test_zero/test_zero.md) and [a FORTRAN77
version](../../f77_src/test_zero/test_zero.md) and [a FORTRAN90
version](../../f_src/test_zero/test_zero.md) and [a MATLAB
version](../../m_src/test_zero/test_zero.md) and [a Python
version](../../py_src/test_zero/test_zero.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BISECTION\_RC](../../master/bisection_rc/bisection_rc.md), a C++
library which seeks a solution to the equation F(X)=0 using bisection
within a user-supplied change of sign interval \[A,B\]. The procedure is
written using reverse communication (RC).

[BRENT](../../master/brent/brent.md), a C++ library which contains
Richard Brent's routines for finding the zero, local minimizer, or
global minimizer of a scalar function of a scalar argument, without the
use of derivative information.

[GSL](../../master/gsl/gsl.md), a C++ library which includes
rootfinding routines.

[ZERO\_RC](../../master/zero_rc/zero_rc.md), a C++ library which
seeks solutions of a scalar nonlinear equation f(x) = 0, or a system of
nonlinear equations, using reverse communication.

### Reference: {#reference align="center"}

1.  Richard Brent,\
    Algorithms for Minimization without Derivatives,\
    Dover, 2002,\
    ISBN: 0-486-41998-3,\
    LC: QA402.5.B74.
2.  Peter Colwell,\
    Solving Kepler's Equation Over Three Centuries,\
    Willmann-Bell, 1993,\
    ISBN: 0943396409,\
    LC: QB355.5.C65.
3.  George Donovan, Arnold Miller, Timothy Moreland,\
    Pathological Functions for Newton's Method,\
    American Mathematical Monthly, January 1993, pages 53-58.
4.  Arnold Krommer, Christoph Ueberhuber,\
    Numerical Integration on Advanced Computer Systems,\
    Springer, 1994,\
    ISBN: 3540584102,\
    LC: QA299.3.K76.
5.  Jean Meeus,\
    Astronomical Algorithms,\
    Second Edition,\
    Willman-Bell, 1998,\
    ISBN: 0943396611,\
    LC: QB51.3.E43M42.

### Source Code: {#source-code align="center"}

-   [test\_zero.cpp](test_zero.cpp), the source code;
-   [test\_zero.hpp](test_zero.hpp), the include file;

### Examples and Tests: {#examples-and-tests align="center"}

-   [test\_zero\_prb.cpp](test_zero_prb.cpp), the calling program;
-   [test\_zero\_prb\_output.txt](test_zero_prb_output.txt), the output
    file.

PNG images of the graphs of some of the functions were made using
MATLAB:

-   [p01\_fx.png](p01_fx.png), an image of P01\_FX(X) over \[-4,+4\].
-   [p02\_fx.png](p02_fx.png), an image of P02\_FX(X) over \[-0.5,
    +3.0\].
-   [p03\_fx.png](p03_fx.png), an image of P03\_FX(X) over \[-0.1,+4\].
-   [p04\_fx.png](p04_fx.png), an image of P04\_FX(X) over \[-4,+2\].
-   [p05\_fx.png](p05_fx.png), an image of P05\_FX(X) over \[-4,+2\].
-   [p06\_fx.png](p06_fx.png), an image of P06\_FX(X) over \[-4,+2\].
-   [p07\_fx.png](p07_fx.png), an image of P07\_FX(X) over \[-1,+1\].
-   [p08\_fx.png](p08_fx.png), an image of P08\_FX(X) over \[-4,+4\].
-   [p09\_fx.png](p09_fx.png), an image of P09\_FX(X) over \[5,7\].
-   [p10\_fx.png](p10_fx.png), an image of P10\_FX(X) over \[-2,+2\].
-   [p11\_fx.png](p11_fx.png), an image of P11\_FX(X) over \[+1,+10\].
-   [p12\_fx.png](p12_fx.png), an image of P12\_FX(X) over
    \[-0.5,+0.5\].
-   [p13\_fx.png](p13_fx.png), an image of P13\_FX(X) over \[0,100\].
-   [p14\_fx.png](p14_fx.png), an image of P14\_FX(X) over
    \[-0.5,+2.0\].
-   [p15\_fx.png](p15_fx.png), an image of P15\_FX(X) over \[-4,+4\].
-   [p16\_fx.png](p16_fx.png), an image of P16\_FX(X) over \[0,50\].
-   [p17\_fx.png](p17_fx.png), an image of P17\_FX(X) over \[-2,+4\].
-   [p18\_fx.png](p18_fx.png), an image of P18\_FX(X) over
    \[0.988,1.012\].
-   [p19\_fx.png](p19_fx.png), an image of P19\_FX(X) over \[0.0,1.0\].

### List of Routines: {#list-of-routines align="center"}

-   **BISECTION** carries out the bisection method to seek a root of
    F(X) = 0.
-   **BRENT** implements the Brent bisection-based zero finder.
-   **MULLER** carries out Muller's method for seeking a real root of a
    nonlinear function.
-   **NEWTON** carries out Newton's method to seek a root of F(X) = 0.
-   **P00\_FX** evaluates a function specified by problem number.
-   **P00\_FX1** evaluates the first derivative of a function specified
    by problem number.
-   **P00\_FX2** evaluates the second derivative of a function specified
    by problem number.
-   **P00\_PROB\_NUM** returns the number of problems available.
-   **P00\_RANGE** returns an interval bounding the root for any
    problem.
-   **P00\_ROOT** returns a known root for any problem.
-   **P00\_ROOT\_NUM** returns the number of known roots for a problem.
-   **P00\_START** returns starting point for any problem.
-   **P00\_START\_NUM** returns the number of starting points for a
    problem.
-   **P00\_TITLE** returns the title for a given problem.
-   **P01\_FX** evaluates sin ( x ) - x / 2.
-   **P01\_FX1** evaluates the derivative of the function for problem 1.
-   **P01\_FX2** evaluates the second derivative of the function for
    problem 1.
-   **P01\_RANGE** returns an interval bounding the root for problem 1.
-   **P01\_ROOT** returns a root for problem 1.
-   **P01\_ROOT\_NUM** returns the number of known roots for problem 1.
-   **P01\_START** returns a starting point for problem 1.
-   **P01\_START\_NUM** returns the number of starting point for
    problem 1.
-   **P01\_TITLE** returns the title of problem 1.
-   **P02\_FX** evaluates 2 \* x - exp ( - x ).
-   **P02\_FX1** evaluates the derivative of the function for problem 2.
-   **P02\_FX2** evaluates the second derivative of the function for
    problem 2.
-   **P02\_RANGE** returns an interval bounding the root for problem 2.
-   **P02\_ROOT** returns a root for problem 2.
-   **P02\_ROOT\_NUM** returns the number of known roots for problem 2.
-   **P02\_START** returns a starting point for problem 2.
-   **P02\_START\_NUM** returns the number of starting point for
    problem 2.
-   **P02\_TITLE** returns the title of problem 2.
-   **P03\_FX** evaluates x \* exp ( - x ).
-   **P03\_FX1** evaluates the derivative of the function for problem 3.
-   **P03\_FX2** evaluates the second derivative of the function for
    problem 3.
-   **P03\_RANGE** returns an interval bounding the root for problem 3.
-   **P03\_ROOT** returns a root for problem 3.
-   **P03\_ROOT\_NUM** returns the number of known roots for problem 3.
-   **P03\_START** returns a starting point for problem 3.
-   **P03\_START\_NUM** returns the number of starting point for
    problem 3.
-   **P03\_TITLE** returns the title of problem 3.
-   **P04\_FX** evaluates exp ( x ) - 1 / ( 10 \* x )\^2.
-   **P04\_FX1** evaluates the derivative of the function for problem 4.
-   **P04\_FX2** evaluates the second derivative of the function for
    problem 4.
-   **P04\_RANGE** returns an interval bounding the root for problem 4.
-   **P04\_ROOT** returns a root for problem 4.
-   **P04\_ROOT\_NUM** returns the number of known roots for problem 4.
-   **P04\_START** returns a starting point for problem 4.
-   **P04\_START\_NUM** returns the number of starting point for
    problem 4.
-   **P04\_TITLE** returns the title of problem 4.
-   **P05\_FX** evaluates ( x + 3 ) \* ( x - 1 )\^2.
-   **P05\_FX1** evaluates the derivative of the function for problem 5.
-   **P05\_FX2** evaluates the second derivative of the function for
    problem 5.
-   **P05\_RANGE** returns an interval bounding the root for problem 5.
-   **P05\_ROOT** returns a root for problem 5.
-   **P05\_ROOT\_NUM** returns the number of known roots for problem 5.
-   **P05\_START** returns a starting point for problem 5.
-   **P05\_START\_NUM** returns the number of starting point for
    problem 5.
-   **P05\_TITLE** returns the title of problem 5.
-   **P06\_FX** evaluates exp ( x ) - 2 - 1 / ( 10 \* x )\^2 + 2 / (
    100 \* x )\^3.
-   **P06\_FX1** evaluates the derivative of the function for problem 6.
-   **P06\_FX2** evaluates the second derivative of the function for
    problem 6.
-   **P06\_RANGE** returns an interval bounding the root for problem 6.
-   **P06\_ROOT** returns a root for problem 6.
-   **P06\_ROOT\_NUM** returns the number of known roots for problem 6.
-   **P06\_START** returns a starting point for problem 6.
-   **P06\_START\_NUM** returns the number of starting point for
    problem 6.
-   **P06\_TITLE** returns the title of problem 6.
-   **P07\_FX** evaluates x\^3.
-   **P07\_FX1** evaluates the derivative of the function for problem 7.
-   **P07\_FX2** evaluates the second derivative of the function for
    problem 7.
-   **P07\_RANGE** returns an interval bounding the root for problem 7.
-   **P07\_ROOT** returns a root for problem 7.
-   **P07\_ROOT\_NUM** returns the number of known roots for problem 7.
-   **P07\_START** returns a starting point for problem 7.
-   **P07\_START\_NUM** returns the number of starting point for
    problem 7.
-   **P07\_TITLE** returns the title of problem 7.
-   **P08\_FX** evaluates cos ( x ) - x.
-   **P08\_FX1** evaluates the derivative of the function for problem 8.
-   **P08\_FX2** evaluates the second derivative of the function for
    problem 8.
-   **P08\_RANGE** returns an interval bounding the root for problem 8.
-   **P08\_ROOT** returns a root for problem 8.
-   **P08\_ROOT\_NUM** returns the number of known roots for problem 8.
-   **P08\_START** returns a starting point for problem 8.
-   **P08\_START\_NUM** returns the number of starting point for
    problem 8.
-   **P08\_TITLE** returns the title of problem 8.
-   **P09\_FX** evaluates the Newton Baffler.
-   **P09\_FX1** evaluates the derivative of the function for problem 9.
-   **P09\_FX2** evaluates the second derivative of the function for
    problem 9.
-   **P09\_RANGE** returns an interval bounding the root for problem 9.
-   **P09\_ROOT** returns a root for problem 9.
-   **P09\_ROOT\_NUM** returns the number of known roots for problem 9.
-   **P09\_START** returns a starting point for problem 9.
-   **P09\_START\_NUM** returns the number of starting point for
    problem 9.
-   **P09\_TITLE** returns the title of problem 9.
-   **P10\_FX** evaluates the Repeller.
-   **P10\_FX1** evaluates the derivative of the function for
    problem 10.
-   **P10\_FX2** evaluates the second derivative of the function for
    problem 10.
-   **P10\_RANGE** returns an interval bounding the root for problem 10.
-   **P10\_ROOT** returns a root for problem 10.
-   **P10\_ROOT\_NUM** returns the number of known roots for problem 10.
-   **P10\_START** returns a starting point for problem 10.
-   **P10\_START\_NUM** returns the number of starting point for
    problem 10.
-   **P10\_TITLE** returns the title of problem 10.
-   **P11\_FX** evaluates the Pinhead.
-   **P11\_FX1** evaluates the derivative of the function for
    problem 11.
-   **P11\_FX2** evaluates the second derivative of the function for
    problem 11.
-   **P11\_RANGE** returns an interval bounding the root for problem 11.
-   **P11\_ROOT** returns a root for problem 11.
-   **P11\_ROOT\_NUM** returns the number of known roots for problem 11.
-   **P11\_START** returns a starting point for problem 11.
-   **P11\_START\_NUM** returns the number of starting point for
    problem 11.
-   **P11\_TITLE** returns the title of problem 11.
-   **P12\_FX** evaluates Flat Stanley.
-   **P12\_FX1** evaluates the derivative of the function for
    problem 12.
-   **P12\_FX2** evaluates the second derivative of the function for
    problem 12.
-   **P12\_RANGE** returns an interval bounding the root for problem 12.
-   **P12\_ROOT** returns a root for problem 12.
-   **P12\_ROOT\_NUM** returns the number of known roots for problem 12.
-   **P12\_START** returns a starting point for problem 12.
-   **P12\_START\_NUM** returns the number of starting point for
    problem 12.
-   **P12\_TITLE** returns the title of problem 12.
-   **P13\_FX** evaluates Lazy Boy.
-   **P13\_FX1** evaluates the derivative of the function for
    problem 13.
-   **P13\_FX2** evaluates the second derivative of the function for
    problem 13.
-   **P13\_RANGE** returns an interval bounding the root for problem 13.
-   **P13\_ROOT** returns a root for problem 13.
-   **P13\_ROOT\_NUM** returns the number of known roots for problem 13.
-   **P13\_START** returns a starting point for problem 13.
-   **P13\_START\_NUM** returns the number of starting point for
    problem 13.
-   **P13\_TITLE** returns the title of problem 13.
-   **P14\_FX** evaluates the Camel.
-   **P14\_FX1** evaluates the derivative of the function for
    problem 14.
-   **P14\_FX2** evaluates the second derivative of the function for
    problem 14.
-   **P14\_RANGE** returns an interval bounding the root for problem 14.
-   **P14\_ROOT** returns a root for problem 14.
-   **P14\_ROOT\_NUM** returns the number of known roots for problem 14.
-   **P14\_START** returns a starting point for problem 14.
-   **P14\_START\_NUM** returns the number of starting point for
    problem 14.
-   **P14\_TITLE** returns the title of problem 14.
-   **P15\_FX** evaluates a pathological function for Newton's method.
-   **P15\_FX1** evaluates the derivative of the function for
    problem 15.
-   **P15\_FX2** evaluates the second derivative of the function for
    problem 15.
-   **P15\_RANGE** returns an interval bounding the root for problem 15.
-   **P15\_ROOT** returns a root for problem 15.
-   **P15\_ROOT\_NUM** returns the number of known roots for problem 15.
-   **P15\_START** returns a starting point for problem 15.
-   **P15\_START\_NUM** returns the number of starting point for
    problem 15.
-   **P15\_TITLE** returns the title of problem 15.
-   **P16\_FX** evaluates Kepler's Equation.
-   **P16\_FX1** evaluates the derivative of the function for
    problem 16.
-   **P16\_FX2** evaluates the second derivative of the function for
    problem 16.
-   **P16\_RANGE** returns an interval bounding the root for problem 16.
-   **P16\_ROOT** returns a root for problem 16.
-   **P16\_ROOT\_NUM** returns the number of known roots for problem 16.
-   **P16\_START** returns a starting point for problem 16.
-   **P16\_START\_NUM** returns the number of starting point for
    problem 16.
-   **P16\_TITLE** returns the title of problem 16.
-   **P17\_FX** evaluates Wallis's function, f(x) = x\^3 - 2\*x - 5.
-   **P17\_FX1** evaluates the derivative of the function for
    problem 17.
-   **P17\_FX2** evaluates the second derivative of the function for
    problem 17.
-   **P17\_RANGE** returns an interval bounding the root for problem 17.
-   **P17\_ROOT** returns a root for problem 17.
-   **P17\_ROOT\_NUM** returns the number of known roots for problem 17.
-   **P17\_START** returns a starting point for problem 17.
-   **P17\_START\_NUM** returns the number of starting point for
    problem 17.
-   **P17\_TITLE** returns the title of problem 17.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_ADD** adds two R8's.
-   **R8\_CSQRT** returns the complex square root of an R8.
-   **R8\_CUBE\_ROOT** returns the cube root of an R8.
-   **R8\_EPSILON** returns the R8 roundoff unit.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_SIGN** returns the sign of an R8.
-   **R8POLY2\_RROOT** returns the real parts of the roots of a
    quadratic polynomial.
-   **REGULA\_FALSI** carries out the Regula Falsi method to seek a root
    of F(X) = 0.
-   **SECANT** carries out the secant method to seek a root of F(X) = 0.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 16 January 2013.*
