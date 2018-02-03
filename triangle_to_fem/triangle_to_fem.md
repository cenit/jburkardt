TRIANGLE\_TO\_FEM\
Convert Node and Element Files from TRIANGLE to FEM Format. {#triangle_to_fem-convert-node-and-element-files-from-triangle-to-fem-format. align="center"}
===========================================================

------------------------------------------------------------------------

**TRIANGLE\_TO\_FEM** is a C++ program which reads a pair of node and
element files created by the TRIANGLE program and writes a corresponding
pair of node and element files that correspond to the FEM format.

### Usage: {#usage align="center"}

> **triangle\_to\_fem** *prefix*

where *prefix* is the common filename prefix so that:

-   *prefix***.node** contains the coordinates of the nodes;
-   *prefix***.ele** contains the indices of nodes forming each element.
-   *prefix***\_nodes.txt** will be the FEM node file created by the
    program.
-   *prefix***\_elements.txt** will be the FEM element file created by
    the program.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TRIANGLE\_TO\_FEM** is available in [a C
version](../../c_src/triangle_to_fem/triangle_to_fem.md) and [a C++
version](../../master/triangle_to_fem/triangle_to_fem.md) and [a
FORTRAN77 version](../../f77_src/triangle_to_fem/triangle_to_fem.md)
and [a FORTRAN90
version](../../f_src/triangle_to_fem/triangle_to_fem.md) and [a MATLAB
version](../../m_src/triangle_to_fem/triangle_to_fem.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FEM\_IO](../../master/fem_io/fem_io.md), a C++ library which reads
or writes node, element and data files defining a model associated with
the finite element method (FEM).

[FEM2D](../../data/fem2d/fem2d.md), a data directory which contains
examples of 2D FEM files, a pair of files defining the coordinates of
nodes, and the nodes that form triangular elements.

[GMSH\_TO\_FEM](../../master/gmsh_to_fem/gmsh_to_fem.md), a C++
program which reads a mesh data file created by the GMSH program and
writes a pair of node and element files that correspond to the FEM
format.

[MEDIT\_TO\_FEM](../../master/medit_to_fem/medit_to_fem.md), a C++
program which reads a mesh file created by the MEDIT program and writes
a corresponding pair of node and element files that correspond to the
FEM format.

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
directory of examples of files used by the triangle and showme programs.

[TRIANGLE\_IO](../../master/triangle_io/triangle_io.md), a C++
library which can read or write node and element files created by the
TRIANGLE program.

[TRIANGLE\_TO\_MEDIT](../../master/triangle_to_medit/triangle_to_medit.md),
a C++ program which reads the NODE and ELE files created by triangle()
to describe a triangular mesh, and writes a corresponding MESH file for
input to medit().

[TRIANGLE\_TO\_XML](../../master/triangle_to_xml/triangle_to_xml.md),
a C++ program which reads the NODE and ELE files created by triangle()
to describe a triangular mesh in 2D, and writes out a corresponding XML
mesh file for use by DOLFIN or FENICS.

[XML\_TO\_FEM](../../py_src/xml_to_fem/xml_to_fem.md), a Python
program which reads an XML file created by FENICS or DOLFIN, describing
a mesh in 1D, 2D, or 3D, and creates corresponding FEM files, namely, a
file of node coordinates, and a file of element connectivities.

### Reference: {#reference align="center"}

1.  <http://www-2.cs.cmu.edu/~quake/triangle.md>, the TRIANGLE web
    site;

### Source Code: {#source-code align="center"}

-   [triangle\_to\_fem.cpp](triangle_to_fem.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [ell.node](ell.node), a TRIANGLE node file.
-   [ell.ele](ell.ele), a TRIANGLE element file.
-   [ell\_nodes.txt](ell_nodes.txt), the FEM node file created by the
    program.
-   [ell\_elements.txt](ell_elements.txt), the FEM element file created
    by the program.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for TRIANGLE\_TO\_FEM.
-   **ELEMENT\_DATA\_READ** reads the header information from an element
    file.
-   **ELEMENT\_SIZE\_READ** reads the header information from an element
    file.
-   **I4MAT\_WRITE** writes an I4MAT file with no header.
-   **NODE\_HEADER\_READ** reads the header information from a node
    file.
-   **NODE\_SIZE\_READ** reads the header information from a node file.
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 08 December 2010.*
