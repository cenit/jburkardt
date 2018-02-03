LAGRANGE\_APPROX\_1D\
Approximation in 1D using Lagrange Polynomials {#lagrange_approx_1d-approximation-in-1d-using-lagrange-polynomials align="center"}
==============================================

------------------------------------------------------------------------

**LAGRANGE\_APROX\_1D** is a C++ library which defines and evaluates a
Lagrange polynomial p(x) of degree M which approximates a set of ND data
points (x(i),y(i)).

LAGRANGE\_APPROX\_1D needs access to the QR\_SOLVE and R8LIB libraries.
The test code also needs access to the TEST\_INTERP\_1D library.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**LAGRANGE\_APPROX\_1D** is available in [a C
version](../../c_src/lagrange_approx_1d/lagrange_approx_1d.md) and [a
C++ version](../../master/lagrange_approx_1d/lagrange_approx_1d.md)
and [a FORTRAN77
version](../../f77_src/lagrange_approx_1d/lagrange_approx_1d.md) and
[a FORTRAN90
version](../../f_src/lagrange_approx_1d/lagrange_approx_1d.md) and [a
MATLAB version](../../m_src/lagrange_approx_1d/lagrange_approx_1d.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[LAGRANGE\_INTERP\_1D](../../master/lagrange_interp_1d/lagrange_interp_1d.md),
a C++ library which defines and evaluates the Lagrange polynomial p(x)
which interpolates a set of data, so that p(x(i)) = y(i).

[PWL\_APPROX\_1D](../../master/pwl_approx_1d/pwl_approx_1d.md), a C++
library which approximates a set of data using a piecewise linear
function.

[QR\_SOLVE](../../master/qr_solve/qr_solve.md), a C++ library which
computes the least squares solution of a linear system A\*x=b.

[R8LIB](../../master/r8lib/r8lib.md), a C++ library which contains
many utility routines using double precision real (R8) arithmetic.

[SPLINE](../../master/spline/spline.md), a C++ library which
constructs and evaluates spline interpolants and approximants.

[TEST\_APPROX](../../master/test_approx/test_approx.md), a C++
library which defines test problems for approximation, provided as a set
of (x,y) data.

[TEST\_INTERP\_1D](../../master/test_interp_1d/test_interp_1d.md), a
C++ library which defines test problems for interpolation of data y(x),
depending on a 2D argument.

[VANDERMONDE\_APPROX\_1D](../../master/vandermonde_approx_1d/vandermonde_approx_1d.md),
a C++ library which finds a polynomial approximant to data of a 1D
argument by setting up and solving an overdetermined linear system for
the polynomial coefficients, involving the Vandermonde matrix.

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

-   [lagrange\_approx\_1d.cpp](lagrange_approx_1d.cpp), the source code.
-   [lagrange\_approx\_1d.hpp](lagrange_approx_1d.hpp), the include
    file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [lagrange\_approx\_1d\_prb.cpp](lagrange_approx_1d_prb.cpp), a
    sample calling program.
-   [lagrange\_approx\_1d\_prb\_output.txt](lagrange_approx_1d_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **LAGRANGE\_APPROX\_1D** evaluates the Lagrange approximant of
    degree M.
-   **LAGRANGE\_BASIS\_1D** evaluates the Lagrange basis polynomials.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 09 October 2012.*
