QUAD\_MPI\
Quadrature using MPI {#quad_mpi-quadrature-using-mpi align="center"}
====================

------------------------------------------------------------------------

**QUAD\_MPI** is a C++ program which approximates an integral using a
quadrature rule. The computation is done in parallel by using MPI.

The latest versions of MPI no longer support the special C++ MPI
bindings, so the examples given here have reverted to using the C MPI
bindings.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**QUAD\_MPI** is available in [a C
version](../../c_src/quad_mpi/quad_mpi.html) and [a C++
version](../../cpp_src/quad_mpi/quad_mpi.html) and [a FORTRAN90
version](../../f_src/quad_mpi/quad_mpi.html) and [a FORTRAN77
version](../../f77_src/quad_mpi/quad_mpi.html) and [a PYTHON
version](../../py_src/quad_mpi/quad_mpi.html).

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
program which demonstrates how to "multitask", that is, to execute
several unrelated and distinct tasks simultaneously, using MPI for
parallel execution.

[PRIME\_MPI](../../cpp_src/prime_mpi/prime_mpi.html), a C++ program
which counts the number of primes between 1 and N, using MPI for
parallel execution.

[QUAD\_OPENMP](../../cpp_src/quad_openmp/quad_openmp.html), a C++
program which approximates an integral using a quadrature rule, and
carries out the computation in parallel using OpenMP.

[QUAD\_SERIAL](../../cpp_src/quad_serial/quad_serial.html), a C++
program which approximates an integral using a quadrature rule, and is
intended as a starting point for parallelization exercises.

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
6.  Sudarshan Raghunathan,\
    Making a Supercomputer Do What You Want: High Level Tools for
    Parallel Programming,\
    Computing in Science and Engineering,\
    Volume 8, Number 5, September/October 2006, pages 70-80.
7.  Marc Snir, Steve Otto, Steven Huss-Lederman, David Walker, Jack
    Dongarra,\
    MPI: The Complete Reference,\
    Volume I: The MPI Core,\
    Second Edition,\
    MIT Press, 1998,\
    ISBN: 0-262-69216-3,\
    LC: QA76.642.M65.
8.  Scott Vetter, Yukiya Aoyama, Jun Nakano,\
    RS/600 SP: Practical MPI Programming,\
    IBM Redbooks, 1999,\
    ISBN: 0738413658.
9.  The MPI web site at Argonne National Lab:
    <http://www-unix.mcs.anl.gov/mpi/>
10. The Message Passing Interface Forum,\
    **MPI: A Message Passing Interface Standard**,\
    1995,\
    Available online from [the MPI Forum](http://www.mpi-forum.org/).
11. The Message Passing Interface Forum,\
    **MPI-2: Extensions to the Message Passing Interface**,\
    1997,\
    Available online from [the MPI Forum](http://www.mpi-forum.org/).

### Source Code: {#source-code align="center"}

-   [quad\_mpi.cpp](quad_mpi.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**QUAD\_FSU** compiles and runs the program on the FSU HPC cluster.

-   [quad\_fsu\_output.txt](quad_fsu_output.txt), the output file.

**QUAD\_ITHACA** compiles and runs the program on the Virgina Tech
ITHACA cluster.

-   [quad\_ithaca\_output.txt](quad_ithaca_output.txt), the output file.

**QUAD\_LOCAL** compiles and runs the program on the local system, which
might work if OpenMPI is installed, and which might make sense if your
system has multiple cores.

-   [quad\_local\_output.txt](quad_local_output.txt), the output file.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 19 July 2010.*
