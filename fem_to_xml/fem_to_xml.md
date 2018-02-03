FEM\_TO\_XML\
Convert Mesh Data from FEM to DOLFIN XML Format {#fem_to_xml-convert-mesh-data-from-fem-to-dolfin-xml-format align="center"}
===============================================

------------------------------------------------------------------------

**FEM\_TO\_XML** is a C++ program which reads FEM files of node
coordinates and element connectivity, which define a mesh of a 1D, 2D,
or 3D region and creates a corresponding DOLFIN XML file.

These mesh files can be used as input to DOLFIN or FENICS.

### Usage: {#usage align="center"}

> **fem\_to\_xml** *prefix*

where *prefix* is the common filename prefix:

-   *'prefix'*\_nodes.txt contains the node coordinates,
-   *'prefix'*\_elements.txt contains the element definitions.
-   *'prefix'*.xml will contain the DOLFIN XML mesh file.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FEM\_TO\_XML** is available in [a C
version](../../c_src/fem_to_xml/fem_to_xml.md) and [a C++
version](../../master/fem_to_xml/fem_to_xml.md) and [a FORTRAN77
version](../../f77_src/fem_to_xml/fem_to_xml.md) and [a FORTRAN90
version](../../f_src/fem_to_xml/fem_to_xml.md) and [a MATLAB
version](../../m_src/fem_to_xml/fem_to_xml.md) and [a Python
version](../../py_src/fem_to_xml/fem_to_xml.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[DOLFIN-CONVERT](../../py_src/dolfin-convert/dolfin-convert.md), a
Python program which can convert mesh file from Gmsh, MEDIT, METIS or
SCOTCH format to an XML format suitable for use by DOLFIN or FENICS, by
Anders Logg.

[FEM\_TO\_GMSH](../../master/fem_to_gmsh/fem_to_gmsh.md), a C++
program which reads FEM files definining a 1D, 2D or 3D mesh, namely a
file of node coordinates and a file of elements defined by node indices,
and creates a Gmsh mesh file.

[FEM\_TO\_MEDIT](../../master/fem_to_medit/fem_to_medit.md), a C++
program which reads a pair of FEM files defining node coordinates and
elements, and creates a corresponding MEDIT mesh file.

[FEM\_TO\_TRIANGLE](../../master/fem_to_triangle/fem_to_triangle.md),
a C++ program which reads FEM files defining a 2D mesh of triangles,
namely a file of node coordinates and a file of elements defined by node
indices, and creates a corresponding pair of node and element files for
use by Jonathan Shewchuk's triangle program.

[FENICS](../../examples/fenics/fenics.md), programs which illustrate
the use of a collection of free software with an extensive list of
features for automated, efficient solution of differential equations.

[MITCHELL\_FENICS](../../examples/mitchell_fenics/mitchell_fenics.md),
examples which illustrate the implementation of the Mitchell 2D elliptic
partial differential equation (PDE) test problems using FENICS.

[TET\_MESH](../../master/tet_mesh/tet_mesh.md), a C++ library which
carries out various operations on tetrahedral meshes.

[TRIANGULATION](../../master/triangulation/triangulation.md), a C++
library which performs various operations on order 3 (linear) or order 6
(quadratic) triangulations.

[XML](../../data/xml/xml.md), a data directory which contains examples
of XML files, a standard, general datafile format.

[XML\_TO\_FEM](../../py_src/xml_to_fem/xml_to_fem.md), a Python
program which reads an XML file created by FENICS or DOLFIN, describing
a mesh in 1D, 2D, or 3D, and creates corresponding FEM files, namely, a
file of node coordinates, and a file of element connectivities.

### Reference: {#reference align="center"}

1.  Anders Logg, Kent-Andre Mardal, Garth Wells,\
    Automated Solution of Differential Equations by the Finite Element
    Method: The FEniCS Book,\
    Lecture Notes in Computational Science and Engineering,\
    Springer, 2011,\
    ISBN13: 978-3642230981,\
    LC:

### Source Code: {#source-code align="center"}

-   [fem\_to\_xml.cpp](fem_to_xml.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**BATTERY** is a rectangular region which was subdivided into 7 faces
which were meshed together by MESHFACES.

-   [battery\_nodes.txt](battery_nodes.txt), the node coordinates.
-   [battery\_elements.txt](battery_elements.txt), the elements.
-   [battery.png](battery.png), a PNG image of the triangulation.
-   [battery.xml](battery.xml), the corresponding DOLFIN XML mesh file.

**CHANNEL/b&gt; is a 3D region, \[0,3\]x\[0,1\]x\[0,1\] \[-1,+1\],
containing 63 nodes and 144 elements.**

-   [channel\_nodes.txt](channel_nodes.txt), the node coordinates.
-   [channel\_elements.txt](channel_elements.txt), the elements.
-   [channel.xml](channel.xml), the corresponding DOLFIN XML mesh file.

**CHEBY9** is a 1D interval, \[-1,+1\], containing 9 nodes and 8
elements.

-   [cheby9\_nodes.txt](cheby9_nodes.txt), the node coordinates.
-   [cheby9\_elements.txt](cheby9_elements.txt), the elements.
-   [cheby9.xml](cheby9.xml), the corresponding DOLFIN XML mesh file.

**CIRCLE** is a 2D circular region which was meshed by MESH2D.

-   [circle\_nodes.txt](circle_nodes.txt), the node coordinates.
-   [circle\_elements.txt](circle_elements.txt), the elements.
-   [circle.png](circle.png), a PNG image of the triangulation.
-   [circle.xml](circle.xml), the corresponding DOLFIN XML mesh file.

**RECTANGLE** is a rectangular region which has been divided into 3 rows
and 4 columns of squares, each then split into two 3-node triangles.

-   [rectangle\_nodes.txt](rectangle_nodes.txt), the node coordinates.
-   [rectangle\_elements.txt](rectangle_elements.txt), the elements.
-   [rectangle.png](rectangle.png), a PNG image of the triangulation,
    created by TRIANGULATION\_PLOT.
-   [rectangle.xml](rectangle.xml), the corresponding DOLFIN XML mesh
    file.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for FEM\_TO\_XML.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **FILE\_COLUMN\_COUNT** counts the columns in the first line of a
    file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4MAT\_DATA\_READ** reads data from an I4MAT file.
-   **I4MAT\_HEADER\_READ** reads the header from an I4MAT file.
-   **I4MAT\_TRANSPOSE\_PRINT** prints an I4MAT, transposed.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an I4MAT,
    transposed.
-   **MESH\_BASE\_ZERO** ensures that the element definition is
    zero-based.
-   **R8MAT\_DATA\_READ** reads the data from an R8MAT file.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
-   **R8MAT\_TRANSPOSE\_PRINT** prints an R8MAT, transposed.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_I4VEC** reads an I4VEC from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **XML\_WRITE** writes the triangulation data as a DOLFIN XML mesh
    file.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 06 October 2014.*
