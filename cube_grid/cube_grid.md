CUBE\_GRID\
Grid of Points Inside a Cube in 3D {#cube_grid-grid-of-points-inside-a-cube-in-3d align="center"}
==================================

------------------------------------------------------------------------

**CUBE\_GRID** is a C++ library which generates a grid of points over
the interior of a cube in 3D.

The 3D cube is the set of points (X(1),X(2),X(3)) such that:

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

**CUBE\_GRID** is available in [a C
version](../../c_src/cube_grid/cube_grid.html) and [a C++
version](../../cpp_src/cube_grid/cube_grid.html) and [a FORTRAN77
version](../../f77_src/cube_grid/cube_grid.html) and [a FORTRAN90
version](../../f_src/cube_grid/cube_grid.html) and [a MATLAB
version](../../m_src/cube_grid/cube_grid.html) and [a Python
version](../../py_src/cube_grid/cube_grid.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BALL\_GRID](../../cpp_src/ball_grid/ball_grid.html), a C++ library
which computes a grid of points over the interior of a ball in 3D.

[CIRCLE\_ARC\_GRID](../../cpp_src/circle_arc_grid/circle_arc_grid.html),
a C++ program which computes a grid of points over the length of a
circular arc in 2D;

[DISK\_GRID](../../cpp_src/disk_grid/disk_grid.html), a C++ library
which computes a grid of points over the interior of a disk in 2D.

[ELLIPSE\_GRID](../../cpp_src/ellipse_grid/ellipse_grid.html), a C++
library which computes a grid of points over the interior of an ellipse
in 2D.

[ELLIPSOID\_GRID](../../cpp_src/ellipsoid_grid/ellipsoid_grid.html), a
C++ library which computes a grid of points over the interior of an
ellipsoid in 3D.

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
pyramid in 3D.

[SIMPLEX\_GRID](../../cpp_src/simplex_grid/simplex_grid.html), a C++
library which generates a grid of points over the interior of a simplex
in M dimensions.

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

-   [cube\_grid.cpp](cube_grid.cpp), the source code.
-   [cube\_grid.hpp](cube_grid.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [cube\_grid\_prb.cpp](cube_grid_prb.cpp), a sample calling program.
-   [cube\_grid\_prb\_output.txt](cube_grid_prb_output.txt), the output
    file.

### List of Routines: {#list-of-routines align="center"}

-   **CUBE\_GRID:** grid points over the interior of a cube in 3D.
-   **R8MAT\_TRANSPOSE\_PRINT** prints an R8MAT, transposed.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **R8VEC\_DIRECT\_PRODUCT** creates a direct product of R8VEC's.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 31 August 2014.*
