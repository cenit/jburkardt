XYL\_DISPLAY\_OPENGL\
Display 2D Points and Lines Using OpenGL {#xyl_display_opengl-display-2d-points-and-lines-using-opengl align="center"}
========================================

------------------------------------------------------------------------

**XYL\_DISPLAY\_OPENGL** is a C++ program which reads XYL information
defining points and lines in 2D, and draws a picture using OPENGL.

The point and line information is stored in a pair of files, called the
**XYL** format. Essentially, the first file stores a list of point
coordinates, and the second lists point indices to be connected in
lines.

### Usage: {#usage align="center"}

> **xyl\_display\_opengl** *prefix*

where

-   *prefix* is the common prefix for the point and line data files.

reads the point coordinate data from *prefix.xy* and the point index
lists from *prefix.xyl* and displays a plot of the points and lines.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**XYL\_DISPLAY\_OPENGL** is available in [a C++
version](../../cpp_src/xyl_display_opengl/xyl_display_opengl.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BOX\_PLOT](../../m_src/box_plot/box_plot.html), a MATLAB program which
can color in specified entries of a checkerboard, corresponding to pairs
of integer data.

[CAUSTIC\_OPENGL](../../cpp_src/caustic_opengl/caustic_opengl.html), a
C++ program which computes a caustic curve and displays it using OpenGL.

[FERN\_OPENGL](../../cpp_src/fern_opengl/fern_opengl.html), a C++
program which uses OpenGL to display the Barnsley fractal fern.

[FLOOD\_OPENGL](../../c_src/flood_opengl/flood_opengl.html), a C program
which allows a user to select a region and flood it with color, using
OpenGL, by Art Wetzel.

[LIFE\_OPENGL](../../c_src/life_opengl/life_opengl.html), a C program
which plays John Conway's "Game of Life", using OpenGL to display the
results.

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

[TABLE\_DELAUNAY](../../f_src/table_delaunay/table_delaunay.html), a
FORTRAN90 program which computes the Delaunay triangulation of a set of
points.

[TABLE\_VORONOI](../../cpp_src/table_voronoi/table_voronoi.html), a C++
program which computes information about the Voronoi diagram of the
points.

[TRIANGULATION\_DISPLAY\_OPENGL](../../cpp_src/triangulation_display_opengl/triangulation_display_opengl.html),
a C++ program which reads files defining a triangulation and displays an
image using Open GL.

[XYL](../../data/xyl/xyl.html), a data directory which contains some
examples of the XYL format for 2D points and lines.

[XY\_DISPLAY\_OPENGL](../../cpp_src/xy_display_opengl/xy_display_opengl.html),
a C++ program which reads an XY file of 2D point coordinates, and
displays an image of those points using OpenGL.

[XYF\_DISPLAY\_OPENGL](../../cpp_src/xyf_display_opengl/xyf_display_opengl.html),
a C++ program which reads XYF information defining points and faces in
2D, and displays an image using OpenGL.

[XYL\_DISPLAY](../../m_src/xyl_display/xyl_display.html), a MATLAB
program which reads XYL information defining points and lines in 2D, and
displays an image in a MATLAB graphics window.

### Reference: {#reference align="center"}

1.  Edward Angel,\
    Interactive Computer Graphics, a Top-Down Approach with OpenGL,\
    Addison-Wesley, 2000,\
    ISBN: 0-201-38597-X,\
    LC: T385.A514.
2.  Renate Kempf, Chris Frazier, editors,\
    OpenGL Reference Manual,\
    Fourth Edition,\
    Addison-Wesley, 2004,\
    ISBN: 032117383X,\
    LC: T385.O642
3.  Mason Woo, Jackie Neider, Tom Davis,\
    OpenGL Programming Guide,\
    Addison-Wesley, 1997,\
    ISBN: 0-201-46138-2,\
    LC: T385.N435
4.  Richard Wright, Michael Sweet,\
    OpenGL Superbible,\
    Third Edition,\
    Sams, 2004,\
    ISBN: 0672326019,\
    LC: T385.W73
5.  <http://www.opengl.org/>\
    The official OpenGL site.

### Source Code: {#source-code align="center"}

-   [xyl\_display\_opengl.cpp](xyl_display_opengl.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [house.xy](house.xy), point coordinates.
-   [house.xyl](house.xyl), point indices to be connected as lines.
-   [house.png](house.png), a PNG image of the screen generated by Open
    GL.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for XYL\_DISPLAY\_OPENGL.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **DISPLAY** generates the graphics output.
-   **DTABLE\_DATA\_READ** reads the data from a real TABLE file.
-   **DTABLE\_HEADER\_READ** reads the header from a real TABLE file.
-   **MYINIT** initializes OpenGL state variables dealing with viewing
    and attributes.
-   **R8\_MAX** returns the maximum of two R8.
-   **R82VEC\_MAX** returns the maximum value in a R82VEC.
-   **R82VEC\_MIN** returns the minimum value in a R82VEC.
-   **S\_CAT** concatenates two strings to make a third string.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_I4VEC** reads an I4VEC from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TIMESTRING** returns the current YMDHMS date as a string.
-   **XY\_DATA\_READ** reads the data in an XY file.
-   **XY\_HEADER\_READ** reads the header of an XY file.
-   **XYL\_DATA\_READ** reads the data in an XYL file.
-   **XYL\_HEADER\_READ** determines the number of line items in an XYL
    file.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 06 January 2009.*
