FAURE\_DATASET\
Generate Datasets\
of Faure Quasirandom Sequences {#faure_dataset-generate-datasets-of-faure-quasirandom-sequences align="center"}
==============================

------------------------------------------------------------------------

**FAURE\_DATASET** is a C++ program which creates a Faure quasirandom
sequence and writes it to a file.

### Usage: {#usage align="center"}

> **faure\_dataset** *m* *n* *skip*

where

-   *m* is the spatial dimension. This implicitly determines **base**,
    which is the smallest prime number greater than or equal to *m*;
-   *n* is the number of points to generate;
-   *skip* is the initial number of points to skip over. The recommended
    value of *skip* is **base\^4-1**.

The data is written to the file **faure\_*m*\_*n*.txt**.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FAURE\_DATASET** is available in [a C++
version](../../master/faure_dataset/faure_dataset.md) and [a
FORTRAN90 version](../../f_src/faure_dataset/faure_dataset.md) and [a
MATLAB version](../../m_src/faure_dataset/faure_dataset.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FAURE](../../datasets/faure/faure.md), a dataset directory which
contains examples of the datasets created by **FAURE\_DATASET**.

[FAURE](../../master/faure/faure.md), a C++ library which computes
elements of a Faure sequence.

[GRID\_DATASET](../../master/grid_dataset/grid_dataset.md), a C++
program which creates a grid sequence and writes it to a file.

[LATIN\_CENTER\_DATASET](../../master/latin_center_dataset/latin_center_dataset.md),
a C++ program which creates a Latin Center Hypercube dataset;

[LATIN\_EDGE\_DATASET](../../master/latin_edge_dataset/latin_edge_dataset.md),
a C++ program which creates a Latin Edge Hypercube dataset;

[LATIN\_RANDOM\_DATASET](../../master/latin_random_dataset/latin_random_dataset.md),
a C++ program which creates a Latin Random Hypercube dataset;

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

1.  Paul Bratley, Bennett Fox, Harald Niederreiter,\
    Implementation and Tests of Low Discrepancy Sequences,\
    ACM Transactions on Modeling and Computer Simulation,\
    Volume 2, Number 3, pages 195-213, 1992.
2.  Henri Faure,\
    Discrepance de suites associees a un systeme de numeration (en
    dimension s),\
    Acta Arithmetica,\
    Volume XLI, 1982, pages 337-351, especially page 342.
3.  Henri Faure,\
    Good permutations for extreme discrepancy,\
    Journal of Number Theory,\
    Volume 42, 1992, pages 47-56.
4.  Bennett Fox,\
    Algorithm 647: Implementation and Relative Efficiency of Quasirandom
    Sequence Generators,\
    ACM Transactions on Mathematical Software,\
    Volume 12, Number 4, pages 362-376, 1986.

### Source Code: {#source-code align="center"}

-   [faure\_dataset.cpp](faure_dataset.cpp), the source code.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for FAURE\_DATASET.
-   **BINOMIAL\_TABLE** computes a table of bionomial coefficients MOD
    QS.
-   **FAURE** generates a new quasirandom Faure vector with each call.
-   **FAURE\_GENERATE** generates a Faure dataset.
-   **GET\_UNIT** returns a free FORTRAN unit number.
-   **I4\_LOG\_I4** returns the logarithm of an I4 to an I4 base.
-   **PRIME\_GE** returns the smallest prime greater than or equal to N.
-   **PRIME** returns any of the first PRIME\_MAX prime numbers.
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 11 December 2009.*
