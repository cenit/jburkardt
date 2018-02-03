HAMMERSLEY\_DATASET\
Generate Hammersley Datasets {#hammersley_dataset-generate-hammersley-datasets align="center"}
============================

------------------------------------------------------------------------

**HAMMERSLEY\_DATASET** is a C++ program which creates a Hammersley
dataset and writes it to a file.

The program is interactive, and allows the user to choose the parameters
that define the sequence.

The program applies the user's data to select elements of a "leaped"
subsequence of the Hammersley sequence. The subsequence elements are
indexed by a quantity called STEP, which starts at 0. The STEP-th
subsequence element is simply the Hammersley sequence element with index

            SEED(1:NDIM) + STEP * LEAP(1:NDIM).
          

The data that the user may set include:

-   NDIM, the spatial dimension,\
    default: NDIM = 1,\
    required: 1 &lt;= NDIM;
-   N, the number of entries of the subsequence to compute,\
    required: 1 &lt;= N;
-   STEP, the subsequence index of the first entry to compute,\
    default: STEP = 0,\
    required: 0 &lt;= STEP.
-   SEED(1:NDIM), the sequence index corresponding to STEP = 0.\
    default: SEED(1:NDIM) = (0, 0, ... 0),\
    required: 0 &lt;= SEED(1:NDIM);
-   LEAP(1:NDIM), the succesive jumps in the sequence.\
    default: LEAP(1:NDIM) = (1, 1, ..., 1).\
    required: 1 &lt;= LEAP(1:NDIM).
-   BASE(1:NDIM), the Hammersley bases.\
    default: BASE(1:NDIM) = (2, 3, 5, 7, 11... ), or\
    (-N, 2, 3, 5, 7, 11, ... ) if **N** is known,\
    required: 1 &lt; BASE(I) for any van der Corput dimension I, or
    BASE(I) &lt; 0 to generate the fractional sequence J/|BASE(I)|.

Once these parameters are set, the program generates the data, and
writes it to a file. The user may then specify another set of data, or
terminate the program.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**HAMMERSLEY\_DATASET** is available in [a C++
version](../../cpp_src/hammersley_dataset/hammersley_dataset.html) and
[a FORTRAN90
version](../../f_src/hammersley_dataset/hammersley_dataset.html) and [a
MATLAB version](../../m_src/hammersley_dataset/hammersley_dataset.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FAURE\_DATASET](../../cpp_src/faure_dataset/faure_dataset.html), a C++
program which creates a Faure quasirandom dataset;

[GRID\_DATASET](../../cpp_src/grid_dataset/grid_dataset.html), a C++
program which creates a grid sequence and writes it to a file.

[HAMMERSLEY](../../cpp_src/hammersley/hammersley.html), a C++ library
which actually computes the Hammersley sequences requested by
**HAMMERSLEY\_DATASET**. A compiled copy of the library must be
available in order to build **HAMMERSLEY\_DATASET**.

[HAMMERSLEY](../../datasets/hammersley/hammersley.html), a dataset
directory which contains examples of datasets created by
**HAMMERSLEY\_DATASET**.

[LATIN\_CENTER\_DATASET](../../cpp_src/latin_center_dataset/latin_center_dataset.html),
a C++ program which creates a Latin Center Hypercube dataset;

[LATIN\_EDGE\_DATASET](../../cpp_src/latin_edge_dataset/latin_edge_dataset.html),
a C++ program which creates a Latin Edge Hypercube dataset;

[LATIN\_RANDOM\_DATASET](../../cpp_src/latin_random_dataset/latin_random_dataset.html),
a C++ program which creates a Latin Random Hypercube dataset;

[NIEDERREITER2\_DATASET](../../cpp_src/niederreiter2_dataset/niederreiter2_dataset.html),
a C++ program which creates a Niederreiter quasirandom dataset with base
2;

[NORMAL\_DATASET](../../cpp_src/normal_dataset/normal_dataset.html), a
C++ program which generates a dataset of multivariate normal
pseudorandom values and writes them to a file.

[SOBOL\_DATASET](../../cpp_src/sobol_dataset/sobol_dataset.html), a C++
program which computes a Sobol quasirandom sequence and writes it to a
file.

[UNIFORM\_DATASET](../../cpp_src/uniform_dataset/uniform_dataset.html),
a C++ program which generates a dataset of uniform pseudorandom values
and writes them to a file.

[VAN\_DER\_CORPUT\_DATASET](../../cpp_src/van_der_corput_dataset/van_der_corput_dataset.html),
a C++ program which creates a van der Corput quasirandom sequence and
writes it to a file.

### Reference: {#reference align="center"}

1.  John Hammersley,\
    Monte Carlo methods for solving multivariable problems,\
    Proceedings of the New York Academy of Science,\
    Volume 86, 1960, pages 844-874.
2.  Ladislav Kocis, William Whiten,\
    Computational Investigations of Low-Discrepancy Sequences,\
    ACM Transactions on Mathematical Software,\
    Volume 23, Number 2, 1997, pages 266-294.

### Source Code: {#source-code align="center"}

-   [hammersley\_dataset.cpp](hammersley_dataset.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [hammersley\_dataset\_input.txt](hammersley_dataset_input.txt), is a
    simple input file for creation of sequences of dimension 2, 3 and 7.
-   [hammersley\_dataset\_output.txt](hammersley_dataset_output.txt), is
    the printed output from a run of the program with the input file.
-   [hammersley\_02\_00020.txt](../../datasets/hammersley/hammersley_02_00020.txt),
    a leaped Hammersley subsequence dataset with NDIM = 2 and N = 20.
-   [hammersley\_03\_00010.txt](../../datasets/hammersley/hammersley_03_00010.txt),
    a leaped Hammersley subsequence dataset with NDIM = 3 and N = 10.
-   [hammersley\_07\_00010.txt](../../datasets/hammersley/hammersley_07_00010.txt),
    a leaped Hammersley subsequence dataset with NDIM = 7 and N = 10.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for HAMMERSLEY\_DATASET.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 31 August 2005.*
