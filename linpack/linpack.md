LINPACK\
Linear Algebra Library {#linpack-linear-algebra-library align="center"}
======================

------------------------------------------------------------------------

**LINPACK** is a C++ library which solves systems of linear equations
for a variety of matrix types and storage modes, for real or complex
arithmetic, and for single or double precision, by Jack Dongarra, Jim
Bunch, Cleve Moler, Pete Stewart.

LINPACK has officially been superseded by the LAPACK library. The LAPACK
library uses more modern algorithms and code structure. However, the
LAPACK library can be extraordinarily complex; what is done in a single
LINPACK routine may correspond to 10 or 20 utility routines in LAPACK.
This is fine if you treat LAPACK as a black box. But if you wish to
learn how the algorithm works, or to adapt it, or to convert the code to
another language, this is a real drawback. This is one reason I still
keep a copy of LINPACK around.

The LINPACK routines are available in both real and complex arithmetic
versions, and using single precision or double precision. In most cases,
a given routine has a root name, such as **GEFA**, and a prefix is used
to identify the arithmetic and precision. Thus,

-   **CGEFA** is the single precision complex version of GEFA;
-   **DGEFA** is the double precision real version of GEFA;
-   **SGEFA** is the single precision real version of GEFA;
-   **ZGEFA** is the double precision complex version of GEFA;

Versions of **LINPACK** in various arithmetic precisions are available
through [the NETLIB web site](http://www.netlib.org/).

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**LINPACK** is available in [a C
version](../../c_src/linpack/linpack.md) and [a C++
version](../../master/linpack/linpack.md) and [a FORTRAN77
version](../../f77_src/linpack/linpack.md) and [a FORTRAN90
version](../../f_src/linpack/linpack.md) and [a MATLAB
version](../../m_src/linpack/linpack.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[LINPACK\_C](../../master/linpack_c/linpack_c.md), a C++ library
which solves linear systems using single precision complex arithmetic;

[LINPACK\_D](../../master/linpack_d/linpack_d.md), a C++ library
which solves linear systems using double precision real arithmetic;

[LINPACK\_S](../../master/linpack_s/linpack_s.md), a C++ library
which solves linear systems using single precision real arithmetic;

[LINPACK\_Z](../../master/linpack_z/linpack_z.md), a C++ library
which solves linear systems using double precision complex arithmetic;

### Author: {#author align="center"}

Original FORTRAN77 version by Jack Dongarra, Jim Bunch, Cleve Moler,
Pete Stewart. C++ version by John Burkardt.

### Reference: {#reference align="center"}

1.  Jack Dongarra, Jim Bunch, Cleve Moler, Pete Stewart,\
    LINPACK User's Guide,\
    SIAM, 1979,\
    ISBN13: 978-0-898711-72-1,\
    LC: QA214.L56.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 29 April 2012.*
