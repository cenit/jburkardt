TRIANGULATION\_Q2L\
6-Node Triangulation to 3-Node Triangulation {#triangulation_q2l-6-node-triangulation-to-3-node-triangulation align="center"}
============================================

------------------------------------------------------------------------

**TRIANGULATION\_Q2L** is a C++ program which reads information
describing a triangulation of a set of points using 6-node ("quadratic")
triangles, and creates a 3-node ("linear") triangulation.

The same nodes are used, but each 6-node triangle is broken up into four
smaller 3-node triangles.

Thus, the program might be given the following 4 triangles:

            11-12-13-14-15
             |\    |\    |
             | \   | \   |
             6  7  8  9 10
             |   \ |   \ |
             |    \|    \|
             1--2--3--4--5
          

It would make a new triangulation involving 16 triangles:

            11-12-13-14-15
             |\ |\ |\ |\ |
             | \| \| \| \|
             6--7--8--9-10
             |\ |\ |\ |\ |
             | \| \| \| \|
             1--2--3--4--5
          

The input and output files use the simple TABLE format; comment lines
begin with a "\#" character. Otherwise, each line of the file contains
one set of information, either the coordinates of a node (for a node
file), or the indices of nodes that make up a triangle, (for a triangle
file).

The input file *prefix*\_elements.txt contains the triangle information
for the 6-node triangulation. Each line contains the indices of six
nodes that form a triangle, in counterclockwise order. The first three
indices are the vertices, in counterclockwise order. The fourth index is
the midside node between vertices 1 and 2, the fifth the midside between
vertices 2 and 3, and the sixth the midside between vertices 3 and 1.

The output file *prefix*\_q2l\_elements.txt contains the triangle
information for the 3-node triangulation. The vertices for each triangle
are listed in counterclockwise order. There are 4 times as many
triangles in this triangulation.

### Usage: {#usage align="center"}

> **triangulation\_q2l** *prefix*

where *prefix* is the common filename prefix:

-   *prefix*\_nodes.txt contains the node coordinates (not needed by
    this program),
-   *prefix*\_elements.txt contains the quadratic element definitions.
-   *prefix*\_q2l\_elements.txt will contain the linear element
    definitions, based on the same set of nodes.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TRIANGULATION\_Q2L** is available in [a C++
version](../../cpp_src/triangulation_q2l/triangulation_q2l.html) and [a
FORTRAN90 version](../../f_src/triangulation_q2l/triangulation_q2l.html)
and [a MATLAB
version](../../m_src/triangulation_q2l/triangulation_q2l.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

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
    Springer, 2000.
2.  Joseph ORourke,\
    Computational Geometry,\
    Cambridge University Press,\
    Second Edition, 1998.

### Source Code: {#source-code align="center"}

-   [triangulation\_q2l.cpp](triangulation_q2l.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**EXAMPLE** is a set of demonstration data.

-   [example\_nodes.txt](example_nodes.txt), the nodes.
-   [example\_elements.txt](example_elements.txt), the triangles for the
    6-node triangulation.
-   [example.png](example.png), a PNG image of the 6-node triangulation,
    created by
    [TRIANGULATION\_PLOT](../triangulation_plot/triangulation_plot.html).
-   [example\_q2l\_elements.txt](example_q2l_elements.txt), the
    triangles for the 3-node triangulation.
-   [example\_q2l.png](example_q2l.png), a
    [PNG](../../data/png/png.html) image of the 3-node triangulation,
    created by
    [TRIANGULATION\_PLOT](../triangulation_plot/triangulation_plot.html).

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for TRIANGULATION\_Q2L.
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
-   **I4MAT\_DATA\_READ** reads data from an I4MAT file.
-   **I4MAT\_HEADER\_READ** reads the header from an I4MAT file.
-   **I4MAT\_TRANSPOSE\_PRINT** prints an I4MAT, transposed.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an I4MAT,
    transposed.
-   **I4MAT\_WRITE** writes an I4MAT file with no header.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_I4VEC** reads an I4VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TRIANGULATION\_ORDER6\_TO\_ORDER3** linearizes a quadratic
    triangulation.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 22 August 2009.*
