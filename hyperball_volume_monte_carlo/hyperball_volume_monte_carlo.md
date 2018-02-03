HYPERBALL\_VOLUME\_MONTE\_CARLO\
M-dimensional Sphere Volume by Monte Carlo {#hyperball_volume_monte_carlo-m-dimensional-sphere-volume-by-monte-carlo align="center"}
==========================================

------------------------------------------------------------------------

**HYPERBALL\_VOLUME\_MONTE\_CARLO** is a C++ program which investigates
the behavior of a Monte Carlo procedure when it is applied to compute
the integral of a discontinuous function. In particular, our integration
region is the M-dimensional unit hypercube and our function f(x) is 1 if
the point x is inside the unit hyperball of radius 1, and 0 otherwise.

The program uses the Monte Carlo method to estimate the volume.
Estimates are made starting with 2\^0 (=1) points and doubling
repeatedly up to 2\^25 points.

Because the integrand is discontinuous, any quadrature rule based on the
idea of interpolation will probably be unable to do a good job. A family
of quadrature rules, which rely on increasing the order of interpolation
to improve accuracy, will probably get increasingly bad answers.

By contrast, a basic Monte Carlo rule, which assumes nothing about the
function, integrates this function just as well as it integrates most
any other square-integrable function. (That's both the strength and
weakness of the blunt instrument we call Monte Carlo integration.)

### Usage: {#usage align="center"}

> **hyperball\_volume\_monte\_carlo** *dim\_num* *seed*

where

-   *dim\_num* is the spatial dimension.
-   *seed* is an optional seed for the random number generator. If it is
    not specified on the command line, a default value is used.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**HYPERBALL\_VOLUME\_MONTE\_CARLO** is available in [a C
version](../../c_src/hyperball_volume_monte_carlo/hyperball_volume_monte_carlo.md)
and [a C++
version](../../master/hyperball_volume_monte_carlo/hyperball_volume_monte_carlo.md)
and [a FORTRAN77
version](../../f77_src/hyperball_volume_monte_carlo/hyperball_volume_monte_carlo.md)
and [a FORTRAN90
version](../../f_src/hyperball_volume_monte_carlo/hyperball_volume_monte_carlo.md)
and [a MATLAB
version](../../m_src/hyperball_volume_monte_carlo/hyperball_volume_monte_carlo.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BALL\_MONTE\_CARLO](../../master/ball_monte_carlo/ball_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate integrals
of a function over the interior of the unit ball in 3D;

[CIRCLE\_MONTE\_CARLO](../../master/circle_monte_carlo/circle_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function on the circumference of the unit circle in 2D.

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

[HYPERBALL\_INTEGRALS](../../master/hyperball_integrals/hyperball_integrals.md),
a C++ library which defines test functions for integration over the
interior of the unit hyperball in M dimensions.

[HYPERBALL\_MONTE\_CARLO](../../master/hyperball_monte_carlo/hyperball_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of the unit hyperball in M
dimensions;

[HYPERSPHERE\_MONTE\_CARLO](../../master/hypersphere_monte_carlo/hypersphere_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function on the surface of the unit sphere in M
dimensions;

[LINE\_MONTE\_CARLO](../../master/line_monte_carlo/line_monte_carlo.md),
a C++ library which uses the Monte Carlo method to estimate integrals
over the length of the unit line in 1D.

[PYRAMID\_MONTE\_CARLO](../../master/pyramid_monte_carlo/pyramid_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate integrals
of a function over the interior of the unit pyramid in 3D;

[SIMPLEX\_MONTE\_CARLO](../../master/simplex_monte_carlo/simplex_monte_carlo.md),
a C++ library which uses the Monte Carlo method to estimate integrals
over the interior of the unit simplex in M dimensions.

[SPHERE\_MONTE\_CARLO](../../master/sphere_monte_carlo/sphere_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the surface of the unit sphere in 3D;

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

1.  Philip Davis, Philip Rabinowitz,\
    Methods of Numerical Integration,\
    Second Edition,\
    Dover, 2007,\
    ISBN: 0486453391,\
    LC: QA299.3.D28.

### Source Code: {#source-code align="center"}

-   [hyperball\_volume\_monte\_carlo.cpp](hyperball_volume_monte_carlo.cpp),
    the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [hyperball\_volume\_monte\_carlo\_output.txt](hyperball_volume_monte_carlo_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for HYPERBALL\_VOLUME\_MONTE\_CARLO.
-   **HYPERBALL01\_INDICATOR** evaluates the unit hyperball indicator
    function.
-   **HYPERBALL01\_VOLUME** computes the volume of a unit hyperball.
-   **R8MAT\_UNIFORM\_01** returns a unit pseudorandom R8MAT.
-   **S\_TO\_I4** reads an I4 from a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 03 January 2014.*
