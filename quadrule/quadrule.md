QUADRULE\
Quadrature Rules {#quadrule-quadrature-rules align="center"}
================

------------------------------------------------------------------------

**QUADRULE** is a C++ library which sets up a variety of quadrature
rules, used to approximate the integral of a function over various
domains.

QUADRULE returns the abscissas and weights for a variety of one
dimensional quadrature rules for approximating the integral of a
function. The best rule is generally Gauss-Legendre quadrature, but
other rules offer special features, including the ability to handle
certain weight functions, to approximate an integral on an infinite
integration region, or to estimate the approximation error.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**QUADRULE** is available in [a C
version](../../c_src/quadrule/quadrule.html) and [a C++
version](../../cpp_src/quadrule/quadrule.html) and [a FORTRAN77
version](../../f77_src/quadrule/quadrule.html) and [a FORTRAN90
version](../../f_src/quadrule/quadrule.html) and [a MATLAB
version](../../m_src/quadrule/quadrule.html) and [a Python
version](../../py_src/quadrule/quadrule.html).

### Related Programs: {#related-programs align="center"}

[ALPERT\_RULE](../../cpp_src/alpert_rule/alpert_rule.html), a C++
library which can set up an Alpert quadrature rule for functions which
are regular, log(x) singular, or 1/sqrt(x) singular.

[CLENSHAW\_CURTIS\_RULE](../../cpp_src/clenshaw_curtis_rule/clenshaw_curtis_rule.html),
a C++ program which defines a Clenshaw Curtis quadrature rule.

[KRONROD](../../cpp_src/kronrod/kronrod.html), a C++ library which can
compute a Gauss and Gauss-Kronrod pair of quadrature rules of arbitrary
order, by Robert Piessens, Maria Branders.

[LINE\_FELIPPA\_RULE](../../cpp_src/line_felippa_rule/line_felippa_rule.html),
a C++ library which returns the points and weights of a Felippa
quadrature rule over the interior of a line segment in 1D.

[LINE\_NCC\_RULE](../../cpp_src/line_ncc_rule/line_ncc_rule.html), a C++
library which computes a Newton Cotes Closed (NCC) quadrature rule for
the line, that is, for an interval of the form \[A,B\], using equally
spaced points which include the endpoints.

[LINE\_NCO\_RULE](../../cpp_src/line_nco_rule/line_nco_rule.html), a C++
library which computes a Newton Cotes Open (NCO) quadrature rule, using
equally spaced points, over the interior of a line segment in 1D.

[QUADMOM](../../cpp_src/quadmom/quadmom.html), a C++ library which
computes a Gaussian quadrature rule for a weight function rho(x) based
on the Golub-Welsch procedure that only requires knowledge of the
moments of rho(x).

[QUADRATURE\_RULES](../../datasets/quadrature_rules/quadrature_rules.html),
a dataset directory which contains sets of files that define quadrature
rules over various 1D intervals or multidimensional hypercubes.

[QUADRATURE\_TEST](../../m_src/quadrature_test/quadrature_test.html), a
MATLAB program which reads the definition of a multidimensional
quadrature rule from three files, applies the rule to a number of test
integrals, and prints the results.

[TEST\_INT](../../cpp_src/test_int/test_int.html), a C++ library which
defines test integrands for 1D quadrature rules.

### Source Code: {#source-code align="center"}

-   [quadrule.cpp](quadrule.cpp), the source code;
-   [quadrule.hpp](quadrule.hpp), the include file;

### Examples and Tests: {#examples-and-tests align="center"}

-   [quadrule\_prb.cpp](quadrule_prb.cpp), the calling program;
-   [quadrule\_prb\_output.txt](quadrule_prb_output.txt), the output
    file.

### List of Routines: {#list-of-routines align="center"}

-   **CHEBYSHEV\_SET** sets abscissas and weights for Chebyshev
    quadrature.
-   **CHEBYSHEV1\_COMPUTE** computes a Gauss-Chebyshev type 1 quadrature
    rule.
-   **CHEBYSHEV1\_INTEGRAL** evaluates a monomial Chebyshev type 1
    integral.
-   **CHEBYSHEV1\_SET** sets a Chebyshev Type 1 quadrature rule.
-   **CHEBYSHEV2\_COMPUTE** computes a Gauss-Chebyshev type 2 quadrature
    rule.
-   **CHEBYSHEV2\_INTEGRAL** evaluates a monomial Chebyshev type 2
    integral.
-   **CHEBYSHEV2\_SET** sets a Chebyshev Type 2 quadrature rule.
-   **CHEBYSHEV3\_COMPUTE** computes a Gauss-Chebyshev type 3 quadrature
    rule.
-   **CHEBYSHEV3\_INTEGRAL** evaluates a monomial Chebyshev type 3
    integral.
-   **CHEBYSHEV3\_SET** sets a Chebyshev Type 3 quadrature rule.
-   **CLENSHAW\_CURTIS\_COMPUTE** computes a Clenshaw Curtis quadrature
    rule.
-   **CLENSHAW\_CURTIS\_SET** sets a Clenshaw-Curtis quadrature rule.
-   **FEJER1\_COMPUTE** computes a Fejer type 1 quadrature rule.
-   **FEJER1\_SET** sets abscissas and weights for Fejer type 1
    quadrature.
-   **FEJER2\_COMPUTE** computes a Fejer type 2 quadrature rule.
-   **FEJER2\_SET** sets abscissas and weights for Fejer type 2
    quadrature.
-   **GEGENBAUER\_INTEGRAL** evaluates the integral of a monomial with
    Gegenbauer weight.
-   **GEGENBAUER\_SS\_COMPUTE** computes a Gauss-Gegenbauer quadrature
    rule.
-   **GEGENBAUER\_SS\_RECUR:** value and derivative of a Gegenbauer
    polynomial.
-   **GEGENBAUER\_SS\_ROOT** improves a root of a Gegenbauer polynomial.
-   **GEN\_HERMITE\_DR\_COMPUTE** computes a generalized Gauss-Hermite
    rule.
-   **GEN\_HERMITE\_EK\_COMPUTE** computes a generalized Gauss-Hermite
    quadrature rule.
-   **GEN\_HERMITE\_INTEGRAL** evaluates a monomial generalized Hermite
    integral.
-   **GEN\_LAGUERRE\_EK\_COMPUTE:** generalized Gauss-Laguerre
    quadrature rule.
-   **GEN\_LAGUERRE\_INTEGRAL** evaluates a monomial generalized
    Laguerre integral.
-   **GEN\_LAGUERRE\_SS\_COMPUTE** computes a generalized Gauss-Laguerre
    quadrature rule.
-   **GEN\_LAGUERRE\_SS\_RECUR** evaluates a generalized Laguerre
    polynomial.
-   **GEN\_LAGUERRE\_SS\_ROOT** improves a root of a generalized
    Laguerre polynomial.
-   **HERMITE\_EK\_COMPUTE** computes a Gauss-Hermite quadrature rule.
-   **HERMITE\_GK16\_SET** sets a Hermite Genz-Keister 16 rule.
-   **HERMITE\_GK18\_SET** sets a Hermite Genz-Keister 18 rule.
-   **HERMITE\_GK22\_SET** sets a Hermite Genz-Keister 22 rule.
-   **HERMITE\_GK24\_SET** sets a Hermite Genz-Keister 24 rule.
-   **HERMITE\_INTEGRAL** evaluates a monomial Hermite integral.
-   **HERMITE\_PROBABILIST\_SET:** probabilist Hermite quadrature.
-   **HERMITE\_SET** sets abscissas and weights for Hermite quadrature.
-   **HERMITE\_1\_SET** sets abscissas and weights for Hermite
    quadrature.
-   **HERMITE\_SS\_COMPUTE** computes a Gauss-Hermite quadrature rule.
-   **HERMITE\_SS\_RECUR** finds the value and derivative of a Hermite
    polynomial.
-   **HERMITE\_SS\_ROOT** improves an approximate root of a Hermite
    polynomial.
-   **I4\_FACTORIAL2** computes the double factorial function.
-   **I4\_MIN** returns the smaller of two I4's.
-   **I4\_POWER** returns the value of I\^J.
-   **IMTQLX** diagonalizes a symmetric tridiagonal matrix.
-   **JACOBI\_EK\_COMPUTE:** Elhay-Kautsky method for Gauss-Jacobi
    quadrature rule.
-   **JACOBI\_INTEGRAL** evaluates the integral of a monomial with
    Jacobi weight.
-   **JACOBI\_SS\_COMPUTE** computes a Gauss-Jacobi quadrature rule.
-   **JACOBI\_SS\_RECUR** finds the value and derivative of a Jacobi
    polynomial.
-   **JACOBI\_SS\_ROOT** improves an approximate root of a Jacobi
    polynomial.
-   **KRONROD\_SET** sets abscissas and weights for Gauss-Kronrod
    quadrature.
-   **LAGUERRE\_EK\_COMPUTE:** Laguerre quadrature rule by the
    Elhay-Kautsky method.
-   **LAGUERRE\_INTEGRAL** evaluates a monomial Laguerre integral.
-   **LAGUERRE\_SET** sets abscissas and weights for Laguerre
    quadrature.
-   **LAGUERRE\_1\_SET** sets abscissas and weights for Laguerre
    quadrature.
-   **LAGUERRE\_SS\_COMPUTE** computes a Gauss-Laguerre quadrature rule.
-   **LAGUERRE\_SS\_RECUR** evaluates a Laguerre polynomial.
-   **LAGUERRE\_SS\_ROOT** improves a root of a Laguerre polynomial.
-   **LAGUERRE\_SUM** carries out Laguerre quadrature over \[ A, +oo ).
-   **LEGENDRE\_DR\_COMPUTE:** Gauss-Legendre quadrature by
    Davis-Rabinowitz method.
-   **LEGENDRE\_EK\_COMPUTE:** Legendre quadrature rule by the
    Elhay-Kautsky method.
-   **LEGENDRE\_INTEGRAL** evaluates a monomial Legendre integral.
-   **LEGENDRE\_RECUR** finds the value and derivative of a Legendre
    polynomial.
-   **LEGENDRE\_SET** sets abscissas and weights for Gauss-Legendre
    quadrature.
-   **LOBATTO\_COMPUTE** computes a Lobatto quadrature rule.
-   **LOBATTO\_SET** sets abscissas and weights for Lobatto quadrature.
-   **NC\_COMPUTE\_WEIGHTS** computes weights for a Newton-Cotes
    quadrature rule.
-   **NCC\_COMPUTE** computes a Newton-Cotes closed quadrature rule.
-   **NCC\_SET** sets abscissas and weights for closed Newton-Cotes
    quadrature.
-   **NCO\_COMPUTE** computes a Newton-Cotes Open quadrature rule.
-   **NCO\_SET** sets abscissas and weights for open Newton-Cotes
    quadrature.
-   **NCOH\_COMPUTE** computes a Newton-Cotes "open half" quadrature
    rule.
-   **NCOH\_SET** sets abscissas and weights for Newton-Cotes "open
    half" rules.
-   **PATTERSON\_SET** sets abscissas and weights for Gauss-Patterson
    quadrature.
-   **PSI\_VALUES** returns some values of the Psi or Digamma function.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_EPSILON** returns the R8 roundoff unit.
-   **R8\_FACTORIAL** computes the factorial of N.
-   **R8\_FACTORIAL2** computes the double factorial function.
-   **R8\_GAMMA** evaluates Gamma(X) for a real argument.
-   **R8\_GAMMA\_LOG** calculates the natural logarithm of GAMMA ( X )
    for positive X.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8\_HYPER\_2F1** evaluates the hypergeometric function
    2F1(A,B,C,X).
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_PSI** evaluates the function Psi(X).
-   **R8\_SIGN** returns the sign of an R8.
-   **R8VEC\_COPY** copies an R8VEC.
-   **R8VEC\_DOT\_PRODUCT** computes the dot product of a pair of
    R8VEC's.
-   **R8VEC\_LINSPACE** creates a vector of linearly spaced values.
-   **R8VEC\_LINSPACE\_NEW** creates a vector of linearly spaced values.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC\_REVERSE** reverses the elements of an R8VEC.
-   **RADAU\_COMPUTE** computes a Radau quadrature rule.
-   **RADAU\_SET** sets abscissas and weights for Radau quadrature.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 21 June 2015.*
