LINE\_GRID\
Grid of Points Inside a Line Segment in 1D {#line_grid-grid-of-points-inside-a-line-segment-in-1d align="center"}
==========================================

------------------------------------------------------------------------

**LINE\_GRID** is a C++ library which generates a grid of points over
the interior of a line segment in 1D.

The 1D line segment is the set of points X such that:

             A <= X <= B
           

The parameters are:

-   N, the number of points;
-   A, B, the left and right endpoints;
-   C, one of 5 choices for centering the grid.

The centering options allow the user to control the centering of the
equally spaced points. This is easiest to illustrate if we assume A = 0
and B = 1. Then, using N = 4, the centering options will produce 4
equally spaced points as follows:

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

**LINE\_GRID** is available in [a C
version](../../c_src/line_grid/line_grid.md) and [a C++
version](../../master/line_grid/line_grid.md) and [a FORTRAN77
version](../../f77_src/line_grid/line_grid.md) and [a FORTRAN90
version](../../f_src/line_grid/line_grid.md) and [a MATLAB
version](../../m_src/line_grid/line_grid.md) and [a Python
version](../../py_src/line_grid/line_grid.md).

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
C++ library which computes a grid of points over the interior of an
ellipsoid in 3D.

[HYPERCUBE\_GRID](../../master/hypercube_grid/hypercube_grid.md), a
C++ library which computes a grid of points over the interior of a
hypercube in M dimensions.

[POLYGON\_GRID](../../master/polygon_grid/polygon_grid.md), a C++
library which generates a grid of points over the interior of a polygon
in 2D.

[PYRAMID\_GRID](../../master/pyramid_grid/pyramid_grid.md), a C++
library which computes a grid of points over the interior of the unit
pyramid in 3D.

[SIMPLEX\_GRID](../../master/simplex_grid/simplex_grid.md), a C++
library which generates a grid of points over the interior of a simplex
in M dimensions.

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

-   [line\_grid.cpp](line_grid.cpp), the source code.
-   [line\_grid.hpp](line_grid.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [line\_grid\_prb.cpp](line_grid_prb.cpp), a sample calling program.
-   [line\_grid\_prb\_output.txt](line_grid_prb_output.txt), the output
    file.

### List of Routines: {#list-of-routines align="center"}

-   **LINE\_GRID:** grid points over the interior of a line segment in
    1D.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 31 August 2014.*
