LAGUERRE\_RULE\
Gauss-Laguerre Quadrature Rules {#laguerre_rule-gauss-laguerre-quadrature-rules align="center"}
===============================

------------------------------------------------------------------------

**LAGUERRE\_RULE** is a C++ program which generates a specific
Gauss-Laguerre quadrature rule, based on user input.

The rule is written to three files for easy use as input to other
programs.

The *Gauss-Laguerre quadrature rule* is used as follows:

            Integral ( a <= x < +oo ) exp ( - b * ( x - a ) ) f(x) dx
          

is to be approximated by

            Sum ( 1 <= i <= order ) w(i) * f(x(i))
          

### Usage: {#usage align="center"}

> **laguerre\_rule** *order* *a* *b* *filename*

where

-   *order* is the number of points in the quadrature rule.
-   *a* is the left endpoint. Typically this is 0.
-   *b* is the scale factor. Typically this is 1.
-   *filename* specifies the output filenames: *filename***\_w.txt**,
    *filename***\_x.txt**, and *filename***\_r.txt**, containing the
    weights, abscissas, and interval limits.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**LAGUERRE\_RULE** is available in [a C
version](../../c_src/laguerre_rule/laguerre_rule.md) and [a C++
version](../../master/laguerre_rule/laguerre_rule.md) and [a
FORTRAN77 version](../../f77_src/laguerre_rule/laguerre_rule.md) and
[a FORTRAN90 version](../../f_src/laguerre_rule/laguerre_rule.md) and
[a MATLAB version.](../../m_src/laguerre_rule/laguerre_rule.md)

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

[INT\_EXACTNESS](../../master/int_exactness/int_exactness.md), a C++
program which checks the polynomial exactness of a 1-dimensional
quadrature rule for a finite interval.

[INT\_EXACTNESS\_LAGUERRE](../../master/int_exactness_laguerre/int_exactness_laguerre.md),
a C++ program which checks the polynomial exactness of a Gauss-Laguerre
quadrature rule.

[JACOBI\_RULE](../../master/jacobi_rule/jacobi_rule.md), a C++
program which can compute and print a Gauss-Jacobi quadrature rule.

[LAGUERRE\_POLYNOMIAL](../../master/laguerre_polynomial/laguerre_polynomial.md),
a C++ library which evaluates the Laguerre polynomial, the generalized
Laguerre polynomial, and the Laguerre function.

[LAGUERRE\_TEST\_INT](../../master/laguerre_test_int/laguerre_test_int.md),
a C++ library which defines test integrands for integration over
\[A,+oo).

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

[QUADRATURE\_RULES\_LAGUERRE](../../datasets/quadrature_rules_laguerre/quadrature_rules_laguerre.md),
a dataset directory which contains triples of files defining standard
Laguerre quadrature rules.

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
6.  Philip Rabinowitz, George Weiss,\
    Tables of Abscissas and Weights for Numerical Evaluation of
    Integrals of the form \$\\int\_0\^{\\infty} exp(-x) x\^n f(x) dx\$,\
    Mathematical Tables and Other Aids to Computation,\
    Volume 13, Number 68, October 1959, pages 285-294.
7.  Arthur Stroud, Don Secrest,\
    Gaussian Quadrature Formulas,\
    Prentice Hall, 1966,\
    LC: QA299.4G3S7.

### Source Code: {#source-code align="center"}

-   [laguerre\_rule.cpp](laguerre_rule.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [lag\_o4\_r.txt](lag_o4_r.txt), the region file created by the
    command

                    laguerre_rule 4 0.0 1.0 lag_o4
                  

-   [lag\_o4\_w.txt](lag_o4_w.txt), the weight file created by the
    command

                    laguerre_rule 4 0.0 1.0 lag_o4
                  

-   [lag\_o4\_x.txt](lag_o4_x.txt), the abscissa file created by the
    command

                    laguerre_rule 4 0.0 1.0 lag_o4
                  

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for LAGUERRE\_RULE.
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
