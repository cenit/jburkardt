FEM\_TO\_TRIANGLE\
Convert a Mesh from FEM to Triangle Format {#fem_to_triangle-convert-a-mesh-from-fem-to-triangle-format align="center"}
==========================================

------------------------------------------------------------------------

**FEM\_TO\_TRIANGLE** is a C program which reads FEM files of node
coordinates and element connectivity, which define a mesh of a 2D
region, divided into triangular elements, and creates a corresponding
pair of Triangle files.

These files can be used as input to Triangle for viewing, or mesh
refinement.

### Usage: {#usage align="center"}

> **fem\_to\_triangle** *prefix*

where *prefix* is the common filename prefix:

-   *'prefix'*\_nodes.txt contains the node coordinates,
-   *'prefix'*\_elements.txt contains the element definitions.
-   *'prefix'*.node will be the Triangle node file.
-   *'prefix'*.ele will be the Triangle element file.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FEM\_TO\_TRIANGLE** is available in [a C
version](../../c_src/fem_to_triangle/fem_to_triangle.md) and [a C++
version](../../master/fem_to_triangle/fem_to_triangle.md) and [a
FORTRAN77 version](../../f77_src/fem_to_triangle/fem_to_triangle.md)
and [a FORTRAN90
version](../../f_src/fem_to_triangle/fem_to_triangle.md) and [a MATLAB
version](../../m_src/fem_to_triangle/fem_to_triangle.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FEM\_IO](../../c_src/fem_io/fem_io.md), a C library which reads or
writes node, element and data files defining a model associated with the
finite element method (FEM).

[FEM\_TO\_GMSH](../../c_src/fem_to_gmsh/fem_to_gmsh.md), a C program
which reads FEM files definining a 1D, 2D or 3D mesh, namely a file of
node coordinates and a file of elements defined by node indices, and
creates a Gmsh mesh file.

[FEM\_TO\_MEDIT](../../c_src/fem_to_medit/fem_to_medit.md), a C
program which reads a pair of FEM files defining node coordinates and
elements, and creates a corresponding MEDIT mesh file.

[FEM\_TO\_XML](../../c_src/fem_to_xml/fem_to_xml.md), a C program
which reads FEM files defining a 1D, 2D or 3D mesh, namely a file of
node coordinates and a file of elements defined by node indices, and
creates a corresponding XML file for input to DOLFIN or FENICS.

[FEM2D](../../data/fem2d/fem2d.md), a data directory which contains
examples of 2D FEM files, text files that describe a 2D geometry and
node values associated with the finite element method (FEM);

[TRIANGLE\_FILES](../../data/triangle_files/triangle_files.md), a data
directory which contains examples of files used by the triangle() and
showme() programs.

[TRIANGLE\_IO](../../c_src/triangle_io/triangle_io.md), a C library
which can read or write some of the files created by Jonathan Shewchuk's
triangle() program.

### Source Code: {#source-code align="center"}

-   [fem\_to\_triangle.c](fem_to_triangle.c), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**ELL** is an L-shaped region with 65 nodes and 96 elements.

-   [ell\_nodes.txt](ell_nodes.txt), the node coordinates in FEM format.
-   [ell\_elements.txt](ell_elements.txt), the elements in FEM format.
-   [ell.node](ell.node), the node coordinates in TRIANGLE format.
-   [ell.ele](ell.ele), the elements in TRIANGLE format.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for FEM\_TO\_TRIANGLE.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is a case insensitive comparison of two characters for
    equality.
-   **CH\_TO\_DIGIT** returns the value of a base 10 digit.
-   **FILE\_COLUMN\_COUNT** counts the number of columns in the first
    line of a file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **GET\_UNIT** returns a free FORTRAN unit number.
-   **I4MAT\_DATA\_READ** reads data from an I4MAT file.
-   **I4MAT\_HEADER\_READ** reads the header from an I4MAT.
-   **I4MAT\_TRANSPOSE\_PRINT** prints an I4MAT, transposed.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of the transpose of an
    I4MAT.
-   **MESH\_BASE\_ZERO** ensures that the element definition is
    zero-based.
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
-   **TRIANGLE\_ELEMENT\_WRITE** writes a TRIANGLE ".ele" file.
-   **TRIANGLE\_NODE\_WRITE** writes a TRIANGLE ".node" file.

You can go up one level to [the C source codes](../c_src.md).

------------------------------------------------------------------------

*Last revised on 14 October 2014.*
