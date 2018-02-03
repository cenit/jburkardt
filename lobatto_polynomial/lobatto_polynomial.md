LOBATTO\_POLYNOMIAL\
Lobatto Polynomials {#lobatto_polynomial-lobatto-polynomials align="center"}
====================

------------------------------------------------------------------------

**LOBATTO\_POLYNOMIAL** is a C++ library which evaluates the completed
Lobatto polynomial and associated functions.

The completed Lobatto polynomial Lo(n,x) can be defined by:

            Lo(n,x) = n * ( P(n-1,x) - x * P(n,x) )
          

where n is a positive integer called the order, x is a real value
between -1 and +1, and P(n,x) is the Legendre polynomial.

The completed Lobatto polynomial Lo(n,x) has degree n+1, and is zero at
x = -1 and x = +1.

GNUPLOT is used to create images of some of the functions.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**LOBATTO\_POLYNOMIAL** is available in [a C
version](../../c_src/lobatto_polynomial/lobatto_polynomial.md) and [a
C++ version](../../master/lobatto_polynomial/lobatto_polynomial.md)
and [a FORTRAN77
version](../../f77_src/lobatto_polynomial/lobatto_polynomial.md) and
[a FORTRAN90
version](../../f_src/lobatto_polynomial/lobatto_polynomial.md) and [a
MATLAB version](../../m_src/lobatto_polynomial/lobatto_polynomial.md).

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

[GNUPLOT](../../master/gnuplot/gnuplot.md), C++ programs which
illustrate how a program can write data and command files so that
gnuplot can create plots of the program results.

[HERMITE\_POLYNOMIAL](../../master/hermite_polynomial/hermite_polynomial.md),
a C++ library which evaluates the physicist's Hermite polynomial, the
probabilist's Hermite polynomial, the Hermite function, and related
functions.

[JACOBI\_POLYNOMIAL](../../master/jacobi_polynomial/jacobi_polynomial.md),
a C++ library which evaluates the Jacobi polynomial and associated
functions.

[LAGUERRE\_POLYNOMIAL](../../master/laguerre_polynomial/laguerre_polynomial.md),
a C++ library which evaluates the Laguerre polynomial, the generalized
Laguerre polynomial, and the Laguerre function.

[LEGENDRE\_POLYNOMIAL](../../master/legendre_polynomial/legendre_polynomial.md),
a C++ library which evaluates the Legendre polynomial and associated
functions.

[LEGENDRE\_SHIFTED\_POLYNOMIAL](../../master/legendre_shifted_polynomial/legendre_shifted_polynomial.md),
a C++ library which evaluates the shifted Legendre polynomial, with
domain \[0,1\].

[POLPAK](../../master/polpak/polpak.md), a C++ library which
evaluates a variety of mathematical functions.

[TEST\_VALUES](../../master/test_values/test_values.md), a C++
library which supplies test values of various mathematical functions.

### Reference: {#reference align="center"}

1.  Milton Abramowitz, Irene Stegun,\
    Handbook of Mathematical Functions,\
    National Bureau of Standards, 1964,\
    ISBN: 0-486-61272-4,\
    LC: QA47.A34.
2.  Larry Andrews,\
    Special Functions of Mathematics for Engineers,\
    Second Edition,\
    Oxford University Press, 1998,\
    ISBN: 0819426164,\
    LC: QA351.A75.
3.  Daniel Zwillinger, editor,\
    CRC Standard Mathematical Tables and Formulae,\
    30th Edition,\
    CRC Press, 1996.

### Source Code: {#source-code align="center"}

-   [lobatto\_polynomial.cpp](lobatto_polynomial.cpp), the source code.
-   [lobatto\_polynomial.hpp](lobatto_polynomial.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [lobatto\_polynomial\_prb.cpp](lobatto_polynomial_prb.cpp), a sample
    calling program.
-   [lobatto\_polynomial\_prb\_output.txt](lobatto_polynomial_prb_output.txt),
    the output file.

The example program creates data files that can be used by GNUPLOT to
create plots.

-   [test\_value\_commands.txt](test_value_commands.txt)
-   [test\_value\_data.txt](test_value_data.txt)
-   [test\_value.png](test_value.png)
-   [test\_derivative\_commands.txt](test_derivative_commands.txt)
-   [test\_derivative\_data.txt](test_derivative_data.txt)
-   [test\_derivative.png](test_derivative.png)

### List of Routines: {#list-of-routines align="center"}

-   **LOBATTO\_POLYNOMIAL\_DERIVATIVE:** derivative of completed Lobatto
    polynomial.
-   **LOBATTO\_POLYNOMIAL\_DERIVATIVES:** derivatives of completed
    Lobatto polynomials.
-   **LOBATTO\_POLYNOMIAL\_PLOT** plots one or more completed Lobatto
    polynomials.
-   **LOBATTO\_POLYNOMIAL\_VALUE** evaluates the completed Lobatto
    polynomials Lo(n,x).
-   **LOBATTO\_POLYNOMIAL\_VALUES:** values of the completed Lobatto
    polynomials.
-   **R8VEC\_LINSPACE** creates a vector of linearly spaced values.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 20 November 2014.*
