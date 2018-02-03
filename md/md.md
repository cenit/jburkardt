MD\
Molecular Dynamics {#md-molecular-dynamics align="center"}
==================

------------------------------------------------------------------------

**MD** is a C++ program which carries out a molecular dynamics
simulation.

The computation involves following the paths of particles which exert a
distance-dependent force on each other. The particles are not
constrained by any walls; if particles meet, they simply pass through
each other.

The problem is treated as a coupled set of differential equations. The
system of differential equation is discretized by choosing a discrete
time step. Given the position and velocity of each particle at one time
step, the algorithm estimates these values at the next time step.

To compute the next position of each particle requires the evaluation of
the right hand side of its corresponding differential equation. Since
each of these calculations is independent, there is a potential speedup
if the program can take advantage of parallel computing.

This version of the program is intended as a starting point; students
are asked to examine the program and add the appropriate OpenMP
directives to run it in parallel.

Note that this program exhibits a remarkable speedup if we simply
compile it with the "-O2" optimization option.

### Usage: {#usage align="center"}

> **md** *nd* *np* *step\_num* *dt*

where

-   *nd* is the spatial dimension (2 or 3);
-   *np* is the number of particles (500, for instance);
-   *step\_num* is the number of time steps (500, for instance).
-   *dt* is the time step size (0.1, for instance).

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**MD** is available in [a C version](../../c_src/md/md.html) and [a C++
version](../../cpp_src/md/md.html) and [a FORTRAN77
version](../../f77_src/md/md.html) and [a FORTRAN90
version](../../f_src/md/md.html) and [a MATLAB
version](../../m_src/md/md.html) and [a Python
version](../../py_src/md/md.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FFT\_SERIAL](../../cpp_src/fft_serial/fft_serial.html), a C++ program
which demonstrates the computation of a Fast Fourier Transform, and is
intended as a starting point for developing a parallel version using
OpenMP.

[HEATED\_PLATE](../../cpp_src/heated_plate/heated_plate.html), a C++
program which solves the steady state heat equation in a 2D rectangular
region, and is intended as a starting point for implementing an OpenMP
parallel version.

[MD\_OPENMP](../../cpp_src/md_openmp/md_openmp.html), a C++ program
which carries out a molecular dynamics simulation, using OpenMP for
parallel execution.

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

[MXM\_SERIAL](../../cpp_src/mxm_serial/mxm_serial.html), a C++ program
which sets up a matrix multiplication problem A=B\*C, intended as a
starting point for implementing a parallel version.

[OPENMP](../../cpp_src/openmp/openmp.html), C++ programs which
illustrate the use of OpenMP.

[POISSON\_SERIAL](../../cpp_src/poisson_serial/poisson_serial.html), a
C++ program which computes an approximate solution to the Poisson
equation in a rectangle, and is intended as the starting point for the
creation of a parallel version.

[PRIME\_SERIAL](../../cpp_src/prime_serial/prime_serial.html), a C++
program which counts the number of primes between 1 and N, intended as a
starting point for the creation of a parallel version.

[QUAD\_SERIAL](../../cpp_src/quad_serial/quad_serial.html), a C++
program which approximates an integral using a quadrature rule, and is
intended as a starting point for parallelization exercises.

[SEARCH\_SERIAL](../../cpp_src/search_serial/search_serial.html), a C++
program which searches the integers from A to B for a value J such that
F(J) = C. this version of the program is intended as a starting point
for a parallel approach.

### Reference: {#reference align="center"}

1.  Matthew Allen, Dominic Tildesley,\
    Computer Simulation of Liquids,\
    Oxford University Press, 1987,\
    ISBN: 0198556454,\
    LC: QC145.2.
2.  Peter Arbenz, Wesley Petersen,\
    Introduction to Parallel Computing - A practical guide with examples
    in C,\
    Oxford University Press,\
    ISBN: 0-19-851576-6,\
    LC: QA76.58.P47.
3.  Rohit Chandra, Leonardo Dagum, Dave Kohr, Dror Maydan, Jeff
    McDonald, Ramesh Menon,\
    Parallel Programming in OpenMP,\
    Morgan Kaufmann, 2001,\
    ISBN: 1-55860-671-8,\
    LC: QA76.642.P32.
4.  Barbara Chapman, Gabriele Jost, Ruud vanderPas, David Kuck,\
    Using OpenMP: Portable Shared Memory Parallel Processing,\
    MIT Press, 2007,\
    ISBN13: 978-0262533027,\
    LC: QA76.642.C49.
5.  Furio Ercolessi,\
    A Molecular Dynamics Primer
6.  Philipp Janert,\
    Gnuplot in Action: Understanding Data with Graphs,\
    Manning, 2008,\
    ISBN: 1-933988-39-8.
7.  Dennis Rapaport,\
    An Introduction to Interactive Molecular-Dynamics Simulation,\
    Computers in Physics,\
    Volume 11, Number 4, July/August 1997, pages 337-347.
8.  Dennis Rapaport,\
    The Art of Molecular Dynamics Simulation,\
    Cambridge University Press, 2004,\
    ISBN: 0521825687.

### Source Code: {#source-code align="center"}

-   [md.cpp](md.cpp), the source code;

### Examples and Tests: {#examples-and-tests align="center"}

-   [md\_output.txt](md_output.txt), the output file;

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for MD.
-   **COMPUTE** computes the forces and energies.
-   **CPU\_TIME** reports the elapsed CPU time.
-   **DIST** computes the displacement (and its norm) between two
    particles.
-   **INITIALIZE** initializes the positions, velocities, and
    accelerations.
-   **R8MAT\_UNIFORM\_AB** returns a scaled pseudorandom R8MAT.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **UPDATE** updates positions, velocities and accelerations.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 27 December 2014.*
