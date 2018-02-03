WTIME\
Compute Elapsed Wallclock Time {#wtime-compute-elapsed-wallclock-time align="center"}
==============================

------------------------------------------------------------------------

**WTIME** is a C++ function which returns a reading of the wall clock
time.

For parallel programming, the important thing to measure is the elapsed
wallclock time. This can be found by subtracting an initial reading of
the wallclock time from a final one.

The OpenMP system provides a function used as follows:

            seconds = omp_get_wtime ( )
            operations to time;
            seconds = omp_get_wtime ( ) - seconds;
          

while the MPI system provides a similar function used as:

            seconds = MPI_Wtime ( );
            operations;
            seconds = MPI_Wtime ( ) - seconds;
          

and in MATLAB, wallclock time can be taken with "tic" and "toc":

            tic;
            operation;
            seconds = toc;
          

WTIME provides a way to get a similar reading:

            seconds = wtime ( );
            operations;
            seconds = wtime ( ) - seconds;
          

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**WTIME** is available in [a C version](../../c_src/wtime/wtime.html)
and [a C++ version](../../cpp_src/wtime/wtime.html) and [a FORTRAN77
version](../../f77_src/wtime/wtime.html) and [a FORTRAN90
version](../../f_src/wtime/wtime.html) and [a MATLAB
version](../../m_src/wtime/wtime.html) and [a PYTHON
version](../../py_src/wtime/wtime.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[TIMER](../../cpp_src/timer/timer.html), a C++ program which shows how
to compute the elapsed CPU time inside a program.

[TIMESTAMP](../../cpp_src/timestamp/timestamp.html), a C++ library which
displays the current wall clock time.

### Source Code: {#source-code align="center"}

-   [wtime.cpp](wtime.cpp), the source code.
-   [wtime.hpp](wtime.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [wtime\_prb.cpp](wtime_prb.cpp), a sample calling program.
-   [wtime\_prb\_output.txt](wtime_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **WTIME** returns a reading of the wall clock time.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 27 April 2009.*
