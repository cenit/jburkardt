VANDERMONDE\_APPROX\_1D\
Data Approximation with Polynomials using the Vandermonde Matrix {#vandermonde_approx_1d-data-approximation-with-polynomials-using-the-vandermonde-matrix align="center"}
================================================================

------------------------------------------------------------------------

**VANDERMONDE\_APPROX\_1D** is a C++ library which finds a polynomial
approximant to 1D data by setting up and solving an overdetermined
linear system involving the Vandermonde matrix.

This software is primarily intended as an illustration of the problems
that can occur when the approximatino problem is naively formulated
using the Vandermonde matrix. Unless the data points are well separated,
and the degree of the polynomial is low, the linear system will become
very difficult to store and solve accurately, because the monomials used
as basis vectors by the Vandermonde approach become indistinguishable.

VANDERMONDE\_APPROX\_1D needs access to the QR\_SOLVE and R8LIB
libraries. The test code also needs access to the CONDITION and
TEST\_INTERP libraries.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**VANDERMONDE\_APPROX\_1D** is available in [a C
version](../../c_src/vandermonde_approx_1d/vandermonde_approx_1d.html)
and [a C++
version](../../cpp_src/vandermonde_approx_1d/vandermonde_approx_1d.html)
and [a FORTRAN77
version](../../f77_src/vandermonde_approx_1d/vandermonde_approx_1d.html)
and [a FORTRAN90
version](../../f_src/vandermonde_approx_1d/vandermonde_approx_1d.html)
and [a MATLAB
version](../../m_src/vandermonde_approx_1d/vandermonde_approx_1d.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BERNSTEIN](../../cpp_src/bernstein/bernstein.html), a C++ library which
evaluates the Bernstein polynomials, useful for uniform approximation of
functions;

[CHEBYSHEV](../../cpp_src/chebyshev/chebyshev.html), a C++ library which
computes the Chebyshev interpolant/approximant to a given function over
an interval.

[CONDITION](../../cpp_src/condition/condition.html), a C++ library which
implements methods of computing or estimating the condition number of a
matrix.

[LAGRANGE\_APPROX\_1D](../../cpp_src/lagrange_approx_1d/lagrange_approx_1d.html),
a C++ library which defines and evaluates the Lagrange polynomial p(x)
of degree m which approximates a set of nd data points (x(i),y(i)).

[PWL\_APPROX\_1D](../../cpp_src/pwl_approx_1d/pwl_approx_1d.html), a C++
library which approximates a set of data using a piecewise linear
function.

[QR\_SOLVE](../../cpp_src/qr_solve/qr_solve.html), a C++ library which
computes the least squares solution of a linear system A\*x=b.

[R8LIB](../../cpp_src/r8lib/r8lib.html), a C++ library which contains
many utility routines using double precision real (R8) arithmetic.

[SPLINE](../../cpp_src/spline/spline.html), a C++ library which
constructs and evaluates spline interpolants and approximants.

[TEST\_APPROX](../../cpp_src/test_approx/test_approx.html), a C++
library which defines test problems for approximation, provided as a set
of (x,y) data.

[VANDERMONDE\_APPROX\_2D](../../cpp_src/vandermonde_approx_2d/vandermonde_approx_2d.html),
a C++ library which finds a polynomial approximant p(x,y) to data z(x,y)
of a 2D argument by setting up and solving an overdetermined linear
system for the polynomial coefficients involving the Vandermonde matrix.

[VANDERMONDE\_INTERP\_1D](../../cpp_src/vandermonde_interp_1d/vandermonde_interp_1d.html),
a C++ library which finds a polynomial interpolant to a function of 1D
data by setting up and solving a linear system for the polynomial
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

-   [vandermonde\_approx\_1d.cpp](vandermonde_approx_1d.cpp), the source
    code.
-   [vandermonde\_approx\_1d.hpp](vandermonde_approx_1d.hpp), the
    include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [vandermonde\_approx\_1d\_prb.cpp](vandermonde_approx_1d_prb.cpp), a
    sample calling program.
-   [vandermonde\_approx\_1d\_prb\_output.txt](vandermonde_approx_1d_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **VANDERMONDE\_APPROX\_1D\_COEF** computes a 1D polynomial
    approximant.
-   **VANDERMONDE\_APPROX\_1D\_MATRIX** computes a Vandermonde 1D
    approximation matrix.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 10 October 2012.*
