SUBSET\_SUM\_SERIAL\
Solve a Subset Sum Problem by Exhaustive Search {#subset_sum_serial-solve-a-subset-sum-problem-by-exhaustive-search align="center"}
===============================================

------------------------------------------------------------------------

**SUBSET\_SUM\_SERIAL** is a C++ library which illustrates how a subset
sum problem can be solved by exhaustive search.

We are given a collection of (21) weights and a *target value*
(24639098). We seek a combination of the weights which adds up to the
target value.

The function *subset\_sum\_serial.m* simply considers every possible
subset of the weights, determines its sum, and compares that to the
target value. The first case in which the target value is matched is
returned as the solution.

This program, which solves the problem serially, is primarily intended
to be a starting point for a parallel programming approach.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SUBSET\_SUM\_SERIAL** is available in [a C
version](../../c_src/subset_sum_serial/subset_sum_serial.md) and [a
C++ version](../../master/subset_sum_serial/subset_sum_serial.md) and
[a FORTRAN77
version](../../f77_src/subset_sum_serial/subset_sum_serial.md) and [a
FORTRAN90 version](../../f_src/subset_sum_serial/subset_sum_serial.md)
and [a MATLAB
version](../../m_src/subset_sum_serial/subset_sum_serial.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FFT\_SERIAL](../../master/fft_serial/fft_serial.md), a C++ program
which demonstrates the computation of a Fast Fourier Transform, and is
intended as a starting point for developing a parallel version using
OpenMP.

[FIRE\_SERIAL](../../master/fire_serial/fire_serial.md), a C++
program which simulates a forest fire over a rectangular array of trees,
starting at a single random location. It is intended as a starting point
for the development of a parallel version.

[HEATED\_PLATE](../../master/heated_plate/heated_plate.md), a C++
program which solves the steady state heat equation in a 2D rectangular
region, and is intended as a starting point for implementing an OpenMP
parallel version.

[MD](../../master/md/md.md), a C++ program which carries out a
molecular dynamics simulation, and is intended as a starting point for
implementing an OpenMP parallel version.

[MXM\_SERIAL](../../master/mxm_serial/mxm_serial.md), a C++ program
which sets up a matrix multiplication problem A=B\*C, intended as a
starting point for implementing a parallel version.

[POISSON\_SERIAL](../../master/poisson_serial/poisson_serial.md), a
C++ program which computes an approximate solution to the Poisson
equation in a rectangle, and is intended as the starting point for the
creation of a parallel version.

[PRIME\_SERIAL](../../master/prime_serial/prime_serial.md), a C++
program which counts the number of primes between 1 and N, intended as a
starting point for the creation of a parallel version.

[QUAD\_SERIAL](../../master/quad_serial/quad_serial.md), a C++
program which approximates an integral using a quadrature rule, and is
intended as a starting point for parallelization exercises.

[QUAD2D\_SERIAL](../../master/quad2d_serial/quad2d_serial.md), a C++
program which approximates an integral over a 2D region using a product
quadrature rule, and is intended as a starting point for parallelization
exercises.

[SEARCH\_SERIAL](../../master/search_serial/search_serial.md), a C++
program which searches the integers from A to B for a value J such that
F(J) = C. this version of the program is intended as a starting point
for a parallel approach.

[SUBSET\_SUM](../../master/subset_sum/subset_sum.md), a C++ library
which seeks solutions of the subset sum problem.

### Reference: {#reference align="center"}

-   Silvano Martello, Paolo Toth,\
    Knapsack Problems: Algorithms and Computer Implementations,\
    Wiley, 1990,\
    ISBN: 0-471-92420-2,\
    LC: QA267.7.M37.

### Source Code: {#source-code align="center"}

-   [subset\_sum\_serial.cpp](subset_sum_serial.cpp), the source code.
-   [subset\_sum\_serial.hpp](subset_sum_serial.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [subset\_sum\_serial\_prb.cpp](subset_sum_serial_prb.cpp), a sample
    calling program.
-   [subset\_sum\_serial\_prb\_output.txt](subset_sum_serial_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **I4\_POWER** returns the value of I\^J.
-   **I4VEC\_DOT\_PRODUCT** computes the dot product of two I4VEC's.
-   **SUBSET\_SUM\_SERIAL** seeks a subset of a set that has a given
    sum.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 01 July 2013.*
