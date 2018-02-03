BERNSTEIN\_POLYNOMIAL\
The Bernstein Polynomials {#bernstein_polynomial-the-bernstein-polynomials align="center"}
=========================

------------------------------------------------------------------------

**BERNSTEIN\_POLYNOMIAL** is a C++ library which evaluates the Bernstein
polynomials.

A Bernstein polynomial BP(n,x) of degree n is a linear combination of
the (n+1) Bernstein basis polynomials B(n,x) of degree n:

            BP(n,x) = sum ( 0 <= k <= n ) CP(n,k) * B(n,k)(x).
          

For 0 &lt;= k &lt;= n, the k-th Bernstein basis polynomial of degree n
is:

            B(n,k)(x) = C(n,k) * (1-x)^(n-k) * x^k
          

where C(n,k) is the combinatorial function "N choose K" defined by

            C(n,k) = n! / k! / ( n - k )!
          

For an arbitrary value of n, the set B(n,k) forms a basis for the space
of polynomials of degree n or less.

Every basis polynomial B(n,k) is nonnegative in \[0,1\], and may be zero
only at the endpoints.

Except for the case n = 0, the basis polynomial B(n,k)(x) has a unique
maximum value at

            x = k/n.
          

For any point x, (including points outside \[0,1\]), the basis
polynomials for an arbitrary value of n sum to 1:

            sum ( 1 <= k <= n ) B(n,k)(x) = 1
          

For 0 &lt; n, the Bernstein basis polynomial can be written as a
combination of two lower degree basis polynomials:

            B(n,k)(x) = ( 1 - x ) * B(n-1,k)(x) + x * B(n-1,k-1)(x) +
          

where, if k is 0, the factor B(n-1,k-1)(x) is taken to be 0, and if k is
n, the factor B(n-1,k)(x) is taken to be 0.

A Bernstein basis polynomial can be written as a combination of two
higher degree basis polynomials:

            B(n,k)(x) = ( (n+1-k) * B(n+1,k)(x) + (k+1) * B(n+1,k+1)(x) ) / ( n + 1 )
          

The derivative of B(n,k)(x) can be written as:

            d/dx B(n,k)(x) = n * B(n-1,k-1)(x) - B(n-1,k)(x)
          

A Bernstein polynomial can be written in terms of the standard power
basis:

            B(n,k)(x) = sum ( k <= i <= n ) (-1)^(i-k) * C(n,k) * C(i,k) * x^i
          

A power basis monomial can be written in terms of the Bernstein basis of
degree n where k &lt;= n:

            x^k = sum ( k-1 <= i <= n-1 ) C(i,k) * B(n,k)(x) / C(n,k)
          

Over the interval \[0,1\], the n-th degree Bernstein approximation
polynomial to a function f(x) is defined by

            BA(n,f)(x) = sum ( 0 <= k <= n ) f(k/n) * B(n,k)(x)
          

As a function of n, the Bernstein approximation polynomials form a
sequence that slowly, but uniformly, converges to f(x) over \[0,1\].

By a simple linear process, the Bernstein basis polynomials can be
shifted to an arbitrary interval \[a,b\], retaining their properties.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**BERNSTEIN\_POLYNOMIAL** is available in [a C
version](../../c_src/bernstein_polynomial/bernstein_polynomial.html) and
[a C++
version](../../cpp_src/bernstein_polynomial/bernstein_polynomial.html)
and [a FORTRAN77
version](../../f77_src/bernstein_polynomial/bernstein_polynomial.html)
and [a FORTRAN90
version](../../f_src/bernstein_polynomial/bernstein_polynomial.html) and
[a MATLAB
version](../../m_src/bernstein_polynomial/bernstein_polynomial.html) and
[a Python
version](../../py_src/bernstein_polynomial/bernstein_polynomial.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CHEBYSHEV](../../cpp_src/chebyshev/chebyshev.html), a C++ library which
computes the Chebyshev interpolant/approximant to a given function over
an interval.

[DIVDIF](../../cpp_src/divdif/divdif.html), a C++ library which uses
divided differences to interpolate data.

[GEGENBAUER\_POLYNOMIAL](../../cpp_src/gegenbauer_polynomial/gegenbauer_polynomial.html),
a C++ library which evaluates the Gegenbauer polynomial and associated
functions.

[HERMITE](../../cpp_src/hermite/hermite.html), a C++ library which
computes the Hermite interpolant, a polynomial that matches function
values and derivatives.

[HERMITE\_CUBIC](../../cpp_src/hermite_cubic/hermite_cubic.html), a C++
library which can compute the value, derivatives or integral of a
Hermite cubic polynomial, or manipulate an interpolating function made
up of piecewise Hermite cubic polynomials.

[LOBATTO\_POLYNOMIAL](../../cpp_src/lobatto_polynomial/lobatto_polynomial.html),
a C++ library which evaluates Lobatto polynomials, similar to Legendre
polynomials except that they are zero at both endpoints.

[SPLINE](../../cpp_src/spline/spline.html), a C++ library which
constructs and evaluates spline interpolants and approximants.

[TEST\_APPROX](../../cpp_src/test_approx/test_approx.html), a C++
library which defines test problems for approximation, provided as a set
of (x,y) data.

[TEST\_INTERP\_1D](../../cpp_src/test_interp_1d/test_interp_1d.html), a
C++ library which defines test problems for interpolation of data y(x),
depending on a 1D argument.

### Reference: {#reference align="center"}

1.  Kenneth Joy,\
    "Bernstein Polynomials",\
    On-Line Geometric Modeling Notes,\
    idav.ucdavis.edu/education/CAGDNotes/Bernstein-Polynomials.pdf
2.  David Kahaner, Cleve Moler, Steven Nash,\
    Numerical Methods and Software,\
    Prentice Hall, 1989,\
    ISBN: 0-13-627258-4,\
    LC: TA345.K34.
3.  Josef Reinkenhof,\
    Differentiation and integration using Bernstein's polynomials,\
    International Journal of Numerical Methods in Engineering,\
    Volume 11, Number 10, 1977, pages 1627-1630.

### Source Code: {#source-code align="center"}

-   [bernstein\_polynomial.cpp](bernstein_polynomial.cpp), the source
    code.
-   [bernstein\_polynomial.hpp](bernstein_polynomial.hpp), the include
    file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [bernstein\_polynomial\_prb.cpp](bernstein_polynomial_prb.cpp), a
    sample calling program.
-   [bernstein\_polynomial\_prb\_output.txt](bernstein_polynomial_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **BERNSTEIN\_MATRIX** returns the Bernstein matrix.
-   **BERNSTEIN\_MATRIX\_DETERMINANT** returns the determinant of the
    BERNSTEIN matrix.
-   **BERNSTEIN\_MATRIX\_INVERSE** returns the inverse Bernstein matrix.
-   **BERNSTEIN\_POLY\_01** evaluates the Bernstein polynomials based in
    \[0,1\].
-   **BERNSTEIN\_POLY\_01\_VALUES** returns some values of the Bernstein
    polynomials.
-   **BERNSTEIN\_POLY\_AB** evaluates at X the Bernstein polynomials
    based in \[A,B\].
-   **BERNSTEIN\_POLY\_AB\_APPROX:** Bernstein approximant to F(X) on
    \[A,B\].
-   **BERNSTEIN\_VANDERMONDE** returns the Bernstein Vandermonde matrix.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **R8\_CHOOSE** computes the binomial coefficient C(N,K) as an R8.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_MOP** returns the I-th power of -1 as an R8 value.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **R8MAT\_IS\_IDENTITY** determines if an R8MAT is the identity.
-   **R8MAT\_MM\_NEW** multiplies two matrices.
-   **R8MAT\_MV\_NEW** multiplies a matrix times a vector.
-   **R8MAT\_NORM\_FRO** returns the Frobenius norm of an R8MAT.
-   **R8MAT\_PRINT** prints an R8MAT.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8VEC\_DOT\_PRODUCT** computes the dot product of a pair of
    R8VEC's.
-   **R8VEC\_LINSPACE\_NEW** creates a vector of linearly spaced values.
-   **R8VEC\_SUM** returns the sum of an R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 27 January 2016.*
