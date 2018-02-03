LCVT\
Latin Centroidal Voronoi Tessellations {#lcvt-latin-centroidal-voronoi-tessellations align="center"}
======================================

------------------------------------------------------------------------

**LCVT** is a C++ library which creates Latin Centroidal Voronoi
Tessellation (CVT) datasets.

A Latin Square dataset is typically a two dimensional dataset of **N**
points in the unit square, with the property that, if both the **x** and
**y** axes are divided up into **N** equal subintervals, exactly one
dataset point has an **x** or **y** coordinate in each subinterval.
Latin squares can easily be extended to the case of **M** dimensions,
and may be pedantically called *Latin Hypersquares* or *Latin
Hypercubes* in such a case. Statisticians like Latin Squares, as do
experiment designers, and and people who need to approximate scalar
functions of many variables.

The fact that the projection of a Latin Square dataset onto any
coordinate axis is either exactly evenly spaced, or approximately so
(depending on the algorithm), turns out to be an attractive feature for
many uses.

However, a CVT dataset in a regular domain, such as the unit hypercube,
has the tendency for the projections of the points to cluster together
in any coordinate axis. This program is mainly an attempt to explore
whether a dataset can be computed using techniques similar to those of a
CVT, but with the constraint (whether imposed or expected) that the
point projections do not clump up.

The approach used here is quite simple. First we compute a CVT in M
dimensions, comprising N points. We assume that the bounding region is
the unit hypercube. We are now going to adjust the coordinates of the
points to achieve the Latin Hypercube property. For each coordinate
direction, we simply sort the points by that coordinate, and then
overwrite the original values by the values we'd expect to get for a
centered Latin Hypercube, namely, 1/(2\*N), 3/(2\*N), ...,
(2\*N-1)/(2\*N).

Now this process guarantees that we get a Latin Hypercube. Our hope is
that the process of adjusting the point coordinates does not too
severely damage the nice dispersion properties inherent in the CVT point
placement.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**LCVT** is available in [a C++ version](../../cpp_src/lcvt/lcvt.html)
and [a FORTRAN90 version](../../f_src/lcvt/lcvt.html) and [a MATLAB
version](../../m_src/lcvt/lcvt.html)

### Related Data and Programs: {#related-data-and-programs align="center"}

[BOX\_BEHNKEN](../../cpp_src/box_behnken/box_behnken.html), a C++
library which computes a Box-Behnken design, that is, a set of arguments
to sample the behavior of a function of multiple parameters;

[CVT](../../cpp_src/cvt/cvt.html), a C++ library which computes a
Centroidal Voronoi Tessellation.

[FAURE](../../cpp_src/faure/faure.html), a C++ library which computes
elements of a Faure quasirandom sequence.

[GRID](../../cpp_src/grid/grid.html), a C++ library which computes
elements of a grid dataset.

[HALTON](../../cpp_src/halton/halton.html), a C++ library which computes
elements of a Halton quasirandom sequence.

[HAMMERSLEY](../../cpp_src/hammersley/hammersley.html), a C++ library
which computes elements of a Hammersley quasirandom sequence.

[HEX\_GRID](../../cpp_src/hex_grid/hex_grid.html), a C++ library which
computes elements of a hexagonal grid dataset.

[HEX\_GRID\_ANGLE](../../f_src/hex_grid_angle/hex_grid_angle.html), a
FORTRAN90 library which computes elements of an angled hexagonal grid
dataset.

[IHS](../../cpp_src/ihs/ihs.html), a C++ library which computes elements
of an improved distributed Latin hypercube dataset.

[LATIN\_CENTER](../../cpp_src/latin_center/latin_center.html), a C++
library which computes elements of a Latin Hypercube dataset, choosing
center points.

[LATIN\_EDGE](../../cpp_src/latin_edge/latin_edge.html), a C++ library
which computes elements of a Latin Hypercube dataset, choosing edge
points.

[LATIN\_RANDOM](../../cpp_src/latin_random/latin_random.html), a C++
library which computes elements of a Latin Hypercube dataset, choosing
points at random.

[LATINIZE](../../cpp_src/latinize/latinize.html), a C++ program which
"latinizes" a dataset.

[LCVT](../../datasets/lcvt/lcvt.html), a dataset directory which
contains a collection of sample LCVT datasets.

[LCVT\_DATASET](../../cpp_src/lcvt_dataset/lcvt_dataset.html), a C++
program which creates an LCVT dataset.

[NIEDERREITER2](../../cpp_src/niederreiter2/niederreiter2.html), a C++
library which computes elements of a Niederreiter quasirandom sequence
with base 2.

[NORMAL](../../cpp_src/normal/normal.html), a C++ library which computes
elements of a normal pseudorandom sequence.

[SOBOL](../../cpp_src/sobol/sobol.html), a C++ library which computes
elements of a Sobol quasirandom sequence.

[UNIFORM](../../cpp_src/uniform/uniform.html), a C++ library which
computes elements of a uniform pseudorandom sequence.

[VAN\_DER\_CORPUT](../../cpp_src/van_der_corput/van_der_corput.html), a
C++ library which computes elements of a van der Corput quasirandom
sequence.

### Reference: {#reference align="center"}

1.  Franz Aurenhammer,\
    Voronoi diagrams - a study of a fundamental geometric data
    structure,\
    ACM Computing Surveys,\
    Volume 23, Number 3, September 1991, pages 345-405.
2.  Franz Aurenhammer, Rolf Klein,\
    Voronoi Diagrams,\
    in Handbook of Computational Geometry,\
    edited by J Sack, J Urrutia,\
    Elsevier, 1999,\
    LC: QA448.D38H36.
3.  John Burkardt, Max Gunzburger, Janet Peterson, Rebecca Brannon,\
    User Manual and Supporting Information for Library of Codes for
    Centroidal Voronoi Placement and Associated Zeroth, First, and
    Second Moment Determination,\
    Sandia National Laboratories Technical Report SAND2002-0099,\
    February 2002
4.  Qiang Du, Vance Faber, Max Gunzburger,\
    Centroidal Voronoi Tessellations: Applications and Algorithms,\
    SIAM Review,\
    Volume 41, Number 4, December 1999, pages 637-676.
5.  Michael McKay, William Conover, Richard Beckman,\
    A Comparison of Three Methods for Selecting Values of Input
    Variables in the Analysis of Output From a Computer Code,\
    Technometrics,\
    Volume 21, 1979, pages 239-245.
6.  Vicente Romero, John Burkardt, Max Gunzburger, Janet Peterson,\
    Initial Evaluation of Pure and "Latinized" Centroidal Voronoi
    Tessellation for Non-Uniform Statistical Sampling,\
    Sensitivity Analysis of Model Output (SAMO 2004) Conference, Santa
    Fe, March 8-11, 2004.
7.  Yuki Saka, Max Gunzburger, John Burkardt,\
    Latinized, improved LHS, and CVT point sets in hypercubes,\
    submitted to IEEE Transactions on Information Theory.

### Source Code: {#source-code align="center"}

-   [lcvt.cpp](lcvt.cpp), the source code;
-   [lcvt.hpp](lcvt.hpp), the include file;

### Examples and Tests: {#examples-and-tests align="center"}

-   [lcvt\_prb.cpp](lcvt_prb.cpp), a sample calling program.
-   [lcvt\_prb\_output.txt](lcvt_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **CLUSTER\_ENERGY** returns the energy of a dataset.
-   **CVT** computes a Centroidal Voronoi Tessellation.
-   **CVT\_ITERATION** takes one step of the CVT iteration.
-   **CVT\_WRITE** writes a CVT dataset to a file.
-   **FILE\_COLUMN\_COUNT** counts the number of columns in the first
    line of a file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **FIND\_CLOSEST** finds the Voronoi cell generator closest to a
    point X.
-   **GET\_SEED** returns a random seed for the random number generator.
-   **I4\_MAX** returns the maximum of two integers.
-   **I4\_MIN** returns the smaller of two integers.
-   **I4\_TO\_HALTON** computes an element of a Halton sequence.
-   **LCVT\_WRITE** writes a Latinized CVT dataset to a file.
-   **PARAM\_PRINT** prints the program parameters.
-   **PRIME** returns any of the first PRIME\_MAX prime numbers.
-   **R8\_EPSILON** returns the roundoff unit for R8 arithmetic.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **R8MAT\_LATINIZE** "Latinizes" an R8MAT.
-   **R8MAT\_TRANSPOSE\_PRINT** prints an R8MAT, transposed.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **R8TABLE\_DATA\_READ** reads the data from an R8TABLE file.
-   **R8VEC\_SORT\_HEAP\_INDEX\_A** does an indexed heap ascending sort
    of an R8VEC.
-   **REGION\_SAMPLER** returns a sample point in the physical region.
-   **S\_EQI** reports whether two strings are equal, ignoring case.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TEST\_REGION** determines if a point is within the physical
    region.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TIMESTRING** returns the current YMDHMS date as a string.
-   **TUPLE\_NEXT\_FAST** computes the next element of a tuple space,
    "fast".

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 22 September 2006.*
