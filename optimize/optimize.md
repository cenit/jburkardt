OPTIMIZE\
Taking Advantage of the Compiler's Optimization Ability {#optimize-taking-advantage-of-the-compilers-optimization-ability align="center"}
=======================================================

------------------------------------------------------------------------

**OPTIMIZE** is a directory of C++ programs which demonstrate the use
and benefits of the compiler's automatic optimization ability.

Most compilers have an option to "optimize" your code; that is, to spend
some extra compilation time looking for ways to adjust your program so
that it runs faster, while getting the same results.

By default, compiler optimization is not accessed. In GFORTRAN, you can
request optimization by including the "-O\#' option where '\#' is a
value between 0 (no optimization) and 3 (high optimization). Asking for
a higher level of optimization may increase the compilation time
somewhat, and occasionally, an optimization performed by the compiler
might not be suitable for your program (in other words, it might make
your program return different or incorrect results.) Thus, it's
important to time your code before and after optimization, to see if it
helps, and to check your results, to see if it hurts!

The molecular dynamics example program given here runs in about 72
seconds. After optimization at level 1, it runs in 50 seconds.
Optimization level 2 brings the run time down to 48 seconds and level 3
to 54 seconds. These improvements come with not a single change to the
source code.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**OPTIMIZE** is available in [a C
version](../../c_src/optimize/optimize.html) and [a C++
version](../../cpp_src/optimize/optimize.html) and [a FORTRAN77
version](../../f77_src/optimize/optimize.html) and [a FORTRAN90
version](../../f_src/optimize/optimize.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[GPROF](../../cpp_src/gprof/gprof.html), C++ programs which illustrate
the use of the GPROF program performance monitor;

[MD](../../cpp_src/md/md.html), a C++ program which carries out a
molecular dynamics simulation, intended as a starting point for
implementing a parallel version.

[TIMER](../../cpp_src/timer/timer.html), C++ programs which demonstrate
how to compute CPU time or elapsed time.

### Examples and Tests: {#examples-and-tests align="center"}

**MD** is a molecular dynamics program.

-   [md.cpp](md.cpp), the source code;
-   [md\_output.txt](md_output.txt), the output file;
-   [md\_O1\_output.txt](md_O1_output.txt), the output file;
-   [md\_O2\_output.txt](md_O2_output.txt), the output file;
-   [md\_O3\_output.txt](md_O3_output.txt), the output file;

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 13 March 2012*
