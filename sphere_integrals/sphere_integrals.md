SPHERE\_INTEGRALS\
Integrals On the Surface of the Unit Sphere in 3D {#sphere_integrals-integrals-on-the-surface-of-the-unit-sphere-in-3d align="center"}
=================================================

------------------------------------------------------------------------

**SPHERE\_INTEGRALS** is a C++ library which returns the exact value of
the integral of any monomial over the surface of the unit sphere in 3D.

The surface of the unit sphere in 3D is defined by

            x^2 + y^2 + z^2 = 1
          

The integrands are all of the form

            f(x,y,z) = x^a y^b z^c
          

where the exponents are nonnegative integers. If any exponent is an odd
integer, the integral will be zero. Thus, the "interesting" results
occur when all exponents are even.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SPHERE\_INTEGRALS** is available in [a C
version](../../c_src/sphere_integrals/sphere_integrals.md) and [a C++
version](../../master/sphere_integrals/sphere_integrals.md) and [a
FORTRAN77 version](../../f77_src/sphere_integrals/sphere_integrals.md)
and [a FORTRAN90
version](../../f_src/sphere_integrals/sphere_integrals.md) and [a
MATLAB version](../../m_src/sphere_integrals/sphere_integrals.md) and
[a Python version](../../py_src/sphere_integrals/sphere_integrals.md).

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

[SPHERE\_MONTE\_CARLO](../../master/sphere_monte_carlo/sphere_monte_carlo.md),
a C++ library which uses the Monte Carlo method to estimate the integral
of a function over the surface of the unit sphere in 3D.

[SQUARE\_INTEGRALS](../../master/square_integrals/square_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit square in 2D.

[TETRAHEDRON\_INTEGRALS](../../master/tetrahedron_integrals/tetrahedron_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit tetrahedron in 3D.

[TRIANGLE\_INTEGRALS](../../c_src/triangle_integrals/triangle_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit triangle in 2D.

[WEDGE\_INTEGRALS](../../master/wedge_integrals/wedge_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit wedge in 3D.

### Source Code: {#source-code align="center"}

-   [sphere\_integrals.cpp](sphere_integrals.cpp), the source code.
-   [sphere\_integrals.hpp](sphere_integrals.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [sphere\_integrals\_prb.cpp](sphere_integrals_prb.cpp), a sample
    calling program.
-   [sphere\_integrals\_prb\_output.txt](sphere_integrals_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **COS\_POWER\_INT** evaluates the cosine power integral.
-   **P01\_EXACT** returns the exact integral of function 1 over the
    unit sphere.
-   **P01\_F** evaluates test function \#1 in the unit sphere.
-   **P01\_PARAM** sets or gets the value of the parameter for test
    function 1.
-   **P01\_PARAM\_GET** gets the value of the parameter for test
    function 1.
-   **P01\_PARAM\_SET** sets the parameter for test function 1.
-   **P02\_EXACT** returns the exact integral of function 2 over the
    unit sphere.
-   **P02\_F** evaluates test function \#2 in the unit sphere.
-   **P02\_PARAM** sets or gets the value of the parameter for test
    function 2.
-   **P02\_PARAM\_GET** gets the value of the parameter for test
    function 2.
-   **P02\_PARAM\_SET** sets the parameter for test function 2.
-   **P03\_EXACT** returns the exact integral of function 3 over the
    unit sphere.
-   **P03\_F** evaluates test function \#3 in the unit sphere.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **R8VEC\_NORMAL\_01\_NEW** returns a unit pseudonormal R8VEC.
-   **R8VEC\_SUM** returns the sum of an R8VEC.
-   **R8VEC\_UNIFORM\_01\_NEW** returns a new unit pseudorandom R8VEC.
-   **SIN\_POWER\_INT** evaluates the sine power integral.
-   **SPHERE\_UNIT\_SAMPLE** returns sample points from the unit sphere.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 06 January 2014.*
