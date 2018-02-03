PYRAMID\_FELIPPA\_RULE\
Quadrature Rules for the Pyramid {#pyramid_felippa_rule-quadrature-rules-for-the-pyramid align="center"}
================================

------------------------------------------------------------------------

**PYRAMID\_FELIPPA\_RULE** is a C++ library which returns Felippa
quadrature rules over the interior of the unit pyramid in 3D.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**PYRAMID\_FELIPPA\_RULE** is available in [a C
version](../../c_src/pyramid_felippa_rule/pyramid_felippa_rule.html) and
[a C++
version](../../cpp_src/pyramid_felippa_rule/pyramid_felippa_rule.html)
and [a FORTRAN90
version](../../f_src/pyramid_felippa_rule/pyramid_felippa_rule.html) and
[a FORTRAN77
version](../../f77_src/pyramid_felippa_rule/pyramid_felippa_rule.html)
and [a MATLAB
version](../../m_src/pyramid_felippa_rule/pyramid_felippa_rule.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CUBE\_FELIPPA\_RULE](../../cpp_src/cube_felippa_rule/cube_felippa_rule.html),
a C++ library which returns the points and weights of a Felippa
quadrature rule over the interior of a cube in 3D.

[PYRAMID\_RULE](../../cpp_src/pyramid_rule/pyramid_rule.html), a C++
program which computes a quadrature rule over the interior of the unit
pyramid in 3D.

[SIMPLEX\_GM\_RULE](../../cpp_src/simplex_gm_rule/simplex_gm_rule.html),
a C++ library which defines Grundmann-Moeller quadrature rules over the
interior of a simplex in M dimensions.

[SQUARE\_FELIPPA\_RULE](../../cpp_src/square_felippa_rule/square_felippa_rule.html),
a C++ library which returns the points and weights of a Felippa
quadrature rule over the interior of a square in 2D.

[STROUD](../../cpp_src/stroud/stroud.html), a C++ library which defines
quadrature rules for a variety of unusual areas, surfaces and volumes in
2D, 3D and N-dimensions.

[TETRAHEDRON\_EXACTNESS](../../cpp_src/tetrahedron_exactness/tetrahedron_exactness.html),
a C++ program which investigates the monomial exactness of a quadrature
rule over the interior of a tetrahedron in 3D.

[TETRAHEDRON\_INTEGRALS](../../cpp_src/tetrahedron_integrals/tetrahedron_integrals.html),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit tetrahedron in 3D.

[TETRAHEDRON\_KEAST\_RULE](../../cpp_src/tetrahedron_keast_rule/tetrahedron_keast_rule.html),
a C++ library which defines ten quadrature rules, with exactness degrees
0 through 8, over the interior of a tetrahedron in 3D.

[TETRAHEDRON\_MONTE\_CARLO](../../cpp_src/tetrahedron_monte_carlo/tetrahedron_monte_carlo.html),
a C++ program which uses the Monte Carlo method to estimate integrals
over a tetrahedron.

[TETRAHEDRON\_NCC\_RULE](../../cpp_src/tetrahedron_ncc_rule/tetrahedron_ncc_rule.html),
a C++ library which defines Newton-Cotes Closed (NCC) quadrature rules
over the interior of a tetrahedron in 3D.

[TETRAHEDRON\_NCO\_RULE](../../cpp_src/tetrahedron_nco_rule/tetrahedron_nco_rule.html),
a C++ library which defines Newton-Cotes Open (NCO) quadrature rules
over the interior of a tetrahedron in 3D.

[TRIANGLE\_DUNAVANT\_RULE](../../cpp_src/triangle_dunavant_rule/triangle_dunavant_rule.html),
a C++ library which defines Dunavant rules for quadrature over the
interior of a triangle in 2D.

[TRIANGLE\_FEKETE\_RULE](../../cpp_src/triangle_fekete_rule/triangle_fekete_rule.html),
a C++ library which defines Fekete rules for interpolation or quadrature
over the interior of a triangle in 2D.

[TRIANGLE\_LYNESS\_RULE](../../cpp_src/triangle_lyness_rule/triangle_lyness_rule.html),
a C++ library which returns Lyness-Jespersen quadrature rules over the
interior of a triangle in 2D.

[TRIANGLE\_MONTE\_CARLO](../../cpp_src/triangle_monte_carlo/triangle_monte_carlo.html),
a C++ program which uses the Monte Carlo method to estimate integrals
over the interior of a triangle in 2D.

[TRIANGLE\_NCC\_RULE](../../cpp_src/triangle_ncc_rule/triangle_ncc_rule.html),
a C++ library which defines Newton-Cotes Closed (NCC) quadrature rules
over the interior of a triangle in 2D.

[TRIANGLE\_NCO\_RULE](../../cpp_src/triangle_nco_rule/triangle_nco_rule.html),
a C++ library which defines Newton-Cotes Open (NCO) quadrature rules
over the interior of a triangle in 2D.

[TRIANGLE\_WANDZURA\_RULE](../../cpp_src/triangle_wandzura_rule/triangle_wandzura_rule.html),
a C++ library which defines Wandzura rules for quadrature rules over the
interior of a triangle in 2D.

### Reference: {#reference align="center"}

1.  Carlos Felippa,\
    A compendium of FEM integration formulas for symbolic work,\
    Engineering Computation,\
    Volume 21, Number 8, 2004, pages 867-890.

### Source Code: {#source-code align="center"}

-   [pyramid\_felippa\_rule.cpp](pyramid_felippa_rule.cpp), the source
    code.
-   [pyramid\_felippa\_rule.hpp](pyramid_felippa_rule.hpp), the include
    file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [pyramid\_felippa\_rule\_prb.cpp](pyramid_felippa_rule_prb.cpp), a
    sample calling program.
-   [pyramid\_felippa\_rule\_prb\_output.txt](pyramid_felippa_rule_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **COMP\_NEXT** computes the compositions of the integer N into K
    parts.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **MONOMIAL\_VALUE** evaluates a monomial.
-   **PYRAMID\_\_UNIT\_MONOMIAL:** monomial integral in a unit pyramid.
-   **PYRAMID\_\_UNIT\_O01** returns a 1 point quadrature rule for the
    unit pyramid.
-   **PYRAMID\_\_UNIT\_O05** returns a 5 point quadrature rule for the
    unit pyramid.
-   **PYRAMID\_\_UNIT\_O06** returns a 6 point quadrature rule for the
    unit pyramid.
-   **PYRAMID\_\_UNIT\_O08** returns an 8 point quadrature rule for the
    unit pyramid.
-   **PYRAMID\_\_UNIT\_O08B** returns an 8 point quadrature rule for the
    unit pyramid.
-   **PYRAMID\_\_UNIT\_O09** returns a 9 point quadrature rule for the
    unit pyramid.
-   **PYRAMID\_\_UNIT\_O13** returns a 13 point quadrature rule for the
    unit pyramid.
-   **PYRAMID\_\_UNIT\_O18** returns an 18 point quadrature rule for the
    unit pyramid.
-   **PYRAMID\_\_UNIT\_O27** returns a 27 point quadrature rule for the
    unit pyramid.
-   **PYRAMID\_\_UNIT\_O48** returns a 48 point quadrature rule for the
    unit pyramid.
-   **PYRAMID\_\_UNIT\_VOLUME:** volume of a unit pyramid with square
    base.
-   **R8\_CHOOSE** computes the binomial coefficient C(N,K) as an R8.
-   **R8\_MOP** returns the I-th power of -1 as an R8.
-   **R8VEC\_COPY** copies an R8VEC.
-   **R8VEC\_DOT\_PRODUCT** computes the dot product of a pair of
    R8VEC's.
-   **SUBCOMP\_NEXT** computes the next subcomposition of N into K
    parts.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 28 August 2014.*
