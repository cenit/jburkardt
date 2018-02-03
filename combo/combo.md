COMBO\
Kreher and Stinson Combinatorial Routines {#combo-kreher-and-stinson-combinatorial-routines align="center"}
=========================================

------------------------------------------------------------------------

**COMBO** is a C++ library which includes routines for ranking,
unranking, enumerating and randomly selecting balanced sequences,
cycles, graphs, Gray codes, subsets, partitions, permutations,
restricted growth functions, Pruefer codes and trees.

Routines are available to count, list, rank and unrank such objects

-   **BAL**, balanced sequences;
-   **CYCLE**, permutations of the first N integers in cycle form;
-   **GRAPH**, graphs stored as a list of edges.
-   **GRAY**, Gray codes;
-   **KNAPSACK**, optimally filling a knapsack of given size using a set
    of smaller objects;
-   **KSUBSET**, subsets of size exactly K from a set of N objects;
-   **NPART**, partitions of an integer having exactly N parts;
-   **PART**, partitions of an integer;
-   **PERM**, permutations of the first N integers in standard form;
-   **PRUEFER**, Pruefer codes;
-   **RGF**, restricted growth functions;
-   **SETPART**, partitions of a set;
-   **SUBSET**, subsets of a set of N objects;
-   **TABLEAU**, tableaus;
-   **TREE**, trees;

Some of these sets of objects can be ordered in several different ways,
and in some cases, a separate set of ranking, unranking, and successor
routines are available for the various orderings (lexical, colexical,
revolving door, Trotter-Johnson).

Kreher and Stinson provide C source-code for the routines, as well as
other information, at [their web
site.](http://www.math.mtu.edu/~kreher/cages.md)

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**COMBO** is available in [a C version](../../c_src/combo/combo.md)
and [a C++ version](../../master/combo/combo.md) and [a FORTRAN77
version](../../f77_src/combo/combo.md) and [a FORTRAN90
version](../../f_src/combo/combo.md) and [a MATLAB
version](../../m_src/combo/combo.md) and [a Python
version](../../py_src/combo/combo.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CHANGE\_MAKING](../../master/change_making/change_making.md), a C++
library which considers the change making problem, in which a given sum
is to be formed using coins of various denominations.

[FLOYD](../../master/floyd/floyd.md), a C++ library which implements
Floyd's algorithm for finding the shortest distance between pairs of
nodes on a directed graph.

[KNAPSACK\_01](../../master/knapsack_01/knapsack_01.md), a C++
library which uses brute force to solve small versions of the 0/1
knapsack problem;

[LEGENDRE\_PRODUCT\_POLYNOMIAL](../../master/legendre_product_polynomial/legendre_product_polynomial.md),
a C++ library which defines Legendre product polynomials, creating a
multivariate polynomial as the product of univariate Legendre
polynomials.

[MONOMIAL](../../master/monomial/monomial.md), a C++ library which
enumerates, lists, ranks, unranks and randomizes multivariate monomials
in a space of M dimensions, with total degree less than N, equal to N,
or lying within a given range.

[PARTITION\_PROBLEM](../../master/partition_problem/partition_problem.md),
a C++ library which seeks solutions of the partition problem, splitting
a set of integers into two subsets with equal sum.

[POLYNOMIAL](../../master/polynomial/polynomial.md), a C++ library
which adds, multiplies, differentiates, evaluates and prints
multivariate polynomials in a space of M dimensions.

[SELECT](../../f_src/select/select.md), a FORTRAN90 library which
generates various combinatorial objects.

[SUBSET](../../master/subset/subset.md), a C++ library which
generates, ranks and unranks various combinatorial objects.

[SUBSET\_SUM](../../master/subset_sum/subset_sum.md), a C++ library
which seeks solutions of the subset sum problem.

[TOMS515](../../master/toms515/toms515.md), a C++ library which can
select subsets of size K from a set of size N. This is a version of ACM
TOMS Algorithm 515, by Bill Buckles, Matthew Lybanon.

[UNICYCLE](../../master/unicycle/unicycle.md), a C++ library which
considers permutations containing a single cycle, sometimes called
cyclic permutations.

### Reference: {#reference align="center"}

1.  Donald Kreher, Douglas Simpson,\
    Combinatorial Algorithms,\
    CRC Press, 1998,\
    ISBN: 0-8493-3988-X,\
    LC: QA164.K73.

### Source Code: {#source-code align="center"}

-   [combo.cpp](combo.cpp), the source code;
-   [combo.hpp](combo.hpp), the include file;

### Examples and Tests: {#examples-and-tests align="center"}

-   [combo\_prb.cpp](combo_prb.cpp), the calling program;
-   [combo\_prb\_output.txt](combo_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **BACKTRACK** supervises a backtrack search.
-   **BAL\_SEQ\_CHECK** checks a balanced sequence.
-   **BAL\_SEQ\_ENUM** enumerates the balanced sequences.
-   **BAL\_SEQ\_RANK** ranks a balanced sequence.
-   **BAL\_SEQ\_SUCCESSOR** computes the lexical balanced sequence
    successor.
-   **BAL\_SEQ\_TO\_TABLEAU** converts a balanced sequence to a 2 by N
    tableau.
-   **BAL\_SEQ\_UNRANK** unranks a balanced sequence.
-   **BELL\_NUMBERS** computes the Bell numbers.
-   **BELL\_VALUES** returns some values of the Bell numbers.
-   **BINOMIAL** computes the binomial coefficient C(N,K).
-   **COMBIN** computes the combinatorial coefficient C(N,K).
-   **CYCLE\_CHECK** checks a permutation in cycle form.
-   **CYCLE\_TO\_PERM** converts a permutation from cycle to array form.
-   **DIST\_ENUM** returns the number of distributions of
    indistinguishable objects.
-   **DIST\_NEXT** returns the next distribution of indistinguishable
    objects.
-   **EDGE\_CHECK** checks a graph stored by edges.
-   **EDGE\_DEGREE** returns the degree of the nodes of a graph stored
    by edges.
-   **EDGE\_ENUM** enumerates the maximum number of edges in a graph on
    N\_NODE nodes.
-   **FALL** computes the falling factorial function \[X\]\_N.
-   **GRAY\_CODE\_CHECK** checks a Gray code element.
-   **GRAY\_CODE\_ENUM** enumerates the Gray codes on N digits.
-   **GRAY\_CODE\_RANK** computes the rank of a Gray code element.
-   **GRAY\_CODE\_SUCCESSOR** computes the binary reflected Gray code
    successor.
-   **GRAY\_CODE\_UNRANK** computes the Gray code element of given rank.
-   **I4\_FACTORIAL** computes the factorial of N.
-   **I4\_FACTORIAL\_VALUES** returns values of the factorial function.
-   **I4\_HUGE** returns a "huge" I4.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_POWER** returns the value of I\^J.
-   **I4\_UNIFORM** returns a scaled pseudorandom I4.
-   **I4MAT\_PRINT** prints an I4MAT.
-   **I4MAT\_PRINT\_SOME** prints some of an I4MAT.
-   **I4VEC\_BACKTRACK** supervises a backtrack search for an I4VEC.
-   **I4VEC\_INDICATOR** sets an I4VEC to the indicator vector.
-   **I4VEC\_MAX** returns the value of the maximum element in an I4VEC.
-   **I4VEC\_PART1** partitions an integer N into NPART parts.
-   **I4VEC\_PART2** partitions an integer N into NPART nearly equal
    parts.
-   **I4VEC\_PART2\_NEW** partitions an integer N into NPART nearly
    equal parts.
-   **I4VEC\_PRINT** prints an I4VEC.
-   **I4VEC\_REVERSE** reverses the elements of an I4VEC.
-   **I4VEC\_SEARCH\_BINARY\_A** searches an ascending sorted I4VEC for
    a value.
-   **I4VEC\_SEARCH\_BINARY\_D** searches a descending sorted I4VEC for
    a value.
-   **I4VEC\_SORT\_INSERT\_A** uses an ascending insertion sort on an
    I4VEC.
-   **I4VEC\_SORT\_INSERT\_D** uses a descending insertion sort on an
    I4VEC.
-   **I4VEC\_SUM** sums the entries of an I4VEC.
-   **I4VEC\_TRANSPOSE\_PRINT** prints an I4VEC "transposed".
-   **KNAPSACK\_01** solves the 0/1 knapsack problem.
-   **KNAPSACK\_RATIONAL** solves the rational knapsack problem.
-   **KNAPSACK\_REORDER** reorders the knapsack data by "profit
    density".
-   **KSUBSET\_COLEX\_CHECK** checks a K subset in colex form.
-   **KSUBSET\_COLEX\_RANK** computes the colex rank of a K subset.
-   **KSUBSET\_COLEX\_SUCCESSOR** computes the K subset colex successor.
-   **KSUBSET\_COLEX\_UNRANK** computes the K subset of given colex
    rank.
-   **KSUBSET\_ENUM** enumerates the K element subsets of an N set.
-   **KSUBSET\_LEX\_CHECK** checks a K subset in lex form.
-   **KSUBSET\_LEX\_RANK** computes the lexicographic rank of a K
    subset.
-   **KSUBSET\_LEX\_SUCCESSOR** computes the K subset lexicographic
    successor.
-   **KSUBSET\_LEX\_UNRANK** computes the K subset of given
    lexicographic rank.
-   **KSUBSET\_REVDOOR\_RANK** computes the revolving door rank of a K
    subset.
-   **KSUBSET\_REVDOOR\_SUCCESSOR** computes the K subset revolving door
    successor.
-   **KSUBSET\_REVDOOR\_UNRANK** computes the K subset of given
    revolving door rank.
-   **MARRIAGE** finds a stable set of marriages for given preferences.
-   **MOUNTAIN** enumerates the mountains.
-   **NPART\_ENUM** enumerates the number of partitions of N with NPART
    parts.
-   **NPART\_RSF\_LEX\_RANDOM** returns a random RSF NPART partition.
-   **NPART\_RSF\_LEX\_RANK** computes the lex rank of an RSF NPART
    partition.
-   **NPART\_RSF\_LEX\_SUCCESSOR** computes the RSF lex successor for
    NPART partitions.
-   **NPART\_RSF\_LEX\_UNRANK** unranks an RSF NPART partition in the
    lex ordering.
-   **NPART\_SF\_LEX\_SUCCESSOR** computes SF NPART partition.
-   **NPART\_TABLE** tabulates the number of partitions of N having
    NPART parts.
-   **PART\_ENUM** enumerates the number of partitions of N.
-   **PART\_RSF\_CHECK** checks a reverse standard form partition of an
    integer.
-   **PART\_SF\_CHECK** checks a standard form partition of an integer.
-   **PART\_SF\_CONJUGATE** computes the conjugate of a partition.
-   **PART\_SF\_MAJORIZE** determines if partition A majorizes
    partition B.
-   **PART\_SUCCESSOR** computes the lexicographic partition successor.
-   **PART\_TABLE** tabulates the number of partitions of N.
-   **PARTITION\_GREEDY** attacks the partition problem with a greedy
    algorithm.
-   **PARTN\_ENUM** enumerates the partitions of N with maximum element
    NMAX.
-   **PARTN\_SF\_CHECK** checks an SF partition of an integer with
    largest entry NMAX.
-   **PARTN\_SUCCESSOR** computes partitions whose largest part is NMAX.
-   **PERM\_CHECK** checks a representation of a permutation.
-   **PERM\_ENUM** enumerates the permutations on N digits.
-   **PERM\_INV** computes the inverse of a permutation.
-   **PERM\_LEX\_RANK** computes the lexicographic rank of a
    permutation.
-   **PERM\_LEX\_SUCCESSOR** computes the lexicographic permutation
    successor.
-   **PERM\_LEX\_UNRANK** computes the permutation of given
    lexicographic rank.
-   **PERM\_MUL** computes the product of two permutations.
-   **PERM\_PARITY** computes the parity of a permutation.
-   **PERM\_PRINT** prints a permutation.
-   **PERM\_TJ\_RANK** computes the Trotter-Johnson rank of a
    permutation.
-   **PERM\_TJ\_SUCCESSOR** computes the Trotter-Johnson permutation
    successor.
-   **PERM\_TJ\_UNRANK** computes the permutation of given
    Trotter-Johnson rank.
-   **PERM\_TO\_CYCLE** converts a permutation from array to cycle form.
-   **PRUEFER\_CHECK** checks a Pruefer code.
-   **PRUEFER\_ENUM** enumerates the Pruefer codes on N-2 digits.
-   **PRUEFER\_RANK** ranks a Pruefer code.
-   **PRUEFER\_SUCCESSOR** computes the lexical Pruefer sequence
    successor.
-   **PRUEFER\_TO\_TREE** converts a Pruefer code to a tree.
-   **PRUEFER\_TO\_TREE\_NEW** converts a Pruefer code to a tree.
-   **PRUEFER\_UNRANK** unranks a Pruefer code.
-   **QUEENS** finds possible positions for the K-th nonattacking queen.
-   **R4\_NINT** returns the nearest integer to an R4.
-   **R4\_UNIFORM** returns a scaled pseudorandom R4.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_ADD** adds two R8's.
-   **R8\_EPSILON** returns the R8 roundoff unit.
-   **R8\_GAMMA\_LOG** calculates the natural logarithm of GAMMA ( X )
    for positive X.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8\_NINT** returns the nearest integer to an R8.
-   **R8VEC\_BACKTRACK** supervises a backtrack search for a real
    vector.
-   **R8VEC\_DOT\_PRODUCT** computes the dot product of a pair of
    R8VEC's.
-   **RGF\_CHECK** checks a restricted growth function.
-   **RGF\_ENUM** enumerates the restricted growth functions on M.
-   **RGF\_G\_TABLE** tabulates the generalized restricted growth
    functions.
-   **RGF\_RANK** ranks a restricted growth function.
-   **RGF\_SUCCESSOR** generates the next restricted growth function.
-   **RGF\_TO\_SETPART** converts a restricted growth function to a set
    partition.
-   **RGF\_UNRANK** returns the restricted growth function of a given
    rank.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **SETPART\_CHECK** checks a set partition.
-   **SETPART\_ENUM** enumerates the partitions of a set of M elements.
-   **SETPART\_TO\_RGF** converts a set partition to a restricted growth
    function.
-   **STIRLING\_NUMBERS1** computes Stirling numbers of the first kind.
-   **STIRLING\_NUMBERS2** computes Stirling numbers of the second kind.
-   **SUBSET\_CHECK** checks a subset.
-   **SUBSET\_COLEX\_RANK** computes the colexicographic rank of a
    subset.
-   **SUBSET\_COLEX\_SUCCESSOR** computes the subset colexicographic
    successor.
-   **SUBSET\_COLEX\_UNRANK** computes the subset of given
    colexicographic rank.
-   **SUBSET\_COMPLEMENT** computes the complement of a set.
-   **SUBSET\_DISTANCE** computes the Hamming distance between two sets.
-   **SUBSET\_ENUM** enumerates the subsets of a set with N elements.
-   **SUBSET\_INTERSECT** computes the intersection of two sets.
-   **SUBSET\_LEX\_RANK** computes the lexicographic rank of a subset.
-   **SUBSET\_LEX\_SUCCESSOR** computes the subset lexicographic
    successor.
-   **SUBSET\_LEX\_UNRANK** computes the subset of given lexicographic
    rank.
-   **SUBSET\_UNION** computes the union of two sets.
-   **SUBSET\_WEIGHT** computes the Hamming weight of a set.
-   **SUBSET\_XOR** computes the symmetric difference of two sets.
-   **SUBSETSUM\_SWAP** seeks a solution of the subset sum problem by
    swapping.
-   **TABLEAU\_CHECK** checks a 2 by N tableau.
-   **TABLEAU\_ENUM** enumerates the 2 by N standard tableaus.
-   **TABLEAU\_TO\_BAL\_SEQ** converts a 2 by N tableau to a balanced
    sequence.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TREE\_CHECK** checks a tree.
-   **TREE\_ENUM** enumerates the trees on N nodes.
-   **TREE\_RANK** ranks a tree.
-   **TREE\_SUCCESSOR** returns the successor of a tree.
-   **TREE\_TO\_PRUEFER** converts a tree to a Pruefer code.
-   **TREE\_UNRANK** unranks a tree.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 28 July 2011.*
