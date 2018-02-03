XY\_DISPLAY\_OPENGL\
Display 2D Pointsets Using OpenGL {#xy_display_opengl-display-2d-pointsets-using-opengl align="center"}
=================================

------------------------------------------------------------------------

**XY\_DISPLAY\_OPENGL** is a C++ program which reads the name of a data
file containing a list of 2D point coordinates, reads the data, and
displays the points using OPENGL.

### Usage: {#usage align="center"}

> **xy\_display\_opengl** *data.txt*

where

-   *data.txt* is a file containing a list of X, Y coordinates;

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**XY\_DISPLAY\_OPENGL** is available in [a C++
version](../../master/xy_display_opengl/xy_display_opengl.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FERN\_OPENGL](../../master/fern_opengl/fern_opengl.md), a C++
program which uses OpenGL to display the Barnsley fractal fern.

[SPHERE\_XYZ\_DISPLAY\_OPENGL](../../master/sphere_xyz_display_opengl/sphere_xyz_display_opengl.md)
a C++ program which reads XYZ information defining points in 3D, and
displays a unit sphere and the points, using OpenGL.

[XY](../../data/xy/xy.md), a data directory which contains some
examples of 2D pointsets.

[XY\_DISPLAY](../../m_src/xy_display/xy_display.md), a MATLAB program
which reads XY information defining points in 2D, and displays an image
in a MATLAB graphics window;

[XY\_IO](../../master/xy_io/xy_io.md), a C++ library which reads and
writes XY files.

[XYF\_DISPLAY\_OPENGL](../../master/xyf_display_opengl/xyf_display_opengl.md),
a C++ program which reads XYF information defining points and faces in
2D, and displays an image using OpenGL.

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

-   [xy\_display\_opengl.cpp](xy_display_opengl.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [lsup\_303\_output.txt](lsup_303_output.txt), the printed output in
    response to the command:

                    xy_display_opengl lsup_303.xy

-   [lsup\_303.xy](lsup_303.xy), 303 points that outline Lake Superior.
-   [lsup\_303.png](lsup_303.png), a PNG image of the screen generated
    by Open GL.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for XY\_DISPLAY\_OPENGL.
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
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TIMESTRING** returns the current YMDHMS date as a string.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 06 January 2009.*
