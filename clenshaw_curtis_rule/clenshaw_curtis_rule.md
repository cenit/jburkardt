CLENSHAW\_CURTIS\_RULE\
Clenshaw Curtis Quadrature Rules {#clenshaw_curtis_rule-clenshaw-curtis-quadrature-rules align="center"}
================================

------------------------------------------------------------------------

**CLENSHAW\_CURTIS\_RULE** is a C++ program which generates a Clenshaw
Curtis quadrature rule based on user input.

The rule is written to three files for easy use as input to other
programs.

The *standard Clenshaw Curtis quadrature rule* is used as follows:

            Integral ( A <= x <= B ) f(x) dx
          

is to be approximated by

            Sum ( 1 <= i <= order ) w(i) * f(x(i))
          

### Usage: {#usage align="center"}

> **clenshaw\_curtis\_rule** *order* *a* *b* *filename*

where

-   *order* is the number of points in the quadrature rule;
-   *a* is the left endpoint;
-   *b* is the right endpoint;
-   *filename* specifies the output filenames: name*file***\_w.txt**,
    *filename***\_x.txt**, and *filename***\_r.txt**, containing the
    weights, abscissas, and interval limits.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**CLENSHAW\_CURTIS\_RULE** is available in [a C
version](../../c_src/clenshaw_curtis_rule/clenshaw_curtis_rule.md) and
[a C++
version](../../master/clenshaw_curtis_rule/clenshaw_curtis_rule.md)
and [a FORTRAN77
version](../../f77_src/clenshaw_curtis_rule/clenshaw_curtis_rule.md)
and [a FORTRAN90
version](../../f_src/clenshaw_curtis_rule/clenshaw_curtis_rule.md) and
[a MATLAB
version](../../m_src/clenshaw_curtis_rule/clenshaw_curtis_rule.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CCN\_RULE](../../master/ccn_rule/ccn_rule.md), a C++ program which
defines a nested Clenshaw Curtis quadrature rule.

[CHEBYSHEV1\_RULE](../../master/chebyshev1_rule/chebyshev1_rule.md),
a C++ program which can compute and print a Gauss-Chebyshev type 1
quadrature rule.

[CHEBYSHEV2\_RULE](../../master/chebyshev2_rule/chebyshev2_rule.md),
a C++ program which can compute and print a Gauss-Chebyshev type 2
quadrature rule.

[GEGENBAUER\_RULE](../../master/gegenbauer_rule/gegenbauer_rule.md),
a C++ program which can compute and print a Gauss-Gegenbauer quadrature
rule.

[GEN\_HERMITE\_RULE](../../master/gen_hermite_rule/gen_hermite_rule.md),
a C++ program which can compute and print a generalized Gauss-Hermite
quadrature rule.

[GEN\_LAGUERRE\_RULE](../../master/gen_laguerre_rule/gen_laguerre_rule.md),
a C++ program which can compute and print a generalized Gauss-Laguerre
quadrature rule.

[HERMITE\_RULE](../../master/hermite_rule/hermite_rule.md), a C++
program which can compute and print a Gauss-Hermite quadrature rule.

[INT\_EXACTNESS\_LEGENDRE](../../master/int_exactness_legendre/int_exactness_legendre.md),
a C++ program which checks the polynomial exactness of a Gauss-Legendre
quadrature rule.

[JACOBI\_RULE](../../master/jacobi_rule/jacobi_rule.md), a C++
program which can compute and print a Gauss-Jacobi quadrature rule.

[LAGUERRE\_RULE](../../master/laguerre_rule/laguerre_rule.md), a C++
program which can compute and print a Gauss-Laguerre quadrature rule.

[LEGENDRE\_RULE](../../master/legendre_rule/legendre_rule.md), a C++
program which can compute and print a Gauss-Legendre quadrature rule.

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

[PATTERSON\_RULE](../../master/patterson_rule/patterson_rule.md), a
C++ program which computes a Gauss-Patterson quadrature rule.

[QUADRATURE\_RULES\_CLENSHAW\_CURTIS](../../datasets/quadrature_rules_clenshaw_curtis/quadrature_rules_clenshaw_curtis.md),
a dataset directory which contains quadrature rules for integration on
\[-1,+1\], using a Clenshaw Curtis rule.

[QUADRULE](../../master/quadrule/quadrule.md), a C++ library which
defines 1-dimensional quadrature rules.

[TANH\_SINH\_RULE](../../master/tanh_sinh_rule/tanh_sinh_rule.md), a
C++ program which computes and writes out a tanh-sinh quadrature rule of
given order.

[TRUNCATED\_NORMAL\_RULE](../../master/truncated_normal_rule/truncated_normal_rule.md),
a C++ program which computes a quadrature rule for a normal probability
density function (PDF), also called a Gaussian distribution, that has
been truncated to \[A,+oo), (-oo,B\] or \[A,B\].

### Reference: {#reference align="center"}

1.  Milton Abramowitz, Irene Stegun,\
    Handbook of Mathematical Functions,\
    National Bureau of Standards, 1964,\
    ISBN: 0-486-61272-4,\
    LC: QA47.A34.
2.  Philip Davis, Philip Rabinowitz,\
    Methods of Numerical Integration,\
    Second Edition,\
    Dover, 2007,\
    ISBN: 0486453391,\
    LC: QA299.3.D28.
3.  Arthur Stroud, Don Secrest,\
    Gaussian Quadrature Formulas,\
    Prentice Hall, 1966,\
    LC: QA299.4G3S7.

### Source Code: {#source-code align="center"}

-   [clenshaw\_curtis\_rule.cpp](clenshaw_curtis_rule.cpp), the source
    code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [cc\_o5\_r.txt](cc_o5_r.txt), the region file created by the command

                    clenshaw_curtis_rule 5 cc_o5
                  

-   [cc\_o5\_w.txt](cc_o5_w.txt), the weight file created by the command

                    clenshaw_curtis_rule 5 cc_o5
                  

-   [cc\_o5\_x.txt](cc_o5_x.txt), the abscissa file created by the
    command

                    clenshaw_curtis_rule 5 cc_o5
                  

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for CLENSHAW\_CURTIS\_RULE.
-   **CLENSHAW\_CURTIS\_COMPUTE** computes a Clenshaw Curtis quadrature
    rule.
-   **CLENSHAW\_CURTIS\_HANDLE** computes a Clenshaw Curtis rule and
    outputs it.
-   **R8MAT\_WRITE** writes an R8MAT file with no header.
-   **RESCALE** rescales a Legendre quadrature rule from \[-1,+1\] to
    \[A,B\].
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 16 February 2010.*
