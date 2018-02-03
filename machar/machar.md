MACHAR\
Dynamically Compute Machine Constants {#machar-dynamically-compute-machine-constants align="center"}
=====================================

------------------------------------------------------------------------

**MACHAR** is a C++ library which dynamically computes constants that
characterize the floating point arithmetic system on a computer, by
William Cody.

This includes the value of the "machine epsilon", the smallest number
that can be added to 1 and make a difference. However, it includes many
other quantities of interest, including the arithmetic base, the largest
and smallest magnitudes, and so on.

The FORTRAN77 version of these routines was supplied as part of ACM TOMS
algorithm 665.

A C version of these routines was supplied as part of ACM TOMS algorithm
722.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**MACHAR** is available in [a C version](../../c_src/machar/machar.html)
and [a C++ version](../../cpp_src/machar/machar.html) and [a FORTRAN77
version](../../f77_src/machar/machar.html) and [a FORTRAN90
version](../../f_src/machar/machar.html) and [a MATLAB
version](../../m_src/machar/machar.html) and [a Python
version](../../py_src/machar/machar.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[MACHINE](../../cpp_src/machine/machine.html), a C++ library which
stores the appropriate values of machine constants for a given machine.

### Author: {#author align="center"}

Original FORTRAN77 version by William Cody. C++ version by John
Burkardt.

### Reference: {#reference align="center"}

1.  William Cody,\
    Algorithm 665: MACHAR, a subroutine to dynamically determine machine
    parameters,\
    ACM Transactions on Mathematical Software,\
    Volume 14, Number 4, December 1988, pages 303-311.
2.  William Cody, William Waite,\
    Software Manual for the Elementary Functions,\
    Prentice Hall, 1980,\
    ISBN: 0138220646,\
    LC: QA331.C635.
3.  Morven Gentleman, Scott Marovich,\
    More on Algorithms that Reveal Properties of Floating Point
    Arithmetic Units,\
    Communications of the ACM,\
    Volume 17, Number 5, May 1974, pages 276-277.
4.  Michael Malcolm,\
    Algorithms to Reveal Properties of Floating Point Arithmetic,\
    Communications of the ACM,\
    Volume 15, Number 11, November 1972, pages 949-951.

### Source Code: {#source-code align="center"}

-   [machar.cpp](machar.cpp), the source code.
-   [machar.hpp](machar.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [machar\_prb.cpp](machar_prb.cpp), a sample problem.
-   [machar\_prb\_output.txt](machar_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **R4\_ABS** returns the absolute value of an R4.
-   **R4\_MACHAR** computes machine constants for floating point
    arithmetic.
-   **R8\_ABS** returns the absolute value of a double precision number.
-   **R8\_MACHAR** computes machine constants for double floating point
    arithmetic.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 11 November 2006.*
