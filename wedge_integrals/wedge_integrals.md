WEDGE\_INTEGRALS\
Integrals Inside the Unit Wedge in 3D {#wedge_integrals-integrals-inside-the-unit-wedge-in-3d align="center"}
=====================================

------------------------------------------------------------------------

**WEDGE\_INTEGRALS** is a C++ library which returns the exact value of
the integral of any monomial x\^i y\^j z\^k over the interior of the
unit wedge in 3D.

The interior of the unit wedge in 3D is defined by the constraints:

            0 <= X
            0 <= Y
                 X + Y <= 1
           -1 <= Z <= +1
          

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**WEDGE\_INTEGRALS** is available in [a C
version](../../c_src/wedge_integrals/wedge_integrals.html) and [a C++
version](../../cpp_src/wedge_integrals/wedge_integrals.html) and [a
FORTRAN77 version](../../f77_src/wedge_integrals/wedge_integrals.html)
and [a FORTRAN90
version](../../f_src/wedge_integrals/wedge_integrals.html) and [a MATLAB
version](../../m_src/wedge_integrals/wedge_integrals.html) and [a Python
version](../../py_src/wedge_integrals/wedge_integrals.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BALL\_INTEGRALS](../../cpp_src/ball_integrals/ball_integrals.html), a
C++ library which returns the exact value of the integral of any
monomial over the interior of the unit ball in 3D.

[CIRCLE\_INTEGRALS](../../cpp_src/circle_integrals/circle_integrals.html),
a C++ library which returns the exact value of the integral of any
monomial over the circumference of the unit circle in 2D.

[CUBE\_INTEGRALS](../../cpp_src/cube_integrals/cube_integrals.html), a
C++ library which returns the exact value of the integral of any
monomial over the interior of the unit cube in 3D.

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
monomial over the unit line segment in 1D.

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

[WEDGE\_EXACTNESS](../../cpp_src/wedge_exactness/wedge_exactness.html),
a C++ program which investigates the monomial exactness of a quadrature
rule over the interior of the unit wedge in 3D.

[WEDGE\_FELIPPA\_RULE](../../cpp_src/wedge_felippa_rule/wedge_felippa_rule.html),
a C++ library which returns quadratures rules for approximating
integrals over the interior of the unit wedge in 3D.

[WEDGE\_GRID](../../cpp_src/wedge_grid/wedge_grid.html), a C++ library
which computes a grid of points over the interior of the unit wedge in
3D.

[WEDGE\_MONTE\_CARLO](../../cpp_src/wedge_monte_carlo/wedge_monte_carlo.html),
a C++ library which uses the Monte Carlo method to estimate integrals
over the interior of the unit wedge in 3D.

### Source Code: {#source-code align="center"}

-   [wedge\_integrals.cpp](wedge_integrals.cpp), the source code.
-   [wedge\_integrals.hpp](wedge_integrals.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [wedge\_integrals\_prb.cpp](wedge_integrals_prb.cpp), a sample
    calling program.
-   [wedge\_integrals\_prb\_output.txt](wedge_integrals_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **MONOMIAL\_VALUE** evaluates a monomial.
-   **R8MAT\_TRANSPOSE\_PRINT** prints an R8MAT, transposed.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **R8VEC\_UNIFORM\_01** returns a unit pseudorandom R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **WEDGE01\_INTEGRAL** returns the integral of a monomial in the unit
    wedge in 3D.
-   **WEDGE01\_SAMPLE** samples points uniformly from the unit wedge in
    3D.
-   **WEDGE01\_VOLUME** returns the volume of the unit wedge in 3D.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 21 August 2014.*
