FILON\
Quadrature for Oscillatory Integrands {#filon-quadrature-for-oscillatory-integrands align="center"}
=====================================

------------------------------------------------------------------------

**FILON** is a C++ library which can approximate integrals in which the
integrand includes an oscillatory factor of sin(k\*x) or cos(k\*x).

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FILON** is available in [a C version](../../c_src/filon/filon.html)
and [a C++ version](../../cpp_src/filon/filon.html) and [a FORTRAN77
version](../../f77_src/filon/filon.html) and [a FORTRAN90
version](../../f_src/filon/filon.html) and [a MATLAB
version](../../m_src/filon/filon.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[QUADRULE](../../cpp_src/quadrule/quadrule.html), a C++ library which
defines quadrature rules for 1D domains.

### Reference: {#reference align="center"}

1.  Stephen Chase, Lloyd Fosdick,\
    An Algorithm for Filon Quadrature,\
    Communications of the Association for Computing Machinery,\
    Volume 12, Number 8, August 1969, pages 453-457.
2.  Stephen Chase, Lloyd Fosdick,\
    Algorithm 353: Filon Quadrature,\
    Communications of the Association for Computing Machinery,\
    Volume 12, Number 8, August 1969, pages 457-458.
3.  Bo Einarsson,\
    Algorithm 418: Calculation of Fourier Integrals,\
    Communications of the ACM,\
    Volume 15, Number 1, January 1972, pages 47-48.

### Source Code: {#source-code align="center"}

-   [filon.cpp](filon.cpp), the source code.
-   [filon.hpp](filon.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [filon\_prb.cpp](filon_prb.cpp), a sample calling program.
-   [filon\_prb\_output.txt](filon_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **FILON\_FUN\_COS** uses Filon's method on integrals with a cosine
    factor.
-   **FILON\_TAB\_COS** uses Filon's method on integrals with a cosine
    factor.
-   **FILON\_FUN\_SIN** uses Filon's method on integrals with a sine
    factor.
-   **FILON\_TAB\_SIN** uses Filon's method on integrals with a sine
    factor.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 20 May 2014.*
