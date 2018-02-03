MULTITASK\_OPENMP\
Carrying Out Multiple "Tasks" in OpenMP {#multitask_openmp-carrying-out-multiple-tasks-in-openmp align="center"}
=======================================

------------------------------------------------------------------------

**MULTITASK\_OPENMP** is a C++ program which demonstrates how to
"multitask", that is, to execute several unrelated and distinct tasks
simultaneously, using OpenMP for parallel execution.

This program demonstrates how OpenMP can be used for multitasking, that
is, a simple kind of parallel processing in which a certain number of
perhaps quite unrelated tasks must be done.

The OpenMP SECTIONS directive identifies the portion of the program
where the code for these tasks is given.

The OpenMP SECTION directive is used repeatedly to divide this area of
the program into independent tasks.

The code will get the benefit of parallel processing up to the point
where there are as many threads as there are tasks.

The code will get a substantial speedup if the tasks take roughly the
same amount of time. However, if one task takes substantially more time
than the others, this results in a limit to the parallel speedup that is
possible.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**MULTITASK\_OPENMP** is available in [a C
version](../../c_src/multitask_openmp/multitask_openmp.md) and [a C++
version](../../master/multitask_openmp/multitask_openmp.md) and [a
FORTRAN77 version](../../f77_src/multitask_openmp/multitask_openmp.md)
and [a FORTRAN90
version](../../f_src/multitask_openmp/multitask_openmp.md).

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
which carries out a molecular dynamics simulation in parallel, using
OpenMP.

[MULTITASK\_MPI](../../master/multitask_mpi/multitask_mpi.md), a C++
program which demonstrates how to "multitask", that is, to execute
several unrelated and distinct tasks simultaneously, using MPI for
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

[SCHEDULE\_OPENMP](../../master/schedule_open_mp/schedule_open_mp.md),
a C++ program which demonstrates the default, static, and dynamic
methods of "scheduling" loop iterations in OpenMP to avoid work
imbalance.

[SGEFA\_OPENMP](../../master/sgefa_openmp/sgefa_openmp.md) is a C++
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
    ISBN13: 978-0262533027.
4.  [The OpenMP web site](http://www.openmp.org/)
5.  OpenMP Architecture Review Board,\
    OpenMP Application Program Interface,\
    Version 3.0,\
    May 2008.

### Source Code: {#source-code align="center"}

-   [multitask\_openmp.cpp](multitask_openmp.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**MULTITASK\_LOCAL** compiles, links, loads and runs the program using
1, 2 and 4 threads, the local interactive environment, and the G++
compiler.

-   [multitask\_local\_output.txt](multitask_local_output.txt), the
    output file;

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 19 October 2011.*
