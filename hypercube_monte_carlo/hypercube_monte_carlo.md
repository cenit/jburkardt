HYPERCUBE\_MONTE\_CARLO\
Monte Carlo Estimate of Integrals Over Unit Hypercube in M Dimensions {#hypercube_monte_carlo-monte-carlo-estimate-of-integrals-over-unit-hypercube-in-m-dimensions align="center"}
=====================================================================

------------------------------------------------------------------------

**HYPERCUBE\_MONTE\_CARLO** is a C++ library which estimates the
integral of a function over the interior of the unit hypercube in M
dimensions.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**HYPERCUBE\_MONTE\_CARLO** is available in [a C
version](../../c_src/hypercube_monte_carlo/hypercube_monte_carlo.md)
and [a C++
version](../../master/hypercube_monte_carlo/hypercube_monte_carlo.md)
and [a FORTRAN77
version](../../f77_src/hypercube_monte_carlo/hypercube_monte_carlo.md)
and [a FORTRAN90
version](../../f_src/hypercube_monte_carlo/hypercube_monte_carlo.md)
and [a MATLAB
version](../../m_src/hypercube_monte_carlo/hypercube_monte_carlo.md)
and [a Python
version](../../py_src/hypercube_monte_carlo/hypercube_monte_carlo.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BALL\_MONTE\_CARLO](../../master/ball_monte_carlo/ball_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate integrals
of a function over the interior of the unit ball in 3D;

[CIRCLE\_MONTE\_CARLO](../../master/circle_monte_carlo/circle_monte_carlo.md),
a C++ library which uses the Monte Carlo method to estimate integrals
over the circumference of the unit circle in 2D.

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
a FORTRAN90 program which applies a Monte Carlo method to estimate the
volume of the unit hyperball in M dimensions;

[HYPERCUBE\_GRID](../../master/hypercube_grid/hypercube_grid.md), a
C++ library which computes a grid of points over the interior of a
hypercube in M dimensions.

[HYPERCUBE\_INTEGRALS](../../master/hypercube_integrals/hypercube_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit hypercube in M dimensions.

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
over the interior of the unit tetrahedron in 3D.

[TRIANGLE\_MONTE\_CARLO](../../master/triangle_monte_carlo/triangle_monte_carlo.md),
a C++ library which uses the Monte Carlo method to estimate integrals
over the interior of a triangle in 2D.

[WEDGE\_MONTE\_CARLO](../../master/wedge_monte_carlo/wedge_monte_carlo.md),
a C++ library which uses the Monte Carlo method to estimate integrals
over the interior of the unit wedge in 3D.

### Source Code: {#source-code align="center"}

-   [hypercube\_monte\_carlo.cpp](hypercube_monte_carlo.cpp), the source
    code.
-   [hypercube\_monte\_carlo.hpp](hypercube_monte_carlo.hpp), the
    include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [hypercube\_monte\_carlo\_prb.cpp](hypercube_monte_carlo_prb.cpp), a
    sample calling program.
-   [hypercube\_monte\_carlo\_prb\_output.txt](hypercube_monte_carlo_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **HYPERCUBE01\_MONOMIAL\_INTEGRAL:** integral inside unit hypercube,
    M dimensions.
-   **HYPERCUBE01\_SAMPLE** samples interior of the unit hypercube in M
    dimensions.
-   **HYPERCUBE01\_VOLUME:** volume of the unit hypercube in M
    dimensions.
-   **MONOMIAL\_VALUE** evaluates a monomial.
-   **R8MAT\_UNIFORM\_01** fills an R8MAT with unit pseudorandom
    numbers.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 19 January 2014.*
