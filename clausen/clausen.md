CLAUSEN\
Chebyshev Interpolant to the Clausen Function {#clausen-chebyshev-interpolant-to-the-clausen-function align="center"}
=============================================

------------------------------------------------------------------------

**CLAUSEN** is a C++ library which evaluates a Chebyshev interpolant to
the Clausen function Cl2(x).

Cl2(x) = - integral ( 0 &lt; s &lt; x ) log ( abs ( 2 sin ( x / 2 ) ) )
dx

The Clausen function is periodic, with period 2 pi.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**CLAUSEN** is available in [a C
version](../../c_src/clausen/clausen.md) and [a C++
version](../../master/clausen/clausen.md) and [a FORTRAN90
version](../../f_src/clausen/clausen.md) and [a MATLAB
version](../../m_src/clausen/clausen.md) and [a Python
version](../../py_src/clausen/clausen.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CHEBYSHEV](../../master/chebyshev/chebyshev.md), a C++ library which
computes the Chebyshev interpolant/approximant to a given function over
an interval.

[CHEBYSHEV\_INTERP\_1D](../../master/chebyshev_interp_1d/chebyshev_interp_1d.md),
a C++ library which determines the combination of Chebyshev polynomials
which interpolates a set of data, so that p(x(i)) = y(i).

[CHEBYSHEV\_POLYNOMIAL](../../master/chebyshev_polynomial/chebyshev_polynomial.md),
a C++ library which considers the Chebyshev polynomials T(i,x), U(i,x),
V(i,x) and W(i,x). Functions are provided to evaluate the polynomials,
determine their zeros, produce their polynomial coefficients, produce
related quadrature rules, project other functions onto these polynomial
bases, and integrate double and triple products of the polynomials.

[CHEBYSHEV\_SERIES](../../master/chebyshev_series/chebyshev_series.md),
a C++ library which can evaluate a Chebyshev series approximating a
function f(x), while efficiently computing one, two or three derivatives
of the series, which approximate f'(x), f''(x), and f'''(x), by Manfred
Zimmer.

[FN](../../master/fn/fn.md), a C++ library which approximates
elementary and special functions using Chebyshev polynomials; functions
include Airy, Bessel I, J, K and Y, beta, confluent hypergeometric,
error, gamma, log gamma, Pochhammer, Spence; integrals include
hyperbolic cosine, cosine, Dawson, exponential, logarithmic, hyperbolic
sine, sine; by Wayne Fullerton.

[POLPAK](../../master/polpak/polpak.md), a C++ library which
evaluates a variety of mathematical functions, including Chebyshev,
Gegenbauer, Hermite, Jacobi, Laguerre, Legendre polynomials, and the
Collatz sequence.

[TEST\_VALUES](../../master/test_values/test_values.md), a C++
library which supplies test values of various mathematical functions.

[TOMS446](../../master/toms446/toms446.md), a C++ library which
manipulates Chebyshev series for interpolation and approximation; this
is ACM TOMS algorithm 446, by Roger Broucke.

### Reference: {#reference align="center"}

1.  Kurt Koelbig,\
    Chebyshev coefficients for the Clausen function Cl2(x),\
    Journal of Computational and Applied Mathematics,\
    Volume 64, Number 3, 1995, pages 295-297.

### Source Code: {#source-code align="center"}

-   [clausen.cpp](clausen.cpp), the source code.
-   [clausen.hpp](clausen.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [clausen\_prb.cpp](clausen_prb.cpp), a sample calling program.
-   [clausen\_prb\_output.txt](clausen_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **CLAUSEN** evaluates the Clausen function Cl2(x).
-   **CLAUSEN\_VALUES** returns some values of the Clausen's integral.
-   **R8\_CSEVL** evaluates a Chebyshev series.
-   **R8\_WRAP** forces an R8 to lie between given limits by wrapping.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 12 December 2016.*
