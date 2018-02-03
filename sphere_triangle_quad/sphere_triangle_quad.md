SPHERE\_TRIANGLE\_QUAD\
Estimate Integrals over Spherical Triangles {#sphere_triangle_quad-estimate-integrals-over-spherical-triangles align="center"}
===========================================

------------------------------------------------------------------------

**SPHERE\_TRIANGLE\_QUAD** is a C++ library which estimates the integral
of a scalar function F(X,Y,Z) over a spherical triangle on the unit
sphere.

Three methods of estimation are very crude and cannot be improved:

-   the centroid rule, based on a single function value.
-   the vertex rule, which averages the vertex values.
-   the midside rule, which averages the midside values.

One method of estimation uses random sampling, the Monte Carlo method,
whose accuracy can be improved by increasing the number of sample
points.

Another method is based on the centroid rule, but allows the user to
decompose the original spherical triangle into collection of smaller
triangles. The accuracy of the estimate should improve as the size of
these triangles decreases.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SPHERE\_TRIANGLE\_QUAD** is available in [a C
version](../../c_src/sphere_triangle_quad/sphere_triangle_quad.html) and
[a C++
version](../../cpp_src/sphere_triangle_quad/sphere_triangle_quad.html)
and [a FORTRAN77
version](../../f77_src/sphere_triangle_quad/sphere_triangle_quad.html)
and [a FORTRAN90
version](../../f_src/sphere_triangle_quad/sphere_triangle_quad.html) and
[a MATLAB
version](../../m_src/sphere_triangle_quad/sphere_triangle_quad.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[RANDOM\_DATA](../../cpp_src/random_data/random_data.html), a C++
library which generates sample points for various probability
distributions, spatial dimensions, and geometries;

[SPHERE\_EXACTNESS](../../cpp_src/sphere_exactness/sphere_exactness.html),
a C++ program which tests the polynomial exactness of a quadrature rule
for the unit sphere;

[SPHERE\_GRID](../../cpp_src/sphere_grid/sphere_grid.html), a C++
library which provides a number of ways of generating grids of points,
or of points and lines, or of points and lines and faces, over the unit
sphere.

[SPHERE\_LEBEDEV\_RULE](../../cpp_src/sphere_lebedev_rule/sphere_lebedev_rule.html),
a C++ library which computes Lebedev quadrature rules for the unit
sphere;

[SPHERE\_MONTE\_CARLO](../../cpp_src/sphere_monte_carlo/sphere_monte_carlo.html),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the surface of the sphere in 3D;

[SPHERE\_QUAD](../../cpp_src/sphere_quad/sphere_quad.html), a C++
library which approximates an integral over the surface of the unit
sphere by applying a triangulation to the surface;

[SPHERE\_TRIANGLE\_MONTE\_CARLO](../../cpp_src/sphere_triangle_monte_carlo/sphere_triangle_monte_carlo.html),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over a spherical triangle on the surface of the
unit sphere in 3D;

[STROUD](../../cpp_src/stroud/stroud.html), a C++ library which
approximates the integral of a function on the surface or in the
interior of a variety of geometric shapes.

[XYZ\_DISPLAY\_OPENGL](../../cpp_src/xyz_display_opengl/xyz_display_opengl.html)
a C++ program which reads XYZ information defining points in 3D, and
displays an image using OpenGL.

### Reference: {#reference align="center"}

-   Jacob Goodman, Joseph ORourke, editors,\
    Handbook of Discrete and Computational Geometry,\
    Second Edition,\
    CRC/Chapman and Hall, 2004,\
    ISBN: 1-58488-301-4,\
    LC: QA167.H36.

### Source Code: {#source-code align="center"}

-   [sphere\_triangle\_quad.cpp](sphere_triangle_quad.cpp), the source
    code.
-   [sphere\_triangle\_quad.hpp](sphere_triangle_quad.hpp), the include
    file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [sphere\_triangle\_quad\_prb.cpp](sphere_triangle_quad_prb.cpp), a
    sample problem.
-   [sphere\_triangle\_quad\_prb\_output.txt](sphere_triangle_quad_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **ARC\_COSINE** computes the arc cosine function, with argument
    truncation.
-   **ARC\_SINE** computes the arc sine function, with argument
    truncation.
-   **ATAN4** computes the inverse tangent of the ratio Y / X.
-   **I4\_POWER** returns the value of I\^J.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_MIN** returns the minimum of two R8's.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **R8VEC\_DOT\_PRODUCT** computes the dot product of a pair of
    R8VEC's.
-   **R8VEC\_NORM** returns the L2 norm of an R8VEC.
-   **R8VEC\_POLARIZE** decomposes an R8VEC into normal and parallel
    components.
-   **SPHERE01\_DISTANCE\_XYZ** computes great circle distances on a
    unit sphere.
-   **SPHERE01\_SAMPLE** picks random points on a unit sphere.
-   **SPHERE01\_TRIANGLE\_ANGLES\_TO\_AREA:** area of spherical triangle
    on unit sphere.
-   **SPHERE01\_TRIANGLE\_PROJECT** projects from plane to spherical
    triangle.
-   **SPHERE01\_TRIANGLE\_PROJECT2** projects from plane to spherical
    triangle.
-   **SPHERE01\_TRIANGLE\_QUAD\_00:** quadrature over a triangle on the
    unit sphere.
-   **SPHERE01\_TRIANGLE\_QUAD\_01:** quadrature over a triangle on the
    unit sphere.
-   **SPHERE01\_TRIANGLE\_QUAD\_02:** quadrature over a triangle on the
    unit sphere.
-   **SPHERE01\_TRIANGLE\_QUAD\_03:** quadrature over a triangle on the
    unit sphere.
-   **SPHERE01\_TRIANGLE\_QUAD\_ICOS1C:** centroid rule, subdivide then
    project.
-   **SPHERE01\_TRIANGLE\_QUAD\_ICOS1M:** midside rule, subdivide then
    project.
-   **SPHERE01\_TRIANGLE\_QUAD\_ICOS1V:** vertex rule, subdivide then
    project.
-   **SPHERE01\_TRIANGLE\_QUAD\_ICOS2V:** vertex rule, subdivide then
    project.
-   **SPHERE01\_TRIANGLE\_SAMPLE:** sample points from triangle on unit
    sphere.
-   **SPHERE01\_TRIANGLE\_SIDES\_TO\_ANGLES:** angles of spherical
    triangle on unit sphere.
-   **SPHERE01\_TRIANGLE\_VERTICES\_TO\_AREA:** area of spherical
    triangle on unit sphere.
-   **SPHERE01\_TRIANGLE\_VERTICES\_TO\_CENTROID:** centroid of
    spherical triangle on unit sphere.
-   **SPHERE01\_TRIANGLE\_VERTICES\_TO\_MIDPOINTS** gets the midsides of
    a spherical triangle.
-   **SPHERE01\_TRIANGLE\_VERTICES\_TO\_SIDES\_3D:** sides of spherical
    triangle on unit sphere.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 29 September 2010.*
