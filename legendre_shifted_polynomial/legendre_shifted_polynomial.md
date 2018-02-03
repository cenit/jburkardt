LEGENDRE\_SHIFTED\_POLYNOMIAL\
Shifted Legendre Polynomials {#legendre_shifted_polynomial-shifted-legendre-polynomials align="center"}
==============================

------------------------------------------------------------------------

**LEGENDRE\_SHIFTED\_POLYNOMIAL** is a C++ library which evaluates the
shifted Legendre polynomial.

The standard Legendre polynomial P(n,x) is defined over the interval
\[-1,+1\]. The shifted Legendre polynomial P01(n,x) is shifted to the
interval \[0,1\]. The relationships are:

            P01(n,x) = P(n,(x+1)/2)
            P(n,x) = P01(n,2*x-1)
          

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**LEGENDRE\_SHIFTED\_POLYNOMIAL** is available in [a C
version](../../c_src/legendre_shifted_polynomial/legendre_shifted_polynomial.html)
and [a C++
version](../../cpp_src/legendre_shifted_polynomial/legendre_shifted_polynomial.html)
and [a FORTRAN90
version](../../f_src/legendre_shifted_polynomial/legendre_shifted_polynomial.html)
and [a MATLAB
version](../../m_src/legendre_shifted_polynomial/legendre_shifted_polynomial.html)
and [a Python
version](../../py_src/legendre_shifted_polynomial/legendre_shifted_polynomial.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BERNSTEIN\_POLYNOMIAL](../../cpp_src/bernstein_polynomial/bernstein_polynomial.html),
a C++ library which evaluates the Bernstein polynomials, useful for
uniform approximation of functions;

[CHEBYSHEV\_POLYNOMIAL](../../cpp_src/chebyshev_polynomial/chebyshev_polynomial.html),
a C++ library which considers the Chebyshev polynomials T(i,x), U(i,x),
V(i,x) and W(i,x). Functions are provided to evaluate the polynomials,
determine their zeros, produce their polynomial coefficients, produce
related quadrature rules, project other functions onto these polynomial
bases, and integrate double and triple products of the polynomials.

[GEGENBAUER\_POLYNOMIAL](../../cpp_src/gegenbauer_polynomial/gegenbauer_polynomial.html),
a C++ library which evaluates the Gegenbauer polynomial and associated
functions.

[HERMITE\_POLYNOMIAL](../../cpp_src/hermite_polynomial/hermite_polynomial.html),
a C++ library which evaluates the physicist's Hermite polynomial, the
probabilist's Hermite polynomial, the Hermite function, and related
functions.

[JACOBI\_POLYNOMIAL](../../cpp_src/jacobi_polynomial/jacobi_polynomial.html),
a C++ library which evaluates the Jacobi polynomial and associated
functions.

[LAGUERRE\_POLYNOMIAL](../../cpp_src/laguerre_polynomial/laguerre_polynomial.html),
a C++ library which evaluates the Laguerre polynomial, the generalized
Laguerre polynomial, and the Laguerre function.

[LEGENDRE\_POLYNOMIAL](../../cpp_src/legendre_polynomial/legendre_polynomial.html),
a C++ library which evaluates the Legendre polynomials and associated
functions;

[LEGENDRE\_PRODUCT\_POLYNOMIAL](../../cpp_src/legendre_product_polynomial/legendre_product_polynomial.html),
a C++ library which defines Legendre product polynomials, creating a
multivariate polynomial as the product of univariate Legendre
polynomials.

[LOBATTO\_POLYNOMIAL](../../cpp_src/lobatto_polynomial/lobatto_polynomial.html),
a C++ library which evaluates Lobatto polynomials, similar to Legendre
polynomials except that they are zero at both endpoints.

[POLPAK](../../cpp_src/polpak/polpak.html), a C++ library which
evaluates a variety of mathematical functions.

[TEST\_VALUES](../../cpp_src/test_values/test_values.html), a C++
library which supplies test values of various mathematical functions.

### Source Code: {#source-code align="center"}

-   [legendre\_shifted\_polynomial.cpp](legendre_shifted_polynomial.cpp),
    the source code.
-   [legendre\_shifted\_polynomial.hpp](legendre_shifted_polynomial.hpp),
    the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [legendre\_shifted\_polynomial\_prb.cpp](legendre_shifted_polynomial_prb.cpp),
    a sample calling program.
-   [legendre\_shifted\_polynomial\_prb\_output.txt](legendre_shifted_polynomial_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **P01\_POLYNOMIAL\_VALUE** evaluates the shifted Legendre
    polynomials P01(n,x).
-   **P01\_POLYNOMIAL\_VALUES:** the shifted Legendre polynomials.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 16 March 2016.*
