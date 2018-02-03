TRIANGULATION\_DELAUNAY\_DISCREPANCY\
Local Delaunay Discrepancy of a Triangulation {#triangulation_delaunay_discrepancy-local-delaunay-discrepancy-of-a-triangulation align="center"}
=============================================

------------------------------------------------------------------------

**TRIANGULATION\_DELAUNAY\_DISCREPANCY** is a C++ program which computes
the local Delaunay discrepancy of a triangulation.

A (maximal) triangulation is Delaunay if and only if it is locally
Delaunay.

A triangulation is Delaunay if the minimum angle over all triangles in
the triangulation is maximized. That is, there is no other triangulation
of the points which has a larger minimum angle.

A triangulation is locally Delaunay if, for every pair of triangles that
share an edge, the minimum angle in the two triangles is larger than the
minimum angle in the two triangles formed by removing the common edge
and joining the two opposing vertices.

This function examines the question of whether a given triangulation is
locally Delaunay. It does this by looking at every pair of neighboring
triangles and comparing the minimum angle attained for the current
triangle pair and the alternative triangle pair.

Let A(i,j) be the minimum angle formed by triangles T(i) and T(j), which
are two triangles in the triangulation which share a common edge. Let
B(I,J) be the minimum angle formed by triangles S(i) and S(j), where
S(i) and S(j) are formed by removing the common edge of T(i) and T(j),
and joining the opposing vertices.

Then the triangulation is Delaunay if B(i,j) &lt;= A(i,j) for every pair
of neighbors T(i) and T(j).

If A(i,j) &lt; B(i,j) for at least one pair of neighbors, the
triangulation is not a Delaunay triangulation.

This program returns VALUE = min ( A(i,j) - B(i,j) ) over all triangle
neighbors. VALUE is scaled to be in degrees, for comprehensibility. If
VALUE is negative, then at least one pair of triangles violates the
Delaunay condition, and so the entire triangulation is not a Delaunay
triangulation. If VALUE is nonnegative, then the triangulation is a
Delaunay triangulation.

It is useful to return VALUE, rather than a simple True/False value,
because there can be cases where the Delaunay condition is only
"slightly" violated. A simple example is a triangulation formed by
starting with a mesh of squares and dividing each square into two
triangles by choosing one of the diagonals of the square. The Delaunay
discrepancy for this mesh, if computed exactly, is 0, but roundoff could
easily result in discrepancies that were very slightly negative.

If VALUE is positive, and not very small in magnitude, then every pair
of triangles in the triangulation satisfies the local Delaunay
condition, and so the triangulation is a Delaunay triangulation.

If VALUE is negative, and not very small in magnitude, then at least one
pair of triangles violates the Delaunay condition, and to a significant
degree. The triangulation is not a Delaunay triangulation.

If the magnitude of VALUE is very close to zero, then the triangulation
is numerically ambiguous. At least one pair of triangles violates or
almost violates the condition, but no triangle violates the condition to
a great extent. The user must judge whether the violation is significant
or not.

### Usage: {#usage align="center"}

> **triangulation\_delaunay\_discrepancy** *prefix*

where *prefix* is the common prefix for the node and element files

-   *prefix***\_nodes.txt**, the node coordinates;
-   *prefix***\_elements.txt**, the element definitions.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TRIANGULATION\_DELAUNAY\_DISCREPANCY** is available in [a C++
version](../../cpp_src/triangulation_delaunay_discrepancy/triangulation_delaunay_discrepancy.html)
and [a FORTRAN90
version](../../f_src/triangulation_delaunay_discrepancy/triangulation_delaunay_discrepancy.html)
and [a MATLAB
version](../../m_src/triangulation_delaunay_discrepancy/triangulation_delaunay_discrepancy.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[TABLE\_DELAUNAY](../../cpp_src/table_delaunay/table_delaunay.html), a
C++ program which triangulates a set of nodes whose coordinates are
stored in a file.

[TRIANGLE](../../c_src/triangle/triangle.html), a C program which
computes a triangulation of a geometric region.

[TRIANGULATION](../../cpp_src/triangulation/triangulation.html), a C++
library which carries out various operations on order 3 ("linear") or
order 6 ("quadratic") triangulations.

[TRIANGULATION\_BOUNDARY\_NODES](../../cpp_src/triangulation_boundary_nodes/triangulation_boundary_nodes.html),
a C++ program which reads data defining a triangulation, determines
which nodes lie on the boundary, and writes their coordinates to a file.

[TRIANGULATION\_CORNER](../../cpp_src/triangulation_corner/triangulation_corner.html),
a C++ program which patches triangulations so that no triangle has two
sides on the boundary.

[TRIANGULATION\_DISPLAY\_OPENGL](../../cpp_src/triangulation_display_opengl/triangulation_display_opengl.html),
a C++ program which reads files defining a triangulation and displays an
image using Open GL.

[TRIANGULATION\_HISTOGRAM](../../cpp_src/triangulation_histogram/triangulation_histogram.html),
a C++ program which computes histograms of data over a triangulation.

[TRIANGULATION\_L2Q](../../cpp_src/triangulation_l2q/triangulation_l2q.html),
a C++ program which reads data defining a 3-node triangulation and
generates midside nodes and writes out the corresponding 6-node
triangulation.

[TRIANGULATION\_MASK](../../cpp_src/triangulation_mask/triangulation_mask.html),
a C++ program which takes an existing triangulation and deletes
triangles and their corresponding nodes as requested by the user.

[TRIANGULATION\_NODE\_TO\_ELEMENT](../../cpp_src/triangulation_node_to_element/triangulation_node_to_element.html),
a C++ program which reads files describing a set of nodes, their
triangulation, and the value of one or more quantities at each node, and
outputs a file that averages the quantities for each element. This
operation in effect creates an "order1" finite element model of the
data.

[TRIANGULATION\_ORDER3](../../data/triangulation_order3/triangulation_order3.html),
a directory which contains a description and examples of order 3
triangulations.

[TRIANGULATION\_ORDER6](../../data/triangulation_order6/triangulation_order6.html),
a directory which contains a description and examples of order 6
triangulations.

[TRIANGULATION\_ORIENT](../../cpp_src/triangulation_orient/triangulation_orient.html),
a C++ program which reads data defining a triangulation, makes sure that
every triangle has positive orientation, and if not, writes a corrected
triangle file.

[TRIANGULATION\_PLOT](../../cpp_src/triangulation_plot/triangulation_plot.html),
a C++ program which reads data defining a triangulation and creates a
PostScript image of the nodes and triangles.

[TRIANGULATION\_Q2L](../../cpp_src/triangulation_q2l/triangulation_q2l.html),
a C++ program which reads data defining a 6-node triangulation, and
subdivides each triangle into 4 3-node triangles, writing the resulting
triangulation to a file.

[TRIANGULATION\_QUAD](../../cpp_src/triangulation_quad/triangulation_quad.html),
a C++ program which estimates the integral of a function over a
triangulated region.

[TRIANGULATION\_QUALITY](../../cpp_src/triangulation_quality/triangulation_quality.html),
a C++ program which reads data defining a triangulation and computes a
number of quality measures.

[TRIANGULATION\_RCM](../../cpp_src/triangulation_rcm/triangulation_rcm.html),
a C++ program which reads data defining a triangulation, determines an
ordering of the nodes that will reduce the bandwidth of the adjacency
matrix, and writes the new triangulation information to a file.

[TRIANGULATION\_REFINE](../../cpp_src/triangulation_refine/triangulation_refine.html),
a C++ program which reads data defining a triangulation, replaces each
triangle by four congruent smaller ones, and writes the new
triangulation information to a file.

[TRIANGULATION\_TRIANGLE\_NEIGHBORS](../../cpp_src/triangulation_triangle_neighbors/triangulation_triangle_neighbors.html),
a C++ program which reads data defining a triangulation, determines the
neighboring triangles of each triangle, and writes that information to a
file.

### Reference: {#reference align="center"}

1.  Franz Aurenhammer,\
    Voronoi diagrams - a study of a fundamental geometric data
    structure,\
    ACM Computing Surveys,\
    Volume 23, Number 3, September 1991, pages 345-405.
2.  Marc deBerg, Marc Krevald, Mark Overmars, Otfried Schwarzkopf,\
    Computational Geometry,\
    Springer, 2000,\
    ISBN: 3-540-65620-0,\
    LC: QA448.D38.C65.
3.  Barry Joe,\
    GEOMPACK - a software package for the generation of meshes using
    geometric algorithms,\
    Advances in Engineering Software,\
    Volume 13, Number 5, 1991, pages 325-331.
4.  Joseph ORourke,\
    Computational Geometry,\
    Second Edition,\
    Cambridge, 1998,\
    ISBN: 0521649765,\
    LC: QA448.D38.

### Source Code: {#source-code align="center"}

-   [triangulation\_delaunay\_discrepancy.cpp](triangulation_delaunay_discrepancy.cpp),
    the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**TEN3** is a triangulation of 10 nodes. It is a Delaunay triangulation.

-   [ten3\_nodes.txt](ten3_nodes.txt), the nodes.
-   [ten3\_elements.txt](ten3_elements.txt), commands to compile and run
    the sample program.
-   [ten3.png](ten3.png), an image of the triangulation.
-   [ten3\_output.txt](ten3_output.txt), output from the program.

**TED3** is a triangulation of 10 nodes. It is NOT a Delaunay
triangulation.

-   [ted3\_nodes.txt](ted3_nodes.txt), the nodes.
-   [ted3\_elements.txt](ted3_elements.txt), commands to compile and run
    the sample program.
-   [ted3.png](ted3.png), an image of the triangulation.
-   [ted3\_output.txt](ted3_output.txt), output from the program.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for
    TRIANGULATION\_DELAUNAY\_DISCREPANCY.
-   **ARC\_COSINE** computes the arc cosine function, with argument
    truncation.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **FILE\_COLUMN\_COUNT** counts the columns in the first line of a
    file.
-   **FILE\_EXIST** reports whether a file exists.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_MODP** returns the nonnegative remainder of I4 division.
-   **I4\_WRAP** forces an I4 to lie between given limits by wrapping.
-   **I4COL\_COMPARE** compares columns I and J of an I4COL.
-   **I4COL\_SORT\_A** ascending sorts the columns of an I4COL.
-   **I4COL\_SWAP** swaps two columns of an I4COL.
-   **I4MAT\_DATA\_READ** reads data from an I4MAT file.
-   **I4MAT\_HEADER\_READ** reads the header from an I4MAT file.
-   **I4MAT\_TRANSPOSE\_PRINT** prints an I4MAT, transposed.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an I4MAT,
    transposed.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8\_MIN** returns the minimum of two R8's.
-   **R8MAT\_DATA\_READ** reads the data from an R8MAT file.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
-   **R8MAT\_TRANSPOSE\_PRINT** prints an R8MAT, transposed.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **R8VEC\_MAX** returns the value of the maximum element in an R8VEC.
-   **R8VEC\_MIN** returns the value of the minimum element in an R8VEC.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_I4VEC** reads an I4VEC from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **SORT\_HEAP\_EXTERNAL** externally sorts a list of items into
    ascending order.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TRIANGLE\_ANGLES\_2D\_NEW** computes the angles of a triangle in
    2D.
-   **TRIANGULATION\_DELAUNAY\_DISCREPANCY\_COMPUTE** reports if a
    triangulation is Delaunay.
-   **TRIANGULATION\_ORDER3\_NEIGHBOR\_TRIANGLES** determines triangle
    neighbors.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 13 September 2009.*
