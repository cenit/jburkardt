STRING\_SIMULATION\
Vibrating String Simulation {#string_simulation-vibrating-string-simulation align="center"}
===========================

------------------------------------------------------------------------

**STRING\_SIMULATION** is a C++ program which simulates the behavior of
a vibrating string by solving the corresponding initial boundary value
problem (IBVP), creating files that can be displayed by gnuplot.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**STRING\_SIMULATION** is available in [a C
version](../../c_src/string_simulation/string_simulation.html) and [a
C++ version](../../cpp_src/string_simulation/string_simulation.html) and
[a FORTRAN77
version](../../f77_src/string_simulation/string_simulation.html) and [a
FORTRAN90 version](../../f_src/string_simulation/string_simulation.html)
and [a MATLAB
version](../../m_src/string_simulation/string_simulation.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FD1D\_WAVE](../../cpp_src/fd1d_wave/fd1d_wave.html), a C++ program
which applies the finite difference method to solve a version of the
wave equation in one spatial dimension.

[GNUPLOT](../../cpp_src/gnuplot/gnuplot.html), C++ programs which
illustrate how a program can write data and command files so that
gnuplot can create plots of the program results.

[HIGH\_CARD\_SIMULATION](../../cpp_src/high_card_simulation/high_card_simulation.html),
a C++ program which simulates a situation in which you see the cards in
a deck one by one, and must select the one you think is the highest and
stop; the program uses GNUPLOT for graphics.

### Reference: {#reference align="center"}

1.  George Lindfield, John Penny,\
    Numerical Methods Using MATLAB,\
    Second Edition,\
    Prentice Hall, 1999,\
    ISBN: 0-13-012641-1,\
    LC: QA297.P45.

### Source Code: {#source-code align="center"}

-   [string\_simulation.cpp](string_simulation.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [string\_simulation\_output.txt](string_simulation_output.txt), the
    output file.
-   [string\_data.txt](string_data.txt), a data file containing the
    solution values.
-   [string\_commands.txt](string_commands.txt), GNUPLOT commands that
    can create an image from the solution data file.
-   [string.png](string.png), an image of the solution as it changes
    over time.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for STRING\_SIMULATION.
-   **F** supplies the initial condition.
-   **G** supplies the initial time derivative.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 01 December 2012.*
