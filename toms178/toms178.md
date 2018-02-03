TOMS178\
Minimization by Hooke-Jeeves Direct Search {#toms178-minimization-by-hooke-jeeves-direct-search align="center"}
==========================================

------------------------------------------------------------------------

**TOMS178** is a C++ library which uses the Hooke-Jeeves direct search
algorithm to seek the minimizing point of a function F(X) of several
variables, by Arthur Kaupe.

The Hooke\_Jeeves algorithm does not required the function F(X) to be
differentiable. It does not even require the function to be continuous,
although it should probably only be "weakly discontinuous", like a step
function, with finitely many well-separated jumps. In any case, the
algorithm only examines function values, never derivatives, remembers
the location of the best value encountered, and seeks to improve this
value by a clever pattern search.

The user supplies a quantity **rho**, between 0 and 1, which controls
how cautious or daring the search is, as well as a routine to evaluate
the function, and a few input parameters.

A C version of the algorithm, as written by Mark Johnson, is available
at <http://www.netlib.org/opt/hooke.c>

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TOMS178** is available in [a C
version](../../c_src/toms178/toms178.md) and [a C++
version](../../master/toms178/toms178.md) and [a FORTRAN77
version](../../f77_src/toms178/toms178.md) and [a FORTRAN90
version](../../f_src/toms178/toms178.md) and [a MATLAB
version](../../m_src/toms178/toms178.md) and [a Python
version](../../py_src/toms178/toms178.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[ASA047](../../master/asa047/asa047.md), a C++ library which
minimizes a scalar function of several variables using the Nelder-Mead
algorithm.

[COMPASS\_SEARCH](../../master/compass_search/compass_search.md), a
C++ library which seeks the minimizer of a scalar function of several
variables using compass search, a direct search algorithm that does not
use derivatives.

[MINPACK](../../master/minpack/minpack.md), a C++ library which
solves systems of nonlinear equations, or the least squares minimization
of the residual of a set of linear or nonlinear equations.

### Author: {#author align="center"}

Original Algol version by Arthur Kaupe; C++ version by John Burkardt.

### Reference: {#reference align="center"}

-   M Bell, Malcolm Pike,\
    Remark on Algorithm 178: Direct Search,\
    Communications of the ACM,\
    Volume 9, Number 9, September 1966, page 684.
-   Robert Hooke, Terry Jeeves,\
    Direct Search Solution of Numerical and Statistical Problems,\
    Journal of the ACM,\
    Volume 8, Number 2, April 1961, pages 212-229.
-   Arthur Kaupe,\
    Algorithm 178: Direct Search,\
    Communications of the ACM,\
    Volume 6, Number 6, June 1963, page 313.
-   FK Tomlin, LB Smith,\
    Remark on Algorithm 178: Direct Search,\
    Communications of the ACM,\
    Volume 12, Number 11, November 1969, page 637-638.

### Source Code: {#source-code align="center"}

-   [toms178.cpp](toms178.cpp), the source code;
-   [toms178.hpp](toms178.hpp), the include file;

### Examples and Tests: {#examples-and-tests align="center"}

-   [toms178\_prb.cpp](toms178_prb.cpp), the sample calling program;
-   [toms178\_prb\_output.txt](toms178_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **BEST\_NEARBY** looks for a better nearby point, one coordinate at
    a time.
-   **HOOKE** seeks a minimizer of a scalar function of several
    variables.
-   **R8\_ABS** returns the absolute value of an R8.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 12 February 2008.*
