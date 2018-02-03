POINT\_MERGE\
Count or Index Unique or Tolerably Unique Points {#point_merge-count-or-index-unique-or-tolerably-unique-points align="center"}
================================================

------------------------------------------------------------------------

**POINT\_MERGE** is a C++ library which deals with the problem of
counting or indexing the unique or "tolerably unique" points in a
collection of N points in M dimensional space.

This problem is distinct from, though similar to, problems such as
finding the nearest neighbor, or counting all the points that lie within
a given distance of each point, or finding the optimal assignment of N
points into K clusters (the K-Means problem).

The "tolerably unique" problem is the "Starbucks problem", that is, the
task of choosing a list of Starbucks cafes to shut down, so that there
is no Starbucks cafe across the street from another one. The Starbucks
cafes that remain open are "tolerably unique", that is, there is now no
other open cafe within the given tolerance.

Given sets of data with some points very close to each other, there are
a number of ways of resolving the data. Here, a simpleminded approach is
taken, in which we start with one tolerably unique point, and consider
the remaining points one at a time, accepting the next point as long as
it is not closer than the tolerance to some already accepted point.

This is a simpler approach than trying to maximize the number of points
you can have in the set, while satisfying the tolerance, or of trying to
replace two nearby points by their average, for instance.

For the unique case, in 1D, a simple and efficient procedure sorts the
data, and then compares consecutive entries. For the unique case in
multiple dimensions, the sorting procedure can still be used.

For the "tolerably unique" case in 1D, the same sorting procedure can be
used, but in multiple dimensions, the usual kinds of lexicographic
sorting will interleave near and far points in a way that is hard to
deal with.

A reliable method for the tolerably unique case in multiple dimensions
is simply to compute the distance between every pair of points. However,
this is an O(N\^2) computation, and becomes terribly unsuitable when the
number of points considered is in the tens of thousands or more.

The "radial" approach, implemented in
**POINT\_RADIAL\_TOL\_UNIQUE\_COUNT**, picks a random base point Z,
computes the radial distance R(I) of each point P(I) to Z, and then
sorts the data by R. It then counts tolerably unique items by inspecting
the R array in order. Two points are possible neighbors only if they lie
within a TOL interval in R. Assuming the points are in general position,
the number of points that need to be compared will be small enough that
this algorithm is essentially O(N) rather than O(N\^2).

In MATLAB, the **unique** command can select the unique points; there is
also a user-written function called **consolidator** that can merge
points with a tolerance.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**POINT\_MERGE** is available in [a C
version](../../c_src/point_merge/point_merge.md) and [a C++
version](../../master/point_merge/point_merge.md) and [a FORTRAN77
version](../../f77_src/point_merge/point_merge.md) and [a FORTRAN90
version](../../f_src/point_merge/point_merge.md) and [a MATLAB
version](../../m_src/point_merge/point_merge.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[ANN](../../master/ann/ann.md), a C++ library which computes
Approximate Nearest Neighbors, by David Mount, Sunil Arya;

[ANN\_TEST](../../master/ann_test/ann_test.md), a C++ program which
uses [ann](ann/ann.md) to approximate the nearest neighbors of a set
of points stored in a file;

[CITIES](../../datasets/cities/cities.md), a dataset directory which
contains sets of information about cities and the distances between
them;

[CITIES](../../f_src/cities/cities.md), a FORTRAN90 library which
handles various problems associated with a set of "cities" on a map.

[KMEANS](../../f_src/kmeans/kmeans.md), a FORTRAN90 library which
contains several different algorithms for the K-Means problem.

[SPAETH](../../f_src/spaeth/spaeth.md), a FORTRAN90 library which can
cluster data according to various principles.

[SPAETH2](../../f_src/spaeth2/spaeth2.md), a FORTRAN90 library which
can cluster data according to various principles.

[TABLE\_MERGE](../../f_src/table_merge/table_merge.md), a FORTRAN90
program which reads a file of N points in M dimensions, removes
duplicates or points that are closer than some tolerance, and writes the
reduced set of points to a file.

### Source Code: {#source-code align="center"}

-   [point\_merge.cpp](point_merge.cpp), the source code.
-   [point\_merge.hpp](point_merge.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [point\_merge\_prb.cpp](point_merge_prb.cpp), a sample calling
    program.
-   [point\_merge\_prb\_output.txt](point_merge_prb_output.txt), the
    output file.

### List of Routines: {#list-of-routines align="center"}

-   **CPU\_TIME** reports the elapsed CPU time.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_UNIFORM** returns a scaled pseudorandom I4.
-   **POINT\_RADIAL\_UNIQUE\_COUNT** counts the unique points.
-   **POINT\_RADIAL\_TOL\_UNIQUE\_COUNT** counts the tolerably unique
    points.
-   **POINT\_RADIAL\_TOL\_UNIQUE\_INDEX** indexes the tolerably unique
    points.
-   **POINT\_TOL\_UNIQUE\_COUNT** counts the tolerably unique points.
-   **POINT\_TOL\_UNIQUE\_INDEX** indexes the tolerably unique points.
-   **POINT\_UNIQUE\_COUNT** counts the unique points.
-   **R4\_NINT** returns the nearest integer to an R4.
-   **R8COL\_DUPLICATES** generates an R8COL with some duplicate
    columns.
-   **R8COL\_SORT\_HEAP\_INDEX\_A** does an indexed heap ascending sort
    of an R8COL.
-   **R8MAT\_TRANSPOSE\_PRINT** prints an R8MAT, transposed.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **R8MAT\_UNIFORM\_01** returns a unit pseudorandom R8MAT.
-   **R8VEC\_COMPARE** compares two R8VEC's.
-   **R8VEC\_NORM\_L2** returns the L2 norm of an R8VEC.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC\_SORT\_HEAP\_INDEX\_A** does an indexed heap ascending sort
    of an R8VEC
-   **R8VEC\_SUM** returns the sum of an R8VEC.
-   **R8VEC\_UNIFORM\_01** returns a unit pseudorandom R8VEC.
-   **R8VEC\_UNIFORM\_01\_NEW** returns a new unit pseudorandom R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 24 July 2010.*
