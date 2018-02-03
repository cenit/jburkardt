DISK\_INTEGRALS\
Integrals Inside the Unit Disk in 2D {#disk_integrals-integrals-inside-the-unit-disk-in-2d align="center"}
====================================

------------------------------------------------------------------------

**DISK\_INTEGRALS** is a C++ library which returns the exact value of
the integral of any monomial over the interior of the unit disk in 2D.

The interior of the unit disk in 2D is defined by

            x^2 + y^2 <= 1
          

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

**DISK\_INTEGRALS** is available in [a C
version](../../c_src/disk_integrals/disk_integrals.md) and [a C++
version](../../master/disk_integrals/disk_integrals.md) and [a
FORTRAN77 version](../../f77_src/disk_integrals/disk_integrals.md) and
[a FORTRAN90 version](../../f_src/disk_integrals/disk_integrals.md)
and [a MATLAB version](../../m_src/disk_integrals/disk_integrals.md)
and [a Python version](../../py_src/disk_integrals/disk_integrals.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BALL\_INTEGRALS](../../master/ball_integrals/ball_integrals.md), a
C++ library which returns the exact value of the integral of any
monomial over the interior of the unit ball in 3D.

[CIRCLE\_INTEGRALS](../../master/circle_integrals/circle_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the surface of the unit circle in 2D.

[CUBE\_INTEGRALS](../../master/cube_integrals/cube_integrals.md), a
C++ library which returns the exact value of the integral of any
monomial over the interior of the unit cube in 3D.

[DISK\_MONTE\_CARLO](../../master/disk_monte_carlo/disk_monte_carlo.md),
a C++ library which uses the Monte Carlo method to estimate the integral
of a function over the interior of the unit disk in 2D.

[DISK\_RULE](../../master/disk_rule/disk_rule.md), a C++ library
which computes quadrature rules for the unit disk in 2D, that is, the
interior of the circle of radius 1 and center (0,0).

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

-   [disk\_integrals.cpp](disk_integrals.cpp), the source code.
-   [disk\_integrals.hpp](disk_integrals.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [disk\_integrals\_prb.cpp](disk_integrals_prb.cpp), a sample calling
    program.
-   [disk\_integrals\_prb\_output.txt](disk_integrals_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **DISK01\_AREA** returns the area of the unit disk in 2D.
-   **DISK01\_MONOMIAL\_INTEGRAL** returns monomial integrals in the
    unit disk in 2D.
-   **DISK01\_SAMPLE** uniformly samples points from the unit disk in
    2D.
-   **I4VEC\_UNIFORM\_AB** returns a scaled pseudorandom I4VEC.
-   **MONOMIAL\_VALUE** evaluates a monomial.
-   **R8\_GAMMA** evaluates Gamma(X) for a real argument.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **R8VEC\_NORMAL\_01** returns a unit pseudonormal R8VEC.
-   **R8VEC\_UNIFORM\_01** returns a unit pseudorandom R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 08 January 2014.*
