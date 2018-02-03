TOMS886\
Interpolation over the Rectangle, Ellipse, or Triangle {#toms886-interpolation-over-the-rectangle-ellipse-or-triangle align="center"}
======================================================

------------------------------------------------------------------------

**TOMS886** is a C++ library which implements an interpolation procedure
based on "Padua points", defined in the square \[-1,+1\]\^2, whose
interpolating power is especially good. It is possible to map these
points to the general rectangle, ellipse or triangle to do interpolation
on these regions as well.

The original, true, correct version of ACM TOMS Algorithm 886 is
available through ACM:
[http://www.acm.org/pubs/calgo](http://www.acm.org/pubs/calgo/) or
NETLIB: <http://www.netlib.org/toms/index.md>.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TOMS886** is available in [a C
version](../../c_src/toms886/toms886.md) and [a C++
version](../../master/toms886/toms886.md) and [a FORTRAN77
version](../../f77_src/toms886/toms886.md) and [a FORTRAN90
version](../../f_src/toms886/toms886.md) and [a MATLAB
version](../../m_src/toms886/toms886.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[LAGRANGE\_INTERP\_2D](../../master/lagrange_interp_2d/lagrange_interp_2d.md),
a C++ library which defines and evaluates the Lagrange polynomial p(x,y)
which interpolates a set of data depending on a 2D argument that was
evaluated on a product grid, so that p(x(i),y(j)) = z(i,j).

[PWL\_INTERP\_2D](../../master/pwl_interp_2d/pwl_interp_2d.md), a C++
library which evaluates a piecewise linear interpolant to data defined
on a regular 2D grid.

[PWL\_INTERP\_2D\_SCATTERED](../../master/pwl_interp_2d_scattered/pwl_interp_2d_scattered.md),
a C++ library which evaluates a piecewise linear interpolant to data
which is available at an irregularly arranged set of points.

[RBF\_INTERP\_2D](../../master/rbf_interp_2d/rbf_interp_2d.md), a C++
library which defines and evaluates radial basis function (RBF)
interpolants to 2D data.

[SHEPARD\_INTERP\_2D](../../master/shepard_interp_2d/shepard_interp_2d.md),
a C++ library which defines and evaluates Shepard interpolants to
scattered 2D data, based on inverse distance weighting.

[TEST\_INTERP\_2D](../../master/test_interp_2d/test_interp_2d.md), a
C++ library which defines test problems for interpolation of regular or
scattered data z(x,y), depending on a 2D argument.

[TRIANGLE\_INTERPOLATE](../../master/triangle_interpolate/triangle_interpolate.md),
a C++ library which shows how vertex data can be interpolated at any
point in the interior of a triangle.

[VANDERMONDE\_INTERP\_2D](../../master/vandermonde_interp_2d/vandermonde_interp_2d.md),
a C++ library which finds a polynomial interpolant to data z(x,y) of a
2D argument by setting up and solving a linear system for the polynomial
coefficients, involving the Vandermonde matrix.

### Author: {#author align="center"}

Marco Caliari, Stefano de Marchi, Marco Vianello.

### Reference: {#reference align="center"}

1.  Marco Caliari, Stefano de Marchi, Marco Vianello,\
    Bivariate interpolation on the square at new nodal sets,\
    Applied Mathematics and Computation,\
    Volume 165, Number 2, 2005, pages 261-274.
2.  Marco Caliari, Stefano de Marchi, Marco Vianello,\
    Algorithm 886: Padua2D: Lagrange Interpolation at Padua Points on
    Bivariate Domains,\
    ACM Transactions on Mathematical Software,\
    Volume 35, Number 3, October 2008, Article 21, 11 pages.
3.  Richard Franke,\
    Scattered Data Interpolation: Tests of Some Methods,\
    Mathematics of Computation,\
    Volume 38, Number 157, January 1982, pages 181-200.

### Source Code: {#source-code align="center"}

-   [toms886.cpp](toms886.cpp), the source code.
-   [toms886.hpp](toms886.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

ELLIPSE applies the procedure to an ellipse.

-   [ellipse.cpp](ellipse.cpp), a sample calling program.
-   [ellipse\_output.txt](ellipse_output.txt), the output file.

RECTANGLE applies the procedure to a rectangle.

-   [rectangle.cpp](rectangle.cpp), a sample calling program.
-   [rectangle\_output.txt](rectangle_output.txt), the output file.

TRIANGLE applies the procedure to a triangle.

-   [triangle.cpp](triangle.cpp), a sample calling program.
-   [triangle\_output.txt](triangle_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **CHEB** computes normalized Chebyshev polynomials.
-   **DGEMM** computes C = alpha \* A \* B and related operations.
-   **FRANKE** returns the value of the Franke function \#1.
-   **PADUA2** computes the Padua interpolation coefficient matrix.
-   **PD2VAL** evaluates the Padua2 interpolant.
-   **PDPTS** returns the points and weights for Padua interpolation.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8VEC\_DOT\_PRODUCT** finds the dot product of a pair of R8VEC's.
-   **TIMESTAMP** prints out the current YMDHMS date as a timestamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 16 February 2014.*
