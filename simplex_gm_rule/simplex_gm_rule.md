SIMPLEX\_GM\_RULE\
Grundmann-Moeller Quadrature Rules for the Simplex in M dimensions {#simplex_gm_rule-grundmann-moeller-quadrature-rules-for-the-simplex-in-m-dimensions align="center"}
==================================================================

------------------------------------------------------------------------

**SIMPLEX\_GM\_RULE** is a C++ library which defines Grundmann-Moeller
quadrature rules over the interior of a simplex in M dimensions.

The user can choose the spatial dimension M, thus defining the region to
be a triangle (M = 2), tetrahedron (M = 3) or a general M-dimensional
simplex.

The user chooses the index **S** of the rule. Rules are available with
index **S** = 0 on up. A rule of index **S** will exactly integrate any
polynomial of total degree **2\*S+1** or less.

The rules are defined on the unit M-dimensional simplex. A simple linear
transformation can be used to map the vertices and weights to an
arbitrary simplex, while preserving the accuracy of the rule.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SIMPLEX\_GM\_RULE** is available in [a C
version](../../c_src/simplex_gm_rule/simplex_gm_rule.html) and [a C++
version](../../cpp_src/simplex_gm_rule/simplex_gm_rule.html) and [a
FORTRAN77 version](../../f77_src/simplex_gm_rule/simplex_gm_rule.html)
and [a FORTRAN90
version](../../f_src/simplex_gm_rule/simplex_gm_rule.html) and [a MATLAB
version](../../m_src/simplex_gm_rule/simplex_gm_rule.html) and [a Python
version](../../py_src/simplex_gm_rule/simplex_gm_rule.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CUBE\_FELIPPA\_RULE](../../cpp_src/cube_felippa_rule/cube_felippa_rule.html),
a C++ library which returns the points and weights of a Felippa
quadrature rule over the interior of a cube in 3D.

[PYRAMID\_FELIPPA\_RULE](../../cpp_src/pyramid_felippa_rule/pyramid_felippa_rule.html),
a C++ library which returns Felippa's quadratures rules for
approximating integrals over the interior of a pyramid in 3D.

[SIMPLEX\_GRID](../../cpp_src/simplex_grid/simplex_grid.html), a C++
library which generates a regular grid of points over the interior of an
arbitrary simplex in M dimensions.

[SQUARE\_FELIPPA\_RULE](../../cpp_src/square_felippa_rule/square_felippa_rule.html),
a C++ library which returns the points and weights of a Felippa
quadrature rule over the interior of a square in 2D.

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
a C++ program which uses the Monte Carlo method to estimate integrals
over the interior of a tetrahedron in 3D.

[TETRAHEDRON\_NCC\_RULE](../../cpp_src/tetrahedron_ncc_rule/tetrahedron_ncc_rule.html),
a C++ library which defines Newton-Cotes Closed (NCC) quadrature rules
over the interior of a tetrahedron in 3D.

[TETRAHEDRON\_NCO\_RULE](../../cpp_src/tetrahedron_nco_rule/tetrahedron_nco_rule.html),
a C++ library which defines Newton-Cotes Open (NCO) quadrature rules
over the interior of a tetrahedron in 3D.

[TRIANGLE\_DUNAVANT\_RULE](../../cpp_src/triangle_dunavant_rule/triangle_dunavant_rule.html),
a C++ library which defines Dunavant quadrature rules over the interior
of a triangle in 2D.

[TRIANGLE\_FEKETE\_RULE](../../cpp_src/triangle_fekete_rule/triangle_fekete_rule.html),
a C++ library which defines Fekete rules for interpolation or quadrature
over the interior of a triangle in 2D.

[TRIANGLE\_FELIPPA\_RULE](../../cpp_src/triangle_felippa_rule/triangle_felippa_rule.html),
a C++ library which returns Felippa's quadratures rules for
approximating integrals over the interior of a triangle in 2D.

[TRIANGLE\_LYNESS\_RULE](../../cpp_src/triangle_lyness_rule/triangle_lyness_rule.html),
a C++ library which returns Lyness-Jespersen quadrature rules for the
triangle.

[TRIANGLE\_MONTE\_CARLO](../../cpp_src/triangle_monte_carlo/triangle_monte_carlo.html),
a C++ program which uses the Monte Carlo method to estimate integrals
over a triangle.

[TRIANGLE\_NCC\_RULE](../../cpp_src/triangle_ncc_rule/triangle_ncc_rule.html),
a C++ library which defines Newton-Cotes Closed (NCC) quadrature rules
over the interior of a triangle in 2D.

[TRIANGLE\_NCO\_RULE](../../cpp_src/triangle_nco_rule/triangle_nco_rule.html),
a C++ library which defines Newton-Cotes Open (NCO) quadrature rules
over the interior of a triangle in 2D.

[TRIANGLE\_WANDZURA\_RULE](../../cpp_src/triangle_wandzura_rule/triangle_wandzura_rule.html),
a C++ library which defines Wandzura rules for quadrature over the
interior of a triangle in 2D.

[WEDGE\_FELIPPA\_RULE](../../cpp_src/wedge_felippa_rule/wedge_felippa_rule.html),
a C++ library which returns quadratures rules for approximating
integrals over the interior of the unit wedge in 3D.

### Reference: {#reference align="center"}

1.  Paul Bratley, Bennett Fox, Linus Schrage,\
    A Guide to Simulation,\
    Second Edition,\
    Springer, 1987,\
    ISBN: 0387964673,\
    LC: QA76.9.C65.B73.
2.  Bennett Fox,\
    Algorithm 647: Implementation and Relative Efficiency of Quasirandom
    Sequence Generators,\
    ACM Transactions on Mathematical Software,\
    Volume 12, Number 4, December 1986, pages 362-376.
3.  Axel Grundmann, Michael Moeller,\
    Invariant Integration Formulas for the N-Simplex by Combinatorial
    Methods,\
    SIAM Journal on Numerical Analysis,\
    Volume 15, Number 2, April 1978, pages 282-290.
4.  Pierre LEcuyer,\
    Random Number Generation,\
    in Handbook of Simulation,\
    edited by Jerry Banks,\
    Wiley, 1998,\
    ISBN: 0471134031,\
    LC: T57.62.H37.
5.  Peter Lewis, Allen Goodman, James Miller,\
    A Pseudo-Random Number Generator for the System/360,\
    IBM Systems Journal,\
    Volume 8, 1969, pages 136-143.
6.  Albert Nijenhuis, Herbert Wilf,\
    Combinatorial Algorithms for Computers and Calculators,\
    Second Edition,\
    Academic Press, 1978,\
    ISBN: 0-12-519260-6,\
    LC: QA164.N54.
7.  ML Wolfson, HV Wright,\
    Algorithm 160: Combinatorial of M Things Taken N at a Time,\
    Communications of the ACM,\
    Volume 6, Number 4, April 1963, page 161.

### Source Code: {#source-code align="center"}

-   [simplex\_gm\_rule.cpp](simplex_gm_rule.cpp), the source code.
-   [simplex\_gm\_rule.hpp](simplex_gm_rule.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [simplex\_gm\_rule\_prb.cpp](simplex_gm_rule_prb.cpp), a sample
    calling program.
-   [simplex\_gm\_rule\_prb\_output.txt](simplex_gm_rule_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **COMP\_NEXT** computes the compositions of the integer N into K
    parts.
-   **GM\_RULE\_SET** sets a Grundmann-Moeller rule.
-   **GM\_RULE\_SET\_OLD** sets a Grundmann-Moeller rule. (OBSOLETE
    VERSION)
-   **GM\_RULE\_SIZE** determines the size of a Grundmann-Moeller rule.
-   **I4\_CHOOSE** computes the binomial coefficient C(N,K).
-   **I4\_HUGE** returns a "huge" I4.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the smaller of two I4's.
-   **I4\_POWER** returns the value of I\^J.
-   **MONOMIAL\_VALUE** evaluates a monomial.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_FACTORIAL** computes the factorial of N.
-   **R8VEC\_DOT** computes the dot product of a pair of R8VEC's.
-   **R8VEC\_UNIFORM\_01** returns a unit pseudorandom R8VEC.
-   **SIMPLEX\_UNIT\_MONOMIAL\_INT** integrates a monomial over a
    simplex.
-   **SIMPLEX\_UNIT\_MONOMIAL\_QUADRATURE:** quadrature of monomials in
    a unit simplex.
-   **SIMPLEX\_UNIT\_SAMPLE** returns uniformly random points from a
    general simplex.
-   **SIMPLEX\_UNIT\_TO\_GENERAL** maps the unit simplex to a general
    simplex.
-   **SIMPLEX\_UNIT\_VOLUME** computes the volume of the unit simplex.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 26 June 2008.*
