KMEANS\
the K-Means Data Clustering Problem {#kmeans-the-k-means-data-clustering-problem align="center"}
===================================

------------------------------------------------------------------------

**KMEANS** is a C++ library which handles the K-Means problem, which
organizes a set of N points in M dimensions into K clusters;

In the K-Means problem, a set of N points X(I) in M-dimensions is given.
The goal is to arrange these points into K clusters, with each cluster
having a representative point Z(J), usually chosen as the centroid of
the points in the cluster.

            Z(J) = Sum ( all X(I) in cluster J ) X(I) /
                   Sum ( all X(I) in cluster J ) 1.
          

The energy of cluster J is

            E(J) = Sum ( all X(I) in cluster J ) || X(I) - Z(J) ||^2
          

For a given set of clusters, the total energy is then simply the sum of
the cluster energies E(J). The goal is to choose the clusters in such a
way that the total energy is minimized. Usually, a point X(I) goes into
the cluster with the closest representative point Z(J). So to define the
clusters, it's enough simply to specify the locations of the cluster
representatives.

This is actually a fairly hard problem. Most algorithms do reasonably
well, but cannot guarantee that the best solution has been found. It is
very common for algorithms to get stuck at a solution which is merely a
"local minimum". For such a local minimum, every slight rearrangement of
the solution makes the energy go up; however a major rearrangement would
result in a big drop in energy.

A simple algorithm for the problem is known as the "H-Means algorithm".
It alternates between two procedures:

-   Using the given cluster centers, assign each point to the cluster
    with the nearest center;
-   Using the given cluster assignments, replace each cluster center by
    the centroid or average of the points in the cluster.

These steps are repeated until no points are moved, or some other
termination criterion is reached.

A more sophisticated algorithm, known as the "K-Means algorithm", takes
advantage of the fact that it is possible to quickly determine the
decrease in energy caused by moving a point from its current cluster to
another. It repeats the following procedure:

-   For each point, move it to another cluster if that would lower the
    energy. If you move a point, immediately update the cluster centers
    of the two affected clusters.

This procedure is repeated until no points are moved, or some other
termination criterion is reached.

### The Weighted K-Means Problem {#the-weighted-k-means-problem align="center"}

A natural extension of the K-Means problem allows us to include some
more information, namely, a set of *weights* associated with the data
points. These might represent a measure of importance, a frequency
count, or some other information. The intent is that a point with a
weight of 5.0 is twice as "important" as a point with a weight of 2.5,
for instance. This gives rise to the "weighted" K-Means problem.

In the *weighted K-Means problem*, we are given a set of N points X(I)
in M-dimensions, and a corresponding set of nonnegative weights W(I).
The goal is to arrange the points into K clusters, with each cluster
having a representative point Z(J), usually chosen as the weighted
centroid of the points in the cluster:

            Z(J) = Sum ( all X(I) in cluster J ) W(I) * X(I) /
                   Sum ( all X(I) in cluster J ) W(I).
          

The weighted energy of cluster J is

            E(J) = Sum ( all X(I) in cluster J ) W(I) * || X(I) - Z(J) ||^2
          

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**KMEANS** is available in [a C++
version](../../cpp_src/kmeans/kmeans.html) and [a FORTRAN90
version](../../f_src/kmeans/kmeans.html) and [a MATLAB
version.](../../m_src/kmeans/kmeans.html)

### Related Data and Programs: {#related-data-and-programs align="center"}

[ASA058](../../cpp_src/asa058/asa058.html), a C++ library which
implements the K-means algorithm of Sparks.

[ASA136](../../cpp_src/asa136/asa136.html), a C++ library which
implements the Hartigan and Wong clustering algorithm.

[CITIES](../../cpp_src/cities/cities.html), a C++ library which handles
various problems associated with a set of "cities" on a map.

[CITIES](../../datasets/cities/cities.html), a dataset directory which
contains sets of data defining groups of cities.

[CLUSTER\_ENERGY](../../f_src/cluster_energy/cluster_energy.html), a
FORTRAN90 program which groups data into a given number of clusters to
minimize the energy.

[LAU\_NP](../../f_src/lau_np/lau_np.html), a FORTRAN90 library which
contains heuristic algorithms for the K-center and K-median problems.

[POINT\_MERGE](../../cpp_src/point_merge/point_merge.html), a C++
library which considers N points in M dimensional space, and counts or
indexes the unique or "tolerably unique" items.

[SPAETH](../../f_src/spaeth/spaeth.html), a FORTRAN90 library which can
cluster data according to various principles.

[SPAETH](../../datasets/spaeth/spaeth.html), a dataset directory which
contains a set of test data.

[SPAETH2](../../f_src/spaeth2/spaeth2.html), a FORTRAN90 library which
can cluster data according to various principles.

[SPAETH2](../../datasets/spaeth2/spaeth2.html), a dataset directory
which contains a set of test data.

### Reference: {#reference align="center"}

1.  John Hartigan, Manchek Wong,\
    Algorithm AS 136: A K-Means Clustering Algorithm,\
    Applied Statistics,\
    Volume 28, Number 1, 1979, pages 100-108.
2.  Wendy Martinez, Angel Martinez,\
    Computational Statistics Handbook with MATLAB,\
    Chapman and Hall / CRC, 2002.
3.  David Sparks,\
    Algorithm AS 58: Euclidean Cluster Analysis,\
    Applied Statistics,\
    Volume 22, Number 1, 1973, pages 126-130.

### Source Code: {#source-code align="center"}

-   [kmeans.cpp](kmeans.cpp), the source code.
-   [kmeans.hpp](kmeans.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [kmeans\_prb.cpp](kmeans_prb.cpp), a sample problem.
-   [kmeans\_prb\_output.txt](kmeans_prb_output.txt), the output file.

There are data files read by the sample code:

-   [points\_100.txt](points_100.txt), 100 2D points, used as a case
    study by the sample problem.
-   [points\_100.png](points_100.png), an image of the points.
-   [ruspini.txt](ruspini.txt), 75 points in 2D, with integer
    coordinates, and 0 &lt; X &lt; 120, 0 &lt; Y &lt; 160, which might
    naturally be grouped into 4 sets.
-   [weights\_equal\_100.txt](weights_equal_100.txt), 100 equal weights,
    for doing equally weighted calculations when a program expects
    weights.
-   [weights\_unequal\_100.txt](weights_unequal_100.txt), 100 weights,
    not all equal, for testing programs that can use weights.

**TEST01** applies HMEANS\_01 to points\_100.txt:

-   [test01\_clusters.txt](test01_clusters.txt) the cluster assignments.
-   [test01\_centers.txt](test01_centers.txt) the cluster centers.

**TEST02** applies HMEANS\_02 to points\_100.txt:

-   [test02\_clusters.txt](test02_clusters.txt) the cluster assignments.
-   [test02\_centers.txt](test02_centers.txt) the cluster centers.

**TEST03** applies KMEANS\_01 to points\_100.txt:

-   [test03\_clusters.txt](test03_clusters.txt) the cluster assignments.
-   [test03\_centers.txt](test03_centers.txt) the cluster centers.

**TEST04** applies KMEANS\_02 to points\_100.txt:

-   [test04\_clusters.txt](test04_clusters.txt) the cluster assignments.
-   [test04\_centers.txt](test04_centers.txt) the cluster centers.

**TEST05** applies KMEANS\_03 to points\_100.txt:

-   [test05\_clusters.txt](test05_clusters.txt) the cluster assignments.
-   [test05\_centers.txt](test05_centers.txt) the cluster centers.

**TEST06** applies HMEANS\_01 + KMEANS\_01 to points\_100.txt:

-   [test06\_clusters.txt](test06_clusters.txt) the cluster assignments.
-   [test06\_centers.txt](test06_centers.txt) the cluster centers.

**TEST07** applies HMEANS\_01 + KMEANS\_02 to points\_100.txt:

-   [test07\_clusters.txt](test07_clusters.txt) the cluster assignments.
-   [test07\_centers.txt](test07_centers.txt) the cluster centers.

**TEST08** applies KMEANS\_01 + KMEANS\_03 to points\_100.txt:

-   [test08\_clusters.txt](test08_clusters.txt) the cluster assignments.
-   [test08\_centers.txt](test08_centers.txt) the cluster centers.

**TEST09** applies HMEANS\_W\_01 to points\_100.txt and
weights\_equal\_100.txt:

-   [test09\_clusters.txt](test09_clusters.txt) the cluster assignments.
-   [test09\_centers.txt](test09_centers.txt) the cluster centers.

**TEST10** applies HMEANS\_W\_02 to points\_100.txt and
weights\_equal\_100.txt:

-   [test10\_clusters.txt](test10_clusters.txt) the cluster assignments.
-   [test10\_centers.txt](test10_centers.txt) the cluster centers.

**TEST11** applies KMEANS\_W\_01 to points\_100.txt and
weights\_equal\_100.txt:

-   [test11\_clusters.txt](test11_clusters.txt) the cluster assignments.
-   [test11\_centers.txt](test11_centers.txt) the cluster centers.

**TEST12** applies KMEANS\_W\_03 to points\_100.txt and
weights\_equal\_100.txt:

-   [test12\_clusters.txt](test12_clusters.txt) the cluster assignments.
-   [test12\_centers.txt](test12_centers.txt) the cluster centers.

**TEST13** applies HMEANS\_W\_01 to points\_100.txt and
weights\_unequal\_100.txt:

-   [test13\_clusters.txt](test13_clusters.txt) the cluster assignments.
-   [test13\_centers.txt](test13_centers.txt) the cluster centers.

**TEST14** applies HMEANS\_W\_02 to points\_100.txt and
weights\_unequal\_100.txt:

-   [test14\_clusters.txt](test14_clusters.txt) the cluster assignments.
-   [test14\_centers.txt](test14_centers.txt) the cluster centers.

**TEST15** applies KMEANS\_W\_01 to points\_100.txt and
weights\_unequal\_100.txt:

-   [test15\_clusters.txt](test15_clusters.txt) the cluster assignments.
-   [test15\_centers.txt](test15_centers.txt) the cluster centers.

**TEST16** applies KMEANS\_W\_03 to points\_100.txt and
weights\_unequal\_100.txt:

-   [test16\_clusters.txt](test16_clusters.txt) the cluster assignments.
-   [test16\_centers.txt](test16_centers.txt) the cluster centers.

### List of Routines: {#list-of-routines align="center"}

-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **CLUSTER\_ENERGY\_COMPUTE** computes the energy of the clusters.
-   **CLUSTER\_INITIALIZE\_1** initializes the clusters to data points.
-   **CLUSTER\_INITIALIZE\_2** initializes the cluster centers to random
    values.
-   **LUSTER\_INITIALIZE\_3** initializes the cluster centers to random
    values.
-   **LUSTER\_INITIALIZE\_4** initializes the cluster centers to random
    values.
-   **LUSTER\_INITIALIZE\_5** initializes the cluster centers to random
    values.
-   **LUSTER\_PRINT\_SUMMARY** prints a summary of data about a
    clustering.
-   **LUSTER\_VARIANCE\_COMPUTE** computes the variance of the clusters.
-   **FILE\_COLUMN\_COUNT** counts the columns in the first line of a
    file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **MEANS\_01** applies the H-Means algorithm.
-   **MEANS\_02** applies the H-Means algorithm.
-   **MEANS\_W\_01** applies the weighted H-Means algorithm.
-   **MEANS\_W\_02** applies the weighted H-Means algorithm.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_UNIFORM** returns a scaled pseudorandom I4.
-   **I4MAT\_WRITE** writes an I4MAT file with no header.
-   **I4VEC\_SUM** sums the entries of an I4VEC.
-   **I4VEC\_ZERO** zeroes an I4VEC.
-   **I4VEC\_ZERO\_NEW** creates and zeroes an I4VEC.
-   **MEANS\_01** applies the K-Means algorithm.
-   **MEANS\_02** applies the K-Means algorithm.
-   **MEANS\_02\_OPTRA** carries out the optimal transfer stage.
-   **MEANS\_02\_QTRAN** carries out the quick transfer stage.
-   **MEANS\_03** applies the K-Means algorithm.
-   **MEANS\_W\_01** applies the weighted K-Means algorithm.
-   **MEANS\_W\_03** applies the weighted K-Means algorithm.
-   **R4\_NINT** returns the nearest integer to an R4.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_MIN** returns the minimum of two R8's.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **R8MAT\_DATA\_READ** reads the data from an R8MAT file.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
-   **R8MAT\_MM\_NEW** multiplies two matrices.
-   **R8MAT\_UNIFORM\_01** returns a unit pseudorandom R8MAT.
-   **R8MAT\_UNIFORM\_01\_NEW** returns a unit pseudorandom R8MAT.
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **R8VEC\_ALL\_NONPOSITIVE:** ( all ( A &lt;= 0 ) ) for R8VEC's.
-   **R8VEC\_ANY\_NEGATIVE:** ( any ( A &lt; 0 ) ) for R8VEC's.
-   **R8VEC\_I4VEC\_DOT\_PRODUCT** computes the dot product of an R8VEC
    and an I4VEC.
-   **R8VEC\_MIN\_INDEX** returns the index of the minimum value in an
    R8VEC.
-   **R8VEC\_SUM** returns the sum of an R8VEC.
-   **R8VEC\_UNIFORM\_01** returns a unit pseudorandom R8VEC.
-   **R8VEC\_ZERO** zeroes an R8VEC.
-   **R8VEC\_ZERO\_NEW** creates and zeroes an R8VEC.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 10 October 2011.*
