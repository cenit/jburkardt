VANDERMONDE\_APPROX\_2D\
Data Approximation with Polynomials using the Vandermonde Matrix {#vandermonde_approx_2d-data-approximation-with-polynomials-using-the-vandermonde-matrix align="center"}
================================================================

------------------------------------------------------------------------

**VANDERMONDE\_APPROX\_2D** is a C++ library which finds P(X,Y), a
polynomial approximant to Z which depends on two independent variables X
and Y, by setting up and solving an overdetermined linear system
involving the Vandermonde matrix.

This software is primarily intended as an illustration of the problems
that can occur when the approximation problem is naively formulated
using the Vandermonde matrix. Unless the data points are well separated,
and the degree of the polynomial is low, the linear system will become
very difficult to store and solve accurately, because the monomials used
as basis vectors by the Vandermonde approach become indistinguishable.

VANDERMONDE\_APPROX\_2D needs access to the QR\_SOLVE and R8LIB
libraries. The test code also needs access to the TEST\_INTERP\_2D
library.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**VANDERMONDE\_APPROX\_2D** is available in [a C
version](../../c_src/vandermonde_approx_2d/vandermonde_approx_2d.md)
and [a C++
version](../../master/vandermonde_approx_2d/vandermonde_approx_2d.md)
and [a FORTRAN77
version](../../f77_src/vandermonde_approx_2d/vandermonde_approx_2d.md)
and [a FORTRAN90
version](../../f_src/vandermonde_approx_2d/vandermonde_approx_2d.md)
and [a MATLAB
version](../../m_src/vandermonde_approx_2d/vandermonde_approx_2d.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[QR\_SOLVE](../../master/qr_solve/qr_solve.md), a C++ library which
computes the least squares solution of a linear system A\*x=b.

[R8LIB](../../master/r8lib/r8lib.md), a C++ library which contains
many utility routines using double precision real (R8) arithmetic.

[TEST\_INTERP\_2D](../../master/test_interp_2d/test_interp_2d.md), a
C++ library which defines test problems for interpolation of data
(x,y,z(x,y)), with the data points (x,y) scattered irregularly.

[VANDERMONDE\_APPROX\_1D](../../master/vandermonde_approx_1d/vandermonde_approx_1d.md),
a C++ library which finds a polynomial approximant to data y(x) of a 1D
argument by setting up and solving an overdetermined linear system for
the polynomial coefficients, involving the Vandermonde matrix.

[VANDERMONDE\_INTERP\_2D](../../master/vandermonde_interp_2d/vandermonde_interp_2d.md),
a C++ library which finds a polynomial interpolant to data z(x,y) of a
2D argument by setting up and solving a linear system for the polynomial
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

-   [vandermonde\_approx\_2d.cpp](vandermonde_approx_2d.cpp), the source
    code.
-   [vandermonde\_approx\_2d.hpp](vandermonde_approx_2d.hpp), the
    include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [vandermonde\_approx\_2d\_prb.cpp](vandermonde_approx_2d_prb.cpp), a
    sample calling program.
-   [vandermonde\_approx\_2d\_prb\_output.txt](vandermonde_approx_2d_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **TRIANGLE\_NUM** returns the N-th triangular number.
-   **VANDERMONDE\_APPROX\_2D\_COEF** computes a 2D polynomial
    approximant.
-   **VANDERMONDE\_APPROX\_2D\_MATRIX** computes a Vandermonde 2D
    approximation matrix.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 12 October 2012.*
