TOMS446\
Ten Subroutines for the Manipulation of Chebyshev Series {#toms446-ten-subroutines-for-the-manipulation-of-chebyshev-series align="center"}
========================================================

------------------------------------------------------------------------

**TOMS446** is a C++ library which implements ACM TOMS algorithm 446,
for the manipulation of Chebyshev series, by Roger Broucke.

While the text of many ACM TOMS algorithms is available online through
ACM: [http://www.acm.org/pubs/calgo](http://www.acm.org/pubs/calgo/) or
NETLIB: <http://www.netlib.org/toms/index.md>, most of the early
algorithms are not available. This is one of them. I typed it in.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TOMS446** is available in [a C
version](../../c_src/toms446/toms446.md) and [a C++
version](../../master/toms446/toms446.md) and [a FORTRAN77
version](../../f77_src/toms446/toms446.md) and [a FORTRAN90
version](../../f_src/toms446/toms446.md) and [a MATLAB
version](../../m_src/toms446/toms446.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BERNSTEIN](../../master/bernstein/bernstein.md), a C++ library which
evaluates the Bernstein polynomials, useful for uniform approximation of
functions;

[CHEBYSHEV](../../master/chebyshev/chebyshev.md), a C++ library which
computes the Chebyshev interpolant/approximant to a given function over
an interval.

[CHEBYSHEV\_SERIES](../../master/chebyshev_series/chebyshev_series.md),
a C++ library which can evaluate a Chebyshev series approximating a
function f(x), while efficiently computing one, two or three derivatives
of the series, which approximate f'(x), f''(x), and f'''(x), by Manfred
Zimmer.

[DIVDIF](../../master/divdif/divdif.md), a C++ library which computes
interpolants by divided differences.

[HERMITE](../../master/hermite/hermite.md), a C++ library which
computes the Hermite interpolant, a polynomial that matches function
values and derivatives.

[SPLINE](../../master/spline/spline.md), a C++ library which can
construct and evaluate spline interpolants and approximants.

[TEST\_APPROX](../../master/test_approx/test_approx.md), a C++
library which defines test functions for approximation and
interpolation.

### Author: {#author align="center"}

Original FORTRAN77 version by Roger Broucke; C++ version by John
Burkardt.

### Reference: {#reference align="center"}

1.  Roger Broucke,\
    Algorithm 446: Ten Subroutines for the Manipulation of Chebyshev
    Series,\
    Communications of the ACM,\
    October 1973, Volume 16, Number 4, pages 254-256.

### Source Code: {#source-code align="center"}

-   [toms446.cpp](toms446.cpp), the source code.
-   [toms446.hpp](toms446.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [toms446\_prb.cpp](toms446_prb.cpp), a sample calling program.
-   [toms446\_prb\_output.txt](toms446_prb_output.txt), the output from
    a run of the sample program.

### List of Routines: {#list-of-routines align="center"}

-   **BINOM:** binomial expansion series for the (-1/M) power of a
    Chebyshev series.
-   **CHEBY** carries out the Chebyshev analysis of one or more
    functions.
-   **DFRNT** determines the derivative of a Chebyshev series.
-   **ECHEB** evaluates a Chebyshev series at a point.
-   **EDCHEB** evaluates the derivative of a Chebyshev series at a
    point.
-   **INVERT** computes the inverse Chebyshev series.
-   **MLTPLY\_NEW** multiplies two Chebyshev series.
-   **MLTPLY\_NEW** multiplies two Chebyshev series.
-   **NTGRT** determines the integral of a Chebyshev series.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8VEC\_ADD** adds one R8VEC to another.
-   **R8VEC\_COPY** copies an R8VEC.
-   **R8VEC\_COPY\_NEW** copies an R8VEC to a "new" R8VEC.
-   **R8VEC\_SCALE** multiples an R8VEC by a scale factor.
-   **R8VEC\_ZERO\_NEW** creates and zeroes an R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **XALFA2** computes a Chebyshev series raised to the (-1/M) power.
-   **XALFA3** computes a Chebyshev series raised to the (-1/M) power.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 23 September 2011.*
