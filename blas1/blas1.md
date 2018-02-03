BLAS1\
The Basic Linear Algebra Subprograms\
Level 1 {#blas1-the-basic-linear-algebra-subprograms-level-1 align="center"}
=====================================

------------------------------------------------------------------------

**BLAS1** is a C++ library which implements the Level 1 Basic Linear
Algebra Subprograms (BLAS).

The BLAS are a small core library of linear algebra utilities, which can
be highly optimized for various architectures. Software that relies on
the BLAS is thus highly portable, and will typically run very
efficiently.

The Level 1 BLAS are primarily for use in vector operations, such as
vector norms, dot products, vector scaling, and the addition of a scalar
multiple of one vector to another.

While the entries of a typical vector are stored continguously in
memory, many BLAS1 routines allow the user to specify a vector by
locating its first element, and giving an increment to be used to locate
the successive elements. An increment of +1 corresponds to the typical
vector; however, by specifying other increments, a "logical" vector can
be selected that is actually a row, column, or even a diagonal of a
two-dimensional array.

The Level 1 BLAS are available in both real and complex arithmetic
versions, and using single precision or double precision. In most cases,
a given BLAS function has a root name, such as **AXPY**, and prefix is
used to identify the arithmetic and precision. Thus,

-   **CAXPY** is the single precision complex version of AXPY;
-   **DAXPY** is the double precision real version of AXPY;
-   **SAXPY** is the single precision real version of AXPY;
-   **ZAXPY** is the double precision complex version of AXPY;

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**BLAS1** is available in [a C version](../../c_src/blas1/blas1.md)
and [a C++ version](../../master/blas1/blas1.md) and [a FORTRAN77
version](../../f77_src/blas1/blas1.md) and [a FORTRAN90
version](../../f_src/blas1/blas1.md) and [a MATLAB
version](../../m_src/blas1/blas1.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BLAS0](../../master/blas0/blas0.md), a C++ library which contains
auxilliary functions for the Basic Linear Algebra Subprograms (BLAS).

[BLAS1\_C](../../master/blas1_c/blas1_c.md), a C++ library which
contains basic linear algebra routines for vector-vector operations,
using single precision complex arithmetic;

[BLAS1\_D](../../master/blas1_d/blas1_d.md), a C++ library which
contains basic linear algebra routines for vector-vector operations,
using double precision real arithmetic;

[BLAS1\_S](../../master/blas1_s/blas1_s.md), a C++ library which
contains basic linear algebra routines for vector-vector operations,
using single precision real arithmetic;

[BLAS1\_Z](../../master/blas1_z/blas1_z.md), a C++ library which
contains basic linear algebra routines for vector-vector operations,
using double precision complex arithmetic;

[BLAS2](../../master/blas2/blas2.md), a C++ library which contains
basic linear algebra subprograms (BLAS) for matrix-vector operations;

[BLAS3](../../master/blas3/blas3.md), a C++ library which contains
basic linear algebra subprograms (BLAS) for matrix-matrix operations;

[LINPACK](../../master/linpack/linpack.md), a C++ library which is a
linear algebra package that uses the **BLAS1** routines.

### Author: {#author align="center"}

Original FORTRAN77 version by Charles Lawson, Richard Hanson, David
Kincaid, Fred Krogh. C++ version by John Burkardt.

### Reference: {#reference align="center"}

1.  Edward Anderson, Zhaojun Bai, Christian Bischof, Susan Blackford,
    James Demmel, Jack Dongarra, Jeremy Du Croz, Anne Greenbaum, Sven
    Hammarling, Alan McKenney, Danny Sorensen,\
    LAPACK User's Guide,\
    Third Edition,\
    SIAM, 1999,\
    ISBN: 0898714478,\
    LC: QA76.73.F25L36.
2.  Jack Dongarra, Jim Bunch, Cleve Moler, Pete Stewart,\
    LINPACK User's Guide,\
    SIAM, 1979,\
    ISBN13: 978-0-898711-72-1,\
    LC: QA214.L56.
3.  Charles Lawson, Richard Hanson, David Kincaid, Fred Krogh,\
    Algorithm 539: Basic Linear Algebra Subprograms for Fortran Usage,\
    ACM Transactions on Mathematical Software,\
    Volume 5, Number 3, September 1979, pages 308-323.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 29 April 2012.*
