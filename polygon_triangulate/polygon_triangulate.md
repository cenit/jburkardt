POLYGON\_TRIANGULATE\
Triangulate a Polygon {#polygon_triangulate-triangulate-a-polygon align="center"}
=====================

------------------------------------------------------------------------

**POLYGON\_TRIANGULATE** is a C++ library which triangulates a possibly
nonconvex polygon in 2D, and which can use gnuplot to display the
external edges and internal diagonals of the triangulation.

The polygon is defined by an input file which gives the coordinates of
the vertices of the polygon, in counterclockwise order.

No consecutive pair of vertices should be equal; when describing a
polygon, sometimes the first and last vertices are equal. For this
program, that is not the case. To describe a square, your input file
should contain four pairs of coordinates, for instance.

The vertices should be listed in counterclockwise order. If you list
them in clockwise order, then the function will refuse to operate on the
data.

It is possible to create a polygon that has zero area. The function will
refuse to process such an object.

The polygon does not need to be convex. However, you should be careful
not to specify a polygon which crosses itself, since this means the
interior of the polygon is not well defined, and hence a triangulation
is not well defined. As a simple example of such a problem, consider the
four vertices of a square in counterclockwise order: V1, V2, V3, V4, and
list them instead as V1, V3, V2, V4. This shape cannot be triangulated
in the usual sense. However, the function may not realize this, in which
case it will return what it thinks is a reasonable triangulation of the
(unreasonable) data.

The output of the program is a list of the N-3 triples of nodes that
form the triangles of the triangulation.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**POLYGON\_TRIANGULATE** is available in [a C
version](../../c_src/polygon_triangulate/polygon_triangulate.html) and
[a C++
version](../../cpp_src/polygon_triangulate/polygon_triangulate.html) and
[a FORTRAN77
version](../../f77_src/polygon_triangulate/polygon_triangulate.html) and
[a FORTRAN90
version](../../f_src/polygon_triangulate/polygon_triangulate.html) and
[a MATLAB
version](../../m_src/polygon_triangulate/polygon_triangulate.html) and
[a Python
version](../../py_src/polygon_triangulate/polygon_triangulate.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[POLYGON\_INTEGRALS](../../cpp_src/polygon_integrals/polygon_integrals.html),
a C++ library which returns the exact value of the integral of any
monomial over the interior of a polygon in 2D.

[POLYGON\_MONTE\_CARLO](../../cpp_src/polygon_monte_carlo/polygon_monte_carlo.html),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of a polygon in 2D.

[POLYGON\_PROPERTIES](../../cpp_src/polygon_properties/polygon_properties.html),
a C++ library which computes properties of an arbitrary polygon in the
plane, defined by a sequence of vertices, including interior angles,
area, centroid, containment of a point, convexity, diameter, distance to
a point, inradius, lattice area, nearest point in set, outradius,
uniform sampling.

### Author: {#author align="center"}

Based on a C function by Joseph ORourke; This C++ version by John
Burkardt.

### Reference: {#reference align="center"}

-   Joseph ORourke,\
    Computational Geometry in C,\
    Second Edition,\
    Cambridge, 1998,\
    ISBN: 0521649765,\
    LC: QA448.D38.

### Source Code: {#source-code align="center"}

-   [polygon\_triangulate.cpp](polygon_triangulate.cpp), the source
    code.
-   [polygon\_triangulate.hpp](polygon_triangulate.hpp), the include
    file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [polygon\_triangulate\_prb.cpp](polygon_triangulate_prb.cpp), a
    sample calling program.
-   [polygon\_triangulate\_prb\_output.txt](polygon_triangulate_prb_output.txt),
    the output file.

**COMB** is an example of a "comb" polygon of 10 vertices

-   [comb\_nodes.txt](comb_nodes.txt), the vertex coordinates.
-   [comb\_elements.txt](comb_elements.txt), triples of vertex indices
    that make up the triangulation.
-   [comb\_edges.txt](comb_edges.txt), pairs of vertex coordinates that
    form external edges.
-   [comb\_diagonals.txt](comb_diagonals.txt), pairs of vertex
    coordinates that form internal diagonals.
-   [comb.png](comb.png), a PNG image of the triangulated polygon.

**HAND** outlines a hand using 59 vertices.

-   [hand\_nodes.txt](hand_nodes.txt), the vertex coordinates.
-   [hand\_elements.txt](hand_elements.txt), triples of vertex indices
    that make up the triangulation.
-   [hand\_edges.txt](hand_edges.txt), pairs of vertex coordinates that
    form external edges.
-   [hand\_diagonals.txt](hand_diagonals.txt), pairs of vertex
    coordinates that form internal diagonals.
-   [hand.png](hand.png), a PNG image of the triangulated polygon.

**I18** is an example of a complicated nonconvex polygon, using 18
vertices.

-   [i18\_nodes.txt](i18_nodes.txt), the vertex coordinates.
-   [i18\_elements.txt](i18_elements.txt), triples of vertex indices
    that make up the triangulation.
-   [i18\_edges.txt](i18_edges.txt), pairs of vertex coordinates that
    form external edges.
-   [i18\_diagonals.txt](i18_diagonals.txt), pairs of vertex coordinates
    that form internal diagonals.
-   [i18.png](i18.png), a PNG image of the triangulated polygon.

### List of Routines: {#list-of-routines align="center"}

-   **BETWEEN** is TRUE if vertex C is between vertices A and B.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is a case insensitive comparison of two characters for
    equality.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **COLLINEAR** returns a measure of collinearity for three points.
-   **DIAGONAL:** VERTEX(IM1) to VERTEX(IP1) is a proper internal
    diagonal.
-   **DIAGONALIE** is true if VERTEX(IM1):VERTEX(IP1) is a proper
    diagonal.
-   **FILE\_COLUMN\_COUNT** counts the number of columns in the first
    line of a file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4MAT\_PRINT** prints an I4MAT.
-   **I4MAT\_PRINT\_SOME** prints some of an I4MAT.
-   **I4MAT\_WRITE** writes an I4MAT file.
-   **IN\_CONE** is TRUE if the diagonal VERTEX(IM1):VERTEX(IP1) is
    strictly internal.
-   **INTERSECT** is true if lines VA:VB and VC:VD intersect.
-   **INTERSECT\_PROP** is TRUE if lines VA:VB and VC:VD have a proper
    intersection.
-   **L4\_XOR** returns the exclusive OR of two L4's.
-   **POLYGON\_TRIANGULATE** determines a triangulation of a polygon.
-   **R8MAT\_DATA\_READ** reads data from an R8MAT file.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TRIANGLE\_AREA** computes the signed area of a triangle.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 06 May 2014.*
