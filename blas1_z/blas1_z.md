BLAS1\_Z\
Basic Linear Algebra Subprograms\
Level 1\
Double Precision Complex Arithmetic {#blas1_z-basic-linear-algebra-subprograms-level-1-double-precision-complex-arithmetic align="center"}
===================================

------------------------------------------------------------------------

**BLAS1\_Z** is a C++ library which implements the Level 1 BLAS, or
Basic Linear Algebra Subprograms, using double precision complex
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

**BLAS1\_Z** is available in [a C
version](../../c_src/blas1_z/blas1_z.html) and [a C++
version](../../cpp_src/blas1_z/blas1_z.html) and [a FORTRAN77
version](../../f77_src/blas1_z/blas1_z.html) and [a FORTRAN90
version](../../f_src/blas1_z/blas1_z.html) and [a MATLAB
version](../../m_src/blas1_z/blas1_z.html).

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

[BLAS2](../../cpp_src/blas2/blas2.html), a C++ library which contains
basic linear algebra subprograms (BLAS) for matrix-vector operations;

[BLAS3](../../cpp_src/blas3/blas3.html), a C++ library which contains
basic linear algebra subprograms (BLAS) for matrix-matrix operations;

[COMPLEX\_NUMBERS](../../cpp_src/complex_numbers/complex_numbers.html),
a C++ program which demonstrates some simple features involved in the
use of complex numbers in C programming.

[GSL](../../cpp_src/gsl/gsl.html), C++ programs which illustrate the use
of the Gnu Scientific Library;

[LINPACK\_C](../../cpp_src/linpack_c/linpack_c.html), a C++ library
which solves linear systems using single precision complex arithmetic;

[SUPER\_BLAS](../../c_src/super_blas/super_blas.html), a C library which
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

-   [blas1\_z.cpp](blas1_z.cpp), the source code.
-   [blas1\_z.hpp](blas1_z.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [blas1\_z\_prb.cpp](blas1_z_prb.cpp), the calling program.
-   [blas1\_z\_prb\_output.txt](blas1_z_prb_output.txt) the output file.

### List of Routines: {#list-of-routines align="center"}

-   **DZASUM** takes the sum of the absolute values of a complex
    &lt;double&gt; vector.
-   **DZNRM2** returns the euclidean norm of a complex &lt;double&gt;
    vector.
-   **IZAMAX** indexes the complex &lt;double&gt; vector element of
    maximum absolute value.
-   **ZAXPY** adds a multiple of one complex &lt;double&gt; vector to
    another.
-   **ZCOPY** copies a complex &lt;double&gt; vector.
-   **ZDOTC** forms the conjugated dot product of two complex
    &lt;double&gt; vectors.
-   **ZDOTU** forms the unconjugated dot product of two complex
    &lt;double&gt; vectors.
-   **ZDROT** applies a plane rotation to complex &lt;double&gt;
    vectors.
-   **ZDSCAL** scales a complex &lt;double&gt; vector by a double.
-   **ZROTG** determines a complex &lt;double&gt; Givens rotation.
-   **ZSCAL** scales a complex &lt;double&gt; vector by a complex
    &lt;double&gt;.
-   **ZSWAP** interchanges two complex &lt;double&gt; vectors.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 11 October 2010.*
