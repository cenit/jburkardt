ELLIPSOID\_MONTE\_CARLO\
Monte Carlo Estimate of Integrals in an Ellipsoid {#ellipsoid_monte_carlo-monte-carlo-estimate-of-integrals-in-an-ellipsoid align="center"}
=================================================

------------------------------------------------------------------------

**ELLIPSOID\_MONTE\_CARLO** is a C++ library which uses the Monte Carlo
method to estimate the value of an integral over the interior of an
ellipsoid in M dimensions.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**ELLIPSOID\_MONTE\_CARLO** is available in [a C
version](../../c_src/ellipsoid_monte_carlo/ellipsoid_monte_carlo.md)
and [a C+=
version](../../master/ellipsoid_monte_carlo/ellipsoid_monte_carlo.md)
and [a FORTRAN77
version](../../f77_src/ellipsoid_monte_carlo/ellipsoid_monte_carlo.md)
and [a FORTRAN90
version](../../f_src/ellipsoid_monte_carlo/ellipsoid_monte_carlo.md)
and [a MATLAB
version](../../m_src/ellipsoid_monte_carlo/ellipsoid_monte_carlo.md)
and [a Python
version](../../py_src/ellipsoid_monte_carlo/ellipsoid_monte_carlo.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BALL\_MONTE\_CARLO](../../master/ball_monte_carlo/ball_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate integrals
of a function over the interior of the unit ball in 3D;

[CIRCLE\_MONTE\_CARLO](../../master/circle_monte_carlo/circle_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function on the circumference of the unit circle in 2D;

[CUBE\_MONTE\_CARLO](../../master/cube_monte_carlo/cube_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of the unit cube in 3D;

[DISK\_MONTE\_CARLO](../../master/disk_monte_carlo/disk_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of the unit disk in 2D;

[DISK\_QUARTER\_MONTE\_CARLO](../../master/disk_quarter_monte_carlo/disk_quarter_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of the unit quarter disk in 2D;

[ELLIPSE\_MONTE\_CARLO](../../master/ellipse_monte_carlo/ellipse_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of an ellipse in 2D.

[HYPERBALL\_MONTE\_CARLO](../../master/hyperball_monte_carlo/hyperball_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of the unit ball in M
dimensions;

[HYPERBALL\_VOLUME\_MONTE\_CARLO](../../master/hyperball_volume_monte_carlo/hyperball_volume_monte_carlo.md),
a C++ program which applies a Monte Carlo method to estimate the volume
of the unit hyperball in M dimensions;

[HYPERCUBE\_MONTE\_CARLO](../../master/hypercube_monte_carlo/hypercube_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of the unit hypercube in M
dimensions;

[HYPERSPHERE\_MONTE\_CARLO](../../master/hypersphere_monte_carlo/hypersphere_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function on the surface of the unit sphere in M
dimensions;

[LINE\_MONTE\_CARLO](../../master/line_monte_carlo/line_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the length of the unit line in 1D;

[POLYGON\_MONTE\_CARLO](../../master/polygon_monte_carlo/polygon_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of a polygon in 2D.

[PYRAMID\_MONTE\_CARLO](../../master/pyramid_monte_carlo/pyramid_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate integrals
of a function over the interior of the unit pyramid in 3D;

[SIMPLEX\_MONTE\_CARLO](../../master/simplex_monte_carlo/simplex_monte_carlo.md),
a C++ library which uses the Monte Carlo method to estimate integrals
over the interior of the unit simplex in M dimensions.

[SPHERE\_MONTE\_CARLO](../../master/sphere_monte_carlo/sphere_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate integrals
of a function over the surface of the unit sphere in 3D;

[SPHERE\_TRIANGLE\_MONTE\_CARLO](../../master/sphere_triangle_monte_carlo/sphere_triangle_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over a spherical triangle on the surface of the
unit sphere in 3D;

[SQUARE\_MONTE\_CARLO](../../master/square_monte_carlo/square_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of the unit square in 2D;

[TETRAHEDRON\_MONTE\_CARLO](../../master/tetrahedron_monte_carlo/tetrahedron_monte_carlo.md),
a C++ library which uses the Monte Carlo method to estimate integrals
over the interior of the unit tetrahedron in 3D.

[TRIANGLE\_MONTE\_CARLO](../../master/triangle_monte_carlo/triangle_monte_carlo.md),
a C++ library which uses the Monte Carlo method to estimate integrals
over the interior of a triangle in 2D.

[WEDGE\_MONTE\_CARLO](../../master/wedge_monte_carlo/wedge_monte_carlo.md),
a C++ library which uses the Monte Carlo method to estimate integrals
over the interior of the unit wedge in 3D.

### Source Code: {#source-code align="center"}

-   [ellipsoid\_monte\_carlo.cpp](ellipsoid_monte_carlo.cpp), the source
    code.
-   [ellipsoid\_monte\_carlo.hpp](ellipsoid_monte_carlo.hpp), the
    include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [ellipsoid\_monte\_carlo\_prb.cpp](ellipsoid_monte_carlo_prb.cpp), a
    sample calling program.
-   [ellipsoid\_monte\_carlo\_prb\_output.txt](ellipsoid_monte_carlo_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **ELLIPSOID\_SAMPLE** samples points uniformly from an ellipsoid.
-   **ELLIPSOID\_VOLUME** returns the volume of an ellipsoid.
-   **HYPERSPHERE\_UNIT\_VOLUME:** volume of a unit hypersphere in M
    dimensions.
-   **MONOMIAL\_VALUE** evaluates a monomial.
-   **R8\_PRINT** prints an R8.
-   **R8\_UNIFORM\_01** returns a pseudorandom R8 scaled to \[0,1\].
-   **R8MAT\_PRINT** prints an R8MAT.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8MAT\_TRANSPOSE\_PRINT** prints an R8MAT, transposed.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **R8PO\_FA** factors a R8PO matrix.
-   **R8PO\_SL** solves a linear system that has been factored by
    R8PO\_FA.
-   **R8VEC\_NORM** returns the L2 norm of an R8VEC.
-   **R8VEC\_NORMAL\_01\_NEW** returns a unit pseudonormal R8VEC.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC\_SUM** returns the sum of an R8VEC.
-   **R8VEC\_UNIFORM\_01\_NEW** returns a unit pseudorandom R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **UNIFORM\_IN\_SPHERE01\_MAP** maps uniform points into the unit
    sphere.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 14 August 2014.*
