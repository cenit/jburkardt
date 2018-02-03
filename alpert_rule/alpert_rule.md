ALPERT\_RULE\
Alpert Quadrature for regular, log singular, and power singular functions {#alpert_rule-alpert-quadrature-for-regular-log-singular-and-power-singular-functions align="center"}
=========================================================================

------------------------------------------------------------------------

**ALPERT\_RULE** is a C++ library which has tabulated values that define
Alpert quadrature rules of a number of orders of accuracy for functions
that are regular, log singular, or power singular.

The rules defined here assume that the integral is to be taken over the
interval \[0,1\]. The interval is divided into N+1 intervals. The
leftmost and rightmost intervals are handled in a special way, depending
on whether a particular kind of singularity is expected.

A singularity may exist at the left endpoint, x = 0. The cases are:

-   *regular*, no singularity;
-   *power*, the integrand has the form g(x)=x\^(-1/2)\*phi(x)+psi(x);
-   *log*, the integrand has the form g(x)=phi(x)\*log(x)+psi(x);

In case one, the regular Alpert rule is used in both end intervals. In
case two, the power singular Alpert rule is used in the leftmost
interval. In case three, the log singular Alpert rule is used in the
leftmost interval.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**ALPERT\_RULE** is available in [a C
version](../../c_src/alpert_rule/alpert_rule.md) and [a C++
version](../../master/alpert_rule/alpert_rule.md) and [a FORTRAN90
version](../../f_src/alpert_rule/alpert_rule.md) and [a MATLAB
version](../../m_src/alpert_rule/alpert_rule.md) and [a Python
version](../../py_src/alpert_rule/alpert_rule.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[LINE\_FEKETE\_RULE](../../master/line_fekete_rule/line_fekete_rule.md),
a C++ library which returns the points and weights of a Fekete
quadrature rule over the interior of a line segment in 1D.

[LINE\_FELIPPA\_RULE](../../master/line_felippa_rule/line_felippa_rule.md),
a C++ library which returns the points and weights of a Felippa
quadrature rule over the interior of a line segment in 1D.

[LINE\_NCC\_RULE](../../master/line_ncc_rule/line_ncc_rule.md), a C++
library which computes a Newton Cotes Closed (NCC) quadrature rule for
the line, that is, for an interval of the form \[A,B\], using equally
spaced points which include the endpoints.

[LINE\_NCO\_RULE](../../master/line_nco_rule/line_nco_rule.md), a C++
library which computes a Newton Cotes Open (NCO) quadrature rule, using
equally spaced points, over the interior of a line segment in 1D.

[QUADRATURE\_WEIGHTS\_VANDERMONDE](../../master/quadrature_weights_vandermonde/quadrature_weights_vandermonde.md),
a C++ library which computes the weights of a quadrature rule using the
Vandermonde matrix, assuming that the points have been specified.

### Reference: {#reference align="center"}

1.  Bradley Alpert,\
    Hybrid Gauss-Trapezoidal Quadrature Rules,\
    SIAM Journal on Scientific Computing,\
    Volume 20, Number 5, pages 1551-1584, 1999.

### Source Code: {#source-code align="center"}

-   [alpert\_rule.cpp](alpert_rule.cpp), the source code.
-   [alpert\_rule.hpp](alpert_rule.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [alpert\_rule\_prb.cpp](alpert_rule_prb.cpp), a sample calling
    program.
-   [alpert\_rule\_prb\_output.txt](alpert_rule_prb_output.txt), the
    output file.

### List of Routines: {#list-of-routines align="center"}

-   **A\_LOG** returns the value of A for an Alpert rule for log
    singular functions.
-   **A\_POWER** returns A for an Alpert rule for power singular
    functions.
-   **A\_REGULAR** returns the value of A for an Alpert rule for regular
    functions.
-   **INTEGRAL\_LOG** evaluates the test integral with logarithmic
    singularity.
-   **INTEGRAL\_POWER** evaluates the test integral with power
    singularity.
-   **INTEGRAL\_REGULAR** evaluates the regular test integral.
-   **INTEGRAND\_LOG** evaluates the test integrand with logarithmic
    singularity.
-   **INTEGRAND\_POWER** evaluates the test integrand with power
    singularity.
-   **INTEGRAND\_REGULAR** evaluates the regular test integrand.
-   **J\_LOG** returns the value of J for an Alpert rule for log
    singular functions.
-   **J\_POWER** returns J for an Alpert rule for power singular
    functions.
-   **J\_REGULAR** returns the value of J for an Alpert rule for regular
    functions.
-   **NUM\_LOG** returns the number of Alpert rules for log singular
    functions.
-   **NUM\_POWER** returns the number of Alpert rules for power singular
    functions.
-   **NUM\_REGULAR** returns the number of Alpert rules for regular
    functions.
-   **ORDER\_LOG** returns the order of an Alpert rule for log singular
    functions.
-   **ORDER\_POWER** returns the order of an Alpert rule for power
    singular functions.
-   **ORDER\_REGULAR** returns the order of an Alpert rule for regular
    functions.
-   **R8VEC\_LINSPACE** creates a vector of linearly spaced values.
-   **R8VEC\_UNIFORM\_01** returns a unit pseudorandom R8VEC.
-   **RULE\_LOG** returns an Alpert rule for log singular functions.
-   **RULE\_POWER** returns an Alpert rule for power singular functions.
-   **RULE\_REGULAR** returns an Alpert rule for regular functions.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 04 December 2015.*
