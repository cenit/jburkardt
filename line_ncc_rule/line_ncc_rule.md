LINE\_NCC\_RULE\
Newton Cotes Closed (NCC) Quadrature Rules for the Interval {#line_ncc_rule-newton-cotes-closed-ncc-quadrature-rules-for-the-interval align="center"}
===========================================================

------------------------------------------------------------------------

**LINE\_NCC\_RULE** is a C++ library which computes a Newton Cotes
Closed (NCC) quadrature rule using equally spaced points over the
interior of a line segment in 1D.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**LINE\_NCC\_RULE** is available in [a C
version](../../c_src/line_ncc_rule/line_ncc_rule.html) and [a C++
version](../../cpp_src/line_ncc_rule/line_ncc_rule.html) and [a
FORTRAN77 version](../../f77_src/line_ncc_rule/line_ncc_rule.html) and
[a FORTRAN90 version](../../f_src/line_ncc_rule/line_ncc_rule.html) and
[a MATLAB version](../../m_src/line_ncc_rule/line_ncc_rule.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[LINE\_FEKETE\_RULE](../../cpp_src/line_fekete_rule/line_fekete_rule.html),
a C++ library which approximates the location of Fekete points in an
interval \[A,B\]. A family of sets of Fekete points, indexed by size N,
represents an excellent choice for defining a polynomial interpolant.

[LINE\_FELIPPA\_RULE](../../cpp_src/line_felippa_rule/line_felippa_rule.html),
a C++ library which returns the points and weights of a Felippa
quadrature rule over the interior of a line segment in 1D.

[LINE\_GRID](../../cpp_src/line_grid/line_grid.html), a C++ library
which computes a grid of points over the interior of a line segment in
1D.

[LINE\_INTEGRALS](../../cpp_src/line_integrals/line_integrals.html), a
C++ library which returns the exact value of the integral of any
monomial over the length of the unit line in 1D.

[LINE\_MONTE\_CARLO](../../cpp_src/line_monte_carlo/line_monte_carlo.html),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the length of the unit line in 1D;

[LINE\_NCO\_RULE](../../cpp_src/line_nco_rule/line_nco_rule.html), a C++
library which defines a Newton Cotes Open (NCO) rule using equally
spaced points over the interior of a line segment in 1D.

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

1.  Philip Davis, Philip Rabinowitz,\
    Methods of Numerical Integration,\
    Second Edition,\
    Dover, 2007,\
    ISBN: 0486453391,\
    LC: QA299.3.D28.

### Source Code: {#source-code align="center"}

-   [line\_ncc\_rule.cpp](line_ncc_rule.cpp), the source code.
-   [line\_ncc\_rule.hpp](line_ncc_rule.hpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [line\_ncc\_rule\_prb.cpp](line_ncc_rule_prb.cpp), a sample calling
    program.
-   [line\_ncc\_rule\_prb\_output.txt](line_ncc_rule_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **LINE\_NCC\_RULE** computes a Newton-Cotes Closed (NCC) quadrature
    rule.
-   **R8VEC\_LINSPACE** creates a vector of linearly spaced values.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 11 April 2014.*
