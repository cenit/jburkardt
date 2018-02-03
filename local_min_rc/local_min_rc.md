LOCAL\_MIN\_RC\
Reverse Communication Function for Local Minimum, by Richard Brent {#local_min_rc-reverse-communication-function-for-local-minimum-by-richard-brent align="center"}
==================================================================

------------------------------------------------------------------------

**LOCAL\_MIN\_RC** is a C++ library which seeks a local minimum of a
scalar function of a scalar variable, without requiring derivatives, or
assuming the function is differentiable, using reverse communication
(RC), by Richard Brent.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**LOCAL\_MIN\_RC** is available in [a C
version](../../c_src/local_min_rc/local_min_rc.html) and [a C++
version](../../cpp_src/local_min_rc/local_min_rc.html) and [a FORTRAN90
version](../../f_src/local_min_rc/local_min_rc.html) and [a MATLAB
version](../../m_src/local_min_rc/local_min_rc.html) and [a Python
version](../../py_src/local_min_rc/local_min_rc.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[ASA047](../../cpp_src/asa047/asa047.html), a C++ library which
minimizes a scalar function of several variables using the Nelder-Mead
algorithm.

[BACKTRACK\_BINARY\_RC](../../cpp_src/backtrack_binary_rc/backtrack_binary_rc.html),
a C++ library which carries out a backtrack search for a set of binary
decisions, using reverse communication (RC).

[BISECTION\_RC](../../cpp_src/bisection_rc/bisection_rc.html), a C++
library which demonstrates the simple bisection method for solving a
scalar nonlinear equation in a change of sign interval, using reverse
communication (RC).

[BRENT](../../cpp_src/brent/brent.html), a C++ library which contains
routines for finding zeroes or minima of a scalar function of a scalar
variable, without the use of derivative information, including a reverse
communication (RC) option, by Richard Brent.

[CG\_RC](../../cpp_src/cg_rc/cg_rc.html), a C++ library which implements
the conjugate gradient (CG) method for solving a positive definite
sparse linear system A\*x=b, using reverse communication (RC).

[COMPASS\_SEARCH](../../cpp_src/compass_search/compass_search.html), a
C++ library which seeks the minimizer of a scalar function of several
variables using compass search, a direct search algorithm that does not
use derivatives.

[PRAXIS](../../cpp_src/praxis/praxis.html), a C++ library which
minimizes a scalar function of several variables.

[ROOT\_RC](../../cpp_src/root_rc/root_rc.html), a C++ library which
seeks a solution of a scalar nonlinear equation f(x) = 0, using reverse
communication (RC), by Gaston Gonnet.

[ROOTS\_RC](../../cpp_src/roots_rc/roots_rc.html), a C++ library which
seeks a solution of a system of nonlinear equations f(x) = 0, using
reverse communication (RC), by Gaston Gonnet.

[SORT\_RC](../../cpp_src/sort_rc/sort_rc.html), a C++ library which can
sort a list of any kind of objects, using reverse communication (RC).

[TOMS178](../../cpp_src/toms178/toms178.html), a C++ library which
optimizes a scalar functional of multiple variables using the
Hooke-Jeeves method.

[ZERO\_RC](../../cpp_src/zero_rc/zero_rc.html), a C++ library which
seeks solutions of a scalar nonlinear equation f(x) = 0, using reverse
communication (RC), by Richard Brent.

### Author: {#author align="center"}

Original FORTRAN77 version by Richard Brent; C++ version by John
Burkardt.

### Reference: {#reference align="center"}

1.  Richard Brent,\
    Algorithms for Minimization without Derivatives,\
    Dover, 2002,\
    ISBN: 0-486-41998-3,\
    LC: QA402.5.B74.

### Source Code: {#source-code align="center"}

-   [local\_min\_rc.cpp](local_min_rc.cpp), the source code.
-   [local\_min\_rc.hpp](local_min_rc.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [local\_min\_rc\_prb.cpp](local_min_rc_prb.cpp), a sample calling
    program.
-   [local\_min\_rc\_prb\_output.txt](local_min_rc_prb_output.txt), the
    output file.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 30 November 2016.*
