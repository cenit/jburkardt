CIRCLE\_SEGMENT\
Area, Height, Angle, Sampling and Quadrature {#circle_segment-area-height-angle-sampling-and-quadrature align="center"}
============================================

------------------------------------------------------------------------

**CIRCLE\_SEGMENT** is a C++ library which carries out various
computations associated with a circle segment, using gnuplot to
illustrate some of the computations.

Begin with a circle of radius R. Choose two points P1 and P2 on the
circle, and draw the chord P1:P2. This chord divides the circle into two
pieces, each of which is called a circle segment. Consider one of the
pieces. The "angle" THETA of this segment is the angle P1:C:P2, where C
is the center of the circle. Let Q be the point on the chord P1:P2 which
is closest to C. The "height" H of the segment is the distance from Q to
the perimeter of the circle.

This library considers various computations, including:

**CIRCLE\_SEGMENT** creates some graphics plots using gnuplot.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**CIRCLE\_SEGMENT** is available in [a C
version](../../c_src/circle_segment/circle_segment.md) and [a C++
version](../../master/circle_segment/circle_segment.md) and [a
FORTRAN77 version](../../f77_src/circle_segment/circle_segment.md) and
[a FORTRAN90 version](../../f_src/circle_segment/circle_segment.md)
and [a MATLAB version](../../m_src/circle_segment/circle_segment.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CIRCLE\_RULE](../../master/circle_rule/circle_rule.md), a C++
library which computes quadrature rules for the unit circle in 2D, that
is, the circumference of the circle of radius 1 and center (0,0).

[GEOMETRY](../../master/geometry/geometry.md), a C++ library which
performs geometric calculations in 2, 3 and M dimensional space,
including the computation of angles, areas, containment, distances,
intersections, lengths, and volumes.

[GNUPLOT](../../master/gnuplot/gnuplot.md), C++ programs which
illustrate how a program can write data and command files so that
gnuplot can create plots of the program results.

[STROUD](../../master/stroud/stroud.md), a C++ library which defines
quadrature rules for a variety of M-dimensional regions, including the
interior of the square, cube and hypercube, the pyramid, cone and
ellipse, the hexagon, the M-dimensional octahedron, the circle, sphere
and hypersphere, the triangle, tetrahedron and simplex, and the surface
of the circle, sphere and hypersphere.

### Source Code: {#source-code align="center"}

-   [circle\_segment.cpp](circle_segment.cpp), the source code.
-   [circle\_segment.hpp](circle_segment.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [circle\_segment\_prb.cpp](circle_segment_prb.cpp), a sample calling
    program.
-   [circle\_segment\_prb\_output.txt](circle_segment_prb_output.txt),
    the output file.

Test number 6 creates some samples of points in circle segments, and
writes out data files and gnuplot command files to create graphics:

-   [sample01\_boundary.txt](sample01_boundary.txt), data defining the
    boundary of the circle segment.
-   [sample01\_commands.txt](sample01_commands.txt), commands to gnuplot
    to create a plot.
-   [sample01\_data.txt](sample01_data.txt), the sample data.
-   [sample01.png](sample01.png), the plot
-   [sample02\_boundary.txt](sample02_boundary.txt), data defining the
    boundary of the circle segment.
-   [sample02\_commands.txt](sample02_commands.txt), commands to gnuplot
    to create a plot.
-   [sample02\_data.txt](sample02_data.txt), the sample data.
-   [sample02.png](sample02.png), the plot
-   [sample03\_boundary.txt](sample03_boundary.txt), data defining the
    boundary of the circle segment.
-   [sample03\_commands.txt](sample03_commands.txt), commands to gnuplot
    to create a plot.
-   [sample03\_data.txt](sample03_data.txt), the sample data.
-   [sample03.png](sample03.png), the plot
-   [sample04\_boundary.txt](sample04_boundary.txt), data defining the
    boundary of the circle segment.
-   [sample04\_commands.txt](sample04_commands.txt), commands to gnuplot
    to create a plot.
-   [sample04\_data.txt](sample04_data.txt), the sample data.
-   [sample04.png](sample04.png), the plot

### List of Routines: {#list-of-routines align="center"}

-   **CIRCLE\_SEGMENT\_ANGLE\_FROM\_CHORD** computes the angle of a
    circle segment.
-   **CIRCLE\_SEGMENT\_ANGLE\_FROM\_CHORD\_ANGLES** computes angle of a
    circle segment.
-   **CIRCLE\_SEGMENT\_ANGLE\_FROM\_HEIGHT** computes the angle of a
    circle segment.
-   **CIRCLE\_SEGMENT\_AREA\_FROM\_ANGLE** computes the area of a circle
    segment.
-   **CIRCLE\_SEGMENT\_AREA\_FROM\_CHORD** computes the area of a circle
    segment.
-   **CIRCLE\_SEGMENT\_AREA\_FROM\_HEIGHT** computes the area of a
    circle segment.
-   **CIRCLE\_SEGMENT\_AREA\_FROM\_SAMPLE** computes the area of a
    circle segment.
-   **CIRCLE\_SEGMENT\_CDF** computes a CDF related to a circle segment.
-   **CIRCLE\_SEGMENT\_CENTROID\_FROM\_CHORD** computes the centroid of
    a circle segment.
-   **CIRCLE\_SEGMENT\_CENTROID\_FROM\_HEIGHT** computes centroid of a
    circle segment.
-   **CIRCLE\_SEGMENT\_CENTROID\_FROM\_SAMPLE** estimates a circle
    segment centroid.
-   **CIRCLE\_SEGMENT\_CONTAINS\_POINT** reports whether a point is in a
    circle segment.
-   **CIRCLE\_SEGMENT\_HEIGHT\_FROM\_ANGLE:** height of a circle segment
    from angle.
-   **CIRCLE\_SEGMENT\_HEIGHT\_FROM\_AREA:** height of a circle segment
    from area.
-   **CIRCLE\_SEGMENT\_HEIGHT\_FROM\_CHORD:** height of a circle segment
    from chord.
-   **CIRCLE\_SEGMENT\_SAMPLE\_FROM\_CHORD** samples points from a
    circle segment.
-   **CIRCLE\_SEGMENT\_SAMPLE\_FROM\_HEIGHT** samples points from a
    circle segment.
-   **CIRCLE\_SEGMENT\_WIDTH\_FROM\_HEIGHT** computes the width of a
    circle segment.
-   **FILENAME\_INC** increments a partially numeric file name.
-   **R8\_ACOS** computes the arc cosine function, with argument
    truncation.
-   **R8\_ASIN** computes the arc sine function, with argument
    truncation.
-   **R8\_ATAN** computes the inverse tangent of the ratio Y / X.
-   **R8\_EPSILON** returns the R8 round off unit.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_MIN** returns the minimum of two R8's.
-   **R8\_UNIFORM\_01** returns a pseudorandom R8 scaled to \[0,1\].
-   **R8MAT\_UNIFORM\_01\_NEW** fills an R8MAT with pseudorandom values
    scaled to \[0,1\].
-   **R8VEC\_LINSPACE\_NEW** creates a vector of linearly spaced values.
-   **R8VEC\_SUM** returns the sum of an R8VEC.
-   **R8VEC\_UNIFORM\_01\_NEW** returns a unit pseudorandom R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TRIDISOLVE** solves a tridiagonal system of linear equations.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 12 July 2013.*
