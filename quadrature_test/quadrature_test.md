QUADRATURE\_TEST\
Quadrature Rule Applied to Test Integrals {#quadrature_test-quadrature-rule-applied-to-test-integrals align="center"}
=========================================

------------------------------------------------------------------------

**QUADRATURE\_TEST** is a C++ program which reads three files that
define a quadrature rule, applies the quadrature rule to a set of test
integrals, and reports the results.

The quadrature rule is defined by three text files:

1.  *the "X" file* lists the abscissas (N rows, M columns);
2.  *the "W" file* lists the weights (N rows);
3.  *the "R" file* lists the integration region corners (2 rows, M
    columns);

For more on quadrature rules, see the **QUADRATURE\_RULES** listing
below.

The test integrals come from the **TEST\_NINT** library.

The list of integrand functions includes:

1.  f(x) = ( sum ( x(1:m) ) )\*\*2;
2.  f(x) = ( sum ( 2 \* x(1:m) - 1 ) )\*\*4;
3.  f(x) = ( sum ( x(1:m) ) )\*\*5;
4.  f(x) = ( sum ( 2 \* x(1:m) - 1 ) )\*\*6;
5.  f(x) = 1 / ( 1 + sum ( 2 \* x(1:m) ) );
6.  f(x) = product ( 2 \* abs ( 2 \* x(1:m) - 1 ) );
7.  f(x) = product ( pi / 2 ) \* sin ( pi \* x(1:m) );
8.  f(x) = ( sin ( (pi/4) \* sum ( x(1:m) ) ) )\*\*2;
9.  f(x) = exp ( sum ( c(1:m) \* x(1:m) ) );
10. f(x) = sum ( abs ( x(1:m) - 0.5 ) );
11. f(x) = exp ( sum ( abs ( 2 \* x(1:m) - 1 ) ) );
12. f(x) = product ( 1 &lt;= i &lt;= m ) ( i \* cos ( i \* x(i) ) );
13. f(x) = product ( 1 &lt;= i &lt;= m ) t(n(i))(x(i)), t(n(i)) is a
    Chebyshev polynomial;
14. f(x) = sum ( 1 &lt;= i &lt;= m ) (-1)\*\*i \* product ( 1 &lt;= j
    &lt;= i ) x(j);
15. f(x) = product ( 1 &lt;= i &lt;= order ) x(mod(i-1,m)+1);
16. f(x) = sum ( abs ( x(1:m) - x0(1:m) ) );
17. f(x) = sum ( ( x(1:m) - x0(1:m) )\*\*2 );
18. f(x) = 1 inside an m-dimensional sphere around x0(1:m), 0 outside;
19. f(x) = product ( sqrt ( abs ( x(1:m) - x0(1:m) ) ) );
20. f(x) = ( sum ( x(1:m) ) )\*\*power;
21. f(x) = c \* product ( x(1:m)\^e(1:m) ) on the surface of an
    m-dimensional unit sphere;
22. f(x) = c \* product ( x(1:m)\^e(1:m) ) in an m-dimensional ball;
23. f(x) = c \* product ( x(1:m)\^e(1:m) ) in the unit m-dimensional
    simplex;
24. f(x) = product ( abs ( 4 \* x(1:m) - 2 ) + c(1:m) ) / ( 1 + c(1:m) )
    );
25. f(x) = exp ( c \* product ( x(1:m) ) );
26. f(x) = product ( c(1:m) \* exp ( - c(1:m) \* x(1:m) ) );
27. f(x) = cos ( 2 \* pi \* r + sum ( c(1:m) \* x(1:m) ) ),\
    Genz "Oscillatory";
28. f(x) = 1 / product ( c(1:m)\*\*2 + (x(1:m) - x0(1:m))\*\*2),\
    Genz "Product Peak";
29. f(x) = 1 / ( 1 + sum ( c(1:m) \* x(1:m) ) )\*\*(m+r),\
    Genz "Corner Peak";
30. f(x) = exp(-sum(c(1:m)\*\*2 \* ( x(1:m) - x0(1:m))\*\*2 ) ),\
    Genz "Gaussian";
31. f(x) = exp ( - sum ( c(1:m) \* abs ( x(1:m) - x0(1:m) ) ) ), Genz
    "Continuous";
