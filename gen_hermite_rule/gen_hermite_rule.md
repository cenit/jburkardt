GEN\_HERMITE\_RULE\
Generalized Gauss-Hermite Quadrature Rules {#gen_hermite_rule-generalized-gauss-hermite-quadrature-rules align="center"}
==========================================

------------------------------------------------------------------------

**GEN\_HERMITE\_RULE** is a C++ program which generates a specific
generalized Gauss-Hermite quadrature rule, based on user input.

The rule is written to three files for easy use as input to other
programs.

The *generalized Gauss Hermite quadrature rule* is used as follows:

            Integral ( -oo < x < +oo ) |x-a|^alpha * exp( - b * ( x - a)^2 ) f(x) dx
          

is to be approximated by

            Sum ( 1 <= i <= order ) w(i) * f(x(i))
          

### Usage: {#usage align="center"}

> **gen\_hermite\_rule** *order* *alpha* *a* *b* *filename*

where

-   *order* is the number of points in the quadrature rule.
-   *alpha* is the parameter for the generalized Gauss-Hermite
    quadrature rule. The value of *alpha* may be any real value greater
    than -1.0. Specifying *alpha*=0.0 results in the basic
    (non-generalized) rule.
-   *a* is the center point (default 0);
-   *b* is the scale factor (default 1);
-   *filename* specifies the names of the output files:
    *filename***\_w.txt**, *filename***\_x.txt**, and
    *filename***\_r.txt**, containing the weights, abscissas, and
    interval limits.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**GEN\_HERMITE\_RULE** is available in [a C++
version](../../cpp_src/gen_hermite_rule/gen_hermite_rule.html) and [a
FORTRAN90 version](../../f_src/gen_hermite_rule/gen_hermite_rule.html)
and [a MATLAB
version](../../m_src/gen_hermite_rule/gen_hermite_rule.html)

### Related Data and Programs: {#related-data-and-programs align="center"}

[CCN\_RULE](../../cpp_src/ccn_rule/ccn_rule.html), a C++ program which
defines a nested Clenshaw Curtis quadrature rule.

[CHEBYSHEV1\_RULE](../../cpp_src/chebyshev1_rule/chebyshev1_rule.html),
a C++ program which can compute and print a Gauss-Chebyshev type 1
quadrature rule.

[CHEBYSHEV2\_RULE](../../cpp_src/chebyshev2_rule/chebyshev2_rule.html),
a C++ program which can compute and print a Gauss-Chebyshev type 2
quadrature rule.

[CLENSHAW\_CURTIS\_RULE](../../cpp_src/clenshaw_curtis_rule/clenshaw_curtis_rule.html),
a C++ program which defines a Clenshaw Curtis quadrature rule.

[GEGENBAUER\_RULE](../../cpp_src/gegenbauer_rule/gegenbauer_rule.html),
a C++ program which can compute and print a Gauss-Gegenbauer quadrature
rule.

[GEN\_LAGUERRE\_RULE](../../cpp_src/gen_laguerre_rule/gen_laguerre_rule.html),
a C++ program which computes a generalized Gauss-Laguerre quadrature
rule.

[HERMITE\_RULE](../../cpp_src/hermite_rule/hermite_rule.html), a C++
program which computes a generalized Gauss-Hermite quadrature rule.

[INT\_EXACTNESS\_GEN\_HERMITE](../../cpp_src/int_exactness_gen_hermite/int_exactness_gen_hermite.html),
a C++ program which checks the polynomial exactness of a generalized
Gauss-Hermite quadrature rule.

[JACOBI\_RULE](../../cpp_src/jacobi_rule/jacobi_rule.html), a C++
program which computes a generalized Gauss-Jacobi quadrature rule.

[LAGUERRE\_RULE](../../cpp_src/laguerre_rule/laguerre_rule.html), a C++
program which computes a Gauss-Laguerre quadrature rule.

[LATTICE\_RULE](../../cpp_src/lattice_rule/lattice_rule.html), a C++
library which approximates M-dimensional integrals using lattice rules.

[LEGENDRE\_RULE](../../cpp_src/legendre_rule/legendre_rule.html), a C++
program which computes a Gauss-Legendre quadrature rule.

[LINE\_FELIPPA\_RULE](../../cpp_src/line_felippa_rule/line_felippa_rule.html),
a C++ library which returns the points and weights of a Felippa
quadrature rule over the interior of a line segment in 1D.

[PATTERSON\_RULE](../../cpp_src/patterson_rule/patterson_rule.html), a
C++ program which computes a Gauss-Patterson quadrature rule.

[QUADRATURE\_RULES\_GEN\_HERMITE](../../datasets/quadrature_rules_gen_hermite/quadrature_rules_gen_hermite.html),
a dataset directory which contains triples of files defining generalized
Gauss-Hermite quadrature rules.

[QUADRULE](../../f_src/quadrule/quadrule.html), a FORTRAN90 library
which contains 1-dimensional quadrature rules.

[TANH\_SINH\_RULE](../../cpp_src/tanh_sinh_rule/tanh_sinh_rule.html), a
C++ program which computes and writes out a tanh-sinh quadrature rule of
given order.

[TEST\_INT\_HERMITE](../../cpp_src/test_int_hermite/test_int_hermite.html),
a C++ library which defines test integrands that can be approximated
using a Gauss-Hermite rule.

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

-   [gen\_hermite\_rule.cpp](gen_hermite_rule.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [gen\_herm\_o4\_a1.0\_r.txt](gen_herm_o4_a1.0_r.txt), the region
    file created by the command

                    gen_hermite_rule 4 1.0 0.0 1.0 gen_herm_o4_a1.0
                  

-   [gen\_herm\_o4\_a1.0\_w.txt](gen_herm_o4_a1.0_w.txt), the weight
    file created by the command

                    gen_hermite_rule 4 1.0 0.0 1.0 gen_herm_o4_a1.0
                  

-   [gen\_herm\_o4\_a1.0\_x.txt](gen_herm_o4_a1.0_x.txt), the abscissa
    file created by the command

                    gen_hermite_rule 4 1.0 0.0 1.0 gen_herm_o4_a1.0
                  

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for GEN\_HERMITE\_RULE.
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

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 23 February 2010.*
