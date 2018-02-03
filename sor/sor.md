SOR\
Linear System Solution by Successive Over-Relaxation {#sor-linear-system-solution-by-successive-over-relaxation align="center"}
====================================================

------------------------------------------------------------------------

**SOR** is a C++ library which implements a simple version of the
successive over-relaxation method for the iterative solution of a system
of linear equations.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SOR** is available in [a C++ version](../../master/sor/sor.md) and
[a MATLAB version](../../m_src/sor/sor.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[JACOBI](../../master/jacobi/jacobi.md), a C++ library which
implements the Jacobi iteration for solving symmetric positive definite
systems of linear equations.

[TEST\_MAT](../../master/test_mat/test_mat.md), a C++ library which
defines test matrices.

### Reference: {#reference align="center"}

-   Tim Kelley,\
    Iterative Methods for Linear and Nonlinear Equations,\
    SIAM, 2004,\
    ISBN: 0898713528,\
    LC: QA297.8.K45.

### Source Code: {#source-code align="center"}

-   [sor.cpp](sor.cpp), the source code.
-   [sor.hpp](sor.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [sor\_prb.cpp](sor_prb.cpp), a sample calling program.
-   [sor\_prb\_output.txt](sor_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **DIF2** returns the DIF2 matrix.
-   **R8MAT\_MV** multiplies a matrix times a vector.
-   **R8MAT\_RESIDUAL\_NORM** returns the norm of A\*x-b.
-   **R8VEC\_COPY** copies an R8VEC.
-   **R8VEC\_DIFF\_NORM\_SQUARED:** square of the L2 norm of the
    difference of R8VEC's.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 25 December 2011.*
