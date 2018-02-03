LISSAJOUS\_OPENGL\
Display a Lissajous Figure using OpenGL {#lissajous_opengl-display-a-lissajous-figure-using-opengl align="center"}
=======================================

------------------------------------------------------------------------

**LISSAJOUS\_OPENGL** is a C++ program which computes a Lissajous figure
based on user input, and uses OpenGL to display it.

The user specifies information about the number of points, and the form
of the two sine curves involved. Depending on these parameters, the
resulting shape may or may not be a closed curve. The user also
specifies a range for the underlying T parameter. Again, depending on
the parameters, this value may result in a closed curve being drawn
several times, or a closed curve being only partially drawn.

The program plots **N** points along the curve

> t(i) = i \* T2 / ( N - 1 )\
> x(i) = R1 \* sin ( ( A1 \* t(i) + B1 ) \* 2 \* pi )\
> y(i) = R2 \* sin ( ( A2 \* t(i) + B2 ) \* 2 \* pi )

for 0 &lt;= I &lt;= N - 1.

The user specifies N, T2, A1, B1, A2 and B2. The parameters R1 and R2
are currently fixed at 1.

### Usage: {#usage align="center"}

> **lissajous\_opengl** *n* *t2* *a1* *b1* *a2* *b2*

where

-   *n* the number of points to plot;
-   *t2* the final value of T.
-   *a1*, *b1* defines x(i)=sin((a1\*t(i)+b1)\*2\*pi);
-   *a2*,*b2* defines y(i)=sin((a2\*t(i)+b2)\*2\*pi);

### OpenGL on Macintosh OS X {#opengl-on-macintosh-os-x align="center"}

**OpenGL** ships with OS X for the Macintosh. You can obtain the latest
software version on [the Apple OpenGL web
site](http://www.apple.com/opengl/).

Note that this source code and compilation script have been adapted for
use on a Macintosh running OS X.

For that reason, the include file references have been changed from:

            # include <GL/glut.h>
          

to:

            # include <GLUT/glut.h>
          

The compilation statement, which might ordinarily be

            g++ lissajous_opengl.C -m -lGL -lGLU -lglut
          

was modified to:

            g++ lissajous_opengl.C -m -framework OpenGL -framework GLUT
          

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**LISSAJOUS\_OPENGL** is available in [a C++
version](../../master/lissajous_opengl/lissajous_opengl.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

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

[OPENGL](../../master/opengl/opengl.md), C++ programs which
illustrate the use of the OpenGL graphics library;

[OBJ2OPENGL](../../pl_src/obj2opengl/obj2opengl.md), a PERL script
which converts OBJ files of 3D data into C include files, which can then
be used in an OpenGL program to display the object.

[POLYGONAL\_SURFACE\_DISPLAY\_OPENGL](../../master/polygonal_surface_display_opengl/polygonal_surface_display_opengl.md),
a C++ program which displays a surface in 3D described as a set of
polygons, using OpenGL.

[ROTATING\_CUBE\_DISPLAY\_OPENGL](../../master/rotating_cube_display_opengl/rotating_cube_display_opengl.md),
a C++ program which displays a rotating color cube in 3D, using OpenGL;

[PPMA](../../data/ppma/ppma.md), a data directory which describes the
ASCII Portable Pixel Map (PPM) format, which is a possible means of
storing the graphics information displayed by **OpenGL**. One of the
example programs shows how this can be done.

[SPHERE\_XYZ\_DISPLAY\_OPENGL](../../master/sphere_xyz_display_opengl/sphere_xyz_display_opengl.md),
a C++ program which reads XYZ information defining points in 3D, and
displays a unit sphere and the points, using OpenGL.

[TET\_MESH\_DISPLAY\_OPENGL](../../master/tet_mesh_display_opengl/tet_mesh_display_opengl.md),
a C++ program which reads a pair of files defining a tetrahedral mesh
and displays an image using OpenGL.

[TRI\_SURFACE\_DISPLAY\_OPENGL](../../master/tri_surface_display_opengl/tri_surface_display_opengl.md),
a C++ program which displays the 3D graphics information in a
TRI\_SURFACE file using OpenGL.

[TRIANGULATION\_DISPLAY\_OPENGL](../../master/triangulation_display_opengl/triangulation_display_opengl.md),
a C++ program which reads a pair of files defining a triangulation and
displays an image using OpenGL.

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
2.  Renate Kempf, Chris Frazier, editors,\
    OpenGL Reference Manual,\
    Fourth Edition,\
    Addison-Wesley, 2004,\
    ISBN: 032117383X,\
    LC: T385.O642.
3.  Mason Woo, Jackie Neider, Tom Davis,\
    OpenGL Programming Guide,\
    Addison-Wesley, 1997,\
    ISBN: 0-201-46138-2,\
    LC: T385.N435.
4.  Richard Wright, Michael Sweet,\
    OpenGL Superbible,\
    Third Edition,\
    Sams, 2004,\
    ISBN: 0672326019,\
    LC: T385.W73.
5.  <http://www.opengl.org/>\
    The official OpenGL site.

### Source Code: {#source-code align="center"}

-   [lissajous\_opengl.cpp](lissajous_opengl.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [figure1.png](figure1.png), the output from "lissajous\_opengl 1000
    1.0 5.0 0.5 6.0 0.0".
-   [figure2.png](figure2.png), the output from "lissajous\_opengl 1000
    2.0 7.0 0.5 8.1 0.0".
-   [figure3.png](figure3.png), the output from "lissajous\_opengl 1000
    1.0 7.0 0.2 8.0 0.0".

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for LISSAJOUS\_OPENGL.
-   **DISPLAY** generates the graphics output.
-   **MYINIT** initializes OpenGL state variables dealing with viewing
    and attributes.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 01 December 2008.*
