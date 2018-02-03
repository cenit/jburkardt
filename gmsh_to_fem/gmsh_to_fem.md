GMSH\_TO\_FEM\
Convert Mesh Data from GMSH to FEM Format. {#gmsh_to_fem-convert-mesh-data-from-gmsh-to-fem-format. align="center"}
==========================================

------------------------------------------------------------------------

**GMSH\_TO\_FEM** is a C++ program which reads a mesh data file created
by the GMSH program and writes a pair of node and element files that
correspond to the FEM format.

### Usage: {#usage align="center"}

> **gmsh\_to\_fem** *prefix*

where *prefix* is the common filename prefix so that:

-   *prefix***.msh** contains the GMSH mesh data file.
-   *prefix***\_nodes.txt** will be the FEM node file created by the
    program.
-   *prefix***\_elements.txt** will be the FEM element file created by
    the program.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**GMSH\_TO\_FEM** is available in [a C
version](../../c_src/gmsh_to_fem/triangle_to_fem.md) and [a C++
version](../../master/triangle_to_fem/triangle_to_fem.md) and [a
FORTRAN77 version](../../f77_src/triangle_to_fem/triangle_to_fem.md)
and [a FORTRAN90
version](../../f_src/triangle_to_fem/triangle_to_fem.md) and [a MATLAB
version](../../m_src/triangle_to_fem/triangle_to_fem.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[DOLFIN-CONVERT](../../py_src/dolfin-convert/dolfin-convert.md), a
Python program which can convert a mesh file from Gmsh, MEDIT, METIS or
SCOTCH format to an XML format suitable for use by DOLFIN or FENICS, by
Anders Logg.

[FEM\_IO](../../master/fem_io/fem_io.md), a C++ library which reads
or writes node, element and data files defining a model associated with
the finite element method (FEM).

[FEM\_TO\_GMSH](../../master/fem_to_gmsh/fem_to_gmsh.md), a C++
program which reads FEM files definining a 1D, 2D or 3D mesh, namely a
file of node coordinates and a file of elements defined by node indices,
and creates a Gmsh mesh file.

[FEM2D](../../data/fem2d/fem2d.md), a data directory which contains
examples of 2D FEM files, a pair of files defining the coordinates of
nodes, and the nodes that form triangular elements.

[GMSH](../../examples/gmsh/gmsh.md), examples which illustrate the use
of the Gmsh program, a 1D, 2D or 3D mesh generator that can create
meshes suitable for use by the finite element method (FEM).

[GMSH\_IO](../../master/gmsh_io/gmsh_io.md), a C++ library which can
read or write some of the files created by the Gmsh program for 1D, 2D
or 3D meshes used by the finite element method (FEM).

[MEDIT\_TO\_FEM](../../master/medit_to_fem/medit_to_fem.md), a C++
program which reads a mesh file created by the MEDIT program and writes
a corresponding pair of node and element files that correspond to the
FEM format.

[TRIANGLE\_TO\_FEM](../../master/triangle_to_fem/triangle_to_fem.md),
a C++ program which reads the NODE and ELE files created by triangle()
to describe a triangular mesh, and writes a corresponding pair of node
and element files in the 2D FEM format.

[XML\_TO\_FEM](../../py_src/xml_to_fem/xml_to_fem.md), a Python
program which reads an XML file created by FENICS or DOLFIN, describing
a mesh in 1D, 2D, or 3D, and creates corresponding FEM files, namely, a
file of node coordinates, and a file of element connectivities.

### Source Code: {#source-code align="center"}

-   [gmsh\_to\_fem.cpp](gmsh_to_fem.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [example\_2d.msh](example_2d.msh), a sample 2D GMSH mesh file.
-   [example\_2d\_nodes.txt](example_2d_nodes.txt), the FEM node file
    created by the program.
-   [example\_2d\_elements.txt](example_2d_elements.txt), the FEM
    element file created by the program.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for GMSH\_TO\_FEM.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is a case insensitive comparison of two characters for
    equality.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **GMSH\_DATA\_READ** reads sizes from a GMSH file.
-   **GMSH\_SIZE\_READ** reads sizes from a GMSH file.
-   **I4MAT\_WRITE** writes an I4MAT file.
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **S\_BEGIN** is TRUE if one string matches the beginning of the
    other.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 21 October 2014.*
