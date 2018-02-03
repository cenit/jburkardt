SHEPARD\_INTERP\_1D\
Shepard Interpolation of 1D Data {#shepard_interp_1d-shepard-interpolation-of-1d-data align="center"}
================================

------------------------------------------------------------------------

**SHEPARD\_INTERP\_1D** is a C++ library which defines and evaluates
Shepard interpolants to 1D data, based on inverse distance weighting.

SHEPARD\_INTERP\_1D needs the R8LIB library. The test code also needs
the TEST\_INTERP library.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SHEPARD\_INTERP\_1D** is available in [a C
version](../../c_src/shepard_interp_1d/shepard_interp_1d.html) and [a
C++ version](../../cpp_src/shepard_interp_1d/shepard_interp_1d.html) and
[a FORTRAN77
version](../../f77_src/shepard_interp_1d/shepard_interp_1d.html) and [a
FORTRAN90 version](../../f_src/shepard_interp_1d/shepard_interp_1d.html)
and [a MATLAB
version](../../m_src/shepard_interp_1d/shepard_interp_1d.html) and [a
Python version](../../py_src/shepard_interp_1d/shepard_interp_1d.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BARYCENTRIC\_INTERP\_1D](../../cpp_src/barycentric_interp_1d/barycentric_interp_1d.html),
a C++ library which defines and evaluates the barycentric Lagrange
polynomial p(x) which interpolates a set of data, so that p(x(i)) =
y(i). The barycentric approach means that very high degree polynomials
can safely be used.

[CHEBYSHEV\_INTERP\_1D](../../cpp_src/chebyshev_interp_1d/chebyshev_interp_1d.html),
a C++ library which determines the combination of Chebyshev polynomials
which interpolates a set of data, so that p(x(i)) = y(i).

[DIVDIF](../../cpp_src/divdif/divdif.html), a C++ library which uses
divided differences to compute the polynomial interpolant to a given set
of data.

[HERMITE](../../cpp_src/hermite/hermite.html), a C++ library which
computes the Hermite interpolant, a polynomial that matches function
values and derivatives.

[LAGRANGE\_INTERP\_1D](../../cpp_src/lagrange_interp_1d/lagrange_interp_1d.html),
a C++ library which defines and evaluates the Lagrange polynomial p(x)
which interpolates a set of data, so that p(x(i)) = y(i).

[NEAREST\_INTERP\_1D](../../cpp_src/nearest_interp_1d/nearest_interp_1d.html),
a C++ library which interpolates a set of data using a piecewise
constant interpolant defined by the nearest neighbor criterion.

[NEWTON\_INTERP\_1D](../../cpp_src/newton_interp_1d/newton_interp_1d.html),
a C++ library which finds a polynomial interpolant to data using Newton
divided differences.

[PWL\_INTERP\_1D](../../cpp_src/pwl_interp_1d/pwl_interp_1d.html), a C++
library which interpolates a set of data using a piecewise linear
interpolant.

[R8LIB](../../cpp_src/r8lib/r8lib.html), a C++ library which contains
many utility routines using double precision real (R8) arithmetic.

[RBF\_INTERP\_1D](../../cpp_src/rbf_interp_1d/rbf_interp_1d.html), a C++
library which defines and evaluates radial basis function (RBF)
interpolants to 1D data.

[SHEPARD\_INTERP\_2D](../../cpp_src/shepard_interp_2d/shepard_interp_2d.html),
a C++ library which defines and evaluates Shepard interpolants to 2D
data, based on inverse distance weighting.

[SHEPARD\_INTERP\_ND](../../f_src/shepard_interp_nd/shepard_interp_nd.html),
a FORTRAN90 library which defines and evaluates Shepard interpolants to
multidimensional data, based on inverse distance weighting.

[TEST\_INTERP](../../cpp_src/test_interp/test_interp.html), a C++
library which defines a number of test problems for interpolation,
provided as a set of (x,y) data.

[TEST\_INTERP\_1D](../../cpp_src/test_interp_1d/test_interp_1d.html), a
C++ library which defines test problems for interpolation of data y(x),
depending on a 2D argument.

[VANDERMONDE\_INTERP\_1D](../../c_src/vandermonde_interp_1d/vandermonde_interp_1d.html),
a C library which finds a polynomial interpolant to data y(x) of a 1D
argument, by setting up and solving a linear system for the polynomial
coefficients, involving the Vandermonde matrix.

### Reference: {#reference align="center"}

1.  Richard Franke,\
    Scattered Data Interpolation: Tests of Some Methods,\
    Mathematics of Computation,\
    Volume 38, Number 157, January 1982, pages 181-200.
2.  Donald Shepard,\
    A two-dimensional interpolation function for irregularly spaced
    data,\
    ACM '68: Proceedings of the 1968 23rd ACM National Conference,\
    ACM, pages 517-524, 1969.

### Source Code: {#source-code align="center"}

-   [shepard\_interp\_1d.cpp](shepard_interp_1d.cpp), the source code.
-   [shepard\_interp\_1d.hpp](shepard_interp_1d.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [shepard\_interp\_1d\_prb.cpp](shepard_interp_1d_prb.cpp), a sample
    calling program.
-   [shepard\_interp\_1d\_prb\_output.txt](shepard_interp_1d_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **SHEPARD\_BASIS\_1D** evaluates a 1D Shepard basis function.
-   **SHEPARD\_INTERP\_1D** evaluates a 1D Shepard interpolant.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 15 October 2012.*
