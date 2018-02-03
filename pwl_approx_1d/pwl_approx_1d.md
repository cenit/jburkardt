PWL\_APPROX\_1D\
Approximation in 1D using Piecewise Linear Functions {#pwl_approx_1d-approximation-in-1d-using-piecewise-linear-functions align="center"}
====================================================

------------------------------------------------------------------------

**PWL\_APROX\_1D** is a C++ library which defines and evaluates a
piecewise linear function, using NC "control points", which approximates
a set of ND data points (x(i),y(i)).

PWL\_APPROX\_1D needs access to the QR\_SOLVE and R8LIB libraries. The
test code also needs access to the TEST\_INTERP\_1D library.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**PWL\_APPROX\_1D** is available in [a C
version](../../c_src/pwl_approx_1d/pwl_approx_1d.html) and [a C++
version](../../cpp_src/pwl_approx_1d/pwl_approx_1d.html) and [a
FORTRAN77 version](../../f77_src/pwl_approx_1d/pwl_approx_1d.html) and
[a FORTRAN90 version](../../f_src/pwl_approx_1d/pwl_approx_1d.html) and
[a MATLAB version](../../m_src/pwl_approx_1d/pwl_approx_1d.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[LAGRANGE\_APPROX\_1D](../../cpp_src/lagrange_approx_1d/lagrange_approx_1d.html),
a C++ library which defines and evaluates the Lagrange polynomial p(x)
of degree m which approximates a set of nd data points (x(i),y(i)).

[PWL\_INTERP\_1D](../../cpp_src/pwl_interp_1d/pwl_interp_1d.html), a C++
library which interpolates a set of data using a piecewise linear
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

[TEST\_INTERP\_1D](../../cpp_src/test_interp_1d/test_interp_1d.html), a
C++ library which defines test problems for interpolation of data y(x),
depending on a 2D argument.

[VANDERMONDE\_APPROX\_1D](../../cpp_src/vandermonde_approx_1d/vandermonde_approx_1d.html),
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

-   [pwl\_approx\_1d.cpp](pwl_approx_1d.cpp), the source code.
-   [pwl\_approx\_1d.hpp](pwl_approx_1d.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [pwl\_approx\_1d\_prb.cpp](pwl_approx_1d_prb.cpp), a sample calling
    program.
-   [pwl\_approx\_1d\_prb\_output.txt](pwl_approx_1d_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **PWL\_APPROX\_1D** determines the control values for a PWL
    approximant.
-   **PWL\_APPROX\_1D\_MATRIX** returns the matrix for the PWL
    approximant controls.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 09 October 2012.*
