ELLIPSE\_MONTE\_CARLO\
Monte Carlo Estimate of Integrals in an Ellipse {#ellipse_monte_carlo-monte-carlo-estimate-of-integrals-in-an-ellipse align="center"}
===============================================

------------------------------------------------------------------------

**ELLIPSE\_MONTE\_CARLO** is a C++ library which uses the Monte Carlo
method to estimate the value of integrals over the interior of an
ellipse in 2D.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**ELLIPSE\_MONTE\_CARLO** is available in [a C
version](../../c_src/ellipse_monte_carlo/ellipse_monte_carlo.md) and
[a C++
version](../../master/ellipse_monte_carlo/ellipse_monte_carlo.md) and
[a FORTRAN77
version](../../f77_src/ellipse_monte_carlo/ellipse_monte_carlo.md) and
[a FORTRAN90
version](../../f_src/ellipse_monte_carlo/ellipse_monte_carlo.md) and
[a MATLAB
version](../../m_src/ellipse_monte_carlo/ellipse_monte_carlo.md) and
[a Python
version](../../py_src/ellipse_monte_carlo/ellipse_monte_carlo.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BALL\_MONTE\_CARLO](../../master/ball_monte_carlo/ball_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate integrals
of a function over the interior of the unit ball in 3D;

[CIRCLE\_MONTE\_CARLO](../../master/circle_monte_carlo/circle_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function on the circumference of the unit circle in 2D;

[CUBE\_MONTE\_CARLO](../../master/cube_monte_carlo/cube_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of the unit cube in 3D;

[DISK\_MONTE\_CARLO](../../master/disk_monte_carlo/disk_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of the unit disk in 2D;

[DISK\_QUARTER\_MONTE\_CARLO](../../master/disk_quarter_monte_carlo/disk_quarter_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of the unit quarter disk in 2D;

[ELLIPSE\_GRID](../../master/ellipse_grid/ellipse_grid.md), a C++
library which computes a grid of points over the interior of an ellipse
in 2D.

[ELLIPSOID\_MONTE\_CARLO](../../master/ellipsoid_monte_carlo/ellipsoid_monte_carlo.md)
a C++ library which uses the Monte Carlo method to estimate the value of
integrals over the interior of an ellipsoid in M dimensions.

[HYPERBALL\_MONTE\_CARLO](../../master/hyperball_monte_carlo/hyperball_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of the unit ball in M
dimensions;

[HYPERBALL\_VOLUME\_MONTE\_CARLO](../../master/hyperball_volume_monte_carlo/hyperball_volume_monte_carlo.md),
a C program which applies a Monte Carlo method to estimate the volume of
the unit hyperball in M dimensions;

[HYPERCUBE\_MONTE\_CARLO](../../master/hypercube_monte_carlo/hypercube_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of the unit hypercube in M
dimensions;

[HYPERSPHERE\_MONTE\_CARLO](../../master/hypersphere_monte_carlo/hypersphere_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function on the surface of the unit sphere in M
dimensions;

[LINE\_MONTE\_CARLO](../../master/line_monte_carlo/line_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the length of the unit line in 1D;

[POLYGON\_MONTE\_CARLO](../../master/polygon_monte_carlo/polygon_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of a polygon in 2D.

[PYRAMID\_MONTE\_CARLO](../../master/pyramid_monte_carlo/pyramid_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate integrals
of a function over the interior of the unit pyramid in 3D;

[SIMPLEX\_MONTE\_CARLO](../../master/simplex_monte_carlo/simplex_monte_carlo.md),
a C++ library which uses the Monte Carlo method to estimate integrals
over the interior of the unit simplex in M dimensions.

[SPHERE\_MONTE\_CARLO](../../master/sphere_monte_carlo/sphere_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate integrals
of a function over the surface of the unit sphere in 3D;

[SPHERE\_TRIANGLE\_MONTE\_CARLO](../../master/sphere_triangle_monte_carlo/sphere_triangle_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over a spherical triangle on the surface of the
unit sphere in 3D;

[SQUARE\_MONTE\_CARLO](../../master/square_monte_carlo/square_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of the unit square in 2D;

[TETRAHEDRON\_MONTE\_CARLO](../../master/tetrahedron_monte_carlo/tetrahedron_monte_carlo.md),
a C++ library which uses the Monte Carlo method to estimate integrals
over the interior of the unit tetrahedron in 3D.

[TRIANGLE\_MONTE\_CARLO](../../master/triangle_monte_carlo/triangle_monte_carlo.md),
a C++ library which uses the Monte Carlo method to estimate integrals
over the interior of a triangle in 2D.

[WEDGE\_MONTE\_CARLO](../../master/wedge_monte_carlo/wedge_monte_carlo.md),
a C++ library which uses the Monte Carlo method to estimate integrals
over the interior of the unit wedge in 3D.

### Source Code: {#source-code align="center"}

-   [ellipse\_monte\_carlo.cpp](ellipse_monte_carlo.cpp), the source
    code.
-   [ellipse\_monte\_carlo.hpp](ellipse_monte_carlo.hpp), the include
    file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [ellipse\_monte\_carlo\_prb.c](ellipse_monte_carlo_prb.c), a sample
    calling program.
-   [ellipse\_monte\_carlo\_prb\_output.txt](ellipse_monte_carlo_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **DAXPY** computes constant times a vector plus a vector.
-   **DDOT** forms the dot product of two vectors.
-   **ELLIPSE\_AREA1** returns the area of an ellipse defined by a
    matrix.
-   **ELLIPSE\_AREA2** returns the area of an ellipse defined by an
    equation.
-   **ELLIPSE\_SAMPLE** samples points in an ellipse.
-   **MONOMIAL\_VALUE** evaluates a monomial.
-   **R8\_UNIFORM\_01** returns a pseudorandom R8 scaled to \[0,1\].
-   **R8PO\_FA** factors a real symmetric positive definite matrix.
-   **R8PO\_SL** solves a linear system factored by R8PO\_FA.
-   **R8VEC\_NORMAL\_01** returns a unit pseudonormal R8VEC.
-   **R8VEC\_SUM** returns the sum of an R8VEC.
-   **R8VEC\_UNIFORM\_01\_NEW** returns a unit pseudorandom R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **UNIFORM\_IN\_SPHERE01\_MAP** maps uniform points into the unit
    sphere.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 20 April 2014.*
