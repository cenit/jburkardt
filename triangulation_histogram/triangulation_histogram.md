TRIANGULATION\_HISTOGRAM\
Per-Triangle Histogram for Triangulation {#triangulation_histogram-per-triangle-histogram-for-triangulation align="center"}
========================================

------------------------------------------------------------------------

**TRIANGULATION\_HISTOGRAM** is a C++ program which computes the number
of points from a dataset that are contained in each triangle of a
triangulation.

One application of this program is simply to determine whether the
dataset represents an approximately uniform sampling of the region
covered by the triangulation.

### Usage: {#usage align="center"}

> **triangulation\_histogram** *prefix* *data\_filename*

where *prefix* is the common prefix for the node and element files

-   *prefix***\_nodes.txt**, the node coordinates;
-   *prefix***\_elements.txt**, the element definitions.

and

-   *data\_filename* is the name of the file containing the data points.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TRIANGULATION\_HISTOGRAM** is available in [a C++
version](../../cpp_src/triangulation_histogram/triangulation_histogram.html)
and [a FORTRAN90
version](../../f_src/triangulation_histogram/triangulation_histogram.html)
and [a MATLAB
version](../../m_src/triangulation_histogram/triangulation_histogram.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[RANDOM\_DATA](../../cpp_src/random_data/random_data.html), a C++
library which generates sample points for various probability
distributions, spatial dimensions, and geometries;

[TRIANGLE\_HISTOGRAM](../../cpp_src/triangle_histogram/triangle_histogram.html),
a C++ program which computes histograms of data on the unit triangle.

[TRIANGULATION](../../cpp_src/triangulation/triangulation.html), a C++
library which performs various operations on order 3 ("linear") or order
6 ("quadratic") triangulations.

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

[UNIFORM](../../cpp_src/uniform/uniform.html), a C++ library which
computes elements of a uniform pseudorandom sequence.

### Source Code: {#source-code align="center"}

-   [triangulation\_histogram.cpp](triangulation_histogram.cpp), the
    source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [house3\_nodes.txt](house3_nodes.txt), the nodes for the HOUSE3
    triangulation.
-   [house3\_elements.txt](house3_elements.txt), the elements for the
    HOUSE3 triangulation.
-   [thousand\_xy.txt](thousand_xy.txt), 1000 points in the region
    \[0,2\]x\[0,3\].
-   [house3\_output.txt](house3_output.txt), the output file from the
    command **triangulation\_histogram house3 thousand\_xy.txt**

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for TRIANGULATION\_HISTOGRAM.
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
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TRIANGLE\_AREA\_2D** computes the area of a triangle in 2D.
-   **TRIANGULATION\_AREAS** computes triangle and triangulation areas.
-   **TRIANGULATION\_HITS** counts "data hits" in triangles and a
    triangulation.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 26 September 2009.*
