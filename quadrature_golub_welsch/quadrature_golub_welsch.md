QUADRATURE\_GOLUB\_WELSCH\
Quadrature Points and Weights, Golub Welsch Method {#quadrature_golub_welsch-quadrature-points-and-weights-golub-welsch-method align="center"}
==================================================

------------------------------------------------------------------------

**QUADRATURE\_GOLUB\_WELSCH** is a C++ library which illustrates the use
of the Golub Welsch technique for computing the points and weights of a
Gaussian quadrature rule.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**QUADRATURE\_GOLUB\_WELSCH** is available in [a C
version](../../c_src/quadrature_golub_welsch/quadrature_golub_welsch.md)
and [a C++
version](../../master/quadrature_golub_welsch/quadrature_golub_welsch.md)
and [a FORTRAN77
version](../../f77_src/quadrature_golub_welsch/quadrature_golub_welsch.md)
and [a FORTRAN90
version](../../f_src/quadrature_golub_welsch/quadrature_golub_welsch.md)
and [a MATLAB
version](../../m_src/quadrature_golub_welsch/quadrature_golub_welsch.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CLENSHAW\_CURTIS\_RULE](../../master/clenshaw_curtis_rule/clenshaw_curtis_rule.md),
a C++ program which defines a Clenshaw Curtis quadrature rule.

[QUADRATURE\_LEAST\_SQUARES](../../master/quadrature_least_squares/quadrature_least_squares.md),
a C++ library which computes weights for "sub-interpolatory" quadrature
rules, that is, it estimates integrals by integrating a polynomial that
approximates the function data in a least squares sense.

[QUADRATURE\_WEIGHTS\_VANDERMONDE](../../master/quadrature_weights_vandermonde/quadrature_weights_vandermonde.md),
a C++ library which determines the weights of a quadrature rule using
the Vandermonde matrix.

[QUADRULE](../../master/quadrule/quadrule.md), a C++ library which
defines quadrature rules for 1-dimensional domains.

[TOMS655](../../master/toms655/toms655.md), a C++ library which
computes the weights for interpolatory quadrature rule;\
this library is commonly called **IQPACK**;\
this is a C version of ACM TOMS algorithm 655.

### Reference: {#reference align="center"}

1.  Philip Davis, Philip Rabinowitz,\
    Methods of Numerical Integration,\
    Second Edition,\
    Dover, 2007,\
    ISBN: 0486453391,\
    LC: QA299.3.D28.
2.  Sylvan Elhay, Jaroslav Kautsky,\
    Algorithm 655: IQPACK, FORTRAN Subroutines for the Weights of
    Interpolatory Quadrature,\
    ACM Transactions on Mathematical Software,\
    Volume 13, Number 4, December 1987, pages 399-415.
3.  Jaroslav Kautsky, Sylvan Elhay,\
    Calculation of the Weights of Interpolatory Quadratures,\
    Numerische Mathematik,\
    Volume 40, 1982, pages 407-422.

### Source Code: {#source-code align="center"}

-   [qwgw.cpp](qwgw.cpp), the source code.
-   [qwgw.hpp](qwgw.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [qwgw\_prb.cpp](qwgw_prb.cpp), a sample calling program.
-   [qwgw\_prb\_output.txt](qwgw_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **IMTQLX** diagonalizes a symmetric tridiagonal matrix.
-   **R8MAT\_PRINT** prints an R8MAT.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8VEC\_EVEN** returns an R8VEC of evenly spaced values.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **SGQF** computes knots and weights of a Gauss Quadrature formula.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 22 February 2014.*
