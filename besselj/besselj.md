BESSELJ\
Bessel J functions of noninteger order {#besselj-bessel-j-functions-of-noninteger-order align="center"}
======================================

------------------------------------------------------------------------

**BESSELJ** is a C++ library which evaluates Bessel J functions of
noninteger order.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**BESSELJ** is available in [a C
version](../../c_src/besselj/besselj.html) and [a C++
version](../../cpp_src/besselj/besselj.html) and [a FORTRAN90
version](../../f_src/besselj/besselj.html) and [a MATLAB
version](../../m_src/besselj/besselj.html) and [a Python
version](../../py_src/besselj/besselj.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FN](../../cpp_src/fn/fn.html), a C++ library which approximates
elementary and special functions using Chebyshev polynomials; functions
include Airy, Bessel I, J, K and Y, beta, confluent hypergeometric,
error, gamma, log gamma, Pochhammer, Spence; integrals include
hyperbolic cosine, cosine, Dawson, exponential, logarithmic, hyperbolic
sine, sine; by Wayne Fullerton.

[POLPAK](../../cpp_src/polpak/polpak.html), a C++ library which
evaluates certain mathematical functions, especially some recursive
polynomial families.

[TEST\_VALUES](%20../../cpp_src/test_values/test_values.html), a C++
library which stores values of many mathematical functions, and can be
used for testing.

### Reference: {#reference align="center"}

1.  Donald Amos, SL Daniel, MK Weston,\
    CDC 6600 subroutines IBESS and JBESS for Bessel functions I(NU,X)
    and J(NU,X),\
    ACM Transactions on Mathematical Software,\
    Volume 3, Number 1, March 1977, pages 76-92.
2.  William Cody,\
    Algorithm 715: SPECFUN - A Portable FORTRAN Package of Special
    Function Routines and Test Drivers,\
    ACM Transactions on Mathematical Software,\
    Volume 19, Number 1, March 1993, pages 22-32.

### Source Code: {#source-code align="center"}

-   [besselj.cpp](besselj.cpp), the source code.
-   [besselj.hpp](besselj.hpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [besselj\_prb.cpp](besselj_prb.cpp), a sample calling program.
-   [besselj\_prb\_output.txt](besselj_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **BESSEL\_JX\_VALUES** returns some values of the Jx Bessel
    function.
-   **RJBESL** evaluates a sequence of Bessel J functions.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 15 January 2016.*
