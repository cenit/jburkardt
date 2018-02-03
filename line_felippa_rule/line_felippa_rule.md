LINE\_FELIPPA\_RULE\
Quadrature Rules for a Line Segment in 1D {#line_felippa_rule-quadrature-rules-for-a-line-segment-in-1d align="center"}
=========================================

------------------------------------------------------------------------

**LINE\_FELIPPA\_RULE** is a C++ library which generates the points and
weights of a quadrature rule over the interior of a line segment in 1D.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**LINE\_FELIPPA\_RULE** is available in [a C
version](../../c_src/line_felippa_rule/line_felippa_rule.md) and [a
C++ version](../../master/line_felippa_rule/line_felippa_rule.md) and
[a FORTRAN90
version](../../f_src/line_felippa_rule/line_felippa_rule.md) and [a
FORTRAN77
version](../../f77_src/line_felippa_rule/line_felippa_rule.md) and [a
MATLAB version](../../m_src/line_felippa_rule/line_felippa_rule.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CCN\_RULE](../../master/ccn_rule/ccn_rule.md), a C++ program which
defines a nested Clenshaw Curtis quadrature rule.

[CHEBYSHEV1\_RULE](../../master/chebyshev1_rule/chebyshev1_rule.md),
a C++ program which computes and prints a Gauss-Chebyshev type 1
quadrature rule.

[CHEBYSHEV2\_RULE](../../master/chebyshev2_rule/chebyshev2_rule.md),
a C++ program which computes and prints a Gauss-Chebyshev type 2
quadrature rule.

[CLENSHAW\_CURTIS\_RULE](../../master/clenshaw_curtis_rule/clenshaw_curtis_rule.md),
a C++ program which defines a Clenshaw Curtis quadrature rule.

[LEGENDRE\_RULE](../../master/legendre_rule/legendre_rule.md), a C++
program which computes a 1D Gauss-Legendre quadrature rule.

[LINE\_CVT\_LLOYD](../../master/line_cvt_lloyd/line_cvt_lloyd.md), a
C++ library which applies Lloyd's iteration repeatedly to a set of N
points, to compute a Centroidal Voronoi Tessellation (CVT) over the
interior of a line segment in 1D.

[LINE\_FEKETE\_RULE](../../master/line_fekete_rule/line_fekete_rule.md),
a C++ library which estimates the location of N Fekete points, for
polynomial interpolation or quadrature, over the interior of a line
segment in 1D.

[LINE\_GRID](../../master/line_grid/line_grid.md), a C++ library
which computes a grid of points over the interior of a line segment in
1D.

[LINE\_INTEGRALS](../../master/line_integrals/line_integrals.md), a
C++ library which returns the exact value of the integral of any
monomial over the length of the unit line in 1D.

[LINE\_MONTE\_CARLO](../../master/line_monte_carlo/line_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the length of the unit line in 1D;

[LINE\_NCC\_RULE](../../master/line_ncc_rule/line_ncc_rule.md), a C++
library which defines a Newton Cotes Closed (NCC) rule using equally
spaced points over the interior of a line segment in 1D.

[LINE\_NCO\_RULE](../../master/line_nco_rule/line_nco_rule.md), a C++
library which defines a Newton Cotes Open (NCO) rule using equally
spaced points over the interior of a line segment in 1D.

[PATTERSON\_RULE](../../master/patterson_rule/patterson_rule.md), a
C++ program which returns the points and weights of a 1D Gauss-Patterson
quadrature rule of order 1, 3, 7, 15, 31, 63, 127, 255 or 511.

### Reference: {#reference align="center"}

1.  Carlos Felippa,\
    A compendium of FEM integration formulas for symbolic work,\
    Engineering Computation,\
    Volume 21, Number 8, 2004, pages 867-890.

### Source Code: {#source-code align="center"}

-   [line\_felippa\_rule.cpp](line_felippa_rule.cpp), the source code.
-   [line\_felippa\_rule.hpp](line_felippa_rule.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [line\_felippa\_rule\_prb.cpp](line_felippa_rule_prb.cpp), a sample
    calling program.
-   [line\_felippa\_rule\_prb\_output.txt](line_felippa_rule_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **LINE\_MONOMIAL:** monomial integral over a line segment in 1D.
-   **LINE\_MONOMIAL\_TEST** tests LINE\_MONOMIAL.
-   **LINE\_QUAD\_TEST** tests the rules for a line segment in 1D.
-   **LINE\_RULE** returns a quadrature rule for a line segment in 1D.
-   **LINE\_UNIT\_O01** returns a 1 point quadrature rule for the unit
    line.
-   **LINE\_UNIT\_O02** returns a 2 point quadrature rule for the unit
    line.
-   **LINE\_UNIT\_O03** returns a 3 point quadrature rule for the unit
    line.
-   **LINE\_UNIT\_O04** returns a 4 point quadrature rule for the unit
    line.
-   **LINE\_UNIT\_O05** returns a 5 point quadrature rule for the unit
    line.
-   **LINE\_VOLUME:** volume of a line segment in 1D.
-   **R8VEC\_COPY** copies an R8VEC.
-   **R8VEC\_DOT\_PRODUCT** computes the dot product of a pair of
    R8VEC's.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 07 September 2014.*
