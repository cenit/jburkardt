CYCLE\_FLOYD\
Cycle Detection by Floyd's Method {#cycle_floyd-cycle-detection-by-floyds-method align="center"}
=================================

------------------------------------------------------------------------

**CYCLE\_FLOYD** is a C++ library which analyzes a cycle in an iterated
function sequence using Floyd's method.

Suppose we a repeatedly apply a function f(), starting with the argument
x0, then f(x0), f(f(x0)) and so on. Suppose that the range of f is
finite. Then eventually the iteration must reach a cycle. Once the cycle
is reached, succeeding values stay within that cycle.

Starting at x0, there is a "nearest element" of the cycle, which is
reached after MU applications of f.

Once the cycle is entered, the cycle has a length LAM, which is the
number of steps required to first return to a given value.

This function uses Floyd's method to determine the values of MU and LAM,
given F and X0.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**CYCLE\_FLOYD** is available in [a C
version](../../c_src/cycle_floyd/cycle_floyd.md) and [a C++
version](../../master/cycle_floyd/cycle_floyd.md) and [a FORTRAN77
version](../../f77_src/cycle_floyd/cycle_floyd.md) and [a FORTRAN90
version](../../f_src/cycle_floyd/cycle_floyd.md) and [a MATLAB
version](../../m_src/cycle_floyd/cycle_floyd.md) and [a PYTHON
version](../../py_src/cycle_floyd/cycle_floyd.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CYCLE\_BRENT](../../master/cycle_brent/cycle_brent.md), a C++
library which carries out an iterated function evaluation, and seeks to
determine the nearest element of a cycle, and the cycle's length, using
Brent's method.

### Reference: {#reference align="center"}

1.  Donald Knuth,\
    The Art of Computer Programming,\
    Volume 2, Seminumerical Algorithms,\
    Third Edition,\
    Addison Wesley, 1997,\
    ISBN: 0201896842,\
    LC: QA76.6.K64.

### Source Code: {#source-code align="center"}

-   [cycle\_floyd.cpp](cycle_floyd.cpp), the source code.
-   [cycle\_floyd.hpp](cycle_floyd.hpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [cycle\_floyd\_prb.cpp](cycle_floyd_prb.cpp), a sample calling
    program.
-   [cycle\_floyd\_prb\_output.txt](cycle_floyd_prb_output.txt), the
    output file.

### List of Routines: {#list-of-routines align="center"}

-   **CYCLE\_FLOYD** finds a cycle in an iterated mapping using Floyd's
    method.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 18 June 2012.*
