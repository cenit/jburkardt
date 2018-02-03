NEIGHBORS\_TO\_METIS\_GRAPH\
Reformat Tet Mesh Neighbor File {#neighbors_to_metis_graph-reformat-tet-mesh-neighbor-file align="center"}
===============================

------------------------------------------------------------------------

**NEIGHBORS\_TO\_METIS\_GRAPH** is a C++ program which reads a file
describing the graph-theoretic adjacency structure of the elements in a
mesh of triangles or tetrahedrons and writes out a similar file that is
suitable for input to the mesh partitioning program METIS.

Since we know we are dealing with a triangle or tet mesh, each "node" of
the adjacency graph has 3 or 4 potential edges. If a potential edge is
not used (in other words, if a face is a boundary face), then by
convention we write out a "-1" for the neighbor value. Otherwise, the
adjacency information lists the index of the element that is a neighbor
on that face of the element

Converting to a METIS GRAPH format is trivial. We include an initial
line that lists the number of "nodes" (elements) and "edges" (interfaces
between pairs of elements), followed by, for each node (element), a list
of the adjacent nodes (a list of the adjacent elements, omitting the
"-1" values). A cross-eyed schoolboy sitting on a tack would be able to
carry out this task!

### Usage: {#usage align="center"}

 **neighbors\_to\_metis\_graph** *neighbor\_file* 
:   reads the data in *neighbor\_file*, rearranges it to suit **METIS**,
    and writes out the modified data to *metis\_graph\_file*

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**NEIGHBORS\_TO\_METIS\_GRAPH** is available in [a C++
version](../../master/neighbors_to_metis_graph/neighbors_to_metis_graph.md)
and [a FORTRAN90
version](../../f_src/neighbors_to_metis_graph/neighbors_to_metis_graph.md)
and [a MATLAB
version](../../m_src/neighbors_to_metis_graph/neighbors_to_metis_graph.md).

### Related Programs: {#related-programs align="center"}

[GRAPHCHK](../../c_src/graphchk/graphchk.md), a C program, using the
METIS library, which can check that a METIS graph file has the proper
format;

[KMETIS](../../c_src/kmetis/kmetis.md), a C program which uses the
[METIS](metis/metis.md) library to partition the nodes of a graph in a
balanced way, useful for parallel processing;

[METIS](../../c_src/metis/metis.md), a C library which partitions the
nodes of a graph or the elements of a mesh, for division among a number
of parallel processes, or to reorder the variables in a sparse matrix to
minimize fillin;

[METIS\_GRAPH](../../data/metis_graph/metis_graph.md), a data
directory of examples of METIS GRAPH files, the format for graphs to be
read by [METIS](../../data/../../c_src/metis/metis.md), which can
partition a graph;

[OEMETIS](../../c_src/oemetis/oemetis.md), a C program which uses the
[METIS](metis/metis.md) library to reorder the variables in a sparse
matrix.

[ONMETIS](../../c_src/onmetis/onmetis.md), a C program, using the
[METIS](metis/metis.md) library, which can reorder the variables in a
sparse matrix.

[PMETIS](../../c_src/pmetis/pmetis.md), a C program which uses the
METIS library to partition the nodes of a graph in a balanced way,
useful for parallel processing;

[TET\_MESH\_TET\_NEIGHBORS](../../master/tet_mesh_tet_neighbors/tet_mesh_tet_neighbors.md),
a C++ program which reads information about a tet mesh and writes out a
list of the tetrahedrons that are adjacent to a given tetrahedron;

[TRIANGULATION\_TRIANGLE\_NEIGHBORS](../../master/triangulation_triangle_neighbors/triangulation_triangle_neighbors.md),
a C++ program which reads data defining a triangulation, determines the
neighboring triangles of each triangle, and writes that information to a
file.

### Reference: {#reference align="center"}

1.  George Karypis, Vipin Kumar,\
    METIS, a Software Package for Partitioning Unstructured Graphs and
    Computing Fill-Reduced Orderings of Sparse Matrices;

### Source Code: {#source-code align="center"}

-   [neighbors\_to\_metis\_graph.cpp](neighbors_to_metis_graph.cpp), the
    source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [cube\_tetra.neighbors](cube_tetra.neighbors), a sample tet mesh
    neighbor file that can be used as input to the program.
-   [cube\_tetra.metis\_graph](cube_tetra.metis_graph), the modified tet
    mesh neighbor file created by the program, suitable for input to
    **METIS**.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for NEIGHBORS\_TO\_METIS\_GRAPH.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **FILE\_COLUMN\_COUNT** counts the number of columns in the first
    line of a file.
-   **FILE\_NAME\_EXT\_GET** determines the "extension" of a file name.
-   **FILE\_NAME\_EXT\_SWAP** replaces the current "extension" of a file
    name.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4COL\_COMPARE** compares columns I and J of an I4COL.
-   **I4COL\_SORT\_A** ascending sorts the columns of an I4COL.
-   **I4COL\_SWAP** swaps two columns of an I4COL.
-   **I4I4I4\_SORT\_A** ascending sorts a triple of I4's.
-   **I4MAT\_TRANSPOSE\_PRINT** prints an I4MAT, transposed.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an I4MAT,
    transposed.
-   **ITABLE\_DATA\_READ** reads data from an ITABLE file.
-   **ITABLE\_HEADER\_READ** reads the header from an ITABLE file.
-   **METIS\_GRAPH\_WRITE** writes the METIS graph file.
-   **S\_INDEX\_LAST\_C** points to the last occurrence of a given
    character.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_I4VEC** reads an I4VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **SORT\_HEAP\_EXTERNAL** externally sorts a list of items into
    ascending order.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 22 October 2008.*
