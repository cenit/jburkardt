MANDELBROT\_OPENMP\
Mandelbrot Image using OpenMP {#mandelbrot_openmp-mandelbrot-image-using-openmp align="center"}
=============================

------------------------------------------------------------------------

**MANDELBROT\_OPENMP** is a C++ program which generates an ASCII
Portable Pixel Map (PPM) image of the Mandelbrot set, using OpenMP for
parallel execution.

The Mandelbrot set is a set of points C in the complex plane with the
property that the iteration

            z(n+1) = z(n)^2 + c
          

remains bounded.

All the points in the Mandelbrot set are known to lie within the circle
of radius 2 and center at the origin.

To make a plot of the Mandelbrot set, one starts with a given point C
and carries out the iteration for a fixed number of steps. If the
iterates never exceed 2 in magnitude, the point C is taken to be a
member of the Mandelbrot set.

Creating an image of the Mandelbrot set requires determining the
behavior of many points C under the Mandelbrot mapping. But each point
can be studied independently of the others, which makes this calculation
suitable for a parallel implementation.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**MANDELBROT\_OPENMP** is available in [a C
version](../../c_src/mandelbrot_openmp/mandelbrot_openmp.html) and [a
C++ version](../../cpp_src/mandelbrot_openmp/mandelbrot_openmp.html) and
[a FORTRAN77
version](../../f77_src/mandelbrot_openmp/mandelbrot_openmp.html) and [a
FORTRAN90
version](../../f_src/mandelbrot_openmp/mandelbrot_openmp.html).

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

[MANDELBROT](../../cpp_src/mandelbrot/mandelbrot.html), a C++ program
which generates an ASCII Portable Pixel Map (PPM) image of the
Mandelbrot fractal set;

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
illustrate the use of OpenMP.

[OPENMP\_RCC](../../cpp_src/openmp_rcc/openmp_rcc.html), C++ programs
which illustrate how a C program, using OpenMP, can be compiled and run
in batch mode on the FSU High Performance Computing (HPC) cluster
operated by the Research Computing Center (RCC).

[POISSON\_OPENMP](../../cpp_src/poisson_openmp/poisson_openmp.html), a
C++ program which computes an approximate solution to the Poisson
equation in a rectangle, using the Jacobi iteration to solve the linear
system, and OpenMP to carry out the Jacobi iteration in parallel.

[PPMA\_IO](../../cpp_src/ppma_io/ppma_io.html), a C++ library which
handles the ASCII Portable Pixel Map (PPM) format.

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

1.  Alexander Dewdney,\
    A computer microscope zooms in for a close look at the most
    complicated object in mathematics,\
    Scientific American,\
    Volume 257, Number 8, August 1985, pages 16-24.
2.  Heinz-Otto Peitgen, Hartmut Juergens, Dietmar Saupe,\
    Chaos and Fractals - New Frontiers in Science,\
    Springer, 1992,\
    ISBN: 0-387-20229-3,\
    LC: Q172.5.C45.P45.

### Source Code: {#source-code align="center"}

-   [mandelbrot\_openmp.cpp](mandelbrot_openmp.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [mandelbrot\_openmp\_output.txt](mandelbrot_openmp_output.txt), the
    output file.
-   [mandelbrot.ppm](mandelbrot.ppm), the image created by the program.
-   [mandelbrot.png](mandelbrot.png), a PNG version

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for MANDELBROT\_OPENMP.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 03 September 2012.*
