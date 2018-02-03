TIMESTAMP\
Print a Timestamp {#timestamp-print-a-timestamp align="center"}
=================

------------------------------------------------------------------------

**TIMESTAMP** is a C++ library which can print or return the current
YMDHMS date as a timestamp.

This is useful when documenting the run of a program. By including a
timestamp, the output of the program will always contain a clear
indication of when it was created. Other indicators, such as the file
timestamp, may be misleading or subject to unintentional modification.

TIMESTAMP simply gives the current time. If you are trying to do careful
timings of the speed of execution of a computer code, this may not be
very accurate, especially on a computer that uses timesharing. In that
case, there are better solutions that measure just the CPU time
associated with your process.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TIMESTAMP** is available in [a C
version](../../c_src/timestamp/timestamp.html) and [a C++
version](../../cpp_src/timestamp/timestamp.html) and [a FORTRAN77
version](../../f77_src/timestamp/timestamp.html) and [a FORTRAN90
version](../../f_src/timestamp/timestamp.html) and [a JAVA
version](../../java_src/timestamp/timestamp.html) and [a Mathematica
version](../../math_src/timestamp/timestamp.html) and [a MATLAB
version](../../m_src/timestamp/timestamp.html) and [a PYTHON
version.](../../py_src/timestamp/timestamp.html)

### Related Data and Programs: {#related-data-and-programs align="center"}

[TIMER](../../cpp_src/timer/timer.html), a C++ library which can be used
to measure elapsed CPU time, rather than elapsed real time.

[WTIME](../../cpp_src/wtime/wtime.html), a C++ library which returns a
reading of the wall clock time in seconds.

### Source Code: {#source-code align="center"}

-   [timestamp.cpp](timestamp.cpp), the source code.
-   [timestamp.hpp](timestamp.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [timestamp\_prb.cpp](timestamp_prb.cpp), a sample calling program.
-   [timestamp\_prb\_output.txt](timestamp_prb_output.txt), the output
    file.

### List of Routines: {#list-of-routines align="center"}

-   **CPU\_TIME** reports the elapsed CPU time.
-   **TIME\_NUMBERS** returns the data as a string of integers.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TIMESTRING** returns the current YMDHMS date as a string.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 05 June 2011.*
