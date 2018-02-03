SUBSET\
Combinatorial Routines {#subset-combinatorial-routines align="center"}
======================

------------------------------------------------------------------------

**SUBSET** is a C++ library which enumerates, generates, randomizes,
ranks and unranks combinatorial objects including combinations,
compositions, Gray codes, index sets, partitions, permutations,
polynomials, subsets, and Young tables. Backtracking routines are
included to solve some combinatorial problems.

These include the enumeration, generation, random selection, ranking and
unranking of

-   **COMP**, compositions of an integer;
-   **COMPNZ**, compositions of an integer with no zero parts;
-   **EQUIV**'s, partitions of a set of N objects;
-   **I4\_PARTITION**'s, partitions of an integer;
-   **I4POLY**'s, integer polynomials in factorial, Newton, power sum,
    or Taylor form;
-   **I4VEC**'s, integer vectors;
-   **KSUB**'s, subsets of size K, from a set of N objects;
-   **MULTIPERM**'s, permutations of the N objects, some of which are
    indistinguishable.
-   **PERM**'s, permutations of the first N integers;
-   **R8POLY**'s, real polynomials in factorial, Newton, power sum, or
    Taylor form;
-   subsets of a set of N objects;
-   vectors whose entries range from 1 to N;
-   **YTB**'s, Young tables;

Other objects considered include

-   the Bell numbers,
-   Catalan numbers,
-   congruence equations.
-   continued fractions,
-   **DEC**'s, decimal numbers represented as a mantissa and a power of
    10;
-   **DERANGE**'s, derangements (permutations that leave no element in
    place),
-   **DVEC**'s, decimal numbers represented as a vector of digits;
-   falling factorials (20\*19\*18...),
-   **GRAY**, Gray codes,
-   matrix permanents (similar to determinants, but harder to compute,
    if you can believe that),
-   Morse-Thue numbers,
-   pentagonal numbers,
-   Pythagorean triples,
-   **RAT**'s, rational numbers represented as a pair of integers;
-   rising factorials (7\*8\*9...).

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SUBSET** is available in [a C version](../../c_src/subset/subset.html)
and [a C++ version](../../cpp_src/subset/subset.html) and [a FORTRAN77
version](../../f77_src/subset/subset.html) and [a FORTRAN90
version](../../f_src/subset/subset.html) and [a MATLAB
version](../../m_src/subset/subset.html) and [a Python
version](../../py_src/subset/subset.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BACKTRACK\_BINARY\_RC](../../cpp_src/backtrack_binary_rc/backtrack_binary_rc.html),
a C++ library which carries out a backtrack search for a set of binary
decisions, using reverse communication.

[CHANGE\_MAKING](../../cpp_src/change_making/change_making.html), a C++
library which considers the change making problem, in which a given sum
is to be formed using coins of various denominations.

[COMBO](../../cpp_src/combo/combo.html), a C++ library which includes
many combinatorial routines.

[KNAPSACK\_01](../../cpp_src/knapsack_01/knapsack_01.html), a C++
library which uses brute force to solve small versions of the 0/1
knapsack problem;

[LEGENDRE\_PRODUCT\_POLYNOMIAL](../../cpp_src/legendre_product_polynomial/legendre_product_polynomial.html),
a C++ library which defines Legendre product polynomials, creating a
multivariate polynomial as the product of univariate Legendre
polynomials.

[MONOMIAL](../../cpp_src/monomial/monomial.html), a C++ library which
enumerates, lists, ranks, unranks and randomizes multivariate monomials
in a space of M dimensions, with total degree less than N, equal to N,
or lying within a given range.

[PARTITION\_PROBLEM](../../cpp_src/partition_problem/partition_problem.html),
a C++ library which seeks solutions of the partition problem, splitting
a set of integers into two subsets with equal sum.

[POLYNOMIAL](../../cpp_src/polynomial/polynomial.html), a C++ library
which adds, multiplies, differentiates, evaluates and prints
multivariate polynomials in a space of M dimensions.

[SUBSET\_SUM](../../cpp_src/subset_sum/subset_sum.html), a C++ library
which seeks solutions of the subset sum problem.

[TOMS515](../../cpp_src/toms515/toms515.html), a C++ library which can
select subsets of size K from a set of size N. This is a version of ACM
TOMS Algorithm 515, by Bill Buckles, Matthew Lybanon.

[UBVEC](../../cpp_src/ubvec/ubvec.html), a C++ library which
demonstrates how unsigned binary vectors, strings of 0's and 1's, can
represent nonnegative integers or subsets or other mathematical objects,
for which various arithmetic and logical operations can be defined.

[UNICYCLE](../../cpp_src/unicycle/unicycle.html), a C++ library which
considers permutations containing a single cycle, sometimes called
cyclic permutations.

### Reference: {#reference align="center"}

1.  Milton Abramowitz, Irene Stegun,\
    Handbook of Mathematical Functions,\
    National Bureau of Standards, 1964,\
    ISBN: 0-486-61272-4,\
    LC: QA47.A34.
2.  Walter Ball,\
    Mathematical Recreations and Essays,\
    Macmillan, 1962,\
    ISBN: 1417921269,\
    LC: QA95.B2.
