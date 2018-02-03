SHALLOW\_WATER\_1D\
The Shallow Water Equations in 1D {#shallow_water_1d-the-shallow-water-equations-in-1d align="center"}
=================================

------------------------------------------------------------------------

**SHALLOW\_WATER\_1D** is a C++ program which simulates a system
governed by the shallow water equations in 1D.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SHALLOW\_WATER\_1D** is available in [a C
version](../../c_src/shallow_water_1d/shallow_water_1d.html) and [a C++
version](../../cpp_src/shallow_water_1d/shallow_water_1d.html) and [a
FORTRAN90 version](../../f_src/shallow_water_1d/shallow_water_1d.html)
and [a MATLAB
version](../../m_src/shallow_water_1d/shallow_water_1d.html) and [a
Python version](../../py_src/shallow_water_1d/shallow_water_1d.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[SHALLOW\_WATER\_1D\_DISPLAY](../../m_src/shallow_water_1d_display/shallow_water_1d_display.html),
a MATLAB program which can display a solution of the shallow water
equations in 1D, generally as computed by the program
shallow\_water\_1d.

[SHALLOW\_WATER\_2D](../../m_src/shallow_water_2d/shallow_water_2d.html),
a MATLAB program which solves the 2D shallow water equations.

### Reference: {#reference align="center"}

1.  Cleve Moler,\
    Experiments with MATLAB,\
    <http://www.mathworks.com/moler/exm/index.html>

### Source Code: {#source-code align="center"}

-   [shallow\_water\_1d.cpp](shallow_water_1d.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

The program was run with the default settings.

-   [shallow\_water\_1d\_output.txt](shallow_water_1d_output.txt), the
    output file.
-   [test01\_h.txt](test01_h.txt), the H file.
-   [test01\_t.txt](test01_t.txt), the T file.
-   [test01\_uh.txt](test01_uh.txt), the UH file.
-   [test01\_x.txt](test01_x.txt), the X file.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for SHALLOW\_WATER\_1D.
-   **INITIAL\_CONDITIONS** sets the initial conditions.
-   **INITIAL\_CONDITIONS** sets the initial conditions.
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **R8VEC\_LINSPACE\_NEW** creates a vector of linearly spaced values.
-   **R8VEC\_WRITE** writes an R8VEC file.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 11 June 2012.*
