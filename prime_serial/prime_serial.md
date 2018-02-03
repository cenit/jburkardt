PRIME\_SERIAL\
Program to Count Primes {#prime_serial-program-to-count-primes align="center"}
=======================

------------------------------------------------------------------------

**PRIME\_SERIAL** is a C++ program which counts the number of primes
between 1 and N, and is intended as a starting point for a parallel
version.

The algorithm is completely naive. For each integer I, it simply checks
whether any smaller J evenly divides it. The total amount of work for a
given N is thus roughly proportional to 1/2\*N\^2.

Here are the counts of the number of primes for some selected values of
N:

  N               Number of Primes
  --------------- ------------------
  1               0
  10              4
  100             25
  1,000           168
  10,000          1,229
  100,000         9,592
  1,000,000       78,498
  10,000,000      664,579
  100,000,000     5,761,455
  1,000,000,000   50,847,534

The following results were observed for the elapsed time.

  N        Pi      Time
  -------- ------- -----------
  1        0       0.000030
  2        1       0.000016
  4        2       0.000016
  8        4       0.000017
  16       6       0.000020
  32       11      0.000030
  64       18      0.000057
  128      31      0.000147
  256      54      0.000452
  512      97      0.001548
  1024     172     0.005303
  2048     309     0.018660
  4096     564     0.068059
  8192     1028    0.246378
  16384    1900    0.914953
  32768    3512    3.380086
  65536    6542    12.619071
  131072   12251   47.412759

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**PRIME\_SERIAL** is available in [a C
version](../../c_src/prime_serial/prime_serial.md) and [a C++
version](../../master/prime_serial/prime_serial.md) and [a FORTRAN77
version](../../f77_src/prime_serial/prime_serial.md) and [a FORTRAN90
version](../../f_src/prime_serial/prime_serial.md) and [a MATLAB
version](../../m_src/prime_serial/prime_serial.md) and [a Python
version](../../py_src/prime_serial/prime_serial.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[COLLATZ](../../m_src/collatz/collatz.md), a MATLAB library which
computes and analyzes the Collatz sequence (or "hailstone" sequence or
"3n+1 sequence");

[FFT\_SERIAL](../../master/fft_serial/fft_serial.md), a C++ program
which demonstrates the computation of a Fast Fourier Transform, and is
intended as a starting point for implementing a parallel version.

[FIRE\_SERIAL](../../master/fire_serial/fire_serial.md), a C++
program which simulates a forest fire over a rectangular array of trees,
starting at a single random location. It is intended as a starting point
for the development of a parallel version.

[MD](../../master/md/md.md), a C++ program which carries out a
molecular dynamics simulation, and is intended as a starting point for
implementing a parallel version.

[MXM\_SERIAL](../../master/mxm_serial/mxm_serial.md), a C++ program
which sets up a matrix multiplication problem A=B\*C, intended as a
starting point for implementing a parallel version.

[POISSON\_SERIAL](../../master/poisson_serial/poisson_serial.md), a
C++ program which computes an approximate solution to the Poisson
equation in a rectangle, and is intended as the starting point for the
creation of a parallel version.

[PRIME\_MPI](../../master/prime_mpi/prime_mpi.md), a C++ program
which counts the number of primes between 1 and N, using MPI for
parallel execution.

[PRIME\_OPENMP](../../master/prime_openmp/prime_openmp.md), a C++
program which counts the number of primes between 1 and N, using OpenMP
for parallel execution.

[QUAD\_SERIAL](../../master/quad_serial/quad_serial.md), a C++
program which approximates an integral using a quadrature rule, and is
intended as a starting point for parallelization exercises.

[QUAD2D\_SERIAL](../../master/quad2d_serial/quad2d_serial.md), a C++
program which approximates an integral over a 2D region using a product
quadrature rule, and is intended as a starting point for parallelization
exercises.

[SATISFY](../../master/satisfy/satisfy.md), a C++ program which
demonstrates, for a particular circuit, an exhaustive search for
solutions of the circuit satisfiability problem.

[SEARCH\_SERIAL](../../master/search_serial/search_serial.md), a C++
program which searches the integers from A to B for a value J such that
F(J) = C. this version of the program is intended as a starting point
for a parallel approach.

[SUBSET\_SUM\_SERIAL](../../master/subset_sum_serial/subset_sum_serial.md),
a C++ program which seeks solutions of the subset sum problem, in which
it is desired to find a subset of a set of integers which has a given
sum; this version of the program is intended as a starting point for a
parallel approach.

### Reference: {#reference align="center"}

1.  Eratosthenes,\
    A Method For Finding Prime Numbers,\
    Papyrus 487,\
    Library of Alexandria.

### Source Code: {#source-code align="center"}

-   [prime\_serial.cpp](prime_serial.cpp), the source code.
-   [prime\_serial.hpp](prime_serial.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [prime\_serial\_prb.cpp](prime_serial_prb.cpp), a sample calling
    program.
-   [prime\_serial\_prb\_output.txt](prime_serial_prb_output.txt), the
    output file.

### List of Routines: {#list-of-routines align="center"}

-   **PRIME\_NUMBER** returns the number of primes between 1 and N.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 09 November 2011.*