3.  Paul Bratley, Bennett Fox, Linus Schrage,\
    A Guide to Simulation,\
    Second Edition,\
    Springer, 1987,\
    ISBN: 0387964673,\
    LC: QA76.9.C65.B73.
4.  Bill Buckles, Matthew Lybanon,\
    Algorithm 515: Generation of a Vector from the Lexicographical
    Index,\
    ACM Transactions on Mathematical Software,\
    Volume 3, Number 2, June 1977, pages 180-182.
5.  Tom Christiansen, Nathan Torkington,\
    Perl Cookbook,\
    O'Reilly, 2003,\
    ISBN: 0596003137,\
    LC: QA76.73.P22.C38.
6.  William Cody, Kenneth Hillstrom,\
    Chebyshev Approximations for the Natural Logarithm of the Gamma
    Function, Mathematics of Computation,\
    Volume 21, Number 98, April 1967, pages 198-203.
7.  John Conway, Richard Guy,\
    The Book of Numbers,\
    Springer, 1998,\
    ISBN: 038797993X,\
    LC: QA241.C6897.
8.  Bennett Fox,\
    Algorithm 647: Implementation and Relative Efficiency of Quasirandom
    Sequence Generators,\
    ACM Transactions on Mathematical Software,\
    Volume 12, Number 4, December 1986, pages 362-376.
9.  Laurent Habsieger, Maxim Kazarian, Sergei Lando,\
    On the Second Number of Plutarch,\
    American Mathematical Monthly,\
    Volume 105, Number 5, May 1998, page 446.
10. John Halton,\
    On the efficiency of certain quasi-random sequences of points in
    evaluating multi-dimensional integrals,\
    Numerische Mathematik,\
    Volume 2, Number 1, December 1960, pages 84-90.
11. John Hammersley,\
    Monte Carlo methods for solving multivariable problems,\
    Proceedings of the New York Academy of Science,\
    Volume 86, 1960, pages 844-874.
12. John Hart, Ward Cheney, Charles Lawson, Hans Maehly, Charles
    Mesztenyi, John Rice, Henry Thacher, Christoph Witzgall,\
    Computer Approximations,\
    Wiley, 1968,\
    LC: QA297.C64.
13. Brian Hayes,\
    Third Base,\
    American Scientist,\
    Volume 89, Number 6, November-December 2001, pages 490-494.
14. Mark Herkommer,\
    Number Theory, A Programmer's Guide,\
    McGraw Hill, 1999,\
    ISBN: 0-07-913074-7.
15. Karla Hoffman, Douglas Shier,\
    Algorithm 564: A Test Problem Generator for Discrete Linear L1
    Approximation Problems,\
    ACM Transactions on Mathematical Software,\
    Volume 6, Number 4, December 1980, pages 615-617.
16. Donald Knuth,\
    The Art of Computer Programming,\
    Volume 3, Sorting and Searching,\
    Second Edition,\
    Addison Wesley, 1998,\
    ISBN: 0201896850,\
    LC: QA76.6.K64.
17. Hang Tong Lau,\
    Algorithms on Graphs,\
    Tab Books, 1989,\
    ISBN: 0830634290,\
    LC: QA166.L38
18. Pierre LEcuyer,\
    Random Number Generation,\
    in Handbook of Simulation,\
    edited by Jerry Banks,\
    Wiley, 1998,\
    ISBN: 0471134031,\
    LC: T57.62.H37.
19. Peter Lewis, Allen Goodman, James Miller,\
    A Pseudo-Random Number Generator for the System/360,\
    IBM Systems Journal,\
    Volume 8, 1969, pages 136-143.
20. Charles Mifsud,\
    Algorithm 154, Combination in Lexicographic Order,\
    Communications of the ACM,\
    Volume 6, Number 3, March 1963, page 103.
21. mil\_std\_1753,\
    Military Standard 1753,\
    FORTRAN, DoD Supplement To American National Standard X3.9-1978,\
    9 November 1978.
22. Albert Nijenhuis, Herbert Wilf,\
    Combinatorial Algorithms for Computers and Calculators,\
    Second Edition,\
    Academic Press, 1978,\
    ISBN: 0-12-519260-6,\
    LC: QA164.N54.
23. Robert Owens,\
    Sums of Powers of Integers,\
    Mathematics Magazine,\
    Volume 65, Number 1, February 1992, pages 38-40.
24. Norman Richert,\
    Strang's Strange Figures,\
    American Mathematical Monthly,\
    Volume 99, Number 2, February 1992, pages 101-107.
25. James Sandeson,\
    Testing Ecological Patterns,\
    American Scientist,\
    Volume 88, Number 4, July-August 2000, pages 332-339.
26. Ian Saunders,\
    Algorithm AS 205,\
    Enumeration of R x C Tables with Repeated Row Totals,\
    Applied Statistics,\
    Volume 33, Number 3, 1984, pages 340-352.
27. Robert Sedgewick,\
    Algorithms in C,\
    Addison-Wesley, 1990,\
    ISBN: 0-201-51425-7,\
    LC: QA76.73.C15S43.
28. Raymond Seroul,\
    Programming for Mathematicians,\
    Springer, 2000,\
    ISBN: 3-540-66422-X,\
    LC: QA76.6.S465.
