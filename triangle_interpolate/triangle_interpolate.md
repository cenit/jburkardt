TRIANGLE\_INTERPOLATE\
Interpolation on a Triangle {#triangle_interpolate-interpolation-on-a-triangle align="center"}
===========================

------------------------------------------------------------------------

**TRIANGLE\_INTERPOLATE** is a C++ library which demonstrates some
simple techniques for interpolating data on a triangle.

In the most common case, the value of a quantity is known at the
vertices of a triangle, and a reasonable interpolated value is desired
at some point p in the interior of that triangle. This can be done by
linear interpolation.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TRIANGLE\_INTERPOLATE** is available in [a C
version](../../c_src/triangle_interpolate/triangle_interpolate.md) and
[a C++
version](../../master/triangle_interpolate/triangle_interpolate.md)
and [a FORTRAN90
version](../../f_src/triangle_interpolate/triangle_interpolate.md) and
[a MATLAB
version](../../m_src/triangle_interpolate/triangle_interpolate.md) and
[a Python
version](../../py_src/triangle_interpolate/triangle_interpolate.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FEM\_BASIS](../../master/fem_basis/fem_basis.md), a C++ library
which can define basis functions for the finite element method (FEM) for
any degree in an M-dimensional simplex (1D interval, 2D triangle, 3D
tetrahedron, and higher dimensional generalizations.)

[GEOMETRY](../../master/geometry/geometry.md), a C++ library which
performs geometric calculations in 2, 3 and N dimensional space.

[TOMS886](../../master/toms886/toms886.md), a C++ library which
defines the Padua points for interpolation in a 2D region, including the
rectangle, triangle, and ellipse, by Marco Caliari, Stefano de Marchi,
Marco Vianello. This is a version of ACM TOMS algorithm 886.

[TRIANGLE\_ANALYZE](../../master/triangle_analyze/triangle_analyze.md),
a C++ program which reads a triangle defined in a file, and uses the
triangle\_properties() library to compute angles, area, centroid,
circumcircle, edge lengths, incircle, orientation, orthocenter, and
quality.

[TRIANGLE\_FEKETE\_RULE](../../master/triangle_fekete_rule/triangle_fekete_rule.md),
a C++ library which defines Fekete rules for quadrature or interpolation
over the interior of a triangle in 2D.

[TRIANGLE\_GRID](../../master/triangle_grid/triangle_grid.md), a C++
library which computes a grid of points over the interior of a triangle
in 2D.

[TRIANGLE\_PROPERTIES](../../master/triangle_properties/triangle_properties.md),
a C++ library which can compute properties, including angles, area,
centroid, circumcircle, edge lengths, incircle, orientation,
orthocenter, and quality, of a triangle in 2D.

### Source Code: {#source-code align="center"}

-   [triangle\_interpolate.cpp](triangle_interpolate.cpp), the source
    code.
-   [triangle\_interpolate.hpp](triangle_interpolate.hpp), the include
    file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [triangle\_interpolate\_prb.cpp](triangle_interpolate_prb.cpp) a
    sample calling program.
-   [triangle\_interpolate\_prb\_output.txt](triangle_interpolate_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **R8VEC\_UNIFORM\_01** returns a unit pseudorandom R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TRIANGLE\_AREA** computes the area of a triangle in 2D.
-   **TRIANGLE\_INTERPOLATE\_LINEAR** interpolates data given on a
    triangle's vertices.
-   **UNIFORM\_IN\_TRIANGLE\_MAP1** maps uniform points into a triangle.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 20 January 2016.*
