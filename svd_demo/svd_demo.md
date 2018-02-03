SVD\_DEMO\
Demonstration of the Singular Value Decomposition {#svd_demo-demonstration-of-the-singular-value-decomposition align="center"}
=================================================

------------------------------------------------------------------------

**SVD\_DEMO** is a C++ program which demonstrates the computation of the
singular value decomposition and a few of its properties.

The singular value decomposition has uses in solving overdetermined or
underdetermined linear systems, linear least squares problems, data
compression, the pseudoinverse matrix, reduced order modeling, and the
accurate computation of matrix rank and null space.

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

### Usage: {#usage align="center"}

> **svd\_demo** *m* *n* *seed*

where

-   *m* is the number of rows in the random matrix;
-   *n* is the number of columns in the random matrix;
-   *seed* is an optional seed for the random number generator.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SVD\_DEMO** is available in [a C
version](../../c_src/svd_demo/svd_demo.md) and [a C++
version](../../master/svd_demo/svd_demo.md) and [a FORTRAN77
version](../../f77_src/svd_demo/svd_demo.md) and [a FORTRAN90
version](../../f_src/svd_demo/svd_demo.md) and [a MATLAB
version](../../m_src/svd_demo/svd_demo.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FINGERPRINTS](../../datasets/fingerprints/fingerprints.md), a dataset
directory which contains a few images of fingerprints.

[LAPACK\_EXAMPLES](../../f_src/lapack_examples/lapack_examples.md), a
FORTRAN90 program which demonstrates the use of the LAPACK linear
algebra library.

[LINPACK](../../master/linpack/linpack.md), a C++ library which
includes routines to carry out the singular value decomposition.

[SVD\_BASIS](../../master/svd_basis/svd_basis.md), a C++ program
which computes a reduced basis for a collection of data vectors using
the SVD.

[SVD\_SNOWFALL](../../master/svd_snowfall/svd_snowfall.md), a C++
library which reads a file containing historical snowfall data and
analyzes the data with the Singular Value Decomposition (SVD), and plots
created by GNUPLOT.

[SVD\_TRUNCATED](../../master/svd_truncated/svd_truncated.md), a C++
program which demonstrates the computation of the reduced or truncated
Singular Value Decomposition (SVD) that is useful for cases when one
dimension of the matrix is much smaller than the other.

[TOMS358](../../f77_src/toms358/toms358.md), a FORTRAN77 routine which
computes the singular value decomposition for a complex matrix.

### Reference: {#reference align="center"}

1.  Edward Anderson, Zhaojun Bai, Christian Bischof, Susan Blackford,
    James Demmel, Jack Dongarra, Jeremy Du Croz, Anne Greenbaum, Sven
    Hammarling, Alan McKenney, Danny Sorensen,\
    LAPACK User's Guide,\
    Third Edition,\
    SIAM, 1999,\
    ISBN: 0898714478,\
    LC: QA76.73.F25L36
2.  Jack Dongarra, Jim Bunch, Cleve Moler, Pete Stewart,\
    LINPACK User's Guide,\
    SIAM, 1979,\
    ISBN13: 978-0-898711-72-1,\
    LC: QA214.L56.
3.  Gene Golub, Charles VanLoan,\
    Matrix Computations, Third Edition,\
    Johns Hopkins, 1996,\
    ISBN: 0-8018-4513-X,\
    LC: QA188.G65.
4.  David Kahaner, Cleve Moler, Steven Nash,\
    Numerical Methods and Software,\
    Prentice Hall, 1989,\
    ISBN: 0-13-627258-4,\
    LC: TA345.K34.
5.  Lloyd Trefethen, David Bau,\
    Numerical Linear Algebra,\
    SIAM, 1997,\
    ISBN: 0-89871-361-7,\
    LC: QA184.T74.

### Source Code: {#source-code align="center"}

-   [svd\_demo.cpp](svd_demo.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [svd\_demo\_5\_3\_output.txt](svd_demo_5_3_output.txt), the output
    from the command "svd\_demo 5 3 123456789".
-   [svd\_demo\_5\_5\_output.txt](svd_demo_5_5_output.txt), the output
    from the command "svd\_demo 5 5 123456789".
-   [svd\_demo\_5\_8\_output.txt](svd_demo_5_8_output.txt), the output
    from the command "svd\_demo 5 8 123456789".

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for SVD\_DEMO.
-   **GET\_SEED** returns a random seed for the random number generator.
-   **GET\_SVD\_LINPACK** gets the SVD of a matrix using a call to
    LINPACK.
-   **PSEUDO\_INVERSE** computes the pseudoinverse.
-   **PSEUDO\_LINEAR\_SOLVE\_TEST** uses the pseudoinverse for linear
    systems.
-   **PSEUDO\_PRODUCT\_TEST** examines pseudoinverse products.
-   **R8\_NINT** returns the nearest integer to a double precision
    value.
-   **R8MAT\_DIF\_FRO** returns the Frobenius norm of the difference of
    R8MAT's.
-   **R8MAT\_NORM\_FRO** returns the Frobenius norm of a R8MAT.
-   **R8MAT\_PRINT** prints an R8MAT.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8VEC\_NORM\_L2** returns the L2 norm of an R8VEC.
-   **R8MAT\_UNIFORM\_01** returns a unit pseudorandom R8MAT.
-   **R8VEC\_UNIFORM\_01** returns a unit pseudorandom R8VEC.
-   **RANK\_ONE\_PRINT\_TEST** prints the sums of rank one matrices.
-   **RANK\_ONE\_TEST** compares A to the sum of rank one matrices.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **SVD\_PRODUCT\_TEST** tests that A = U \* S \* V'.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 17 June 2012.*
