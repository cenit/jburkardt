OPENMP\_STUBS\
A C++ "Stub" Library for OpenMP {#openmp_stubs-a-c-stub-library-for-openmp align="center"}
===============================

------------------------------------------------------------------------

**OPENMP\_STUBS** is a C++ library which constitute a "stub"
implementation of the OpenMP 2.5 standard.

A stub library is useful when you want to try out a program on a system
that does not have OpenMP, or when you need to have a formally complete
program to analyze, or in other cases where you want to ignore the
actual OpenMP library. A stub library can also help to understand the
structure of the actual library.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**OPENMP\_STUBS** is available in [a C
version](../../c_src/openmp_stubs/openmp_stubs.html) and [a C++
version](../../cpp_src/openmp_stubs/openmp_stubs.html) and [a FORTRAN77
version](../../f77_src/openmp_stubs/openmp_stubs.html) and [a FORTRAN90
version](../../f_src/openmp_stubs/openmp_stubs.html).

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

[MXM\_OPENMP](../../cpp_src/mxv_openmp/mxv_openmp.html), a C++ program
which computes a dense matrix product C=A\*B, using OpenMP for parallel
execution.

[OPENMP](../../cpp_src/openmp/openmp.html), C++ programs which
illustrate the use of OpenMP directives and function calls to solve
problems in parallel.

[PRIME\_OPENMP](../../cpp_src/prime_openmp/prime_openmp.html), a C++
program which counts the number of primes between 1 and N, using OpenMP
for parallel execution.

[QUAD\_OPENMP](../../cpp_src/quad_openmp/quad_openmp.html), a C++
program which approximates an integral using a quadrature rule, and
carries out the computation in parallel using OpenMP.

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

1.  Rohit Chandra, Leonardo Dagum, Dave Kohr, Dror Maydan, Jeff
    McDonald, Ramesh Menon,\
    Parallel Programming in OpenMP,\
    Morgan Kaufmann, 2001,\
    ISBN: 1-55860-671-8,\
    LC: QA76.642.P32.
2.  Barbara Chapman, Gabriele Jost, Ruud vanderPas, David Kuck,\
    Using OpenMP: Portable Shared Memory Parallel Processing,\
    MIT Press, 2007,\
    ISBN13: 978-0262533027.
3.  [The OpenMP web site](http://www.openmp.org/)
4.  OpenMP Architecture Review Board,\
    OpenMP Application Program Interface,\
    Version 3.0,\
    May 2008.

### Source Code: {#source-code align="center"}

-   [openmp\_stubs.cpp](openmp_stubs.cpp), the source code.
-   [openmp\_stubs.hpp](openmp_stubs.hpp), a simple "include" file that
    declares the type of the functions that are part of the library. An
    OpenMP code will probably be looking for a file called "omp.h"
    instead.

### Examples and Tests: {#examples-and-tests align="center"}

**Note that these examples are normally run in parallel with OpenMP. The
point being made here is that such programs can be run sequentially, as
though OpenMP were available, by calling the OPENMP\_STUBS library. They
don't run well (fast) - it's just remarkable that they run at all.**

**COMPUTE\_PI** shows how information can be shared. Several processors
need to compute pieces of a sum that will approximate pi.

-   [compute\_pi.cpp](../../cpp_src/openmp/compute_pi.cpp), the source
    code;
-   [compute\_pi\_output.txt](compute_pi_output.txt), the output file;

**HELLO** is a very simple program which calls an OpenMP subroutine to
set the number of threads, and then has each thread say hello;

-   [hello.cpp](../../cpp_src/openmp/hello.cpp), the source code;
-   [hello\_output.txt](hello_output.txt), the output file;

**HELMHOLTZ** is a program that solves the Helmholtz equation on a
rectangular grid, using Jacobi iteration with overrelaxation;

-   [helmholtz.cpp](../../cpp_src/helmholtz.cpp), the source code;
-   [helmholtz\_output.txt](helmholtz_output.txt), the output file;

### List of Routines: {#list-of-routines align="center"}

**Again, please don't be confused. These routines have the same names as
the real OpenMP library; they just don't do anything. Well, not much,
anyway. They do just enough to let a program run in sequential mode.**

-   **OMP\_DESTROY\_LOCK** destroys a simple lock.
-   **OMP\_DESTROY\_NEST\_LOCK** destroys a nestable lock.
-   **OMP\_GET\_DYNAMIC** reports if dynamic adjustment of thread number
    is allowed.
-   **OMP\_GET\_MAX\_THREADS** returns the default number of threads.
-   **OMP\_GET\_NESTED** reports if nested parallelism has been enabled.
-   **OMP\_GET\_NUM\_PROCS** returns the number of processors available
    to the program.
-   **OMP\_GET\_NUM\_THREADS** returns the number of threads in the
    current team.
-   **OMP\_GET\_THREAD\_NUM** returns the thread number of a thread in a
    team.
-   **OMP\_GET\_WTICK** returns the precision of the timer used by
    OMP\_GET\_WTIME.
-   **OMP\_GET\_WTIME** returns elapsed wall clock time in seconds.
-   **OMP\_IN\_PARALLEL** returns TRUE if the call is made from a
    parallel region.
-   **OMP\_INIT\_LOCK** initializes a simple lock.
-   **OMP\_INIT\_NEST\_LOCK** initializes a nestable lock.
-   **OMP\_SET\_DYNAMIC** enables dynamic adjustment of the number of
    threads.
-   **OMP\_SET\_LOCK** sets a simple lock.
-   **OMP\_SET\_NEST\_LOCK** sets a nestable lock.
-   **OMP\_SET\_NESTED** controls the use of nested parallelism.
-   **OMP\_SET\_NUM\_THREADS** sets the number of threads.
-   **OMP\_TEST\_LOCK** tests a simple lock.
-   **OMP\_TEST\_NEST\_LOCK** tests a nestable lock.
-   **OMP\_UNSET\_LOCK** unsets a simple lock.
-   **OMP\_UNSET\_NEST\_LOCK** unsets a nestable lock.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 20 November 2007.*
