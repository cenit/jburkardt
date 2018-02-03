CIRCLE\_ARC\_GRID\
Compute Grid Points Along a Circular Arc {#circle_arc_grid-compute-grid-points-along-a-circular-arc align="center"}
========================================

------------------------------------------------------------------------

**CIRCLE\_ARC\_GRID** is a C++ library which calculates a grid of points
along a circle or circular arc in 2D.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**CIRCLE\_ARC\_GRID** is available in [a C
version](../../c_src/circle_arc_grid/circle_arc_grid.md) and [a C++
version](../../master/circle_arc_grid/circle_arc_grid.md) and [a
FORTRAN77 version](../../f77_src/circle_arc_grid/circle_arc_grid.md)
and [a FORTRAN90
version](../../f_src/circle_arc_grid/circle_arc_grid.md) and [a MATLAB
version](../../m_src/circle_arc_grid/circle_arc_grid.md) and [a Python
version](../../py_src/circle_arc_grid/circle_arc_grid.md).

### Related Programs: {#related-programs align="center"}

[BALL\_GRID](../../master/ball_grid/ball_grid.md), a C++ library
which computes a grid of points over the interior of a ball in 3D.

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

-   [circle\_arc\_grid.cpp](circle_arc_grid.cpp), the source code.
-   [circle\_arc\_grid.hpp](circle_arc_grid.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [circle\_arc\_grid\_prb.cpp](circle_arc_grid_prb.cpp), a sample
    calling program.
-   [circle\_arc\_grid\_prb\_output.txt](circle_arc_grid_prb_output.txt),
    the output file.

**ARC** is a set of 10 equally spaced points from 0 to 90 degrees, on a
circle of radius 2 centered at (5,5).

-   [arc.txt](arc.txt), the data.
-   [arc.png](arc.png), an image of the points.

**PENTAGON** is a set of 6(!) equally spaced points from 0 to 360
degrees. This is the easiest way to get a pentagon, but you should
really edit the file and remove the last point, since it repeats the
first one. The alternative is to specify that the angles range from 0 to
288 degrees!

-   [pentagon.txt](pentagon.txt), the data
-   [pentagon.png](pentagon.png), an image of the points.

### List of Routines: {#list-of-routines align="center"}

-   **CIRCLE\_ARC\_GRID** computes grid points along a circular arc.
-   **R82VEC\_PRINT\_PART** prints "part" of an R82VEC.
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 13 November 2011.*
