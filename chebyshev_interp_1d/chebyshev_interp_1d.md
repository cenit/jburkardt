CHEBYSHEV\_INTERP\_1D\
Chebyshev Polynomial Interpolation in 1D {#chebyshev_interp_1d-chebyshev-polynomial-interpolation-in-1d align="center"}
========================================

------------------------------------------------------------------------

**CHEBYSHEV\_INTERP\_1D** is a C++ library which determines the
combination of Chebyshev polynomials which interpolates a set of data,
so that p(x(i)) = y(i).

CHEBYSHEV\_INTERP\_1D needs the QR\_SOLVE and R8LIB libraries. The test
program needs the TEST\_INTERP library.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**CHEBYSHEV\_INTERP\_1D** is available in [a C
version](../../c_src/chebyshev_interp_1d/chebyshev_interp_1d.md) and
[a C++
version](../../master/chebyshev_interp_1d/chebyshev_interp_1d.md) and
[a FORTRAN77
version](../../f77_src/chebyshev_interp_1d/chebyshev_interp_1d.md) and
[a FORTRAN90
version](../../f_src/chebyshev_interp_1d/chebyshev_interp_1d.md) and
[a MATLAB
version](../../m_src/chebyshev_interp_1d/chebyshev_interp_1d.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BARYCENTRIC\_INTERP\_1D](../../master/barycentric_interp_1d/barycentric_interp_1d.md),
a C++ library which defines and evaluates the barycentric Lagrange
polynomial p(x) which interpolates a set of data, so that p(x(i)) =
y(i). The barycentric approach means that very high degree polynomials
can safely be used.

[CHEBYSHEV](../../master/chebyshev/chebyshev.md), a C++ library which
computes the Chebyshev interpolant/approximant to a given function over
an interval.

[CHEBYSHEV\_SERIES](../../master/chebyshev_series/chebyshev_series.md),
a C++ library which can evaluate a Chebyshev series approximating a
function f(x), while efficiently computing one, two or three derivatives
of the series, which approximate f'(x), f''(x), and f'''(x), by Manfred
Zimmer.

[CLAUSEN](../../master/clausen/clausen.md), a C++ library which
evaluates a Chebyshev interpolant to the Clausen function Cl2(x).

[DIVDIF](../../master/divdif/divdif.md), a C++ library which uses
divided differences to compute the polynomial interpolant to a given set
of data.

[HERMITE](../../master/hermite/hermite.md), a C++ library which
computes the Hermite interpolant, a polynomial that matches function
values and derivatives.

[LAGRANGE\_INTERP\_1D](../../master/lagrange_interp_1d/lagrange_interp_1d.md),
a C++ library which defines and evaluates the Lagrange polynomial p(x)
which interpolates a set of data, so that p(x(i)) = y(i).

[NEAREST\_INTERP\_1D](../../master/nearest_interp_1d/nearest_interp_1d.md),
a C++ library which interpolates a set of data using a piecewise
constant interpolant defined by the nearest neighbor criterion.

[NEWTON\_INTERP\_1D](../../master/newton_interp_1d/newton_interp_1d.md),
a C++ library which finds a polynomial interpolant to data using Newton
divided differences.

[PWL\_INTERP\_1D](../../master/pwl_interp_1d/pwl_interp_1d.md), a C++
library which interpolates a set of data using a piecewise linear
interpolant.

[QR\_SOLVE](../../master/qr_solve/qr_solve.md), a C++ library which
computes the least squares solution of a linear system A\*x=b.

[R8LIB](../../master/r8lib/r8lib.md), a C++ library which contains
many utility routines using double precision real (R8) arithmetic.

[RBF\_INTERP\_1D](../../master/rbf_interp_1d/rbf_interp_1d.md), a C++
library which defines and evaluates radial basis function (RBF)
interpolants to 1D data.

[SHEPARD\_INTERP\_1D](../../master/shepard_interp_1d/shepard_interp_1d.md),
a C++ library which defines and evaluates Shepard interpolants to 1D
data, based on inverse distance weighting.

[SPLINE](../../master/spline/spline.md), a C++ library which
constructs and evaluates spline interpolants and approximants.

[TEST\_INTERP](../../master/test_interp/test_interp.md), a C++
library which defines a number of test problems for interpolation,
provided as a set of (x,y) data.

[TEST\_INTERP\_1D](../../master/test_interp_1d/test_interp_1d.md), a
C++ library which defines test problems for interpolation of data y(x),
depending on a 2D argument.

[VANDERMONDE\_INTERP\_1D](../../c_src/vandermonde_interp_1d/vandermonde_interp_1d.md),
a C library which finds a polynomial interpolant to data y(x) of a 1D
argument, by setting up and solving a linear system for the polynomial
coefficients, involving the Vandermonde matrix.

### Reference: {#reference align="center"}

1.  Kendall Atkinson,\
    An Introduction to Numerical Analysis,\
    Prentice Hall, 1989,\
    ISBN: 0471624896,\
    LC: QA297.A94.1989.
2.  Philip Davis,\
    Interpolation and Approximation,\
    Dover, 1975,\
    ISBN: 0-486-62495-1,\
    LC: QA221.D33
3.  David Kahaner, Cleve Moler, Steven Nash,\
    Numerical Methods and Software,\
    Prentice Hall, 1989,\
    ISBN: 0-13-627258-4,\
    LC: TA345.K34.

### Source Code: {#source-code align="center"}

-   [chebyshev\_interp\_1d.cpp](chebyshev_interp_1d.cpp), the source
    code.
-   [chebyshev\_interp\_1d.hpp](chebyshev_interp_1d.hpp), the include
    file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [chebyshev\_interp\_1d\_prb.cpp](chebyshev_interp_1d_prb.cpp), a
    sample calling program.
-   [chebyshev\_interp\_1d\_prb\_output.txt](chebyshev_interp_1d_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **CHEBYSHEV\_COEF\_1D** determines the Chebyshev interpolant
    coefficients.
-   **CHEBYSHEV\_INTERP\_1D** determines and evaluates the Chebyshev
    interpolant.
-   **CHEBYSHEV\_VALUE\_1D** evaluates a Chebyshev interpolant, given
    its coefficients.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 28 September 2012.*
