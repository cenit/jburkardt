MULTITASK\_MPI\
Carrying Out Multiple "Tasks" in MPI {#multitask_mpi-carrying-out-multiple-tasks-in-mpi align="center"}
====================================

------------------------------------------------------------------------

**MULTITASK\_MPI** is a C++ program which demonstrates how to
"multitask", that is, to execute several unrelated and distinct tasks
simultaneously, using MPI for parallel execution.

In this example, there is a "master" process, identified as process 0,
and two worker processes, 1 and 2. Process 0 does nothing but choose the
input for the worker processes, transmit it, and wait for the computed
results to be returned. The programs executed by process 1 and by
process 2 are quite different.

While the typical MPI model has all the worker processes executing the
same program, this example shows that that is not necessary.

The latest versions of MPI no longer support the special C++ MPI
bindings, so the examples given here have reverted to using the C MPI
bindings.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**MULTITASK\_MPI** is available in [a C
version](../../c_src/multitask_mpi/multitask_mpi.md) and [a C++
version](../../master/multitask_mpi/multitask_mpi.md) and [a
FORTRAN77 version](../../f77_src/multitask_mpi/multitask_mpi.md) and
[a FORTRAN90 version](../../f_src/multitask_mpi/multitask_mpi.md).

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
computatioins in a distributed memory environment.

[MULTITASK\_OPENMP](../../master/multitask_openmp/multitask_openmp.md),
a C++ program which demonstrates how to "multitask", that is, to execute
several unrelated and distinct tasks simultaneously, using OpenMP for
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
C, using MPI for parallel execution.

[WAVE\_MPI](../../master/wave_mpi/wave_mpi.md), a C++ program which
uses finite differences and MPI to estimate a solution to the wave
equation.

### Reference: {#reference align="center"}

1.  William Gropp, Steven Huss-Lederman, Andrew Lumsdaine, Ewing Lusk,
    Bill Nitzberg, William Saphir, Marc Snir,\
    MPI: The Complete Reference,\
    Volume II: The MPI-2 Extensions,\
    Second Edition,\
    MIT Press, 1998.
2.  William Gropp, Ewing Lusk, Anthony Skjellum,\
    Using MPI: Portable Parallel Programming with the Message-Passing
    Interface,\
    Second Edition,\
    MIT Press, 1999,\
    ISBN: 0262571323.
3.  William Gropp, Ewing Lusk, Rajiv Thakur,\
    Using MPI-2: Advanced Features of the Message-Passing Interface,\
    Second Edition,\
    MIT Press, 1999,\
    ISBN: 0262571331.
4.  Stan Openshaw, Ian Turton,\
    High Performance Computing and the Art of Parallel Programming: an
    Introduction for Geographers, Social Scientists, and Engineers,\
    Routledge, 2000,\
    ISBN: 0415156920.
5.  Peter Pacheco,\
    Parallel Programming with MPI,\
    Morgan Kaufman, 1996,\
    ISBN: 1558603395,\
    LC: QA76.642.P3.
6.  Marc Snir, Steve Otto, Steven Huss-Lederman, David Walker, Jack
    Dongarra,\
    MPI: The Complete Reference,\
    Volume I: The MPI Core,\
    Second Edition,\
    MIT Press, 1998,\
    ISBN: 0-262-69216-3,\
    LC: QA76.642.M65.
7.  The MPI web site at Argonne National Lab:
    <http://www-unix.mcs.anl.gov/mpi/>
8.  The Message Passing Interface Forum,\
    **MPI: A Message Passing Interface Standard**,\
    1995,\
    Available online from [the MPI Forum](http://www.mpi-forum.org/).
9.  The Message Passing Interface Forum,\
    **MPI-2: Extensions to the Message Passing Interface**,\
    1997,\
    Available online from [the MPI Forum](http://www.mpi-forum.org/).

### Source Code: {#source-code align="center"}

-   [multitask\_mpi.cpp](multitask_mpi.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**MULTITASK\_FSU** compiles and runs the program on the FSU HPC cluster.

-   [multitask\_fsu\_output.txt](multitask_fsu_output.txt), the output
    file.

**MULTITASK\_LOCAL** compiles and runs the program on the local system,
which might work if OpenMPI is installed, and which might make sense if
your system has multiple cores.

-   [multitask\_local\_output.txt](multitask_local_output.txt), the
    output file.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 20 October 2011.*
