GRF\_IO\
GRF files\
Read and Write Utilities {#grf_io-grf-files-read-and-write-utilities align="center"}
========================

------------------------------------------------------------------------

**GRF\_IO** is a C++ library which reads or writes a GRF file containing
information about an abstract graph.

The file includes information about

-   *adjacency*, that is, which nodes are connected to a given node;
-   *embedding*, that is, how to place each node in the unit square so
    that a drawing of the graph is visually pleasing and "readable".

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**GRF\_IO** is available in [a C++
version](../../master/grf_io/grf_io.md) and [a FORTRAN90
version](../../f_src/grf_io/grf_io.md) and [a MATLAB
version](../../m_src/grf_io/grf_io.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FLOYD](../../master/floyd/floyd.md), a C++ library which implements
Floyd's algorithm for finding the shortest distance between pairs of
nodes on a directed graph.

[GRAFFITI](../../datasets/graffiti/graffiti.md), a dataset directory
which contains 195 abstract graphs, with adjacency and embedding
information, stored in the GRF format.

[GRAPH\_REPRESENTATION](../../data/graph_representation/graph_representation.md),
a data directory which contains examples of ways of representing
abstract mathematical graphs

[GRF](../../data/grf/grf.md), a data directory which contains a
description of the GRF format and some examples.

[GRF\_DISPLAY](../../m_src/grf_display/grf_display.md), a MATLAB
program which reads a GRF file defining a mathematical graph and
displays it in the MATLAB graphics window.

[GRF\_DISPLAY\_OPENGL](../../master/grf_display_opengl/grf_display_opengl.md),
a C++ program which reads a GRF file defining a mathematical graph and
displays it in an OpenGL graphics window.

[GRF\_TO\_EPS](../../f_src/grf_to_eps/grf_to_eps.md), a FORTRAN90
program which can make an encapsulated PostScript image of a GRF file.

[GRF\_TO\_XYL](../../f_src/grf_to_xyl/grf_to_xyl.md), a FORTRAN90
program which converts information describing the adjacency and
embedding of an abstract graph from GRF to XYL format.

### Reference: {#reference align="center"}

1.  Peter Eades, Ian Fogg, David Kelly,\
    SPREMB: A System for Developing Graph Algorithms,\
    Congressus Numerantium,\
    Volume 66, December 1988.
2.  Stephen Skiena,\
    Implementing Discrete Mathematics: Combinatorics and Graph Theory in
    Mathematica,\
    Addison Wesley, 1990.
3.  <http://www.combinatorica.com/>\
    the COMBINATORICA web page.

### Source Code: {#source-code align="center"}

-   [grf\_io.cpp](grf_io.cpp), the source code.
-   [grf\_io.hpp](grf_io.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [grf\_io\_prb.cpp](grf_io_prb.cpp), a sample calling program.
-   [grf\_io\_prb\_output.txt](grf_io_prb_output.txt), the output file.
-   [coxeter.grf](coxeter.grf), a GRF file created by one test and read
    by another.

### List of Routines: {#list-of-routines align="center"}

-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **GRF\_DATA\_PRINT** prints the data of a GRF file.
-   **GRF\_DATA\_READ** reads the data of a GRF file.
-   **GRF\_DATA\_WRITE** writes the data of a GRF file.
-   **GRF\_EXAMPLE** sets up a GRF example.
-   **GRF\_EXAMPLE\_SIZE** sizes a GRF example.
-   **GRF\_HEADER\_PRINT** prints the header of a GRF file.
-   **GRF\_HEADER\_READ** reads the header of a GRF file.
-   **GRF\_HEADER\_WRITE** writes the header of a GRF file.
-   **GRF\_WRITE** writes a GRF file.
-   **I4VEC\_COPY** copies an I4VEC.
-   **R8VEC\_COPY** copies an R8VEC.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 25 January 2011.*
