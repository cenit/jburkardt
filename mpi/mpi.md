MPI\
C++ Examples {#mpi-c-examples align="center"}
============

------------------------------------------------------------------------

**MPI** is a directory of C++ programs which illustrate the use of the
Message Passing Interface for parallel programming.

MPI allows a user to write a program in a familiar language, such as C,
C++, FORTRAN, or Python, and carry out a computation in parallel on an
arbitrary number of cooperating computers.

### Overview of MPI {#overview-of-mpi align="center"}

A remarkable feature of MPI is that *the user writes a single program
which runs on all the computers*. However, because each computer is
assigned a unique identifying number, it is possible for different
actions to occur on different machines, even though they run the same
program:

            if ( I am processor A ) then
              add a bunch of numbers
            else if ( I am processor B ) then
              multipy a matrix times a vector
            end
          

Another feature of MPI is that the data stored on each computer is
entirely separate from that stored on other computers. If one computer
needs data from another, or wants to send a particular value to all the
other computers, it must explicitly call the appropriate library routine
requesting a data transfer. Depending on the library routine called, it
may be necessary for both sender and receiver to be "on the line" at the
same time (which means that one will probably have to wait for the other
to show up), or it is possible for the sender to send the message to a
buffer, for later delivery, allowing the sender to proceed immediately
to further computation.

Here is a simple example of what a piece of the program would look like,
in which the number **X** is presumed to have been computed by processor
**A** and needed by processor **B**:

            if ( I am processor A ) then
              call MPI_Send ( X )
            else if ( I am processor B ) then
              call MPI_Recv ( X )
            end
          

Often, an **MPI** program is written so that one computer supervises the
work, creating data, issuing it to the worker computers, and gathering
and printing the results at the end. Other models are also possible.

It should be clear that a program using MPI to execute in parallel will
look much different from a corresponding sequential version. The user
must divide the problem data among the different processes, rewrite the
algorithm to divide up work among the processes, and add explicit calls
to transfer values as needed from the process where a data item "lives"
to a process that needs that value.

A C++ program, subroutine or function that calls any MPI function, or
uses an MPI-defined variable, must include the line

            include "mpi.h"
          

so that the types of the MPI variables are defined.

You probably compile and link your program with a single command, as in

            g++ myprog.C
          

Depending on the computer that you are using, you may be able to compile
an MPI program with a similar command, which automatically locates the
include file and the compiled libraries that you will need. This command
is likely to be:

            mpiCC myprog.c
          

### Interactive MPI Runs {#interactive-mpi-runs align="center"}

Some systems allow users to run an MPI program interactively. You do
this with the **mpirun** command:

            mpirun -np 4 a.out
          

This command requests that the executable program *a.out* be run, *right
now*, using 4 processors.

The **mpirun** command may be a convenience for beginners, with very
small jobs, but this is not the way to go once you have a large lengthy
program to run! Also, what actually happens can vary from machine to
machine. When you ask for 4 processors, for instance,

-   in the best case, **mpirun** automatically finds three other
    machines just like the one you are one, copies your program to them,
    and starts your program on all four.
-   in a less good case, there are four processors on your current
    machine, so the memory is divided up among them and your program
    runs;
-   in a worse case, there are less than four processors available, so,
    as necessary, one processor will "time share", and run two or more
    of your processes alternately.

The latest versions of MPI no longer support the special C++ MPI
bindings, so the examples given here have reverted to using the C MPI
bindings.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**MPI** examples are available in [a C
version](../../c_src/mpi/mpi.md) and [a C++
version](../../master/mpi/mpi.md) and [a FORTRAN77
version](../../f77_src/mpi/mpi.md) and [a FORTRAN90
version](../../f_src/mpi/mpi.md).

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

[MPI\_STUBS](../../master/mpi_stubs/mpi_stubs.md), a C++ library
which contains "stub" MPI routines which allow a user to compile, load,
and possibly run an MPI program on a serial machine.

[MULTITASK\_MPI](../../master/multitask_mpi/multitask_mpi.md), a C++
program which demonstrates how to "multitask", that is, to execute
several unrelated and distinct tasks simultaneously, using MPI for
parallel execution.

[POISSON\_SERIAL](../../master/poisson_serial/poisson_serial.md), a
C++ program which computes an approximate solution to the Poisson
equation in a rectangle, and is intended as the starting point for the
creation of a parallel version.

[PRIME\_MPI](../../master/prime_mpi/prime_mpi.md), a C++ program
which counts the number of primes between 1 and N, using MPI for
parallel execution.

[PTHREADS](../../c_src/pthreads/pthreads.md), C programs which
illustrate the use of the POSIX thread library to carry out parallel
program execution.

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

[TASK\_DIVISION](../../master/task_division/task_division.md), a C++
library which implements a simple procedure for smoothly dividing T
tasks among P processors; such a method can be useful in MPI and other
parallel environments, particularly when T is not an exact multiple of
P, and when the processors can be indexed starting from 0 or from 1.

[WAVE\_MPI](../../master/wave_mpi/wave_mpi.md), a C++ program which
uses finite differences and MPI to estimate a solution to the wave
equation.

### Reference: {#reference align="center"}

1.  William Gropp, Steven Huss-Lederman, Andrew Lumsdaine, Ewing Lusk,
    Bill Nitzberg, William Saphir, Marc Snir,\
    MPI: The Complete Reference,\
    Volume II: The MPI-2 Extensions,\
    Second Edition,\
    MIT Press, 1998,\
    ISBN13: 978-0-262-57123-4,\
    LC: QA76.642.M65.
2.  William Gropp, Ewing Lusk, Anthony Skjellum,\
    Using MPI: Portable Parallel Programming with the Message-Passing
    Interface,\
    Second Edition,\
    MIT Press, 1999,\
    ISBN: 0262571323,\
    LC: QA76.642.G76.
3.  William Gropp, Ewing Lusk, Rajiv Thakur,\
    Using MPI-2: Advanced Features of the Message-Passing Interface,\
    Second Edition,\
    MIT Press, 1999,\
    ISBN: 0262571331,\
    LC: QA76.642.G762.
4.  Stan Openshaw, Ian Turton,\
    High Performance Computing and the Art of Parallel Programming: an
    Introduction for Geographers, Social Scientists, and Engineers,\
    Routledge, 2000,\
    ISBN: 0415156920,\
    LC: QA76.88.O64.
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

### Examples and Tests: {#examples-and-tests align="center"}

**BONES** passes a vector of real data from one process to another. It
was used as an example in an introductory MPI workshop.

-   [bones\_mpi.cpp](bones_mpi.cpp), the source code;
-   [bones\_output.txt](bones_output.txt), the output file;
-   [bones\_fsu\_output.txt](bones_fsu_output.txt), the output file;

**BUFFON** demonstrates how parallel Monte Carlo processes can set up
distinct random number streams.

-   [buffon\_mpi.cpp](buffon_mpi.cpp), the source code;
-   [buffon\_output.txt](buffon_output.txt), the output file;
-   [buffon\_fsu\_output.txt](buffon_fsu_output.txt), the output file;

**DAY1** works out exercise \#3 assigned after day 1 of a workshop on
MPI. The instructions were to have process 1 generate some integers,
send them to process 3 which used some of those values to generate some
real numbers which were then sent back to process 1.

-   [day1\_mpi.cpp](day1_mpi.cpp), the source code;
-   [day1\_output.txt](day1_output.txt), the output file;
-   [day1\_fsu\_output.txt](day1_fsu_output.txt), the output file;

**INTERVALS** estimates an integral by dividing an interval into
subintervals, and having the servant processes estimate the integral
over each subinterval.

-   [intervals\_mpi.cpp](intervals_mpi.cpp), the source code;
-   [intervals\_output.txt](intervals_output.txt), the output file;
-   [intervals\_fsu\_output.txt](intervals_fsu_output.txt), the output
    file;

**MATVEC** computes a matrix-vector product c = A \* b, giving each
process a copy of the vector b, and using self-scheduling to let any
process have the next row of A to work on when it is ready. Arrays are
allocated dynamically. The "math.h" include file is needed, as is the
run-time math library.

-   [matvec\_mpi.cpp](matvec_mpi.cpp), the source code;
-   [matvec\_output.txt](matvec_output.txt), the output file;
-   [matvec\_fsu\_output.txt](matvec_fsu_output.txt), the output file;

**MONTE CARLO** computes PI by the Monte Carlo method, testing whether
points in the unit square are in the unit circle.

-   [monte\_carlo\_mpi.cpp](monte_carlo_mpi.cpp), the source code;
-   [monte\_carlo\_output.txt](monte_carlo_output.txt), the output file;
-   [monte\_carlo\_fsu\_output.txt](monte_carlo_fsu_output.txt), the
    output file;

**QUADRATURE** integrates a function f(x) over an interval;

-   [quadrature\_mpi.cpp](quadrature_mpi.cpp), the source code;
-   [quadrature\_output.txt](quadrature_output.txt), the output file;
-   [quadrature\_fsu\_output.txt](quadrature_fsu_output.txt), the output
    file;

**SEARCH** searches a list of numbers for all occurrences of a target
value.

-   [search\_mpi.cpp](search_mpi.cpp), the source code;
-   [search\_output.txt](search_output.txt), the output file;
-   [search\_fsu\_output.txt](search_fsu_output.txt), the output file;

**SUM** adds a list of numbers.

-   [sum\_mpi.cpp](sum_mpi.cpp), the source code;
-   [sum\_output.txt](sum_output.txt), the output file;
-   [sum\_fsu\_output.txt](sum_fsu_output.txt), the output file;

**TYPE** sets up a user-defined datatype, and sends and receives data in
this form.

-   [type\_mpi.cpp](type_mpi.cpp), the source code;
-   [type\_output.txt](type_output.txt), the output file;
-   [type\_fsu\_output.txt](type_fsu_output.txt), the output file;

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 24 October 2011.*
