QUAD2D\_SERIAL\
Estimate an Integral {#quad2d_serial-estimate-an-integral align="center"}
====================

------------------------------------------------------------------------

**QUAD2D\_SERIAL** is a C++ program which estimates an integral over a
2D rectangle by using a product quadrature rule.

This program is intended as a starting point; both MPI and OpenMP can be
used to make a parallel version.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**QUAD2D\_SERIAL** is available in [a C
version](../../c_src/quad2d_serial/quad2d_serial.html) and [a C++
version](../../cpp_src/quad2d_serial/quad2d_serial.html) and [a
FORTRAN77 version](../../f77_src/quad2d_serial/quad2d_serial.html) and
[a FORTRAN90 version](../../f_src/quad2d_serial/quad2d_serial.html) and
[a MATLAB version](../../m_src/quad2d_serial/quad2d_serial.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FFT\_SERIAL](../../cpp_src/fft_serial/fft_serial.html), a C++ program
which demonstrates the computation of a Fast Fourier Transform, and is
intended as a starting point for developing a parallel version using
OpenMP.

[FIRE\_SERIAL](../../cpp_src/fire_serial/fire_serial.html), a C++
program which simulates a forest fire over a rectangular array of trees,
starting at a single random location. It is intended as a starting point
for the development of a parallel version.

[HEATED\_PLATE](../../cpp_src/heated_plate/heated_plate.html), a C++
program which solves the steady state heat equation in a 2D rectangular
region, and is intended as a starting point for implementing an OpenMP
parallel version.

[MD](../../cpp_src/md/md.html), a C++ program which carries out a
molecular dynamics simulation, and is intended as a starting point for
implementing an OpenMP parallel version.

[MXM\_SERIAL](../../cpp_src/mxm_serial/mxm_serial.html), a C++ program
which sets up a matrix multiplication problem A=B\*C, intended as a
starting point for implementing a parallel version.

[POISSON\_SERIAL](../../cpp_src/poisson_serial/poisson_serial.html), a
C++ program which computes an approximate solution to the Poisson
equation in a rectangle, and is intended as the starting point for the
creation of a parallel version.

[PRIME\_SERIAL](../../cpp_src/prime_serial/prime_serial.html), a C++
program which counts the number of primes between 1 and N, intended as a
starting point for the creation of a parallel version.

[QUAD\_SERIAL](../../cpp_src/quad_serial/quad_serial.html), a C++
program which approximates an integral over a 1D region using a
quadrature rule, and is intended as a starting point for parallelization
exercises.

[QUAD2D\_OPENMP](../../cpp_src/quad2d_openmp/quad2d_openmp.html), a C++
program which applies a product quadrature rule to estimate an integral
over a 2D rectangle, using OpenMP for parallel execution.

[SEARCH\_SERIAL](../../cpp_src/search_serial/search_serial.html), a C++
program which searches the integers from A to B for a value J such that
F(J) = C. this version of the program is intended as a starting point
for a parallel approach.

[SUBSET\_SUM\_SERIAL](../../cpp_src/subset_sum_serial/subset_sum_serial.html),
a C++ program which seeks solutions of the subset sum problem, in which
it is desired to find a subset of a set of integers which has a given
sum; this version of the program is intended as a starting point for a
parallel approach.

### Reference: {#reference align="center"}

1.  Peter Arbenz, Wesley Petersen,\
    Introduction to Parallel Computing - A practical guide with examples
    in C,\
    Oxford University Press,\
    ISBN: 0-19-851576-6,\
    LC: QA76.58.P47.
2.  Rohit Chandra, Leonardo Dagum, Dave Kohr, Dror Maydan, Jeff
    McDonald, Ramesh Menon,\
    Parallel Programming in OpenMP,\
    Morgan Kaufmann, 2001,\
    ISBN: 1-55860-671-8,\
    LC: QA76.642.P32.
3.  Barbara Chapman, Gabriele Jost, Ruud vanderPas, David Kuck,\
    Using OpenMP: Portable Shared Memory Parallel Processing,\
    MIT Press, 2007,\
    ISBN13: 978-0262533027,\
    LC: QA76.642.C49.

### Source Code: {#source-code align="center"}

-   [quad2d\_serial.cpp](quad2d_serial.cpp), the source code;

### Examples and Tests: {#examples-and-tests align="center"}

-   [quad2d\_serial\_output.txt](quad2d_serial_output.txt), the output
    file;

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 25 October 2011.*
