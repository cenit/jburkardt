SVD\_TRUNCATED\
The Truncated Singular Value Decomposition {#svd_truncated-the-truncated-singular-value-decomposition align="center"}
==========================================

------------------------------------------------------------------------

**SVD\_TRUNCATED** is a C++ program which demonstrates the computation
of the reduced or truncated Singular Value Decomposition (SVD) of an M
by N rectangular matrix, in cases where M &lt; N or N &lt; M.

The singular value decomposition of an M by N rectangular matrix A has
the form

            A(mxn) = U(mxm) * S(mxn) * V'(nxn)
          

where

-   U is an orthogonal matrix, whose columns are the left singular
    vectors;
-   S is a diagonal matrix, whose min(m,n) diagonal entries are the
    singular values;
-   V is an orthogonal matrix, whose columns are the right singular
    vectors;

Note that the transpose of V is used in the decomposition, and that the
diagonal matrix S is typically stored as a vector.

It is often the case that the matrix A has one dimension much bigger
than the other. For instance, M = 3 and N = 10,000 might be such a case.
For such examples, much of the computation and memory required for the
standard SVD may not actually be needed. Instead, a truncated, or
reduced version is appropriate. It will be computed faster, and require
less memory to store the data.

If M &lt; N, we have the "truncated V" SVD:

            A(mxn) = U(mxm) * Sm(mxm) * Vm'(nxm)
          

Notice that, for our example, we will have to compute and store a Vm of
size 30,000 instead of a V of size 1,000,000 entries.

If N &lt; M, we have the "truncated U" SVD:

            A(mxn) = Un(mxn) * Sn(nxn) * V'(nxn)
          

Similarly, in this case, the computation and storage of Un can be much
reduced from that of U.

The LINPACK routine DSVDC can compute the "truncated U" version of the
SVD. In order to compute the "truncated V" version with DSVDC, it's
actually necessary to transpose the matrix, compute the truncated U
version, and then transpose everything back...very carefully.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SVD\_TRUNCATED** is available in [a C
version](../../c_src/svd_truncated/svd_truncated.md) and [a C++
version](../../master/svd_truncated/svd_truncated.md) and [a
FORTRAN77 version](../../f77_src/svd_truncated/svd_truncated.md) and
[a FORTRAN90 version](../../f_src/svd_truncated/svd_truncated.md) and
[a MATLAB version](../../m_src/svd_truncated/svd_truncated.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[LINPACK\_D](../../master/linpack_d/linpack_d.md), a C++ library
which solves linear systems using double precision real arithmetic;

[SVD\_BASIS](../../master/svd_basis/svd_basis.md), a C++ program
which computes a reduced basis for a collection of data vectors using
the SVD.

[SVD\_DEMO](../../master/svd_demo/svd_demo.md), a C++ program which
demonstrates the singular value decomposition (SVD) for a simple
example.

[SVD\_SNOWFALL](../../master/svd_snowfall/svd_snowfall.md), a C++
library which reads a file containing historical snowfall data and
analyzes the data with the Singular Value Decomposition (SVD), and plots
created by GNUPLOT.

### Reference: {#reference align="center"}

1.  Edward Anderson, Zhaojun Bai, Christian Bischof, Susan Blackford,
    James Demmel, Jack Dongarra, Jeremy Du Croz, Anne Greenbaum, Sven
    Hammarling, Alan McKenney, Danny Sorensen,\
    LAPACK User's Guide,\
    Third Edition,\
    SIAM, 1999,\
    ISBN: 0898714478,\
    LC: QA76.73.F25L36
2.  Gene Golub, Charles VanLoan,\
    Matrix Computations, Third Edition,\
    Johns Hopkins, 1996,\
    ISBN: 0-8018-4513-X,\
    LC: QA188.G65.
3.  David Kahaner, Cleve Moler, Steven Nash,\
    Numerical Methods and Software,\
    Prentice Hall, 1989,\
    ISBN: 0-13-627258-4,\
    LC: TA345.K34.
4.  Lloyd Trefethen, David Bau,\
    Numerical Linear Algebra,\
    SIAM, 1997,\
    ISBN: 0-89871-361-7,\
    LC: QA184.T74.

### Source Code: {#source-code align="center"}

-   [svd\_truncated.cpp](svd_truncated.cpp), the source code.
-   [svd\_truncated\_output.txt](svd_truncated_output.txt), the output
    file.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for SVD\_TRUNCATED.
-   **DAXPY** computes constant times a vector plus a vector.
-   **DDOT** forms the dot product of two vectors.
-   **DNRM2** returns the euclidean norm of a vector.
-   **DROT** applies a plane rotation.
-   **DROTG** constructs a Givens plane rotation.
-   **DSCAL** scales a vector by a constant.
-   **DSVDC** computes the singular value decomposition of a real
    rectangular matrix.
-   **DSWAP** interchanges two vectors.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **R8\_ABS** returns the absolute value of a R8.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_SIGN** returns the sign of a R8.
-   **R8MAT\_PRINT** prints an R8MAT.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8MAT\_TRANSPOSE\_NEW** returns the transpose of an R8MAT.
-   **R8MAT\_UNIFORM\_01\_NEW** returns a unit pseudorandom R8MAT.
-   **SVD\_TRUNCATED\_U** gets the truncated SVD when N &lt;= M
-   **SVD\_TRUNCATED\_U\_TEST** tests SVD\_TRUNCATED\_U.
-   **SVD\_TRUNCATED\_V** gets the truncated SVD when M &lt;= N.
-   **SVD\_TRUNCATED\_V\_TEST** tests SVD\_TRUNCATED\_V.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 20 March 2012.*
