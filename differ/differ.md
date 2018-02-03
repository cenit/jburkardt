DIFFER\
Finite Difference Approximations to Derivatives {#differ-finite-difference-approximations-to-derivatives align="center"}
===============================================

------------------------------------------------------------------------

**DIFFER** is a C++ library which determines the finite difference
coefficients necessary in order to combine function values at known
locations to compute an approximation of given accuracy to a derivative
of a given order.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**DIFFER** is available in [a C version](../../c_src/differ/differ.md)
and [a C++ version](../../master/differ/differ.md) and [a FORTRAN77
version](../../f77_src/differ/differ.md) and [a FORTRAN90
version](../../f_src/differ/differ.md) and [a MATLAB
version](../../m_src/differ/differ.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[DIVDIF](../../master/divdif/divdif.md), a C++ library which uses
divided differences to compute the polynomial interpolant to a given set
of data.

### Reference: {#reference align="center"}

1.  Ake Bjorck, Victor Pereyra,\
    Solution of Vandermonde Systems of Equations,\
    Mathematics of Computation,\
    Volume 24, Number 112, October 1970, pages 893-903.

### Source Code: {#source-code align="center"}

-   [differ.cpp](differ.cpp), the source code.
-   [differ.hpp](differ.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [differ\_prb.cpp](differ_prb.cpp), a sample calling program.
-   [differ\_prb\_output.txt](differ_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **DIFFER\_BACKWARD** computes backward difference coefficients.
-   **DIFFER\_CENTRAL** computes central difference coefficients.
-   **DIFFER\_FORWARD** computes forward difference coefficients.
-   **DIFFER\_INVERSE** returns the inverse of the DIFFER matrix.
-   **DIFFER\_MATRIX** computes the stencil matrix from the stencil
    vector.
-   **DIFFER\_SOLVE** solves for finite difference coefficients.
-   **DIFFER\_STENCIL** computes finite difference coefficients.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_TO\_STRING** converts an I4 to a C++ string.
-   **INVERSE\_ERROR** determines the error in an inverse matrix.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_FACTORIAL** computes the factorial of N.
-   **R8MAT\_FS\_NEW** factors and solves a system with one right hand
    side.
-   **R8MAT\_MM\_NEW** multiplies two matrices.
-   **R8MAT\_MV\_NEW** multiplies a matrix times a vector.
-   **R8MAT\_NORM\_FRO** returns the Frobenius norm of an R8MAT.
-   **R8MAT\_PRINT** prints an R8MAT.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8MAT\_SUB\_NEW** computes C = A - B.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC\_UNIFORM\_01\_NEW** returns a new unit pseudorandom R8VEC.
-   **R8VEC2\_PRINT** prints an R8VEC2.
-   **R8VM\_SL** solves a R8VM system.
-   **R8VM\_SL\_NEW** solves a R8VM system.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 03 November 2013.*
