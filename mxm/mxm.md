MXM\
Matrix-Matrix Multiplication Timings {#mxm-matrix-matrix-multiplication-timings align="center"}
====================================

------------------------------------------------------------------------

**MXM** is a C++ program which sets up a matrix-matrix multiplication
problem A = B \* C, and carries it out using

-   Nested FOR I, J, K loops;
-   Nested FOR I, K, J loops;
-   Nested FOR J, I, K loops;
-   Nested FOR J, K, I loops;
-   Nested FOR K, I, J loops;
-   Nested FOR K, J, I loops;
-   the MATMUL FORTRAN90 intrinsic function;

The user is allowed to specify N1, N2, and N3, which define the matrix
sizes.

### Usage: {#usage align="center"}

> **mxm** *n1* *n2* *n3*

where

-   **n1** is the number of rows in B.
-   **n2** is the number of columns in B and rows in C.
-   **n3** is the number of columns in C;

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**MXM** is available in [a C version](../../c_src/mxm/mxm.html) and [a
C++ version](../../cpp_src/mxm/mxm.html) and [a FORTRAN77
version](../../f77_src/mxm/mxm.html) and [a FORTRAN90
version](../../f_src/mxm/mxm.html) and [a MATLAB
version](../../m_src/mxm/mxm.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[LINPACK\_BENCH](../../cpp_src/linpack_bench/linpack_bench.html), a C++
program which measures the time needed to factor and solve a "large"
(N=1000) dense linear system of equations, and is used as a benchmark.

[MXV](../../cpp_src/mxv/mxv.html), a C++ program which compares the
performance of (DO I, FOR J) loops, (DO J, FOR I ) loops, and MATMUL for
computing the product of an MxN matrix A and an N vector X.

[SUM\_MILLION](../../cpp_src/sum_million/sum_million.html), a C++
program which sums the integers from 1 to 1,000,000, as a demonstration
of how to rate a computer's speed;

[TIMER](../../cpp_src/timer/timer.html), C++ programs which demonstrate
how to compute CPU time or elapsed time.

### Reference: {#reference align="center"}

1.  John Burkardt, Paul Puglielli,\
    Pittsburgh Supercomputing Center,\
    MATMUL: An Interactive Matrix Multiplication Benchmark

### Source Code: {#source-code align="center"}

-   [mxm.cpp](mxm.cpp), the source code.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for MXM.
-   **CPU\_TIME** reports the elapsed CPU time.
-   **MATGEN** generates a random matrix.
-   **MXM\_IJK** computes A = B \* C using FOR I, FOR J, FOR K loops.
-   **MXM\_IKJ** computes A = B \* C using FOR I, FOR K, FOR J loops.
-   **MXM\_JIK** computes A = B \* C using FOR J, FOR I, FOR K loops.
-   **MXM\_JKI** computes A = B \* C using FOR J, FOR K, FOR I loops.
-   **MXM\_KIJ** computes A = B \* C using FOR K, FOR I, FOR J loops.
-   **MXM\_KJI** computes A = B \* C using FOR K, FOR J, FOR I loops.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 08 October 2010.*
