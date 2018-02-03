QUAD\_MESH\_RCM\
Reverse Cuthill-McKee Node Reordering {#quad_mesh_rcm-reverse-cuthill-mckee-node-reordering align="center"}
=====================================

------------------------------------------------------------------------

**QUAD\_MESH\_RCM** is a C++ program which computes the reverse
Cuthill-McKee (RCM) reordering for nodes in a mesh of 4-node
quadrilaterals.

The user supplies a node file and an element file, containing the
coordinates of the nodes, and the indices of the nodes that make up each
element.

The program reads the data, computes the adjacency information, carries
out the RCM algorithm to get the permutation, applies the permutation to
the nodes and elements, and writes out new node and element files that
correspond to the RCM permutation.

(Note that, internally, the program has to convert some data from
0-based to 1-based indexing in order to work with the RCM codes. Aside
from some inelegant coding, the user should not notice any effects of
this temporary adjustment.)

### Usage: {#usage align="center"}

> **quad\_mesh\_rcm** *'prefix'*

where *'prefix'* is the common file prefix:

-   *'prefix'***\_nodes.txt**, the node coordinates;
-   *'prefix'***\_elements.txt**, the element definitions.
-   *'prefix'***\_rcm\_nodes.txt**, the reordered node coordinates;
-   *'prefix'***\_rcm\_elements.txt**, the reordered element
    definitions.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**QUAD\_MESH\_RCM** is available in [a C++
version](../../master/quad_mesh_rcm/quad_mesh_rcm.md) and [a FORTRAN
version](../../f_src/quad_mesh_rcm/quad_mesh_rcm.md) and [a MATLAB
version](../../m_src/quad_mesh_rcm/quad_mesh_rcm.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[MESH\_BANDWIDTH](../../master/mesh_bandwidth/mesh_bandwidth.md), a
C++ program which returns the geometric bandwidth associated with a mesh
of elements of any order and in a space of arbitrary dimension.

[MESH\_DISPLAY](../../m_src/mesh_display/mesh_display.md), a MATLAB
program which reads data defining a polygonal mesh and displays it, with
optional numbering.

[MESH\_DISPLAY\_OPENGL](../../master/mesh_display_opengl/mesh_display_opengl.md),
a C++ program which reads files defining a polygonal mesh and displays
an image using OpenGL.

[QUAD\_MESH](../../data/quad_mesh/quad_mesh.md), a data directory
which defines a format for storing meshes of quadrilaterals over a 2D
region.

[QUAD\_MESH](../../master/quad_mesh/quad_mesh.md), a C++ library
which handles meshes of quadrilaterals over a 2D region;

[RCM](../../master/rcm/rcm.md), a C++ library which carries out
reverse Cuthill-McKee computations.

[TET\_MESH\_RCM](../../master/tet_mesh_rcm/tet_mesh_rcm.md), a C++
program which applies the reverse Cuthill-McKee reordering to a
tetrahedral mesh of nodes in 3D.

[TRIANGULATION\_RCM](../../master/triangulation_rcm/triangulation_rcm.md),
a C++ program which reads files describing a triangulation of nodes in
2D, and applies the RCM algorithm to produce a renumbering of the
triangulation with a reduced bandwidth.

### Reference: {#reference align="center"}

1.  HL Crane, Norman Gibbs, William Poole, Paul Stockmeyer,\
    Algorithm 508: Matrix Bandwidth and Profile Reduction,\
    ACM Transactions on Mathematical Software,\
    Volume 2, Number 4, December 1976, pages 375-377.
2.  Marc deBerg, Marc Krevald, Mark Overmars, Otfried Schwarzkopf,\
    Computational Geometry,\
    Springer, 2000,\
    ISBN: 3-540-65620-0.
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
    Volume 13, 1976, pages 236-250.
6.  Joseph ORourke,\
    Computational Geometry,\
    Second Edition,\
    Cambridge, 1998,\
    ISBN: 0521649765,\
    LC: QA448.D38.

### Source Code: {#source-code align="center"}

-   [quad\_mesh\_rcm.cpp](quad_mesh_rcm.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**HOLE** works with region of equal-sized squares, with some
irregularities.

-   [hole\_output.txt](hole_output.txt), the printed output from the
    command\
    "quad\_mesh\_rcm ( 'hole' )"
-   [hole\_nodes.txt](hole_nodes.txt), the node file.
-   [hole\_elements.txt](hole_elements.txt), the element file.
-   [hole\_rcm\_nodes.txt](hole_rcm_nodes.txt), the RCM reordered node
    file.
-   [hole\_rcm\_elements.txt](hole_rcm_elements.txt), the RCM reordered
    element file.
-   [hole.png](hole.png), an image of the mesh.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for QUAD\_MESH\_RCM.
-   **ADJ\_BANDWIDTH** computes the bandwidth of an adjacency matrix.
-   **ADJ\_PERM\_BANDWIDTH** computes the bandwidth of a permuted
    adjacency matrix.
-   **ADJ\_SET\_Q4\_MESH** sets adjacencies in a triangulation.
-   **ADJ\_SIZE\_Q4\_MESH** counts adjacencies in a Q4 mesh.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **DEGREE** computes the degrees of the nodes in the connected
    component.
-   **FILE\_COLUMN\_COUNT** counts the columns in the first line of a
    file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **GENRCM** finds the reverse Cuthill-Mckee ordering for a general
    graph.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_MODP** returns the nonnegative remainder of integer division.
-   **I4\_SWAP** switches two I4's.
-   **I4\_WRAP** forces an I4 to lie between given limits by wrapping.
-   **I4COL\_COMPARE** compares columns I and J of an I4COL.
-   **I4COL\_SORT\_A** ascending sorts the columns of an I4COL.
-   **I4COL\_SWAP** swaps two columns of an I4COL.
-   **I4MAT\_DATA\_READ** reads data from an I4MAT file.
-   **I4MAT\_HEADER\_READ** reads the header from an I4MAT file.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an I4MAT,
    transposed.
-   **I4MAT\_WRITE** writes an I4MAT file with no header.
-   **I4VEC\_HEAP\_D** reorders an array of integers into a descending
    heap.
-   **I4VEC\_PRINT** prints an I4VEC.
-   **I4VEC\_REVERSE** reverses the elements of an integer vector.
-   **I4VEC\_SORT\_HEAP\_A** ascending sorts an array of integers using
    heap sort.
-   **LEVEL\_SET** generates the connected level structure rooted at a
    given node.
-   **MESH\_BASE\_ZERO** ensures that the element definition is
    zero-based.
-   **NEIGHBOR\_ELEMENTS\_Q4\_MESH** determines element neighbors in a
    Q4 mesh.
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
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 30 September 2009.*
