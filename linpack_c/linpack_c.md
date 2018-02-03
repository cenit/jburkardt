LINPACK\_C\
Linear Algebra Library\
Single Precision Complex {#linpack_c-linear-algebra-library-single-precision-complex align="center"}
========================

------------------------------------------------------------------------

**LINPACK\_C** is a C++ library which can solve systems of linear
equations for a variety of matrix types and storage modes, using single
precision complex arithmetic, by Jack Dongarra, Jim Bunch, Cleve Moler,
Pete Stewart.

LINPACK has officially been superseded by the LAPACK library. The LAPACK
library uses more modern algorithms and code structure. However, the
LAPACK library can be extraordinarily complex; what is done in a single
**LINPACK** routine may correspond to 10 or 20 utility routines in
LAPACK. This is fine if you treat LAPACK as a black box. But if you wish
to learn how the algorithm works, or to adapt it, or to convert the code
to another language, this is a real drawback. This is one reason I still
keep a copy of **LINPACK** around.

Versions of **LINPACK** in various arithmetic precisions are available
through [the NETLIB web site](http://www.netlib.org/).

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**LINPACK\_C** is available in [a C++
version](../../master/linpack_c/linpack_c.md) and [a FORTRAN77
version](../../f77_src/linpack_c/linpack_c.md) and [a FORTRAN90
version](../../f_src/linpack_c/linpack_c.md) and [a MATLAB
version](../../m_src/linpack_c/linpack_c.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BLAS1\_C](../../master/blas1_c/blas1_c.md), a C++ library which
contains basic linear algebra routines for vector-vector operations,
using single precision complex arithmetic.

[COMPLEX\_NUMBERS](../../master/complex_numbers/complex_numbers.md),
a C++ program which demonstrates some simple features involved in the
use of complex numbers in C programming.

[LAPACK\_EXAMPLES](../../f77_src/lapack_examples/lapack_examples.md),
a FORTRAN77 program which demonstrates the use of the LAPACK linear
algebra library.

[LINPACK\_BENCH](../../master/linpack_bench/linpack_bench.md), a C++
program which measures the time taken by **LINPACK** to solve a
particular linear system.

[LINPACK\_D](../../master/linpack_d/linpack_d.md), a C++ library
which solves linear systems using double precision real arithmetic;

[LINPACK\_S](../../master/linpack_s/linpack_s.md), a C++ library
which solves linear systems using single precision real arithmetic;

[LINPACK\_Z](../../master/linpack_z/linpack_z.md), a C++ library
which solves linear systems using double precision complex arithmetic;

[TEST\_MAT](../../master/test_mat/test_mat.md), a C++ library which
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

-   [linpack\_c.cpp](linpack_c.cpp), the source code;
-   [linpack\_c.hpp](linpack_c.hpp), the include file;

### Examples and Tests: {#examples-and-tests align="center"}

-   [linpack\_c\_prb.cpp](linpack_c_prb.cpp), the calling program for
    the double precision real library;
-   [linpack\_c\_prb\_output.txt](linpack_c_prb_output.txt), the output
    file.

### List of Routines: {#list-of-routines align="center"}

-   **CCHDC:** Cholesky decomposition of a Hermitian positive definite
    matrix.
-   **CCHDD** downdates an augmented Cholesky decomposition.
-   **CCHEX** updates a Cholesky factorization.
-   **CCHUD** updates an augmented Cholesky decomposition.
-   **CGBCO** factors a complex band matrix and estimates its condition.
-   **CGBDI** computes the determinant of a band matrix factored by
    CGBCO or CGBFA.
-   **CGBFA** factors a complex band matrix by elimination.
-   **CGBSL** solves a complex band system factored by CGBCO or CGBFA.
-   **CGECO** factors a complex matrix and estimates its condition.
-   **CGEDI** computes the determinant and inverse of a matrix.
-   **CGEFA** factors a complex matrix by Gaussian elimination.
-   **CGESL** solves a complex system factored by CGECO or CGEFA.
-   **CGTSL** solves a complex general tridiagonal system.
-   **CHICO** factors a complex hermitian matrix and estimates its
    condition.
-   **CHIDI** computes the determinant and inverse of a matrix factored
    by CHIFA.
-   **CHIFA** factors a complex hermitian matrix.
-   **CHISL** solves a complex hermitian system factored by CHIFA.
-   **CHPCO** factors a complex hermitian packed matrix and estimates
    its condition.
-   **CHPDI:** determinant, inertia and inverse of a complex hermitian
    matrix.
-   **CHPFA** factors a complex hermitian packed matrix.
-   **CHPSL** solves a complex hermitian system factored by CHPFA.
-   **CPBCO** factors a complex hermitian positive definite band matrix.
-   **CPBDI** gets the determinant of a hermitian positive definite band
    matrix.
-   **CPBFA** factors a complex hermitian positive definite band matrix.
-   **CPBSL** solves a complex hermitian positive definite band system.
-   **CPOCO** factors a complex hermitian positive definite matrix.
-   **CPODI:** determinant, inverse of a complex hermitian positive
    definite matrix.
-   **CPOFA** factors a complex hermitian positive definite matrix.
-   **CPOSL** solves a complex hermitian positive definite system.
-   **CPPCO** factors a complex hermitian positive definite matrix.
-   **CPPDI:** determinant, inverse of a complex hermitian positive
    definite matrix.
-   **CPPFA** factors a complex hermitian positive definite packed
    matrix.
-   **CPPSL** solves a complex hermitian positive definite linear
    system.
-   **CPTSL** solves a Hermitian positive definite tridiagonal linear
    system.
-   **CQRDC** computes the QR factorization of an N by P complex matrix.
-   **CQRSL** solves, transforms or projects systems factored by CQRDC.
-   **CSICO** factors a complex symmetric matrix.
-   **CSIDI** computes the determinant and inverse of a matrix factored
    by CSIFA.
-   **CSIFA** factors a complex symmetric matrix.
-   **CSISL** solves a complex symmetric system that was factored by
    CSIFA.
-   **CSPCO** factors a complex symmetric matrix stored in packed form.
-   **CSPDI** sets the determinant and inverse of a complex symmetric
    packed matrix.
-   **CSPFA** factors a complex symmetric matrix stored in packed form.
-   **CSPSL** solves a complex symmetric system factored by CSPFA.
-   **CSVDC** applies the singular value decompostion to an N by P
    matrix.
-   **CTRCO** estimates the condition of a complex triangular matrix.
-   **CTRDI** computes the determinant and inverse of a complex
    triangular matrix.
-   **CTRSL** solves triangular systems T\*X=B or Hermitian(T)\*X=B.
-   **R4\_MAX** returns the maximum of two R4's.
-   **SROTG** constructs a float Givens plane rotation.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 23 June 2009.*
