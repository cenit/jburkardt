CHEBYSHEV\_SERIES\
Evaluate Chebyshev Series with Derivatives {#chebyshev_series-evaluate-chebyshev-series-with-derivatives align="center"}
==========================================

------------------------------------------------------------------------

**CHEBYSHEV\_SERIES** is a C++ library which can evaluate a Chebyshev
series approximating a function f(x), while efficiently computing one,
two or three derivatives of the series, which approximate f'(x), f''(x),
and f'''(x), by Manfred Zimmer.

Note that this library does not compute a Chebyshev series; it assumes
that the series has already been computed, and offers an efficient means
of evaluating the series and its derivatives simultaneously.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**CHEBYSHEV\_SERIES** is available in [a C
version](../../c_src/chebyshev_series/chebyshev_series.html) and [a C++
version](../../cpp_src/chebyshev_series/chebyshev_series.html) and [a
FORTRAN77 version](../../f77_src/chebyshev_series/chebyshev_series.html)
and [a FORTRAN90
version](../../f_src/chebyshev_series/chebyshev_series.html) and [a
MATLAB version](../../m_src/chebyshev_series/chebyshev_series.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CHEBYSHEV](../../cpp_src/chebyshev/chebyshev.html), a C++ library which
computes the Chebyshev interpolant/approximant to a given function over
an interval.

[CHEBYSHEV\_INTERP\_1D](../../cpp_src/chebyshev_interp_1d/chebyshev_interp_1d.html),
a C++ library which determines the combination of Chebyshev polynomials
which interpolates a set of data, so that p(x(i)) = y(i).

[CHEBYSHEV\_POLYNOMIAL](../../cpp_src/chebyshev_polynomial/chebyshev_polynomial.html),
a C++ library which considers the Chebyshev polynomials T(i,x), U(i,x),
V(i,x) and W(i,x). Functions are provided to evaluate the polynomials,
determine their zeros, produce their polynomial coefficients, produce
related quadrature rules, project other functions onto these polynomial
bases, and integrate double and triple products of the polynomials.

[CLAUSEN](../../cpp_src/clausen/clausen.html), a C++ library which
evaluates a Chebyshev interpolant to the Clausen function Cl2(x).

[FN](../../cpp_src/fn/fn.html), a C++ library which approximates
elementary and special functions using Chebyshev polynomials; functions
include Airy, Bessel I, J, K and Y, beta, confluent hypergeometric,
error, gamma, log gamma, Pochhammer, Spence; integrals include
hyperbolic cosine, cosine, Dawson, exponential, logarithmic, hyperbolic
sine, sine; by Wayne Fullerton.

[POLPAK](../../cpp_src/polpak/polpak.html), a C++ library which
evaluates a variety of mathematical functions, including Chebyshev,
Gegenbauer, Hermite, Jacobi, Laguerre, Legendre polynomials, and the
Collatz sequence.

[TOMS446](../../cpp_src/toms446/toms446.html), a C++ library which
manipulates Chebyshev series for interpolation and approximation; this
is ACM TOMS algorithm 446, by Roger Broucke.

### Author: {#author align="center"}

Manfred Zimmer

### Reference: {#reference align="center"}

1.  Charles Clenshaw,\
    Mathematical Tables, Volume 5,\
    Chebyshev series for mathematical functions,\
    London, 1962.
2.  Gerhard Maess,\
    Vorlesungen ueber Numerische Mathematik II, Analysis,\
    Berlin, Akademie\_Verlag, 1984-1988,\
    ISBN: 978-3764318840,\
    LC: QA297.M325.  
3.  Francis Smith,\
    An algorithm for summing orthogonal polynomial series and their
    derivatives with applications to curve-fitting and interpolation,\
    Mathematics of Computation,\
    Volume 19, Number 89, 1965, pages 33-36.

### Source Code: {#source-code align="center"}

-   [chebyshev\_series.cpp](chebyshev_series.cpp), the source code.
-   [chebyshev\_series.hpp](chebyshev_series.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [chebyshev\_series\_prb.cpp](chebyshev_series_prb.cpp), a sample
    calling program.
-   [chebyshev\_series\_prb\_output.txt](chebyshev_series_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **ECHEBSER0** evaluates a Chebyshev series.
-   **ECHEBSER1** evaluates a Chebyshev series and first derivative.
-   **ECHEBSER2** evaluates a Chebyshev series and two derivatives.
-   **ECHEBSER3** evaluates a Chebyshev series and three derivatives.
-   **ECHEBSER4** evaluates a Chebyshev series and four derivatives.
-   **EVENCHEBSER0** evaluates an even Chebyshev series.
-   **EVENCHEBSER1** evaluates an even Chebyshev series and first
    derivative.
-   **EVENCHEBSER2** evaluates an even Chebyshev series and first two
    derivatives.
-   **ODDCHEBSER0** evaluates an odd Chebyshev series.
-   **ODDCHEBSER1** evaluates an odd Chebyshev series and the first
    derivative.
-   **ODDCHEBSER2** evaluates an odd Chebyshev series and first two
    derivatives.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 29 April 2014.*
