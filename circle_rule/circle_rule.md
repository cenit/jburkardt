CIRCLE\_RULE\
Quadrature Rules for the Unit Circle {#circle_rule-quadrature-rules-for-the-unit-circle align="center"}
====================================

------------------------------------------------------------------------

**CIRCLE\_RULE** is a C++ library which computes quadrature rules over
the circumference of the unit circle in 2D.

The user specifies the value NT, the number of equally spaced angles.
The program returns vectors T(1:NT) and W(1:NT), which define the rule
Q(f).

Given NT and the vectors T and W, the integral I(f) of a function f(x,y)
is estimated by Q(f) as follows:

            q = 0.0
            for i = 1, nt
              x = cos ( t(i) )
              y = sin ( t(i) )
              q = q + w(j) * f ( x, y )
            end
          

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**CIRCLE\_RULE** is available in [a C
version](../../c_src/circle_rule/circle_rule.html) and [a C++
version](../../cpp_src/circle_rule/circle_rule.html) and [a FORTRAN77
version](../../f77_src/circle_rule/circle_rule.html) and [a FORTRAN90
version](../../f_src/circle_rule/circle_rule.html) and [a MATLAB
version](../../m_src/circle_rule/circle_rule.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CIRCLE\_ARC\_GRID](../../cpp_src/circle_arc_grid/circle_arc_grid.html),
a C++ program which computes points equally spaced along a circular arc;

[CIRCLE\_INTEGRALS](../../cpp_src/circle_integrals/circle_integrals.html),
a C++ library which returns the exact value of the integral of any
monomial over the circumference of the unit circle in 2D.

[CIRCLE\_MONTE\_CARLO](../../cpp_src/circle_monte_carlo/circle_monte_carlo.html),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function on the circumference of the unit circle in 2D;

[CUBE\_FELIPPA\_RULE](../../cpp_src/cube_felippa_rule/cube_felippa_rule.html),
a C++ library which returns the points and weights of a Felippa
quadrature rule over the interior of a cube in 3D.

[DISK\_RULE](../../cpp_src/disk_rule/disk_rule.html), a C++ library
which computes quadrature rules over the interior of the unit disk in
2D.

[PYRAMID\_FELIPPA\_RULE](../../cpp_src/pyramid_felippa_rule/pyramid_felippa_rule.html),
a C++ library which returns Felippa's quadratures rules for
approximating integrals over the interior of a pyramid in 3D.

[PYRAMID\_RULE](../../cpp_src/pyramid_rule/pyramid_rule.html), a C++
program which computes a quadrature rule over the interior of the unit
pyramid in 3D.

[SPHERE\_LEBEDEV\_RULE](../../cpp_src/sphere_lebedev_rule/sphere_lebedev_rule.html),
a C++ library which computes Lebedev quadrature rules on the surface of
the unit sphere in 3D.

[SQUARE\_FELIPPA\_RULE](../../cpp_src/square_felippa_rule/square_felippa_rule.html),
a C++ library which returns the points and weights of a Felippa
quadrature rule over the interior of a square in 2D.

[STROUD](../../cpp_src/stroud/stroud.html), a C++ library which defines
quadrature rules for a variety of M-dimensional regions, including the
interior of the square, cube and hypercube, the pyramid, cone and
ellipse, the hexagon, the M-dimensional octahedron, the circle, sphere
and hypersphere, the triangle, tetrahedron and simplex, and the surface
of the circle, sphere and hypersphere.

[TETRAHEDRON\_FELIPPA\_RULE](../../cpp_src/tetrahedron_felippa_rule/tetrahedron_felippa_rule.html),
a C++ library which returns Felippa's quadratures rules for
approximating integrals over the interior of a tetrahedron in 3D.

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

-   [circle\_rule.cpp](circle_rule.cpp), the source code.
-   [circle\_rule.hpp](circle_rule.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [circle\_rule\_prb.cpp](circle_rule_prb.cpp), a sample calling
    program.
-   [circle\_rule\_prb\_output.txt](circle_rule_prb_output.txt), the
    output file.

### List of Routines: {#list-of-routines align="center"}

-   **CIRCLE\_RULE** computes a quadrature rule for the unit circle.
-   **CIRCLE01\_MONOMIAL\_INTEGRAL:** integral on circumference of unit
    circle in 2D.
-   **R8\_GAMMA** evaluates Gamma(X) for a real argument.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 06 April 2014.*
