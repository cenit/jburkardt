IHS\_DATASET\
Generate IHS Datasets {#ihs_dataset-generate-ihs-datasets align="center"}
=====================

------------------------------------------------------------------------

**IHS\_DATASET** is a C++ program which creates an IHS (Improved
Hypercube Sampling) dataset.

A Latin hypercube, in **M** dimensional space, with **N** points, can be
thought of as being constructed by dividing each of the **M** coordinate
dimensions into **N** equal intervals. The J-th coordinate of the I-th
point can be constructed by choosing, in the J-th dimension, an interval
that has not been used, and then choosing any value in that interval.

This algorithm differs in that it tries to pick a solution which has the
property that the points are "spread out" as evenly as possible. It does
this by determining an optimal even spacing, and using the duplication
factor D to allow it to choose the best of the various options available
to it (the more duplication, the better chance of optimization).

One drawback to this algorithm is that it requires an internal real
distance array of dimension D \* N \* N. For a relatively moderate
problem with N = 1000, this can exceed the easily accessible memory.
Moreover, the program is inherently quadratic in N in execution time as
well as memory; the computation of the I-th point in the set of N
requires a consideration of the value of the coordinates used up by the
previous points, and the distances from each of those points to the
candidates for the next point.

The program is interactive, and allows the user to choose

-   **M**, the spatial dimension;
-   **N**, the number of points to generate;
-   **D**, the duplication factor.
-   **SEED**, a seed for UNIFORM, the portable uniform random number
    generator used to make choices.

Once these parameters are set, the program generates the data, and
writes it to a file. The user may then specify another set of data, or
terminate the program.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**IHS\_DATASET** is available in [a C++
version](../../cpp_src/ihs_dataset/ihs_dataset.html) and [a FORTRAN90
version](../../f_src/ihs_dataset/ihs_dataset.html) and [a MATLAB
version](../../m_src/ihs_dataset/ihs_dataset.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FAURE\_DATASET](../../cpp_src/faure_dataset/faure_dataset.html), a C++
program which creates a Faure quasirandom dataset;

[GRID\_DATASET](../../cpp_src/grid_dataset/grid_dataset.html), a C++
program which creates a grid sequence and writes it to a file.

[IHS](../../cpp_src/ihs/ihs.html), a C++ library which supplies the
computational routines needed by IHS\_DATASET.

[IHS](../../datasets/ihs/ihs.html), a dataset directory which contains
sample datasets created by **IHS\_DATASET**.

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

1.  Brian Beachkofski, Ramana Grandhi,\
    Improved Distributed Hypercube Sampling,\
    American Institute of Aeronautics and Astronautics Paper 2002-1274.

### Source Code: {#source-code align="center"}

-   [ihs\_dataset.cpp](ihs_dataset.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [ihs\_02\_10\_5\_123456789.txt](ihs_02_10_5_123456789.txt), the data
    file created for M = 2, N = 10, D = 5, SEED = 123456789.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for IHS\_DATASET.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 31 August 2005.*
