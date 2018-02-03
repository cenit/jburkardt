FEM\_IO\
Read or Write a Finite Element Model {#fem_io-read-or-write-a-finite-element-model align="center"}
====================================

------------------------------------------------------------------------

**FEM\_IO** is a C++ library which reads or writes FEM files, which
describe the nodes, elements, and function values associated with a
finite element method (FEM) model;

The finite element model is assumed to include three items:

-   Node coordinates;
-   Elements defined by a sequence of node indices;
-   Node data;

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FEM\_IO** is available in [a C
version](../../c_src/fem_io/fem_io.md) and [a C++
version](../../master/fem_io/fem_io.md) and [a FORTRAN77
version](../../f77_src/fem_io/fem_io.md) and [a FORTRAN90
version](../../f_src/fem_io/fem_io.md) and [a MATLAB
version.](../../m_src/fem_io/fem_io.md)

### Related Data and Programs: {#related-data-and-programs align="center"}

[FEM\_DISPLAY](../../m_src/fem_display/fem_display.md), a MATLAB
program which reads the FEM model of a 2D mesh, consisting of polygonal
elements of any uniform order, and displays an image of the elements and
nodes, with optional numbering.

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

[FEM\_TO\_XML](../../master/fem_to_xml/fem_to_xml.md), a C++ program
which reads FEM files defining a 1D, 2D or 3D mesh, namely a file of
node coordinates and a file of elements defined by node indices, and
creates a corresponding XML file for input to DOLFIN or FENICS.

[FEM1D](../../data/fem1d/fem1d.md), a data directory which contains
examples of 1D FEM files, three text files that describe a 1D finite
element model;

[FEM2D](../../data/fem2d/fem2d.md), a data directory which contains
examples of 2D FEM files, three text files that describe a 2D finite
element geometry;

[FEM2D\_PACK](../../master/fem2d_pack/fem2d_pack.md), a C++ library
which is useful for 2D finite element calculations.

[FEM3D](../../data/fem3d/fem3d.md), a data directory which contains
examples of 3D FEM files, three text files that describe a 3D finite
element geometry;

[GMSH\_TO\_FEM](../../master/gmsh_to_fem/gmsh_to_fem.md), a C++
program which reads a mesh data file created by the GMSH program and
writes a pair of node and element files that correspond to the FEM
format.

[MEDIT\_IO](../../master/medit_io/medit_io.md), a C++ library which
can read or write MEDIT mesh files, which can be used to define the
geometry of a finite element mesh in 2D or 3D, using triangles,
quadrilaterals, tetrahedrons or hexahedrons.

[MEDIT\_TO\_FEM](../../master/medit_to_fem/medit_to_fem.md), a C++
program which reads a mesh file created by the MEDIT program and writes
a corresponding pair of node and element files that correspond to the
FEM format.

[TABLE\_IO](../../master/table_io/table_io.md), a C++ library which
can read and write TABLE files.

[TRIANGLE\_TO\_FEM](../../master/triangle_to_fem/triangle_to_fem.md),
a C++ program which reads the NODE and ELE files created by triangle()
to describe a triangular mesh, and writes a corresponding pair of node
and element files in the 2D FEM format.

### Reference: {#reference align="center"}

1.  Hans Rudolf Schwarz,\
    Finite Element Methods,\
    Academic Press, 1988,\
    ISBN: 0126330107,\
    LC: TA347.F5.S3313..
2.  Gilbert Strang, George Fix,\
    An Analysis of the Finite Element Method,\
    Cambridge, 1973,\
    ISBN: 096140888X,\
    LC: TA335.S77.
3.  Olgierd Zienkiewicz,\
    The Finite Element Method,\
    Sixth Edition,\
    Butterworth-Heinemann, 2005,\
    ISBN: 0750663200,\
    LC: TA640.2.Z54
4.  Daniel Zwillinger, editor,\
    CRC Standard Mathematical Tables and Formulae,\
    30th Edition,\
    CRC Press, 1996,\
    ISBN: 0-8493-2479-3.

### Source Code: {#source-code align="center"}

-   [fem\_io.cpp](fem_io.cpp), the source code.
-   [fem\_io.hpp](fem_io.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

**FEM\_IO\_PRB** is a test program which tests the routines that read
and write finite element data.

-   [fem\_io\_prb.cpp](fem_io_prb.cpp) is the source code of the tests.
-   [fem\_io\_prb\_output.txt](fem_io_prb_output.txt) the output file.

**ELL** is an example of a 2D finite element model in which a scalar
value is stored.

-   [ell\_nodes.txt](ell_nodes.txt)
-   [ell\_elements.txt](ell_elements.txt)
-   [ell\_values.txt](ell_values.txt)

**P01** is a 3D rectangular channel, with dimensions 1x1x3, using 584
nodes and 2568 elements. This data was created by DISTMESH.

-   [p01\_nodes.txt](p01_nodes.txt)
-   [p01\_elements.txt](p01_elements.txt)
-   [p01\_values.txt](p01_values.txt)

**TINY** is a "tiny" example of a 2D finite element model in which a
vector value is stored. This data was written by the FEM\_WRITE routine.

-   [tiny\_nodes.txt](tiny_nodes.txt)
-   [tiny\_elements.txt](tiny_elements.txt)
-   [tiny\_values.txt](tiny_values.txt)

### List of Routines: {#list-of-routines align="center"}

-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **FEM\_DATA\_READ** reads data from a set of FEM files.
-   **FEM\_HEADER\_PRINT** prints the header to set of FEM files.
-   **FEM\_HEADER\_READ** reads the sizes of arrays in a set of FEM
    files.
-   **FEM\_WRITE** writes data files associated with a finite element
    solution.
-   **FILE\_COLUMN\_COUNT** counts the number of columns in the first
    line of a file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4\_MAX** returns the maximum of two integers.
-   **I4\_MIN** returns the smaller of two integers.
-   **I4MAT\_TRANSPOSE\_PRINT** prints an I4MAT, transposed.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an I4MAT,
    transposed.
-   **ITABLE\_DATA\_READ** reads data from an integer TABLE file.
-   **ITABLE\_DATA\_WRITE** writes data to an integer TABLE file.
-   **ITABLE\_HEADER\_READ** reads the header from an integer TABLE
    file.
-   **ITABLE\_HEADER\_WRITE** writes the header of an integer TABLE
    file.
-   **R8\_EPSILON** returns the roundoff unit for R8's.
-   **R8MAT\_TRANSPOSE\_PRINT** prints an R8MAT, transposed.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **R8TABLE\_DATA\_READ** reads the data from an R8TABLE file.
-   **R8TABLE\_DATA\_WRITE** writes data to an R8TABLE file.
-   **R8TABLE\_HEADER\_READ** reads the header from an R8TABLE file.
-   **R8TABLE\_HEADER\_WRITE** writes the header of an R8TABLE file.
-   **S\_BLANK\_DELETE** removes blanks from a string, left justifying
    the remainder.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_I4VEC** reads an I4VEC from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads a real vector from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TIMESTRING** returns the current YMDHMS date as a string.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 10 November 2006.*
