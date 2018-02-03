CG\_RC\
Conjugate Gradient Method with Reverse Communication {#cg_rc-conjugate-gradient-method-with-reverse-communication align="center"}
====================================================

------------------------------------------------------------------------

**CG\_RC** is a C++ library which implements the conjugate gradient (CG)
method for solving a positive definite sparse linear system A\*x=b,
using reverse communication (RC).

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**CG\_RC** is available in [a C version](../../c_src/cg_rc/cg_rc.html)
and [a C++ version](../../cpp_src/cg_rc/cg_rc.html) and [a FORTRAN77
version](../../f77_src/cg_rc/cg_rc.html) and [a FORTRAN90
version](../../f_src/cg_rc/cg_rc.html) and [a MATLAB
version](../../m_src/cg_rc/cg_rc.html) and [a Python
version](../../py_src/cg_rc/cg_rc.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BACKTRACK\_BINARY\_RC](../../cpp_src/backtrack_binary_rc/backtrack_binary_rc.html),
a C++ library which carries out a backtrack search for a set of binary
decisions, using reverse communication (RC).

[BISECTION\_RC](../../cpp_src/bisection_rc/bisection_rc.html), a C++
library which seeks a solution to the equation F(X)=0 using bisection
within a user-supplied change of sign interval \[A,B\]. The procedure is
written using reverse communication (RC).

[CG](../../cpp_src/cg/cg.html), a C++ library which implements a simple
version of the conjugate gradient (CG) method for solving a system of
linear equations of the form A\*x=b, suitable for situations in which
the matrix A is positive definite (only real, positive eigenvalues) and
symmetric.

[JACOBI](../../cpp_src/jacobi/jacobi.html), a C++ library which
implements the Jacobi iteration for solving symmetric positive definite
systems of linear equations.

[LOCAL\_MIN\_RC](../../cpp_src/local_min_rc/local_min_rc.html), a C++
library which finds a local minimum of a scalar function of a scalar
variable, without the use of derivative information, using reverse
communication (RC), by Richard Brent.

[MGMRES](../../cpp_src/mgmres/mgmres.html), a C++ library which applies
the restarted GMRES algorithm to solve a sparse linear system.

[ROOT\_RC](../../cpp_src/root_rc/root_rc.html), a C++ library which
seeks a solution of a scalar nonlinear equation f(x) = 0, using reverse
communication (RC), by Gaston Gonnet.

[ROOTS\_RC](../../cpp_src/roots_rc/roots_rc.html), a C++ library which
seeks a solution of a system of nonlinear equations f(x) = 0, using
reverse communication (RC), by Gaston Gonnet.

[SORT\_RC](../../cpp_src/sort_rc/sort_rc.html), a C++ library which can
sort a list of any kind of objects, using reverse communication (RC).

[SUPERLU](../../cpp_src/superlu/superlu.html), C++ programs which
illustrate how a C++ program can call the SUPERLU library, (which is
written in C), which applies a fast direct solution method to solve
sparse linear systems, by James Demmel, John Gilbert, and Xiaoye Li.

[TEST\_MAT](../../cpp_src/test_mat/test_mat.html), a C++ library which
defines test matrices.

[ZERO\_RC](../../cpp_src/zero_rc/zero_rc.html), a C++ library which
seeks solutions of a scalar nonlinear equation f(x) = 0, using reverse
communication (RC).

### Reference: {#reference align="center"}

1.  Richard Barrett, Michael Berry, Tony Chan, James Demmel, June
    Donato, Jack Dongarra, Victor Eijkhout, Roidan Pozo, Charles Romine,
    Henk van der Vorst,\
    Templates for the Solution of Linear Systems: Building Blocks for
    Iterative Methods,\
    SIAM, 1994,\
    ISBN: 0898714710,\
    LC: QA297.8.T45.
2.  Jonathan Shewchuk,\
    An introduction to the conjugate gradient method without the
    agonizing pain,\
    Edition 1.25, August 1994.

### Source Code: {#source-code align="center"}

-   [cg\_rc.cpp](cg_rc.cpp), the source code.
-   [cg\_rc.hpp](cg_rc.hpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [cg\_rc\_prb.cpp](cg_rc_prb.cpp), a sample calling program.
-   [cg\_rc\_prb\_output.txt](cg_rc_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **CG\_RC** is a reverse communication conjugate gradient routine.
-   **R8VEC\_UNIFORM\_01\_NEW** returns a unit pseudorandom R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **WATHEN** returns the WATHEN matrix.
-   **WATHEN\_ORDER** returns the order of the WATHEN matrix.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 13 January 2013.*
