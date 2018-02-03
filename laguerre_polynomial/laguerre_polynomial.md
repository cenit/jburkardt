LAGUERRE\_POLYNOMIAL\
Laguerre Polynomials {#laguerre_polynomial-laguerre-polynomials align="center"}
=====================

------------------------------------------------------------------------

**LAGUERRE\_POLYNOMIAL** is a C++ library which evaluates the Laguerre
polynomial, the generalized Laguerre polynomials, and the Laguerre
function.

The Laguerre polynomial L(n,x) can be defined by:

            L(n,x) = exp(x)/n! * d^n/dx^n ( exp(-x) * x^n )
          

where n is a nonnegative integer.

The generalized Laguerre polynomial Lm(n,m,x) can be defined by:

            Lm(n,m,x) = exp(x)/(x^m*n!) * d^n/dx^n ( exp(-x) * x^(m+n) )
          

where n and m are nonnegative integers.

The Laguerre function can be defined by:

            Lf(n,alpha,x) = exp(x)/(x^alpha*n!) * d^n/dx^n ( exp(-x) * x^(alpha+n) )
          

where n is a nonnegative integer and -1.0 &lt; alpha is a real number.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**LAGUERRE\_POLYNOMIAL** is available in [a C
version](../../c_src/laguerre_polynomial/laguerre_polynomial.html) and
[a C++
version](../../cpp_src/laguerre_polynomial/laguerre_polynomial.html) and
[a FORTRAN77
version](../../f77_src/laguerre_polynomial/laguerre_polynomial.html) and
[a FORTRAN90
version](../../f_src/laguerre_polynomial/laguerre_polynomial.html) and
[a MATLAB
version](../../m_src/laguerre_polynomial/laguerre_polynomial.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BERNSTEIN\_POLYNOMIAL](../../cpp_src/bernstein_polynomial/bernstein_polynomial.html),
a C++ library which evaluates the Bernstein polynomials, useful for
uniform approximation of functions;

[CHEBYSHEV\_POLYNOMIAL](../../cpp_src/chebyshev_polynomial/chebyshev_polynomial.html),
a C++ library which evaluates the Chebyshev polynomial and associated
functions.

[GEGENBAUER\_POLYNOMIAL](../../cpp_src/gegenbauer_polynomial/gegenbauer_polynomial.html),
a C++ library which evaluates the Gegenbauer polynomial and associated
functions.

[GEN\_LAGUERRE\_RULE](../../cpp_src/gen_laguerre_rule/gen_laguerre_rule.html),
a C++ program which can compute and print a generalized Gauss-Laguerre
quadrature rule.

[HERMITE\_POLYNOMIAL](../../cpp_src/hermite_polynomial/hermite_polynomial.html),
a C++ library which evaluates the physicist's Hermite polynomial, the
probabilist's Hermite polynomial, the Hermite function, and related
functions.

[JACOBI\_POLYNOMIAL](../../cpp_src/jacobi_polynomial/jacobi_polynomial.html),
a C++ library which evaluates the Jacobi polynomial and associated
functions.

[LAGUERRE\_RULE](../../cpp_src/laguerre_rule/laguerre_rule.html), a C++
program which can compute and print a Gauss-Laguerre quadrature rule.

[LAGUERRE\_TEST\_INT](../../cpp_src/laguerre_test_int/laguerre_test_int.html),
a C++ library which defines test integrands for integration over
\[A,+oo).

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

[TEST\_VALUES](../../cpp_src/test_values/test_values.html), a C++
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

-   [laguerre\_polynomial.cpp](laguerre_polynomial.cpp), the source
    code.
-   [laguerre\_polynomial.hpp](laguerre_polynomial.hpp), the include
    file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [laguerre\_polynomial\_prb.cpp](laguerre_polynomial_prb.cpp), a
    sample calling program.
-   [laguerre\_polynomial\_prb\_output.txt](laguerre_polynomial_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **IMTQLX** diagonalizes a symmetric tridiagonal matrix.
-   **L\_EXPONENTIAL\_PRODUCT:** exponential product table for L(n,x).
-   **L\_INTEGRAL** evaluates a monomial integral associated with
    L(n,x).
-   **L\_POLYNOMIAL** evaluates the Laguerre polynomials L(n,x).
-   **L\_POLYNOMIAL\_COEFFICIENTS:** coeffs for Laguerre polynomial
    L(n,x).
-   **L\_POLYNOMIAL\_VALUES** returns some values of the Laguerre
    polynomial L(n,x).
-   **L\_POLYNOMIAL\_ZEROS:** zeros of the Laguerre polynomial L(n,x).
-   **L\_POWER\_PRODUCT:** power product table for L(n,x).
-   **L\_QUADRATURE\_RULE:** Gauss-Laguerre quadrature based on L(n,x).
-   **LF\_FUNCTION** evaluates the Laguerre function Lf(n,alpha,x).
-   **LF\_FUNCTION\_VALUES:** some values of the Laguerre function
    Lf(n,alpha,x).
-   **LF\_FUNCTION\_ZEROS** returns the zeros of Lf(n,alpha,x).
-   **LF\_INTEGRAL** evaluates a monomial integral associated with
    Lf(n,alpha,x).
-   **LF\_QUADRATURE\_RULE:** Gauss-Laguerre quadrature rule for
    Lf(n,alpha,x);
-   **LM\_INTEGRAL** evaluates a monomial integral associated with
    Lm(n,m,x).
-   **LM\_POLYNOMIAL** evaluates Laguerre polynomials Lm(n,m,x).
-   **LM\_POLYNOMIAL\_COEFFICIENTS:** coefficients of Laguerre
    polynomial Lm(n,m,x).
-   **LM\_POLYNOMIAL\_VALUES:** some values of the Laguerre polynomial
    Lm(n,m,x).
-   **LM\_POLYNOMIAL\_ZEROS** returns the zeros for Lm(n,m,x).
-   **LM\_QUADRATURE\_RULE:** Gauss-Laguerre quadrature rule for
    Lm(n,m,x);
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_ADD** adds two R8's.
-   **R8\_EPSILON** returns the R8 roundoff unit.
-   **R8\_FACTORIAL** computes the factorial of N.
-   **R8\_GAMMA** evaluates Gamma(X) for an R8.
-   **R8\_SIGN** returns the sign of an R8.
-   **R8MAT\_PRINT** prints an R8MAT.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8VEC\_DOT\_PRODUCT** computes the dot product of a pair of
    R8VEC's.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC2\_PRINT** prints an R8VEC2.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 11 March 2012.*
