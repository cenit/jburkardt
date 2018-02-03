CELLULAR\_AUTOMATON\
Demonstrate 1D Cellular Automaton Rule 30 {#cellular_automaton-demonstrate-1d-cellular-automaton-rule-30 align="center"}
=========================================

------------------------------------------------------------------------

**CELLULAR\_AUTOMATON** is a C++ program which demonstrates the behavior
of the 1D Cellular Automaton rule \#30.

This program carries out iterations of the 1D cellular automaton known
as rule 30.

Given an initial linear array of 0's and 1's, rule 30 produces a new
array using transformations based on each value and the value of its
left and right neighbors, as follows:

          111  110  101  100  011  010  001  000
           V    V    V    V    V    V    V    V
           0    0    0    1    1    1    1    0     
          

Note that there are 256 = 2\^8 possible ways to fill in this output
chart, and that rule 30 gets its index by the fact that
(0,0,0,1,1,1,1,0) can be interpreted as the binary representation of 30.

For instance, if the current values of X(4), X(5) and X(6) are 0, 1 and
1, respectively, then the new value of X(5) will be 1.

The first and last entries of the array must be treated specially, since
they don't have a left or right neighbor. One simple treatment is to
assume that there are phantom neighbors whose values are both 0. Another
is to enforce periodic boundary conditions.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**CELLULAR\_AUTOMATON** is available in [a C
version](../../c_src/cellular_automaton/cellular_automaton.md) and [a
C++ version](../../master/cellular_automaton/cellular_automaton.md)
and [a FORTRAN77
version](../../f77_src/cellular_automaton/cellular_automaton.md) and
[a FORTRAN90
version](../../f_src/cellular_automaton/cellular_automaton.md) and [a
MATLAB version](../../m_src/cellular_automaton/cellular_automaton.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[LIFE\_OPENGL](../../master/life_opengl/life_opengl.md), a C++
program which uses OpenGL to display the evolution of John Conway's Game
of Life, by Simon Green.

### Reference: {#reference align="center"}

1.  Stephen Wolfram,\
    A New Kind of Science,\
    Wolfram Media, 2002,\
    ISBN13: 978-1579550080,\
    LC: QA267.5.C45.W67.

### Source Code: {#source-code align="center"}

-   [cellular\_automaton.cpp](cellular_automaton.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [cellular\_automaton\_output.txt](cellular_automaton_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for CELLULAR\_AUTOMATON.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 19 May 2013.*
