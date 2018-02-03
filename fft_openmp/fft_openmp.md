FFT\_OPENMP\
Fast Fourier Transform Using OpenMP {#fft_openmp-fast-fourier-transform-using-openmp align="center"}
===================================

------------------------------------------------------------------------

**FFT\_OPENMP** is a C++ program which demonstrates the computation of a
Fast Fourier Transform in parallel, using OpenMP.

On an Apple PowerPC G5 with two processors, the following results were
observed:

  Threads   N            Time    MegaFLOPS
  --------- ------------ ------- -----------
  1         33,554,432   32.06   130.8
  2         33,554,432   19.70   212.8
  4         33,554,432   20.10   208.6

### Usage: {#usage align="center"}

In the BASH shell, the program could be run with 2 threads using the
commands:

            export OMP_NUM_THREADS=2
            ./fft_openmp
          

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FFT\_OPENMP** is available in [a C
version](../../c_src/fft_openmp/fft_openmp.html) and [a C++
version](../../cpp_src/fft_openmp/fft_openmp.html) and [a FORTRAN77
version](../../f77_src/fft_openmp/fft_openmp.html) and [a FORTRAN90
version](../../f_src/fft_openmp/fft_openmp.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[DIJKSTRA\_OPENMP](../../cpp_src/dijkstra_openmp/dijkstra_openmp.html),
a C++ program which uses OpenMP to parallelize a simple example of
Dijkstra's minimum distance algorithm for graphs.

[FFT\_SERIAL](../../cpp_src/fft_serial/fft_serial.html), a C++ program
which demonstrates the computation of a Fast Fourier Transform, and is
intended as a starting point for implementing a parallel version using
OpenMP.

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

[SFTPACK](../../cpp_src/sftpack/sftpack.html), a C++ library which
implements the "slow" Fourier transform, intended as a teaching tool and
comparison with the fast Fourier transform.

[SGEFA\_OPENMP](../../cpp_src/sgefa_openmp/sgefa_openmp.html), a C++
program which solves a linear system by Gaussian elimination, using
OpenMP.

[ZIGGURAT\_OPENMP](../../cpp_src/ziggurat_openmp/ziggurat_openmp.html),
a C++ program which demonstrates how the ZIGGURAT library can be used to
generate random numbers in an OpenMP parallel program.

### Reference: {#reference align="center"}

1.  Wesley Petersen, Peter Arbenz,\
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

-   [fft\_openmp.cpp](fft_openmp.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**FFT\_LOCAL\_G++** compiles, links, loads and runs the program using 1,
2 and 4 threads, the local interactive environment, and the G++ C++
compiler.

-   [hello\_local\_g++.sh](fft_local_g++.sh), BASH commands.
-   [hello\_local\_g++\_output.txt](fft_local_g++_output.txt), the
    output file;

**FFT\_LOCAL\_ICPC** compiles, links, loads and runs the program using
1, 2 and 4 threads, the local interactive environment, and the ICPC C++
compiler.

-   [hello\_local\_icpc.sh](fft_local_icpc.sh), BASH commands.
-   [hello\_local\_icpc\_output.txt](fft_local_icpc_output.txt), the
    output file;

**FFT\_ITHACA\_G++** compiles, links, loads and runs the program using
1, 2 and 4 threads, using the PBS queueing system on Virginia Tech's
Ithaca cluster, and the G++ C++ compiler.

-   [hello\_ithaca\_g++.sh](fft_ithaca_g++.sh), BASH commands.
-   [hello\_ithaca\_g++\_output.txt](fft_ithaca_g++_output.txt), the
    output file;

**FFT\_ITHACA\_ICPC** compiles, links, loads and runs the program using
1, 2 and 4 threads, using the PBS queueing system on Virginia Tech's
Ithaca cluster, and the ICPC C++ compiler.

-   [hello\_ithaca\_icpc.sh](fft_ithaca_icpc.sh), BASH commands.
-   [hello\_ithaca\_icpc\_output.txt](fft_ithaca_icpc_output.txt), the
    output file;

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for FFT\_OPENMP.
-   **CCOPY** copies a complex vector.
-   **CFFT2** performs a complex Fast Fourier Transform.
-   **CFFTI** sets up sine and cosine tables needed for the FFT
    calculation.
-   **GGL** generates u(0,1) distributed random numbers.
-   **STEP** carries out one step of the workspace version of CFFT2.
-   **TIMESTAMP** prints the YMDHMS date as a timestamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 20 March 2009.*
