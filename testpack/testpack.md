TESTPACK\
Testing Multidimensional Integration Routines {#testpack-testing-multidimensional-integration-routines align="center"}
=============================================

------------------------------------------------------------------------

**TESTPACK** is a C++ program which demonstrates the testing of a
routine for multidimensional integration.

In this case, the code being tested is a subroutine known as ADAPT,
written by Genz. The code is tested on six test integrand functions,
also defined by Genz. The test is done with a variety of spatial
dimensions, parameter values, and difficulty factors.

With **M** denoting the spatial dimension, **R** a parameter, **C** a
scaling vector, and **X0** a displacement vector, the test functions can
be summarized as:

1.  f(x) = cos ( 2 \* pi \* r + sum ( c(1:m) \* x(1:m) ) ),\
    Genz "Oscillatory";
2.  f(x) = 1 / product ( c(1:m)\^2 + (x(1:m) - x0(1:m))\^2),\
    Genz "Product Peak";
3.  f(x) = 1 / ( 1 + sum ( c(1:m) \* x(1:m) ) )\^(m+r),\
    Genz "Corner Peak";
4.  f(x) = exp(-sum(c(1:m)\^2 \* ( x(1:m) - x0(1:m))\^2 ) ),\
    Genz "Gaussian";
5.  f(x) = exp ( - sum ( c(1:m) \* abs ( x(1:m) - x0(1:m) ) ) ),\
    Genz "Continuous";
6.  f(x) = exp(sum(c(1:m)\*x(1:m)) for x(1:m) &lt;= x0(1:m), 0
    otherwise,\
    Genz "Discontinuous";

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TESTPACK** is available in [a C
version](../../c_src/testpack/testpack.md) and [a C++
version](../../master/testpack/testpack.md) and [a FORTRAN77
version](../../f77_src/testpack/testpack.md) and [a FORTRAN90
version](../../f_src/testpack/testpack.md) and [a MATLAB
version](../../m_src/testpack/testpack.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[INTEGRAL\_TEST](../../f_src/integral_test/integral_test.md), a
FORTRAN90 program which tests the suitability of a set of N points for
use in an equal-weight quadrature rule over the M-dimensional unit
hypercube.

[INTLIB](../../f_src/intlib/intlib.md), a FORTRAN90 library which
estimates the integral of a function over a one-dimensional interval.

[NINTLIB](../../master/nintlib/nintlib.md), a C++ library which
estimates the integral of a function over a one-dimensional interval.

[PRODUCT\_RULE](../../master/product_rule/product_rule.md), a C++
program which can create a multidimensional quadrature rule as a product
of one dimensional rules.

[QUADRULE](../../master/quadrule/quadrule.md), a C++ library which
defines a variety of (mostly 1-dimensional) quadrature rules.

[SMOLPACK](../../c_src/smolpack/smolpack.md), a C library which uses
the Genz test functions to demonstrate quadrature in multiple dimensions
using a sparse grid.

[SPINTERP](../../m_src/spinterp/spinterp.md), a MATLAB library which
uses the Genz test functions to demonstrate multilinear interpolation on
a sparse grid.

[STROUD](../../master/stroud/stroud.md), a C++ library which defines
a variety of quadrature rules over various "interesting" geometric
shapes.

[TEST\_NINT](../../master/test_nint/test_nint.md), a C++ library
which can be used to test N-dimensional quadrature routines.

### Reference: {#reference align="center"}

1.  Alan Genz,\
    Testing Multidimensional Integration Routines,\
    in Tools, Methods, and Languages for Scientific and Engineering
    Computation,\
    edited by B Ford, JC Rault, F Thomasset,\
    North-Holland, 1984, pages 81-94,\
    ISBN: 0444875700,\
    LC: Q183.9.I53.
2.  Alan Genz,\
    A Package for Testing Multiple Integration Subroutines,\
    in Numerical Integration: Recent Developments, Software and
    Applications,\
    edited by Patrick Keast, Graeme Fairweather,\
    Reidel, 1987, pages 337-340,\
    ISBN: 9027725144,\
    LC: QA299.3.N38
3.  John Hart, Ward Cheney, Charles Lawson, Hans Maehly, Charles
    Mesztenyi, John Rice, Henry Thatcher, Christoph Witzgall,\
    Computer Approximations,\
    Wiley, 1968,\
    LC: QA297.C64.
4.  Linus Schrage,\
    A More Portable Fortran Random Number Generator,\
    ACM Transactions on Mathematical Software,\
    Volume 5, Number 2, June 1979, pages 132-138.

### Source Code: {#source-code align="center"}

-   [testpack.cpp](testpack.cpp), the source code.
-   [testpack\_output.txt](testpack_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for TESTPACK.
-   **ADAPT** carries out adaptive multidimensional quadrature.
-   **FUNCTN** evaluates one of the test integrand functions.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_POWER** returns the value of I\^J.
-   **I4VEC\_SUM** sums the entries of an I4VEC.
-   **MULTST** tests a multidimensional integration routine.
-   **PHI** estimates the normal cumulative density function.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_EPSILON** returns the R8 roundoff unit.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_MIN** returns the minimum of two R8's.
-   **R8VEC\_DOT** computes the dot product of a pair of R8VEC's.
-   **R8VEC\_MEDIAN** computes the median of an R8VEC.
-   **R8VEC\_PRODUCT** returns the product of the entries of an R8VEC.
-   **R8VEC\_SUM** returns the sum of an R8VEC.
-   **RANDOM\_SCHRAGE** is a portable random number generator
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TUPLE\_NEXT** computes the next element of a tuple space.
-   **VALINT** computes the exact integrals of the test functions.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 22 March 2007.*
