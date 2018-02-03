LLSQ\
Linear Least Squares Problem for Y = A\*X+B {#llsq-linear-least-squares-problem-for-y-axb align="center"}
===========================================

------------------------------------------------------------------------

**LLSQ** is a C++ library which solves the simple linear least squares
(LLS) problem of finding the formula of a straight line y=a\*x+b which
minimizes the root-mean-square error to a set of N data points.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**LLSQ** is available in [a C version](../../c_src/llsq/llsq.html) and
[a C++ version](../../cpp_src/llsq/llsq.html) and [a FORTRAN77
version](../../f77_src/llsq/llsq.html) and [a FORTRAN90
version](../../f_src/llsq/llsq.html) and [a MATLAB
version](../../m_src/llsq/llsq.html) and [a Python
version](../../py_src/llsq/llsq.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[MINPACK](../../cpp_src/minpack/minpack.html), a C++ library which
solves systems of nonlinear equations, or the least squares minimization
of the residual of a set of linear or nonlinear equations.

[QR\_SOLVE](../../cpp_src/qr_solve/qr_solve.html), a C++ library which
computes the least squares solution of a linear system A\*x=b.

[TEST\_APPROX](../../cpp_src/test_approx/test_approx.html), a C++
library which defines test problems for approximation, provided as a set
of (x,y) data.

[TEST\_LLS](../../cpp_src/test_lls/test_lls.html), a C++ library which
implements linear least squares test problems of the form A\*x=b.

### Reference: {#reference align="center"}

1.  David Kahaner, Cleve Moler, Steven Nash,\
    Numerical Methods and Software,\
    Prentice Hall, 1989,\
    ISBN: 0-13-627258-4,\
    LC: TA345.K34.

### Source Code: {#source-code align="center"}

-   [llsq.cpp](llsq.cpp), the source code.
-   [llsq.hpp](llsq.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [llsq\_prb.cpp](llsq_prb.cpp), a sample calling program.
-   [llsq\_prb\_output.txt](llsq_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **LLSQ** solves a linear least squares problem matching a line to
    data.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 17 July 2011.*
