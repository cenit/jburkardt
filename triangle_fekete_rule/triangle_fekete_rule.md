TRIANGLE\_FEKETE\_RULE\
High Order Interpolation and Quadrature in Triangles {#triangle_fekete_rule-high-order-interpolation-and-quadrature-in-triangles align="center"}
====================================================

------------------------------------------------------------------------

**TRIANGLE\_FEKETE\_RULE** is a C++ library which returns Fekete rules
for interpolation and quadrature over the interior of a triangle in 2D.

Fekete points can be defined for any region OMEGA. To define the Fekete
points for a given region, let Poly(N) be some finite dimensional vector
space of polynomials, such as all polynomials of degree less than L, or
all polynomials whose monomial terms have total degree less than some
value L.

Let P(1:M) be any basis for Poly(N). For this basis, the Fekete points
are defined as those points Z(1:M) which maximize the determinant of the
corresponding Vandermonde matrix:

            V = [ P1(Z1)  P1(Z2)  ... P1(ZM) ]
                [ P2(Z1)  P2(Z2)  ... P2(ZM) ]
                ...
                [ PM(ZM)  P2(ZM)  ... PM(ZM) ]
          

The seven rules have the following orders and precisions:

  Rule   Order   Precision
  ------ ------- -----------
  1      10      3
  2      28      6
  3      55      9
  4      91      12
  5      91      12
  6      136     15
  7      190     18

On the triangle, it is known that some Fekete points will lie on the
boundary, and that on each side of the triangle, these points will
correspond to a set of Gauss-Lobatto points.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TRIANGLE\_FEKETE\_RULE** is available in [a C
version](../../c_src/triangle_fekete_rule/triangle_fekete_rule.html) and
[a C++
version](../../cpp_src/triangle_fekete_rule/triangle_fekete_rule.html)
and [a FORTRAN90
version](../../f_src/triangle_fekete_rule/triangle_fekete_rule.html) and
[a MATLAB
version.](../../m_src/triangle_fekete_rule/triangle_fekete_rule.html)

### Related Data and Programs: {#related-data-and-programs align="center"}

[CUBE\_FELIPPA\_RULE](../../cpp_src/cube_felippa_rule/cube_felippa_rule.html),
a C++ library which returns the points and weights of a Felippa
quadrature rule over the interior of a cube in 3D.

[LINE\_FEKETE](../../cpp_src/line_fekete/line_fekete.html), a C++
library which approximates the location of Fekete points in an interval
\[A,B\]. A family of sets of Fekete points, indexed by size N,
represents an excellent choice for defining a polynomial interpolant.

[PYRAMID\_FELIPPA\_RULE](../../cpp_src/pyramid_felippa_rule/pyramid_felippa_rule.html),
a C++ library which returns Felippa's quadratures rules for
approximating integrals over the interior of a pyramid in 3D.

[SIMPLEX\_GM\_RULE](../../cpp_src/simplex_gm_rule/simplex_gm_rule.html),
a C++ library which defines Grundmann-Moeller quadrature rules over the
interior of the simplex in M dimensions.

[SQUARE\_FELIPPA\_RULE](../../cpp_src/square_felippa_rule/square_felippa_rule.html),
a C++ library which returns the points and weights of a Felippa
quadrature rule over the interior of a square in 2D.

[STROUD](../../cpp_src/stroud/stroud.html), a C++ library which contains
quadrature rules for a variety of unusual areas, surfaces and volumes in
2D, 3D and M-dimensions.

[TETRAHEDRON\_FELIPPA\_RULE](../../cpp_src/tetrahedron_felippa_rule/tetrahedron_felippa_rule.html),
a C++ library which returns Felippa's quadratures rules for
approximating integrals over the interior of a tetrahedron in 3D.

[TRIANGLE\_ANALYZE](../../cpp_src/triangle_analyze/triangle_analyze.html),
a C++ program which reads a triangle defined in a file, and uses the
triangle\_properties() library to compute angles, area, centroid,
circumcircle, edge lengths, incircle, orientation, orthocenter, and
quality.

[TRIANGLE\_DUNAVANT\_RULE](../../cpp_src/triangle_dunavant_rule/triangle_dunavant_rule.html),
a C++ library which sets up a Dunavant quadrature rule over the interior
of a triangle in 2D.

[TRIANGLE\_EXACTNESS](../../cpp_src/triangle_exactness/triangle_exactness.html),
a C++ program which investigates the polynomial exactness of a
quadrature rule over the interior of a triangle in 2D.

[TRIANGLE\_FELIPPA\_RULE](../../cpp_src/triangle_felippa_rule/triangle_felippa_rule.html),
a C++ library which returns Felippa's quadratures rules for
approximating integrals over the interior of a triangle in 2D.

[TRIANGLE\_INTEGRALS](../../cpp_src/triangle_integrals/triangle_integrals.html),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit triangle in 2D.

[TRIANGLE\_INTERPOLATE](../../cpp_src/triangle_interpolate/triangle_interpolate.html),
a C++ library which shows how vertex data can be interpolated at any
point in the interior of a triangle.

[TRIANGLE\_LYNESS\_RULE](../../cpp_src/triangle_lyness_rule/triangle_lyness_rule.html),
a C++ library which returns Lyness-Jespersen quadrature rules over the
interior of a triangle in 2D.

[TRIANGLE\_MONTE\_CARLO](../../cpp_src/triangle_monte_carlo/triangle_monte_carlo.html),
a C++ program which uses the Monte Carlo method to estimate integrals
over a triangle.

[TRIANGLE\_NCC\_RULE](../../cpp_src/triangle_ncc_rule/triangle_ncc_rule.html),
a C++ library which defines Newton-Cotes Closed (NCC) quadrature rules
over the interior of a triangle in 2D.

[TRIANGLE\_NCO\_RULE](../../cpp_src/triangle_nco_rule/triangle_nco_rule.html),
a C++ library which defines Newton-Cotes Open (NCO) quadrature rules
over the interior of a triangle in 2D.

[TRIANGLE\_SYMQ\_RULE](../../cpp_src/triangle_symq_rule/triangle_symq_rule.html),
a C++ library which returns efficient symmetric quadrature rules, with
exactness up to total degree 50, over the interior of an arbitrary
triangle in 2D, by Hong Xiao and Zydrunas Gimbutas.

[TRIANGLE\_WANDZURA\_RULE](../../cpp_src/triangle_wandzura_rule/triangle_wandzura_rule.html),
a C++ library which sets up a quadrature rule of exactness 5, 10, 15,
20, 25 or 30 over the interior of a triangle in 2D.

### Reference: {#reference align="center"}

1.  SF Bockman,\
    Generalizing the Formula for Areas of Polygons to Moments,\
    American Mathematical Society Monthly,\
    Volume 96, Number 2, February 1989, pages 131-132.
2.  Hermann Engels,\
    Numerical Quadrature and Cubature,\
    Academic Press, 1980,\
    ISBN: 012238850X,\
    LC: QA299.3E5.
3.  Arthur Stroud,\
    Approximate Calculation of Multiple Integrals,\
    Prentice Hall, 1971,\
    ISBN: 0130438936,\
    LC: QA311.S85.
4.  Mark Taylor, Beth Wingate, Rachel Vincent,\
    An Algorithm for Computing Fekete Points in the Triangle,\
    SIAM Journal on Numerical Analysis,\
    Volume 38, Number 5, 2000, pages 1707-1720.
5.  Stephen Wandzura, Hong Xiao,\
    Symmetric Quadrature Rules on a Triangle,\
    Computers and Mathematics with Applications,\
    Volume 45, 2003, pages 1829-1840.

### Source Code: {#source-code align="center"}

-   [triangle\_fekete\_rule.cpp](triangle_fekete_rule.cpp), the source
    code.
-   [triangle\_fekete\_rule.hpp](triangle_fekete_rule.hpp), the include
    code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [triangle\_fekete\_rule\_prb.cpp](triangle_fekete_rule_prb.cpp), a
    sample calling program.
-   [triangle\_fekete\_rule\_prb.sh](triangle_fekete_rule_prb.sh),
    commands to compile and run the sample program.
-   [triangle\_fekete\_rule\_prb\_output.txt](triangle_fekete_rule_prb_output.txt),
    the output file.

One of the tests in the sample calling program creates EPS files of the
abscissas in the unit triangle. These have been converted to PNG files
for display here.

-   [fekete\_rule\_1.png](fekete_rule_1.png), a plot of rule 1.
-   [fekete\_rule\_2.png](fekete_rule_2.png), a plot of rule 2.
-   [fekete\_rule\_3.png](fekete_rule_3.png), a plot of rule 3.
-   [fekete\_rule\_4.png](fekete_rule_4.png), a plot of rule 4.
-   [fekete\_rule\_5.png](fekete_rule_5.png), a plot of rule 5.
-   [fekete\_rule\_6.png](fekete_rule_6.png), a plot of rule 6.
-   [fekete\_rule\_7.png](fekete_rule_7.png), a plot of rule 7.

### List of Routines: {#list-of-routines align="center"}

-   **FEKETE\_DEGREE** returns the degree of a given Fekete rule for the
    triangle.
-   **FEKETE\_ORDER\_NUM** returns the order of a given Fekete rule for
    the triangle.
-   **FEKETE\_RULE** returns the points and weights of a Fekete rule.
-   **FEKETE\_RULE\_NUM** returns the number of Fekete rules available.
-   **FEKETE\_SUBORDER** returns the suborders for a Fekete rule.
-   **FEKETE\_SUBORDER\_NUM** returns the number of suborders for a
    Fekete rule.
-   **FEKETE\_SUBRULE** returns a compressed Fekete rule.
-   **FEKETE\_SUBRULE\_1** returns a compressed Fekete rule 1.
-   **FEKETE\_SUBRULE\_2** returns a compressed Fekete rule 2.
-   **FEKETE\_SUBRULE\_3** returns a compressed Fekete rule 3.
-   **FEKETE\_SUBRULE\_4** returns a compressed Fekete rule 4.
-   **FEKETE\_SUBRULE\_5** returns a compressed Fekete rule 5.
-   **FEKETE\_SUBRULE\_6** returns a compressed Fekete rule 6.
-   **FEKETE\_SUBRULE\_7** returns a compressed Fekete rule 7.
-   **FILE\_NAME\_INC** increments a partially numeric file name.
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
-   **TIMESTRING** returns the current YMDHMS date as a string.
-   **TRIANGLE\_AREA** computes the area of a triangle.
-   **TRIANGLE\_POINTS\_PLOT** plots a triangle and some points.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 15 March 2014.*
