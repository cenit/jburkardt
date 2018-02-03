TETRAHEDRON\_INTEGRALS\
Integrals Inside the Unit Tetrahedron in 3D {#tetrahedron_integrals-integrals-inside-the-unit-tetrahedron-in-3d align="center"}
===========================================

------------------------------------------------------------------------

**TETRAHEDRON\_INTEGRALS** is a C++ library which returns the exact
value of the integral of any monomial over the interior of the unit
tetrahedron in 3D.

The interior of the unit tetrahedron in 3D is defined by

            0 <= x
            0 <= y
            0 <= z
                 x + y + z <= 1
          

The integrands are all of the form

            f(x,y,z) = x^e1 * y^e2 * z^e3
          

where the exponents are nonnegative integers.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TETRAHEDRON\_INTEGRALS** is available in [a C
version](../../c_src/tetrahedron_integrals/tetrahedron_integrals.md)
and [a C++
version](../../master/tetrahedron_integrals/tetrahedron_integrals.md)
and [a FORTRAN77
version](../../f77_src/tetrahedron_integrals/tetrahedron_integrals.md)
and [a FORTRAN90
version](../../f_src/tetrahedron_integrals/tetrahedron_integrals.md)
and [a MATLAB
version](../../m_src/tetrahedron_integrals/tetrahedron_integrals.md)
and [a Python
version](../../py_src/tetrahedron_integrals/tetrahedron_integrals.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BALL\_INTEGRALS](../../master/ball_integrals/ball_integrals.md), a
C++ library which returns the exact value of the integral of any
monomial over the interior of the unit ball in 3D.

[CIRCLE\_INTEGRALS](../../master/circle_integrals/circle_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the surface of the unit circle in 2D.

[CUBE\_INTEGRALS](../../master/cube_integrals/cube_integrals.md), a
C++ library which returns the exact value of the integral of any
monomial over the interior of the unit cube in 3D.

[DISK\_INTEGRALS](../../master/disk_integrals/disk_integrals.md), a
C++ library which returns the exact value of the integral of any
monomial over the interior of the unit disk in 2D.

[HYPERBALL\_INTEGRALS](../../master/hyperball_integrals/hyperball_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit hyperball in M dimensions.

[HYPERCUBE\_INTEGRALS](../../master/hypercube_integrals/hypercube_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit hypercube in M dimensions.

[HYPERSPHERE\_INTEGRALS](../../master/hypersphere_integrals/hypersphere_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the surface of the unit hypersphere in M dimensions.

[LINE\_INTEGRALS](../../master/line_integrals/line_integrals.md), a
C++ library which returns the exact value of the integral of any
monomial over the length of the unit line in 1D.

[POLYGON\_INTEGRALS](../../master/polygon_integrals/polygon_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the interior of a polygon in 2D.

[PYRAMID\_INTEGRALS](../../master/pyramid_integrals/pyramid_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit pyramid in 3D.

[SIMPLEX\_GM\_RULE](../../master/simplex_gm_rule/simplex_gm_rule.md),
a C++ library which defines Grundmann-Moeller quadrature rules over the
interior of a triangle in 2D, a tetrahedron in 3D, or over the interior
of the simplex in M dimensions.

[SIMPLEX\_INTEGRALS](../../master/simplex_integrals/simplex_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit simplex in M dimensions.

[SPHERE\_INTEGRALS](../../master/sphere_integrals/sphere_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the surface of the unit sphere in 3D.

[SQUARE\_INTEGRALS](../../master/square_integrals/square_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit square in 2D.

[TETRAHEDRON\_ARBQ\_RULE](../../master/tetrahedron_arbq_rule/tetrahedron_arbq_rule.md),
a C++ library which returns quadrature rules, with exactness up to total
degree 15, over the interior of a tetrahedron in 3D, by Hong Xiao and
Zydrunas Gimbutas.

[TETRAHEDRON\_EXACTNESS](../../master/tetrahedron_exactness/tetrahedron_exactness.md),
a C++ program which investigates the monomial exactness of a quadrature
rule over the interior of a tetrahedron in 3D.

[TETRAHEDRON\_FELIPPA\_RULE](../../master/tetrahedron_felippa_rule/tetrahedron_felippa_rule.md),
a C++ library which returns Felippa's quadratures rules for
approximating integrals over the interior of a tetrahedron in 3D.

[TETRAHEDRON\_KEAST\_RULE](../../master/tetrahedron_keast_rule/tetrahedron_keast_rule.md),
a C++ library which defines ten quadrature rules, with exactness degrees
0 through 8, over the interior of a tetrahedron in 3D.

[TETRAHEDRON\_MONTE\_CARLO](../../master/tetrahedron_monte_carlo/tetrahedron_monte_carlo.md),
a C++ library which uses the Monte Carlo method to estimate the integral
of a function over the interior of the unit tetrahedron in 3D.

[TETRAHEDRON\_NCC\_RULE](../../master/tetrahedron_ncc_rule/tetrahedron_ncc_rule.md),
a C++ library which defines Newton-Cotes Closed (NCC) quadrature rules
over the interior of a tetrahedron in 3D.

[TETRAHEDRON\_NCO\_RULE](../../master/tetrahedron_nco_rule/tetrahedron_nco_rule.md),
a C++ library which defines Newton-Cotes Open (NCO) quadrature rules
over the interior of a tetrahedron in 3D.

[TRIANGLE\_INTEGRALS](../../master/triangle_integrals/triangle_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit triangle in 2D.

[WEDGE\_INTEGRALS](../../master/wedge_integrals/wedge_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit wedge in 3D.

### Reference: {#reference align="center"}

-   Jean Lasserre, Konstantin Avrachenkov,\
    The multidimensional version of the integral from A to B of X to the
    P,\
    American Mathematics Monthly,\
    Volume 108, Number 2, 2001, pages 151-154.

### Source Code: {#source-code align="center"}

-   [tetrahedron\_integrals.cpp](tetrahedron_integrals.cpp), the source
    code.
-   [tetrahedron\_integrals.hpp](tetrahedron_integrals.hpp), the source
    code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [tetrahedron\_integrals\_prb.cpp](tetrahedron_integrals_prb.cpp), a
    sample calling program.
-   [tetrahedron\_integrals\_prb\_output.txt](tetrahedron_integrals_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **MONOMIAL\_VALUE** evaluates a monomial.
-   **R8VEC\_UNIFORM\_01** returns a unit pseudorandom R8VEC.
-   **TETRAHEDRON01\_MONOMIAL\_INTEGRAL:** monomial integral in unit
    tetrahedron in 3D.
-   **TETRAHEDRON01\_SAMPLE** samples points from the unit tetrahedron
    in 3D.
-   **TETRAHEDRON01\_VOLUME** computes the volume of the unit
    tetrahedron in 3D.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 15 January 2014.*
