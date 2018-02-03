HEATED\_PLATE\_OPENMP\
2D Steady State Heat Equation Using OpenMP {#heated_plate_openmp-2d-steady-state-heat-equation-using-openmp align="center"}
==========================================

------------------------------------------------------------------------

**HEATED\_PLATE\_OPENMP** is a C++ program which illustrates the use of
the OpenMP application program interface by employing an iteration that
solves the 2D steady state heat equation.

The C++ version of this problem has an feature; while FORTRAN OpenMP
programs can easily compute a maximum value in parallel using the
"reduction" clause, this is not possible in C++. This program shows how
the maximum can nonetheless be computed, using an approach that combines
private variables and a critical section.

The sequential version of this program needs approximately 18/eps
iterations to complete.

The physical region, and the boundary conditions, are suggested by this
diagram;

                         W = 0
                   +------------------+
                   |                  |
          W = 100  |                  | W = 100
                   |                  |
                   +------------------+
                         W = 100
          

The region is covered with a grid of M by N nodes, and an N by N array W
is used to record the temperature. The correspondence between array
indices and locations in the region is suggested by giving the indices
of the four corners:

                        I = 0
                [0][0]-------------[0][N-1]
                   |                  |
            J = 0  |                  |  J = N-1
                   |                  |
              [M-1][0]-----------[M-1][N-1]
                        I = M-1
          

The steady state solution to the discrete heat equation satisfies the
following condition at an interior grid point:

            W[Central] = (1/4) * ( W[North] + W[South] + W[East] + W[West] )
          

where "Central" is the index of the grid point, "North" is the index of
its immediate neighbor to the "north", and so on.

Given an approximate solution of the steady state heat equation, a
"better" solution is given by replacing each interior point by the
average of its 4 neighbors - in other words, by using the condition as
an ASSIGNMENT statement:

            W[Central]  <=  (1/4) * ( W[North] + W[South] + W[East] + W[West] )
          

If this process is repeated often enough, the difference between
successive estimates of the solution will go to zero.

This program carries out such an iteration, using a tolerance specified
by the user, and writes the final estimate of the solution to a file
that can be used for graphic processing.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**HEATED\_PLATE\_OPENMP** is available in [a C
version](../../c_src/hello/hello.html) and [a C++
version](../../cpp_src/hello/hello.html) and [a FORTRAN77
version](../../f77_src/hello/hello.html) and [a FORTRAN90
version](../../f_src/hello/hello.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[DIJKSTRA\_OPENMP](../../cpp_src/dijkstra_openmp/dijkstra_openmp.html),
a C++ program which uses OpenMP to parallelize a simple example of
Dijkstra's minimum distance algorithm for graphs.

[FFT\_OPENMP](../../cpp_src/fft_openmp/fft_openmp.html), a C++ program
which demonstrates the computation of a Fast Fourier Transform in
parallel, using OpenMP.

[HEATED\_PLATE](../../cpp_src/heated_plate/heated_plate.html), a C++
program which solves the steady (time independent) heat equation in a 2D
rectangular region, and is intended as a starting point for implementing
an OpenMP parallel version.

[HELLO\_OPENMP](../../cpp_src/hello_openmp/hello_openmp.html), a C++
program which prints out "Hello, world!" using the OpenMP parallel
programming environment.

[MD\_OPENMP](../../cpp_src/md_openmp/md_openmp.html), a C++ program
which carries out a molecular dynamics simulation using OpenMP.

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

[PRIME\_OPENMP](../../cpp_src/prime_openmp/prime_openmp.html), a C++
program which counts the number of primes between 1 and N, using OpenMP
for parallel execution.

[QUAD\_OPENMP](../../cpp_src/quad_openmp/quad_openmp.html), a C++
program which approximates an integral using a quadrature rule, and
carries out the computation in parallel using OpenMP.

[RANDOM\_OPENMP](../../cpp_src/random_openmp/random_openmp.html), a C++
program which illustrates how a parallel program using OpenMP can
generate multiple distinct streams of random numbers.

[SATISFY\_OPENMP](../../cpp_src/satisfy_openmp/satisfy_openmp.html), a
C++ program which demonstrates, for a particular circuit, an exhaustive
search for solutions of the circuit satisfiability problem, using OpenMP
for parallel execution.

[SCHEDULE\_OPENMP](../../cpp_src/schedule_openmp/schedule_openmp.html),
a C++ program which demonstrates the default, static, and dynamic
methods of "scheduling" loop iterations in OpenMP to avoid work
imbalance.

[SGEFA\_OPENMP](../../cpp_src/sgefa_openmp/sgefa_openmp.html), a C++
program which reimplements the SGEFA/SGESL linear algebra routines from
LINPACK for use with OpenMP.

[ZIGGURAT\_OPENMP](../../cpp_src/ziggurat_openmp/ziggurat_openmp.html),
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

-   [heated\_plate\_openmp.cpp](heated_plate_openmp.cpp), the source
    code;

### Examples and Tests: {#examples-and-tests align="center"}

**HEATED\_PLATE\_LOCAL\_G++** compiles, links, loads and runs the
program using 1, 2 and 4 threads, the local interactive environment, and
the GNU g++ compiler.

-   [heated\_plate\_local\_g++\_output.txt](heated_plate_local_g++_output.txt),
    the output file;

**HEATED\_PLATE\_LOCAL\_ICPC** compiles, links, loads and runs the
program using 1, 2 and 4 threads, the local interactive environment, and
the Intel icpc compiler.

-   [heated\_plate\_local\_icpc\_output.txt](heated_plate_local_icpc_output.txt),
    the output file;

**HEATED\_PLATE\_ITHACA\_G++** compiles, links, loads and runs the
program using 1, 2 and 4 threads, using the PBS queueing system on
Virginia Tech's Ithaca cluster, and the GNU g++ compiler.

-   [heated\_plate\_ithaca\_g++\_output.txt](heated_plate_ithaca_g++_output.txt),
    the output file;

**HEATED\_PLATE\_ITHACA\_ICPC** compiles, links, loads and runs the
program using 1, 2 and 4 threads, using the PBS queueing system on
Virginia Tech's Ithaca cluster, and the Intel icpc compiler.

-   [heated\_plate\_ithaca\_icpc\_output.txt](heated_plate_ithaca_icpc_output.txt),
    the output file;

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 15 July 2010.*
