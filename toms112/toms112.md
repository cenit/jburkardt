TOMS112\
Point in Polygon {#toms112-point-in-polygon align="center"}
================

------------------------------------------------------------------------

**TOMS112** is a C++ library which determines whether a point is inside
a polygon.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TOMS112** is available in [a C
version](../../c_src/toms112/toms112.html) and [a C++
version](../../cpp_src/toms112/toms112.html) and [a FORTRAN90
version](../../f_src/toms112/toms112.html) and [a MATLAB
version](../../m_src/toms112/toms112.html) and [a Python
version](../../py_src/toms112/toms112.html).

### Related Software and Data: {#related-software-and-data align="center"}

[GEOMETRY](../../cpp_src/geometry/geometry.html), a C++7 library which
performs geometric calculations in 2, 3 and N dimensional space.

[POLYGON\_MONTE\_CARLO](../../cpp_src/polygon_monte_carlo/polygon_monte_carlo.html),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of a polygon in 2D.

[POLYGON\_PROPERTIES](../../cpp_src/polygon_properties/polygon_properties.html),
a C++ library which computes properties of an arbitrary polygon in the
plane, defined by a sequence of vertices, including interior angles,
area, centroid, containment of a point, convexity, diameter, distance to
a point, inradius, lattice area, nearest point in set, outradius,
uniform sampling.

[POLYGON\_TRIANGULATE](../../cpp_src/polygon_triangulate/polygon_triangulate.html),
a C++ library which triangulates a possibly nonconvex polygon, and which
can use gnuplot to display the external edges and internal diagonals of
the triangulation.

### Reference: {#reference align="center"}

1.  Moshe Shimrat,\
    Algorithm 112: Position of Point Relative to Polygon,\
    Communications of the ACM,\
    Volume 5, Number 8, August 1962, page 434.

### Source Code: {#source-code align="center"}

-   [toms112.cpp](toms112.cpp), the source code.
-   [toms112.hpp](toms112.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [toms112\_prb.cpp](toms112_prb.cpp), a sample calling program.
-   [toms112\_prb\_output.txt](toms112_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **POINT\_IN\_POLYGON** determines if a point is inside a polygon
-   **R8VEC2\_PRINT** prints an R8VEC2.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 30 November 2016.*
