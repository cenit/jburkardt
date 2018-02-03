TASK\_DIVISION\
Divide T Tasks Among P Processors {#task_division-divide-t-tasks-among-p-processors align="center"}
=================================

------------------------------------------------------------------------

**TASK\_DIVISION** is a C++ library which implements a simple procedure
for smoothly dividing T tasks among P processors; such a method can be
useful in MPI and other parallel environments, particularly when T is
not an exact multiple of P, and when the processors can be indexed
starting from 0 or from 1.

If we have 16 tasks and 8 processors, it's easy to see that each
processor gets two tasks, and that processor 3 gets tasks 5 and
6...(unless we index our processors starting at 0 rather than 1, but
let's ignore that possibility for the moment.)

If we have 17 tasks and 8 processors, then we can just give the last
processor the extra task, because someone has to do it. But if we have
18 tasks, we shouldn't given everyone else 2 tasks, and the last
processor 4 tasks. A better assignment would have two of the processors
working on 3 tasks, the rest on 2.

Moreover, we'd like to do this kind of assignment in a regular enough
nonarbitrary way, so that any processor, knowning just its processor
index and the number of tasks, can work out the number of tasks it got
assigned, and even the indices of those tasks.

The TASK\_DIVISION library outlines a simple way to do this, which is
essentially a "greedy" algorithm that cuts up the "task pie" a slice at
a time, using rounding to give each processor about the same number of
tasks, in a way that avoids having leftovers.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TASK\_DIVISION** is available in [a C
version](../../c_src/task_division/task_division.md) and [a C++
version](../../master/task_division/task_division.md) and [a
FORTRAN77 version](../../f77_src/task_division/task_division.md) and
[a FORTRAN90 version](../../f_src/task_division/task_division.md) and
[a MATLAB version](../../m_src/task_division/task_division.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[MPI](../../master/mpi/mpi.md), C++ programs which illustrate the use
of the MPI application program interface for carrying out parallel
computations in a distributed memory environment.

### Source Code: {#source-code align="center"}

-   [task\_division.cpp](task_division.cpp), the source code.
-   [task\_division.hpp](task_division.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [task\_division\_prb.cpp](task_division_prb.cpp), a sample calling
    program.
-   [task\_division\_prb\_output.txt](task_division_prb_output.txt), the
    output file.

### List of Routines: {#list-of-routines align="center"}

-   **I4\_DIV\_ROUNDED** computes the rounded result of I4 division.
-   **TASK\_DIVISION** divides tasks among processors.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last modified on 23 October 2011.*
