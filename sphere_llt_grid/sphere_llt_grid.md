SPHERE\_LLT\_GRID\
Latitude/Longitude Triangle Grids on a Sphere {#sphere_llt_grid-latitudelongitude-triangle-grids-on-a-sphere align="center"}
=============================================

------------------------------------------------------------------------

**SPHERE\_LLT\_GRID** is a C++ library which constructs a grids of
triangles using latitude and longitude lines over the surface of a
sphere in 3D.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SPHERE\_LLT\_GRID** is available in [a C
version](../../c_src/sphere_llt_grid/sphere_llt_grid.md) and [a C++
version](../../master/sphere_llt_grid/sphere_llt_grid.md) and [a
FORTRAN90 version](../../f_src/sphere_llt_grid/sphere_llt_grid.md) and
[a MATLAB version](../../m_src/sphere_llt_grid/sphere_llt_grid.md) and
[a Python version](../../py_src/sphere_llt_grid/sphere_llt_grid.md).

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
library which generates a grid of points over the interior of a simplex
in M dimensions.

[SPHERE\_FIBONACCI\_GRID](../../master/sphere_fibonacci_grid/sphere_fibonacci_grid.md),
a C++ library which computes a grid of points using the Fibonacci spiral
over the surface of a sphere in 3D.

[SPHERE\_GRID](../../master/sphere_grid/sphere_grid.md), a C++
library which computes a grid of points over the surface of a sphere in
3D.

[SPHERE\_LLQ\_GRID](../../master/sphere_llq_grid/sphere_llq_grid.md),
a C++ library which computes a grid of quadrilaterals bounded by
latitude and longitude lines over the surface of a sphere in 3D.

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

-   [sphere\_llt\_grid.cpp](sphere_llt_grid.cpp), the source code.
-   [sphere\_llt\_grid.hpp](sphere_llt_grid.hpp), the include file

### Examples and Tests: {#examples-and-tests align="center"}

-   [sphere\_llt\_grid\_prb.cpp](sphere_llt_grid_prb.cpp), a sample
    calling program.
-   [sphere\_llt\_grid\_prb\_output.txt](sphere_llt_grid_prb_output.txt),
    the output file.
-   [sphere\_llt\_grid.png](sphere_llt_grid.png), an image of an LLT
    grid on the surface of a sphere in 3D.

### List of Routines: {#list-of-routines align="center"}

-   **I4MAT\_TRANSPOSE\_PRINT** prints an I4MAT, transposed.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of the transpose of an
    I4MAT.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **SPHERE\_LLT\_GRID\_DISPLAY** displays an LLT grid on a sphere.
-   **SPHERE\_LLT\_GRID\_LINES:** latitude/longitude triangle grid
    lines.
-   **SPHERE\_LLT\_GRID\_LINE\_COUNT** counts latitude/longitude
    triangle grid lines.
-   **SPHERE\_LLT\_GRID\_POINTS** produces points for a
    latitude/longitude triangle grid.
-   **SPHERE\_LLT\_GRID\_POINT\_COUNT** counts points for a
    latitude/longitude grid.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 21 May 2015.*
