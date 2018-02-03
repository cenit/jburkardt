MXM\_SERIAL\
Matrix Multiplication {#mxm_serial-matrix-multiplication align="center"}
=====================

------------------------------------------------------------------------

**MXM\_SERIAL** is a C++ program which sets up a dense matrix
multiplication problem C = A \* B.

The matrices A and B are chosen so that C = (N+1) \* I, where N is the
order of A and B, and I is the identity matrix.

MXM\_SERIAL is intended as a starting point for the implementation of a
parallel version, using, for instance, OpenMP.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**MXM\_SERIAL** is available in [a C
version](../../c_src/mxm_serial/mxm_serial.md) and [a C++
version](../../master/mxm_serial/mxm_serial.md) and [a FORTRAN77
version](../../f77_src/mxm_serial/mxm_serial.md) and [a FORTRAN90
version](../../f_src/mxm_serial/mxm_serial.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FFT\_SERIAL](../../master/fft_serial/fft_serial.md), a C++ program
which demonstrates the computation of a Fast Fourier Transform, and is
intended as a starting point for implementing a parallel version.

[FIRE\_SERIAL](../../master/fire_serial/fire_serial.md), a C++
program which simulates a forest fire over a rectangular array of trees,
starting at a single random location. It is intended as a starting point
for the development of a parallel version.

[HEATED\_PLATE](../../master/heated_plate/heated_plate.md), a C++
program which solves the steady (time independent) heat equation in a 2D
rectangular region, and is intended as a starting point for implementing
a parallel version.

[MD](../../master/md/md.md), a C++ program which carries out a
molecular dynamics simulation, and is intended as a starting point for
implementing a parallel version.

[MXM\_OPENMP](../../master/mxv_openmp/mxv_openmp.md), a C++ program
which computes a dense matrix product C=A\*B, using OpenMP for parallel
execution.

[OPENMP](../../master/openmp/openmp.md), C++ programs which
illustrate the use of the OpenMP application program interface for
carrying out parallel computations in a shared memory environment.

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

[SEARCH\_SERIAL](../../master/search_serial/search_serial.md), a C++
program which searches the integers from A to B for a value J such that
F(J) = C. this version of the program is intended as a starting point
for a parallel approach.

[SUBSET\_SUM\_SERIAL](../../master/subset_sum_serial/subset_sum_serial.md),
a C++ program which seeks solutions of the subset sum problem, in which
it is desired to find a subset of a set of integers which has a given
sum; this version of the program is intended as a starting point for a
parallel approach.

### Source Code: {#source-code align="center"}

-   [mxm\_serial.cpp](mxm_serial.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [mxm\_serial\_output.txt](mxm_serial_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for MXM\_SERIAL.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 30 October 2011.*
