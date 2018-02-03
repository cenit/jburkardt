TRIANGLE\_IO\
Read and Write TRIANGLE Files {#triangle_io-read-and-write-triangle-files align="center"}
=============================

------------------------------------------------------------------------

**TRIANGLE\_IO** is a C++ library which can read or write some simple
versions of some of the files used by Jonathan Shewchuk's triangle()
program.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TRIANGLE\_IO** is available in [a C
version](../../c_src/triangle_io/triangle_io.md) and [a C++
version](../../master/triangle_io/triangle_io.md) and [a FORTRAN77
version](../../f77_src/triangle_io/triangle_io.md) and [a FORTRAN90
version](../../f_src/triangle_io/triangle_io.md) and [a MATLAB
version](../../m_src/triangle_io/triangle_io.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FEM\_TO\_TRIANGLE](../../master/fem_to_triangle/fem_to_triangle.md),
a C++ program which reads FEM files defining a 2D mesh of triangles,
namely a file of node coordinates and a file of elements defined by node
indices, and creates a corresponding pair of node and element files for
use by Jonathan Shewchuk's triangle program.

[POLY](../../data/poly/poly.md), a data directory which contains a
description and examples of the POLY file format.

[SHOWME](../../c_src/showme/showme.md), a C program which can display
the POLY files uses as input to **TRIANGLE**, and the output files that
define meshes and other objects.

[TRIANGLE](../../c_src/triangle/triangle.md), a C program which
computes Voronoi diagrams and Delaunay triangulations, and creates and
manipulates files that can be displayed by **SHOWME**.

[TRIANGLE\_DISPLAY](../../m_src/triangle_display/triangle_display.md),
a MATLAB program which displays the nodes and elements of a
triangulation on the MATLAB graphics screen, assuming the data has been
stored in NODE and ELE files by the TRIANGLE program.

[TRIANGLE\_FILES](../../data/triangle_files/triangle_files.md), a data
directory which contains examples of files used by the
[triangle](../../c_src/triangle/triangle.md) and showme programs.

[TRIANGLE\_TO\_FEM](../../master/triangle_to_fem/triangle_to_fem.md),
a C++ program which reads the NODE and ELE files created by TRIANGLE to
describe a triangular mesh, and writes a corresponding pair of node and
element files in the 2D FEM format.

[TRIANGLE\_TO\_MEDIT](../../master/triangle_to_medit/triangle_to_medit.md),
a C++ program which reads the NODE and ELE files created by TRIANGLE to
describe a triangular mesh, and writes a corresponding MESH file for
input to MEDIT.

[TRIANGLE\_TO\_XML](../../master/triangle_to_xml/triangle_to_xml.md),
a C++ program which reads the NODE and ELE files created by triangle()
to describe a triangular mesh in 2D, and writes out a corresponding XML
mesh file for use by DOLFIN or FENICS.

### Reference: {#reference align="center"}

1.  <http://www-2.cs.cmu.edu/~quake/triangle.md>, the TRIANGLE web
    site;

### Source Code: {#source-code align="center"}

-   [triangle\_io.cpp](triangle_io.cpp), the source code.
-   [triangle\_io.hpp](triangle_io.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [triangle\_io\_prb.cpp](triangle_io_prb.cpp) a sample calling
    program.
-   [triangle\_io\_prb\_output.txt](triangle_io_prb_output.txt), the
    output file.
-   [example.ele](example.ele), an example ".ele" file created by the
    program.
-   [example.node](example.node), an example ".node" file created by the
    program.

### List of Routines: {#list-of-routines align="center"}

-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4MAT\_COPY** copies one I4MAT to another.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an I4MAT,
    transposed.
-   **I4VEC\_COPY** copies an I4VEC.
-   **R8MAT\_COPY** copies one R8MAT to another.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TRIANGLE\_ELEMENT\_DATA\_EXAMPLE** returns the element information
    for the example.
-   **TRIANGLE\_ELEMENT\_DATA\_READ** reads the header information from
    an element file.
-   **TRIANGLE\_ELEMENT\_SIZE\_EXAMPLE** returns the element size
    information for the example.
-   **TRIANGLE\_ELEMENT\_SIZE\_READ** reads the header information from
    an element file.
-   **TRIANGLE\_ELEMENT\_WRITE** writes a TRIANGLE ".ele" file.
-   **TRIANGLE\_NODE\_DATA\_EXAMPLE** returns the node information for
    the example.
-   **TRIANGLE\_NODE\_HEADER\_READ** reads the header information from a
    node file.
-   **TRIANGLE\_NODE\_SIZE\_EXAMPLE** returns the sizes of node
    information for the example.
-   **TRIANGLE\_NODE\_SIZE\_READ** reads the header information from a
    node file.
-   **TRIANGLE\_NODE\_WRITE** writes a TRIANGLE ".node" file.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 16 October 2014.*
