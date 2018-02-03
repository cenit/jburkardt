TET\_MESH\_Q2L\
10-Node Tet Mesh\
to\
4-Node Tet Mesh {#tet_mesh_q2l-10-node-tet-mesh-to-4-node-tet-mesh align="center"}
=================

------------------------------------------------------------------------

**TET\_MESH\_Q2L** is a C++ program which reads information describing a
tet mesh of a set of points using 10-node ("quadratic") triangles, and
creates a 4-node ("linear") tet mesh.

The same nodes are used, but each 10-node tetrahedron is broken up into
8 smaller 4-node tetrahedrons.

### Usage: {#usage align="center"}

> **tet\_mesh\_q2l** *prefix*

where *prefix* is the common file prefix:

-   *prefix***\_nodes.txt**, the node coordinates (not needed by this
    program);
-   *prefix***\_elements.txt**, the element definitions.
-   *prefix***\_q2l\_elements.txt**, the linear element definitions
    created by this program, and based on the same set of nodes.

The input and output files use the simple [TABLE
format](../../data/table/table.html); comment lines begin with a "\#"
character. Otherwise, each line of the file contains one set of
information, either the coordinates of a node (for a node file), or the
indices of nodes that make up a tetrahedron, (for a tetrahedron file).

The input file *tetras.txt* contains the tetrahedron information for the
10-node tet mesh. Each line contains the indices of 10 nodes that form a
tetrahedron, in a particular order. The first 4 indices are the
vertices. Subsequent nodes can be described by the pair of vertices they
lie between, as follows:

            1  2  3  4  (1+2)  (1+3)  (1+4)  (2+3)  (2+4)  (3+4)
          

The output file *tetras.l2q.txt* contains the tetrahedron information
for the 4-node tet mesh.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TET\_MESH\_Q2L** is available in [a C++
version](../../cpp_src/tet_mesh_q2l/tet_mesh_q2l.html) and [a FORTRAN90
version](../../f_src/tet_mesh_q2l/tet_mesh_q2l.html) and [a MATLAB
version](../../m_src/tet_mesh_q2l/tet_mesh_q2l.html).

### Related Programs: {#related-programs align="center"}

[CVT\_TET\_MESH](../../f_src/cvt_tet_mesh/cvt_tet_mesh.html), a
FORTRAN90 library which uses CVT methods to compute a tet mesh in a
region.

[GEOMPACK](../../cpp_src/geompack/geompack.html), a C++ library which
contains a routine **DTRIS3** that can compute the tet mesh for a set of
3D points, as well as the adjacency information.

[TABLE\_TET\_MESH](../../f_src/table_tet_mesh/table_tet_mesh.html), a
FORTRAN90 program which can compute the tet mesh for a given set of
points.

[TEST\_TET\_MESH](../../f_src/test_tet_mesh/test_tet_mesh.html), a
FORTRAN90 library which defines a few test regions for the generation of
a tet mesh.

[TET\_MESH](../../cpp_src/tet_mesh/tet_mesh.html), a C++ library which
includes a variety of routines for working with tetrahedral meshes.

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

[TET\_MESH\_QUALITY](../../cpp_src/tet_mesh_quality/tet_mesh_quality.html),
a C++ program which computes the "quality" of a mesh.

[TET\_MESH\_RCM](../../cpp_src/tet_mesh_rcm/tet_mesh_rcm.html), a C++
program which takes a 4-node or 10-node tet mesh and relabels the nodes
to reduce the bandwidth of the corresponding adjacency matrix.

[TET\_MESH\_REFINE](../../cpp_src/tet_mesh_refine/tet_mesh_refine.html),
a C++ program which can refine a tet mesh.

[TET\_MESH\_TET\_NEIGHBORS](../../cpp_src/tet_mesh_tet_neighbors/tet_mesh_tet_neighbors.html),
a C++ program which computes the tetrahedral adjacency information.

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
3.  Anwei Liu, Barry Joe,\
    Quality Local Refinement of Tetrahedral Meshes Based on
    8-Subtetrahedron Subdivision,\
    Mathematics of Computation,\
    Volume 65, Number 215, July 1996, pages 1183-1200.
4.  Per-Olof Persson, Gilbert Strang,\
    A Simple Mesh Generator in MATLAB,\
    SIAM Review,\
    Volume 46, Number 2, June 2004, pages 329-345.

### Source code: {#source-code align="center"}

-   [tet\_mesh\_q2l.cpp](tet_mesh_q2l.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

You may copy data for an example problem:

-   [cube\_nodes.txt](cube_nodes.txt), a set of nodes.
-   [cube\_elements.txt](cube_elements.txt), the tetrahedrons for a
    10-node tet mesh of the nodes.
-   [cube\_output.txt](cube_output.txt), the output file.
-   [cube\_q2l\_elements.txt](cube_q2l_elements.txt), the tetrahedrons
    for a 4-node tet mesh derived from the quadratic mesh.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for TET\_MESH\_Q2L.
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
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_I4VEC** reads an I4VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TET\_MESH\_ORDER10\_TO\_ORDER4\_COMPUTE** linearizes a quadratic
    tet mesh.
-   **TET\_MESH\_ORDER10\_TO\_ORDER4\_SIZE** sizes a linear tet mesh
    from a quadratic one.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 18 August 2009.*
