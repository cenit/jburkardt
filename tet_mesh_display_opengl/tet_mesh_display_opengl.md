TET\_MESH\_DISPLAY\_OPENGL\
Display a Tet Mesh Using OpenGL {#tet_mesh_display_opengl-display-a-tet-mesh-using-opengl align="center"}
===============================

------------------------------------------------------------------------

**TET\_MESH\_DISPLAY\_OPENGL** is a C++ program which reads the name of
two data files defining a tetrahedral mesh ("tet mesh"), reads the data,
and displays the tet mesh using OPENGL.

The files defining the tet mesh consist of one file containing the
coordinates of the points, and a second file that lists the indices of
the nodes making up each tetrahedron. Either 4-node or 10-node
tetrahedrons may be used.

### Usage: {#usage align="center"}

> **tet\_mesh\_display\_opengl** *prefix*

where *prefix* is the common file prefix:

-   *prefix***\_nodes.txt**, the node coordinates;
-   *prefix***\_elements.txt**, the element definitions.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TET\_MESH\_DISPLAY\_OPENGL** is available in [a C++
version](../../cpp_src/tet_mesh_display_opengl/tet_mesh_display_opengl.html).

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

[ROTATING\_CUBE\_DISPLAY\_OPENGL](../../cpp_src/rotating_cube_display_opengl/rotating_cube_display_opengl.html),
a C++ program which displays a rotating color cube in 3D, using OpenGL;

[SPHERE\_XYZ\_DISPLAY\_OPENGL](../../cpp_src/sphere_xyz_display_opengl/sphere_xyz_display_opengl.html),
a C++ program which reads XYZ information defining points in 3D, and
displays a unit sphere and the points, using OpenGL.

[TET\_MESH\_DISPLAY](../../m_src/tet_mesh_display/tet_mesh_display.html),
a MATLAB program which reads a tet mesh and displays the nodes and edges
using the MATLAB graphical window.

[TET\_MESH\_ORDER4](../../data/tet_mesh_order4/tet_mesh_order4.html), a
data directory which contains a description and examples of a tet mesh
using order 4 elements.

[TET\_MESH\_ORDER10](../../data/tet_mesh_order10/tet_mesh_order10.html),
a directory which contains a description and examples of a tet mesh
using order 10 elements.

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
    Interactive Computer Graphics,\
    A Top-Down Approach with OpenGL,\
    Addison-Wesley, 2000,\
    T385.A514.
2.  Renate Kempf, Chris Frazier, editors,\
    OpenGL Reference Manual,\
    Addison-Wesley, 1997,\
    T385.O642.
3.  Mason Woo, Jackie Neider, Tom Davis,\
    OpenGL Programming Guide,\
    Addison-Wesley, 1997,\
    T385.N435.
4.  Richard Wright, Michael Sweet,\
    OpenGL Superbible,\
    Waite Group Press, 1996,\
    T385.W73.
5.  <http://www.opengl.org/>\
    The official OpenGL site.

### Source Code: {#source-code align="center"}

-   [tet\_mesh\_display\_opengl.cpp](tet_mesh_display_opengl.cpp), the
    source code.

### Examples and Tests: {#examples-and-tests align="center"}

**CUBE\_ORDER4** is a cube-shaped region, which may be meshed by order-4
tetrahedrons.

-   [cube\_order4\_output.txt](cube_order4_output.txt), the printed
    output in response to the command:

                    tet_mesh_display_opengl cube_order4

-   [cube\_order4\_nodes.txt](cube_order4_nodes.txt), the node file.
-   [cube\_order4\_elements.txt](cube_order4_elements.txt), the
    tetrahedron file.
-   [cube\_order4.png](cube_order4.png), a PNG image of the mesh.

**TWENTY\_ORDER4** is a region formed by 20 random nodes.

-   [twenty\_order4\_output.txt](twenty_order4_output.txt), the printed
    output in response to the command:

                    tet_mesh_display_opengl twenty_order4

-   [twenty\_order4\_nodes.txt](twenty_order4_nodes.txt), the node file.
-   [twenty\_order4\_elements.txt](twenty_order4_elements.txt), the
    tetrahedron file.
-   [twenty\_order4.png](twenty_order4.png), a
    [PNG](../../data/png/png.html) image of the mesh.

**CUBE\_ORDER10** is a cube-shaped region, which may be meshed by
order-10 tetrahedrons.

-   [cube\_order10\_output.txt](cube_order10_output.txt), the printed
    output in response to the command:

                    tet_mesh_display_opengl cube_order10

-   [cube\_order10\_nodes.txt](cube_order10_nodes.txt), the node file.
-   [cube\_order10\_elements.txt](cube_order10_elements.txt), the
    tetrahedron file.
-   [cube\_order10.png](cube_order10.png), a
    [PNG](../../data/png/png.html) image of the mesh.

**ONEONEEIGHT\_ORDER10** is a region formed by the refinement of 20
random nodes to 118 nodes (by adding the midside nodes.)

-   [oneoneeight\_order10\_output.txt](oneoneeight_order10_output.txt),
    the printed output in response to the command:

                    tet_mesh_display_opengl oneoneeight_order10

-   [oneoneeight\_order10\_nodes.txt](oneoneeight_order10_nodes.txt),
    the node file.
-   [oneoneeight\_order10\_elements.txt](oneoneeight_order10_elements.txt),
    the tetrahedron file.
-   [oneoneeight\_order10.png](oneoneeight_order10.png), a
    [PNG](../../data/png/png.html) image of the mesh.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for TET\_MESH\_DISPLAY\_OPENGL.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **DISPLAY** generates the graphics output.
-   **FILE\_COLUMN\_COUNT** counts the columns in the first line of a
    file.
-   **FILE\_EXIST** reports whether a file exists.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the smaller of two I4's.
-   **I4MAT\_DATA\_READ** reads data from an I4MAT file.
-   **I4MAT\_HEADER\_READ** reads the header from an I4MAT file.
-   **MYINIT** initializes OpenGL state variables.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R83VEC\_MAX** returns the maximum value in an R83VEC.
-   **R83VEC\_MIN** returns the minimum value in an R83VEC.
-   **R8MAT\_DATA\_READ** reads the data from an R8MAT file.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_I4VEC** reads an I4VEC from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 13 August 2009.*
