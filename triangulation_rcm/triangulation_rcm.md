TRIANGULATION\_RCM\
Reverse Cuthill-McKee Node Reordering {#triangulation_rcm-reverse-cuthill-mckee-node-reordering align="center"}
=====================================

------------------------------------------------------------------------

**TRIANGULATION\_RCM** is a C++ program which computes the reverse
Cuthill-McKee (RCM) reordering for nodes in a triangulation composed of
3-node or 6-node triangles.

The user supplies a node file and a triangle file, containing the
coordinates of the nodes, and the indices of the nodes that make up each
triangle. Either 3-node or 6-node triangles may be used.

The program reads the data, computes the adjacency information, carries
out the RCM algorithm to get the permutation, applies the permutation to
the nodes and triangles, and writes out new node and triangle files that
correspond to the RCM permutation.

Note that the node file would normally contain exactly 2 values on each
line, namely the X and Y coordinates of the nodes. However, this is not
necessary. Extra information can be included on each line, for instance,
a "Z" coordinate. Each line should include the same number of items, but
all will be permuted correctly together. The program does not actually
need to know the coordinates of the nodes, so in fact, ANY data (as long
as it is real numeric data) associated with the nodes can be listed in
the node file, and will be correctly permuted.

### Usage: {#usage align="center"}

> **triangulation\_rcm** *prefix*

where *prefix* is the common filename prefix:

-   *prefix*\_nodes.txt contains the node coordinates,
-   *prefix*\_elements.txt contains the element definitions.
-   *prefix*\_rcm\_nodes.txt will contain the RCM node coordinates,
-   *prefix*\_rcm\_elements.txt will contain the RCM element
    definitions.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TRIANGULATION\_RCM** is available in [a C++
version](../../master/triangulation_rcm/triangulation_rcm.md) and [a
FORTRAN90 version](../../f_src/triangulation_rcm/triangulation_rcm.md)
and [a MATLAB
version](../../m_src/triangulation_rcm/triangulation_rcm.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[MESH\_BANDWIDTH](../../master/mesh_bandwidth/mesh_bandwidth.md), a
C++ program which returns the geometric bandwidth associated with a mesh
of elements of any order and in a space of arbitrary dimension.

[QUAD\_MESH\_RCM](../../master/quad_mesh_rcm/quad_mesh_rcm.md), a C++
program which computes the reverse Cuthill-McKee (RCM) reordering for
nodes in a mesh of 4-node quadrilaterals.

[RCM](../../master/rcm/rcm.md), a C++ library which carries out
reverse Cuthill-McKee computations.

[TABLE\_DELAUNAY](../../f_src/table_delaunay/table_delaunay.md), a
FORTRAN90 program which computes the triangulation of a set of nodes
whose coordinates are stored in a file.

[TET\_MESH\_RCM](../../f_src/tet_mesh_rcm/tet_mesh_rcm.md), a
FORTRAN90 library which applies the reverse Cuthill-McKee reordering to
a tetrahedral mesh of nodes in 3D.

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

[TRIANGULATION\_L2Q](../../master/triangulation_l2q/triangulation_l2q.md),
a C++ program which reads data defining a 3-node triangulation and
generates midside nodes and writes out the corresponding 6-node
triangulation.

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

[TRIANGULATION\_REFINE](../../master/triangulation_refine/triangulation_refine.md),
a C++ program which reads data defining a triangulation, replaces each
triangle by four congruent smaller ones, and writes the new
triangulation information to a file.

[TRIANGULATION\_TRIANGLE\_NEIGHBORS](../../master/triangulation_triangle_neighbors/triangulation_triangle_neighbors.md),
a C++ program which reads data defining a triangulation, determines the
neighboring triangles of each triangle, and writes that information to a
file.

### Reference: {#reference align="center"}

1.  HL Crane, Norman Gibbs, William Poole, Paul Stockmeyer,\
    Algorithm 508: Matrix Bandwidth and Profile Reduction,\
    ACM Transactions on Mathematical Software,\
    Volume 2, Number 4, December 1976, pages 375-377.
2.  Marc deBerg, Marc Krevald, Mark Overmars, Otfried Schwarzkopf,\
    Computational Geometry,\
    Springer, 2000,\
    ISBN: 3-540-65620-0.
3.  Alan George, Joseph Liu,\
    Computer Solution of Large Sparse Positive Definite Matrices,\
    Prentice Hall, 1981,\
    ISBN: 0131652745,\
    LC: QA188.G46
4.  Norman Gibbs,\
    Algorithm 509: A Hybrid Profile Reduction Algorithm,\
    ACM Transactions on Mathematical Software,\
    Volume 2, Number 4, December 1976, pages 378-387.
5.  Norman Gibbs, William Poole, Paul Stockmeyer,\
    An Algorithm for Reducing the Bandwidth and Profile of a Sparse
    Matrix,\
    SIAM Journal on Numerical Analysis,\
    Volume 13, 1976, pages 236-250.
6.  Joseph ORourke,\
    Computational Geometry,\
    Second Edition,\
    Cambridge, 1998,\
    ISBN: 0521649765,\
    LC: QA448.D38.

### Source Code: {#source-code align="center"}

-   [triangulation\_rcm.cpp](triangulation_rcm.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**TEST3** works with a 3-node triangulation:

-   [test3\_output.txt](test3_output.txt), the printed output from the
    command\
    "triangulation\_rcm test3"
-   [test3\_nodes.txt](test3_nodes.txt), the node file.
-   [test3\_nodes.png](test3_nodes.png), a PNG image of the nodes
    created by TRIANGULATION\_PLOT.
-   [test3\_elements.txt](test3_elements.txt), the triangle file.
-   [test3\_elements.png](test3_elements.png), an image of the triangles
    before the reordering.
-   [test3\_rcm\_nodes.txt](test3_rcm_nodes.txt), the RCM reordered node
    file.
-   [test3\_rcm\_nodes.png](test3_rcm_nodes.png), a
    [PNG](../../data/png/png.md) image of the reordered nodes created
    by TRIANGULATION\_PLOT.
-   [test3\_rcm\_elements.txt](test3_rcm_elements.txt), the RCM
    reordered triangle file.
-   [test3\_rcm\_elements.png](test3_rcm_elements.png), an image of the
    triangles after the reordering.

**TEST6** works with a 6-node triangulation:

-   [test6\_output.txt](test6_output.txt), the printed output from the
    command\
    "triangulation\_rcm test6"
-   [test6\_nodes.txt](test6_nodes.txt), the node file.
-   [test6\_nodes.png](test6_nodes.png), a
    [PNG](../../data/png/png.md) image of the nodes created by
    TRIANGULATION\_PLOT.
-   [test6\_elements.txt](test6_elements.txt), the triangle file.
-   [test6\_elements.png](test6_elements.png), an image of the triangles
    before the reordering.
-   [test6\_rcm\_nodes.txt](test6_rcm_nodes.txt), the RCM reordered node
    file.
-   [test6\_rcm\_nodes.png](test6_rcm_nodes.png), a
    [PNG](../../data/png/png.md) image of the reordered nodes created
    by TRIANGULATION\_PLOT.
-   [test6\_rcm\_elements.txt](test6_rcm_elements.txt), the RCM
    reordered triangle file.
-   [test6\_rcm\_elements.png](test6_rcm_elements.png), an image of the
    triangles after the reordering.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for TRIANGULATION\_RCM.
-   **ADJ\_BANDWIDTH** computes the bandwidth of an adjacency matrix.
-   **ADJ\_PERM\_BANDWIDTH** computes the bandwidth of a permuted
    adjacency matrix.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **DEGREE** computes the degrees of the nodes in the connected
    component.
-   **FILE\_COLUMN\_COUNT** counts the columns in the first line of a
    file.
-   **FILE\_EXIST** reports whether a file exists.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **GENRCM** finds the reverse Cuthill-Mckee ordering for a general
    graph.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_MODP** returns the nonnegative remainder of integer division.
-   **I4\_SWAP** switches two I4's.
-   **I4\_WRAP** forces an I4 to lie between given limits by wrapping.
-   **I4MAT\_DATA\_READ** reads data from an I4MAT file.
-   **I4MAT\_HEADER\_READ** reads the header from an I4MAT file.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an I4MAT,
    transposed.
-   **I4MAT\_WRITE** writes an I4MAT file with no header.
-   **I4ROW\_COMPARE** compares two rows of an I4ROW.
-   **I4ROW\_SORT\_A** ascending sorts the rows of an I4ROW.
-   **I4ROW\_SWAP** swaps two rows of an I4ROW.
-   **I4VEC\_HEAP\_D** reorders an array of integers into a descending
    heap.
-   **I4VEC\_REVERSE** reverses the elements of an integer vector.
-   **I4VEC\_SORT\_HEAP\_A** ascending sorts an array of integers using
    heap sort.
-   **LEVEL\_SET** generates the connected level structure rooted at a
    given node.
-   **PERM\_CHECK** checks that a vector represents a permutation.
-   **PERM\_INVERSE3** produces the inverse of a given permutation.
-   **R8COL\_PERMUTE** permutes an R8COL in place.
-   **R8MAT\_DATA\_READ** reads the data from an R8MAT file.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **R8MAT\_WRITE** writes an R8MAT file with no header.
-   **RCM** renumbers a connected component by the reverse Cuthill McKee
    algorithm.
-   **ROOT\_FIND** finds a pseudo-peripheral node.
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
-   **TRIANGULATION\_ORDER3\_ADJ\_COUNT** counts adjacencies in a
    triangulation.
-   **TRIANGULATION\_ORDER3\_ADJ\_SET** sets adjacencies in a
    triangulation.
-   **TRIANGULATION\_ORDER3\_NEIGHBOR\_TRIANGLES** determines triangle
    neighbors.
-   **TRIANGULATION\_ORDER6\_ADJ\_COUNT** counts adjacencies in a
    triangulation.
-   **TRIANGULATION\_ORDER6\_ADJ\_SET** sets adjacencies in a
    triangulation.
-   **TRIANGULATION\_ORDER6\_NEIGHBOR\_TRIANGLES** determines triangle
    neighbors.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 22 August 2009.*
