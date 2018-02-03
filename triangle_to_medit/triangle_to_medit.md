TRIANGLE\_TO\_MEDIT\
Convert TRIANGLE Node and Element Files to MEDIT Mesh File. {#triangle_to_medit-convert-triangle-node-and-element-files-to-medit-mesh-file. align="center"}
===========================================================

------------------------------------------------------------------------

**TRIANGLE\_TO\_MEDIT** is a C++ program which reads a pair of node and
element files created by the TRIANGLE program and writes a corresponding
Mesh file suitable for viewing with the MEDIT program.

### Usage: {#usage align="center"}

> **triangle\_to\_medit** *prefix*

where *prefix* is the common filename prefix so that:

-   *prefix***.node** contains the coordinates of the nodes;
-   *prefix***.ele** contains the indices of nodes forming each element.
-   *prefix***.mesh** will be the MEDIT Mesh file created by the
    program.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TRIANGLE\_TO\_MEDIT** is available in [a C
version](../../c_src/triangle_to_medit/triangle_to_medit.md) and [a
C++ version](../../master/triangle_to_medit/triangle_to_medit.md) and
[a FORTRAN77
version](../../f77_src/triangle_to_medit/triangle_to_medit.md) and [a
FORTRAN90 version](../../f_src/triangle_to_medit/triangle_to_medit.md)
and [a MATLAB
version](../../m_src/triangle_to_medit/triangle_to_medit.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FEM\_TO\_MEDIT](../../master/fem_to_medit/fem_to_medit.md), a C++
program which reads a pair of FEM files defining node coordinates and
elements, and creates a corresponding MEDIT mesh file.

[MEDIT](../../data/medit/medit.md), a data directory which contains
examples of MEDIT mesh files, which can be used to define the geometry
of a finite element mesh in 2D or 3D, using triangles, quadrilaterals,
tetrahedrons or hexahedrons.

[MEDIT\_IO](../../master/medit_io/medit_io.md), a C++ library which
can read or write MEDIT mesh files.

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
directory of examples of files used by the triangle and showme programs.

[TRIANGLE\_IO](../../master/triangle_io/triangle_io.md), a C++
library which can read or write node and element files created by the
TRIANGLE program.

[TRIANGLE\_TO\_FEM](../../master/triangle_to_fem/triangle_to_fem.md),
a C++ program which reads the NODE and ELE files created by TRIANGLE to
describe a triangular mesh, and writes a corresponding pair of node and
element files in the 2D FEM format.

[TRIANGLE\_TO\_XML](../../master/triangle_to_xml/triangle_to_xml.md),
a C++ program which reads the NODE and ELE files created by triangle()
to describe a triangular mesh in 2D, and writes out a corresponding XML
mesh file for use by DOLFIN or FENICS.

### Reference: {#reference align="center"}

1.  Pascal Frey,\
    MEDIT: An interactive mesh visualization software,\
    Technical Report RT-0253,\
    Institut National de Recherche en Informatique et en Automatique,\
    03 December 2001.

### Source Code: {#source-code align="center"}

-   [triangle\_to\_medit.cpp](triangle_to_medit.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [ell.node](ell.node), a TRIANGLE node file.
-   [ell.ele](ell.ele), a TRIANGLE element file.
-   [ell.mesh](ell.mesh), a MESH file created by the program.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for TRIANGLE\_TO\_MEDIT.
-   **ELEMENT\_DATA\_READ** reads the header information from an element
    file.
-   **ELEMENT\_SIZE\_READ** reads the header information from an element
    file.
-   **MESH\_WRITE** writes mesh data to a MESH file.
-   **NODE\_HEADER\_READ** reads the header information from a node
    file.
-   **NODE\_SIZE\_READ** reads the header information from a node file.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 07 December 2010.*
