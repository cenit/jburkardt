RANDOM\_DATA\
Generation of random data {#random_data-generation-of-random-data align="center"}
=========================

------------------------------------------------------------------------

**RANDOM\_DATA** is a C++ library which uses a random number generator
(RNG) to sample points for various probability distributions, spatial
dimensions, and geometries, including the M-dimensional cube, ellipsoid,
simplex and sphere.

Most of these routines assume that there is an available source of
pseudorandom numbers, distributed uniformly in the unit interval
\[0,1\]. In this package, that role is played by the routine
**R8\_UNIFORM\_01**, which allows us some portability. We can get the
same results in C, FORTRAN or MATLAB, for instance. In general, however,
it would be more efficient to use the language-specific random number
generator for this purpose.

If we have a source of pseudorandom values in \[0,1\], it's trivial to
generate pseudorandom points in any line segment; it's easy to take
pairs of pseudorandom values to sample a square, or triples to sample a
cube. It's easy to see how to deal with square region that is translated
from the origin, or scaled by different amounts in either axis, or given
a rigid rotation. The same simple transformations can be applied to
higher dimensional cubes, without giving us any concern.

For all these simple shapes, which are just generalizations of a square,
we can easily see how to generate sample points that we can guarantee
will lie inside the region; in most cases, we can also guarantee that
these points will tend to be *uniformly distributed*, that is, every
subregion can expect to contain a number of points proportional to its
share of the total area.

However, we will **not** achieve uniform distribution in the simple case
of a rectangle of nonequal sides **\[0,A\]** x **\[0,B\]**, if we
naively scale the random values **(u1,u2)** to **(A\*u1,B\*u2)**. In
that case, the expected point density of a wide, short region will
differ from that of a narrow tall region. The absence of uniformity is
most obvious if the points are plotted.

If you realize that uniformity is desirable, and easily lost, it is
possible to adjust the approach so that rectangles are properly handled.

But rectangles are much too simple. We are interested in circles,
triangles, and other shapes. Once the geometry of the region becomes
more "interesting", there are two common ways to continue.

In the *acceptance-rejection method*, uniform points are generated in a
superregion that encloses the region. Then, points that do not lie
within the region are rejected. More points are generated until enough
have been accepted to satisfy the needs. If a circle was the region of
interest, for instance, we could surround it with a box, generate points
in the box, and throw away those points that don't actually lie in the
circle. The resulting set of samples will be a uniform sampling of the
circle.

In the *direct mapping* method, a formula or mapping is determined so
that each time a set of values is taken from the pseudorandom number
generator, it is guaranteed to correspond to a point in the region. For
the circle problem, we can use one uniform random number to choose an
angle between 0 and 2 PI, the other to choose a radius. (The radius must
be chosen in an appropriate way to guarantee uniformity, however.) Thus,
every time we input two uniform random values, we get a pair (R,T) that
corresponds to a point in the circle.

The acceptance-rejection method can be simple to program, and can handle
arbitrary regions. The direct mapping method is less sensitive to
variations in the aspect ratio of a region and other irregularities.
However, direct mappings are only known for certain common mathematical
shapes.

Points may also be generated according to a nonuniform density. This
creates an additional complication in programming. However, there are
some cases in which it is possible to use direct mapping to turn a
stream of scalar uniform random values into a set of multivariate data
that is governed by a normal distribution.

Another way to generate points replaces the uniform pseudorandom number
generator by a *quasirandom number generator*. The main difference is
that successive elements of a quasirandom sequence may be highly
correlated (bad for certain Monte Carlo applications) but will tend to
cover the region in a much more regular way than pseudorandom numbers.
Any process that uses uniform random numbers to carry out sampling can
easily be modified to do the same sampling with a quasirandom sequence
like the Halton sequence, for instance.

The library includes a routine that can write the resulting data points
to a file.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**RANDOM\_DATA** is available in [a C
version](../../c_src/random_data/random_data.html) and [a C++
version](../../cpp_src/random_data/random_data.html) and [a FORTRAN77
version](../../f77_src/random_data/random_data.html) and [a FORTRAN90
version](../../f_src/random_data/random_data.html) and [a MATLAB
version](../../m_src/random_data/random_data.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[ASA183](../../cpp_src/asa183/asa183.html), a C++ library which
implements the Wichman-Hill pseudorandom number generator.

[DISCRETE\_PDF\_SAMPLE\_2D](../../cpp_src/discrete_pdf_sample_2d/discrete_pdf_sample_2d.html),
a C++ program which demonstrates how to construct a Probability Density
Function (PDF) from a table of sample data, and then to use that PDF to
create new samples.

[RBOX](../../c_src/rbox/rbox.html), a C program which produces random
data from a number of regions.

[RSITES](../../cpp_src/rsites/rsites.html), a C++ program which produces
random data in an M-dimensional box.

[SPHERE\_QUAD](../../cpp_src/sphere_quad/sphere_quad.html), a C++
library which approximates an integral over the surface of the unit
sphere by applying a triangulation to the surface;

[TETRAHEDRON\_MONTE\_CARLO](../../cpp_src/tetrahedron_monte_carlo/tetrahedron_monte_carlo.html),
a C++ program which uses the Monte Carlo method to estimate integrals
over a tetrahedron.

[TETRAHEDRON\_SAMPLES](../../datasets/tetrahedron_samples/tetrahedron_samples.html),
a dataset directory which contains examples of sets of sample points
from the unit tetrahedron.

[TRIANGLE\_HISTOGRAM](../../cpp_src/triangle_histogram/triangle_histogram.html),
a C++ program which computes histograms of data on the unit triangle.

[TRIANGLE\_MONTE\_CARLO](../../cpp_src/triangle_monte_carlo/triangle_monte_carlo.html),
a C++ program which uses the Monte Carlo method to estimate integrals
over a triangle.

[TRIANGLE\_SAMPLES](../../datasets/triangle_samples/triangle_samples.html),
a dataset directory which contains examples of sets of sample points
from the unit triangle.

[UNIFORM](../../cpp_src/uniform/uniform.html), a C++ library which
samples the uniform random distribution.

[XYZ\_DISPLAY](../../m_src/xyz_display/xyz_display.html), a MATLAB
program which reads XYZ information defining points in 3D, and displays
an image in the MATLAB graphics window.

[XYZ\_DISPLAY\_OPENGL](../../cpp_src/xyz_display_opengl/xyz_display_opengl.html),
a C++ program which reads XYZ information defining points in 3D, and
displays an image using OpenGL.

### Reference: {#reference align="center"}

1.  Milton Abramowitz, Irene Stegun,\
    Handbook of Mathematical Functions,\
    National Bureau of Standards, 1964,\
    ISBN: 0-486-61272-4,\
    LC: QA47.A34.
2.  James Arvo,\
    Stratified sampling of spherical triangles,\
    Computer Graphics Proceedings, Annual Conference Series,\
    ACM SIGGRAPH '95, pages 437-438, 1995.
3.  Gerard Bashein, Paul Detmer,\
    Centroid of a Polygon,\
    in Graphics Gems IV,\
    edited by Paul Heckbert,\
    AP Professional, 1994,\
    ISBN: 0123361559,\
    LC: T385.G6974.
4.  Paul Bratley, Bennett Fox, Linus Schrage,\
    A Guide to Simulation,\
    Second Edition,\
    Springer, 1987,\
    ISBN: 0387964673,\
    LC: QA76.9.C65.B73.
5.  Russell Cheng,\
    Random Variate Generation,\
    in Handbook of Simulation,\
    edited by Jerry Banks,\
    Wiley, 1998,\
    ISBN: 0471134031,\
    LC: T57.62.H37.
6.  Jack Dongarra, Jim Bunch, Cleve Moler, Pete Stewart,\
    LINPACK User's Guide,\
    SIAM, 1979,\
    ISBN13: 978-0-898711-72-1,\
    LC: QA214.L56.
7.  John Halton,\
    On the efficiency of certain quasi-random sequences of points in
    evaluating multi-dimensional integrals,\
    Numerische Mathematik,\
    Volume 2, Number 1, December 1960, pages 84-90.
8.  John Halton, GB Smith,\
    Algorithm 247: Radical-Inverse Quasi-Random Point Sequence,\
    Communications of the ACM,\
    Volume 7, Number 12, December 1964, pages 701-702.
9.  John Hammersley,\
    Monte Carlo methods for solving multivariable problems,\
    Proceedings of the New York Academy of Science,\
    Volume 86, 1960, pages 844-874.
10. Ladislav Kocis, William Whiten,\
    Computational Investigations of Low-Discrepancy Sequences,\
    ACM Transactions on Mathematical Software,\
    Volume 23, Number 2, June 1997, pages 266-294.
11. Pierre LEcuyer,\
    Random Number Generation,\
    in Handbook of Simulation,\
    edited by Jerry Banks,\
    Wiley, 1998,\
    ISBN: 0471134031,\
    LC: T57.62.H37.
12. Albert Nijenhuis, Herbert Wilf,\
    Combinatorial Algorithms for Computers and Calculators,\
    Second Edition,\
    Academic Press, 1978,\
    ISBN: 0-12-519260-6,\
    LC: QA164.N54.
13. Reuven Rubinstein,\
    Monte Carlo Optimization, Simulation and Sensitivity of Queueing
    Networks,\
    Krieger, 1992,\
    ISBN: 0894647644,\
    LC: QA298.R79.
14. Peter Shirley,\
    Nonuniform Random Point Sets Via Warping,\
    in Graphics Gems III,\
    edited by David Kirk,\
    Academic Press, 1992,\
    ISBN: 0124096735,\
    LC: T385.G6973
15. Greg Turk,\
    Generating Random Points in a Triangle,\
    in Graphics Gems I,\
    edited by Andrew Glassner,\
    AP Professional, 1990,\
    ISBN: 0122861663,\
    LC: T385.G697
16. Daniel Zwillinger, editor,\
    CRC Standard Mathematical Tables and Formulae,\
    30th Edition,\
    CRC Press, 1996,\
    ISBN: 0-8493-2479-3,\
    LC: QA47.M315.

### Source Code: {#source-code align="center"}

-   [random\_data.cpp](random_data.cpp), the source code.
-   [random\_data.hpp](random_data.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [random\_data\_prb.cpp](random_data_prb.cpp), the sample calling
    program.
-   [random\_data\_prb\_output.txt](random_data_prb_output.txt), output
    from the sample calling program.

The sample calling program generates sets of points:

-   [bad\_in\_tetrahedron.txt](bad_in_tetrahedron.txt), points in the
    unit tetrahedron, not uniformly chosen.
-   [bad\_in\_triangle.txt](bad_in_triangle.txt), points in the unit
    triangle, not uniformly chosen.
-   [brownian.txt](brownian.txt), Brownian motion.
-   [grid\_in\_cube01.txt](grid_in_cube01.txt), grid points in the unit
    hypercube, with CENTER = 1.
-   [halton\_in\_circle01\_accept.txt](halton_in_circle01_accept.txt),
    Halton points in the unit circle, acceptance/rejection.
-   [halton\_in\_circle01\_map.txt](halton_in_circle01_map.txt), Halton
    points in the unit circle, direct mapping.
-   [halton\_in\_cube01.txt](halton_in_cube01.txt), Halton points in the
    unit hypercube.
-   [hammersley\_in\_cube01.txt](hammersley_in_cube01.txt), Hammersley
    points.
-   [normal.txt](normal.txt), normal points, with strong correlation
    between the two coordinates.
-   [normal\_circular.txt](normal_circular.txt), circular normal points.
-   [normal\_simple.txt](normal_simple.txt), normal points in which
    there is no correlation between the X and Y coordinates.
-   [polygon\_vertices.txt](polygon_vertices.txt), the vertices of a
    polygon to be filled by random points.
-   [uniform\_in\_annulus.txt](uniform_in_annulus.txt), uniform points
    in an annulus, mapping.
-   [uniform\_in\_annulus\_accept.txt](uniform_in_annulus_accept.txt),
    uniform points in an annulus, acceptance/rejection.
-   [uniform\_in\_annulus\_sector.txt](uniform_in_annulus_sector.txt),
    uniform points in an annulus sector.
-   [uniform\_in\_cube01.txt](uniform_in_cube01.txt), uniform points in
    the unit hypercube.
-   [uniform\_in\_circle01\_map.txt](uniform_in_circle01_map.txt),
    uniform points in the unit circle.
-   [uniform\_in\_ellipsoid\_map.txt](uniform_in_ellipsoid_map.txt),
    uniform points in an ellipsoid.
-   [uniform\_in\_parallelogram\_map.txt](uniform_in_parallelogram_map.txt),
    uniform points in a parallelogram.
-   [uniform\_in\_polygon\_map.txt](uniform_in_polygon_map.txt), uniform
    points in a polygon (a star, in this case).
-   [uniform\_in\_sector\_map.txt](uniform_in_sector_map.txt), uniform
    points in a circular sector.
-   [uniform\_in\_simplex01\_map.txt](uniform_in_simplex01_map.txt),
    uniform points in the unit simplex.
-   [uniform\_in\_sphere01\_map.txt](uniform_in_sphere01_map.txt),
    uniform points in the unit sphere.
-   [uniform\_in\_triangle\_map2.txt](uniform_in_triangle_map1.txt),
    uniform points in an arbitrary triangle, Turk method 1.
-   [uniform\_in\_triangle\_map2.txt](uniform_in_triangle_map2.txt),
    uniform points in an arbitrary triangle, Turk method 2.
-   [uniform\_in\_triangle01\_map.txt](uniform_in_triangle01_map.txt),
    uniform points in the unit triangle.
-   [uniform\_on\_cube01.txt](uniform_on_cube01.txt), uniform points on
    the unit cube.
-   [uniform\_on\_ellipsoid\_map.txt](uniform_on_ellipsoid_map.txt),
    uniform points on an ellipsoid.
-   [uniform\_on\_hemisphere01\_phong.txt](uniform_on_hemisphere01_phong.txt),
    uniform random points on a hemisphere, Phong distribution.
-   [uniform\_on\_simplex01\_map.txt](uniform_on_simplex01_map.txt),
    uniform points on the unit simplex.
-   [uniform\_on\_sphere01\_map.txt](uniform_on_sphere01_map.txt),
    uniform points on the unit sphere in 2D.
-   [uniform\_on\_sphere01\_patch\_tp.txt](uniform_on_sphere01_patch_tp.txt),
    uniform random points on an TP (theta,phi) "patch" of the unit
    sphere in 3D.
-   [uniform\_on\_sphere01\_patch\_xyz.txt](uniform_on_sphere01_patch_xyz.txt),
    uniform random points on an XYZ "patch" of the unit sphere in 3D.
-   [uniform\_on\_sphere01\_triangle\_xyz.txt](uniform_on_sphere01_triangle_xyz.txt),
    uniform random points on a spherical triangle of the unit sphere in
    3D using XYZ coordinates.
-   [uniform\_walk.txt](uniform_walk.txt), points on a uniform random
    walk.

A file of commands is provided to simplify the use of PLOT\_POINTS:

-   [plot\_points\_input.txt](plot_points_input.txt), commands to
    PLOT\_POINTS.
-   [plot\_points\_output.txt](plot_points_output.txt), printed output
    from PLOT\_POINTS in response to the commands.

PLOT\_POINTS makes Encapsulated PostScript images of the points, in
cases where the data is 2 dimensional. These EPS files are converted to
PNG images for posting on this web page.

-   [brownian.png](brownian.png).
-   [grid\_in\_cube01.png](grid_in_cube01.png)
-   [halton\_in\_circle01\_accept.png](halton_in_circle01_accept.png)
-   [halton\_in\_circle01\_map.png](halton_in_circle01_map.png)
-   [halton\_in\_cube01.png](halton_in_cube01.png)
-   [hammersley\_in\_cube01.png](hammersley_in_cube01.png)
-   [normal.png](normal.png)
-   [normal\_circular.png](normal_circular.png)
-   [normal\_simple.png](normal_simple.png)
-   [polygon\_vertices.png](polygon_vertices.png),
-   [uniform\_in\_annulus.png](uniform_in_annulus.png),
-   [uniform\_in\_annulus\_accept.png](uniform_in_annulus_accept.png),
-   [uniform\_in\_annulus\_sector.png](uniform_in_annulus_sector.png),
-   [uniform\_in\_cube01.png](uniform_in_cube01.png),
-   [uniform\_in\_circle01\_map.png](uniform_in_circle01_map.png),
-   [uniform\_in\_ellipsoid\_map.png](uniform_in_ellipsoid_map.png),
-   [uniform\_in\_parallelogram\_map.png](uniform_in_parallelogram_map.png),
-   [uniform\_in\_polygon\_map.png](uniform_in_polygon_map.png),
-   [uniform\_in\_sector\_map.png](uniform_in_sector_map.png),
-   [uniform\_in\_simplex01\_map.png](uniform_in_simplex01_map.png),
-   [uniform\_in\_sphere01\_map.png](uniform_in_sphere01_map.png),
-   [uniform\_in\_triangle\_map1.png](uniform_in_triangle_map1.png),
-   [uniform\_in\_triangle\_map2.png](uniform_in_triangle_map2.png),
-   [uniform\_in\_triangle01\_map.png](uniform_in_triangle01_map.png),
-   [uniform\_on\_ellipsoid\_map.png](uniform_on_ellipsoid_map.png),
-   [uniform\_on\_simplex01\_map.png](uniform_on_simplex01_map.png),
-   [uniform\_on\_sphere01\_map.png](uniform_on_sphere01_map.png),
-   [uniform\_on\_sphere01\_patch\_tp.png](uniform_on_sphere01_patch_tp.png)
-   [uniform\_on\_sphere01\_patch\_xyz.png](uniform_on_sphere01_patch_xyz.png)
-   [uniform\_walk.png](uniform_walk.png),

### List of Routines: {#list-of-routines align="center"}

-   **ARC\_COSINE** computes the arc cosine function, with argument
    truncation.
-   **BAD\_IN\_SIMPLEX01** is a "bad" (nonuniform) sampling of the unit
    simplex.
-   **BROWNIAN** creates Brownian motion points.
-   **DAXPY** computes constant times a vector plus a vector.
-   **DDOT** forms the dot product of two vectors.
-   **DGE\_MXV** multiplies a DGE matrix times a vector.
-   **DIRECTION\_UNIFORM\_ND** generates a random direction vector in
    ND.
-   **DPOFA** factors a real symmetric positive definite matrix.
-   **DPOSL** solves a linear system factored by DPOCO or DPOFA.
-   **DUT\_MXV** multiplies an DUT matrix times a vector.
-   **GET\_SEED** returns a random seed for the random number generator.
-   **GRID\_IN\_CUBE01** generates a grid dataset in the unit hypercube.
-   **GRID\_SIDE** finds the smallest DIM\_NUM dimensional grid
    containing at least N points.
-   **HALHAM\_DIM\_NUM\_CHECK** checks DIM\_NUM for a Halton or
    Hammersley sequence.
-   **HALHAM\_LEAP\_CHECK** checks LEAP for a Halton or Hammersley
    sequence.
-   **HALHAM\_N\_CHECK** checks N for a Halton or Hammersley sequence.
-   **HALHAM\_SEED\_CHECK** checks SEED for a Halton or Hammersley
    sequence.
-   **HALHAM\_STEP\_CHECK** checks STEP for a Halton or Hammersley
    sequence.
-   **HALTON\_BASE\_CHECK** is TRUE if BASE is legal.
-   **HALTON\_IN\_CIRCLE01\_ACCEPT** accepts Halton points in a unit
    circle.
-   **HALTON\_IN\_CIRCLE01\_MAP** maps Halton points into a unit circle.
-   **HALTON\_IN\_CUBE01** generates Halton points in the unit
    hypercube.
-   **HAMMERSLEY\_BASE\_CHECK** is TRUE if BASE is legal.
-   **HAMMERSLEY\_IN\_CUBE01** computes Hammersley points in the unit
    hypercube.
-   **I4\_FACTORIAL** returns N!.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the smaller of two I4's.
-   **I4\_MODP** returns the nonnegative remainder of I4 division.
-   **I4\_TO\_HALTON** computes one element of a leaped Halton
    subsequence.
-   **I4\_TO\_HALTON\_SEQUENCE** computes N elements of a leaped Halton
    subsequence.
-   **I4\_TO\_HAMMERSLEY** computes one element of a leaped Hammersley
    subsequence.
-   **I4\_TO\_HAMMERSLEY\_SEQUENCE** computes N elements of a leaped
    Hammersley subsequence.
-   **I4\_UNIFORM\_AB** returns a scaled pseudorandom I4 between A
    and B.
-   **I4VEC\_TRANSPOSE\_PRINT** prints an I4VEC "transposed".
-   **KSUB\_RANDOM2** selects a random subset of size K from a set of
    size N.
-   **NORMAL** creates normally distributed points in DIM\_NUM space.
-   **NORMAL\_CIRCULAR** creates circularly normal points in 2 space.
-   **NORMAL\_MULTIVARIATE** samples a multivariate normal distribution.
-   **NORMAL\_SIMPLE** creates normally distributed points in DIM\_NUM
    space.
-   **POLYGON\_CENTROID\_2D** computes the centroid of a polygon in 2D.
-   **PRIME** returns any of the first PRIME\_MAX prime numbers.
-   **R4\_ABS** returns the absolute value of an R4.
-   **R4\_NINT** returns the nearest integer to an R4.
-   **R8\_EPSILON** returns the round off unit for double precision
    arithmetic.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_MIN** returns the minimum of two R8's.
-   **R8\_NINT** returns the nearest integer to a double precision real
    value.
-   **R8\_NORMAL\_01** samples the standard normal probability
    distribution.
-   **R8\_PI** returns the value of PI to 16 digits.
-   **R8\_UNIFORM\_01** is a portable pseudorandom number generator.
-   **R8MAT\_NORMAL\_01\_NEW** returns a unit pseudonormal R8MAT.
-   **R8MAT\_PRINT** prints an R8MAT, with an optional title.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8MAT\_UNIFORM\_01\_NEW** returns a new unit pseudorandom R8MAT.
-   **R8MAT\_WRITE** writes an R8MAT file with no header.
-   **R8VEC\_DOT\_PRODUCT** computes the dot product of a pair of
    R8VEC's.
-   **R8VEC\_NORM** returns the L2 norm of an R8VEC.
-   **R8VEC\_NORMAL\_01** samples the standard normal probability
    distribution.
-   **R8VEC\_NORMAL\_01\_NEW** returns a unit pseudonormal R8VEC.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC\_SUM** returns the sum of an R8VEC.
-   **R8VEC\_UNIFORM\_01** fills a double precision vector with
    pseudorandom values.
-   **R8VEC\_UNIFORM\_01\_NEW** returns a new unit pseudorandom R8VEC.
-   **R8VEC\_ZERO\_NEW** creates and zeroes an R8VEC.
-   **RANDOM\_INITIALIZE** initializes the RANDOM random number
    generator.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **SCALE\_FROM\_SIMPLEX01** rescales data from a unit to non-unit
    simplex.
-   **SCALE\_TO\_BALL01** translates and rescales data to fit within the
    unit ball.
-   **SCALE\_TO\_BLOCK01** translates and rescales data to fit in the
    unit block.
-   **SCALE\_TO\_CUBE01** translates and rescales data to the unit
    hypercube.
-   **STRI\_ANGLES\_TO\_AREA** computes the area of a spherical
    triangle.
-   **STRI\_SIDES\_TO\_ANGLES** computes spherical triangle angles.
-   **STRI\_VERTICES\_TO\_SIDES\_3D** computes spherical triangle sides.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TRIANGLE\_AREA\_2D** computes the area of a triangle in 2D.
-   **TUPLE\_NEXT\_FAST** computes the next element of a tuple space,
    "fast".
-   **UNIFORM\_IN\_ANNULUS** samples a circular annulus.
-   **UNIFORM\_IN\_ANNULUS\_ACCEPT** accepts points in an annulus.
-   **UNIFORM\_IN\_ANNULUS\_SECTOR** samples an annular sector in 2D.
-   **UNIFORM\_IN\_CIRCLE01\_MAP** maps uniform points into the unit
    circle.
-   **UNIFORM\_IN\_CUBE01** creates uniform points in the unit
    hypercube.
-   **UNIFORM\_IN\_ELLIPSOID\_MAP** maps uniform points into an
    ellipsoid.
-   **UNIFORM\_IN\_PARALLELOGRAM\_MAP** maps uniform points into a
    parallelogram.
-   **UNIFORM\_IN\_POLYGON\_MAP** maps uniform points into a polygon.
-   **UNIFORM\_IN\_SECTOR\_MAP** maps uniform points into a circular
    sector.
-   **UNIFORM\_IN\_SIMPLEX01** maps uniform points into the unit
    simplex.
-   **UNIFORM\_IN\_SPHERE01\_MAP** maps uniform points into the unit
    sphere.
-   **UNIFORM\_IN\_TETRAHEDRON** returns uniform points in a
    tetrahedron.
-   **UNIFORM\_IN\_TRIANGLE\_MAP1** maps uniform points into a triangle.
-   **UNIFORM\_IN\_TRIANGLE\_MAP2** maps uniform points into a triangle.
-   **UNIFORM\_IN\_TRIANGLE01\_MAP** maps uniform points into the unit
    triangle.
-   **UNIFORM\_ON\_CUBE** returns random points on the surface of a
    cube.
-   **UNIFORM\_ON\_CUBE01** returns random points on the surface of the
    unit cube.
-   **UNIFORM\_ON\_ELLIPSOID\_MAP** maps uniform points onto an
    ellipsoid.
-   **UNIFORM\_ON\_HEMISPHERE01\_PHONG** maps uniform points onto the
    unit hemisphere.
-   **UNIFORM\_ON\_SIMPLEX01\_MAP** maps uniform points onto the unit
    simplex.
-   **UNIFORM\_ON\_SPHERE01\_MAP** maps uniform points onto the unit
    sphere.
-   **UNIFORM\_ON\_SPHERE01\_PATCH\_TP** maps uniform points to a
    spherical TP patch.
-   **UNIFORM\_ON\_SPHERE01\_PATCH\_XYZ** maps uniform points to a
    spherical XYZ patch.
-   **UNIFORM\_ON\_SPHERE01\_TRIANGLE\_XYZ:** sample spherical triangle,
    XYZ coordinates.
-   **UNIFORM\_WALK** generates points on a uniform random walk.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 20 April 2013.*
