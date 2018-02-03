MD\_OPENMP\
Molecular Dynamics using OpenMP {#md_openmp-molecular-dynamics-using-openmp align="center"}
===============================

------------------------------------------------------------------------

**MD\_OPENMP** is a C++ program which carries out a molecular dynamics
simulation, using OpenMP for parallel execution.

On an Apple PowerPC G5 with two processors, the following results were
observed for a run with 400 steps and 1000 particles:

  Threads   Time
  --------- ------------------
  1         183.517 secconds
  2         94.037 seconds
  4         93.164 seconds

### Usage: {#usage align="center"}

In the BASH shell, the program could be run with 2 threads using the
commands:

            export OMP_NUM_THREADS=2
            ./md_openmp
          

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**MD\_OPENMP** is available in [a C
version](../../c_src/md_openmp/md_openmp.html) and [a C++
version](../../cpp_src/md_openmp/md_openmp.html) and [a FORTRAN77
version](../../f77_src/md_openmp/md_openmp.html) and [a FORTRAN90
version](../../f_src/md_openmp/md_openmp.html).

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

[MD](../../cpp_src/md/md.html), a C++ program which carries out a
molecular dynamics simulation, and is intended as a starting point for
implementing an OpenMP parallel version.

[MD\_PARFOR](../../m_src/md_parfor/md_parfor.html), a MATLAB program
which is intended to be run in parallel using MATLAB's "PARFOR" feature.

[MD1](../../f_src/md1/md1.html), a FORTRAN90 program which carries out a
molecular dynamics simulation.

[MD2](../../f_src/md2/md2.html), a FORTRAN90 program which carries out a
molecular dynamics simulation.

[MD3](../../f_src/md3/md3.html), a FORTRAN90 program which carries out a
molecular dynamics simulation.

[MD3GLUE](../../f_src/md3glue/md3glue.html), a FORTRAN90 program which
carries out a molecular dynamics simulation.

[MDBNCH](../../f77_src/mdbnch/mdbnch.html), a FORTRAN77 program which is
a benchmark molecular simulation calculation.

[MULTITASK\_OPENMP](../../cpp_src/multitask_openmp/multitask_openmp.html),
a C++ program which demonstrates how to "multitask", that is, to execute
several unrelated and distinct tasks simultaneously, using OpenMP for
parallel execution.

[MXM\_OPENMP](../../cpp_src/mxm_openmp/mxm_openmp.html), a C++ program
which computes a dense matrix product C=A\*B, using OpenMP for parallel
execution.

[OPENMP](../../cpp_src/openmp/openmp.html), C++ programs which
illustrate the use of OpenMP.

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

### Source Code: {#source-code align="center"}

-   [md\_openmp.cpp](md_openmp.cpp), the source code;

### Examples and Tests: {#examples-and-tests align="center"}

**MD\_LOCAL** runs the program locally.

-   [md\_local\_output.txt](md_local_output.txt), the output file.

**MD\_ITHACA** runs the program through ITHACA's batch system.

-   [md\_ithaca\_output.txt](md_ithaca_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for MD\_OPENMP.
-   **COMPUTE** computes the forces and energies.
-   **DIST** computes the displacement and distance between two
    particles.
-   **INITIALIZE** initializes the positions, velocities, and
    accelerations.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **UPDATE** updates positions, velocities and accelerations.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 02 September 2009.*
