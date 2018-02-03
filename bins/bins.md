BINS\
Order, Sort and Search Data using Bins {#bins-order-sort-and-search-data-using-bins align="center"}
======================================

------------------------------------------------------------------------

**BINS** is a C++ library which sorts data into order, or lumps it into
bins, or selects an item of particular rank, or finds the unique
elements in a list.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**BINS** is available in [a C++ version](../../master/bins/bins.md)
and [a FORTRAN77 version](../../f77_src/bins/bins.md) and [a FORTRAN90
version](../../f_src/bins/bins.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[SUBPAK](../../master/subpak/subpak.md), a C++ library which contains
many routines for sorting and searching data.

### Reference: {#reference align="center"}

1.  Jon Bentley, Bruce Weide, Andrew Yao,\
    Optimal Expected Time Algorithms for Closest Point Problems,\
    ACM Transactions on Mathematical Software,\
    Volume 6, Number 4, December 1980, pages 563-580.
2.  Thomas Cormen, Charles Leiserson, Ronald Rivest,\
    Introduction to Algorithms,\
    MIT Press, 2001,\
    ISBN: 0262032937.
3.  Barry Joe,\
    GEOMPACK - a software package for the generation of meshes using
    geometric algorithms,\
    Advances in Engineering Software,\
    Volume 13, 1991, pages 325-331.
4.  Albert Nijenhuis, Herbert Wilf,\
    Combinatorial Algorithms for Computers and Calculators,\
    Second Edition,\
    Academic Press, 1978,\
    ISBN: 0-12-519260-6,\
    LC: QA164.N54.

### Source Code: {#source-code align="center"}

-   [bins.cpp](bins.cpp), the source code.
-   [bins.hpp](bins.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [bins\_prb.cpp](bins_prb.cpp), a sample calling program.
-   [bins\_prb\_output.txt](bins_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **BIN\_SEARCH\_ONE\_2D** searches one cell in a 2D array of bins.
-   **BIN\_TO\_R8\_EVEN** returns the limits for a given "bin" in
    \[A,B\].
-   **BIN\_TO\_R8\_EVEN2** returns the limits for a given "bin" in
    \[A,B\].
-   **BIN\_TO\_R82\_EVEN2** returns the limits for a given R82 "bin" in
    \[A,B\].
-   **BIN\_TO\_R82\_EVEN3** returns the limits for a given R82 "bin" in
    \[A,B\].
-   **BIN\_TO\_R83\_EVEN2** returns the limits for a given R83 "bin" in
    \[A,B\].
-   **BIN\_TO\_R83\_EVEN3** returns the limits for a given R83 "bin" in
    \[A,B\].
-   **GET\_SEED** returns a random seed for the random number generator.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MAX** returns the smaller of two I4's.
-   **I4\_MODP** returns the nonnegative remainder of I4 division.
-   **I4\_SIGN** returns the sign of an I4.
-   **I4\_SWAP** switches two I4's.
-   **I4\_UNIFORM** returns a scaled pseudorandom I4.
-   **I4\_WRAP** forces an I4 to lie between given limits by wrapping.
-   **I4MAT\_PRINT** prints an I4MAT, with an optional title.
-   **I4MAT\_PRINT\_SOME** prints some of an I4MAT.
-   **I4MAT\_TRANSPOSE\_PRINT** prints an I4MAT, transposed.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an I4MAT,
    transposed.
-   **I4VEC\_HEAP\_D** reorders an I4VEC into a descending heap.
-   **I4VEC\_INDICATOR** sets an I4VEC to the indicator vector.
-   **I4VEC\_PRINT** prints an I4VEC.
-   **I4VEC\_SORT\_HEAP\_A** ascending sorts an I4VEC using heap sort.
-   **I4VEC\_SORTED\_UNIQUE** finds unique elements in a sorted I4VEC.
-   **I4VEC2\_COMPARE** compares pairs of integers stored in two I4VECs.
-   **I4VEC2\_SORT\_A** ascending sorts a vector of pairs of integers.
-   **I4VEC2\_SORTED\_UNIQUE** finds unique elements in a sorted I4VEC2.
-   **INDEX\_BOX2\_NEXT\_2D** produces indices on the surface of a box
    in 2D.
-   **INDEX\_BOX2\_NEXT\_3D** produces indices on the surface of a box
    in 3D.
-   **PERM\_CHECK** checks that a vector represents a permutation.
-   **PERM\_INV** inverts a permutation "in place".
-   **POINTS\_NEAREST\_POINT\_NAIVE\_2D** finds the nearest point to a
    given point in 2D.
-   **POINTS\_NEAREST\_POINT\_NAIVE\_3D** finds the nearest point to a
    given point in 3D.
-   **POINTS\_NEAREST\_POINT\_NAIVE\_ND** finds the nearest point to a
    given point in ND.
-   **POINTS\_NEAREST\_POINTS\_NAIVE\_2D** finds the nearest point to
    given points in 2D.
-   **POINTS\_NEAREST\_POINTS\_NAIVE\_3D** finds the nearest point to
    given points in 3D.
-   **R4\_NINT** returns the nearest integer to an R4.
-   **R8\_HUGE** returns a "huge" R8 value.
-   **R8\_TO\_BIN\_EVEN** determines the appropriate "bin" for C in
    \[A,B\].
-   **R8\_TO\_BIN\_EVEN2** determines the appropriate "bin" for C in
    \[A,B\].
-   **R8\_UNIFORM** returns a scaled pseudorandom R8.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **R82\_TO\_BIN\_EVEN2** determines the appropriate "bin" for an R82
    value.
-   **R82\_TO\_BIN\_EVEN3** determines the appropriate "bin" for an R82
    value.
-   **R82\_UNIFORM** returns a random R82 value in a given range.
-   **R82VEC\_PART\_QUICK\_A** reorders an R82 vector as part of a quick
    sort.
-   **R82VEC\_PERMUTE** permutes an R82VEC in place.
-   **R82VEC\_PRINT** prints an R82VEC.
-   **R82VEC\_SORT\_HEAP\_INDEX\_A** does an indexed heap ascending sort
    of an R82VEC.
-   **R82VEC\_SORT\_QUICK\_A** ascending sorts an R82VEC using quick
    sort.
-   **R82VEC\_UNIFORM** returns a random R82VEC in a given range.
-   **R83\_TO\_BIN\_EVEN2** determines the appropriate "bin" for an R83.
-   **R83\_TO\_BIN\_EVEN3** determines the appropriate "bin" for an R83.
-   **R83VEC\_PART\_QUICK\_A** reorders an R83VEC as part of a quick
    sort.
-   **R83VEC\_SORT\_QUICK\_A** ascending sorts an R83VEC using quick
    sort.
-   **R83VEC\_UNIFORM** returns a random R83VEC in a given range.
-   **R8MAT\_PRINT** prints an R8MAT, with an optional title.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8MAT\_TRANSPOSE\_PRINT** prints an R8MAT, transposed.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **R8VEC\_BRACKET** searches a sorted array for successive brackets
    of a value.
-   **R8VEC\_EQ** is true if every pair of entries in two vectors is
    equal.
-   **R8VEC\_GT** == ( A1 &gt; A2 ) for real vectors.
-   **R8VEC\_LT** == ( A1 &lt; A2 ) for real vectors.
-   **R8VEC\_PRINT** prints a R8VEC.
-   **R8VEC\_SWAP** swaps the entries of two R8VEC's.
-   **R8VEC\_UNIFORM** fills an R8VEC with scaled pseudorandom values.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **SORT\_HEAP\_EXTERNAL** externally sorts a list of items into
    ascending order.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TUPLE\_NEXT2** computes the next element of an integer tuple
    space.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 28 January 2011.*
