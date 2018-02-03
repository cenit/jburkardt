TRIANGULATION\_BOUNDARY\_NODES\
Boundary Nodes of a Triangulation {#triangulation_boundary_nodes-boundary-nodes-of-a-triangulation align="center"}
=================================

------------------------------------------------------------------------

**TRIANGULATION\_BOUNDARY\_NODES** is a C++ program which analyzes the
triangulation of a region, and lists those nodes which lie on the
boundary of the triangulation.

Either a 3-node or 6-node triangulation may be used.

Although this boundary information is useful, it would be more useful to
divide the boundary nodes up, if the boundary consists of more than one
connected segment. Moreover, it would also be useful to report the
sequence of nodes necessary to trace out a connected segment of the
boundary. I imagine I will come back to work on those projects later!

### Usage: {#usage align="center"}

> **triangulation\_boundary\_nodes** *prefix*

where 'prefix' is the common filename prefix:

-   *prefix***\_nodes.txt** contains the node coordinates,
-   *prefix***\_elements.txt** contains the element definitions.
-   *prefix***\_boundary\_nodes.txt** will contain a 0 for each internal
    node, and a 1 for each boundary node.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TRIANGULATION\_BOUNDARY\_NODES** is available in [a C++
version](../../cpp_src/triangulation_boundary_nodes/triangulation_boundary_nodes.html)
and [a FORTRAN90
version](../../f_src/triangulation_boundary_nodes/triangulation_boundary_nodes.html)
and [a MATLAB
version](../../m_src/triangulation_boundary_nodes/triangulation_boundary_nodes.html).

### Related Programs: {#related-programs align="center"}

[MESH\_TO\_XML](../../cpp_src/mesh_to_xml/mesh_to_xml.html), a C++
program which reads information defining a 1D, 2D or 3D mesh, namely a
file of node coordinates and a file of elements defined by node indices,
and creates a corresponding XML file for input to DOLFIN or FENICS.

[TABLE\_DELAUNAY](../../cpp_src/table_delaunay/table_delaunay.html), a
C++ program which triangulates a set of nodes whose coordinates are
stored in a file.

[TRIANGLE](../../c_src/triangle/triangle.html), a C program which
computes a triangulation of a geometric region.

[TRIANGULATION](../../cpp_src/triangulation/triangulation.html), a C++
library which carries out various operations on order 3 ("linear") or
order 6 ("quadratic") triangulations.

[TRIANGULATION\_CORNER](../../cpp_src/triangulation_corner/triangulation_corner.html),
a C++ program which patches triangulations so that no triangle has two
sides on the boundary.

[TRIANGULATION\_DELAUNAY\_DISCREPANCY](../../cpp_src/triangulation_delaunay_discrepancy/triangulation_delaunay_discrepancy.html),
a C++ program which measures the amount by which a triangulation fails
the local Delaunay test;

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

-   [triangulation\_boundary\_nodes.cpp](triangulation_boundary_nodes.cpp),
    the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**ELBOW** is a curved region, looking like an elbow, that lies inside
the unit square. It is triangulated using order 3 triangles. There are
320 nodes and 568 triangles. There are 66 nodes on the boundary.

-   [elbow\_nodes.txt](elbow_nodes.txt), the node file.
-   [elbow\_nodes.png](elbow_nodes.png), a PNG image of the nodes.
-   [elbow\_elements.txt](elbow_elements.txt), the triangles.
-   [elbow\_output.txt](elbow_output.txt), the printed output from a run
    of the sample program.
-   [elbow\_boundary\_nodes.txt](elbow_boundary_nodes.txt), the boundary
    node file.
-   [elbow\_boundary\_nodes.png](elbow_boundary_nodes.png), a PNG image
    of the boundary nodes.

**LAKE** is an irregular lake-shaped region with an "island". It is
triangulated using order 3 triangles.

-   [lake\_nodes.txt](lake_nodes.txt), the node file.
-   [lake\_nodes.png](lake_nodes.png), a PNG image of the nodes.
-   [lake\_elements.txt](lake_elements.txt), the triangles.
-   [lake\_output.txt](lake_output.txt), the printed output from a run
    of the sample program.
-   [lake\_boundary\_nodes.txt](lake_boundary_nodes.txt), the boundary
    node file.
-   [lake\_boundary\_nodes.png](lake_boundary_nodes.png), a PNG image of
    the boundary nodes.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for TRIANGULATION\_BOUNDARY\_NODES.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **FILE\_COLUMN\_COUNT** counts the columns in the first line of a
    file.
-   **FILE\_EXIST** reports whether a file exists.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4COL\_COMPARE** compares columns I and J of a integer array.
-   **I4COL\_SORT\_A** ascending sorts the columns of an integer array.
-   **I4COL\_SWAP** swaps two columns of an integer array.
-   **I4MAT\_DATA\_READ** reads data from an I4MAT file.
-   **I4MAT\_HEADER\_READ** reads the header from an I4MAT file.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an I4MAT,
    transposed.
-   **R8MAT\_DATA\_READ** reads the data from an R8MAT file.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
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
-   **TRIANGULATION\_ORDER3\_BOUNDARY\_NODE** indicates nodes on the
    boundary.
-   **TRIANGULATION\_ORDER6\_BOUNDARY\_NODE** indicates nodes on the
    boundary.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 03 December 2010.*
