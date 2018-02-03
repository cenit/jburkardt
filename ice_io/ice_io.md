ICE\_IO\
Reading and Writing ICE Datasets in NETCDF Files {#ice_io-reading-and-writing-ice-datasets-in-netcdf-files align="center"}
================================================

------------------------------------------------------------------------

**ICE\_IO** is a C++ library which can read or write an ICE dataset,
which defines a 3D grid, using the NETCDF file format.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**ICE\_IO** is available in [a C
version](../../c_src/ice_io/ice_io.md) and [a C++
version](../../master/ice_io/ice_io.md) and [a FORTRAN77
version](../../f77_src/ice_io/ice_io.md) and [a FORTRAN90
version](../../f_src/ice_io/ice_io.md) and [a MATLAB
version](../../m_src/ice_io/ice_io.md).

### Related Programs: {#related-programs align="center"}

[ICE](../../data/ice/ice.md), a data directory which contains examples
of ICE files, which store icesheet grid datasets in the NETCDF format.

[ICE\_TO\_MESH](../../master/ice_to_mesh/ice_to_mesh.md), a C++
program which reads a NETCDF file containing an ICE dataset and rewrites
the information as a MESH file.

[MESH](../../data/mesh/mesh.md), a data directory which contains
examples of MESH files, which can be used to define the geometry of a
finite element mesh in 2D or 3D, using triangles, quadrilaterals,
tetrahedrons or hexahedrons.

[MESH\_TO\_ICE](../../master/mesh_to_ice/mesh_to_ice.md), a C++
program which reads a MESH file containing an ICE dataset and rewrites
the information as a NETCDF file.

[NETCDF](../../m_src/netcdf/netcdf.md), MATLAB programs which read and
write NETCDF files.

[NETCDF\_MPAS](../../data/netcdf_mpas/netcdf_mpas.md), MATLAB programs
which read and write MPAS grid data stored as NETCDF files.

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

-   [ice\_io.cpp](ice_io.cpp), the source code.
-   [ice\_io.hpp](ice_io.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [ice\_io\_prb.cpp](ice_io_prb.cpp) a sample calling program.
-   [ice\_io\_prb\_output.txt](ice_io_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **CYL248\_DATA** defines the data for a 3D tetrahedral mesh.
-   **CYL248\_SIZE** defines the sizes for a 3D tetrahedral mesh.
-   **DATA\_PRINT** prints the data of an ICE grid dataset.
-   **DATA\_READ** reads ICE data from a NETCDF file.
-   **HEXAHEXA\_2x2x2\_DATA** defines the data for a 3D hexahedral mesh.
-   **HEXAHEXA\_2x2x2\_SIZE** defines the sizes for a 3D hexahedral
    mesh.
-   **I4VEC\_COPY** copies an I4VEC.
-   **ICE\_WRITE** writes 3D ICE sizes and data to a NETCDF file.
-   **R8VEC\_COPY** copies an R8VEC.
-   **SIZE\_PRINT** prints the sizes of an ICE grid dataset.
-   **SIZE\_READ** reads ICE sizes from a NETCDF file.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 30 November 2010.*
