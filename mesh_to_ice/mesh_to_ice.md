MESH\_TO\_ICE\
Transfer ICE dataset from MESH format to NETCDF format {#mesh_to_ice-transfer-ice-dataset-from-mesh-format-to-netcdf-format align="center"}
======================================================

------------------------------------------------------------------------

**MESH\_TO\_ICE** is a C++ program which reads a MESH file containing an
ICE dataset and rewrites the information as a NETCDF file.

### Usage: {#usage align="center"}

> **mesh\_to\_ice** *prefix*

where

-   *prefix* is the filename prefix,

reads *prefix.mesh* and creates *prefix.nc*.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**MESH\_TO\_ICE** is available in [a C
version](../../c_src/mesh_to_ice/mesh_to_ice.md) and [a C++
version](../../master/mesh_to_ice/mesh_to_ice.md) and [a FORTRAN77
version](../../f77_src/mesh_to_ice/mesh_to_ice.md) and [a FORTRAN90
version](../../f_src/mesh_to_ice/mesh_to_ice.md) and [a MATLAB
version.](../../m_src/mesh_to_ice/mesh_to_ice.md)

### Related Programs: {#related-programs align="center"}

[ICE\_IO](../../master/ice_io/ice_io.md), a C++ library which reads
or writes ICE datasets, using the NETCDF format.

[ICE\_TO\_MESH](../../master/ice_to_mesh/ice_to_mesh.md), a C++
program which reads a NETCDF file containing an ICE dataset and rewrites
the information as a MESH file.

[MESH](../../data/mesh/mesh.md), a data directory which contains
examples of MESH files, which can be used to define the geometry of a
finite element mesh in 2D or 3D, using triangles, quadrilaterals,
tetrahedrons or hexahedrons.

[MESH\_IO](../../master/mesh_io/mesh_io.md), a C++ library which can
read or write MESH files, which can be used to define the geometry of a
finite element mesh in 2D or 3D, using triangles, quadrilaterals,
tetrahedrons or hexahedrons.

### Reference: {#reference align="center"}

1.  Pascal Frey,\
    MEDIT: An interactive mesh visualization software,\
    Technical Report RT-0253,\
    Institut National de Recherche en Informatique et en Automatique,\
    03 December 2001.
2.  Russ Rew, Glenn Davis, Steve Emmerson, Harvey Davies, Ed Hartne,\
    The NetCDF User's Guide,\
    Unidata Program Center, March 2009.
3.  Russ Rew,\
    The NetCDF C++ Interface Guide,\
    Unidata Program Center, August 2008.

### Source Code: {#source-code align="center"}

-   [mesh\_to\_ice.cpp](mesh_to_ice.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**HEXAHEXA\_2x2x2** subdivides the unit cube into a 2x2x2 mesh of 8
subcubes or "hexahedra", using 27 vertices, and 24 boundary
quadrilaterals.

-   [hexahexa\_2x2x2.mesh](hexahexa_2x2x2.mesh), the MESH file.
-   [hexahexa\_2x2x2.nc](hexahexa_2x2x2.nc), the NETCDF file created by
    the program.

**PART** is a large 3D object including 28,694 vertices, 14,890
triangles, 150,779 tetrahedrons, 50 corners, 1905 edges and 1905 ridges.

-   [part.mesh](part.mesh), the MESH file.
-   [part.nc](part.nc), the NETCDF file created by the program.

### List of Routines: {#list-of-routines align="center"}

-   **MESH\_TO\_ICE** reads "ICE" data from a MESH file and writes it to
    a NETCDF file.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is TRUE (1) if two characters are equal, disregarding
    case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **ICE\_WRITE** writes 3D ICE sizes and data to a NETCDF file.
-   **I4VEC\_ZERO** zeroes an I4VEC.
-   **MESH\_DATA\_PRINT** prints the data of a MESH dataset.
-   **MESH\_DATA\_READ** reads data from a MESH file.
-   **MESH\_SIZE\_PRINT** prints the sizes of a MESH dataset.
-   **MESH\_SIZE\_READ** reads sizes from a MESH file.
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

*Last revised on 30 November 2010.*
