LATIN\_RANDOM\_DATASET\
Generate Latin Random Square Datasets {#latin_random_dataset-generate-latin-random-square-datasets align="center"}
=====================================

------------------------------------------------------------------------

**LATIN\_RANDOM\_DATASET** is a C++ library which creates a Latin Random
Square dataset.

A Latin square, in **M** dimensional space, with **N** points, can be
thought of as being constructed by dividing each of the **M** coordinate
dimensions into **N** equal intervals. The I-th coordinates of the **N**
subsquares are defined by assigning each possible value exactly once to
one subsquare. Such a set is called a Latin Square.

If we now select at random one point from each subsquare, we have what
we will term a "Latin Random Square".

### Usage: {#usage align="center"}

> **latin\_random\_dataset** *m* *n* *seed*

where

-   *m* is the spatial dimension;
-   *n* is the number of points to generate;
-   *seed* is the initial seed value.

The data is written to the file **latin\_random\_*m*\_*n*.txt**.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**LATIN\_RANDOM\_DATASET** is available in [a C
version](../../c_src/latin_random_dataset/latin_random_dataset.md) and
[a C++
version](../../master/latin_random_dataset/latin_random_dataset.md)
and [a FORTRAN77
version](../../f77_src/latin_random_dataset/latin_random_dataset.md)
and [a FORTRAN90
version](../../f_src/latin_random_dataset/latin_random_dataset.md) and
[a MATLAB
version](../../m_src/latin_random_dataset/latin_random_dataset.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FAURE\_DATASET](../../master/faure_dataset/faure_dataset.md), a C++
program which creates a Faure quasirandom dataset;

[GRID\_DATASET](../../master/grid_dataset/grid_dataset.md), a C++
program which creates a grid sequence and writes it to a file.

[LATIN\_CENTER\_DATASET](../../master/latin_center_dataset/latin_center_dataset.md),
a C++ program which creates a Latin Center Hypercube dataset;

[LATIN\_EDGE\_DATASET](../../master/latin_edge_dataset/latin_edge_dataset.md),
a C++ program which creates a Latin Edge Hypercube dataset;

[LATIN\_RANDOM](../../master/latin_random/latin_random.md) is a C++
library which contains the computational routines needed by
**LATIN\_RANDOM\_DATASET**, and a compiled version of that library must
be available to build the program.

[LATIN\_RANDOM](../../datasets/latin_random/latin_random.md) is a
dataset directory which contains sample datasets created by
**LATIN\_RANDOM\_DATASET**.

[NIEDERREITER2\_DATASET](../../master/niederreiter2_dataset/niederreiter2_dataset.md),
a C++ program which creates a Niederreiter quasirandom dataset with base
2;

[NORMAL\_DATASET](../../master/normal_dataset/normal_dataset.md), a
C++ program which generates a dataset of multivariate normal
pseudorandom values and writes them to a file.

[SOBOL\_DATASET](../../master/sobol_dataset/sobol_dataset.md), a C++
program which computes a Sobol quasirandom sequence and writes it to a
file.

[UNIFORM\_DATASET](../../master/uniform_dataset/uniform_dataset.md),
a C++ program which generates a dataset of multivariate uniform
pseudorandom values and writes them to a file.

[VAN\_DER\_CORPUT\_DATASET](../../master/van_der_corput_dataset/van_der_corput_dataset.md),
a C++ program which creates a van der Corput quasirandom sequence and
writes it to a file.

### Reference: {#reference align="center"}

1.  Paul Bratley, Bennett Fox, Linus Schrage,\
    A Guide to Simulation,\
    Springer Verlag, pages 201-202, 1983.
2.  CJ Colbourn, JH Dinitz,\
    CRC Handbook of Combinatorial Design,\
    CRC, 1996.
3.  Bennett Fox,\
    Algorithm 647:\
    Implementation and Relative Efficiency of Quasirandom Sequence
    Generators,\
    ACM Transactions on Mathematical Software,\
    Volume 12, Number 4, pages 362-376, 1986.
4.  Michael McKay, William Conover, Richard Beckman,\
    A Comparison of Three Methods for Selecting Values of Input
    Variables in the Analysis of Output From a Computer Code,\
    Technometrics,\
    Volume 21, pages 239-245, 1979.
5.  Albert Nijenhuis, Herbert Wilf,\
    Combinatorial Algorithms,\
    Academic Press, 1978, second edition,\
    ISBN 0-12-519260-6.
6.  Herbert Ryser,\
    Combinatorial Mathematics,\
    Mathematical Association of America, 1963.

### Source Code: {#source-code align="center"}

-   [latin\_random\_dataset.cpp](latin_random_dataset.cpp), the source
    code.

### Examples and Data: {#examples-and-data align="center"}

-   [latin\_random\_2\_100.txt](latin_random_2_100.txt), is the file
    created by the command **latin\_random\_dataset 2 100 12346789**.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for LATIN\_RANDOM\_DATASET.
-   **GET\_SEED** returns a random seed for the random number generator.
-   **I4\_UNIFORM\_AB** returns a scaled pseudorandom I4 between A
    and B.
-   **LATIN\_RANDOM\_NEW** returns points in a Latin Random square.
-   **PERM\_UNIFORM\_NEW** selects a random permutation of N objects.
-   **R8MAT\_UNIFORM\_01\_NEW** returns a unit pseudorandom R8MAT.
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 12 November 2014.*
