HYPERSPHERE\_INTEGRALS\
Integrals on the Surface of the Unit Hypersphere in M Dimensions {#hypersphere_integrals-integrals-on-the-surface-of-the-unit-hypersphere-in-m-dimensions align="center"}
================================================================

------------------------------------------------------------------------

**HYPERSPHERE\_INTEGRALS** is a C++ library which returns the exact
value of the integral of any monomial over the surface of the unit
hypersphere in M dimensions.

The surface of the unit hypersphere in M dimensions is defined by

            sum ( 1 <= i <= m ) x(i)^2 = 1
          

The integrands are all of the form

            f(x) = product ( 1 <= m <= m ) x(i) ^ e(i)
          

where the exponents e are nonnegative integers. If any exponent is an
odd integer, the integral will be zero. Thus, the "interesting" results
occur when all exponents are even.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**HYPERSPHERE\_INTEGRALS** is available in [a C
version](../../c_src/hypersphere_integrals/hypersphere_integrals.md)
and [a C++
version](../../master/hypersphere_integrals/hypersphere_integrals.md)
and [a FORTRAN77
version](../../f77_src/hypersphere_integrals/hypersphere_integrals.md)
and [a FORTRAN90
version](../../f_src/hypersphere_integrals/hypersphere_integrals.md)
and [a MATLAB
version](../../m_src/hypersphere_integrals/hypersphere_integrals.md)
and [a Python
version](../../py_src/hypersphere_integrals/hypersphere_integrals.md).

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

[DISK\_INTEGRALS](../../master/disk_integrals/disk_integrals.md), a
C++ library which returns the exact value of the integral of any
monomial over the interior of the unit disk in 2D.

[HYPERBALL\_INTEGRALS](../../master/hyperball_integrals/hyperball_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit hyperball in M dimensions.

[HYPERCUBE\_INTEGRALS](../../master/hypercube_integrals/hypercube_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit hypercube in M dimensions.

[HYPERSPHERE\_MONTE\_CARLO](../../master/hypersphere_monte_carlo/hypersphere_monte_carlo.md),
a C++ library which uses the Monte Carlo method to estimate the integral
of a function over the surface of the unit hypersphere in M dimensions.

[HYPERSPHERE\_PROPERTIES](../../master/hypersphere_properties/hypersphere_properties.md),
a C++ library which carries out various operations for an M-dimensional
hypersphere, including converting between Cartesian and spherical
coordinates, stereographic projection, sampling the surface of the
sphere, and computing the surface area and volume.

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
monomial over the interior of the unit triangle in 2D.

[WEDGE\_INTEGRALS](../../master/wedge_integrals/wedge_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit wedge in 3D.

### Reference: {#reference align="center"}

1.  Gerald Folland,\
    How to Integrate a Polynomial Over a Sphere,\
    American Mathematical Monthly,\
    Volume 108, Number 5, May 2001, pages 446-448.

### Source Code: {#source-code align="center"}

-   [hypersphere\_monte\_carlo.cpp](hypersphere_monte_carlo.cpp), the
    source code.
-   [hypersphere\_monte\_carlo.hpp](hypersphere_monte_carlo.hpp), the
    include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [hypersphere\_monte\_carlo\_prb.cpp](hypersphere_monte_carlo_prb.cpp),
    a sample calling program.
-   [hypersphere\_monte\_carlo\_prb\_output.txt](hypersphere_monte_carlo_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **HYPERSPHERE01\_AREA** returns the surface area of the unit
    hypersphere.
-   **HYPERSPHERE01\_MONOMIAL\_INTEGRAL:** monomial integrals on the
    unit hypersphere.
-   **HYPERSPHERE01\_SAMPLE** uniformly samples the surface of the unit
    hypersphere.
-   **I4VEC\_UNIFORM\_AB** returns a scaled pseudorandom I4VEC.
-   **MONOMIAL\_VALUE** evaluates a monomial.
-   **R8\_GAMMA** evaluates Gamma(X) for a real argument.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **R8VEC\_NORMAL\_01** returns a unit pseudonormal R8VEC.
-   **R8VEC\_UNIFORM\_01** returns a unit pseudorandom R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 07 January 2014.*
