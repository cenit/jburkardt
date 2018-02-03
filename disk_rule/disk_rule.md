DISK\_RULE\
Quadrature Rules for the Unit Disk {#disk_rule-quadrature-rules-for-the-unit-disk align="center"}
==================================

------------------------------------------------------------------------

**DISK\_RULE** is a C++ library which computes a quadrature rule over
the interior of the disk in 2D.

The user specifies values NT and NR, where NT is the number of equally
spaced angles, and NR controls the number of radial points. The program
returns vectors T(1:NT), R(1:NR) and W(1:NR), which define the rule
Q(f).

To use a rule that is equally powerful in R and T, typically, set NT = 2
\* NR.

Given NT and NR, and the vectors T, R and W, the integral I(f) of a
function f(x,y) is estimated by Q(f) as follows:

            s = 0.0
            for j = 1, nr
              for i = 1, nt
                x = r(j) * cos ( t(i) )
                y = r(j) * sin ( t(i) )
                s = s + w(j) * f ( x, y )
              end
            end
            area = pi;
            q = area * s;
          

To approximate an integral over a circle with center (XC,YC) and radius
RC:

            s = 0.0
            for j = 1, nr
              for i = 1, nt
                x = xc + rc * r(j) * cos ( t(i) )
                y = yc + rc * r(j) * sin ( t(i) )
                s = s + w(j) * f ( x, y )
              end
            end
            area = rc * rc * pi;
            q = area * s;
          

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**DISK\_RULE** is available in [a C
version](../../c_src/disk_rule/disk_rule.html) and [a C++
version](../../cpp_src/disk_rule/disk_rule.html) and [a FORTRAN77
version](../../f77_src/disk_rule/disk_rule.html) and [a FORTRAN90
version](../../f_src/disk_rule/disk_rule.html) and [a MATLAB
version](../../m_src/disk_rule/disk_rule.html) and [a Python
version](../../py_src/disk_rule/disk_rule.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CIRCLE\_RULE](../../cpp_src/circle_rule/circle_rule.html), a C++
library which computes quadrature rules over the circumference of the
unit circle in 2D.

[CUBE\_FELIPPA\_RULE](../../cpp_src/cube_felippa_rule/cube_felippa_rule.html),
a C++ library which returns the points and weights of a Felippa
quadrature rule over the interior of a cube in 3D.

[DISK\_INTEGRALS](../../cpp_src/disk_integrals/disk_integrals.html), a
C++ library which returns the exact value of the integral of any
monomial over the interior of the unit disk in 2D.

[DISK\_MONTE\_CARLO](../../cpp_src/disk_monte_carlo/disk_monte_carlo.html),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of the unit disk in 2D;

[PYRAMID\_FELIPPA\_RULE](../../cpp_src/pyramid_felippa_rule/pyramid_felippa_rule.html),
a C++ library which returns Felippa's quadratures rules for
approximating integrals over the interior of a pyramid in 3D.

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
2.  Sylvan Elhay, Jaroslav Kautsky,\
    Algorithm 655: IQPACK, FORTRAN Subroutines for the Weights of
    Interpolatory Quadrature,\
    ACM Transactions on Mathematical Software,\
    Volume 13, Number 4, December 1987, pages 399-415.

### Source Code: {#source-code align="center"}

-   [disk\_rule.cpp](disk_rule.cpp), the source code.
-   [disk\_rule.hpp](disk_rule.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [disk\_rule\_prb.cpp](disk_rule_prb.cpp), a sample calling program.
-   [disk\_rule\_prb\_output.txt](disk_rule_prb_output.txt), the output
    file.

### List of Routines: {#list-of-routines align="center"}

-   **DISK\_RULE** computes a quadrature rule for the unit disk.
-   **DISK01\_MONOMIAL\_INTEGRAL** returns monomial integrals in the
    unit disk in 2D.
-   **IMTQLX** diagonalizes a symmetric tridiagonal matrix.
-   **LEGENDRE\_EK\_COMPUTE:** Legendre quadrature rule by the
    Elhay-Kautsky method.
-   **R8\_EPSILON** returns the R8 roundoff unit.
-   **R8\_GAMMA** evaluates Gamma(X) for a real argument.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 17 March 2014.*
