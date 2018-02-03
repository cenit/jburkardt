CONDITION\
Matrix Condition Number Estimation {#condition-matrix-condition-number-estimation align="center"}
==================================

------------------------------------------------------------------------

**CONDITION** is a C++ library which implements methods for computing or
estimating the condition number of a matrix.

Let ||\*|| be a matrix norm, let A be an invertible matrix, and inv(A)
the inverse of A. The condition number of A with respect to the norm
||\*|| is defined to be

            kappa(A) = ||A|| * ||inv(A)||
          

If A is not invertible, the condition number is taken to be infinity.

Facts about the condition number include:

-   1 &lt;= kappa(A) for all matrices A.
-   1 = kappa(I), where I is the identity matrix.
-   for the L2 matrix norm, the condition number of any orthogonal
    matrix is 1.
-   for the L2 matrix norm, the condition number is the ratio of the
    maximum to minimum singular values;

The **CONDITION** library needs access to a copy of the R8LIB library.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**CONDITION** is available in [a C
version](../../c_src/condition/condition.html) and [a C++
version](../../cpp_src/condition/condition.html) and [a FORTRAN77
version](../../f77_src/condition/condition.html) and [a FORTRAN90
version](../../f_src/condition/condition.html) and [a MATLAB
version](../../m_src/condition/condition.html) and [a Python
version](../../py_src/condition/condition.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[LINPACK\_D](../../cpp_src/linpack_d/linpack_d.html), a C++ library
which solves linear systems using double precision real arithmetic;

[NAPACK](../../f77_src/napack/napack.html), a FORTRAN77 library which
includes many routines for applied numerical linear algebra tasks,
including the matrix condition number, by William Hager.

[R8LIB](../../cpp_src/r8lib/r8lib.html), a C++ library which contains
many utility routines using double precision real (R8) arithmetic.

[TEST\_MAT](../../cpp_src/test_mat/test_mat.html), a C++ library which
defines test matrices for which some of the determinant, eigenvalues,
inverse, null vectors, P\*L\*U factorization or linear system solution
are already known.

### Reference: {#reference align="center"}

1.  Alan Cline, Cleve Moler, Pete Stewart, James Wilkinson,\
    An estimate for the Condition Number of a Matrix,\
    Technical Report TM-310,\
    Argonne National Laboratory, 1977.
2.  Alan Cline, Russell Rew,\
    A set of counterexamples to three condition number estimators,\
    SIAM Journal on Scientific and Statistical Computing,\
    Volume 4, Number 4, December 1983, pages 602-611.
3.  William Hager,\
    Condition Estimates,\
    SIAM Journal on Scientific and Statistical Computing,\
    Volume 5, Number 2, June 1984, pages 311-316.
4.  Nicholas Higham,\
    A survey of condition number estimation for triangular matrices,\
    SIAM Review,\
    Volume 9, Number 4, December 1987, pages 575-596.
5.  Diane OLeary,\
    Estimating matrix condition numbers,\
    SIAM Journal on Scientific and Statistical Computing,\
    Volume 1, Number 2, June 1980, pages 205-209.
6.  Pete Stewart,\
    Efficient Generation of Random Orthogonal Matrices With an
    Application to Condition Estimators,\
    SIAM Journal on Numerical Analysis,\
    Volume 17, Number 3, June 1980, pages 403-409.

### Source Code: {#source-code align="center"}

-   [condition.cpp](condition.cpp), the source code.
-   [condition.hpp](condition.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [condition\_prb.cpp](condition_prb.cpp), a sample calling program.
-   [condition\_prb\_output.txt](condition_prb_output.txt), the output
    file.

### List of Routines: {#list-of-routines align="center"}

-   **COMBIN** returns the COMBIN matrix.
-   **COMBIN\_INVERSE** returns the inverse of the COMBIN matrix.
-   **CONDITION\_HAGER** estimates the L1 condition number of a matrix.
-   **CONDITION\_LINPACK** estimates the L1 condition number.
-   **CONDITION\_SAMPLE1** estimates the L1 condition number of a
    matrix.
-   **CONEX1** returns the CONEX1 matrix.
-   **CONEX1\_INVERSE** returns the inverse of the CONEX1 matrix.
-   **CONEX2** returns the CONEX2 matrix.
-   **CONEX2\_INVERSE** returns the inverse of the CONEX2 matrix.
-   **CONEX3** returns the CONEX3 matrix.
-   **CONEX3\_INVERSE** returns the inverse of the CONEX3 matrix.
-   **CONEX4** returns the CONEX4 matrix.
-   **CONEX4\_INVERSE** returns the inverse of the CONEX4 matrix.
-   **KAHAN** returns the KAHAN matrix.
-   **KAHAN\_INVERSE** returns the inverse of the KAHAN matrix.
-   **R8GE\_FA** performs a LINPACK-style PLU factorization of a R8GE
    matrix.
-   **R8GE\_INVERSE** computes the inverse of a R8GE matrix factored by
    R8GE\_FA.
-   **R8GE\_SL** solves a R8GE system factored by R8GE\_FA.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 04 October 2012.*
