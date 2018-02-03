TRIANGLE\_GRID\
Triangular Grid of Points {#triangle_grid-triangular-grid-of-points align="center"}
=========================

------------------------------------------------------------------------

**TRIANGLE\_GRID** is a C++ library which generates a grid of points
over the interior of a triangle in 2D.

Starting with any 3 points A, B, and C that define a triangle, we can
divide each side of the triangle into N subintervals, and create a
triangular grid. This defines ((N+1)\*(N+2))/2 points that lie on the
intersections of grid lines. The arrangement is suggested by this
diagram:

                  X
                 9 X
                8 9 X
               7 8 9 X
              6 7 8 9 X
             5 6 7 8 9 X
            4 5 6 7 8 9 X
           3 4 5 6 7 8 9 X
          2 3 4 5 6 7 8 9 X
         1 2 3 4 5 6 7 8 9 X
        0 1 2 3 4 5 6 7 8 9 X
          

The library includes a routine which allows the user to pick an
arbitrary triangle and an arbitrary number of subdivisions. It then
returns the triangular gridpoints defined by that choice.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TRIANGLE\_GRID** is available in [a C
version](../../c_src/triangle_grid/triangle_grid.md) and [a C++
version](../../master/triangle_grid/triangle_grid.md) and [a
FORTRAN77 version](../../f77_src/triangle_grid/triangle_grid.md) and
[a FORTRAN90 version](../../f_src/triangle_grid/triangle_grid.md) and
[a MATLAB version](../../m_src/triangle_grid/triangle_grid.md) and [a
Python version](../../py_src/triangle_grid/triangle_grid.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BALL\_GRID](../../master/ball_grid/ball_grid.md), a C++ library
which computes a grid of points over the interior of a ball in 3D.

[CIRCLE\_ARC\_GRID](../../master/circle_arc_grid/circle_arc_grid.md),
a C++ program which computes points equally spaced along a circular arc;

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

[TRIANGLE\_INTERPOLATE](../../master/triangle_interpolate/triangle_interpolate.md),
a C++ library which shows how vertex data can be interpolated at any
point in the interior of a triangle.

[WEDGE\_GRID](../../master/wedge_grid/wedge_grid.md), a C++ library
which computes a grid of points over the interior of the unit wedge in
3D.

### Source Code: {#source-code align="center"}

-   [triangle\_grid.cpp](triangle_grid.cpp), the source code.
-   [triangle\_grid.hpp](triangle_grid.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [triangle\_grid\_prb.cpp](triangle_grid_prb.cpp), a sample calling
    program.
-   [triangle\_grid\_prb\_output.txt](triangle_grid_prb_output.txt), the
    output file.
-   [triangle\_grid\_test01.xy](triangle_grid_test01.xy), a grid of 66
    points, generated by subdividing by 10 each side of the (0,0),
    (1,0), (1/2,sqrt(3)/2) triangle.
-   [triangle\_grid\_test01.png](triangle_grid_test01.png), an image of
    the points.

### List of Routines: {#list-of-routines align="center"}

-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TRIANGLE\_GRID** computes points on a triangular grid.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 02 September 2010.*
