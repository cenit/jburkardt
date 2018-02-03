MPI\_STUBS\
Dummy MPI Library {#mpi_stubs-dummy-mpi-library align="center"}
=================

------------------------------------------------------------------------

**MPI\_STUBS** is a C++ library which implements "stub" MPI routines.

MPI\_STUBS is intended to include stubs for the most commonly called MPI
routines. Most of the stub routines don't do anything. In a few cases,
where it makes sense, they do some simple action or return a value that
is appropriate for the serial processing case.

**MPI\_STUBS** can be used as a convenience, when a real MPI
implementation is not available, and the user simply wants to
test-compile a code. It may also be useful in those occasions when a
code has been so carefully written that it will still execute correctly
on a single processor.

**MPI\_STUBS** is based on a similar package supplied as part of the
**LAMMPS** program, which allow that program to be compiled, linked and
run on a single processor machine, although it is normally intended for
parallel execution.

**This C++ implementation is very sketchy. I am struggling to implement
it in a way that includes an MPI namespace.**

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**MPI\_STUBS** is available in [a C
version](../../c_src/mpi_stubs/mpi_stubs.html) and [a C++
version](../../cpp_src/mpi_stubs/mpi_stubs.html) and [a FORTRAN77
version](../../f77_src/mpi_stubs/mpi_stubs.html) and [a FORTRAN90
version](../../f_src/mpi_stubs/mpi_stubs.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[HELLO\_MPI](../../cpp_src/hello_mpi/hello_mpi.html), a C++ program
which prints out "Hello, world!" using the MPI parallel programming
environment.

[MOAB](../../examples/moab/moab.html), examples which illustrate the use
of the MOAB job scheduler for a computer cluster.

[MPI](../../cpp_src/mpi/mpi.html), C++ programs which demonstrate a
message passing library which enables parallel processing on a variety
of machine architectures, and with a varying number of processors.

[MULTITASK\_MPI](../../cpp_src/multitask_mpi/multitask_mpi.html), a C++
program which demonstrates how to "multitask", that is, to execute
several unrelated and distinct tasks simultaneously, using MPI for
parallel execution.

### Reference: {#reference align="center"}

1.  William Gropp, Ewing Lusk, Anthony Skjellum,\
    Using MPI: Portable Parallel Programming with the Message-Passing
    Interface,\
    Second Edition,\
    MIT Press, 1999,\
    ISBN: 0262571323,\
    LC: QA76.642.G76.

### Source Code: {#source-code align="center"}

-   [mpi\_stubs.cpp](mpi_stubs.cpp), the source code.
-   [mpi\_stubs.hpp](mpi_stubs.hpp), the include file.

### Examples: {#examples align="center"}

**HELLO** is a simple program that says "Hello, world!".

-   [hello.cpp](hello.cpp), a sample calling program.
-   [hello\_output.txt](hello_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **MPI::COMM::GET\_RANK** reports the rank of the calling process.
-   **MPI::COMM::GET\_SIZE** reports the number of processes in a
    communicator.
-   **MPI::FINALIZE** shuts down the MPI library.
-   **MPI::INIT** initializes the MPI library.
-   **MPI::WTICK** returns the number of seconds in one tick of the
    timer.
-   **MPI::WTIME** returns the elapsed wall clock time.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 13 January 2012.*
