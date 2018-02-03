CUBE\_INTEGRALS\
Integrals Over the Interior of the Unit Cube in 3D {#cube_integrals-integrals-over-the-interior-of-the-unit-cube-in-3d align="center"}
==================================================

------------------------------------------------------------------------

**CUBE\_INTEGRALS** is a C++ library which returns the exact value of
the integral of any monomial over the interior of the unit cube in 3D.

The interior of the unit cube in 3D is defined by

            0 <= X <= 1,
            0 <= Y <= 1,
            0 <= Z <= 1.
          

The integrands are all of the form

            f(x,y,z) = x^e1 * y^e2 * z^e3.
          

where the exponents are nonnegative integers.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**CUBE\_INTEGRALS** is available in [a C
version](../../c_src/cube_integrals/cube_integrals.html) and [a C++
version](../../cpp_src/cube_integrals/cube_integrals.html) and [a
FORTRAN77 version](../../f77_src/cube_integrals/cube_integrals.html) and
[a FORTRAN90 version](../../f_src/cube_integrals/cube_integrals.html)
and [a MATLAB version](../../m_src/cube_integrals/cube_integrals.html)
and [a Python version](../../py_src/cube_integrals/cube_integrals.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BALL\_INTEGRALS](../../cpp_src/ball_integrals/ball_integrals.html), a
C++ library which returns the exact value of the integral of any
monomial over the interior of the unit ball in 3D.

[CIRCLE\_INTEGRALS](../../cpp_src/circle_integrals/circle_integrals.html),
a C++ library which returns the exact value of the integral of any
monomial over the circumference of the unit circle in 2D.

[CUBE\_ARBQ\_RULE](../../cpp_src/cube_arbq_rule/cube_arbq_rule.html), a
C++ library which returns quadrature rules, with exactness up to total
degree 15, over the interior of the symmetric cube in 3D, by Hong Xiao
and Zydrunas Gimbutas.

[CUBE\_EXACTNESS](../../cpp_src/cube_exactness/cube_exactness.html), a
C++ library which investigates the polynomial exactness of quadrature
rules over the interior of a cube in 3D.

[CUBE\_FELIPPA\_RULE](../../cpp_src/cube_felippa_rule/cube_felippa_rule.html),
a C++ library which returns the points and weights of a Felippa
quadrature rule over the interior of a cube in 3D.

[CUBE\_GRID](../../cpp_src/cube_grid/cube_grid.html), a C++ library
which computes a grid of points over the interior of a cube in 3D.

[CUBE\_MONTE\_CARLO](../../cpp_src/cube_monte_carlo/cube_monte_carlo.html),
a C++ library which uses the Monte Carlo method to estimate the integral
of a function over the interior of the unit cube in 3D.

[DISK\_INTEGRALS](../../cpp_src/disk_integrals/disk_integrals.html), a
C++ library which returns the exact value of the integral of any
monomial over the interior of the unit disk in 2D.

[HYPERBALL\_INTEGRALS](../../cpp_src/hyperball_integrals/hyperball_integrals.html),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit hyperball in M dimensions.

[HYPERCUBE\_INTEGRALS](../../cpp_src/hypercube_integrals/hypercube_integrals.html),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit hypercube in M dimensions.

[HYPERSPHERE\_INTEGRALS](../../cpp_src/hypersphere_integrals/hypersphere_integrals.html),
a C++ library which returns the exact value of the integral of any
monomial over the surface of the unit hypersphere in M dimensions.

[LINE\_INTEGRALS](../../cpp_src/line_integrals/line_integrals.html), a
C++ library which returns the exact value of the integral of any
monomial over the length of the unit line in 1D.

[POLYGON\_INTEGRALS](../../cpp_src/polygon_integrals/polygon_integrals.html),
a C++ library which returns the exact value of the integral of any
monomial over the interior of a polygon in 2D.

[PYRAMID\_INTEGRALS](../../cpp_src/pyramid_integrals/pyramid_integrals.html),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit pyramid in 3D.

[SIMPLEX\_INTEGRALS](../../cpp_src/simplex_integrals/simplex_integrals.html),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit simplex in M dimensions.

[SPHERE\_INTEGRALS](../../cpp_src/sphere_integrals/sphere_integrals.html),
a C++ library which returns the exact value of the integral of any
monomial over the surface of the unit sphere in 3D.

[SQUARE\_INTEGRALS](../../cpp_src/square_integrals/square_integrals.html),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit square in 2D.

[TETRAHEDRON\_INTEGRALS](../../cpp_src/tetrahedron_integrals/tetrahedron_integrals.html),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit tetrahedron in 3D.

[TRIANGLE\_INTEGRALS](../../cpp_src/triangle_integrals/triangle_integrals.html),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit triangle in 2D.

[WEDGE\_INTEGRALS](../../cpp_src/wedge_integrals/wedge_integrals.html),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit wedge in 3D.

### Source Code: {#source-code align="center"}

-   [cube\_integrals.cpp](cube_integrals.cpp), the source code.
-   [cube\_integrals.hpp](cube_integrals.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [cube\_integrals\_prb.cpp](cube_integrals_prb.cpp), a sample calling
    program.
-   [cube\_integrals\_prb\_output.txt](cube_integrals_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **CUBE01\_MONOMIAL\_INTEGRAL:** integral over interior of unit cube
    in 3D.
-   **CUBE01\_SAMPLE** samples the interior of the unit cube in 3D.
-   **CUBE01\_VOLUME:** volume of the unit cube in 3D.
-   **I4VEC\_UNIFORM\_AB** returns a scaled pseudorandom I4VEC.
-   **MONOMIAL\_VALUE** evaluates a monomial.
-   **R8MAT\_UNIFORM\_01** fills an R8MAT with unit pseudorandom
    numbers.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 19 January 2014.*
