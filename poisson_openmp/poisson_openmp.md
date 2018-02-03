POISSON\_OPENMP\
Poisson Equation, Jacobi Iteration Parallelized with OpenMP {#poisson_openmp-poisson-equation-jacobi-iteration-parallelized-with-openmp align="center"}
===========================================================

------------------------------------------------------------------------

**POISSON\_OPENMP** is a C++ program which computes an approximate
solution to the Poisson equation in a rectangular region, using OpenMP
to carry out the Jacobi iteration in parallel.

The version of Poisson's equation being solved here is

            - ( d/dx d/dx + d/dy d/dy ) U(x,y) = F(x,y)
          

over the rectangle 0 &lt;= X &lt;= 1, 0 &lt;= Y &lt;= 1, with exact
solution

            U(x,y) = sin ( pi * x * y )
          

so that

            F(x,y) = pi^2 * ( x^2 + y^2 ) * sin ( pi * x * y )
          

and with Dirichlet boundary conditions along the lines x = 0, x = 1, y =
0 and y = 1. (The boundary conditions will actually be zero in this
case, but we write up the problem as though we didn't know that, which
makes it easy to change the problem later.)

We compute an approximate solution by discretizing the geometry,
assuming that DX = DY, and approximating the Poisson operator by

            ( U(i-1,j) + U(i+1,j) + U(i,j-1) + U(i,j+1) - 4*U(i,j) ) / dx /dy
          

Along with the boundary conditions at the boundary nodes, we have a
linear system for U. We can apply the Jacobi iteration to estimate the
solution to the linear system.

OpenMP is used in this example to carry out the Jacobi iteration in
parallel. Note that the Jacobi iteration can converge very slowly, and
the slowness increases as the matrix gets bigger. Thus, if you must use
the Jacobi iteration, parallelism can help you. But you might also find,
at some point, that getting a better linear solver (even a non-parallel
one!) would help you more.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**POISSON\_OPENMP** is available in [a C
version](../../c_src/poisson_openmp/poisson_openmp.html) and [a C++
version](../../cpp_src/poisson_openmp/poisson_openmp.html) and [a
FORTRAN77 version](../../f77_src/poisson_openmp/poisson_openmp.html) and
[a FORTRAN90 version](../../f_src/poisson_openmp/poisson_openmp.html).

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

[MULTITASK\_OPENMP](../../cpp_src/multitask_open_mp/multitask_open_mp.html),
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

[POISSON\_SERIAL](../../cpp_src/poisson_serial/poisson_serial.html), a
C++ program which computes an approximate solution to the Poisson
equation in a rectangle, and is intended as the starting point for the
creation of a parallel version.

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

1.  Michael Quinn,\
    Parallel Programming in C with MPI and OpenMP,\
    McGraw-Hill, 2004,\
    ISBN13: 978-0071232654,\
    LC: QA76.73.C15.Q55.

### Source Code: {#source-code align="center"}

-   [poisson\_openmp.cpp](poisson_openmp.cpp), the source code.
-   [poisson\_local\_output.txt](poisson_local_output.txt), the output
    file.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for POISSON\_OPENMP.
-   **R8MAT\_RMS** returns the root mean square of data stored as an
    R8MAT.
-   **RHS** initializes the right hand side "vector".
-   **SWEEP** carries out several steps of the Jacobi iteration.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **U\_EXACT** evaluates the exact solution.
-   **UXXYY\_EXACT** evaluates ( d/dx d/dx + d/dy d/dy ) of the exact
    solution.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 14 December 2011.*
