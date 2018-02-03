TET\_MESH\_RCM\
Reverse Cuthill-McKee Node Reordering {#tet_mesh_rcm-reverse-cuthill-mckee-node-reordering align="center"}
=====================================

------------------------------------------------------------------------

**TET\_MESH\_RCM** is a C++ program which computes the reverse
Cuthill-McKee reordering for nodes in a tetrahedral mesh ("tet mesh").

The user supplies a node file and a tetrahedron file, containing the
coordinates of the nodes, and the indices of the nodes that make up each
tetrahedron. Either 4-node or 10-node tetrahedrons may be used.

The program reads the data, computes the adjacency information, carries
out the RCM algorithm to get the permutation, applies the permutation to
the nodes and tetrahedrons, and writes out new node and tetrahedron
files that correspond to the RCM permutation.

Note that the node file would normally contain exactly 3 values on each
line, namely the X, Y and Z coordinates of the nodes. However, this is
not necessary. Extra information can be included on each line, for
instance, a "W" coordinate. Each line should include the same number of
items, but all will be permuted correctly together. The program does not
actually need to know the coordinates of the nodes, so in fact, ANY data
(as long as it is real numeric data) associated with the nodes can be
listed in the node file, and will be correctly permuted.

### Usage: {#usage align="center"}

> **tet\_mesh\_rcm** *prefix*

where *prefix* is the common file prefix:

-   *prefix***\_nodes.txt**, the node coordinates (input);
-   *prefix***\_elements.txt**, the element definitions (input).
-   *prefix***\_rcm\_nodes.txt**, the reordered node coordinates
    (output);
-   *prefix***\_rcm\_elements.txt**, the reordered element definitions
    (output).

The element definition file will list node indices. In C++, it may be
more natural to use 0-based indices. This program will accept an element
definition file that is 0-based or 1-based, and will convert a 1-based
input file so that it becomes 0-based internal to the program. The
detection of 1-based data is determined by the absence of the use of a 0
index, and the use of an index equal to the number of nodes. This is an
implicit and fallible, but reasonable, way to handle this problem.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TET\_MESH\_RCM** is available in [a C++
version](../../cpp_src/tet_mesh_rcm/tet_mesh_rcm.html) and [a FORTRAN90
version](../../f_src/tet_mesh_rcm/tet_mesh_rcm.html) and [a MATLAB
version](../../m_src/tet_mesh_rcm/tet_mesh_rcm.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CVT\_TET\_MESH](../../f_src/cvt_tet_mesh/cvt_tet_mesh.html), a
FORTRAN90 program which uses CVT techniques to compute a tet mesh in a
region.

[MESH\_BANDWIDTH](../../cpp_src/mesh_bandwidth/mesh_bandwidth.html), a
C++ program which returns the geometric bandwidth associated with a mesh
of elements of any order and in a space of arbitrary dimension.

[QUAD\_MESH\_RCM](../../cpp_src/quad_mesh_rcm/quad_mesh_rcm.html), a C++
program which computes the reverse Cuthill-McKee (RCM) reordering for
nodes in a mesh of 4-node quadrilaterals.

[RCM](../../cpp_src/rcm/rcm.html), a C++ library which carries out
reverse Cuthill-McKee computations.

[TABLE\_TET\_MESH](../../f_src/table_tet_mesh/table_tet_mesh.html), a
FORTRAN90 program which can compute a tet mesh of a given set of points.

[TEST\_TET\_MESH](../../f_src/test_tet_mesh/test_tet_mesh.html), a
FORTRAN90 library which defines regions for which a tet mesh is desired.

[TET\_MESH](../../cpp_src/tet_mesh/tet_mesh.html), a C++ library which
works with tet meshes.

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
program which converts a quadratic (10-node) to linear (4-node)
tetrahedral mesh.

[TET\_MESH\_QUALITY](../../cpp_src/tet_mesh_quality/tet_mesh_quality.html),
a C++ program which computes the quality of a tetrahedral mesh.

[TET\_MESH\_REFINE](../../cpp_src/tet_mesh_refine/tet_mesh_refine.html),
a C++ program which can refine a tet mesh.

[TET\_MESH\_TET\_NEIGHBORS](../../cpp_src/tet_mesh_tet_neighbors/tet_mesh_tet_neighbors.html),
a C++ program which computes the tetrahedron-to-tetrahedron adjacency
information.

[TET\_MESH\_VOLUMES](../../cpp_src/tet_mesh_volumes/tet_mesh_volumes.html),
a C++ program which computes the volume of each tetrahedron in a tet
mesh;

[TRIANGULATION\_RCM](../../cpp_src/triangulation_rcm/triangulation_rcm.html),
a C++ program which applies the reverse Cuthill-McKee reordering to a
triangulation of 2D data.

### Reference: {#reference align="center"}

1.  HL Crane, Norman Gibbs, William Poole, Paul Stockmeyer,\
    Algorithm 508: Matrix Bandwidth and Profile Reduction,\
    ACM Transactions on Mathematical Software,\
    Volume 2, Number 4, December 1976, pages 375-377.
2.  Herbert Edelsbrunner,\
    Geometry and Topology for Mesh Generation,\
    Cambridge, 2001,\
    ISBN: 0-521-79309-2,\
    LC: QA377.E36.
3.  Alan George, Joseph Liu,\
    Computer Solution of Large Sparse Positive Definite Matrices,\
    Prentice Hall, 1981,\
    ISBN: 0131652745,\
    LC: QA188.G46
4.  Norman Gibbs,\
    Algorithm 509: A Hybrid Profile Reduction Algorithm,\
    ACM Transactions on Mathematical Software,\
    Volume 2, Number 4, December 1976, pages 378-387.
5.  Norman Gibbs, William Poole, Paul Stockmeyer,\
    An Algorithm for Reducing the Bandwidth and Profile of a Sparse
    Matrix,\
    SIAM Journal on Numerical Analysis,\
    Volume 13, Number 2, April 1976, pages 236-250.
6.  Barry Joe,\
    GEOMPACK - a software package for the generation of meshes using
    geometric algorithms,\
    Advances in Engineering Software,\
    Volume 13, 1991, pages 325-331.
7.  Per-Olof Persson, Gilbert Strang,\
    A Simple Mesh Generator in MATLAB,\
    SIAM Review,\
    Volume 46, Number 2, June 2004, pages 329-345.

### Source Code: {#source-code align="center"}

-   [tet\_mesh\_rcm.cpp](tet_mesh_rcm.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**CUBE4** is an order 4 tet mesh of a cube:

-   [cube4\_output.txt](cube4_output.txt), the printed output from the
    command\
    "tet\_mesh\_rcm cube4\_nodes.txt cube4\_tetras.txt"
-   [cube4\_nodes.txt](cube4_nodes.txt), the node file.
-   [cube4\_elements.txt](cube4_elements.txt), the element file.
-   [cube4\_rcm\_nodes.txt](cube4_rcm_nodes.txt), the RCM reordered node
    file.
-   [cube4\_rcm\_elements.txt](cube4_rcm_elements.txt), the RCM
    reordered element file.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for TET\_MESH\_RCM.
-   **ADJ\_BANDWIDTH** computes the bandwidth of an adjacency matrix.
-   **ADJ\_PERM\_BANDWIDTH** computes the bandwidth of a permuted
    adjacency matrix.
-   **ADJ\_PRINT** prints adjacency information.
-   **ADJ\_PRINT\_SOME** prints some adjacency information.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **DEGREE** computes the degrees of the nodes in the connected
    component.
-   **FILE\_COLUMN\_COUNT** counts the columns in the first line of a
    file.
-   **FILE\_EXIST** reports whether a file exists.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **GENRCM** finds the reverse Cuthill-Mckee ordering for a general
    graph.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_SWAP** switches two I4's.
-   **I4COL\_COMPARE** compares columns I and J of an I4COL.
-   **I4COL\_SORT\_A** ascending sorts the columns of an I4COL.
-   **I4COL\_SORT2\_A** ascending sorts the elements of each column of
    an I4COL.
-   **I4COL\_SORTED\_UNIQUE\_COUNT** counts unique elements in an I4COL.
-   **I4COL\_SWAP** swaps two columns of an I4COL.
-   **I4MAT\_DATA\_READ** reads data from an I4MAT file.
-   **I4MAT\_HEADER\_READ** reads the header from an I4MAT file.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an I4MAT,
    transposed.
-   **I4MAT\_WRITE** writes an I4MAT file with no header.
-   **I4VEC\_PRINT** prints an I4VEC.
-   **I4VEC\_REVERSE** reverses the elements of an I4VEC.
-   **LEVEL\_SET** generates the connected level structure rooted at a
    given node.
-   **PERM\_CHECK** checks that a vector represents a permutation.
-   **PERM\_INVERSE3** produces the inverse of a given permutation.
-   **R8COL\_PERMUTE** permutes an R8COL in place.
-   **R8MAT\_DATA\_READ** reads the data from an R8MAT file.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **R8MAT\_WRITE** writes an R8MAT file with no header.
-   **RCM** renumbers a connected component by the reverse Cuthill McKee
    algorithm.
-   **ROOT\_FIND** finds a pseudo-peripheral node.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_I4VEC** reads an I4VEC from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **SORT\_HEAP\_EXTERNAL** externally sorts a list of items into
    ascending order.
-   **TET\_MESH\_BASE\_ZERO** ensures that the element definition is
    zero-based.
-   **TET\_MESH\_ORDER4\_ADJ\_COUNT** counts the number of nodal
    adjacencies.
-   **TET\_MESH\_ORDER4\_ADJ\_SET** sets the nodal adjacency matrix.
-   **TET\_MESH\_ORDER10\_ADJ\_COUNT** counts the number of nodal
    adjacencies.
-   **TET\_MESH\_ORDER10\_ADJ\_SET** sets the nodal adjacency matrix.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 08 March 2013.*
