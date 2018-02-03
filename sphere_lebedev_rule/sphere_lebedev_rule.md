SPHERE\_LEBEDEV\_RULE\
Quadrature Rules for the Unit Sphere {#sphere_lebedev_rule-quadrature-rules-for-the-unit-sphere align="center"}
====================================

------------------------------------------------------------------------

**SPHERE\_LEBEDEV\_RULE** is a C++ library which computes Lebedev
quadrature rules over the surface of the unit sphere in 3D.

Vyacheslav Lebedev determined a family of 65 quadrature rules for the
unit sphere, increasing in precision from 3 to 131, by 2 each time. This
software library computes any one of a subset of 32 of these rules.

Each rule is defined as a list of **N** values of **theta**, **phi**,
and **w**. Here:

-   **theta** is a longitudinal angle, measured in degrees, and ranging
    from -180 to +180.
-   **phi** is a latitudinal angle, measured in degrees, and ranging
    from 0 to 180.
-   **w** is a weight.

Of course, each pair of values (**theta~i~**, **phi~i~**) has a
corresponding Cartesian representation:

> **x~i~** = cos ( **theta~i~** ) \* sin ( **phi~i~** )\
> **y~i~** = sin ( **theta~i~** ) \* sin ( **phi~i~** )\
> **z~i~** = cos ( **phi~i~** )\

which may be more useful when evaluating integrands.

The integral of a function **f(x,y,z)** over the surface of the unit
sphere can be approximated by

> integral **f(x,y,z)** = 4 \* pi \* sum ( 1 &lt;= i &lt;= **N** )
> f(**x~i~,y~i~,z~i~**)

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SPHERE\_LEBEDEV\_RULE** is available in [a C
version](../../c_src/sphere_lebedev_rule/sphere_lebedev_rule.md) and
[a C++
version](../../master/sphere_lebedev_rule/sphere_lebedev_rule.md) and
[a FORTRAN77
version](../../f77_src/sphere_lebedev_rule/sphere_lebedev_rule.md) and
[a FORTRAN90
version](../../f_src/sphere_lebedev_rule/sphere_lebedev_rule.md) and
[a MATLAB
version](../../m_src/sphere_lebedev_rule/sphere_lebedev_rule.md).

### Related Programs: {#related-programs align="center"}

[CIRCLE\_RULE](../../master/circle_rule/circle_rule.md), a C++
library which computes quadrature rules over the circumference of the
unit circle in 2D.

[CUBE\_FELIPPA\_RULE](../../master/cube_felippa_rule/cube_felippa_rule.md),
a C++ library which returns the points and weights of a Felippa
quadrature rule over the interior of a cube in 3D.

[PYRAMID\_FELIPPA\_RULE](../../master/pyramid_felippa_rule/pyramid_felippa_rule.md),
a C++ library which returns Felippa's quadratures rules for
approximating integrals over the interior of a pyramid in 3D.

[SPHERE\_CVT](../../f_src/sphere_cvt/sphere_cvt.md), a FORTRAN90
library which creates a mesh of well-separated points using Centroidal
Voronoi Tessellations, over the surface of the unit sphere in 3D.

[SPHERE\_DESIGN\_RULE](../../f_src/sphere_design_rule/sphere_design_rule.md),
a FORTRAN90 library which returns point sets on the surface of the unit
sphere, known as "designs", which can be useful for estimating integrals
on the surface, among other uses.

[SPHERE\_GRID](../../master/sphere_grid/sphere_grid.md), a C++
library which provides a number of ways of generating grids of points,
or of points and lines, or of points and lines and faces, over the unit
sphere.

[SPHERE\_LEBEDEV\_RULE](../../datasets/sphere_lebedev_rule/sphere_lebedev_rule.md),
a dataset directory which contains sets of points on a unit sphere which
can be used for quadrature rules of a known precision;

[SPHERE\_LEBEDEV\_RULE\_DISPLAY](../../m_src/sphere_lebedev_rule_display/sphere_lebedev_rule_display.md),
a MATLAB program which reads a file defining a Lebedev quadrature rule
for the unit sphere and displays the point locations.

[SPHERE\_MONTE\_CARLO](../../master/sphere_monte_carlo/sphere_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the surface of the unit sphere in 3D;

[SPHERE\_QUAD](../../master/sphere_quad/sphere_quad.md), a C++
library which approximates an integral by applying a triangulation over
the surface of the unit sphere in 3D;

[SPHERE\_TRIANGLE\_QUAD](../../master/sphere_triangle_quad/sphere_triangle_quad.md),
a C++ library which estimates the integral of a function over a
spherical triangle.

[SPHERE\_XYZ\_DISPLAY](../../m_src/sphere_xyz_display/sphere_xyz_display.md),
a MATLAB program which reads XYZ information defining points in 3D, and
displays a unit sphere and the points in the MATLAB 3D graphics window.

[SPHERE\_XYZ\_DISPLAY\_OPENGL](../../master/sphere_xyz_display_opengl/sphere_xyz_display_opengl.md),
a C++ program which reads XYZ information defining points in 3D, and
displays a unit sphere and the points, using OpenGL.

[SPHERE\_XYZF\_DISPLAY](../../m_src/sphere_xyzf_display/sphere_xyzf_display.md),
a MATLAB program which reads XYZF information defining points and faces,
and displays a unit sphere, the points, and the faces, in the MATLAB 3D
graphics window. This can be used, for instance, to display Voronoi
diagrams or Delaunay triangulations on the unit sphere.

[SQUARE\_FELIPPA\_RULE](../../master/square_felippa_rule/square_felippa_rule.md),
a C++ library which returns the points and weights of a Felippa
quadrature rule over the interior of a square in 2D.

[TETRAHEDRON\_FELIPPA\_RULE](../../master/tetrahedron_felippa_rule/tetrahedron_felippa_rule.md),
a C++ library which returns Felippa's quadratures rules for
approximating integrals over the interior of a tetrahedron in 3D.

[TRIANGLE\_FEKETE\_RULE](../../master/triangle_fekete_rule/triangle_fekete_rule.md),
a C++ library which defines Fekete rules for interpolation or quadrature
over the interior of a triangle in 2D.

[TRIANGLE\_FELIPPA\_RULE](../../master/triangle_felippa_rule/triangle_felippa_rule.md),
a C++ library which returns Felippa's quadratures rules for
approximating integrals over the interior of a triangle in 2D.

[WEDGE\_FELIPPA\_RULE](../../master/wedge_felippa_rule/wedge_felippa_rule.md),
a C++ library which returns quadratures rules for approximating
integrals over the interior of the unit wedge in 3D.

### Reference: {#reference align="center"}

1.  Axel Becke,\
    A multicenter numerical integration scheme for polyatomic
    molecules,\
    Journal of Chemical Physics,\
    Volume 88, Number 4, 15 February 1988, pages 2547-2553.
2.  Vyacheslav Lebedev, Dmitri Laikov,\
    A quadrature formula for the sphere of the 131st algebraic order of
    accuracy,\
    Russian Academy of Sciences Doklady Mathematics,\
    Volume 59, Number 3, 1999, pages 477-481.
3.  Vyacheslav Lebedev,\
    A quadrature formula for the sphere of 59th algebraic order of
    accuracy,\
    Russian Academy of Sciences Doklady Mathematics,\
    Volume 50, 1995, pages 283-286.
4.  Vyacheslav Lebedev, A.L. Skorokhodov,\
    Quadrature formulas of orders 41, 47, and 53 for the sphere,\
    Russian Academy of Sciences Doklady Mathematics,\
    Volume 45, 1992, pages 587-592.
5.  Vyacheslav Lebedev,\
    Spherical quadrature formulas exact to orders 25-29,\
    Siberian Mathematical Journal,\
    Volume 18, 1977, pages 99-107.
6.  Vyacheslav Lebedev,\
    Quadratures on a sphere,\
    Computational Mathematics and Mathematical Physics,\
    Volume 16, 1976, pages 10-24.
7.  Vyacheslav Lebedev,\
    Values of the nodes and weights of ninth to seventeenth order
    Gauss-Markov quadrature formulae invariant under the octahedron
    group with inversion,\
    Computational Mathematics and Mathematical Physics,\
    Volume 15, 1975, pages 44-51.

### Source Code: {#source-code align="center"}

-   [sphere\_lebedev\_rule.cpp](sphere_lebedev_rule.cpp), the source
    code;
-   [sphere\_lebedev\_rule.hpp](sphere_lebedev_rule.hpp), the include
    file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [sphere\_lebedev\_rule\_prb.cpp](sphere_lebedev_rule_prb.cpp), the
    calling program;
-   [sphere\_lebedev\_rule\_prb\_output.txt](sphere_lebedev_rule_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **AVAILABLE\_TABLE** returns the availability of a Lebedev rule.
-   **GEN\_OH** generates points under OH symmetry.
-   **LD\_BY\_ORDER** returns a Lebedev angular grid given its order.
-   **LD0006** computes the 6 point Lebedev angular grid.
-   **LD0014** computes the 14 point Lebedev angular grid.
-   **LD0026** computes the 26 point Lebedev angular grid.
-   **LD0038** computes the 38 point Lebedev angular grid.
-   **LD0050** computes the 50 point Lebedev angular grid.
-   **LD0074** computes the 74 point Lebedev angular grid.
-   **LD0086** computes the 86 point Lebedev angular grid.
-   **LD0110** computes the 110 point Lebedev angular grid.
-   **LD0146** computes the 146 point Lebedev angular grid.
-   **LD0170** computes the 170 point Lebedev angular grid.
-   **LD0194** computes the 194 point Lebedev angular grid.
-   **LD0230** computes the 230 point Lebedev angular grid.
-   **LD0266** computes the 266 point Lebedev angular grid.
-   **LD0302** computes the 302 point Lebedev angular grid.
-   **LD0350** computes the 350 point Lebedev angular grid.
-   **LD0434** computes the 434 point Lebedev angular grid.
-   **LD0590** computes the 590 point Lebedev angular grid.
-   **LD0770** computes the 770 point Lebedev angular grid.
-   **LD0974** computes the 974 point Lebedev angular grid.
-   **LD1202** computes the 1202 point Lebedev angular grid.
-   **LD1454** computes the 1454 point Lebedev angular grid.
-   **LD1730** computes the 1730 point Lebedev angular grid.
-   **LD2030** computes the 2030 point Lebedev angular grid.
-   **LD2354** computes the 2354 point Lebedev angular grid.
-   **LD2702** computes the 2702 point Lebedev angular grid.
-   **LD3074** computes the 3074 point Lebedev angular grid.
-   **LD3470** computes the 3470 point Lebedev angular grid.
-   **LD3890** computes the 3890 point Lebedev angular grid.
-   **LD4334** computes the 4334 point Lebedev angular grid.
-   **LD4802** computes the 4802 point Lebedev angular grid.
-   **LD5294** computes the 5294 point Lebedev angular grid.
-   **LD5810** computes the 5810 point Lebedev angular grid.
-   **ORDER\_TABLE** returns the order of a Lebedev rule.
-   **PRECISION\_TABLE** returns the precision of a Lebedev rule.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **XYZ\_TO\_TP** converts (X,Y,Z) to (Theta,Phi) coordinates on the
    unit sphere.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 13 September 2010.*
