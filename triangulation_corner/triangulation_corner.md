TRIANGULATION\_CORNER\
Handle triangulation corners. {#triangulation_corner-handle-triangulation-corners. align="center"}
=============================

------------------------------------------------------------------------

**TRIANGULATION\_CORNER** is a C++ program which tries to correct
situations in which a triangulation includes corner triangles, that is,
triangles which have two sides on boundary.

Especially in finite element settings, such a triangle is considered
undesirable. Especially in the case when a linear (order 3) finite
element is involved, the function approximation in the interior of the
triangle will be entirely determined by boundary data. If, for instance,
the solution is constrained to be zero on the boundary, then the finite
element function will be zero throughout the interior of the corner
triangle.

Presumably, the triangle has a neighbor triangle on the one non-boundary
side. It is generally possible and reasonable to replace these two
triangles but another two which fill the same quadrilateral, but which
are separated by the other diagonal of the quadrilateral.

The initial situation at the corner is suggest by the following diagram:

              |/  |/
              A---C--
              |\  |\
              | \ |
              |  \|
              B---D--
          

By rearranging the corner triangle and its neighbor, we have the more
satisfactory triangulation:

              |/  |/
              A---C--
              |  /|\
              | / |
              |/  |
              B---D--
          

### Usage: {#usage align="center"}

> **triangulation\_corner** *prefix*

where *prefix* is the common filename prefix:

-   *prefix*\_nodes.txt contains the node coordinates,
-   *prefix*\_elements.txt contains the element definitions.
-   *prefix*\_corner\_nodes.txt will contain the revised node
    coordinates,
-   *prefix*\_corner\_elements.txt will contain the revised element
    definitions.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TRIANGULATION\_CORNER** is available in [a C++
version](../../cpp_src/triangulation_corner/triangulation_corner.html)
and [a FORTRAN90
version](../../f_src/triangulation_corner/triangulation_corner.html) and
[a MATLAB
version](../../m_src/triangulation_corner/triangulation_corner.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[MESH\_TO\_XML](../../cpp_src/mesh_to_xml/mesh_to_xml.html), a C++
program which reads information defining a 1D, 2D or 3D mesh, namely a
file of node coordinates and a file of elements defined by node indices,
and creates a corresponding XML file for input to DOLFIN or FENICS.

[TABLE\_DELAUNAY](../../cpp_src/table_delaunay/table_delaunay.html), a
C++ program which reads a file of point coordinates in the TABLE format
and writes out the Delaunay triangulation.

[TRIANGLE](../../c_src/triangle/triangle.html), a C program which
computes a triangulation of a geometric region.

[TRIANGULATION](../../cpp_src/triangulation/triangulation.html), a C++
library which performs various operations on order 3 ("linear") or order
6 ("quadratic") triangulations.

[TRIANGULATION\_BOUNDARY\_NODES](../../cpp_src/triangulation_boundary_nodes/triangulation_boundary_nodes.html),
a C++ program which reads data defining a triangulation, determines
which nodes lie on the boundary, and writes their coordinates to a file.

[TRIANGULATION\_DELAUNAY\_DISCREPANCY](../../cpp_src/triangulation_delaunay_discrepancy/triangulation_delaunay_discrepancy.html),
a C++ program which measures the amount by which a triangulation fails
the local Delaunay test;

[TRIANGULATION\_DISPLAY\_OPENGL](../../cpp_src/triangulation_display_opengl/triangulation_display_opengl.html),
a C++ program which reads files defining a triangulation and displays an
image using Open GL.

[TRIANGULATION\_HISTOGRAM](../../cpp_src/triangulation_histogram/triangulation_histogram.html),
a C++ program which computes histograms of data over a triangulation.

[TRIANGULATION\_L2Q](../../cpp_src/triangulation_l2q/triangulation_l2q.html),
a C++ program which reads information about a 3-node (linear)
triangulation and creates data defining a corresponding 6-node
(quadratic) triangulation;

[TRIANGULATION\_MASK](../../cpp_src/triangulation_mask/triangulation_mask.html),
a C++ program which reads a triangulation and calls a user-supplied
routine to consider each triangle for deletion;

[TRIANGULATION\_NODE\_TO\_ELEMENT](../../cpp_src/triangulation_node_to_element/triangulation_node_to_element.html),
a C++ program which reads files describing a set of nodes, their
triangulation, and the value of one or more quantities at each node, and
outputs a file that averages the quantities for each element. This
operation in effect creates an "order1" finite element model of the
data.

[TRIANGULATION\_ORDER3](../../data/triangulation_order3/triangulation_order3.html),
a data directory which contains examples of TRIANGULATION\_ORDER3 files,
description of a linear triangulation of a set of 2D points, using a
pair of files to list the node coordinates and the 3 nodes that make up
each triangle;

[TRIANGULATION\_ORDER6](../../data/triangulation_order6/triangulation_order6.html),
a data directory which contains examples of TRIANGULATION\_ORDER6 files,
a description of a quadratic triangulation of a set of 2D points, using
a pair of files to list the node coordinates and the 6 nodes that make
up each triangle.

[TRIANGULATION\_ORIENT](../../cpp_src/triangulation_orient/triangulation_orient.html),
a C++ program which ensures that the triangles in an order 3 or order 6
triangulation have positive orientation;

[TRIANGULATION\_PLOT](../../cpp_src/triangulation_plot/triangulation_plot.html),
a C++ program which makes a PostScript image of a triangulation of
points.

[TRIANGULATION\_QUAD](../../cpp_src/triangulation_quad/triangulation_quad.html),
a C++ program which estimates the integral of a function over a
triangulated region.

[TRIANGULATION\_REFINE](../../cpp_src/triangulation_refine/triangulation_refine.html),
a C++ program which can refine a triangulation.

[TRIANGULATION\_TRIANGLE\_NEIGHBORS](../../cpp_src/triangulation_triangle_neighbors/triangulation_triangle_neighbors.html),
a C++ program which reads data defining a triangulation, determines the
neighboring triangles of each triangle, and writes that information to a
file.

### Reference: {#reference align="center"}

1.  Joseph ORourke,\
    Computational Geometry,\
    Second Edition,\
    Cambridge, 1998,\
    ISBN: 0521649765,\
    LC: QA448.D38.

### Source Code: {#source-code align="center"}

-   [triangulation\_corner.cpp](triangulation_corner.cpp), the source
    code.

### Examples and Tests: {#examples-and-tests align="center"}

**P03** is the square with a hole. The initial mesh has 1 corner
triangle.

-   [p03\_nodes.txt](p03_nodes.txt) the mesh nodes of the problem.
-   [p03\_elements.txt](p03_elements.txt) the mesh triangles of the
    problem.
-   [p03.png](p03.png) a PNG image of the initial mesh.
-   [p02\_corner\_elements.txt](p02_corner_elements.txt) the triangle
    file after corner triangles have been repaired.
-   [p02\_corner.png](p02_corner.png) a [PNG](../../data/png/png.html)
    image of the repaired mesh.

**P05** is the horn. The initial mesh has 4 corner triangles.

-   [p05\_nodes.txt](p05_nodes.txt) the mesh nodes of the problem.
-   [p05\_elements.txt](p05_elements.txt) the mesh triangles of the
    problem.
-   [p05.png](p05.png) a [PNG](../../data/png/png.html) image of the
    initial mesh.
-   [p05\_corner\_elements.txt](p05_corner_elements.txt) the triangle
    file after corner triangles have been repaired.
-   [p05\_corner.png](p05_corner.png) a [PNG](../../data/png/png.html)
    image of the repaired mesh.

**P08** is the holey pie slice. The initial mesh has 2 corner triangles.

-   [p08\_nodes.txt](p08_nodes.txt) the mesh nodes of the problem.
-   [p08\_elements.txt](p08_elements.txt) the mesh triangles of the
    problem.
-   [p08.png](p08.png), a [PNG](../../data/png/png.html) image of the
    initial mesh.
-   [p08\_corner\_elements.txt](p08_corner_elements.txt) the triangle
    file after corner triangles have been repaired.
-   [p08\_corner.png](p08_corner.png) a [PNG](../../data/png/png.html)
    image of the repaired mesh.

**P09** is Jeff Borggaard's square with two hexagonal holes. The initial
mesh has 3 corner triangles.

-   [p09\_nodes.txt](p09_nodes.txt) the mesh nodes of the problem.
-   [p09\_elements.txt](p09_elements.txt) the mesh triangles of the
    problem.
-   [p09.png](p09.png) a [PNG](../../data/png/png.html) image of the
    initial mesh.
-   [p09\_corner\_elements.txt](p09_corner_elements.txt) the triangle
    file after corner triangles have been repaired.
-   [p09\_corner.png](p09_corner.png) a [PNG](../../data/png/png.html)
    image of the repaired mesh.

**P10** is the unit square. The initial mesh has 4 corner triangles.

-   [p10\_nodes.txt](p10_nodes.txt) the mesh nodes of the problem.
-   [p10\_elements.txt](p10_elements.txt) the mesh triangles of the
    problem.
-   [p10.png](p10.png) a [PNG](../../data/png/png.html) image of the
    initial mesh.
-   [p10\_corner\_elements.txt](p10_corner_elements.txt) the triangle
    file after corner triangles have been repaired.
-   [p10\_corner.png](p10_corner.png) a [PNG](../../data/png/png.html)
    image of the repaired mesh.

**P11** is the L-shaped region. The initial mesh has 4 corner triangles.

-   [p11\_nodes.txt](p11_nodes.txt) the mesh nodes of the problem.
-   [p11\_elements.txt](p11_elements.txt) the mesh triangles of the
    problem.
-   [p11.png](p11.png) a [PNG](../../data/png/png.html) image of the
    initial mesh.
-   [p11\_corner\_elements.txt](p11_corner_elements.txt) the triangle
    file after corner triangles have been repaired.
-   [p11\_corner.png](p11_corner.png) a [PNG](../../data/png/png.html)
    image of the repaired mesh.

**Q11** is the L-shaped region, but with quadratric (6 node) triangles.
The initial mesh has 4 corner triangles. Because we are using quadratic
triangles, when we merge two triangles and swap the diagonal, the
midside node on the common diagonal will no longer lie on a line, midway
between the two vertices. **TRIANGULATION\_CORNER** assumes this is
undesirable, and recomputes the coordinates of such midside nodes, and
outputs a modified node coordinate file as well as the new triangle
file.

-   [q11\_nodes.txt](q11_nodes.txt) the mesh nodes of the problem.
-   [q11\_elements.txt](q11_elements.txt) the mesh triangles of the
    problem.
-   [q11.png](q11.png) a [PNG](../../data/png/png.html) image of the
    initial mesh.
-   [q11\_nodes.corner.txt](q11_corner_nodes.txt) the node coordinate
    file after corner triangles have been repaired, which, for
    quadratric triangles, requires adjusting some midside nodes.
-   [q11\_corner\_elements.txt](q11_corner_elements.txt) the triangle
    file after corner triangles have been repaired.
-   [q11\_corner.png](q11_corner.png) a [PNG](../../data/png/png.html)
    image of the repaired mesh.

**P12** is the John Shadid's H-shaped region. The initial mesh has 7
corner triangles.

-   [p12\_nodes.txt](p12_nodes.txt) the mesh nodes of the problem.
-   [p12\_elements.txt](p12_elements.txt) the mesh triangles of the
    problem.
-   [p12.png](p12.png) a [PNG](../../data/png/png.html) image of the
    initial mesh.
-   [p12\_corner\_elements.txt](p12_corner_elements.txt) the triangle
    file after corner triangles have been repaired.
-   [p12\_corner.png](p12_corner.png) a [PNG](../../data/png/png.html)
    image of the repaired mesh.

**P13** is the Sandia fork. The initial mesh has 6 corner triangles.

-   [p13\_nodes.txt](p13_nodes.txt) the mesh nodes of the problem.
-   [p13\_elements.txt](p13_elements.txt) the mesh triangles of the
    problem.
-   [p13.png](p13.png) a [PNG](../../data/png/png.html) image of the
    initial mesh.
-   [p13\_corner\_elements.txt](p13_corner_elements.txt) the triangle
    file after corner triangles have been repaired.
-   [p13\_corner.png](p13_corner.png) a [PNG](../../data/png/png.html)
    image of the repaired mesh.

**P14** is Marcus Garvie's Lake Alpha, with Beta Island. The initial
mesh has 5 corner triangles. (Must be small!)

-   [p14\_nodes.txt](p14_nodes.txt) the mesh nodes of the problem.
-   [p14\_elements.txt](p14_elements.txt) the mesh triangles of the
    problem.
-   [p14.png](p14.png) a [PNG](../../data/png/png.html) image of the
    initial mesh.
-   [p14\_corner\_elements.txt](p14_corner_elements.txt) the triangle
    file after corner triangles have been repaired.
-   [p14\_corner.png](p14_corner.png) a [PNG](../../data/png/png.html)
    image of the repaired mesh.

**P15** is Sangbum Kim's forward step region. The initial mesh has 6
corner triangles.

-   [p15\_nodes.txt](p15_nodes.txt) the mesh nodes of the problem.
-   [p15\_elements.txt](p15_elements.txt) the mesh triangles of the
    problem.
-   [p15.png](p15.png) a [PNG](../../data/png/png.html) image of the
    initial mesh.
-   [p15\_corner\_elements.txt](p15_corner_elements.txt) the triangle
    file after corner triangles have been repaired.
-   [p15\_corner.png](p15_corner.png) a [PNG](../../data/png/png.html)
    image of the repaired mesh.

**P16** is Kevin Pond's elbow, a quarter of a circular annulus. The
initial mesh has 1 corner triangle.

-   [p16\_nodes.txt](p16_nodes.txt) the mesh nodes of the problem.
-   [p16\_elements.txt](p16_elements.txt) the mesh triangles of the
    problem.
-   [p16.png](p16.png) a [PNG](../../data/png/png.html) image of the
    initial mesh.
-   [p16\_corner\_elements.txt](p16_corner_elements.txt) the triangle
    file after corner triangles have been repaired.
-   [p16\_corner.png](p16_corner.png) a [PNG](../../data/png/png.html)
    image of the repaired mesh.

**P17** is the rectangular channel with a Reuleaux triangle obstacle.
The initial mesh has 4 corner triangles.

-   [p17\_nodes.txt](p17_nodes.txt) the mesh nodes of the problem.
-   [p17\_elements.txt](p17_elements.txt) the mesh triangles of the
    problem.
-   [p17.png](p17.png) a [PNG](../../data/png/png.html) image of the
    initial mesh.
-   [p17\_corner\_elements.txt](p17_corner_elements.txt) the triangle
    file after corner triangles have been repaired.
-   [p17\_corner.png](p17_corner.png) a [PNG](../../data/png/png.html)
    image of the repaired mesh.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for TRIANGULATION\_CORNER.
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
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an I4MAT,
    transposed.
-   **I4MAT\_WRITE** writes an I4MAT file with no header.
-   **I4ROW\_COMPARE** compares two rows of a integer array.
-   **I4ROW\_SORT\_A** ascending sorts the rows of an I4ROW.
-   **I4ROW\_SWAP** swaps two rows of an I4ROW.
-   **I4VEC\_ZERO** zeroes an I4VEC.
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
-   **TRIANGLE\_AREA\_2D** computes the area of a triangle in 2D.
-   **TRIANGULATION\_ORDER3\_NEIGHBOR\_TRIANGLES** determines triangle
    neighbors.
-   **TRIANGULATION\_ORDER6\_NEIGHBOR\_TRIANGLES** determines triangle
    neighbors.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 22 August 2009.*
