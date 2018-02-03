TRIANGULATION\_L2Q\
6-Node Triangulation from 3-Node Triangulation {#triangulation_l2q-6-node-triangulation-from-3-node-triangulation align="center"}
==============================================

------------------------------------------------------------------------

**TRIANGULATION\_L2Q** is a C++ program which reads information
describing a triangulation of a set of points using 3-node ("linear")
triangles, and creates a 6-node ("quadratic") triangulation.

The same number of triangles are used, but each triangle is given three
extra midside nodes. The coordinates of these nodes are determined by
averaging the coordinates of pairs of vertices of the triangles.

The input and output files use the simple [TABLE
format](../../data/table/table.md); comment lines begin with a "\#"
character. Otherwise, each line of the file contains one set of
information, either the coordinates of a node (for a node file), or the
indices of nodes that make up a triangle, (for a triangle file).

The input file *prefix*\_nodes.txt contains the node information for the
3-node triangulation. Each data line contains the X and Y coordinates of
a single node.

The input file *prefix*\_elements.txt contains the triangle information
for the 3-node triangulation. Each line contains the indices of three
nodes that form a triangle, in counterclockwise order.

The output file *prefix*\_l2q\_nodes.txt contains the node information
for the 6-node triangulation. It begins with the node information from
*nodes.txt*, followed by the coordinates of the new nodes.

The output file *prefix*\_l2q\_elements.txt contains the triangle
information for the 6-node triangulation. There are exactly as many
triangles as before, but now each triangle uses six nodes. Each line of
the file contains the indices of 6 nodes that form the triangle, listed
in a particular order. The first three indices are the vertices, in
counterclockwise order. The fourth index is the midside node between
vertices 1 and 2, the fifth the midside between vertices 2 and 3, and
the sixth the midside between vertices 3 and 1. It should be the case
that the first three columns of *prefix*\_l2q\_elements.txt are the same
as the three columns of *prefix*elements.txt.

### Usage: {#usage align="center"}

> **triangulation\_l2q** *prefix*

where *prefix* is the common filename prefix:

-   *prefix*\_nodes.txt contains the linear node coordinates,
-   *prefix*\_elements.txt contains the linear element definitions.
-   *prefix*\_l2q\_nodes.txt will contain the quadratic node
    coordinates,
-   *prefix*\_l2q\_elements.txt will contain the quadratic element
    definitions.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TRIANGULATION\_L2Q** is available in [a C++
version](../../master/triangulation_l2q/triangulation_l2q.md) and [a
FORTRAN90 version](../../f_src/triangulation_l2q/triangulation_l2q.md)
and [a MATLAB
version](../../m_src/triangulation_l2q/triangulation_l2q.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[MESH\_TO\_XML](../../master/mesh_to_xml/mesh_to_xml.md), a C++
program which reads information defining a 1D, 2D or 3D mesh, namely a
file of node coordinates and a file of elements defined by node indices,
and creates a corresponding XML file for input to DOLFIN or FENICS.

[TABLE\_DELAUNAY](../../master/table_delaunay/table_delaunay.md), a
C++ program which triangulates a set of nodes whose coordinates are
stored in a file.

[TRIANGLE](../../c_src/triangle/triangle.md), a C program which
computes a triangulation of a geometric region.

[TRIANGULATION](../../master/triangulation/triangulation.md), a C++
library which carries out various operations on order 3 ("linear") or
order 6 ("quadratic") triangulations.

[TRIANGULATION\_BOUNDARY\_NODES](../../master/triangulation_boundary_nodes/triangulation_boundary_nodes.md),
a C++ program which reads data defining a triangulation, determines
which nodes lie on the boundary, and writes their coordinates to a file.

[TRIANGULATION\_CORNER](../../master/triangulation_corner/triangulation_corner.md),
a C++ program which patches triangulations so that no triangle has two
sides on the boundary.

[TRIANGULATION\_DELAUNAY\_DISCREPANCY](../../master/triangulation_delaunay_discrepancy/triangulation_delaunay_discrepancy.md),
a C++ program which measures the amount by which a triangulation fails
the local Delaunay test;

[TRIANGULATION\_DISPLAY\_OPENGL](../../master/triangulation_display_opengl/triangulation_display_opengl.md),
a C++ program which reads files defining a triangulation and displays an
image using Open GL.

[TRIANGULATION\_HISTOGRAM](../../master/triangulation_histogram/triangulation_histogram.md),
a C++ program which computes histograms of data over a triangulation.

[TRIANGULATION\_MASK](../../master/triangulation_mask/triangulation_mask.md),
a C++ program which takes an existing triangulation and deletes
triangles and their corresponding nodes as requested by the user.

[TRIANGULATION\_NODE\_TO\_ELEMENT](../../master/triangulation_node_to_element/triangulation_node_to_element.md),
a C++ program which reads files describing a set of nodes, their
triangulation, and the value of one or more quantities at each node, and
outputs a file that averages the quantities for each element. This
operation in effect creates an "order1" finite element model of the
data.

[TRIANGULATION\_ORDER3](../../data/triangulation_order3/triangulation_order3.md),
a directory which contains a description and examples of order 3
triangulations.

[TRIANGULATION\_ORDER6](../../data/triangulation_order6/triangulation_order6.md),
a directory which contains a description and examples of order 6
triangulations.

[TRIANGULATION\_ORIENT](../../master/triangulation_orient/triangulation_orient.md),
a C++ program which reads data defining a triangulation, makes sure that
every triangle has positive orientation, and if not, writes a corrected
triangle file.

[TRIANGULATION\_PLOT](../../master/triangulation_plot/triangulation_plot.md),
a C++ program which reads data defining a triangulation and creates a
PostScript image of the nodes and triangles.

[TRIANGULATION\_Q2L](../../master/triangulation_q2l/triangulation_q2l.md),
a C++ program which reads data defining a 6-node triangulation, and
subdivides each triangle into 4 3-node triangles, writing the resulting
triangulation to a file.

[TRIANGULATION\_QUAD](../../master/triangulation_quad/triangulation_quad.md),
a C++ program which estimates the integral of a function over a
triangulated region.

[TRIANGULATION\_QUALITY](../../master/triangulation_quality/triangulation_quality.md),
a C++ program which reads data defining a triangulation and computes a
number of quality measures.

[TRIANGULATION\_RCM](../../master/triangulation_rcm/triangulation_rcm.md),
a C++ program which reads data defining a triangulation, determines an
ordering of the nodes that will reduce the bandwidth of the adjacency
matrix, and writes the new triangulation information to a file.

[TRIANGULATION\_REFINE](../../master/triangulation_refine/triangulation_refine.md),
a C++ program which reads data defining a triangulation, replaces each
triangle by four congruent smaller ones, and writes the new
triangulation information to a file.

[TRIANGULATION\_T3\_TO\_T4](../../master/triangulation_t3_to_t4/triangulation_t3_to_t4.md),
a C++ program which reads information about a 3-node triangulation and
creates data defining a corresponding 4-node triangulation (vertices +
centroid);

[TRIANGULATION\_TRIANGLE\_NEIGHBORS](../../master/triangulation_triangle_neighbors/triangulation_triangle_neighbors.md),
a C++ program which reads data defining a triangulation, determines the
neighboring triangles of each triangle, and writes that information to a
file.

### Reference: {#reference align="center"}

1.  Marc deBerg, Marc Krevald, Mark Overmars, Otfried Schwarzkopf,\
    Computational Geometry,\
    Springer, 2000,\
    ISBN: 3-540-65620-0.
2.  Joseph ORourke,\
    Computational Geometry,\
    Second Edition,\
    Cambridge, 1998,\
    ISBN: 0521649765,\
    LC: QA448.D38.

### Source Code: {#source-code align="center"}

-   [triangulation\_l2q.cpp](triangulation_l2q.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**EXAMPLE** is an example data set.

-   [example\_nodes.txt](example_nodes.txt), the nodes for the 3-node
    triangulation.
-   [example\_elements.txt](example_elements.txt), the elements for the
    3-node triangulation.
-   [example.png](example.png), a PNG image of the 3-node triangulation,
    created by
    [TRIANGULATION\_PLOT](../triangulation_plot/triangulation_plot.md).
-   [example\_output.txt](example_output.txt), the output file.
-   [example\_l2q\_nodes.txt](example_l2q_nodes.txt), the nodes for the
    6-node triangulation.
-   [example\_l2q\_elements.txt](example_l2q_elements.txt), the elements
    for the 6-node triangulation.
-   [example\_l2q.png](example_l2q.png), a
    [PNG](../../data/png/png.md) image of the 6-node triangulation,
    created by
    [TRIANGULATION\_PLOT](../triangulation_plot/triangulation_plot.md).

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for TRIANGULATION\_L2Q.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **FILE\_COLUMN\_COUNT** counts the columns in the first line of a
    file.
-   **FILE\_EXIST** reports whether a file exists.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_MODP** returns the nonnegative remainder of integer division.
-   **I4\_WRAP** forces an I4 to lie between given limits by wrapping.
-   **I4COL\_COMPARE** compares columns I and J of a integer array.
-   **I4COL\_SORT\_A** ascending sorts the columns of an integer array.
-   **I4COL\_SORTED\_UNIQUE\_COUNT** counts unique elements in an I4COL.
-   **I4COL\_SWAP** swaps two columns of an integer array.
-   **I4MAT\_DATA\_READ** reads data from an I4MAT file.
-   **I4MAT\_HEADER\_READ** reads the header from an I4MAT file.
-   **I4MAT\_TRANSPOSE\_PRINT** prints an I4MAT, transposed.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an I4MAT,
    transposed.
-   **I4MAT\_WRITE** writes an I4MAT file with no header.
-   **I4ROW\_COMPARE** compares two rows of a integer array.
-   **I4ROW\_SORT\_A** ascending sorts the rows of an I4ROW.
-   **I4ROW\_SWAP** swaps two rows of an I4ROW.
-   **R8MAT\_DATA\_READ** reads the data from an R8MAT file.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
-   **R8MAT\_TRANSPOSE\_PRINT** prints an R8MAT, transposed.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **R8MAT\_WRITE** writes an R8MAT file with no header.
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
-   **TRIANGULATION\_ORDER3\_BOUNDARY\_EDGE\_COUNT** counts the boundary
    edges.
-   **TRIANGULATION\_ORDER3\_NEIGHBOR\_TRIANGLES** determines triangle
    neighbors.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 22 August 2009.*
