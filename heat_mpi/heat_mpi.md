HEAT\_MPI\
Solve the 1D Time Dependent Heat Equation using MPI {#heat_mpi-solve-the-1d-time-dependent-heat-equation-using-mpi align="center"}
===================================================

------------------------------------------------------------------------

**HEAT\_MPI** is a C++ program which solves the 1D Time Dependent Heat
Equation using MPI.

### The continuous problem: {#the-continuous-problem align="center"}

This program solves

            dUdT - k * d2UdX2 = F(X,T)
          

over the interval \[A,B\] with boundary conditions

            U(A,T) = UA(T),
            U(B,T) = UB(T),
          

over the time interval \[T0,T1\] with initial conditions

            U(X,T0) = U0(X)
          

### The finite difference discretization {#the-finite-difference-discretization align="center"}

To apply the finite difference method, we define a grid of points X(1)
through X(N), and a grid of times T(1) through T(M). In the simplest
case, both grids are evenly spaced. We denote by U(I,J) the approximate
solution at spatial point X(I) and time T(J).

A second order finite difference can be used to approximate the second
derivative in space, using the solution at three points equally
separated in space.

A forward Euler approximation to the first derivative in time is used,
which relates the value of the solution to its value at a short interval
in the future.

Thus, at the spatial point X(I) and time T(J), the discretized
differential equation defines a relationship between U(I-1,J), U(I,J),
U(I+1,J) and the "future" value U(I,J+1). This relationship can be drawn
symbolically as a four node stencil:

                         U(I,J+1)
                          |
                          |
            U(I-1,J)-----U(I,J)--------U(I+1,J)
          

Since we are given the value of the solution at the initial time, we can
use the stencil, plus the boundary condition information, to advance the
solution to the next time step. Repeating this operation gives us an
approximation to the solution at every point in the space-time grid.

### Using MPI to compute the solution: {#using-mpi-to-compute-the-solution align="center"}

To solve the 1D heat equation using MPI, we use a form of domain
decomposition. Given P processors, we divided the interval \[A,B\] into
P equal subintervals. Each processor can set up the stencil equations
that define the solution almost independently. The exception is that
every processor needs to receive a copy of the solution values
determined for the nodes on its immediately left and right sides.

Thus, each processor uses MPI to send its leftmost solution value to its
left neighbor, and its rightmost solution value to its rightmost
neighbor. Of course, each processor must then also receive the
corresponding information that its neighbors send to it. (However, the
first and last processor only have one neighbor, and use boundary
condition information to determine the behavior of the solution at the
node which is not next to another processor's node.)

The naive way of setting up the information exchange works, but can be
inefficient, since each processor sends a message and then waits for
confirmation of receipt, which can't happen until some processor has
moved to the "receive" stage, which only happens because the first or
last processor doesn't have to receive information on a given step.

It is worth investigating how to improve the information exchange (an
exercise for the reader!). The odd processors could SEND while the even
processors RECEIVE for instance, guaranteeing that messages would not
have to wait in a buffer.

The latest versions of MPI no longer support the special C++ MPI
bindings, so the examples given here have reverted to using the C MPI
bindings.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**HEAT\_MPI** is available in [a C
version](../../c_src/heat_mpi/heat_mpi.html) and [a C++
version](../../cpp_src/heat_mpi/heat_mpi.html) and [a FORTRAN77
version](../../f77_src/heat_mpi/heat_mpi.html) and [a FORTRAN90
version](../../f_src/heat_mpi/heat_mpi.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[COMMUNICATOR\_MPI](../../cpp_src/communicator_mpi/communicator_mpi.html),
a C++ program which creates new communicators involving a subset of
initial set of MPI processes in the default communicator
MPI\_COMM\_WORLD.

[HELLO\_MPI](../../cpp_src/hello_mpi/hello_mpi.html), a C++ program
which prints out "Hello, world!" using the MPI parallel programming
environment.

[MPI](../../cpp_src/mpi/mpi.html), C++ programs which illustrate the use
of the MPI application program interface for carrying out parallel
computations in a distributed memory environment.

[MPI\_STUBS](../../cpp_src/mpi_stubs/mpi_stubs.html), a C++ library
which contains stub MPI routines, allowing a user to compile, load, and
possibly run an MPI program on a serial machine.

[MULTITASK\_MPI](../../cpp_src/multitask_mpi/multitask_mpi.html), a C++
program which demonstrates how to multitask, that is, to execute several
unrelated and distinct tasks simultaneously, using MPI for parallel
execution.

[PRIME\_MPI](../../cpp_src/prime_mpi/prime_mpi.html), a C++ program
which counts the number of primes between 1 and N, using MPI for
parallel execution.

[QUAD\_MPI](../../cpp_src/quad_mpi/quad_mpi.html), a C++ program which
approximates an integral using a quadrature rule, and carries out the
computation in parallel using MPI.

[RANDOM\_MPI](../../cpp_src/random_mpi/random_mpi.html), a C++ program
which demonstrates one way to generate the same sequence of random
numbers for both sequential execution and parallel execution under MPI.

[RING\_MPI](../../cpp_src/ring_mpi/ring_mpi.html), a C++ program which
uses the MPI parallel programming environment, and measures the time
necessary to copy a set of data around a ring of processes.

[SATISFY\_MPI](../../cpp_src/satisfy_mpi/satisfy_mpi.html), a C++
program which demonstrates, for a particular circuit, an exhaustive
search for solutions of the circuit satisfiability problem, using MPI to
carry out the calculation in parallel.

[SEARCH\_MPI](../../cpp_src/search_mpi/search_mpi.html), a C++ program
which searches integers between A and B for a value J such that F(J) =
C, using MPI for parallel execution.

[WAVE\_MPI](../../cpp_src/wave_mpi/wave_mpi.html), a C++ program which
uses finite differences and MPI to estimate a solution to the wave
equation.

### Reference: {#reference align="center"}

1.  William Gropp, Ewing Lusk, Anthony Skjellum,\
    Using MPI: Portable Parallel Programming with the Message-Passing
    Interface,\
    Second Edition,\
    MIT Press, 1999,\
    ISBN: 0262571323,\
    LC: QA76.642.G76.

### Source Code: {#source-code align="center"}

-   [heat\_mpi.cpp](heat_mpi.cpp), the source code;

### Examples and Tests: {#examples-and-tests align="center"}

**HEAT\_FSU** compiles and runs the program on the FSU HPC cluster.

-   [heat\_fsu\_output.txt](heat_fsu_output.txt), the output file.

**HEAT\_LOCAL** compiles and runs the program on a local machine.

-   [heat\_local\_output.txt](heat_local_output.txt), the output file.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 15 June 2016.*
