TET\_MESH\_TET\_NEIGHBORS\
Interactive Program for\
Tet Mesh Neighbors {#tet_mesh_tet_neighbors-interactive-program-for-tet-mesh-neighbors align="center"}
==========================

------------------------------------------------------------------------

**TET\_MESH\_TET\_NEIGHBORS** is a C++ program which reads information
defining a tet mesh of points in 3D, and determines, for each face of
each tetrahedron, the index of the neighboring tetrahedron that shares
that face.

The tet mesh is defined by a *node file* containing the coordinates of
nodes, and a *tetra file* containing sets of 4 or 10 node indices. For
this calculation, though, only the tetra file is needed.

If a tetrahedron is on the boundary, then one or more of its faces will
not be shared by any tetrahedron. Such cases will be indicated by
specifying the corresponding neighbor value as -1.

### Usage: {#usage align="center"}

> **tet\_mesh\_tet\_neighbors** *prefix*

where *prefix* is the common file prefix:

-   *prefix***\_nodes.txt**, the node coordinates (not needed by this
    program);
-   *prefix***\_elements.txt**, the element definitions.
-   *prefix***\_element\_neighbors.txt**, the element neighbors.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TET\_MESH\_TET\_NEIGHBORS** is available in [a C++
version](../../cpp_src/tet_mesh_tet_neighbors/tet_mesh_tet_neighbors.html)
and [a FORTRAN90
version](../../f_src/tet_mesh_tet_neighbors/tet_mesh_tet_neighbors.html)
and [a MATLAB
version](../../m_src/tet_mesh_tet_neighbors/tet_mesh_tet_neighbors.html).

### Related Programs: {#related-programs align="center"}

[GEOMPACK](../../f_src/geompack/geompack.html), a FORTRAN90 library
which, contains a routine **DTRIS3** that can compute the tet mesh for a
set of 3D points, as well as the adjacency information.

[NEIGHBORS\_TO\_METIS\_GRAPH](../../cpp_src/neighbors_to_metis_graph/neighbors_to_metis_graph.html),
a C++ program which reads a tet mesh neighbor file created by
**TET\_MESH\_TET\_NEIGHBORS** and writes a modified version of the same
data suitable for input to the mesh partitioning program METIS.

[TABLE\_TET\_MESH](../../f_src/table_tet_mesh/table_tet_mesh.html), a
FORTRAN90 program which can compute the tet mesh for a set of 3D points.

[TEST\_TET\_MESH](../../f_src/test_tet_mesh/test_tet_mesh.html), a
FORTRAN90 library which defines a few test regions for the generation of
a tet mesh.

[TET\_MESH](../../cpp_src/tet_mesh/tet_mesh.html), a C++ library which
is useful for work with tet meshes.

[TET\_MESH\_BOUNDARY](../../cpp_src/tet_mesh_boundary/tet_mesh_boundary.html),
a C++ program which returns the nodes and faces of the boundary of a
tetrahedral mesh, which themselves form a 3D triangular mesh or
"TRI\_SURFACE".

[TET\_MESH\_DISPLAY](../../m_src/tet_mesh_display/tet_mesh_display.html),
a MATLAB program which can read in the node and tetra files defining a
tet mesh and display a wireframe image.

[TET\_MESH\_DISPLAY\_OPENGL](../../cpp_src/tet_mesh_display_opengl/tet_mesh_display_opengl.html),
a C++ program which reads a tet mesh and displays the nodes and edges
using OpenGL.

[TET\_MESH\_L2Q](../../cpp_src/tet_mesh_l2q/tet_mesh_l2q.html), a C++
program which converts a linear to quadratic tet mesh.

[TET\_MESH\_ORDER4](../../data/tet_mesh_order4/tet_mesh_order4.html), a
directory which contains a description and examples of a tet mesh using
order 4 elements.

[TET\_MESH\_ORDER10](../../data/tet_mesh_order10/tet_mesh_order10.html),
a directory which contains a description and examples of a tet mesh
using order 10 elements.

[TET\_MESH\_Q2L](../../cpp_src/tet_mesh_q2l/tet_mesh_q2l.html), a C++
program which can convert a quadratic (10-node) tet mesh to a linear
(4-node) tet mesh.

[TET\_MESH\_QUALITY](../../cpp_src/tet_mesh_quality/tet_mesh_quality.html),
a C++ program which can compute the quality of a tet mesh.

[TET\_MESH\_RCM](../../cpp_src/tet_mesh_rcm/tet_mesh_rcm.html), a C++
program which takes a tet mesh and relabels the nodes to reduce the
bandwidth of the corresponding adjacency matrix.

[TET\_MESH\_REFINE](../../cpp_src/tet_mesh_refine/tet_mesh_refine.html),
a C++ program which can refine a tet mesh.

[TET\_MESH\_TET\_NEIGHBORS](../../data/tet_mesh_tet_neighbors/tet_mesh_tet_neighbors.html),
a data directory which contains a description and examples of the format
for storing information about neighboring tetrahedrons in a tetrahedral
mesh.

[TET\_MESH\_VOLUMES](../../cpp_src/tet_mesh_volumes/tet_mesh_volumes.html),
a C++ program which computes the volume of each tetrahedron in a tet
mesh;

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

-   [tet\_mesh\_tet\_neighbors.cpp](tet_mesh_tet_neighbors.cpp), the
    source code.

### Examples and Tests {#examples-and-tests align="center"}

**CUBE** is a simple example of 8 nodes in a cube. Test files you may
copy include:

-   [cube\_nodes.txt](cube_nodes.txt), the node file.
-   [cube\_elements.txt](cube_elements.txt), the tetrahedron file.
-   [cube\_element\_neighbors.txt](cube_element_neighbors.txt), the
    neighbor information computed by the program.
-   [cube\_output.txt](cube_output.txt), the printed output from the
    program.

### List of Routines {#list-of-routines align="center"}

-   **MAIN** is the main program for TET\_MESH\_TET\_NEIGHBORS.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **FILE\_COLUMN\_COUNT** counts the number of columns in the first
    line of a file.
-   **FILE\_NAME\_EXT\_GET** determines the "extension" of a file name.
-   **FILE\_NAME\_EXT\_SWAP** replaces the current "extension" of a file
    name.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4COL\_COMPARE** compares columns I and J of an I4COL.
-   **I4COL\_SORT\_A** ascending sorts the columns of an I4COL.
-   **I4COL\_SWAP** swaps two columns of an I4COL.
-   **I4I4I4\_SORT\_A** ascending sorts a triple of I4's.
-   **I4MAT\_TRANSPOSE\_PRINT** prints an I4MAT, transposed.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an I4MAT,
    transposed.
-   **ITABLE\_DATA\_READ** reads data from an ITABLE file.
-   **ITABLE\_DATA\_WRITE** writes data to an ITABLE file.
-   **ITABLE\_HEADER\_READ** reads the header from an ITABLE file.
-   **ITABLE\_HEADER\_WRITE** writes the header of an ITABLE file.
-   **ITABLE\_WRITE** writes information to an ITABLE file.
-   **R8\_EPSILON** returns the R8 roundoff unit.
-   **S\_BLANK\_DELETE** removes blanks from a string, left justifying
    the remainder.
-   **S\_INDEX\_LAST\_C** returns a pointer to the last occurrence of a
    given character.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_I4VEC** reads an I4VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **SORT\_HEAP\_EXTERNAL** externally sorts a list of items into
    ascending order.
-   **TET\_MESH\_NEIGHBOR\_TETS** determines tetrahedron neighbors.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TIMESTRING** returns the current YMDHMS date as a string.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 17 January 2007.*
