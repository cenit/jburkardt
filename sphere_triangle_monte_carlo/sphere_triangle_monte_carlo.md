SPHERE\_TRIANGLE\_MONTE\_CARLO\
Monte Carlo Estimates of Integrals over Spherical Triangles {#sphere_triangle_monte_carlo-monte-carlo-estimates-of-integrals-over-spherical-triangles align="center"}
===========================================================

------------------------------------------------------------------------

**SPHERE\_TRIANGLE\_MONTE\_CARLO** is a C++ library which applies the
Monte Carlo method to estimate the integral of a function F(X,Y,Z) over
a triangle on the surface of the unit sphere in 3D.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SPHERE\_TRIANGLE\_MONTE\_CARLO** is available in [a C
version](../../c_src/sphere_triangle_monte_carlo/sphere_triangle_monte_carlo.html)
and [a C++
version](../../cpp_src/sphere_triangle_monte_carlo/sphere_triangle_monte_carlo.html)
and [a FORTRAN77
version](../../f77_src/sphere_triangle_monte_carlo/sphere_triangle_monte_carlo.html)
and [a FORTRAN90
version](../../f_src/sphere_triangle_monte_carlo/sphere_triangle_monte_carlo.html)
and [a MATLAB
version](../../m_src/sphere_triangle_monte_carlo/sphere_triangle_monte_carlo.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BALL\_MONTE\_CARLO](../../cpp_src/ball_monte_carlo/ball_monte_carlo.html),
a C++ library which applies a Monte Carlo method to estimate integrals
of a function over the interior of the unit ball in 3D;

[CIRCLE\_MONTE\_CARLO](../../cpp_src/circle_monte_carlo/circle_monte_carlo.html),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function on the circumference of the unit circle in 2D;

[CUBE\_MONTE\_CARLO](../../cpp_src/cube_monte_carlo/cube_monte_carlo.html),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of the unit cube in 3D;

[DISK\_MONTE\_CARLO](../../cpp_src/disk_monte_carlo/disk_monte_carlo.html),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of the unit disk in 2D;

[DISK\_QUARTER\_MONTE\_CARLO](../../cpp_src/disk_quarter_monte_carlo/disk_quarter_monte_carlo.html),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of the unit quarter disk in 2D;

[ELLIPSE\_MONTE\_CARLO](../../cpp_src/ellipse_monte_carlo/ellipse_monte_carlo.html)
a C++ library which uses the Monte Carlo method to estimate the value of
integrals over the interior of an ellipse in 2D.

[ELLIPSOID\_MONTE\_CARLO](../../cpp_src/ellipsoid_monte_carlo/ellipsoid_monte_carlo.html)
a C++ library which uses the Monte Carlo method to estimate the value of
integrals over the interior of an ellipsoid in M dimensions.

[HYPERBALL\_MONTE\_CARLO](../../cpp_src/hyperball_monte_carlo/hyperball_monte_carlo.html),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of the unit hyperball in M
dimensions;

[HYPERBALL\_VOLUME\_MONTE\_CARLO](../../cpp_src/hyperball_volume_monte_carlo/hyperball_volume_monte_carlo.html),
a C program which applies a Monte Carlo method to estimate the volume of
the unit hyperball in M dimensions;

[HYPERCUBE\_MONTE\_CARLO](../../cpp_src/hypercube_monte_carlo/hypercube_monte_carlo.html),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of the unit hypercube in M
dimensions;

[HYPERSPHERE\_MONTE\_CARLO](../../cpp_src/hypersphere_monte_carlo/hypersphere_monte_carlo.html),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function on the surface of the unit sphere in M
dimensions;

[LINE\_MONTE\_CARLO](../../cpp_src/line_monte_carlo/line_monte_carlo.html),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the length of the unit line in 1D;

[POLYGON\_MONTE\_CARLO](../../cpp_src/polygon_monte_carlo/polygon_monte_carlo.html),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of a polygon in 2D.

[PYRAMID\_MONTE\_CARLO](../../cpp_src/pyramid_monte_carlo/pyramid_monte_carlo.html),
a C++ library which applies a Monte Carlo method to estimate integrals
of a function over the interior of the unit pyramid in 3D;

[SIMPLEX\_MONTE\_CARLO](../../cpp_src/simplex_monte_carlo/simplex_monte_carlo.html),
a C++ library which uses the Monte Carlo method to estimate integrals
over the interior of the unit simplex in M dimensions.

[SPHERE\_MONTE\_CARLO](../../cpp_src/sphere_monte_carlo/sphere_monte_carlo.html),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the surface of the sphere in 3D;

[SPHERE\_TRIANGLE\_QUAD](../../cpp_src/sphere_triangle_quad/sphere_triangle_quad.html),
a C++ library which uses quadrature to estimate the integral of a
function over a spherical triangle on the surface of the unit sphere in
3D.

[SQUARE\_MONTE\_CARLO](../../cpp_src/square_monte_carlo/square_monte_carlo.html),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of the unit square in 2D;

[TETRAHEDRON\_MONTE\_CARLO](../../cpp_src/tetrahedron_monte_carlo/tetrahedron_monte_carlo.html),
a C++ library which uses the Monte Carlo method to estimate integrals
over the interior of the unit tetrahedron in 3D.

[TRIANGLE\_MONTE\_CARLO](../../cpp_src/triangle_monte_carlo/triangle_monte_carlo.html),
a C++ library which uses the Monte Carlo method to estimate integrals
over the interior of a triangle in 2D.

[WEDGE\_MONTE\_CARLO](../../cpp_src/wedge_monte_carlo/wedge_monte_carlo.html),
a C++ library which uses the Monte Carlo method to estimate integrals
over the interior of the unit wedge in 3D.

### Reference: {#reference align="center"}

-   Jacob Goodman, Joseph ORourke, editors,\
    Handbook of Discrete and Computational Geometry,\
    Second Edition,\
    CRC/Chapman and Hall, 2004,\
    ISBN: 1-58488-301-4,\
    LC: QA167.H36.

### Source Code: {#source-code align="center"}

-   [sphere\_triangle\_monte\_carlo.cpp](sphere_triangle_monte_carlo.cpp),
    the source code.
-   [sphere\_triangle\_monte\_carlo.hpp](sphere_triangle_monte_carlo.hpp),
    the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [sphere\_triangle\_monte\_carlo\_prb.cpp](sphere_triangle_monte_carlo_prb.cpp),
    a sample calling program.
-   [sphere\_triangle\_monte\_carlo\_prb\_output.txt](sphere_triangle_monte_carlo_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **ARC\_COSINE** computes the arc cosine function, with argument
    truncation.
-   **MONOMIAL\_VALUE** evaluates a monomial.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **R8VEC\_NORM** returns the L2 norm of an R8VEC.
-   **R8VEC\_NORMALIZE** normalizes an R8VEC in the Euclidean norm.
-   **SPHERE01\_SAMPLE** picks random points on the unit sphere.
-   **SPHERE01\_TRIANGLE\_ANGLES\_TO\_AREA:** area of a triangle on the
    unit sphere.
-   **SPHERE01\_TRIANGLE\_SAMPLE:** sample spherical triangle on unit
    sphere.
-   **SPHERE01\_TRIANGLE\_SIDES\_TO\_ANGLES:** angles of triangle on
    unit sphere.
-   **SPHERE01\_TRIANGLE\_VERTICES\_TO\_AREA:** area of triangle on unit
    sphere.
-   **SPHERE01\_TRIANGLE\_VERTICES\_TO\_SIDES:** sides of triangle on
    unit sphere.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 22 April 2014.*
