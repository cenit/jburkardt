CIRCLE\_MONTE\_CARLO\
Monte Carlo Estimate of Circle Circumference Integrals {#circle_monte_carlo-monte-carlo-estimate-of-circle-circumference-integrals align="center"}
======================================================

------------------------------------------------------------------------

**CIRCLE\_MONTE\_CARLO** is a C++ library which estimates the integral
of F(X,Y) along the circumference of the unit circle in 2D.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**CIRCLE\_MONTE\_CARLO** is available in [a C
version](../../c_src/circle_monte_carlo/circle_monte_carlo.md) and [a
C++ version](../../master/circle_monte_carlo/circle_monte_carlo.md)
and [a FORTRAN77
version](../../f77_src/circle_monte_carlo/circle_monte_carlo.md) and
[a FORTRAN90
version](../../f_src/circle_monte_carlo/circle_monte_carlo.md) and [a
MATLAB version](../../m_src/circle_monte_carlo/circle_monte_carlo.md)
and [a Python
version](../../py_src/circle_monte_carlo/circle_monte_carlo.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BALL\_MONTE\_CARLO](../../master/ball_monte_carlo/ball_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate integrals
of a function over the interior of the unit ball in 3D;

[CIRCLE\_INTEGRALS](../../master/circle_integrals/circle_integrals.md),
a C++ library which defines test functions for integration over the
circumference of the unit circle in 2D.

[CIRCLE\_RULE](../../master/circle_rule/circle_rule.md), a C++
library which computes quadrature rules for the unit circle in 2D, that
is, the circumference of the circle of radius 1 and center (0,0).

[CUBE\_MONTE\_CARLO](../../master/cube_monte_carlo/cube_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of the unit cube in 3D;

[DISK\_MONTE\_CARLO](../../master/disk_monte_carlo/disk_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of the unit disk in 2D;

[DISK\_QUARTER\_MONTE\_CARLO](../../master/disk_quarter_monte_carlo/disk_quarter_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of the unit quarter disk in 2D;

[ELLIPSE\_MONTE\_CARLO](../../master/ellipse_monte_carlo/ellipse_monte_carlo.md)
a C++ library which uses the Monte Carlo method to estimate the value of
integrals over the interior of an ellipse in 2D.

[ELLIPSOID\_MONTE\_CARLO](../../master/ellipsoid_monte_carlo/ellipsoid_monte_carlo.md)
a C++ library which uses the Monte Carlo method to estimate the value of
integrals over the interior of an ellipsoid in M dimensions.

[HYPERBALL\_MONTE\_CARLO](../../master/hyperball_monte_carlo/hyperball_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of the unit hyperball in M
dimensions;

[HYPERBALL\_VOLUME\_MONTE\_CARLO](../../master/hyperball_volume_monte_carlo/hyperball_volume_monte_carlo.md),
a C++ program which applies a Monte Carlo method to estimate the volume
of the unit hyperball in M dimensions;

[HYPERCUBE\_MONTE\_CARLO](../../master/hypercube_monte_carlo/hypercube_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of the unit hypercube in M
dimensions.

[HYPERSPHERE\_MONTE\_CARLO](../../master/hypersphere_monte_carlo/hypersphere_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function on the surface of the unit hypersphere in M
dimensions;

[LINE\_MONTE\_CARLO](../../master/line_monte_carlo/line_monte_carlo.md),
a C++ library which uses the Monte Carlo method to estimate integrals
over the length of the unit line in 1D.

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
a C++ library which applies a Monte Carlo method to estimate the
integral of a function on the surface of the unit sphere in 3D;

[SPHERE\_TRIANGLE\_MONTE\_CARLO](../../master/sphere_triangle_monte_carlo/sphere_triangle_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over a spherical triangle on the surface of the
unit sphere in 3D;

[SQUARE\_MONTE\_CARLO](../../master/square_monte_carlo/square_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of the unit square in 2D.

[TETRAHEDRON\_MONTE\_CARLO](../../master/tetrahedron_monte_carlo/tetrahedron_monte_carlo.md),
a C++ library which uses the Monte Carlo method to estimate integrals
over the unit tetrahedron.

[TRIANGLE\_MONTE\_CARLO](../../master/triangle_monte_carlo/triangle_monte_carlo.md),
a C++ library which uses the Monte Carlo method to estimate integrals
over the interior of a triangle in 2D.

[WEDGE\_MONTE\_CARLO](../../master/wedge_monte_carlo/wedge_monte_carlo.md),
a C++ library which uses the Monte Carlo method to estimate integrals
over the interior of the unit wedge in 3D.

### Reference: {#reference align="center"}

1.  Gerald Folland,\
    How to Integrate a Polynomial Over a Sphere,\
    American Mathematical Monthly,\
    Volume 108, Number 5, May 2001, pages 446-448.

### Source Code: {#source-code align="center"}

-   [circle\_monte\_carlo.cpp](circle_monte_carlo.cpp), the source code.
-   [circle\_monte\_carlo.hpp](circle_monte_carlo.hpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [circle\_monte\_carlo\_test.cpp](circle_monte_carlo_test.cpp), a
    sample calling program.
-   [circle\_monte\_carlo\_test.txt](circle_monte_carlo_test.txt), the
    output file.

### List of Routines: {#list-of-routines align="center"}

-   **CIRCLE01\_LENGTH** returns the length of the unit circle in 2D.
-   **CIRCLE01\_MONOMIAL\_INTEGRAL:** integrals on the length of the
    unit circle in 2D.
-   **CIRCLE01\_SAMPLE** samples points from the unit circle in 2D.
-   **MONOMIAL\_VALUE** evaluates a monomial.
-   **R8VEC\_UNIFORM\_01** returns a unit pseudorandom R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 11 January 2014.*
