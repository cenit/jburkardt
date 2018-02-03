MPAS\_GRID\_DISPLAY\_OPENGL\
Display MPAS Grids {#mpas_grid_display_opengl-display-mpas-grids align="center"}
============================

------------------------------------------------------------------------

**MPAS\_GRID\_DISPLAY\_OPENGL**, C++ programs which read information
from an MPAS Grid file, stored in NETCDF format, and display the main
(mainly hexagonal) mesh or the dual triangulation, using OpenGL.

### Usage: {#usage align="center"}

> **grid\_cells** *filename***.nc**

where

-   *filename***.nc** is the name of the MPAS NETCDF grid file;

displays a plot of the polygonal faces of the primal mesh.

> **triangulation\_faces** *filename***.nc**

where

-   *filename***.nc** is the name of the MPAS NETCDF grid file;

displays a plot of the faces of the dual triangulation.

> **triangulation\_lines** *filename***.nc**

where

-   *filename***.nc** is the name of the MPAS NETCDF grid file;

displays a plot of the lines of the dual triangulation.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**MPAS\_GRID\_DISPLAY\_OPENGL** is available in [a C++
version](../../cpp_src/mpas_grid_display_opengl/mpas_grid_display_opengl.html).

### Related Programs: {#related-programs align="center"}

[FERN\_OPENGL](../../cpp_src/fern_opengl/fern_opengl.html), a C++
program which uses OpenGL to display the Barnsley fractal fern.

[MPAS\_DRAW](../../cpp_src/mpas_draw/mpas_draw.html), a C++ program
which reads an MPAS NETCDF file and allows the interactive user to
select grid and solution information to be displayed using OpenGL.

[MPAS\_GRID\_DISPLAY](../../m_src/mpas_grid_display/mpas_grid_display.html),
MATLAB programs which can read an MPAS NETCDF grid file and display the
primary polygonal mesh or the dual triangular mesh.

[NETCDF](../../data/netcdf/netcdf.html), a data directory which contains
examples of NETCDF files, a format for the interchange of scientific
data.

[NETCDF\_MPAS](../../data/netcdf_mpas/netcdf_mpas.html), a data
directory which contains examples of MPAS grid data stored as NETCDF
files.

[NETCDF\_MPAS](../../cpp_src/netcdf_mpas/netcdf_mpas.html), a C++
library which reads MPAS grid data stored as NETCDF files.

### Reference: {#reference align="center"}

1.  The MPAS home page, <http://mpas-dev.github.io>.
2.  Russ Rew, Glenn Davis, Steve Emmerson, Harvey Davies, Ed Hartne,\
    The NetCDF User's Guide,\
    Unidata Program Center, March 2009.
3.  Todd Ringler, John Thuburn, Joseph Klemp, William Skamarock,\
    A unified approach to energy conservation and potential vorticity
    dynamics for arbitrarily-structured C-grids,\
    Journal of Computational Physics,\
    Volume 229, Number 9, 1 May 2010, pages 3065-3090.

### Source Code: {#source-code align="center"}

**GRID\_CELLS** retrieves the information defining the polygonal grid
cells, and displays them.

-   [grid\_cells.cpp](grid_cells.cpp), displays the cells of the primal
    mesh.
-   [x1.642.grid\_cells.png](x1.642.grid_cells.png), a PNG snapshot of
    display from **tgrid\_cells** for the data file **x1.642.grid.nc**.
-   [x1.2562.grid\_cells.png](x1.2562.grid_cells.png), a PNG snapshot of
    display from **grid\_cells** for the data file **x1.2562.grid.nc**.

**TRIANGULATION\_FACES** retrieves the 3 cell centers around each
vertex, and draws the corresponding faces of the triangulation. The
display is a triangulated sphere surface.

-   [triangulation\_faces.cpp](triangulation_faces.cpp), displays the
    triangulation that is the dual of the main mesh.
-   [x1.642.triangulation\_faces.png](x1.642.triangulation_faces.png), a
    PNG snapshot of display from **triangulation\_faces** for the data
    file **x1.642.grid.nc**.
-   [x1.2562.triangulation\_faces.png](x1.2562.triangulation_faces.png),
    a PNG snapshot of display from **triangulation\_faces** for the data
    file **x1.2562.grid.nc**.

**TRIANGULATION\_LINES** retrieves the pairs of cell centers that are
neighbors, and draws lines to connect them. This actually creates the
lines of the triangulation. The display is a triangulated sphere, but
there are no areas filled in on the surface, so you can see through to
the other side.

-   [triangulation\_lines.cpp](triangulation_lines.cpp), displays the
    triangulation that is the dual of the main mesh.
-   [x1.642.triangulation\_lines.png](x1.642.triangulation_lines.png), a
    PNG snapshot of display from **triangulation\_lines** for the data
    file **x1.642.grid.nc**.
-   [x1.2562.triangulation\_lines.png](x1.2562.triangulation_lines.png),
    a PNG snapshot of display from **triangulation\_lines** for the data
    file **x1.2562.grid.nc**.

### Examples and Tests: {#examples-and-tests align="center"}

-   [x1.642.grid.nc](x1.642.grid.nc), an MPAS grid file for a mesh on
    the sphere, using 642 nodes, 1280 vertices, 1920 edges.
-   [x1.2562.grid.nc](x1.2562.grid.nc), an MPAS grid file for a mesh on
    the sphere, using 2562 nodes, 5120 vertices, 7680 edges.

You can go up one level to [the MATLAB source codes](../m_src.html).

------------------------------------------------------------------------

*Last revised on 02 January 2011.*
