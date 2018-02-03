BLAS1\_C\
Basic Linear Algebra Subprograms\
Level 1\
Single Precision Complex Arithmetic {#blas1_c-basic-linear-algebra-subprograms-level-1-single-precision-complex-arithmetic align="center"}
===================================

------------------------------------------------------------------------

**BLAS1\_C** is a C++ library which implements the Level 1 BLAS, or
Basic Linear Algebra Subprograms, using single precision complex
arithmetic.

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

**BLAS1\_C** is available in [a C
version](../../c_src/blas1_c/blas1_c.md) and [a C++
version](../../master/blas1_c/blas1_c.md) and [a FORTRAN77
version](../../f77_src/blas1_c/blas1_c.md) and [a FORTRAN90
version](../../f_src/blas1_c/blas1_c.md) and [a MATLAB
version](../../m_src/blas1_c/blas1_c.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BLAS0](../../master/blas0/blas0.md), a C++ library which contains
auxilliary functions for the Basic Linear Algebra Subprograms (BLAS).

[BLAS1\_D](../../master/blas1_d/blas1_d.md), a C++ library which
contains basic linear algebra routines for vector-vector operations,
using double precision real arithmetic.

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

[COMPLEX\_NUMBERS](../../master/complex_numbers/complex_numbers.md),
a C++ program which demonstrates some simple features involved in the
use of complex numbers in C programming.

[GSL](../../master/gsl/gsl.md), C++ programs which illustrate the use
of the Gnu Scientific Library;

[LINPACK](../../master/linpack/linpack.md), a C++ library which
solves linear systems using single precision complex arithmetic;

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

-   [blas1\_c.cpp](blas1_c.cpp), the source code.
-   [blas1\_c.hpp](blas1_c.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [blas1\_c\_prb.cpp](blas1_c_prb.cpp), the calling program.
-   [blas1\_c\_prb\_output.txt](blas1_c_prb_output.txt) the output file.

### List of Routines: {#list-of-routines align="center"}

-   **CAXPY** computes a complex constant times a vector plus a vector.
-   **CCOPY** copies a complex vector X to a vector Y.
-   **CDOTC** forms the conjugated dot product of two complex vectors.
-   **CDOTU** forms the unconjugated dot product of two complex vectors.
-   **CROTG** determines a complex Givens rotation.
-   **CSCAL** scales a complex vector by a constant.
-   **CSROT** applies a complex plane rotation.
-   **CSSCAL** scales a complex vector by a real constant.
-   **CSWAP** interchanges two complex vectors.
-   **ICAMAX** indexes the complex vector element of maximum absolute
    value.
-   **SCASUM** takes the sum of the absolute values of a complex vector.
-   **SCNRM2** returns the euclidean norm of a complex vector.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 23 June 2009.*
