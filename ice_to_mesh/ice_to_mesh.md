ICE\_TO\_MESH\
Transfer ICE dataset from NECDF format to MESH format {#ice_to_mesh-transfer-ice-dataset-from-necdf-format-to-mesh-format align="center"}
=====================================================

------------------------------------------------------------------------

**ICE\_TO\_MESH** is a C++ program which reads a NETCDF file containing
an ICE dataset and rewrites the information as a MESH file.

### Usage: {#usage align="center"}

> **ice\_to\_mesh** *prefix*

where

-   *prefix* is the filename prefix,

reads *prefix.nc* and creates *prefix.mesh*.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**ICE\_TO\_MESH** is available in [a C
version](../../c_src/ice_to_mesh/ice_to_mesh.html) and [a C++
version](../../cpp_src/ice_to_mesh/ice_to_mesh.html) and [a FORTRAN77
version](../../f77_src/ice_to_mesh/ice_to_mesh.html) and [a FORTRAN90
version](../../f_src/ice_to_mesh/ice_to_mesh.html) and [a MATLAB
version](../../m_src/ice_to_mesh/ice_to_mesh.html).

### Related Programs: {#related-programs align="center"}

[FEM\_TO\_MESH](../../cpp_src/fem_to_mesh/fem_to_mesh.html), a C++
program which reads a pair of FEM files defining node coordinates and
elements, and creates a corresponding MESH file.

[ICE](../../data/ice/ice.html), a data directory which contains examples
of ICE files, which store icesheet grid datasets in the NETCDF format.

[ICE\_IO](../../cpp_src/ice_io/ice_io.html), a C++ library which reads
or writes ICE datasets, using the NETCDF format.

[MESH](../../data/mesh/mesh.html), a data directory which contains
examples of MESH files, which can be used to define the geometry of a
finite element mesh in 2D or 3D, using triangles, quadrilaterals,
tetrahedrons or hexahedrons.

[MESH\_IO](../../cpp_src/mesh_io/mesh_io.html), a C++ library which can
read or write MESH files, which can be used to define the geometry of a
finite element mesh in 2D or 3D, using triangles, quadrilaterals,
tetrahedrons or hexahedrons.

[MESH\_TO\_ICE](../../cpp_src/mesh_to_ice/mesh_to_ice.html), a C++
program which reads a MESH file containing an ICE dataset and rewrites
the information as a NETCDF file.

[TRIANGLE\_TO\_MESH](../../cpp_src/triangle_to_mesh/triangle_to_mesh.html),
a C++ program which reads the NODE and ELE files created by TRIANGLE to
describe a triangular mesh, and writes a corresponding MESH file for
input to MEDIT.

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

-   [ice\_to\_mesh.cpp](ice_to_mesh.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**HEXAHEXA\_2x2x2** subdivides the unit cube into a 2x2x2 mesh of 8
subcubes or "hexahedra", using 27 vertices, and 24 boundary
quadrilaterals.

-   [hexahexa\_2x2x2.nc](hexahexa_2x2x2.nc), the NETCDF file.
-   [hexahexa\_2x2x2.mesh](hexahexa_2x2x2.mesh), the MESH file created
    by the program.

**PART** is a large 3D object including 28,694 vertices, 14,890
triangles, 150,779 tetrahedrons, 50 corners, 1905 edges and 1905 ridges.

-   [part.nc](part.nc), the NETCDF file.
-   [part.mesh](part.mesh), the MESH file created by the program.

### List of Routines: {#list-of-routines align="center"}

-   **ICE\_TO\_MESH** reads ICE data from a NETCDF file and writes to a
    MESH file.
-   **DATA\_PRINT** prints the data of an ICE grid dataset.
-   **DATA\_READ** reads ICE data from a NETCDF file.
-   **MESH\_WRITE** writes mesh data to a MESH file.
-   **SIZE\_PRINT** prints the sizes of an ICE grid dataset.
-   **SIZE\_READ** reads ICE sizes from a NETCDF file.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 30 November 2010.*
