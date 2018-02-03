CONTINUED\_FRACTION\
Evaluation of Continued Fractions {#continued_fraction-evaluation-of-continued-fractions align="center"}
=================================

------------------------------------------------------------------------

**CONTINUED\_FRACTION** is a C++ library which implements some simple
algorithms for dealing with simple and generalized continued fractions.

Mathematically, continued fractions are infinite sums. In general, they
are treated computationally as finite sums. Here we will assume that all
such sums terminate at index N.

A simple continued fraction (SCF) is a representation of a number R as:

            R = A0 + 1 / ( A1 + 1 / ( A2 + 1 / ( A3 + ... + 1 / AN )...)))
          

A generalized continued fraction (GCF) is a representation of a number R
as:

            R = A0 + B1 / ( A1 + B2 / ( A2 + B3 / ( A3 + ... + BN / AN )...)))
          

For either form of continued fraction, there are two tasks:

1.  Given a value R, determine an N-term SCF or GCF which is equal to,
    or approximates, R.
2.  Given the coefficients of an SCF or GCF, determine the sequence of
    rational values represented by computing the partial sums. The final
    sum is the value R.

### Licensing: {#licensing align="center"}

I don't care what you do with this code.

### Languages: {#languages align="center"}

**CONTINUED\_FRACTION** is available in [a C
version](../../c_src/continued_fraction/continued_fraction.html) and [a
C++ version](../../cpp_src/continued_fraction/continued_fraction.html)
and [a FORTRAN90
version](../../f_src/continued_fraction/continued_fraction.html) and [a
MATLAB
version](../../m_src/continued_fraction/continued_fraction.html)..

### Related Software and Data: {#related-software-and-data align="center"}

[SUBSET](../../cpp_src/subset/subset.html), a C++ library which
enumerates, generates, randomizes, ranks and unranks combinatorial
objects including combinations, compositions, Gray codes, index sets,
partitions, permutations, polynomials, subsets, and Young tables.
Backtracking routines are included to solve some combinatorial problems.
Some routines for continued fractions are included.

### Reference: {#reference align="center"}

1.  Norman Richert,\
    Strang's Strange Figures,\
    American Mathematical Monthly,\
    Volume 99, Number 2, February 1992, pages 101-107.

### Source Code: {#source-code align="center"}

-   [continued\_fraction.cpp](continued_fraction.cpp), the source code.
-   [continued\_fraction.hpp](continued_fraction.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [continued\_fraction\_test.cpp](continued_fraction_test.cpp), a
    sample calling program.
-   [continued\_fraction\_test.txt](continued_fraction_test.txt), the
    output file.

### List of Routines: {#list-of-routines align="center"}

-   **I4CF\_EVALUATE** evaluates a continued fraction with I4 entries.
-   **I4CF\_EVALUATE\_TEST** tests I4CF\_EVALUATE.
-   **I4SCF\_EVALUATE** evaluates a simple continued fraction with I4
    entries.
-   **I4SCF\_EVALUATE\_TEST** tests I4SCF\_EVALUATE.
-   **I4VEC\_PRINT** prints an I4VEC.
-   **I8CF\_EVALUATE** evaluates a continued fraction with I8 entries.
-   **I8CF\_EVALUATE\_TEST** tests I8CF\_EVALUATE.
-   **I8SCF\_EVALUATE** evaluates a simple continued fraction with I8
    entries.
-   **I8SCF\_EVALUATE\_TEST** tests I8SCF\_EVALUATE.
-   **I8VEC\_PRINT** prints an I8VEC.
-   **R8\_TO\_I4SCF** approximates an R8 with an I4 simple continued
    fraction.
-   **R8\_TO\_I4SCF\_TEST** tests R8\_TO\_I4SCF.
-   **R8\_TO\_I8SCF** approximates an R8 with an I8 simple continued
    fraction.
-   **R8\_TO\_I8SCF\_EVALUATE\_TEST** tests R8\_TO\_I8SCF.
-   **R8CF\_EVALUATE** evaluates a continued fraction with R8 entries.
-   **R8CF\_EVALUATE\_TEST** tests R8CF\_EVALUATE.
-   **R8SCF\_EVALUATE** evaluates a simple continued fraction with R8
    entries.
-   **R8SCF\_EVALUATE\_TEST** tests R8SCF\_EVALUATE.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 07 August 2017.*
