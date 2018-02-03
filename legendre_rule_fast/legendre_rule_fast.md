LEGENDRE\_RULE\_FAST\
Order N Computation of Legendre Quadrature Rule {#legendre_rule_fast-order-n-computation-of-legendre-quadrature-rule align="center"}
===============================================

------------------------------------------------------------------------

**LEGENDRE\_RULE\_FAST** is a C++ program which implements a fast
algorithm for the computation of the points and weights of the
Gauss-Legendre quadrature rule.

The standard algorithm for computing the N points and weights of such a
rule is by Golub and Welsch. It sets up and solves an eigenvalue
problem, whose solution requires work of order N\*N.

By contrast, the fast algorithm, by Glaser, Liu and Rokhlin, can compute
the same information expending work of order N. For quadrature problems
requiring high accuracy, where N might be 100 or more, the fast
algorithm provides a significant improvement in speed.

The Gauss-Legendre quadrature rule is designed for the interval
\[-1,+1\].

The Gauss-Legendre quadrature assumes that the integrand has the form:

            Integral ( -1 <= x <= +1 ) f(x) dx
          

The *standard Gauss-Legendre quadrature rule* is used as follows:

            Integral ( -1 <= x <= +1 ) f(x) dx
          

is to be approximated by

            Sum ( 1 <= i <= order ) w(i) * f(x(i)) 
          

This program allows the user to request that the rule be transformed
from the standard interval \[-1,+1\] to the interval \[a,b\].

### Usage: {#usage align="center"}

> **legendre\_rule\_fast** *n* *a* *b*

where

-   *n* is the order (number of points);
-   *a* is the left endpoint (often -1.0 or 0.0);
-   *b* is the right endpoint (usually 1.0).

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**LEGENDRE\_RULE\_FAST** is available in [a C
version](../../c_src/legendre_rule_fast/legendre_rule_fast.html) and [a
C++ version](../../cpp_src/legendre_rule_fast/legendre_rule_fast.html)
and [a FORTRAN77
version](../../f77_src/legendre_rule_fast/legendre_rule_fast.html) and
[a FORTRAN90
version](../../f_src/legendre_rule_fast/legendre_rule_fast.html) and [a
MATLAB version](../../m_src/legendre_rule_fast/legendre_rule_fast.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CHEBYSHEV1\_RULE](../../cpp_src/chebyshev1_rule/chebyshev1_rule.html),
a C++ program which can compute and print a Gauss-Chebyshev type 1
quadrature rule.

[CHEBYSHEV2\_RULE](../../cpp_src/chebyshev2_rule/chebyshev2_rule.html),
is a C++ program which can compute and print a Gauss-Chebyshev type 2
quadrature rule.

[CLENSHAW\_CURTIS\_RULE](../../cpp_src/clenshaw_curtis_rule/clenshaw_curtis_rule.html)
is a C++ program which defines a Clenshaw Curtis quadrature rule.

[GEGENBAUER\_RULE](../../cpp_src/gegenbauer_rule/gegenbauer_rule.html),
a C++ program which can compute and print a Gauss-Gegenbauer quadrature
rule.

[GEN\_HERMITE\_RULE](../../cpp_src/gen_hermite_rule/gen_hermite_rule.html),
a C++ program which can compute and print a generalized Gauss-Hermite
quadrature rule.

[GEN\_LAGUERRE\_RULE](../../cpp_src/gen_laguerre_rule/gen_laguerre_rule.html),
a C++ program which can compute and print a generalized Gauss-Laguerre
quadrature rule.

[HERMITE\_RULE](../../cpp_src/hermite_rule/hermite_rule.html), a C++
program which can compute and print a Gauss-Hermite quadrature rule.

[INT\_EXACTNESS\_LEGENDRE](../../cpp_src/int_exactness_legendre/int_exactness_legendre.html),
a C++ program which checks the polynomial exactness of a Gauss-Legendre
quadrature rule.

[JACOBI\_RULE](../../cpp_src/jacobi_rule/jacobi_rule.html), a C++
program which can compute and print a Gauss-Jacobi quadrature rule.

[LAGUERRE\_RULE](../../cpp_src/laguerre_rule/laguerre_rule.html), a C++
program which can compute and print a Gauss-Laguerre quadrature rule.

[LEGENDRE\_RULE](../../cpp_src/legendre_rule/legendre_rule.html), is a
C++ program which can compute and print a Gauss-Legendre quadrature
rule.

[PATTERSON\_RULE](../../cpp_src/patterson_rule/patterson_rule.html), is
a C++ program which computes a Gauss-Patterson quadrature rule.

[PRODUCT\_RULE](../../cpp_src/product_rule/product_rule.html), a C++
program which constructs a product rule from 1D factor rules.

[QUADRATURE\_RULES\_LEGENDRE](../../datasets/quadrature_rules_legendre/quadrature_rules_legendre.html),
a dataset directory which contains triples of files defining standard
Gauss-Legendre quadrature rules.

[QUADRULE](../../cpp_src/quadrule/quadrule.html), a C++ library which
defines 1-dimensional quadrature rules.

[SANDIA\_RULES](../../cpp_src/sandia_rules/sandia_rules.html), a C++
library which produces 1D quadrature rules of Chebyshev, Clenshaw
Curtis, Fejer 2, Gegenbauer, generalized Hermite, generalized Laguerre,
Hermite, Jacobi, Laguerre, Legendre and Patterson types.

[TANH\_SINH\_RULE](../../cpp_src/tanh_sinh_rule/tanh_sinh_rule.html), a
C++ program which computes and writes out a tanh-sinh quadrature rule of
given order.

### Reference: {#reference align="center"}

1.  Andreas Glaser, Xiangtao Liu, Vladimir Rokhlin,\
    A fast algorithm for the calculation of the roots of special
    functions,\
    SIAM Journal on Scientific Computing,\
    Volume 29, Number 4, pages 1420-1438, 2007.

### Source Code: {#source-code align="center"}

-   [legendre\_rule\_fast.cpp](legendre_rule_fast.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

The following files were created by the command **legendre\_rule\_fast
15 0.0 2.0**:

-   [leg\_o15\_r.txt](leg_o15_r.txt), the region file.
-   [leg\_o15\_w.txt](leg_o15_w.txt), the weight file.
-   [leg\_o15\_x.txt](leg_o15_x.txt), the abscissa file.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for LEGENDRE\_RULE.
-   **I4\_TO\_STRING** converts an I4 to a C++ string.
-   **LEGENDRE\_COMPUTE\_GLR:** Legendre quadrature by the
    Glaser-Liu-Rokhlin method.
-   **LEGENDRE\_COMPUTE\_GLR0** gets a starting value for the fast
    algorithm.
-   **LEGENDRE\_COMPUTE\_GLR1** gets the complete set of Legendre points
    and weights.
-   **LEGENDRE\_COMPUTE\_GLR2** finds the first real root.
-   **LEGENDRE\_HANDLE** computes the requested Gauss-Legendre rule and
    outputs it.
-   **R8MAT\_WRITE** writes an R8MAT file with no header.
-   **RESCALE** rescales a Legendre quadrature rule from \[-1,+1\] to
    \[A,B\].
-   **RK2\_LEG** advances the value of X(T) using a Runge-Kutta method.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TS\_MULT** evaluates a polynomial.
-   **WTIME** estimates the elapsed wall clock time.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 22 October 2009.*
