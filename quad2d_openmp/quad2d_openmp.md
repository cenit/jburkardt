QUAD2D\_OPENMP\
Estimate an Integral over a 2D Domain using OpenMP {#quad2d_openmp-estimate-an-integral-over-a-2d-domain-using-openmp align="center"}
==================================================

------------------------------------------------------------------------

**QUAD\_OPENMP** is a C++ program which estimates an integral over a 2D
rectangular domain by using an averaging technique, and uses OpenMP to
carry out the calculation in parallel.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**QUAD2D\_OPENMP** is available in [a C
version](../../c_src/quad2d_openmp/quad2d_openmp.md) and [a C++
version](../../master/quad2d_openmp/quad2d_openmp.md) and [a
FORTRAN77 version](../../f77_src/quad2d_openmp/quad2d_openmp.md) and
[a FORTRAN90 version](../../f_src/quad2d_openmp/quad2d_openmp.md).

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

[MD](../../master/md/md.md), a C++ program which carries out a
molecular dynamics simulation, and is intended as a starting point for
implementing an OpenMP parallel version.

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

[PTHREADS](../../master/pthreads/pthreads.md), C++ programs which
illustrate the use of the POSIX thread library to carry out parallel
program execution.

[QUAD\_OPENMP](../../master/quad_openmp/quad_openmp.md), a C++
program which estimates an integral over an interval, using OpenMP for
parallel execution.

[QUAD2D\_SERIAL](../../master/quad2d_serial/quad2d_serial.md), a C++
program which approximates an integral over a 2D region using a product
quadrature rule, and is intended as a starting point for parallelization
exercises.

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
4.  [The OpenMP web site](http://www.openmp.org/)
5.  OpenMP Architecture Review Board,\
    OpenMP Application Program Interface,\
    Version 3.0,\
    May 2008.

### Source code: {#source-code align="center"}

-   [quad2d\_openmp.cpp](quad2d_openmp.cpp), the source code for the 2D
    problem;

### Examples and Tests: {#examples-and-tests align="center"}

**QUAD2D\_LOCAL\_G++** compiles, links, loads and runs the program using
1, 2 and 4 threads, the local interactive environment, and the g++
compiler.

-   [quad2d\_local\_g++\_output.txt](quad2d_local_g++_output.txt), the
    output file;

**QUAD2D\_LOCAL\_ICPC** compiles, links, loads and runs the program
using 1, 2 and 4 threads, the local interactive environment, and the
icpc compiler.

-   [quad2d\_local\_icpc\_output.txt](quad2d_local_icpc_output.txt), the
    output file;

**QUAD2D\_ITHACA\_G++** compiles, links, loads and runs the program
using 1, 2 and 4 threads, using the PBS queueing system on Virginia
Tech's Ithaca cluster, and the g++ compiler.

-   [quad2d\_ithaca\_g++\_output.txt](quad2d_ithaca_g++_output.txt), the
    output file;

**QUAD2D\_ITHACA\_ICPC** compiles, links, loads and runs the program
using 1, 2 and 4 threads, using the PBS queueing system on Virginia
Tech's Ithaca cluster, and the icpc compiler.

-   [quad2d\_ithaca\_icpc\_output.txt](quad2d_ithaca_icpc_output.txt),
    the output file;

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 11 October 2011.*
