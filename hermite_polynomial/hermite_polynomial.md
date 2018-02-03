HERMITE\_POLYNOMIAL\
Hermite Polynomials {#hermite_polynomial-hermite-polynomials align="center"}
====================

------------------------------------------------------------------------

**HERMITE\_POLYNOMIAL** is a C++ library which evaluates the physicist's
Hermite polynomial, the probabilist's Hermite polynomial, the Hermite
function, and related functions.

The physicist's Hermite polynomial H(i,x) can be defined by:

            H(i,x) = (-1)^i exp(x^2/2) * d^i/dx^i ( exp(-x^2/2) )
          

The normalized physicist's Hermite polynomial Hn(i,x) is scaled so that

            Integral ( -oo < x < +oo ) exp ( - x^2 ) * Hn(i,x) Hn(j,x) dx = delta ( i, j )
          

The probabilist's Hermite polynomial He(i,x) is related to H(i,x) by:

            He(i,x) = H(i,x/sqrt(2)) / sqrt ( 2^in )
          

The normalized probabilist's Hermite polynomial Hen(i,x) is scaled so
that

            Integral ( -oo < x < +oo ) exp ( - 0.5*x^2 ) * Hen(i,x) Hen(j,x) dx = delta ( i, j )
          

The Hermite function Hf(i,x) is related to H(i,x) by:

            Hf(i,x) = H(i,x) * exp(-x^2/2) / sqrt ( 2^i * i! * sqrt ( pi ) )
          

The Hermite function Hf(i,x) is scaled so that:

            Integral ( -oo < x < +oo ) Hf(i,x) Hf(j,x) dx = delta ( i, j )
          

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**HERMITE\_POLYNOMIAL** is available in [a C
version](../../c_src/hermite_polynomial/hermite_polynomial.html) and [a
C++ version](../../cpp_src/hermite_polynomial/hermite_polynomial.html)
and [a FORTRAN77
version](../../f77_src/hermite_polynomial/hermite_polynomial.html) and
[a FORTRAN90
version](../../f_src/hermite_polynomial/hermite_polynomial.html) and [a
MATLAB version](../../m_src/hermite_polynomial/hermite_polynomial.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BERNSTEIN\_POLYNOMIAL](../../cpp_src/bernstein_polynomial/bernstein_polynomial.html),
a C++ library which evaluates the Bernstein polynomials, useful for
uniform approximation of functions;

[CHEBYSHEV\_POLYOMIAL](../../cpp_src/chebyshev_polynomial/chebyshev_polynomial.html),
a C++ library which considers the Chebyshev polynomials T(i,x), U(i,x),
V(i,x) and W(i,x). Functions are provided to evaluate the polynomials,
determine their zeros, produce their polynomial coefficients, produce
related quadrature rules, project other functions onto these polynomial
bases, and integrate double and triple products of the polynomials.

[GEGENBAUER\_POLYNOMIAL](../../cpp_src/gegenbauer_polynomial/gegenbauer_polynomial.html),
a C++ library which evaluates the Gegenbauer polynomial and associated
functions.

[GEN\_HERMITE\_RULE](../../cpp_src/gen_hermite_rule/gen_hermite_rule.html),
a C++ program which can compute and print a generalized Gauss-Hermite
quadrature rule.

[HERMITE\_PRODUCT\_POLYNOMIAL](../../cpp_src/hermite_product_polynomial/hermite_product_polynomial.html),
a C++ library which defines Hermite product polynomials, creating a
multivariate polynomial as the product of univariate Hermite
polynomials.

[HERMITE\_RULE](../../cpp_src/hermite_rule/hermite_rule.html), a C++
program which can compute and print a Gauss-Hermite quadrature rule.

[HERMITE\_TEST\_INT](../../cpp_src/hermite_test_int/hermite_test_int.html),
a C++ library which defines test integrands for Hermite integrals with
interval (-oo,+oo) and density exp(-x\^2).

[JACOBI\_POLYNOMIAL](../../cpp_src/jacobi_polynomial/jacobi_polynomial.html),
a C++ library which evaluates the Jacobi polynomial and associated
functions.

[LAGUERRE\_POLYNOMIAL](../../cpp_src/laguerre_polynomial/laguerre_polynomial.html),
a C++ library which evaluates the Laguerre polynomial, the generalized
Laguerre polynomials, and the Laguerre function.

[LEGENDRE\_POLYNOMIAL](../../cpp_src/legendre_polynomial/legendre_polynomial.html),
a C++ library which evaluates the Legendre polynomial and associated
functions.

[LEGENDRE\_SHIFTED\_POLYNOMIAL](../../cpp_src/legendre_shifted_polynomial/legendre_shifted_polynomial.html),
a C++ library which evaluates the shifted Legendre polynomial, with
domain \[0,1\].

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

[PCE\_BURGERS](../../cpp_src/pce_burgers/pce_burgers.html), a C++
program which defines and solves a version of the time-dependent viscous
Burgers equation, with uncertain viscosity, using a polynomial chaos
expansion in terms of Hermite polynomials, by Gianluca Iaccarino.

[PCE\_ODE\_HERMITE](../../cpp_src/pce_ode_hermite/pce_ode_hermite.html),
a C++ program which sets up a simple scalar ODE for exponential decay
with an uncertain decay rate, using a polynomial chaos expansion in
terms of Hermite polynomials.

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

-   [hermite\_polynomial.cpp](hermite_polynomial.cpp), the source code.
-   [hermite\_polynomial.hpp](hermite_polynomial.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [hermite\_polynomial\_prb.cpp](hermite_polynomial_prb.cpp), a sample
    calling program.
-   [hermite\_polynomial\_prb\_output.txt](hermite_polynomial_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **H\_INTEGRAL** evaluates the integral of H(i,x).
-   **H\_POLYNOMIAL\_COEFFICIENTS:** coefficients of H(i,x).
-   **H\_POLYNOMIAL\_VALUE** evaluates H(i,x).
-   **H\_POLYNOMIAL\_VALUES:** tabulated values of H(i,x).
-   **H\_POLYNOMIAL\_ZEROS:** zeros of H(i,x).
-   **H\_QUADRATURE\_RULE:** quadrature for H(i,x).
-   **HE\_DOUBLE\_PRODUCT\_INTEGRAL:** integral of
    He(i,x)\*He(j,x)\*e\^(-x\^2/2).
-   **HE\_INTEGRAL** evaluates the integral of He(i,x).
-   **HE\_POLYNOMIAL\_COEFFICIENTS:** coefficients of He(i,x).
-   **HE\_POLYNOMIAL\_VALUE** evaluates He(i,x).
-   **HE\_POLYNOMIAL\_VALUES:** tabulated values of He(i,x).
-   **HE\_POLYNOMIAL\_ZEROS:** zeros of He(i,x).
-   **HE\_QUADRATURE\_RULE:** quadrature for He(i,x).
-   **HE\_TRIPLE\_PRODUCT\_INTEGRAL:** integral of
    He(i,x)\*He(j,x)\*He(k,x)\*e\^(-x\^2/2).
-   **HEN\_EXPONENTIAL\_PRODUCT:** exponential product
    exp(b\*x)\*Hen(i,x)\*Hen(j,x).
-   **HEN\_POLYNOMIAL\_VALUE:** evaluates Hen(i,x).
-   **HEN\_POWER\_PRODUCT:** power products, x\^e\*Hen(i,x)\*Hen(j,x).
-   **HF\_EXPONENTIAL\_PRODUCT:** exponential products,
    exp(b\*x)\*Hf(i,x)\*Hf(j,x).
-   **HF\_FUNCTION\_VALUE** evaluates Hf(i,x).
-   **HF\_FUNCTION\_VALUES:** tabulated values of Hf(i,x).
-   **HF\_POWER\_PRODUCT:** power products x\^e\*Hf(i,x)\*Hf(j,x).
-   **HF\_QUADRATURE\_RULE:** quadrature for Hf(i,x).
-   **HN\_EXPONENTIAL\_PRODUCT:** exponential products
    exp(b\*x)\*Hn(i,x)\*Hn(j,x).
-   **HN\_POLYNOMIAL\_VALUE** evaluates Hn(i,x).
-   **HN\_POWER\_PRODUCT:** power products x\^e\*Hn(i,x)\*Hn(j,x).
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **IMTQLX** diagonalizes a symmetric tridiagonal matrix.
-   **R8\_EPSILON** returns the R8 roundoff unit.
-   **R8\_FACTORIAL** computes the factorial of N.
-   **R8\_FACTORIAL2** computes the double factorial function.
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

*Last revised on 19 October 2014.*
