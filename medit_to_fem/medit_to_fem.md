MEDIT\_TO\_FEM\
Convert Mesh Data from MEDIT to FEM Format. {#medit_to_fem-convert-mesh-data-from-medit-to-fem-format. align="center"}
===========================================

------------------------------------------------------------------------

**MEDIT\_TO\_FEM** is a C++ program which reads a mesh file created by
the MEDIT program and writes a corresponding pair of node and element
files that correspond to the FEM format.

### Usage: {#usage align="center"}

> **medit\_to\_fem** *prefix*

where *prefix* is the common filename prefix so that:

-   *prefix***.mesh**, the MEDIT file to be converted;
-   *prefix***\_nodes.txt** will be the FEM node file created by the
    program.
-   *prefix***\_elements.txt** will be the FEM element file created by
    the program.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**MEDIT\_TO\_FEM** is available in [a C
version](../../c_src/medit_to_fem/medit_to_fem.md) and [a C++
version](../../master/medit_to_fem/medit_to_fem.md) and [a FORTRAN77
version](../../f77_src/medit_to_fem/medit_to_fem.md) and [a FORTRAN90
version](../../f_src/medit_to_fem/medit_to_fem.md) and [a MATLAB
version](../../m_src/medit_to_fem/medit_to_fem.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[DOLFIN-CONVERT](../../py_src/dolfin-convert/dolfin-convert.md), a
Python program which can convert a mesh file from Gmsh, MEDIT, METIS or
SCOTCH format to an XML format suitable for use by DOLFIN or FENICS, by
Anders Logg.

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

[MEDIT](../../data/medit/medit.md), a data directory which contains
examples of files which can be used by the MEDIT program to define a 2D
or 3D mesh for use by the finite element method (FEM), using triangles,
quadrilaterals, tetrahedrons or hexahedrons.

[MEDIT](../../examples/medit/medit.md), examples which illustrate the
use of medit, an interactive graphics program developed to visualize
numerical simulation results on unstructured meshes in two and three
dimensions. Scalar, vector and tensor fields can be easily associated
and displayed with meshes. The program is by Pascal Frey.

[MEDIT\_IO](../../master/medit_io/medit_io.md), a C++ library which
can read or write files used by the MEDIT program, which can be used to
define the a mesh associated with the finite element method (FEM) in 2D
or 3D, using triangles, quadrilaterals, tetrahedrons or hexahedrons.

[XML\_TO\_FEM](../../py_src/xml_to_fem/xml_to_fem.md), a Python
program which reads an XML file created by FENICS or DOLFIN, describing
a mesh in 1D, 2D, or 3D, and creates corresponding FEM files, namely, a
file of node coordinates, and a file of element connectivities.

### Source Code: {#source-code align="center"}

-   [medit\_to\_fem.cpp](medit_to_fem.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**CUBE86** is a 3D mesh of tetrahedrons.

-   [cube86.mesh](cube86.mesh), a MEDIT file.
-   [cube86\_nodes.txt](cube86_nodes.txt), the FEM node file created by
    the program.
-   [cube86\_elements.txt](cube86_elements.txt), the FEM element file
    created by the program.

**ELL** is a 2D mesh of triangles.

-   [ell.mesh](ell.mesh), a MEDIT file.
-   [ell\_nodes.txt](ell_nodes.txt), the FEM node file created by the
    program.
-   [ell\_elements.txt](ell_elements.txt), the FEM element file created
    by the program.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for MEDIT\_TO\_FEM.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is TRUE (1) if two characters are equal, disregarding
    case.
-   **CH\_TO\_DIGIT** returns the value of a base 10 digit.
-   **I4MAT\_WRITE** writes an I4MAT file.
-   **I4VEC\_ZERO** zeroes an I4VEC.
-   **MESH\_DATA\_READ** reads data from a MESH file.
-   **MESH\_SIZE\_READ** reads sizes from a MESH file.
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **R8VEC\_ZERO** zeroes an R8VEC.
-   **S\_BEGIN** reports whether string 1 begins with string 2.
-   **S\_EQI** reports whether two strings are equal, ignoring case.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_NEWLINE\_TO\_NULL** replaces carriage returns or newlines by
    nulls.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_I4VEC** reads an I4VEC from a string.
-   **S\_TO\_R8** reads an R8 value from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 08 November 2014.*
