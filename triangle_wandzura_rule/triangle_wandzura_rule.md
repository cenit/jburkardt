TRIANGLE\_WANDZURA\_RULE\
High Order Quadrature in a Triangle. {#triangle_wandzura_rule-high-order-quadrature-in-a-triangle. align="center"}
====================================

------------------------------------------------------------------------

**TRIANGLE\_WANDZURA\_RULE** is a C++ library which can return any of
six Wandzura rules for high order quadrature over the interior of a
triangle in 2D.

There are six rules, which have polynomial degree of exactness of 5, 10,
15, 20, 25, and 30.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TRIANGLE\_WANDZURA\_RULE** is available in [a C++
version](../../master/triangle_wandzura_rule/triangle_wandzura_rule.md)
and [a FORTRAN90
version](../../f_src/triangle_wandzura_rule/triangle_wandzura_rule.md)
and [a MATLAB
version](../../m_src/triangle_wandzura_rule/triangle_wandzura_rule.md)

### Related Data and Programs: {#related-data-and-programs align="center"}

[CUBE\_FELIPPA\_RULE](../../master/cube_felippa_rule/cube_felippa_rule.md),
a C++ library which returns the points and weights of a Felippa
quadrature rule over the interior of a cube in 3D.

[PYRAMID\_FELIPPA\_RULE](../../master/pyramid_felippa_rule/pyramid_felippa_rule.md),
a C++ library which returns Felippa's quadratures rules for
approximating integrals over the interior of a pyramid in 3D.

[SIMPLEX\_GM\_RULE](../../master/simplex_gm_rule/simplex_gm_rule.md),
a C++ library which defines Grundmann-Moeller quadrature rules over the
interior of the simplex in M dimensions.

[SQUARE\_FELIPPA\_RULE](../../master/square_felippa_rule/square_felippa_rule.md),
a C++ library which returns the points and weights of a Felippa
quadrature rule over the interior of a square in 2D.

[STROUD](../../master/stroud/stroud.md), a C++ library which contains
quadrature rules for a variety of unusual areas, surfaces and volumes in
2D, 3D and N-dimensions.

[TETRAHEDRON\_FELIPPA\_RULE](../../master/tetrahedron_felippa_rule/tetrahedron_felippa_rule.md),
a C++ library which returns Felippa's quadratures rules for
approximating integrals over the interior of a tetrahedron in 3D.

[TRIANGLE\_ANALYZE](../../master/triangle_analyze/triangle_analyze.md),
a C++ program which reads a triangle defined in a file, and uses the
triangle\_properties() library to compute angles, area, centroid,
circumcircle, edge lengths, incircle, orientation, orthocenter, and
quality.

[TRIANGLE\_DUNAVANT\_RULE](../../master/triangle_dunavant_rule/triangle_dunavant_rule.md),
a C++ library which sets up a Dunavant quadrature rule over the interior
of a triangle in 2D.

[TRIANGLE\_EXACTNESS](../../master/triangle_exactness/triangle_exactness.md),
a C++ program which investigates the polynomial exactness of a
quadrature rule over the interior of a triangle in 2D.

[TRIANGLE\_FEKETE\_RULE](../../master/triangle_fekete_rule/triangle_fekete_rule.md),
a C++ library which defines Fekete rules for interpolation or quadrature
over the interior of a triangle in 2D.

[TRIANGLE\_FELIPPA\_RULE](../../master/triangle_felippa_rule/triangle_felippa_rule.md),
a C++ library which returns Felippa's quadratures rules for
approximating integrals over the interior of a triangle in 2D.

[TRIANGLE\_INTEGRALS](../../master/triangle_integrals/triangle_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit triangle in 2D.

[TRIANGLE\_LYNESS\_RULE](../../master/triangle_lyness_rule/triangle_lyness_rule.md),
a C++ library which returns Lyness-Jespersen quadrature rules over the
interior of a triangle in 2D.

[TRIANGLE\_MONTE\_CARLO](../../master/triangle_monte_carlo/triangle_monte_carlo.md),
a C++ program which uses the Monte Carlo method to estimate integrals
over the interior of a triangle in 2D.

[TRIANGLE\_NCC\_RULE](../../master/triangle_ncc_rule/triangle_ncc_rule.md),
a C++ library which defines Newton-Cotes Closed (NCC) quadrature rules
over the interior of a triangle in 2D.

[TRIANGLE\_NCO\_RULE](../../master/triangle_nco_rule/triangle_nco_rule.md),
a C++ library which defines Newton-Cotes Open (NCO) quadrature rules
over the interior of a triangle in 2D.

[TRIANGLE\_SYMQ\_RULE](../../master/triangle_symq_rule/triangle_symq_rule.md),
a C++ library which returns efficient symmetric quadrature rules, with
exactness up to total degree 50, over the interior of an arbitrary
triangle in 2D, by Hong Xiao and Zydrunas Gimbutas.

[WEDGE\_FELIPPA\_RULE](../../master/wedge_felippa_rule/wedge_felippa_rule.md),
a C++ library which returns quadratures rules for approximating
integrals over the interior of the unit wedge in 3D.

### Reference: {#reference align="center"}

1.  James Lyness, Dennis Jespersen,\
    Moderate Degree Symmetric Quadrature Rules for the Triangle,\
    Journal of the Institute of Mathematics and its Applications,\
    Volume 15, Number 1, February 1975, pages 19-32.
2.  Stephen Wandzura, Hong Xiao,\
    Symmetric Quadrature Rules on a Triangle,\
    Computers and Mathematics with Applications,\
    Volume 45, Number 12, June 2003, pages 1829-1840.

### Source Code: {#source-code align="center"}

-   [triangle\_wandzura\_rule.cpp](triangle_wandzura_rule.cpp), the
    source code.
-   [triangle\_wandzura\_rule.hpp](triangle_wandzura_rule.hpp), the
    include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [triangle\_wandzura\_rule\_prb.cpp](triangle_wandzura_rule_prb.cpp),
    a sample calling program.
-   [triangle\_wandzura\_rule\_prb\_output.txt](triangle_wandzura_rule_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **FILE\_NAME\_INC** increments a partially numeric file name.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the smaller of two I4's.
-   **I4\_MODP** returns the nonnegative remainder of I4 division.
-   **I4\_WRAP** forces an I4 to lie between given limits by wrapping.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8\_NINT** returns the nearest integer to an R8.
-   **REFERENCE\_TO\_PHYSICAL\_T3** maps T3 reference points to physical
    points.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TRIANGLE\_AREA** computes the area of a triangle.
-   **WANDZURA\_DEGREE** returns the degree of a given Wandzura rule for
    the triangle.
-   **WANDZURA\_ORDER\_NUM** returns the order of a given Wandzura rule
    for the triangle.
-   **WANDZURA\_RULE** returns the points and weights of a Wandzura
    rule.
-   **WANDZURA\_RULE\_NUM** returns the number of Wandzura rules
    available.
-   **WANDZURA\_SUBORDER** returns the suborders for a Wandzura rule.
-   **WANDZURA\_SUBORDER\_NUM** returns the number of suborders for a
    Wandzura rule.
-   **WANDZURA\_SUBRULE** returns a compressed Wandzura rule.
-   **WANDZURA\_SUBRULE\_1** returns a compressed Wandzura rule 1.
-   **WANDZURA\_SUBRULE\_2** returns a compressed Wandzura rule 2.
-   **WANDZURA\_SUBRULE\_3** returns a compressed Wandzura rule 3.
-   **WANDZURA\_SUBRULE\_4** returns a compressed Wandzura rule 4.
-   **WANDZURA\_SUBRULE\_5** returns a compressed Wandzura rule 5.
-   **WANDZURA\_SUBRULE\_6** returns a compressed Wandzura rule 6.
-   **WANDZURA\_SUBRULE2\_1** returns a compressed Wandzura rule 1.
-   **WANDZURA\_SUBRULE2\_2** returns a compressed Wandzura rule 2.
-   **WANDZURA\_SUBRULE2\_3** returns a compressed Wandzura rule 3.
-   **WANDZURA\_SUBRULE2\_4** returns a compressed Wandzura rule 4.
-   **WANDZURA\_SUBRULE2\_5** returns a compressed Wandzura rule 5.
-   **WANDZURA\_SUBRULE2\_6** returns a compressed Wandzura rule 6.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 29 June 2014.*
