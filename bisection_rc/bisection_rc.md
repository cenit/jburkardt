BISECTION\_RC\
Nonlinear Equation Solver Using Bisection, with Reverse Communication {#bisection_rc-nonlinear-equation-solver-using-bisection-with-reverse-communication align="center"}
=====================================================================

------------------------------------------------------------------------

**BISECTION\_RC** is a C++ library which demonstrates the simple
bisection method for solving a scalar nonlinear equation in a change of
sign interval, using reverse communication (RC).

The routine assumes that an interval \[a,b\] is known, over which the
function f(x) is continuous, and for which f(a) and f(b) are of opposite
sign. By repeatedly computing and testing the midpoint, the halving
change of sign interval may be reduced, so that either the uncertainty
interval or the magnitude of the function value becomes small enough to
satisfy the user as an approximation to the location of a root of the
function.

This routine is in part a demonstration of the idea of reverse
communication. Many zero finders require that the user define f(x) by
writing a function with a very specific set of input and output
arguments, and sometimes with a specific name, so that the user can call
the zero finder, which in turn can call the function. This is sometimes
an awkward formulation to follow. Reverse communication instead allows
the user's calling program to retain control of the function evaluation.

To use the reverse communication zero finder, the user defines the
values of A and B, and sets a parameter JOB to zero to indicate that
this is the first call. From then on, the zero finder repeatedly returns
a value X, asking the user to evaluate the function there. Once the user
has evaluated FX = f(X), the user may accept this approximation to the
root, or else call the zero finder again, passing the just-computed
value of FX so that it can take another bisection step.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**BISECTION\_RC** is available in [a C
version](../../c_src/bisection_rc/bisection_rc.html) and [a C++
version](../../cpp_src/bisection_rc/bisection_rc.html) and [a FORTRAN77
version](../../f77_src/bisection_rc/bisection_rc.html) and [a FORTRAN90
version](../../f_src/bisection_rc/bisection_rc.html) and [a MATLAB
version](../../m_src/bisection_rc/bisection_rc.html) and [a Python
version](../../py_src/bisection_rc/bisection_rc.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BACKTRACK\_BINARY\_RC](../../cpp_src/backtrack_binary_rc/backtrack_binary_rc.html),
a C++ library which carries out a backtrack search for a set of binary
decisions, using reverse communication (RC).

[BISECTION\_INTEGER](../../cpp_src/bisection_integer/bisection_integer.html),
a C++ library which seeks an integer solution to the equation F(X)=0,
using bisection within a user-supplied change of sign interval \[A,B\].

[BRENT](../../cpp_src/brent/brent.html), a C++ library which contains
Richard Brent's routines for finding the zero, local minimizer, or
global minimizer of a scalar function of a scalar argument, without the
use of derivative information.

[CG\_RC](../../cpp_src/cg_rc/cg_rc.html), a C++ library which implements
the conjugate gradient method for solving a positive definite sparse
linear system A\*x=b, using reverse communication (RC).

[LOCAL\_MIN\_RC](../../cpp_src/local_min_rc/local_min_rc.html), a C++
library which finds a local minimum of a scalar function of a scalar
variable, without the use of derivative information, using reverse
communication (RC), by Richard Brent.

[ROOT\_RC](../../cpp_src/root_rc/root_rc.html), a C++ library which
seeks a solution of a scalar nonlinear equation f(x) = 0, using reverse
communication (RC), by Gaston Gonnet.

[ROOTS\_RC](../../cpp_src/roots_rc/roots_rc.html), a C++ library which
seeks a solution of a system of nonlinear equations f(x) = 0, using
reverse communication (RC), by Gaston Gonnet.

[SORT\_RC](../../cpp_src/sort_rc/sort_rc.html), a C++ library which can
sort a list of any kind of objects, using reverse communication (RC).

[TEST\_ZERO](../../cpp_src/test_zero/test_zero.html), a C++ library
which implements test problems for the solution of a single nonlinear
equation in one variable.

[ZERO\_RC](../../cpp_src/zero_rc/zero_rc.html), a C++ library which
seeks solutions of a scalar nonlinear equation f(x) = 0, using reverse
communication (RC).

### Reference: {#reference align="center"}

1.  Werner Rheinboldt,\
    Algorithms for finding zeros of a function,\
    UMAP Journal,\
    Volume 2, Number 1, 1981, pages 43-72.
2.  Werner Rheinboldt,\
    Methods for Solving Systems of Nonlinear Equations,\
    SIAM, 1998,\
    ISBN: 089871415X,\
    LC: QA214.R44.

### Source Code: {#source-code align="center"}

-   [bisection\_rc.cpp](bisection_rc.cpp), the source code.
-   [bisection\_rc.hpp](bisection_rc.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [bisection\_rc\_prb.cpp](bisection_rc_prb.cpp), a sample calling
    program.
-   [bisection\_rc\_prb\_output.txt](bisection_rc_prb_output.txt), the
    output file.

### List of Routines: {#list-of-routines align="center"}

-   **BISECTION\_RC** seeks a zero of f(x) in a change of sign interval.
-   **R8\_SIGN** returns the sign of an R8.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 14 January 2013.*
