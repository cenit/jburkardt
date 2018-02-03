BLAS2\
Matrix-Vector Basic Linear Algebra Subprograms {#blas2-matrix-vector-basic-linear-algebra-subprograms align="center"}
==============================================

------------------------------------------------------------------------

**BLAS2** a C++ library which constitutes the Level 2 Basic Linear
Algebra Subprograms (BLAS), for matrix-vector operations.

The BLAS are a small core library of linear algebra utilities, which can
be highly optimized for various architectures.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**BLAS2** is available in [a C version](../../c_src/blas/blas.md) and
[a C++ version](../../master/blas/blas.md) and [a FORTRAN77
version](../../f77_src/blas/blas.md) and [a FORTRAN90
version](../../f_src/blas/blas.md) and [a MATLAB
version.](../../m_src/blas/blas.md)

### Related Data and Programs: {#related-data-and-programs align="center"}

[BLAS](../../master/blas/blas.md), a C++ library which contains the
Basic Linear Algebra Subprograms (BLAS) for level 1 (vector-vector
operations), level 2 (matrix-vector operations) and level 3
(matrix-matrix operations), for single precision real arithmetic, double
precision real arithmetic, single precision complex arithmetic, and
double precision complex arithmetic.

### Reference: {#reference align="center"}

1.  Edward Anderson, Zhaojun Bai, Christian Bischof, Susan Blackford,
    James Demmel, Jack Dongarra, Jeremy Du Croz, Anne Greenbaum, Sven
    Hammarling, Alan McKenney, Danny Sorensen,\
    LAPACK User's Guide,\
    Third Edition,\
    SIAM, 1999,\
    ISBN: 0898714478,\
    LC: QA76.73.F25L36.
2.  Jack Dongarra, Jim Bunch, Cleve Moler, Pete Stewart,\
    LINPACK User's Guide,\
    SIAM, 1979,\
    ISBN13: 978-0-898711-72-1,\
    LC: QA214.L56.
3.  Charles Lawson, Richard Hanson, David Kincaid, Fred Krogh,\
    Algorithm 539: Basic Linear Algebra Subprograms for Fortran Usage,\
    ACM Transactions on Mathematical Software,\
    Volume 5, Number 3, September 1979, pages 308-323.

### Source Code: {#source-code align="center"}

-   [blas2.cpp](blas2.cpp), the source code;
-   [blas2.hpp](blas2.hpp), the include file;

### Examples and Tests: {#examples-and-tests align="center"}

-   [blas2\_prb.cpp](blas2_prb.cpp), a calling program;
-   [blas2\_prb\_output.txt](blas2_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **DGEMV** computes y := alpha \* A \* x + beta \* y for general
    matrix A.
-   **DGER** computes A := alpha\*x\*y' + A.
-   **DTRMV** computes x: = A\*x or x = A'\*x for a triangular matrix A.
-   **SGEMV** computes y := alpha \* A \* x + beta \* y for general
    matrix A.
-   **SGER** computes A := alpha\*x\*y' + A.
-   **STRMV** computes x: = A\*x or x = A'\*x for a triangular matrix A.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 04 April 2014.*
