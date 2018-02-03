ZIGGURAT\_OPENMP\
Using the ZIGGURAT Library with OpenMP {#ziggurat_openmp-using-the-ziggurat-library-with-openmp align="center"}
======================================

------------------------------------------------------------------------

**ZIGGURAT\_OPENMP** is a C++ library which explores how the ZIGGURAT
library may be used, in conjunction with OpenMP, to compute random
numbers efficiently and correctly.

The primary worry, when computing random numbers in OpenMP, occurs when
the user calls a random number generator which may have some internal
memory. In that case, the internal memory may become corrupted if
multiple threads are invoking the code at the same time.

A safe way to compute random numbers is to ensure that the seed value,
and any other data or tables needed by the computation, are stored
externally, in the user program. That way, each thread can have a
separate copy of the data, and multiple threads of random number
calculations can be going along simultaneously without fear of
overwriting or memory contention.

The program presented here is somewhat awkward, because it wishes to
verify that OpenMP can compute exactly the same data as a sequential
program. To do so, we need to create separate seeds for each threads,
and ensure that the threads execute the loop iterations in some
predictable sequence. When the sequential program goes through the same
calculations, we again have to do some acrobatics to ensure that it is
doing the same things that the parallel program did.

So some of the complications in this program are there to ensure that we
can exhibit the same results sequentially and in parallel. Once you are
convinced of that, and see how to go about this, your own program can be
set up without some of the overhead and special instructions used in
this demonstration.

On an Apple PowerPC G5 with two processors, the following results were
observed:

  Threads   Test01    Test02    Test03    Test04
  --------- --------- --------- --------- ---------
  1         0.521 s   2.342 s   1.175 s   1.223 s
  2         0.226 s   1.202 s   0.595 s   0.615 s
  4         0.225 s   1.187 s   0.592 s   0.614 s

### Usage: {#usage align="center"}

In the BASH shell, the program could be run with 2 threads using the
commands:

            export OMP_NUM_THREADS=2
            ./ziggurat_openmp
          

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**ZIGGURAT\_OPENMP** is available in [a C
version](../../c_src/ziggurat_openmp/ziggurat_openmp.html) and [a C++
version](../../cpp_src/ziggurat_openmp/ziggurat_openmp.html) and [a
FORTRAN77 version](../../f77_src/ziggurat_openmp/ziggurat_openmp.html)
and [a FORTRAN90
version](../../f_src/ziggurat_openmp/ziggurat_openmp.html).

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

[SCHEDULE\_OPENMP](../../cpp_src/schedule_openmp/schedule_openmp.html),
a C++ program which demonstrates the default, static, and dynamic
methods of "scheduling" loop iterations in OpenMP to avoid work
imbalance.

[SGEFA\_OPENMP](../../cpp_src/sgefa_openmp/sgefa_openmp.html), a C++
program which reimplements the SGEFA/SGESL linear algebra routines from
LINPACK for use with OpenMP.

[ZIGGURAT](../../cpp_src/ziggurat/ziggurat.html), a C++ program which
generates points from a uniform, normal or exponential distribution,
using the ziggurat method.

### Reference: {#reference align="center"}

1.  Philip Leong, Guanglie Zhang, Dong-U Lee, Wayne Luk, John
    Villasenor,\
    A comment on the implementation of the ziggurat method,\
    Journal of Statistical Software,\
    Volume 12, Number 7, February 2005.
2.  George Marsaglia, Wai Wan Tsang,\
    The Ziggurat Method for Generating Random Variables,\
    Journal of Statistical Software,\
    Volume 5, Number 8, October 2000, seven pages.

### Source Code: {#source-code align="center"}

-   [ziggurat\_openmp.cpp](ziggurat_openmp.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**ZIGGURAT\_LOCAL** compiles, links, loads and runs the program using 1,
2 and 4 threads, the local interactive environment, and the GNU G++
compiler.

-   [ziggurat\_local\_output.txt](ziggurat_local_output.txt), the output
    file;

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for ZIGGURAT\_OPENMP.
-   **TEST01** tests SHR3.
-   **TEST02** tests R4\_UNI.
-   **TEST03** tests R4\_NOR.
-   **TEST04** tests R4\_EXP.
-   **R4\_EXP** returns an exponentially distributed single precision
    real value.
-   **R4\_EXP\_SETUP** sets data needed by R4\_EXP.
-   **R4\_NOR** returns a normally distributed single precision real
    value.
-   **R4\_NOR\_SETUP** sets data needed by R4\_NOR.
-   **R4\_UNI** returns a uniformly distributed real value.
-   **SHR3** evaluates the SHR3 generator for integers.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 04 October 2013.*
