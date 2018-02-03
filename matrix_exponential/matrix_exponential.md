MATRIX\_EXPONENTIAL\
Algorithms for the Matrix Exponential {#matrix_exponential-algorithms-for-the-matrix-exponential align="center"}
=====================================

------------------------------------------------------------------------

**MATRIX\_EXPONENTIAL** is a C++ library which exhibits and compares
some algorithms for approximating the matrix exponential function.

Formally, for a square matrix A and scalar t, the matrix exponential
exp(A\*t) can be defined as the sum:

> exp(A\*t) = sum ( 0 &lt;= i &lt; oo ) A\^i t\^i / i!

The simplest form of the matrix exponential problem asks for the value
when t = 1. Even for this simple case, and for a matrix of small order,
it can be quite difficult to compute the matrix exponential accurately.

**MATRIX\_EXPONENTIAL** needs the R8LIB library. The test code for
**MATRIX\_EXPONENTIAL** requires the TEST\_MATRIX\_EXPONENTIAL library.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**MATRIX\_EXPONENTIAL** is available in [a C
version](../../c_src/matrix_exponential/matrix_exponential.html) and [a
C++ version](../../cpp_src/matrix_exponential/matrix_exponential.html)
and [a FORTRAN77
version](../../f77_src/matrix_exponential/matrix_exponential.html) and
[a FORTRAN90
version](../../f_src/matrix_exponential/matrix_exponential.html) and [a
MATLAB version](../../m_src/matrix_exponential/matrix_exponential.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[EXPOKIT](../../f77_src/expokit/expokit.html), a FORTRAN77 library which
solves various forms of the matrix exponential problem, by Roger Sidje.

[R8LIB](../../cpp_src/r8lib/r8lib.html), a C++ library which contains
many utility routines using double precision real (R8) arithmetic.

[TEST\_MAT](../../cpp_src/test_mat/test_mat.html), a C++ library which
defines test matrices.

[TEST\_MATRIX\_EXPONENTIAL](../../cpp_src/test_matrix_exponential/test_matrix_exponential.html),
a C++ library which defines a set of test cases for computing the matrix
exponential.

### Reference: {#reference align="center"}

1.  Alan Laub,\
    Review of "Linear System Theory" by Joao Hespanha,\
    SIAM Review,\
    Volume 52, Number 4, December 2010, page 779-781.
2.  Cleve Moler, Charles VanLoan,\
    Nineteen Dubious Ways to Compute the Exponential of a Matrix, SIAM
    Review,\
    Volume 20, Number 4, October 1978, pages 801-836.
3.  Cleve Moler, Charles VanLoan,\
    Nineteen Dubious Ways to Compute the Exponential of a Matrix,
    Twenty-Five Years Later,\
    SIAM Review,\
    Volume 45, Number 1, March 2003, pages 3-49.
4.  Roger Sidje,\
    EXPOKIT: Software Package for Computing Matrix Exponentials,\
    ACM Transactions on Mathematical Software,\
    Volume 24, Number 1, 1998, pages 130-156.
5.  Robert Ward,\
    Numerical computation of the matrix exponential with accuracy
    estimate,\
    SIAM Journal on Numerical Analysis,\
    Volume 14, Number 4, September 1977, pages 600-610.

### Source Code: {#source-code align="center"}

-   [matrix\_exponential.cpp](matrix_exponential.cpp), the source code.
-   [matrix\_exponential.hpp](matrix_exponential.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [matrix\_exponential\_prb.cpp](matrix_exponential_prb.cpp), a sample
    calling program.
-   [matrix\_exponential\_prb\_output.txt](matrix_exponential_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **C8MAT\_EXPM1** is essentially MATLAB's built-in matrix exponential
    algorithm.
-   **R8MAT\_EXPM1** is essentially MATLAB's built-in matrix exponential
    algorithm.
-   **R8MAT\_EXPM2** uses the Taylor series for the matrix exponential.
-   **R8MAT\_EXPM3** approximates the matrix exponential using an
    eigenvalue approach.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last modified on 17 October 2012.*
