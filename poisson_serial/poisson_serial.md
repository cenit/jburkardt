POISSON\_SERIAL\
A Program for the Poisson Equation in a Rectangle {#poisson_serial-a-program-for-the-poisson-equation-in-a-rectangle align="center"}
=================================================

------------------------------------------------------------------------

**POISSON\_SERIAL** is a C++ program which computes an approximate
solution to the Poisson equation in a rectangular region.

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

**POISSON\_SERIAL** is intended as a starting point for the
implementation of a parallel version, using, for instance, MPI.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**POISSON\_SERIAL** is available in [a C
version](../../c_src/poisson_serial/poisson_serial.md) and [a C++
version](../../master/poisson_serial/poisson_serial.md) and [a
FORTRAN77 version](../../f77_src/poisson_serial/poisson_serial.md) and
[a FORTRAN90 version](../../f_src/poisson_serial/poisson_serial.md)
and [a MATLAB version](../../m_src/poisson_serial/poisson_serial.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FEM2D\_POISSON\_RECTANGLE](../../master/fem2d_poisson_rectangle/fem2d_poisson_rectangle.md),
a C++ program which solves the 2D Poisson equation on a rectangle, using
the finite element method, and piecewise quadratic triangular elements.

[FFT\_SERIAL](../../master/fft_serial/fft_serial.md), a C++ program
which demonstrates the computation of a Fast Fourier Transform, and is
intended as a starting point for implementing a parallel version.

[FIRE\_SERIAL](../../master/fire_serial/fire_serial.md), a C++
program which simulates a forest fire over a rectangular array of trees,
starting at a single random location. It is intended as a starting point
for the development of a parallel version.

[HEATED\_PLATE](../../master/heated_plate/heated_plate.md), a C++
program which solves the steady (time independent) heat equation in a 2D
rectangular region, and is intended as a starting point for implementing
a parallel version.

[MD](../../master/md/md.md), a C++ program which carries out a
molecular dynamics simulation, and is intended as a starting point for
implementing a parallel version.

[MPI](../../master/mpi/mpi.md), C++ programs which illustrate the use
of the MPI application program interface for carrying out parallel
computations in a distributed memory environment.

[MXM\_SERIAL](../../master/mxm_serial/mxm_serial.md), a C++ program
which sets up a matrix multiplication problem A=B\*C, intended as a
starting point for implementing a parallel version.

[POISSON\_OPENMP](../../master/poisson_openmp/poisson_openmp.md), a
C++ program which computes an approximate solution to the Poisson
equation in a rectangle, using the Jacobi iteration to solve the linear
system, and OpenMP to carry out the Jacobi iteration in parallel.

[QUAD\_SERIAL](../../master/quad_serial/quad_serial.md), a C++
program which approximates an integral using a quadrature rule, and is
intended as a starting point for parallelization exercises.

[SEARCH\_SERIAL](../../master/search_serial/search_serial.md), a C++
program which searches the integers from A to B for a value J such that
F(J) = C. this version of the program is intended as a starting point
for a parallel approach.

[SUBSET\_SUM\_SERIAL](../../master/subset_sum_serial/subset_sum_serial.md),
a C++ program which seeks solutions of the subset sum problem, in which
it is desired to find a subset of a set of integers which has a given
sum; this version of the program is intended as a starting point for a
parallel approach.

### Source Code: {#source-code align="center"}

-   [poisson\_serial.cpp](poisson_serial.cpp), the source code.
-   [poisson\_serial\_output.txt](poisson_serial_output.txt), the output
    file.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for POISSON\_SERIAL.
-   **INIT\_SERIAL** initializes the arrays.
-   **SWEEP\_SERIAL** carries out one step of the Jacobi iteration.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 23 October 2011.*
