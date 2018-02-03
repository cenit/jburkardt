SGEFA\_OPENMP\
Sequential and OpenMP versions of Linpack Solver {#sgefa_openmp-sequential-and-openmp-versions-of-linpack-solver align="center"}
================================================

------------------------------------------------------------------------

**SGEFA\_OPENMP** is a C++ program which reimplements the SGEFA/SGESL
linear algebra routines from LINPACK for use with OpenMP.

Right now, running for N = 10, 100 and 1000, but only using a 2
Processor Apple G5, the parallel code is not doing well at all. I will
try to find out what is holding it back.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SGEFA\_OPENMP** is available in [a C
version](../../c_src/sgefa_openmp/sgefa_openmp.md) and [a C++
version](../../master/sgefa_openmp/sgefa_openmp.md) and [a FORTRAN77
version](../../f77_src/sgefa_openmp/sgefa_openmp.md) and [a FORTRAN90
version](../../f_src/sgefa_openmp/sgefa_openmp.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BLAS1\_S](../../master/blas1_s/blas1_s.md), a C++ library which
contains basic linear algebra routines for vector-vector operations,
using single precision real arithmetic.

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

[LINPACK](../../master/linpack/linpack.md), a C++ library which
factors and solves systems of linear equations in a variety of formats
and arithmetic types.

[LINPACK\_BENCH](../../master/linpack_bench/linpack_bench.md), a C++
program which measures the time taken by **LINPACK** to solve a
particular linear system.

[MD\_OPENMP](../../master/md_openmp/md_openmp.md), a C++ program
which carries out a molecular dynamics simulation using OpenMP.

[MULTITASK\_OPENMP](../../master/multitask_openmp/multitask_openmp.md),
a C++ program which demonstrates how to "multitask", that is, to execute
several unrelated and distinct tasks simultaneously, using OpenMP for
parallel execution.

[MXM\_OPENMP](../../master/mxm_openmp/mxm_openmp.md), a C++ program
which computes a dense matrix product C=A\*B, using OpenMP for parallel
execution.

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
program which approximates an integral using a quadrature rule, and
carries out the computation in parallel using OpenMP.

[RANDOM\_OPENMP](../../master/random_openmp/random_openmp.md), a C++
program which illustrates how a parallel program using OpenMP can
generate multiple distinct streams of random numbers.

[SATISFY\_OPENMP](../../master/satisfy_openmp/satisfy_openmp.md), a
C++ program which demonstrates, for a particular circuit, an exhaustive
search for solutions of the circuit satisfy problem, using OpenMP for
parallel execution.

[SCHEDULE\_OPENMP](../../master/schedule_openmp/schedule_openmp.md),
a C++ program which demonstrates the default, static, and dynamic
methods of "scheduling" loop iterations in OpenMP to avoid work
imbalance.

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
4.  Jack Dongarra, Jim Bunch, Cleve Moler, Pete Stewart,\
    LINPACK User's Guide,\
    SIAM, 1979,\
    ISBN13: 978-0-898711-72-1,\
    LC: QA214.L56.
5.  Charles Lawson, Richard Hanson, David Kincaid, Fred Krogh,\
    Algorithm 539: Basic Linear Algebra Subprograms for Fortran Usage,\
    ACM Transactions on Mathematical Software,\
    Volume 5, Number 3, September 1979, pages 308-323.

### Source Code: {#source-code align="center"}

-   [sgefa\_openmp.cpp](sgefa_openmp.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**SGEFA\_LOCAL** runs the program locally.

-   [sgefa\_local\_output.txt](sgefa_local_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for the SGEFA\_OPENMP test program.
-   **TEST01** runs the sequential version of SGEFA.
-   **TEST02** runs the parallel version of SGEFA.
-   **TEST03** runs the parallel version of SGEFA in sequential mode.
-   **ISAMAX** finds the index of the vector element of maximum absolute
    value.
-   **MATGEN** generates a "random" matrix for testing.
-   **MSAXPY** carries out multiple "SAXPY" operations.
-   **MSAXPY2** carries out multiple "SAXPY" operations.
-   **MSGEFA** factors a matrix by gaussian elimination.
-   **MSGEFA2** factors a matrix by gaussian elimination.
-   **SAXPY** computes float constant times a vector plus a vector.
-   **SDOT** forms the dot product of two vectors.
-   **SGEFA** factors a double precision matrix by gaussian elimination.
-   **SGESL** solves a real general linear system A \* X = B.
-   **SSCAL** scales a float vector by a constant.
-   **SSWAP** interchanges two float vectors.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 24 April 2008.*
