TRIANGLE\_LYNESS\_RULE\
Quadrature Rules for the Triangle {#triangle_lyness_rule-quadrature-rules-for-the-triangle align="center"}
=================================

------------------------------------------------------------------------

**TRIANGLE\_LYNESS\_RULE** is a C++ library which produces the
Lyness-Jespersen family of quadrature rules over the interior of a
triangle in 2D.

The rules have the following orders (number of points) and precisions
(maximum degree of polynomials whose integrals they can compute
exactly):

  Rule   Order   Precision
  ------ ------- -----------
  0      1       1
  1      3       2
  2      4       2
  3      4       3
  4      7       3
  5      6       4
  6      10      4
  7      9       4
  8      7       5
  9      10      5
  10     12      6
  11     16      6
  12     13      6
  13     13      7
  14     16      7
  15     16      8
  16     21      8
  17     16      8
  18     19      9
  19     22      9
  20     27      11
  21     28      11

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TRIANGLE\_LYNESS\_RULE** is available in [a C++
version](../../master/triangle_lyness_rule/triangle_lyness_rule.md)
and [a FORTRAN90
version](../../f_src/triangle_lyness_rule/triangle_lyness_rule.md) and
[a MATLAB
version.](../../m_src/triangle_lyness_rule/triangle_lyness_rule.md)

### Related Data and Programs: {#related-data-and-programs align="center"}

[CUBE\_FELIPPA\_RULE](../../master/cube_felippa_rule/cube_felippa_rule.md),
a C++ library which returns the points and weights of a Felippa
quadrature rule over the interior of a cube in 3D.

[PYRAMID\_FELIPPA\_RULE](../../master/pyramid_felippa_rule/pyramid_felippa_rule.md),
a C++ library which returns Felippa's quadratures rules for
approximating integrals over the interior of a pyramid in 3D.

[SIMPLEX\_GM\_RULE](../../master/simplex_gm_rule/simplex_gm_rule.md),
a C++ library which defines Grundmann-Moeller quadrature rules over the
interior of a simplex in M dimensions.

[SQUARE\_FELIPPA\_RULE](../../master/square_felippa_rule/square_felippa_rule.md),
a C++ library which returns the points and weights of a Felippa
quadrature rule over the interior of a square in 2D.

[STROUD](../../master/stroud/stroud.md), a C++ library which contains
quadrature rules for a variety of unusual areas, surfaces and volumes in
2D, 3D and M-dimensions.

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

[TRIANGLE\_WANDZURA\_RULE](../../master/triangle_wandzura_rule/triangle_wandzura_rule.md),
a C++ library which sets up a quadrature rule of exactness 5, 10, 15,
20, 25 or 30 over the interior of a triangle in 2D.

[WEDGE\_FELIPPA\_RULE](../../master/wedge_felippa_rule/wedge_felippa_rule.md),
a C++ library which returns quadratures rules for approximating
integrals over the interior of the unit wedge in 3D.

### Reference: {#reference align="center"}

1.  James Lyness, Dennis Jespersen,\
    Moderate Degree Symmetric Quadrature Rules for the Triangle,\
    Journal of the Institute of Mathematics and its Applications,\
    Volume 15, Number 1, February 1975, pages 19-32.

### Source Code: {#source-code align="center"}

-   [triangle\_lyness\_rule.cpp](triangle_lyness_rule.cpp), the source
    code.
-   [triangle\_lyness\_rule.hpp](triangle_lyness_rule.hpp), the include
    file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [triangle\_lyness\_rule\_prb.cpp](triangle_lyness_rule_prb.cpp), a
    sample calling program.
-   [triangle\_lyness\_rule\_prb\_output.txt](triangle_lyness_rule_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_MODP** returns the nonnegative remainder of I4 division.
-   **I4\_WRAP** forces an I4 to lie between given limits by wrapping.
-   **I4VEC\_COPY\_NEW** copies an I4VEC to a "new" I4VEC.
-   **LYNESS\_ORDER** returns the order of a Lyness quadrature rule.
-   **LYNESS\_PRECISION** returns the precision of a Lyness quadrature
    rule.
-   **LYNESS\_RULE** returns the points and weights of a Lyness
    quadrature rule.
-   **LYNESS\_RULE\_NUM** returns the number of Lyness quadrature rules.
-   **LYNESS\_SUBORDER** returns the suborders for a Lyness rule.
-   **LYNESS\_SUBORDER\_NUM** returns the number of suborders for a
    Lyness rule.
-   **LYNESS\_SUBRULE** returns a compressed Lyness rule.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8MAT\_COPY** copies one R8MAT to another.
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **R8VEC\_COPY** copies an R8VEC.
-   **R8VEC\_SUM** returns the sum of an R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the FORTRAN90 source codes](../f_src.md).

------------------------------------------------------------------------

*Last revised on 30 September 2010.*
