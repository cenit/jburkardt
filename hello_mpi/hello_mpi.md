HELLO\_MPI\
Hello World, Using MPI {#hello_mpi-hello-world-using-mpi align="center"}
======================

------------------------------------------------------------------------

**HELLO\_MPI** is a C++ program which prints out "Hello, World!", while
invoking the MPI parallel programming system.

If you're just trying to learn MPI, or learning how to use MPI on a
different computer system, or in batch mode, it's helpful if you start
with a very simple program with a tiny amount of output that should
print immediately if things are working well.

The latest versions of MPI no longer support the special C++ MPI
bindings, so the examples given here have reverted to using the C MPI
bindings.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**HELLO\_MPI** is available in [a C
version](../../c_src/hello_mpi/hello_mpi.html) and [a C++
version](../../cpp_src/hello_mpi/hello_mpi.html) and [a FORTRAN77
version](../../f77_src/hello_mpi/hello_mpi.html) and [a FORTRAN90
version](../../f_src/hello_mpi/hello_mpi.html) and [a Python
version](../../py_src/hello_mpi/hello_mpi.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[COMMUNICATOR\_MPI](../../cpp_src/communicator_mpi/communicator_mpi.html),
a C++ program which creates new communicators involving a subset of
initial set of MPI processes in the default communicator
MPI\_COMM\_WORLD.

[HEAT\_MPI](../../cpp_src/heat_mpi/heat_mpi.html), a C++ program which
solves the 1D Time Dependent Heat Equation using MPI.

[HELLO](../../cpp_src/hello/hello.html), a C++ program which prints out
"Hello, world!".

[HELLO\_OPENMP](../../cpp_src/hello_openmp/hello_openmp.html), a C++
program which prints out "Hello, world!" using the OpenMP parallel
programming environment.

[MPI](../../cpp_src/mpi/mpi.html), C++ programs which illustrate the use
of the MPI application program interface for carrying out parallel
computatioins in a distributed memory environment.

[MPI\_STUBS](../../cpp_src/mpi_stubs/mpi_stubs.html), a C++ library
which contains "stub" MPI routines, allowing a user to compile, load,
and possibly run an MPI program on a serial machine.

[MULTITASK\_MPI](../../cpp_src/multitask_mpi/multitask_mpi.html), a C++
program which demonstrates how to "multitask", that is, to execute
several unrelated and distinct tasks simultaneously, using MPI for
parallel execution.

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

1.  Michael Quinn,\
    Parallel Programming in C with MPI and OpenMP,\
    McGraw-Hill, 2004,\
    ISBN13: 978-0071232654,\
    LC: QA76.73.C15.Q55.

### Source Code: {#source-code align="center"}

-   [hello\_mpi.cpp](hello_mpi.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**HELLO\_FSU** compiles and runs the program on the FSU HPC cluster.

-   [hello\_fsu\_output.txt](hello_fsu_output.txt), the output file.

**HELLO\_LOCAL** compiles and runs the program on the local system,
which might work if OpenMPI is installed, and which might make sense if
your system has multiple cores.

-   [hello\_local\_output.txt](hello_local_output.txt), the output file.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 14 June 2016.*
