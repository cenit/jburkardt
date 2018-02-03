BVEC\
Binary Vector Representation of Signed Integers {#bvec-binary-vector-representation-of-signed-integers align="center"}
===============================================

------------------------------------------------------------------------

**BVEC** is a C++ library which demonstrates how signed integers can be
stored as binary vectors, and arithmetic can be performed on them.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**BVEC** is available in [a C version](../../c_src/bvec/bvec.md) and
[a C++ version](../../master/bvec/bvec.md) and [a FORTRAN77
version](../../f77_src/bvec/bvec.md) and [a FORTRAN90
version](../../f_src/bvec/bvec.md) and [a MATLAB
version](../../m_src/bvec/bvec.md) and [a Python
version](../../py_src/bvec/bvec.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[UBVEC](../../master/ubvec/ubvec.md), a C++ library which
demonstrates how unsigned binary vectors, strings of 0's and 1's, can
represent nonnegative integers or subsets or other mathematical objects,
for which various arithmetic and logical operations can be defined.

### Source Code: {#source-code align="center"}

-   [bvec.cpp](bvec.cpp), the source code.
-   [bvec.hpp](bvec.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [bvec\_prb.cpp](bvec_prb.cpp), a sample calling program.
-   [bvec\_prb\_output.txt](bvec_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **BVEC\_ADD** adds two (signed) binary vectors.
-   **BVEC\_AND** computes the AND of two binary vectors.
-   **BVEC\_CHECK** checks a binary vector.
-   **BVEC\_COMPLEMENT2** computes the two's complement of a binary
    vector.
-   **BVEC\_MUL** computes the product of two binary vectors.
-   **BVEC\_NEXT** generates the next BVEC.
-   **BVEC\_NOT** "negates" or takes the 1's complement of a binary
    vector.
-   **BVEC\_OR** computes the inclusive OR of two binary vectors.
-   **BVEC\_PRINT** prints a BVEC, with an optional title.
-   **BVEC\_REVERSE** reverses a binary vector.
-   **BVEC\_SUB** subtracts two binary vectors.
-   **BVEC\_TO\_I4** makes an integer from a (signed) binary vector.
-   **BVEC\_UNIFORM** returns a pseudorandom BVEC.
-   **BVEC\_XOR** computes the exclusive OR of two binary vectors.
-   **I4\_TO\_BVEC** makes a signed binary vector from an I4.
-   **I4\_UNIFORM\_AB** returns a scaled pseudorandom I4.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 30 December 2014.*
