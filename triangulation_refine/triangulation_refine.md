TRIANGULATION\_REFINE\
Refine a Triangulation {#triangulation_refine-refine-a-triangulation align="center"}
======================

------------------------------------------------------------------------

**TRIANGULATION\_REFINE** is a C++ program which reads information
describing a triangulation of a set of points and creates a refined
triangulation.

The refined triangulation is created by dividing each triangle into four
similar subtriangles. The mesh size parameter **h** will be halved by
such a procedure. If the input triangulation is Delaunay, then so will
be the output triangulation.

The program can handle triangulations that use 3 or 6 nodes per
triangle.

The input and output files use the simple [TABLE
format](../../data/table/table.md); comment lines begin with a "\#"
character. Otherwise, each line of the file contains one set of
information, either the coordinates of a node (for a node file), or the
indices of nodes that make up a triangle, (for a triangle file).

The input file *prefix*\_nodes.txt contains the node information for the
triangulation. Each data line contains the X and Y coordinates of a
single node.

The input file *prefix*\_elements.txt contains the triangle information
for the triangulation. Each line contains the indices of 3 or 6 nodes
that form a triangle.

### Usage: {#usage align="center"}

> **triangulation\_refine** *prefix*

where *prefix* is the common filename prefix:

-   *prefix*\_nodes.txt contains the node coordinates,
-   *prefix*\_elements.txt contains the element definitions.
-   *prefix*\_ref\_nodes.txt is the refined node file;
-   *prefix*\_ref\_elements.txt is the refined element fle.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TRIANGULATION\_REFINE** is available in [a C++
version](../../master/triangulation_rcm/triangulation_rcm.md) and [a
FORTRAN90 version](../../f_src/triangulation_rcm/triangulation_rcm.md)
and . [a MATLAB
version](../../m_src/triangulation_rcm/triangulation_rcm.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[TABLE](../../data/table/table.md), a data format which is used for
the input and output files.

[TABLE\_DELAUNAY](../../master/table_delaunay/table_delaunay.md), a
C++ program which can read a file of point coordinates and construct the
Delaunay triangulation for that set of points.

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
a C++ program that reads data defining a 3-node triangulation and
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

[TRIANGULATION\_RCM](../../master/triangulation_rcm/triangulation_rcm.md),
a C++ program which reads data defining a triangulation, determines an
ordering of the nodes that will reduce the bandwidth of the adjacency
matrix, and writes the new triangulation information to a file.

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

-   [triangulation\_refine.cpp](triangulation_refine.cpp), the source
    code.

### Examples and Tests: {#examples-and-tests align="center"}

**BOX3** is an example of the refinement of a 3-node triangulation of a
rectangular box.

-   [box3\_nodes.txt](box3_nodes.txt), the nodes for a 3-node
    triangulation.
-   [box3\_elements.txt](box3_elements.txt), the triangles for an order
    3 triangulation.
-   [box3.png](box3.png), a PNG image of the triangulation, created by
    [TRIANGULATION\_PLOT](../triangulation_plot/triangulation_plot.md).
-   [box3\_ref\_nodes.txt](box3_ref_nodes.txt), the nodes for the
    refined triangulation.
-   [box3\_ref\_elements.txt](box3_ref_elements.txt), the triangles for
    the refined triangulation.
-   [box3\_ref.png](box3_ref.png), a [PNG](../../data/png/png.md)
    image of the refined triangulation, created by
    [TRIANGULATION\_PLOT](../triangulation_plot/triangulation_plot.md).
-   [box3\_output.txt](box3_output.txt), output printed by the program.

**IRREG6** is an example of the refinement of a 6-node triangulation of
an irregular region with a hole:

-   [irreg6\_nodes.txt](irreg6_nodes.txt), the nodes for a 6-node
    triangulation.
-   [irreg6\_elements.txt](irreg6_elements.txt), the triangles for an
    order 6 triangulation.
-   [irreg6.png](irreg6.png), a [PNG](../../data/png/png.md) image of
    the triangulation, created by
    [TRIANGULATION\_PLOT](../triangulation_plot/triangulation_plot.md).
-   [irreg6\_ref\_nodes.txt](irreg6_ref_nodes.txt), the nodes for the
    refined triangulation.
-   [irreg6\_ref\_elements.txt](irreg6_ref_elements.txt), the triangles
    for the refined triangulation.
-   [irreg6\_ref.png](irreg6_ref.png), a [PNG](../../data/png/png.md)
    image of the refined triangulation, created by
    [TRIANGULATION\_PLOT](../triangulation_plot/triangulation_plot.md).
-   [irreg6\_output.txt](irreg6_output.txt), output printed by the
    program.

**HOUSE6** is an example of the refinement of a simple 6-node
triangulation of a "house" diagram that involved 3 triangles.

-   [house6\_nodes.txt](house6_nodes.txt), the nodes for a 6-node
    triangulation.
-   [house6\_elements.txt](house6_elements.txt), the triangles for an
    order 6 triangulation.
-   [house6.png](house6.png), a [PNG](../../data/png/png.md) image of
    the triangulation, created by
    [TRIANGULATION\_PLOT](../triangulation_plot/triangulation_plot.md).
-   [house6\_ref\_nodes.txt](house6_ref_nodes.txt), the nodes for the
    refined triangulation.
-   [house6\_ref\_elements.txt](house6_ref_elements.txt), the triangles
    for the refined triangulation.
-   [house6\_ref.png](house6_ref.png), a [PNG](../../data/png/png.md)
    image of the refined triangulation, created by
    [TRIANGULATION\_PLOT](../triangulation_plot/triangulation_plot.md).
-   [house6\_output.txt](house6_output.txt), output printed by the
    program.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for TRIANGULATION\_REFINE.
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
-   **I4COL\_SORTED\_UNIQUE\_COUNT** counts unique elements in an I4COL.
-   **I4COL\_SWAP** swaps two columns of an I4COL.
-   **I4I4\_SORT\_A** ascending sorts a pair of I4's.
-   **I4MAT\_DATA\_READ** reads data from an I4MAT file.
-   **I4MAT\_HEADER\_READ** reads the header from an I4MAT file.
-   **I4MAT\_TRANSPOSE\_PRINT** prints an I4MAT, transposed.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an I4MAT,
    transposed.
-   **I4MAT\_WRITE** writes an I4MAT file with no header.
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
-   **TRIANGULATION\_ORDER3\_REFINE\_COMPUTE** computes a refined order
    3 triangulation.
-   **TRIANGULATION\_ORDER3\_REFINE\_SIZE** sizes a refined order 3
    triangulation.
-   **TRIANGULATION\_ORDER6\_REFINE\_COMPUTE** computes a refined order
    6 triangulation.
-   **TRIANGULATION\_ORDER6\_REFINE\_SIZE** sizes a refined order 6
    triangulation.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 22 August 2009.*