32. f(x) = exp(sum(c(1:m)\*x(1:m)) for x(1:m) &lt;= x0(1:m), 0
    otherwise,\
    Genz "Discontinuous";

### Usage: {#usage align="center"}

**quadrature\_test** *prefix*

 *prefix* 
:   the common prefix for the files containing the abscissa (X),
    weight (W) and region (R) information of the quadrature rule;

If the arguments are not supplied on the command line, the program will
prompt for them.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**QUADRATURE\_TEST** is available in [a C++
version](../../master/quadrature_test/quadrature_test.md) and [a
FORTRAN90 version](../../f_src/quadrature_test/quadrature_test.md) and
[a MATLAB version](../../m_src/quadrature_test/quadrature_test.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[GSL](../../master/gsl/gsl.md), a C++ library which includes routines
for estimating multidimensional integrals.

[INTEGRAL\_TEST](../../f_src/integral_test/integral_test.md), a
FORTRAN90 program which uses test integrals to evaluate sets of
quadrature points.

[NINT\_EXACTNESS](../../master/nint_exactness/nint_exactness.md), a
C++ program which demonstrates how to measure the polynomial exactness
of a multidimensional quadrature rule.

[NINTLIB](../../master/nintlib/nintlib.md), a C++ library which
numerically estimates integrals in multiple dimensions.

[PRODUCT\_RULE](../../master/product_rule/product_rule.md), a C++
program which creates a multidimensional quadrature rule as a product of
one dimensional rules.

[QUADRATURE\_RULES](../../datasets/quadrature_rules/quadrature_rules.md),
a dataset directory which contains a description and examples of
quadrature rules defined by a set of "X", "W" and "R" files.

[STROUD](../../master/stroud/stroud.md), a C++ library which contains
quadrature rules for a variety of unusual areas, surfaces and volumes in
2D, 3D and N-dimensions.

[TEST\_NINT](../../master/test_nint/test_nint.md), a C++ library
which defines a set of integrand functions to be used for testing
multidimensional quadrature rules and routines.

[TESTPACK](../../master/testpack/testpack.md), a C++ library which
defines a set of integrands used to test multidimensional quadrature.

### Reference: {#reference align="center"}

1.  JD Beasley, SG Springer,\
    Algorithm AS 111: The Percentage Points of the Normal Distribution,\
    Applied Statistics,\
    Volume 26, 1977, pages 118-121.
2.  Paul Bratley, Bennett Fox, Harald Niederreiter,\
    Implementation and Tests of Low-Discrepancy Sequences,\
    ACM Transactions on Modeling and Computer Simulation,\
    Volume 2, Number 3, July 1992, pages 195-213.
3.  Roger Broucke,\
    Algorithm 446: Ten Subroutines for the Manipulation of Chebyshev
    Series,\
    Communications of the ACM,\
    Volume 16, 1973, pages 254-256.
4.  William Cody, Kenneth Hillstrom,\
    Chebyshev Approximations for the Natural Logarithm of the Gamma
    Function, Mathematics of Computation,\
    Volume 21, Number 98, April 1967, pages 198-203.
5.  Richard Crandall,\
    Projects in Scientific Computing,\
    Springer, 2005,\
    ISBN: 0387950095,\
    LC: Q183.9.C733.
6.  Philip Davis, Philip Rabinowitz,\
    Methods of Numerical Integration,\
    Second Edition,\
    Dover, 2007,\
    ISBN: 0486453391,\
    LC: QA299.3.D28.
7.  Gerald Folland,\
    How to Integrate a Polynomial Over a Sphere,\
    American Mathematical Monthly,\
    Volume 108, Number 5, May 2001, pages 446-448.
8.  Leslie Fox, Ian Parker,\
    Chebyshev Polynomials in Numerical Analysis,\
    Oxford Press, 1968,\
    LC: QA297.F65.
9.  Alan Genz,\
    Testing Multidimensional Integration Routines,\
    in Tools, Methods, and Languages for Scientific and Engineering
    Computation,\
    edited by B Ford, JC Rault, F Thomasset,\
    North-Holland, 1984, pages 81-94,\
    ISBN: 0444875700,\
    LC: Q183.9.I53.
10. Alan Genz,\
    A Package for Testing Multiple Integration Subroutines,\
    in Numerical Integration: Recent Developments, Software and
    Applications,\
    edited by Patrick Keast, Graeme Fairweather,\
    Reidel, 1987, pages 337-340,\
    ISBN: 9027725144,\
    LC: QA299.3.N38.
11. Kenneth Hanson,\
    Quasi-Monte Carlo: halftoning in high dimensions?\
    in Computatinal Imaging,\
    Edited by CA Bouman, RL Stevenson,\
    Proceedings SPIE,\
    Volume 5016, 2003, pages 161-172.
12. John Hart, Ward Cheney, Charles Lawson, Hans Maehly, Charles
    Mesztenyi, John Rice, Henry Thatcher, Christoph Witzgall,\
    Computer Approximations,\
    Wiley, 1968,\
    LC: QA297.C64.
13. Stephen Joe, Frances Kuo\
    Remark on Algorithm 659: Implementing Sobol's Quasirandom Sequence
    Generator,\
    ACM Transactions on Mathematical Software,\
    Volume 29, Number 1, March 2003, pages 49-57.
14. David Kahaner, Cleve Moler, Steven Nash,\
    Numerical Methods and Software,\
    Prentice Hall, 1989,\
    ISBN: 0-13-627258-4,\
    LC: TA345.K34.
15. Bradley Keister,\
    Multidimensional Quadrature Algorithms,\
    Computers in Physics,\
    Volume 10, Number 2, March/April, 1996, pages 119-122.
16. Arnold Krommer, Christoph Ueberhuber,\
    Numerical Integration on Advanced Compuer Systems,\
    Springer, 1994,\
    ISBN: 3540584102,\
    LC: QA299.3.K76.
17. Anargyros Papageorgiou, Joseph Traub,\
    Faster Evaluation of Multidimensional Integrals,\
    Computers in Physics,\
    Volume 11, Number 6, November/December 1997, pages 574-578.
18. Thomas Patterson,\
    On the Construction of a Practical Ermakov-Zolotukhin Multiple
    Integrator,\
    in Numerical Integration: Recent Developments, Software and
    Applications,\
    edited by Patrick Keast and Graeme Fairweather,\
    D. Reidel, 1987, pages 269-290.
19. Arthur Stroud,\
    Approximate Calculation of Multiple Integrals,\
    Prentice Hall, 1971,\
    ISBN: 0130438936,\
    LC: QA311.S85.
20. Arthur Stroud, Don Secrest,\
    Gaussian Quadrature Formulas,\
    Prentice Hall, 1966,\
    LC: QA299.4G3S7.
21. Xiaoqun Wang, Kai-Tai Fang,\
    The Effective Dimension and quasi-Monte Carlo Integration,\
    Journal of Complexity,\
    Volume 19, pages 101-124, 2003.

### Source Code: {#source-code align="center"}

-   [quadrature\_test.cpp](quadrature_test.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**CC\_D2\_LEVEL4** is a Clenshaw-Curtis sparse grid quadrature rule in
dimension 2 of level 4, 65 points.

-   [cc\_d2\_level4\_x.txt](../../datasets/quadrature_rules/cc_d2_level4_x.txt),
    the "X" file.
-   [cc\_d2\_level4\_w.txt](../../datasets/quadrature_rules/cc_d2_level4_w.txt),
    the "W" file.
-   [cc\_d2\_level4\_r.txt](../../datasets/quadrature_rules/cc_d2_level4_r.txt),
    the "R" file.
-   [cc\_d2\_level4\_test.txt](cc_d2_level4_test.txt), the test results.

**CC\_D2\_LEVEL5** is a Clenshaw-Curtis sparse grid quadrature rule in
dimension 2 of level 5, 145 points.

-   [cc\_d2\_level5\_x.txt](../../datasets/quadrature_rules/cc_d2_level5_x.txt),
    the "X" file.
-   [cc\_d2\_level5\_w.txt](../../datasets/quadrature_rules/cc_d2_level5_w.txt),
    the "W" file.
-   [cc\_d2\_level5\_r.txt](../../datasets/quadrature_rules/cc_d2_level5_r.txt),
    the "R" file.
-   [cc\_d2\_level5\_test.txt](cc_d2_level5_test.txt), the test results.

**CC\_D6\_LEVEL0** is a Clenshaw-Curtis sparse grid quadrature rule in
dimension 6 of level 0, 1 point.

-   [cc\_d6\_level0\_x.txt](../../datasets/quadrature_rules/cc_d6_level0_x.txt),
    the "X" file.
-   [cc\_d6\_level0\_w.txt](../../datasets/quadrature_rules/cc_d6_level0_w.txt),
    the "W" file.
-   [cc\_d6\_level0\_r.txt](../../datasets/quadrature_rules/cc_d6_level0_r.txt),
    the "R" file.
-   [cc\_d6\_level0\_test.txt](cc_d6_level0_test.txt), the test results.

**CC\_D6\_LEVEL1** is a Clenshaw-Curtis sparse grid quadrature rule in
dimension 6 of level 1, 13 points.

-   [cc\_d6\_level1\_x.txt](../../datasets/quadrature_rules/cc_d6_level1_x.txt),
    the "X" file.
-   [cc\_d6\_level1\_w.txt](../../datasets/quadrature_rules/cc_d6_level1_w.txt),
    the "W" file.
-   [cc\_d6\_level1\_r.txt](../../datasets/quadrature_rules/cc_d6_level1_r.txt),
    the "R" file.
-   [cc\_d6\_level1\_test.txt](cc_d6_level1_test.txt), the test results.

**CC\_D6\_LEVEL2** is a Clenshaw-Curtis sparse grid quadrature rule in
dimension 6 of level 2, 85 points.

-   [cc\_d6\_level2\_x.txt](../../datasets/quadrature_rules/cc_d6_level2_x.txt),
    the "X" file.
-   [cc\_d6\_level2\_w.txt](../../datasets/quadrature_rules/cc_d6_level2_w.txt),
    the "W" file.
-   [cc\_d6\_level2\_r.txt](../../datasets/quadrature_rules/cc_d6_level2_r.txt),
    the "R" file.
-   [cc\_d6\_level2\_test.txt](cc_d6_level2_test.txt), the test results.

**CC\_D6\_LEVEL3** is a Clenshaw-Curtis sparse grid quadrature rule in
dimension 6 of level 3, 389 points.

-   [cc\_d6\_level3\_x.txt](../../datasets/quadrature_rules/cc_d6_level3_x.txt),
    the "X" file.
-   [cc\_d6\_level3\_w.txt](../../datasets/quadrature_rules/cc_d6_level3_w.txt),
    the "W" file.
-   [cc\_d6\_level3\_r.txt](../../datasets/quadrature_rules/cc_d6_level3_r.txt),
    the "R" file.
-   [cc\_d6\_level3\_test.txt](cc_d6_level3_test.txt), the test results.

**CC\_D6\_LEVEL4** is a Clenshaw-Curtis sparse grid quadrature rule in
dimension 6 of level 4, 1457 points.

-   [cc\_d6\_level4\_x.txt](../../datasets/quadrature_rules/cc_d6_level4_x.txt),
    the "X" file.
-   [cc\_d6\_level4\_w.txt](../../datasets/quadrature_rules/cc_d6_level4_w.txt),
    the "W" file.
-   [cc\_d6\_level4\_r.txt](../../datasets/quadrature_rules/cc_d6_level4_r.txt),
    the "R" file.
-   [cc\_d6\_level4\_test.txt](cc_d6_level4_test.txt), the test results.

**CC\_D6\_LEVEL5** is a Clenshaw-Curtis sparse grid quadrature rule in
dimension 6 of level 5, 4865 points.

-   [cc\_d6\_level5\_x.txt](../../datasets/quadrature_rules/cc_d6_level5_x.txt),
    the "X" file.
-   [cc\_d6\_level5\_w.txt](../../datasets/quadrature_rules/cc_d6_level5_w.txt),
    the "W" file.
-   [cc\_d6\_level5\_r.txt](../../datasets/quadrature_rules/cc_d6_level5_r.txt),
    the "R" file.
-   [cc\_d6\_level5\_test.txt](cc_d6_level5_test.txt), the test results.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for QUADRATURE\_TEST.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **DTABLE\_DATA\_READ** reads the data from a DTABLE file.
-   **DTABLE\_HEADER\_READ** reads the header from a DTABLE file.
-   **FILE\_COLUMN\_COUNT** counts the number of columns in the first
    line of a file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **S\_CAT** concatenates two strings to make a third string.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_R8** reads an R8 value from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 06 June 2007.*
