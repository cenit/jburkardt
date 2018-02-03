TET\_MESH\_VOLUMES\
Compute Tetrahedral Volumes in a Tet Mesh {#tet_mesh_volumes-compute-tetrahedral-volumes-in-a-tet-mesh align="center"}
=========================================

------------------------------------------------------------------------

**TET\_MESH\_VOLUMES** is a C++ program which computes the volume of
every tetrahedron in a tet mesh.

### Usage: {#usage align="center"}

> **tet\_mesh\_volume** *prefix*

where *prefix* is the common file prefix:

-   *prefix***\_nodes.txt**, the node coordinates;
-   *prefix***\_elements.txt**, the element definitions.
-   *prefix***\_volumes.txt**, will contain the element volumes.

The element definition file will list node indices. In C++, it may be
more natural to use 0-based indices. This program will accept an element
definition file that is 0-based or 1-based, and will convert a 1-based
input file so that it becomes 0-based internal to the program. The
detection of 1-based data is determined by the absence of the use of a 0
index, and the use of an index equal to the number of nodes. This is an
implicit and fallible, but reasonable, way to handle this problem.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TET\_MESH\_VOLUMES** is available in [a C++
version](../../cpp_src/tet_mesh_volumes/tet_mesh_volumes.html) and [a
FORTRAN90 version](../../f_src/tet_mesh_volumes/tet_mesh_volumes.html)
and [a MATLAB
version.](../../m_src/tet_mesh_volumes/tet_mesh_volumes.html)

### Related Data and Programs: {#related-data-and-programs align="center"}

[TET\_MESH](../../cpp_src/tet_mesh/tet_mesh.html), a C++ library which
carries out various operations on tetrahedral meshes.

[TET\_MESH\_BOUNDARY](../../cpp_src/tet_mesh_boundary/tet_mesh_boundary.html),
a C++ program which returns the nodes and faces of the boundary of a
tetrahedral mesh, which themselves form a 3D triangular mesh or
"TRI\_SURFACE".

[TET\_MESH\_DISPLAY](../../m_src/tet_mesh_display/tet_mesh_display.html),
a MATLAB program which reads in the node and tetra files defining a tet
mesh and displays a wireframe image.

[TET\_MESH\_DISPLAY\_OPENGL](../../cpp_src/tet_mesh_display_opengl/tet_mesh_display_opengl.html),
a C++ program which reads a 3D tet mesh and displays the nodes and edges
using OpenGL.

[TET\_MESH\_L2Q](../../cpp_src/tet_mesh_l2q/tet_mesh_l2q.html), a C++
program which reads information about a 4-node (linear) tet mesh and
creates data defining a corresponding 10-node (quadratic) tet mesh;

[TET\_MESH\_ORDER4](../../data/tet_mesh_order4/tet_mesh_order4.html), a
data directory which contains a description of a linear tet mesh of a
set of 3D points, using a pair of files to list the node coordinates and
the 4 nodes that make up each tetrahedron;

[TET\_MESH\_ORDER4](../../datasets/tet_mesh_order4/tet_mesh_order4.html),
a dataset directory which contains examples of order 4 tetrahedral
meshes.

[TET\_MESH\_ORDER10](../../data/tet_mesh_order10/tet_mesh_order10.html),
a data directory which contains a description of a quadratic tet mesh of
a set of 3D points, using a pair of files to list the node coordinates
and the 10 nodes that make up each tetrahedron;

[TET\_MESH\_ORDER10](../../datasets/tet_mesh_order10/tet_mesh_order10.html),
a dataset directory which contains examples of order 10 tetrahedral
meshes.

[TET\_MESH\_Q2L](../../cpp_src/tet_mesh_q2l/tet_mesh_q2l.html), a C++
program which reads information about a 10-node (quadratic) tet mesh and
creates data defining a corresponding 4-node (linear) tet mesh;

[TET\_MESH\_QUALITY](../../cpp_src/tet_mesh_quality/tet_mesh_quality.html),
a C++ program which computes quality measures of a tetrahedral mesh.

[TET\_MESH\_RCM](../../cpp_src/tet_mesh_rcm/tet_mesh_rcm.html), a C++
program which computes the reverse Cuthill-McKee reordering for the
nodes of a tet mesh that uses 4-node or 10-node tetrahedrons;

[TET\_MESH\_REFINE](../../cpp_src/tet_mesh_refine/tet_mesh_refine.html),
a C++ program which refines a tet mesh;

[TET\_MESH\_TET\_NEIGHBORS](../../data/tet_mesh_tet_neighbors/tet_mesh_tet_neighbors.html),
a data directory which contains examples of TET\_MESH\_TET\_NEIGHBOR
files, description of a format for tetrahedron adjacency information in
a tetrahedral mesh of 3D points;

[TET\_MESH\_TET\_NEIGHBORS](../../cpp_src/tet_mesh_tet_neighbors/tet_mesh_tet_neighbors.html),
a C++ program which reads information about a tet mesh and writes out a
list of the tetrahedrons that are adjacent to a given tetrahedron;

### Source Code: {#source-code align="center"}

-   [tet\_mesh\_volumes.cpp](tet_mesh_volumes.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**CUBE** is the 8 vertices of the unit cube \[0,1\]x\[0,1\]x\[0,1\],
defining 6 elements of equal volume but not equal shape.

-   [cube\_nodes.txt](../../datasets/tet_mesh_order4/cube_nodes.txt),
    the node coordinate file.
-   [cube\_elements.txt](../../datasets/tet_mesh_order4/cube_elements.txt),
    the element file.
-   [cube.png](../../datasets/tet_mesh_order4/cube.png), a PNG image of
    the mesh.
-   [cube\_volumes.txt](cube_volumes.txt), the volume file.

**TWENTY** is 20 random nodes, defining 70 elements.

-   [twenty\_nodes.txt](../../datasets/tet_mesh_order4/twenty_nodes.txt),
    the node coordinate file.
-   [twenty\_elements.txt](../../datasets/tet_mesh_order4/twenty_elements.txt),
    the element file.
-   [twenty.png](../../datasets/tet_mesh_order4/twenty.png), a PNG image
    of the mesh.
-   [twenty\_volumes.txt](twenty_volumes.txt), the volume file.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for TET\_MESH\_QUALITY.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is a case insensitive comparison of two characters for
    equality.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **FILE\_COLUMN\_COUNT** counts the number of columns in the first
    line of a file.
-   **FILE\_EXIST** reports whether a file exists.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **GET\_UNIT** returns a free FORTRAN unit number.
-   **I4MAT\_DATA\_READ** reads data from an I4MAT file.
-   **I4MAT\_HEADER\_READ** reads the header from an I4MAT.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of the transpose of an
    I4MAT.
-   **R8MAT\_DATA\_READ** reads data from an R8MAT file.
-   **R8MAT\_DET\_4D** computes the determinant of a 4 by 4 matrix.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC\_VARIANCE** returns the variance of an R8VEC.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_I4VEC** reads an I4VEC from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TETRAHEDRON\_VOLUME\_3D** computes the volume of a tetrahedron in
    3D.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 13 August 2009.*
