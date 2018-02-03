SOBOL\_DATASET\
Generate Sobol Datasets {#sobol_dataset-generate-sobol-datasets align="center"}
=======================

------------------------------------------------------------------------

**SOBOL\_DATASET** is a C++ program which creates a Sobol dataset.

### Usage: {#usage align="center"}

> **sobol\_dataset** *m* *n* *skip*

where

-   *m* is the spatial dimension.
-   *n* is the number of points to generate;
-   *skip* is the initial number of points to skip over. The value of
    *skip* is used to allow the sequence to "warm up". One common
    strategy is to set *skip* to the smallest power of 2 which is equal
    to or greater than *n*.

The data is written to the file **sobol\_*m*\_*n*.txt**.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SOBOL\_DATASET** is available in [a C++
version](../../master/sobol_dataset/sobol_dataset.md) and [a
FORTRAN90 version](../../f_src/sobol_dataset/sobol_dataset.md) and [a
MATLAB version](../../m_src/sobol_dataset/sobol_dataset.md).

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

[NIEDERREITER2\_DATASET](../../master/niederreiter2_dataset/niederreiter2_dataset.md),
a C++ program which creates a Niederreiter quasirandom dataset with base
2;

[NORMAL\_DATASET](../../master/normal_dataset/normal_dataset.md), a
C++ program which generates a dataset of multivariate normal
pseudorandom values and writes them to a file.

[SOBOL](../../datasets/sobol/sobol.md), a dataset directory which
contains sample Sobol datasets created by **SOBOL\_DATASET**.

[SOBOL](../../master/sobol/sobol.md), a C++ library which computes
elements of a Sobol quasirandom sequence.

[UNIFORM\_DATASET](../../master/uniform_dataset/uniform_dataset.md),
a C++ program which generates a dataset of multivariate uniform
pseudorandom values and writes them to a file.

[VAN\_DER\_CORPUT\_DATASET](../../master/van_der_corput_dataset/van_der_corput_dataset.md),
a C++ program which creates a van der Corput quasirandom sequence and
writes it to a file.

### Reference: {#reference align="center"}

1.  IA Antonov, VM Saleev,\
    An Economic Method of Computing LP Tau-Sequences,\
    USSR Computational Mathematics and Mathematical Physics,\
    Volume 19, 1980, pages 252 - 256.
2.  Paul Bratley, Bennett Fox,\
    Algorithm 659: Implementing Sobol's Quasirandom Sequence Generator,\
    ACM Transactions on Mathematical Software,\
    Volume 14, Number 1, pages 88-100, 1988.
3.  Paul Bratley, Bennett Fox, Linus Schrage,\
    A Guide to Simulation,\
    Springer Verlag, pages 201-202, 1983.
4.  Paul Bratley, Bennett Fox, Harald Niederreiter,\
    Implementation and Tests of Low Discrepancy Sequences,\
    ACM Transactions on Modeling and Computer Simulation,\
    Volume 2, Number 3, pages 195-213, 1992.
5.  Bennett Fox,\
    Algorithm 647: Implementation and Relative Efficiency of Quasirandom
    Sequence Generators,\
    ACM Transactions on Mathematical Software,\
    Volume 12, Number 4, pages 362-376, 1986.
6.  Harald Niederreiter,\
    Random Number Generation and quasi-Monte Carlo Methods,\
    SIAM, 1992.
7.  William Press, Brian Flannery, Saul Teukolsky, William Vetterling,\
    Numerical Recipes: The Art of Scientific Computing,\
    Cambridge University Press.
8.  Ilya Sobol,\
    USSR Computational Mathematics and Mathematical Physics,\
    Volume 16, pages 236-242, 1977.
9.  Ilya Sobol, Levitan,\
    The Production of Points Uniformly Distributed in a Multidimensional
    Cube (in Russian),\
    Preprint IPM Akad. Nauk SSSR,\
    Number 40, Moscow 1976.

### Source Code: {#source-code align="center"}

-   [sobol\_dataset.cpp](sobol_dataset.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [sobol\_02\_00100.txt](sobol_02_00100.txt), the Sobol dataset of
    dimension 2, computing 100 points, after skipping 128 points.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for SOBOL\_DATASET.
-   **I8\_BIT\_HI1** returns the position of the high 1 bit base 2 in an
    integer.
-   **I8\_BIT\_LO0** returns the position of the low 0 bit base 2 in an
    integer.
-   **I8\_SOBOL** generates a new quasirandom Sobol vector with each
    call.
-   **I8\_SOBOL\_GENERATE** generates a Sobol dataset.
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 30 August 2005.*
