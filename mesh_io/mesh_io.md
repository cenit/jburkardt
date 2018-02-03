MESH\_IO\
Reading and Writing MESH Files {#mesh_io-reading-and-writing-mesh-files align="center"}
==============================

------------------------------------------------------------------------

**MESH\_IO** is a C++ library which can read or write MESH files, which
define a finite element mesh.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**MESH\_IO** is available in [a C
version](../../c_src/mesh_io/mesh_io.md) and [a C++
version](../../master/mesh_io/mesh_io.md) and [a FORTRAN77
version](../../f77_src/mesh_io/mesh_io.md) and [a FORTRAN90
version](../../f_src/mesh_io/mesh_io.md) and [a MATLAB
version](../../m_src/mesh_io/mesh_io.md).

### Related Programs: {#related-programs align="center"}

[ICE\_TO\_MESH](../../master/ice_to_mesh/ice_to_mesh.md), a C++
program which reads a NETCDF file containing an ICE dataset and rewrites
the information as a MESH file.

[MESH](../../data/mesh/mesh.md), a data directory which contains
examples of MESH files, which can be used to define the geometry of a
finite element mesh in 2D or 3D, using triangles, quadrilaterals,
tetrahedrons or hexahedrons.

[MESH\_TO\_ICE](../../master/mesh_to_ice/mesh_to_ice.md), a C++
program which reads the ICE dataset information from a MESH files and
rewrites it to a NETCDF file.

[TRIANGLE\_TO\_MESH](../../master/triangle_to_mesh/triangle_to_mesh.md),
a C++ program which reads the NODE and ELE files created by TRIANGLE to
describe a triangular mesh, and writes a corresponding MESH file for
input to MEDIT.

### Reference: {#reference align="center"}

1.  Pascal Frey,\
    MEDIT: An interactive mesh visualization software,\
    Technical Report RT-0253,\
    Institut National de Recherche en Informatique et en Automatique,\
    03 December 2001.

### Source Code: {#source-code align="center"}

-   [mesh\_io.cpp](mesh_io.cpp), the source code.
-   [mesh\_io.hpp](mesh_io.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [mesh\_io\_prb.cpp](mesh_io_prb.cpp), a sample calling program.
-   [mesh\_io\_prb\_output.txt](mesh_io_prb_output.txt), the output
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

*Last revised on 25 October 2010.*
