DISK\_GRID\
Grid Points Within a Disk {#disk_grid-grid-points-within-a-disk align="center"}
=========================

------------------------------------------------------------------------

**DISK\_GRID** is a C++ library which generates a grid of points over
the interior of a disk in 2D.

The library allows the user to define an arbitrary disk by choosing its
radius and center. The user also chooses N, the number of subintervals
into which the horizontal radius line will be subdivided. It then
returns the gridpoints defined by that choice.

Another function allows the user to specify that N points on a Fibonacci
spiral are to be placed within the disk.

The test program creates input files to GNUPLOT which will create
graphic images of the grids.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**DISK\_GRID** is available in [a C
version](../../c_src/disk_grid/disk_grid.html) and [a C++
version](../../cpp_src/disk_grid/disk_grid.html) and [a FORTRAN77
version](../../f77_src/disk_grid/disk_grid.html) and [a FORTRAN90
version](../../f_src/disk_grid/disk_grid.html) and [a MATLAB
version](../../m_src/disk_grid/disk_grid.html) and [a Python
version](../../py_src/disk_grid/disk_grid.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BALL\_GRID](../../cpp_src/ball_grid/ball_grid.html), a C++ library
which computes a grid of points over the interior of a ball in 3D.

[CIRCLE\_ARC\_GRID](../../cpp_src/circle_arc_grid/circle_arc_grid.html),
a C++ program which computes points equally spaced along a circular arc;

[CUBE\_GRID](../../cpp_src/cube_grid/cube_grid.html), a C++ library
which computes a grid of points over the interior of a cube in 3D.

[ELLIPSE\_GRID](../../cpp_src/ellipse_grid/ellipse_grid.html), a C++
library which computes a grid of points over the interior of an ellipse
in 2D.

[ELLIPSOID\_GRID](../../cpp_src/ellipsoid_grid/ellipsoid_grid.html), a
C++ library which computes a grid of points over the interior of an
ellipsoid in 3D.

[GNUPLOT](../../cpp_src/gnuplot/gnuplot.html), C++ programs which
illustrate how a program can write data and command files so that
gnuplot can create plots of the program results.

[HYPERCUBE\_GRID](../../cpp_src/hypercube_grid/hypercube_grid.html), a
C++ library which computes a grid of points over the interior of a
hypercube in M dimensions.

[LINE\_GRID](../../cpp_src/line_grid/line_grid.html), a C++ library
which computes a grid of points over the interior of a line segment in
1D.

[POLYGON\_GRID](../../cpp_src/polygon_grid/polygon_grid.html), a C++
library which generates a grid of points over the interior of a polygon
in 2D.

[PYRAMID\_GRID](../../cpp_src/pyramid_grid/pyramid_grid.html), a C++
library which computes a grid of points over the interior of the unit
pyramid in 3D;

[SIMPLEX\_GRID](../../cpp_src/simplex_grid/simplex_grid.html), a C++
library which generates a regular grid of points over the interior of an
arbitrary simplex in M dimensions.

[SPHERE\_FIBONACCI\_GRID](../../cpp_src/sphere_fibonacci_grid/sphere_fibonacci_grid.html),
a C++ library which uses a Fibonacci spiral to create a grid of points
on the surface of the unit sphere in 3D.

[SPHERE\_GRID](../../cpp_src/sphere_grid/sphere_grid.html), a C++
library which provides a number of ways of generating grids of points,
or of points and lines, or of points and lines and faces, on the surface
of the unit sphere in 3D.

[SPHERE\_LLQ\_GRID](../../cpp_src/sphere_llq_grid/sphere_llq_grid.html),
a C++ library which uses longitudes and latitudes to create grids of
points, lines, and quadrilaterals on the surface of the unit sphere in
3D.

[SPHERE\_LLT\_GRID](../../cpp_src/sphere_llt_grid/sphere_llt_grid.html),
a C++ library which uses longitudes and latitudes to create grids of
points, lines, and triangles on the surface of the unit sphere in 3D.

[SQUARE\_GRID](../../cpp_src/square_grid/square_grid.html), a C++
library which computes a grid of points over the interior of a square in
2D.

[TETRAHEDRON\_GRID](../../cpp_src/tetrahedron_grid/tetrahedron_grid.html),
a C++ library which computes a grid of points over the interior of a
tetrahedron in 3D.

[TRIANGLE\_GRID](../../cpp_src/triangle_grid/triangle_grid.html), a C++
library which computes a grid of points over the interior of a triangle
in 2D.

[WEDGE\_GRID](../../cpp_src/wedge_grid/wedge_grid.html), a C++ library
which computes a grid of points over the interior of the unit wedge in
3D.

### Reference: {#reference align="center"}

1.  Richard Swinbank, James Purser,\
    Fibonacci grids: A novel approach to global modelling,\
    Quarterly Journal of the Royal Meteorological Society,\
    Volume 132, Number 619, July 2006 Part B, pages 1769-1793.

### Source Code: {#source-code align="center"}

-   [disk\_grid.cpp](disk_grid.cpp), the source code.
-   [disk\_grid.hpp](disk_grid.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [disk\_grid\_prb.cpp](disk_grid_prb.cpp), a sample calling program.
-   [disk\_grid\_prb\_output.txt](disk_grid_prb_output.txt), the output
    file.
-   [disk\_grid\_test01.xy](disk_grid_test01.xy), the list of grid
    points.
-   [disk\_grid\_test01\_boundary.txt](disk_grid_test01_boundary.txt),
    coordinates of the bounding circle.
-   [disk\_grid\_test01\_data.txt](disk_grid_test01_data.txt),
    coordinates of the grid points.
-   [disk\_grid\_test01\_commands.txt](disk_grid_test01_commands.txt),
    input commands to Gnuplot to create an image.
-   [disk\_grid\_test01.png](disk_grid_test01.png), an image of the
    points.
-   [disk\_grid\_test02.xy](disk_grid_test02.xy), the list of Fibonacci
    grid points.
-   [disk\_grid\_test02\_boundary.txt](disk_grid_test02_boundary.txt),
    coordinates of the bounding circle.
-   [disk\_grid\_test02\_data.txt](disk_grid_test02_data.txt),
    coordinates of the grid points.
-   [disk\_grid\_test02\_commands.txt](disk_grid_test02_commands.txt),
    input commands to Gnuplot to create an image.
-   [disk\_grid\_test02.png](disk_grid_test02.png), an image of the
    points.

### List of Routines: {#list-of-routines align="center"}

-   **DISK\_GRID** computes grid points inside a disk.
-   **DISK\_GRID\_COUNT** counts the grid points inside a disk.
-   **DISK\_GRID\_FIBONACCI** computes Fibonacci grid points inside a
    disk.
-   **R82VEC\_PRINT\_PART** prints "part" of an R82VEC.
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 20 October 2013.*
