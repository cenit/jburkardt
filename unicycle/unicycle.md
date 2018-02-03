UNICYCLE\
Permutations with a Single Cycle {#unicycle-permutations-with-a-single-cycle align="center"}
================================

------------------------------------------------------------------------

**UNICYCLE** is a C++ library which carries out some operations on
permutations with a single cycle.

A permutation with a single cycle is a permutation P of N objects with
the property that, for every object, it takes exactly N applications of
P to restore an object to its original value.

Another way to think of this is that a permutation with a single cycle
can be symbolized by a bracelet with N beads; the action of the
permutation is to rotate the bracelet one position.

A permutation with a single cycle can be written in "sequence" form.
Assuming the objects are labeled 1 through N, we start with 1, followed
by P(1), followed by P(P(1)), and so on. Thus, the sequence (1,4,2,5,3)
indicates the permutation which maps 1-&gt;4, 2-&gt;5, 3-&gt;1, 4-&gt;2,
and 5-&gt;3.

A permutation with a single cycle is sometimes called a "cyclic
permutation", but this term is also used with other meanings. Hence, we
will affectionately call these objects "unicycles".

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**UNICYCLE** is available in [a C
version](../../c_src/unicycle/unicycle.html) and [a C++
version](../../cpp_src/unicycle/unicycle.html) and [a FORTRAN77
version](../../f77_src/unicycle/unicycle.html) and [a FORTRAN90
version](../../f_src/unicycle/unicycle.html) and [a MATLAB
version](../../m_src/unicycle/unicycle.html) and [a Python
version](../../py_src/unicycle/unicycle.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[COMBO](../../cpp_src/combo/combo.html), a C++ library which includes
many combinatorial routines.

[SUBSET](../../cpp_src/subset/subset.html), a C++ library which
generates, ranks and unranks various combinatorial objects.

### Source Code: {#source-code align="center"}

-   [unicycle.cpp](unicycle.cpp), the source code.
-   [unicycle.hpp](unicycle.hpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [unicycle\_prb.cpp](unicycle_prb.cpp), a sample calling program.
-   [unicycle\_prb\_output.txt](unicycle_prb_output.txt), the output
    file.

### List of Routines: {#list-of-routines align="center"}

-   **I4\_FACTORIAL** computes the factorial of N.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_MODP** returns the nonnegative remainder of I4 division.
-   **I4\_UNIFORM** returns a scaled pseudorandom I4.
-   **I4\_WRAP** forces an I4 to lie between given limits by wrapping.
-   **I4VEC\_INDICATOR** sets an I4VEC to the indicator vector.
-   **I4VEC\_INDICATOR\_NEW** sets an I4VEC to the indicator vector.
-   **I4VEC\_REVERSE** reverses the elements of an I4VEC.
-   **PERM\_CHECK** checks a representation of a permutation.
-   **PERM\_ENUM** enumerates the permutations on N digits.
-   **PERM\_INVERSE** computes the inverse of a permutation.
-   **PERM\_IS\_UNICYCLE** is TRUE if a permutation is a unicycle.
-   **PERM\_LEX\_NEXT** computes the lexicographic permutation
    successor.
-   **PERM\_LEX\_RANK** computes the lexicographic rank of a
    permutation.
-   **PERM\_LEX\_UNRANK** computes the permutation of given
    lexicographic rank.
-   **PERM\_PRINT** prints a permutation.
-   **PERM\_RANDOM** selects a random permutation of N objects.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **UNICYCLE\_CHECK** checks that a vector represents a unicycle.
-   **UNICYCLE\_ENUM** enumerates the unicycles.
-   **UNICYCLE\_INDEX** returns the index form of a unicycle.
-   **UNICYCLE\_INDEX\_PRINT** prints a unicycle given in index form.
-   **UNICYCLE\_INDEX\_TO\_SEQUENCE** converts a unicycle from index to
    sequence form.
-   **UNICYCLE\_INVERSE** returns the inverse of a unicycle.
-   **UNICYCLE\_NEXT** generates unicycles in lexical order, one at a
    time.
-   **UNICYCLE\_PRINT** prints a unicycle given in sequence form.
-   **UNICYCLE\_RANDOM** selects a random unicycle of N objects.
-   **UNICYCLE\_RANK** computes the rank of a unicycle.
-   **UNICYCLE\_UNRANK** "unranks" a unicycle.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 16 June 2012.*
