HYPERCUBE\_GRID\
Grid of Points Inside a Hypercube in M Dimensions {#hypercube_grid-grid-of-points-inside-a-hypercube-in-m-dimensions align="center"}
=================================================

------------------------------------------------------------------------

**HYPERCUBE\_GRID** is a C++ library which generates a grid of points
over the interior of a hypercube in M dimensions.

The M-dimensional hypercube is the set of points (X(1),X(2),...,X(M))
such that:

             A(I) <= X(I) <= B(I)
           

For each dimension I, a set of parameters is input:

-   NS(I), the number of points along the I-th coordinate direction;
-   A(I), B(I), the left and right endpoints of the I-th coordinate.
-   C(I), one of 5 choices for centering the grid in the I-th
    coordinate.

The centering options allow the user to control the centering of the
equally spaced points. This is easiest to illustrate if we look at a 1
dimensional case and assume A = 0 and B = 1. Then, using NS = 4, the
centering options will produce 4 equally spaced points as follows:

-   1: 0, 1/3, 2/3, 1 (include endpoints)
-   2: 1/5, 2/5, 3/5, 4/5 (do not include endpoints)
-   3: 0, 1/4, 2/4, 3/4 (do not include right endpoint)
-   4: 1/4, 2/4, 3/4, 1 (do not include left endpoint)
-   5: 1/8, 3/8, 5/8, 7/8 (half spacing at the ends)

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**HYPERCUBE\_GRID** is available in [a C
version](../../c_src/hypercube_grid/hypercube_grid.md) and [a C++
version](../../master/hypercube_grid/hypercube_grid.md) and [a
FORTRAN77 version](../../f77_src/hypercube_grid/hypercube_grid.md) and
[a FORTRAN90 version](../../f_src/hypercube_grid/hypercube_grid.md)
and [a MATLAB version](../../m_src/hypercube_grid/hypercube_grid.md)
and [a Python version](../../py_src/hypercube_grid/hypercube_grid.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BALL\_GRID](../../master/ball_grid/ball_grid.md), a C++ library
which computes a grid of points over the interior of a ball in 3D.

[CIRCLE\_ARC\_GRID](../../master/circle_arc_grid/circle_arc_grid.md),
a C++ program which computes a grid of points over the length of a
circular arc in 2D;

[CUBE\_GRID](../../master/cube_grid/cube_grid.md), a C++ library
which computes a grid of points over the interior of a cube in 3D.

[DISK\_GRID](../../master/disk_grid/disk_grid.md), a C++ library
which computes a grid of points over the interior of a disk in 2D.

[ELLIPSE\_GRID](../../master/ellipse_grid/ellipse_grid.md), a C++
library which computes a grid of points over the interior of an ellipse
in 2D.

[ELLIPSOID\_GRID](../../master/ellipsoid_grid/ellipsoid_grid.md), a
C++ library which computes grid points over the interior of an ellipsoid
in 3D.

[LINE\_GRID](../../master/line_grid/line_grid.md), a C++ library
which computes a grid of points over the interior of a line segment in
1D.

[POLYGON\_GRID](../../master/polygon_grid/polygon_grid.md), a C++
library which generates a grid of points over the interior of a polygon
in 2D.

[PYRAMID\_GRID](../../master/pyramid_grid/pyramid_grid.md), a C++
library which computes a grid of points over the interior of the unit
pyramid in 3D.

[SIMPLEX\_GRID](../../master/simplex_grid/simplex_grid.md), a C++
library which generates a regular grid of points over the interior of an
arbitrary simplex in M dimensions.

[SPHERE\_FIBONACCI\_GRID](../../master/sphere_fibonacci_grid/sphere_fibonacci_grid.md),
a C++ library which uses a Fibonacci spiral to create a grid of points
on the surface of the unit sphere in 3D.

[SPHERE\_GRID](../../master/sphere_grid/sphere_grid.md), a C++
library which provides a number of ways of generating grids of points,
or of points and lines, or of points and lines and faces, on the surface
of the unit sphere in 3D.

[SPHERE\_LLQ\_GRID](../../master/sphere_llq_grid/sphere_llq_grid.md),
a C++ library which uses longitudes and latitudes to create grids of
points, lines, and quadrilaterals on the surface of the unit sphere in
3D.

[SPHERE\_LLT\_GRID](../../master/sphere_llt_grid/sphere_llt_grid.md),
a C++ library which uses longitudes and latitudes to create grids of
points, lines, and triangles on the surface of the unit sphere in 3D.

[SQUARE\_GRID](../../master/square_grid/square_grid.md), a C++
library which computes a grid of points over the interior of a square in
2D.

[TETRAHEDRON\_GRID](../../master/tetrahedron_grid/tetrahedron_grid.md),
a C++ library which computes a grid of points over the interior of a
tetrahedron in 3D.

[TRIANGLE\_GRID](../../master/triangle_grid/triangle_grid.md), a C++
library which computes a grid of points over the interior of a triangle
in 2D.

[WEDGE\_GRID](../../master/wedge_grid/wedge_grid.md), a C++ library
which computes a grid of points over the interior of the unit wedge in
3D.

### Source Code: {#source-code align="center"}

-   [hypercube\_grid.cpp](hypercube_grid.cpp), the source code.
-   [hypercube\_grid.hpp](hypercube_grid.hpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [hypercube\_grid\_prb.cpp](hypercube_grid_prb.cpp), a sample calling
    program.
-   [hypercube\_grid\_prb\_output.txt](hypercube_grid_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **HYPERCUBE\_GRID:** grid points over the interior of a hypercube in
    M dimensions.
-   **I4VEC\_PRODUCT** returns the product of the entries of an I4VEC.
-   **R8MAT\_TRANSPOSE\_PRINT** prints an R8MAT, transposed.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **R8VEC\_DIRECT\_PRODUCT** creates a direct product of R8VEC's.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 30 August 2014.*
