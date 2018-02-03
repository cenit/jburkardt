GEGENBAUER\_POLYNOMIAL\
Gegenbauer Polynomials {#gegenbauer_polynomial-gegenbauer-polynomials align="center"}
=======================

------------------------------------------------------------------------

**GEGENBAUER\_POLYNOMIAL** is a C++ library which evaluates Gegenbauer
polynomials and associated functions.

The Gegenbauer polynomial C(n,alpha,x) can be defined by:

            C(0,alpha,x) = 1
            C(1,alpha,x) = 2 * alpha * x
            C(n,alpha,x) = (1/n) * ( 2*x*(n+alpha-1) * C(n-1,alpha,x) - (n+2*alpha-2) * C(n-2,alpha,x) )
          

where n is a nonnegative integer, and -1/2 &lt; alpha, 0 =/= alpha.

The N zeroes of C(n,alpha,x) are the abscissas used for Gauss-Gegenbauer
quadrature of the integral of a function F(X) with weight function
(1-x\^2)\^(alpha-1/2) over the interval \[-1,1\].

The Gegenbauer polynomials are orthogonal under the inner product
defined as weighted integration from -1 to 1:

            Integral ( -1 <= x <= 1 ) (1-x^2)^(alpha-1/2) * C(i,alpha,x) * C(j,alpha,x) dx 
              = 0 if i =/= j
              = pi * 2^(1-2*alpha) * Gamma(n+2*alpha) / n! / (n+alpha) / (Gamma(alpha))^2 if i = j.
          

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**GEGENBAUER\_POLYNOMIAL** is available in [a C
version](../../c_src/gegenbauer_polynomial/gegenbauer_polynomial.html)
and [a C++
version](../../cpp_src/gegenbauer_polynomial/gegenbauer_polynomial.html)
and [a FORTRAN90
version](../../f_src/gegenbauer_polynomial/gegenbauer_polynomial.html)
and [a MATLAB
version](../../m_src/gegenbauer_polynomial/gegenbauer_polynomial.html)
and [a Python
version](../../py_src/gegenbauer_polynomial/gegenbauer_polynomial.html)..

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

[GEGENBAUER\_CC](../../cpp_src/gegenbauer_cc/gegenbauer_cc.html), a C++
library which estimates the Gegenbauer weighted integral of a function
f(x) using a Clenshaw-Curtis approach.

[GEGENBAUER\_RULE](../../cpp_src/gegenbauer_rule/gegenbauer_rule.html),
a C++ program which can generate a Gauss-Gegenbauer quadrature rule on
request.

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
a C++ library which evaluates the Legendre polynomial and associated
functions.

[LEGENDRE\_SHIFTED\_POLYNOMIAL](../../cpp_src/legendre_shifted_polynomial/legendre_shifted_polynomial.html),
a C++ library which evaluates the shifted Legendre polynomial, with
domain \[0,1\].

[LOBATTO\_POLYNOMIAL](../../cpp_src/lobatto_polynomial/lobatto_polynomial.html),
a C++ library which evaluates Lobatto polynomials, similar to Legendre
polynomials except that they are zero at both endpoints.

[POLPAK](../../cpp_src/polpak/polpak.html), a C++ library which
evaluates a variety of mathematical functions.

### Source Code: {#source-code align="center"}

-   [gegenbauer\_polynomial.cpp](gegenbauer_polynomial.cpp), the source
    code.
-   [gegenbauer\_polynomial.hpp](gegenbauer_polynomial.hpp), the include
    file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [gegenbauer\_polynomial\_prb.cpp](gegenbauer_polynomial_prb.cpp) a
    sample calling program.
-   [gegenbauer\_polynomial\_prb\_output.txt](gegenbauer_polynomial_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **GEGENBAUER\_ALPHA\_CHECK** checks the value of ALPHA.
-   **GEGENBAUER\_EK\_COMPUTE** computes a Gauss-Gegenbauer quadrature
    rule.
-   **GEGENBAUER\_INTEGRAL:** the integral of a monomial with Gegenbauer
    weight.
-   **GEGENBAUER\_POLYNOMIAL\_VALUE** computes the Gegenbauer
    polynomials C(I,ALPHA)(X).
-   **GEGENBAUER\_POLYNOMIAL\_VALUES** returns some values of the
    Gegenbauer polynomials.
-   **GEGENBAUER\_SS\_COMPUTE** computes a Gauss-Gegenbauer quadrature
    rule.
-   **GEGENBAUER\_SS\_RECUR:** value and derivative of a Gegenbauer
    polynomial.
-   **GEGENBAUER\_SS\_ROOT** improves an approximate root of a
    Gegenbauer polynomial.
-   **HYPER\_2F1\_VALUES** returns some values of the hypergeometric
    function 2F1.
-   **IMTQLX** diagonalizes a symmetric tridiagonal matrix.
-   **R8\_EPSILON** returns the R8 round off unit.
-   **R8\_GAMMA** evaluates Gamma(X) for a real argument.
-   **R8\_HYPER\_2F1** evaluates the hypergeometric function
    2F1(A,B,C,X).
-   **R8\_PSI** evaluates the function Psi(X).
-   **R8\_SIGN** returns the sign of an R8.
-   **R8\_UNIFORM\_AB** returns a pseudorandom R8 scaled to \[A,B\].
-   **R8VEC\_PRINT** prints an R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 30 November 2015.*
