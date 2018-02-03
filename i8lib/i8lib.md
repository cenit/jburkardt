I8LIB\
A Double Precision Integer Arithmetic Utility Library {#i8lib-a-double-precision-integer-arithmetic-utility-library align="center"}
=====================================================

------------------------------------------------------------------------

**I8LIB** is a C++ library which contains a number of utility routines
for "I8" or "double precision integer" arithmetic.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**I8LIB** is available in [a C version](../../c_src/i8lib/i8lib.md)
and [a C++ version](../../master/i8lib/i8lib.md) and [a FORTRAN77
version](../../f77_src/i8lib/i8lib.md) and [a FORTRAN90
version](../../f_src/i8lib/i8lib.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[C4LIB](../../master/c4lib/c4lib.md), a C++ library which implements
certain elementary functions for "C4" or single precision complex
variables;

[C8LIB](../../master/c8lib/c8lib.md), a C++ library which implements
certain elementary functions for "C8" or double precision complex
variables;

[I4LIB](../../master/i4lib/i4lib.md), a C++ library which contains
many utility routines, using "I4" or "single precision integer"
arithmetic.

[L4LIB](../../master/l4lib/l4lib.md), a C++ library which contains
many utility routines, using one byte logical (L4) variables.

[R4LIB](../../master/r4lib/r4lib.md), a C++ library which contains
many utility routines, using "R4" or "single precision real" arithmetic.

[R8LIB](../../master/r8lib/r8lib.md), a C++ library which contains
many utility routines, using "R8" or "double precision real" arithmetic.

### Source Code: {#source-code align="center"}

-   [i8lib.cpp](i8lib.cpp), the source code;
-   [i8lib.hpp](i8lib.hpp), the include file;

### Examples and Tests: {#examples-and-tests align="center"}

-   [i8lib\_prb.cpp](i8lib_prb.cpp), a sample calling program;
-   [i8lib\_prb\_output.txt](i8lib_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **I8\_CHOOSE** computes the binomial coefficient C(N,K) as an I8.
-   **I8\_HUGE** returns a "huge" I8.
-   **I8\_MAX** returns the maximum of two I8's.
-   **I8\_MIN** returns the smaller of two I8's.
-   **I8\_POWER** returns the value of I\^J.
-   **I8\_REVERSE\_BYTES** reverses the bytes in an I8.
-   **I8\_XOR** calculates the exclusive OR of two I8's.
-   **R8I8\_UNIFORM** returns a scaled pseudorandom R8 using an I8 seed.
-   **R8I8\_UNIFORM\_01** returns a unit pseudorandom R8 using an I8
    seed.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 27 June 2010.*
