WAVE\_MPI\
Parallel Solution of the 1D Wave Equation using MPI {#wave_mpi-parallel-solution-of-the-1d-wave-equation-using-mpi align="center"}
===================================================

------------------------------------------------------------------------

**WAVE\_MPI** is a C++ program which solves the 1D wave equation in
parallel, using MPI.

This program solves the 1D wave equation of the form:

            Utt = c^2 Uxx
          

over the spatial interval \[X1,X2\] and time interval \[T1,T2\], with
initial conditions:

            U(X,T1)  = U_T1(X),
            Ut(X,T1) = UT_T1(X),
          

and boundary conditions of Dirichlet type:

            U(X1,T) = U_X1(T),

            U(X2,T) = U_X2(T).
          

The value **C** represents the propagation speed of waves.

The program uses the finite difference method, and marches forward in
time, solving for all the values of U at the next time step by using the
values known at the previous two time steps.

Central differences may be used to approximate both the time and space
derivatives in the original differential equation.

Thus, assuming we have available the approximated values of U at the
current and previous times, we may write a discretized version of the
wave equation as follows:

            Uxx(X,T) = ( U(X+dX,T   ) - 2 U(X,T) + U(X-dX,T,  ) ) / dX^2
            Utt(X,T) = ( U(X,   T+dT) - 2 U(X,T) + U(X,   T-dt) ) / dT^2
          

If we multiply the first term by C\^2 and solve for the single unknown
value U(X,T+dt), we have:

            U(X,T+dT) =        (     C^2 * dT^2 / dX^2 ) * U(X+dX,T)
                        +  2 * ( 1 - C^2 * dT^2 / dX^2 ) * U(X,   T)
                        +      (     C^2 * dT^2 / dX^2 ) * U(X-dX,T)
                        -                                  U(X,   T-dT)
          

(Equation to advance from time T to time T+dT, except for FIRST step!)

However, on the very first step, we only have the values of U for the
initial time, but not for the previous time step. In that case, we use
the initial condition information for dUdT which can be approximated by
a central difference that involves U(X,T+dT) and U(X,T-dT):

            dU/dT(X,T) = ( U(X,T+dT) - U(X,T-dT) ) / ( 2 * dT )
          

and so we can estimate U(X,T-dT) as

            U(X,T-dT) = U(X,T+dT) - 2 * dT * dU/dT(X,T)
          

If we replace the "missing" value of U(X,T-dT) by the known values on
the right hand side, we now have U(X,T+dT) on both sides of the
equation, so we have to rearrange to get the formula we use for just the
first time step:

            U(X,T+dT) =   1/2 * (     C^2 * dT^2 / dX^2 ) * U(X+dX,T)
                        +       ( 1 - C^2 * dT^2 / dX^2 ) * U(X,   T)
                        + 1/2 * (     C^2 * dT^2 / dX^2 ) * U(X-dX,T)
                        +  dT *                         dU/dT(X,   T   )
          

(Equation to advance from time T to time T+dT for FIRST step.)

It should be clear now that the quantity ALPHA = C \* dT / dX will
affect the stability of the calculation. If it is greater than 1, then
the middle coefficient (1-C\^2 dT\^2 / dX\^2) is negative, and the sum
of the magnitudes of the three coefficients becomes unbounded.

We wish to use MPI in order to accelerate this computation. We use the
method of domain decomposition - that is, we assume we have P MPI
processes, we divide the original interval into P subintervals, and we
expect each process to update the data associated with its subinterval.

However, to compute the estimated solution U(X,T+dT) at the next time
step requires information about U(X-dX,T) and U(X+dX,T). When process ID
tries to make these estimates, it will need one value from process ID-1,
and one from process ID+1, before it can make all the updates. MPI
allows the processes to communicate this information using messages.

At the end of the complete calculation, we wish to print a table of the
solution at the final time. To do this in an organized fashion, we want
each process to send its final result to the master process (with ID =
0). Once all the data has been collected, the master process prints it.

The latest versions of MPI no longer support the special C++ MPI
bindings, so the examples given here have reverted to using the C MPI
bindings.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**WAVE\_MPI** is available in [a C
version](../../c_src/wave_mpi/wave_mpi.md) and [a C++
version](../../master/wave_mpi/wave_mpi.md) and [a FORTRAN77
version](../../f77_src/wave_mpi/wave_mpi.md) and [a FORTRAN90
version](../../f_src/wave_mpi/wave_mpi.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[COMMUNICATOR\_MPI](../../master/communicator_mpi/communicator_mpi.md),
a C++ program which creates new communicators involving a subset of
initial set of MPI processes in the default communicator
MPI\_COMM\_WORLD.

[HEAT\_MPI](../../master/heat_mpi/heat_mpi.md), a C++ program which
solves the 1D Time Dependent Heat Equation using MPI.

[HELLO\_MPI](../../master/hello_mpi/hello_mpi.md), a C++ program
which prints out "Hello, world!" using the MPI parallel programming
environment.

[MPI](../../master/mpi/mpi.md), C++ programs which illustrate the use
of the MPI application program interface for carrying out parallel
computations in a distributed memory environment.

[MPI\_STUBS](../../master/mpi_stubs/mpi_stubs.md), a C++ library
which contains "stub" MPI routines, allowing a user to compile, load,
and possibly run an MPI program on a serial machine.

[MULTITASK\_MPI](../../master/multitask_mpi/multitask_mpi.md), a C++
program which demonstrates how to "multitask", that is, to execute
several unrelated and distinct tasks simultaneously, using MPI for
parallel execution.

[PRIME\_MPI](../../master/prime_mpi/prime_mpi.md), a C++ program
which counts the number of primes between 1 and N, using MPI for
parallel execution.

[QUAD\_MPI](../../master/quad_mpi/quad_mpi.md), a C++ program which
approximates an integral using a quadrature rule, and carries out the
computation in parallel using MPI.

[RANDOM\_MPI](../../master/random_mpi/random_mpi.md), a C++ program
which demonstrates one way to generate the same sequence of random
numbers for both sequential execution and parallel execution under MPI.

[RING\_MPI](../../master/ring_mpi/ring_mpi.md), a C++ program which
uses the MPI parallel programming environment, and measures the time
necessary to copy a set of data around a ring of processes.

[SATISFY\_MPI](../../master/satisfy_mpi/satisfy_mpi.md), a C++
program which demonstrates, for a particular circuit, an exhaustive
search for solutions of the circuit satisfiability problem, using MPI to
carry out the calculation in parallel.

[SEARCH\_MPI](../../master/search_mpi/search_mpi.md), a C++ program
which searches integers between A and B for a value J such that F(J) =
C, using MPI.

### Reference: {#reference align="center"}

1.  Geoffrey Fox, Mark Johnson, Gregory Lyzenga, Steve Otto, John
    Salmon, David Walker,\
    Solving problems on concurrent Processors,\
    Volume 1: General Techniques and Regular Problems,\
    Prentice Hall, 1988,\
    ISBN: 0-13-8230226,\
    LC: QA76.5.F627.

### Source Code: {#source-code align="center"}

-   [wave\_mpi.cpp](wave_mpi.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**WAVE\_FSU** compiles and runs the program on the FSU HPC cluster.

-   [wave\_fsu\_output.txt](wave_fsu_output.txt), the output file.

**WAVE\_LOCAL** compiles and runs the program on a local machine with
multiple processors.

-   [wave\_local\_output.txt](wave_local_output.txt), the output file.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 17 November 2013.*
