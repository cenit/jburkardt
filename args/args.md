ARGS\
Command Line Argument Retrieval {#args-command-line-argument-retrieval align="center"}
===============================

------------------------------------------------------------------------

**ARGS** is a C++ program which demonstrates the retrieval of command
line arguments.

This shows how a program can count and retrieve the individual command
line arguments with which it was invoked. Thus, if our executable is
called *fu* and we invoke it with the command

            fu man chu
          

then our argument counter will return the value 3, and the arguments,
indexed by 0, 1 or 2, will return the values *fu*, *man* or *chu*.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**ARGS** is available in [a C version](../../c_src/args/args.md) and
[a C++ version](../../master/args/args.md) and [a FORTRAN77
version](../../f77_src/args/args.md) and [a FORTRAN90
version](../../f_src/args/args.md) and [a JAVA
version](../../java_src/args/args.md) and [a MATLAB
version](../../m_src/args/args.md) and [a Python
version](../../py_src/args/args.md).

### Source Code: {#source-code align="center"}

ARGS is a program which reports the command line arguments with which it
was invoked.

-   [args.cpp](args.cpp), the source code;
-   [args\_output.txt](args_output.txt), the result of the command "args
    17 apple 3.14159 &gt; args\_output.txt";

PRIME\_SUM is a program which expects one command line argument, an
integer N. It reads N, computes the sum of the prime numbers up to N,
and prints it out. The program demonstrates how a command line argument,
which is a STRING, can be converted to an INTEGER, using the function
**atoi**.

-   [prime\_sum.cpp](prime_sum.cpp), the source code;
-   [prime\_sum\_output.txt](prime_sum_output.txt), the result of the
    command "prime\_sum 1000 &gt; prime\_sum\_output.txt";

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 14 December 2011.*
