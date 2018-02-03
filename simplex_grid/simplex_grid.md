SIMPLEX\_GRID\
Regular Grid Within a Simplex {#simplex_grid-regular-grid-within-a-simplex align="center"}
=============================

------------------------------------------------------------------------

**SIMPLEX\_GRID** is a C++ library which generates a grid of points over
the interior of a simplex in M dimensions.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SIMPLEX\_GRID** is available in [a C
version](../../c_src/simplex_grid/simplex_grid.md) and [a C++
version](../../master/simplex_grid/simplex_grid.md) and [a FORTRAN77
version](../../f77_src/simplex_grid/simplex_grid.md) and [a FORTRAN90
version](../../f_src/simplex_grid/simplex_grid.md) and [a MATLAB
version](../../m_src/simplex_grid/simplex_grid.md) and [a Python
version](../../py_src/simplex_grid/simplex_grid.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[ASA299](../../master/asa299/asa299.md), a C++ library which computes
the lattice points in an M-dimensional simplex, by Chasalow and Brand;
this is a version of Applied Statistics Algorithm 299;

[BALL\_GRID](../../master/ball_grid/ball_grid.md), a C++ library
which computes a grid of points over the interior of a ball in 3D.

[CIRCLE\_ARC\_GRID](../../master/circle_arc_grid/circle_arc_grid.md),
a C++ program which computes points equally spaced along a circular arc
in 2D.

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

[FEM\_BASIS](../../master/fem_basis/fem_basis.md), a C++ library
which can define basis functions for the finite element method (FEM) for
any degree in an M-dimensional simplex (1D interval, 2D triangle, 3D
tetrahedron, and higher dimensional generalizations.)

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

[SIMPLEX\_COORDINATES](../../master/simplex_coordinates/simplex_coordinates.md),
a C++ library which computes the Cartesian coordinates of the vertices
of a regular simplex in M dimensions.

[SIMPLEX\_GM\_RULE](../../master/simplex_gm_rule/simplex_gm_rule.md),
a C++ library which defines Grundmann-Moeller quadrature rules over the
interior of a triangle in 2D, a tetrahedron in 3D, or over the interior
of the simplex in M dimensions.

[SIMPLEX\_INTEGRALS](../../master/simplex_integrals/simplex_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit simplex in M dimensions.

[SIMPLEX\_MONTE\_CARLO](../../master/simplex_monte_carlo/simplex_monte_carlo.md),
a C++ library which uses the Monte Carlo method to estimate integrals
over the interior of the unit simplex in M dimensions.

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

-   [simplex\_grid.cpp](simplex_grid.cpp), the source code.
-   [simplex\_grid.hpp](simplex_grid.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [simplex\_grid\_prb.cpp](simplex_grid_prb.cpp), a sample calling
    program.
-   [simplex\_grid\_prb\_output.txt](simplex_grid_prb_output.txt), the
    output file.

### List of Routines: {#list-of-routines align="center"}

-   **COMP\_NEXT\_GRLEX** returns the next composition in grlex order.
-   **COMP\_RANDOM** selects a random composition of the integer N into
    K parts.
-   **I4\_UNIFORM\_AB** returns a scaled pseudorandom I4 between A
    and B.
-   **I4MAT\_TRANSPOSE\_PRINT** prints an I4MAT, transposed.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of the transpose of an
    I4MAT.
-   **KSUB\_RANDOM** selects a random subset of size K from a set of
    size N.
-   **R8MAT\_TRANSPOSE\_PRINT** prints an R8MAT, transposed.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **SIMPLEX\_GRID\_INDEX\_ALL** returns all the simplex grid indices.
-   **SIMPLEX\_GRID\_INDEX\_NEXT** returns the next simplex grid index.
-   **SIMPLEX\_GRID\_INDEX\_SAMPLE** returns a random simplex grid
    index.
-   **SIMPLEX\_GRID\_INDEX\_TO\_POINT** returns points corresponding to
    simplex indices.
-   **SIMPLEX\_GRID\_SIZE** counts the grid points inside a simplex.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 31 July 2014.*
