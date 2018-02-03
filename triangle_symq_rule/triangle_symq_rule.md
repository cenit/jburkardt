TRIANGLE\_SYMQ\_RULE\
Symmetric Quadrature Rules for Triangles. {#triangle_symq_rule-symmetric-quadrature-rules-for-triangles. align="center"}
=========================================

------------------------------------------------------------------------

**TRIANGLE\_SYMQ\_RULE** is a C++ library which returns symmetric
quadrature rules, with exactness up to total degree 50, over the
interior of an arbitrary triangle in 2D, by Hong Xiao and Zydrunas
Gimbutas.

The original source code, from which this library was developed, is
available from the Courant Mathematics and Computing Laboratory, at
<http://www.cims.nyu.edu/cmcl/quadratures/quadratures.md>,

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TRIANGLE\_SYMQ\_RULE** is available in [a C
version](../../c_src/triangle_symq_rule/triangle_symq_rule.md) and [a
C++ version](../../master/triangle_symq_rule/triangle_symq_rule.md)
and [a FORTRAN77
version](../../f77_src/triangle_symq_rule/triangle_symq_rule.md) and
[a FORTRAN90
version](../../f_src/triangle_symq_rule/triangle_symq_rule.md) and [a
MATLAB version](../../m_src/triangle_symq_rule/triangle_symq_rule.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CUBE\_FELIPPA\_RULE](../../master/cube_felippa_rule/cube_felippa_rule.md),
a C++ library which returns the points and weights of a Felippa
quadrature rule over the interior of a cube in 3D.

[GNUPLOT](../../master/gnuplot/gnuplot.md), C++ programs which
illustrate how a program can write data and command files so that
gnuplot can create plots of the program results.

[PYRAMID\_FELIPPA\_RULE](../../master/pyramid_felippa_rule/pyramid_felippa_rule.md),
a C++ library which returns Felippa's quadratures rules for
approximating integrals over the interior of a pyramid in 3D.

[SIMPLEX\_GM\_RULE](../../master/simplex_gm_rule/simplex_gm_rule.md),
a C++ library which defines Grundmann-Moeller quadrature rules over the
interior of a simplex in M dimensions.

[SQUARE\_FELIPPA\_RULE](../../master/square_felippa_rule/square_felippa_rule.md),
a C++ library which returns the points and weights of a Felippa
quadrature rule over the interior of a square in 2D.

[SQUARE\_SYMQ\_RULE](../../master/square_symq_rule/square_symq_rule.md),
a C++ library which returns symmetric quadrature rules, with exactness
up to total degree 20, over the interior of the symmetric square in 2D,
by Hong Xiao and Zydrunas Gimbutas.

[STROUD](../../master/stroud/stroud.md), a C++ library which defines
quadrature rules for a variety of M-dimensional regions, including the
interior of the square, cube and hypercube, the pyramid, cone and
ellipse, the hexagon, the M-dimensional octahedron, the circle, sphere
and hypersphere, the triangle, tetrahedron and simplex, and the surface
of the circle, sphere and hypersphere.

[TETRAHEDRON\_FELIPPA\_RULE](../../master/tetrahedron_felippa_rule/tetrahedron_felippa_rule.md),
a C++ library which returns Felippa's quadratures rules for
approximating integrals over the interior of a tetrahedron in 3D.

[TOMS886](../../master/toms886/toms886.md), a C++ library which
defines the Padua points for interpolation in a 2D region, including the
rectangle, triangle, and ellipse, by Marco Caliari, Stefano de Marchi,
Marco Vianello. This is a version of ACM TOMS algorithm 886.

[TRIANGLE\_ANALYZE](../../master/triangle_analyze/triangle_analyze.md),
a C++ program which reads a triangle defined in a file, and uses the
triangle\_properties() library to compute angles, area, centroid,
circumcircle, edge lengths, incircle, orientation, orthocenter, and
quality.

[TRIANGLE\_DUNAVANT\_RULE](../../master/triangle_dunavant_rule/triangle_dunavant_rule.md),
a C++ library which defines Dunavant rules for quadrature over the
interior of a triangle in 2D.

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
a C++ library which uses the Monte Carlo method to estimate the integral
of a function over the interior of the unit triangle in 2D.

[TRIANGLE\_NCC\_RULE](../../master/triangle_ncc_rule/triangle_ncc_rule.md),
a C++ library which defines Newton-Cotes Closed (NCC) quadrature rules
over the interior of a triangle in 2D.

[TRIANGLE\_NCO\_RULE](../../master/triangle_nco_rule/triangle_nco_rule.md),
a C++ library which defines Newton-Cotes Open (NCO) quadrature rules
over the interior of a triangle in 2D.

[TRIANGLE\_WANDZURA\_RULE](../../master/triangle_wandzura_rule/triangle_wandzura_rule.md),
a C++ library which returns quadrature rules of exactness 5, 10, 15, 20,
25 and 30 over the interior of the triangle in 2D.

[WEDGE\_FELIPPA\_RULE](../../master/wedge_felippa_rule/wedge_felippa_rule.md),
a C++ library which returns quadratures rules for approximating
integrals over the interior of the unit wedge in 3D.

### Reference: {#reference align="center"}

1.  Hong Xiao, Zydrunas Gimbutas,\
    A numerical algorithm for the construction of efficient quadrature
    rules in two and higher dimensions,\
    Computers and Mathematics with Applications,\
    Volume 59, 2010, pages 663-676.

### Source Code: {#source-code align="center"}

-   [triangle\_symq\_rule.cpp](triangle_symq_rule.cpp), the source code.
-   [triangle\_symq\_rule.hpp](triangle_symq_rule.hpp), the include
    file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [triangle\_symq\_rule\_prb.cpp](triangle_symq_rule_prb.cpp), a
    sample calling program.
-   [triangle\_symq\_rule\_prb\_output.txt](triangle_symq_rule_prb_output.txt),
    the output file.

EQUI08 is a degree 8 rule in an equilateral triangle.

-   [equi08.txt](equi08.txt), the node coordinates and weights.
-   [equi08\_commands.txt](equi08_commands.txt), gnuplot commands to
    create a plot.
-   [equi08\_nodes.txt](equi08_nodes.txt), the node coordinates.
-   [equi08\_vertices.txt](equi08_vertices.txt), the triangle vertices.
-   [equi08.png](equi08.png), the PNG image of the point locations.

SIMP08 is a degree 8 rule in a simplex.

-   [simp08.txt](simp08.txt), the node coordinates and weights.
-   [simp08\_commands.txt](simp08_commands.txt), gnuplot commands to
    create a plot.
-   [simp08\_nodes.txt](simp08_nodes.txt), the node coordinates.
-   [simp08\_vertices.txt](simp08_vertices.txt), the triangle vertices.
-   [simp08.png](simp08.png), the PNG image of the point locations.

USER08 is a degree 8 rule in a user specified triangle at (1,0), (4,4),
(0,3).

-   [user08.txt](user08.txt), the node coordinates and weights.
-   [user08\_commands.txt](user08_commands.txt), gnuplot commands to
    create a plot.
-   [user08\_nodes.txt](user08_nodes.txt), the node coordinates.
-   [user08\_vertices.txt](user08_vertices.txt), the triangle vertices.
-   [simp08.png](user08.png), the PNG image of the point locations.

### List of Routines: {#list-of-routines align="center"}

-   **KJACOPOLS2** evaluates Jacobi polynomials and derivatives.
-   **KJACOPOLS** evaluates Jacobi polynomials.
-   **KLEGEYPOLS3** evaluate scaled Legendre polynomials and
    derivatives.
-   **KLEGEYPOLS** evaluates scaled Legendre polynomials.
-   **ORTHO2EVA0** evaluates the orthonormal polynomials on the
    triangle.
-   **ORTHO2EVA30:** orthonormal polynomials and derivatives on
    triangle.
-   **ORTHO2EVA3:** orthogonal polynomial values and derivatives,
    reference triangle.
-   **ORTHO2EVA** evaluates orthogonal polynomials on the reference
    triangle.
-   **QUAECOPY2** copies a quadrature rule into a user arrays X, Y,
    and W.
-   **QUAECOPY** copies a quadrature rule into user arrays Z and W.
-   **QUAEINSIDE** checks whether a point is inside a triangle.
-   **QUAENODES2** expands nodes from 1/6 to 1/3 of the triangle.
-   **QUAENODES** expands nodes to the reference triangle.
-   **QUAEQUAD0** returns the requested quadrature rule.
-   **QUAEQUAD** returns a symmetric quadrature formula for a reference
    triangle.
-   **QUAEROTATE** applies a rotation.
-   **R8VEC\_COPY** copies an R8VEC.
-   **R8VEC\_UNIFORM\_01** returns a unit pseudorandom R8VEC.
-   **REF\_TO\_KOORN** maps points from the reference to Koornwinder's
    triangle.
-   **REF\_TO\_TRIANGLE** maps points from the reference triangle to a
    triangle.
-   **RULE\_COMPRESSED\_SIZE** returns the compressed size of the
    requested quadrature rule.
-   **RULE\_FULL\_SIZE** returns the full size of the requested
    quadrature rule.
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
-   **RULE16** returns the rule of degree 16.
-   **RULE17** returns the rule of degree 17.
-   **RULE18** returns the rule of degree 18.
-   **RULE19** returns the rule of degree 19.
-   **RULE20** returns the rule of degree 20.
-   **RULE21** returns the rule of degree 21.
-   **RULE22** returns the rule of degree 22.
-   **RULE23** returns the rule of degree 23.
-   **RULE24** returns the rule of degree 24.
-   **RULE25** returns the rule of degree 25.
-   **RULE26** returns the rule of degree 26.
-   **RULE27** returns the rule of degree 29.
-   **RULE28** returns the rule of degree 28.
-   **RULE29** returns the rule of degree 29.
-   **RULE30** returns the rule of degree 30.
-   **RULE31** returns the rule of degree 31.
-   **RULE32** returns the rule of degree 32.
-   **RULE33** returns the rule of degree 33.
-   **RULE34** returns the rule of degree 34.
-   **RULE35** returns the rule of degree 35.
-   **RULE36** returns the rule of degree 36.
-   **RULE37** returns the rule of degree 37.
-   **RULE38** returns the rule of degree 38.
-   **RULE39** returns the rule of degree 39.
-   **RULE40** returns the rule of degree 40.
-   **RULE41** returns the rule of degree 41.
-   **RULE42** returns the rule of degree 42.
-   **RULE43** returns the rule of degree 43.
-   **RULE44** returns the rule of degree 44.
-   **RULE45** returns the rule of degree 45.
-   **RULE46** returns the rule of degree 46.
-   **RULE47** returns the rule of degree 47.
-   **RULE48** returns the rule of degree 48.
-   **RULE49** returns the rule of degree 49.
-   **RULE50** returns the rule of degree 50.
-   **SIMPLEX\_TO\_TRIANGLE** maps points from the simplex to a
    triangle.
-   **TIMESTAMP** prints out the current YMDHMS date as a timestamp.
-   **TRIANGLE\_AREA** returns the area of a triangle.
-   **TRIANGLE\_TO\_REF** maps points from any triangle to the reference
    triangle.
-   **TRIANGLE\_TO\_SIMPLEX** maps points from any triangle to the
    simplex.
-   **TRIANMAP** maps rules from the reference triangle to the user
    triangle.
-   **TRIASIMP** maps a point from the reference triangle to the
    simplex.
-   **TRIASYMQ** returns a symmetric quadrature formula for a user
    triangle.
-   **TRIASYMQ\_GNUPLOT:** set up a GNUPLOT plot of the triangle
    quadrature rule.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 30 June 2014.*
