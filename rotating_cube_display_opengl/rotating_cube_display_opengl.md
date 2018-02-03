ROTATING\_CUBE\_DISPLAY\_OPENGL\
Animation with OpenGL {#rotating_cube_display_opengl-animation-with-opengl align="center"}
================================

------------------------------------------------------------------------

**ROTATING\_CUBE\_DISPLAY\_OPENGL** is a C++ program which displays a
cube with colored corners that slowly rotates. By clicking the left,
middle, or right mouse buttons, the user can change the axis of
rotation.

### Usage: {#usage align="center"}

> **rotating\_cube\_display\_opengl**

displays the rotating cube. Successive mouse clicks alternate the axis
of rotation from the X, to the Y, to the Z axis and back again.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**ROTATING\_CUBE\_DISPLAY\_OPENGL** is available in [a C++
version](../../cpp_src/rotating_cube_display_opengl/rotating_cube_display_opengl.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CAUSTIC\_OPENGL](../../cpp_src/caustic_opengl/caustic_opengl.html), a
C++ program which computes a caustic curve and displays it using OpenGL.

[FERN\_OPENGL](../../cpp_src/fern_opengl/fern_opengl.html), a C++
program which uses OpenGL to display the Barnsley fractal fern.

[FLOOD\_OPENGL](../../c_src/flood_opengl/flood_opengl.html), a C program
which allows a user to select a region and flood it with color, using
OpenGL, by Art Wetzel.

[LIFE\_OPENGL](../../c_src/life_opengl/life_opengl.html), a C program
which simulates a version of John Conway's "Game of Life", displaying
the results using OpenGL.

[LIGHTS\_OUT\_OPENGL](../../cpp_src/lights_out_opengl/lights_out_opengl.html),
a C++ program which sets up a "Lights Out" game and allows the user to
solve it, using the OpenGL graphics window.

[LISSAJOUS\_OPENGL](../../cpp_src/lissajous_opengl/lissajous_opengl.html),
a C++ program which computes a Lissajous figure and displays it using
OpenGL.

[OPENGL](../../cpp_src/opengl/opengl.html), C++ programs which
illustrate the use of the OpenGL graphics library;

[POLYGONAL\_SURFACE\_DISPLAY\_OPENGL](../../cpp_src/polygonal_surface_display_opengl/polygonal_surface_display_opengl.html),
a C++ program which displays a surface in 3D described as a set of
polygons, using OpenGL.

[SPHERE\_XYZ\_DISPLAY\_OPENGL](../../cpp_src/sphere_xyz_display_opengl/sphere_xyz_display_opengl.html),
a C++ program which reads XYZ information defining points in 3D, and
displays a unit sphere and the points, using OpenGL.

[TET\_MESH\_DISPLAY\_OPENGL](../../cpp_src/tet_mesh_display_opengl/tet_mesh_display_opengl.html),
a C++ program which reads files defining a tet mesh and displays an
image using Open GL.

[TRIANGULATION\_DISPLAY\_OPENGL](../../cpp_src/triangulation_display_opengl/triangulation_display_opengl.html),
a C++ program which reads files defining a triangulation and displays an
image using Open GL.

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

-   [rotating\_cube\_display\_opengl.cpp](rotating_cube_display_opengl.cpp),
    the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [rotating\_cube.png](rotating_cube.png), a PNG file containing a
    snapshot of the rotating cube.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for ROTATING\_CUBE\_DISPLAY\_OPENGL.
-   **COLORCUBE** defines the 6 faces of the color cube object.
-   **DISPLAY** generates the graphics output.
-   **MOUSE** determines the response to mouse input.
-   **MYRESHAPE** determines the window mapping.
-   **POLYGON** defines the colors, vertices and normals for a
    quadrilateral.
-   **SPINCUBE** adjusts the angle of rotation and redisplays the
    picture.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 15 December 2008.*
