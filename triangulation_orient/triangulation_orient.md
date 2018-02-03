TRIANGULATION\_ORIENT\
Positively Orient Triangles {#triangulation_orient-positively-orient-triangles align="center"}
===========================

------------------------------------------------------------------------

**TRIANGULATION\_ORIENT** is a C++ program which reads a triangulation,
and reorients each triangle that has a negative area. If at least one
such triangle is encountered, the program writes out a new copy of the
triangle file in which all the triangles have been correctly oriented.

The input file *prefix*\_nodes.txt contains the node information for the
triangulation. Each data line contains the X and Y coordinates of a
single node.

The input file *prefix*\_elements.txt contains the triangle information
for the triangulation. Each line contains the indices of 3 or 6 nodes
that form a triangle.

For many applications, including computer graphics and finite element
computations, it is assumed that the triangles are described with a
positive orientation. That is, the nodes are listed in clockwise order.

**TRIANGULATION\_ORIENT** can check whether every triangle in a
triangulation has positive orientation, and can "repair" the file if it
finds one or more triangles with a negative orientation.

A misoriented order 3 triangle:

                   2
                  /|
                 / |
                /  |
               /   |
              /    |
             1-----3
          

The corrected order 3 triangle:

                   3
                  /|
                 / |
                /  |
               /   |
              /    |
             1-----2
          

A misoriented order 6 triangle:

                   2
                  /|
                 / |
                4  5
               /   |
              /    |
             1--6--3
          

The corrected order 6 triangle:

                   3
                  /|
                 / |
                6  5
               /   |
              /    |
             1--4--2
          

### Usage: {#usage align="center"}

> **triangulation\_orient** *prefix*

where *prefix* is the common filename prefix:

-   *prefix*\_nodes.txt contains the node coordinates,
-   *prefix*\_elements.txt contains the element definitions.
-   *prefix*\_orient\_elements.txt will contains the oriented element
    definitions.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TRIANGULATION\_ORIENT** is available in [a C++
version](../../master/triangulation_orient/triangulation_orient.md)
and [a FORTRAN90
version](../../f_src/triangulation_orient/triangulation_orient.md) and
[a MATLAB
version](../../m_src/triangulation_orient/triangulation_orient.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[TABLE](../../data/table/table.md), a data format which is used for
the input and output files.

[TABLE\_DELAUNAY](../../master/table_delaunay/table_delaunay.md), a
C++ program which computes the Delaunay triangulation of a set of
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
    Volume 13, Number 5, 1991, pages 325-331.
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
7.  Per-Olof Persson, Gilbert Strang,\
    A Simple Mesh Generator in MATLAB,\
    SIAM Review,\
    Volume 46, Number 2, June 2004, pages 329-345.

### Source Code: {#source-code align="center"}

-   [triangulation\_orient.cpp](triangulation_orient.cpp), the source
    code.

### Examples and Tests: {#examples-and-tests align="center"}

**P15** is a triangulation created by DISTMESH. Unfortunately, 512 of
the triangles have a negative orientation. In this example,
**TRIANGULATION\_ORIENT** was used to reorient those triangles.

-   [p15\_nodes.txt](p15_nodes.txt), a set of nodes.
-   [p15\_elements.txt](p15_elements.txt), a set of order 3 triangles.
-   [p15\_orient\_elements.txt](p15_orient_elements.txt), the set of
    order 3 triangles after **TRIANGULATION\_ORIENT** has reoriented
    them.
-   [p15\_output.txt](p15_output.txt), the printed output from the
    program.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for TRIANGULATION\_ORIENT.
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

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 22 August 2009.*
