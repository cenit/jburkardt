LINE\_INTEGRALS\
Integrals Along the Length of the Unit Line in 1D {#line_integrals-integrals-along-the-length-of-the-unit-line-in-1d align="center"}
=================================================

------------------------------------------------------------------------

**LINE\_INTEGRALS** is a C++ library which returns the exact value of
the integral of any monomial along the length of the unit monomial in
1D.

The length of the unit line in 1D is defined by

            0 <= x <= 1
          

The integrands are all of the form

            f(x) = x^e
          

where the exponent is a nonnegative integer.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**LINE\_INTEGRALS** is available in [a C
version](../../c_src/line_integrals/line_integrals.html) and [a C++
version](../../cpp_src/line_integrals/line_integrals.html) and [a
FORTRAN77 version](../../f77_src/line_integrals/line_integrals.html) and
[a FORTRAN90 version](../../f_src/line_integrals/line_integrals.html)
and [a MATLAB version](../../m_src/line_integrals/line_integrals.html)
and [a Python version](../../py_src/line_integrals/line_integrals.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BALL\_INTEGRALS](../../cpp_src/ball_integrals/ball_integrals.html), a
C++ library which returns the exact value of the integral of any
monomial over the interior of the unit ball in 3D.

[CIRCLE\_INTEGRALS](../../cpp_src/circle_integrals/circle_integrals.html),
a C++ library which returns the exact value of the integral of any
monomial over the circumference of the unit circle in 2D.

[CUBE\_INTEGRALS](../../cpp_src/cube_integrals/cube_integrals.html), a
C++ library which returns the exact value of the integral of any
monomial over the interior of the unit cube in 3D.

[DISK\_INTEGRALS](../../cpp_src/disk_integrals/disk_integrals.html), a
C++ library which returns the exact value of the integral of any
monomial over the interior of the unit disk in 2D.

[HYPERBALL\_INTEGRALS](../../cpp_src/hyperball_integrals/hyperball_integrals.html),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit hyperball in M dimensions.

[HYPERCUBE\_INTEGRALS](../../cpp_src/hypercube_integrals/hypercube_integrals.html),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit hypercube in M dimensions.

[HYPERSPHERE\_INTEGRALS](../../cpp_src/hypersphere_integrals/hypersphere_integrals.html),
a C++ library which returns the exact value of the integral of any
monomial over the surface of the unit hypersphere in M dimensions.

[LINE\_FEKETE\_RULE](../../cpp_src/line_fekete_rule/line_fekete_rule.html),
a C++ library which approximates the location of Fekete points in an
interval \[A,B\]. A family of sets of Fekete points, indexed by size N,
represents an excellent choice for defining a polynomial interpolant.

[LINE\_FELIPPA\_RULE](../../cpp_src/line_felippa_rule/line_felippa_rule.html),
a C++ library which returns the points and weights of a Felippa
quadrature rule over the interior of a line segment in 1D.

[LINE\_GRID](../../cpp_src/line_grid/line_grid.html), a C++ library
which computes a grid of points over the interior of a line segment in
1D.

[LINE\_MONTE\_CARLO](../../cpp_src/line_monte_carlo/line_monte_carlo.html),
a C++ library which uses the Monte Carlo method to estimate the integral
of a function over the length of the unit line in 1D.

[LINE\_NCC\_RULE](../../cpp_src/line_ncc_rule/line_ncc_rule.html), a C++
library which computes a Newton Cotes Closed (NCC) quadrature rule for
the line, that is, for an interval of the form \[A,B\], using equally
spaced points which include the endpoints.

[LINE\_NCO\_RULE](../../cpp_src/line_nco_rule/line_nco_rule.html), a C++
library which computes a Newton Cotes Open (NCO) quadrature rule, using
equally spaced points, over the interior of a line segment in 1D.

[POLYGON\_INTEGRALS](../../cpp_src/polygon_integrals/polygon_integrals.html),
a C++ library which returns the exact value of the integral of any
monomial over the interior of a polygon in 2D.

[PYRAMID\_INTEGRALS](../../cpp_src/pyramid_integrals/pyramid_integrals.html),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit pyramid in 3D.

[SIMPLEX\_INTEGRALS](../../cpp_src/simplex_integrals/simplex_integrals.html),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit simplex in M dimensions.

[SPHERE\_INTEGRALS](../../cpp_src/sphere_integrals/sphere_integrals.html),
a C++ library which returns the exact value of the integral of any
monomial over the surface of the unit sphere in 3D.

[SQUARE\_INTEGRALS](../../cpp_src/square_integrals/square_integrals.html),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit square in 2D.

[TETRAHEDRON\_INTEGRALS](../../cpp_src/tetrahedron_integrals/tetrahedron_integrals.html),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit tetrahedron in 3D.

[TRIANGLE\_INTEGRALS](../../cpp_src/triangle_integrals/triangle_integrals.html),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit triangle in 2D.

[WEDGE\_INTEGRALS](../../cpp_src/wedge_integrals/wedge_integrals.html),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit wedge in 3D.

### Source Code: {#source-code align="center"}

-   [line\_integrals.cpp](line_integrals.cpp), the source code.
-   [line\_integrals.hpp](line_integrals.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [line\_integrals\_prb.cpp](line_integrals_prb.cpp), a sample calling
    program.
-   [line\_integrals\_prb\_output.txt](line_integrals_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **LINE01\_LENGTH:** length of the unit line in 1D.
-   **LINE01\_MONOMIAL\_INTEGRAL:** monomial integral over the unit line
    in 1D.
-   **LINE01\_SAMPLE** samples the unit line in 1D.
-   **MONOMIAL\_VALUE\_1D** evaluates a monomial in 1D.
-   **R8VEC\_UNIFORM\_01** returns a unit pseudorandom R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 18 January 2014.*
