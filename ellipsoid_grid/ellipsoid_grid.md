ELLIPSOID\_GRID\
Grid Points Within an Ellipsoid {#ellipsoid_grid-grid-points-within-an-ellipsoid align="center"}
===============================

------------------------------------------------------------------------

**ELLIPSOID\_GRID** is a C++ library which generates a grid of points
over the interior of an ellipsoid in 3D.

The library allows the user to define an ellipsoid by choosing the 3D
coordinates of its center and the lengths of its three axes. The user
also choose N, the number of subintervals into which the shortest radius
will be subdivided. It then returns the gridpoints defined by that
choice.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**ELLIPSOID\_GRID** is available in [a C
version](../../c_src/ellipsoid_grid/ellipsoid_grid.html) and [a C++
version](../../cpp_src/ellipsoid_grid/ellipsoid_grid.html) and [a
FORTRAN77 version](../../f77_src/ellipsoid_grid/ellipsoid_grid.html) and
[a FORTRAN90 version](../../f_src/ellipsoid_grid/ellipsoid_grid.html)
and [a MATLAB version](../../m_src/ellipsoid_grid/ellipsoid_grid.html)
and [a Python version](../../py_src/ellipsoid_grid/ellipsoid_grid.html)

### Related Data and Programs: {#related-data-and-programs align="center"}

[BALL\_GRID](../../cpp_src/ball_grid/ball_grid.html), a C++ library
which computes a grid of points over the interior of a ball in 3D.

[CIRCLE\_ARC\_GRID](../../cpp_src/circle_arc_grid/circle_arc_grid.html),
a C++ program which computes points equally spaced along a circular arc;

[CUBE\_GRID](../../cpp_src/cube_grid/cube_grid.html), a C++ library
which computes a grid of points over the interior of a cube in 3D.

[DISK\_GRID](../../cpp_src/disk_grid/disk_grid.html), a C++ library
which computes a grid of points over the interior of a disk in 2D.

[ELLIPSE\_GRID](../../cpp_src/ellipse_grid/ellipse_grid.html), a C++
library which computes a grid of points over the interior of an ellipse
in 2D.

[ELLIPSOID\_MONTE\_CARLO](../../cpp_src/ellipsoid_monte_carlo/ellipsoid_monte_carlo.html)
a C++ library which uses the Monte Carlo method to estimate the value of
integrals over the interior of an ellipsoid in M dimensions.

[HYPERCUBE\_GRID](../../cpp_src/hypercube_grid/hypercube_grid.html), a
C++ library which computes a grid of points over the interior of a
hypercube in M dimensions.

[LINE\_GRID](../../cpp_src/line_grid/line_grid.html), a C++ library
which computes a grid of points over the interior of a line segment in
1D.

[POLYGON\_GRID](../../cpp_src/polygon_grid/polygon_grid.html), a C++
library which generates a grid of points over the interior of a polygon
in 2D.

[PYRAMID\_GRID](../../cpp_src/pyramid_grid/pyramid_grid.html), a C++
library which computes a grid of points over the interior of the unit
pyramid in 3D;

[SIMPLEX\_GRID](../../cpp_src/simplex_grid/simplex_grid.html), a C++
library which generates a regular grid of points over the interior of an
arbitrary simplex in M dimensions.

[SPHERE\_FIBONACCI\_GRID](../../cpp_src/sphere_fibonacci_grid/sphere_fibonacci_grid.html),
a C++ library which uses a Fibonacci spiral to create a grid of points
on the surface of the unit sphere in 3D.

[SPHERE\_GRID](../../cpp_src/sphere_grid/sphere_grid.html), a C++
library which provides a number of ways of generating grids of points,
or of points and lines, or of points and lines and faces, on the surface
of the unit sphere in 3D.

[SPHERE\_LLQ\_GRID](../../cpp_src/sphere_llq_grid/sphere_llq_grid.html),
a C++ library which uses longitudes and latitudes to create grids of
points, lines, and quadrilaterals on the surface of the unit sphere in
3D.

[SPHERE\_LLT\_GRID](../../cpp_src/sphere_llt_grid/sphere_llt_grid.html),
a C++ library which uses longitudes and latitudes to create grids of
points, lines, and triangles on the surface of the unit sphere in 3D.

[SQUARE\_GRID](../../cpp_src/square_grid/square_grid.html), a C++
library which computes a grid of points over the interior of a square in
2D.

[TETRAHEDRON\_GRID](../../cpp_src/tetrahedron_grid/tetrahedron_grid.html),
a C++ library which computes a grid of points over the interior of a
tetrahedron in 3D.

[TRIANGLE\_GRID](../../cpp_src/triangle_grid/triangle_grid.html), a C++
library which computes a grid of points over the interior of a triangle
in 2D.

[WEDGE\_GRID](../../cpp_src/wedge_grid/wedge_grid.html), a C++ library
which computes a grid of points over the interior of the unit wedge in
3D.

### Source Code: {#source-code align="center"}

-   [ellipsoid\_grid.cpp](ellipsoid_grid.cpp), the source code.
-   [ellipsoid\_grid.hpp](ellipsoid_grid.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [ellipsoid\_grid\_prb.cpp](ellipsoid_grid_prb.cpp), a sample calling
    program.
-   [ellipsoid\_grid\_prb\_output.txt](ellipsoid_grid_prb_output.txt),
    the output file.
-   [ellipsoid\_grid\_test01.xyz](ellipsoid_grid_test01.xyz), the list
    of grid points.
-   [ellipsoid\_grid\_test01.png](ellipsoid_grid_test01.png), an image
    of the points.

### List of Routines: {#list-of-routines align="center"}

-   **ELLIPSOID\_GRID** generates the grid points inside an ellipsoid.
-   **ELLIPSOID\_GRID\_COUNT** counts the grid points inside an
    ellipsoid.
-   **I4\_CEILING** rounds an R8 "up" (towards +oo) to the next I4.
-   **R83VEC\_PRINT\_PART** prints "part" of an R83VEC.
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 12 November 2011.*
