BLAS3\
Basic Linear Algebra Subprograms - Level 3 {#blas3-basic-linear-algebra-subprograms---level-3 align="center"}
==========================================

------------------------------------------------------------------------

**BLAS3** is a C++ library which implements the Level 3 BLAS, or Basic
Linear Algebra Subprograms.

The BLAS are a small core library of linear algebra utilities, which can
be highly optimized for various architectures. Software that relies on
the BLAS is thus highly portable, and will typically run very
efficiently.

The Level 3 BLAS are primarily for use in matrix-matrix operations, such
as matrix multiplication. In certain cases, they may also be used to
operate on the rows or columns of a two-dimensional array.

The Level 3 BLAS were originally written in FORTRAN77. This version of
the library only contains a subset of the BLAS3 library (at the moment,
mainly just DGEMM and SGEMM). Arrays are stored according to the FORTRAN
convention. Thus, an M by N mathematical array might be stored in a
double precision FORTRAN array called "A" that is declared as

            double precision a(lda,sda)
          

where LDA is the "leading" dimension and SDA is the "second" dimension.
It is natural for LDA to equal M, but it is only necessary that M &lt;=
LDA. The matrix is stored as a vector of concatenated column vectors,
and the dimension statement is used to determine that columns should be
LDA units long. Thus, a typical entry A(I,J) of the mathematical matrix
is actually stored in the location FORTRAN vector location I+(J-1)\*LDA.
Of course, in C, this location would be I-1+(J-1)\*LDA.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**BLAS3** is available in [a C version](../../c_src/blas/blas.html) and
[a C++ version](../../cpp_src/blas/blas.html) and [a FORTRAN77
version](../../f77_src/blas/blas.html) and [a FORTRAN90
version](../../f_src/blas/blas.html) and [a MATLAB
version.](../../m_src/blas/blas.html)

### Related Data and Programs: {#related-data-and-programs align="center"}

[BLAS0](../../cpp_src/blas0/blas0.html), a C++ library which contains
auxilliary functions for the Basic Linear Algebra Subprograms (BLAS).

[BLAS1\_C](../../cpp_src/blas1_c/blas1_c.html), a C++ library which
contains basic linear algebra routines for vector-vector operations,
using single precision complex arithmetic.

[BLAS1\_D](../../cpp_src/blas1_d/blas1_d.html), a C++ library which
contains basic linear algebra routines for vector-vector operations,
using double precision real arithmetic.

[BLAS1\_S](../../cpp_src/blas1_s/blas1_s.html), a C++ library which
contains basic linear algebra routines for vector-vector operations,
using single precision real arithmetic.

[BLAS1\_Z](../../cpp_src/blas1_z/blas1_z.html), a C++ library which
contains basic linear algebra routines for vector-vector operations,
using double precision complex arithmetic.

[BLAS2](../../cpp_src/blas2/blas2.html), a C++ library which contains
basic linear algebra subprograms (BLAS) for matrix-vector operations;

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

-   [blas3.cpp](blas3.cpp), the source code.
-   [blas3.hpp](blas3.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [blas3\_prb.cpp](blas3_prb.cpp) a sample calling program.
-   [blas3\_prb\_output.txt](blas3_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **DGEMM** computes C = alpha \* A \* B and related operations.
-   **DTRMM** performs B:=A\*B or B:=B\*A, A triangular, B rectangular.
-   **DTRSM** solves A\*X=alpha\*B or X\*A=alpha\*B, for triangular A,
    rectangular B.
-   **SGEMM** computes C = alpha \* A \* B and related operations.
-   **STRMM** performs B:=A\*B or B:=B\*A, A triangular, B rectangular.
-   **STRSM** solves A\*X=alpha\*B or X\*A=alpha\*B, for triangular A,
    rectangular B.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 05 April 2014.*
