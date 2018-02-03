POLYGON\_MONTE\_CARLO\
Monte Carlo Estimate of Integrals Over Polygon in 2D {#polygon_monte_carlo-monte-carlo-estimate-of-integrals-over-polygon-in-2d align="center"}
====================================================

------------------------------------------------------------------------

**POLYGON\_MONTE\_CARLO** is a C++ library which applies a Monte Carlo
method to estimate the integral of a function over the interior of a
polygon in 2D.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**POLYGON\_MONTE\_CARLO** is available in [a C
version](../../c_src/polygon_monte_carlo/polygon_monte_carlo.md) and
[a C++
version](../../master/polygon_monte_carlo/polygon_monte_carlo.md) and
[a FORTRAN77
version](../../f77_src/polygon_monte_carlo/polygon_monte_carlo.md) and
[a FORTRAN90
version](../../f_src/polygon_monte_carlo/polygon_monte_carlo.md) and
[a MATLAB
version](../../m_src/polygon_monte_carlo/polygon_monte_carlo.md) and
[a Python
version](../../py_src/polygon_monte_carlo/polygon_monte_carlo.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BALL\_MONTE\_CARLO](../../master/ball_monte_carlo/ball_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate integrals
of a function over the interior of the unit ball in 3D;

[CIRCLE\_MONTE\_CARLO](../../master/circle_monte_carlo/circle_monte_carlo.md),
a C++ library which uses the Monte Carlo method to estimate integrals
over the circumference of the unit circle in 2D.

[CUBE\_MONTE\_CARLO](../../master/cube_monte_carlo/cube_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of the unit cube in 3D;

[DISK\_MONTE\_CARLO](../../master/disk_monte_carlo/disk_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of the unit disk in 2D;

[DISK\_QUARTER\_MONTE\_CARLO](../../master/disk_quarter_monte_carlo/disk_quarter_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of the unit quarter disk in 2D;

[ELLIPSE\_MONTE\_CARLO](../../master/ellipse_monte_carlo/ellipse_monte_carlo.md)
a C++ library which uses the Monte Carlo method to estimate the value of
integrals over the interior of an ellipse in 2D.

[ELLIPSOID\_MONTE\_CARLO](../../master/ellipsoid_monte_carlo/ellipsoid_monte_carlo.md)
a C++ library which uses the Monte Carlo method to estimate the value of
integrals over the interior of an ellipsoid in M dimensions.

[HYPERBALL\_MONTE\_CARLO](../../master/hyperball_monte_carlo/hyperball_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of the unit hyperball in M
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
integral of a function on the surface of the unit hypersphere in M
dimensions;

[LINE\_MONTE\_CARLO](../../master/line_monte_carlo/line_monte_carlo.md),
a C++ library which uses the Monte Carlo method to estimate integrals
over the length of the unit line in 1D.

[POLYGON\_INTEGRALS](../../master/polygon_integrals/polygon_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the interior of a polygon in 2D.

[POLYGON\_PROPERTIES](../../master/polygon_properties/polygon_properties.md),
a C++ library which computes properties of an arbitrary polygon in the
plane, defined by a sequence of vertices, including interior angles,
area, centroid, containment of a point, convexity, diameter, distance to
a point, inradius, lattice area, nearest point in set, outradius,
uniform sampling.

[POLYGON\_TRIANGULATE](../../master/polygon_triangulate/polygon_triangulate.md),
a C++ library which triangulates a possibly nonconvex polygon, and which
can use gnuplot to display the external edges and internal diagonals of
the triangulation.

[PYRAMID\_MONTE\_CARLO](../../master/pyramid_monte_carlo/pyramid_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate integrals
of a function over the interior of the unit pyramid in 3D;

[SIMPLEX\_MONTE\_CARLO](../../master/simplex_monte_carlo/simplex_monte_carlo.md),
a C++ library which uses the Monte Carlo method to estimate integrals
over the interior of the unit simplex in M dimensions.

[SPHERE\_MONTE\_CARLO](../../master/sphere_monte_carlo/sphere_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function on the surface of the unit sphere in 3D;

[SQUARE\_MONTE\_CARLO](../../master/square_monte_carlo/square_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of the unit square in 2D.

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

-   [polygon\_monte\_carlo.cpp](polygon_monte_carlo.cpp), the source
    code.
-   [polygon\_monte\_carlo.hpp](polygon_monte_carlo.hpp), the include
    file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [polygon\_monte\_carlo\_prb.cpp](polygon_monte_carlo_prb.cpp), a
    sample calling program.
-   [polygon\_monte\_carlo\_prb\_output.txt](polygon_monte_carlo_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **BETWEEN** is TRUE if vertex C is between vertices A and B.
-   **COLLINEAR** returns a measure of collinearity for three points.
-   **DIAGONAL:** VERTEX(IM1) to VERTEX(IP1) is a proper internal
    diagonal.
-   **DIAGONALIE** is true if VERTEX(IM1):VERTEX(IP1) is a proper
    diagonal.
-   **IN\_CONE** is TRUE if the diagonal VERTEX(IM1):VERTEX(IP1) is
    strictly internal.
-   **INTERSECT** is true if lines VA:VB and VC:VD intersect.
-   **INTERSECT\_PROP** is TRUE if lines VA:VB and VC:VD have a proper
    intersection.
-   **L4\_XOR** returns the exclusive OR of two L4's.
-   **MONOMIAL\_VALUE** evaluates a monomial.
-   **POLYGON\_AREA** determines the area of a polygon.
-   **POLYGON\_INTEGRAL** integrates a monomial over a polygon.
-   **POLYGON\_SAMPLE** uniformly samples a polygon.
-   **POLYGON\_TRIANGULATE** determines a triangulation of a polygon.
-   **R8\_CHOOSE** computes the binomial coefficient C(N,K) as an R8.
-   **R8\_UNIFORM\_01** returns a pseudorandom R8 scaled to \[0,1\].
-   **R8VEC\_UNIFORM\_01\_NEW** returns a unit pseudorandom R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TRIANGLE\_AREA** computes the signed area of a triangle.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 09 May 2014.*
