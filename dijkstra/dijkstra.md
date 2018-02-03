DIJKSTRA\
Demonstration of Dijkstra's Minimum Distance Algorithm {#dijkstra-demonstration-of-dijkstras-minimum-distance-algorithm align="center"}
======================================================

------------------------------------------------------------------------

**DIJKSTRA** is a C++ library which implements a simple version of
Dijkstra's algorithm for determining the minimum distance from one node
in a graph to all other nodes.

The program is mainly of interest as a starting point for a
parallelization effort using OpenMP.

The example graph handled by the program has 6 nodes and 8 links, each
with a positive length:

        N0--15--N2-100--N3
          \      |     /
           \     |    /
            40  20  10
              \  |  /
               \ | /
                N1
                / \
               /   \
              6    25
             /       \
            /         \
          N5----8-----N4
          

Using "Inf" to indicate that there is no link between two nodes, the
distance matrix for this graph is:

              0   40   15  Inf  Inf  Inf
             40    0   20   10   25    6
             15   20    0  100  Inf  Inf
            Inf   10  100    0  Inf  Inf
            Inf   25  Inf  Inf    0    8
            Inf    6  Inf  Inf    8    0
          

Dijkstra's algorithm efficiently determines the length of the shortest
path from node 0 to other nodes as:

            From 0 to:  0    1    2    3    4    5
            Distance:   0   35   15   45   49   41
          

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**DIJKSTRA** is available in [a C
version](../../c_src/dijkstra/dijkstra.html) and [a C++
version](../../cpp_src/dijkstra/dijkstra.html) and [a FORTRAN77
version](../../f77_src/dijkstra/dijkstra.html) and [a FORTRAN90
version](../../f_src/dijkstra/dijkstra.html) and [a MATLAB
version](../../m_src/dijkstra/dijkstra.html) and [a Python
version](../../py_src/dijkstra/dijkstra.html)

### Related Data and Programs: {#related-data-and-programs align="center"}

[BELLMAN\_FORD](../../cpp_src/bellman_ford/bellman_ford.html), a C++
library which implements the Bellman-Ford algorithm for finding the
shortest distance from a given node to all other nodes in a directed
graph whose edges have been assigned real-valued lengths.

[DIJKSTRA\_OPENMP](../../cpp_src/dijkstra_openmp/dijkstra_openmp.html),
a C++ program which uses OpenMP to parallelize a simple example of
Dijkstra's minimum distance algorithm for graphs.

[FLOYD](../../cpp_src/floyd/floyd.html), a C++ library which implements
Floyd's algorithm for finding the shortest distance between pairs of
nodes on a directed graph.

[TOMS097](../../cpp_src/toms097/toms097.html), a C++ library which
computes the distance between all pairs of nodes in a directed graph
with weighted edges, using Floyd's algorithm.

### Reference: {#reference align="center"}

1.  Edsger Dijkstra,\
    A note on two problems in connexion with graphs,\
    Numerische Mathematik,\
    Volume 1, 1959, pages 269-271.

### Source Code: {#source-code align="center"}

-   [dijkstra.cpp](dijkstra.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [dijkstra\_output.txt](dijkstra_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** runs an example of Dijkstra's minimum distance algorithm.
-   **DIJKSTRA\_DISTANCE** uses Dijkstra's minimum distance algorithm.
-   **FIND\_NEAREST** finds the nearest unconnected node.
-   **INIT** initializes the problem data.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **UPDATE\_MIND** updates the minimum distance vector.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 01 July 2010.*
