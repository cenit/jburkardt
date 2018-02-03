PARTITION\_PROBLEM\
The Partition Problem {#partition_problem-the-partition-problem align="center"}
=====================

------------------------------------------------------------------------

**PARTITION\_PROBLEM** is a C++ library which seeks solutions of the
partition problem, splitting a set of integers into two subsets with
equal sum.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**PARTITION\_PROBLEM** is available in [a C
version](../../c_src/partition_problem/partition_problem.html) and [a
C++ version](../../cpp_src/partition_problem/partition_problem.html) and
[a FORTRAN90
version](../../f_src/partition_problem/partition_problem.html) and [a
FORTRAN77
version](../../f77_src/partition_problem/partition_problem.html) and [a
MATLAB version](../../m_src/partition_problem/partition_problem.html)
and [a Python
version](../../py_src/partition_problem/partition_problem.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CHANGE\_MAKING](../../cpp_src/change_making/change_making.html), a C++
library which considers the change making problem, in which a given sum
is to be formed using coins of various denominations.

[COMBO](../../cpp_src/combo/combo.html), a C++ library which includes
many combinatorial routines.

[KNAPSACK\_01](../../cpp_src/knapsack_01/knapsack_01.html), a C++
library which uses brute force to solve small versions of the 0/1
knapsack problem;

[PARTITION\_PROBLEM](../../datasets/partition_problem/partition_problem.html),
a dataset directory which contains examples of the partition problem, in
which a set of numbers is given, and it is desired to break the set into
two subsets with equal sum.

[SATISFY](../../cpp_src/satisfy/satisfy.html), a C++ program which
demonstrates, for a particular circuit, an exhaustive search for
solutions of the circuit satisfiability problem.

[SUBSET](../../cpp_src/subset/subset.html), a C++ library which
enumerates, generates, ranks and unranks combinatorial objects including
combinations, partitions, subsets, index sets, and trees.

[SUBSET\_SUM](../../cpp_src/subset_sum/subset_sum.html), a C++ library
which seeks solutions of the subset sum problem.

[TSP\_BRUTE](../../c_src/tsp_brute/tsp_brute.html), a C program which
reads a file of city-to-city distances and solves the traveling
salesperson problem, using brute force.

### Reference: {#reference align="center"}

1.  Alexander Dewdney,\
    The Turing Omnibus,\
    Freeman, 1989,\
    ISBN13: 9780716781547,\
    LC: QA76.D45.
2.  Brian Hayes,\
    The Easiest Hard Problem,\
    American Scientist,\
    Volume 90, Number 2, March-April 2002, pages 113-117.
3.  Silvano Martello, Paolo Toth,\
    Knapsack Problems: Algorithms and Computer Implementations,\
    Wiley, 1990,\
    ISBN: 0-471-92420-2,\
    LC: QA267.7.M37.

### Source Code: {#source-code align="center"}

-   [partition\_problem.cpp](partition_problem.cpp), the source code.
-   [partition\_problem.hpp](partition_problem.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [partition\_problem\_prb.cpp](partition_problem_prb.cpp), a sample
    calling program.
-   [partition\_problem\_prb\_output.txt](partition_problem_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **I4\_ABS** returns the absolute value of an I4.
-   **I4VEC\_COPY** copies an I4VEC.
-   **I4VEC\_DOT\_PRODUCT** computes the dot product of two I4VEC's.
-   **I4VEC\_SUM** sums the entries of an I4VEC.
-   **PARTITION\_BRUTE** approaches the partition problem using brute
    force.
-   **PARTITION\_COUNT** counts the solutions to a partition problem.
-   **SUBSET\_NEXT** computes the subset lexicographic successor.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 12 May 2012.*
