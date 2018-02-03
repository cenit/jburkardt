TRUNCATED\_NORMAL\_RULE\
Quadrature Rule for Truncated Normal Distribution {#truncated_normal_rule-quadrature-rule-for-truncated-normal-distribution align="center"}
=================================================

------------------------------------------------------------------------

**TRUNCATED\_NORMAL\_RULE**, a C++ program which computes a quadrature
rule for a normal probability density function (PDF), sometimes called a
Gaussian distribution, that has been truncated to \[A,+oo), (-oo,B\] or
\[A,B\].

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TRUNCATED\_NORMAL\_RULE** is available in [a C
version](../../c_src/truncated_normal_rule/truncated_normal_rule.md)
and [a C++
version](../../master/truncated_normal_rule/truncated_normal_rule.md)
and [a FORTRAN77
version](../../f77_src/truncated_normal_rule/truncated_normal_rule.md)
and [a FORTRAN90
version](../../f_src/truncated_normal_rule/truncated_normal_rule.md)
and [a MATLAB
version](../../m_src/truncated_normal_rule/truncated_normal_rule.md)
and [a Python
version](../../py_src/truncated_normal_rule/truncated_normal_rule.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

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

[JACOBI\_RULE](../../master/jacobi_rule/jacobi_rule.md), a C++
program which can compute and print a Gauss-Jacobi quadrature rule.

[LAGUERRE\_RULE](../../master/laguerre_rule/laguerre_rule.md), a C++
program which can compute and print a Gauss-Laguerre quadrature rule.

[LEGENDRE\_RULE](../../master/legendre_rule/legendre_rule.md), a C++
program which can compute and print a Gauss-Legendre quadrature rule.

[LINE\_FELIPPA\_RULE](../../master/line_felippa_rule/line_felippa_rule.md),
a C++ library which returns the points and weights of a Felippa
quadrature rule over the interior of a line segment in 1D.

[PATTERSON\_RULE](../../master/patterson_rule/patterson_rule.md), a
C++ program which computes a Gauss-Patterson quadrature rule.

[QUADRULE](../../master/quadrule/quadrule.md), a C++ library which
defines 1-dimensional quadrature rules.

[TRUNCATED\_NORMAL](../../master/truncated_normal/truncated_normal.md),
a C++ library which works with the truncated normal distribution over
\[A,B\], or \[A,+oo) or (-oo,B\], returning the probability density
function (PDF), the cumulative density function (CDF), the inverse CDF,
the mean, the variance, and sample values.

### Reference: {#reference align="center"}

1.  Gene Golub, John Welsch,\
    Calculation of Gaussian Quadrature Rules,\
    Mathematics of Computation,\
    Volume 23, Number 106, April 1969, pages 221-230.
2.  Norman Johnson, Samuel Kotz, Narayanaswamy Balakrishnan,\
    Continuous Univariate Distributions,\
    Second edition,\
    Wiley, 1994,\
    ISBN: 0471584940,\
    LC: QA273.6.J6.

### Source Code: {#source-code align="center"}

-   [truncated\_normal\_rule.cpp](truncated_normal_rule.cpp), the source
    code.

### Examples and Tests: {#examples-and-tests align="center"}

"OPTION0" computes a quadrature rule for the normal distribution, n = 5,
mu = 1.0, sigma = 2.0;

-   [option0\_input.txt](option0_input.txt), the input file.
-   [option0\_r.txt](option0_r.txt), the output "region" file.
-   [option0\_w.txt](option0_w.txt), the output "weight" file.
-   [option0\_x.txt](option0_x.txt), the output "point" file.

"OPTION1" computes a quadrature rule for the lower truncated normal
distribution, n = 9, mu = 2.0, sigma = 0.5, a = 0.0;

-   [option1\_input.txt](option1_input.txt), the input file.
-   [option1\_r.txt](option1_r.txt), the output "region" file.
-   [option1\_w.txt](option1_w.txt), the output "weight" file.
-   [option1\_x.txt](option1_x.txt), the output "point" file.

"OPTION2" computes a quadrature rule for the upper truncated normal
distribution, n = 9, mu = 2.0, sigma = 0.5, b = 3.0;

-   [option2\_input.txt](option2_input.txt), the input file.
-   [option2\_r.txt](option2_r.txt), the output "region" file.
-   [option2\_w.txt](option2_w.txt), the output "weight" file.
-   [option2\_x.txt](option2_x.txt), the output "point" file.

"OPTION3" computes a quadrature rule for the doubly truncated normal
distribution, n = 5, mu = 100.0, sigma = 25.0, a = 50.0, b = 100.0;

-   [option3\_input.txt](option3_input.txt), the input file.
-   [option3\_r.txt](option3_r.txt), the output "region" file.
-   [option3\_w.txt](option3_w.txt), the output "weight" file.
-   [option3\_x.txt](option3_x.txt), the output "point" file.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for TRUNCATED\_NORMAL\_RULE.
-   **JACOBI\_EIGENVALUE** carries out the Jacobi eigenvalue iteration.
-   **MOMENT\_METHOD** computes a quadrature rule by the method of
    moments.
-   **MOMENTS\_NORMAL** returns moments of the standard Normal
    distribution.
-   **MOMENTS\_TRUNCATED\_NORMAL\_AB:** moments of truncated Normal
    distribution.
-   **MOMENTS\_TRUNCATED\_NORMAL\_A:** moments of lower truncated Normal
    distribution.
-   **MOMENTS\_TRUNCATED\_NORMAL\_B:** moments of upper truncated Normal
    distribution.
-   **NORMAL\_01\_CDF** evaluates the Normal 01 CDF.
-   **NORMAL\_01\_PDF** evaluates the Normal 01 PDF.
-   **R8\_CHOOSE** computes the binomial coefficient C(N,K) as an R8.
-   **R8\_FACTORIAL** computes the factorial of N.
-   **R8\_FACTORIAL2** computes the double factorial function.
-   **R8\_HUGE** returns a very large R8.
-   **R8\_MOP** returns the I-th power of -1 as an R8.
-   **R8MAT\_CHOLESKY\_FACTOR\_UPPER:** upper Cholesky factor of a
    symmetric matrix.
-   **R8MAT\_PRINT** prints an R8MAT.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **RULE\_WRITE** writes a quadrature rule to a file.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TRUNCATED\_NORMAL\_AB\_MOMENT:** moments of the truncated Normal
    PDF.
-   **TRUNCATED\_NORMAL\_A\_MOMENT:** moments of the lower truncated
    Normal PDF.
-   **TRUNCATED\_NORMAL\_B\_MOMENT:** moments of the upper truncated
    Normal PDF.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 20 September 2013.*
