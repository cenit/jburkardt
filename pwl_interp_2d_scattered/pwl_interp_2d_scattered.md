PWL\_INTERP\_2D\_SCATTERED\
Piecewise Linear Interpolant to 2D Scattered Data {#pwl_interp_2d_scattered-piecewise-linear-interpolant-to-2d-scattered-data align="center"}
=================================================

------------------------------------------------------------------------

**PWL\_INTERP\_2D\_SCATTERED** is a C++ library which produces a
piecewise linear interpolant to 2D scattered data, that is, data that is
not guaranteed to lie on a regular grid.

This program computes a Delaunay triangulation of the data points, and
then constructs an interpolant triangle by triangle. Over a given
triangle, the interpolant is the linear function which matches the data
already given at the vertices of the triangle.

PWL\_INTERP\_2D requires the R8LIB library. The test code requires the
TEST\_INTERP\_2D library.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**PWL\_INTERP\_2D\_SCATTERED** is available in [a C
version](../../c_src/pwl_interp_2d_scattered/pwl_interp_2d_scattered.html)
and [a C++
version](../../cpp_src/pwl_interp_2d_scattered/pwl_interp_2d_scattered.html)
and [a FORTRAN77
version](../../f77_src/pwl_interp_2d_scattered/pwl_interp_2d_scattered.html)
and [a FORTRAN90
version](../../f_src/pwl_interp_2d_scattered/pwl_interp_2d_scattered.html)
and [a MATLAB
version](../../m_src/pwl_interp_2d_scattered/pwl_interp_2d_scattered.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[LAGRANGE\_INTERP\_2D](../../cpp_src/lagrange_interp_2d/lagrange_interp_2d.html),
a C++ library which defines and evaluates the Lagrange polynomial p(x,y)
which interpolates a set of data depending on a 2D argument that was
evaluated on a product grid, so that p(x(i),y(j)) = z(i,j).

[PWL\_INTERP\_2D](../../cpp_src/pwl_interp_2d/pwl_interp_2d.html), a C++
library which evaluates a piecewise linear interpolant to data defined
on a regular 2D grid.

[RBF\_INTERP\_2D](../../cpp_src/rbf_interp_2d/rbf_interp_2d.html), a C++
library which defines and evaluates radial basis function (RBF)
interpolants to scattered 2D data.

[SHEPARD\_INTERP\_2D](../../cpp_src/shepard_interp_2d/shepard_interp_2d.html),
a C++ library which defines and evaluates Shepard interpolants to
scattered 2D data, based on inverse distance weighting.

[TEST\_INTERP\_2D](../../cpp_src/test_interp_2d/test_interp_2d.html), a
C++ library which defines test problems for interpolation of regular or
scattered data z(x,y), depending on a 2D argument.

[TRIANGULATION](../../cpp_src/triangulation/triangulation.html), a C++
library which performs various operations on order 3 (linear) or order 6
(quadratic) triangulations.

[TRIANGULATION\_ORDER3\_CONTOUR](../../m_src/triangulation_order3_contour/triangulation_order3_contour.html),
a MATLAB program which makes contour plot of scattered data, or of data
defined on an order 3 triangulation.

[VANDERMONDE\_INTERP\_2D](../../cpp_src/vandermonde_interp_2d/vandermonde_interp_2d.html),
a C++ library which finds a polynomial interpolant to data z(x,y) of a
2D argument by setting up and solving a linear system for the polynomial
coefficients, involving the Vandermonde matrix.

### Reference: {#reference align="center"}

1.  William Press, Brian Flannery, Saul Teukolsky, William Vetterling,\
    Numerical Recipes in FORTRAN: The Art of Scientific Computing,\
    Third Edition,\
    Cambridge University Press, 2007,\
    ISBN13: 978-0-521-88068-8,\
    LC: QA297.N866.

### Source Code: {#source-code align="center"}

-   [pwl\_interp\_2d\_scattered.cpp](pwl_interp_2d_scattered.cpp), the
    source code.
-   [pwl\_interp\_2d\_scattered.hpp](pwl_interp_2d_scattered.hpp), the
    include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [pwl\_interp\_2d\_scattered\_prb.cpp](pwl_interp_2d_scattered_prb.cpp),
    a sample calling program.
-   [pwl\_interp\_2d\_scattered\_prb\_output.txt](pwl_interp_2d_scattered_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **DIAEDG** chooses a diagonal edge.
-   **I4\_SIGN** evaluates the sign of an I4.
-   **I4MAT\_TRANSPOSE\_PRINT** prints an I4MAT, transposed.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of the transpose of an
    I4MAT.
-   **I4VEC\_HEAP\_D** reorders an I4VEC into a descending heap.
-   **I4VEC\_MIN** computes the minimum element of an I4VEC.
-   **I4VEC\_SORT\_HEAP\_A** ascending sorts an I4VEC using heap sort.
-   **I4VEC\_SORTED\_UNIQUE** gets the unique elements in a sorted
    I4VEC.
-   **LRLINE** determines if a point is left of, right or, or on a
    directed line.
-   **PERM\_CHECK2** checks that a vector represents a permutation.
-   **PERM\_INVERSE** inverts a permutation "in place".
-   **PWL\_INTERP\_2D\_SCATTERED\_VALUE** evaluates a 2d interpolant of
    scattered data
-   **R8TRIS2** constructs a Delaunay triangulation of 2D vertices.
-   **SWAPEC** swaps diagonal edges until all triangles are Delaunay.
-   **TRIANGULATION\_ORDER3\_PRINT** prints information about a
    triangulation.
-   **TRIANGULATION\_SEARCH\_DELAUNAY** searches a Delaunay
    triangulation for a point.
-   **VBEDG** determines which boundary edges are visible to a point.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 24 October 2012.*
