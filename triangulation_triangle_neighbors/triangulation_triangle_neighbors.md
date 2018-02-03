TRIANGULATION\_TRIANGLE\_NEIGHBORS\
Triangle Neighbors\
in a Triangulation {#triangulation_triangle_neighbors-triangle-neighbors-in-a-triangulation align="center"}
===================================

------------------------------------------------------------------------

**TRIANGULATION\_TRIANGLE\_NEIGHBORS** is a C++ program which computes
the three neighboring triangles of each triangle in a triangulation.

The user supplies a node file and a triangle file, containing the
coordinates of the nodes, and the indices of the nodes that make up each
triangle. Either 3-node or 6-node triangles may be used.

The program reads the data, computes the triangle neighbor information,
and writes out the information to a file. In cases where one side of a
triangle has no triangle neighbor, a value of -1 is assigned.

The triangle neighbor array is useful if the triangulation has to be
searched to find the triangle containing a given point. It is also
useful when analyzing the bandwidth of the adjacency matrix, or of a
finite element matrix derived from the triangulation.

### Usage: {#usage align="center"}

> **triangulation\_triangle\_neighbors** *prefix*

where *prefix* is the common filename prefix:

-   *prefix*\_nodes.txt contains the node coordinates,
-   *prefix*\_elements.txt contains the element definitions.
-   *prefix*\_element\_neighbors.txt will contain the triangle
    neighbors.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TRIANGULATION\_TRIANGLE\_NEIGHBORS** is available in [a C
version](../../c_src/triangulation_triangle_neighbors/triangulation_triangle_neighbors.html)
and [a C++
version](../../cpp_src/triangulation_triangle_neighbors/triangulation_triangle_neighbors.html)
and [a FORTRAN90
version](../../f_src/triangulation_triangle_neighbors/triangulation_triangle_neighbors.html)
and [a MATLAB
version.](../../m_src/triangulation_triangle_neighbors/triangulation_triangle_neighbors.html)

### Related Data and Programs: {#related-data-and-programs align="center"}

[MESH\_BANDWIDTH](../../cpp_src/mesh_bandwidth/mesh_bandwidth.html), is
a C++ program which returns the geometric bandwidth associated with a
mesh of elements of any order and in a space of arbitrary dimension.

[MESH\_TO\_XML](../../cpp_src/mesh_to_xml/mesh_to_xml.html), a C++
program which reads information defining a 1D, 2D or 3D mesh, namely a
file of node coordinates and a file of elements defined by node indices,
and creates a corresponding XML file for input to DOLFIN or FENICS.

[NEIGHBORS\_TO\_METIS\_GRAPH](../../cpp_src/neighbors_to_metis_graph/neighbors_to_metis_graph.html),
a C++ program which reads a triangle mesh neighbor file created by
**TRIANGULATION\_TRIANGLE\_NEIGHBORS** and writes a modified version of
the same data suitable for input to the mesh partitioning program
[METIS.](../../c_src/metis/metis.html)

[RCM](../../cpp_src/rcm/rcm.html), a C++ library which carries out
reverse Cuthill-McKee computations.

[TABLE\_DELAUNAY](../../cpp_src/table_delaunay/table_delaunay.html), a
C++ program which triangulates a set of nodes whose coordinates are
stored in a file.

[TET\_MESH\_RCM](../../f_src/tet_mesh_rcm/tet_mesh_rcm.html), a
FORTRAN90 library which applies the reverse Cuthill-McKee reordering to
a tetrahedral mesh of nodes in 3D.

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
a C++ program which can reorder the nodes of a triangulation so that the
bandwidth of the associated adjacency matrix is reduced.

[TRIANGULATION\_REFINE](../../cpp_src/triangulation_refine/triangulation_refine.html),
a C++ program which reads data defining a triangulation, replaces each
triangle by four congruent smaller ones, and writes the new
triangulation information to a file.

[TRIG\_TO\_NEIB](../../c_src/trig_to_neib/trig_to_neib.html), a C
program which reads "NODE" and "ELE" files (a format prescribed by
**triangle**) describing a triangulation, and produces a file defining
the neighbor triangles of each element; the program can also produce
information about the Voronoi diagram. The program is by Lili Ju.

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

-   [triangulation\_triangle\_neighbors.cpp](triangulation_triangle_neighbors.cpp),
    the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**BIG\_CAVITY** is a triangulation using 8,195 nodes and 4,000 elements.

-   [big\_cavity\_nodes.txt](../../datasets/triangulation_order3/big_cavity_nodes.txt),
    the node coordinates.
-   [big\_cavity\_elements.txt](../../datasets/triangulation_order3/big_cavity_elements.txt),
    the triangulation;
-   [big\_cavity\_triangulation.png](../../datasets/triangulation_order3/big_cavity_triangulation.png),
    a PNG image of the triangulation;
-   [big\_cavity\_element\_neighbors.txt](../../datasets/triangulation_order3/big_cavity_element_neighbors.txt),
    the neighbor triangles.

**BOX3** is a triangulation of order 3, using 20 nodes and 24 elements:

-   [box3\_nodes.txt](../../datasets/triangulation_order3/box3_nodes.txt),
    the node coordinates.
-   [box3\_elements.txt](../../datasets/triangulation_order3/box3_elements.txt),
    the triangulation;
-   [box3\_triangulation.png](../../datasets/triangulation_order3/box3_triangulation.png),
    a PNG image of the triangulation;
-   [box3\_element\_neighbors.txt](../../datasets/triangulation_order3/box3_element_neighbors.txt),
    the neighbor triangles.

**BOX6** is a triangulation of order 6:

-   [box6\_nodes.txt](../../datasets/triangulation_order6/box6_nodes.txt),
    the node coordinates.
-   [box6\_elements.txt](../../datasets/triangulation_order6/box6_elements.txt),
    the triangulation;
-   [box6\_triangulation.png](../../datasets/triangulation_order6/box6_triangulation.png),
    a PNG image the triangulation;
-   [box6\_element\_neighbors.txt](../../datasets/triangulation_order6/box6_element_neighbors.txt),
    the neighbor triangles.

**GREENLAND** is a triangulation using 33,343 nodes and 64,125 elements.

-   [greenland\_nodes.txt](../../datasets/triangulation_order3/greenland_nodes.txt),
    the node coordinates.
-   [greenland\_elements.txt](../../datasets/triangulation_order3/greenland_elements.txt),
    the triangulation;
-   [greenland\_element\_neighbors.txt](../../datasets/triangulation_order3/greenland_element_neighbors.txt),
    the neighbor triangles.

**LAKE\_COARSE** is an irregular lake with an island.\
There are 621 nodes and 974 elements and 1 hole.

-   [lake\_coarse\_nodes.txt](lake_coarse_nodes.txt), the node
    coordinates.
-   [lake\_coarse\_elements.txt](lake_coarse_elements.txt), the
    triangulation;
-   [lake\_coarse\_triangulation.png](lake_coarse_triangulation.png), a
    PNG image of the triangulation.
-   [lake\_coarse\_element\_neighbors.txt](lake_coarse_element_neighbors.txt),
    the neighbor triangles.

**LAKE3** is an irregular lake with an island.\
The smallest angle is 23.46 degrees.\
There are 1552 nodes and 2820 elements and 1 hole.

-   [lake3\_nodes.txt](lake3_nodes.txt), the node coordinates.
-   [lake3\_elements.txt](lake3_elements.txt), the triangulation;
-   [lake3\_triangulation.png](lake3_triangulation.png), a PNG image of
    the triangulation.
-   [lake3\_element\_neighbors.txt](lake3_element_neighbors.txt), the
    neighbor triangles.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for TRIANGULATION\_TRIANGLE\_NEIGHBORS.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **FILE\_COLUMN\_COUNT** counts the columns in the first line of a
    file.
-   **FILE\_EXIST** reports whether a file exists.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4MAT\_DATA\_READ** reads data from an I4MAT file.
-   **I4MAT\_HEADER\_READ** reads the header from an I4MAT file.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an I4MAT,
    transposed.
-   **I4MAT\_WRITE** writes an I4MAT file with no header.
-   **I4ROW\_COMPARE** compares two rows of a integer array.
-   **I4ROW\_SORT\_A** ascending sorts the rows of an I4ROW.
-   **I4ROW\_SWAP** swaps two rows of an I4ROW.
-   **R8MAT\_DATA\_READ** reads the data from an R8MAT file.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
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
-   **TRIANGULATION\_ORDER3\_NEIGHBOR\_TRIANGLES** determines triangle
    neighbors.
-   **TRIANGULATION\_ORDER6\_NEIGHBOR\_TRIANGLES** determines triangle
    neighbors.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 22 August 2009.*
