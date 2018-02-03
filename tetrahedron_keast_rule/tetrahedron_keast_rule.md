TETRAHEDRON\_KEAST\_RULE\
Quadrature Rules for a Tetrahedron {#tetrahedron_keast_rule-quadrature-rules-for-a-tetrahedron align="center"}
==================================

------------------------------------------------------------------------

**TETRAHEDRON\_KEAST\_RULE** is a C++ library which defines ten
quadrature rules, of degree of exactness 0 through 8, over the interior
of the tetrahedron in 3D.

The ten rules have the following orders and precisions:

  Rule   Order   Precision
  ------ ------- -----------
  1      1       1
  2      4       2
  3      5       3
  4      10      3
  5      11      4
  6      14      4
  7      15      5
  8      24      6
  9      31      7
  10     45      8

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TETRAHEDRON\_KEAST\_RULE** is available in [a C
version](../../c_src/tetrahedron_keast_rule/tetrahedron_keast_rule.html)
and [a C++
version](../../cpp_src/tetrahedron_keast_rule/tetrahedron_keast_rule.html)
and [a FORTRAN90
version](../../f_src/tetrahedron_keast_rule/tetrahedron_keast_rule.html)
and [a MATLAB
version](../../m_src/tetrahedron_keast_rule/tetrahedron_keast_rule.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CUBE\_FELIPPA\_RULE](../../cpp_src/cube_felippa_rule/cube_felippa_rule.html),
a C++ library which returns the points and weights of a Felippa
quadrature rule over the interior of a cube in 3D.

[PYRAMID\_FELIPPA\_RULE](../../cpp_src/pyramid_felippa_rule/pyramid_felippa_rule.html),
a C++ library which returns Felippa's quadratures rules for
approximating integrals over the interior of a pyramid in 3D.

[SIMPLEX\_GM\_RULE](../../cpp_src/simplex_gm_rule/simplex_gm_rule.html),
a C++ library which defines Grundmann-Moeller quadrature rules over the
interior of a simplex in M dimensions.

[SQUARE\_FELIPPA\_RULE](../../cpp_src/square_felippa_rule/square_felippa_rule.html),
a C++ library which returns the points and weights of a Felippa
quadrature rule over the interior of a square in 2D.

[STROUD](../../cpp_src/stroud/stroud.html), a C++ library which contains
quadrature rules for a variety of unusual areas, surfaces and volumes in
2D, 3D and N-dimensions.

[TETRAHEDRON\_ARBQ\_RULE](../../cpp_src/tetrahedron_arbq_rule/tetrahedron_arbq_rule.html),
a C++ library which returns quadrature rules, with exactness up to total
degree 15, over the interior of a tetrahedron in 3D, by Hong Xiao and
Zydrunas Gimbutas.

[TETRAHEDRON\_EXACTNESS](../../cpp_src/tetrahedron_exactness/tetrahedron_exactness.html),
a C++ program which investigates the polynomial exactness of a
quadrature rule over the interior of a tetrahedron in 3D.

[TETRAHEDRON\_FELIPPA\_RULE](../../cpp_src/tetrahedron_felippa_rule/tetrahedron_felippa_rule.html),
a C++ library which returns Felippa's quadratures rules for
approximating integrals over the interior of a tetrahedron in 3D.

[TETRAHEDRON\_INTEGRALS](../../cpp_src/tetrahedron_integrals/tetrahedron_integrals.html),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit tetrahedron in 3D.

[TETRAHEDRON\_MONTE\_CARLO](../../cpp_src/tetrahedron_monte_carlo/tetrahedron_monte_carlo.html),
a C++ library which uses the Monte Carlo method to estimate integrals
over the interior of the unit tetrahedron in 3D.

[TETRAHEDRON\_NCC\_RULE](../../cpp_src/tetrahedron_ncc_rule/tetrahedron_ncc_rule.html),
a C++ library which defines Newton-Cotes Closed (NCC) quadrature rules
over the interior of a tetrahedron in 3D.

[TETRAHEDRON\_NCO\_RULE](../../cpp_src/tetrahedron_nco_rule/tetrahedron_nco_rule.html),
a C++ library which defines Newton-Cotes Open (NCO) quadrature rules
over the interior of a tetrahedron in 3D.

[TRIANGLE\_FEKETE\_RULE](../../cpp_src/triangle_fekete_rule/triangle_fekete_rule.html),
a C++ library which defines Fekete rules for interpolation or quadrature
over the interior of a triangle in 2D.

[TRIANGLE\_FELIPPA\_RULE](../../cpp_src/triangle_felippa_rule/triangle_felippa_rule.html),
a C++ library which returns Felippa's quadratures rules for
approximating integrals over the interior of a triangle in 2D.

[WEDGE\_FELIPPA\_RULE](../../cpp_src/wedge_felippa_rule/wedge_felippa_rule.html),
a C++ library which returns quadratures rules for approximating
integrals over the interior of the unit wedge in 3D.

### Reference: {#reference align="center"}

1.  Patrick Keast,\
    Moderate Degree Tetrahedral Quadrature Formulas,\
    Computer Methods in Applied Mechanics and Engineering,\
    Volume 55, Number 3, May 1986, pages 339-348.

### Source Code: {#source-code align="center"}

-   [tetrahedron\_keast\_rule.cpp](tetrahedron_keast_rule.cpp), the
    source code.
-   [tetrahedron\_keast\_rule.hpp](tetrahedron_keast_rule.hpp), the
    include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [tetrahedron\_keast\_rule\_prb.cpp](tetrahedron_keast_rule_prb.cpp),
    a sample calling program.
-   [tetrahedron\_keast\_rule\_prb\_output.txt](tetrahedron_keast_rule_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **COMP\_NEXT** computes the compositions of the integer N into K
    parts.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the smaller of two I4's.
-   **I4\_MODP** returns the nonnegative remainder of I4 division.
-   **I4\_WRAP** forces an I4 to lie between given limits by wrapping.
-   **KEAST\_DEGREE** returns the degree of a Keast rule for the
    triangle.
-   **KEAST\_ORDER\_NUM** returns the order of a Keast rule for the
    triangle.
-   **KEAST\_RULE** returns the points and weights of a Keast rule.
-   **KEAST\_RULE\_NUM** returns the number of Keast rules available.
-   **KEAST\_SUBORDER** returns the suborders for a Keast rule.
-   **KEAST\_SUBORDER\_NUM** returns the number of suborders for a Keast
    rule.
-   **KEAST\_SUBRULE** returns a compressed Keast rule.
-   **KEAST\_SUBRULE\_01** returns a compressed Keast rule 1.
-   **KEAST\_SUBRULE\_02** returns a compressed Keast rule 2.
-   **KEAST\_SUBRULE\_03** returns a compressed Keast rule 3.
-   **KEAST\_SUBRULE\_04** returns a compressed Keast rule 4.
-   **KEAST\_SUBRULE\_05** returns a compressed Keast rule 5.
-   **KEAST\_SUBRULE\_06** returns a compressed Keast rule 6.
-   **KEAST\_SUBRULE\_07** returns a compressed Keast rule 7.
-   **KEAST\_SUBRULE\_08** returns a compressed Keast rule 8.
-   **KEAST\_SUBRULE\_08** returns a compressed Keast rule 8.
-   **KEAST\_SUBRULE\_10** returns a compressed Keast rule 10.
-   **MONOMIAL\_VALUE** evaluates a monomial.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8\_NINT** returns the nearest integer to an R8.
-   **R8MAT\_DET\_4D** computes the determinant of a 4 by 4 R8MAT.
-   **R8VEC\_DOT** computes the dot product of a pair of R8VEC's.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **TETRAHEDRON\_REFERENCE\_TO\_PHYSICAL** maps reference points to
    physical points.
-   **TETRAHEDRON\_VOLUME** computes the volume of a tetrahedron in 3D.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 27 June 2014.*
