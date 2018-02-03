COMMUNICATOR\_MPI\
Creating New Communicators in MPI {#communicator_mpi-creating-new-communicators-in-mpi align="center"}
=================================

------------------------------------------------------------------------

**COMMUNICATOR\_MPI** is a C++ program which creates new communicators
involving a subset of initial set of MPI processes in the default
communicator MPI\_COMM\_WORLD.

To understand this program, let's assume we run it under MPI with 4
processes. Within the default communicator, the processes will have ID's
of 0, 1, 2 and 3.

We can call MPI\_Comm\_group() to request that a "group id" be created
from MPI\_COMM\_WORLD. Then we call MPI\_Group\_incl(), passing a list
of a subset of the legal process ID's in MPI\_COMM\_WORLD, to be
identified as a new group. In particular, we'll pass the even ID's,
creating an even group, and later create an odd group in the same way.

A group ID can be used to create a new communicator, calling
MPI\_Comm\_create(). Once we have this new communicator, we can use
functions like MPI\_Comm\_Rank() and MPI\_Comm\_Size(), specifying the
name of the new communicator. We then can use a function like
MPI\_Reduce() to sum up data associated exclusively with the processes
in that communicator.

One complicating factor is that a process that is not part of the new
communicator cannot make an MPI call that invokes that communicator. For
instance, an odd process could not call MPI\_Comm\_rank() asking for its
rank in the even communicator. If you look at the program, you will see
that we have to be careful to determine what group we are in before we
make calls to the MPI routines.

Thus, in the example, we could begin with 4 processes, whose global ID's
are 0, 1, 2 and 3. We create an even communicator containing processes 0
and 2, and an odd communicator with 1 and 3. Notice that, within the
even communicator, the processes with global ID's 0 and 2 have even
communicator ID's of 0 and 1.

We can call MPI\_Reduce() to sum the global ID's of the processes in the
even communicator, getting a result of 2; the same sum, over the odd
communicator, results in 4.

The latest versions of MPI no longer support the special C++ MPI
bindings, so the examples given here have reverted to using the C MPI
bindings.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**COMMUNICATOR\_MPI** is available in [a C
version](../../c_src/communicator_mpi/communicator_mpi.md) and [a C++
version](../../master/communicator_mpi/communicator_mpi.md) and [a
FORTRAN77 version](../../f77_src/communicator_mpi/communicator_mpi.md)
and [a FORTRAN90
version](../../f_src/communicator_mpi/communicator_mpi.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[HEAT\_MPI](../../master/heat_mpi/heat_mpi.md), a C++ program which
solves the 1D Time Dependent Heat Equation using MPI.

[HELLO\_MPI](../../master/hello_mpi/hello_mpi.md), a C++ program
which prints out "Hello, world!", using MPI for parallel execution.

[MPI](../../master/mpi/mpi.md), C++ examples which illustrate the use
of the MPI application program interface for carrying out parallel
computatioins in a distributed memory environment.

[MULTITASK\_MPI](../../master/multitask_mpi/multitask_mpi.md), a C++
program which demonstrates how to multitask, that is, to execute several
unrelated and distinct tasks simultaneously, using MPI for parallel
execution.

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
C, using MPI for parallel execution.

[WAVE\_MPI](../../master/wave_mpi/wave_mpi.md), a C++ program which
uses finite differences and MPI to estimate a solution to the wave
equation.

### Reference: {#reference align="center"}

1.  Michael Quinn,\
    Parallel Programming in C with MPI and OpenMP,\
    McGraw-Hill, 2004,\
    ISBN13: 978-0071232654,\
    LC: QA76.73.C15.Q55.

### Source Code: {#source-code align="center"}

-   [communicator\_mpi.cpp](communicator_mpi.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**COMMUNICATOR\_FSU** compiles and runs the program on the FSU HPC
cluster.

-   [communicator\_fsu\_output.txt](communicator_fsu_output.txt), the
    output file.

**COMMUNICATOR\_LOCAL** compiles and runs the program on a local
machine.

-   [communicator\_local\_output.txt](communicator_local_output.txt),
    the output file.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 09 January 2012.*
