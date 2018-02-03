TRIANGLE\_TO\_XML\
Convert Mesh Data from TRIANGLE to XML Format. {#triangle_to_xml-convert-mesh-data-from-triangle-to-xml-format. align="center"}
==============================================

------------------------------------------------------------------------

**TRIANGLE\_TO\_XML** is a C++ program which reads a pair of node and
element files created by the TRIANGLE program and writes a corresponding
XML mesh file that can be used by FENICS or DOLFIN.

### Usage: {#usage align="center"}

> **triangle\_to\_xml** *prefix*

where *prefix* is the common filename prefix so that:

-   *prefix***.node** contains the coordinates of the nodes;
-   *prefix***.ele** contains the indices of nodes forming each element.
-   *prefix***.xml** will be the XML mesh file.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TRIANGLE\_TO\_XML** is available in [a C
version](../../c_src/triangle_to_xml/triangle_to_xml.html) and [a C++
version](../../cpp_src/triangle_to_xml/triangle_to_xml.html) and [a
FORTRAN77 version](../../f77_src/triangle_to_xml/triangle_to_xml.html)
and [a FORTRAN90
version](../../f_src/triangle_to_xml/triangle_to_xml.html) and [a MATLAB
version](../../m_src/triangle_to_xml/triangle_to_xml.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FEM\_TO\_XML](../../cpp_src/fem_to_xml/fem_to_xml.html), a C++ program
which reads FEM files defining a 1D, 2D or 3D mesh, namely a file of
node coordinates and a file of elements defined by node indices, and
creates a corresponding XML file for input to DOLFIN or FENICS.

[FENICS](../../examples/fenics/fenics.html), examples which illustrate
the use of FENICS, a collection of free software with an extensive list
of features for automated, efficient solution of partial differential
equations (PDE's).

[SHOWME](../../c_src/showme/showme.html), a C program which can display
the POLY files uses as input to TRIANGLE, and the output files that
define meshes and other objects.

[TRIANGLE](../../c_src/triangle/triangle.html), a C program which
computes Voronoi diagrams and Delaunay triangulations, and creates and
manipulates files that can be displayed by SHOWME.

[TRIANGLE\_FILES](../../data/triangle_files/triangle_files.html), a data
directory of examples of files used by the triangle and showme programs.

[TRIANGLE\_IO](../../cpp_src/triangle_io/triangle_io.html), a C++
library which can read or write node and element files created by the
TRIANGLE program.

[TRIANGLE\_TO\_FEM](../../cpp_src/triangle_to_fem/triangle_to_fem.html),
a C++ program which reads the NODE and ELE files created by triangle()
to describe a triangular mesh, and writes two simple "mesh" format
files, listing node coordinates and element connectivity.

[TRIANGLE\_TO\_MEDIT](../../cpp_src/triangle_to_medit/triangle_to_medit.html),
a C++ program which reads the NODE and ELE files created by triangle()
to describe a triangular mesh, and writes a corresponding MESH file for
input to medit().

[XML](../../data/xml/xml.html), a data directory which contains examples
of XML files, a standard, general datafile format.

### Source Code: {#source-code align="center"}

-   [triangle\_to\_xml.cpp](triangle_to_xml.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [ell.node](ell.node), a TRIANGLE node file.
-   [ell.ele](ell.ele), a TRIANGLE element file.
-   [ell.xml](ell.xml), the XML file created by the program.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for TRIANGLE\_TO\_XML.
-   **MESH\_BASE\_ZERO** ensures that the element definition is
    zero-based.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TRIANGLE\_ELEMENT\_DATA\_READ** reads the data from an element
    file.
-   **TRIANGLE\_ELEMENT\_SIZE\_READ** reads the header information from
    an element file.
-   **TRIANGLE\_NODE\_DATA\_READ** reads the data from a node file.
-   **TRIANGLE\_NODE\_SIZE\_READ** reads the header information from a
    node file.
-   **XML\_MESH2D\_WRITE** writes a 2D mesh as a DOLFIN XML file.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 15 October 2014.*
