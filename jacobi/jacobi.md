JACOBI\
The Jacobi Iteration for Linear Systems {#jacobi-the-jacobi-iteration-for-linear-systems align="center"}
=======================================

------------------------------------------------------------------------

**JACOBI** is a C++ library which sets up the Jacobi iteration for
linear systems.

The program uses the GNUPLOT\_I interface program to create plots of the
residual and the "motion" of the solution over the iteration.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**JACOBI** is available in [a C version](../../c_src/jacobi/jacobi.html)
and [a C++ version](../../cpp_src/jacobi/jacobi.html) and [a FORTRAN77
version](../../f77_src/jacobi/jacobi.html) and [a FORTRAN90
version](../../f_src/jacobi/jacobi.html) and [a MATLAB
version](../../m_src/jacobi/jacobi.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CG\_RC](../../cpp_src/cg_rc/cg_rc.html), a C++ library which implements
the conjugate gradient method for solving a positive definite sparse
linear system A\*x=b, using reverse communication.

[GNUPLOT\_I](../../c_src/gnuplot_i/gnuplot_i.html), a C library which
allows an executing C, C++, FORTRAN77 or FORTRAN90 program to interact
with the GNUPLOT graphics program, by Nicholas Devillard.

[TEST\_MAT](../../cpp_src/test_mat/test_mat.html), a C++ library which
defines test matrices.

### Reference: {#reference align="center"}

-   Tim Kelley,\
    Iterative Methods for Linear and Nonlinear Equations,\
    SIAM, 2004,\
    ISBN: 0898713528,\
    LC: QA297.8.K45.

### Source Code: {#source-code align="center"}

-   [jacobi.cpp](jacobi.cpp), the source code.
-   [jacobi.hpp](jacobi.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [jacobi\_prb.cpp](jacobi_prb.cpp), a sample calling program.
-   [jacobi\_prb\_output.txt](jacobi_prb_output.txt), the output file.
-   [motion.png](motion.png), a plot of the motion, or change in the
    solution, as the iteration progresses.
-   [residual.png](residual.png), a plot of the residual as the
    iteration progresses.

### List of Routines: {#list-of-routines align="center"}

-   **DIF2** returns the DIF2 matrix.
-   **R8MAT\_MV** multiplies a matrix times a vector.
-   **R8MAT\_RESIDUAL\_NORM** returns the norm of A\*x-b.
-   **R8VEC\_COPY** copies an R8VEC.
-   **R8VEC\_DIFF\_NORM\_SQUARED:** square of the L2 norm of the
    difference of R8VEC's.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 25 June 2011.*
