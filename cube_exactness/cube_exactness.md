CUBE\_EXACTNESS\
Exactness of 3D Quadrature Rules {#cube_exactness-exactness-of-3d-quadrature-rules align="center"}
================================

------------------------------------------------------------------------

**CUBE\_EXACTNESS** is a C++ library which investigates the polynomial
exactness of quadrature rules over the interior of a cube in 3D.

We assume that the integral to be approximated is of a Legendre type,
over a rectangular region:

            I(f) = integral ( z1 <= z <= z2 )
                   integral ( y1 <= y <= y2 ) 
                   integral ( x1 <= x <= x2 ) f(x,y,z) dx dy dz
          

and that such integrals are to be approximated by:

            Q(f) = sum ( 1 <= i <= N ) w(i) * f(x(i),y(i),z(i))
          

To determine the exactness of a given quadrature rule, we simply compare
the exact integral I(f) to the estimated integral Q(f) for a sequence of
monomials of increasing total degree D. This sequence begins with:

            D = 0:  1
            D = 1:  x    y     z
            D = 2:  x^2  xy    xz    y^2   yz   z^2 
            D = 3:  x^3  x^2y  x^2z  xy^2  xyz  xz^2  y^3  y^2z  yz^2  z^3
          

and the exactness of a quadrature rule is defined as the largest value
of D such that I(f) and Q(f) are equal for all monomials up to and
including those of total degree D.

Note that if the 3D quadrature rule is formed as a product of two 1D
rules, then knowledge of the 1D exactness of the individual factors
gives sufficient information to determine the exactness of the product
rule, which will simply be the minimum of the exactnesses of the three
factor rules.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**CUBE\_EXACTNESS** is available in [a C
version](../../c_src/cube_exactness/cube_exactness.md) and [a C++
version](../../master/cube_exactness/cube_exactness.md) and [a
FORTRAN77 version](../../f77_src/cube_exactness/cube_exactness.md) and
[a FORTRAN90 version](../../f_src/cube_exactness/cube_exactness.md)
and [a MATLAB version](../../m_src/cube_exactness/cube_exactness.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CUBE\_FELIPPA\_RULE](../../master/cube_felippa_rule/cube_felippa_rule.md),
a C++ library which returns the points and weights of a Felippa
quadrature rule over the interior of a cube in 3D.

[CUBE\_GRID](../../master/cube_grid/cube_grid.md), a C++ library
which computes a grid of points over the interior of a cube in 3D.

[HYPERCUBE\_EXACTNESS](../../master/hypercube_exactness/hypercube_exactness.md),
a C++ program which measures the monomial exactness of an M-dimensional
quadrature rule over the interior of the unit hypercube in M dimensions.

[PYRAMID\_EXACTNESS](../../master/pyramid_exactness/pyramid_exactness.md),
a C++ program which investigates the monomial exactness of a quadrature
rule over the interior of a pyramid in 3D.

[SPHERE\_EXACTNESS](../../master/sphere_exactness/sphere_exactness.md),
a C++ program which tests the monomial exactness of a quadrature rule on
the surface of the unit sphere in 3D.

[SQUARE\_EXACTNESS](../../master/square_exactness/square_exactness.md),
a C++ library which investigates the polynomial exactness of quadrature
rules for f(x,y) over the interior of a rectangle in 2D.

[TETRAHEDRON\_EXACTNESS](../../master/tetrahedron_exactness/tetrahedron_exactness.md),
a C++ program which investigates the monomial exactness of a quadrature
rule over the interior of a tetrahedron in 3D.

[TRIANGLE\_EXACTNESS](../../master/triangle_exactness/triangle_exactness.md),
a C++ program which investigates the monomial exactness quadrature rule
over the interior of a triangle in 2D.

[WEDGE\_EXACTNESS](../../master/wedge_exactness/wedge_exactness.md),
a C++ program which investigates the monomial exactness of a quadrature
rule over the interior of the unit wedge in 3D.

### Reference: {#reference align="center"}

1.  Philip Davis, Philip Rabinowitz,\
    Methods of Numerical Integration,\
    Second Edition,\
    Dover, 2007,\
    ISBN: 0486453391,\
    LC: QA299.3.D28.

### Source Code: {#source-code align="center"}

-   [cube\_exactness.cpp](cube_exactness.cpp), the source code.
-   [cube\_exactness.hpp](cube_exactness.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [cube\_exactness\_prb.cpp](cube_exactness_prb.cpp), a sample calling
    program.
-   [cube\_exactness\_prb\_output.txt](cube_exactness_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **LEGENDRE\_3D\_EXACTNESS:** monomial exactness for the 3D Legendre
    integral.
-   **LEGENDRE\_3D\_MONOMIAL\_INTEGRAL** the Legendre integral of a
    monomial.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 16 August 2014.*
