KRONROD\
Gauss-Kronrod Quadrature Rules {#kronrod-gauss-kronrod-quadrature-rules align="center"}
==============================

------------------------------------------------------------------------

**KRONROD** is a C++ library which computes both a Gauss quadrature rule
of order N, and the Gauss-Kronrod rule of order 2\*N+1.

A pair of Gauss and Gauss-Kronrod quadrature rules are typically used to
provide an error estimate for an integral. The integral is estimated
using the Gauss rule, and then the Gauss-Kronrod rule provides a higher
precision estimate. The difference between the two estimates is taken as
an approximation to the level of error.

The advantage of using a Gauss and Gauss-Kronrod pair is that the second
rule, which uses 2\*N+1 points, actually includes the N points in the
previous Gauss rule. This means that the function values from that
computation can be reused. This efficiency comes at the cost of a mild
reduction in the degree of polynomial precision of the Gauss-Kronrod
rule.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**KRONROD** is available in [a C
version](../../c_src/kronrod/kronrod.md) and [a C++
version](../../master/kronrod/kronrod.md) and [a FORTRAN77
version](../../f77_src/kronrod/kronrod.md) and [a FORTRAN90
version](../../f_src/kronrod/kronrod.md) and [a MATLAB
version](../../m_src/kronrod/kronrod.md) and [a PYTHON
version](../../py_src/kronrod/kronrod.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[INT\_EXACTNESS](../../master/int_exactness/int_exactness.md), a C++
program which checks the polynomial exactness of a 1-dimensional
quadrature rule for a finite interval.

[PATTERSON\_RULE](../../master/patterson_rule/patterson_rule.md), a
C++ program which computes a Gauss-Patterson quadrature rule.

[QUADRATURE\_RULES\_PATTERSON](../../datasets/quadrature_rules_patterson/quadrature_rules_patterson.md),
a dataset directory which contains Gauss-Patterson quadrature rules for
the interval \[-1,+1\].

[QUADRULE](../../master/quadrule/quadrule.md), a C++ library which
defines quadrature rules for 1D domains.

### Reference: {#reference align="center"}

1.  Robert Piessens, Maria Branders,\
    A Note on the Optimal Addition of Abscissas to Quadrature Formulas
    of Gauss and Lobatto,\
    Mathematics of Computation,\
    Volume 28, Number 125, January 1974, pages 135-139.

### Source Code: {#source-code align="center"}

-   [kronrod.cpp](kronrod.cpp), the source code.
-   [kronrod.hpp](kronrod.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [kronrod\_prb.cpp](kronrod_prb.cpp), a sample calling program.
-   [kronrod\_prb\_output.txt](kronrod_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **ABWE1** calculates a Kronrod abscissa and weight.
-   **ABWE2** calculates a Gaussian abscissa and two weights.
-   **KRONROD** adds N+1 points to an N-point Gaussian rule.
-   **R8\_ABS** returns the absolute value of an R8.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 03 August 2010.*
