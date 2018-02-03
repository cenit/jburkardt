OpenGL\
Examples of OpenGL Graphics {#opengl-examples-of-opengl-graphics align="center"}
===========================

------------------------------------------------------------------------

**OpenGL** is a directory of C++ programs which use the Open GL graphics
library to display graphics information.

It is possible to do a wide range of sophisticated 2D and 3D graphics
presentations. OpenGL v1.1 software runtime is included as part of the
operating system for WinXP, Windows 2000, Windows 98, Windows 95 (OSR2)
and Windows NT. The OpenGL v1.1 libraries are also available as a
self-extracting archive file from the Microsoft Site via HTTP or FTP.

**OpenGL** is most commonly used with C or C++ programs, but can also be
called by a FORTRAN program if the necessary intermediate "FORTRAN
bindings" (an interface package) have been installed.

**OpenGL** only does graphics rendering, and has no concept of windowing
systems, input devices, printing to the screen and so on. These extra
functions must be provided by an auxilliary package. One common package
as known as **GLUT**, for the Graphics Language Utility Toolbox.

### Local Implementation: {#local-implementation align="center"}

**OpenGL** is available on the SCS Alpha systems **chili** and
**kachina**. The "include" files should be accessible using a statement
like

            # include <GL/gl.h>
            # include <GL/glu.h>
            # include <GL/glut.h>
          

The compiled libraries can be accessed by a command like

            g++ myprog.C -lm -lGL -lGLU -lglut
          

**OpenGL** is available on the SCS "hallway" systems such as
**quadrature**. The "include" files should be accessible using a
statement like

            # include <GL/gl.h>
            # include <GL/glu.h>
            # include <GL/glut.h>
          

The compiled libraries can be accessed by a command like

            g++ myprog.C -lm -lGL -lGLU -lglut
          

**OpenGL** is available on the SCS Prism systems. The "include" files
should be accessible using a statement like

            # include <GL/gl.h>
            # include <GL/glu.h>
            # include <GL/freeglut.h>
          

The compiled libraries can be accessed by a command like

            g++ myprog.C -lm -lGL -lGLU -lglut
          

### OpenGL on Macintosh OS X {#opengl-on-macintosh-os-x align="center"}

**OpenGL** ships with OS9 and OSX for the Macintosh. You can obtain the
latest software version on [the Apple OpenGL web
site](http://www.apple.com/opengl/).

Note that the source code and compilation script have been adapted for
use on a Macintosh running OS X.

For that reason, the include file references have been changed from:

            # include <GL/gl.h>
            # include <GL/glu.h>
            # include <GL/glut.h>
          

to:

            # include <OpenGL/gl.h>
            # include <OpenGL/glu.h>
            # include <GLUT/glut.h>
          

The compilation statement, which might ordinarily be

            g++ myprog.C -lGL -lGLU -lglut
          

was modified to:

            g++ myprog.C -framework OpenGL -framework GLUT
          

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**OPENGL** examples are available in [a C
version](../../c_src/opengl/opengl.html) and [a C++
version](../../cpp_src/opengl/opengl.html).

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

[POLYGONAL\_SURFACE\_DISPLAY\_OPENGL](../../cpp_src/polygonal_surface_display_opengl/polygonal_surface_display_opengl.html),
a C++ program which displays a surface in 3D described as a set of
polygons, using OpenGL.

[PPMA](../../data/ppma/ppma.html), a data directory which describes the
ASCII Portable Pixelmap format, which is a possible means of storing the
graphics information displayed by **OpenGL**. One of the example
programs shows how this can be done.

[ROTATING\_CUBE\_DISPLAY\_OPENGL](../../cpp_src/rotating_cube_display_opengl/rotating_cube_display_opengl.html),
a C++ program which displays a rotating color cube in 3D, using OpenGL;

[SPHERE\_XYZ\_DISPLAY\_OPENGL](../../cpp_src/sphere_xyz_display_opengl/sphere_xyz_display_opengl.html),
a C++ program which reads XYZ information defining points in 3D, and
displays a unit sphere and the points, using OpenGL.

[TET\_MESH\_DISPLAY\_OPENGL](../../cpp_src/tet_mesh_display_opengl/tet_mesh_display_opengl.html),
a C++ program which reads a pair of files defining a tetrahedral mesh
and displays an image using OpenGL.

[TRI\_SURFACE\_DISPLAY\_OPENGL](../../cpp_src/tri_surface_display_opengl/tri_surface_display_opengl.html),
a C++ program which displays the 3D graphics information in a
TRI\_SURFACE file using OpenGL.

[TRIANGULATION\_DISPLAY\_OPENGL](../../cpp_src/triangulation_display_opengl/triangulation_display_opengl.html),
a C++ program which reads a pair of files defining a triangulation and
displays an image using OpenGL.

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

### Examples and Tests: {#examples-and-tests align="center"}

**GASKET\_POINTS** displays the Sierpinksi gasket by showing 5000
points.

-   [gasket\_points.cpp](gasket_points.cpp), the source code;
-   [gasket\_points.png](gasket_points.png), a PNG file of the image;

**GASKET\_POINTS\_3D** displays the 3D Sierpinksi gasket by showing
100000 points.

-   [gasket\_points\_3d.cpp](gasket_points_3d.cpp), the source code;

**GASKET\_POLY\_FILLED** displays the Sierpinksi gasket by drawing
filled polygons.

-   [gasket\_poly\_filled.cpp](gasket_poly_filled.cpp), the source code;

**GASKET\_POLY\_OPEN** displays the Sierpinksi gasket by showing open
polygons (actually, "line loops").

-   [gasket\_poly\_open.cpp](gasket_poly_open.cpp), the source code;

**GASKET\_TO\_PPMA** displays the Sierpinksi gasket, copies the pixels
to an array, and writes that array to an ASCII PPM file.

-   [gasket\_to\_ppma.cpp](gasket_to_ppma.cpp), the source code;
-   [gasket\_ascii.ppm](gasket_ascii.ppm), the ASCII PPM file.
-   [gasket.png](gasket.png), a PNG image of the gasket, created by
    applying **convert** to the ASCII PPM file;

**SHADED SPHERES** allows the user's mouse to move a light source for
some spheres.

-   [shaded\_spheres.cpp](shaded_spheres.cpp), the source code;

**SHADING** allows the user to display the shading method on some
objects. However, it is also an interesting example of the use of the
include files created by the OBJ2OPENGL script, which converts OBJ files
of 3D data into C include files, which can then be used in an OpenGL
program to display the object. Here, we will display figures of a gourd
and a bird that were created in this way. Files you may copy include:

-   [shading.cpp](shading.cpp), the source code;
-   [axis.hpp](axis.hpp), an include file for the axis, which is
    probably not needed;
-   [bird.hpp](bird.hpp), an include file for the bird;
-   [gourd.hpp](gourd.hpp), an include file for the gourd;
-   [graphicsDefs.hpp](graphicsDefs.hpp), an include file for graphics;

**TURTLE** allows the user's mouse clicks to turn a line to the left or
right. Files you may copy include:

-   [turtle.cpp](turtle.cpp), the source code;

**VORONOI\_DISPLAY** displays a Voronoi diagram, involving 9 points in
the unit square (in blue) and the lines that indicate the boundaries of
the Voronoi regions (in red).

-   [voronoi\_display.cpp](voronoi_display.cpp), the source code;

**YELLOW\_WINDOW** opens a window and clears it to yellow. Files you may
copy include:

-   [yellow\_window.cpp](yellow_window.cpp), the source code;

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 20 June 2006.*
