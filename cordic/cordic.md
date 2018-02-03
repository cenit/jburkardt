CORDIC\
Approximation of Elementary Functions {#cordic-approximation-of-elementary-functions align="center"}
=====================================

------------------------------------------------------------------------

**CORDIC** is a C++ library which uses the CORDIC algorithm to evaluate
certain functions, in particular the sine and cosine.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**CORDIC** is available in [a C version](../../c_src/cordic/cordic.md)
and [a C++ version](../../master/cordic/cordic.md) and [a FORTRAN77
version](../../f77_src/cordic/cordic.md) and [a FORTRAN90
version](../../f_src/cordic/cordic.md) and [a MATLAB
version](../../m_src/cordic/cordic.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FN](../../master/fn/fn.md), a C++ library which contains routines by
Wayne Fullerton for evaluating elementary and special functions.

[POLPAK](../../master/polpak/polpak.md), a C++ library which
evaluates recursively defined polynomials and other special functions.

[SPECFUN](../../f_src/specfun/specfun.md), a FORTRAN90 library which
evaluates certain special functions using fitted data.

[TEST\_VALUES](../../master/test_values/test_values.md), a C++
library which returns some tabulated values of various functions.

### Reference: {#reference align="center"}

1.  Pitts Jarvis,\
    Implementing CORDIC Algorithms,\
    Dr. Dobb's Journal,\
    October 1990.
2.  Jean-Michel Muller,\
    Elementary Functions: Algorithms and Implementation,\
    Second Edition,\
    Birkhaeuser, 2006,\
    ISBN13: 978-0-8176-4372-0,\
    LC: QA331.M866.
3.  Allan Sultan,\
    CORDIC: How Hand Calculators Calculate,\
    The College Mathematics Journal,\
    Volume 40, Number 2, March 2009, pages 87-92.
4.  Jack Volder,\
    The CORDIC Computing Technique,\
    IRE Transactions on Electronic Computers,\
    Volume 8, Number 3, pages 330-334, 1959.
5.  Jack Volder,\
    The Birth of CORDIC,\
    Journal of VLSI Signal Processing Systems,\
    Volume 25, Number 2, pages 101-105, June 2000.
6.  Anthony Williams,\
    Optimizing Math-Intensive Applications with Fixed-Point Arithmetic,\
    Dr Dobb's Journal,\
    Volume 33, Number 4, April 2008, pages 38-43.

### Source Code: {#source-code align="center"}

-   [cordic.cpp](cordic.cpp), the source code;
-   [cordic.hpp](cordic.hpp), the include file;

### Examples and Tests: {#examples-and-tests align="center"}

-   [cordic\_prb.cpp](cordic_prb.cpp), the calling program;
-   [cordic\_prb\_output.txt](cordic_prb_output.txt), the sample output.

### List of Routines: {#list-of-routines align="center"}

-   **ANGLE\_SHIFT** shifts angle ALPHA to lie between BETA and
    BETA+2PI.
-   **ARCCOS\_CORDIC** returns the arccosine of an angle using the
    CORDIC method.
-   **ARCCOS\_VALUES** returns some values of the arc cosine function.
-   **ARCSIN\_CORDIC** returns the arcsine of an angle using the CORDIC
    method.
-   **ARCSIN\_VALUES** returns some values of the arc sine function.
-   **ARCTAN\_CORDIC** returns the arctangent of an angle using the
    CORDIC method.
-   **ARCTAN\_VALUES** returns some values of the arc tangent function.
-   **CBRT\_CORDIC** returns the cube root of a value using the CORDIC
    method.
-   **CBRT\_VALUES** returns some values of the cube root function.
-   **COS\_VALUES** returns some values of the cosine function.
-   **COSSIN\_CORDIC** returns the sine and cosine of an angle by the
    CORDIC method.
-   **EXP\_CORDIC** evaluates the exponential function using the CORDIC
    method.
-   **EXP\_VALUES** returns some values of the exponential function.
-   **I4\_HUGE** returns a "huge" I4.
-   **I4\_MIN** returns the minimum of two I4's.
-   **LN\_CORDIC** evaluates the natural logarithm using the CORDIC
    method.
-   **LN\_VALUES** returns some values of the natural logarithm
    function.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **SIN\_VALUES** returns some values of the sine function.
-   **SQRT\_CORDIC** returns the square root of a value using the CORDIC
    method.
-   **SQRT\_VALUES** returns some values of the square root function.
-   **TAN\_CORDIC** returns the tangent of an angle using the CORDIC
    method.
-   **TAN\_VALUES** returns some values of the tangent function.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last modified on 23 June 2007.*
