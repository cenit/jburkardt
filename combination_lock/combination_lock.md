COMBINATION\_LOCK\
The Combination Lock Problem {#combination_lock-the-combination-lock-problem align="center"}
============================

------------------------------------------------------------------------

**COMBINATION\_LOCK** is a C++ program which simulates the process of
determining the combination of a lock.

This program demonstrates the method of exhaustive search, that is, it
searches for an answer by trying every possibility. This requires a way
of logically ordering the possibilities.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**COMBINATION\_LOCK** is available in [a C
version](../../c_src/combination_lock/combination_lock.html) and [a C++
version](../../cpp_src/combination_lock/combination_lock.html) and [a
FORTRAN77 version](../../f77_src/combination_lock/combination_lock.html)
and [a FORTRAN90
version](../../f_src/combination_lock/combination_lock.html) and [a
MATLAB version](../../m_src/combination_lock/combination_lock.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CHANGE\_MAKING](../../cpp_src/change_making/change_making.html), a C++
library which considers the change making problem, in which a given sum
is to be formed using coins of various denominations.

[COMBO](../../cpp_src/combo/combo.html), a C++ library which includes
many combinatorial routines.

[KNAPSACK\_01](../../cpp_src/knapsack_01/knapsack_01.html), a C++
library which uses brute force to solve small versions of the 0/1
knapsack problem;

[PARTITION\_PROBLEM](../../cpp_src/partition_problem/partition_problem.html),
a C++ library which seeks solutions of the partition problem, splitting
a set of integers into two subsets with equal sum.

[SATISFY](../../cpp_src/satisfy/satisfy.html), a C++ program which
demonstrates, for a particular circuit, an exhaustive search for
solutions of the circuit satisfiability problem.

[SUBSET](../../cpp_src/subset/subset.html), a C++ library which
enumerates combinations, partitions, subsets, index sets, and other
combinatorial objects.

[SUBSET\_SUM](../../cpp_src/subset_sum/subset_sum.html), a C++ library
which seeks solutions of the subset sum problem.

[TSP\_BRUTE](../../cpp_src/tsp_brute/tsp_brute.html), a C++ program
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

-   [combination\_lock.cpp](combination_lock.cpp), the source code.
-   [combination\_lock.hpp](combination_lock.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [combination\_lock\_prb.cpp](combination_lock_prb.cpp), a sample
    calling program.
-   [combination\_lock\_prb\_output.txt](combination_lock_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **BICYCLE\_LOCK** finds the combination on a typical bicycle lock.
-   **COMBINATION\_LOCK** determines the combination of a lock.
-   **COMBINATION\_NEXT** generates lock combinations in lex order.
-   **GET\_SEED** returns a random seed for the random number generator.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the smaller of two I4's.
-   **I4\_UNIFORM** returns a scaled pseudorandom I4.
-   **I4VEC\_EQ** is true if two I4VEC's are equal.
-   **I4VEC\_PRINT** prints an I4VEC.
-   **R4\_ABS** returns the absolute value of an R4.
-   **R4\_NINT** returns the nearest integer to an R4.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last modified on 13 May 2012.*
