WEDGE\_FELIPPA\_RULE\
Quadrature Rules for the Wedge {#wedge_felippa_rule-quadrature-rules-for-the-wedge align="center"}
==============================

------------------------------------------------------------------------

**WEDGE\_FELIPPA\_RULE** is a C++ library which generates quadrature
rules to estimate integrals over the interior of the unit wedge in 3D.

The interior of the unit wedge in 3D is defined by the constraints:

            0 <= X
            0 <= Y
                 X + Y <= 1
           -1 <= Z <= +1
          

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**WEDGE\_FELIPPA\_RULE** is available in [a C
version](../../c_src/wedge_felippa_rule/wedge_felippa_rule.html) and [a
C++ version](../../cpp_src/wedge_felippa_rule/wedge_felippa_rule.html)
and [a FORTRAN90
version](../../f_src/wedge_felippa_rule/wedge_felippa_rule.html) and [a
FORTRAN77
version](../../f77_src/wedge_felippa_rule/wedge_felippa_rule.html) and
[a MATLAB
version](../../m_src/wedge_felippa_rule/wedge_felippa_rule.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CUBE\_FELIPPA\_RULE](../../cpp_src/cube_felippa_rule/cube_felippa_rule.html),
a C++ library which returns the points and weights of a Felippa
quadrature rule over the interior of a cube in 3D.

[DISK\_RULE](../../cpp_src/disk_rule/disk_rule.html), a C++ library
which computes quadrature rules over the interior of the unit disk in
2D.

[PYRAMID\_FELIPPA\_RULE](../../cpp_src/pyramid_felippa_rule/pyramid_felippa_rule.html),
a C++ library which returns Felippa's quadratures rules for
approximating integrals over the interior of a pyramid in 3D.

[PYRAMID\_RULE](../../cpp_src/pyramid_rule/pyramid_rule.html), a C++
program which computes a quadrature rule over the interior of the unit
pyramid in 3D.

[SIMPLEX\_GM\_RULE](../../cpp_src/simplex_gm_rule/simplex_gm_rule.html),
a C++ library which defines Grundmann-Moeller quadrature rules over the
interior of the simplex in M dimensions.

[SQUARE\_FELIPPA\_RULE](../../cpp_src/square_felippa_rule/square_felippa_rule.html),
a C++ library which returns the points and weights of a Felippa
quadrature rule over the interior of a square in 2D.

[STROUD](../../cpp_src/stroud/stroud.html), a C++ library which defines
quadrature rules for a variety of unusual areas, surfaces and volumes in
2D, 3D and N-dimensions.

[TETRAHEDRON\_FELIPPA\_RULE](../../cpp_src/tetrahedron_felippa_rule/tetrahedron_felippa_rule.html),
a C++ library which returns Felippa's quadratures rules for
approximating integrals over the interior of a tetrahedron in 3D.

[TETRAHEDRON\_KEAST\_RULE](../../cpp_src/tetrahedron_keast_rule/tetrahedron_keast_rule.html),
a C++ library which defines ten quadrature rules, with exactness degrees
0 through 8, over the interior of a tetrahedron in 3D.

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

[WEDGE\_EXACTNESS](../../cpp_src/wedge_exactness/wedge_exactness.html),
a C++ program which investigates the monomial exactness of a quadrature
rule over the interior of the unit wedge in 3D.

[WEDGE\_GRID](../../cpp_src/wedge_grid/wedge_grid.html), a C++ library
which computes a grid of points over the interior of the unit wedge in
3D.

[WEDGE\_INTEGRALS](../../cpp_src/wedge_integrals/wedge_integrals.html),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit wedge in 3D.

[WEDGE\_MONTE\_CARLO](../../cpp_src/wedge_monte_carlo/wedge_monte_carlo.html),
a C++ library which uses the Monte Carlo method to estimate the value of
an integral over the interior of a wedge in 3D.

### Reference: {#reference align="center"}

1.  Carlos Felippa,\
    A compendium of FEM integration formulas for symbolic work,\
    Engineering Computation,\
    Volume 21, Number 8, 2004, pages 867-890.

### Source Code: {#source-code align="center"}

-   [wedge\_felippa\_rule.cpp](wedge_felippa_rule.cpp), the source code.
-   [wedge\_felippa\_rule.hpp](wedge_felippa_rule.hpp), the include
    file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [wedge\_felippa\_rule\_prb.cpp](wedge_felippa_rule_prb.cpp), a
    sample calling program.
-   [wedge\_felippa\_rule\_prb\_output.txt](wedge_felippa_rule_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **COMP\_NEXT** computes the compositions of the integer N into K
    parts.
-   **GET\_UNIT** returns a free FORTRAN unit number.
-   **LINE\_O01** returns a 1 point quadrature rule for the unit line.
-   **LINE\_O02** returns a 2 point quadrature rule for the unit line.
-   **LINE\_O03** returns a 3 point quadrature rule for the unit line.
-   **LINE\_O04** returns a 4 point quadrature rule for the unit line.
-   **LINE\_O05** returns a 5 point quadrature rule for the unit line.
-   **MONOMIAL\_VALUE** evaluates a monomial.
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **SUBCOMP\_NEXT** computes the next subcomposition of N into K
    parts.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TRIANGLE\_O01** returns a 1 point quadrature rule for the unit
    triangle.
-   **TRIANGLE\_O03** returns a 3 point quadrature rule for the unit
    triangle.
-   **TRIANGLE\_O03B** returns a 3 point quadrature rule for the unit
    triangle.
-   **TRIANGLE\_O06** returns a 6 point quadrature rule for the unit
    triangle.
-   **TRIANGLE\_O06B** returns a 6 point quadrature rule for the unit
    triangle.
-   **TRIANGLE\_O07** returns a 7 point quadrature rule for the unit
    triangle.
-   **TRIANGLE\_O12** returns a 12 point quadrature rule for the unit
    triangle.
-   **WEDGE\_INTEGRAL:** monomial integral in a unit wedge.
-   **WEDGE\_RULE** returns a quadrature rule for the unit wedge.
-   **WEDGE\_VOLUME:** volume of a unit wedge.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 20 August 2014.*
