NINTLIB\
Multi-dimensional quadrature {#nintlib-multi-dimensional-quadrature align="center"}
============================

------------------------------------------------------------------------

**NINTLIB** is a C++ library which estimates integrals over
multi-dimensional regions.

Please note that these routines are simple and academic. A good program
for computing an integral in multiple dimensions must include error
estimation and adaptivity. Simple straightforward approaches to reducing
the error will cause a ruinous explosion in the number of function
evaluations required.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**NINTLIB** is available in [a C
version](../../c_src/nintlib/nintlib.md) and [a C++
version](../../master/nintlib/nintlib.md) and [a FORTRAN77
version](../../f77_src/nintlib/nintlib.md) and [a FORTRAN90
version](../../f_src/nintlib/nintlib.md) and [a MATLAB
version](../../m_src/nintlib/nintlib.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FEKETE](../../master/fekete/fekete.md), a C++ library which defines
a Fekete rule for quadrature or interpolation over a triangle.

[INTEGRAL\_TEST](../../f_src/integral_test/integral_test.md), a
FORTRAN90 program which tests the suitability of a set of N points for
use in an equal-weight quadrature rule over the multi-dimensional unit
hypercube.

[INTLIB](../../f_src/intlib/intlib.md), a FORTRAN90 library which
estimates the integral of a function over a one-dimensional interval.

[NINT\_EXACTNESS](../../master/nint_exactness/nint_exactness.md), a
C++ program which demonstrates how to measure the polynomial exactness
of a multidimensional quadrature rule.

[PRODUCT\_RULE](../../master/product_rule/product_rule.md), a C++
program which can create a multidimensional quadrature rule as a product
of one dimensional rules.

[QUADRULE](../../master/quadrule/quadrule.md), a C++ library which
defines a variety of (mostly 1-dimensional) quadrature rules.

[STROUD](../../master/stroud/stroud.md), a C++ library which defines
a variety of quadrature rules over various "interesting" geometric
shapes.

[TEST\_INT\_2D](../../master/test_int_2d/test_int_2d.md), a C++
library which defines test integrands for 2D quadrature rules.

[TEST\_NINT](../../master/test_nint/test_nint.md), a C++ library
which tests multi-dimensional quadrature routines.

### Reference: {#reference align="center"}

1.  Philip Davis, Philip Rabinowitz,\
    Methods of Numerical Integration,\
    Second Edition,\
    Dover, 2007,\
    ISBN: 0486453391,\
    LC: QA299.3.D28.

### Source Code: {#source-code align="center"}

-   [nintlib.cpp](nintlib.cpp), the source code.
-   [nintlib.hpp](nintlib.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [nintlib\_prb.cpp](nintlib_prb.cpp), a sample problem.
-   [nintlib\_prb\_output.txt](nintlib_prb_output.txt), sample problem
    output.

### List of Routines: {#list-of-routines align="center"}

-   **BOX\_ND** estimates a multidimensional integral using a product
    rule.
-   **I4\_HUGE** returns a "huge" I4.
-   **I4\_POWER** returns the value of I\^J.
-   **MONTE\_CARLO\_ND** estimates a multidimensional integral using
    Monte Carlo.
-   **P5\_ND** estimates a multidimensional integral with a formula of
    exactness 5.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_EPSILON** returns the R8 roundoff unit.
-   **R8VEC\_UNIFORM\_01** returns a unit pseudorandom R8VEC.
-   **ROMBERG\_ND** estimates a multidimensional integral using Romberg
    integration.
-   **SAMPLE\_ND** estimates a multidimensional integral using sampling.
-   **SUM2\_ND** estimates a multidimensional integral using a product
    rule.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TUPLE\_NEXT** computes the next element of a tuple space.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 01 March 2007.*
