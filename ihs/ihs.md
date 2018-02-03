IHS\
Improved Distributed Hypercube Sampling {#ihs-improved-distributed-hypercube-sampling align="center"}
=======================================

------------------------------------------------------------------------

**IHS** is a C++ library which carries out the improved distributed
hypercube sampling (IHS) algorithm.

N Points in an M dimensional Latin hypercube are to be selected. Each of
the M coordinate dimensions is discretized to the values 1 through N.
The points are to be chosen in such a way that no two points have any
coordinate value in common. This is a standard Latin hypercube
requirement, and there are many solutions.

This algorithm differs in that it tries to pick a solution which has the
property that the points are "spread out" as evenly as possible. It does
this by determining an optimal even spacing, and using the duplication
factor D to allow it to choose the best of the various options available
to it (the more duplication, the better chance of optimization).

One drawback to this algorithm is that it requires an internal real
distance array of dimension D \* N \* N. For a relatively moderate
problem with N = 1000, this can exceed the easily accessible memory.
Moreover, the program is inherently quadratic in N in execution time as
well as memory; the computation of the I-th point in the set of N
requires a consideration of the value of the coordinates used up by the
previous points, and the distances from each of those points to the
candidates for the next point.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**IHS** is available in [a C++ version](../../cpp_src/ihs/ihs.html) and
[a FORTRAN90 version](../../f_src/ihs/ihs.html) and [a MATLAB
version](../../m_src/ihs/ihs.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BOX\_BEHNKEN](../../cpp_src/box_behnken/box_behnken.html), a C++
library which computes a Box-Behnken design, that is, a set of arguments
to sample the behavior of a function of multiple parameters;

[CVT](../../cpp_src/cvt/cvt.html), a C++ library which computes elements
of a Centroidal Voronoi Tessellation.

[FAURE](../../cpp_src/faure/faure.html), a C++ library which computes
elements of a Faure quasirandom sequence.

[GRID](../../cpp_src/grid/grid.html), a C++ library which computes
elements of a grid sequence.

[HALTON](../../cpp_src/halton/halton.html), a C++ library which computes
elements of a Halton Quasi Monte Carlo (QMC) sequence, using a simple
interface.

[HAMMERSLEY](../../cpp_src/hammersley/hammersley.html), a C++ library
which computes elements of a Hammersley Quasi Monte Carlo (QMC)
sequence, using a simple interface.

[HEX\_GRID](../../cpp_src/hex_grid/hex_grid.html), a C++ library which
computes elements of a hexagonal grid dataset.

[LATIN\_CENTER](../../cpp_src/latin_center/latin_center.html), a C++
library which computes elements of a Latin Hypercube dataset, choosing
center points.

[LATIN\_EDGE](../../cpp_src/latin_edge/latin_edge.html), a C++ library
which computes elements of a Latin Hypercube dataset, choosing edge
points.

[LATIN\_RANDOM](../../cpp_src/latin_random/latin_random.html), a C++
library which computes elements of a Latin Hypercube dataset, choosing
points at random.

[LCVT](../../cpp_src/lcvt/lcvt.html), a C++ library which computes a
latinized Centroidal Voronoi Tessellation.

[NIEDERREITER2](../../cpp_src/niederreiter2/niederreiter2.html), a C++
library which computes elements of a Niederreiter quasirandom sequence
using base 2.

[NORMAL](../../cpp_src/normal/normal.html), a C++ library which computes
elements of a sequence of pseudorandom normally distributed values.

[SOBOL](../../cpp_src/sobol/sobol.html), a C++ library which computes
elements of a Sobol quasirandom sequence.

[TABLE\_QUALITY](../../cpp_src/table_quality/table_quality.html), a C++
program which measures the dispersion quality of points in a dataset
read from a file.

[UNIFORM](../../cpp_src/uniform/uniform.html), a C++ library which
computes elements of a uniform pseudorandom sequence.

[VAN\_DER\_CORPUT](../../cpp_src/van_der_corput/van_der_corput.html), a
C++ library which computes elements of a 1D van der Corput sequence.

### Reference: {#reference align="center"}

1.  Brian Beachkofski, Ramana Grandhi,\
    Improved Distributed Hypercube Sampling,\
    American Institute of Aeronautics and Astronautics Paper 2002-1274.

### Source Code: {#source-code align="center"}

-   [ihs.cpp](ihs.cpp), the source code.
-   [ihs.hpp](ihs.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [ihs\_prb.cpp](ihs_prb.cpp), a sample calling program.
-   [ihs\_prb\_output.txt](ihs_prb_output.txt), the output from a run of
    the sample program.

### List of Routines: {#list-of-routines align="center"}

-   **COVARIANCE** does a covariance calculation for IHS solutions.
-   **DIGIT\_TO\_CH** returns the base 10 digit character corresponding
    to a digit.
-   **GET\_SEED** returns a random seed for the random number generator.
-   **I4\_LOG\_10** returns the whole part of the logarithm base 10 of
    an integer.
-   **I4\_MAX** returns the maximum of two integers.
-   **I4\_MIN** returns the smaller of two integers.
-   **I4\_TO\_S** converts an integer to a string.
-   **I4\_UNIFORM** returns a scaled pseudorandom I4.
-   **IHS** implements the improved distributed hypercube sampling
    algorithm.
-   **IHS\_WRITE** writes an IHS dataset to a file.
-   **R4\_ABS** returns the absolute value of an R4.
-   **R4\_NINT** returns the nearest integer to an R4.
-   **R8\_EPSILON** returns the R8 round off unit.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8\_UNIFORM\_01** is a portable pseudorandom number generator.
-   **R8VEC\_AVERAGE** returns the average of an R8VEC.
-   **R8VEC\_STD** returns the standard deviation of an R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TIMESTRING** returns the current YMDHMS date as a string.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 01 December 2006.*
