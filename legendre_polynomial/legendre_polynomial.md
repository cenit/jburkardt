LEGENDRE\_POLYNOMIAL\
Legendre Polynomials {#legendre_polynomial-legendre-polynomials align="center"}
=====================

------------------------------------------------------------------------

**LEGENDRE\_POLYNOMIAL** is a C++ library which evaluates the Legendre
polynomial and associated functions.

The Legendre polynomial P(n,x) can be defined by:

            P(0,x) = 1
            P(1,x) = x
            P(n,x) = (2*n-1)/n * x * P(n-1,x) - (n-1)/n * P(n-2,x)
          

where n is a nonnegative integer.

The N zeroes of P(n,x) are the abscissas used for Gauss-Legendre
quadrature of the integral of a function F(X) with weight function 1
over the interval \[-1,1\].

The Legendre polynomials are orthogonal under the inner product defined
as integration from -1 to 1:

            Integral ( -1 <= x <= 1 ) P(i,x) * P(j,x) dx 
              = 0 if i =/= j
              = 2 / ( 2*i+1 ) if i = j.
          

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**LEGENDRE\_POLYNOMIAL** is available in [a C
version](../../c_src/legendre_polynomial/legendre_polynomial.md) and
[a C++
version](../../master/legendre_polynomial/legendre_polynomial.md) and
[a FORTRAN77
version](../../f77_src/legendre_polynomial/legendre_polynomial.md) and
[a FORTRAN90
version](../../f_src/legendre_polynomial/legendre_polynomial.md) and
[a MATLAB
version](../../m_src/legendre_polynomial/legendre_polynomial.md) and
[a Python
version](../../py_src/legendre_polynomial/legendre_polynomial.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BERNSTEIN\_POLYNOMIAL](../../master/bernstein_polynomial/bernstein_polynomial.md),
a C++ library which evaluates the Bernstein polynomials, useful for
uniform approximation of functions;

[CHEBYSHEV\_POLYNOMIAL](../../master/chebyshev_polynomial/chebyshev_polynomial.md),
a C++ library which considers the Chebyshev polynomials T(i,x), U(i,x),
V(i,x) and W(i,x). Functions are provided to evaluate the polynomials,
determine their zeros, produce their polynomial coefficients, produce
related quadrature rules, project other functions onto these polynomial
bases, and integrate double and triple products of the polynomials.

[GEGENBAUER\_POLYNOMIAL](../../master/gegenbauer_polynomial/gegenbauer_polynomial.md),
a C++ library which evaluates the Gegenbauer polynomial and associated
functions.

[HERMITE\_POLYNOMIAL](../../master/hermite_polynomial/hermite_polynomial.md),
a C++ library which evaluates the physicist's Hermite polynomial, the
probabilist's Hermite polynomial, the Hermite function, and related
functions.

[INT\_EXACTNESS\_LEGENDRE](../../master/int_exactness_legendre/int_exactness_legendre.md),
a C++ program which tests the polynomial exactness of Gauss-Legendre
quadrature rules.

[JACOBI\_POLYNOMIAL](../../master/jacobi_polynomial/jacobi_polynomial.md),
a C++ library which evaluates the Jacobi polynomial and associated
functions.

[LAGUERRE\_POLYNOMIAL](../../master/laguerre_polynomial/laguerre_polynomial.md),
a C++ library which evaluates the Laguerre polynomial, the generalized
Laguerre polynomial, and the Laguerre function.

[LEGENDRE\_PRODUCT\_POLYNOMIAL](../../master/legendre_product_polynomial/legendre_product_polynomial.md),
a C++ library which defines Legendre product polynomials, creating a
multivariate polynomial as the product of univariate Legendre
polynomials.

[LEGENDRE\_RULE](../../master/legendre_rule/legendre_rule.md), a C++
program which computes a 1D Gauss-Legendre quadrature rule.

[LEGENDRE\_SHIFTED\_POLYNOMIAL](../../master/legendre_shifted_polynomial/legendre_shifted_polynomial.md),
a C++ library which evaluates the shifted Legendre polynomial, with
domain \[0,1\].

[LOBATTO\_POLYNOMIAL](../../master/lobatto_polynomial/lobatto_polynomial.md),
a C++ library which evaluates Lobatto polynomials, similar to Legendre
polynomials except that they are zero at both endpoints.

[POLPAK](../../master/polpak/polpak.md), a C++ library which
evaluates a variety of mathematical functions.

[TEST\_VALUES](../../master/test_values/test_values.md), a C++
library which supplies test values of various mathematical functions.

### Reference: {#reference align="center"}

1.  Theodore Chihara,\
    An Introduction to Orthogonal Polynomials,\
    Gordon and Breach, 1978,\
    ISBN: 0677041500,\
    LC: QA404.5 C44.
2.  Walter Gautschi,\
    Orthogonal Polynomials: Computation and Approximation,\
    Oxford, 2004,\
    ISBN: 0-19-850672-4,\
    LC: QA404.5 G3555.
3.  Frank Olver, Daniel Lozier, Ronald Boisvert, Charles Clark,\
    NIST Handbook of Mathematical Functions,\
    Cambridge University Press, 2010,\
    ISBN: 978-0521192255,\
    LC: QA331.N57.
4.  Gabor Szego,\
    Orthogonal Polynomials,\
    American Mathematical Society, 1992,\
    ISBN: 0821810235,\
    LC: QA3.A5.v23.

### Source Code: {#source-code align="center"}

-   [legendre\_polynomial.cpp](legendre_polynomial.cpp), the source
    code.
-   [legendre\_polynomial.hpp](legendre_polynomial.hpp), the include
    file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [legendre\_polynomial\_prb.cpp](legendre_polynomial_prb.cpp), a
    sample calling program.
-   [legendre\_polynomial\_prb\_output.txt](legendre_polynomial_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **IMTQLX** diagonalizes a symmetric tridiagonal matrix.
-   **P\_EXPONENTIAL\_PRODUCT:** exponential products for P(n,x).
-   **P\_INTEGRAL** evaluates a monomial integral associated with
    P(n,x).
-   **P\_POLYNOMIAL** evaluates the Legendre polynomials P(n,x).
-   **P\_POLYNOMIAL\_COEFFICIENTS:** coefficients of Legendre
    polynomials P(n,x).
-   **P\_POLYNOMIAL\_PRIME** evaluates the derivative of Legendre
    polynomials P'(n,x).
-   **P\_POLYNOMIAL\_VALUES** returns values of the Legendre polynomials
    P(n,x).
-   **P\_POLYNOMIAL\_ZEROS:** zeros of Legendre function P(n,x).
-   **P\_POWER\_PRODUCT:** power products for Legendre polynomial
    P(n,x).
-   **P\_QUADRATURE\_RULE:** quadrature for Legendre function P(n,x).
-   **PM\_POLYNOMIAL** evaluates the Legendre polynomials Pm(n,m,x).
-   **PM\_POLYNOMIAL\_VALUES** returns values of Legendre polynomials
    Pm(n,m,x).
-   **LEGENDRE\_ASSOCIATED\_NORMALIZED\_VALUES:** normalized associated
    Legendre.
-   **LEGENDRE\_FUNCTION\_Q\_VALUES** returns values of the Legendre Q
    function.
-   **LEGENDRE\_ASSOCIATED\_NORMALIZED:** normalized associated Legendre
    functions.
-   **LEGENDRE\_FUNCTION\_Q** evaluates the Legendre Q functions.
-   **R8MAT\_PRINT** prints an R8MAT.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC2\_PRINT** prints an R8VEC2.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 14 March 2012.*
