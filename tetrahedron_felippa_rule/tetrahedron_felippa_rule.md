TETRAHEDRON\_FELIPPA\_RULE\
Quadrature Rules for a Tetrahedron {#tetrahedron_felippa_rule-quadrature-rules-for-a-tetrahedron align="center"}
==================================

------------------------------------------------------------------------

**TETRAHEDRON\_FELIPPA\_RULE** is a C++ library which generates Felippa
quadrature rules over the interior of a tetrahedron in 3D.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TETRAHEDRON\_FELIPPA\_RULE** is available in [a C
version](../../c_src/tetrahedron_felippa_rule/tetrahedron_felippa_rule.html)
and [a C++
version](../../cpp_src/tetrahedron_felippa_rule/tetrahedron_felippa_rule.html)
and [a FORTRAN90
version](../../f_src/tetrahedron_felippa_rule/tetrahedron_felippa_rule.html)
and [a FORTRAN77
version](../../f77_src/tetrahedron_felippa_rule/tetrahedron_felippa_rule.html)
and [a MATLAB
version](../../m_src/tetrahedron_felippa_rule/tetrahedron_felippa_rule.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CUBE\_FELIPPA\_RULE](../../cpp_src/cube_felippa_rule/cube_felippa_rule.html),
a C++ library which returns the points and weights of a Felippa
quadrature rule over the interior of a cube in 3D.

[DISK\_RULE](../../cpp_src/disk_rule/disk_rule.html), a C++ library
which computes quadrature rules over the interior of a disk in 2D.

[PYRAMID\_FELIPPA\_RULE](../../cpp_src/pyramid_felippa_rule/pyramid_felippa_rule.html),
a C++ library which returns Felippa's quadratures rules for
approximating integrals over the interior of a pyramid in 3D.

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

[TETRAHEDRON\_KEAST\_RULE](../../cpp_src/tetrahedron_keast_rule/tetrahedron_keast_rule.html),
a C++ library which defines ten quadrature rules, with exactness degrees
0 through 8, over the interior of a tetrahedron in 3D.

[TETRAHEDRON\_MONTE\_CARLO](../../cpp_src/tetrahedron_monte_carlo/tetrahedron_monte_carlo.html),
a C++ program which uses the Monte Carlo method to estimate integrals
over the interior of a tetrahedron in 3D.

[TETRAHEDRON\_NCC\_RULE](../../cpp_src/tetrahedron_ncc_rule/tetrahedron_ncc_rule.html),
a C++ library which defines Newton-Cotes closed quadrature rules over
the interior of a tetrahedron in 3D.

[TETRAHEDRON\_NCO\_RULE](../../cpp_src/tetrahedron_nco_rule/tetrahedron_nco_rule.html),
a C++ library which defines Newton-Cotes open quadrature rules over the
interior of a tetrahedron in 3D.

[TRIANGLE\_DUNAVANT\_RULE](../../cpp_src/triangle_dunavant_rule/triangle_dunavant_rule.html),
a C++ library which defines Dunavant rules for quadrature over the
interior of a triangle in 2D.

[TRIANGLE\_FEKETE\_RULE](../../cpp_src/triangle_fekete_rule/triangle_fekete_rule.html),
a C++ library which defines Fekete rules for interpolation or quadrature
over the interior of a triangle in 2D.

[TRIANGLE\_FELIPPA\_RULE](../../cpp_src/triangle_felippa_rule/triangle_felippa_rule.html),
a C++ library which returns Felippa's quadratures rules for
approximating integrals over the interior of a triangle in 2D.

[TRIANGLE\_LYNESS\_RULE](../../cpp_src/triangle_lyness_rule/triangle_lyness_rule.html),
a C++ library which returns Lyness-Jespersen quadrature rules over the
interior of a triangle in 2D.

[TRIANGLE\_NCC\_RULE](../../cpp_src/triangle_ncc_rule/triangle_ncc_rule.html),
a C++ library which defines Newton-Cotes Closed (NCC) quadrature rules
over the interior of a triangle in 2D.

[TRIANGLE\_NCO\_RULE](../../cpp_src/triangle_nco_rule/triangle_nco_rule.html),
a C++ library which defines Newton-Cotes Open (NCO) quadrature rules
over the interior of a triangle in 2D.

[TRIANGLE\_WANDZURA\_RULE](../../cpp_src/triangle_wandzura_rule/triangle_wandzura_rule.html),
a C++ library which defines Wandzura rules for quadrature over the
interior of a triangle in 2D.

### Reference: {#reference align="center"}

1.  Carlos Felippa,\
    A compendium of FEM integration formulas for symbolic work,\
    Engineering Computation,\
    Volume 21, Number 8, 2004, pages 867-890.

### Source Code: {#source-code align="center"}

-   [tetrahedron\_felippa.cpp](tetrahedron_felippa.cpp), the source
    code.
-   [tetrahedron\_felippa.hpp](tetrahedron_felippa.hpp), the include
    file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [tetrahedron\_felippa\_prb.cpp](tetrahedron_felippa_prb.cpp), a
    sample calling program.
-   [tetrahedron\_felippa\_prb.sh](tetrahedron_felippa_prb.sh), commands
    to compile and run the sample program.
-   [tetrahedron\_felippa\_prb\_output.txt](tetrahedron_felippa_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **COMP\_NEXT** computes the compositions of the integer N into K
    parts.
-   **MONOMIAL\_VALUE** evaluates a monomial.
-   **R8VEC\_COPY** copies an R8VEC.
-   **R8VEC\_DOT\_PRODUCT** computes the dot product of a pair of
    R8VEC's.
-   **SUBCOMP\_NEXT** computes the next subcomposition of N into K
    parts.
-   **TETR\_UNIT\_MONOMIAL** integrates a monomial over the unit
    tetrahedron.
-   **TETR\_UNIT\_MONOMIAL\_TEST** tests TETR\_UNIT\_MONOMIAL.
-   **TETR\_UNIT\_O01** returns a 1 point quadrature rule for the unit
    tetrahedron.
-   **TETR\_UNIT\_O04** returns a 4 point quadrature rule for the unit
    tetrahedron.
-   **TETR\_UNIT\_O08** returns an 8 point quadrature rule for the unit
    tetrahedron.
-   **TETR\_UNIT\_O08B** returns an 8 point quadrature rule for the unit
    tetrahedron.
-   **TETR\_UNIT\_O14** returns a 14 point quadrature rule for the unit
    tetrahedron.
-   **TETR\_UNIT\_O14B** returns a 14 point quadrature rule for the unit
    tetrahedron.
-   **TETR\_UNIT\_O15** returns a 15 point quadrature rule for the unit
    tetrahedron.
-   **TETR\_UNIT\_O15B** returns a 15 point quadrature rule for the unit
    tetrahedron.
-   **TETR\_UNIT\_O24** returns a 24 point quadrature rule for the unit
    tetrahedron.
-   **TETR\_UNIT\_QUAD\_TEST** tests the rules for the unit tetrahedron.
-   **TETR\_UNIT\_VOLUME** returns the volume of the unit tetrahedron.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 27 August 2014.*
