POLYGON\_GRID\
Grid Points in a Polygon {#polygon_grid-grid-points-in-a-polygon align="center"}
========================

------------------------------------------------------------------------

**POLYGON\_GRID** is a C++ library which generates a grid of points over
the interior of a polygon in 2D.

The program relies on a simple idea in which the "vertex centroid"
(average of the vertices) is computed, allowing the polygon to be
triangulated. Each triangle can then easily be gridded. The collection
of triangular grids joins up to form a grid over the polygon, although
the spacing of the the grid points will vary from triangle to triangle.

The program really only works properly for convex polygons. If the
polygon is not convex, then the vertex centroid need not lie inside the
polygon, consequently the grid points may also seem misaligned.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**POLYGON\_GRID** is available in [a C
version](../../c_src/polygon_grid/polygon_grid.md) and [a C++
version](../../master/polygon_grid/polygon_grid.md) and [a FORTRAN77
version](../../f77_src/polygon_grid/polygon_grid.md) and [a FORTRAN90
version](../../f_src/polygon_grid/polygon_grid.md) and [a MATLAB
version](../../m_src/polygon_grid/polygon_grid.md) and [a Python
version](../../py_src/polygon_grid/polygon_grid.md).

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

-   [polygon\_grid.cpp](polygon_grid.cpp), the source code.
-   [polygon\_grid.hpp](polygon_grid.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [polygon\_grid\_prb.cpp](polygon_grid_prb.cpp), a sample calling
    program.
-   [polygon\_grid\_prb\_output.txt](polygon_grid_prb_output.txt), the
    output file.

ELL is an L-shaped (non-convex!) polygon for which the program output
doesn't look too bad, although the grid is degenerate.

-   [ell\_commands.txt](ell_commands.txt), the gnuplot command file.
-   [ell\_grid.txt](ell_grid.txt), the grid point coordinates.
-   [ell\_vertex.txt](ell_vertex.txt) information about the polygon
    vertices and centroid that are used to draw boundary lines.
-   [ell.png](ell.png) a plot of the grid.
-   [ell.xy](ell.xy) the grid points.

QUAD is a quadrilateral polygon.

-   [quad\_commands.txt](quad_commands.txt), the gnuplot command file.
-   [quad\_grid.txt](quad_grid.txt), the grid point coordinates.
-   [quad\_vertex.txt](quad_vertex.txt) information about the polygon
    vertices and centroid that are used to draw boundary lines.
-   [quad.png](quad.png) a plot of the grid.
-   [quad.xy](quad.xy) the grid points.

TRIANGLE is a triangular polygon.

-   [triangle\_commands.txt](triangle_commands.txt), the gnuplot command
    file.
-   [triangle\_grid.txt](triangle_grid.txt), the grid point coordinates.
-   [triangle\_vertex.txt](triangle_vertex.txt) information about the
    polygon vertices and centroid that are used to draw boundary lines.
-   [triangle.png](triangle.png) a plot of the grid.
-   [triangle.xy](triangle.xy) the grid points.

### List of Routines: {#list-of-routines align="center"}

-   **POLYGON\_GRID\_COUNT** counts the grid points inside a polygon.
-   **POLYGON\_GRID\_DISPLAY** displays grid points inside a polygon.
-   **POLYGON\_GRID\_POINTS** computes points on a polygonal grid.
-   **R8MAT\_TRANSPOSE\_PRINT** prints an R8MAT, transposed.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 11 May 2015.*
