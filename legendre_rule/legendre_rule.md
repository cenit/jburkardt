LEGENDRE\_RULE\
Gauss-Legendre Quadrature Rules {#legendre_rule-gauss-legendre-quadrature-rules align="center"}
===============================

------------------------------------------------------------------------

**LEGENDRE\_RULE** is a C++ program which generates a specific
Gauss-Legendre quadrature rule, based on user input.

The rule is written to three files for easy use as input to other
programs.

The *Gauss-Legendre quadrature rule* is used as follows:

            Integral ( A <= x <= B ) f(x) dx
          

is to be approximated by

            Sum ( 1 <= i <= order ) w(i) * f(x(i))
          

### Usage: {#usage align="center"}

> **legendre\_rule** *order* *a* *b* *filename*

where

-   *order* is the number of points in the quadrature rule.
-   *a* is the left endpoint;
-   *b* is the right endpoint.
-   *filename* specifies the output filenames. *filename***\_w.txt**,
    *filename***\_x.txt**, and *filename***\_r.txt**, containing the
    weights, abscissas, and interval limits.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**LEGENDRE\_RULE** is available in [a C
version](../../c_src/legendre_rule/legendre_rule.md) and [a C++
version](../../master/legendre_rule/legendre_rule.md) and [a
FORTRAN77 version](../../f77_src/legendre_rule/legendre_rule.md) and
[a FORTRAN90 version](../../f_src/legendre_rule/legendre_rule.md) and
[a MATLAB version](../../m_src/legendre_rule/legendre_rule.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CCN\_RULE](../../master/ccn_rule/ccn_rule.md), a C++ program which
defines a nested Clenshaw Curtis quadrature rule.

[CHEBYSHEV1\_RULE](../../master/chebyshev1_rule/chebyshev1_rule.md),
a C++ program which can compute and print a Gauss-Chebyshev type 1
quadrature rule.

[CHEBYSHEV2\_RULE](../../master/chebyshev2_rule/chebyshev2_rule.md),
a C++ program which can compute and print a Gauss-Chebyshev type 2
quadrature rule.

[CLENSHAW\_CURTIS\_RULE](../../master/clenshaw_curtis_rule/clenshaw_curtis_rule.md),
a C++ program which defines a Clenshaw Curtis quadrature rule.

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

[LATTICE\_RULE](../../master/lattice_rule/lattice_rule.md), a C++
library which approximates M-dimensional integrals using lattice rules.

[LEGENDRE\_POLYNOMIAL](../../master/legendre_polynomial/legendre_polynomial.md),
a C++ library which evaluates the Legendre polynomial and associated
functions.

[LEGENDRE\_RULE\_FAST](../../master/legendre_rule_fast/legendre_rule_fast.md),
a C++ program which uses a fast (order N) algorithm to compute a
Gauss-Legendre quadrature rule of given order.

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

[QUADRATURE\_RULES](../../datasets/quadrature_rules/quadrature_rules.md),
a dataset directory which contains sets of files that define quadrature
rules over various 1D intervals or multidimensional hypercubes.

[QUADRATURE\_RULES\_LEGENDRE](../../datasets/quadrature_rules_legendre/quadrature_rules_legendre.md),
a dataset directory which contains triples of files defining standard
Gauss-Legendre quadrature rules.

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
3.  Sylvan Elhay, Jaroslav Kautsky,\
    Algorithm 655: IQPACK, FORTRAN Subroutines for the Weights of
    Interpolatory Quadrature,\
    ACM Transactions on Mathematical Software,\
    Volume 13, Number 4, December 1987, pages 399-415.
4.  Jaroslav Kautsky, Sylvan Elhay,\
    Calculation of the Weights of Interpolatory Quadratures,\
    Numerische Mathematik,\
    Volume 40, 1982, pages 407-422.
5.  Roger Martin, James Wilkinson,\
    The Implicit QL Algorithm,\
    Numerische Mathematik,\
    Volume 12, Number 5, December 1968, pages 377-383.
6.  Arthur Stroud, Don Secrest,\
    Gaussian Quadrature Formulas,\
    Prentice Hall, 1966,\
    LC: QA299.4G3S7.

### Source Code: {#source-code align="center"}

-   [legendre\_rule.cpp](legendre_rule.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [leg\_o4\_r.txt](leg_o4_r.txt), the region file created by the
    command

                    legendre_rule 4 -1 +1 leg_o4
                  

-   [leg\_o4\_w.txt](leg_o4_w.txt), the weight file created by the
    command

                    legendre_rule 4 -1 +1 leg_o4
                  

-   [leg\_o4\_x.txt](leg_o4_x.txt), the abscissa file created by the
    command

                    legendre_rule 4 -1 +1 leg_o4
                  

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for LEGENDRE\_RULE.
-   **CDGQF** computes a Gauss quadrature formula with default A, B and
    simple knots.
-   **CGQF** computes knots and weights of a Gauss quadrature formula.
-   **CLASS\_MATRIX** computes the Jacobi matrix for a quadrature rule.
-   **IMTQLX** diagonalizes a symmetric tridiagonal matrix.
-   **PARCHK** checks parameters ALPHA and BETA for classical weight
    functions.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_EPSILON** returns the R8 roundoff unit.
-   **R8\_SIGN** returns the sign of an R8.
-   **R8MAT\_WRITE** writes an R8MAT file with no header.
-   **RULE\_WRITE** writes a quadrature rule to three files.
-   **SCQF** scales a quadrature formula to a nonstandard interval.
-   **SGQF** computes knots and weights of a Gauss Quadrature formula.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 14 June 2011.*
