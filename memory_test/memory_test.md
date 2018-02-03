MEMORY\_TEST\
How Big Can Arrays Be? {#memory_test-how-big-can-arrays-be align="center"}
======================

------------------------------------------------------------------------

**MEMORY\_TEST** is a C++ program which declares and uses a sequence of
larger and larger arrays, to see what the memory limits are on a given
computer.

The program tries an increasing series of values of **N**, using powers
of 2, between limits that you set. At some point, the program may ask
for more memory than can be provided, and crash. This is one way to find
out what the memory ceiling is! The relevant power of 2 is likely to be
in the 20's:

  Log(N)   N
  -------- ---------------
  20       1,048,576
  21       2,097,152
  22       4,194,304
  23       8,388,608
  24       16,777,216
  25       33,554,432
  26       67,108,864
  27       134,217,728
  28       268,435,456
  29       536,870,912
  30       1,073,741,824

Remember that your memory is probably described in terms of bytes, but
that integers and reals require 4 bytes, and double precision reals
require 8 bytes.

### Usage: {#usage align="center"}

> **memory\_test** *log\_n\_min* *log\_n\_max*

runs the program for sizes **N** = 2^log\_n\_min^ to 2^log\_n\_max^.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**MEMORY\_TEST** is available in [a C
version](../../c_src/memory_test/memory_test.html) and [a C++
version](../../cpp_src/memory_test/memory_test.html) and [a FORTRAN90
version](../../f_src/memory_test/memory_test.html) and [a MATLAB
version](../../m_src/memory_test/memory_test.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[LINPACK\_BENCH](../../cpp_src/linpack_bench/linpack_bench.html), a C++
program which measures the time needed to factor and solve a linear
system.

[MACHINE](../../f_src/machine/machine.html), a FORTRAN90 library which
can return various machine constants.

[MATMUL](../../f_src/matmul/matmul.html), a FORTRAN90 program which is
an interactive matrix multiplication benchmark program.

[MDBNCH](../../f77_src/mdbnch/mdbnch.html), a FORTRAN77 program which is
a benchmark code for a molecular dynamics calculation.

[SUM\_MILLION](../../cpp_src/sum_million/sum_million.html), a C++
program which sums the integers from 1 to 1,000,000, as a demonstration
of how to rate a computer's speed;

[TIMER](../../cpp_src/timer/timer.html), C++ programs which demonstrate
how to compute CPU time or elapsed time.

### Source Code: {#source-code align="center"}

-   [memory\_test.cpp](memory_test.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [memory\_test\_output\_g5.txt](memory_test_output_g5.txt), a run of
    the program on a Mac G5, up to LOG(N) = 27.
-   [memory\_test\_output\_kachina.txt](memory_test_output_kachina.txt),
    a run of the program on Kachina, an ALPHA workstation, up to LOG(N)
    = 27.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for MEMORY\_TEST.
-   **I4VEC\_MEMORY\_TEST** declares and uses an I4VEC of size N.
-   **R4\_CPU\_TIME** reports the elapsed CPU time.
-   **R4VEC\_MEMORY\_TEST** declares and uses an R4VEC of size N.
-   **R8\_CPU\_TIME** reports the elapsed CPU time.
-   **R8VEC\_MEMORY\_TEST** declares and uses an R8VEC of size N.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 01 July 2009.*
