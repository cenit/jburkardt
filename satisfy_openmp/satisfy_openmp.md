SATISFY\_OPENMP\
Seek Binary Circuit Inputs that Output 1, Using OpenMP {#satisfy_openmp-seek-binary-circuit-inputs-that-output-1-using-openmp align="center"}
======================================================

------------------------------------------------------------------------

**SATISFY\_OPENMP** is a C++ program which demonstrates, for a
particular circuit, an exhaustive search for solutions of the circuit
satisfy problem, using OpenMP for parallel execution.

This problem assumes that we are given a logical circuit of AND, OR and
NOT gates, with N=23 binary inputs and a single output. We are to
determine all inputs which produce a 1 as the output.

The general problem is NP complete, so there is no known polynomial-time
algorithm to solve the general case. The natural way to search for
solutions then is exhaustive search of all 2\^N possible inputs.

In an interesting way, this is a very extreme and discrete version of
the problem of maximizing a scalar function of multiple variables. The
difference is that here we know that both the input and output only have
the values 0 and 1, rather than a continuous range of real values!

This problem is a natural candidate for parallel computation, since the
individual evaluations of the circuit are completely independent.

On an Apple PowerPC G5 with two processors, the following results were
observed:

  Threads   2\^N        Time
  --------- ----------- --------------
  1         8,388,608   3.22 seconds
  2         8,388,608   1.66 seconds
  4         8,388,608   1.81 seconds

### Usage: {#usage align="center"}

In the BASH shell, the program could be run with 2 threads using the
commands:

            export OMP_NUM_THREADS=2
            ./satisfy_openmp
          

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SATISFY\_OPENMP** is available in [a C
version](../../c_src/satisfy_openmp/satisfy_openmp.html) and [a C++
version](../../cpp_src/satisfy_openmp/satisfy_openmp.html) and [a
FORTRAN77 version](../../f77_src/satisfy_openmp/satisfy_openmp.html) and
[a FORTRAN90 version](../../f_src/satisfy_openmp/satisfy_openmp.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CNF](../../data/cnf/cnf.html), a data directory which describes the
DIMACS CNF file format for defining instances of the satisfy problem in
for boolean formulas in conjunctive normal form.

[COMBO](../../cpp_src/combo/combo.html), a C++ library which includes
many combinatorial routines.

[DIJKSTRA\_OPENMP](../../cpp_src/dijkstra_openmp/dijkstra_openmp.html),
a C++ program which uses OpenMP to parallelize a simple example of
Dijkstra's minimum distance algorithm for graphs.

[FFT\_OPENMP](../../c_src/fft_openmp/fft_openmp.html), a C program which
demonstrates the computation of a Fast Fourier Transform in parallel,
using OpenMP.

[HEATED\_PLATE\_OPENMP](../../cpp_src/heated_plate_openmp/heated_plate_openmp.html),
a C++ program which solves the steady (time independent) heat equation
in a 2D rectangular region, using OpenMP to run in parallel.

[HELLO\_OPENMP](../../cpp_src/hello_openmp/hello_openmp.html), a C++
program which prints out "Hello, world!" using the OpenMP parallel
programming environment.

[LAU\_NP](../../f_src/lau_np/lau_np.html), a FORTRAN90 library which
implements heuristic algorithms for various NP-hard combinatorial
problems.

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

[SATISFY](../../cpp_src/satisfy/satisfy.html), a C++ program which
demonstrates, for a particular circuit, an exhaustive search for
solutions of the circuit satisfy problem.

[SATISFY\_MPI](../../cpp_src/satisfy_mpi/satisfy_mpi.html), a C++
program which demonstrates, for a particular circuit, an exhaustive
search for solutions of the circuit satisfy problem, using MPI to carry
out the calculation in parallel.

[SATISFY\_PARFOR](../../m_src/satisfy_parfor/satisfy_parfor.html), a
MATLAB program which is intended to be run in parallel using MATLAB's
"PARFOR" feature.

[SCHEDULE\_OPENMP](../../cpp_src/schedule_openmp/schedule_openmp.html),
a C++ program which demonstrates the default, static, and dynamic
methods of "scheduling" loop iterations in OpenMP to avoid work
imbalance.

[SGEFA\_OPENMP](../../cpp_src/sgefa_openmp/sgefa_openmp.html), a C++
program which solves a linear system by Gaussian elimination, using
OpenMP.

[SUBSET](../../cpp_src/subset/subset.html), a C++ library which
enumerates combinations, partitions, subsets, index sets, and other
combinatorial objects.

[ZIGGURAT\_OPENMP](../../cpp_src/ziggurat_openmp/ziggurat_openmp.html),
a C++ program which demonstrates how the ZIGGURAT library can be used to
generate random numbers in an OpenMP parallel program.

### Reference: {#reference align="center"}

1.  Michael Quinn,\
    Parallel Programming in C with MPI and OpenMP,\
    McGraw-Hill, 2004,\
    ISBN13: 978-0071232654,\
    LC: QA76.73.C15.Q55.

### Source Code: {#source-code align="center"}

-   [satisfy\_openmp.cpp](satisfy_openmp.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**SATISFY\_LOCAL** runs SATISFY\_OPENMP locally.

-   [satisfy\_local\_output.txt](satisfy_local_output.txt), the output
    file.

**SATISFY\_ITHACA** runs SATISFY\_OPENMP through the batch system.

-   [satisfy\_ithaca\_output.txt](satisfy_ithaca_output.txt), the output
    file.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for SATISFY\_OPENMP.
-   **BVEC\_NEXT** generates the next binary vector.
-   **CIRCUIT\_VALUE** returns the value of a circuit for a given input
    set.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 04 September 2009.*
