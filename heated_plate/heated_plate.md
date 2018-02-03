HEATED\_PLATE\
2D Steady State Heat Equation in a Rectangle {#heated_plate-2d-steady-state-heat-equation-in-a-rectangle align="center"}
============================================

------------------------------------------------------------------------

**HEATED\_PLATE** is a C++ program which solves the steady state heat
equation in a 2D rectangular region, and is intended as a starting point
for implementing an OpenMP parallel version.

The final estimate of the solution is written to a file in a format
suitable for display by GRID\_TO\_BMP.

The sequential version of this program needs approximately 18/epsilon
iterations to complete.

The physical region, and the boundary conditions, are suggested by this
diagram:

                       W = 0
                 +------------------+
                 |                  |
        W = 100  |                  | W = 100
                 |                  |
                 +------------------+
                       W = 100
          

The region is covered with a grid of M by N nodes, and an N by N array W
is used to record the temperature. The correspondence between array
indices and locations in the region is suggested by giving the indices
of the four corners:

                      I = 0
              [0][0]-------------[0][N-1]
                 |                  |
          J = 0  |                  |  J = N-1
                 |                  |
            [M-1][0]-----------[M-1][N-1]
                      I = M-1
          

The steady state solution to the discrete heat equation satisfies the
following condition at an interior grid point:

> W\[Central\] = (1/4) \* ( W\[North\] + W\[South\] + W\[East\] +
> W\[West\] )

where "Central" is the index of the grid point, "North" is the index of
its immediate neighbor to the "north", and so on.

Given an approximate solution of the steady state heat equation, a
"better" solution is given by replacing each interior point by the
average of its 4 neighbors - in other words, by using the condition as
an ASSIGNMENT statement:

> W\[Central\] &lt;= (1/4) \* ( W\[North\] + W\[South\] + W\[East\] +
> W\[West\] )

If this process is repeated often enough, the difference between
successive estimates of the solution will go to zero.

This program carries out such an iteration, using a tolerance specified
by the user, and writes the final estimate of the solution to a file
that can be used for graphic processing.

### Usage: {#usage align="center"}

> **heated\_plate** *epsilon* *output\_file*

where

-   *epsilon* is the error tolerance used to halt the iteration. This is
    an absolute error tolerance, and is applied pointwise. A value of
    0.1 might be reasonable for the built in problem.
-   *output\_filename* is the name of the file into which the final
    estimate of the solution will be written, for possible display by
    **GRID\_TO\_BMP**.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**HEATED\_PLATE** is available in [a C
version](../../c_src/heated_plate/heated_plate.md) and [a C++
version](../../master/heated_plate/heated_plate.md) and [a FORTRAN77
version](../../f77_src/heated_plate/heated_plate.md) and [a FORTRAN90
version](../../f_src/heated_plate/heated_plate.md) and [a MATLAB
version](../../m_src/heated_plate/heated_plate.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FD2D\_HEAT\_STEADY](../../master/fd2d_heat_steady/fd2d_heat_steady.md),
a C++ program which uses the finite difference method (FDM) to solve the
steady (time independent) heat equation in 2D.

[FD1D\_PLOT](../../m_src/fd1d_plot/fd1d_plot.md), a MATLAB program
which plots the output from the FD1D program;

[FEM\_50\_HEAT](../../m_src/fem_50_heat/fem_50_heat.md), a MATLAB
program which implements a finite element calculation specifically for
the heat equation.

[FEM1D\_HEAT](../../m_src/fem1d_heat/fem1d_heat.md), a MATLAB program
which uses the finite element method to solve the 1D Time Dependent Heat
Equations.

[FEM2D\_HEAT](../../master/fem2d_heat/fem2d_heat.md), a C++ program
which solves the 2D time dependent heat equation on the unit square.

[GRID\_TO\_BMP](../../master/grid_to_bmp/grid_to_bmp.md), a C++
program which reads a text file of data on a rectangular grid and
creates a BMP file containing a color image of the data.

[HEAT\_MPI](../../master/heat_mpi/heat_mpi.md), a C++ program which
solves the 1D Time Dependent Heat Equation using MPI.

[HEATED\_PLATE\_OPENMP](../../master/heated_plate_openmp/heated_plate_openmp.md),
a C++ program which solves the steady (time independent) heat equation
in a 2D rectangular region, using OpenMP to run in parallel.

[MD](../../master/md/md.md), a C++ program which carries out a
molecular dynamics simulation, and is intended as a starting point for
implementing an OpenMP parallel version.

[MXM\_SERIAL](../../master/mxm_serial/mxm_serial.md), a C++ program
which sets up a matrix multiplication problem A=B\*C, intended as a
starting point for implementing a parallel version.

[POISSON\_SERIAL](../../master/poisson_serial/poisson_serial.md), a
C++ program which computes an approximate solution to the Poisson
equation in a rectangle, and is intended as the starting point for the
creation of a parallel version.

[PRIME\_SERIAL](../../master/prime_serial/prime_serial.md), a C++
program which counts the number of primes between 1 and N, intended as a
starting point for the creation of a parallel version.

[QUAD\_SERIAL](../../master/quad_serial/quad_serial.md), a C++
program which approximates an integral using a quadrature rule, and is
intended as a starting point for parallelization exercises.

[SEARCH\_SERIAL](../../master/search_serial/search_serial.md), a C++
program which searches the integers from A to B for a value J such that
F(J) = C. this version of the program is intended as a starting point
for a parallel approach.

[STOCHASTIC\_HEAT2D](../../master/stochastic_heat2d/stochastic_heat2d.md),
a C++ program which implements a finite difference method (FDM) for the
steady (time independent) 2D heat equation, with a stochastic heat
diffusivity coefficient, using gnuplot to illustrate the results.

### Reference: {#reference align="center"}

1.  Michael Quinn,\
    Parallel Programming in C with MPI and OpenMP,\
    McGraw-Hill, 2004,\
    ISBN13: 978-0071232654,\
    LC: QA76.73.C15.Q55.

### Source Code: {#source-code align="center"}

-   [heated\_plate.cpp](heated_plate.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

The program has a built in grid of M = 500, N = 500. It is only
necessary to alter these definitions and recompile in order to run the
problem on a different grid. Here are the output files and solution
files from two runs.

-   [output\_100x500.txt](output_100x500.txt) the output from a run on a
    100x500 grid.
-   [sol\_100x500.txt](sol_100x500.txt) the solution on a 100x500 grid.
-   [sol\_100x500.png](../../master/grid_to_bmp/sol_100x500.png) a PNG
    image of the solution on a 100x500 grid.
-   [output\_500x500.txt](output_500x500.txt) the output from a run on a
    500x500 grid.
-   [sol\_500x500.txt](sol_500x500.txt) the solution on a 500x500 grid.
-   [sol\_500x500.png](../../master/grid_to_bmp/sol_500x500.png) a PNG
    image of the solution on a 500x500 grid.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for HEATED\_PLATE.
-   **CPU\_TIME** returns the current reading on the CPU clock.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 22 July 2008.*
