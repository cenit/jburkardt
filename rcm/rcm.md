RCM\
Reverse Cuthill McKee Ordering {#rcm-reverse-cuthill-mckee-ordering align="center"}
==============================

------------------------------------------------------------------------

**RCM** is a C++ library which computes the reverse Cuthill McKee
("RCM") ordering of the nodes of a graph.

The RCM ordering is frequently used when a matrix is to be generated
whose rows and columns are numbered according to the numbering of the
nodes. By an appropriate renumbering of the nodes, it is often possible
to produce a matrix with a much smaller bandwidth.

The bandwidth of a matrix is computed as the maximum bandwidth of each
row of the matrix. The bandwidth of a row of the matrix is essentially
the number of matrix entries between the first and last nonzero entries
in the row, with the proviso that the diagonal entry is always treated
as though it were nonzero.

This library includes a few routines to handle the common case where the
connectivity can be described in terms of a triangulation of the nodes,
that is, a grouping of the nodes into sets of 3-node or 6-node
triangles. The natural description of a triangulation is simply a
listing of the nodes that make up each triangle. The library includes
routines for determining the adjacency structure associated with a
triangulation, and the test problems include examples of how the nodes
in a triangulation can be relabeled with the RCM permutation.

Here is a simple example of how reordering can reduce the bandwidth. In
our first picture, we have nine nodes:

               5--7--6
               |  | /
            4--8--2
            |  |  |
            9--1--3
          

The corresponding adjacency matrix is:

            * . 1 . . . . 1 1
            . * 1 . . 1 1 1 .
            1 1 * . . . . . .
            . . . * . . . 1 1
            . . . . * . 1 1 .
            . 1 . . . * 1 . .
            . 1 . . 1 1 * . .
            1 1 . 1 1 . . * .
            1 . . 1 . . . . *
          

which has a disastrous bandwidth of 17 (lower and upper bandwidths of 8,
and 1 for the diagonal.)

If we keep the same connectivity graph, but relabel the nodes, we could
get a picture like this:

               7--8--9
               |  | /
            3--5--6
            |  |  |
            1--2--4
          

whose adjacency matrix is:

            * 1 1 . . . . . .
            1 * . 1 1 . . . .
            1 . * . 1 . . . .
            . 1 . * . 1 . . .
            . 1 1 . * 1 1 . .
            . . . 1 1 * . 1 1
            . . . . 1 . * 1 .
            . . . . . 1 1 * 1
            . . . . . 1 . 1 *
          

which has a bandwidth of 7 (lower and upper bandwidths of 3, and 1 for
the diagonal.)

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**RCM** is available in [a C++ version](../../master/rcm/rcm.md) and
[a FORTRAN90 version](../../f_src/rcm/rcm.md) and [a MATLAB
version](../../m_src/rcm/rcm.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[MESH\_BANDWIDTH](../../master/mesh_bandwidth/mesh_bandwidth.md), a
C++ program which returns the geometric bandwidth associated with a mesh
of elements of any order and in a space of arbitrary dimension.

[QUAD\_MESH\_RCM](../../master/quad_mesh_rcm/quad_mesh_rcm.md), a C++
program which computes the reverse Cuthill-McKee (RCM) reordering for
nodes in a mesh of 4-node quadrilaterals.

[SPARSEPAK](../../f_src/sparsepak/sparsepak.md), a FORTRAN90 library
which solves sparse linear systems using the Reverse Cuthill-McKee
reordering scheme.

[TET\_MESH\_RCM](../../master/tet_mesh_rcm/tet_mesh_rcm.md), a C++
program which reads files describing a tetrahedral mesh of nodes in 3D,
and applies the RCM algorithm to produce a renumbering of the tet mesh
with a reduced bandwidth.

[TRIANGULATION
ORDER3](../../data/triangulation_order3/triangulation_order3.md), a
data directory which contains a description and examples of order 3
triangulations.

[TRIANGULATION
ORDER6](../../data/triangulation_order6/triangulation_order6.md), a
data directory which contains a description and examples of order 6
triangulations.

[TRIANGULATION\_RCM](../../master/triangulation_rcm/triangulation_rcm.md),
a C++ program which reads files describing a triangulation of nodes in
2D, and applies the RCM algorithm to produce a renumbering of the
triangulation with a reduced bandwidth.

### Reference: {#reference align="center"}

1.  HL Crane, Norman Gibbs, William Poole, Paul Stockmeyer,\
    Algorithm 508: Matrix Bandwidth and Profile Reduction,\
    ACM Transactions on Mathematical Software,\
    Volume 2, Number 4, December 1976, pages 375-377.
2.  Alan George, Joseph Liu,\
    Computer Solution of Large Sparse Positive Definite Matrices,\
    Prentice Hall, 1981,\
    ISBN: 0131652745,\
    LC: QA188.G46
3.  Norman Gibbs,\
    Algorithm 509: A Hybrid Profile Reduction Algorithm,\
    ACM Transactions on Mathematical Software,\
    Volume 2, Number 4, December 1976, pages 378-387.
4.  Norman Gibbs, William Poole, Paul Stockmeyer,\
    An Algorithm for Reducing the Bandwidth and Profile of a Sparse
    Matrix,\
    SIAM Journal on Numerical Analysis,\
    Volume 13, Number 2, April 1976, pages 236-250.
5.  John Lewis,\
    Algorithm 582: The Gibbs-Poole-Stockmeyer and Gibbs-King Algorithms
    for Reordering Sparse Matrices,\
    ACM Transactions on Mathematical Software,\
    Volume 8, Number 2, June 1982, pages 190-194.

### Source Code: {#source-code align="center"}

-   [rcm.cpp](rcm.cpp), the source code.
-   [rcm.hpp](rcm.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [rcm\_prb.cpp](rcm_prb.cpp), a sample calling program.
-   [rcm\_prb\_output.txt](rcm_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **ADJ\_BANDWIDTH** computes the bandwidth of an adjacency matrix.
-   **ADJ\_CONTAINS\_IJ** determines if (I,J) is in an adjacency
    structure.
-   **ADJ\_INSERT\_IJ** inserts (I,J) into an adjacency structure.
-   **ADJ\_PERM\_BANDWIDTH** computes the bandwidth of a permuted
    adjacency matrix.
-   **ADJ\_PERM\_SHOW** displays a symbolic picture of a permuted
    adjacency matrix.
-   **ADJ\_PRINT** prints adjacency information.
-   **ADJ\_PRINT\_SOME** prints some adjacency information.
-   **ADJ\_SET** sets up the adjacency information.
-   **ADJ\_SHOW** displays a symbolic picture of an adjacency matrix.
-   **DEGREE** computes the degrees of the nodes in the connected
    component.
-   **GENRCM** finds the reverse Cuthill-Mckee ordering for a general
    graph.
-   **GRAPH\_01\_ADJ** returns the adjacency vector for graph 1.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the smaller of two I4's.
-   **I4\_SIGN** returns the sign of an I4.
-   **I4\_SWAP** switches two I4's.
-   **I4\_UNIFORM** returns a scaled pseudorandom I4.
-   **I4MAT\_PRINT\_SOME** prints some of an I4MAT.
-   **I4MAT\_TRANSPOSE\_PRINT** prints an I4MAT, transposed.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an I4MAT,
    transposed.
-   **I4ROW\_COMPARE** compares two rows of an I4ROW.
-   **I4ROW\_SORT\_A** ascending sorts the rows of an I4ROW.
-   **I4ROW\_SWAP** swaps two rows of an I4ROW.
-   **I4VEC\_HEAP\_D** reorders an I4VEC into a descending heap.
-   **I4VEC\_INDICATOR** sets an I4VEC to the indicator vector.
-   **I4VEC\_PRINT** prints an I4VEC.
-   **I4VEC\_REVERSE** reverses the elements of an integer vector.
-   **I4VEC\_SORT\_HEAP\_A** ascending sorts an I4VEC using heap sort.
-   **LEVEL\_SET** generates the connected level structure rooted at a
    given node.
-   **LEVEL\_SET\_PRINT** prints level set information.
-   **PERM\_CHECK** checks that a vector represents a permutation.
-   **PERM\_INVERSE3** produces the inverse of a given permutation.
-   **PERM\_UNIFORM** selects a random permutation of N objects.
-   **R4\_ABS** returns the absolute value of an R4.
-   **R4\_NINT** returns the nearest integer to an R4.
-   **R82VEC\_PERMUTE** permutes an R82VEC in place.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **RCM** renumbers a connected component by the reverse Cuthill McKee
    algorithm.
-   **ROOT\_FIND** finds a pseudo-peripheral node.
-   **SORT\_HEAP\_EXTERNAL** externally sorts a list of items into
    ascending order.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TRIANGULATION\_ORDER3\_ADJ\_COUNT** counts adjacencies in a
    triangulation.
-   **TRIANGULATION\_ORDER3\_ADJ\_SET** sets adjacencies in a
    triangulation.
-   **TRIANGULATION\_ORDER3\_EXAMPLE2** sets up a sample triangulation.
-   **TRIANGULATION\_ORDER3\_EXAMPLE2\_SIZE** sets sizes for a sample
    triangulation.
-   **TRIANGULATION\_ORDER3\_NEIGHBOR\_TRIANGLES** determines triangle
    neighbors.
-   **TRIANGULATION\_ORDER6\_ADJ\_COUNT** counts adjacencies in a
    triangulation.
-   **TRIANGULATION\_ORDER6\_ADJ\_SET** sets adjacencies in a
    triangulation.
-   **TRIANGULATION\_ORDER6\_EXAMPLE2** sets up a sample triangulation.
-   **TRIANGULATION\_ORDER6\_EXAMPLE2\_SIZE** sets sizes for a sample
    triangulation.
-   **TRIANGULATION\_ORDER6\_NEIGHBOR\_TRIANGLES** determines triangle
    neighbors.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 06 June 2011.*
