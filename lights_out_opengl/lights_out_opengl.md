LIGHTS\_OUT\_OPENGL\
OpenGL version of "Lights Out"

------------------------------------------------------------------------

**LIGHTS\_OUT\_OPENGL** is a C++ program which sets up the "Lights Out"
game and allows a user to try to solve it.

The Lights Out game is played on a rectangular board of squares, each
representing a light that may be on or off. Clicking the mouse on a
light switches it from on to off and vice versa. However, when you
switch a light, you also switch the lights to the immediate left, right,
above and below. (There is no "wrap around" however, in this basic
version of the game.)

You start the game by specifying the width and height of the board to be
used, and the number of moves the program should make in setting up the
inital board. Specifying 10 moves, for instance, means that the program,
starting from a board with all lights off, will randomly switch a light
and its neighbors 10 times.

### Usage: {#usage align="center"}

> **lights\_out\_opengl** *width* *height* *moves*

where

-   *width*, the number of squares in the horizontal direction (try 10);
-   *height* the number of squares in the vertical direction (try 10);
-   *moves* the number of randomizing moves made to initialize the board
    (try 5 first!);

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**LIGHTS\_OUT\_OPENGL** is available in [a C
version](../../c_src/lights_out_opengl/lights_out_opengl.md) and [a
C++ version](../../master/lights_out_opengl/lights_out_opengl.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CAUSTIC\_OPENGL](../../master/caustic_opengl/caustic_opengl.md), a
C++ program which computes a caustic curve and displays it using OpenGL.

[FERN\_OPENGL](../../master/fern_opengl/fern_opengl.md), a C++
program which uses OpenGL to display the Barnsley fractal fern.

[FLOOD\_OPENGL](../../c_src/flood_opengl/flood_opengl.md), a C program
which uses OpenGL to allow the user to select regions of a 2D image and
flood them with color, by Art Wetzel.

[LIFE\_OPENGL](../../c_src/life_opengl/life_opengl.md), a C program
which uses OpenGL to display the evolution of John Conway's "Game of
Life", by Simon Green.

[LISSAJOUS\_OPENGL](../../master/lissajous_opengl/lissajous_opengl.md),
a C++ program which computes a Lissajous figure and displays it using
OpenGL.

[OPENGL](../../master/opengl/opengl.md), C++ programs which
illustrate the use of the OpenGL graphics library;

[POLYGONAL\_SURFACE\_DISPLAY\_OPENGL](../../master/polygonal_surface_display_opengl/polygonal_surface_display_opengl.md),
a C++ program which displays a surface in 3D described as a set of
polygons, using OpenGL.

[ROTATING\_CUBE\_DISPLAY\_OPENGL](../../master/rotating_cube_display_opengl/rotating_cube_display_opengl.md),
a C++ program which displays a rotating color cube in 3D, using OpenGL;

[SPHERE\_XYZ\_DISPLAY\_OPENGL](../../master/sphere_xyz_display_opengl/sphere_xyz_display_opengl.md),
a C++ program which reads XYZ information defining points in 3D, and
displays a unit sphere and the points, using OpenGL.

[TRIANGULATION\_DISPLAY\_OPENGL](../../master/triangulation_display_opengl/triangulation_display_opengl.md),
a C++ program which reads files defining a triangulation and displays an
image using Open GL.

[XYF\_DISPLAY\_OPENGL](../../master/xyf_display_opengl/xyf_display_opengl.md),
a C++ program which reads XYF information defining points and faces in
2D, and displays an image using OpenGL.

[XYZ\_DISPLAY\_OPENGL](../../master/xyz_display_opengl/xyz_display_opengl.md),
a C++ program which reads an XYZ file of 3D point coordinates, and
displays an image of those points using OpenGL.

[XYZF\_DISPLAY\_OPENGL](../../master/xyzf_display_opengl/xyzf_display_opengl.md),
a C++ program which reads XYZF information defining points and faces in
3D, and displays an image in a MATLAB graphics window.

[XYZL\_DISPLAY\_OPENGL](../../master/xyzl_display_opengl/xyzl_display_opengl.md),
a C++ program which reads XYZL information defining points and lines in
3D, and displays an image in a MATLAB graphics window.

### Reference: {#reference align="center"}

1.  Marlow Anderson, Todd Feil,\
    Turning Lights Out With Linear Algebra,\
    Mathematics Magazine,\
    Volume 71, Number 4, October 1998, pages 300-303.
2.  Edward Angel,\
    Interactive Computer Graphics, a Top-Down Approach with OpenGL,\
    Addison-Wesley, 2000,\
    ISBN: 0-201-38597-X,\
    LC: T385.A514.
3.  Oscar Martin-Sanchez,\
    Two Analyses of Lights Out,\
    Mathematics Magazine,\
    Volume 74, Number 4, October 2001, pages 295-304.

### Source Code: {#source-code align="center"}

-   [lights\_out\_opengl.cpp](lights_out_opengl.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [display\_6\_9\_20.png](display_6_9_20.png), a PNG image of the
    initial board you will see if you type

    > **lights\_out\_opengl 6 9 20**

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for LIGHTS\_OUT\_OPENGL.
-   **BOX\_DRAW** draws one box of the Lights Out array.
-   **DISPLAY** generates the graphics output.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_UNIFORM** returns a scaled pseudorandom I4.
-   **MY\_INIT** initializes OpenGL state variables dealing with viewing
    and attributes.
-   **MY\_MOUSE** reacts to mouse events.
-   **R4\_ABS** returns the absolute value of an R4.
-   **R4\_NINT** returns the nearest integer to an R4.
-   **STATE\_RANDOMIZE** randomizes the state.
-   **STATE\_UPDATE** updates the state after button (I,J) has been
    pressed.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 17 January 2009.*
