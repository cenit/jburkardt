TRI\_SURFACE\_DISPLAY\_OPENGL\
Display a 3D Triangulated Surface in MATLAB {#tri_surface_display_opengl-display-a-3d-triangulated-surface-in-matlab align="center"}
===========================================

------------------------------------------------------------------------

**TRI\_SURFACE\_DISPLAY\_OPENGL** is a C++ program which gets the names
of the node and element files defining a 3D triangulated surface or
"TRI\_SURFACE", reads the information from the files, and displays the
surface on the screen.

The surface is presented in rotation about the X axis. By clicking the
mouse button, the axis of rotation will be advanced from X to Y to Z and
back to X.

### Usage: {#usage align="center"}

> **tri\_surface\_display** *prefix*

where *prefix* is the common filename prefix, so that:

-   *prefix***\_nodes.txt** contains the node coordinates;
-   *prefix***\_elements.txt** contains indices of nodes that form the
    elements;

reads the information and displays an image of the surface on the
screen.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TRI\_SURFACE\_DISPLAY\_OPENGL** is available in [a C++
version](../../cpp_src/tri_surface_display_opengl/tri_surface_display_opengl.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FERN\_OPENGL](../../cpp_src/fern_opengl/fern_opengl.html), a C++
program which uses OpenGL to display the Barnsley fractal fern.

[OPENGL](../../cpp_src/opengl/opengl.html), C++ programs which
illustrate the use of the OpenGL graphics library;

[POLYGONAL\_SURFACE\_DISPLAY](../../m_src/polygonal_surface_display/polygonal_surface_display.html),
a MATLAB program which displays a surface in 3D described as a set of
polygons.

[POLYGONAL\_SURFACE\_DISPLAY\_OPENGL](../../cpp_src/polygonal_surface_display_opengl/polygonal_surface_display_opengl.html),
a C++ program which displays a surface in 3D described as a set of
polygons, using OpenGL.

[SPHERE\_XYZ\_DISPLAY\_OPENGL](../../cpp_src/sphere_xyz_display_opengl/sphere_xyz_display_opengl.html),
a C++ program which reads XYZ information defining points in 3D, and
displays a unit sphere and the points, using OpenGL.

[TET\_MESH\_BOUNDARY](../../f_src/tet_mesh_boundary/tet_mesh_boundary.html),
a FORTRAN90 program which returns the nodes and faces of the boundary of
a tetrahedral mesh, which themselves form a 3D triangular mesh or
"TRI\_SURFACE".

[TET\_MESH\_DISPLAY\_OPENGL](../../cpp_src/tet_mesh_display_opengl/tet_mesh_display_opengl.html),
a C++ program which reads files defining a tet mesh and displays an
image using Open GL.

[TRI\_SURFACE](../../data/tri_surface/tri_surface.html), a data
directory which contains examples of TRI\_SURFACE files, a 3D surface
described by a collection of triangles.

[TRI\_SURFACE\_DISPLAY](../../m_src/tri_surface_display/tri_surface_display.html),
a MATLAB program which displays the 3D graphics information in a
TRI\_SURFACE file;

[TRIANGULATION\_DISPLAY\_OPENGL](../../cpp_src/triangulation_display_opengl/triangulation_display_opengl.html),
a C++ program which reads files defining a triangulation and displays an
image using Open GL.

[TRIANGULATION\_ORDER1\_DISPLAY](../../m_src/triangulation_order1_display/triangulation_order1_display.html),
a MATLAB program which reads files defining a piecewise constant
triangulation of data, and displays a corresponding 3D surface.

[XY\_DISPLAY\_OPENGL](../../cpp_src/xy_display_opengl/xy_display_opengl.html),
a C++ program which reads an XY file of 2D point coordinates, and
displays an image of those points using OpenGL.

[XYL\_DISPLAY\_OPENGL](../../cpp_src/xyl_display_opengl/xyl_display_opengl.html),
a C++ program which reads XYL information defining points and lines in
2D, and displays an image using OpenGL.

[XYZ\_DISPLAY\_OPENGL](../../cpp_src/xyz_display_opengl/xyz_display_opengl.html),
a C++ program which reads an XYZ file of 3D point coordinates, and
displays an image of those points using OpenGL.

### Reference: {#reference align="center"}

1.  Edward Angel,\
    Interactive Computer Graphics, a Top-Down Approach with OpenGL,\
    Addison-Wesley, 2000,\
    ISBN: 0-201-38597-X,\
    LC: T385.A514.

### Source Code: {#source-code align="center"}

-   [tri\_surface\_display\_opengl.cpp](tri_surface_display_opengl.cpp),
    the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**SPHERE** is a sphere, tiled with an 8 by 8 array of logically
triangular patches.

-   [sphere\_nodes.txt](sphere_nodes.txt), the node file;
-   [sphere\_elements.txt](sphere_elements.txt), the face file;
-   [sphere.png](sphere.png), a PNG image of the shape as displayed by
    **TRI\_SURFACE\_DISPLAY**.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for TRI\_SURFACE\_DISPLAY\_OPENGL.
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

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 06 December 2010.*
