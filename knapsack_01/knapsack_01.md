KNAPSACK\_01\
Maximal Packing of a Knapsack with Given Items {#knapsack_01-maximal-packing-of-a-knapsack-with-given-items align="center"}
==============================================

------------------------------------------------------------------------

**KNAPSACK\_01**, a C++ library which uses brute force to solve small
versions of the 0/1 knapsack problem.

In the 0/1 knapsack problem, we are given a knapsack with carrying
capacity C, and a set of N items, with the I-th item having a weight of
W(I). We want to pack as much total weight as possible into the knapsack
without exceeding the weight limit. We do this by specifying which items
we will not take (0) or take (1).

This library uses a simple brute force or exhaustive search method,
which is guaranteed to get the optimal solution, but which is not
efficient for large values of N.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**KNAPSACK\_01** is available in [a C
version](../../c_src/knapsack_01/knapsack_01.html) and [a C++
version](../../cpp_src/knapsack_01/knapsack_01.html) and [a FORTRAN90
version](../../f_src/knapsack_01/knapsack_01.html) and [a FORTRAN77
version](../../f77_src/knapsack_01/knapsack_01.html) and [a MATLAB
version](../../m_src/knapsack_01/knapsack_01.html) and [a Python
version.](../../py_src/knapsack_01/knapsack_01.html)

### Related Data and Programs: {#related-data-and-programs align="center"}

[CHANGE\_MAKING](../../cpp_src/change_making/change_making.html), a C++
library which considers the change making problem, in which a given sum
is to be formed using coins of various denominations.

[COMBINATION\_LOCK](../../cpp_src/combination_lock/combination_lock.html),
a C++ program which simulates the process of determining the secret
combination of a lock.

[COMBO](../../cpp_src/combo/combo.html), a C++ library which includes
many combinatorial routines.

[KNAPSACK\_01](../../datasets/knapsack_01/knapsack_01.html), a dataset
directory which contains test data for the 0/1 knapsack problem;

[PARTITION\_PROBLEM](../../cpp_src/partition_problem/partition_problem.html),
a C++ library which seeks solutions of the partition problem, splitting
a set of integers into two subsets with equal sum.

[SATISFY](../../cpp_src/satisfy/satisfy.html), a C++ program which
demonstrates, for a particular circuit, an exhaustive search for
solutions of the circuit satisfiability problem.

[SUBSET](../../cpp_src/subset/subset.html), a C++ library which
enumerates, generates, ranks and unranks combinatorial objects including
combinations, partitions, subsets, index sets, and trees.

[SUBSET\_SUM](../../cpp_src/subset_sum/subset_sum.html), a C++ library
which seeks solutions of the subset sum problem, in which it is desired
to find a subset of a set of integers which has a given sum.

[TSP\_BRUTE](../../cpp_src/tsp_brute/tsp_brute.html), a C++ program
which reads a file of city-to-city distances and solves the traveling
salesperson problem, using brute force.

### Source Code: {#source-code align="center"}

-   [knapsack\_01.cpp](knapsack_01.cpp), the source code.
-   [knapsack\_01.hpp](knapsack_01.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [knapsack\_01\_prb.cpp](knapsack_01_prb.cpp), a sample calling
    program.
-   [knapsack\_01\_prb\_output.txt](knapsack_01_prb_output.txt), the
    output file.

### List of Routines: {#list-of-routines align="center"}

-   **KNAPSACK\_01** seeks a solution of the 0/1 Knapsack problem.
-   **SUBSET\_GRAY\_NEXT** generates all subsets of a set of order N,
    one at a time.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 23 August 2014.*
