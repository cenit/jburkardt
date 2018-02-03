CAUSTIC\_OPENGL\
Display a Caustic using OpenGL {#caustic_opengl-display-a-caustic-using-opengl align="center"}
==============================

------------------------------------------------------------------------

**CAUSTIC\_OPENGL** is a C++ program which computes a caustic curve
based on user input, and uses OpenGL to display it.

The user specifies a value **Q**, the number of points, a value **P**
which controls which points will be connected, and values **A** and
**B** which determine the curve on which the points lie.

The program then plots **Q** points along the curve

> x(I) = cos ( A \* 2 \* i \* pi / Q )\
> y(I) = sin ( B \* 2 \* i \* pi / Q )

and connects each point **I** to point **I+P**, using modular arithmetic
where necessary.

### Usage: {#usage align="center"}

> **caustic\_opengl** *q* *p* *a* *b*

where

-   *q* is the number of points to plot;
-   *p* is the point to which point 0 is connected.
-   *a* defines x(i)=cos(a\*2\*pi\*i/q);

### OpenGL on Macintosh OS X {#opengl-on-macintosh-os-x align="center"}

**OpenGL** ships with OSX for the Macintosh. You can obtain the latest
software version on [the Apple OpenGL web
site](http://www.apple.com/opengl/).

Note that this source code and compilation script have been adapted for
use on a Macintosh running OSX.

For that reason, the include file references have been changed from:

            # include <GL/glut.h>
          

to:

            # include <GLUT/glut.h>
          

The compilation statement, which might ordinarily be

            g++ caustic_opengl.C -m -lGL -lGLU -lglut
          

was modified to:

            g++ caustic_opengl.C -m -framework OpenGL -framework GLUT
          

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**CAUSTIC\_OPENGL** is available in [a C++
version](../../master/caustic_opengl/caustic_opengl.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

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

[OBJ2OPENGL](../../pl_src/obj2opengl/obj2opengl.md), a PERL script
which converts OBJ files of 3D data into C include files, which can then
be used in an **OpenGL** program to display the object.

[POLYGONAL\_SURFACE\_DISPLAY\_OPENGL](../../master/polygonal_surface_display_opengl/polygonal_surface_display_opengl.md),
a C++ program which displays a surface in 3D described as a set of
polygons, using OpenGL.

[ROTATING\_CUBE\_DISPLAY\_OPENGL](../../master/rotating_cube_display_opengl/rotating_cube_display_opengl.md),
a C++ program which displays a rotating color cube in 3D, using OpenGL;

[PPMA](../../data/ppma/ppma.md), a data directory which describes the
ASCII Portable Pixelmap format, which is a possible means of storing the
graphics information displayed by **OpenGL**. One of the example
programs shows how this can be done.

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

-   [caustic\_opengl.cpp](caustic_opengl.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [caustic\_100\_19\_2\_3.png](caustic_100_19_2_3.png), the output
    from "caustic\_opengl 100 19 2 3".
-   [caustic\_100\_37\_1\_1.png](caustic_100_37_1_1.png), the output
    from "caustic\_opengl 100 37 1 1".
-   [caustic\_400\_29\_2\_7.png](caustic_400_29_2_7.png), the output
    from "caustic\_opengl 400 29 2 7".

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for the CAUSTIC\_OPENGL program.
-   **DISPLAY** generates the graphics output.
-   **MYINIT** initializes OpenGL state variables dealing with viewing
    and attributes.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 20 October 2009.*
