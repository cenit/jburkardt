VALGRIND\
C++ Examples of the VALGRIND Memory Leak Detector {#valgrind-c-examples-of-the-valgrind-memory-leak-detector align="center"}
=================================================

------------------------------------------------------------------------

**VALGRIND** is a directory of C++ programs which illustrate the use of
VALGRIND, a suite of programs which includes a memory leak detector.

The simplest way to use VALGRIND on a program that is suspected of
having memory leaks is to compile with the "-g" option, and then issue
the VALGRIND command followed by the normal execution command:

            g++ -g myprog.C
            mv a.out myprog
            valgrind myprog
          

On a Macintosh, it is necessary to include a particular switch that
generates the necessary symbol tables in order that VALGRIND can report
line numbers.

            valgrind --dsymutil=yes myprog
          

Essentially, VALGRIND runs the program, but constantly watches to detect
illegal memory references, and prints messages when these are spotted.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**VALGRIND** examples are available in [a C
version](../../c_src/valgrind/valgrind.md) and [a C++
version](../../master/valgrind/valgrind.md) and [a FORTRAN77
version](../../f77_src/valgrind/valgrind.md). [a FORTRAN90
version](../../f_src/valgrind/valgrind.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[GDB](../../f_src/gdb/gdb.md), FORTRAN90 programs which illustrate the
use of the GNU debugger program on a FORTRAN90 program;

### Reference: {#reference align="center"}

1.  Julian Seward, et al,\
    Valgrind Documentation.

### Examples and Tests: {#examples-and-tests align="center"}

**TEST01** is an example in which 11 elements of the Fibonacci sequence
are stored in a vector allocated only for 10 elements:

-   [test01.cpp](test01.cpp), the calling program;
-   [test01\_output.txt](test01_output.txt), the output file.
-   [test01\_valgrind\_output.txt](test01_valgrind_output.txt), the
    output file using VALGRIND.

**TEST02** is an example in which some uninitialized data is accessed.

-   [test02.cpp](test02.cpp), the calling program;
-   [test02\_output.txt](test02_output.txt), the output file.
-   [test02\_valgrind\_output.txt](test02_valgrind_output.txt), the
    output file using VALGRIND.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 19 May 2011.*
