EXACTNESS\
Exactness of Quadrature Rules {#exactness-exactness-of-quadrature-rules align="center"}
=============================

------------------------------------------------------------------------

**EXACTNESS** is a C++ library which investigates the exactness of
quadrature rules that estimate the integral of a function with a
density, such as 1, exp(-x) or exp(-x\^2), over an interval such as
\[-1,+1\], \[0,+oo) or (-oo,+oo).

A 1D quadrature rule estimates I(f), the integral of a function f(x)
over an interval \[a,b\] with density rho(x):

            I(f) = integral ( a < x < b ) f(x) rho(x) dx
          

by a n-point quadrature rule of weights w and points x:

            Q(f) = sum ( 1 <= i <= n ) w(i) f(x(i))
          

Most quadrature rules come in a family of various sizes. A quadrature
rule of size n is said to have exactness p if it is true that the
quadrature estimate is exactly equal to the exact integral for every
monomial (and hence, polynomial) whose degree is p or less.

This program allows the user to specify a quadrature rule, a size n, and
a degree p\_max. It then computes and compares the exact integral and
quadrature estimate for monomials of degree 0 through p\_max, so that
the user can analyze the results.

Common densities include:

-   Chebyshev Type 1 density 1/sqrt(1-x\^2), over \[-1,+1\],
-   Chebyshev Type 2 density sqrt(1-x\^2), over \[-1,+1\].
-   Gegenbauer density (1-x\^2)\^(lambda-1/2), over \[-1,+1\].
-   Hermite (physicist) density 1/sqrt(pi) exp(-x\^2), over (-oo,+oo).
-   Hermite (probabilist) density 1/sqrt(2\*pi) exp(-x\^2/2), over
    (-oo,+oo).
-   Hermite (unit) density 1, over (-oo,+oo).
-   Jacobi density (1-x)\^alpha\*(1+x)\^beta, over \[-1,+1\].
-   Laguerre (standard) density exp(-1), over \[0,+oo).
-   Laguerre (unit) density 1, over \[0,+oo).
-   Legendre density 1, over \[-1,+1\].

Common quadrature rules include:

-   Clenshaw-Curtis quadrature for Legendre density, exactness = n - 1;
-   Fejer Type 1 quadrature for Legendre density, exactness = n - 1;
-   Fejer Type 2 quadrature for Legendre density, exactness = n - 1;
-   Gauss-Chebyshev Type 1 quadrature, exactness = 2 \* n - 1;
-   Gauss-Chebyshev Type 2 quadrature, exactness = 2 \* n - 1;
-   Gauss-Gegenbauer quadrature, exactness = 2 \* n - 1;
-   Gauss-Hermite quadrature, exactness = 2 \* n - 1;
-   Gauss-Laguerre quadrature, exactness = 2 \* n - 1;
-   Gauss-Legendre quadrature, exactness = 2 \* n - 1;

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**EXACTNESS** is available in [a C
version](../../c_src/exactness/exactness.html) and [a C++
version](../../cpp_src/exactness/exactness.html) and [a FORTRAN77
version](../../f77_src/exactness/exactness.html) and [a FORTRAN90
version](../../f_src/exactness/exactness.html) and [a MATLAB
version](../../m_src/exactness/exactness.html) and [a Python
version](../../py_src/exactness/exactness.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[EXACTNESS\_2D](../../cpp_src/exactness_2d/exactness_2d.html), a C++
library which investigates the exactness of 2D quadrature rules that
estimate the integral of a function f(x,y) over a 2D domain.

[HERMITE\_EXACTNESS](../../cpp_src/hermite_exactness/hermite_exactness.html),
a C++ program which tests the monomial exactness of Gauss-Hermite
quadrature rules for estimating the integral of a function with density
exp(-x\^2) over the interval (-oo,+oo).

[LAGUERRE\_EXACTNESS](../../cpp_src/laguerre_exactness/laguerre_exactness.html),
a C++ program which tests the monomial exactness of Gauss-Laguerre
quadrature rules for estimating the integral of a function with density
exp(-x) over the interval \[0,+oo).

[LEGENDRE\_EXACTNESS](../../cpp_src/legendre_exactness/legendre_exactness.html),
a C++ program which tests the monomial exactness of Gauss-Legendre
quadrature rules for estimating the integral of a function with density
1 over the interval \[-1,+1\].

### Reference: {#reference align="center"}

1.  Philip Davis, Philip Rabinowitz,\
    Methods of Numerical Integration,\
    Second Edition,\
    Dover, 2007,\
    ISBN: 0486453391,\
    LC: QA299.3.D28.

### Source Code: {#source-code align="center"}

-   [exactness.cpp](exactness.cpp), the source code.
-   [exactness.hpp](exactness.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [exactness\_prb.cpp](exactness_prb.cpp), a sample calling program.
-   [exactness\_prb.sh](exactness_prb.sh), BASH commands to compile and
    run the sample program.
-   [exactness\_prb\_output.txt](exactness_prb_output.txt), the output
    file.

### List of Routines: {#list-of-routines align="center"}

-   **HERMITE\_EXACTNESS** investigates exactness of Hermite quadrature.
-   **HERMITE\_INTEGRAL** evaluates a monomial Hermite integral.
-   **HERMITE\_MONOMIAL\_QUADRATURE** applies a quadrature rule to a
    monomial.
-   **LAGUERRE\_EXACTNESS** investigates exactness of Laguerre
    quadrature.
-   **LAGUERRE\_INTEGRAL** evaluates a monomial integral associated with
    L(n,x).
-   **LAGUERRE\_MONOMIAL\_QUADRATURE** applies Laguerre quadrature to a
    monomial.
-   **LEGENDRE\_EXACTNESS** investigates exactness of Legendre
    quadrature.
-   **LEGENDRE\_INTEGRAL** evaluates a monomial Legendre integral.
-   **LEGENDRE\_MONOMIAL\_QUADRATURE** applies a quadrature rule to a
    monomial.
-   **R8\_FACTORIAL** computes the factorial of N.
-   **R8\_FACTORIAL2** computes the double factorial function.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 18 May 2014.*
