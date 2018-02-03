FLOYD\
Shortest Distances Between Nodes in a Directed Graph {#floyd-shortest-distances-between-nodes-in-a-directed-graph align="center"}
====================================================

------------------------------------------------------------------------

**FLOYD** is a C++ library which demonstrates Floyd's algorithm for
finding the shortest distance between every pair of nodes in a directed
graph.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FLOYD** is available in [a C version](../../c_src/floyd/floyd.html)
and [a C++ version](../../cpp_src/floyd/floyd.html) and [a FORTRAN90
version](../../f_src/floyd/floyd.html) and [a FORTRAN77
version](../../f77_src/floyd/floyd.html) and [a MATLAB
version](../../m_src/floyd/floyd.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BELLMAN\_FORD](../../cpp_src/bellman_ford/bellman_ford.html), a C++
library which implements the Bellman-Ford algorithm for finding the
shortest distance from a given node to all other nodes in a directed
graph whose edges have been assigned real-valued lengths.

[CITIES](../../f_src/cities/cities.html), a FORTRAN90 library which
handles various problems associated with a set of "cities" on a map.

[CITIES](../../datasets/cities/cities.html), a dataset directory which
contains a number of city distance datasets.

[CODEPACK](../../f_src/codepack/codepack.html), a FORTRAN90 library
which computes "codes" that can determine if two graphs are isomorphic.

[DIJKSTRA](../../cpp_src/dijkstra/dijkstra.html), a C++ program which
runs a simple example of Dijkstra's minimum distance algorithm for
graphs.

[GRAFPACK](../../f_src/grafpack/grafpack.html), a FORTRAN90 library
which computes various quantities associated with mathematical graphs.

[GRAPH\_REPRESENTATION](../../data/graph_representation/graph_representation.html),
a data directory which contains examples of ways of representing
abstract mathematical graphs

[SUBSET](../../cpp_src/subset/subset.html), a C++ library which
generates, ranks and unranks various combinatorial objects.

[TOMS097](../../cpp_src/toms097/toms097.html), a C++ library which
computes the distance between all pairs of nodes in a directed graph
with weighted edges, using Floyd's algorithm.

### Reference: {#reference align="center"}

1.  Robert Floyd,\
    Algorithm 97: Shortest Path,\
    Communications of the ACM,\
    Volume 5, Number 6, page 345, June 1962.
2.  Michael Quinn,\
    Parallel Programming in C with MPI and OpenMP,\
    McGraw-Hill, 2004,\
    ISBN13: 978-0071232654,\
    LC: QA76.73.C15.Q55.

### Source Code: {#source-code align="center"}

-   [floyd.cpp](floyd.cpp), the source code.
-   [floyd.hpp](floyd.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [floyd\_prb.cpp](floyd_prb.cpp), a sample calling program.
-   [floyd\_prb\_output.txt](floyd_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **I4\_HUGE** returns a "huge" I4.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4MAT\_FLOYD** finds the shortest I4 distances between pairs of
    nodes in a directed graph.
-   **I4MAT\_PRINT** prints an I4MAT, with an optional title.
-   **I4MAT\_PRINT\_SOME** prints some of an I4MAT.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8\_MIN** returns the minimum of two R8's.
-   **R8MAT\_FLOYD** finds the shortest R8 distances between pairs of
    nodes in a directed graph.
-   **R8MAT\_PRINT** prints an R8MAT, with an optional title.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 27 November 2008.*
