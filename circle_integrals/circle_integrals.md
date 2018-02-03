CIRCLE\_INTEGRALS\
Integrals Along the Circumference of the Unit Circle in 2D {#circle_integrals-integrals-along-the-circumference-of-the-unit-circle-in-2d align="center"}
==========================================================

------------------------------------------------------------------------

**CIRCLE\_INTEGRALS** is a C++ library which returns the exact value of
the integral of any monomial along the circumference of the unit circle
in 2D.

The circumference of the unit circle in 2D is defined by

            x^2 + y^2 = 1
          

The integrands are all of the form

            f(x,y) = x^e1 * y^e2
          

where the exponents are nonnegative integers. If any exponent is an odd
integer, the integral will be zero. Thus, the "interesting" results
occur when all exponents are even.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**CIRCLE\_INTEGRALS** is available in [a C
version](../../c_src/circle_integrals/circle_integrals.md) and [a C++
version](../../master/circle_integrals/circle_integrals.md) and [a
FORTRAN77 version](../../f77_src/circle_integrals/circle_integrals.md)
and [a FORTRAN90
version](../../f_src/circle_integrals/circle_integrals.md) and [a
MATLAB version](../../m_src/circle_integrals/circle_integrals.md) and
[a Python version](../../py_src/circle_integrals/circle_integrals.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BALL\_INTEGRALS](../../master/ball_integrals/ball_integrals.md), a
C++ library which returns the exact value of the integral of any
monomial over the interior of the unit ball in 3D.

[CIRCLE\_MONTE\_CARLO](../../master/circle_monte_carlo/circle_monte_carlo.md),
a C++ library which uses the Monte Carlo method to estimate the integral
of a function over the circumference of the unit circle in 2D.

[CIRCLE\_RULE](../../master/circle_rule/circle_rule.md), a C++
library which computes quadrature rules for the unit circle in 2D, that
is, the circumference of the circle of radius 1 and center (0,0).

[CUBE\_INTEGRALS](../../master/cube_integrals/cube_integrals.md), a
C++ library which returns the exact value of the integral of any
monomial over the interior of the unit cube in 3D.

[DISK\_INTEGRALS](../../master/disk_integrals/disk_integrals.md), a
C++ library which returns the exact value of the integral of any
monomial over the interior of the unit disk in 2D.

[HYPERBALL\_INTEGRALS](../../master/hyperball_integrals/hyperball_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit hyperball in M dimensions.

[HYPERCUBE\_INTEGRALS](../../master/hypercube_integrals/hypercube_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit hypercube in M dimensions.

[HYPERSPHERE\_INTEGRALS](../../master/hypersphere_integrals/hypersphere_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the surface of the unit hypersphere in M dimensions.

[LINE\_INTEGRALS](../../master/line_integrals/line_integrals.md), a
C++ library which returns the exact value of the integral of any
monomial over the length of the unit line in 1D.

[POLYGON\_INTEGRALS](../../master/polygon_integrals/polygon_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the interior of a polygon in 2D.

[PYRAMID\_INTEGRALS](../../master/pyramid_integrals/pyramid_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit pyramid in 3D.

[SIMPLEX\_INTEGRALS](../../master/simplex_integrals/simplex_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit simplex in M dimensions.

[SPHERE\_INTEGRALS](../../master/sphere_integrals/sphere_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the surface of the unit sphere in 3D.

[SQUARE\_INTEGRALS](../../master/square_integrals/square_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit square in 2D.

[TETRAHEDRON\_INTEGRALS](../../master/tetrahedron_integrals/tetrahedron_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit tetrahedron in 3D.

[TRIANGLE\_INTEGRALS](../../master/triangle_integrals/triangle_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the interior of a triangle in 2D.

[WEDGE\_INTEGRALS](../../master/wedge_integrals/wedge_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit wedge in 3D.

### Reference: {#reference align="center"}

1.  Gerald Folland,\
    How to Integrate a Polynomial Over a Sphere,\
    American Mathematical Monthly,\
    Volume 108, Number 5, May 2001, pages 446-448.

### Source Code: {#source-code align="center"}

-   [circle\_integrals.cpp](circle_integrals.cpp), the source code.
-   [circle\_integrals.hpp](circle_integrals.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [circle\_integrals\_prb.cpp](circle_integrals_prb.cpp), a sample
    calling program.
-   [circle\_integrals\_prb\_output.txt](circle_integrals_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **CIRCLE01\_LENGTH:** length of the circumference of the unit circle
    in 2D.
-   **CIRCLE01\_MONOMIAL\_INTEGRAL:** integral on circumference of unit
    circle in 2D.
-   **CIRCLE01\_SAMPLE** samples the circumference of the unit circle in
    2D.
-   **I4VEC\_UNIFORM\_AB** returns a scaled pseudorandom I4VEC.
-   **MONOMIAL\_VALUE** evaluates a monomial.
-   **R8\_GAMMA** evaluates Gamma(X) for a real argument.
-   **R8VEC\_UNIFORM\_01** returns a unit pseudorandom R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 12 January 2014.*
