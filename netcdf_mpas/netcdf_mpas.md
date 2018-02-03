NETCDF\_MPAS\
Read MPAS NETCDF Grid Data {#netcdf_mpas-read-mpas-netcdf-grid-data align="center"}
==========================

------------------------------------------------------------------------

**NETCDF\_MPAS** is a C library which reads an MPAS NETCDF grid file.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**NETCDF\_MPAS** is available in [a C++
version](../../master/netcdf_mpas/netcdf_mpas.md) and [a MATLAB
version](../../m_src/netcdf_mpas/netcdf_mpas.md).

### Related Programs: {#related-programs align="center"}

[CDL](../../data/cdl/cdl.md), a data directory which contains examples
of CDL files, a text version of NETCDF files created by the NCDUMP
program;

[GFD2](../../datasets/gfd2/gfd2.md), a dataset directory which
contains geophysical data, stored in NETCDF format.

[MPAS\_GRID\_DISPLAY](../../m_src/mpas_grid_display/mpas_grid_display.md),
MATLAB programs which can read an MPAS NETCDF grid file and display the
primary polygonal mesh or the dual triangular mesh.

[NETCDF](../../data/netcdf/netcdf.md), a data directory which contains
examples of NETCDF files, a format for the interchange of scientific
data.

[NETCDF\_MPAS](../../data/netcdf_mpas/netcdf_mpas.md), a data
directory which contains examples of MPAS grid data stored as NETCDF
files.

### Reference: {#reference align="center"}

1.  The MPAS home page, <http://mpas-dev.github.io>.
2.  Russ Rew, Glenn Davis, Steve Emmerson, Harvey Davies, Ed Hartne,\
    The NetCDF User's Guide,\
    Unidata Program Center, March 2009,\
    [netcdf.pdf](../../pdf/netcdf.pdf),
3.  Todd Ringler, John Thuburn, Joseph Klemp, William Skamarock,\
    A unified approach to energy conservation and potential vorticity
    dynamics for arbitrarily-structured C-grids,\
    Journal of Computational Physics,\
    Volume 229, Number 9, 1 May 2010, pages 3065-3090.

### Source Code: {#source-code align="center"}

-   [netcdf\_mpas.cpp](netcdf_mpas.cpp), the source code.
-   [netcdf\_mpas.hpp](netcdf_mpas.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [netcdf\_mpas\_prb.cpp](netcdf_mpas_prb.cpp), a sample calling
    program.
-   [netcdf\_mpas\_prb\_output.txt](netcdf_mpas_prb_output.txt), the
    output file.

**X1.642.GRID** is a dataset of 642 cells used by the example.

-   [x1.642.grid.nc](x1.642.grid.nc), an MPAS grid file for a mesh on
    the sphere, using 642 nodes, 1280 vertices, 1920 edges.
-   [x1.642.grid.header](x1.642.grid.header), a text printout of the
    header information in the file, created by the command "ncdump -h
    x1.642.grid.nc &gt; x1.642.grid.header"

### List of Routines: {#list-of-routines align="center"}

-   **NETCDF\_MPAS\_READ\_CELLS** gets the cell center coordinates.
-   **NETCDF\_MPAS\_READ\_CELLSONEDGE** gets the cellsOnEdge
    information.
-   **NETCDF\_MPAS\_READ\_CELLSONVERTEX** gets the cellsOnVertex
    information.
-   **NETCDF\_MPAS\_READ\_MAXEDGES** gets MAXEDGES.
-   **NETCDF\_MPAS\_READ\_NCELLS** gets the number of cells.
-   **NETCDF\_MPAS\_READ\_NEDGES** gets the number of edges.
-   **NETCDF\_MPAS\_READ\_NEDGESONCELLS** gets nedgesOnCells.
-   **NETCDF\_MPAS\_READ\_NVERTICES** gets the number of vertices.
-   **NETCDF\_MPAS\_READ\_VERTICESONCELLS** gets verticesOnCells.
-   **NETCDF\_MPAS\_READ\_CELLS** gets the cell center coordinates.
-   **NETCDF\_MPAS\_REPORT** reads an MPAS NETCDF grid file and reports.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 01 January 2010.*
