TRIANGLE\_PROPERTIES\
Properties of a Triangle {#triangle_properties-properties-of-a-triangle align="center"}
========================

------------------------------------------------------------------------

**TRIANGLE\_PROPERTIES** is a C++ library which can compute properties
of a triangle, including angles, area, centroid, circumcircle, edge
lengths, incircle, orientation, orthocenter, and quality.

These properties include:

-   Angles;
-   Area;
-   Centroid;
-   Circumcircle (center and radius);
-   Edge lengths;
-   Incircle (center and radius);
-   Orientation;
-   Orthocenter;
-   Quality: ratio of incircle radius / circumcircle radius;

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TRIANGLE\_PROPERTIES** is available in [a C
version](../../c_src/triangle_properties/triangle_properties.html) and
[a C++
version](../../cpp_src/triangle_properties/triangle_properties.html) and
[a FORTRAN90
version](../../f_src/triangle_properties/triangle_properties.html) and
[a MATLAB
version](../../m_src/triangle_properties/triangle_properties.html) and
[a Python
version](../../py_src/triangle_properties/triangle_properties.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[GEOMETRY](../../cpp_src/geometry/geometry.html), a C++ library which
performs geometric calculations in 2, 3 and N dimensional space.

[HYPERSPHERE\_PROPERTIES](../../cpp_src/hypersphere_properties/hypersphere_properties.html),
a C++ library which carries out various operations for an M-dimensional
hypersphere, including converting between Cartesian and spherical
coordinates, stereographic projection, sampling the surface of the
sphere, and computing the surface area and volume.

[POLYGON\_PROPERTIES](../../cpp_src/polygon_properties/polygon_properties.html),
a C++ library which computes properties of an arbitrary polygon in the
plane, defined by a sequence of vertices, including interior angles,
area, centroid, containment of a point, convexity, diameter, distance to
a point, inradius, lattice area, nearest point in set, outradius,
uniform sampling.

[TETRAHEDRON\_PROPERTIES](../../cpp_src/tetrahedron_properties/tetrahedron_properties.html),
a C++ program which computes properties of a given tetrahedron.

[TRIANGLE\_ANALYZE](../../cpp_src/triangle_analyze/triangle_analyze.html),
a C++ program which reads a triangle from a file, and then reports
various properties.

[TRIANGLE\_INTERPOLATE](../../cpp_src/triangle_interpolate/triangle_interpolate.html),
a C++ library which shows how vertex data can be interpolated at any
point in the interior of a triangle.

[TRIANGLES](../../datasets/triangles/triangles.html), a dataset
directory which contains examples of triangles;

### Source Code: {#source-code align="center"}

-   [triangle\_properties.cpp](triangle_properties.cpp), the source
    code.
-   [triangle\_properties.hpp](triangle_properties.hpp), the include
    file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [triangle\_properties\_prb.cpp](triangle_properties_prb.cpp) a
    sample calling program.
-   [triangle\_properties\_prb\_output.txt](triangle_properties_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **I4\_MODP** returns the nonnegative remainder of I4 division.
-   **I4\_WRAP** forces an I4 to lie between given limits by wrapping.
-   **LINE\_EXP\_IS\_DEGENERATE\_ND** finds if an explicit line is
    degenerate in ND.
-   **LINE\_EXP\_PERP** computes a line perpendicular to a line and
    through a point.
-   **LINE\_EXP2IMP** converts an explicit line to implicit form in 2D.
-   **LINE\_IMP\_IS\_DEGENERATE** finds if an implicit point is
    degenerate in 2D.
-   **LINES\_EXP\_INT** determines where two explicit lines intersect in
    2D.
-   **LINES\_IMP\_INT** determines where two implicit lines intersect in
    2D.
-   **R8\_ACOS** computes the arc cosine function, with argument
    truncation.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_MIN** returns the minimum of two R8's.
-   **R8\_UNIFORM\_01** returns a pseudorandom R8 scaled to \[0,1\].
-   **R8MAT\_INVERSE\_2D** inverts a 2 by 2 R8MAT using Cramer's rule.
-   **R8MAT\_SOLVE** uses Gauss-Jordan elimination to solve an N by N
    linear system.
-   **R8MAT\_TRANSPOSE\_PRINT** prints an R8MAT, transposed.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **R8VEC\_COPY** copies an R8VEC.
-   **R8VEC\_EQ** is true if two R8VEC's are equal.
-   **R8VEC\_NORM** returns the L2 norm of an R8VEC.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **SEGMENT\_POINT\_DIST:** distance ( line segment, point ) in 2D.
-   **SEGMENT\_POINT\_NEAR** finds the point on a line segment nearest a
    point in 2D.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TRIANGLE\_ANGLES** computes the angles of a triangle in 2D.
-   **TRIANGLE\_AREA** computes the area of a triangle in 2D.
-   **TRIANGLE\_CENTROID** computes the centroid of a triangle in 2D.
-   **TRIANGLE\_CIRCUMCIRCLE** computes the circumcircle of a triangle
    in 2D.
-   **TRIANGLE\_CONTAINS\_POINT** finds if a point is inside a triangle
    in 2D.
-   **TRIANGLE\_DIAMETER** computes the diameter of a triangle in 2D.
-   **TRIANGLE\_EDGE\_LENGTH** returns edge lengths of a triangle in 2D.
-   **TRIANGLE\_INCIRCLE** computes the inscribed circle of a triangle
    in 2D.
-   **TRIANGLE\_ORIENTATION** determines the orientation of a triangle
    in 2D.
-   **TRIANGLE\_ORTHOCENTER** computes the orthocenter of a triangle in
    2D.
-   **TRIANGLE\_POINT\_DIST:** distance ( triangle, point ) in 2D.
-   **TRIANGLE\_POINT\_NEAR** computes the nearest triangle point to a
    point in 2D.
-   **TRIANGLE\_QUALITY:** "quality" of a triangle in 2D.
-   **TRIANGLE\_REFERENCE\_SAMPLE** returns random points in the
    reference triangle.
-   **TRIANGLE\_SAMPLE** returns random points in a triangle.
-   **TRIANGLE\_XSI\_TO\_XY** converts from barycentric to XY
    coordinates in 2D.
-   **TRIANGLE\_XY\_TO\_XSI** converts from XY to barycentric in 2D.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 09 November 2015.*
