PRIME\_MPI\
Count Primes Using MPI {#prime_mpi-count-primes-using-mpi align="center"}
======================

------------------------------------------------------------------------

**PRIME\_MPI** is a C++ program which counts the number of primes
between 1 and N, using MPI to carry out the calculation in parallel.

The algorithm is completely naive. For each integer I, it simply checks
whether any smaller J evenly divides it. The total amount of work for a
given N is thus roughly proportional to 1/2\*N\^2.

This program is mainly a starting point for investigations into
parallelization.

The latest versions of MPI no longer support the special C++ MPI
bindings, so the examples given here have reverted to using the C MPI
bindings.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**PRIME\_MPI** is available in [a C
version](../../c_src/prime_mpi/prime_mpi.html) and [a C++
version](../../cpp_src/prime_mpi/prime_mpi.html) and [a FORTRAN77
version](../../f77_src/prime_mpi/prime_mpi.html) and [a FORTRAN90
version](../../f_src/prime_mpi/prime_mpi.html) and [a Python
version](../../py_src/prime_mpi/prime_mpi.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[COMMUNICATOR\_MPI](../../cpp_src/communicator_mpi/communicator_mpi.html),
a C++ program which creates new communicators involving a subset of
initial set of MPI processes in the default communicator
MPI\_COMM\_WORLD.

[HEAT\_MPI](../../cpp_src/heat_mpi/heat_mpi.html), a C++ program which
solves the 1D Time Dependent Heat Equation using MPI.

[HELLO\_MPI](../../cpp_src/hello_mpi/hello_mpi.html), a C++ program
which prints out "Hello, world!" using the MPI parallel programming
environment.

[MPI](../../cpp_src/mpi/mpi.html), C++ programs which illustrate the use
of the MPI application program interface for carrying out parallel
computations in a distributed memory environment.

[MPI\_STUBS](../../cpp_src/mpi_stubs/mpi_stubs.html), a C++ library
which contains "stub" MPI routines, allowing a user to compile, load,
and possibly run an MPI program on a serial machine.

[MULTITASK\_MPI](../../cpp_src/multitask_mpi/multitask_mpi.html), a C++
program which demonstrates how to "multitask", that is, to execute
several unrelated and distinct tasks simultaneously, using MPI for
parallel execution.

[PRIME\_OPENMP](../../cpp_src/prime_openmp/prime_openmp.html), a C++
program which counts the number of primes between 1 and N, using OpenMP
for parallel execution.

[PRIME\_SERIAL](../../cpp_src/prime_serial/prime_serial.html), a C++
program which counts the number of primes between 1 and N, intended as a
starting point for the creation of a parallel version.

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

1.  Eratosthenes,\
    A Method For Finding Prime Numbers,\
    Papyrus 487.

### Source Code: {#source-code align="center"}

-   [prime\_mpi.cpp](prime_mpi.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**PRIME\_FSU** compiles and runs the program on the FSU HPC cluster.

-   [prime\_fsu\_output.txt](prime_fsu_output.txt), the output file.

**PRIME\_SYSX** compiles and runs the program on Virginia Tech's System
X cluster.

-   [prime\_sysx\_output.txt](prime_sysx_output.txt), the output file.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 24 October 2011.*
