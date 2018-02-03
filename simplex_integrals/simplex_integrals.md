SIMPLEX\_INTEGRALS\
Integrals Inside the Unit Simplex in M Dimensions {#simplex_integrals-integrals-inside-the-unit-simplex-in-m-dimensions align="center"}
=================================================

------------------------------------------------------------------------

**SIMPLEX\_INTEGRALS** is a C++ library which returns the exact value of
the integral of any monomial over the interior of the unit simplex in M
dimensions.

The interior of the unit simplex in M dimensions is defined by

            0 <= X(1:M)
            sum ( 1 <= I <= M ) X(I) <= 1
          

The integrands are all of the form

            f(x) = product ( 1 <= I <= M) X(I)^E(I)
          

where the exponents are nonnegative integers.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SIMPLEX\_INTEGRALS** is available in [a C
version](../../c_src/simplex_integrals/simplex_integrals.md) and [a
C++ version](../../master/simplex_integrals/simplex_integrals.md) and
[a FORTRAN77
version](../../f77_src/simplex_integrals/simplex_integrals.md) and [a
FORTRAN90 version](../../f_src/simplex_integrals/simplex_integrals.md)
and [a MATLAB
version](../../m_src/simplex_integrals/simplex_integrals.md) and [a
Python version](../../py_src/simplex_integrals/simplex_integrals.md).

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

[SPHERE\_INTEGRALS](../../master/sphere_integrals/sphere_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the surface of the unit sphere in 3D.

[SIMPLEX\_GM\_RULE](../../master/simplex_gm_rule/simplex_gm_rule.md),
a C++ library which defines Grundmann-Moeller quadrature rules over the
interior of a triangle in 2D, a tetrahedron in 3D, or over the interior
of the simplex in M dimensions.

[SIMPLEX\_GRID](../../master/simplex_grid/simplex_grid.md), a C++
library which generates a regular grid of points over the interior of an
arbitrary simplex in M dimensions.

[SIMPLEX\_MONTE\_CARLO](../../master/simplex_monte_carlo/simplex_monte_carlo.md),
a C++ library which uses the Monte Carlo method to estimate the integral
of a function over the interior of the unit simplex in M dimensions.

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

-   Jean Lasserre, Konstantin Avrachenkov,\
    The multidimensional version of the integral from A to B of X to the
    P,\
    American Mathematics Monthly,\
    Volume 108, Number 2, 2001, pages 151\`-154.

### Source Code: {#source-code align="center"}

-   [simplex\_integrals.cpp](simplex_integrals.cpp), the source code.
-   [simplex\_integrals.hpp](simplex_integrals.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [simplex\_integrals\_prb.cpp](simplex_integrals_prb.cpp), a sample
    calling program.
-   [simplex\_integrals\_prb\_output.txt](simplex_integrals_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **I4VEC\_UNIFORM\_AB** returns a scaled pseudorandom I4VEC.
-   **MONOMIAL\_VALUE** evaluates a monomial.
-   **R8VEC\_UNIFORM\_01** returns a unit pseudorandom R8VEC.
-   **SIMPLEX01\_MONOMIAL\_INTEGRAL:** integral in unit simplex in M
    dimensions.
-   **SIMPLEX01\_SAMPLE** samples the unit simplex in M dimensions.
-   **SIMPLEX01\_VOLUME** computes the volume of the unit simplex in M
    dimensions.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 16 January 2014.*
