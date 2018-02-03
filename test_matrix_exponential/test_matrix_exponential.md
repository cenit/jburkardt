TEST\_MATRIX\_EXPONENTIAL\
Matrix Exponential Tests {#test_matrix_exponential-matrix-exponential-tests align="center"}
==========================

------------------------------------------------------------------------

**TEST\_MATRIX\_EXPONENTIAL** is a C++ library which contains some
simple tests for software that computes the matrix exponential function.

Formally, for a square matrix A and scalar t, the matrix exponential
exp(A\*t) can be defined as the sum:

> exp(A\*t) = sum ( 0 &lt;= i &lt; oo ) A\^i t\^i / i!

The simplest form of the matrix exponential problem asks for the value
when t = 1, that is

> exp(A) = sum ( 0 &lt;= i &lt; oo ) A\^i / i!

Even for this simple case, and for a matrix of small order, it can be
quite difficult to compute the matrix exponential accurately.

TEST\_MATRIX\_EXPONENTIAL needs the C8LIB and R8LIB libraries.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TEST\_MATRIX\_EXPONENTIAL** is available in [a C
version](../../c_src/test_matrix_exponential/test_matrix_exponential.html)
and [a C++
version](../../cpp_src/test_matrix_exponential/test_matrix_exponential.html)
and [a FORTRAN77
version](../../f77_src/test_matrix_exponential/test_matrix_exponential.html)
and [a FORTRAN90
version](../../f_src/test_matrix_exponential/test_matrix_exponential.html)
and [a MATLAB
version](../../m_src/test_matrix_exponential/test_matrix_exponential.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[EXPOKIT](../../f77_src/expokit/expokit.html), a FORTRAN77 library which
solves various forms of the matrix exponential problem, by Roger Sidje.

[MATRIX\_EXPONENTIAL](../../cpp_src/matrix_exponential/matrix_exponential.html),
a C++ library which demonstrates some simple approaches to the problem
of computing the exponential of a matrix.

[R8LIB](../../cpp_src/r8lib/r8lib.html), a C++ library which contains
many utility routines using double precision real (R8) arithmetic.

[TEST\_MAT](../../cpp_src/test_mat/test_mat.html), a C++ library which
defines test matrices.

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
4.  Cleve Moler,\
    Cleve's Corner: A Balancing Act for the Matrix Exponential,\
    July 23rd, 2012.
5.  Roger Sidje,\
    EXPOKIT: Software Package for Computing Matrix Exponentials,\
    ACM Transactions on Mathematical Software,\
    Volume 24, Number 1, 1998, pages 130-156.
6.  Robert Ward,\
    Numerical computation of the matrix exponential with accuracy
    estimate,\
    SIAM Journal on Numerical Analysis,\
    Volume 14, Number 4, September 1977, pages 600-610.

### Source Code: {#source-code align="center"}

-   [test\_matrix\_exponential.cpp](test_matrix_exponential.cpp), the
    source code.
-   [test\_matrix\_exponential.hpp](test_matrix_exponential.hpp), the
    include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [test\_matrix\_exponential\_prb.cpp](test_matrix_exponential_prb.cpp),
    a sample calling program.
-   [test\_matrix\_exponential\_prb\_output.txt](test_matrix_exponential_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **C8MAT\_EXP\_A** returns the matrix for a given complex test.
-   **C8MAT\_EXP\_EXPA** returns the "exact" exponential matrix for a
    given complex test.
-   **C8MAT\_EXP\_N** returns the matrix order for a given complex test.
-   **C8MAT\_EXP\_STORY** prints explanatory text for each complex
    problem.
-   **C8MAT\_EXP\_TEST\_NUM** returns the number of complex tests.
-   **R8MAT\_EXP\_A** returns the matrix for a given real test.
-   **R8MAT\_EXP\_EXPA** returns the "exact" exponential matrix for a
    given real test.
-   **R8MAT\_EXP\_N** returns the matrix order for a given real test.
-   **R8MAT\_EXP\_STORY** prints explanatory text for each real problem.
-   **R8MAT\_EXP\_TEST\_NUM** returns the number of real tests.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last modified on 05 March 2013.*
