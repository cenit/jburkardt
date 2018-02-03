BLAS1\_D\
Basic Linear Algebra Subprograms\
Level 1\
Double Precision Real Arithmetic {#blas1_d-basic-linear-algebra-subprograms-level-1-double-precision-real-arithmetic align="center"}
=================================

------------------------------------------------------------------------

**BLAS1\_D** is a C++ library which implements the Level 1 BLAS, or
Basic Linear Algebra Subprograms, using double precision real
arithmetic, by Charles Lawson, Richard Hanson, David Kincaid, Fred
Krogh.

The BLAS are a small core library of linear algebra utilities, which can
be highly optimized for various architectures. Software that relies on
the BLAS is thus highly portable, and will typically run very
efficiently.

The Level 1 BLAS are primarily for use in vector operations. In certain
cases, they may also be used to operate on the rows or columns of a
two-dimensional array.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**BLAS1\_D** is available in [a C
version](../../c_src/blas1_d/blas1_d.md) and [a C++
version](../../master/blas1_d/blas1_d.md) and [a FORTRAN77
version](../../f77_src/blas1_d/blas1_d.md) and [a FORTRAN90
version](../../f_src/blas1_d/blas1_d.md) and [a MATLAB
version](../../m_src/blas1_d/blas1_d.md) and [a Python
version](../../py_src/blas1_d/blas1_d.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BLAS0](../../master/blas0/blas0.md), a C++ library which contains
auxilliary functions for the Basic Linear Algebra Subprograms (BLAS).

[BLAS1\_C](../../master/blas1_c/blas1_c.md), a C++ library which
contains basic linear algebra routines for vector-vector operations,
using single precision complex arithmetic.

[BLAS1\_S](../../master/blas1_s/blas1_s.md), a C++ library which
contains basic linear algebra routines for vector-vector operations,
using single precision real arithmetic.

[BLAS1\_Z](../../master/blas1_z/blas1_z.md), a C++ library which
contains basic linear algebra routines for vector-vector operations,
using double precision complex arithmetic.

[BLAS2](../../master/blas2/blas2.md), a C++ library which contains
basic linear algebra subprograms (BLAS) for matrix-vector operations;

[BLAS3](../../master/blas3/blas3.md), a C++ library which contains
basic linear algebra subprograms (BLAS) for matrix-matrix operations;

[GSL](../../master/gsl/gsl.md), C++ programs which illustrate the use
of the Gnu Scientific Library;

[LINPACK\_C](../../master/linpack_c/linpack_c.md), a C++ library
which solves linear systems using single precision complex arithmetic;

[SUPER\_BLAS](../../c_src/super_blas/super_blas.md), a C library which
implements some of the Basic Linear Algebra Subprograms for fast
execution.

### Author: {#author align="center"}

Original FORTRAN77 version by Charles Lawson, Richard Hanson, David
Kincaid, Fred Krogh. C++ version by John Burkardt.

### Reference: {#reference align="center"}

1.  Thomas Coleman, Charles vanLoan,\
    Handbook for Matrix Computations,\
    SIAM, 1988,\
    ISBN13: 978-0-898712-27-8,\
    LC: QA188.C65.
2.  Jack Dongarra, Jim Bunch, Cleve Moler, Pete Stewart,\
    LINPACK User's Guide,\
    SIAM, 1979,\
    ISBN13: 978-0-898711-72-1,\
    LC: QA214.L56.
3.  Charles Lawson, Richard Hanson, David Kincaid, Fred Krogh,\
    Algorithm 539: Basic Linear Algebra Subprograms for Fortran Usage,\
    ACM Transactions on Mathematical Software,\
    Volume 5, Number 3, September 1979, pages 308-323.

### Source Code: {#source-code align="center"}

-   [blas1\_d.cpp](blas1_d.cpp), the source code.
-   [blas1\_d.hpp](blas1_d.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [blas1\_d\_prb.cpp](blas1_d_prb.cpp), the calling program.
-   [blas1\_d\_prb\_output.txt](blas1_d_prb_output.txt) the output file.

### List of Routines: {#list-of-routines align="center"}

-   **DASUM** takes the sum of the absolute values of a double vector.
-   **DAXPY** computes double constant times a vector plus a vector.
-   **DCOPY** copies a double vector X to a vector Y.
-   **DDOT** forms the dot product of two double vectors.
-   **DNRM2** returns the euclidean norm of a double vector.
-   **DROT** applies a double plane rotation.
-   **DROTG** constructs a double Givens plane rotation.
-   **DSCAL** scales a double vector by a constant.
-   **DSWAP** interchanges two double vectors.
-   **IDAMAX** finds the index of the double vector element of maximum
    absolute value.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 23 June 2009.*
