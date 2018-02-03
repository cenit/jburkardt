I4LIB\
A Single Precision Integer Arithmetic Utility Library {#i4lib-a-single-precision-integer-arithmetic-utility-library align="center"}
=====================================================

------------------------------------------------------------------------

**I4LIB** is a C++ library which includes a number of utility routines
for "I4" or single precision integer arithmetic.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**I4LIB** is available in [a C version](../../c_src/i4lib/i4lib.md)
and [a C++ version](../../master/i4lib/i4lib.md) and [a FORTRAN77
version](../../f77_src/i4lib/i4lib.md) and [a FORTRAN90
version](../../f_src/i4lib/i4lib.md) and [a MATLAB
version](../../m_src/i4lib/i4lib.md) and [a Python
version](../../py_src/i4lib/i4lib.md).

### Related Programs: {#related-programs align="center"}

[C4LIB](../../master/c4lib/c4lib.md), a C++ library which implements
certain elementary functions for "C4" or single precision complex
variables;

[C8LIB](../../master/c8lib/c8lib.md), a C++ library which implements
certain elementary functions for "C8" or double precision complex
variables;

[I8LIB](../../master/i8lib/i8lib.md), a C++ library which contains
many utility routines, using "I8" or "double precision integer"
arithmetic.

[R4LIB](../../master/r4lib/r4lib.md), a C++ library which contains
many utility routines, using "R4" or "single precision real" arithmetic.

[R8LIB](../../master/r8lib/r8lib.md), a C++ library which contains
many utility routines, using "R8" or "double precision real" arithmetic.

[SUBPAK](../../master/subpak/subpak.md), a C++ library which contains
many utility routines;

### Reference: {#reference align="center"}

1.  Milton Abramowitz, Irene Stegun,\
    Handbook of Mathematical Functions,\
    National Bureau of Standards, 1964,\
    ISBN: 0-486-61272-4,\
    LC: QA47.A34.
2.  Thomas Cormen, Charles Leiserson, Ronald Rivest,\
    Introduction to Algorithms,\
    MIT Press, 2001,\
    ISBN: 0262032937,\
    LC: QA76.C662.
3.  Albert Nijenhuis, Herbert Wilf,\
    Combinatorial Algorithms for Computers and Calculators,\
    Second Edition,\
    Academic Press, 1978,\
    ISBN: 0-12-519260-6,\
    LC: QA164.N54.

### Source Code: {#source-code align="center"}

-   [i4lib.cpp](i4lib.cpp), the source code;
-   [i4lib.hpp](i4lib.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [i4lib\_prb.cpp](i4lib_prb.cpp), the calling program;
-   [i4lib\_prb\_output.txt](i4lib_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **I4\_ABS** returns the absolute value of an I4.
-   **I4\_BCLR** returns a copy of an I4 in which the POS-th bit is set
    to 0.
-   **I4\_BIT\_HI1** returns the position of the high 1 bit base 2 in an
    I4.
-   **I4\_BIT\_LO0** returns the position of the low 0 bit base 2 in an
    I4.
-   **I4\_BIT\_LO1** returns the position of the low 1 bit base 2 in an
    I4.
-   **I4\_BIT\_REVERSE** reverses the bits in an I4.
-   **I4\_BSET** returns a copy of an I4 in which the POS-th bit is set
    to 1.
-   **I4\_BTEST** returns TRUE if the POS-th bit of an I4 is 1.
-   **I4\_CEILING** rounds an R8 up to the next I4.
-   **I4\_CHARACTERISTIC** gives the characteristic for an I4.
-   **I4\_CHOOSE** computes the binomial coefficient C(N,K).
-   **I4\_DIV\_ROUNDED** computes the rounded result of I4 division.
-   **I4\_DIVISION** returns the result of integer division.
-   **I4\_DIVP** returns the smallest multiple of J greater than or
    equal to an I4.
-   **I4\_FACTORIAL** computes the factorial of N.
-   **I4\_FACTORIAL2** computes the double factorial function.
-   **I4\_FACTORIAL2\_VALUES** returns values of the double factorial
    function.
-   **I4\_FALL** computes the falling factorial function \[X\]\_N.
-   **I4\_FALL\_VALUES** returns values of the integer falling factorial
    function.
-   **I4\_FLOOR** rounds an R8 down to the nearest I4.
-   **I4\_FRACTION** computes a ratio and returns an integer result.
-   **I4\_GCD** finds the greatest common divisor of two I4's.
-   **I4\_GCDB** finds the greatest common divisor of the form K\*\*N of
    two I4's.
-   **I4\_HUGE** returns a "huge" I4.
-   **I4\_HUGE\_NORMALIZER** returns the "normalizer" for I4\_HUGE.
-   **I4\_IS\_EVEN** returns TRUE if an I4 is even.
-   **I4\_IS\_ODD** returns TRUE if an I4 is odd.
-   **I4\_IS\_POWER\_OF\_2** reports whether an I4 is a power of 2.
-   **I4\_IS\_PRIME** reports whether an I4 is prime.
-   **I4\_LCM** computes the least common multiple of two I4's.
-   **I4\_LOG\_10** returns the integer part of the logarithm base 10 of
    an I4.
-   **I4\_LOG\_2** returns the integer part of the logarithm base 2 of
    an I4.
-   **I4\_LOG\_I4** returns the logarithm of an I4 to an I4 base.
-   **I4\_LOG\_R8** returns the integer part of the logarithm base B of
    an I4.
-   **I4\_MANT** computes the "mantissa" of an R4.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_MOD\_INV** calculates the inverse of B mod N.
-   **I4\_MODDIV** breaks an I4 into a multiple of a divisor and
    remainder.
-   **I4\_MODP** returns the nonnegative remainder of I4 division.
-   **I4\_MOP** returns the I-th power of -1 as an I4 value.
-   **I4\_POWER** returns the value of I\^J.
-   **I4\_REVERSE\_BYTES** reverses the bytes in an I4.
-   **I4\_RISE** computes the rising factorial function \[X\]\^N.
-   **I4\_RISE\_VALUES** returns values of the integer rising factorial
    function.
-   **I4\_SIGN** returns the sign of an I4.
-   **I4\_SIGN3** returns the three-way sign of an I4.
-   **I4\_SWAP** switches two I4's.
-   **I4\_SWAP3** swaps three I4's.
-   **I4\_TO\_ANGLE** maps I4's to points on a circle.
-   **I4\_TO\_DIGITS\_BINARY** produces the binary digits of an I4.
-   **I4\_TO\_DIGITS\_DECIMAL** determines the last N decimal digits of
    an I4.
-   **I4\_TO\_FAC** converts an I4 into a product of prime factors.
-   **I4\_TO\_HALTON** computes one element of a leaped Halton
    subsequence.
-   **I4\_TO\_ISBN** converts an I4 to an ISBN digit.
-   **I4\_TO\_L4** converts an I4 to a logical value.
-   **I4\_TO\_PASCAL** converts a linear index to Pascal triangle
    coordinates.
-   **I4\_TO\_PASCAL\_DEGREE** converts a linear index to a Pascal
    triangle degree.
-   **I4\_TO\_TRIANGLE** converts an integer to triangular coordinates.
-   **I4\_UNIFORM\_AB** returns a scaled pseudorandom I4 between A
    and B.
-   **I4\_UNSWAP3** unswaps three I4's.
-   **I4\_WALSH\_1D** evaluates the Walsh function of a real scalar
    argument.
-   **I4\_WIDTH** returns the "width" of an I4.
-   **I4\_WRAP** forces an I4 to lie between given limits by wrapping.
-   **I4\_XOR** calculates the exclusive OR of two I4's.
-   **I43MAT\_FLIP\_COLS** swaps the columns of an I43MAT.
-   **I43MAT\_FLIP\_ROWS** swaps the rows of an I43MAT.
-   **I4BLOCK\_DELETE** frees memory associated with an I4BLOCK.
-   **I4BLOCK\_NEW** allocates a new I4BLOCK.
-   **I4BLOCK\_PRINT** prints an I4BLOCK.
-   **I4BLOCK\_ZEROS\_NEW** returns a new zeroed I4BLOCK.
-   **I4CMAT\_DELETE** frees memory associated with an I4CMAT.
-   **I4CMAT\_NEW** allocates a new I4CMAT.
-   **I4COL\_COMPARE** compares columns I and J of an I4COL.
-   **I4COL\_FIND** seeks a table column equal to an I4COL.
-   **I4COL\_FIND\_ITEM** searches an I4COL for a given value.
-   **I4COL\_FIND\_PAIR\_WRAP** wrap searches an I4COL for a pair of
    items.
-   **I4COL\_FIRST\_INDEX** indexes the first occurrence of values in an
    I4COL.
-   **I4COL\_SORT\_A** ascending sorts the columns of an I4COL.
-   **I4COL\_SORT\_D** descending sorts the columns of an I4COL.
-   **I4COL\_SORT2\_A** ascending sorts the elements of each column of
    an I4COL.
-   **I4COL\_SORT2\_D** descending sorts the elements of each column of
    an I4COL.
-   **I4COL\_SORTED\_SINGLETON\_COUNT** counts singletons in an I4COL.
-   **I4COL\_SORTED\_UNIQUE** keeps unique elements in a sorted I4COL.
-   **I4COL\_SORTED\_UNIQUE\_COUNT** counts unique elements in an I4COL.
-   **I4COL\_SWAP** swaps two columns of an I4COL.
-   **I4COL\_UNIQUE\_INDEX** indexes the unique occurrence of values in
    an I4COL.
-   **I4I4\_SORT\_A** ascending sorts a pair of I4's.
-   **I4I4I4\_SORT\_A** ascending sorts a triple of I4's.
-   **I4INT\_TO\_R4INT** maps an I4 interval to an R4 interval.
-   **I4INT\_TO\_R8INT** maps an I4 interval to an R8 interval.
-   **I4LIST\_PRINT** prints an I4LIST.
-   **I4MAT\_BORDER\_ADD** adds a "border" to an I4MAT.
-   **I4MAT\_BORDER\_CUT** cuts the "border" of an I4MAT.
-   **I4MAT\_COPY** copies one I4MAT to another.
-   **I4MAT\_COPY\_NEW** copies an I4MAT to a "new" I4MAT.
-   **I4MAT\_ELIM** carries out exact Gauss elimination on an I4MAT.
-   **I4MAT\_FLIP\_COLS** swaps the columns of an I4MAT.
-   **I4MAT\_FLIP\_ROWS** swaps the rows of an I4MAT.
-   **I4MAT\_HISTOGRAM** computes a histogram of the elements of an
    I4MAT.
-   **I4MAT\_INDICATOR\_NEW** sets up an "indicator" I4MAT.
-   **I4MAT\_L1\_INVERSE** inverts a unit lower triangular I4MAT.
-   **I4MAT\_MAX** returns the maximum of an I4MAT.
-   **I4MAT\_MAX\_INDEX** returns the location of the maximum of an
    I4MAT.
-   **I4MAT\_MIN** returns the minimum of an I4MAT.
-   **I4MAT\_MIN\_INDEX** returns the location of the minimum of an
    I4MAT.
-   **I4MAT\_MM** multiplies two I4MAT's.
-   **I4MAT\_PERM\_UNIFORM** selects a random permutation of an I4MAT.
-   **I4MAT\_PERM2\_UNIFORM** selects a random permutation of an I4MAT.
-   **I4MAT\_PRINT** prints an I4MAT.
-   **I4MAT\_PRINT\_SOME** prints some of an I4MAT.
-   **I4MAT\_RED** divides out common factors in a row or column of an
    I4MAT.
-   **I4MAT\_TRANSPOSE\_PRINT** prints an I4MAT, transposed.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an I4MAT,
    transposed.
-   **I4MAT\_U1\_INVERSE** inverts a unit upper triangular I4MAT.
-   **I4MAT\_UNIFORM\_AB** returns a scaled pseudorandom I4MAT.
-   **I4MAT\_UNIFORM\_AB\_NEW** returns a new scaled pseudorandom I4MAT.
-   **I4RMAT\_DELETE** frees memory associated with an I4RMAT.
-   **I4RMAT\_NEW** allocates a new I4RMAT.
-   **I4ROW\_COMPARE** compares two rows of a integer array.
-   **I4ROW\_FIND\_ITEM** searches the rows of an I4ROW for a given
    value.
-   **I4ROW\_MAX** returns the maximums of an I4ROW.
-   **I4ROW\_MEAN** returns the means of an I4ROW.
-   **I4ROW\_MIN** returns the minimums of an I4ROW.
-   **I4ROW\_SORT\_A** ascending sorts the rows of an I4ROW.
-   **I4ROW\_SORT\_D** descending sorts the rows of an I4ROW.
-   **I4ROW\_SORT2\_D** descending sorts the elements of each row of an
    I4ROW.
-   **I4ROW\_SUM** returns the sums of the rows of an I4ROW.
-   **I4ROW\_SWAP** swaps two rows of an I4ROW.
-   **I4ROW\_VARIANCE** returns the variances of an I4ROW.
-   **I4VEC\_ADD** computes C = A + B for I4VEC's.
-   **I4VEC\_ADD\_NEW** computes C = A + B for I4VEC's.
-   **I4VEC\_ALL\_NONPOSITIVE:** ( all ( A &lt;= 0 ) ) for I4VEC's.
-   **I4VEC\_AMAX** returns the largest magnitude in an I4VEC.
-   **I4VEC\_AMAX\_INDEX** returns the index of the maximum absolute
    value in an I4VEC.
-   **I4VEC\_AMIN** returns the smallest magnitude in an I4VEC.
-   **I4VEC\_AMIN\_INDEX** returns the index of the minimum absolute
    value in an I4VEC.
-   **I4VEC\_AMINZ** returns the smallest nonzero magnitude in an I4VEC.
-   **I4VEC\_AMINZ\_INDEX** returns the smallest nonzero magnitude in an
    I4VEC.
-   **I4VEC\_ANY\_LT:** ( any ( A &lt; B ) ) for I4VEC's.
-   **I4VEC\_ANY\_NEGATIVE:** ( any A &lt; 0 ) for I4VEC's.
-   **I4VEC\_ANY\_NONZERO:** ( any A nonzero ) for I4VEC's.
-   **I4VEC\_ASCEND\_SUB** computes the longest ascending subsequence in
    an I4VEC.
-   **I4VEC\_ASCENDS** determines if an I4VEC is (weakly) ascending.
-   **I4VEC\_AXPY** adds IA times the vector IX to the vector IY.
-   **I4VEC\_BRACKET** searches a sorted I4VEC for successive brackets
    of a value.
-   **I4VEC\_COMPARE** compares two I4VEC's.
-   **I4VEC\_CONCATENATE** concatenates two I4VEC's.
-   **I4VEC\_CONCATENATE\_NEW** concatenates two I4VEC's.
-   **I4VEC\_COPY** copies an I4VEC.
-   **I4VEC\_COPY\_NEW** copies an I4VEC to a "new" I4VEC.
-   **I4VEC\_CUM\_NEW** computes the cumulative sum of the entries of an
    I4VEC.
-   **I4VEC\_CUM0\_NEW** computes the cumulative sum of the entries of
    an I4VEC.
-   **I4VEC\_DEC** decrements an I4VEC.
-   **I4VEC\_DESCENDS** determines if an I4VEC is (weakly) descending.
-   **I4VEC\_DIRECT\_PRODUCT** creates a direct product of I4VEC's.
-   **I4VEC\_DIRECT\_PRODUCT2** creates a direct product of I4VEC's.
-   **I4VEC\_DOT\_PRODUCT** computes the dot product of two I4VEC's.
-   **I4VEC\_EQ** is true if two I4VEC's are equal.
-   **I4VEC\_EVEN\_ALL** is TRUE if all entries of an I4VEC are even.
-   **I4VEC\_EVEN\_ANY** is TRUE if any entry of an I4VEC is even.
-   **I4VEC\_FIND** finds the first occurrence of a value in an I4VEC.
-   **I4VEC\_FIRST\_INDEX** indexes the first occurrence of values in an
    I4VEC.
-   **I4VEC\_FRAC** searches for the K-th smallest entry in an I4VEC.
-   **I4VEC\_GCD** returns the greatest common divisor of an I4VEC.
-   **I4VEC\_HEAP\_A** reorders an I4VEC into a ascending heap.
-   **I4VEC\_HEAP\_D** reorders an I4VEC into a descending heap.
-   **I4VEC\_HEAP\_D\_EXTRACT** extracts the maximum value from a
    descending heap.
-   **I4VEC\_HEAP\_D\_INSERT** inserts a new value into a descending
    heap.
-   **I4VEC\_HEAP\_D\_MAX** returns the maximum value in a descending
    heap of integers.
-   **I4VEC\_HISTOGRAM** computes a histogram of the elements of an
    I4VEC.
-   **I4VEC\_HISTOGRAM\_MASKED** computes a histogram of a masked I4VEC.
-   **I4VEC\_INCREMENT** increments an I4VEC.
-   **I4VEC\_INDEX** locates a value in an I4VEC.
-   **I4VEC\_INDEX\_DELETE\_ALL** deletes all occurrences of a value
    from an indexed sorted list.
-   **I4VEC\_INDEX\_DELETE\_DUPES** deletes duplicates from an indexed
    sorted I4VEC.
-   **I4VEC\_INDEX\_DELETE\_ONE** deletes one copy of an I4 from an
    indexed sorted I4VEC.
-   **I4VEC\_INDEX\_INSERT** inserts an I4 into an indexed sorted I4VEC.
-   **I4VEC\_INDEX\_INSERT\_UNIQUE** inserts a unique I4 in an indexed
    sorted I4VEC.
-   **I4VEC\_INDEX\_ORDER** sorts an I4VEC using an index vector.
-   **I4VEC\_INDEX\_SEARCH** searches for an I4 in an indexed sorted
    I4VEC.
-   **I4VEC\_INDEX\_SORT\_UNIQUE** creates a sort index for an I4VEC.
-   **I4VEC\_INDEXED\_HEAP\_D** creates a descending heap from an
    indexed I4VEC.
-   **I4VEC\_INDEXED\_HEAP\_D\_EXTRACT:** extract from heap descending
    indexed I4VEC.
-   **I4VEC\_INDEXED\_HEAP\_D\_INSERT:** insert value into heap
    descending indexed I4VEC.
-   **I4VEC\_INDEXED\_HEAP\_D\_MAX:** maximum value in heap descending
    indexed I4VEC.
-   **I4VEC\_INDICATOR0** sets an I4VEC to the indicator vector
    (0,1,2,...).
-   **I4VEC\_INDICATOR0\_NEW** sets an I4VEC to the indicator vector
    (0,1,2,...).
-   **I4VEC\_INDICATOR1** sets an I4VEC to the indicator vector
    (1,2,3,...).
-   **I4VEC\_INDICATOR1\_NEW** sets an I4VEC to the indicator vector
    (1,2,3,...).
-   **I4VEC\_INSERT** inserts a value into an I4VEC.
-   **I4VEC\_LCM** returns the least common multiple of an I4VEC.
-   **I4VEC\_MAX** returns the value of the maximum element in an I4VEC.
-   **I4VEC\_MAX\_INDEX** returns the index of the maximum value in an
    I4VEC.
-   **I4VEC\_MAX\_INDEX\_LAST:** index of the last maximum value in an
    I4VEC.
-   **I4VEC\_MEAN** returns the mean of an I4VEC.
-   **I4VEC\_MEDIAN** returns the median of an unsorted I4VEC.
-   **I4VEC\_MERGE\_A** merges two ascending sorted I4VEC's.
-   **I4VEC\_MIN** returns the value of the minimum element in an I4VEC.
-   **I4VEC\_MIN\_INDEX** returns the index of the minimum value in an
    I4VEC.
-   **I4VEC\_MIN\_MV** determines U(1:N) /\\ V for vectors U and a
    single vector V.
-   **I4VEC\_NEGONE** sets an I4VEC to -1.
-   **I4VEC\_NEGONE\_NEW** creates an I4VEC and sets it to -1.
-   **I4VEC\_NONZERO\_COUNT** counts the nonzero entries in an I4VEC.
-   **I4VEC\_NONZERO\_FIRST** left-shifts all nonzeros in an I4VEC.
-   **I4VEC\_NORM\_L0** returns the l0 "norm" of an I4VEC.
-   **I4VEC\_ODD\_ALL** is TRUE if all entries of an I4VEC are odd.
-   **I4VEC\_ODD\_ANY** is TRUE if any entry of an I4VEC is odd.
-   **I4VEC\_ONE\_NEW** creates an I4VEC and sets it to 1.
-   **I4VEC\_ORDER\_TYPE:** is an I4VEC is (non)strictly
    ascending/descending?
-   **I4VEC\_PAIRWISE\_PRIME** checks whether an I4VEC is pairwise
    prime.
-   **I4VEC\_PART** partitions an integer into nearly equal parts.
-   **I4VEC\_PART\_QUICK\_A** reorders an I4VEC as part of a quick sort.
-   **I4VEC\_PERMUTE** permutes an I4VEC in place.
-   **I4VEC\_PERMUTE\_UNIFORM** randomly permutes an I4VEC.
-   **I4VEC\_PRINT** prints an I4VEC.
-   **I4VEC\_PRINT\_PART** prints "part" of an I4VEC.
-   **I4VEC\_PRINT\_SOME** prints "some" of an I4VEC.
-   **I4VEC\_PRODUCT** multiplies the entries of an I4VEC.
-   **I4VEC\_RED** divides out common factors in an I4VEC.
-   **I4VEC\_REVERSE** reverses the elements of an I4VEC.
-   **I4VEC\_ROTATE** rotates an I4VEC in place.
-   **I4VEC\_RUN\_COUNT** counts runs of equal values in an I4VEC.
-   **I4VEC\_SEARCH\_BINARY\_A** searches an ascending sorted I4VEC for
    a value.
-   **I4VEC\_SEARCH\_BINARY\_D** searches a descending sorted I4VEC for
    a value.
-   **I4VEC\_SORT\_BUBBLE\_A** ascending sorts an I4VEC using bubble
    sort.
-   **I4VEC\_SORT\_BUBBLE\_D** descending sorts an I4VEC using bubble
    sort.
-   **I4VEC\_SORT\_HEAP\_A** ascending sorts an I4VEC using heap sort.
-   **I4VEC\_SORT\_HEAP\_D** descending sorts an I4VEC using heap sort.
-   **I4VEC\_SORT\_HEAP\_INDEX\_A** does an indexed heap ascending sort
    of an I4VEC.
-   **I4VEC\_SORT\_HEAP\_INDEX\_D** does an indexed heap descending sort
    of an I4VEC.
-   **I4VEC\_SORT\_INSERT\_A** uses an ascending insertion sort on an
    I4VEC.
-   **I4VEC\_SORT\_INSERT\_D** uses a descending insertion sort on an
    I4VEC.
-   **I4VEC\_SORT\_QUICK\_A** ascending sorts an I4VEC using quick sort.
-   **I4VEC\_SORT\_SHELL\_A** ascending sorts an I4VEC using Shell's
    sort.
-   **I4VEC\_SORTED\_UNDEX** returns unique sorted indexes for a sorted
    I4VEC.
-   **I4VEC\_SORTED\_UNIQUE** finds the unique elements in a sorted
    I4VEC.
-   **I4VEC\_SORTED\_UNIQUE\_COUNT** counts unique elements in a sorted
    I4VEC.
-   **I4VEC\_SORTED\_UNIQUE\_HIST** histograms the unique elements of a
    sorted I4VEC.
-   **I4VEC\_SPLIT** "splits" an unsorted I4VEC based on a splitting
    value.
-   **I4VEC\_STD** returns the standard deviation of an I4VEC.
-   **I4VEC\_SUM** sums the entries of an I4VEC.
-   **I4VEC\_SWAP** swaps two I4VEC's.
-   **I4VEC\_TRANSPOSE\_PRINT** prints an I4VEC "transposed".
-   **I4VEC\_UNDEX** returns unique sorted indexes for an I4VEC.
-   **I4VEC\_UNIFORM\_AB** returns a scaled pseudorandom I4VEC.
-   **I4VEC\_UNIFORM\_AB\_NEW** returns a scaled pseudorandom I4VEC.
-   **I4VEC\_UNIQUE\_COUNT** counts the unique elements in an unsorted
    I4VEC.
-   **I4VEC\_UNIQUE\_INDEX** indexes the unique occurrence of values in
    an I4VEC.
-   **I4VEC\_VALUE\_INDEX** indexes I4VEC entries equal to a given
    value.
-   **I4VEC\_VALUE\_NUM** counts I4VEC entries equal to a given value.
-   **I4VEC\_VARIANCE** returns the variance of an I4VEC.
-   **I4VEC\_WIDTH** returns the "width" of an I4VEC.
-   **I4VEC\_ZEROS** zeroes an I4VEC.
-   **I4VEC\_ZEROS\_NEW** creates and zeroes an I4VEC.
-   **I4VEC2\_COMPARE** compares pairs of integers stored in two
    vectors.
-   **I4VEC2\_PRINT** prints an I4VEC2.
-   **I4VEC2\_SORT\_A** ascending sorts an I4VEC2.
-   **I4VEC2\_SORT\_D** descending sorts an I4VEC2.
-   **I4VEC2\_SORTED\_UNIQUE** keeps the unique elements in an I4VEC2.
-   **I4VEC2\_SORTED\_UNIQUE\_COUNT** counts unique elements in an
    I4VEC2.
-   **L4\_TO\_I4** converts an L4 to an I4.
-   **L4\_XOR** returns the exclusive OR of two L4's.
-   **PASCAL\_TO\_I4** converts Pacal triangle coordinates to a linear
    index.
-   **PERM\_CYCLE** analyzes a permutation.
-   **PERM0\_CHECK** checks a permutation of ( 0, ..., N-1 ).
-   **PERM0\_UNIFORM\_NEW** selects a random permutation of 0,...,N-1.
-   **PERM1\_CHECK** checks a permutation of (1, ..., N ).
-   **PERM1\_UNIFORM\_NEW** selects a random permutation of 1,...,N.
-   **PRIME** returns any of the first PRIME\_MAX prime numbers.
-   **R8\_NINT** returns the nearest integer to an R8.
-   **R8\_UNIFORM\_AB** returns a scaled pseudorandom R8.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **SORT\_HEAP\_EXTERNAL** externally sorts a list of items into
    ascending order.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TRIANGLE\_TO\_I4** converts a triangular coordinate to an integer.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 02 January 2016.*
