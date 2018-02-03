TABLE\_DELAUNAY\
Triangulate Points in 2D {#table_delaunay-triangulate-points-in-2d align="center"}
========================

------------------------------------------------------------------------

**TABLE\_DELAUNAY** is a C++ program which computes the Delaunay
triangulation of a set of points in the plane.

Specifically, TABLE\_DELAUNAY reads a data file of node coordinates,
computes the Delaunay triangulation of those points, and writes a
triangle file listing the indices of nodes that form each triangle.

### Usage: {#usage align="center"}

> **table\_delaunay** *prefix*

where *prefix* is the common prefix for the node and triangle files,

-   *prefix***\_nodes.txt**, the node coordinate file (input).
-   *prefix***\_elements.txt**, the element file (output).

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TABLE\_DELAUNAY** is available in [a C++
version](../../cpp_src/table_delaunay/table_delaunay.html) and [a
FORTRAN90 version](../../f_src/table_delaunay/table_delaunay.html) and
[a MATLAB version](../../m_src/table_delaunay/table_delaunay.html).

### Related Programs: {#related-programs align="center"}

[DELAUNAY\_LMAP\_2D](../../f_src/delaunay_lmap_2d/delaunay_lmap_2d.html),
a FORTRAN90 program that computes the Delaunay triangulation of points
in the plane under a linear mapping.

[GEOMPACK](../../cpp_src/geompack/geompack.html), a C++ library which
computes the Delaunay triangulation.

[STRIPACK](../../f_src/stripack/stripack.html), a FORTRAN90 library
which computes the Delaunay triangulation or Voronoi diagram of points
on a sphere.

[TABLE](../../data/table/table.html), a file format which is used for
the input to this program.

[TABLE\_IO](../../cpp_src/table_io/table_io.html), a C++ library which
supplies the routines used to read the TABLE file.

[TABLE\_TET\_MESH](../../f_src/table_tet_mesh/table_tet_mesh.html), a
FORTRAN90 program which can read a table file of 3D data, and compute a
tetrahedral mesh.

[TABLE\_VORONOI](../../cpp_src/table_voronoi/table_voronoi.html), a C++
program which can be used to compute information about the Voronoi
diagram of the points.

[TRIANGULATION\_DISPLAY\_OPENGL](../../cpp_src/triangulation_display_opengl/triangulation_display_opengl.html),
a C++ program which reads files defining a triangulation and displays an
image using Open GL.

[TRIANGULATION\_PLOT](../../cpp_src/triangulation_plot/triangulation_plot.html),
a C++ program which may be used to visualize the triangulation.

[TRIPACK](../../f_src/tripack/tripack.html), a FORTRAN90 library which
computes the Delaunay triangulation of points in the plane.

### Reference: {#reference align="center"}

1.  Marc deBerg, Marc Krevald, Mark Overmars, Otfried Schwarzkopf,\
    Computational Geometry,\
    Springer, 2000,\
    ISBN: 3-540-65620-0,\
    LC: QA448.D38.C65.
2.  Herbert Edelsbrunner,\
    Geometry and Topology for Mesh Generation,\
    Cambridge, 2001,\
    ISBN: 0-521-79309-2,\
    LC: QA377.E36.
3.  Barry Joe,\
    GEOMPACK - a software package for the generation of meshes using
    geometric algorithms,\
    Advances in Engineering Software,\
    Volume 13, pages 325-331, 1991.
4.  Joseph ORourke,\
    Computational Geometry,\
    Second Edition,\
    Cambridge, 1998,\
    ISBN: 0521649765,\
    LC: QA448.D38.
5.  Per-Olof Persson, Gilbert Strang,\
    A Simple Mesh Generator in MATLAB,\
    SIAM Review,\
    Volume 46, Number 2, pages 329-345, June 2004.

### Source Code: {#source-code align="center"}

-   [table\_delaunay.cpp](table_delaunay.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**HEX\_CVT3** puts a set of 139 nodes into the double hexagonal hole
region using CVT techniques.

-   [hex\_cvt3\_nodes.txt](../../data/triangulation_order3/hex_cvt3_nodes.txt),
    the nodes.
-   [hex\_cvt3\_nodes.png](../../data/triangulation_order3/hex_cvt3_nodes.png),
    a PNG image of the nodes.
-   [hex\_cvt3\_elements.txt](../../data/triangulation_order3/hex_cvt3_elements.txt),
    the triangulation created by TABLE\_DELAUNAY.
-   [hex\_cvt3\_triangulation.png](../../data/triangulation_order3/hex_cvt3_triangulation.png),
    a PNG image of the triangulation.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for TABLE\_DELAUNAY.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **DIAEDG** chooses a diagonal edge.
-   **DTABLE\_DATA\_READ** reads the data from a DTABLE file.
-   **DTABLE\_HEADER\_READ** reads the header from a DTABLE file.
-   **DTRIS2** constructs a Delaunay triangulation of 2D vertices.
-   **FILE\_COLUMN\_COUNT** counts the number of columns in the first
    line of a file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_MODP** returns the nonnegative remainder of I4 division.
-   **I4\_SIGN** returns the sign of an I4.
-   **I4\_WRAP** forces an I4 to lie between given limits by wrapping.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an I4MAT,
    transposed.
-   **ITABLE\_WRITE0** writes an ITABLE file with no header.
-   **I4VEC\_INDICATOR\_NEW** sets an I4VEC to the indicator vector.
-   **I4VEC\_SORT\_HEAP\_INDEX\_A** does an indexed heap ascending sort
    of an I4VEC.
-   **LRLINE** determines where a point lies in relation to a directed
    line.
-   **PERM\_CHECK** checks that a vector represents a permutation.
-   **PERM\_INVERSE** inverts a permutation "in place".
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_EPSILON** returns the R8 roundoff unit.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_MIN** returns the minimum of two R8's.
-   **R8\_NINT** returns the nearest integer to an R8.
-   **R82VEC\_PERMUTE** permutes an R82VEC in place.
-   **R82VEC\_SORT\_HEAP\_INDEX\_A** does an indexed heap ascending sort
    of an R82VEC.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **SWAPEC** swaps diagonal edges until all triangles are Delaunay.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **VBEDG** determines which boundary edges are visible to a point.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 01 October 2009.*
