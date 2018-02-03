TETRAHEDRON\_ARBQ\_RULE\
Quadrature Rules for Tetrahedrons. {#tetrahedron_arbq_rule-quadrature-rules-for-tetrahedrons. align="center"}
==================================

------------------------------------------------------------------------

**TETRAHEDRON\_ARBQ\_RULE** is a C++ library which returns quadrature
rules, with exactness up to total degree 15, over the interior of a
tetrahedron in 3D, by Hong Xiao and Zydrunas Gimbutas.

The original source code, from which this library was developed, is
available from the Courant Mathematics and Computing Laboratory, at
<http://www.cims.nyu.edu/cmcl/quadratures/quadratures.html>,

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TETRAHEDRON\_ARBQ\_RULE** is available in [a C
version](../../c_src/tetrahedron_arbq_rule/tetrahedron_arbq_rule.html)
and [a C++
version](../../cpp_src/tetrahedron_arbq_rule/tetrahedron_arbq_rule.html)
and [a FORTRAN77
version](../../f77_src/tetrahedron_arbq_rule/tetrahedron_arbq_rule.html)
and [a FORTRAN90
version](../../f_src/tetrahedron_arbq_rule/tetrahedron_arbq_rule.html)
and [a MATLAB
version](../../m_src/tetrahedron_arbq_rule/tetrahedron_arbq_rule.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CUBE\_ARBQ\_RULE](../../cpp_src/cube_arbq_rule/cube_arbq_rule.html), a
C++ library which returns quadrature rules, with exactness up to total
degree 15, over the interior of the symmetric cube in 3D, by Hong Xiao
and Zydrunas Gimbutas.

[CUBE\_FELIPPA\_RULE](../../cpp_src/cube_felippa_rule/cube_felippa_rule.html),
a C++ library which returns the points and weights of a Felippa
quadrature rule over the interior of a cube in 3D.

[GNUPLOT](../../cpp_src/gnuplot/gnuplot.html), C++ programs which
illustrate how a program can write data and command files so that
gnuplot can create plots of the program results.

[PYRAMID\_FELIPPA\_RULE](../../cpp_src/pyramid_felippa_rule/pyramid_felippa_rule.html),
a C++ library which returns Felippa's quadratures rules for
approximating integrals over the interior of a pyramid in 3D.

[SIMPLEX\_GM\_RULE](../../cpp_src/simplex_gm_rule/simplex_gm_rule.html),
a C++ library which defines Grundmann-Moeller quadrature rules over the
interior of a simplex in M dimensions.

[SQUARE\_ARBQ\_RULE](../../cpp_src/square_arbq_rule/square_arbq_rule.html),
a C++ library which returns quadrature rules, with exactness up to total
degree 20, over the interior of the symmetric square in 2D, by Hong Xiao
and Zydrunas Gimbutas.

[SQUARE\_FELIPPA\_RULE](../../cpp_src/square_felippa_rule/square_felippa_rule.html),
a C++ library which returns the points and weights of a Felippa
quadrature rule over the interior of a square in 2D.

[SQUARE\_SYMQ\_RULE](../../cpp_src/square_symq_rule/square_symq_rule.html),
a C++ library which returns symmetric quadrature rules, with exactness
up to total degree 20, over the interior of the symmetric square in 2D,
by Hong Xiao and Zydrunas Gimbutas.

[STROUD](../../cpp_src/stroud/stroud.html), a C++ library which defines
quadrature rules for a variety of M-dimensional regions, including the
interior of the square, cube and hypercube, the pyramid, cone and
ellipse, the hexagon, the M-dimensional octahedron, the circle, sphere
and hypersphere, the triangle, tetrahedron and simplex, and the surface
of the circle, sphere and hypersphere.

[TETRAHEDRON\_FELIPPA\_RULE](../../cpp_src/tetrahedron_felippa_rule/tetrahedron_felippa_rule.html),
a C++ library which returns Felippa's quadratures rules for
approximating integrals over the interior of a tetrahedron in 3D.

[TETRAHEDRON\_INTEGRALS](../../cpp_src/tetrahedron_integrals/tetrahedron_integrals.html),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit tetrahedron in 3D.

[TETRAHEDRON\_MONTE\_CARLO](../../cpp_src/tetrahedron_monte_carlo/tetrahedron_monte_carlo.html),
a C++ library which uses the Monte Carlo method to estimate the integral
of a function over the interior of the unit tetrahedron in 3D.

[TRIANGLE\_FEKETE\_RULE](../../cpp_src/triangle_fekete_rule/triangle_fekete_rule.html),
a C++ library which defines Fekete rules for interpolation or quadrature
over the interior of a triangle in 2D.

[TRIANGLE\_FELIPPA\_RULE](../../cpp_src/triangle_felippa_rule/triangle_felippa_rule.html),
a C++ library which returns Felippa's quadratures rules for
approximating integrals over the interior of a triangle in 2D.

[TRIANGLE\_SYMQ\_RULE](../../cpp_src/triangle_symq_rule/triangle_symq_rule.html),
a C++ library which returns efficient symmetric quadrature rules, with
exactness up to total degree 50, over the interior of an arbitrary
triangle in 2D, by Hong Xiao and Zydrunas Gimbutas.

[WEDGE\_FELIPPA\_RULE](../../cpp_src/wedge_felippa_rule/wedge_felippa_rule.html),
a C++ library which returns quadratures rules for approximating
integrals over the interior of the unit wedge in 3D.

### Reference: {#reference align="center"}

1.  Hong Xiao, Zydrunas Gimbutas,\
    A numerical algorithm for the construction of efficient quadrature
    rules in two and higher dimensions,\
    Computers and Mathematics with Applications,\
    Volume 59, 2010, pages 663-676.

### Source Code: {#source-code align="center"}

-   [tetrahedron\_arbq\_rule.cpp](tetrahedron_arbq_rule.cpp), the source
    code.
-   [tetrahedron\_arbq\_rule.hpp](tetrahedron_arbq_rule.hpp), the source
    code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [tetrahedron\_arbq\_rule\_prb.cpp](tetrahedron_arbq_rule_prb.cpp), a
    sample calling program.
-   [tetrahedron\_arbq\_rule\_prb\_output.txt](tetrahedron_arbq_rule_prb_output.txt),
    the output file.

TETRAHEDRON08 is a degree 8 rule in the reference tetrahedron.

-   [tetrahedron08.txt](tetrahedron08.txt), the node coordinates and
    weights.
-   [tetrahedron08\_commands.txt](tetrahedron08_commands.txt), gnuplot
    commands to create a plot.
-   [tetrahedron08\_nodes.txt](tetrahedron08_nodes.txt), the node
    coordinates.
-   [tetrahedron08\_vertices.txt](tetrahedron08_vertices.txt), the
    vertices.
-   [tetrahedron08.png](tetrahedron08.png), the PNG image of the point
    locations.

### List of Routines: {#list-of-routines align="center"}

-   **KJACOYPOLS3** evaluates modified Jacobi polynomials.
-   **KLEGEYPOLS** evaluates scaled Legendre polynomials.
-   **ORTHO3EVA** evaluates polynomials orthogonal in the reference
    triangle.
-   **R8MAT\_ROW\_COPY** copies a vector into a row of an R8MAT.
-   **R8VEC\_COPY** copies an R8VEC.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC\_SUM** returns the sum of the entries of an R8VEC.
-   **REF\_TO\_KOORN** maps points from the reference to Koornwinder's
    tetrahedron.
-   **RULE01** returns the rule of degree 1.
-   **RULE02** returns the rule of degree 2.
-   **RULE03** returns the rule of degree 3.
-   **RULE04** returns the rule of degree 4.
-   **RULE05** returns the rule of degree 5.
-   **RULE06** returns the rule of degree 6.
-   **RULE07** returns the rule of degree 7.
-   **RULE08** returns the rule of degree 8.
-   **RULE09** returns the rule of degree 9.
-   **RULE10** returns the rule of degree 10.
-   **RULE11** returns the rule of degree 11.
-   **RULE12** returns the rule of degree 12.
-   **RULE13** returns the rule of degree 13.
-   **RULE14** returns the rule of degree 14.
-   **RULE15** returns the rule of degree 15.
-   **TETRAHEDRON\_ARBQ** returns a quadrature rule for a tetrahedron.
-   **TETRAHEDRON\_ARBQ\_GNUPLOT:** plot of a quadrature rule in the
    tetrahedron.
-   **TETRAHEDRON\_ARBQ\_SIZE** returns the size of quadrature rule for
    a tetrahedron.
-   **TETRAHEDRON\_REF** returns the vertices of the reference
    tetrahedron.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 11 July 2014.*
