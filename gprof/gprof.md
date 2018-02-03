GPROF\
Monitoring Program Performance {#gprof-monitoring-program-performance align="center"}
==============================

------------------------------------------------------------------------

**GPROF** is a directory of C++ programs which demonstrate the use of
the GPROF performance monitoring tool.

In order to use GPROF with a C++ program, the user program must be
compiled and linked with the **-pg** switch. For example, either

            g++ -pg myprog.C
          

or, in a two step process,

            g++ -c -pg myprog.C
            g++ -pg myprog.o
          

When the resulting executable program is run, **GPROF** will silently
monitor the program, and produce a report file called **gmon.out**. This
report file is not user-readable. To see the information contained in
the report, you have to run **gprof** and tell it the name of the
executable program you just ran. A typical procedure, then, would be to
issue the commands

            myprog            (to run your program called "myprog")
            gprof myprog      (to have GPROF make the report)
          

**GPROF** can only report on code which has been compiled with the
appropriate options. If your program calls routines from a precompiled
library (which probably was NOT compiled with the -pg option!) then your
report information will not include information about the time spent in
those routines. **GPROF**'s report will charge all such time to the
higher level routine that called the library routine. If most of your
execution time occurs in various library routines, then this fact may
greatly reduce the value of **GPROF**'s information.

For more information on how to use **GPROF**, type

            man gprof
          

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**GPROF** examples are available in [a C
version](../../c_src/gprof/gprof.md) and [a C++
version](../../master/gprof/gprof.md) and [a FORTRAN77
version](../../f77_src/gprof/gprof.md) and [a FORTRAN90
version](../../f_src/gprof/gprof.md).

### Examples and Tests: {#examples-and-tests align="center"}

**LINPACK\_BENCH** is the LINPACK benchmark code, which solves a linear
system. This program was compiled, run, and analyzed with **GPROF**.
Files you may copy include:

-   [linpack\_bench.cpp](linpack_bench.cpp), the source code.
-   [linpack\_bench\_output.txt](linpack_bench_output.txt), the output
    from the LINPACK\_BENCHMARK executable.
-   [linpack\_bench\_gprof\_output.txt](linpack_bench_gprof_output.txt),
    the performance report produced by **GPROF**.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 09 March 2008.*
