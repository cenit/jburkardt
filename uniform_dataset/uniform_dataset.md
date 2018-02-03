UNIFORM\_DATASET\
Generate Uniform Random Datasets {#uniform_dataset-generate-uniform-random-datasets align="center"}
================================

------------------------------------------------------------------------

**UNIFORM\_DATASET** is a C++ program which creates a uniform random
dataset and writes it to a file.

### Usage: {#usage align="center"}

> **uniform\_dataset** *m* *n* *seed*

where

-   *m* is the spatial dimension;
-   *n* is the number of points to generate;
-   *seed* is the initial seed value.

The data is written to the file **uniform\_*m*\_*n*.txt**.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**UNIFORM\_DATASET** is available in [a C++
version](../../master/uniform_dataset/uniform_dataset.md) and [a
FORTRAN90 version](../../f_src/uniform_dataset/uniform_dataset.md) and
[a MATLAB version](../../m_src/uniform_dataset/uniform_dataset.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CVT\_DATASET](../../master/cvt_dataset/cvt_dataset.md), a C++
program which computes a Centroidal Voronoi Tessellation and writes it
to a file.

[FAURE\_DATASET](../../master/faure_dataset/faure_dataset.md), a C++
program which creates a Faure quasirandom dataset;

[GRID\_DATASET](../../master/grid_dataset/grid_dataset.md), a C++
program which creates a grid sequence and writes it to a file.

[HALTON\_DATASET](../../master/halton_dataset/halton_dataset.md), a
C++ program which creates a Halton sequence and writes it to a file.

[HAMMERSLEY\_DATASET](../../master/hammersley_dataset/hammersley_dataset.md),
a C++ program which creates a Hammersley sequence and writes it to a
file.

[HEX\_GRID\_DATASET](../../master/hex_grid_dataset/hex_grid_dataset.md),
a C++ program which creates a hexagonal grid dataset and writes it to a
file.

[IHS\_DATASET](../../master/ihs_dataset/ihs_dataset.md), a C++
program which creates an improved distributed Latin hypercube dataset
and writes it to a file.

[LATIN\_CENTER\_DATASET](../../master/latin_center_dataset/latin_center_dataset.md),
a C++ program which creates a Latin Center Hypercube dataset;

[LATIN\_EDGE\_DATASET](../../master/latin_edge_dataset/latin_edge_dataset.md),
a C++ program which creates a Latin Edge Hypercube dataset;

[LATIN\_RANDOM\_DATASET](../../master/latin_random_dataset/latin_random_dataset.md),
a C++ program which creates a Latin Random Hypercube dataset;

[LCVT\_DATASET](../../master/lcvt_dataset/lcvt_dataset.md), a C++
program which computes a latinized Centroidal Voronoi Tessellation and
writes it to a file.

[NIEDERREITER2\_DATASET](../../master/niederreiter2_dataset/niederreiter2_dataset.md),
a C++ program which creates a Niederreiter quasirandom dataset with base
2;

[NORMAL\_DATASET](../../master/normal_dataset/normal_dataset.md), a
C++ program which generates a dataset of multivariate normal
pseudorandom values and writes them to a file.

[SOBOL\_DATASET](../../master/sobol_dataset/sobol_dataset.md), a C++
program which computes a Sobol quasirandom sequence and writes it to a
file.

[UNIFORM](../../master/uniform/uniform.md), a C++ library which
computes the uniform datasets for **UNIFORM\_DATASET**. A compiled copy
of this library must be available in order to create the program.

[UNIFORM](../../datasets/uniform/uniform.md), a dataset directory
which contains examples of the files created by **UNIFORM\_DATASET**.

[VAN\_DER\_CORPUT\_DATASET](../../master/van_der_corput_dataset/van_der_corput_dataset.md),
a C++ program which creates a van der Corput quasirandom sequence and
writes it to a file.

### References: {#references align="center"}

1.  Paul Bratley, Bennett Fox, Linus Schrage,\
    A Guide to Simulation,\
    Springer Verlag, pages 201-202, 1983.
2.  Bennett Fox,\
    Algorithm 647: Implementation and Relative Efficiency of Quasirandom
    Sequence Generators,\
    ACM Transactions on Mathematical Software,\
    Volume 12, Number 4, pages 362-376, 1986.
3.  Donald Knuth,\
    The Art of Computer Programming,\
    Volume 2: Seminumerical Algorithms,\
    Addison Wesley, 1969.

### Source Code: {#source-code align="center"}

-   [uniform\_dataset.cpp](uniform_dataset.cpp), the source code.

### Examples: {#examples align="center"}

-   [uniform\_2\_25.txt](uniform_02_00025.txt), is the file created in
    response to the command **"uniform\_dataset 2 25 123456789"**.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for UNIFORM\_DATASET.
-   **GET\_SEED** returns a random seed for the random number generator.
-   **R8MAT\_UNIFORM\_01\_NEW** returns a new unit pseudorandom R8MAT.
-   **R8MAT\_WRITE** writes an R8MAT file with no header.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 15 August 2009.*
