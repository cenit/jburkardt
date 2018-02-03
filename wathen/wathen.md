WATHEN\
Assemble, Factor, Solve a Finite Element System {#wathen-assemble-factor-solve-a-finite-element-system align="center"}
===============================================

------------------------------------------------------------------------

**WATHEN** is a C++ library which compares storage schemes (full,
banded, sparse triplet, sparse) and solution strategies (A\\x, Linpack,
conjugate gradient (CG)) for linear systems involving the Wathen matrix,
which can arise when solving a problem using the finite element method
(FEM).

The Wathen matrix is a typical example of a matrix that arises during
finite element computations. The parameters NX and NY specify how many
elements are to be set up in the X and Y directions. The number of
variables N is then

            N = 3 NX NY + 2 NX + 2 NY + 1
          

and the full linear system will require N \* N storage for the matrix.

However, the matrix is sparse, and a banded or sparse storage scheme can
be used to save storage. However, even if storage is saved, a revised
program may eat up too much time because MATLAB's sparse storage scheme
is not efficiently used by inserting nonzero elements one at a time.
Moreover, if banded storage is employed, the user must provide a
suitable fast solver. Simply "translating" a banded solver from another
language will probably not provide an efficient routine.

This library looks at how the complexity of the problem grows with
increasing NX and NY; how the computing time increases; how the various
full, banded and sparse approaches perform.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**WATHEN** is available in [a C version](../../c_src/wathen/wathen.md)
and [a C++ version](../../master/wathen/wathen.md) and [a FORTRAN77
version](../../f77_src/wathen/wathen.md) and [a FORTRAN90
version](../../f_src/wathen/wathen.md) and [a MATLAB
version](../../m_src/wathen/wathen.md) and [a Python
version](../../py_src/wathen/wathen.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CG](../../master/cg/cg.md), a C++ library which implements a simple
version of the conjugate gradient (CG) method for solving a system of
linear equations of the form A\*x=b, suitable for situations in which
the matrix A is positive definite (only real, positive eigenvalues) and
symmetric.

[LINPACK\_D](../../master/linpack_d/linpack_d.md), a C++ library
which factors and solves linear systems using double precision real
arithmetic, by Jack Dongarra, Jim Bunch, Cleve Moler, Pete Stewart.

[SPARSE\_DISPLAY](../../master/sparse_display/sparse_display.md), a
C++ library which can read information defining a matrix of numbers and
display the sparsity pattern or location of the nonzero elements using
gnuplot. This operation is already available in the built-in MATLAB
"spy" command.

[TEST\_MAT](../../master/test_mat/test_mat.md), a C++ library which
defines test matrices for which some of the determinant, eigenvalues,
inverse, null vectors, P\*L\*U factorization or linear system solution
are already known, including the Vandermonde and Wathen matrix.

### Reference: {#reference align="center"}

1.  Nicholas Higham,\
    Algorithm 694: A Collection of Test Matrices in MATLAB,\
    ACM Transactions on Mathematical Software,\
    Volume 17, Number 3, September 1991, pages 289-305.
2.  Andrew Wathen,\
    Realistic eigenvalue bounds for the Galerkin mass matrix,\
    IMA Journal of Numerical Analysis,\
    Volume 7, Number 4, October 1987, pages 449-457.

### Source Code: {#source-code align="center"}

-   [wathen.cpp](wathen.cpp), the source code.
-   [wathen.hpp](wathen.hpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [wathen\_prb.cpp](wathen_prb.cpp), a sample calling program.
-   [wathen\_prb\_output.txt](wathen_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **BANDWIDTH** returns the bandwidth of a matrix.
-   **CG\_FULL** uses the conjugate gradient method for a full storage
    matrix.
-   **CG\_ST** uses the conjugate gradient method for a sparse triplet
    storage matrix.
-   **DAXPY** computes constant times a vector plus a vector.
-   **DDOT** forms the dot product of two vectors.
-   **DGBFA** factors a real band matrix by elimination.
-   **DGBSL** solves a real banded system factored by DGBCO or DGBFA.
-   **DGEFA** factors a real general matrix.
-   **DGESL** solves a real general linear system A \* X = B.
-   **DSCAL** scales a vector by a constant.
-   **IDAMAX** indexes the array element of maximum absolute value.
-   **NONZEROS** counts the nonzeros in a matrix.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **R8GE\_CG** uses the conjugate gradient method on an R8GE system.
-   **R8GE\_MXV** multiplies an R8GE matrix by an R8VEC.
-   **R8MAT\_UNIFORM\_01** fills an R8MAT with unit pseudorandom
    numbers.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC\_UNIFORM\_01** returns a unit pseudorandom R8VEC.
-   **ST\_MV** multiplies a sparse triple matrix times a vector.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **WATHEN\_BANDWIDTH** returns the bandwidth of the WATHEN matrix.
-   **WATHEN\_BANDED** returns the Wathen matrix, using banded storage.
-   **WATHEN\_FULL** returns the Wathen matrix, using full storage.
-   **WATHEN\_ORDER** returns the order of the WATHEN matrix.
-   **WATHEN\_ST:** Wathen matrix stored in sparse triplet format.
-   **WATHEN\_ST\_SIZE:** Size of Wathen matrix stored in sparse triplet
    format.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 08 June 2014.*
