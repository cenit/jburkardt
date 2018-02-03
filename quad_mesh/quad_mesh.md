QUAD\_MESH\
Quadrilateral Meshes {#quad_mesh-quadrilateral-meshes align="center"}
====================

------------------------------------------------------------------------

**QUAD\_MESH** is a C++ library which carries out operations involving
meshes of quadrilaterals.

The mesh is the collection of quadrilaterals. Each quadrilateral is
termed an "element". The points used to define the shape of the
quadrilateral (the corners, and sometimes a few more points) are called
the "nodes".

Routines are available to:

-   evaluate "quality measures" for the mesh;
-   create a "node neighbor array" for each node;
-   create an "element neighbor array" for each element;
-   estimate the integral of a function over the region covered by the
    mesh;
-   plot the nodes and elements of a mesh;
-   determine the parts of the mesh that lie on the boundary;
-   sample points at random from the region covered by the mesh;
-   search a mesh to determine which element contains a point.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**QUAD\_MESH** is available in [a C++
version](../../cpp_src/quad_mesh/quad_mesh.html) and [a FORTRAN90
version](../../f_src/quad_mesh/quad_mesh.html) and [a MATLAB
version](../../m_src/quad_mesh/quad_mesh.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FEM2D](../../data/fem2d/fem2d.html), a data directory which contains a
description and examples of files that describe a 2D finite element
model.

[FEM\_IO](../../cpp_src/fem_io/fem_io.html), a C++ library which reads
or writes node, element and data files defining a finite element model.

[FEM2D\_PACK](../../cpp_src/fem2d_pack/fem2d_pack.html), a C++ library
which handles various tasks associated with finite element meshes.

[MESH\_BANDWIDTH](../../cpp_src/mesh_bandwidth/mesh_bandwidth.html), a
C++ program which returns the geometric bandwidth associated with a mesh
of elements of any order and in a space of arbitrary dimension.

[MESH\_DISPLAY](../../m_src/mesh_display/mesh_display.html), a MATLAB
program which reads data defining a polygonal mesh and displays it, with
optional numbering.

[MESH\_DISPLAY\_OPENGL](../../cpp_src/mesh_display_opengl/mesh_display_opengl.html),
a C++ program which reads files defining a polygonal mesh and displays
an image using OpenGL.

[QUAD\_MESH](../../data/quad_mesh/quad_mesh.html), a data directory
which defines a format for storing meshes of quadrilaterals over a 2D
region.

[QUAD\_MESH\_RCM](../../cpp_src/quad_mesh_rcm/quad_mesh_rcm.html), a C++
program which computes the reverse Cuthill-McKee (RCM) reordering for
nodes in a mesh of 4-node quadrilaterals.

[TRIANGULATION](../../cpp_src/triangulation/triangulation.html), a C++
library which carries out operations involving meshes of triangular
elements.

### Reference: {#reference align="center"}

1.  Hans Rudolf Schwarz,\
    Methode der Finiten Elemente,\
    Teubner Studienbuecher, 1980,\
    ISBN: 3-519-02349-0.
2.  Gilbert Strang, George Fix,\
    An Analysis of the Finite Element Method,\
    Cambridge, 1973,\
    ISBN: 096140888X,\
    LC: TA335.S77.
3.  Olgierd Zienkiewicz,\
    The Finite Element Method,\
    Sixth Edition,\
    Butterworth-Heinemann, 2005,\
    ISBN: 0750663200,\
    TA640.2.Z54

### Source Code: {#source-code align="center"}

-   [quad\_mesh.cpp](quad_mesh.cpp), the source code.
-   [quad\_mesh.hpp](quad_mesh.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [quad\_mesh\_prb.cpp](quad_mesh_prb.cpp), a sample calling program.
-   [quad\_mesh\_prb\_output.txt](quad_mesh_prb_output.txt), the output
    file.

**EXAMPLE1** is a mesh made up of squares of uniform size. The squares
are arranged in a grid with a few irregularities, however. In
particular, there is an interior hole.

-   [q4\_mesh\_ex1\_element\_neighbors.txt](q4_mesh_ex1_element_neighbors.txt),
    element neighbors for example 1 Q4 mesh.
-   [q4\_mesh\_ex1\_elements.txt](q4_mesh_ex1_elements.txt), elements
    for example 1 Q4 mesh.
-   [q4\_mesh\_ex1\_xy.txt](q4_mesh_ex1_xy.txt), node coordinates for
    example 1 Q4 mesh.
-   [q4\_mesh\_ex1.png](q4_mesh_ex1.png), a PNG image of example 1 Q4
    mesh.

**EXAMPLE2** is a mesh made up of quadrilaterals that are "trying" to
tile a semicircle. The row of elements that touches the origin is
degenerate, and are essentially triangles. The elements vary in area.

-   [q4\_mesh\_ex2\_element\_neighbors.txt](q4_mesh_ex2_element_neighbors.txt),
    element neighbors for example 2 Q4 mesh.
-   [q4\_mesh\_ex2\_elements.txt](q4_mesh_ex2_elements.txt), elements
    for example 2 Q4 mesh.
-   [q4\_mesh\_ex2\_xy.txt](q4_mesh_ex2_xy.txt), node coordinates for
    example 2 Q4 mesh.
-   [q4\_mesh\_ex2.png](q4_mesh_ex2.png), a PNG image of example 2 Q4
    mesh.

**SAMPLE\_QUAD** demonstrates how a single quadrilateral can be randomly
sampled.

-   [sample\_quad.txt](sample_quad.txt), node coordinates for random
    sample points in a quadrilateral.
-   [sample\_quad.png](sample_quad.png), a PNG image of the random
    sample points in a quadrilateral.

### List of Routines: {#list-of-routines align="center"}

-   **\_ADJ\_SET\_Q4\_MESH** sets adjacencies in a triangulation.
-   **ADJ\_SIZE\_Q4\_MESH** counts adjacencies in a Q4 mesh.
-   **AREA\_Q4\_MESH** computes areas of elements in a Q4 mesh.
-   **AREA\_QUAD** returns the area of a quadrilateral.
-   **BANDWIDTH** determines the bandwidth associated with the finite
    element mesh.
-   **BOUNDARY\_EDGE\_COUNT\_Q4\_MESH** counts the boundary edges.
-   **BOUNDARY\_EDGE\_COUNT\_EULER\_Q4\_MESH** counts boundary edges.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **EXAMPLE1\_Q4\_MESH** sets up example \#1 Q4 mesh.
-   **EXAMPLE1\_Q4\_MESH\_SIZE** sets sizes for example \#1 Q4 mesh
-   **EXAMPLE2\_Q4\_MESH** sets up example \#2 Q4 mesh.
-   **EXAMPLE2\_Q4\_MESH\_SIZE** sets sizes for example \#2 Q4 mesh
-   **FILE\_COLUMN\_COUNT** counts the number of columns in the first
    line of a file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_MODP** returns the nonnegative remainder of I4 division.
-   **I4\_WRAP** forces an I4 to lie between given limits by wrapping.
-   **I4COL\_COMPARE** compares columns I and J of an I4COL.
-   **I4COL\_SORT\_A** ascending sorts the columns of an I4COL.
-   **I4COL\_SORTED\_UNIQUE\_COUNT** counts unique elements in an I4COL.
-   **I4COL\_SWAP** swaps two columns of an I4COL.
-   **I4MAT\_COPY** copies one I4MAT to another.
-   **I4MAT\_DATA\_READ** reads data from an I4MAT file.
-   **I4MAT\_HEADER\_READ** reads the header from an I4MAT file.
-   **I4MAT\_TRANSPOSE\_PRINT** prints an I4MAT, transposed.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an I4MAT,
    transposed.
-   **I4MAT\_WRITE** writes an I4MAT file with no header.
-   **I4ROW\_COMPARE** compares two rows of a integer array.
-   **I4ROW\_SORT\_A** ascending sorts the rows of an I4ROW.
-   **I4ROW\_SWAP** swaps two rows of an I4ROW.
-   **I4VEC\_HEAP\_D** reorders an I4VEC into a descending heap.
-   **I4VEC\_PRINT** prints an I4VEC.
-   **I4VEC\_SORT\_HEAP\_A** ascending sorts an I4VEC using heap sort.
-   **I4VEC\_ZERO\_NEW** creates and zeroes an I4VEC.
-   **MESH\_BASE\_ZERO** ensures that the element definition is
    zero-based.
-   **NEIGHBOR\_ELEMENTS\_Q4\_MESH** determines element neighbors in a
    Q4 mesh.
-   **NODE\_ORDER\_Q4\_MESH** determines the order of nodes in a Q4
    mesh.
-   **PLOT\_Q4\_MESH** plots a Q4 mesh.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_EPSILON** returns the R8 roundoff unit.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8\_NINT** returns the nearest integer to an R8.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **R8MAT\_COPY** copies one R8MAT to another.
-   **R8MAT\_DATA\_READ** reads the data from an R8MAT file.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
-   **R8MAT\_MM** multiplies two matrices.
-   **R8MAT\_TRANSPOSE\_PRINT** prints an R8MAT, transposed.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **R8MAT\_WRITE** writes an R8MAT file with no header.
-   **R8VEC\_BRACKET** searches a sorted array for successive brackets
    of a value.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC\_SUM** returns the sum of an R8VEC.
-   **REFERENCE\_TO\_PHYSICAL\_Q4** maps Q4 reference points to physical
    points.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_I4VEC** reads an I4VEC from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **SAMPLE\_Q4\_MESH** returns random points in a Q4 mesh.
-   **SAMPLE\_QUAD** returns random points in a quadrilateral.
-   **SAMPLE\_QUAD\_NEW** returns random points in a quadrilateral.
-   **SORT\_HEAP\_EXTERNAL** externally sorts a list of items into
    ascending order.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TRIANGLE\_AREA** computes the area of a triangle in 2D.
-   **TRIANGLE\_SAMPLE** returns random points in a triangle.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 29 September 2009.*
