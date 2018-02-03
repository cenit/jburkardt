JACOBI\_EIGENVALUE\
Eigenvalues and Eigenvectors of a Symmetric Matrix {#jacobi_eigenvalue-eigenvalues-and-eigenvectors-of-a-symmetric-matrix align="center"}
==================================================

------------------------------------------------------------------------

**JACOBI\_EIGENVALUE** is a C++ library which computes the eigenvalues
and eigenvectors of a real symmetric matrix.

Given a real symmetric NxN matrix A, **JACOBI\_EIGENVALUE** carries out
an iterative procedure known as Jacobi's iteration, to determine a
N-vector D of real, positive eigenvalues, and an NxN matrix V whose
columns are the corresponding eigenvectors, so that, for each column J
of the eigenmatrix:

            A * Vj = Dj * Vj
          

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**JACOBI\_EIGENVALUE** is available in [a C
version](../../c_src/jacobi_eigenvalue/jacobi_eigenvalue.md) and [a
C++ version](../../master/jacobi_eigenvalue/jacobi_eigenvalue.md) and
[a FORTRAN77
version](../../f77_src/jacobi_eigenvalue/jacobi_eigenvalue.md) and [a
FORTRAN90 version](../../f_src/jacobi_eigenvalue/jacobi_eigenvalue.md)
and [a MATLAB
version](../../m_src/jacobi_eigenvalue/jacobi_eigenvalue.md) and [a
Python version](../../py_src/jacobi_eigenvalue/jacobi_eigenvalue.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[TEST\_EIGEN](../../master/test_eigen/test_eigen.md), a C++ library
which implements test matrices for eigenvalue analysis.

[TEST\_MAT](../../master/test_mat/test_mat.md), a C++ library which
defines test matrices, some of which have known determinants,
eigenvalues and eigenvectors, inverses and so on.

### Reference: {#reference align="center"}

1.  Gene Golub, Charles VanLoan,\
    Matrix Computations, Third Edition,\
    Johns Hopkins, 1996,\
    ISBN: 0-8018-4513-X,\
    LC: QA188.G65.

### Source Code: {#source-code align="center"}

-   [jacobi\_eigenvalue.cpp](jacobi_eigenvalue.cpp), the source code.
-   [jacobi\_eigenvalue.hpp](jacobi_eigenvalue.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [jacobi\_eigenvalue\_prb.cpp](jacobi_eigenvalue_prb.cpp), a sample
    calling program.
-   [jacobi\_eigenvalue\_prb\_output.txt](jacobi_eigenvalue_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **JACOBI\_EIGENVALUE** carries out the Jacobi eigenvalue iteration.
-   **R8MAT\_DIAG\_GET\_VECTOR** gets the value of the diagonal of an
    R8MAT.
-   **R8MAT\_IDENTITY** stores the identity matrix in an R8MAT.
-   **R8MAT\_IS\_EIGEN\_RIGHT** determines the error in a (right)
    eigensystem.
-   **R8MAT\_NORM\_FRO** returns the Frobenius norm of an M by N R8MAT.
-   **R8MAT\_PRINT** prints an R8MAT.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 15 July 2013.*
