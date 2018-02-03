SUBSET\_SUM\
The Subset Sum Problem {#subset_sum-the-subset-sum-problem align="center"}
======================

------------------------------------------------------------------------

**SUBSET\_SUM** is a C++ library which seeks solutions of the subset sum
problem.

SUBSET\_SUM\_NEXT works by backtracking, returning all possible
solutions one at a time, keeping track of the selected weights using a
0/1 mask vector of size N.

SUBSET\_SUM\_TABLE works by a kind of dynamic programming approach,
constructing a table of all possible sums from 1 to S. The storage
required is N \* S, so for large S this can be an issue.

SUBSET\_SUM\_FIND works by brute force, trying every possible subset to
see if it sums to the desired value. It uses the bits of a 32 bit
integer to keep track of the possibilities, and hence cannot work with
more N = 31 weights.

### Licensing: {#licensing align="center"}

I don't care what you do with this code.

### Languages: {#languages align="center"}

**SUBSET\_SUM** is available in [a C
version](../../c_src/subset_sum/subset_sum.md) and [a C++
version](../../master/subset_sum/subset_sum.md) and [a FORTRAN90
version](../../f_src/subset_sum/subset_sum.md) and [a MATLAB
version](../../m_src/subset_sum/subset_sum.md) and [a Python
version](../../py_src/subset_sum/subset_sum.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CHANGE\_MAKING](../../master/change_making/change_making.md), a C++
library which considers the change making problem, in which a given sum
is to be formed using coins of various denominations.

[COMBO](../../master/combo/combo.md), a C++ library which includes
many combinatorial routines.

[KNAPSACK\_01](../../master/knapsack_01/knapsack_01.md), a C++
library which uses brute force to solve small versions of the 0/1
knapsack problem;

[PARTITION\_PROBLEM](../../master/partition_problem/partition_problem.md),
a C++ library which seeks solutions of the partition problem, splitting
a set of integers into two subsets with equal sum.

[SATISFY](../../master/satisfy/satisfy.md), a C++ program which
demonstrates, for a particular circuit, an exhaustive search for
solutions of the circuit satisfiability problem.

[SUBSET\_SUM](../../datasets/subset_sum/subset_sum.md), a dataset
directory which contains examples of the subset sum problem, in which a
set of numbers is given, and is desired to find at least one subset that
sums to a given target value.

[TSP\_BRUTE](../../master/tsp_brute/tsp_brute.md), a C++ program
which reads a file of city-to-city distances and solves the traveling
salesperson problem, using brute force.

### Reference: {#reference align="center"}

1.  Donald Kreher, Douglas Simpson,\
    Combinatorial Algorithms,\
    CRC Press, 1998,\
    ISBN: 0-8493-3988-X,\
    LC: QA164.K73.
2.  Silvano Martello, Paolo Toth,\
    Knapsack Problems: Algorithms and Computer Implementations,\
    Wiley, 1990,\
    ISBN: 0-471-92420-2,\
    LC: QA267.7.M37.

### Source Code: {#source-code align="center"}

-   [subset\_sum.cpp](subset_sum.cpp), the source code.
-   [subset\_sum.hpp](subset_sum.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [subset\_sum\_prb.cpp](subset_sum_prb.cpp), a sample calling
    program.
-   [subset\_sum\_prb.txt](subset_sum_prb.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **BACKUP\_ONE** seeks the last 1 in the subarray U\[0:TOLD-1\].
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_POWER** returns the value of I\^J.
-   **I4\_TO\_DIGITS\_BINARY** produces the binary digits of an I4.
-   **I4VEC\_COPY\_NEW** copies an I4VEC to a "new" I4VEC.
-   **I4VEC\_DOT\_PRODUCT** computes the dot product of two I4VEC's.
-   **I4VEC\_PRINT** prints an I4VEC.
-   **SUBSET\_SUM\_COUNT** counts solutions to the subset sum problem in
    a range.
-   **SUBSET\_SUM\_COUNT\_TEST** tests SUBSET\_SUM\_COUNT.
-   **SUBSET\_SUM\_COUNT\_TESTS** tests SUBSET\_SUM\_COUNT\_TEST.
-   **SUBSET\_SUM** seeks a subset of a set that has a given sum.
-   **SUBSET\_SUM\_FIND\_TEST** tests SUBSET\_SUM\_FIND.
-   **SUBSET\_SUM\_FIND\_TESTS** tests SUBSET\_SUM\_FIND\_TEST.
-   **SUBSET\_SUM\_NEXT** seeks, one at a time, subsets of V that sum
    to S.
-   **SUBSET\_SUM\_NEXT\_TEST** tests the SUBSET\_SUM\_NEXT library.
-   **SUBSET\_SUM\_NEXT\_TESTS** calls SUBSET\_SUM\_NEXT\_TEST with
    various values.
-   **SUBSET\_SUM\_TABLE** sets a subset sum table.
-   **SUBSET\_SUM\_TABLE\_TEST** tests SUBSET\_SUM\_TABLE.
-   **SUBSET\_SUM\_TABLE\_TESTS** tests SUBSET\_SUM\_TABLE\_TEST.
-   **SUBSET\_SUM\_TABLE\_TO\_LIST** converts a subset sum table to a
    list.
-   **SUBSET\_SUM\_TABLE\_TO\_LIST\_LENGTH** returns the length of a
    table list.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 15 July 2017.*
