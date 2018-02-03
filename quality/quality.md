QUALITY\
Quality Measures for Pointsets in M dimensions {#quality-quality-measures-for-pointsets-in-m-dimensions align="center"}
==============================================

------------------------------------------------------------------------

**QUALITY** is a C++ library which computes some measures of the quality
of dispersion of a set of N points in the unit hypercube in M
dimensional space.

The region to be analyzed is defined by a single routine which the user
may specify. We will refer to that routine as **sample\_routine**. This
routine is simply required to return sample points from the region.

The library includes routines for two simple regions, namely the unit
hypercube and the unit hypersphere. If either of these regions is of
interest, then the user simply has to pass the appropriate name, either
**sample\_hypercube\_uniform** or **sample\_sphere\_uniform**. For other
regions, the user should write the appropriate version of a sampling
routine.

The unit hypercube in M dimensional space is simply the set of all
vectors whose entries are between 0 and 1. It is a natural abstraction
of the unit line segment, the unit square, and the unit cube, and
represents a very simple chunk of **M** dimensional space.

The unit hypersphere in M dimensional space is simply the set of all
points whose distance from the origin is 1 or less.

The quality measures computed include:

-   **Alpha**, the minimum angle divided by the maximum possible minimum
    angle (for triangulated 2D datasets only);
-   **Area**, the ratio of the minimum and maximum triangle areas (for
    triangulated 2D datasets only);
-   **Beta**, the standard deviation of the minimum spacing between
    nodes, normalized by the average spacing between nodes;
-   **Chi**, the regularity measure;
-   **D**, the second moment determinant measure;
-   **E**, the Voronoi energy measure;
-   **Gamma**, the mesh ratio;
-   **H**, the point distribution norm;
-   **Lambda**, the COV measure;
-   **Mu**, the point distribution ratio;
-   **Nu**, the cell volume deviation;
-   **Q**, two times the radius of the inscribed circle divided by the
    radius of the circumscribed circle (for triangulated 2D datasets
    only);
-   **R0**, the Riesz S=0 energy;
-   **S**, the sphere volume measure (unit hypercube datasets only).
-   **Tau**, the second moment trace measure;

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**QUALITY** is available in [a C++
version](../../cpp_src/quality/quality.html) and [a FORTRAN90
version](../../f_src/quality/quality.html) and [a MATLAB
version](../../m_src/quality/quality.html).

### Related Programs: {#related-programs align="center"}

[DIAPHONY](../../f_src/diaphony/diaphony.html), a FORTRAN90 program
which reads a file of N points in M dimensions and computes its
diaphony, a measure of point dispersion.

[STAR\_DISCREPANCY](../../cpp_src/star_discrepancy/star_discrepancy.html),
a C++ program which reads a TABLE file of N points in M dimensions
(presumed to lie in the unit hypercube) and computes bounds on the star
discrepancy, a measure of dispersion, by Eric Thiemard.

[TABLE\_QUALITY](../../cpp_src/table_quality/table_quality.html), a C++
program which analyzes the point spacing quality of data stored in a
file.

[TET\_MESH](../../cpp_src/tet_mesh/tet_mesh.html), a C++ library which
includes some quality measures for tetrahedral meshes.

[TET\_MESH\_QUALITY](../../cpp_src/tet_mesh_quality/tet_mesh_quality.html),
a C++ program which computes quality measures of a tetrahedral mesh.

[TRIANGULATION\_QUALITY](../../cpp_src/triangulation_quality/triangulation_quality.html),
a C++ program which computes quality measures of a triangulation.

### Reference: {#reference align="center"}

1.  David Field,\
    Qualitative Measures for Initial Meshes,\
    International Journal of Numerical Methods in Engineering,\
    Volume 47, 2000, pages 887-906.
2.  DP Hardin, Edward Saff,\
    Discretizing Manifolds via Minimum Energy Points,\
    Notices of the AMS,\
    Volume 51, Number 10, November 2004, pages 1186-1194.
3.  Per-Olof Persson, Gilbert Strang,\
    A Simple Mesh Generator in MATLAB,\
    SIAM Review,\
    Volume 46, Number 2, pages 329-345, June 2004.
4.  Yuki Saka, Max Gunzburger, John Burkardt,\
    Latinized, Improved LHS, and CVT Point Sets in Hypercubes,\
    International Journal of Numerical Analysis and Modeling,\
    Volume 4, Number 3-4, 2007, pages 729-743,

### Source Code: {#source-code align="center"}

-   [quality.cpp](quality.cpp), the source code.
-   [quality.hpp](quality.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [quality\_prb.cpp](quality_prb.cpp), the test code.
-   [cvt\_02\_00100.txt](cvt_02_00100.txt), a set of 100 CVT points in
    the 2D unit hypercube.
-   [quality\_prb\_output.txt](quality_prb_output.txt), the output file.
-   [halton\_02\_00100.txt](halton_02_00100.txt), a set of 100 Halton
    points in the 2D unit hypercube.
-   [sphere\_02\_00100.txt](sphere_02_00100.txt), a set of 100 points in
    the 2D unit sphere.

### List of Routines: {#list-of-routines align="center"}

-   **ALPHA\_MEASURE** determines the triangulated pointset quality
    measure ALPHA.
-   **ARC\_COSINE** computes the arc cosine function, with argument
    truncation.
-   **AREA\_MEASURE** determines the area ratio quality measure.
-   **BETA\_MEASURE** determines the pointset quality measure BETA.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **CHI\_MEASURE** determines the pointset quality measure CHI.
-   **D\_MEASURE** determines the pointset quality measure D.
-   **DGE\_DET** computes the determinant of a square matrix in DGE
    storage.
-   **DIAEDG** chooses a diagonal edge.
-   **DTABLE\_DATA\_READ** reads the data from a real TABLE file.
-   **DTABLE\_HEADER\_READ** reads the header from a real TABLE file.
-   **DTRIS2** constructs a Delaunay triangulation of 2D vertices.
-   **E\_MEASURE** determines the pointset quality measure E.
-   **FILE\_COLUMN\_COUNT** counts the number of columns in the first
    line of a file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **FIND\_CLOSEST** finds the nearest R point to each S point.
-   **GAMMA\_MEASURE** determines the pointset quality measure GAMMA.
-   **H\_MEASURE** determines the pointset quality measure H.
-   **I4\_MAX** returns the maximum of two integers.
-   **I4\_MIN** returns the smaller of two integers.
-   **I4\_MODP** returns the nonnegative remainder of integer division.
-   **I4\_SIGN** returns the sign of an integer.
-   **I4\_WRAP** forces an integer to lie between given limits by
    wrapping.
-   **I4VEC\_INDICATOR** sets an integer vector to the indicator vector.
-   **I4VEC\_PRINT** prints an integer vector.
-   **LAMBDA\_MEASURE** determines the pointset quality measure LAMBDA.
-   **LRLINE** determines where a point lies in relation to a directed
    line.
-   **MU\_MEASURE** determines the pointset quality measure MU.
-   **NU\_MEASURE** determines the pointset quality measure NU.
-   **PERM\_INV** inverts a permutation "in place".
-   **POINTSET\_SPACING** determines the minimum spacing between points
    in the set.
-   **Q\_MEASURE** determines the triangulated pointset quality
    measure Q.
-   **R0\_MEASURE** determines the pointset quality measure R0.
-   **R8\_EPSILON** returns the round off unit for double precision
    arithmetic.
-   **R8\_HUGE** returns a "huge" double precision value.
-   **R8\_MAX** returns the maximum of two double precision values.
-   **R8\_MIN** returns the minimum of two double precision values.
-   **R8\_UNIFORM\_01** is a portable pseudorandom number generator.
-   **R82VEC\_PERMUTE** permutes an R2 vector in place.
-   **R82VEC\_SORT\_HEAP\_INDEX\_A** does an indexed heap ascending sort
    of an R2 vector.
-   **R8MAT\_IN\_01** is TRUE if the entries of an array are in the
    range \[0,1\].
-   **R8MAT\_TRANSPOSE\_PRINT** prints a real matrix, transposed.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of a real matrix,
    transposed.
-   **R8MAT\_UNIFORM\_01** fills a double precision array with
    pseudorandom values.
-   **R8VEC\_MAX** returns the value of the maximum element in a double
    precision array.
-   **R8VEC\_MIN** returns the value of the minimum element in a double
    precision array.
-   **R8VEC\_NORMAL\_01** samples the standard normal probability
    distribution.
-   **R8VEC\_UNIFORM\_01** fills a double precision vector with
    pseudorandom values.
-   **RADIUS\_MAXIMUS** finds the biggest possible nonintersecting
    sphere.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **SAMPLE\_HYPERCUBE\_UNIFORM** returns sample points in the unit
    hypercube.
-   **SAMPLE\_SPHERE\_UNIFORM** samples points inside the unit sphere.
-   **SPHERE\_MEASURE** determines the pointset quality measure S.
-   **SPHERE\_VOLUME\_ND** computes the volume of a sphere in ND.
-   **SWAPEC** swaps diagonal edges until all triangles are Delaunay.
-   **TAU\_MEASURE** determines the pointset quality measure TAU.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TIMESTRING** returns the current YMDHMS date as a string.
-   **VBEDG** determines which boundary edges are visible to a point.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 06 November 2008.*
