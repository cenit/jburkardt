SQUARE\_INTEGRALS\
Integrals Over the Interior of the Unit Square in 2D {#square_integrals-integrals-over-the-interior-of-the-unit-square-in-2d align="center"}
====================================================

------------------------------------------------------------------------

**SQUARE\_INTEGRALS** is a C++ library which returns the exact value of
the integral of any monomial over the interior of the unit square in 2D.

The interior of the unit square in 2D is defined by

            0 <= X <= 1,
            0 <= Y <= 1.
          

The integrands are all of the form

            f(x,y) = x^e1 * y^e2
          

where the exponents are nonnegative integers.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SQUARE\_INTEGRALS** is available in [a C
version](../../c_src/square_integrals/square_integrals.html) and [a C++
version](../../cpp_src/square_integrals/square_integrals.html) and [a
FORTRAN77 version](../../f77_src/square_integrals/square_integrals.html)
and [a FORTRAN90
version](../../f_src/square_integrals/square_integrals.html) and [a
MATLAB version](../../m_src/square_integrals/square_integrals.html) and
[a Python version](../../py_src/square_integrals/square_integrals.html).

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

[LINE\_INTEGRALS](../../cpp_src/line_integrals/line_integrals.html), a
C++ library which returns the exact value of the integral of any
monomial over the length of the unit line in 1D.

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

[SQUARE\_ARBQ\_RULE](../../cpp_src/square_arbq_rule/square_arbq_rule.html),
a C++ library which returns quadrature rules, with exactness up to total
degree 20, over the interior of the symmetric square in 2D, by Hong Xiao
and Zydrunas Gimbutas.

[SQUARE\_FELIPPA\_RULE](../../cpp_src/square_felippa_rule/square_felippa_rule.html),
a C++ library which returns the points and weights of a Felippa
quadrature rule over the interior of a square in 2D.

[SQUARE\_GRID](../../cpp_src/square_grid/square_grid.html), a C++
library which computes a grid of points over the interior of a square in
2D.

[SQUARE\_HEX\_GRID](../../cpp_src/square_hex_grid/square_hex_grid.html),
a C++ library which computes a hexagonal grid of points over the
interior of a square in 2D.

[SQUARE\_MONTE\_CARLO](../../cpp_src/square_monte_carlo/square_monte_carlo.html),
a C++ library which uses the Monte Carlo method to estimate the integral
of a function over the interior of the unit square in 2D.

[SQUARE\_SYMQ\_RULE](../../cpp_src/square_symq_rule/square_symq_rule.html),
a C++ library which returns symmetric quadrature rules, with exactness
up to total degree 20, over the interior of the symmetric square in 2D,
by Hong Xiao and Zydrunas Gimbutas.

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

-   [square\_integrals.cpp](square_integrals.cpp), the source code.
-   [square\_integrals.hpp](square_integrals.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [square\_integrals\_prb.cpp](square_integrals_prb.cpp), a sample
    calling program.
-   [square\_integrals\_prb\_output.txt](square_integrals_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **MONOMIAL\_VALUE** evaluates a monomial.
-   **R8MAT\_UNIFORM\_01** fills an R8MAT with unit pseudorandom
    numbers.
-   **SQUARE01\_AREA:** area of the unit square in 2D.
-   **SQUARE01\_MONOMIAL\_INTEGRAL:** integral over interior of unit
    square in 2D.
-   **SQUARE01\_SAMPLE** samples the interior of the unit square in 2D.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 19 January 2014.*
