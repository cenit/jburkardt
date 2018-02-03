TREEPACK\
Computations using Tree Graphs {#treepack-computations-using-tree-graphs align="center"}
==============================

------------------------------------------------------------------------

**TREEPACK** is a C++ library which performs common calculations
involving a special kind of graph known as a tree.

A graph is a collection of objects or "nodes", such that any (unordered)
pair of nodes is connected or not connected. If a pair of nodes **i**
and **j** are connected, we say there is an "edge" between them, and we
may describe the edge as **(i,j)**. A graph can be represented by a
drawing of dots with lines connecting some of the dots.

A tree is a minimally connected graph; more precisely, it is a graph
with two additional properties:

-   it is *connected*, that is, given any two pair of nodes **i** and
    **j**, there is a sequence of edges
    **(na,nb),(nb,nc),...(nx,ny),(ny,nz)** such that **na=i** and
    **nz=j**;
-   if any edge is removed from the graph, it is no longer connected.

Note that a tree using **N** nodes will have exactly **N-1** edges.

There are several ways to represent a graph on the computer.

For the **TREE\_ARC** representation, we simply store a list of the
edges of the tree, that is, pairs of nodes.

For the **TREE\_PRUEFER** representation, a tree of **N** nodes is
represented by a sequence of **N-2** integers known as the Pruefer code.

For the **TREE\_PARENT** representation, a tree of **N** nodes is
represented by a list of nodes PARENT, such that, for I = 1 to N - 1,
the I-th edge of the tree connects node I to node PARENT(I).

For the **TREE\_ROOTED** representation, a tree is assumed to have the
additional property that one node has been designated as the "root".

For the **TREE\_RB** representation, a tree is assumed to have the
additional properties that one node has been designated as the "root",
and that every node has exactly 1 or 2 edges.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TREEPACK** is available in [a C
version](../../c_src/treepack/treepack.html) and [a C++
version](../../cpp_src/treepack/treepack.html) and [a FORTRAN77
version](../../f77_src/treepack/treepack.html) and [a FORTRAN90
version](../../f_src/treepack/treepack.html) and [a MATLAB
version](../../m_src/treepack/treepack.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[COMBO](../../cpp_src/combo/combo.html), a C++ library which includes
routines for ranking, unranking, enumerating and randomly selecting
balanced sequences, cycles, graphs, Gray codes, subsets, partitions,
permutations, restricted growth functions, Pruefer codes and trees.

[GRAPH\_REPRESENTATION](../../data/graph_representation/graph_representation.html),
a data directory which contains examples of ways of representing
abstract mathematical graphs

[SUBSET](../../cpp_src/subset/subset.html), a C++ library which
generates, ranks and unranks various combinatorial objects.

### Reference: {#reference align="center"}

1.  Alan Gibbons,\
    Algorithmic Graph Theory,\
    Cambridge University Press, 1985,\
    ISBN: 0-5212-8881-9,\
    LC: QA166.G53.
2.  Hang Tong Lau,\
    Combinatorial Heuristic Algorithms with FORTRAN,\
    Springer, 1986,\
    ISBN: 3540171614,\
    LC: QA402.5.L37.
3.  Albert Nijenhuis, Herbert Wilf,\
    Combinatorial Algorithms for Computers and Calculators,\
    Second Edition,\
    Academic Press, 1978,\
    ISBN: 0-12-519260-6,\
    LC: QA164.N54.
4.  Robert Sedgewick,\
    Algorithms in C,\
    Addison-Wesley, 1990,\
    ISBN: 0-201-51425-7,\
    LC: QA76.73.C15S43.
5.  Dennis Stanton, Dennis White,\
    Constructive Combinatorics,\
    Springer, 1986,\
    ISBN: 0387963472,\
    LC: QA164.S79.
6.  Krishnaiyan Thulasiraman, M Swamy,\
    Graphs: Theory and Algorithms,\
    John Wiley, 1992,\
    ISBN: 0471513563,\
    LC: QA166.T58.

### Source Code: {#source-code align="center"}

-   [treepack.cpp](treepack.cpp), the source code;
-   [treepack.hpp](treepack.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [treepack\_prb.cpp](treepack_prb.cpp), the calling program;
-   [treepack\_prb\_output.txt](treepack_prb_output.txt), the output
    file.

### List of Routines: {#list-of-routines align="center"}

-   **CATALAN** computes the Catalan numbers, from C(0) to C(N).
-   **GRAPH\_ADJ\_EDGE\_COUNT** counts the number of edges in a graph.
-   **GRAPH\_ADJ\_IS\_NODE\_CONNECTED** determines if a graph is
    nodewise connected.
-   **GRAPH\_ADJ\_IS\_TREE** determines whether a graph is a tree.
-   **GRAPH\_ARC\_DEGREE** determines the degree of the nodes of a
    graph.
-   **GRAPH\_ADJ\_IS\_TREE** determines whether a graph is a tree.
-   **GRAPH\_ARC\_NODE\_COUNT** counts the number of nodes in a graph.
-   **GRAPH\_ARC\_PRINT** prints out a graph from an edge list.
-   **GRAPH\_ARC\_TO\_GRAPH\_ADJ** converts an arc list graph to an
    adjacency graph.
-   **I4\_UNIFORM\_AB** returns a scaled pseudorandom I4 between A
    and B.
-   **I4VEC\_HEAP\_D** reorders an I4VEC into an descending heap.
-   **I4VEC\_INDICATOR** sets an I4VEC to the indicator vector.
-   **I4VEC\_PRINT** prints an I4VEC.
-   **I4VEC\_SORT\_HEAP\_A** ascending sorts an I4VEC using heap sort.
-   **I4VEC\_SORTED\_UNIQUE\_COUNT** counts the unique elements in a
    sorted I4VEC.
-   **PRUEFER\_TO\_TREE\_ARC** is given a Pruefer code, and computes the
    tree.
-   **PRUEFER\_TO\_TREE\_2** produces the edge list of a tree from its
    Pruefer code.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TREE\_ARC\_CENTER** computes the center, eccentricity, and parity
    of a tree.
-   **TREE\_ARC\_DIAM** computes the "diameter" of a tree.
-   **TREE\_ARC\_RANDOM** selects a random labeled tree and its Pruefer
    code.
-   **TREE\_ARC\_TO\_PRUEFER** is given a labeled tree, and computes its
    Pruefer code.
-   **TREE\_ENUM** enumerates the labeled trees on NNODE nodes.
-   **TREE\_PARENT\_NEXT** generates, one at a time, all labeled trees.
-   **TREE\_PARENT\_TO\_ARC** converts a tree from parent to arc
    representation.
-   **TREE\_RB\_ENUM** returns the number of rooted binary trees with N
    nodes.
-   **TREE\_RB\_LEX\_NEXT** generates rooted binary trees in
    lexicographic order.
-   **TREE\_RB\_TO\_PARENT** converts rooted binary tree to parent node
    representation.
-   **TREE\_RB\_YULE** adds two nodes to a rooted binary tree using the
    Yule model.
-   **TREE\_ROOTED\_CODE** returns the code of a rooted tree.
-   **TREE\_ROOTED\_CODE\_COMPARE** compares a portion of the code for
    two rooted trees.
-   **TREE\_ROOTED\_DEPTH** returns the depth of a rooted tree.
-   **TREE\_ROOTED\_ENUM** counts the number of unlabeled rooted trees.
-   **TREE\_ROOTED\_RANDOM** selects a random unlabeled rooted tree.
-   **VEC\_NEXT** generates all N-vectors of integers modulo a given
    base.
-   **VEC\_RANDOM** selects a random N-vector of integers modulo a given
    base.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 05 August 2013.*