29. Mok-Kong Shen,\
    Algorithm 202: Generation of Permutations in Lexicographical Order,\
    Communications of the ACM,\
    Volume 6, Number 9, September 1963, page 517.
30. Richard Stanley,\
    Hipparchus, Plutarch, Schroeder, and Hough,\
    American Mathematical Monthly,\
    Volume 104, Number 4, April 1997, pages 344-350.
31. Dennis Stanton, Dennis White,\
    Constructive Combinatorics,\
    Springer, 1986,\
    ISBN: 0387963472,\
    LC: QA164.S79.
32. Ian Stewart,\
    A Neglected Number,\
    Scientific American,\
    Volume 274, pages 102-102, June 1996.
33. Ian Stewart,\
    Math Hysteria,\
    Oxford, 2004,\
    ISBN: 0198613369,\
    LC: QA95.S7255.
34. James Sylvester,\
    Question 7382, Mathematical Questions with their Solutions,\
    Educational Times,\
    Volume 41, page 21, 1884.
35. Hale Trotter,\
    Algorithm 115: PERM,\
    Communications of the Association for Computing Machinery,\
    Volume 5, Number 8, August 1962, pages 434-435.
36. Johannes vanderCorput,\
    Verteilungsfunktionen I & II,\
    Proceedings of the Koninklijke Nederlandsche Akademie van
    Wetenschappen,\
    Volume 38, 1935, pages 813-820, pages 1058-1066.
37. Jack vanLint, Richard Wilson,\
    A Course in Combinatorics,\
    Cambridge, 1992,\
    ISBN: 0-521-42260-4,\
    LC: QA164.L56.
38. Eric Weisstein,\
    CRC Concise Encyclopedia of Mathematics,\
    CRC Press, 2002,\
    Second edition,\
    ISBN: 1584883472,\
    LC: QA5.W45
39. Stephen Wolfram,\
    The Mathematica Book,\
    Fourth Edition,\
    Cambridge University Press, 1999,\
    ISBN: 0-521-64314-7,\
    LC: QA76.95.W65.
40. ML Wolfson, HV Wright,\
    ACM Algorithm 160: Combinatorial of M Things Taken N at a Time,\
    Communications of the ACM,\
    Volume 6, Number 4, April 1963, page 161.
41. Daniel Zwillinger, editor,\
    CRC Standard Mathematical Tables and Formulae,\
    30th Edition,\
    CRC Press, 1996,\
    ISBN: 0-8493-2479-3,\
    LC: QA47.M315.

### Source Code: {#source-code align="center"}

-   [subset.cpp](subset.cpp), the source code;
-   [subset.hpp](subset.hpp), the include file for SUBSET;

### Examples and Tests: {#examples-and-tests align="center"}

