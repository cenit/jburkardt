TEST\_EIGEN\
Test Matrices for Eigenvalue Analysis {#test_eigen-test-matrices-for-eigenvalue-analysis align="center"}
=====================================

------------------------------------------------------------------------

**TEST\_EIGEN** is a C++ library which generates eigenvalue tests.

The current version of the code can only generate a symmetric matrix
with eigenvalues distributed according to a normal distribution whose
mean and standard deviation are specified by the user in R8SYMM\_GEN.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TEST\_EIGEN** is available in [a C
version](../../c_src/test_eigen/test_eigen.md) and [a C++
version](../../master/test_eigen/test_eigen.md) and [a FORTRAN77
version](../../f77_src/test_eigen/test_eigen.md) and [a FORTRAN90
version](../../f_src/test_eigen/test_eigen.md) and [a MATLAB
version](../../m_src/test_eigen/test_eigen.md) and [a Python
version](../../py_src/test_eigen/test_eigen.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[EISPACK](../../master/eispack/eispack.md), a C++ library which
carries out eigenvalue computations. It includes a function to compute
the singular value decomposition (SVD) of a rectangular matrix.
superseded by LAPACK;

[JACOBI\_EIGENVALUE](../../master/jacobi_eigenvalue/jacobi_eigenvalue.md),
a C++ library which implements the Jacobi iteration for the iterative
determination of the eigenvalues and eigenvectors of a real symmetric
matrix.

[POWER\_METHOD](../../master/power_method/power_method.md), a C++
library which carries out the power method for finding a dominant
eigenvalue and its eigenvector.

[TEST\_MAT](../../master/test_mat/test_mat.md), a C++ library which
defines test matrices.

[TOMS343](../../f77_src/toms343/toms343.md), a FORTRAN77 library which
computes the eigenvalues and eigenvectors of a general real matrix;\
this is a FORTRAN77 version of ACM TOMS algorithm 343.

[TOMS384](../../f77_src/toms384/toms384.md), a FORTRAN77 library which
computes the eigenvalues and eigenvectors of a symmetric matrix;\
this is a FORTRAN77 version of ACM TOMS algorithm 384.

### Reference: {#reference align="center"}

1.  Robert Gregory, David Karney,\
    A Collection of Matrices for Testing Computational Algorithms,\
    Wiley, 1969,\
    ISBN: 0882756494,\
    LC: QA263.G68.
2.  Pete Stewart,\
    Efficient Generation of Random Orthogonal Matrices With an
    Application to Condition Estimators,\
    SIAM Journal on Numerical Analysis,\
    Volume 17, Number 3, June 1980, pages 403-409.

### Source Code: {#source-code align="center"}

-   [test\_eigen.cpp](test_eigen.cpp), the source code;
-   [test\_eigen.hpp](test_eigen.hpp), the include file;

### Examples and Tests: {#examples-and-tests align="center"}

-   [test\_eigen\_prb.cpp](test_eigen_prb.cpp), the calling program;
-   [test\_eigen.txt](test_eigen.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_NORMAL\_01** samples the standard normal probability
    distribution.
-   **R8\_SIGN** returns the sign of an R8.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **R8BIN\_PRINT** prints the bins of a real vector.
-   **R8MAT\_COPY** copies one R8MAT to another.
-   **R8MAT\_HOUSE\_AXH\_NEW** computes A\*H where H is a compact
    Householder matrix.
-   **R8MAT\_IDENTITY** returns an identity matrix.
-   **R8MAT\_MM\_NEW** multiplies two matrices.
-   **R8MAT\_ORTH\_UNIFORM** returns a random orthogonal matrix.
-   **R8MAT\_PRINT** prints an R8MAT.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8SYMM\_TEST** determines a symmetric matrix with a certain
    eigenstructure.
-   **R8VEC\_BIN** computes bins based on a given R8VEC.
-   **R8VEC\_COPY** copies an R8VEC.
-   **R8VEC\_HOUSE\_COLUMN** defines a Householder premultiplier that
    "packs" a column.
-   **R8VEC\_MAX** returns the value of the maximum element in an R8VEC.
-   **R8VEC\_MIN** returns the value of the minimum element in an R8VEC.
-   **R8VEC\_NORM\_L2** returns the L2 norm of an R8VEC.
-   **R8VEC\_NORMAL** returns a scaled pseudonormal R8VEC.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC\_UNIFORM\_01\_NEW** returns a new unit pseudorandom R8VEC.
-   **R8VEC\_ZERO\_NEW** creates and zeroes an R8VEC.
-   **R8VEC2\_PRINT** prints an R8VEC2.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 22 February 2012.*
