INT\_EXACTNESS\_CHEBYSHEV2\
Exactness of Gauss-Chebyshev Type 2 Quadrature Rules {#int_exactness_chebyshev2-exactness-of-gauss-chebyshev-type-2-quadrature-rules align="center"}
====================================================

------------------------------------------------------------------------

**INT\_EXACTNESS\_CHEBYSHEV2** is a C++ program which investigates the
polynomial exactness of a Gauss-Chebyshev type 2 quadrature rule for the
interval \[-1,+1\].

Standard Gauss-Chebyshev type 2 quadrature assumes that the integrand we
are considering has a form like:

            Integral ( -1 <= x <= +1 ) f(x) * sqrt ( 1 - x^2 ) dx
          

A *standard Gauss-Chebyshev type 2 quadrature rule* is a set of **n**
positive weights **w** and abscissas **x** so that

            Integral ( -1 <= x <= +1 ) f(x) * ( sqrt ( 1 - x^2 ) dx
          

may be approximated by

            Sum ( 1 <= I <= N ) w(i) * f(x(i))
          

For a standard Gauss-Chebyshev type 2 rule, polynomial exactness is
defined in terms of the function **f(x)**. That is, we say the rule is
exact for polynomials up to degree DEGREE\_MAX if, for any polynomial
**f(x)** of that degree or less, the quadrature rule will produce the
exact value of

            Integral ( -1 <= x <= +1 ) f(x) * sqrt ( 1 - x^2 ) dx
          

The program starts at **DEGREE** = 0, and then proceeds to **DEGREE** =
1, 2, and so on up to a maximum degree **DEGREE\_MAX** specified by the
user. At each value of **DEGREE**, the program generates the
corresponding monomial term, applies the quadrature rule to it, and
determines the quadrature error. The program uses a scaling factor on
each monomial so that the exact integral should always be 1; therefore,
each reported error can be compared on a fixed scale.

The program is very flexible and interactive. The quadrature rule is
defined by three files, to be read at input, and the maximum degree top
be checked is specified by the user as well.

Note that the three files that define the quadrature rule are assumed to
have related names, of the form

-   *prefix*\_**x.txt**
-   *prefix*\_**w.txt**
-   *prefix*\_**r.txt**

When running the program, the user only enters the common *prefix* part
of the file names, which is enough information for the program to find
all three files.

For information on the form of these files, see the
**QUADRATURE\_RULES** directory listed below.

The exactness results are written to an output file with the
corresponding name:

-   *prefix*\_**exact.txt**

### Usage: {#usage align="center"}

> **int\_exactness\_chebyshev2** *prefix* *degree\_max*

where

-   *prefix* is the common prefix for the files containing the abscissa,
    weight and region information of the quadrature rule;
-   *degree\_max* is the maximum monomial degree to check. This would
    normally be a relatively small nonnegative number, such as 5, 10
    or 15.

If the arguments are not supplied on the command line, the program will
prompt for them.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**INT\_EXACTNESS\_CHEBYSHEV2** is available in [a C++
version](../../master/int_exactness_chebyshev2/int_exactness_chebyshev2.md)
and [a FORTRAN90
version](../../f_src/int_exactness_chebyshev2/int_exactness_chebyshev2.md)
and [a MATLAB
version](../../m_src/int_exactness_chebyshev2/int_exactness_chebyshev2.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CHEBYSHEV\_POLYNOMIAL](../../master/chebyshev_polynomial/chebyshev_polynomial.md),
a C++ library which evaluates the Chebyshev polynomial and associated
functions.

[CHEBYSHEV2\_RULE](../../master/chebyshev2_rule/chebyshev2_rule.md),
a C++ program which generates a Gauss-Chebyshev type 2 quadrature rule.

[HERMITE\_EXACTNESS](../../master/hermite_exactness/hermite_exactness.md),
a C++ program which tests the polynomial exactness of Gauss-Hermite
quadrature rules.

[INT\_EXACTNESS](../../master/int_exactness/int_exactness.md), a C++
program which tests the polynomial exactness of a quadrature rule for a
finite interval.

[INT\_EXACTNESS\_CHEBYSHEV1](../../master/int_exactness_chebyshev1/int_exactness_chebyshev1.md),
a C++ program which tests the polynomial exactness of Gauss-Chebyshev
type 1 quadrature rules.

[INT\_EXACTNESS\_GEGENBAUER](../../master/int_exactness_gegenbauer/int_exactness_gegenbauer.md),
a C++ program which tests the polynomial exactness of Gauss-Gegenbauer
quadrature rules.

[INT\_EXACTNESS\_GEN\_HERMITE](../../master/int_exactness_gen_hermite/int_exactness_gen_hermite.md),
a C++ program which tests the polynomial exactness of generalized
Gauss-Hermite quadrature rules.

[INT\_EXACTNESS\_GEN\_LAGUERRE](../../master/int_exactness_gen_laguerre/int_exactness_gen_laguerre.md),
a C++ program which tests the polynomial exactness of generalized
Gauss-Laguerre quadrature rules.

[INT\_EXACTNESS\_JACOBI](../../master/int_exactness_jacobi/int_exactness_jacobi.md),
a C++ program which tests the polynomial exactness of Gauss-Jacobi
quadrature rules.

[LAGUERRE\_EXACTNESS](../../master/laguerre_exactness/laguerre_exactness.md),
a C++ program which tests the polynomial exactness of Gauss-Laguerre
quadrature rules for integration over \[0,+oo) with density function
exp(-x).

[LEGENDRE\_EXACTNESS](../../master/legendre_exactness/legendre_exactness.md),
a C++ program which tests the monomial exactness of quadrature rules for
the Legendre problem of integrating a function with density 1 over the
interval \[-1,+1\].

### Reference: {#reference align="center"}

1.  Philip Davis, Philip Rabinowitz,\
    Methods of Numerical Integration,\
    Second Edition,\
    Dover, 2007,\
    ISBN: 0486453391,\
    LC: QA299.3.D28.

### Source Code: {#source-code align="center"}

-   [int\_exactness\_chebyshev2.cpp](int_exactness_chebyshev2.cpp), the
    source code.

### Examples and Tests: {#examples-and-tests align="center"}

**CHEBY2\_O1** is a standard Gauss-Chebyshev type 2 order 1 rule.

-   [cheby2\_o1\_x.txt](../../datasets/quadrature_rules_chebyshev2/cheby2_o1_x.txt),
    the abscissas of the rule.
-   [cheby2\_o1\_w.txt](../../datasets/quadrature_rules_chebyshev2/cheby2_o1_w.txt),
    the weights of the rule.
-   [cheby2\_o1\_r.txt](../../datasets/quadrature_rules_chebyshev2/cheby2_o1_r.txt),
    defines the region for the rule.
-   [cheby2\_o1\_exact.txt](cheby2_o1_exact.txt), the results of the
    command

    > **int\_exactness\_chebyshev2 cheby2\_o1 5**

**CHEBY2\_O2** is a standard Gauss-Chebyshev type 2 order 2 rule.

-   [cheby2\_o2\_x.txt](../../datasets/quadrature_rules_chebyshev2/cheby2_o2_x.txt),
    the abscissas of the rule.
-   [cheby2\_o2\_w.txt](../../datasets/quadrature_rules_chebyshev2/cheby2_o2_w.txt),
    the weights of the rule.
-   [cheby2\_o2\_r.txt](../../datasets/quadrature_rules_chebyshev2/cheby2_o2_r.txt),
    defines the region for the rule.
-   [cheby2\_o2\_exact.txt](cheby2_o2_exact.txt), the results of the
    command

    > **int\_exactness\_chebyshev2 cheby2\_o2 5**

**CHEBY2\_O4** is a standard Gauss-Chebyshev type 2 order 4 rule.

-   [cheby2\_o4\_x.txt](../../datasets/quadrature_rules_chebyshev2/cheby2_o4_x.txt),
    the abscissas of the rule.
-   [cheby2\_o4\_w.txt](../../datasets/quadrature_rules_chebyshev2/cheby2_o4_w.txt),
    the weights of the rule.
-   [cheby2\_o4\_r.txt](../../datasets/quadrature_rules_chebyshev2/cheby2_o4_r.txt),
    defines the region for the rule.
-   [cheby2\_o4\_exact.txt](cheby2_o4_exact.txt), the results of the
    command

    > **int\_exactness\_chebyshev2 cheby2\_o4 10**

**CHEBY2\_O8** is a standard Gauss-Chebyshev type 2 order 8 rule.

-   [cheby2\_o8\_x.txt](../../datasets/quadrature_rules_chebyshev2/cheby2_o8_x.txt),
    the abscissas of the rule.
-   [cheby2\_o8\_w.txt](../../datasets/quadrature_rules_chebyshev2/cheby2_o8_w.txt),
    the weights of the rule.
-   [cheby2\_o8\_r.txt](../../datasets/quadrature_rules_chebyshev2/cheby2_o8_r.txt),
    defines the region for the rule.
-   [cheby2\_o8\_exact.txt](cheby2_o8_exact.txt), the results of the
    exactness test.

**CHEBY2\_O16** is a standard Gauss-Chebyshev type 2 order 16 rule.

-   [cheby2\_o16\_x.txt](../../datasets/quadrature_rules_chebyshev2/cheby2_o16_x.txt),
    the abscissas of the rule.
-   [cheby2\_o16\_w.txt](../../datasets/quadrature_rules_chebyshev2/cheby2_o16_w.txt),
    the weights of the rule.
-   [cheby2\_o16\_r.txt](../../datasets/quadrature_rules_chebyshev2/cheby2_o16_r.txt),
    defines the region for the rule.
-   [cheby2\_o16\_exact.txt](cheby2_o16_exact.txt), the results of the
    command

    > **int\_exactness\_chebyshev2 cheby2\_o16 35**

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for INT\_EXACTNESS\_CHEBYSHEV2.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is a case insensitive comparison of two characters for
    equality.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **CHEBYSHEV2\_INTEGRAL** evaluates a Chebyshev type 2 monomial
    integral.
-   **DTABLE\_DATA\_READ** reads data from a DTABLE file.
-   **DTABLE\_HEADER\_READ** reads the header from a DTABLE file.
-   **FILE\_COLUMN\_COUNT** counts the number of columns in the first
    line of a file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **MONOMIAL\_QUADRATURE\_CHEBYSHEV2** applies quadrature to a
    Chebyshev type 2 monomial.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TIMESTRING** writes the current YMDHMS date into a string.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 03 March 2008.*
