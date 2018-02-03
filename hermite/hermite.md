HERMITE\
Hermite polynomial interpolating function and derivative values {#hermite-hermite-polynomial-interpolating-function-and-derivative-values align="center"}
===============================================================

------------------------------------------------------------------------

**HERMITE** is a C++ library which constructs the Hermite polynomial
which interpolates function and derivative values at given points.

In other words, the user supplies **n** sets of data,
**(x(i),y(i),yp(i))**, and the algorithm determines a polynomial
**p(x)** such that, for 1 &lt;= **i** &lt;= **n**

> p(x(i)) = y(i)\
> p'(x(i)) = yp(i)

Note that **p(x)** is a "global" polynomial, not a piecewise polynomial.
Given **n** data points, **p(x)** will be a polynomial of degree
2**n**-1. As the value **n** increases, the increasing degree of the
interpolating polynomial makes it liable to oscillations between the
data, and eventually to severe inaccuracy even at the data points.

Generally, the interpolation problem for a large number of data points
should be handled differently, for instance by piecewise polynomials.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**HERMITE** is available in [a C
version](../../c_src/hermite/hermite.md) and [a C++
version](../../master/hermite/hermite.md) and [a FORTRAN77
version](../../f77_src/hermite/hermite.md) and [a FORTRAN90
version](../../f_src/hermite/hermite.md) and [a MATLAB
version](../../m_src/hermite/hermite.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BERNSTEIN\_POLYNOMIAL](../../master/bernstein_polynomial/bernstein_polynomial.md),
a C++ library which evaluates the Bernstein polynomials, useful for
uniform approximation of functions;

[CHEBYSHEV](../../master/chebyshev/chebyshev.md), a C++ library which
computes the Chebyshev interpolant/approximant to a given function over
an interval.

[DIVDIF](../../master/divdif/divdif.md), a C++ library which computes
interpolants by divided differences.

[HERMITE\_CUBIC](../../master/hermite_cubic/hermite_cubic.md), a C++
library which can compute the value, derivatives or integral of a
Hermite cubic polynomial, or manipulate an interpolating function made
up of piecewise Hermite cubic polynomials.

[RBF\_INTERP](../../master/rbf_interp/rbf_interp.md), a C++ library
which defines and evaluates radial basis function (RBF) interpolants to
multidimensional data.

[SPLINE](../../master/spline/spline.md), a C++ library which includes
many routines to construct and evaluate spline interpolants and
approximants.

[TEST\_APPROX](../../master/test_approx/test_approx.md), a C++
library which defines test problems for approximation, provided as a set
of (x,y) data.

[TEST\_INTERP\_1D](../../master/test_interp_1d/test_interp_1d.md), a
C++ library which defines test problems for interpolation of data y(x),
depending on a 1D argument.

### Reference: {#reference align="center"}

1.  Philip Davis,\
    Interpolation and Approximation,\
    Dover, 1975,\
    ISBN: 0-486-62495-1,\
    LC: QA221.D33
2.  Carl deBoor,\
    A Practical Guide to Splines,\
    Springer, 2001,\
    ISBN: 0387953663,\
    LC: QA1.A647.v27.

### Source Code: {#source-code align="center"}

-   [hermite.cpp](hermite.cpp), the source code.
-   [hermite.hpp](hermite.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [hermite\_prb.cpp](hermite_prb.cpp), a sample calling program.
-   [hermite\_prb\_output.txt](hermite_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **DIF\_DERIV** computes the derivative of a polynomial in divided
    difference form.
-   **DIF\_SHIFT\_X** replaces one abscissa of a divided difference
    table with a new one.
-   **DIF\_SHIFT\_ZERO** shifts a divided difference table so that all
    abscissas are zero.
-   **DIF\_TO\_R8POLY** converts a divided difference table to a
    standard polynomial.
-   **DIF\_VALS** evaluates a divided difference polynomial at a set of
    points.
-   **HERMITE\_BASIS\_0** evaluates a zero-order Hermite interpolation
    basis function.
-   **HERMITE\_BASIS\_1** evaluates a first-order Hermite interpolation
    basis function.
-   **HERMITE\_DEMO** computes and prints Hermite interpolant
    information for data.
-   **HERMITE\_INTERPOLANT** sets up a divided difference table from
    Hermite data.
-   **HERMITE\_INTERPOLANT\_RULE:** quadrature rule for a Hermite
    interpolant.
-   **HERMITE\_INTERPOLANT\_VALUE** evaluates the Hermite interpolant
    polynomial.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8POLY\_ANT\_VAL** evaluates the antiderivative of an R8POLY in
    standard form.
-   **R8POLY\_DEGREE** returns the degree of a polynomial.
-   **R8POLY\_PRINT** prints out a polynomial.
-   **R8VEC\_CHEBYSHEV\_NEW** creates a vector of Chebyshev spaced
    values.
-   **R8VEC\_LINSPACE\_NEW** creates a vector of linearly spaced values.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC\_PRODUCT** returns the product of the entries of an R8VEC.
-   **R8VEC\_UNIFORM\_01** returns a unit pseudorandom R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 01 November 2011.*
