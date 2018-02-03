TRIANGLE\_MONTE\_CARLO\
Monte Carlo Integral Estimates over the Unit Triangle in 2D {#triangle_monte_carlo-monte-carlo-integral-estimates-over-the-unit-triangle-in-2d align="center"}
===========================================================

------------------------------------------------------------------------

**TRIANGLE\_MONTE\_CARLO** is a C++ library which uses the Monte Carlo
method to estimate the integral of a function F(X,Y) over the interior
of the unit triangle in 2D.

The interior of the unit triangle in 2D is defined by the constraints:

            0 <= X
            0 <= Y
                 X + Y <= 1
          

The functions F(X,Y) are monomials, having the form

            F(X,Y) = X^E(1) * Y^E(2)
          

where the exponents are nonnegative integers.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TRIANGLE\_MONTE\_CARLO** is available in [a C
version](../../c_src/triangle_monte_carlo/triangle_monte_carlo.html) and
[a C++
version](../../cpp_src/triangle_monte_carlo/triangle_monte_carlo.html)
and [a FORTRAN77
version](../../f77_src/triangle_monte_carlo/triangle_monte_carlo.html)
and [a FORTRAN90
version](../../f_src/triangle_monte_carlo/triangle_monte_carlo.html) and
[a MATLAB
version](../../m_src/triangle_monte_carlo/triangle_monte_carlo.html).

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

[HYPERCUBE\_MONTE\_CARLO](../../cpp_src/hypercube_monte_carlo/hypercube_monte_carlo.html),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of the unit hypercube in M
dimensions.

[HYPERSPHERE\_MONTE\_CARLO](../../cpp_src/hypersphere_monte_carlo/hypersphere_monte_carlo.html),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function on the surface of the unit sphere in M
dimensions;

[LINE\_MONTE\_CARLO](../../cpp_src/line_monte_carlo/line_monte_carlo.html),
a C++ library which uses the Monte Carlo method to estimate integrals
over the length of the unit line in 1D.

[POLYGON\_MONTE\_CARLO](../../cpp_src/polygon_monte_carlo/polygon_monte_carlo.html),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of a polygon in 2D.

[PYRAMID\_MONTE\_CARLO](../../cpp_src/pyramid_monte_carlo/pyramid_monte_carlo.html),
a C++ library which applies a Monte Carlo method to estimate integrals
of a function over the interior of the unit pyramid in 3D;

[SIMPLEX\_GM\_RULE](../../cpp_src/simplex_gm_rule/simplex_gm_rule.html),
a C++ library which defines Grundmann-Moeller quadrature rules over the
interior of a triangle in 2D, a tetrahedron in 3D, or over the interior
of the simplex in M dimensions.

[SIMPLEX\_MONTE\_CARLO](../../cpp_src/simplex_monte_carlo/simplex_monte_carlo.html),
a C++ library which uses the Monte Carlo method to estimate integrals
over the interior of the unit simplex in M dimensions.

[SPHERE\_MONTE\_CARLO](../../cpp_src/sphere_monte_carlo/sphere_monte_carlo.html),
a C++ library which uses the Monte Carlo method to estimate integrals
over the surface of the unit sphere in 3D.

[SPHERE\_TRIANGLE\_MONTE\_CARLO](../../cpp_src/sphere_triangle_monte_carlo/sphere_triangle_monte_carlo.html),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over a spherical triangle on the surface of the
unit sphere in 3D;

[SQUARE\_MONTE\_CARLO](../../cpp_src/square_monte_carlo/square_monte_carlo.html),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of the unit square in 2D.

[TETRAHEDRON\_MONTE\_CARLO](../../cpp_src/tetrahedron_monte_carlo/tetrahedron_monte_carlo.html),
a C++ library which uses the Monte Carlo method to estimate integrals
over the interior of a tetrahedron in 3D.

[TRIANGLE\_ANALYZE](../../cpp_src/triangle_analyze/triangle_analyze.html),
a C++ program which reads a triangle defined in a file, and uses the
triangle\_properties() library to compute angles, area, centroid,
circumcircle, edge lengths, incircle, orientation, orthocenter, and
quality.

[TRIANGLE\_DUNAVANT\_RULE](../../cpp_src/triangle_dunavant_rule/triangle_dunavant_rule.html),
a C++ library which sets up a Dunavant quadrature rule over the interior
of a triangle in 2D.

[TRIANGLE\_FEKETE\_RULE](../../cpp_src/triangle_fekete_rule/triangle_fekete_rule.html),
a C++ library which defines Fekete rules for interpolation or quadrature
over the interior of a triangle in 2D.

[TRIANGLE\_FELIPPA\_RULE](../../cpp_src/triangle_felippa_rule/triangle_felippa_rule.html),
a C++ library which returns Felippa's quadratures rules for
approximating integrals over the interior of a triangle in 2D.

[TRIANGLE\_INTEGRALS](../../cpp_src/triangle_integrals/triangle_integrals.html),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit triangle in 2D.

[TRIANGLE\_LYNESS\_RULE](../../cpp_src/triangle_lyness_rule/triangle_lyness_rule.html),
a C++ library which returns Lyness-Jespersen quadrature rules over the
interior of a triangle in 2D.

[TRIANGLE\_SYMQ\_RULE](../../cpp_src/triangle_symq_rule/triangle_symq_rule.html),
a C++ library which returns efficient symmetric quadrature rules, with
exactness up to total degree 50, over the interior of an arbitrary
triangle in 2D, by Hong Xiao and Zydrunas Gimbutas.

[TRIANGLE\_WANDZURA\_RULE](../../cpp_src/triangle_wandzura_rule/triangle_wandzura_rule.html),
a C++ library which sets up a quadrature rule of exactness 5, 10, 15,
20, 25 or 30 over the interior of a triangle in 2D.

[WEDGE\_MONTE\_CARLO](../../cpp_src/wedge_monte_carlo/wedge_monte_carlo.html),
a C++ library which uses the Monte Carlo method to estimate integrals
over the interior of the unit wedge in 3D.

### Reference: {#reference align="center"}

1.  Claudio Rocchini, Paolo Cignoni,\
    Generating Random Points in a Tetrahedron,\
    Journal of Graphics Tools,\
    Volume 5, Number 4, 2000, pages 9-12.
2.  Reuven Rubinstein,\
    Monte Carlo Optimization, Simulation and Sensitivity of Queueing
    Networks,\
    Krieger, 1992,\
    ISBN: 0894647644,\
    LC: QA298.R79.
3.  Greg Turk,\
    Generating Random Points in a Triangle,\
    in Graphics Gems I,\
    edited by Andrew Glassner,\
    AP Professional, 1990,\
    ISBN: 0122861663,\
    LC: T385.G697

### Source Code: {#source-code align="center"}

-   [triangle\_monte\_carlo.cpp](triangle_monte_carlo.cpp), the source
    code.
-   [triangle\_monte\_carlo.hpp](triangle_monte_carlo.hpp), the include
    file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [triangle\_monte\_carlo\_prb.cpp](triangle_monte_carlo_prb.cpp), a
    sample calling program.
-   [triangle\_monte\_carlo\_prb\_output.txt](triangle_monte_carlo_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **MONOMIAL\_VALUE** evaluates a monomial.
-   **R8VEC\_SUM** returns the sum of an R8VEC.
-   **R8VEC\_UNIFORM\_01\_NEW** returns a unit pseudorandom R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TRIANGLE01\_AREA** returns the area of the unit triangle in 2D.
-   **TRIANGLE01\_MONOMIAL\_INTEGRAL:** monomial integrals in the unit
    triangle in 2D.
-   **TRIANGLE01\_SAMPLE** samples the interior of the unit triangle in
    2D.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 14 January 2014.*
