BELLMAN\_FORD\
All-to-One Shortest Distances on Directed Graph {#bellman_ford-all-to-one-shortest-distances-on-directed-graph align="center"}
===============================================

------------------------------------------------------------------------

**BELLMAN\_FORD**, a C++ library which implements the Bellman-Ford
algorithm for finding the shortest distance from a given node to all
other nodes in a directed graph whose edges have been assigned
real-valued lengths.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**BELLMAN\_FORD** is available in [a C
version](../../c_src/bellman_ford/bellman_ford.html) and [a C++
version](../../cpp_src/bellman_ford/bellman_ford.html) and [a FORTRAN77
version](../../f77_src/bellman_ford/bellman_ford.html) and [a FORTRAN90
version](../../f_src/bellman_ford/bellman_ford.html) and [a MATLAB
version](../../m_src/bellman_ford/bellman_ford.html) and [a Python
version](../../py_src/bellman_ford/bellman_ford.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[DIJKSTRA](../../cpp_src/dijkstra/dijkstra.html), a C++ library which
implements a simple version of Dijkstra's minimum distance algorithm for
graphs.

[FLOYD](../../cpp_src/floyd/floyd.html), a C++ library which implements
Floyd's algorithm for finding the shortest distance between pairs of
nodes on a directed graph.

[TOMS097](../../cpp_src/toms097/toms097.html), a C++ library which
computes the distance between all pairs of nodes in a directed graph
with weighted edges, using Floyd's algorithm.

### Reference: {#reference align="center"}

1.  Richard Bellman,\
    On a routing problem,\
    Quarterly of Applied Mathematics,\
    Volume 16, 1958, pages 87-90.
2.  Lester Ford,\
    Network Flow Theory,\
    RAND Corporation Paper P-923, 1956.

### Source Code: {#source-code align="center"}

-   [bellman\_ford.cpp](bellman_ford.cpp), the source code.
-   [bellman\_ford.hpp](bellman_ford.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [bellman\_ford\_prb.cpp](bellman_ford_prb.cpp), a sample calling
    program.
-   [bellman\_ford\_prb\_output.txt](bellman_ford_prb_output.txt), the
    output file.

### List of Routines: {#list-of-routines align="center"}

-   **BELLMAN\_FORD** finds shortest paths from a given vertex of a
    weighted directed graph.
-   **I4MAT\_TRANSPOSE\_PRINT** prints an I4MAT, transposed.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an I4MAT,
    transposed.
-   **I4VEC\_PRINT** prints an I4VEC.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 12 November 2014.*
