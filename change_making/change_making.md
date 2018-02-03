CHANGE\_MAKING\
Choosing Coins To Match a Given Value {#change_making-choosing-coins-to-match-a-given-value align="center"}
=====================================

------------------------------------------------------------------------

**CHANGE\_MAKING** a C++ library which considers the change making
problem, in which a given sum is to be formed using coins of various
denominations.

The change making problem is given a target value C and a set of N coin
denominations with value W. The task is to determine the minimum number
of coins needed to form the given value.

In the unbounded change making problem, there are a limitless supply of
coins of each denomination. In the bounded change making problem, each
denomination is available only up to some given limit.

For some sets of denominations, there will be target values that cannot
be formed. (This relates to Frobenius's problem.)

A greedy algorithm for solving the change making problem repeatedly
selects the largest coin denomination available that does not exceed the
remainder. A greedy algorithm is simple, but it is not guaranteed to
find a solution when one exists, and it is not guaranteed to find a
minimal solution.

For certain sets of coin denominations, such as the US system of 1, 5,
10, 25, 50, 100, there is always a solution, and the greedy algorithm
will always find the minimal solution.

For a set of coins such as the old British system, using 1, 2, 6, 12,
24, 48 and 60, there is always a solution, but the greedy algorithm will
not always find the minimal solution.

For artificial systems such as 20, 25, 40, it is easy to see that there
are many cases where there is no solution (you can't make ANY value that
isn't a multiple of 5) but that the greedy will fail to find a solution
for 50, even though that is easily formed as 25 + 25.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**CHANGE\_MAKING** is available in [a C
version](../../c_src/change_making/change_making.md) and [a C++
version](../../master/change_making/change_making.md) and [a
FORTRAN90 version](../../f_src/change_making/change_making.md) and [a
FORTRAN77 version](../../f77_src/change_making/change_making.md) and
[a MATLAB version.](../../m_src/change_making/change_making.md)

### Related Data and Programs: {#related-data-and-programs align="center"}

[CHANGE\_MAKING](../../datasets/change_making/change_making.md), a
dataset directory which contains test data for the change making
problem;

[COMBINATION\_LOCK](../../master/combination_lock/combination_lock.md),
a C++ program which simulates the process of determining the secret
combination of a lock.

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

[SUBSET](../../master/subset/subset.md), a C++ library which
enumerates, generates, ranks and unranks combinatorial objects including
combinations, partitions, subsets, index sets, and trees.

[SUBSET\_SUM](../../master/subset_sum/subset_sum.md), a C++ library
which seeks solutions of the subset sum problem, in which it is desired
to find a subset of a set of integers which has a given sum.

[TSP\_BRUTE](../../master/tsp_brute/tsp_brute.md), a C++ program
which reads a file of city-to-city distances and solves the traveling
salesperson problem, using brute force.

### Source Code: {#source-code align="center"}

-   [change\_making.cpp](change_making.cpp), the source code.
-   [change\_making.hpp](change_making.hpp), the includd file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [change\_making\_prb.cpp](change_making_prb.cpp), a sample calling
    program.
-   [change\_making\_prb\_output.txt](change_making_prb_output.txt), the
    output file.

### List of Routines: {#list-of-routines align="center"}

-   **CHANGE\_MAKING\_LIST** solves the change making problem.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 21 August 2014.*
