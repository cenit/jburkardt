JACOBI\_POLYNOMIAL\
Jacobi Polynomials {#jacobi_polynomial-jacobi-polynomials align="center"}
===================

------------------------------------------------------------------------

**JACOBI\_POLYNOMIAL** is a C++ library which evaluates the Jacobi
polynomial.

For a given choice of the parameters a and b, both greater than -1, the
Jacobi polynomials are a set of polynomials which are pairwise
orthogonal with respect to the integral:

            integral (-1<=x<=+1) J(i,a,b,x) J(j,a,b,x) (1-x)^a (1+x)^b dx
          

That is, this integral is 0 unless i = j. J(i,a,b,x) indicates the
Jacobi polynomial of degree i.

The standard Jacobi polynomials can be defined by a three term
recurrence formula that is a bit too ugly to quote here.

It is worth noting that the definition of the Jacobi polynomials is
general enough that it includes some familiar families as special cases:

-   if a = b = 0, we have the Legendre polynomials, P(n,x);
-   if a = b = -1/2, we have the Chebyshev polynomials of the first
    kind, T(n,x);
-   if a = b = 1/2, we have the Chebyshev polynomials of the second
    kind, U(n,x);
-   if a = b, we have the Gegenbauer polynomials;

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**JACOBI\_POLYNOMIAL** is available in [a C
version](../../c_src/jacobi_polynomial/jacobi_polynomial.html) and [a
C++ version](../../cpp_src/jacobi_polynomial/jacobi_polynomial.html) and
[a FORTRAN77
version](../../f77_src/jacobi_polynomial/jacobi_polynomial.html) and [a
FORTRAN90 version](../../f_src/jacobi_polynomial/jacobi_polynomial.html)
and [a MATLAB
version](../../m_src/jacobi_polynomial/jacobi_polynomial.html).

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

[JACOBI\_RULE](../../cpp_src/jacobi_rule/jacobi_rule.html), a C++
program which can compute and print a Gauss-Jacobi quadrature rule.

[LAGUERRE\_POLYNOMIAL](../../cpp_src/laguerre_polynomial/laguerre_polynomial.html),
a C++ library which evaluates the Laguerre polynomial, the generalized
Laguerre polynomials, and the Laguerre function.

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

-   [jacobi\_polynomial.cpp](jacobi_polynomial.cpp), the source code.
-   [jacobi\_polynomial.hpp](jacobi_polynomial.hpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [jacobi\_polynomial\_prb.cpp](jacobi_polynomial_prb.cpp), a sample
    calling program.
-   [jacobi\_polynomial\_prb\_output.txt](jacobi_polynomial_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **IMTQLX** diagonalizes a symmetric tridiagonal matrix.
-   **J\_DOUBLE\_PRODUCT\_INTEGRAL:** integral of
    J(i,x)\*J(j,x)\*(1-x)\^a\*(1+x)\^b.
-   **J\_INTEGRAL** evaluates a monomial integral associated with
    J(n,a,b,x).
-   **J\_POLYNOMIAL** evaluates the Jacobi polynomials J(n,a,b,x).
-   **J\_POLYNOMIAL\_VALUES** returns some values of the Jacobi
    polynomial.
-   **J\_POLYNOMIAL\_ZEROS:** zeros of Jacobi polynomial J(n,a,b,x).
-   **J\_QUADRATURE\_RULE:** Gauss-Jacobi quadrature based on
    J(n,a,b,x).
-   **R8\_FACTORIAL** computes the factorial of N.
-   **R8\_SIGN** returns the sign of an R8.
-   **R8MAT\_PRINT** prints an R8MAT.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC2\_PRINT** prints an R8VEC2.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last modified on 19 April 2012.*
