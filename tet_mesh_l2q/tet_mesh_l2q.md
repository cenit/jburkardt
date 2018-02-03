TET\_MESH\_L2Q\
10-Node Tet Mesh\
from\
4-Node Tet Mesh {#tet_mesh_l2q-10-node-tet-mesh-from-4-node-tet-mesh align="center"}
=================

------------------------------------------------------------------------

**TET\_MESH\_L2Q** is a C++ program which converts a 4-node tetrahedral
mesh ("tet mesh") into a 10-node tet mesh.

In particular, TET\_MESH\_L2Q reads information describing a set of 3D
points, and a 4 node ("linear") tet mesh of those points. It creates a
"quadratic" tet mesh, which has the same number of tetrahedrons, but in
which each tetrahedron is defined by 10 nodes. In the process, it adds
just enough nodes, at the midsides of the edges of the original mesh, to
define the new mesh. The data defining the new mesh is written out to
files for further use.

The refinement of a single tetrahedron is easy. Every pair of nodes
generates a new node whose location is the average of the locations of
the original two nodes. The problem is that many tetrahedrons may share
the same edge. The new node needs to be generated exactly once, and
assigned a unique index, which all the tetrahedrons will share. The
tricky part of this calculation is thus figuring out whether it is time
to generate a new node, or whether the node has already been generated,
in which case the appropriate index must be retrieved.

### Usage: {#usage align="center"}

> **tet\_mesh\_l2q** *prefix*

where *prefix* is the common file prefix:

-   *prefix***\_nodes.txt**, the linear node coordinates;
-   *prefix***\_elements.txt**, the linear element definitions.
-   *prefix***\_l2q\_nodes.txt**, the quadratic node coordinates;
-   *prefix***\_l2q\_elements.txt**, the quadratic element definitions.

The element definition file will list node indices. In C++, it may be
more natural to use 0-based indices. This program will accept an element
definition file that is 0-based or 1-based, and will convert a 1-based
input file so that it becomes 0-based internal to the program. The
detection of 1-based data is determined by the absence of the use of a 0
index, and the use of an index equal to the number of nodes. This is an
implicit and fallible, but reasonable, way to handle this problem.

The input file *prefix\_nodes.txt* contains the coordinate information
for the 4-node tet mesh. Each data line contains the X and Y coordinates
of a single node.

The input file *prefix\_elements.txt* contains the tetrahedron
information for the 4-node tet mesh. Each data line contains the indices
of four nodes that form a tetrahedron.

The output file *prefix\_l2q\_nodes.txt* contains the coordinate
information for the 10-node tet mesh. The data lines begin with the node
information from *nodes.txt*, followed by the coordinates of the new
nodes.

The output file *prefix\_l2q\_elements.txt* contains the tetrahedron
information for the 10-node tet mesh. There are exactly as many
tetrahedrons as before, but now each tetrahedron uses 10 nodes. Each
line of the file contains the indices of 10 nodes that form the
tetrahedron, listed in a particular order. The first four node indices
are the same as for the linear tet mesh. The next six node indices may
be thought of as being obtained as averages of pairs of the first four
nodes. Symbolically, this may be thought of as:

            1  2  3  4 (1+2) (1+3) (1+4) (2+3) (2+4) (3+4)
          

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TET\_MESH\_L2Q** is available in [a C++
version](../../cpp_src/tet_mesh_l2q/tet_mesh_l2q.html) and [a FORTRAN90
version](../../f_src/tet_mesh_l2q/tet_mesh_l2q.html) and [a MATLAB
version](../../m_src/tet_mesh_l2q/tet_mesh_l2q.html).

### Related Programs: {#related-programs align="center"}

[CVT\_TET\_MESH](../../f_src/cvt_tet_mesh/cvt_tet_mesh.html), a
FORTRAN90 library which uses CVT methods to compute a tet mesh in a
region.

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

[TET\_MESH\_ORDER4](../../data/tet_mesh_order4/tet_mesh_order4.html), a
directory which contains a description and examples of a tet mesh using
order 4 elements.

[TET\_MESH\_ORDER10](../../data/tet_mesh_order10/tet_mesh_order10.html),
a directory which contains a description and examples of a tet mesh
using order 10 elements.

[TET\_MESH\_Q2L](../../cpp_src/tet_mesh_q2l/tet_mesh_q2l.html), a C++
program which takes a 10-node tet mesh and makes a 4-node tet mesh.

[TET\_MESH\_QUALITY](../../cpp_src/tet_mesh_quality/tet_mesh_quality.html),
a C++ program which takes a 4-node tet mesh and computes the "quality"
of the mesh.

[TET\_MESH\_RCM](../../cpp_src/tet_mesh_rcm/tet_mesh_rcm.html), a C++
program which takes a tet mesh and relabels the nodes to reduce the
bandwidth of the corresponding adjacency matrix.

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
    Volume 13, Number 5, 1991, pages 325-331.
3.  Anwei Liu, Barry Joe,\
    Quality Local Refinement of Tetrahedral Meshes Based on
    8-Subtetrahedron Subdivision,\
    Mathematics of Computation,\
    Volume 65, Number 215, July 1996, pages 1183-1200.
4.  Per-Olof Persson, Gilbert Strang,\
    A Simple Mesh Generator in MATLAB,\
    SIAM Review,\
    Volume 46, Number 2, June 2004, pages 329-345.

### Source Code: {#source-code align="center"}

-   [tet\_mesh\_l2q.cpp](tet_mesh_l2q.cpp), the source code.

-   [mesh\_nodes.txt](mesh_nodes.txt), the nodes for the 4-node tet
    mesh.
-   [mesh\_elements.txt](mesh_elements.txt), the tetras for the 4-node
    tet mesh.
-   [mesh\_l2q\_nodes.txt](mesh_l2q_nodes.txt), the nodes for the
    10-node tet mesh.
-   [mesh\_l2q\_elements.txt](mesh_l2q_elements.txt), the tetras for the
    10-node tet mesh.
-   [tet\_mesh\_l2q.txt](tet_mesh_l2q.txt), printed output from the
    program.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for TET\_MESH\_L2Q.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **FILE\_COLUMN\_COUNT** counts the columns in the first line of a
    file.
-   **FILE\_EXIST** reports whether a file exists.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_SWAP** switches two I4's.
-   **I4COL\_COMPARE** compares columns I and J of an I4COL.
-   **I4COL\_SORT\_A** ascending sorts the columns of an I4COL.
-   **I4COL\_SORT2\_A** ascending sorts the elements of each column of
    an I4COL.
-   **I4COL\_SORTED\_UNIQUE\_COUNT** counts unique elements in an I4COL.
-   **I4COL\_SWAP** swaps two columns of an I4COL.
-   **I4I4\_SORT\_A** ascending sorts a pair of I4's.
-   **I4MAT\_DATA\_READ** reads data from an I4MAT file.
-   **I4MAT\_HEADER\_READ** reads the header from an I4MAT file.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an I4MAT,
    transposed.
-   **I4MAT\_WRITE** writes an I4MAT file with no header.
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
-   **TET\_MESH\_ORDER4\_TO\_ORDER10\_COMPUTE** computes a quadratic tet
    mesh from a linear one.
-   **TET\_MESH\_ORDER4\_TO\_ORDER10\_SIZE** sizes a quadratic tet mesh
    from a linear one.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 25 September 2009.*
