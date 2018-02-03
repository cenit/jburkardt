LINPACK\_S\
Linear Algebra Library\
Single Precision Real {#linpack_s-linear-algebra-library-single-precision-real align="center"}
=======================

------------------------------------------------------------------------

**LINPACK\_S** is a C++ library which can solve systems of linear
equations for a variety of matrix types and storage modes, using single
precision real arithmetic.

**LINPACK** has officially been superseded by the LAPACK library. The
LAPACK library uses more modern algorithms and code structure. However,
the LAPACK library can be extraordinarily complex; what is done in a
single **LINPACK** routine may correspond to 10 or 20 utility routines
in LAPACK. This is fine if you treat LAPACK as a black box. But if you
wish to learn how the algorithm works, or to adapt it, or to convert the
code to another language, this is a real drawback. This is one reason I
still keep a copy of **LINPACK** around.

Versions of **LINPACK** in various arithmetic precisions are available
through [the NETLIB web site](http://www.netlib.org/).

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Language: {#language align="center"}

**LINPACK\_S** is available in [a C
version](../../c_src/linpack_s/linpack_s.md) and [a C++
version](../../master/linpack_s/linpack_s.md) and [a FORTRAN77
version](../../f77_src/linpack_s/linpack_s.md) and [a FORTRAN90
version](../../f_src/linpack_s/linpack_s.md) and [a MATLAB
version](../../m_src/linpack_s/linpack_s.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BLAS1\_S](../../master/blas1_s/blas1_s.md), a C++ library which
contains basic linear algebra routines for vector-vector operations
using single precision real arithmetic.

[LAPACK\_EXAMPLES](../../f77_src/lapack_examples/lapack_examples.md),
a FORTRAN77 program which demonstrates the use of the LAPACK linear
algebra library.

[LINPACK\_BENCH](../../master/linpack_bench/linpack_bench.md), a C++
program which measures the time taken by **LINPACK** to solve a
particular linear system.

[LINPACK\_C](../../master/linpack_c/linpack_c.md), a C++ library
which solves linear systems using single precision complex arithmetic;

[LINPACK\_D](../../master/linpack_d/linpack_d.md), a C++ library
which solves linear systems using double precision real arithmetic;

[LINPACK\_Z](../../master/linpack_z/linpack_z.md), a C++ library
which solves linear systems using double precision complex arithmetic;

[TEST\_MAT](../../master/test_mat/test_mat.md), a C++ library which
defines test matrices.

### Reference: {#reference align="center"}

1.  Jack Dongarra, Jim Bunch, Cleve Moler, Pete Stewart,\
    LINPACK User's Guide,\
    SIAM, 1979,\
    ISBN13: 978-0-898711-72-1,\
    LC: QA214.L56.
2.  Charles Lawson, Richard Hanson, David Kincaid, Fred Krogh,\
    Algorithm 539, Basic Linear Algebra Subprograms for Fortran Usage,\
    ACM Transactions on Mathematical Software,\
    Volume 5, Number 3, September 1979, pages 308-323.

### Source Code: {#source-code align="center"}

-   [linpack\_s.cpp](linpack_s.cpp), the source code for the single
    precision real library;
-   [linpack\_s.hpp](linpack_s.hpp), the include file for the single
    precision real library;

### Examples and Tests: {#examples-and-tests align="center"}

-   [linpack\_s\_prb.cpp](linpack_s_prb.cpp), the calling program for
    the single precision real library;
-   [linpack\_s\_prb\_output.txt](linpack_s_prb_output.txt), the sample
    output.

### List of Routines: {#list-of-routines align="center"}

-   **SCHDC** computes the Cholesky decomposition of a positive definite
    matrix.
-   **SCHDD** downdates an augmented Cholesky decomposition.
-   **SCHEX** updates the Cholesky factorization of a positive definite
    matrix.
-   **SCHUD** updates an augmented Cholesky decomposition.
-   **SGBCO** factors a real band matrix and estimates its condition.
-   **SGBDI** computes the determinant of a band matrix factored by
    SGBCO or SGBFA.
-   **SGBFA** factors a real band matrix by elimination.
-   **SGBSL** solves a real banded system factored by SGBCO or SGBFA.
-   **SGECO** factors a real matrix and estimates its condition number.
-   **SGEDI** computes the determinant and inverse of a matrix factored
    by SGECO or SGEFA.
-   **SGEFA** factors a real general matrix.
-   **SGESL** solves a real general linear system A \* X = B.
-   **SGTSL** solves a general tridiagonal linear system.
-   **SPBCO** factors a real symmetric positive definite banded matrix.
-   **SPBDI** computes the determinant of a matrix factored by SPBCO or
    SPBFA.
-   **SPBFA** factors a real symmetric positive definite matrix stored
    in band form.
-   **SPBSL** solves a real SPD band system factored by SPBCO or SPBFA.
-   **SPOCO** factors a real symmetric positive definite matrix and
    estimates its condition.
-   **SPODI** computes the determinant and inverse of a certain matrix.
-   **SPOFA** factors a real symmetric positive definite matrix.
-   **SPOSL** solves a linear system factored by SPOCO or SPOFA.
-   **SPPCO** factors a real symmetric positive definite matrix in
    packed form.
-   **SPPDI** computes the determinant and inverse of a matrix factored
    by SPPCO or SPPFA.
-   **SPPFA** factors a real symmetric positive definite matrix in
    packed form.
-   **SPPSL** solves a real symmetric positive definite system factored
    by SPPCO or SPPFA.
-   **SPTSL** solves a positive definite tridiagonal linear system.
-   **SQRDC** computes the QR factorization of a real rectangular
    matrix.
-   **SQRSL** computes transformations, projections, and least squares
    solutions.
-   **SSICO** factors a real symmetric matrix and estimates its
    condition.
-   **SSIDI** computes the determinant, inertia and inverse of a real
    symmetric matrix.
-   **SSIFA** factors a real symmetric matrix.
-   **SSISL** solves a real symmetric system factored by SSIFA.
-   **SSPCO** factors a real symmetric matrix stored in packed form.
-   **SSPDI** computes the determinant, inertia and inverse of a real
    symmetric matrix.
-   **SSPFA** factors a real symmetric matrix stored in packed form.
-   **SSPSL** solves the real symmetric system factored by SSPFA.
-   **SSVDC** computes the singular value decomposition of a real
    rectangular matrix.
-   **STRCO** estimates the condition of a real triangular matrix.
-   **STRDI** computes the determinant and inverse of a real triangular
    matrix.
-   **STRSL** solves triangular linear systems.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 23 June 2009.*
