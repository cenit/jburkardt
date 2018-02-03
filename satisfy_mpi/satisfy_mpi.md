SATISFY\_MPI\
Circuit Satisfiability Using MPI {#satisfy_mpi-circuit-satisfiability-using-mpi align="center"}
================================

------------------------------------------------------------------------

**SATISFY\_MPI** is a C++ program which demonstrates, for a particular
circuit, an exhaustive search for solutions of the circuit satisfy
problem. This version of the program uses MPI to carry out the solution
in parallel.

This problem assumes that we are given a logical circuit of AND, OR and
NOT gates, with N binary inputs and a single output. We are to determine
all inputs which produce a 1 as the output.

The general problem is NP complete, so there is no known polynomial-time
algorithm to solve the general case. The natural way to search for
solutions then is exhaustive search.

In an interesting way, this is a very extreme and discrete version of
the problem of maximizing a scalar function of multiple variables. The
difference is that here we know that both the input and output only have
the values 0 and 1, rather than a continuous range of real values!

This problem was a natural candidate for parallel computation, since the
individual evaluations of the circuit are completely independent.

The latest versions of MPI no longer support the special C++ MPI
bindings, so the examples given here have reverted to using the C MPI
bindings.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SATISFY\_MPI** is available in [a C
version](../../c_src/satisfy_mpi/satisfy_mpi.md) and [a C++
version](../../master/satisfy_mpi/satisfy_mpi.md) and [a FORTRAN77
version](../../f77_src/satisfy_mpi/satisfy_mpi.md) and [a FORTRAN90
version](../../f_src/satisfy_mpi/satisfy_mpi.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CNF](../../data/cnf/cnf.md), a data directory which describes the
DIMACS CNF file format for defining instances of the satisfy problem in
for boolean formulas in conjunctive normal form.

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

[MULTITASK\_MPI](../../master/multitask_mpi/multitask_mpi.md), a C++
program which demonstrates how to multitask, that is, to execute several
unrelated and distinct tasks simultaneously, using MPI for parallel
execution.

[QUAD\_MPI](../../master/quad_mpi/quad_mpi.md), a C++ program which
approximates an integral using a quadrature rule, and carries out the
computation in parallel using MPI.

[RANDOM\_MPI](../../master/random_mpi/random_mpi.md), a C++ program
which demonstrates one way to generate the same sequence of random
numbers for both sequential execution and parallel execution under MPI.

[RING\_MPI](../../master/ring_mpi/ring_mpi.md), a C++ program which
uses the MPI parallel programming environment, and measures the time
necessary to copy a set of data around a ring of processes.

[SATISFY](../../master/satisfy/satisfy.md), a C++ program which
solves the circuit satisfy problem.

[SATISFY\_OPENMP](../../master/satisfy_openmp/satisfy_openmp.md), a
C++ program which solves the circuit satisfy problem using the OpenMP
parallel programming system.

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

-   [satisfy\_mpi.cpp](satisfy_mpi.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**SATISFY\_LOCAL** compiles and runs the program on the local machine,
which presumably has a version of MPI installed.

-   [satisfy\_local\_output.txt](satisfy_local_output.txt), the output
    file.

**SATISFY\_FSU** compiles and runs the program on the FSU HPC cluster.

-   [satisfy\_fsu\_output.txt](satisfy_fsu_output.txt), the output file.

**SATISFY\_SYSX** compiles and runs the program on Virginia Tech's
System X cluster.

-   [satisfy\_sysx\_output.txt](satisfy_sysx_output.txt), the output
    file.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 14 October 2013.*
