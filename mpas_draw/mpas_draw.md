MPAS\_DRAW\
Display MPAS Grids and Solution Data {#mpas_draw-display-mpas-grids-and-solution-data align="center"}
====================================

------------------------------------------------------------------------

**MPAS\_DRAW** is a C++ program which reads information from a NETCDF
file written by the MPAS program, containing the grid information and
computed solution values, some of which may be time dependent, or
organized in vertical atmospheric levels, and then displays graphic
images of data using OpenGL.

The program is interactive, and allows the user to select the underlying
mesh structure (cells, dual triangles, or edges) and the associated
physical quantities to view.

A set of keyboard commands allow the user to rotate or translate the
view, to move through time steps or vertical levels, and so on.

### Usage: {#usage align="center"}

> **mpas\_draw** *filename***.nc**

where

-   *filename***.nc** is the name of the MPAS NETCDF grid file;

### Keyboard Control: {#keyboard-control align="center"}

-   *Arrow keys*: rotate the image, to allow for viewing at different
    angles.
-   **s, d, f, e**: *(translation)* **s**/**f** keys move left and
    right; **d**/**e** move up and down.
-   **, .**: *(translation)* The **,** and **.** keys control the depth
    of the image. That is, they appear to move the image toward or away
    from the viewer.
-   **c**: *(connectivity)* cycles between the kind of cells that are
    drawn:
    -   the Delaunay triangles;
    -   the Voronoi cells;
    -   the edges, drawn as rectangles made up of two cell centers, and
        two cell vertices.

    The kind of cells chosen also determines the kind of variables that
    can be plotted.
-   **w**: *(wireframe)* toggles the wireframe (cell boundaries) on and
    off.
-   **r**: *(reset)* resets the plot to the default parameters (for
    color, timestep, vertical level, position, and rotation).
-   **v**: *(variables)* lists available variables that can be chosen to
    color the current mesh with. After pressing **v**, the variables are
    listed in the terminal. The variable id (given as a number in the
    leftmost column) can be entered to change the color of the current
    plot.
-   **l**: *(level)* cycles through available vertical levels.
-   **t**: *(time)* cycles through available time steps.
-   **ESC**: *(terminate)* closes the program.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**MPAS\_DRAW** is available in [a C++
version](../../master/mpas_draw/mpas_draw.md).

### Related Programs: {#related-programs align="center"}

[MPAS\_GRID\_DISPLAY](../../m_src/mpas_grid_display/mpas_grid_display.md),
MATLAB programs which can read an MPAS NETCDF grid file and display the
primary polygonal mesh or the dual triangular mesh.

[MPAS\_GRID\_DISPLAY\_OPENGL](../../master/mpas_grid_display_opengl/mpas_grid_display_opengl.md),
C++ programs which can read an MPAS NETCDF grid file and display the
primary polygonal mesh or the dual triangular mesh, using OpenGL.

[NETCDF](../../data/netcdf/netcdf.md), a data directory which contains
examples of NETCDF files, a format for the interchange of scientific
data.

[NETCDF\_MPAS](../../data/netcdf_mpas/netcdf_mpas.md), a data
directory which contains examples of MPAS grid data stored as NETCDF
files.

[NETCDF\_MPAS](../../master/netcdf_mpas/netcdf_mpas.md), a C++
library which reads MPAS grid data stored as NETCDF files.

### Author: {#author align="center"}

Doug Jacobsen, John Burkardt, Geoff Womeldorff.

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

-   [mpas\_draw.cpp](mpas_draw.cpp), the main source code.
-   [netcdf\_utils.cpp](netcdf_utils.cpp), functions which retrieve data
    from the NETCDF file.
-   [vec\_utils.cpp](vec_utils.cpp), some lower-level utilities.
-   [constants.hpp](constants.hpp), an include file that defines certain
    constants.
-   [netcdf\_utils.hpp](netcdf_utils.hpp), procedure declarations for
    netcdf\_utils.cpp
-   [vec\_utils.hpp](vec_utils.hpp), procedure declarations for
    vec\_utils.cpp
-   [Makefile](Makefile), a makefile for the program.

### Examples and Tests: {#examples-and-tests align="center"}

-   [channel.nc](../../data/netcdf_mpas/channel.nc), an MPAS grid file
    for a mesh restricted to a channel on the sphere, between a pair of
    latitude lines, using 2660 cells, 5545 vertices, 8205 edges.
-   [greenland\_5km.nc](../../data/greenland_5km.nc), an MPAS grid file
    for a 301 x 561 mesh of Greenland.
-   [x1.642.grid.nc](../../data/netcdf_mpas/x1.642.grid.nc), an MPAS
    grid file for a mesh on the sphere, using 642 nodes, 1280 vertices,
    1920 edges.
-   [x1.2562.grid.nc](../../data/netcdf_mpas/x1.2562.grid.nc), an MPAS
    grid file for a mesh on the sphere, using 2562 nodes, 5120 vertices,
    7680 edges.
-   [x16.2562.grid.nc](../../data/netcdf_mpas/x16.2562.grid.nc), an MPAS
    grid file for a mesh on the sphere, using 2562 nodes, 5120 vertices,
    7680 edges. A variable mesh density was used.

You can go up one level to [the MATLAB source codes](../m_src.md).

------------------------------------------------------------------------

*Last revised on 18 January 2011.*
