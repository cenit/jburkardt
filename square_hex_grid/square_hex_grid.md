SQUARE\_HEX\_GRID\
Routines for a Hexagonal Grid {#square_hex_grid-routines-for-a-hexagonal-grid align="center"}
=============================

------------------------------------------------------------------------

**SQUARE\_HEX\_GRID** is a C++ library which computes a hexagonal grid
of points over the interior of a square in 2D.

For one set of routines, the hexagonal grid is defined in the unit
square \[0,1\] x \[0,1\]. For a matching set of routines, the hexagonal
grid is defined on a coordinate box \[A,B\] x \[C,D\].

All nodes of the grid lie on one of **LAYERS** horizontal lines. The
first of these lines is the X axis (for grids in the unit square) or the
line from (A,C) to (B,C), for grids in a coordinate box. Each successive
line is **HY** units higher.

On all the odd numbered lines, there are **NODES\_PER\_LAYER** points,
equally spaced from 0 to 1 or A to B, with a spacing of **HX**.

On the even numbered lines, there are **NODES\_PER\_LAYER**-1 points,
whose values are the midpoints of successive intervals on an odd
numbered line. (The grid is staggered).

In order to maintain the hexagonal structure, the following relationship
is required between **HX** and **HY**:

            HY = HX * sqrt ( 3 ) / 2.
          

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SQUARE\_HEX\_GRID** is available in [a C++
version](../../master/square_hex_grid/square_hex_grid.md) and [a
FORTRAN90 version](../../f_src/square_hex_grid/square_hex_grid.md) and
[a MATLAB version](../../m_src/square_hex_grid/square_hex_grid.md).

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

[TRIANGLE\_GRID](../../master/triangle_grid/triangle_grid.md), a C++
library which computes a grid of points over the interior of a triangle
in 2D.

[WEDGE\_GRID](../../master/wedge_grid/wedge_grid.md), a C++ library
which computes a grid of points over the interior of the unit wedge in
3D.

### Source Code: {#source-code align="center"}

-   [square\_hex\_grid.cpp](square_hex_grid.cpp), the source code.
-   [square\_hex\_grid.hpp](square_hex_grid.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

Note that many text and graphics files are created by the calling
program, but these are stored in the
[SQUARE\_HEX\_GRID](../../datasets/square_hex_grid/square_hex_grid.md)
datasets directory.

-   [square\_hex\_grid\_prb.cpp](square_hex_grid_prb.cpp), a sample
    calling program.
-   [square\_hex\_grid\_prb\_output.txt](square_hex_grid_prb_output.txt),
    the output from a run of the sample program.

### List of Routines: {#list-of-routines align="center"}

-   **BOX\_PRINT\_2D** prints information about a coordinate box in 2D.
-   **HEX\_GRID\_01\_APPROXIMATE\_H** seeks a unit square hex grid with
    spacing H.
-   **HEX\_GRID\_01\_APPROXIMATE\_N** seeks a unit square hex grid of
    about N nodes.
-   **HEX\_GRID\_01\_H** computes the unit square hex grid spacings.
-   **HEX\_GRID\_01\_LAYERS** computes the unit square hex grid column
    width.
-   **HEX\_GRID\_01\_N** computes the number of unit square hex grid
    points.
-   **HEX\_GRID\_01\_POINTS** returns unit square hex grid points.
-   **HEX\_GRID\_APPROXIMATE\_H** seeks a hex grid with spacing H.
-   **HEX\_GRID\_APPROXIMATE\_N** seeks a hex grid of about N nodes.
-   **HEX\_GRID\_H** computes the coordinate box hex grid spacings.
-   **HEX\_GRID\_LAYERS** computes the coordinate box hex grid column
    width.
-   **HEX\_GRID\_N** computes the number of coordinate box hex grid
    points.
-   **HEX\_GRID\_PLOT** creates GNUPLOT graphics files of a hex grid.
-   **HEX\_GRID\_POINTS** returns coordinate box hex grid points.
-   **HEX\_GRID\_WRITE** writes a hex grid dataset to a file.
-   **S\_BLANK\_DELETE** removes blanks from a string, left justifying
    the remainder.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 30 August 2014.*
