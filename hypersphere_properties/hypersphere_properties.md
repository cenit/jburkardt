HYPERSPHERE\_PROPERTIES\
Properties of the M-dimensional Sphere {#hypersphere_properties-properties-of-the-m-dimensional-sphere align="center"}
======================================

------------------------------------------------------------------------

**HYPERSPHERE\_PROPERTIES** is a C++ library which carries out various
operations for an M-dimensional hypersphere, including converting
between Cartesian and spherical coordinates, stereographic projection,
sampling the surface of the sphere, and computing the surface area and
volume.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**HYPERSPHERE\_PROPERTIES** is available in [a C
version](../../c_src/hypersphere_properties/hypersphere_properties.html)
and [a C++
version](../../cpp_src/hypersphere_properties/hypersphere_properties.html)
and [a FORTRAN77
version](../../f77_src/hypersphere_properties/hypersphere_properties.html)
and [a FORTRAN90
version](../../f_src/hypersphere_properties/hypersphere_properties.html)
and [a MATLAB
version.](../../m_src/hypersphere_properties/hypersphere_properties.html)

### Related Data and Programs: {#related-data-and-programs align="center"}

[GEOMETRY](../../cpp_src/geometry/geometry.html), a C++ library which
performs geometric calculations in 2, 3 and M dimensional space.

[HYPERSPHERE\_MONTE\_CARLO](../../cpp_src/hypersphere_monte_carlo/hypersphere_monte_carlo.html),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function on the surface of the unit sphere in M
dimensions;

[RANDOM\_DATA](../../cpp_src/random_data/random_data.html), a C++
library which generates sample points for various probability
distributions, spatial dimensions, and geometries, including the
M-dimensional cube, ellipsoid, simplex and sphere.

[SPHERE\_STEREOGRAPH](../../cpp_src/sphere_stereograph/sphere_stereograph.html),
a C++ library which computes the stereographic mapping between points on
the unit sphere and points on the plane Z = 1; a generalized mapping is
also available

### Reference: {#reference align="center"}

### Source Code: {#source-code align="center"}

-   [hypersphere\_properties.cpp](hypersphere_properties.cpp), the
    source code.
-   [hypersphere\_properties.hpp](hypersphere_properties.hpp), the
    include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [hypersphere\_properties\_prb.cpp](hypersphere_properties_prb.cpp),
    a sample calling program.
-   [hypersphere\_properties\_prb\_output.txt](hypersphere_properties_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **CARTESIAN\_TO\_HYPERSPHERE:** Cartesian to hypersphere coordinate
    transform.
-   **HYPERSPHERE\_01\_AREA** computes the surface area of a unit sphere
    in ND.
-   **HYPERSPHERE\_01\_AREA\_VALUES** returns some areas of the unit
    sphere in ND.
-   **HYPERSPHERE\_01\_INTERIOR\_UNIFORM:** uniform points inside unit
    hypersphere.
-   **HYPERSPHERE\_01\_SURFACE\_UNIFORM:** uniform points on unit
    hypersphere surface.
-   **HYPERSPHERE\_01\_VOLUME** computes the volume of a unit sphere in
    ND.
-   **HYPERSPHERE\_01\_VOLUME\_VALUES** returns some volumes of the unit
    sphere in ND.
-   **HYPERSPHERE\_AREA** computes the surface area of an implicit
    sphere in ND.
-   **HYPERSPHERE\_STEREOGRAPH:** stereographic mapping of points on a
    hypersphere.
-   **HYPERSPHERE\_STEREOGRAPH\_INVERSE** inverts a stereographic map.
-   **HYPERSPHERE\_SURFACE\_UNIFORM:** uniform hypersphere surface
    samples
-   **HYPERSPHERE\_TO\_CARTESIAN:** hypersphere to Cartesian coordinate
    transform.
-   **HYPERSPHERE\_VOLUME** computes the volume of a hypersphere.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **R8MAT\_NORMAL\_01** returns a unit pseudonormal R8MAT.
-   **R8VEC\_NORMAL\_01** returns a unit pseudonormal R8VEC.
-   **R8VEC\_TRANSPOSE\_PRINT** prints an R8VEC "transposed".
-   **R8VEC\_UNIFORM\_01** returns a unit pseudorandom R8VEC.
-   **SPHERE\_STEREOGRAPH** computes the stereographic image of points
    on a sphere.
-   **SPHERE\_STEREOGRAPH\_INVERSE** computes stereographic preimages of
    points.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 11 May 2014.*