-   [subset\_prb.cpp](subset_prb.cpp), the calling program;
-   [subset\_prb\_output.txt](subset_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **ASM\_ENUM** returns the number of alternating sign matrices of a
    given order.
-   **ASM\_TRIANGLE** returns a row of the alternating sign matrix
    triangle.
-   **BELL** returns the Bell numbers from 0 to N.
-   **BELL\_VALUES** returns some values of the Bell numbers for
    testing.
-   **BINARY\_VECTOR\_NEXT** generates the next binary vector.
-   **CATALAN** computes the Catalan numbers, from C(0) to C(N).
-   **CATALAN\_ROW** computes row N of Catalan's triangle.
-   **CATALAN\_VALUES** returns some values of the Catalan numbers for
    testing.
-   **CFRAC\_TO\_RAT** converts a monic continued fraction to an
    ordinary fraction.
-   **CFRAC\_TO\_RFRAC** converts a polynomial fraction from continued
    to rational form.
-   **CH\_CAP** capitalizes a single character.
-   **CHANGE\_GREEDY** makes change for a given total using the biggest
    coins first.
-   **CHANGE\_NEXT** computes the next set of change for a given sum.
-   **CHINESE\_CHECK** checks the Chinese remainder moduluses.
-   **CHINESE\_TO\_I4** converts a set of Chinese remainders to an
    equivalent integer.
-   **COMB\_NEXT** computes combinations of K things out of N.
-   **COMB\_ROW** computes row N of Pascal's triangle.
-   **COMB\_UNRANK** returns the RANK-th combination of N things out
    of M.
-   **COMP\_ENUM** returns the number of compositions of the integer N
    into K parts.
-   **COMP\_NEXT** computes the compositions of the integer N into K
    parts.
-   **COMP\_NEXT\_GRLEX** returns the next composition in grlex order.
-   **COMP\_RANDOM** selects a random composition of the integer N into
    K parts.
-   **COMP\_RANDOM\_GRLEX:** random composition with degree less than or
    equal to NC.
-   **COMP\_RANK\_GRLEX** computes the graded lexicographic rank of a
    composition.
-   **COMP\_TO\_KSUB** converts a composition to a K-subset.
-   **COMP\_UNRANK\_GRLEX** computes the composition of given grlex
    rank.
-   **COMPNZ\_NEXT** computes the compositions of the integer N into K
    nonzero parts.
-   **COMPNZ\_RANDOM** selects a random composition of the integer N
    into K nonzero parts.
-   **COMPNZ\_TO\_KSUB** converts a nonzero composition to a K-subset.
-   **CONGRUENCE** solves a congruence of the form ( A \* X = C ) mod B.
-   **COUNT\_POSE\_RANDOM** poses a problem for the game "The Count is
    Good"
-   **DEBRUIJN** constructs a de Bruijn sequence.
-   **DEC\_ADD** adds two decimal quantities.
-   **DEC\_DIV** divides two decimal values.
-   **DEC\_MUL** multiplies two decimals.
-   **DEC\_ROUND** rounds a decimal fraction to a given number of
    digits.
-   **DEC\_TO\_R8** converts a decimal value to an R8.
-   **DEC\_TO\_RAT** converts a decimal to a rational representation.
-   **DEC\_TO\_S** converts a decimal number to a string.
-   **DEC\_WIDTH** returns the "width" of a decimal number.
-   **DECMAT\_DET** finds the determinant of an N by N matrix of decimal
    entries.
-   **DECMAT\_PRINT** prints out decimal vectors and matrices.
-   **DERANGE\_BACK\_CANDIDATE** finds possible values for the K-th
    entry of a derangement.
-   **DERANGE\_BACK\_NEXT** returns the next derangement of N items.
-   **DERANGE\_CHECK** is TRUE if a permutation is a derangement.
-   **DERANGE\_ENUM** returns the number of derangements of N objects.
-   **DERANGE\_ENUM2** returns the number of derangements of 0 through N
    objects.
-   **DERANGE\_ENUM3** returns the number of derangements of 0 through N
    objects.
-   **DERANGE\_WEED\_NEXT** computes all of the derangements of N
    objects, one at a time.
-   **DIGIT\_TO\_CH** returns the character representation of a decimal
    digit.
-   **DIGRAPH\_ARC\_EULER** returns an Euler circuit in a digraph.
-   **DIGRAPH\_ARC\_PRINT** prints out a digraph from an edge list.
-   **DIOPHANTINE** solves a Diophantine equation A \* X + B \* Y = C.
-   **DIOPHANTINE\_SOLUTION\_MINIMIZE** seeks a minimal solution of a
    Diophantine equation.
-   **DVEC\_ADD** adds two (signed) decimal vectors.
-   **DVEC\_COMPLEMENTX** computes the ten's complement of a decimal
    vector.
-   **DVEC\_MUL** computes the product of two decimal vectors.
-   **DVEC\_PRINT** prints a decimal integer vector, with an optional
    title.
-   **DVEC\_SUB** subtracts two decimal vectors.
-   **DVEC\_TO\_I4** makes an integer from a (signed) decimal vector.
-   **EQUIV\_NEXT** computes the partitions of a set one at a time.
-   **EQUIV\_NEXT2** computes, one at a time, the partitions of a set.
-   **EQUIV\_PRINT** prints a partition of a set.
-   **EQUIV\_PRINT2** prints a partition of a set.
-   **EQUIV\_RANDOM** selects a random partition of a set.
-   **EULER** returns the N-th row of Euler's triangle.
-   **FROBENIUS\_NUMBER\_ORDER2** returns the Frobenius number for
    order 2.
-   **FROBENIUS\_NUMBER\_ORDER2\_VALUES** returns values of the order 2
    Frobenius number.
-   **GAMMA\_LOG\_VALUES** returns some values of the Log Gamma function
    for testing.
-   **GET\_SEED** returns a random seed for the random number generator.
-   **GRAY\_NEXT** generates the next Gray code by switching one item at
    a time.
-   **GRAY\_RANK** ranks a Gray code.
-   **GRAY\_RANK2** ranks a Gray code.
-   **GRAY\_UNRANK** unranks a Gray code.
-   **GRAY\_UNRANK2** unranks a Gray code.
-   **I4\_BCLR** returns a copy of an I4 in which the POS-th bit is set
    to 0.
-   **I4\_BSET** returns a copy of an I4 in which the POS-th bit is set
    to 1.
-   **I4\_BTEST** returns TRUE if the POS-th bit of an I4 is 1.
-   **I4\_CHOOSE** computes the binomial coefficient C(N,K).
-   **I4\_FACTOR** factors an I4 into prime factors.
-   **I4\_FACTORIAL** computes the factorial of N.
-   **I4\_FALL** computes the falling factorial function \[X\]\_N.
-   **I4\_GCD** finds the greatest common divisor of I and J.
-   **I4\_HUGE** returns a "huge" integer value, usually the largest
    legal signed int.
-   **I4\_LOG\_10** returns the whole part of the logarithm base 10 of
    an integer.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the smaller of two I4's.
-   **I4\_MODP** returns the nonnegative remainder of I4 division.
-   **I4\_MOEBIUS** returns the value of MU(N), the Moebius function
    of N.
-   **I4\_PARTITION\_CONJ** computes the conjugate of a partition.
-   **I4\_PARTITION\_COUNT** computes the number of partitions of an
    integer.
-   **I4\_PARTITION\_COUNT2** computes the number of partitions of an
    integer.
-   **I4\_PARTITION\_COUNT\_VALUES** returns some values of the int
    partition count.
-   **I4\_PARTITION\_NEXT** generates the partitions of an integer, one
    at a time.
-   **I4\_PARTITION\_NEXT2** computes the partitions of an integer one
    at a time.
-   **I4\_PARTITION\_PRINT** prints a partition of an integer.
-   **I4\_PARTITION\_RANDOM** selects a random partition of the int N.
-   **I4\_PARTITIONS\_NEXT:** next partition into S parts.
-   **I4\_POWER** returns the value of I\^J.
-   **I4\_RISE** computes the rising factorial function \[X\]\^N.
-   **I4\_SIGN** returns the sign of an I4.
-   **I4\_SQRT** finds the integer square root of N by solving N =
    Q\^2 + R.
-   **I4\_SQRT\_CF:** continued fraction representation of a square root
    of an integer.
-   **I4\_SWAP** switches two I4's.
-   **I4\_TO\_BVEC** makes a (signed) binary vector from an I4.
-   **I4\_TO\_CHINESE** converts an I4 to its Chinese remainder form.
-   **I4\_TO\_DVEC** makes a signed decimal vector from an I4.
-   **I4\_TO\_I4POLY** converts an I4 to an integer polynomial in a
    given base.
-   **I4\_TO\_VAN\_DER\_CORPUT** computes an element of a van der Corput
    sequence.
-   **I4\_UNIFORM\_AB** returns a scaled pseudorandom I4.
-   **I4MAT\_01\_ROWCOLSUM** creates a 0/1 I4MAT with given row and
    column sums.
-   **I4MAT\_01\_ROWCOLSUM2** creates a 0/1 I4MAT with given row and
    column sums.
-   **I4MAT\_PERM** permutes the rows and columns of a square I4MAT.
-   **I4MAT\_PERM2** permutes the rows and columns of a rectangular
    I4MAT.
-   **I4MAT\_PRINT** prints an I4MAT.
-   **I4MAT\_PRINT\_SOME** prints some of an I4MAT.
-   **I4MAT\_U1\_INVERSE** inverts a unit upper triangular I4MAT.
-   **I4POLY** performs operations on I4POLY's in power or factorial
    form.
-   **I4POLY\_ADD** adds two I4POLY's.
-   **I4POLY\_CYCLO** computes a cyclotomic I4POLY.
-   **I4POLY\_DEGREE** returns the degree of an I4POLY.
-   **I4POLY\_DIF** differentiates an I4POLY.
-   **I4POLY\_DIV** computes the quotient and remainder of two I4POLY's.
-   **I4POLY\_MUL** computes the product of two I4POLY's.
-   **I4POLY\_PRINT** prints out an I4POLY.
-   **I4POLY\_TO\_I4** evaluates an I4POLY.
-   **I4VEC\_ASCENDS** determines if an I4VEC is (weakly) ascending.
-   **I4VEC\_BACKTRACK** supervises a backtrack search for an I4VEC.
-   **I4VEC\_DESCENDS** determines if an I4VEC is decreasing.
-   **I4VEC\_FRAC** searches for the K-th smallest entry in an I4VEC.
-   **I4VEC\_HEAP\_D** reorders an I4VEC into a descending heap.
-   **I4VEC\_INDEX** returns the location of the first occurrence of a
    given value.
-   **I4VEC\_INDICATOR** sets an I4VEC to the indicator vector.
-   **I4VEC\_INDICATOR\_NEW** sets an I4VEC to the indicator vector.
-   **I4VEC\_MAX** returns the value of the maximum element in an I4VEC.
-   **I4VEC\_MAXLOC\_LAST** returns the index of the last maximal I4VEC
    entry.
-   **I4VEC\_MIN** returns the value of the minimum element in an I4VEC.
-   **I4VEC\_PAIRWISE\_PRIME** checks whether an I4VEC is pairwise
    prime.
-   **I4VEC\_PRODUCT** multiplies the entries of an I4VEC.
-   **I4VEC\_REVERSE** reverses the elements of an integer vector.
-   **I4VEC\_SORT\_BUBBLE\_A** ascending sorts an integer array using
    bubble sort.
-   **I4VEC\_SORT\_HEAP\_A** ascending sorts an I4VEC using heap sort.
-   **I4VEC\_SORT\_HEAP\_INDEX\_A** does an indexed heap ascending sort
    of an integer vector.
-   **I4VEC\_SORT\_HEAP\_INDEX\_D** does an indexed heap descending sort
    of an I4VEC.
-   **I4VEC\_SUM** sums the entries of an I4VEC.
-   **I4VEC\_UNIFORM** returns a scaled pseudorandom I4VEC.
-   **I4VEC0\_PRINT** prints an integer vector (0-based indices).
-   **I4VEC1\_PRINT** prints an integer vector (one-based indices).
-   **INDEX\_BOX2\_NEXT\_2D** produces index vectors on the surface of a
    box in 2D.
-   **INDEX\_BOX2\_NEXT\_3D** produces index vectors on the surface of a
    box in 3D.
-   **INDEX\_BOX\_NEXT\_2D** produces index vectors on the surface of a
    box in 2D.
-   **INDEX\_BOX\_NEXT\_3D** produces index vectors on the surface of a
    box in 3D.
-   **INDEX\_NEXT0** generates all index vectors within given upper
    limits.
-   **INDEX\_NEXT1** generates all index vectors within given upper
    limits.
-   **INDEX\_NEXT2** generates all index vectors within given lower and
    upper limits.
-   **INDEX\_RANK0** ranks an index vector within given upper limits.
-   **INDEX\_RANK1** ranks an index vector within given upper limits.
-   **INDEX\_RANK2** ranks an index vector within given lower and upper
    limits.
-   **INDEX\_UNRANK0** unranks an index vector within given upper
    limits.
-   **INDEX\_UNRANK1** unranks an index vector within given upper
    limits.
-   **INDEX\_UNRANK2** unranks an index vector within given lower and
    upper limits.
-   **INS\_PERM** computes a permutation from its inversion sequence.
-   **INVERSE\_MOD\_N** computes the inverse of B mod N.
-   **INVOLUTE\_ENUM** enumerates the involutions of N objects.
-   **JFRAC\_TO\_RFRAC** converts a J-fraction into a rational
    polynomial fraction.
-   **JOSEPHUS** returns the position X of the K-th man to be executed.
-   **KSUB\_NEXT** generates the subsets of size K from a set of size N.
-   **KSUB\_NEXT2** generates the subsets of size K from a set of
    size N.
-   **KSUB\_NEXT3** generates the subsets of size K from a set of
    size N.
-   **KSUB\_NEXT4** generates the subsets of size K from a set of
    size N.
-   **KSUB\_RANDOM** selects a random subset of size K from a set of
    size N.
-   **KSUB\_RANDOM2** selects a random subset of size K from a set of
    size N.
-   **KSUB\_RANDOM3** selects a random subset of size K from a set of
    size N.
-   **KSUB\_RANDOM4** selects a random subset of size K from a set of
    size N.
-   **KSUB\_RANDOM5** selects a random subset of size K from a set of
    size N.
-   **KSUB\_RANK** computes the rank of a subset of an N set.
-   **KSUB\_TO\_COMP** converts a K-subset to a composition.
-   **KSUB\_TO\_COMPNZ** converts a K-subset to a nonzero composition.
-   **KSUB\_UNRANK** returns the subset of a given rank.
-   **L4VEC\_NEXT** generates the next logical vector.
-   **MATRIX\_PRODUCT\_OPT** determines the optimal cost of a matrix
    product.
-   **MOEBIUS\_MATRIX** finds the Moebius matrix from a covering
    relation.
-   **MONOMIAL\_COUNT** counts the number of monomials up to a given
    degree.
-   **MONOMIAL\_COUNTS** counts the number of monomials up to a given
    degree.
-   **MORSE\_THUE** generates a Morse\_Thue number.
-   **MULTINOMIAL\_COEF1** computes a multinomial coefficient.
-   **MULTINOMIAL\_COEF2** computes a multinomial coefficient.
-   **MULTIPERM\_ENUM** enumerates multipermutations.
-   **MULTIPERM\_NEXT** returns the next multipermutation.
-   **NETWORK\_FLOW\_MAX** finds the maximal flow and a minimal cut in a
    network.
-   **NIM\_SUM** computes the Nim sum of two integers.
-   **PADOVAN** returns the first N values of the Padovan sequence.
-   **PELL\_BASIC** returns the fundamental solution for Pell's basic
    equation.
-   **PELL\_NEXT** returns the next solution of Pell's equation.
-   **PENT\_ENUM** computes the N-th pentagonal number.
-   **PERM\_ASCEND** computes the longest ascending subsequence of
    permutation.
-   **PERM\_BREAK\_COUNT** counts the number of "breaks" in a
    permutation.
-   **PERM\_CANON\_TO\_CYCLE** converts a permutation from canonical to
    cycle form.
-   **PERM\_CHECK** checks that a vector represents a permutation.
-   **PERM\_CYCLE** analyzes a permutation.
-   **PERM\_CYCLE\_TO\_CANON** converts a permutation from cycle to
    canonical form.
-   **PERM\_CYCLE\_TO\_INDEX** converts a permutation from cycle to
    standard index form.
-   **PERM\_DISTANCE** computes the Ulam metric distance of two
    permutations.
-   **PERM\_FIXED\_ENUM** enumerates the permutations of N objects with
    M fixed.
-   **PERM\_FREE** reports the unused items in a partial permutation.
-   **PERM\_INDEX\_TO\_CYCLE** converts a permutation from standard
    index to cycle form.
-   **PERM\_INS** computes the inversion sequence of a permutation.
-   **PERM\_INVERSE** inverts a permutation "in place".
-   **PERM\_INVERSE2** inverts a permutation "in place".
-   **PERM\_INVERSE3** produces the inverse of a given permutation.
-   **PERM\_LEX\_NEXT** generates permutations in lexical order, one at
    a time.
-   **PERM\_MUL** "multiplies" two permutations.
-   **PERM\_NEXT** computes all of the permutations of N objects, one at
    a time.
-   **PERM\_NEXT2** generates all the permutations of N objects.
-   **PERM\_NEXT3** computes all of the permutations of N objects, one
    at a time.
-   **PERM\_PRINT** prints a permutation.
-   **PERM\_RANDOM** selects a random permutation of N objects.
-   **PERM\_RANDOM2** selects a random permutation of N objects.
-   **PERM\_RANDOM3** selects a random permutation of N elements.
-   **PERM\_RANK** computes the rank of a given permutation.
-   **PERM\_SIGN** returns the sign of a permutation.
-   **PERM\_TO\_EQUIV** computes the partition induced by a permutation.
-   **PERM\_TO\_YTB** converts a permutation to a Young tableau.
-   **PERM\_UNRANK** "unranks" a permutation.
-   **PERRIN** returns the first N values of the Perrin sequence.
-   **PORD\_CHECK** checks a matrix representing a partial ordering.
-   **POWER\_MOD** computes mod ( A\^N, M ).
-   **POWER\_SERIES1** computes a power series for a function G(Z) =
    (1+F(Z))\^ALPHA.
-   **POWER\_SERIES2** computes the power series for a function G(Z) =
    EXP(F(Z)) - 1.
-   **POWER\_SERIES3** computes the power series for a function H(Z) =
    G(F(Z)).
-   **POWER\_SERIES4** computes the power series for a function H(Z) = G
    ( 1/F(Z) ).
-   **PRIME** returns any of the first PRIME\_MAX prime numbers.
-   **PYTHAG\_TRIPLE\_NEXT** computes the next Pythagorean triple.
-   **R4\_ABS** returns the absolute value of an R4.
-   **R4\_NINT** returns the nearest integer to an R4.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_AGM** finds the arithmetic-geometric mean of two R8's.
-   **R8\_CHOOSE** computes the combinatorial coefficient C(N,K).
-   **R8\_EPSILON** returns the R8 round off unit.
-   **R8\_FACTORIAL** computes the factorial of N.
-   **R8\_FALL** computes the falling factorial function \[X\]\_N.
-   **R8\_GAMMA\_LOG** calculates the natural logarithm of GAMMA ( X )
    for positive X.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8\_NINT** returns the integer that is nearest to a double value.
-   **R8\_PI** returns the value of PI.
-   **R8\_RISE** computes the rising factorial function \[X\]\^N.
-   **R8\_SWAP** switches two R8's.
-   **R8\_TO\_CFRAC** converts a double value to a continued fraction.
-   **R8\_TO\_DEC** converts a double quantity to a decimal
    representation.
-   **R8\_TO\_RAT** converts a real value to a rational value.
-   **R8\_UNIFORM** returns a random real in a given range.
-   **R8\_UNIFORM\_01** returns a double precision pseudorandom number.
-   **R8MAT\_DET** finds the determinant of a real N by N matrix.
-   **R8MAT\_PERM** permutes the rows and columns of a square R8MAT.
-   **R8MAT\_PERM2** permutes rows and columns of a rectangular R8MAT,
    in place.
-   **R8MAT\_PERMANENT** computes the permanent of an R8MAT.
-   **R8MAT\_PRINT** prints an R8MAT, with an optional title.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8MAT\_TRANSPOSE\_PRINT** prints an R8MAT, transposed.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **R8POLY** performs operations on R8POLY's in power or factorial
    form.
-   **R8POLY\_ADD** adds two R8POLY's.
-   **R8POLY\_DEGREE** returns the degree of an R8POLY.
-   **R8POLY\_DIF** differentiates an R8POLY.
-   **R8POLY\_DIV** computes the quotient and remainder of two R8POLY's.
-   **R8POLY\_F2P** converts a double polynomial from factorial form to
    power sum form.
-   **R8POLY\_FVAL** evaluates a double polynomial in factorial form.
-   **R8POLY\_MUL** computes the product of two double polynomials A
    and B.
-   **R8POLY\_N2P** converts a double polynomial from Newton form to
    power sum form.
-   **R8POLY\_NVAL** evaluates a double polynomial in Newton form.
-   **R8POLY\_NX** replaces one of the base points in a polynomial in
    Newton form.
-   **R8POLY\_P2F** converts a double polynomial from power sum form to
    factorial form.
-   **R8POLY\_P2N** converts a polynomial from power sum form to Newton
    form.
-   **R8POLY\_P2T** converts a real polynomial from power sum form to
    Taylor form.
-   **R8POLY\_POWER** computes a positive integer power of a polynomial.
-   **R8POLY\_PRINT** prints out a polynomial.
-   **R8POLY\_PVAL** evaluates a real polynomial in power sum form.
-   **R8POLY\_T2P** converts a real polynomial from Taylor form to power
    sum form
-   **R8VEC\_BACKTRACK** supervises a backtrack search for a real
    vector.
-   **R8VEC\_FRAC** searches for the K-th smallest entry in an R8VEC.
-   **R8VEC\_INDICATOR** sets an R8VEC to the indicator vector.
-   **R8VEC\_MIRROR\_NEXT** steps through all sign variations of an
    R8VEC.
-   **R8VEC\_PRINT** prints an R8VEC
-   **R8VEC\_UNIFORM** returns a scaled pseudorandom R8VEC.
-   **R8VEC\_UNIFORM\_01** returns a unit pseudorandom R8VEC.
-   **RAND\_INITIALIZE** initializes the RAND random number generator.
-   **RANDOM\_INITIALIZE** initializes the RANDOM random number
    generator.
-   **RAT\_ADD** adds two rational values.
-   **RAT\_DIV** divides one rational value by another.
-   **RAT\_FAREY** computes the N-th row of the Farey fraction table.
-   **RAT\_FAREY2** computes the next row of the Farey fraction table.
-   **RAT\_MUL** multiplies two fractions.
-   **RAT\_NORMALIZE** normalizes a rational number.
-   **RAT\_SUM\_FORMULA** computes the formulas for sums of powers of
    integers.
-   **RAT\_TO\_CFRAC** converts a rational value to a continued
    fraction.
-   **RAT\_TO\_DEC** converts a rational to a decimal representation.
-   **RAT\_TO\_R8** converts rational values to R8's.
-   **RAT\_WIDTH** returns the "width" of a rational number.
-   **RATMAT\_DET** finds the determinant of an N by N matrix of
    rational entries.
-   **RATMAT\_PRINT** prints out a rational matrix.
-   **REGRO\_NEXT** computes restricted growth functions one at a time.
-   **RFRAC\_TO\_CFRAC** converts a rational polynomial fraction to a
    continued fraction.
-   **RFRAC\_TO\_JFRAC** converts a rational polynomial fraction to a J
    fraction.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **SCHROEDER** generates the Schroeder numbers.
-   **SORT\_HEAP\_EXTERNAL** externally sorts a list of items into
    ascending order.
-   **SUBCOMP\_NEXT** computes the next subcomposition of N into K
    parts.
-   **SUBCOMPNZ\_NEXT** computes the next subcomposition of N into K
    nonzero parts.
-   **SUBCOMPNZ2\_NEXT** computes the next subcomposition of N into K
    nonzero parts.
-   **SUBSET\_BY\_SIZE\_NEXT** returns all subsets of an N set, in order
    of size.
-   **SUBSET\_GRAY\_NEXT** generates all subsets of a set of order N,
    one at a time.
-   **SUBSET\_GRAY\_RANK** ranks a subset of an N set, using the Gray
    code ordering.
-   **SUBSET\_GRAY\_UNRANK** produces a subset of an N set of the given
    Gray code rank.
-   **SUBSET\_LEX\_NEXT** generates the subsets of a set of N elements,
    one at a time.
-   **SUBSET\_RANDOM** selects a random subset of an N-set.
-   **SUBTRIANGLE\_NEXT** computes the next subtriangle of a triangle.
-   **THUE\_BINARY\_NEXT** returns the next element in a binary Thue
    sequence.
-   **THUE\_TERNARY\_NEXT** returns the next element in a ternary Thue
    sequence.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TRIANG** renumbers elements in accordance with a partial ordering.
-   **TUPLE\_NEXT** computes the next element of a tuple space.
-   **TUPLE\_NEXT\_FAST** computes the next element of a tuple space,
    "fast".
-   **TUPLE\_NEXT\_GE** computes the next "nondecreasing" element of a
    tuple space.
-   **TUPLE\_NEXT2** computes the next element of an integer tuple
    space.
-   **UBVEC\_ADD** adds two unsigned binary vectors.
-   **UBVEC\_TO\_UI4** makes an unsigned integer from an unsigned binary
    vector.
-   **UI4\_TO\_UBVEC** makes a unsigned binary vector from an integer.
-   **VEC\_COLEX\_NEXT** generates vectors in colex order.
-   **VEC\_COLEX\_NEXT2** generates vectors in colex order.
-   **VEC\_COLEX\_NEXT3** generates vectors in colex order.
-   **VEC\_GRAY\_NEXT** computes the elements of a product space.
-   **VEC\_GRAY\_RANK** computes the rank of a product space element.
-   **VEC\_GRAY\_UNRANK** computes the product space element of a given
    rank.
-   **VEC\_LEX\_NEXT** generates vectors in lex order.
-   **VEC\_RANDOM** selects a random N-vector of integers modulo a given
    base.
-   **VECTOR\_CONSTRAINED\_NEXT** returns the "next" constrained vector.
-   **VECTOR\_CONSTRAINED\_NEXT2** returns the "next" constrained
    vector.
-   **VECTOR\_CONSTRAINED\_NEXT3** returns the "next" constrained
    vector.
-   **VECTOR\_CONSTRAINED\_NEXT4** returns the "next" constrained
    vector.
-   **VECTOR\_CONSTRAINED\_NEXT5** returns the "next" constrained
    vector.
-   **VECTOR\_CONSTRAINED\_NEXT6** returns the "next" constrained
    vector.
-   **VECTOR\_CONSTRAINED\_NEXT7** returns the "next" constrained
    vector.
-   **VECTOR\_NEXT** returns the "next" integer vector between two
    ranges.
-   **YTB\_ENUM** enumerates the Young tableau of size N.
-   **YTB\_NEXT** computes the next Young tableau for a given shape.
-   **YTB\_PRINT** prints a Young tableau.
-   **YTB\_RANDOM** selects a random Young tableau of a given shape.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 11 December 2013.*
