POLYGON\_PROPERTIES\
Compute Properties of an Arbitrary Polygon {#polygon_properties-compute-properties-of-an-arbitrary-polygon align="center"}
==========================================

------------------------------------------------------------------------

**POLYGON\_PROPERTIES** is a C++ library which computes properties of an
arbitrary polygon in the plane, defined by a sequence of vertices,
including

-   angles;
-   area;
-   centroid;
-   containment of a point;
-   diameter;
-   expand polygon outward by H;
-   inradius of regular polygon to area, outradius side length;
-   integral over polygon of 1, x, x\^2, xy, y, y\^2;
-   is polygon convex?;
-   lattice area;
-   outradius of regular polygon to area, inradius, side length;
-   perimeter;
-   point to polygon distance;
-   point to nearest point on polygon;
-   sampling uniformly;
-   side length of regular polygon to area, inradius, outradius;
-   triangulation (decomposition into N-3 triangles).

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**POLYGON\_PROPERTIES** is available in [a C
version](../../c_src/polygon_properties/polygon_properties.html) and [a
C++ version](../../cpp_src/polygon_properties/polygon_properties.html)
and [a FORTRAN77
version](../../f77_src/polygon_properties/polygon_properties.html) and
[a FORTRAN90
version](../../f_src/polygon_properties/polygon_properties.html) and [a
MATLAB version](../../m_src/polygon_properties/polygon_properties.html)
and [a Python
version](../../py_src/polygon_properties/polygon_properties.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[GEOMETRY](../../cpp_src/geometry/geometry.html), a C++ library which
performs geometric calculations in 2, 3 and N dimensional space.

[HYPERSPHERE\_PROPERTIES](../../cpp_src/hypersphere_properties/hypersphere_properties.html),
a C++ library which carries out various operations for an M-dimensional
hypersphere, including converting between Cartesian and spherical
coordinates, stereographic projection, sampling the surface of the
sphere, and computing the surface area and volume.

[POLYGON\_INTEGRALS](../../cpp_src/polygon_integrals/polygon_integrals.html),
a C++ library which returns the exact value of the integral of any
monomial over the interior of a polygon in 2D.

[POLYGON\_MONTE\_CARLO](../../cpp_src/polygon_monte_carlo/polygon_monte_carlo.html),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of a polygon in 2D.

[POLYGON\_TRIANGULATE](../../cpp_src/polygon_triangulate/polygon_triangulate.html),
a C++ library which triangulates a possibly nonconvex polygon, and which
can use gnuplot to display the external edges and internal diagonals of
the triangulation.

[TETRAHEDRON\_PROPERTIES](../../cpp_src/tetrahedron_properties/tetrahedron_properties.html),
a C++ program which computes properties of a given tetrahedron.

[TRIANGLE\_PROPERTIES](../../cpp_src/triangle_properties/triangle_properties.html),
a C++ program which computes properties of a triangle whose vertex
coordinates are read from a file.

### Reference: {#reference align="center"}

1.  Gerard Bashein, Paul Detmer,\
    Centroid of a Polygon,\
    in Graphics Gems IV,\
    edited by Paul Heckbert,\
    AP Professional, 1994,\
    ISBN: 0123361559,\
    LC: T385.G6974.
2.  SF Bockman,\
    Generalizing the Formula for Areas of Polygons to Moments,\
    American Mathematical Society Monthly,\
    Volume 96, Number 2, February 1989, pages 131-132.
3.  Adrian Bowyer, John Woodwark,\
    A Programmer's Geometry,\
    Butterworths, 1983,\
    ISBN: 0408012420.
4.  Peter Schorn, Frederick Fisher,\
    Testing the Convexity of a Polygon,\
    in Graphics Gems IV,\
    edited by Paul Heckbert,\
    AP Professional, 1994,\
    ISBN: 0123361559,\
    LC: T385.G6974.
5.  Moshe Shimrat,\
    Algorithm 112: Position of Point Relative to Polygon,\
    Communications of the ACM,\
    Volume 5, Number 8, August 1962, page 434.
6.  Allen VanGelder,\
    Efficient Computation of Polygon Area and Polyhedron Volume,\
    in Graphics Gems V,\
    edited by Alan Paeth,\
    AP Professional, 1995,\
    ISBN: 0125434553,\
    LC: T385.G6975.

### Source Code: {#source-code align="center"}

-   [polygon\_properties.cpp](polygon_properties.cpp), the source code.
-   [polygon\_properties.hpp](polygon_properties.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   polygon\_properties\_prb.cppa&gt;, a sample calling program.
-   [polygon\_properties\_prb\_output.txt](polygon_properties_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **ANGLE\_HALF** finds half an angle.
-   **ANGLE\_RAD** returns the angle in radians swept out between two
    rays.
-   **BETWEEN** is TRUE if vertex C is between vertices A and B.
-   **COLLINEAR** returns a measure of collinearity for three points.
-   **DIAGONAL:** VERTEX(IM1) to VERTEX(IP1) is a proper internal
    diagonal.
-   **DIAGONALIE** is true if VERTEX(IM1):VERTEX(IP1) is a proper
    diagonal.
-   **I4\_MODP** returns the nonnegative remainder of I4 division.
-   **I4\_WRAP** forces an I4 to lie between given limits by wrapping.
-   **IN\_CONE** is TRUE if the diagonal VERTEX(IM1):VERTEX(IP1) is
    strictly internal.
-   **INTERSECT** is true if lines VA:VB and VC:VD intersect.
-   **INTERSECT\_PROP** is TRUE if lines VA:VB and VC:VD have a proper
    intersection.
-   **L4\_XOR** returns the exclusive OR of two L4's.
-   **POLYGON\_ANGLES** computes the interior angles of a polygon.
-   **POLYGON\_AREA** computes the area of a polygon.
-   **POLYGON\_AREA\_2** computes the area of a polygon.
-   **POLYGON\_CENTROID** computes the centroid of a polygon.
-   **POLYGON\_CENTROID\_2** computes the centroid of a polygon.
-   **POLYGON\_CONTAINS\_POINT** finds if a point is inside a simple
    polygon .
-   **POLYGON\_CONTAINS\_POINT\_2** finds if a point is inside a convex
    polygon.
-   **POLYGON\_DIAMETER** computes the diameter of a polygon.
-   **POLYGON\_EXPAND** expands a polygon.
-   **POLYGON\_INRAD\_DATA** determines polygonal data from its inner
    radius.
-   **POLYGON\_INTEGRAL\_1** integrates the function 1 over a polygon.
-   **POLYGON\_INTEGRAL\_X** integrates the function X over a polygon.
-   **POLYGON\_INTEGRAL\_XX** integrates the function X\*X over a
    polygon.
-   **POLYGON\_INTEGRAL\_XY** integrates the function X\*Y over a
    polygon.
-   **POLYGON\_Y** integrates the function Y over a polygon.
-   **POLYGON\_INTEGRAL\_YY** integrates the function Y\*Y over a
    polygon.
-   **POLYGON\_IS\_CONVEX** determines whether a polygon is convex in
    2D.
-   **POLYGON\_LATTICE\_AREA** computes the area of a lattice polygon.
-   **POLYGON\_OUTRAD\_DATA** determines polygonal data from its outer
    radius.
-   **POLYGON\_POINT\_DIST:** distance ( polygon, point ).
-   **POLYGON\_POINT\_NEAR** computes the nearest point on a polygon.
-   **POLYGON\_SAMPLE** uniformly samples a polygon.
-   **POLYGON\_SIDE\_DATA** determines polygonal data from its side
    length.
-   **POLYGON\_TRIANGULATE** determines a triangulation of a polygon.
-   **R8\_DEGREES** converts an angle from radian to degree measure.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_MIN** returns the minimum of two R8's.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **R8MAT\_SOLVE** uses Gauss-Jordan elimination to solve an N by N
    linear system.
-   **R8MAT\_TRANSPOSE\_PRINT** prints an R8MAT, transposed.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **R8VEC\_NORM** returns the L2 norm of an R8VEC.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC\_SUM** returns the sum of an R8VEC.
-   **R8VEC\_UNIFORM\_01\_NEW** returns a new unit pseudorandom R8VEC.
-   **SEGMENT\_POINT\_DIST:** distance ( line segment, point ).
-   **SEGMENT\_POINT\_NEAR** finds the point on a line segment nearest a
    point.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TRIANGLE\_AREA** computes the signed area of a triangle.
-   **TRIANGLE\_BARYCENTRIC** finds the barycentric coordinates of a
    point.
-   **TRIANGLE\_CONTAINS\_POINT\_1** finds if a point is inside a
    triangle.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 14 October 2015.*
