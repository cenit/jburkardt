L4LIB\
A Utility Library for Logical Variables {#l4lib-a-utility-library-for-logical-variables align="center"}
=======================================

------------------------------------------------------------------------

**L4LIB** is a C++ library which contains many utility routines for "L4"
or "one byte logical" arithmetic.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**L4LIB** is available in [a C version](../../c_src/l4lib/l4lib.md)
and [a C++ version](../../master/l4lib/l4lib.md) and [a FORTRAN90
version](../../f_src/l4lib/l4lib.md) and [a MATLAB
version](../../m_src/l4lib/l4lib.md) and [a Python
version](../../py_src/l4lib/l4lib.md).

### Related Programs: {#related-programs align="center"}

[C4LIB](../../master/c4lib/c4lib.md), a C++ library which implements
certain elementary functions for single precision complex (C4)
variables.

[C8LIB](../../master/c8lib/c8lib.md), a C++ library which implements
certain elementary functions for "C8" or double precision complex
variables;

[I4LIB](../../master/i4lib/i4lib.md), a C++ library which contains
many utility routines, using "I4" or "4 byte integer" arithmetic.

[I8LIB](../../master/i8lib/i8lib.md), a C++ library which contains
many utility routines, using "I8" or "8 byte integer" arithmetic.

[R4LIB](../../cppsrc/r4lib/r4lib.md), a C++ library which contains
many utility routines, using "R4" or "single precision real" arithmetic.

[R8LIB](../../master/r8lib/r8lib.md), a C++ library which contains
many utility routines, using "R8" or "double precision real" arithmetic.

### Source Code: {#source-code align="center"}

-   [l4lib.cpp](l4lib.cpp), the source code.
-   [l4lib.hpp](l4lib.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [l4lib\_prb.cpp](l4lib_prb.cpp), a sample calling program.
-   [l4lib\_prb\_output.txt](l4lib_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_TO\_L4** converts an I4 to a logical value.
-   **L4\_TO\_I4** converts an L4 to an I4.
-   **L4\_TO\_S** converts an L4 to a string.
-   **L4\_UNIFORM** returns a pseudorandom L.
-   **L4\_XOR** returns the exclusive OR of two L4's.
-   **L4MAT\_PRINT** prints an L4MAT.
-   **L4MAT\_PRINT\_SOME** prints some of an L4MAT.
-   **L4MAT\_TRANSPOSE\_PRINT** prints an L4MAT, transposed.
-   **L4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an L4MAT,
    transposed.
-   **L4MAT\_UNIFORM** returns a pseudorandom L4MAT.
-   **L4MAT\_UNIFORM\_NEW** returns a new pseudorandom L4MAT.
-   **L4VEC\_NEXT** generates the next logical vector.
-   **L4VEC\_PRINT** prints an L4VEC.
-   **L4VEC\_UNIFORM\_NEW** returns a pseudorandom L4VEC.
-   **S\_TO\_L4** reads an L4 from a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 01 July 2016.*
