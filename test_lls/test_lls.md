TEST\_LLS\
Linear Least Squares Test Problems {#test_lls-linear-least-squares-test-problems align="center"}
==================================

------------------------------------------------------------------------

**TEST\_LLS** is a C++ library which implements linear least squares
(LLS) test problems which seek a vector x which minimizes the error in
the rectangular linear system A\*x=b.

Some linear least squares problems include constraints on the data, such
as requiring that every entry of X be positive. This library only
contains unconstrained problems. For such problems, the task is
typically to find a vector X which minimizes the Euclidean norm of the
residual r=Ax-b, or, in cases where multiple minimizers exist, to find
the minimizer of minimal Euclidean norm.

TEST\_LLS requires access to a compiled copy of the R8LIB library.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TEST\_LLS** is available in [a C
version](../../c_src/test_lls/test_lls.html) and [a C++
version](../../cpp_src/test_lls/test_lls.html) and [a FORTRAN77
version](../../f77_src/test_lls/test_lls.html) and [a FORTRAN90
version](../../f_src/test_lls/test_lls.html) and [a MATLAB
version](../../m_src/test_lls/test_lls.html) and [a Python
version](../../py_src/test_lls/test_lls.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[LLSQ](../../cpp_src/llsq/llsq.html), a C++ library which solves the
simple linear least squares problem of finding the formula of a straight
line y=a\*x+b which minimizes the root-mean-square error to a set of N
data points.

[MINPACK](../../cpp_src/minpack/minpack.html), a C++ library which
solves systems of nonlinear equations, or the least squares minimization
of the residual of a set of linear or nonlinear equations.

[QR\_SOLVE](../../cpp_src/qr_solve/qr_solve.html), a C++ library which
computes the least squares solution of a linear system A\*x=b.

[R8LIB](../../cpp_src/r8lib/r8lib.html), a C++ library which contains
many utility routines using double precision real (R8) arithmetic.

### Reference: {#reference align="center"}

1.  Cleve Moler,\
    Numerical Computing with MATLAB,\
    SIAM, 2004,\
    ISBN13: 978-0-898716-60-3,\
    LC: QA297.M625,\
    ebook: http://www.mathworks.com/moler/chapters.html

### Source Code: {#source-code align="center"}

-   [test\_lls.cpp](test_lls.cpp), the source code.
-   [test\_lls.hpp](test_lls.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [test\_lls\_prb.cpp](test_lls_prb.cpp), a sample calling program.
-   [test\_lls\_prb\_output.txt](test_lls_prb_output.txt), the output
    file.

### List of Routines: {#list-of-routines align="center"}

-   **P00\_A** returns the matrix A for any least squares problem.
-   **P00\_B** returns the right hand side B for any least squares
    problem.
-   **P00\_M** returns the number of equations M for any least squares
    problem.
-   **P00\_N** returns the number of variables N for any least squares
    problem.
-   **P00\_PROB\_NUM** returns the number of least squares problems.
-   **P00\_X** returns the least squares solution X for any least
    squares problem.
-   **P01\_A** returns the matrix A for problem 1.
-   **P01\_B** returns the right hand side B for problem 1.
-   **P01\_M** returns the number of equations M for problem 1.
-   **P01\_N** returns the number of variables N for problem 1.
-   **P01\_X** returns the least squares solution X for problem 1.
-   **P02\_A** returns the matrix A for problem 2.
-   **P02\_B** returns the right hand side B for problem 2.
-   **P02\_M** returns the number of equations M for problem 2.
-   **P02\_N** returns the number of variables N for problem 2.
-   **P02\_X** returns the least squares solution X for problem 2.
-   **P03\_A** returns the matrix A for problem 3.
-   **P03\_B** returns the right hand side B for problem 3.
-   **P03\_M** returns the number of equations M for problem 3.
-   **P03\_N** returns the number of variables N for problem 3.
-   **P03\_X** returns the least squares solution X for problem 3.
-   **P04\_A** returns the matrix A for problem 4.
-   **P04\_B** returns the right hand side B for problem 4.
-   **P04\_M** returns the number of equations M for problem 4.
-   **P04\_N** returns the number of variables N for problem 4.
-   **P04\_X** returns the least squares solution X for problem 4.
-   **P05\_A** returns the matrix A for problem 5.
-   **P05\_B** returns the right hand side B for problem 5.
-   **P05\_M** returns the number of equations M for problem 5.
-   **P05\_N** returns the number of variables N for problem 5.
-   **P05\_X** returns the least squares solution X for problem 5.
-   **P06\_A** returns the matrix A for problem 6.
-   **P06\_B** returns the right hand side B for problem 6.
-   **P06\_M** returns the number of equations M for problem 6.
-   **P06\_N** returns the number of variables N for problem 6.
-   **P06\_X** returns the least squares solution X for problem 6.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 04 October 2012.*
