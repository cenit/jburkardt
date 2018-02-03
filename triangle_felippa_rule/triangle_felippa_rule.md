TRIANGLE\_FELIPPA\_RULE\
Felippa's Quadrature Rules for Triangles {#triangle_felippa_rule-felippas-quadrature-rules-for-triangles align="center"}
========================================

------------------------------------------------------------------------

**TRIANGLE\_FELIPPA\_RULE** is a C++ library which generates the points
and weights of Felippa's quadrature rules over the interior of a
triangle in 2D.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TRIANGLE\_FELIPPA\_RULE** is available in [a C
version](../../c_src/triangle_felippa_rule/triangle_felippa_rule.html)
and [a C++
version](../../cpp_src/triangle_felippa_rule/triangle_felippa_rule.html)
and [a FORTRAN90
version](../../f_src/triangle_felippa_rule/triangle_felippa_rule.html)
and [a FORTRAN77
version](../../f77_src/triangle_felippa_rule/triangle_felippa_rule.html)
and [a MATLAB
version](../../m_src/triangle_felippa_rule/triangle_felippa_rule.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CUBE\_FELIPPA\_RULE](../../cpp_src/cube_felippa_rule/cube_felippa_rule.html),
a C++ library which returns the points and weights of a Felippa
quadrature rule over the interior of a cube in 3D.

[PYRAMID\_FELIPPA\_RULE](../../cpp_src/pyramid_felippa_rule/pyramid_felippa_rule.html),
a C++ library which returns Felippa's quadratures rules for
approximating integrals over the interior of a pyramid in 3D.

[SQUARE\_FELIPPA\_RULE](../../cpp_src/square_felippa_rule/square_felippa_rule.html),
a C++ library which returns the points and weights of a Felippa
quadrature rule over the interior of a square in 2D.

[TETRAHEDRON\_FELIPPA\_RULE](../../cpp_src/tetrahedron_felippa_rule/tetrahedron_felippa_rule.html),
a C++ library which returns Felippa's quadratures rules for
approximating integrals over the interior of a tetrahedron in 3D.

[TRIANGLE\_ANALYZE](../../cpp_src/triangle_analyze/triangle_analyze.html),
a C++ program which reads a triangle defined in a file, and uses the
triangle\_properties() library to compute angles, area, centroid,
circumcircle, edge lengths, incircle, orientation, orthocenter, and
quality.

[TRIANGLE\_FEKETE\_RULE](../../cpp_src/triangle_fekete_rule/triangle_fekete_rule.html),
a C++ library which defines Fekete rules for interpolation or quadrature
over the interior of a triangle in 2D.

[TRIANGLE\_DUNAVANT\_RULE](../../cpp_src/triangle_dunavant_rule/triangle_dunavant_rule.html),
a C++ library which sets up a Dunavant quadrature rule over the interior
of a triangle in 2D.

[TRIANGLE\_EXACTNESS](../../cpp_src/triangle_exactness/triangle_exactness.html),
a C++ program which investigates the polynomial exactness of a
quadrature rule over the interior of a triangle in 2D.

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

[TRIANGLE\_SVG](../../cpp_src/triangle_svg/triangle_svg.html), a C++
library which uses Scalable Vector Graphics (SVG) to plot a triangle and
any number of points, to illustrate quadrature rules and sampling
techniques.

[TRIANGLE\_SYMQ\_RULE](../../cpp_src/triangle_symq_rule/triangle_symq_rule.html),
a C++ library which returns efficient symmetric quadrature rules, with
exactness up to total degree 50, over the interior of an arbitrary
triangle in 2D, by Hong Xiao and Zydrunas Gimbutas.

[TRIANGLE\_WANDZURA\_RULE](../../cpp_src/triangle_wandzura_rule/triangle_wandzura_rule.html),
a C++ library which sets up a quadrature rule of exactness 5, 10, 15,
20, 25 or 30 over the interior of a triangle in 2D.

[WEDGE\_FELIPPA\_RULE](../../cpp_src/wedge_felippa_rule/wedge_felippa_rule.html),
a C++ library which returns quadratures rules for approximating
integrals over the interior of the unit wedge in 3D.

### Reference: {#reference align="center"}

1.  Carlos Felippa,\
    A compendium of FEM integration formulas for symbolic work,\
    Engineering Computation,\
    Volume 21, Number 8, 2004, pages 867-890.

### Source Code: {#source-code align="center"}

-   [triangle\_felippa\_rule.cpp](triangle_felippa_rule.cpp), the source
    code.
-   [triangle\_felippa\_rule.hpp](triangle_felippa_rule.hpp), the source
    code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [triangle\_felippa\_rule\_prb.cpp](triangle_felippa_rule_prb.cpp), a
    sample calling program.
-   [triangle\_felippa\_rule\_prb\_output.txt](triangle_felippa_rule_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **COMP\_NEXT** computes the compositions of the integer N into K
    parts.
-   **MONOMIAL\_VALUE** evaluates a monomial.
-   **SUBCOMP\_NEXT** computes the next subcomposition of N into K
    parts.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TRIANGLE\_UNIT\_MONOMIAL** integrates a monomial over the unit
    triangle.
-   **TRIANGLE\_UNIT\_O01** returns a 1 point quadrature rule for the
    unit triangle.
-   **TRIANGLE\_UNIT\_O03** returns a 3 point quadrature rule for the
    unit triangle.
-   **TRIANGLE\_UNIT\_O03B** returns a 3 point quadrature rule for the
    unit triangle.
-   **TRIANGLE\_UNIT\_O06** returns a 6 point quadrature rule for the
    unit triangle.
-   **TRIANGLE\_UNIT\_O06B** returns a 6 point quadrature rule for the
    unit triangle.
-   **TRIANGLE\_UNIT\_O07** returns a 7 point quadrature rule for the
    unit triangle.
-   **TRIANGLE\_UNIT\_O12** returns a 12 point quadrature rule for the
    unit triangle.
-   **TRIANGLE\_UNIT\_VOLUME:** volume of a unit triangle.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 25 August 2014.*
