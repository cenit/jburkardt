SPHERE\_QUAD\
Quadrature on the Surface of the Unit Sphere {#sphere_quad-quadrature-on-the-surface-of-the-unit-sphere align="center"}
============================================

------------------------------------------------------------------------

**SPHERE\_QUAD** is a C++ library which estimates the integral of a
scalar function F(X,Y,Z) over the surface of the unit sphere centered at
the origin.

The library includes one function, **SPHERE01\_QUAD\_MC**, which
estimates the integral using a Monte Carlo approach. It randomly samples
points on the surface, and estimates the integral as the average of
these values times the area of the surface.

The library includes three functions based on the idea of a
latitudinal/longitudinal grid: **SPHERE01\_QUAD\_LLC**,
**SPHERE01\_QUAD\_LLV** and **SPHERE01\_QUAD\_LLM**. The surface of the
sphere is divided into rectangles whose sides are always lines of
latitude or longitude. Each rectangle is then split diagonally into a
pair of triangles (except for the degenerate rectangles that include the
north or south pole as a vertex.)

The user controls the accuracy of the integral estimate by specifying a
maximum side length H. The functions determine angular increments that
guarantee the size restriction. Of course, this means that the
restriction on latitude, enforced at the equator, will result in
excessively small triangles away from the equator. That is a penalty of
using this simple subdivision scheme.

The library includes three functions based on the idea of first
subdividing the surface into 20 congruent spherical triangles, based on
the projection of a regular icosahedron. The functions
**SPHERE01\_QUAD\_ICOS1C**, **SPHERE01\_QUAD\_ICOS1V** and
**SPHERE01\_QUAD\_ICOS1M** use this idea, along with subdivision.

The function **SPHERE01\_QUAD\_ICOS2V** is similar to
**SPHERE01\_QUAD\_ICOS1V** but uses a more sophisticated algorithm to
project points from the planar triangle to the unit sphere. However, the
modifications seem to make little difference to the resulting integral
estimate.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SPHERE\_QUAD** is available in [a C
version](../../c_src/sphere_quad/sphere_quad.md) and [a C++
version](../../master/sphere_quad/sphere_quad.md) and [a FORTRAN77
version](../../f77_src/sphere_quad/sphere_quad.md) and [a FORTRAN90
version](../../f_src/sphere_quad/sphere_quad.md) and [a MATLAB
version](../../m_src/sphere_quad/sphere_quad.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[RANDOM\_DATA](../../master/random_data/random_data.md), a C++
library which generates sample points for various probability
distributions, spatial dimensions, and geometries;

[SPHERE\_EXACTNESS](../../master/sphere_exactness/sphere_exactness.md),
a C++ program which tests the polynomial exactness of a quadrature rule
for the unit sphere;

[SPHERE\_GRID](../../master/sphere_grid/sphere_grid.md), a C++
library which provides a number of ways of generating grids of points,
or of points and lines, or of points and lines and faces, over the unit
sphere.

[SPHERE\_LEBEDEV\_RULE](../../master/sphere_lebedev_rule/sphere_lebedev_rule.md),
a C++ library which computes Lebedev quadrature rules for the unit
sphere;

[SPHERE\_MONTE\_CARLO](../../master/sphere_monte_carlo/sphere_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the surface of the unit sphere in 3D;

[SPHERE\_TRIANGLE\_QUAD](../../master/sphere_triangle_quad/sphere_triangle_quad.md),
a C++ library which estimates the integral of a function over a
spherical triangle.

[STROUD](../../master/stroud/stroud.md), a C++ library which
approximates the integral of a function on the surface or in the
interior of a variety of geometric shapes.

[XYZ\_DISPLAY](../../m_src/xyz_display/xyz_display.md), a MATLAB
program which reads XYZ information defining points in 3D, and displays
an image in the MATLAB graphics window.

[XYZ\_DISPLAY\_OPENGL](../../master/xyz_display_opengl/xyz_display_opengl.md),
a C++ program which reads XYZ information defining points in 3D, and
displays an image using OpenGL.

### Reference: {#reference align="center"}

-   James Arvo,\
    Stratified sampling of spherical triangles,\
    Computer Graphics Proceedings, Annual Conference Series,\
    ACM SIGGRAPH '95, pages 437-438, 1995.
-   Philip Davis, Philip Rabinowitz,\
    Methods of Numerical Integration,\
    Second Edition,\
    Dover, 2007,\
    ISBN: 0486453391,\
    LC: QA299.3.D28.
-   Jacob Goodman, Joseph ORourke, editors,\
    Handbook of Discrete and Computational Geometry,\
    Second Edition,\
    CRC/Chapman and Hall, 2004,\
    ISBN: 1-58488-301-4,\
    LC: QA167.H36.

### Source Code: {#source-code align="center"}

-   [sphere\_quad.cpp](sphere_quad.cpp), the source code.
-   [sphere\_quad.hpp](sphere_quad.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [sphere\_quad\_prb.cpp](sphere_quad_prb.cpp), a sample problem.
-   [sphere\_quad\_prb\_output.txt](sphere_quad_prb_output.txt), the
    output file.

### List of Routines: {#list-of-routines align="center"}

-   **ARC\_COSINE** computes the arc cosine function, with argument
    truncation.
-   **ARC\_SINE** computes the arc sine function, with argument
    truncation.
-   **ATAN4** computes the inverse tangent of the ratio Y / X.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the smaller of two I4's.
-   **I4VEC\_COPY** copies an I4VEC.
-   **ICOS\_SHAPE** describes a icosahedron.
-   **ICOS\_SIZE** gives "sizes" for an icosahedron in 3D.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_GAMMA** evaluates Gamma(X) for a real argument.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_MIN** returns the minimum of two R8's.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **R8VEC\_COPY** copies an R8VEC.
-   **R8VEC\_DOT\_PRODUCT** computes the dot product of a pair of
    R8VEC's.
-   **R8VEC\_NORM** returns the L2 norm of an R8VEC.
-   **R8VEC\_POLARIZE** decomposes an R8VEC into normal and parallel
    components.
-   **R8VEC\_SUM** returns the sum of an R8VEC.
-   **SPHERE01\_DISTANCE\_XYZ** computes great circle distances on a
    unit sphere.
-   **SPHERE01\_MONOMIAL\_INTEGRAL** returns monomial integrals on the
    unit sphere.
-   **SPHERE01\_QUAD\_ICOS1C:** centroid rule, subdivide then project.
-   **SPHERE01\_QUAD\_ICOS1M:** midside rule, subdivide then project.
-   **SPHERE01\_QUAD\_ICOS1V:** vertex rule, subdivide then project.
-   **SPHERE01\_QUAD\_ICOS2V:** vertex rule, subdivide then project.
-   **SPHERE01\_QUAD\_LLC:** Longitude/Latitude grid with centroid rule.
-   **SPHERE01\_QUAD\_LLM:** longitude/latitude grid plus midside rule.
-   **SPHERE01\_QUAD\_LLV:** longitude/latitude grid with vertex rule.
-   **SPHERE01\_QUAD\_MC** uses the Monte Carlo rule for sphere
    quadrature.
-   **SPHERE01\_QUAD\_MC\_SIZE** sizes a Monte Carlo rule for sphere
    quadrature.
-   **SPHERE01\_SAMPLE** picks random points on a unit sphere.
-   **SPHERE01\_TRIANGLE\_ANGLES\_TO\_AREA:** area of a spherical
    triangle on the unit sphere.
-   **SPHERE01\_TRIANGLE\_PROJECT** projects from a plane triangle to a
    spherical triangle.
-   **SPHERE01\_TRIANGLE\_PROJECT2** projects from a plane triangle to a
    spherical triangle.
-   **SPHERE01\_TRIANGLE\_SAMPLE:** sample points from triangle on unit
    sphere.
-   **SPHERE01\_TRIANGLE\_SIDES\_TO\_ANGLES:** angles of spherical
    triangle on unit sphere.
-   **SPHERE01\_TRIANGLE\_VERTICES\_TO\_ANGLES:** angles of spherical
    triangle on unit sphere.
-   **SPHERE01\_TRIANGLE\_VERTICES\_TO\_AREA:** area of a spherical
    triangle on unit sphere.
-   **SPHERE01\_TRIANGLE\_VERTICES\_TO\_CENTROID:** centroid of
    spherical triangle on unit sphere.
-   **SPHERE01\_TRIANGLE\_VERTICES\_TO\_MIDPOINTS** gets the midsides of
    a spherical triangle.
-   **SPHERE01\_TRIANGLE\_VERTICES\_TO\_SIDES\_3D:** sides of spherical
    triangle on unit sphere.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TP\_TO\_XYZ** converts unit spherical TP coordinates to XYZ
    coordinates.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 23 September 2010.*
