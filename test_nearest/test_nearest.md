TEST\_NEAREST\
Test Functions for the Nearest Neighbor Calculation {#test_nearest-test-functions-for-the-nearest-neighbor-calculation align="center"}
===================================================

------------------------------------------------------------------------

**TEST\_NEAREST** is a C++ program which tests several functions that
carry out the nearest neighbor calculation.

In a nearest neighbor calculation, we are given:

R, a set of NR points in M dimensions.

S, a set of NS points in M dimensions.

D(x,y), a norm for measuring distances between points in M dimensions.

and we are asked to compute, for each point S(JS),

-   JR = NEAREST(JS), the index of the point in R for which the distance
    D(S(JS),R(JR)) is minimized.

Obviously, one method to determine the values in NEAREST is simply to
compute every distance and take the index of the minimum. But even this
simple idea can be implemented in many ways in MATLAB, and
implementations will vary in their cost in memory and time.

Also, note that if the dimension M is small, and if the size of the R
set is small relative to that of S, it may be much cheaper to compute
the Delaunay triangulation of R (or its higher-dimensional
generalization). Computing the triangulation is somewhat expensive, but
makes the search procedure extremely quick.

Lloyd's version of the Centroidal Voronoi Tessellation (CVT) algorithm
estimates the area or volume of the cells using sampling. This
computation is a nearest neighbor calculation.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TEST\_NEAREST** is available in [a C
version](../../c_src/test_nearest/test_nearest.md) and [a C++
version](../../master/test_nearest/test_nearest.md) and [a FORTRAN77
version](../../f77_src/test_nearest/test_nearest.md) and [a FORTRAN90
version](../../f_src/test_nearest/test_nearest.md) and [a MATLAB
version](../../m_src/test_nearest/test_nearest.md).

### Related Programs: {#related-programs align="center"}

[CVT](../../master/cvt/cvt.md), a C++ library which computes elements
of a Centroidal Voronoi Tessellation (CVT).

[NEAREST\_INTERP\_1D](../../master/nearest_interp_1d/nearest_interp_1d.md),
a C++ library which interpolates a set of data using a piecewise
constant interpolant defined by the nearest neighbor criterion.

### References: {#references align="center"}

1.  Sunil Arya, David Mount, Nathan Netanyahu, Ruth Silverman, Angela
    Wu,\
    An Optimal Algorithm for Approximate Nearest Neighbor Searching in
    Fixed Dimensions,\
    Journal of the ACM,\
    Volume 45, Number 6, November 1998, pages 891-923.
2.  Jon Bentley, Bruce Weide, Andrew Yao,\
    Optimal Expected Time Algorithms for Closest Point Problems,\
    ACM Transactions on Mathematical Software,\
    Volume 6, Number 4, December 1980, pages 563-580.
3.  Marc deBerg, Marc Krevald, Mark Overmars, Otfried Schwarzkopf,\
    Computational Geometry,\
    Springer, 2000,\
    ISBN: 3-540-65620-0,\
    LC: QA448.D38.C65.

### Source Code: {#source-code align="center"}

-   [test\_nearest.cpp](test_nearest.cpp), the source code.
-   [test\_nearest\_output.txt](test_nearest_output.txt), the output
    file.

### List of Routines: {#list-of-routines align="center"}

-   **TEST\_NEAREST** compares the performance of nearest neighbor
    routines.
-   **FIND\_CLOSEST1** finds the nearest R point to each S point.
-   **R8MAT\_UNIFORM\_01** fills an R8MAT with unit pseudorandom
    numbers.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 27 December 2012.*
