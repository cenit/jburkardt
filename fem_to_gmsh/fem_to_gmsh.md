FEM\_TO\_GMSH\
Convert Mesh Data from FEM to GMSH Format {#fem_to_gmsh-convert-mesh-data-from-fem-to-gmsh-format align="center"}
=========================================

------------------------------------------------------------------------

**FEM\_TO\_GMSH** is a C++ program which converts FEM files representing
a 1D, 2D, or 3D mesh into a GMSH mesh file.

The FEM files include a node file, which simply lists the coordinates of
each node, and an element connectivity file, which lists, for each
element, the indices of the nodes that define it. Either 0 or 1-based
indexing can be used when referencing the nodes.

### Usage: {#usage align="center"}

> **fem\_to\_gmsh** *prefix*

where *prefix* is the common filename prefix:

-   *'prefix'*\_nodes.txt contains the node coordinates,
-   *'prefix'*\_elements.txt contains the element node connectivity.
-   *'prefix'*.msh will contain the Gmsh mesh file.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FEM\_TO\_GMSH** is available in [a C
version](../../c_src/fem_to_gmsh/fem_to_gmsh.html) and [a C++
version](../../cpp_src/fem_to_gmsh/fem_to_gmsh.html) and [a FORTRAN77
version](../../f77_src/fem_to_gmsh/fem_to_gmsh.html) and [a FORTRAN90
version](../../f_src/fem_to_gmsh/fem_to_gmsh.html) and [a MATLAB
version](../../m_src/fem_to_gmsh/fem_to_gmsh.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[DOLFIN-CONVERT](../../py_src/dolfin-convert/dolfin-convert.html), a
Python program which can convert mesh file from Gmsh, MEDIT, METIS or
SCOTCH format to an XML format suitable for use by DOLFIN or FENICS, by
Anders Logg.

[FEM\_TO\_MEDIT](../../cpp_src/fem_to_medit/fem_to_medit.html), a C++
program which reads a pair of FEM files defining node coordinates and
elements, and creates a corresponding MEDIT mesh file.

[FEM\_TO\_TRIANGLE](../../cpp_src/fem_to_triangle/fem_to_triangle.html),
a C++ program which reads FEM files defining a 2D mesh of triangles,
namely a file of node coordinates and a file of elements defined by node
indices, and creates a corresponding pair of node and element files for
use by Jonathan Shewchuk's triangle program.

[FEM\_TO\_XML](../../cpp_src/fem_to_xml/fem_to_xml.html), a C++ program
which reads FEM files defining a 1D, 2D or 3D mesh, namely a file of
node coordinates and a file of elements defined by node indices, and
creates a corresponding XML file for input to DOLFIN or FENICS.

[GMSH](../../examples/gmsh/gmsh.html), examples which illustrate the use
of the Gmsh program, a 3D mesh generator for the finite element method
(FEM).

[GMSH\_IO](../../cpp_src/gmsh_io/gmsh_io.html), a C++ library which can
read or write some of the files created by the Gmsh program for 1D, 2D
or 3D meshes used by the finite element method (FEM).

[GMSH\_TO\_FEM](../../cpp_src/gmsh_to_fem/gmsh_to_fem.html), a C++
program which reads a mesh data file created by the GMSH program and
writes a pair of node and element files that correspond to the FEM
format.

[MSH](../../data/msh/msh.html), a data directory of examples of MSH
files, the native 3D mesh format used by Gmsh.

### Reference: {#reference align="center"}

1.  Christophe Geuzaine, Jean-Francois Remacle,\
    Gmsh: a three-dimensional finite element mesh generator with
    built-in pre- and post-processing facilities,\
    International Journal for Numerical Methods in Engineering,\
    Volume 79, Number 11, pages 1309-1331, 2009.

### Source Code: {#source-code align="center"}

-   [fem\_to\_gmsh.cpp](fem_to_gmsh.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**CHEBY9** is a 1D interval, \[-1,+1\], containing 9 nodes and 8
elements.

-   [cheby9\_nodes.txt](cheby9_nodes.txt), the node coordinates.
-   [cheby9\_elements.txt](cheby9_elements.txt), the elements.
-   [cheby9.msh](cheby9.msh), the corresponding GMSH mesh file.

**MESH3D** is a 3D tetrahedral mesh using 8 nodes and 6 elements.

-   [mesh3d\_nodes.txt](mesh3d_nodes.txt), the nodes for the 4-node tet
    mesh.
-   [mesh3d\_elements.txt](mesh3d_elements.txt), the elements for the
    4-node tet mesh.
-   [mesh3d.msh](mesh3d.msh), the Gmsh msh file version of the data.

**RECTANGLE** is a 2D rectangular region which has been divided into 3
rows and 4 columns of squares, each then split into two 3-node
triangles. The node and element files of this triangulation are
converted into a Gmsh msh file describing the same triangulation.

-   [rectangle\_nodes.txt](rectangle_nodes.txt), the node coordinates.
-   [rectangle\_elements.txt](rectangle_elements.txt), the elements.
-   [rectangle.png](rectangle.png), a PNG image of the triangulation,
    created by TRIANGULATION\_PLOT.
-   [rectangle.msh](rectangle.msh), the corresponding Gmsh msh file.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for FEM\_TO\_GMSH.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is a case insensitive comparison of two characters for
    equality.
-   **CH\_TO\_DIGIT** returns the value of a base 10 digit.
-   **FILE\_COLUMN\_COUNT** counts the number of columns in the first
    line of a file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **GET\_UNIT** returns a free FORTRAN unit number.
-   **GMSH\_WRITE** writes the triangulation data as a Gmsh mesh file.
-   **I4MAT\_DATA\_READ** reads data from an I4MAT file.
-   **I4MAT\_HEADER\_READ** reads the header from an I4MAT.
-   **I4MAT\_TRANSPOSE\_PRINT** prints an I4MAT, transposed.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of the transpose of an
    I4MAT.
-   **MESH\_BASE\_ONE** ensures that the element definition is
    one-based.
-   **R8MAT\_DATA\_READ** reads data from an R8MAT file.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
-   **R8MAT\_TRANSPOSE\_PRINT** prints an R8MAT, transposed.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_I4VEC** reads an I4VEC from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 06 October 2014.*
