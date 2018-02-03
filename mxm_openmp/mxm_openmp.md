MXM\_OPENMP\
Matrix Multiplication with OpenMP {#mxm_openmp-matrix-multiplication-with-openmp align="center"}
=================================

------------------------------------------------------------------------

**MXM\_OPENMP** is a C++ program which sets up a dense matrix
multiplication problem C = A \* B, using OpenMP for parallel execution.

The matrices A and B are chosen so that C = (N+1) \* I, where N is the
order of A and B, and I is the identity matrix.

### Usage: {#usage align="center"}

In the BASH shell, the program could be run with 8 threads using the
commands:

            export OMP_NUM_THREADS=8
            ./mxm_openmp
          

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**MXM\_OPENMP** is available in [a C
version](../../c_src/mxm_openmp/mxm_openmp.md) and [a C++
version](../../master/mxm_openmp/mxm_openmp.md) and [a FORTRAN77
version](../../f77_src/mxm_openmp/mxm_openmp.md) and [a FORTRAN90
version](../../f_src/mxm_openmp/mxm_openmp.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[DIJKSTRA\_OPENMP](../../master/dijkstra_openmp/dijkstra_openmp.md),
a C++ program which uses OpenMP to parallelize a simple example of
Dijkstra's minimum distance algorithm for graphs.

[FFT\_OPENMP](../../master/fft_openmp/fft_openmp.md), a C++ program
which demonstrates the computation of a Fast Fourier Transform in
parallel, using OpenMP.

[HEATED\_PLATE\_OPENMP](../../master/heated_plate_openmp/heated_plate_openmp.md),
a C++ program which solves the steady (time independent) heat equation
in a 2D rectangular region, using OpenMP to run in parallel.

[HELLO\_OPENMP](../../master/hello_openmp/hello_openmp.md), a C++
program which prints out "Hello, world!" using the OpenMP parallel
programming environment.

[MD\_OPENMP](../../master/md_openmp/md_openmp.md), a C++ program
which carries out a molecular dynamics simulation using OpenMP.

[MULTITASK\_OPENMP](../../master/multitask_openmp/multitask_openmp.md),
a C++ program which demonstrates how to "multitask", that is, to execute
several unrelated and distinct tasks simultaneously, using OpenMP for
parallel execution.

[OPENMP](../../master/openmp/openmp.md), C++ programs which
illustrate the use of the OpenMP application program interface for
carrying out parallel computations in a shared memory environment.

[OPENMP\_RCC](../../master/openmp_rcc/openmp_rcc.md), C++ programs
which illustrate how a C program, using OpenMP, can be compiled and run
in batch mode on the FSU High Performance Computing (HPC) cluster
operated by the Research Computing Center (RCC).

[POISSON\_OPENMP](../../master/poisson_openmp/poisson_openmp.md), a
C++ program which computes an approximate solution to the Poisson
equation in a rectangle, using the Jacobi iteration to solve the linear
system, and OpenMP to carry out the Jacobi iteration in parallel.

[PRIME\_OPENMP](../../master/prime_openmp/prime_openmp.md), a C++
program which counts the number of primes between 1 and N, using OpenMP
for parallel execution.

[QUAD\_OPENMP](../../master/quad_openmp/quad_openmp.md), a C++
program which applies a quadrature rule to estimate an integral, and
executes in parallel using OpenMP.

[RANDOM\_OPENMP](../../master/random_openmp/random_openmp.md), a C++
program which illustrates how a parallel program using OpenMP can
generate multiple distinct streams of random numbers.

[SATISFY\_OPENMP](../../master/satisfy_openmp/satisfy_openmp.md), a
C++ program which demonstrates, for a particular circuit, an exhaustive
search for solutions of the circuit satisfiability problem, using OpenMP
for parallel execution.

[SCHEDULE\_OPENMP](../../master/schedule_openmp/schedule_openmp.md),
a C++ program which demonstrates the default, static, and dynamic
methods of "scheduling" loop iterations in OpenMP to avoid work
imbalance.

[SGEFA\_OPENMP](../../master/sgefa_openmp/sgefa_openmp.md), a C++
program which reimplements the SGEFA/SGESL linear algebra routines from
LINPACK for use with OpenMP.

[ZIGGURAT\_OPENMP](../../master/ziggurat_openmp/ziggurat_openmp.md),
a C++ program which demonstrates how the ZIGGURAT library can be used to
generate random numbers in an OpenMP parallel program.

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

-   [mxm\_openmp.cpp](mxm_openmp.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**MXM\_LOCAL** runs the program locally.

-   [mxm\_local\_output.txt](mxm_local_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for MXM\_OPENMP.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 30 October 2011.*
