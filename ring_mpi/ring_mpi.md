RING\_MPI\
Estimating Communication Rates in MPI {#ring_mpi-estimating-communication-rates-in-mpi align="center"}
=====================================

------------------------------------------------------------------------

**RING\_MPI** is a C++ program which estimates the time it takes to send
a vector of N double precision values through each process in a ring.

Process 0 sends N double precision values to process 1, which passes
them to process 2, and so on, until process P-1 sends them back to
process 0. The time for this transmission is recorded. The experiment is
repeated several times, and for several different array sizes N.

The latest versions of MPI no longer support the special C++ MPI
bindings, so the examples given here have reverted to using the C MPI
bindings.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**RING\_MPI** is available in [a C
version](../../c_src/ring_mpi/ring_mpi.md) and [a C++
version](../../master/ring_mpi/ring_mpi.md) and [a FORTRAN77
version](../../f77_src/ring_mpi/ring_mpi.md) and [a FORTRAN90
version](../../f_src/ring_mpi/ring_mpi.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[COMMUNICATOR\_MPI](../../master/communicator_mpi/communicator_mpi.md),
a C++ program which creates new communicators involving a subset of
initial set of MPI processes in the default communicator
MPI\_COMM\_WORLD.

[HEAT\_MPI](../../master/heat_mpi/heat_mpi.md), a C++ program which
solves the 1D Time Dependent Heat Equation using MPI.

[HELLO\_MPI](../../master/hello_mpi/hello_mpi.md), a C++ program
which prints out "Hello, world!" using MPI for parallel execution.

[MPI](../../master/mpi/mpi.md), C++ programs which illustrate the use
of the MPI application program interface for carrying out parallel
computatioins in a distributed memory environment.

[MPI\_STUBS](../../master/mpi_stubs/mpi_stubs.md), a C++ library
which contains stub MPI routines, allowing a user to compile, load, and
possibly run an MPI program on a serial machine.

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

[SATISFY\_MPI](../../master/satisfy_mpi/satisfy_mpi.md), a C++
program which demonstrates, for a particular circuit, an exhaustive
search for solutions of the circuit satisfiability problem, using MPI to
carry out the calculation in parallel.

[SEARCH\_MPI](../../master/search_mpi/search_mpi.md), a C++ program
which searches integers between A and B for a value J such that F(J) =
C, using MPI for parallel execution.

[WAVE\_MPI](../../master/wave_mpi/wave_mpi.md), a C++ program which
uses finite differences and MPI to estimate a solution to the wave
equation.

### Reference: {#reference align="center"}

1.  Peter Pacheco,\
    Parallel Programming with MPI,\
    Morgan Kaufman, 1996,\
    ISBN: 1558603395,\
    LC: QA76.642.P3.

### Source Code: {#source-code align="center"}

-   [ring\_mpi.cpp](ring_mpi.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**RING\_FSU** compiles and runs the program on the FSU HPC cluster.

-   [ring\_fsu\_output.txt](ring_fsu_output.txt), the output file.

**RING\_LOCAL** compiles and runs the program on the local system, which
might work if OpenMPI is installed, and which might make sense if your
system has multiple cores.

-   [ring\_local\_output.txt](ring_local_output.txt), the output file.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 20 October 2012.*
