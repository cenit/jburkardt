WEDGE\_GRID\
Grid Points Within the Unit Wedge {#wedge_grid-grid-points-within-the-unit-wedge align="center"}
=================================

------------------------------------------------------------------------

**WEDGE\_GRID** is a C++ library which generates a grid of points over
the interior of the unit wedge in 3D.

The interior of the unit wedge in 3D is defined by the constraints:

            0 <= X
            0 <= Y
                 X + Y <= 1
           -1 <= Z <= +1
          

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**WEDGE\_GRID** is available in [a C
version](../../c_src/wedge_grid/wedge_grid.md) and [a C++
version](../../master/wedge_grid/wedge_grid.md) and [a FORTRAN77
version](../../f77_src/wedge_grid/wedge_grid.md) and [a FORTRAN90
version](../../f_src/wedge_grid/wedge_grid.md) and [a MATLAB
version](../../m_src/wedge_grid/wedge_grid.md) and [a Python
version](../../py_src/wedge_grid/wedge_grid.md)

### Related Data and Programs: {#related-data-and-programs align="center"}

[BALL\_GRID](../../master/ball_grid/ball_grid.md), a C++ library
which computes a grid of points over the interior of a ball in 3D.

[CIRCLE\_ARC\_GRID](../../master/circle_arc_grid/circle_arc_grid.md),
a C++ program which computes a grid of points along the length of a
circular arc in 2D.

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

### Source Code: {#source-code align="center"}

-   [wedge\_grid.cpp](wedge_grid.cpp), the source code.
-   [wedge\_grid.hpp](wedge_grid.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [wedge\_grid\_prb.cpp](wedge_grid_prb.cpp), a sample calling
    program.
-   [wedge\_grid\_prb\_output.txt](wedge_grid_prb_output.txt), the
    output file.

The test program creates some files for use by GNUPLOT.

-   [wedge\_commands.txt](wedge_commands.txt), commands for GNUPLOT.
-   [wedge\_vertices.txt](wedge_vertices.txt), the vertices of the
    wedge.
-   [wedge\_nodes.txt](wedge_nodes.txt), the grid points.
-   [wedge.png](wedge.png), a plot of the grid.

### List of Routines: {#list-of-routines align="center"}

-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **WEDGE\_GRID** computes grid points in the unit wedge in 3D.
-   **WEDGE\_GRID\_SIZE** counts the points in a grid of the unit wedge
    in 3D.
-   **WEDGE\_GRID\_PLOT** sets up a GNUPLOT plot of a unit wedge grid.
-   **WEDGE\_VERTICES** returns the vertices of the unit wege.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 22 August 2014.*
