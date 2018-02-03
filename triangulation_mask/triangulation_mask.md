TRIANGULATION\_MASK\
Remove Triangles from a Triangulation {#triangulation_mask-remove-triangles-from-a-triangulation align="center"}
=====================================

------------------------------------------------------------------------

**TRIANGULATION\_MASK** is a C++ program which reads the nodes and
triangles that define a triangulation, calls a user routine which
determines whether each triangle is to be preserved or discarded
("masked") from the triangulation, and writes out new node and triangle
files that define the masked triangulation.

The input file *prefix*\_nodes.txt contains the node information for the
triangulation. Each data line contains the X and Y coordinates of a
single node.

The input file *prefix*\_elements.txt contains the triangle information
for the triangulation. Each line contains the indices of 3 or 6 nodes
that form a triangle.

One motivation for creating this program is as follows. Suppose we have
a set of points that lie on the boundary or inside of a non-convex
region. If we naively call an unconstrained Delaunay triangulation
routine, such as **TABLE\_DELAUNAY**, then because the region is not
convex, it is possible to create triangles which lie outside the region.

An easy way to correct this problem is to call a user routine and pass
it the indices and coordinates of each triangle. The user can then
decide to drop any triangle whose centroid, say, lies outside the
region.

Other masking criteria might drop triangles that are too small, or that
have too small an angle, or that lie inside some interior hole. These
choices are entirely up to the user.

### Usage: {#usage align="center"}

The user masking routine has the form:

> bool **triangle\_mask** ( int *dim\_num*, int *triangle\_order*, int
> *nodes*\[\], double *coord*\[\] )

with arguments:

-   *dim\_num*, the spatial dimension, always equal to 2.
-   *element\_order*, the number of nodes in the triangle, usually 3 or
    6;
-   *nodes*, an integer array of dimension *element\_order*, containing
    the indices of each node of the triangle;
-   *coord*, a double array of dimension *dim\_num* by *element\_order*,
    containing the *x* and *y* coordinates of each node of the triangle;
-   *triangle\_mask*, a boolean value, which is **true** if the triangle
    should be deleted or "masked", and **false** if the triangle should
    be preserved;

The user masking routine must be compiled and linked with the software,
perhaps with a command like:

> g++ **triangulation\_mask.o** *triangle\_mask.C*

We will assume that the executable is renamed to
**triangulation\_mask**.

> **triangulation\_mask** *prefix*

where *prefix* is the common filename prefix:

-   *prefix*\_nodes.txt contains the node coordinates,
-   *prefix*\_elements.txt contains the element definitions.
-   *prefix*\_mask\_nodes.txt is an output file which will contain the
    node coordinates retained by the mask;
-   *prefix*\_mask\_elements.txt is an output file which will contain
    the defintions of elements retained by the mask.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TRIANGULATION\_MASK** is available in [a C++
version](../../master/triangulation_mask/triangulation_mask.md) and
[a FORTRAN90
version](../../f_src/triangulation_mask/triangulation_mask.md) and [a
MATLAB version](../../m_src/triangulation_mask/triangulation_mask.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[TABLE](../../data/table/table.md), a data format which is used for
the input and output files.

[TABLE\_DELAUNAY](../../master/table_delaunay/table_delaunay.md), a
C++ program which can compute the Delaunay triangulation of a set of
points.

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

[TRIANGULATION\_TRIANGLE\_NEIGHBORS](../../master/triangulation_triangle_neighbors/triangulation_triangle_neighbors.md),
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
    ISBN: 3-540-65620-0.
3.  Barry Joe,\
    GEOMPACK - a software package for the generation of meshes using
    geometric algorithms,\
    Advances in Engineering Software,\
    Volume 13, 1991, pages 325-331.
4.  Albert Nijenhuis, Herbert Wilf,\
    Combinatorial Algorithms for Computers and Calculators,\
    Second Edition,\
    Academic Press, 1978,\
    ISBN: 0-12-519260-6,\
    LC: QA164.N54.
5.  Atsuyuki Okabe, Barry Boots, Kokichi Sugihara, Sung Nok Chiu,\
    Spatial Tesselations: Concepts and Applications of Voronoi
    Diagrams,\
    Second Edition,\
    Wiley, 2000,\
    ISBN: 0-471-98635-6,\
    LC: QA278.2.O36.
6.  Joseph ORourke,\
    Computational Geometry,\
    Second Edition,\
    Cambridge, 1998,\
    ISBN: 0521649765,\
    LC: QA448.D38.

### Source Code: {#source-code align="center"}

-   [triangulation\_mask.cpp](triangulation_mask.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**P15** is a triangulation created by calling DISTMESH, then removing
duplicate points by calling
[TABLE\_MERGE](../../f_src/table_merge/table_merge.md), then creating
a Delaunay triangulation by calling
[TABLE\_DELAUNAY](../../f_src/table_delaunay/table_delaunay.md),
Unfortunately, this results in many triangles that lie outside the
region of interest.

-   [p15\_nodes.txt](p15_nodes.txt), a set of nodes.
-   [p15\_nodes.png](p15_nodes.png), a PNG image of the nodes.
-   [p15\_elements.txt](p15_elements.txt), a set of order 3 triangles.
-   [p15\_elements.png](p15_elements.png), a PNG image of the original
    data.
-   [p15\_mask.cpp](p15_mask.cpp), a routine which masks the triangles
    by dropping those whose centroids lie outside the region.
-   [p15\_mask.sh](p15_mask.sh), commands which compile the user routine
    with **TRIANGULATION\_MASK**, and analyze the triangulation.
-   [p15\_mask\_output.txt](p15_mask_output.txt), the output from a run
    of the program.
-   [p15\_mask\_nodes.txt](p15_mask_nodes.txt), the nodes after masking.
-   [p15\_mask\_elements.txt](p15_mask_elements.txt), the elements after
    masking.
-   [p15\_mask\_elements.png](p15_mask_elements.png), PNG image of the
    elements after masking.

**SMALL** is a triangulation of the 25 lattice points on the
\[0,4\]x\[0,4\] square. Our masking operation should cut out a lower
left triangular corner and a section from the upper right.

-   [small\_nodes.txt](small_nodes.txt), a set of nodes.
-   [small\_nodes.png](small_nodes.png), an image of the original nodes.
-   [small\_elements.txt](small_elements.txt), a set of order 3
    triangles.
-   [small\_elements.png](small_elements.png), a PNG image of the
    original elements.
-   [small\_mask.cpp](small_mask.cpp), a routine which masks the
    triangles by dropping those whose centroids lie outside the region.
-   [small\_mask.sh](small_mask.sh), commands which compile the user
    routine with **TRIANGULATION\_MASK**, and analyze the triangulation.
-   [small\_mask\_output.txt](small_mask_output.txt), the output from a
    run of the program.
-   [small\_mask\_nodes.txt](small_mask_nodes.txt), the nodes after
    masking.
-   [small\_mask\_nodes.png](small_mask_nodes.png), an image of the
    nodes after masking.
-   [small\_mask\_elements.txt](small_mask_elements.txt), the elements
    after masking.
-   [small\_mask\_elements.png](small_mask_elements.png), a PNG image of
    the elements after masking.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for TRIANGULATION\_MASK.
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
-   **LVEC\_PRINT** prints a logical vector.
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
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 30 September 2010.*
