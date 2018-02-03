TRIANGLE\_DUNAVANT\_RULE\
Quadrature Rules for the Triangle {#triangle_dunavant_rule-quadrature-rules-for-the-triangle align="center"}
=================================

------------------------------------------------------------------------

**TRIANGLE\_DUNAVANT\_RULE** is a C++ library which defines the weights
and abscisass for quadrature rules over the interior of a triangle in
2D.

These rules are almost optimal, in the sense that, for each polynomial
degree, the number of points used in the rule is close to, or equal to,
the theoretical minimum possible value.

A few of the rules include one or two points which are "slightly"
outside the triangle; a few of the rules include weights which are
negative. Both of these occurrences are generally undesirable.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TRIANGLE\_DUNAVANT\_RULE** is available in [a C++
version](../../master/triangle_dunavant_rule/triangle_dunavant_rule.md)
and [a FORTRAN90
version](../../f_src/triangle_dunavant_rule/triangle_dunavant_rule.md)
and [a MATLAB
version](../../m_src/triangle_dunavant_rule/triangle_dunavant_rule.md)

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

[STROUD](../../master/stroud/stroud.md), a C++ library which defines
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

[TRIANGLE\_EXACTNESS](../../master/triangle_exactness/triangle_exactness.md),
a C++ program which investigates the polynomial exactness of a
quadrature rule over the interior of a triangle in 2D.

[TRIANGLE\_FEKETE\_RULE](../../master/triangle_fekete_rule/triangle_fekete_rule.md),
a C++ library which defines Fekete rules for interpolation or quadrature
over the interior of a triangle in 2D.

[TRIANGLE\_FELIPPA\_RULE](../../master/triangle_felippa_rule/triangle_felippa_rule.md),
a C++ library which returns Felippa's quadratures rules for
approximating integrals over the interior of a triangle in 2D.

[TRIANGLE\_LYNESS\_RULE](../../master/triangle_lyness_rule/triangle_lyness_rule.md),
a C++ library which returns Lyness-Jespersen quadrature rules for the
triangle.

[TRIANGLE\_MONTE\_CARLO](../../master/triangle_monte_carlo/triangle_monte_carlo.md),
a C++ program which uses the Monte Carlo method to estimate integrals
over a triangle.

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

[TRIANGLE\_WANDZURA\_RULE](../../master/triangle_wandzura_rule/triangle_wandzura_rule.md),
a C++ library which defines Wandzura rules for quadrature over the
interior of a triangle in 2D.

[WEDGE\_FELIPPA\_RULE](../../master/wedge_felippa_rule/wedge_felippa_rule.md),
a C++ library which returns quadratures rules for approximating
integrals over the interior of the unit wedge in 3D.

### Reference: {#reference align="center"}

1.  David Dunavant,\
    High Degree Efficient Symmetrical Gaussian Quadrature Rules for the
    Triangle,\
    International Journal for Numerical Methods in Engineering,\
    Volume 21, 1985, pages 1129-1148.
2.  James Lyness, Dennis Jespersen,\
    Moderate Degree Symmetric Quadrature Rules for the Triangle,\
    Journal of the Institute of Mathematics and its Applications,\
    Volume 15, Number 1, February 1975, pages 19-32.

### Source Code: {#source-code align="center"}

-   [triangle\_dunavant\_rule.cpp](triangle_dunavant_rule.cpp), the
    source code.
-   [triangle\_dunavant\_rule.hpp](triangle_dunavant_rule.hpp), the
    include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [triangle\_dunavant\_rule\_prb.cpp](triangle_dunavant_rule_prb.cpp),
    a sample calling program.
-   [triangle\_dunavant\_rule\_prb\_output.txt](triangle_dunavant_rule_prb_output.txt),
    the output ffile.

### List of Routines: {#list-of-routines align="center"}

-   **DUNAVANT\_DEGREE** returns the degree of a Dunavant rule for the
    triangle.
-   **DUNAVANT\_ORDER\_NUM** returns the order of a Dunavant rule for
    the triangle.
-   **DUNAVANT\_RULE** returns the points and weights of a Dunavant
    rule.
-   **DUNAVANT\_RULE\_NUM** returns the number of Dunavant rules
    available.
-   **DUNAVANT\_SUBORDER** returns the suborders for a Dunavant rule.
-   **DUNAVANT\_SUBORDER\_NUM** returns the number of suborders for a
    Dunavant rule.
-   **DUNAVANT\_SUBRULE** returns a compressed Dunavant rule.
-   **DUNAVANT\_SUBRULE\_01** returns a compressed Dunavant rule 1.
-   **DUNAVANT\_SUBRULE\_02** returns a compressed Dunavant rule 2.
-   **DUNAVANT\_SUBRULE\_03** returns a compressed Dunavant rule 3.
-   **DUNAVANT\_SUBRULE\_04** returns a compressed Dunavant rule 4.
-   **DUNAVANT\_SUBRULE\_05** returns a compressed Dunavant rule 5.
-   **DUNAVANT\_SUBRULE\_06** returns a compressed Dunavant rule 6.
-   **DUNAVANT\_SUBRULE\_07** returns a compressed Dunavant rule 7.
-   **DUNAVANT\_SUBRULE\_08** returns a compressed Dunavant rule 8.
-   **DUNAVANT\_SUBRULE\_09** returns a compressed Dunavant rule 9.
-   **DUNAVANT\_SUBRULE\_10** returns a compressed Dunavant rule 10.
-   **DUNAVANT\_SUBRULE\_11** returns a compressed Dunavant rule 11.
-   **DUNAVANT\_SUBRULE\_12** returns a compressed Dunavant rule 12.
-   **DUNAVANT\_SUBRULE\_13** returns a compressed Dunavant rule 13.
-   **DUNAVANT\_SUBRULE\_14** returns a compressed Dunavant rule 14.
-   **DUNAVANT\_SUBRULE\_15** returns a compressed Dunavant rule 15.
-   **DUNAVANT\_SUBRULE\_16** returns a compressed Dunavant rule 16.
-   **DUNAVANT\_SUBRULE\_17** returns a compressed Dunavant rule 17.
-   **DUNAVANT\_SUBRULE\_18** returns a compressed Dunavant rule 18.
-   **DUNAVANT\_SUBRULE\_19** returns a compressed Dunavant rule 19.
-   **DUNAVANT\_SUBRULE\_20** returns a compressed Dunavant rule 20.
-   **I4\_MAX** returns the maximum of two integers.
-   **I4\_MIN** returns the smaller of two integers.
-   **I4\_MODP** returns the nonnegative remainder of integer division.
-   **I4\_WRAP** forces an integer to lie between given limits by
    wrapping.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8\_NINT** returns the nearest integer to an R8.
-   **REFERENCE\_TO\_PHYSICAL\_T3** maps T3 reference points to physical
    points.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TRIANGLE\_AREA** computes the area of a triangle.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 29 June 2014.*
