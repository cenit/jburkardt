SHEPARD\_INTERP\_2D\
Shepard Interpolation of 2D Data {#shepard_interp_2d-shepard-interpolation-of-2d-data align="center"}
================================

------------------------------------------------------------------------

**SHEPARD\_INTERP\_2D** is a C++ library which defines and evaluates
Shepard interpolants to 2D data, based on inverse distance weighting.

SHEPARD\_INTERP\_2D needs the R8LIB library. The test also needs the
TEST\_INTERP\_2D library.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SHEPARD\_INTERP\_2D** is available in [a C
version](../../c_src/shepard_interp_2d/shepard_interp_2d.html) and [a
C++ version](../../cpp_src/shepard_interp_2d/shepard_interp_2d.html) and
[a FORTRAN77
version](../../f77_src/shepard_interp_2d/shepard_interp_2d.html) and [a
FORTRAN90 version](../../f_src/shepard_interp_2d/shepard_interp_2d.html)
and [a MATLAB
version](../../m_src/shepard_interp_2d/shepard_interp_2d.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[LAGRANGE\_INTERP\_2D](../../cpp_src/lagrange_interp_2d/lagrange_interp_2d.html),
a C++ library which defines and evaluates the Lagrange polynomial p(x,y)
which interpolates a set of data depending on a 2D argument that was
evaluated on a product grid, so that p(x(i),y(j)) = z(i,j).

[PADUA](../../cpp_src/padua/padua.html), a C++ library which returns the
points and weights for Padu sets, useful for interpolation in 2D.
GNUPLOT is used to plot the points.

[PWL\_INTERP\_2D](../../cpp_src/pwl_interp_2d/pwl_interp_2d.html), a C++
library which evaluates a piecewise linear interpolant to data defined
on a regular 2D grid.

[R8LIB](../../cpp_src/r8lib/r8lib.html), a C++ library which contains
many utility routines using double precision real (R8) arithmetic.

[RBF\_INTERP\_2D](../../cpp_src/rbf_interp_2d/rbf_interp_2d.html), a C++
library which defines and evaluates radial basis function (RBF)
interpolants to 2D data.

[SHEPARD\_INTERP\_1D](../../cpp_src/shepard_interp_1d/shepard_interp_1d.html),
a C++ library which defines and evaluates Shepard interpolants to 1D
data, based on inverse distance weighting.

[SHEPARD\_INTERP\_ND](../../cpp_src/shepard_interp_nd/shepard_interp_nd.html),
a C++ library which defines and evaluates Shepard interpolants to
multidimensional data, based on inverse distance weighting.

[TEST\_INTERP\_2D](../../cpp_src/test_interp_2d/test_interp_2d.html), a
C++ library which defines test problems for interpolation of data
z(x,y)), depending on a 2D argument.

[TOMS886](../../cpp_src/toms886/toms886.html), a C++ library which
defines the Padua points for interpolation in a 2D region, including the
rectangle, triangle, and ellipse, by Marco Caliari, Stefano de Marchi,
Marco Vianello. This is a C++ version of ACM TOMS algorithm 886.

[VANDERMONDE\_INTERP\_2D](../../cpp_src/vandermonde_interp_2d/vandermonde_interp_2d.html),
a C++ library which finds a polynomial interpolant to data z(x,y) of a
2D argument by setting up and solving a linear system for the polynomial
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

-   [shepard\_interp\_2d.cpp](shepard_interp_2d.cpp), the source code.
-   [shepard\_interp\_2d.hpp](shepard_interp_2d.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [shepard\_interp\_2d\_prb.cpp](shepard_interp_2d_prb.cpp), a sample
    calling program.
-   [shepard\_interp\_2d\_prb\_output.txt](shepard_interp_2d_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **SHEPARD\_INTERP\_2D** evaluates a 2D Shepard interpolant.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 02 October 2012.*
