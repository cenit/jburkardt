TETRAHEDRON\_NCO\_RULE\
Newton-Cotes Open Quadrature for the Tetrahedron {#tetrahedron_nco_rule-newton-cotes-open-quadrature-for-the-tetrahedron align="center"}
================================================

------------------------------------------------------------------------

**TETRAHEDRON\_NCO\_RULE** is a C++ library which defines the weights
and abscisass for a sequence of 7 Newton-Cotes open quadrature rules
over the interior of a tetrahedron in 3D.

Newton\_Cotes rules have the characteristic that the abscissas are
equally spaced. For a tetrahedron, this refers to spacing in the unit
reference tetrahedron, or in the barycentric coordinate system. These
rules may be mapped to an arbitrary tetrahedron, and will still be
valid.

The rules are said to be "open" when they do not include points on the
boundary of the tetrahedron.

The use of equally spaced abscissas may be important for your
application. That may how your data was collected, for instance. On the
other hand, the use of equally spaced abscissas carries a few costs. In
particular, for a given degree of polynomial accuracy, there will be
rules that achieve this accuracy, but use fewer abscissas than
Newton-Cotes. Moreover, the Newton-Cotes approach almost always results
in negative weights for some abscissas. This is generally an undesirable
feature, particularly when higher order quadrature rules are being used.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TETRAHEDRON\_NCO\_RULE** is available in [a C
version](../../c_src/tetrahedron_nco_rule/tetrahedron_nco_rule.html) and
[a C++
version](../../cpp_src/tetrahedron_nco_rule/tetrahedron_nco_rule.html)
and [a FORTRAN90
version](../../f_src/tetrahedron_nco_rule/tetrahedron_nco_rule.html) and
[a MATLAB
version](../../m_src/tetrahedron_nco_rule/tetrahedron_nco_rule.html)

### Related Data and Programs: {#related-data-and-programs align="center"}

[CUBE\_FELIPPA\_RULE](../../cpp_src/cube_felippa_rule/cube_felippa_rule.html),
a C++ library which returns the points and weights of a Felippa
quadrature rule over the interior of a cube in 3D.

[LINE\_NCO\_RULE](../../cpp_src/line_nco_rule/line_nco_rule.html), a C++
library which computes a Newton Cotes Open (NCO) quadrature rule, using
equally spaced points, over the interior of a line segment in 1D.

[PYRAMID\_FELIPPA\_RULE](../../cpp_src/pyramid_felippa_rule/pyramid_felippa_rule.html),
a C++ library which returns Felippa's quadratures rules for
approximating integrals over the interior of a pyramid in 3D.

[SIMPLEX\_GM\_RULE](../../cpp_src/simplex_gm_rule/simplex_gm_rule.html),
a C++ library which defines Grundmann-Moeller quadrature rules over the
interior of a simplex in M dimensions.

[SQUARE\_FELIPPA\_RULE](../../cpp_src/square_felippa_rule/square_felippa_rule.html),
a C++ library which returns the points and weights of a Felippa
quadrature rule over the interior of a square in 2D.

[STROUD](../../cpp_src/stroud/stroud.html), a C++ library which defines
quadrature rules for a variety of unusual areas, surfaces and volumes in
2D, 3D and N-dimensions.

[TETRAHEDRON\_ARBQ\_RULE](../../cpp_src/tetrahedron_arbq_rule/tetrahedron_arbq_rule.html),
a C++ library which returns quadrature rules, with exactness up to total
degree 15, over the interior of a tetrahedron in 3D, by Hong Xiao and
Zydrunas Gimbutas.

[TETRAHEDRON\_EXACTNESS](../../cpp_src/tetrahedron_exactness/tetrahedron_exactness.html),
a C++ program which investigates the monomial exactness of a quadrature
rule over the interior of a tetrahedron in 3D.

[TETRAHEDRON\_FELIPPA\_RULE](../../cpp_src/tetrahedron_felippa_rule/tetrahedron_felippa_rule.html),
a C++ library which returns Felippa's quadratures rules for
approximating integrals over the interior of a tetrahedron in 3D.

[TETRAHEDRON\_INTEGRALS](../../cpp_src/tetrahedron_integrals/tetrahedron_integrals.html),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit tetrahedron in 3D.

[TETRAHEDRON\_KEAST\_RULE](../../cpp_src/tetrahedron_keast_rule/tetrahedron_keast_rule.html),
a C++ library which defines ten quadrature rules, with exactness degrees
0 through 8, over the interior of a tetrahedron in 3D.

[TETRAHEDRON\_MONTE\_CARLO](../../cpp_src/tetrahedron_monte_carlo/tetrahedron_monte_carlo.html),
a C++ library which uses the Monte Carlo method to estimate integrals
over the interior of the unit tetrahedron in 3D.

[TETRAHEDRON\_NCC\_RULE](../../cpp_src/tetrahedron_ncc_rule/tetrahedron_ncc_rule.html),
a C++ library which defines Newton-Cotes Closed (NCC) quadrature rules
over the interior of a tetrahedron in 3D.

[TRIANGLE\_FEKETE\_RULE](../../cpp_src/triangle_fekete_rule/triangle_fekete_rule.html),
a C++ library which defines Fekete rules for interpolation or quadrature
over the interior of a triangle in 2D.

[TRIANGLE\_FELIPPA\_RULE](../../cpp_src/triangle_felippa_rule/triangle_felippa_rule.html),
a C++ library which returns Felippa's quadratures rules for
approximating integrals over the interior of a triangle in 2D.

[TRIANGLE\_NCO\_RULE](../../cpp_src/triangle_nco_rule/triangle_nco_rule.html),
a C++ library which defines Newton-Cotes open quadrature rules over the
interior of a triangle in 2D.

[WEDGE\_FELIPPA\_RULE](../../cpp_src/wedge_felippa_rule/wedge_felippa_rule.html),
a C++ library which returns quadratures rules for approximating
integrals over the interior of the unit wedge in 3D.

### Reference: {#reference align="center"}

1.  Peter Silvester,\
    Symmetric Quadrature Formulae for Simplexes,\
    Mathematics of Computation,\
    Volume 24, Number 109, January 1970, pages 95-100.

### Source Code: {#source-code align="center"}

-   [tetrahedron\_nco\_rule.cpp](tetrahedron_nco_rule.cpp), the source
    code.
-   [tetrahedron\_nco\_rule.hpp](tetrahedron_nco_rule.hpp), the include
    file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [tetrahedron\_nco\_rule\_prb.cpp](tetrahedron_nco_rule_prb.cpp), a
    sample calling program.
-   [tetrahedron\_nco\_rule\_prb\_output.txt](tetrahedron_nco_rule_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **R8MAT\_DET\_4D** computes the determinant of a 4 by 4 R8MAT.
-   **REFERENCE\_TO\_PHYSICAL\_T4** maps T4 reference points to physical
    points.
-   **TETRAHEDRON\_NCO\_DEGREE:** degree of an NCO rule for the
    tetrahedron.
-   **TETRAHEDRON\_NCO\_ORDER\_NUM:** order of an NCO rule for the
    tetrahedron.
-   **TETRAHEDRON\_NCO\_RULE** returns the points and weights of an NCO
    rule.
-   **TETRAHEDRON\_NCO\_RULE\_NUM** returns the number of NCO rules
    available.
-   **TETRAHEDRON\_NCO\_SUBORDER** returns the suborders for an NCO
    rule.
-   **TETRAHEDRON\_NCO\_SUBORDER\_NUM** returns the number of suborders
    for an NCO rule.
-   **TETRAHEDRON\_NCO\_SUBRULE** returns a compressed NCO rule.
-   **TETRAHEDRON\_NCO\_SUBRULE\_01** returns a compressed NCO rule 1.
-   **TETRAHEDRON\_NCO\_SUBRULE\_02** returns a compressed NCO rule 2.
-   **TETRAHEDRON\_NCO\_SUBRULE\_03** returns a compressed NCO rule 3.
-   **TETRAHEDRON\_NCO\_SUBRULE\_04** returns a compressed NCO rule 4.
-   **TETRAHEDRON\_NCO\_SUBRULE\_05** returns a compressed NCO rule 5.
-   **TETRAHEDRON\_NCO\_SUBRULE\_06** returns a compressed NCO rule 6.
-   **TETRAHEDRON\_NCO\_SUBRULE\_07** returns a compressed NCO rule 7.
-   **TETRAHEDRON\_VOLUME** computes the volume of a tetrahedron.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 15 June 2014.*
