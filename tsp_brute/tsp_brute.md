TSP\_BRUTE\
Brute Force Solution of Traveling Salesman Problem {#tsp_brute-brute-force-solution-of-traveling-salesman-problem align="center"}
==================================================

------------------------------------------------------------------------

**TSP\_BRUTE** is a C++ program which solves small versions of the
traveling salesman problem, using brute force.

The user must prepare a file beforehand, containing the city-to-city
distances. The program will request the name of this file, and then read
it in. An example of such a file is:

            0  3  4  2  7
            3  0  4  6  3
            4  4  0  5  8
            2  6  5  0  6
            7  3  8  6  0
          

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TSP\_BRUTE** is available in [a C
version](../../c_src/tsp_brute/tsp_brute.html) and [a C++
version](../../cpp_src/tsp_brute/tsp_brute.html) and [a FORTRAN77
version](../../f77_src/tsp_brute/tsp_brute.html) and [a FORTRAN90
version](../../f_src/tsp_brute/tsp_brute.html) and [a MATLAB
version](../../m_src/tsp_brute/tsp_brute.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CHANGE\_MAKING](../../cpp_src/change_making/change_making.html), a C++
library which considers the change making problem, in which a given sum
is to be formed using coins of various denominations.

[COMBINATION\_LOCK](../../cpp_src/combination_lock/combination_lock.html),
a C++ program which simulates the process of determining the secret
combination of a lock.

[KNAPSACK\_01](../../cpp_src/knapsack_01/knapsack_01.html), a C++
library which uses brute force to solve small versions of the 0/1
knapsack problem;

[PARTITION\_PROBLEM](../../cpp_src/partition_problem/partition_problem.html),
a C++ library which seeks solutions of the partition problem, splitting
a set of integers into two subsets with equal sum.

[SATISFY](../../cpp_src/satisfy/satisfy.html), a C++ program which
demonstrates, for a particular circuit, an exhaustive search for
solutions of the circuit satisfiability problem.

[SUBSET\_SUM](../../cpp_src/subset_sum/subset_sum.html), a C++ library
which seeks solutions of the subset sum problem.

[TSP](../../datasets/tsp/tsp.html), a dataset directory which contains
test data for the traveling salesperson problem;

### Reference: {#reference align="center"}

1.  Gerhard Reinelt,\
    TSPLIB - A Traveling Salesman Problem Library,\
    ORSA Journal on Computing,\
    Volume 3, Number 4, Fall 1991, pages 376-384.

### Source Code: {#source-code align="center"}

-   [tsp\_brute.cpp](tsp_brute.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [tsp\_5.txt](tsp_5.txt), an example of a 5x5 city-to-city distance
    matrix.
-   [tsp\_5\_output.txt](tsp_5_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for TSP\_BRUTE.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is a case insensitive comparison of two characters for
    equality.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **FILE\_COLUMN\_COUNT** counts the number of columns in the first
    line of a file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **PERM\_NEXT3** computes all of the permutations of N objects, one
    at a time.
-   **R8\_HUGE** returns a very large R8.
-   **R8MAT\_DATA\_READ** reads data from an R8MAT file.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 04 December 2013.*
