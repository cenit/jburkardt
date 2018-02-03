DIVDIF\
Divided Difference Polynomials {#divdif-divided-difference-polynomials align="center"}
==============================

------------------------------------------------------------------------

**DIVDIF** is a C++ library which creates, prints and manipulates
divided difference polynomials.

Divided difference polynomials are a systematic method of computing
polynomial approximations to scattered data. The representations are
compact, and may easily be updated with new data, rebased at zero, or
analyzed to produce the standard form polynomial, integral or derivative
polynomials.

Other routines are available to convert the divided difference
representation into standard polynomial format. This is a natural way to
determine the coefficients of the polynomial that interpolates a given
set of data, for instance.

One surprisingly simple but useful routine is available to take a set of
roots and compute the divided difference or standard form polynomial
that passes through those roots.

Finally, the Newton-Cotes quadrature formulas can be derived using
divided difference methods, so a few routines are given which can
compute the weights and abscissas of open or closed rules for an
arbitrary number of nodes.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**DIVDIF** is available in [a C version](../../c_src/divdif/divdif.md)
and [a C++ version](../../master/divdif/divdif.md) and [a FORTRAN77
version](../../f77_src/divdif/divdif.md) and [a FORTRAN90
version](../../f_src/divdif/divdif.md) and [a MATLAB
version](../../m_src/divdif/divdif.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BERNSTEIN\_POLYNOMIAL](../../master/bernstein_polynomial/bernstein_polynomial.md),
a C++ library which evaluates the Bernstein polynomials, useful for
uniform approximation of functions;

[CHEBYSHEV](../../master/chebyshev/chebyshev.md), a C++ library which
computes the Chebyshev interpolant/approximant to a given function over
an interval.

[DIFFER](../../master/differ/differ.md), a C++ library which
determines the finite difference coefficients necessary in order to
combine function values at known locations to compute an approximation
of given accuracy to a derivative of a given order.

[LAGRANGE\_INTERP\_1D](../../master/lagrange_interp_1d/lagrange_interp_1d.md),
a C++ library which defines and evaluates the Lagrange polynomial p(x)
which interpolates a set of data, so that p(x(i)) = y(i).

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
3.  Jean-Paul Berrut, Lloyd Trefethen,\
    Barycentric Lagrange Interpolation,\
    SIAM Review,\
    Volume 46, Number 3, September 2004, pages 501-517.
4.  FM Larkin,\
    Root Finding by Divided Differences,\
    Numerische Mathematik,\
    Volume 37, pages 93-104, 1981.

### Source Code: {#source-code align="center"}

-   [divdif.cpp](divdif.cpp), the source code;
-   [divdif.hpp](divdif.hpp), the include file;

### Examples and Tests: {#examples-and-tests align="center"}

-   [divdif\_prb.cpp](divdif_prb.cpp), the calling program;
-   [divdif\_prb\_output.txt](divdif_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **CHEBY\_T\_ZERO** returns zeroes of the Chebyshev polynomial
    T(N)(X).
-   **CHEBY\_U\_ZERO** returns zeroes of the Chebyshev polynomial
    U(N)(X).
-   **DATA\_TO\_DIF** sets up a divided difference table from raw data.
-   **DATA\_TO\_DIF\_NEW** sets up a divided difference table from raw
    data.
-   **DATA\_TO\_DIF\_DISPLAY** sets up a divided difference table and
    prints out intermediate data.
-   **DATA\_TO\_R8POLY** computes the coefficients of a polynomial
    interpolating data.
-   **DIF\_ANTIDERIV** integrates a polynomial in divided difference
    form.
-   **DIF\_APPEND** adds a pair of data values to a divided difference
    table.
-   **DIF\_BASIS** computes all Lagrange basis polynomials in divided
    difference form.
-   **DIF\_BASIS\_I** computes the I-th Lagrange basis polynomial in
    divided difference form.
-   **DIF\_DERIV** computes the derivative of a polynomial in divided
    difference form.
-   **DIF\_PRINT** prints the polynomial represented by a divided
    difference table.
-   **DIF\_SHIFT\_X** replaces one abscissa of a divided difference
    table with a new one.
-   **DIF\_SHIFT\_ZERO** shifts a divided difference table so that all
    abscissas are zero.
-   **DIF\_TO\_R8POLY** converts a divided difference table to a
    standard polynomial.
-   **DIF\_VAL** evaluates a divided difference polynomial at a point.
-   **DIF\_VALS** evaluates a divided difference polynomial at a set of
    points.
-   **LAGRANGE\_RULE** computes the weights of a Lagrange interpolation
    rule.
-   **LAGRANGE\_SUM** carries out a Lagrange interpolation rule.
-   **LAGRANGE\_VAL** applies a naive form of Lagrange interpolation.
-   **NC\_RULE** computes the weights of a Newton-Cotes quadrature rule.
-   **NCC\_RULE** computes the coefficients of a Newton-Cotes closed
    quadrature rule.
-   **NCO\_RULE** computes the coefficients of a Newton-Cotes open
    quadrature rule.
-   **R8\_SWAP** swaps two R8's.
-   **R8POLY\_ANT\_COF** integrates an R8POLY in standard form.
-   **R8POLY\_ANT\_VAL** evaluates the antiderivative of an R8POLY in
    standard form.
-   **R8POLY\_BASIS** computes all Lagrange basis polynomials in
    standard form.
-   **R8POLY\_BASIS\_1** computes the I-th Lagrange basis polynomial in
    standard form.
-   **R8POLY\_DER\_COF** computes the coefficients of the derivative of
    a real polynomial.
-   **R8POLY\_DER\_VAL** evaluates the derivative of a real polynomial
    in standard form.
-   **R8POLY\_ORDER** returns the order of a polynomial.
-   **R8POLY\_PRINT** prints out a real polynomial in standard form.
-   **R8POLY\_SHIFT** adjusts the coefficients of a polynomial for a new
    argument.
-   **R8POLY\_VAL\_HORNER** evaluates a real polynomial in standard
    form.
-   **R8VEC\_DISTINCT** is true if the entries in an R8VEC are distinct.
-   **R8VEC\_INDICATOR** sets an R8VEC to the indicator vector
    {1,2,3...}.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **ROOTS\_TO\_DIF** sets a divided difference table for a polynomial
    from its roots.
-   **ROOTS\_TO\_R8POLY** converts polynomial roots to polynomial
    coefficients.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 25 May 2011.*
