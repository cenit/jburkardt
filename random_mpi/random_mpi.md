RANDOM\_MPI\
Random Numbers using MPI {#random_mpi-random-numbers-using-mpi align="center"}
========================

------------------------------------------------------------------------

**RANDOM\_MPI** is a C++ program which demonstrates one way to generate
the same sequence of random numbers for both sequential execution and
parallel execution under MPI.

A simpler approach to random numbers would simply let each processor
choose a seed. Or the master processor could choose distinct seeds.
However, this is not ideal since it will not match the sequential
program and it does not avoid the possibility that two of the random
sequences will quickly overlap because of a bad choice of seed.

Notice that if we have 10 processors available under MPI, we do not want
each processor to generate the same random number sequence. Instead, we
want each of the processors to generate a part of the sequence, so that
all the parts together make up the same set of values that a sequential
program would have computed.

We assume we are using a linear congruential random number generator or
"LCRG", which takes an integer input and returns a new integer output:

> **U = ( A \* V + B ) mod C**

We assume that we want the MPI program to produce the same sequence of
random values as a sequential program would - but we want each processor
to compute one part of that sequence.

We do this by computing a new LCRG which can compute every P'th entry of
the original one.

Our LCRG works with integers, but it is easy to turn each integer into a
real number between \[0,1\].

The particular scheme for computing the parameters of the new LCRG is
implemented in the UNIFORM library.

The latest versions of MPI no longer support the special C++ MPI
bindings, so the examples given here have reverted to using the C MPI
bindings.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**RANDOM\_MPI** is available in [a C
version](../../c_src/random_mpi/random_mpi.html) and [a C++
version](../../cpp_src/random_mpi/random_mpi.html) and [a FORTRAN77
version](../../f77_src/random_mpi/random_mpi.html) and [a FORTRAN90
version.](../../f_src/random_mpi/random_mpi.html)

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
computatioins in a distributed memory environment.

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

[RING\_MPI](../../cpp_src/ring_mpi/ring_mpi.html), a C++ program which
uses the MPI parallel programming environment, and measures the time
necessary to copy a set of data around a ring of processes.

[RNGLIB](../../cpp_src/rnglib/rnglib.html), a C++ library which
implements a random number generator (RNG) with splitting facilities,
allowing multiple independent streams to be computed, by L'Ecuyer and
Cote.

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

1.  Peter Arbenz, Wesley Petersen,\
    Introduction to Parallel Computing - A practical guide with examples
    in C,\
    Oxford University Press,\
    ISBN: 0-19-851576-6,\
    LC: QA76.58.P47.
2.  Stan Openshaw, Ian Turton,\
    High Performance Computing and the Art of Parallel Programming: an
    Introduction for Geographers, Social Scientists, and Engineers,\
    Routledge, 2000,\
    ISBN: 0415156920.
3.  Peter Pacheco,\
    Parallel Programming with MPI,\
    Morgan Kaufman, 1996,\
    ISBN: 1558603395,\
    LC: QA76.642.P3.
4.  Michael Quinn,\
    Parallel Programming in C with MPI and OpenMP,\
    McGraw-Hill, 2004,\
    ISBN13: 978-0071232654,\
    LC: QA76.73.C15.Q55.

### Source Code: {#source-code align="center"}

-   [random\_mpi.cpp](random_mpi.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**RANDOM\_FSU** compiles and runs the program on the FSU HPC cluster.

-   [random\_fsu\_output.txt](random_fsu_output.txt), the output file.

**RANDOM\_SYSX** compiles and runs the program on Virginia Techs's
System X.

-   [random\_sysx\_output.txt](random_sysx_output.txt), the output file.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 24 October 2011.*
