SET\_THEORY\
An Implementation of Set Theoretic Operations {#set_theory-an-implementation-of-set-theoretic-operations align="center"}
=============================================

------------------------------------------------------------------------

**SET\_THEORY** is a C++ library which implements some of the operations
of set theory.

We assume that a set is represented by a strictly ascending sequence of
positive integers. We might think of a universal set U = 1 : N in cases
where all our subsets will have elements between 1 and N.

Set theoretic operations include:

-   *definition* using a numeric property: A = **find** ( mod ( U, 3 ) =
    1 );
-   *definition* using an explicit list: A = **\[** 1, 3, 8**\]**;
-   *unique*: creating a set from the unique elements of a list: A =
    **unique** ( \[ 1, 3, 8, 3, 3, 1, 7, 3, 1, 1 \] );
-   *union*: C = **union** ( A, B );
-   *intersection*: C = **intersect** ( A, B );
-   *symmetric difference*: C = **setxor** ( A, B );
-   *complement* with respect to the universal set: B = **setdiff** ( U,
    A );
-   *complement* with respect to another set: C = **setdiff** ( B, A );
-   *cardinality*: n = **length** ( A );
-   *membership*: true/false = **ismember** ( a, A );
-   *subset*: true/false = **ismember** ( B, A );
-   *addition of one element*: A = **unique** ( \[ A; a \] );
-   *deletion of one element*: A = **setxor** ( A, a );
-   *indexing one element*: i = **find** ( A == a );

Although sets are traditionally allowed to contain arbitrary elements,
it is computationally convenient to assume that our sets are simply
subsets of the integers from 1 to N.

If N is no greater than 32, we can represent a set using a 32 bit
integer. We term this the **B4SET** representation. It is compact, but
as it stands, is limited to a universal set of no more than 32 elements.

Assuming we can regard the integer as an unsigned quantity, each bit of
the binary representation of the integer represents the presence (1) or
absence (0) of the corresponding integer in the set. Thus, assuming N is
5, the set { 1, 2, 5} corresponds to the binary representation 10011 and
hence to the integer 19. In order to read or write the individual bits
of an integer, the functions BTEST, IBCLR and IBSET are useful in this
case.

A more flexible, but less efficient, representation of sets uses a
logical vector, and is called the **LSET** representation. Assuming we
have a universal set of N elements, any set is represented by a logical
vector of N elements, the I-th element of which is TRUE if I is an
element of the set.

A representation that can be more efficient for small subsets of a large
universal set is the **I4SET**. In this representation, we simply list,
in ascending order, the elements of the set. The representation is
simple, but manipulation is more involved. For instance, to create the
union of two sets, we must determine the number of unique elements in
the two component sets, allocate the necessary space, then interleave
the elements of the two components appropriately.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SET\_THEORY** is available in [a C
version](../../c_src/set_theory/set_theory.html) and [a C++
version](../../cpp_src/set_theory/set_theory.html) and [a FORTRAN77
version](../../f77_src/set_theory/set_theory.html) and [a FORTRAN90
version](../../f_src/set_theory/set_theory.html) and [a MATLAB
version](../../m_src/set_theory/set_theory.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[COMBO](../../cpp_src/combo/combo.html), a C++ library which handles
combinatorial problems, by Kreher and Stinson;

[SUBSET](../../cpp_src/subset/subset.html), a C++ library which ranks,
unranks, and generates random subsets, combinations, permutations, and
so on;

### Reference: {#reference align="center"}

1.  Charles Pinter,\
    Set Theory,\
    Addison-Wesley, 1971,\
    LC: QA248.P55.

### Source Code: {#source-code align="center"}

-   [set\_theory.cpp](set_theory.cpp), the source code.
-   [set\_theory.hpp](set_theory.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [set\_theory\_prb.cpp](set_theory_prb.cpp), a sample calling
    program.
-   [set\_theory\_prb\_output.txt](set_theory_prb_output.txt), the
    output file.

### List of Routines: {#list-of-routines align="center"}

-   **B4SET\_COLEX\_RANK** computes the colexicographic rank of a B4SET.
-   **B4SET\_COLEX\_SUCCESSOR** computes the colexicographic successor
    of a B4SET.
-   **B4SET\_COLEX\_UNRANK** computes the B4SET of given colexicographic
    rank.
-   **B4SET\_COMPLEMENT** computes the complement of a B4SET.
-   **B4SET\_COMPLEMENT\_RELATIVE** computes the relative complement of
    a B4SET.
-   **B4SET\_DELETE** deletes an element from a B4SET.
-   **B4SET\_DISTANCE** computes the Hamming distance between two
    B4SET's.
-   **B4SET\_ENUM** enumerates the B4SET's.
-   **B4SET\_INDEX** returns the index of an element of a B4SET.
-   **B4SET\_INSERT** inserts an item into a B4SET.
-   **B4SET\_INTERSECT** computes the intersection of two B4SET's.
-   **B4SET\_IS\_EMPTY** determines if a B4SET is empty.
-   **B4SET\_IS\_EQUAL** determines if two B4SET's are equal.
-   **B4SET\_IS\_MEMBER** determines if an item is a member of a B4SET.
-   **B4SET\_IS\_SUBSET** determines if one B4SET is a subset of
    another.
-   **B4SET\_LEX\_RANK** computes the lexicographic rank of a B4SET.
-   **B4SET\_LEX\_SUCCESSOR** computes the lexicographic successor of a
    B4SET.
-   **B4SET\_LEX\_UNRANK** computes the B4SET of given lexicographic
    rank.
-   **B4SET\_RANDOM** sets a rondom B4SET.
-   **B4SET\_TO\_LSET** converts a B4SET to an LSET.
-   **B4SET\_TRANSPOSE\_PRINT** prints a B4SET "transposed".
-   **B4SET\_UNION** computes the union of two B4SET's.
-   **B4SET\_WEIGHT** computes the Hamming weight of a B4SET.
-   **B4SET\_XOR** computes the symmetric difference of two B4SET's.
-   **DIGIT\_TO\_CH** returns the base 10 digit character corresponding
    to a digit.
-   **I4\_BCLR** clears a bit of an I4.
-   **I4\_BSET** sets a bit of an I4.
-   **I4\_BTEST** returns a bit of an I4.
-   **I4\_LOG\_10** returns the integer part of the logarithm base 10 of
    an I4.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_POWER** returns the value of I\^J.
-   **I4\_TO\_S** converts an I4 to a string.
-   **I4\_WIDTH** returns the "width" of an I4.
-   **I4\_XOR** xor's a bit of an I4.
-   **I4VEC\_TO\_B4SET** converts an I4VEC to a B4SET.
-   **I4VEC\_TO\_LSET** converts an I4VEC to an LSET.
-   **I4VEC\_UNIFORM\_NEW** returns a scaled pseudorandom I4VEC.
-   **LSET\_COLEX\_RANK** computes the colexicographic rank of an LSET.
-   **LSET\_COLEX\_SUCCESSOR** computes the colexicographic successor of
    an LSET.
-   **LSET\_COLEX\_UNRANK** computes the LSET of given colexicographic
    rank.
-   **LSET\_COMPLEMENT** computes the complement of an LSET.
-   **LSET\_COMPLEMENT\_RELATIVE** computes the relative complement of
    an LSET.
-   **LSET\_DELETE** deletes an element from an LSET.
-   **LSET\_DISTANCE** computes the Hamming distance between two LSET's.
-   **LSET\_ENUM** enumerates the LSET's.
-   **LSET\_INDEX** returns the index of an element of an LSET.
-   **LSET\_INSERT** inserts an item into an LSET.
-   **LSET\_INTERSECT** computes the intersection of two LSET's.
-   **LSET\_IS\_EMPTY** determines if an LSET is empty.
-   **LSET\_IS\_EQUAL** determines if two LSET's are equal.
-   **LSET\_IS\_MEMBER** determines if an item is a member of an LSET.
-   **LSET\_IS\_SUBSET** determines if one LSET is a subset of another.
-   **LSET\_LEX\_RANK** computes the lexicographic rank of an LSET.
-   **LSET\_LEX\_SUCCESSOR** computes the lexicographic successor of an
    LSET.
-   **LSET\_LEX\_UNRANK** computes the LSET of given lexicographic rank.
-   **LSET\_RANDOM** sets a rondom LSET.
-   **LSET\_TO\_B4SET** converts an I4VEC to a B4SET.
-   **LSET\_TRANSPOSE\_PRINT** prints an LSET "transposed".
-   **LSET\_UNION** computes the union of two LSET's.
-   **LSET\_WEIGHT** computes the Hamming weight of an LSET.
-   **LSET\_XOR** computes the symmetric difference of two LSET's.
-   **LVEC\_TRANSPOSE\_PRINT** prints an LVEC "transposed".
-   **R4\_NINT** returns the nearest integer to an R4.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 20 September 2011.*
