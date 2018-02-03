NEWTON\_INTERP\_1D\
Polynomial Interpolation with Newton Divided Differences {#newton_interp_1d-polynomial-interpolation-with-newton-divided-differences align="center"}
========================================================

------------------------------------------------------------------------

**NEWTON\_INTERP\_1D**, a C++ library which finds a polynomial
interpolant to data using Newton divided differences.

NEWTON\_INTERP\_1D needs access to the R8LIB libraries. The test code
also needs access to the TEST\_INTERP library.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**NEWTON\_INTERP\_1D** is available in [a C
version](../../c_src/newton_interp_1d/newton_interp_1d.md) and [a C++
version](../../master/newton_interp_1d/newton_interp_1d.md) and [a
FORTRAN77 version](../../f77_src/newton_interp_1d/newton_interp_1d.md)
and [a FORTRAN90
version](../../f_src/newton_interp_1d/newton_interp_1d.md) and [a
MATLAB version](../../m_src/newton_interp_1d/newton_interp_1d.md) and
[a Python version](../../py_src/newton_interp_1d/newton_interp_1d.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BARYCENTRIC\_INTERP\_1D](../../master/barycentric_interp_1d/barycentric_interp_1d.md),
a C++ library which defines and evaluates the barycentric Lagrange
polynomial p(x) which interpolates a set of data, so that p(x(i)) =
y(i). The barycentric approach means that very high degree polynomials
can safely be used.

[CHEBYSHEV\_INTERP\_1D](../../master/chebyshev_interp_1d/chebyshev_interp_1d.md),
a C++ library which determines the combination of Chebyshev polynomials
which interpolates a set of data, so that p(x(i)) = y(i).

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

[PWL\_INTERP\_1D](../../master/pwl_interp_1d/pwl_interp_1d.md), a C++
library which interpolates a set of data using a piecewise linear
interpolant.

[R8LIB](../../master/r8lib/r8lib.md), a C++ library which contains
many utility routines, using double precision real (R8) arithmetic.

[RBF\_INTERP\_1D](../../master/rbf_interp_1d/rbf_interp_1d.md), a C++
library which defines and evaluates radial basis function (RBF)
interpolants to 1D data.

[SHEPARD\_INTERP\_1D](../../master/shepard_interp_1d/shepard_interp_1d.md),
a C++ library which defines and evaluates Shepard interpolants to 1D
data, which are based on inverse distance weighting.

[SPLINE](../../master/spline/spline.md), a C++ library which
constructs and evaluates spline interpolants and approximants.

[TEST\_INTERP\_1D](../../master/test_interp_1d/test_interp_1d.md), a
C++ library which defines test problems for interpolation of data y(x),
depending on a 2D argument.

[VANDERMONDE\_INTERP\_1D](../../master/vandermonde_interp_1d/newton_interp_1d.md),
a C++ library which finds a polynomial interpolant to data y(x) of a 1D
argument by setting up and solving a linear system for the polynomial
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

-   [newton\_interp\_1d.cpp](newton_interp_1d.cpp), the source code.
-   [newton\_interp\_1d.hpp](newton_interp_1d.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [newton\_interp\_1d\_prb.cpp](newton_interp_1d_prb.cpp), a sample
    calling program.
-   [newton\_interp\_1d\_prb\_output.txt](newton_interp_1d_prb_output.txt),
    the output file.

The code generates some plots of the data and approximants.

-   [plot01.png](plot01.png), a plot of the polynomial interpolant for
    problem p01;
-   [plot02.png](plot02.png), a plot of the polynomial interpolant for
    problem p02;
-   [plot03.png](plot03.png), a plot of the polynomial interpolant for
    problem p03;
-   [plot04.png](plot04.png), a plot of the polynomial interpolant for
    problem p04;
-   [plot05.png](plot05.png), a plot of the polynomial interpolant for
    problem p05;
-   [plot06.png](plot06.png), a plot of the polynomial interpolant for
    problem p06;
-   [plot07.png](plot07.png), a plot of the polynomial interpolant for
    problem p07;
-   [plot08.png](plot08.png), a plot of the polynomial interpolant for
    problem p08;

### List of Routines: {#list-of-routines align="center"}

-   **NEWTON\_COEF\_1D** computes coefficients of a Newton 1D
    interpolant.
-   **NEWTON\_VALUE\_1D** evaluates a Newton 1D interpolant.
-   **R8VEC\_COPY\_NEW** copies an R8VEC.
-   **R8VEC\_LINSPACE\_NEW** creates a vector of linearly spaced values.
-   **R8VEC\_MAX** returns the value of the maximum element in a R8VEC.
-   **R8VEC\_MIN** returns the value of the minimum element in a R8VEC.
-   **R8VEC\_NORM\_AFFINE** returns the affine L2 norm of an R8VEC.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC2\_PRINT** prints an R8VEC2.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last modified on 10 July 2015.*
