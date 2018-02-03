OPENMP\
C++ Examples of Parallel Programming with OpenMP {#openmp-c-examples-of-parallel-programming-with-openmp align="center"}
================================================

------------------------------------------------------------------------

**OPENMP** is a directory of C++ programs which illustrate the use of
the OpenMP application program interface for carrying out parallel
computations in a shared memory environment.

The directives allow the user to mark areas of the code, such as **do**,
**while** or **for** loops, which are suitable for parallel processing.
The directives appear as a special kind of comment, so the program can
be compiled and run in serial mode. However, the user can tell the
compiler to "notice" the special directives, in which case a version of
the program will be created that runs in parallel.

Thus the same program can easily be run in serial or parallel mode on a
given computer, or run on a computer that does not have OpenMP at all.

OpenMP is suitable for a *shared memory* parallel system, that is, a
situation in which there is a single memory space, and multiple
processors. If memory is shared, then typically the number of processors
will be small, and they will all be on the same physical machine.

By contrast, in a *distributed memory* system, items of data are closely
associated with a particular processor. There may be a very large number
of processors, and they may be more loosely coupled and even on
different machines. Such a system will need to be handled with MPI or
some other message passing interface.

OpenMP descended in part from the old Cray microtasking directives, so
if you've lived long enough to remember those, you will recognize some
features.

### C++ Issues {#c-issues align="center"}

OpenMP includes a number of functions whose type must be declared in any
program that uses them. A user program calling OpenMP must have the
statement

            # include <omp.h>
          

### "Pretend" Parallelism {#pretend-parallelism align="center"}

OpenMP allows you to "request" any number of threads of execution. This
is a request, and it's not always a wise request. If your system has
four processors available, and they're not busy doing other things, or
serving other users, maybe 4 threads is what you want. But you can't
guarantee you'll get the undivided use of those processors. Moreover, if
you run the same program using 1 thread and 4 threads, you may find that
using 4 threads *slows you down*, either because you don't actually have
4 processors, (so the system has the overhead of pretending to run in
parallel), or because the processors you have are also busy doing other
things.

For this reason, it's wise to run the program at least once in single
thread mode, so you have a benchmark against which to measure the
speedup you got (or didn't get!) versus the speedup you hoped for.

### Compiler Support {#compiler-support align="center"}

The compiler you use must recognize the OpenMP directives in order to
produce code that will run in parallel. Here are some of the compilers
available that support OpenMP:

-   The GNU compilers **gcc/g++** (version 4.2 or later) and
    **gfortran** (version 2.0 or later).
-   The IBM compilers **xlc** and **xlf**.
-   The Intel compilers **icc**, **icpc** and **ifort**.
-   The Microsoft Visual C++ compiler.
-   The Portland Group C/C++ and Fortran compilers.
-   Sun Studio C/C++ and Fortran95 compilers.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**OPENMP** examples are available in [a C
version](../../c_src/openmp/openmp.html) and [a C++
version](../../cpp_src/openmp/openmp.html) and [a FORTRAN77
version](../../f77_src/openmp/openmp.html) and [a FORTRAN90
version](../../f_src/openmp/openmp.html).

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
which carries out a molecular dynamics simulation using OpenMP.

[MULTITASK\_OPENMP](../../cpp_src/multitask_openmp/multitask_openmp.html),
a C++ program which demonstrates how to "multitask", that is, to execute
several unrelated and distinct tasks simultaneously, using OpenMP for
parallel execution.

[MXM\_OPENMP](../../cpp_src/mxm_openmp/mxm_openmp.html), a C++ program
which computes a dense matrix product C=A\*B, using OpenMP for parallel
execution.

[OPENMP\_RCC](../../cpp_src/openmp_rcc/openmp_rcc.html), C++ programs
which illustrate how a C program, using OpenMP, can be compiled and run
in batch mode on the FSU High Performance Computing (HPC) cluster
operated by the Research Computing Center (RCC).

[OPENMP\_STUBS](../../cpp_src/openmp_stubs/openmp_stubs.html), a C++
library which implements a "stub" version of OpenMP, so that an OpenMP
program can be compiled, linked and executed on a system that does not
have OpenMP installed.

[POISSON\_OPENMP](../../cpp_src/poisson_openmp/poisson_openmp.html), a
C++ program which computes an approximate solution to the Poisson
equation in a rectangle, using the Jacobi iteration to solve the linear
system, and OpenMP to carry out the Jacobi iteration in parallel.

[PRIME\_OPENMP](../../cpp_src/prime_openmp/prime_openmp.html), a C++
program which counts the number of primes between 1 and N, using OpenMP
for parallel execution.

[PTHREADS](../../c_src/pthreads/pthreads.html), C programs which
illustrate the use of the POSIX thread library to carry out parallel
program execution.

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

### Examples and Tests: {#examples-and-tests align="center"}

**COMPUTE\_PI** shows how information can be shared. Several processors
cooperate to estimate the value of pi.

-   [compute\_pi.cpp](compute_pi.cpp), the source code;
-   [compute\_pi\_local\_output.txt](compute_pi_local_output.txt), the
    output file using 1 thread;

**DOT\_PRODUCT** compares the computation of a vector dot product in
sequential mode, and using OpenMP. Typically, the overhead of using
parallel processing outweighs the advantage for small vector sizes N.
The code demonstrates this fact by using a number of values of N, and by
running both sequential and OpenMP versions of the calculation.

-   [dot\_product.cpp](dot_product.cpp), the source code;
-   [dot\_product\_local\_output.txt](dot_product_local_output.txt), the
    output file;

**HELMHOLTZ** is a program that solves the Helmholtz equation on a
rectangular grid, using Jacobi iteration with overrelaxation;

-   [helmholtz.cpp](helmholtz.cpp), the source code;
-   [helmholtz\_local\_output.txt](helmholtz_local_output.txt), the
    output file;

**MXM** is a simple exercise in timing the computation of a
matrix-matrix product.

-   [mxm.cpp](mxm.cpp), the source code;
-   [mxm\_output\_local.txt](mxm_output_local.txt), the output file
    using 1 thread;

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 14 May 2011.*
