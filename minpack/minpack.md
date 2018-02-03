MINPACK\
Least Squares Minimization {#minpack-least-squares-minimization align="center"}
==========================

------------------------------------------------------------------------

**MINPACK** is a C++ library which solves systems of nonlinear
equations, or carries out the least squares minimization of the residual
of a set of linear or nonlinear equations.

MINPACK includes software for solving nonlinear equations and nonlinear
least squares problems. Five algorithmic paths each include a core
subroutine and an easy-to-use driver. The algorithms proceed either from
an analytic specification of the Jacobian matrix or directly from the
problem functions. The paths include facilities for systems of equations
with a banded Jacobian matrix, for least squares problems with a large
amount of data, and for checking the consistency of the Jacobian matrix
with the functions.

Given a set of N nonlinear equations in N unknowns, F(X) = 0, Powell's
method is used to seek a solution X.

Given a set of M nonlinear functions in N unknowns, F(X), the
Levenberg-Marquardt method is used to seek an X which minimizes the L2
norm of the residual ||F(X)||.

The user supplies a subroutine to evaluate the nonlinear function; the
jacobian matrix dFi(X)/dXj may also be supplied by the user in a
subroutine, or approximated by finite differences.

### License: {#license align="center"}

This code may freely be copied, modified, and used for any purpose.

### Languages: {#languages align="center"}

**MINPACK** is available in [a C++
version](../../cpp_src/minpack/minpack.html) and [a FORTRAN90
version](../../f_src/minpack/minpack.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[LLSQ](../../cpp_src/llsq/llsq.html), a C++ library which solves the
simple linear least squares problem of finding the formula of a straight
line y=a\*x+b which minimizes the root-mean-square error to a set of N
data points.

[QR\_SOLVE](../../cpp_src/qr_solve/qr_solve.html), a C++ library which
computes the least squares solution of a linear system A\*x=b.

[TEST\_LS](../../cpp_src/test_ls/test_ls.html), a C++ library which
implements linear least squares test problems of the form A\*x=b.

### Reference: {#reference align="center"}

1.  Jorge More, Burton Garbow, Kenneth Hillstrom,\
    User Guide for MINPACK-1,\
    Technical Report ANL-80-74,\
    Argonne National Laboratory, 1980.
2.  Jorge More, Danny Sorenson, Burton Garbow, Kenneth Hillstrom,\
    The MINPACK Project,\
    in Sources and Development of Mathematical Software,\
    edited by Wayne Cowell,\
    Prentice-Hall, 1984,\
    ISBN: 0-13-823501-5,\
    LC: QA76.95.S68.

### Source Code: {#source-code align="center"}

-   [minpack.cpp](minpack.cpp), the source code;
-   [minpack.hpp](minpack.hpp), the include file;

### Examples and Tests: {#examples-and-tests align="center"}

-   [minpack\_test.cpp](minpack_test.cpp), sample calling code;
-   [minpack\_test.txt](minpack_test.txt), sample output;

### List of Routines: {#list-of-routines align="center"}

-   **CHKDER** checks the gradients of M functions in N variables.
-   **DOGLEG** combines Gauss-Newton and gradient for a minimizing step.
-   **ENORM** returns the Euclidean norm of a vector.
-   **FDJAC1** estimates an N by N Jacobian matrix using forward
    differences.
-   **FDJAC2** estimates an M by N Jacobian matrix using forward
    differences.
-   **HYBRD1** is a simplified interface to HYBRD.
-   **I4\_MIN** returns the minimum of two I4's.
-   **QRFORM** constructs the standard form of Q from its factored form.
-   **QRFAC** computes the QR factorization of an M by N matrix.
-   **R1UPDT** updates the Q factor after a rank one update of the
    matrix.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_EPSILON** returns the R8 roundoff unit.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_MIN** returns the minimum of two R8's.
-   **R8\_TINY** returns a "tiny" R8.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 06 April 2010.*
