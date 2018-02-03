NACA\
NACA Airfoils {#naca-naca-airfoils align="center"}
=============

------------------------------------------------------------------------

**NACA** is a C++ library which can take the parameters of certain NACA
airfoils and return the coordinates of a sequence of points that outline
the wing shape. The data can be displayed with gnuplot.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**NACA** is available in [a C version](../../c_src/naca/naca.md) and
[a C++ version](../../master/naca/naca.md) and [a FORTRAN77
version](../../f77_src/naca/naca.md) and [a FORTRAN90
version](../../f_src/naca/naca.md) and [a MATLAB
version](../../m_src/naca/naca.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[GNUPLOT](../../master/gnuplot/gnuplot.md), C++ programs which
illustrate how a program can write data and command files so that
gnuplot can create plots of the program results.

### Reference: {#reference align="center"}

1.  Eastman Jacobs, Kenneth Ward, Robert Pinkerton,\
    "The characteristics of 78 related airfoil sections from tests in
    the variable-density wind tunnel",\
    NACA Report 460, 1933.

### Source Code: {#source-code align="center"}

-   [naca.cpp](naca.cpp), the source code.
-   [naca.hpp](naca.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [naca\_prb.cpp](naca_prb.cpp), a sample calling program.
-   [naca\_prb\_output.txt](naca_prb_output.txt), the output file.
-   [symmetric\_data.txt](symmetric_data.txt), the data outlining the
    NACA symmetric 4-digit airfoil.
-   [symmetric\_commands.txt](symmetric_commands.txt), gnuplot commands
    to plot the data.
-   [symmetric.png](symmetric.png), a PNG image of the data.
-   [cambered\_data.txt](cambered_data.txt), the data outlining the NACA
    cambered 4-digit airfoil.
-   [cambered\_commands.txt](cambered_commands.txt), gnuplot commands to
    plot the data.
-   [cambered.png](cambered.png), a PNG image of the data.

### List of Routines: {#list-of-routines align="center"}

-   **NACA4\_CAMBERED:** (xu,yu), (xl,yl) for a NACA cambered 4-digit
    airfoil.
-   **NACA4\_SYMMETRIC** evaluates y(x) for a NACA symmetric 4-digit
    airfoil.
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **R8VEC\_LINSPACE** creates a vector of linearly spaced values.
-   **R8VEC\_MAX** returns the maximum value in an R8VEC.
-   **R8VEC\_MIN** returns the minimum value of an R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 22 May 2014.*
