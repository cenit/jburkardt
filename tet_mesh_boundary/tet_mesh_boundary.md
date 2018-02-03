TET\_MESH\_BOUNDARY\
Triangular Surface Formed by Tet Mesh Boundary {#tet_mesh_boundary-triangular-surface-formed-by-tet-mesh-boundary align="center"}
==============================================

------------------------------------------------------------------------

**TET\_MESH\_BOUNDARY** is a C++ program which reads information
defining a tetrahedral mesh of points in 3D, and determines the
triangular faces that form the boundary of the mesh; it writes out files
containing the nodes and elements defining this "TRI\_SURFACE".

The tet mesh is defined by a *node file* containing the coordinates of
nodes, and an *element file* containing sets of 4 or 10 node indices.
(The present version of the program will only handle the 4 node case.)

Each tetrahedron has 4 triangular faces. Most of these faces will be
shared by a neighbor tetrahedron, but those faces that are not shared by
a neighbor constitute the boundary of the mesh.

The program identifies the triangular faces that form the boundary, and
writes two files, a "boundary\_node" file that lists the coordinates of
the nodes, and a "boundary\_element" file that lists the indices of the
nodes used to form the faces. This pair of files defines a triangulated
3D surface, or "TRI\_SURFACE".

### Usage: {#usage align="center"}

> **tet\_mesh\_boundary** *prefix*

where *prefix* is the common file prefix:

-   *prefix***\_nodes.txt**, the node coordinates;
-   *prefix***\_elements.txt**, the element definitions;
-   *prefix***\_boundary\_node\_mask.txt**, is 0 for each interior node,
    1 for each boundary node;
-   *prefix***\_boundary\_nodes.txt**, the boundary node coordinates;
-   *prefix***\_boundary\_elements.txt**, the boundary element
    definitions;

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TET\_MESH\_BOUNDARY** is available in [a C++
version](../../cpp_src/tet_mesh_boundary/tet_mesh_boundary.html) and [a
FORTRAN90 version](../../f_src/tet_mesh_boundary/tet_mesh_boundary.html)
and [a MATLAB
version](../../m_src/tet_mesh_boundary/tet_mesh_boundary.html).

### Related Programs: {#related-programs align="center"}

[TET\_MESH](../../cpp_src/tet_mesh/tet_mesh.html), a C++ library which
is useful for work with tet meshes.

[TET\_MESH\_DISPLAY](../../m_src/tet_mesh_display/tet_mesh_display.html),
a MATLAB program which can read in the node and tetra files defining a
tet mesh and display a wireframe image.

[TET\_MESH\_DISPLAY\_OPENGL](../../cpp_src/tet_mesh_display_opengl/tet_mesh_display_opengl.html),
a C++ program which reads a tet mesh and displays the nodes and edges
using OpenGL.

[TET\_MESH\_ORDER4](../../data/tet_mesh_order4/tet_mesh_order4.html), a
directory which contains a description and examples of a tet mesh using
order 4 elements.

[TET\_MESH\_ORDER10](../../data/tet_mesh_order10/tet_mesh_order10.html),
a directory which contains a description and examples of a tet mesh
using order 10 elements.

[TET\_MESH\_TET\_NEIGHBORS](../../data/tet_mesh_tet_neighbors/tet_mesh_tet_neighbors.html),
a data directory which contains a description and examples of the format
for storing information about neighboring tetrahedrons in a tetrahedral
mesh.

[TRI\_SURFACE](../../data/tri_surface/tri_surface.html), a data
directory which contains examples of TRI\_SURFACE files, a 3D surface
described by a collection of triangles.

[TRI\_SURFACE\_DISPLAY](../../m_src/tri_surface_display/tri_surface_display.html),
a MATLAB program which displays the 3D graphics information in a
TRI\_SURFACE file;

[TRI\_SURFACE\_DISPLAY\_OPENGL](../../cpp_src/tri_surface_display_opengl/tri_surface_display_opengl.html),
a C++ program which displays the 3D graphics information in a
TRI\_SURFACE file using OpenGL.

### Reference: {#reference align="center"}

1.  Herbert Edelsbrunner,\
    Geometry and Topology for Mesh Generation,\
    Cambridge, 2001,\
    ISBN: 0-521-79309-2,\
    LC: QA377.E36.
2.  Barry Joe,\
    GEOMPACK - a software package for the generation of meshes using
    geometric algorithms,\
    Advances in Engineering Software,\
    Volume 13, 1991, pages 325-331.
3.  Per-Olof Persson, Gilbert Strang,\
    A Simple Mesh Generator in MATLAB,\
    SIAM Review,\
    Volume 46, Number 2, June 2004, pages 329-345.

### Source code {#source-code align="center"}

-   [tet\_mesh\_boundary.cpp](tet_mesh_boundary.cpp), the source code.

### Examples and Tests {#examples-and-tests align="center"}

**CUBE** is a tetrahedral mesh of a cube.

-   [cube\_nodes.txt](cube_nodes.txt), the node file.
-   [cube\_elements.txt](cube_elements.txt), the element file.
-   [cube.png](cube.png), an image of the tetrahedral mesh.
-   [cube\_boundary\_node\_mask.txt](cube_boundary_node_mask.txt), the
    boundary node mask file.
-   [cube\_boundary\_nodes.txt](cube_boundary_nodes.txt), the boundary
    node file.
-   [cube\_boundary\_elements.txt](cube_boundary_elements.txt), the
    boundary element file.
-   [cube\_output.txt](cube_output.txt), the printed output from the
    program.

**P04** is a tetrahedral mesh of a sphere.

-   [p04\_nodes.txt](p04_nodes.txt), the node file.
-   [p04\_elements.txt](p04_elements.txt), the element file.
-   [p04.png](p04.png), an image of the tetrahedral mesh.
-   [p04\_boundary\_node\_mask.txt](p04_boundary_node_mask.txt), the
    boundary node mask file.
-   [p04\_boundary\_nodes.txt](p04_boundary_nodes.txt), the boundary
    node file.
-   [p04\_boundary\_elements.txt](p04_boundary_elements.txt), the
    boundary element file.
-   [p04\_output.txt](p04_output.txt), the printed output from the
    program.

### List of Routines {#list-of-routines align="center"}

-   **MAIN** is the main program for TET\_MESH\_BOUNDARY.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **FILE\_COLUMN\_COUNT** counts the columns in the first line of a
    file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4COL\_COMPARE** compares columns I and J of an I4COL.
-   **I4COL\_SORT\_A** ascending sorts the columns of an I4COL.
-   **I4COL\_SWAP** swaps two columns of an I4COL.
-   **I4I4I4\_SORT\_A** ascending sorts a triple of I4's.
-   **I4MAT\_DATA\_READ** reads data from an I4MAT file.
-   **I4MAT\_HEADER\_READ** reads the header from an I4MAT file.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an I4MAT,
    transposed.
-   **I4MAT\_WRITE** writes an I4MAT file with no header.
-   **I4VEC\_CUM** computes the cumulutive sum of the entries of an
    I4VEC.
-   **I4VEC\_SUM** sums the entries of an I4VEC.
-   **MESH\_BASE\_ZERO** ensures that the element definition is
    zero-based.
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
-   **TET\_MESH\_BOUNDARY\_COUNT** counts boundary faces and nodes in a
    tet mesh.
-   **TET\_MESH\_BOUNDARY\_SET** sets the boundary faces in a tet mesh.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 22 December 2010.*
