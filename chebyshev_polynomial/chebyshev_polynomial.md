CHEBYSHEV\_POLYNOMIAL\
Chebyshev Polynomials {#chebyshev_polynomial-chebyshev-polynomials align="center"}
======================

------------------------------------------------------------------------

**CHEBYSHEV\_POLYNOMIAL** is a C++ library which considers the Chebyshev
polynomials T(i,x), U(i,x), V(i,x) and W(i,x). Functions are provided to
evaluate the polynomials, determine their zeros, produce their
polynomial coefficients, produce related quadrature rules, project other
functions onto these polynomial bases, and integrate double and triple
products of the polynomials.

The Chebyshev polynomial T(n,x), or Chebyshev polynomial of the first
kind, may be defined, for 0 &lt;= n, and -1 &lt;= x &lt;= +1 by:

            cos ( t ) = x
            T(n,x) = cos ( n * t )
          

For any value of x, T(n,x) may be evaluated by a three term recurrence:

            T(0,x) = 1
            T(1,x) = x
            T(n+1,x) = 2x T(n,x) - T(n-1,x)
          

The Chebyshev polynomial U(n,x), or Chebyshev polynomial of the second
kind, may be defined, for 0 &lt;= n, and -1 &lt;= x &lt;= +1 by:

            cos ( t ) = x
            U(n,x) = sin ( ( n + 1 ) t ) / sin ( t )
          

For any value of x, U(n,x) may be evaluated by a three term recurrence:

            U(0,x) = 1
            U(1,x) = 2x
            U(n+1,x) = 2x U(n,x) - U(n-1,x)
          

The Chebyshev polynomial V(n,x), or Chebyshev polynomial of the third
kind, may be defined, for 0 &lt;= n, and -1 &lt;= x &lt;= +1 by:

            cos ( t ) = x
            V(n,x) = cos ( (2n+1)*t/2) / cos ( t/2)
          

For any value of x, V(n,x) may be evaluated by a three term recurrence:

            V(0,x) = 1
            V(1,x) = 2x-1
            V(n+1,x) = 2x V(n,x) - V(n-1,x)
          

The Chebyshev polynomial W(n,x), or Chebyshev polynomial of the fourth
kind, may be defined, for 0 &lt;= n, and -1 &lt;= x &lt;= +1 by:

            cos ( t ) = x
            W(n,x) = sin((2*n+1)*t/2)/sin(t/2)
          

For any value of x, W(n,x) may be evaluated by a three term recurrence:

            W(0,x) = 1
            W(1,x) = 2x+1
            W(n+1,x) = 2x W(n,x) - W(n-1,x)
          

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**CHEBYSHEV\_POLYNOMIAL** is available in [a C
version](../../c_src/chebyshev_polynomial/chebyshev_polynomial.html) and
[a C++
version](../../cpp_src/chebyshev_polynomial/chebyshev_polynomial.html)
and [a FORTRAN77
version](../../f77_src/chebyshev_polynomial/chebyshev_polynomial.html)
and [a FORTRAN90
version](../../f_src/chebyshev_polynomial/chebyshev_polynomial.html) and
[a MATLAB
version](../../m_src/chebyshev_polynomial/chebyshev_polynomial.html) and
[a Python
version](../../py_src/chebyshev_polynomial/chebyshev_polynomial.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BERNSTEIN\_POLYNOMIAL](../../cpp_src/bernstein_polynomial/bernstein_polynomial.html),
a C++ library which evaluates the Bernstein polynomials, useful for
uniform approximation of functions;

[CHEBYSHEV](../../cpp_src/chebyshev/chebyshev.html), a C++ library which
computes the Chebyshev interpolant/approximant to a given function over
an interval.

[CHEBYSHEV\_SERIES](../../cpp_src/chebyshev_series/chebyshev_series.html),
a C++ library which can evaluate a Chebyshev series approximating a
function f(x), while efficiently computing one, two or three derivatives
of the series, which approximate f'(x), f''(x), and f'''(x), by Manfred
Zimmer.

[CHEBYSHEV1\_RULE](../../cpp_src/chebyshev1_rule/chebyshev1_rule.html),
a C++ program which computes and prints a Gauss-Chebyshev type 1
quadrature rule.

[CHEBYSHEV2\_RULE](../../cpp_src/chebyshev2_rule/chebyshev2_rule.html),
a C++ program which compute and print a Gauss-Chebyshev type 2
quadrature rule.

[CLAUSEN](../../cpp_src/clausen/clausen.html), a C++ library which
evaluates a Chebyshev interpolant to the Clausen function Cl2(x).

[GEGENBAUER\_POLYNOMIAL](../../cpp_src/gegenbauer_polynomial/gegenbauer_polynomial.html),
a C++ library which evaluates the Gegenbauer polynomial and associated
functions.

[HERMITE\_POLYNOMIAL](../../cpp_src/hermite_polynomial/hermite_polynomial.html),
a C++ library which evaluates the physicist's Hermite polynomial, the
probabilist's Hermite polynomial, the Hermite function, and related
functions.

[INT\_EXACTNESS\_CHEBYSHEV1](../../cpp_src/int_exactness_chebyshev1/int_exactness_chebyshev1.html),
a C++ program which tests the polynomial exactness of Gauss-Chebyshev
type 1 quadrature rules.

[INT\_EXACTNESS\_CHEBYSHEV2](../../cpp_src/int_exactness_chebyshev2/int_exactness_chebyshev2.html),
a C++ program which tests the polynomial exactness of Gauss-Chebyshev
type 2 quadrature rules.

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
3.  John Mason, David Handscomb,\
    Chebyshev Polynomials,\
    CRC Press, 2002,\
    ISBN: 0-8493-035509,\
    LC: QA404.5.M37.
4.  Frank Olver, Daniel Lozier, Ronald Boisvert, Charles Clark,\
    NIST Handbook of Mathematical Functions,\
    Cambridge University Press, 2010,\
    ISBN: 978-0521192255,\
    LC: QA331.N57.
5.  Gabor Szego,\
    Orthogonal Polynomials,\
    American Mathematical Society, 1992,\
    ISBN: 0821810235,\
    LC: QA3.A5.v23.

### Source Code: {#source-code align="center"}

-   [chebyshev\_polynomial.cpp](chebyshev_polynomial.cpp), the source
    code.
-   [chebyshev\_polynomial.hpp](chebyshev_polynomial.hpp), the include
    file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [chebyshev\_polynomial\_prb.cpp](chebyshev_polynomial_prb.cpp), a
    sample calling program.
-   [chebyshev\_polynomial\_prb\_output.txt](chebyshev_polynomial_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **DAXPY** computes constant times a vector plus a vector.
-   **DDOT** forms the dot product of two vectors.
-   **DNRM2** returns the euclidean norm of a vector.
-   **DROT** applies a plane rotation.
-   **DROTG** constructs a Givens plane rotation.
-   **DSCAL** scales a vector by a constant.
-   **DSVDC** computes the singular value decomposition of a real
    rectangular matrix.
-   **DSWAP** interchanges two vectors.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_TO\_STRING** converts an I4 to a C++ string.
-   **I4\_UNIFORM\_AB** returns a scaled pseudorandom I4 between A
    and B.
-   **I4VEC\_MAX** returns the value of the maximum element in an I4VEC.
-   **IMTQLX** diagonalizes a symmetric tridiagonal matrix.
-   **R8\_CHOOSE** computes the binomial coefficient C(N,K) as an R8.
-   **R8\_EPSILON** returns the R8 roundoff unit.
-   **R8\_FACTORIAL** computes the factorial of N.
-   **R8\_HYPER\_2F1** evaluates the hypergeometric function F(A,B,C,X).
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_MOP** returns the I-th power of -1 as an R8 value.
-   **R8\_PSI** evaluates the function Psi(X).
-   **R8\_SIGN** returns the sign of an R8.
-   **R8\_UNIFORM\_AB** returns a scaled pseudorandom R8.
-   **R8MAT\_COPY\_NEW** copies one R8MAT to a "new" R8MAT.
-   **R8MAT\_MM\_NEW** multiplies two matrices.
-   **R8MAT\_MTV\_NEW** multiplies a transposed matrix times a vector.
-   **R8MAT\_MV\_NEW** multiplies a matrix times a vector.
-   **R8MAT\_PRINT** prints an R8MAT.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8POLY\_PRINT** prints out a polynomial.
-   **R8VEC\_DOT\_PRODUCT** computes the dot product of a pair of
    R8VEC's.
-   **R8VEC\_IN\_AB** is TRUE if the entries of an R8VEC are in the
    range \[A,B\].
-   **R8VEC\_LINSPACE\_NEW** creates a vector of linearly spaced values.
-   **R8VEC\_MAX** returns the value of the maximum element in an R8VEC.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC\_UNIFORM\_01\_NEW** returns a new unit pseudorandom R8VEC.
-   **R8VEC\_UNIFORM\_AB\_NEW** returns a scaled pseudorandom R8VEC.
-   **R8VEC2\_PRINT** prints an R8VEC2.
-   **SVD\_SOLVE** solves a linear system in the least squares sense.
-   **T\_MASS\_MATRIX** computes the mass matrix for the Chebyshev T
    polynomial.
-   **T\_MOMENT:** integral ( -1 &lt;= x &lt;= +1 ) x\^e dx / sqrt ( 1 -
    x\^2 ).
-   **T\_POLYNOMIAL** evaluates Chebyshev polynomials T(n,x).
-   **T\_POLYNOMIAL\_01\_VALUES:** values of shifted Chebyshev
    polynomials T01(n,x).
-   **T\_POLYNOMIAL\_AB:** Chebyshev polynomials TAB(n,x) in \[A,B\].
-   **T\_POLYNOMIAL\_AB\_VALUE:** Chebyshev polynomial TAB(n,x) in
    \[A,B\].
-   **T\_POLYNOMIAL\_COEFFICIENTS:** coefficients of the Chebyshev
    polynomial T(n,x).
-   **T\_POLYNOMIAL\_PLOT** plots Chebyshev polynomials T(n,x).
-   **T\_POLYNOMIAL\_VALUE:** returns the single value T(n,x).
-   **T\_POLYNOMIAL\_VALUES** returns values of the Chebyshev polynomial
    T(n,x).
-   **T\_POLYNOMIAL\_ZEROS** returns zeroes of the Chebyshev polynomial
    T(n,x).
-   **T\_PROJECT\_COEFFICIENTS:** function projected onto Chebyshev
    polynomials T(n,x).
-   **T\_PROJECT\_COEFFICIENTS\_AB:** function projected onto TAB(n,x)
    over \[a,b\]
-   **T\_PROJECT\_COEFFICIENTS\_DATA:** project data onto Chebyshev
    polynomials T(n,x).
-   **T\_PROJECT\_VALUE** evaluates an expansion in Chebyshev
    polynomials T(n,x).
-   **T\_PROJECT\_VALUE\_AB** evaluates an expansion in Chebyshev
    polynomials TAB(n,x).
-   **T\_QUADRATURE\_RULE:** quadrature rule for T(n,x).
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TT\_PRODUCT:** evaluate T(i,x)\*T(j,x)
-   **TT\_PRODUCT\_INTEGRAL:** integral (-1&lt;=x&lt;=1)
    T(i,x)\*T(j,x)/sqrt(1-x\^2) dx
-   **TTT\_PRODUCT\_INTEGRAL:** integral (-1&lt;=x&lt;=1)
    T(i,x)\*T(j,x)\*T(k,x)/sqrt(1-x\^2) dx
-   **TU\_PRODUCT:** evaluate T(i,x)\*U(j,x)
-   **U\_MASS\_MATRIX** computes the mass matrix for the Chebyshev U
    polynomial.
-   **U\_MOMENT:** integral ( -1 &lt;= x &lt;= +1 ) x\^e sqrt ( 1 - x\^2
    ) dx.
-   **U\_POLYNOMIAL** evaluates Chebyshev polynomials U(n,x).
-   **U\_POLYNOMIAL\_01\_VALUES:** values of shifted Chebyshev
    polynomials U01(n,x).
-   **U\_POLYNOMIAL\_AB:** Chebyshev polynomials UAB(n,x) in \[A,B\].
-   **U\_POLYNOMIAL\_AB\_VALUE:** Chebyshev polynomial UAB(n,x) in
    \[A,B\].
-   **U\_POLYNOMIAL\_COEFFICIENTS** evaluates coefficients of Chebyshev
    polynomials U(n,x).
-   **U\_POLYNOMIAL\_PLOT** plots Chebyshev polynomials U(n,x).
-   **U\_POLYNOMIAL\_VALUE:** returns the single value U(n,x).
-   **U\_POLYNOMIAL\_VALUES** returns values of Chebyshev polynomials
    U(n,x).
-   **U\_POLYNOMIAL\_ZEROS** returns zeroes of Chebyshev polynomials
    U(n,x).
-   **U\_QUADRATURE\_RULE:** quadrature rule for U(n,x).
-   **UU\_PRODUCT:** evaluate U(i,x)\*U(j,x)
-   **UU\_PRODUCT\_INTEGRAL:** integral (-1&lt;=x&lt;=1)
    U(i,x)\*U(j,x)\*sqrt(1-x\^2) dx
-   **V\_MASS\_MATRIX** computes the mass matrix for the Chebyshev V
    polynomial.
-   **V\_MOMENT:** integral ( -1 &lt;= x &lt;= +1 ) x\^e sqrt(1+x) /
    sqrt(1-x) dx.
-   **V\_POLYNOMIAL** evaluates Chebyshev polynomials V(n,x).
-   **V\_POLYNOMIAL\_01\_VALUES:** values of shifted Chebyshev
    polynomials V01(n,x).
-   **V\_POLYNOMIAL\_AB:** Chebyshev polynomials VAB(n,x) in \[A,B\].
-   **V\_POLYNOMIAL\_AB\_VALUE:** Chebyshev polynomial VAB(n,x) in
    \[A,B\].
-   **V\_POLYNOMIAL\_COEFFICIENTS:** coefficients of the Chebyshev
    polynomial V(n,x).
-   **V\_POLYNOMIAL\_PLOT** plots Chebyshev polynomials V(n,x).
-   **V\_POLYNOMIAL\_VALUE:** returns the single value V(n,x).
-   **V\_POLYNOMIAL\_VALUES** returns values of Chebyshev polynomials
    V(n,x).
-   **V\_POLYNOMIAL\_ZEROS** returns zeroes of the Chebyshev polynomial
    V(n,x).
-   **V\_QUADRATURE\_RULE:** quadrature rule for V(n,x).
-   **VV\_PRODUCT\_INTEGRAL:** integral (-1&lt;=x&lt;=1)
    V(i,x)\*V(j,x)\*sqrt(1+x)/sqrt(1-x) dx
-   **W\_MASS\_MATRIX** computes the mass matrix for the Chebyshev W
    polynomial.
-   **W\_MOMENT:** integral ( -1 &lt;= x &lt;= +1 ) x\^e sqrt(1-x) /
    sqrt(1+x) dx.
-   **W\_POLYNOMIAL** evaluates Chebyshev polynomials W(n,x).
-   **W\_POLYNOMIAL\_01\_VALUES:** values of shifted Chebyshev
    polynomials W01(n,x).
-   **W\_POLYNOMIAL\_AB:** Chebyshev polynomials WAB(n,x) in \[A,B\].
-   **W\_POLYNOMIAL\_AB\_VALUE:** Chebyshev polynomial WAB(n,x) in
    \[A,B\].
-   **W\_POLYNOMIAL\_COEFFICIENTS:** coefficients of the Chebyshev
    polynomial W(n,x).
-   **W\_POLYNOMIAL\_PLOT** plots Chebyshev polynomials W(n,x).
-   **W\_POLYNOMIAL\_VALUE:** returns the single value W(n,x).
-   **W\_POLYNOMIAL\_VALUES** returns values of Chebyshev polynomials
    W(n,x).
-   **W\_POLYNOMIAL\_ZEROS** returns zeroes of the Chebyshev polynomial
    W(n,x).
-   **W\_QUADRATURE\_RULE:** quadrature rule for W(n,x).
-   **WW\_PRODUCT\_INTEGRAL:** integral (-1&lt;=x&lt;=1)
    W(i,x)\*W(j,x)\*sqrt(1-x)/sqrt(1+x) dx

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 21 July 2015.*
