GRF\_DISPLAY\_OPENGL\
Display a GRF Graph Using OpenGL {#grf_display_opengl-display-a-grf-graph-using-opengl align="center"}
================================

------------------------------------------------------------------------

**GRF\_DISPLAY\_OPENGL** is a C++ program which reads a GRF file
containing information about an abstract graph and displays a plot using
**OPENGL**.

### Usage: {#usage align="center"}

> **grf\_display\_opengl** *prefix*

where

-   *prefix*.**grf** is the GRF file.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**GRF\_DISPLAY\_OPENGL** is available in [a C++
version](../../cpp_src/grf_display_opengl/grf_display_opengl.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FERN\_OPENGL](../../cpp_src/fern_opengl/fern_opengl.html), a C++
program which uses OpenGL to display the Barnsley fractal fern.

[GRAFFITI](../../datasets/graffiti/graffiti.html), a dataset directory
which contains 195 abstract graphs, with adjacency and embedding
information, stored in the GRF format.

[GRAPH\_REPRESENTATION](../../data/graph_representation/graph_representation.html),
a data directory of examples of ways of representing abstract
mathematical graphs

[GRF](../../data/grf/grf.html), a data directory which contains a
description of the GRF format and some examples.

[GRF\_DISPLAY](../../m_src/grf_display/grf_display.html), a MATLAB
program which reads a GRF file and displays a plot in the MATLAB
graphics window.

[GRF\_IO](../../cpp_src/grf_io/grf_io.html), a C++ library which reads
or writes a GRF file;

[GRF\_TO\_EPS](../../f_src/grf_to_eps/grf_to_eps.html), a FORTRAN90
program which can make an encapsulated PostScript image of a GRF file.

[GRF\_TO\_XYL](../../f_src/grf_to_xyl/grf_to_xyl.html), a FORTRAN90
program which converts information describing the adjacency and
embedding of an abstract graph from GRF to XYL format.

[PLOT\_POINTS](../../f_src/plot_points/plot_points.html), a FORTRAN90
program which reads a file of point coordinates and makes a PostScript
image of them.

[SPHERE\_XYZ\_DISPLAY\_OPENGL](../../cpp_src/sphere_xyz_display_opengl/sphere_xyz_display_opengl.html),
a C++ program which reads XYZ information defining points in 3D, and
displays a unit sphere and the points, using OpenGL.

[XYL](../../data/xyl/xyl.html), a data directory which contains some
examples of the XYL format for 2D points and lines.

[XY\_DISPLAY\_OPENGL](../../cpp_src/xy_display_opengl/xy_display_opengl.html),
a C++ program which reads an XY file of 2D point coordinates, and
displays an image of those points using OpenGL.

[XYF\_DISPLAY\_OPENGL](../../cpp_src/xyf_display_opengl/xyf_display_opengl.html),
a C++ program which reads XYF information defining points and faces in
2D, and displays an image using OpenGL.

[XYL\_DISPLAY\_OPENGL](../../cpp_src/xyl_display_opengl/xyl_display_opengl.html),
a C++ program which reads XYL information defining points and lines in
2D, and displays an image using OpenGL.

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

-   [grf\_display\_opengl.cpp](grf_display_opengl.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**COXETER** is the Coxeter graph.

-   [coxeter.grf](coxeter.grf), is a GRF file defining the Coxeter
    graph.
-   [coxeter.png](coxeter.png), a PNG image of the plot.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for GRF\_DISPLAY\_OPENGL.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **DISPLAY** generates the graphics output.
-   **GRF\_DATA\_PRINT** prints the data of a GRF file.
-   **GRF\_DATA\_READ** reads the data of a GRF file.
-   **GRF\_HEADER\_PRINT** prints the header of a GRF file.
-   **GRF\_HEADER\_READ** reads the header of a GRF file.
-   **I4VEC\_MAX** returns the value of the maximum element in an I4VEC.
-   **I4VEC\_MIN** returns the value of the minimum element in an I4VEC.
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
-   **XYL\_DATA\_PRINT** prints the data of an XYL file.
-   **XYL\_HEADER\_PRINT** prints the header of an XYL file.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 13 January 2009.*
