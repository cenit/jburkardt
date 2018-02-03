LINPACK\_D\
Linear Algebra Library\
Double Precision Real {#linpack_d-linear-algebra-library-double-precision-real align="center"}
=======================

------------------------------------------------------------------------

**LINPACK\_D** is a C++ library which can solve systems of linear
equations for a variety of matrix types and storage modes, using double
precision real arithmetic, by Jack Dongarra, Cleve Moler, Jim Bunch,
Pete Stewart.

LINPACK has officially been superseded by the LAPACK library. The LAPACK
library uses more modern algorithms and code structure. However, the
LAPACK library can be extraordinarily complex; what is done in a single
LINPACK routine may correspond to 10 or 20 utility routines in LAPACK.
This is fine if you treat LAPACK as a black box. But if you wish to
learn how the algorithm works, or to adapt it, or to convert the code to
another language, this is a real drawback. This is one reason I still
keep a copy of LINPACK around.

Versions of **LINPACK** in various arithmetic precisions are available
through [the NETLIB web site](http://www.netlib.org/).

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**LINPACK\_D** is available in [a C
version](../../c_src/linpack_d/linpack_d.html) and [a C++
version](../../cpp_src/linpack_d/linpack_d.html) and [a FORTRAN77
version](../../f77_src/linpack_d/linpack_d.html) and [a FORTRAN90
version](../../f_src/linpack_d/linpack_d.html) and [a MATLAB
version](../../m_src/linpack_d/linpack_d.html) and [a Python
version](../../py_src/linpack_d/linpack_d.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BLAS1\_D](../../cpp_src/blas1_d/blas1_d.html), a C++ library which
contains basic linear algebra routines for vector-vector operations,
using double precision real arithmetic.

[CONDITION](../../cpp_src/condition/condition.html), a C++ library which
implements methods of computing or estimating the condition number of a
matrix.

[LAPACK\_EXAMPLES](../../f77_src/lapack_examples/lapack_examples.html),
a FORTRAN77 program which demonstrates the use of the LAPACK linear
algebra library.

[LINPACK\_BENCH](../../cpp_src/linpack_bench/linpack_bench.html), a C++
program which measures the time taken by **LINPACK** to solve a
particular linear system.

[LINPACK\_C](../../cpp_src/linpack_c/linpack_c.html), a C++ library
which solves linear systems using single precision complex arithmetic;

[LINPACK\_S](../../cpp_src/linpack_s/linpack_s.html), a C++ library
which solves linear systems using single precision real arithmetic;

[LINPACK\_Z](../../cpp_src/linpack_z/linpack_z.html), a C++ library
which solves linear systems using double precision complex arithmetic;

[QR\_SOLVE](../../cpp_src/qr_solve/qr_solve.html), a C++ library which
computes the least squares solution of a linear system A\*x=b.

[TEST\_MAT](../../cpp_src/test_mat/test_mat.html), a C++ library which
defines test matrices.

[TOEPLITZ\_CHOLESKY](../../cpp_src/toeplitz_cholesky/toeplitz_cholesky.html),
a C++ library which computes the Cholesky factorization of a nonnegative
definite symmetric Toeplitz matrix.

### Author: {#author align="center"}

Original FORTRAN77 version by Jack Dongarra, Cleve Moler, Jim Bunch,
Pete Stewart. C++ version by John Burkardt.

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

-   [linpack\_d.cpp](linpack_d.cpp), the source code for the double
    precision real library;
-   [linpack\_d.hpp](linpack_d.hpp), the include file for the double
    precision real library;

### Examples and Tests: {#examples-and-tests align="center"}

-   [linpack\_d\_prb.cpp](linpack_d_prb.cpp), the calling program for
    the double precision real library;
-   [linpack\_d\_prb\_output.txt](linpack_d_prb_output.txt), the output
    file.

### List of Routines: {#list-of-routines align="center"}

-   **DCHDC** computes the Cholesky decomposition of a positive definite
    matrix.
-   **DCHDD** downdates an augmented Cholesky decomposition.
-   **DCHEX** updates the Cholesky factorization of a positive definite
    matrix.
-   **DCHUD** updates an augmented Cholesky decomposition.
-   **DGBCO** factors a real band matrix and estimates its condition.
-   **DGBDI** computes the determinant of a band matrix factored by
    DGBCO or DGBFA.
-   **DGBFA** factors a real band matrix by elimination.
-   **DGBSL** solves a real banded system factored by DGBCO or DGBFA.
-   **DGECO** factors a real matrix and estimates its condition number.
-   **DGEDI** computes the determinant and inverse of a matrix factored
    by DGECO or DGEFA.
-   **DGEFA** factors a real general matrix.
-   **DGESL** solves a real general linear system A \* X = B.
-   **DGTSL** solves a general tridiagonal linear system.
-   **DPBCO** factors a real symmetric positive definite banded matrix.
-   **DPBDI** computes the determinant of a matrix factored by DPBCO or
    DPBFA.
-   **DPBFA** factors a symmetric positive definite matrix stored in
    band form.
-   **DPBSL** solves a real SPD band system factored by DPBCO or DPBFA.
-   **DPOCO** factors a real symmetric positive definite matrix and
    estimates its condition.
-   **DPODI** computes the determinant and inverse of a certain matrix.
-   **DPOFA** factors a real symmetric positive definite matrix.
-   **DPOSL** solves a linear system factored by DPOCO or DPOFA.
-   **DPPDI** computes the determinant and inverse of a matrix factored
    by DPPCO or DPPFA.
-   **DPPFA** factors a real symmetric positive definite matrix in
    packed form.
-   **DPPSL** solves a real symmetric positive definite system factored
    by DPPCO or DPPFA.
-   **DPTSL** solves a positive definite tridiagonal linear system.
-   **DQRDC** computes the QR factorization of a real rectangular
    matrix.
-   **DQRSL** computes transformations, projections, and least squares
    solutions.
-   **DSICO** factors a real symmetric matrix and estimates its
    condition.
-   **DSIDI** computes the determinant, inertia and inverse of a real
    symmetric matrix.
-   **DSIFA** factors a real symmetric matrix.
-   **DSISL** solves a real symmetric system factored by DSIFA.
-   **DSPCO** factors a real symmetric matrix stored in packed form.
-   **DSPDI** computes the determinant, inertia and inverse of a real
    symmetric matrix.
-   **DSPFA** factors a real symmetric matrix stored in packed form.
-   **DSPSL** solves the real symmetric system factored by DSPFA.
-   **DSVDC** computes the singular value decomposition of a real
    rectangular matrix.
-   **DTRCO** estimates the condition of a real triangular matrix.
-   **DTRDI** computes the determinant and inverse of a real triangular
    matrix.
-   **DTRSL** solves triangular linear systems.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 23 June 2009.*
