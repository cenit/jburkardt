HYPERCUBE\_INTEGRALS\
Integrals Over the Interior of the Unit Hypercube in M Dimensions {#hypercube_integrals-integrals-over-the-interior-of-the-unit-hypercube-in-m-dimensions align="center"}
=================================================================

------------------------------------------------------------------------

**HYPERCUBE\_INTEGRALS** is a C++ library which returns the exact value
of the integral of any monomial over the interior of the unit hypercube
in M dimensions.

The interior of the unit hypercube in M dimensions is defined by

            0 <= X(1:M) <= 1.
          

The integrands are all of the form

            F(X) = product ( 1 <= I <= M ) X(I)^E(I)
          

where the exponents are nonnegative integers.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**HYPERCUBE\_INTEGRALS** is available in [a C
version](../../c_src/hypercube_integrals/hypercube_integrals.md) and
[a C++
version](../../master/hypercube_integrals/hypercube_integrals.md) and
[a FORTRAN77
version](../../f77_src/hypercube_integrals/hypercube_integrals.md) and
[a FORTRAN90
version](../../f_src/hypercube_integrals/hypercube_integrals.md) and
[a MATLAB
version](../../m_src/hypercube_integrals/hypercube_integrals.md) and
[a Python
version](../../py_src/hypercube_integrals/hypercube_integrals.md)..

### Related Data and Programs: {#related-data-and-programs align="center"}

[BALL\_INTEGRALS](../../master/ball_integrals/ball_integrals.md), a
C++ library which returns the exact value of the integral of any
monomial over the interior of the unit ball in 3D.

[CIRCLE\_INTEGRALS](../../master/circle_integrals/circle_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the circumference of the unit circle in 2D.

[CUBE\_INTEGRALS](../../master/cube_integrals/cube_integrals.md), a
C++ library which returns the exact value of the integral of any
monomial over the interior of the unit cube in 3D.

[DISK\_INTEGRALS](../../master/disk_integrals/disk_integrals.md), a
C++ library which returns the exact value of the integral of any
monomial over the interior of the unit disk in 2D.

[HYPERCUBE\_GRID](../../master/hypercube_grid/hypercube_grid.md), a
C++ library which computes a grid of points over the interior of a
hypercube in M dimensions.

[HYPERBALL\_INTEGRALS](../../master/hyperball_integrals/hyperball_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit hyperball in M dimensions.

[HYPERCUBE\_MONTE\_CARLO](../../master/hypercube_monte_carlo/hypercube_monte_carlo.md),
a C++ library which uses the Monte Carlo method to estimate the integral
of a function over the interior of the unit hypercube in M dimensions.

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
monomial over the interior of the unit triangle in 2D.

[WEDGE\_INTEGRALS](../../master/wedge_integrals/wedge_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit wedge in 3D.

### Source Code: {#source-code align="center"}

-   [hypercube\_integrals.cpp](hypercube_integrals.cpp), the source
    code.
-   [hypercube\_integrals.hpp](hypercube_integrals.hpp), the include
    file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [hypercube\_integrals\_prb.cpp](hypercube_integrals_prb.cpp), a
    sample calling program.
-   [hypercube\_integrals\_prb\_output.txt](hypercube_integrals_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **HYPERCUBE01\_MONOMIAL\_INTEGRAL:** integral inside unit hypercube,
    M dimensions.
-   **HYPERCUBE01\_SAMPLE** samples interior of the unit hypercube in M
    dimensions.
-   **HYPERCUBE01\_VOLUME:** volume of the unit hypercube in M
    dimensions.
-   **I4VEC\_UNIFORM\_AB** returns a scaled pseudorandom I4VEC.
-   **MONOMIAL\_VALUE** evaluates a monomial.
-   **R8MAT\_UNIFORM\_01** fills an R8MAT with unit pseudorandom
    numbers.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 19 January 2014.*
