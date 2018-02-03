SCHEDULE\_OPENMP\
Scheduling Loop Iterations in OpenMP {#schedule_openmp-scheduling-loop-iterations-in-openmp align="center"}
====================================

------------------------------------------------------------------------

**SCHEDULE\_OPENMP** is a C++ program which demonstrates the use of
default, static and dynamic scheduling of loop iterations in OpenMP.

By default, when OpenMP, executing with T threads, encounters a parallel
loop of N iterations, it assigns the first N/T iterations to thread 0,
the second chunk of N/T iterations to thread 1 and so on.

Sometimes this simple, default "scheduling" of the iterations is not
ideal. It may be the case that iterations of high index represent more
work. In that case, the lower numbered threads will finish early and
have nothing to do.

The **static** schedule clause modifies the iteration assignment
procedure by essentially "dealing out" the iterations. The clause
**schedule(static,5)**, for instance, indicates that the N iterations
are to be dealt out in groups of 5, until all are assigned. This
schedule might divide up the work more evenly.

In more complicated situations, where the work involved with each
iteration can vary dramatically, the **dynamic** schedule clause allows
the user to parcel out a small number of iterations initially, and then
to wait until a thread is finished that work, at which point it is given
another group of iterations. The format of this clause is
**schedule(dynamic,7)** where here 7 iterations are assigned to each
thread initially, and the remaining work is assigned, 7 iterations at a
time, to threads that finish what they have already been assigned.

### Example: {#example align="center"}

For simplicity, we assume that we have a loop of 16 iterations, which
has been parallelized by OpenMP, and that we are about to execute that
loop using 2 threads.

In **default scheduling**

-   thread 1 is assigned to do iterations 1 to 8;
-   thread 2 is assigned to do iterations 9 to 16.

In **static scheduling**, using a "chunksize" of 4:

-   thread 1 is assigned to do iterations 1 to 4 and 9 to 12.
-   thread 2 is assigned to do iterations 5 to 8 and 13 to 16.

In **dynamic scheduling**, using a "chunksize" of 3:

-   thread 1 is assigned to do iterations 1 to 3.
-   thread 2 is assigned to do iterations 4 to 6.

The next chunk is iterations 7 to 9, and will be assigned to whichever
thread finishes its current work first, and so on until all work is
completed.

### Usage: {#usage align="center"}

In the BASH shell, the program could be run with 2 threads using the
commands:

            export OMP_NUM_THREADS=2
            ./schedule_openmp
          

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SCHEDULE\_OPENMP** is available in [a C
version](../../c_src/schedule_openmp/schedule_openmp.html) and [a C++
version](../../cpp_src/schedule_openmp/schedule_openmp.html) and [a
FORTRAN77 version](../../f77_src/schedule_openmp/schedule_openmp.html)
and [a FORTRAN90
version](../../f_src/schedule_openmp/schedule_openmp.html).

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
search for solutions of the circuit satisfy problem, using OpenMP for
parallel execution.

[SGEFA\_OPENMP](../../cpp_src/sgefa_openmp/sgefa_openmp.html), a C++
program which reimplements the SGEFA/SGESL linear algebra routines from
LINPACK for use with OpenMP.

[TIMER](../../cpp_src/timer/timer.html), C++ programs which demonstrate
how to compute CPU time or elapsed time.

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
    ISBN13: 978-0262533027.
4.  [The OpenMP web site](http://www.openmp.org/)
5.  OpenMP Architecture Review Board,\
    OpenMP Application Program Interface,\
    Version 3.0,\
    May 2008.

### Source Code: {#source-code align="center"}

-   [schedule\_openmp.cpp](schedule_openmp.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**SCHEDULE\_LOCAL\_G++** compiles, links, loads and runs the program
using 2 threads, the local interactive environment, and the G++ C++
compiler.

-   [schedule\_local\_g++\_output.txt](schedule_local_g++_output.txt),
    the output file;

**SCHEDULE\_LOCAL\_ICPC** compiles, links, loads and runs the program
using 2 threads, the local interactive environment, and the ICPC C++
compiler.

-   [schedule\_local\_icpc\_output.txt](schedule_local_icpc_output.txt),
    the output file;

**SCHEDULE\_ITHACA\_G++** compiles, links, loads and runs the program
using 2 threads, using the PBS queueing system on Virginia Tech's Ithaca
cluster, and the G++ C++ compiler.

-   [schedule\_ithaca\_g++\_output.txt](schedule_ithaca_g++_output.txt),
    the output file;

**SCHEDULE\_ITHACA\_ICPC** compiles, links, loads and runs the program
using 2 threads, using the PBS queueing system on Virginia Tech's Ithaca
cluster, and the ICPC C++ compiler.

-   [schedule\_ithaca\_icpc\_output.txt](schedule_ithaca_icpc_output.txt),
    the output file;

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 10 July 2010.*
