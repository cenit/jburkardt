BRENT\
Algorithms for Minimization Without Derivatives {#brent-algorithms-for-minimization-without-derivatives align="center"}
===============================================

------------------------------------------------------------------------

**BRENT** is a C++ library which contains algorithms for finding zeros
or minima of a scalar function of a scalar variable, by Richard Brent.

The methods do not require the use of derivatives, and do not assume
that the function is differentiable.

This file includes some revisions suggested and implemented by John
Denker. In particular, it is now possible to pass either a plain
function or a C++ functor. Also, a "brent" namespace was defined to make
it easier to avoid naming conflicts.

For a short time, the previous code will be available as "brent\_old" in
a separate directory.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**BRENT** is available in [a C version](../../c_src/brent/brent.html)
and [a C++ version](../../cpp_src/brent/brent.html) and [a FORTRAN77
version](../../f77_src/brent/brent.html) and [a FORTRAN90
version](../../f_src/brent/brent.html) and [a MATLAB
version](../../m_src/brent/brent.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[ASA047](../../cpp_src/asa047/asa047.html), a C++ library which
minimizes a scalar function of several variables using the Nelder-Mead
algorithm.

[BISECTION\_RC](../../cpp_src/bisection_rc/bisection_rc.html), a C++
library which seeks a solution to the equation F(X)=0 using bisection
within a user-supplied change of sign interval \[A,B\]. The procedure is
written using reverse communication (RC).

[COMPASS\_SEARCH](../../cpp_src/compass_search/compass_search.html), a
C++ library which seeks the minimizer of a scalar function of several
variables using compass search, a direct search algorithm that does not
use derivatives.

[GSL](../../cpp_src/gsl/gsl.html), a C++ library which includes
rootfinding routines.

[TEST\_ZERO](../../cpp_src/test_zero/test_zero.html), a C++ library
which defines some test functions for which zeroes can be sought.

[TOMS178](../../cpp_src/toms178/toms178.html), a C++ library which
optimizes a scalar functional of multiple variables using the
Hooke-Jeeves method.

[ZERO\_RC](../../cpp_src/zero_rc/zero_rc.html), a C++ library which
seeks solutions of a scalar nonlinear equation f(x) = 0 using reverse
communication (RC).

### Author: {#author align="center"}

Original FORTRAN77 version by Richard Brent; C++ version by John
Burkardt; Modifications by John Denker.

### Reference: {#reference align="center"}

1.  Richard Brent,\
    Algorithms for Minimization without Derivatives,\
    Dover, 2002,\
    ISBN: 0-486-41998-3,\
    LC: QA402.5.B74.

### Source Code: {#source-code align="center"}

-   [brent.cpp](brent.cpp), the source code.
-   [brent.hpp](brent.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [brent\_prb.cpp](brent_prb.cpp), a sample calling program.
-   [brent\_prb\_output.txt](brent_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **GLOMIN** seeks a global minimum of a function F(X) in an interval
    \[A,B\].
-   **LOCAL\_MIN** seeks a local minimum of a function F(X) in an
    interval \[A,B\].
-   **LOCAL\_MIN\_RC** seeks a minimizer of a scalar function of a
    scalar variable.
-   **R8\_EPSILON** returns the R8 round off unit.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_SIGN** returns the sign of an R8.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **ZERO** seeks the root of a function F(X) in an interval \[A,B\].
-   **ZERO\_RC** seeks the root of a function F(X) in an interval
    \[A,B\].

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 14 October 2008.*
