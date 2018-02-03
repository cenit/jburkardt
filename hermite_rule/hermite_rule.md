HERMITE\_RULE\
Gauss-Hermite Quadrature Rules {#hermite_rule-gauss-hermite-quadrature-rules align="center"}
==============================

------------------------------------------------------------------------

**HERMITE\_RULE** is a C++ program which generates a specific
Gauss-Hermite quadrature rule, based on user input.

The rule is written to three files for easy use as input to other
programs.

The *Gauss-Hermite quadrature rule* is used as follows:

            c * Integral ( -oo < x < +oo ) f(x) exp ( - b * ( x - a )^2 ) dx
          

is to be approximated by

            Sum ( 1 <= i <= order ) w(i) * f(x(i))
          

Generally, a Gauss-Hermite quadrature rule of *n* points will produce
the exact integral when f(x) is a polynomial of degree *2n-1* or less.

The value of C in front of the integral depends on the user's choice of
the SCALE parameter:

-   *scale=0*, then C = 1; this is the standard choice for Gauss-Hermite
    quadrature.
-   *scale=1*, then C is a normalization factor so that f(x)=1 will
    integrate to 1. This implies in turn that the weights will sum to 1.
    This choice is appropriate when using the rule to compute
    probabilities.

### Usage: {#usage align="center"}

> **hermite\_rule** *order* *a* *b* *scale* *filename*

where

-   *order* is the number of points in the quadrature rule.
-   *a* is the center point (default 0);
-   *b* is the scale factor (default 1);
-   *scale* is the normalization option (0/1). If 1, then the weights
    are normalized to have unit sum;
-   *filename* specifies the output filenames: *filename***\_w.txt**,
    *filename***\_x.txt**, and *filename***\_r.txt**, containing the
    weights, abscissas, and interval limits.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**HERMITE\_RULE** is available in [a C
version](../../c_src/hermite_rule/hermite_rule.md) and [a C++
version](../../master/hermite_rule/hermite_rule.md) and [a FORTRAN77
version](../../f77_src/hermite_rule/hermite_rule.md) and [a FORTRAN90
version](../../f_src/hermite_rule/hermite_rule.md) and [a MATLAB
version.](../../m_src/hermite_rule/hermite_rule.md)

### Related Data and Programs: {#related-data-and-programs align="center"}

[CCN\_RULE](../../master/ccn_rule/ccn_rule.md), a C++ program which
defines a nested Clenshaw Curtis quadrature rule.

[CHEBYSHEV\_POLYNOMIAL](../../master/chebyshev_polynomial/chebyshev_polynomial.md),
a C++ library which evaluates the Chebyshev polynomial and associated
functions.

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

[HERMITE\_EXACTNESS](../../master/hermite_exactness/hermite_exactness.md),
a C++ program which tests the polynomial exactness of Gauss-Hermite
quadrature rules for estimating the integral of a function with density
exp(-x\^2) over the interval (-oo,+oo).

[HERMITE\_TEST\_INT](../../master/hermite_test_int/hermite_test_int.md),
a C++ library which defines test integrands for Hermite integrals with
interval (-oo,+oo) and density exp(-x\^2).

[JACOBI\_RULE](../../master/jacobi_rule/jacobi_rule.md), a C++
program which can compute and print a Gauss-Jacobi quadrature rule.

[LAGUERRE\_RULE](../../master/laguerre_rule/laguerre_rule.md), a C++
program which can compute and print a Gauss-Laguerre quadrature rule.

[LATTICE\_RULE](../../master/lattice_rule/lattice_rule.md), a C++
library which approximates M-dimensional integrals using lattice rules.

[LEGENDRE\_RULE](../../master/legendre_rule/legendre_rule.md), a C++
program which computes a Gauss-Legendre quadrature rule.

[LINE\_FELIPPA\_RULE](../../master/line_felippa_rule/line_felippa_rule.md),
a C++ library which returns the points and weights of a Felippa
quadrature rule over the interior of a line segment in 1D.

[PATTERSON\_RULE](../../master/patterson_rule/patterson_rule.md), a
C++ program which computes a Gauss-Patterson quadrature rule.

[QUADRATURE\_RULES](../../datasets/quadrature_rules/quadrature_rules.md),
a dataset directory which contains sets of files that define quadrature
rules over various 1D intervals or multidimensional hypercubes.

[QUADRATURE\_RULES\_HERMITE\_PHYSICIST](../../datasets/quadrature_rules_hermite_physicist/quadrature_rules_hermite_physicist.md),
a dataset directory which contains Gauss-Hermite quadrature rules, for
integration on the interval (-oo,+oo), with weight function exp(-x\^2).

[QUADRATURE\_RULES\_HERMITE\_PROBABILIST](../../datasets/quadrature_rules_hermite_probabilist/quadrature_rules_hermite_probabilist.md),
a dataset directory which contains Gauss-Hermite quadrature rules, for
integration on the interval (-oo,+oo), with weight function
exp(-x\^2/2).

[QUADRATURE\_RULES\_HERMITE\_UNWEIGHTED](../../datasets/quadrature_rules_hermite_unweighted/quadrature_rules_hermite_unweighted.md),
a dataset directory which contains Gauss-Hermite quadrature rules, for
integration on the interval (-oo,+oo), with weight function 1.

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

-   [hermite\_rule.cpp](hermite_rule.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

HERM\_O4 is a Hermite rule of order 4, created by the command

            hermite_rule 4 0.0 1.0 0 herm_o4
          

-   [herm\_o4\_r.txt](herm_o4_r.txt), the region file;
-   [herm\_o4\_w.txt](herm_o4_w.txt), the weight file;
-   [herm\_o4\_x.txt](herm_o4_x.txt), the abscissa file;

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for HERMITE\_RULE.
-   **CDGQF** computes a Gauss quadrature formula with default A, B and
    simple knots.
-   **CGQF** computes knots and weights of a Gauss quadrature formula.
-   **CLASS\_MATRIX** computes the Jacobi matrix for a quadrature rule.
-   **IMTQLX** diagonalizes a symmetric tridiagonal matrix.
-   **PARCHK** checks parameters ALPHA and BETA for classical weight
    functions.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_EPSILON** returns the R8 roundoff unit.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8\_SIGN** returns the sign of an R8.
-   **R8MAT\_WRITE** writes an R8MAT file with no header.
-   **RULE\_WRITE** writes a quadrature rule to three files.
-   **SCQF** scales a quadrature formula to a nonstandard interval.
-   **SGQF** computes knots and weights of a Gauss Quadrature formula.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 23 February 2010.*
