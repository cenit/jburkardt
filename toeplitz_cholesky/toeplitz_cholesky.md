TOEPLITZ\_CHOLESKY\
Cholesky Factor of Nonnegative Definite Toeplitz Matrix {#toeplitz_cholesky-cholesky-factor-of-nonnegative-definite-toeplitz-matrix align="center"}
=======================================================

------------------------------------------------------------------------

**TOEPLITZ\_CHOLESKY** is a C library which computes the Cholesky
factorization of a nonnegative definite symmetric Toeplitz matrix.

A Toeplitz matrix is a matrix which is constant along all diagonals. A
schematic of a 3x4 Toeplitz matrix would be

            a  b  c  d
            e  a  b  c
            f  e  a  b
          

A symmetric matrix is a matrix with N rows and N columns, such that
A(I,J) = A(J,I) for all indices I and J. All the eigenvalues of a
symmetric matrix are real.

A symmetric Toeplitz matrix is a matrix which is symmetric and Toeplitz.
A schematic of a 4x4 symmetric Toeplitz matrix would be

            a  b  c  d
            b  a  b  c
            c  b  a  b
            d  c  b  a
          

A nonnegative definite symmetric matrix A is a symmetric matrix whose
eigenvalues are all nonnegative.

Given a nonnegative definite symmetric matrix A, the upper Cholesky
factor R is an upper triangular matrix such that A = R' \* R; the lower
Cholesky factor L is a lower triangular matrix such that A = L L'.
Obviously, L = R'.

A Toeplitz matrix can be represented in a compressed format that stores
the first row and the first column (omitting the first entry). One
convenient format would be to create the 2xN array G as follows:

           G(1,1:N) = A(1,1:N)
           G(2,1)   = 0.0
           G(2,2:N) = A(2:N,1)
          

A symmetric Toeplitz matrix can be represented in a compressed format
that stores just the first row.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TOEPLITZ\_CHOLESKY** is available in [a C
version](../../c_src/toeplitz_cholesky/toeplitz_cholesky.html) and [a
C++ version](../../cpp_src/toeplitz_cholesky/toeplitz_cholesky.html) and
[a FORTRAN77
version](../../f77_src/toeplitz_cholesky/toeplitz_cholesky.html) and [a
FORTRAN90 version](../../f_src/toeplitz_cholesky/toeplitz_cholesky.html)
and [a MATLAB
version](../../m_src/toeplitz_cholesky/toeplitz_cholesky.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[ASA006](../../c_src/asa006/asa006.html), a C library which computes the
Cholesky factorization of a symmetric positive definite matrix, by
Michael Healy. This is a MATLAB version of Applied Statistics Algorithm
6;

[LINPACK\_D](../../c_src/linpack_d/linpack_d.html), a C library which
factors and solves linear systems using double precision real
arithmetic, by Jack Dongarra, Jim Bunch, Cleve Moler, Pete Stewart.

[LINPLUS](../../c_src/linplus/linplus.html), a C library which carries
out simple manipulations of matrices in a variety of formats, including
matrices stored in banded, border-banded, circulant, lower triangular,
pentadiagonal, sparse, symmetric, toeplitz, tridiagonal, upper
triangular and vandermonde formats.

### Reference: {#reference align="center"}

1.  Michael Stewart,\
    Cholesky factorization of semi-definite Toeplitz matrices.

### Source Code: {#source-code align="center"}

-   [toeplitz\_cholesky.cpp](toeplitz_cholesky.cpp), the source code.
-   [toeplitz\_cholesky.hpp](toeplitz_cholesky.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [toeplitz\_cholesky\_prb.cpp](toeplitz_cholesky_prb.cpp), a sample
    calling program.
-   [toeplitz\_cholesky\_prb\_output.txt](toeplitz_cholesky_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the smaller of two I4's.
-   **R8MAT\_COPY\_NEW** copies one R8MAT to a "new" R8MAT.
-   **R8MAT\_MMT\_NEW** computes C = A \* B'.
-   **R8MAT\_MTM\_NEW** computes C = A' \* B.
-   **R8MAT\_PRINT** prints an R8MAT.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TOEP\_CHOLESKY\_LOWER:** lower Cholesky factor of a Toeplitz
    matrix.
-   **TOEP\_CHOLESKY\_UPPER:** upper Cholesky factor of a Toeplitz
    matrix.
-   **TOEPLITZ\_CHOLESKY\_LOWER:** lower Cholesky factor of a Toeplitz
    matrix.
-   **TOEPLITZ\_CHOLESKY\_UPPER:** upper Cholesky factor of a Toeplitz
    matrix.

You can go up one level to [the C source codes](../c_src.html).

------------------------------------------------------------------------

*Last modified on 14 November 2012.*
