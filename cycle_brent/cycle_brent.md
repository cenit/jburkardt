CYCLE\_BRENT\
Cycle Detection by Brent's Method {#cycle_brent-cycle-detection-by-brents-method align="center"}
=================================

------------------------------------------------------------------------

**CYCLE\_BRENT** is a C++ library which analyzes a cycle in an iterated
function sequence using Brent's method.

Suppose we a repeatedly apply a function f(), starting with the argument
x0, then f(x0), f(f(x0)) and so on. Suppose that the range of f is
finite. Then eventually the iteration must reach a cycle. Once the cycle
is reached, succeeding values stay within that cycle.

Starting at x0, there is a "nearest element" of the cycle, which is
reached after MU applications of f.

Once the cycle is entered, the cycle has a length LAM, which is the
number of steps required to first return to a given value.

This function uses Brent's method to determine the values of MU and LAM,
given F and X0.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**CYCLE\_BRENT** is available in [a C
version](../../c_src/cycle_brent/cycle_brent.html) and [a C++
version](../../cpp_src/cycle_brent/cycle_brent.html) and [a FORTRAN77
version](../../f77_src/cycle_brent/cycle_brent.html) and [a FORTRAN90
version](../../f_src/cycle_brent/cycle_brent.html) and [a MATLAB
version](../../m_src/cycle_brent/cycle_brent.html) and [a PYTHON
version](../../py_src/cycle_brent/cycle_brent.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CYCLE\_FLOYD](../../cpp_src/cycle_floyd/cycle_floyd.html), a C++
library which carries out an iterated function evaluation, and seeks to
determine the nearest element of a cycle, and the cycle's length, using
Floyd's method.

### Reference: {#reference align="center"}

1.  Richard Brent,\
    An improved Monte Carlo factorization algorithm,\
    BIT,\
    Volume 20, Number 2, 1980, pages 176-184.

### Source Code: {#source-code align="center"}

-   [cycle\_brent.cpp](cycle_brent.cpp), the source code.
-   [cycle\_brent.hpp](cycle_brent.hpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [cycle\_brent\_prb.cpp](cycle_brent_prb.cpp), a sample calling
    program.
-   [cycle\_brent\_prb\_output.txt](cycle_brent_prb_output.txt), the
    output file.

### List of Routines: {#list-of-routines align="center"}

-   **CYCLE\_BRENT** finds a cycle in an iterated mapping using Brent's
    method.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 17 June 2012.*
