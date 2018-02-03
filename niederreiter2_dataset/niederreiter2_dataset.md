NIEDERREITER2\_DATASET\
Create a Niederreiter Dataset, Base = 2. {#niederreiter2_dataset-create-a-niederreiter-dataset-base-2. align="center"}
========================================

------------------------------------------------------------------------

**NIEDERREITER2\_DATASET** is a C++ program which creates a Niederreiter
quasirandom dataset with base 2.

### Usage: {#usage align="center"}

> **niederreiter2\_dataset** *m* *n* *skip*

where

-   *m* is the spatial dimension;
-   *n* is the number of points to generate;
-   *skip* is the number of initial values to skip. A recommended value
    is 4096.

The data is written to the file **niederreiter2\_*m*\_*n*.txt**.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**NIEDERREITER2\_DATASET** is available in [a C++
version](../../master/niederreiter2_dataset/niederreiter2_dataset.md)
and [a FORTRAN90
version](../../f_src/niederreiter2_dataset/niederreiter2_dataset.md)
and [a MATLAB
version](../../m_src/niederreiter2_dataset/niederreiter2_dataset.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FAURE\_DATASET](../../master/faure_dataset/faure_dataset.md), a C++
program which creates a Faure quasirandom dataset;

[GRID\_DATASET](../../master/grid_dataset/grid_dataset.md), a C++
program which creates a grid sequence and writes it to a file.

[LATIN\_CENTER\_DATASET](../../master/latin_center_dataset/latin_center_dataset.md),
a C++ program which creates a Latin Center Hypercube dataset;

[LATIN\_EDGE\_DATASET](../../master/latin_edge_dataset/latin_edge_dataset.md),
a C++ program which creates a Latin Edge Hypercube dataset;

[LATIN\_RANDOM\_DATASET](../../master/latin_random_dataset/latin_random_dataset.md),
a C++ program which creates a Latin Random Hypercube dataset;

[NIEDERREITER2](../../master/niederreiter2/niederreiter2.md), a C++
library which computes the elements of the sequence. A compiled version
of that library must be available to build **NIEDERREITER2\_DATASET**.

[NIEDERREITER2](../../datasets/niederreiter2/niederreiter2.md), a
dataset directory which contains examples of the files created by
**NIEDERREITER2\_DATASET**.

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

1.  Paul Bratley, Bennett Fox,\
    Algorithm 659: Implementing Sobol's Quasirandom Sequence Generator,\
    ACM Transactions on Mathematical Software,\
    Volume 14, Number 1, pages 88-100, 1988.
2.  Paul Bratley, Bennett Fox, Harald Niederreiter,\
    Algorithm 738: Programs to Generate Niederreiter's Low-Discrepancy
    Sequences,\
    ACM Transactions on Mathematical Software,\
    Volume 20, Number 4, pages 494-495, 1994.
3.  Paul Bratley, Bennett Fox, Harald Niederreiter,\
    Implementation and Tests of Low Discrepancy Sequences,\
    ACM Transactions on Modeling and Computer Simulation,\
    Volume 2, Number 3, pages 195-213, 1992.
4.  Bennett Fox,\
    Algorithm 647: Implementation and Relative Efficiency of Quasirandom
    Sequence Generators,\
    ACM Transactions on Mathematical Software,\
    Volume 12, Number 4, pages 362-376, 1986.
5.  Rudolf Lidl, Harald Niederreiter,\
    Finite Fields,\
    Cambridge University Press, 1984, page 553.
6.  Harald Niederreiter,\
    Low-discrepancy and low-dispersion sequences,\
    Journal of Number Theory,\
    Volume 30, 1988, pages 51-70.
7.  Harald Niederreiter,\
    Random Number Generation and quasi-Monte Carlo Methods,\
    SIAM, 1992.

### Source Code: {#source-code align="center"}

-   [niederreiter2\_dataset.cpp](niederreiter2_dataset.cpp), the source
    code.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for NIEDERREITER2\_DATASET.
-   **CALCC2** computes values of the constants C(I,J,R).
-   **CALCV2** calculates the value of the constants V(J,R).
-   **I4\_POWER** returns the value of I\^J.
-   **NIEDERREITER2** returns an element of the Niederreiter sequence
    base 2.
-   **NIEDERREITER2\_GENERATE** generates a set of Niederreiter values.
-   **PLYMUL2** multiplies two polynomials in the field of order 2
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **SETFLD2** sets up arithmetic tables for the finite field of
    order 2.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 11 December 2009.*
