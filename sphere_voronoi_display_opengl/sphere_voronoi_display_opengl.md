SPHERE\_VORONOI\_DISPLAY\_OPENGL\
Display an Approximate Voronoi Diagram on a Sphere {#sphere_voronoi_display_opengl-display-an-approximate-voronoi-diagram-on-a-sphere align="center"}
==================================================

------------------------------------------------------------------------

**SPHERE\_VORONOI\_DISPLAY\_OPENGL** is a C++ program which picks random
points on a sphere as generators, and then gradually colors in
neighboring points according to the color of the nearest generator.
This, in effect, constructs a Voronoi diagram, or at least, suggests it.
The exact calculation of the boundary lines and vertices requires a more
precise computation.

The user is allowed to request the number of generators, and OpenGL is
used to display the results. Initially, the sphere is rotating, but at
least on my machine, once I try to display the neighbors, the rotation
becomes very slow.

### Usage: {#usage align="center"}

> **sphere\_voronoi\_display\_opengl** *gen\_num*

where

-   *gen\_num* is the number of generators,

The first 5 or 6 mouse clicks rotate and pause the image of the
generators. The next 20 mouse clicks pause the sphere, add 1/10 of the
sample points and resume rotation.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SPHERE\_VORONOI\_DISPLAY\_OPENGL** is available in [a C++
version](../../master/sphere_voronoi_display_opengl/sphere_voronoi_display_opengl.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FERN\_OPENGL](../../master/fern_opengl/fern_opengl.md), a C++
program which uses OpenGL to display the Barnsley fractal fern.

[ROTATING\_CUBE\_DISPLAY\_OPENGL](../../master/rotating_cube_display_opengl/rotating_cube_display_opengl.md),
a C++ program which displays a rotating color cube in 3D, using OpenGL;

[SPHERE\_CVT](../../f_src/sphere_cvt/sphere_cvt.md), a FORTRAN90
library which creates a mesh of well-separated points on a unit sphere
using Centroidal Voronoi Tessellations.

[SPHERE\_CVT](../../m_src/sphere_cvt/sphere_cvt.md), a MATLAB library
which creates a mesh of well-separated points on a unit sphere by
applying the Centroidal Voronoi Tessellation (CVT) iteration.

[SPHERE\_DELAUNAY](../../m_src/sphere_delaunay/sphere_delaunay.md), a
MATLAB program which computes the Delaunay triangulation of points on a
sphere.

[SPHERE\_DESIGN\_RULE](../../f_src/sphere_design_rule/sphere_design_rule.md),
a FORTRAN90 library which returns point sets on the surface of the unit
sphere, known as "designs", which can be useful for estimating integrals
on the surface, among other uses.

[SPHERE\_VORONOI](../../m_src/sphere_voronoi/sphere_voronoi.md), a
MATLAB program which computes the Voronoi diagram of points on a sphere.

[SPHERE\_XYZ\_DISPLAY\_OPENGL](../../master/sphere_xyz_display_opengl/sphere_xyz_display_opengl.md),
a C++ program which reads XYZ information defining points in 3D, and
displays a unit sphere and the points, using OpenGL.

[STRIPACK\_VORONOI](../../f_src/stripack_voronoi/stripack_voronoi.md),
a FORTRAN90 program which reads an XYZ file of 3D points on the unit
sphere, computes the Voronoi diagram, and writes it to a file.

[SXYZ\_VORONOI](../../f_src/sxyz_voronoi/sxyz_voronoi.md), a FORTRAN90
library which reads an XYZ file of 3D points on the sphere, and computes
and plots Delaunay triangulations and Voronoi diagrams.

[XYZ\_DISPLAY\_OPENGL](../../master/xyz_display_opengl/xyz_display_opengl.md),
a C++ program which reads XYZ information defining points in 3D, and
displays an image using OpenGL.

### Source Code: {#source-code align="center"}

-   [sphere\_voronoi\_display\_opengl.cpp](sphere_voronoi_display_opengl.cpp),
    the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [sphere\_generators.png](sphere_generators.png), a PNG image of the
    sphere with just the initial generators indicated.
-   [sphere\_voronoi.png](sphere_voronoi.png), a PNG image of the
    sphere, with many points colored the same as the nearest generator.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for SPHERE\_VORONOI\_DISPLAY\_OPENGL.
-   **DISPLAY** generates the graphics output.
-   **MOUSE** determines the response to mouse input.
-   **MYINIT** initializes OpenGL state variables dealing with viewing
    and attributes.
-   **MYRESHAPE** determines the window mapping.
-   **R4MAT\_UNIFORM\_01** returns a unit pseudorandom R4MAT.
-   **R4MAT\_ZERO\_NEW** returns a new zeroed R4MAT.
-   **R4VEC\_NORMAL\_01** samples the standard normal probability
    distribution.
-   **R4VEC\_UNIFORM\_01** returns a unit unit pseudorandom R4VEC.
-   **SPIN\_IMAGE** adjusts the angle of rotation and redisplays the
    picture.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **UNIFORM\_ON\_SPHERE01\_MAP** maps uniform points onto the unit
    sphere.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 14 February 2009.*
