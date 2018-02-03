POLYGONAL\_SURFACE\_DISPLAY\_OPENGL\
Display a Polygonal Surface using OpenGL {#polygonal_surface_display_opengl-display-a-polygonal-surface-using-opengl align="center"}
========================================

------------------------------------------------------------------------

**POLYGONAL\_SURFACE\_DISPLAY\_OPENGL** is a C++ program which gets the
names of the node and element files defining a polygonal surface, reads
the information from the files, and displays the surface on the screen
using OpenGL.

The surface is presented in rotation about the X axis. By clicking the
mouse button, the axis of rotation will be advanced from X to Y to Z and
back to X.

### Usage: {#usage align="center"}

> **polygonal\_surface\_display** *prefix*

where *prefix* is the common filename prefix, so that:

-   *prefix***\_nodes.txt** contains the node coordinates;
-   *prefix***\_elements.txt** contains indices of nodes that form the
    elements;

reads the information and displays an image of the polygonal surface on
the screen.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**POLYGONAL\_SURFACE\_DISPLAY\_OPENGL** is available in [a C++
version](../../master/polygonal_surface_display_opengl/polygonal_surface_display_opengl.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BEZIER\_SURFACE\_DISPLAY](../../m_src/bezier_surface_display/bezier_surface_display.md),
a MATLAB program which reads two files defining a Bezier surface and
displays it.

[CAUSTIC\_OPENGL](../../master/caustic_opengl/caustic_opengl.md), a
C++ program which computes a caustic curve and displays it using OpenGL.

[FERN\_OPENGL](../../master/fern_opengl/fern_opengl.md), a C++
program which uses OpenGL to display the Barnsley fractal fern.

[FLOOD\_OPENGL](../../c_src/flood_opengl/flood_opengl.md), a C program
which allows a user to select a region and flood it with color, using
OpenGL, by Art Wetzel.

[LIFE\_OPENGL](../../c_src/life_opengl/life_opengl.md), a C program
which simulates a version of John Conway's "Game of Life", displaying
the results using OpenGL.

[LIGHTS\_OUT\_OPENGL](../../master/lights_out_opengl/lights_out_opengl.md),
a C++ program which sets up a "Lights Out" game and allows the user to
solve it, using the OpenGL graphics window.

[LISSAJOUS\_OPENGL](../../master/lissajous_opengl/lissajous_opengl.md),
a C++ program which computes a Lissajous figure and displays it using
OpenGL.

[OPENGL](../../master/opengl/opengl.md), C++ programs which
illustrate the use of the OpenGL graphics library;

[OBJ\_DISPLAY](../../m_src/obj_display/obj_display.md), a MATLAB
program which reads an OBJ file defining a 3D object and displays it
within MATLAB.

[POLYGONAL\_SURFACE](../../data/polygonal_surface/polygonal_surface.md),
a data directory which contains examples of polygonal surface files.

[POLYGONAL\_SURFACE\_DISPLAY](../../m_src/polygonal_surface_display/polygonal_surface_display.md),
a MATLAB program which displays a surface in 3D described as a set of
polygons.

[ROTATING\_CUBE\_DISPLAY\_OPENGL](../../master/rotating_cube_display_opengl/rotating_cube_display_opengl.md),
a C++ program which displays a rotating color cube in 3D, using OpenGL;

[SPHERE\_XYZ\_DISPLAY\_OPENGL](../../master/sphere_xyz_display_opengl/sphere_xyz_display_opengl.md),
a C++ program which reads XYZ information defining points in 3D, and
displays a unit sphere and the points, using OpenGL.

[STLA\_DISPLAY](../../m_src/stla_display/stla_display.md), a MATLAB
program which reads an ASCII STL file and displays it.

[TET\_MESH\_DISPLAY](../../m_src/tet_mesh_display/tet_mesh_display.md),
a MATLAB program which reads files defining a tet mesh and displays an
image within MATLAB.

[TET\_MESH\_DISPLAY\_OPENGL](../../master/tet_mesh_display_opengl/tet_mesh_display_opengl.md),
a C++ program which reads files defining a tet mesh and displays an
image using Open GL.

[TRI\_SURFACE\_DISPLAY\_OPENGL](../../master/tri_surface_display_opengl/tri_surface_display_opengl.md),
a C++ program which displays the 3D graphics information in a
TRI\_SURFACE file using OpenGL.

[TRIANGULATION\_DISPLAY\_OPENGL](../../master/triangulation_display_opengl/triangulation_display_opengl.md),
a C++ program which reads files defining a triangulation and displays an
image using Open GL.

[TRIANGULATION\_ORDER1\_DISPLAY](../../m_src/triangulation_order1_display/triangulation_order1_display.md),
a MATLAB program which reads files defining a piecewise constant
triangulation of data, and displays a corresponding 3D surface.

[XY\_DISPLAY\_OPENGL](../../master/xy_display_opengl/xy_display_opengl.md),
a C++ program which reads an XY file of 2D point coordinates, and
displays an image of those points using OpenGL.

[XYL\_DISPLAY\_OPENGL](../../master/xyl_display_opengl/xyl_display_opengl.md),
a C++ program which reads XYL information defining points and lines in
2D, and displays an image using OpenGL.

[XYZ\_DISPLAY\_OPENGL](../../master/xyz_display_opengl/xyz_display_opengl.md),
a C++ program which reads an XYZ file of 3D point coordinates, and
displays an image of those points using OpenGL.

### Reference: {#reference align="center"}

1.  Edward Angel,\
    Interactive Computer Graphics, a Top-Down Approach with OpenGL,\
    Addison-Wesley, 2000,\
    ISBN: 0-201-38597-X,\
    LC: T385.A514.

### Source Code: {#source-code align="center"}

-   [polygonal\_surface\_display\_opengl.cpp](polygonal_surface_display_opengl.cpp),
    the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**SPHERE\_T3** is a sphere, tiled with an 8 by 8 array of logically
triangular patches.

-   [sphere\_t3\_nodes.txt](sphere_t3_nodes.txt), the node file;
-   [sphere\_t3\_elements.txt](sphere_t3_elements.txt), the face file;
-   [sphere\_t3.png](sphere_t3.png), a PNG image of the shape as
    displayed by **POLYGONAL\_SURFACE\_DISPLAY**.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for
    POLYGONAL\_SURFACE\_DISPLAY\_OPENGL.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **DISPLAY** generates the graphics output.
-   **FILE\_COLUMN\_COUNT** counts the columns in the first line of a
    file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the smaller of two I4's.
-   **I4MAT\_DATA\_READ** reads data from an I4MAT file.
-   **I4MAT\_HEADER\_READ** reads the header from an I4MAT file.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an I4MAT,
    transposed.
-   **MESH\_BASE\_ZERO** ensures that the element definition is
    zero-based.
-   **MOUSE** determines the response to mouse input.
-   **MYINIT** initializes OpenGL state variables.
-   **MYRESHAPE** determines the window mapping.
-   **NODE\_NORMAL\_SET** computes node normal vectors.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R83VEC\_MAX** returns the maximum value in an R83VEC.
-   **R83VEC\_MIN** returns the minimum value in an R83VEC.
-   **R8MAT\_DATA\_READ** reads the data from an R8MAT file.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_I4VEC** reads an I4VEC from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **SPINSURFACE** adjusts the angle of rotation and redisplays the
    picture.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 05 December 2010.*
