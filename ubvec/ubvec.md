UBVEC\
Unsigned Binary Vectors {#ubvec-unsigned-binary-vectors align="center"}
=======================

------------------------------------------------------------------------

**UBVEC** is a C++ library which demonstrates how unsigned binary
vectors, strings of 0's and 1's, can represent nonnegative integers or
subsets or other mathematical objects, for which various arithmetic and
logical operations can be defined.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**UBVEC** is available in [a C version](../../c_src/ubvec/ubvec.html)
and [a C++ version](../../cpp_src/ubvec/ubvec.html) and [a FORTRAN90
version](../../f_src/ubvec/ubvec.html) and [a MATLAB
version](../../m_src/ubvec/ubvec.html) and [a Python
version](../../py_src/ubvec/ubvec.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BVEC](../../cpp_src/bvec/bvec.html), a C++ library which demonstrates
how signed integers can be stored as binary vectors, and arithmetic can
be performed on them.

[SUBSET](../../cpp_src/subset/subset.html), a C++ library which
enumerates, generates, randomizes, ranks and unranks combinatorial
objects including combinations, compositions, Gray codes, index sets,
partitions, permutations, polynomials, subsets, and Young tables.
Backtracking routines are included to solve some combinatorial problems.

### Source Code: {#source-code align="center"}

-   [ubvec.cpp](ubvec.cpp), the source code.
-   [ubvec.hpp](ubvec.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [ubvec\_prb.cpp](ubvec_prb.cpp), a sample calling program.
-   [ubvec\_prb\_output.txt](ubvec_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **I4\_CHOOSE** computes the binomial coefficient C(N,K) as an I4.
-   **I4\_UNIFORM\_AB** returns a scaled pseudorandom I4 between A
    and B.
-   **KSUBSET\_COLEX\_UNRANK** computes the K subset of given colex
    rank.
-   **MORSE\_THUE** generates a Morse\_Thue number.
-   **NIM\_SUM** computes the Nim sum of two integers.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **UBVEC\_ADD** adds two unsigned binary vectors.
-   **UBVEC\_AND** computes the AND of two unsigned binary vectors.
-   **UBVEC\_CHECK** checks an unsigned binary vector.
-   **UBVEC\_COMPLEMENT1** computes the one's complement of an unsigned
    binary vector.
-   **UBVEC\_ENUM** enumerates the unsigned binary vectors of length N.
-   **UBVEC\_NEXT** generates the next UBVEC.
-   **UBVEC\_NEXT\_GRAY** computes the next UBVEC in the Gray code.
-   **UBVEC\_NEXT\_GRLEX** generates the next UBVEC in GRLEX order.
-   **UBVEC\_OR** computes the OR of two unsigned binary vectors.
-   **UBVEC\_PRINT** prints a UBVEC, with an optional title.
-   **UBVEC\_RANDOM** returns a pseudorandom BVEC.
-   **UBVEC\_RANK\_GRAY** ranks a UBVEC according to the Gray ordering.
-   **UBVEC\_REVERSE** reverses a UBVEC.
-   **UBVEC\_TO\_UI4** makes an unsigned integer from an unsigned binary
    vector.
-   **UBVEC\_UNRANK\_GRAY** unranks a UBVEC.
-   **UBVEC\_UNRANK\_GRLEX** unranks a UBVEC using the GRLEX ordering.
-   **UBVEC\_XOR** computes the exclusive OR of two unsigned binary
    vectors.
-   **UI4\_RANK\_GRAY** ranks a Gray code.
-   **UI4\_TO\_UBVEC** makes an unsigned binary vector from an unsigned
    integer.
-   **UI4\_UNRANK\_GRAY** unranks a Gray code.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 02 December 2015.*
