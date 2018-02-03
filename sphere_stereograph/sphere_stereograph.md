SPHERE\_STEREOGRAPH\
Stereographic Mapping Between Sphere and Plane {#sphere_stereograph-stereographic-mapping-between-sphere-and-plane align="center"}
==============================================

------------------------------------------------------------------------

**SPHERE\_STEREOGRAPH** is a C++ program which implements the standard
stereographic mapping between the unit sphere and the plane Z=1, as well
as a generalization of this mapping.

The stereographic projection preserves angles, and is a conformal
mapping. This implies, for instance, that the Delaunay triangulation of
a sphere maps to a corresponding Delaunay triangulation of the plane.

Circles on the sphere that do not pass through the focus will be
projected to circles on the plane. Circles on the sphere that do pass
through the focus will be projected to straight lines on the plane.

### The Standard Projection {#the-standard-projection align="center"}

We start with a sphere of radius 1 and center **C** = (0,0,0).

A plane is chosen, tangent to the sphere, at a point of tangency **T**
which we take to be the "north pole", **T** = (0,0,1). We use a focus
point **F**, which we take to be the "south pole", (0,0,-1)

For any point **P** on the sphere, the stereographic projection **Q** of
the point is defined by drawing the line from **F** through **P**, and
computing **Q** as the intersection of this line with the plane.

For any point **Q** on the plane, the stereographic inverse projection
**P** of the point is defined by drawing the line from **F** through
**Q**, and computing **P** as the intersection of this line with the
sphere.

The function **sphere\_stereograph** carries out the standard
projection, and **sphere\_stereograph\_inverse** does the inverse.

### Projection with arbitrary center and focus {#projection-with-arbitrary-center-and-focus align="center"}

One way to generalize the projection is to allow the center **C** and
focus point **F** to be arbitrary. If we assume the point of tangency is
antipodal to **F** then **T** = 2\***C**-**F**. Once these points are
defined, the stereographic projection relative to **F**, **C**, and
**T** can be set up in the same way as before.

The function **sphere\_stereograph2** carries out the generalized
projection, and **sphere\_stereograph2\_inverse** does the inverse.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SPHERE\_STEREOGRAPH** is available in [a C
version](../../c_src/sphere_stereograph/sphere_stereograph.html) and [a
C++ version](../../cpp_src/sphere_stereograph/sphere_stereograph.html)
and [a FORTRAN77
version](../../f77_src/sphere_stereograph/sphere_stereograph.html) and
[a FORTRAN90
version](../../f_src/sphere_stereograph/sphere_stereograph.html) and [a
MATLAB version](../../m_src/sphere_stereograph/sphere_stereograph.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[GEOMETRY](../../cpp_src/geometry/geometry.html), a C++ library which
performs geometric calculations in 2, 3 and M dimensional space.

[SPHERE\_GRID](../../cpp_src/sphere_grid/sphere_grid.html), a C++
library which provides a number of ways of generating grids of points,
or of points and lines, or of points and lines and faces, over the unit
sphere.

[SPHERE\_STEREOGRAPH\_DISPLAY](../../m_src/sphere_stereograph_display/sphere_stereograph_display.html),
a MATLAB library which computes and displays the results of several
stereographic projections between a sphere and a plane.

### Reference: {#reference align="center"}

1.  C F Marcus,\
    The stereographic projection in vector notation,\
    Mathematics Magazine,\
    Volume 39, Number 2, March 1966, pages 100-102.

### Source Code: {#source-code align="center"}

-   [sphere\_stereograph.cpp](sphere_stereograph.cpp), the source code.
-   [sphere\_stereograph.hpp](sphere_stereograph.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [sphere\_stereograph\_prb.cpp](sphere_stereograph_prb.cpp), a sample
    calling program.
-   [sphere\_stereograph\_prb\_output.txt](sphere_stereograph_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **PLANE\_NORMAL\_BASIS\_3D** finds two perpendicular vectors in a
    plane in 3D.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8MAT\_UNIFORM\_01\_NEW** returns a unit pseudorandom R8MAT.
-   **R8VEC\_ANY\_NORMAL** returns some normal vector to V1.
-   **R8VEC\_COPY** copies an R8VEC.
-   **R8VEC\_CROSS\_PRODUCT\_3D** computes the cross product of two
    R8VEC's in 3D.
-   **R8VEC\_NORM** returns the L2 norm of an R8VEC.
-   **R8VEC\_NORM\_AFFINE** returns the affine L2 norm of an R8VEC.
-   **R8VEC\_NORMAL\_01** samples the standard normal probability
    distribution.
-   **R8VEC\_TRANSPOSE\_PRINT** prints a vector on one line.
-   **R8VEC\_UNIFORM\_01** fills a double precision vector with
    pseudorandom values.
-   **R8VEC\_UNIFORM\_01\_NEW** returns a new unit pseudorandom R8VEC.
-   **R8VEC\_ZERO** zeroes an R8VEC.
-   **SPHERE\_STEREOGRAPH** computes the stereographic image of points
    on a sphere.
-   **SPHERE\_STEREOGRAPH\_INVERSE** computes stereographic preimages of
    points.
-   **SPHERE\_STEREOGRAPH2** computes the stereographic image of points
    on a sphere.
-   **SPHERE\_STEREOGRAPH2\_INVERSE** computes stereographic preimages
    of points.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **UNIFORM\_ON\_SPHERE01\_MAP** maps uniform points onto the unit
    sphere.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 11 November 2010.*
