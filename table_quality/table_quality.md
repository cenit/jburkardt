TABLE\_QUALITY\
Interactive Program for\
Point Dispersion Quality {#table_quality-interactive-program-for-point-dispersion-quality align="center"}
========================

------------------------------------------------------------------------

**TABLE\_QUALITY** is a C++ program which reads a data file contains the
coordinates of N points in an M dimensional region, and computes some
measures of the quality of dispersion of the points.

The program assumes that the pointset lies in the unit hypercube.
However, it is easy to modify the program to handle other regions. A
single routine, named **sample\_routine**, is required to return sample
points in the region. To handle a different region, simply modify this
routine, and rebuild the program. One other built-in routine is already
available, for sampling the unit sphere.

The unit hypercube in M dimensional space is simply the set of all
vectors whose entries are between 0 and 1. It is a natural abstraction
of the unit line segment, the unit square, and the unit cube, and
represents a very simple chunk of **M** dimensional space.

The quality measures computed include:

-   **Alpha**, the minimum angle measure (for triangulated 2D datasets
    only);
-   **Beta**, the standard deviation of the minimum spacing between
    nodes, normalized by the average spacing;
-   **Chi**, the regularity measure;
-   **D**, the second moment determinant measure;
-   **E**, the Voronoi energy measure;
-   **Gamma**, the mesh ratio;
-   **H**, the point distribution norm;
-   **Lambda**, the COV measure;
-   **Mu**, the point distribution ratio;
-   **Nu**, the cell volume deviation;
-   **Q**, the triangle shape uniformity measure (for triangulated 2D
    datasets only);
-   **R0**, the Riesz S=0 energy;
-   **S**, the sphere volume measure (unit hypercube datasets only).
-   **Tau**, the second moment trace measure;

The program also prints:

-   **Gamma\_min**, the minimum spacing between nodes;
-   **Gamma\_ave**, the average spacing between nodes;
-   **Gamma\_max**, the maximum spacing between nodes;
-   **Gamma\_std**, the standard deviation of the spacing between nodes;

### Usage: {#usage align="center"}

 **table\_quality** *filename* 
:   reads the data in *filename*, computes the quality measures, and
    prints them out.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TABLE\_QUALITY** is available in [a C++
version](../../master/table_quality/table_quality.md) and [a
FORTRAN90 version](../../f_src/table_quality/table_quality.md) and [a
MATLAB version](../../m_src/table_quality/table_quality.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[DIAPHONY](../../master/diaphony/diaphony.md), a C++ program which
reads a file of N points in M dimensions and computes its diaphony, a
measure of point dispersion.

[QUALITY](../../master/quality/quality.md), a C++ library which makes
the computations needed by TABLE\_QUALITY. To build a copy of
**TABLE\_QUALITY**, a compiled copy of the **QUALITY** library must be
available.

[STAR\_DISCREPANCY](../../master/star_discrepancy/star_discrepancy.md),
a C++ program which reads a TABLE file of M points in N dimensions
(presumed to lie in the unit hypercube) and computes bounds on the star
discrepancy, a measure of dispersion, by Eric Thiemard.

[TABLE\_LATINIZE](../../master/table_latinize/table_latinize.md), a
C++ program which can read a TABLE file and write out a "latinized"
version.

### Reference: {#reference align="center"}

1.  David Field,\
    Qualitative Measures for Initial Meshes,\
    International Journal of Numerical Methods in Engineering,\
    Volume 47, 2000, pages 887-906.
2.  D P Hardin, Edward Saff,\
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

-   [table\_quality.cpp](table_quality.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [cvt\_02\_00100.txt](cvt_02_00100.txt), a set of 100 CVT points in
    2D.
-   [cvt\_02\_00100\_quality.txt](cvt_02_00100_quality.txt), the quality
    analysis.
-   [cvt\_07\_00010.txt](cvt_07_00010.txt), a set of 10 CVT points in
    7D.
-   [cvt\_07\_00010\_quality.txt](cvt_07_00010_quality.txt), the quality
    analysis.
-   [halton\_02\_00100.txt](halton_02_00100.txt), a set of 100 Halton
    points in 2D.
-   [halton\_02\_00100\_quality.txt](halton_02_00100_quality.txt), the
    quality analysis.
-   [degen\_02\_00130.txt](degen_02_00130.txt), a set of 130 points in
    2D, which involve a degenerate triangulation.
-   [degen\_02\_00130\_quality.txt](degen_02_00130_quality.txt), the
    quality analysis.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for TABLE\_QUALITY.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 31 August 2005.*
