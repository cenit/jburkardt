PRIME\_OPENMP\
Count Primes Using OpenMP {#prime_openmp-count-primes-using-openmp align="center"}
=========================

------------------------------------------------------------------------

**PRIME\_OPENMP** is a C++ program which counts the number of primes
between 1 and N, using OpenMP to carry out the calculation in parallel.

The algorithm is completely naive. For each integer I, it simply checks
whether any smaller J evenly divides it. The total amount of work for a
given N is thus roughly proportional to 1/2\*N\^2.

This program is mainly a starting point for investigations into
parallelization.

Here are the counts of the number of primes for some selected values of
N:

  N        Pi(N), Number of Primes
  -------- -------------------------
  1        0
  2        1
  4        2
  8        4
  16       6
  32       11
  64       18
  128      31
  256      54
  512      97
  1024     172
  2048     309
  4096     564
  8192     1028
  16384    1900
  32768    3512
  65536    6542
  131072   12251

The following results were observed for the elapsed time on a machine
that had 2 cores:

  N        Pi(N)   Time (1 Thread)   Time (2 Threads)   Time (4 Threads)
  -------- ------- ----------------- ------------------ ------------------
  16384    1900    0.377             0.293              0.220
  32768    3512    1.392             1.061              0.824
  65536    6542    5.221             3.883              3.012
  131072   12251   19.727            14.592             11.672

### Usage: {#usage align="center"}

In the BASH shell, the program could be run with 2 threads using the
commands:

            export OMP_NUM_THREADS=2
            ./prime_openmp
          

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**PRIME\_OPENMP** is available in [a C
version](../../c_src/prime_openmp/prime_openmp.html) and [a C++
version](../../cpp_src/prime_openmp/prime_openmp.html) and [a FORTRAN77
version](../../f77_src/prime_openmp/prime_openmp.html) and [a FORTRAN90
version](../../f_src/prime_openmp/prime_openmp.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[DIJKSTRA\_OPENMP](../../cpp_src/dijkstra_openmp/dijkstra_openmp.html),
a C++ program which uses OpenMP to parallelize a simple example of
Dijkstra's minimum distance algorithm for graphs.

[FFT\_OPENMP](../../cpp_src/fft_openmp/fft_openmp.html), a C++ program
which demonstrates the computation of a Fast Fourier Transform in
parallel, using OpenMP.

[HEATED\_PLATE\_OPENMP](../../cpp_src/heated_plate_openmp/heated_plate_openmp.html),
a C++ program which solves the steady (time independent) heat equation
in a 2D rectangular region, using OpenMP to run in parallel.

[HELLO\_OPENMP](../../cpp_src/hello_openmp/hello_openmp.html), a C++
program which prints out "Hello, world!" using the OpenMP parallel
programming environment.

[MD\_OPENMP](../../cpp_src/md_openmp/md_openmp.html), a C++ program
which carries out a molecular dynamics simulation in parallel, using
OpenMP.

[MULTITASK\_OPENMP](../../cpp_src/multitask_openmp/multitask_openmp.html),
a C++ program which demonstrates how to "multitask", that is, to execute
several unrelated and distinct tasks simultaneously, using OpenMP for
parallel execution.

[MXM\_OPENMP](../../cpp_src/mxm_openmp/mxm_openmp.html), a C++ program
which computes a dense matrix product C=A\*B, using OpenMP for parallel
execution.

[OPENMP](../../cpp_src/openmp/openmp.html), C++ programs which
illustrate the use of the OpenMP application program interface for
carrying out parallel computations in a shared memory environment.

[OPENMP\_RCC](../../cpp_src/openmp_rcc/openmp_rcc.html), C++ programs
which illustrate how a C program, using OpenMP, can be compiled and run
in batch mode on the FSU High Performance Computing (HPC) cluster
operated by the Research Computing Center (RCC).

[POISSON\_OPENMP](../../cpp_src/poisson_openmp/poisson_openmp.html), a
C++ program which computes an approximate solution to the Poisson
equation in a rectangle, using the Jacobi iteration to solve the linear
system, and OpenMP to carry out the Jacobi iteration in parallel.

[PRIME\_MPI](../../cpp_src/prime_mpi/prime_mpi.html), a C++ program
which counts the number of primes between 1 and N, using MPI for
parallel execution.

[PRIME\_PARFOR](../../m_src/prime_parfor/prime_parfor.html), a MATLAB
program which counts the number of primes between 1 and N; it runs in
parallel using MATLAB's "parfor" facility.

[PRIME\_SERIAL](../../cpp_src/prime_serial/prime_serial.html), a C++
program which counts the number of primes between 1 and N, intended as a
starting point for the creation of a parallel version.

[QUAD\_OPENMP](../../cpp_src/quad_openmp/quad_openmp.html), a C++
program which approximates an integral using a quadrature rule, and
carries out the computation in parallel using OpenMP.

[RANDOM\_OPENMP](../../cpp_src/random_openmp/random_openmp.html), a C++
program which illustrates how a parallel program using OpenMP can
generate multiple distinct streams of random numbers.

[SATISFY\_OPENMP](../../cpp_src/satisfy_openmp/satisfy_openmp.html), a
C++ program which demonstrates, for a particular circuit, an exhaustive
search for solutions of the circuit satisfy problem, using OpenMP for
parallel execution.

[SCHEDULE\_OPENMP](../../cpp_src/schedule_openmp/schedule_openmp.html),
a C++ program which demonstrates the default, static, and dynamic
methods of "scheduling" loop iterations in OpenMP to avoid work
imbalance.

[SGEFA\_OPENMP](../../cpp_src/sgefa_openmp/sgefa_openmp.html), a C++
program which reimplements the SGEFA/SGESL linear algebra routines from
LINPACK for use with OpenMP.

[TIMER](../../cpp_src/timer/timer.html), C++ programs which demonstrate
how to compute CPU time or elapsed time.

[ZIGGURAT\_OPENMP](../../cpp_src/ziggurat_openmp/ziggurat_openmp.html),
a C++ program which demonstrates how the ZIGGURAT library can be used to
generate random numbers in an OpenMP parallel program.

### Reference: {#reference align="center"}

1.  Eratosthenes,\
    A Method For Finding Prime Numbers,\
    Papyrus 487.
2.  Michael Quinn,\
    Parallel Programming in C with MPI and OpenMP,\
    McGraw-Hill, 2004,\
    ISBN13: 978-0071232654,\
    LC: QA76.73.C15.Q55.

### Source Code: {#source-code align="center"}

-   [prime\_openmp.cpp](prime_openmp.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**PRIME\_LOCAL** runs the program locally.

-   [prime\_local\_output.txt](prime_local_output.txt), the output file.

**PRIME\_ITHACA** runs the program through ITHACA's batch system.

-   [prime\_ithaca\_output.txt](prime_ithaca_output.txt), the output
    file.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for PRIME\_OPENMP.
-   **PRIME\_NUMBER** returns the number of primes between 1 and N.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 01 June 2010.*
