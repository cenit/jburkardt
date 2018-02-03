EISPACK\
Eigenvalue Calculations {#eispack-eigenvalue-calculations align="center"}
=======================

------------------------------------------------------------------------

**EISPACK** is a C++ library which calculates the eigenvalues and
eigenvectors of a matrix.

Despite the following documentation, please note that only a FEW of the
EISPACK routines have actually been converted to C++ at this time.

A variety of options are available for special matrix formats.

Note that EISPACK "simulates" complex arithmetic. That is, complex data
is stored as pairs of real numbers, and complex arithmetic is done by
carefully manipulating the real numbers.

EISPACK is old, and its functionality has been replaced by the more
modern and efficient LAPACK. There are some advantages, not all
sentimental, to keeping a copy of EISPACK around. For one thing, the
implementation of the LAPACK routines makes it a trying task to try to
comprehend the algorithm by reading the source code. A single user level
routine may refer indirectly to thirty or forty others.

EISPACK includes a function to compute the singular value decomposition
(SVD) of a rectangular matrix.

The pristine correct original source code for **EISPACK** is available
through [the NETLIB web site](http://www.netlib.org/).

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**EISPACK** is available in [a C
version](../../c_src/eispack/eispack.md) and [a C++
version](../../master/eispack/eispack.md) and [a FORTRAN77
version](../../f77_src/eispack/eispack.md) and [a FORTRAN90
version](../../f_src/eispack/eispack.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[JACOBI\_EIGENVALUE](../../master/jacobi_eigenvalue/jacobi_eigenvalue.md),
a C++ library which implements the Jacobi iteration for the iterative
determination of the eigenvalues and eigenvectors of a real symmetric
matrix.

[TEST\_EIGEN](../../master/test_eigen/test_eigen.md), a C++ library
which defines various eigenvalue test cases.

[TEST\_MAT](../../master/test_mat/test_mat.md), a C++ library which
defines test matrices, some of which have known eigenvalues and
eigenvectors.

### Reference: {#reference align="center"}

1.  Hilary Bowdler, Roger Martin, Christian Reinsch, James Wilkinson,\
    The QR and QL algorithms for Symmetric Matrices: TQL1 and TQL2,\
    Numerische Mathematik,\
    Volume 11, Number 4, May 1968, pages 293-306.
2.  Gene Golub, Christian Reinsch,\
    Singular Value Decomposition and Least Squares Solutions,\
    Numerische Mathematik,\
    Volume 14, Number 5, April 1970, pages 403-420.
3.  Roger Martin, G Peters, James Wilkinson,\
    HQR, The QR Algorithm for Real Hessenberg Matrices,\
    Numerische Mathematik,\
    Volume 14, Number 3, February 1970, pages 219-231.
4.  Roger Martin, Christian Reinsch, James Wilkinson,\
    Householder's Tridiagonalization of a Symmetric Matrix: TRED1, TRED2
    and TRED3,\
    Numerische Mathematik,\
    Volume 11, Number 3, March 1968, pages 181-195.
5.  Roger Martin, James Wilkinson,\
    Similarity Reduction of a General Matrix to Hessenberg Form:
    ELMHES,\
    Numerische Mathematik,\
    Volume 12, Number 5, December 1968, pages 349-368.
6.  Beresford Parlett, Christian Reinsch,\
    Balancing a Matrix for Calculation of Eigenvalues and Eigenvectors,\
    Numerische Mathematik,\
    Volume 13, Number 4, August 1969, pages 293-304.
7.  Christian Reinsch,\
    Algorithm 464: Eigenvalues of a real symmetric tridiagonal matrix,\
    Communications of the ACM,\
    Volume 16, Number 11, November 1973, page 689.
8.  Brian Smith, James Boyle, Jack Dongarra, Burton Garbow, Yasuhiko
    Ikebe, Virginia Klema, Cleve Moler,\
    Matrix Eigensystem Routines, EISPACK Guide,\
    Lecture Notes in Computer Science, Volume 6,\
    Springer, 1976,\
    ISBN13: 978-3540075462,\
    LC: QA193.M37.
9.  James Wilkinson, Christian Reinsch,\
    Handbook for Automatic Computation,\
    Volume II, Linear Algebra, Part 2,\
    Springer, 1971,\
    ISBN: 0387054146,\
    LC: QA251.W67.

### Source Code: {#source-code align="center"}

-   [eispack.cpp](eispack.cpp), the source code;
-   [eispack.hpp](eispack.hpp), the include file;

### Examples and Tests: {#examples-and-tests align="center"}

**EISPACK\_PRB1** is a test program that demonstrates the use of a
number of EISPACK routines.

-   [eispack\_prb1.cpp](eispack_prb1.cpp), the calling program;
-   [eispack\_prb1\_output.txt](eispack_prb1_output.txt), the output
    file.

### List of Routines: {#list-of-routines align="center"}

-   **BAKVEC** determines eigenvectors by reversing the FIGI
    transformation.
-   **CBABK2** finds eigenvectors by undoing the CBAL transformation.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the smaller of two I4's.
-   **PYTHAG** computes SQRT ( A \* A + B \* B ) carefully.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_EPSILON** returns the R8 round off unit.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_MIN** returns the minimum of two R8's.
-   **R8\_SIGN** returns the sign of an R8.
-   **R8MAT\_MM\_NEW** multiplies two matrices.
-   **R8MAT\_PRINT** prints an R8MAT.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **RS** computes eigenvalues and eigenvectors of real symmetric
    matrix.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TQL2** computes all eigenvalues/vectors, real symmetric
    tridiagonal matrix.
-   **TQLRAT** computes all eigenvalues of a real symmetric tridiagonal
    matrix.
-   **TRED1** transforms a real symmetric matrix to symmetric
    tridiagonal form.
-   **TRED2** transforms a real symmetric matrix to symmetric
    tridiagonal form.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 09 November 2012.*
