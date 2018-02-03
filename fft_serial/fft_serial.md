FFT\_SERIAL\
Fast Fourier Transform {#fft_serial-fast-fourier-transform align="center"}
======================

------------------------------------------------------------------------

**FFT\_SERIAL** is a C++ program which demonstrates the computation of a
Fast Fourier Transform, and is intended as a starting point for
developing a parallel version using OpenMP.

On an Apple PowerPC G5 with two processors, the following results were
observed:

  N         Time          MegaFLOPS
  --------- ------------- -----------
  2         4.3525e-07    22.9753
  4         1.15245e-06   34.7087
  8         2.20385e-06   54.4502
  16        4.509e-06     70.9692
  32        6.798e-06     117.682
  64        1.61065e-05   119.207
  128       3.28125e-05   136.533
  256       7.6573e-05    133.729
  512       0.000157155   146.607
  1024      0.00035841    142.853
  2048      0.00075819    148.564
  4096      0.00170309    144.302
  8192      0.00348095    152.970
  16384     0.00811195    141.382
  32768     0.0173951     141.281
  65536     0.0402766     130.172
  131072    0.083454      133.500
  262144    0.184454      127.907
  524288    0.382927      130.070
  1048576   0.835447      125.511

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FFT\_SERIAL** is available in [a C
version](../../c_src/fft_serial/fft_serial.md) and [a C++
version](../../master/fft_serial/fft_serial.md) and [a FORTRAN77
version](../../f77_src/fft_serial/fft_serial.md) and [a FORTRAN90
version](../../f_src/fft_serial/fft_serial.md) and [a MATLAB
version](../../m_src/fft_serial/fft_serial.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FFT\_OPENMP](../../master/fft_openmp/fft_openmp.md), a C++ program
which computes a Fast Fourier Transform using OpenMP.

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
developing a parallel version using OpenMP.

[MXM\_SERIAL](../../master/mxm_serial/mxm_serial.md), a C++ program
which sets up a matrix multiplication problem A=B\*C, intended as a
starting point for implementing a parallel version.

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

[SFTPACK](../../master/sftpack/sftpack.md), a C++ library which
implements the "slow" Fourier transform, intended as a teaching tool and
comparison with the fast Fourier transform.

[SINE\_TRANSFORM](../../master/sine_transform/sine_transform.md), a
C++ library which demonstrates some simple properties of the discrete
sine transform.

[SUBSET\_SUM\_SERIAL](../../master/subset_sum_serial/subset_sum_serial.md),
a C++ program which seeks solutions of the subset sum problem, in which
it is desired to find a subset of a set of integers which has a given
sum; this version of the program is intended as a starting point for a
parallel approach.

### Reference: {#reference align="center"}

1.  Wesley Petersen, Peter Arbenz,\
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

-   [fft\_serial.cpp](fft_serial.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [fft\_serial\_output.txt](fft_serial_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for FFT.
-   **CCOPY** copies a complex vector.
-   **CFFT2** performs a complex Fast Fourier Transform.
-   **CFFTI** sets up sine and cosine tables needed for the FFT
    calculation.
-   **GGL** generates u(0,1) distributed random numbers.
-   **STEP** carries out one step of the workspace version of CFFT2.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 23 March 2009.*
