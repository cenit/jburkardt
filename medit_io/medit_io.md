MEDIT\_IO\
Reading and Writing MEDIT Mesh Files {#medit_io-reading-and-writing-medit-mesh-files align="center"}
====================================

------------------------------------------------------------------------

**MEDIT\_IO** is a C++ library which can read or write files used by the
MEDIT program, which can be used to define the a mesh associated with
the finite element method (FEM) in 2D or 3D, using triangles,
quadrilaterals, tetrahedrons or hexahedrons.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**MEDIT\_IO** is available in [a C
version](../../c_src/medit_io/medit_io.md) and [a C++
version](../../master/medit_io/medit_io.md) and [a FORTRAN77
version](../../f77_src/medit_io/medit_io.md) and [a FORTRAN90
version](../../f_src/medit_io/medit_io.md) and [a MATLAB
version](../../m_src/medit_io/medit_io.md).

### Related Programs: {#related-programs align="center"}

[FEM\_TO\_MEDIT](../../master/fem_to_medit/fem_to_medit.md), a C++
program which reads a pair of FEM files defining node coordinates and
elements, and creates a corresponding MEDIT mesh file.

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

-   [medit\_io.cpp](medit_io.cpp), the source code.
-   [medit\_io.hpp](medit_io.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [medit\_io\_prb.cpp](medit_io_prb.cpp), a sample calling program.
-   [medit\_io\_prb\_output.txt](medit_io_prb_output.txt), the output
    file.

### List of Routines: {#list-of-routines align="center"}

-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is a case insensitive comparison of two characters for
    equality.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **CYL248\_DATA** defines the data for a 3D tetrahedral mesh.
-   **CYL248\_SIZE** defines the sizes for a 3D tetrahedral mesh.
-   **GET\_UNIT** returns a free FORTRAN unit number.
-   **HEXAHEXA\_2X2X2\_DATA** defines the data for a 3D hexahedral mesh.
-   **HEXAHEXA\_2X2X2\_SIZE** defines the sizes for a 3D hexahedral
    mesh.
-   **I4MAT\_COPY** copies an I4MAT.
-   **I4VEC\_COPY** copies an I4VEC.
-   **MESH\_DATA\_PRINT** prints mesh data.
-   **MESH\_DATA\_READ** reads data from a MESH file.
-   **MESH\_SIZE\_PRINT** prints mesh sizes.
-   **MESH\_SIZE\_READ** reads sizes from a MESH file.
-   **MESH\_WRITE** writes sizes and data to a MESH file.
-   **R8MAT\_COPY** copies an R8MAT.
-   **R8VEC\_COPY** copies an R8VEC.
-   **S\_BEGIN** is TRUE if one string matches the beginning of the
    other.
-   **S\_EQI** is a case insensitive comparison of two strings for
    equality.
-   **S\_TO\_I4** reads an integer value from a string.
-   **S\_TO\_I4VEC** reads an integer vector from a string.
-   **S\_TO\_R8** reads an R8 value from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 10 October 2014.*
