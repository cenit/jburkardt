CYCLIC\_REDUCTION\
A Direct Solution Method for Tridiagonal Linear Systems. {#cyclic_reduction-a-direct-solution-method-for-tridiagonal-linear-systems. align="center"}
========================================================

------------------------------------------------------------------------

**CYCLIC\_REDUCTION** is a C++ library which applies the cyclic
reduction method to solve a tridiagonal system of linear equations
A\*x=b.

The matrix is assumed to be diagonally dominant - that is, for every
row, we require that the magnitude of the diagonal entry be at least as
great as the sum of the magnitudes of the two off-diagonal elements.
This is (just barely) true for the "-1, 2, -1" matrix, for instance.

Other methods for solving tridiagonal linear systems include:

-   Gauss elimination with pivoting;
-   the Thomas algorithm, (Gauss elimination without pivoting);
-   the Jacobi, Gauss-Seidel, and SOR iterative methods;

Cyclic reduction is a form of Gauss elimination. It proceeds by first
eliminating half of the variables simultaneously, then half of the
remainder, and so on. This amounts to more work, but the work in each
elimination step can be done in parallel. Thus, unlike the Gauss and
Thomas algorithms, cyclic reduction offers a procedure for the direct
solution of a tridiagonal linear system that can take advantage of
parallelism.

Cyclic reduction can also be adapted to the block tridiagonal linear
systems that arise when Poisson's equation is discretized over a 2D
region.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**CYCLIC\_REDUCTION** is available in [a C
version](../../c_src/cyclic_reduction/cyclic_reduction.md) and [a C++
version](../../master/cyclic_reduction/cyclic_reduction.md) and [a
FORTRAN77 version](../../f77_src/cyclic_reduction/cyclic_reduction.md)
and [a FORTRAN90
version](../../f_src/cyclic_reduction/cyclic_reduction.md) and [a
MATLAB version](../../m_src/cyclic_reduction/cyclic_reduction.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CSPARSE](../../c_src/csparse/csparse.md), a C library which carries
out the direct solution of sparse linear systems.

[DLAP](../../f_src/dlap/dlap.md), a FORTRAN90 library which carries
out the iterative solution of sparse linear systems.

[LAPACK\_EXAMPLES](../../f77_src/lapack_examples/lapack_examples.md),
a FORTRAN77 program which demonstrates the use of the LAPACK linear
algebra library.

[LINPACK\_D](../../c_src/linpack_d/linpack_d.md), a C library which
factors and solves systems of linear equations in a variety of formats
and arithmetic types.

[LINPLUS](../../master/linplus/linplus.md), a C++ library which
carries out simple manipulations of matrices in a variety of formats.

[MGMRES](../../c_src/mgmres/mgmres.md), a C library which applies the
restarted GMRES algorithm to solve a sparse linear system.

[SUPER\_LU](../../c_src/super_lu/super_lu.md), a C library which
implements some very fast direct solvers for systems of sparse linear
equations.

[TEST\_MAT](../../master/test_mat/test_mat.md), a C++ library which
defines test matrices, some of which have known determinants,
eigenvalues and eigenvectors, inverses and so on.

### Reference: {#reference align="center"}

1.  Gene Golub, Charles VanLoan,\
    Matrix Computations,\
    Third Edition,\
    Johns Hopkins, 1996,\
    ISBN: 0-8018-4513-X,\
    LC: QA188.G65.
2.  Roger Hockney,\
    A fast direct solution of Poisson's equation using Fourier
    Analysis,\
    Journal of the ACM,\
    Volume 12, Number 1, pages 95-113, January 1965.

### Source Code: {#source-code align="center"}

-   [cyclic\_reduction.cpp](cyclic_reduction.cpp), the source code.
-   [cyclic\_reduction.hpp](cyclic_reduction.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [cyclic\_reduction\_prb.cpp](cyclic_reduction_prb.cpp), a sample
    calling program.
-   [cyclic\_reduction\_prb\_output.txt](cyclic_reduction_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **R83\_CR\_FA** decomposes a real tridiagonal matrix using cyclic
    reduction.
-   **R83\_CR\_SL** solves a real linear system factored by R83\_CR\_FA.
-   **R83\_GS\_SL** solves a R83 system using Gauss-Seidel iteration.
-   **R83\_MXV\_NEW** multiplies a R83 matrix times a vector.
-   **R83\_PRINT** prints a R83 matrix.
-   **R83\_PRINT\_SOME** prints some of a R83 matrix.
-   **R8MAT\_PRINT** prints an R8MAT.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8VEC\_INDICATOR\_NEW** sets an R8VEC to the indicator vector
    {1,2,3...}.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC\_PRINT\_SOME** prints "some" of an R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 07 May 2010.*
