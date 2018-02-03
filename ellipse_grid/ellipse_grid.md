ELLIPSE\_GRID\
Grid Points Within an Ellipse {#ellipse_grid-grid-points-within-an-ellipse align="center"}
=============================

------------------------------------------------------------------------

**ELLIPSE\_GRID** is a C++ library which generates a grid of points over
the interior of an ellipse in 2D.

The library allows the user to define an ellipse by choosing its center
and the length of its major and minor axes. The user also choose N, the
number of subintervals into which the minor radius will be subdivided.
It then returns the gridpoints defined by that choice.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**ELLIPSE\_GRID** is available in [a C
version](../../c_src/ellipse_grid/ellipse_grid.md) and [a C++
version](../../master/ellipse_grid/ellipse_grid.md) and [a FORTRAN77
version](../../f77_src/ellipse_grid/ellipse_grid.md) and [a FORTRAN90
version](../../f_src/ellipse_grid/ellipse_grid.md) and [a MATLAB
version](../../m_src/ellipse_grid/ellipse_grid.md) and [a Python
version](../../py_src/ellipse_grid/ellipse_grid.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BALL\_GRID](../../master/ball_grid/ball_grid.md), a C++ library
which computes a grid of points over the interior of a ball in 3D.

[CIRCLE\_ARC\_GRID](../../master/circle_arc_grid/circle_arc_grid.md),
a C++ program which computes points equally spaced along a circular arc;

[CUBE\_GRID](../../master/cube_grid/cube_grid.md), a C++ library
which computes a grid of points over the interior of a cube in 3D.

[DISK\_GRID](../../master/disk_grid/disk_grid.md), a C++ library
which computes a grid of points over the interior of a disk in 2D.

[ELLIPSE\_MONTE\_CARLO](../../master/ellipse_monte_carlo/ellipse_monte_carlo.md)
a C++ library which uses the Monte Carlo method to estimate the value of
integrals within an ellipse.

[ELLIPSOID\_GRID](../../master/ellipsoid_grid/ellipsoid_grid.md), a
C++ library which computes a grid of points over the interior of an
ellipsoid in 3D.

[HYPERCUBE\_GRID](../../master/hypercube_grid/hypercube_grid.md), a
C++ library which computes a grid of points over the interior of a
hypercube in M dimensions.

[LINE\_GRID](../../master/line_grid/line_grid.md), a C++ library
which computes a grid of points over the interior of a line segment in
1D.

[POLYGON\_GRID](../../master/polygon_grid/polygon_grid.md), a C++
library which generates a grid of points over the interior of a polygon
in 2D.

[PYRAMID\_GRID](../../master/pyramid_grid/pyramid_grid.md), a C++
library which computes a grid of points over the interior of the unit
pyramid in 3D;

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

-   [ellipse\_grid.cpp](ellipse_grid.cpp), the source code.
-   [ellipse\_grid.hpp](ellipse_grid.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [ellipse\_grid\_prb.cpp](ellipse_grid_prb.cpp), a sample calling
    program.
-   [ellipse\_grid\_prb\_output.txt](ellipse_grid_prb_output.txt), the
    output file.
-   [ellipse\_grid\_test01.xy](ellipse_grid_test01.xy), the list of grid
    points.
-   [ellipse\_grid\_test01.png](ellipse_grid_test01.png), an image of
    the points.

### List of Routines: {#list-of-routines align="center"}

-   **ELLIPSE\_GRID** generates grid points inside an ellipse.
-   **ELLIPSE\_GRID\_COUNT** counts the grid points inside an ellipse.
-   **I4\_CEILING** rounds an R8 "up" (towards +oo) to the next I4.
-   **R82VEC\_PRINT\_PART** prints "part" of an R82VEC.
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 12 November 2011.*
