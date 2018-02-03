CCN\_RULE\
Nested Clenshaw Curtis Quadrature Rules {#ccn_rule-nested-clenshaw-curtis-quadrature-rules align="center"}
=======================================

------------------------------------------------------------------------

**CCN\_RULE** is a C++ program which generates a quadrature rule based
on a nested set of points inspired by the Clenshaw Curtis quadrature
rule.

The data defining the rule is written to three files for easy use as
input to other programs.

The nested Clenshaw Curtis quadrature rule is used as follows:

            Integral ( A <= x <= B ) f(x) dx
          

is to be approximated by

            Sum ( 1 <= i <= order ) w(i) * f(x(i))
          

If the order of the CCN rule is 1, 3, 5, 9, 17, 33, or in general
2\^L+1, then the rule is identical to the Clenshaw Curtis rule.

Otherwise, the rule is based on a subset of the points in the Clenshaw
Curtis rule of next highest order in the sequence 2\^L+1.

The CCN rule has no special accuracy properties, except that the rules
of odd order are symmetric, and hence get one extra degree of precision.
Moreover, the rules of even order have a single unpaired point which is
assigned weight zero, so that it is equivalent to the immediately
preceding rule of odd order.

### Usage: {#usage align="center"}

> **ccn\_rule** *n* *a* *b* *filename*

where

-   *n* is the order, or number of points in the quadrature rule;
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

**CCN\_RULE** is available in [a C
version](../../c_src/ccn_rule/ccn_rule.html) and [a C++
version](../../cpp_src/ccn_rule/ccn_rule.html) and [a FORTRAN77
version](../../f77_src/ccn_rule/ccn_rule.html) and [a FORTRAN90
version](../../f_src/ccn_rule/ccn_rule.html) and [a MATLAB
version](../../m_src/ccn_rule/ccn_rule.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CHEBYSHEV1\_RULE](../../cpp_src/chebyshev1_rule/chebyshev1_rule.html),
a C++ program which can compute and print a Gauss-Chebyshev type 1
quadrature rule.

[CHEBYSHEV2\_RULE](../../cpp_src/chebyshev2_rule/chebyshev2_rule.html),
a C++ program which can compute and print a Gauss-Chebyshev type 2
quadrature rule.

[CLENSHAW\_CURTIS\_RULE](../../cpp_src/clenshaw_curtis_rule/clenshaw_curtis_rule.html),
a C++ program which can compute and print a Gauss-Chebyshev type 1
quadrature rule.

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

[LEGENDRE\_RULE](../../cpp_src/legendre_rule/legendre_rule.html), a C++
program which can compute and print a Gauss-Legendre quadrature rule.

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

[PATTERSON\_RULE](../../cpp_src/patterson_rule/patterson_rule.html), a
C++ program which computes a Gauss-Patterson quadrature rule.

[QUADRATURE\_RULES\_CCN](../../datasets/quadrature_rules_ccn/quadrature_rules_ccn.html),
a dataset directory which contains quadrature rules for integration on
\[-1,+1\], using a nested Clenshaw Curtis rule.

[TANH\_SINH\_RULE](../../cpp_src/tanh_sinh_rule/tanh_sinh_rule.html), a
C++ program which computes and writes out a tanh-sinh quadrature rule of
given order.

[TRUNCATED\_NORMAL\_RULE](../../cpp_src/truncated_normal_rule/truncated_normal_rule.html),
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

-   [ccn\_rule.cpp](ccn_rule.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**CCN\_09** is a nested Clenshaw Curtis rule of order 9, which will
exactly match the standard Clenshaw Curtis rule.

-   [ccn\_o9\_r.txt](ccn_o9_r.txt), the region file created by the
    command

                    ccn_rule 9 -1 +1 ccn_o9
                  

-   [ccn\_o9\_w.txt](ccn_o9_w.txt), the weight file created by the
    command

                    ccn_rule 9 -1 +1 ccn_o9
                  

-   [ccn\_o9\_x.txt](ccn_o9_x.txt), the abscissa file created by the
    command

                    ccn_rule 9 -1 +1 ccn_o9
                  

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for CCN\_RULE.
-   **CCN\_COMPUTE\_POINTS:** compute Clenshaw Curtis Nested points.
-   **I4\_MIN** returns the minimum of two I4's.
-   **NC\_COMPUTE** computes a Newton-Cotes quadrature rule.
-   **R8MAT\_WRITE** writes an R8MAT file with no header.
-   **RESCALE** rescales a Legendre quadrature rule from \[-1,+1\] to
    \[A,B\].
-   **RULE\_WRITE** writes a quadrature rule to three files.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 06 March 2011.*
