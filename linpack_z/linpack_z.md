LINPACK\_Z\
Linear Algebra Library\
Double Precision Complex {#linpack_z-linear-algebra-library-double-precision-complex align="center"}
========================

------------------------------------------------------------------------

**LINPACK\_Z** is a C++ library which can solve systems of linear
equations for a variety of matrix types and storage modes, using double
precision complex arithmetic, by Jack Dongarra, Jim Bunch, Cleve Moler,
Pete Stewart.

LINPACK has officially been superseded by the LAPACK library. The LAPACK
library uses more modern algorithms and code structure. However, the
LAPACK library can be extraordinarily complex; what is done in a single
LINPACK routine may correspond to 10 or 20 utility routines in LAPACK.
This is fine if you treat LAPACK as a black box. But if you wish to
learn how the algorithm works, or to adapt it, or to convert the code to
another language, this is a real drawback. This is one reason I still
keep a copy of LINPACK around.

Versions of LINPACK in various arithmetic precisions are available
through [the NETLIB web site](http://www.netlib.org/).

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**LINPACK\_Z** is available in [a C++
version](../../cpp_src/linpack_z/linpack_z.html) and [a FORTRAN77
version](../../f77_src/linpack_z/linpack_z.html) and [a FORTRAN90
version](../../f_src/linpack_z/linpack_z.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BLAS1\_Z](../../cpp_src/blas1_z/blas1_z.html) a C++ library which
contains basic linear algebra routines for vector-vector operations,
using double precision complex arithmetic.

[COMPLEX\_NUMBERS](../../cpp_src/complex_numbers/complex_numbers.html),
a C++ program which demonstrates some simple features involved in the
use of complex numbers in C programming.

[LAPACK\_EXAMPLES](../../f77_src/lapack_examples/lapack_examples.html),
a FORTRAN77 program which demonstrates the use of the LAPACK linear
algebra library.

[LINPACK\_BENCH](../../cpp_src/linpack_bench/linpack_bench.html), a C++
program which measures the time taken by LINPACK to solve a particular
linear system.

[LINPACK\_C](../../cpp_src/linpack_c/linpack_c.html), a C++ library
which solves linear systems using single precision complex arithmetic;

[LINPACK\_D](../../cpp_src/linpack_d/linpack_d.html), a C++ library
which solves linear systems using double precision real arithmetic;

[LINPACK\_S](../../cpp_src/linpack_s/linpack_s.html), a C++ library
which solves linear systems using single precision real arithmetic;

[TEST\_MAT](../../cpp_src/test_mat/test_mat.html), a C++ library which
defines test matrices.

### Author: {#author align="center"}

Original FORTRAN77 version by Jack Dongarra, Jim Bunch, Cleve Moler,
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

-   [linpack\_z.cpp](linpack_z.cpp), the source code;
-   [linpack\_z.hpp](linpack_z.hpp), the include file;

### Examples and Tests: {#examples-and-tests align="center"}

-   [linpack\_z\_prb.cpp](linpack_z_prb.cpp), the calling program for
    the double precision real library;
-   [linpack\_z\_prb\_output.txt](linpack_z_prb_output.txt), the sample
    output.

### List of Routines: {#list-of-routines align="center"}

-   **DROTG** constructs a Givens plane rotation.
-   **ZCHDC:** Cholesky decomposition of a Hermitian positive definite
    matrix.
-   **ZCHDD** downdates an augmented Cholesky decomposition.
-   **ZCHEX** updates a Cholesky factorization.
-   **ZCHUD** updates an augmented Cholesky decomposition.
-   **ZGBCO** factors a complex band matrix and estimates its condition.
-   **ZGBDI** computes the determinant of a band matrix factored by
    ZGBCO or ZGBFA.
-   **ZGBFA** factors a complex band matrix by elimination.
-   **ZGBSL** solves a complex band system factored by ZGBCO or ZGBFA.
-   **ZGECO** factors a complex matrix and estimates its condition.
-   **ZGEDI** computes the determinant and inverse of a matrix.
-   **ZGEFA** factors a complex matrix by Gaussian elimination.
-   **ZGESL** solves a complex system factored by ZGECO or ZGEFA.
-   **ZGTSL** solves a complex general tridiagonal system.
-   **ZHICO** factors a complex hermitian matrix and estimates its
    condition.
-   **ZHIDI** computes the determinant and inverse of a matrix factored
    by ZHIFA.
-   **ZHIFA** factors a complex hermitian matrix.
-   **ZHISL** solves a complex hermitian system factored by ZHIFA.
-   **ZHPCO** factors a complex hermitian packed matrix and estimates
    its condition.
-   **ZHPDI:** determinant, inertia and inverse of a complex hermitian
    matrix.
-   **ZHPFA** factors a complex hermitian packed matrix.
-   **ZHPSL** solves a complex hermitian system factored by ZHPFA.
-   **ZPBCO** factors a complex hermitian positive definite band matrix.
-   **ZPBDI** gets the determinant of a hermitian positive definite band
    matrix.
-   **ZPBFA** factors a complex hermitian positive definite band matrix.
-   **ZPBSL** solves a complex hermitian positive definite band system.
-   **ZPOCO** factors a complex hermitian positive definite matrix.
-   **ZPODI:** determinant, inverse of a complex hermitian positive
    definite matrix.
-   **ZPOFA** factors a complex hermitian positive definite matrix.
-   **ZPOSL** solves a complex hermitian positive definite system.
-   **ZPPCO** factors a complex hermitian positive definite matrix.
-   **ZPPDI:** determinant, inverse of a complex hermitian positive
    definite matrix.
-   **ZPPFA** factors a complex hermitian positive definite packed
    matrix.
-   **ZPPSL** solves a complex hermitian positive definite linear
    system.
-   **ZPTSL** solves a Hermitian positive definite tridiagonal linear
    system.
-   **ZQRDC** computes the QR factorization of an N by P complex matrix.
-   **ZQRSL** solves, transforms or projects systems factored by ZQRDC.
-   **ZSICO** factors a complex symmetric matrix.
-   **ZSIDI** computes the determinant and inverse of a matrix factored
    by ZSIFA.
-   **ZSIFA** factors a complex symmetric matrix.
-   **ZSISL** solves a complex symmetric system that was factored by
    ZSIFA.
-   **ZSPCO** factors a complex symmetric matrix stored in packed form.
-   **ZSPDI** sets the determinant and inverse of a complex symmetric
    packed matrix.
-   **ZSPFA** factors a complex symmetric matrix stored in packed form.
-   **ZSPSL** solves a complex symmetric system factored by ZSPFA.
-   **ZSVDC** applies the singular value decompostion to an N by P
    matrix.
-   **ZTRCO** estimates the condition of a complex triangular matrix.
-   **ZTRDI** computes the determinant and inverse of a complex
    triangular matrix.
-   **ZTRSL** solves triangular systems T\*X=B or Hermitian(T)\*X=B.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 11 October 2010.*
