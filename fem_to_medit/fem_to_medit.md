FEM\_TO\_MEDIT\
Convert finite element mesh data from FEM to MEDIT format {#fem_to_medit-convert-finite-element-mesh-data-from-fem-to-medit-format align="center"}
=========================================================

------------------------------------------------------------------------

**FEM\_TO\_MEDIT** is a C++ program which reads a set of FEM files
defining the node coordinates, boundary nodes, and elements of a finite
element mesh, and rewrites the data as a MEDIT mesh file.

The program can convert 2D meshes of triangles, or 3D meshes of
tetrahedrons.

### Usage: {#usage align="center"}

> **fem\_to\_medit** prefix

where *prefix* is the file name prefix, so that:

-   *prefix***\_nodes.txt** is a file containing node coordinates;
-   *prefix***\_boundary\_node\_mask.txt** is a file listing a "0" for
    each interior node and a "1" for each boundary node; (This file can
    be created by the **triangulation\_boundary\_nodes** or
    **tet\_mesh\_boundary** programs.)
-   *prefix***\_elements.txt** is a file listing the nodes forming each
    element;
-   *prefix***.mesh** is the name of the MEDIT mesh file to be created.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FEM\_TO\_MEDIT** is available in [a C
version](../../c_src/fem_to_medit/fem_to_medit.md) and [a C++
version](../../master/fem_to_medit/fem_to_medit.md) and [a FORTRAN77
version](../../f77src/fem_to_medit/fem_to_medit.md) and [a FORTRAN90
version](../../f_src/fem_to_medit/fem_to_medit.md) and [a MATLAB
version](../../m_src/fem_to_medit/fem_to_medit.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FEM\_TO\_GMSH](../../master/fem_to_gmsh/fem_to_gmsh.md), a C++
program which reads FEM files definining a 1D, 2D or 3D mesh, namely a
file of node coordinates and a file of elements defined by node indices,
and creates a Gmsh mesh file.

[FEM\_TO\_TRIANGLE](../../master/fem_to_triangle/fem_to_triangle.md),
a C++ program which reads FEM files defining a 2D mesh of triangles,
namely a file of node coordinates and a file of elements defined by node
indices, and creates a corresponding pair of node and element files for
use by Jonathan Shewchuk's triangle program.

[FEM\_TO\_XML](../../master/fem_to_xml/fem_to_xml.md), a C++ program
which reads FEM files defining a 1D, 2D or 3D mesh, namely a file of
node coordinates and a file of elements defined by node indices, and
creates a corresponding XML file for input to DOLFIN or FENICS.

[FEM2D](../../data/fem2d/fem2d.md), a data directory which contains
examples of 2D FEM files, text files that describe a 2D finite element
geometry and associated nodal values;

[FEM3D](../../data/fem3d/fem3d.md), a data directory which contains
examples of 3D FEM files, three text files that describe a 3D finite
element geometry and associated nodal values.

[MEDIT](../../data/medit/medit.md), a data directory which contains
examples of files which can be used by the MEDIT program to define a 2D
or 3D mesh for use by the finite element method (FEM), using triangles,
quadrilaterals, tetrahedrons or hexahedrons.

[MEDIT](../../examples/medit/medit.md), examples which illustrate the
use of medit, an interactive graphics program developed to visualize
numerical simulation results on unstructured meshes in two and three
dimensions. Scalar, vector and tensor fields can be easily associated
and displayed with meshes. The program is by Pascal Frey.

[MEDIT\_TO\_FEM](../../master/medit_to_fem/medit_to_fem.md), a C++
program which reads a mesh file created by the MEDIT program and writes
a corresponding pair of node and element files that correspond to the
FEM format.

[TRIANGLE\_TO\_MEDIT](../../master/triangle_to_medit/triangle_to_medit.md),
a C++ program which reads the NODE and ELE files created by triangle()
to describe a triangular mesh, and writes a corresponding MESH file for
input to medit().

### Reference: {#reference align="center"}

1.  Pascal Frey,\
    MEDIT: An interactive mesh visualization software,\
    Technical Report RT-0253,\
    Institut National de Recherche en Informatique et en Automatique,\
    03 December 2001.

### Source Code: {#source-code align="center"}

-   [fem\_to\_medit.cpp](fem_to_medit.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**ELL** is a 2D L-shaped region, with a grid of 65 nodes and 96 elements
of order 3 triangles.

-   [ell\_nodes.txt](../../data/fem2d/ell_nodes.txt)
-   [ell\_elements.txt](../../data/fem2d/ell_elements.txt)
-   [ell\_elements.png](../../data/fem2d/ell_elements.png), an image of
    the triangulation.
-   [ell\_boundary\_node\_mask.txt](../../data/fem2d/ell_boundary_node_mask.txt)
-   [ell.mesh](../../data/mesh/ell.mesh), the MESH file.

**P01** is 3D FEM data for a rectangular channel of dimensions 3x1x1
physical units, using 584 nodes and 2568 tetrahedral elements.

-   [p01\_nodes.txt](../../data/fem3d/p01_nodes.txt), defines the FEM
    nodes.
-   [p01\_elements.txt](../../data/fem3d/p01_elements.txt), defines the
    FEM elements.
-   [p01.png](../../data/fem3d/p01.png), an image of the mesh.
-   [p01\_boundary\_node\_mask.txt](../../data/fem3d/p01_boundary_node_mask.txt)
-   [p01.mesh](../../data/mesh/p01.mesh), the MESH file.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for FEM\_TO\_MEDIT.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **FILE\_COLUMN\_COUNT** counts the columns in the first line of a
    file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4MAT\_DATA\_READ** reads data from an I4MAT file.
-   **I4MAT\_HEADER\_READ** reads the header from an I4MAT file.
-   **MESH\_WRITE** writes mesh data to a MESH file.
-   **R8MAT\_DATA\_READ** reads the data from an R8MAT file.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_I4VEC** reads an I4VEC from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 10 October 2014.*
