LIFE\_OPENGL\
OpenGL version of "The Game of Life"

------------------------------------------------------------------------

**LIFE\_OPENGL** is a C++ program which sets up "The Game of Life" and
allows a user to watch as it evolves.

The game begins with the user specifying the number of rows and columns,
as well as the wrap around option (1 = wrap around, 0 = no.) These
values can be command line arguments.

A grid of gray squares is presented, and the user can set any of the
squares to be "alive" by clicking there. Once the squares have been
initialized, the user can step through the phases of "life", by pressing
return. At any time, the user may change the status of a square by
clicking on it.

If the board is 'wrap around', then some information is passed between
the first and last columns, and first and last rows.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**LIFE\_OPENGL** is available in [a C
version](../../c_src/life_opengl/life_opengl.md) and [a C++
version](../../master/life_opengl/life_opengl.md).

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

[MINESWEEPER](../../master/minesweeper/minesweeper.md), a C++ program
which is a text-based implementation of the Minesweeper game.

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

[TRI\_SURFACE\_DISPLAY\_OPENGL](../../m_src/tri_surface_display_opengl/tri_surface_display_opengl.md),
a C++ program which displays the 3D graphics information in a
TRI\_SURFACE file using OpenGL.

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

1.  Edward Angel,\
    Interactive Computer Graphics, a Top-Down Approach with OpenGL,\
    Addison-Wesley, 2000,\
    ISBN: 0-201-38597-X,\
    LC: T385.A514.
2.  Martin Gardner,\
    Mathematical Games: The Fantastic Combinations of John Conway's new
    solitaire game "Life",\
    Scientific American,\
    Volume 223, Number 4, October 1970, pages 120-123.

### Source Code: {#source-code align="center"}

-   [life\_opengl.cpp](life_opengl.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [life\_board.png](life_board.png), a PNG image of an initial 10x10
    board after the user has selected several squares to be alive.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for LIFE\_OPENGL.
-   **BOX\_DRAW** draws one box of the array.
-   **DISPLAY** generates the graphics output.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_MODP** returns the nonnegative remainder of I4 division.
-   **I4\_UNIFORM** returns a scaled pseudorandom I4.
-   **I4\_WRAP** forces an I4 to lie between given limits by wrapping.
-   **MY\_INIT** initializes OpenGL state variables dealing with viewing
    and attributes.
-   **MY\_KEYBOARD** reacts to keyboard events.
-   **MY\_MOUSE** reacts to mouse events.
-   **R4\_ABS** returns the absolute value of an R4.
-   **R4\_NINT** returns the nearest integer to an R4.
-   **STATE\_RANDOMIZE** randomizes the state.
-   **STATE\_RESET** allows the user to reset the state of a cell.
-   **STATE\_UPDATE** updates the cell states.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 24 July 2011.*
