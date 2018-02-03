INT\_EXACTNESS\_CHEBYSHEV1\
Exactness of Gauss-Chebyshev Type 1 Quadrature Rules {#int_exactness_chebyshev1-exactness-of-gauss-chebyshev-type-1-quadrature-rules align="center"}
====================================================

------------------------------------------------------------------------

**INT\_EXACTNESS\_CHEBYSHEV1** is a C++ program which investigates the
polynomial exactness of a Gauss-Chebyshev type 1 quadrature rule for the
interval \[-1,+1\].

Standard Gauss-Chebyshev type 1 quadrature assumes that the integrand we
are considering has a form like:

            Integral ( -1 <= x <= +1 ) f(x) / sqrt ( 1 - x^2 ) dx
          

A *standard Gauss-Chebyshev type 1 quadrature rule* is a set of **n**
positive weights **w** and abscissas **x** so that

            Integral ( -1 <= x <= +1 ) f(x) / ( sqrt ( 1 - x^2 ) dx
          

may be approximated by

            Sum ( 1 <= I <= N ) w(i) * f(x(i))
          

For a standard Gauss-Chebyshev type 1 rule, polynomial exactness is
defined in terms of the function **f(x)**. That is, we say the rule is
exact for polynomials up to degree DEGREE\_MAX if, for any polynomial
**f(x)** of that degree or less, the quadrature rule will produce the
exact value of

            Integral ( -1 <= x <= +1 ) f(x) / sqrt ( 1 - x^2 ) dx
          

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

For information on the form of these files, see the QUADRATURE\_RULES
directory listed below.

The exactness results are written to an output file with the
corresponding name:

-   *prefix*\_**exact.txt**

### Usage: {#usage align="center"}

> **int\_exactness\_chebyshev1** *prefix* *degree\_max*

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

**INT\_EXACTNESS\_CHEBYSHEV1** is available in [a C++
version](../../cpp_src/int_exactness_chebyshev1/int_exactness_chebyshev1.html)
and [a FORTRAN90
version](../../f_src/int_exactness_chebyshev1/int_exactness_chebyshev1.html)
and [a MATLAB
version](../../m_src/int_exactness_chebyshev1/int_exactness_chebyshev1.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CHEBYSHEV\_POLYNOMIAL](../../cpp_src/chebyshev_polynomial/chebyshev_polynomial.html),
a C++ library which evaluates the Chebyshev polynomial and associated
functions.

[CHEBYSHEV1\_RULE](../../cpp_src/chebyshev1_rule/chebyshev1_rule.html),
a C++ program which generates a Gauss-Chebyshev type 1 quadrature rule.

[HERMITE\_EXACTNESS](../../cpp_src/hermite_exactness/hermite_exactness.html),
a C++ program which tests the polynomial exactness of Gauss-Hermite
quadrature rules.

[INT\_EXACTNESS](../../cpp_src/int_exactness/int_exactness.html), a C++
program which tests the polynomial exactness of a quadrature rule for a
finite interval.

[INT\_EXACTNESS\_CHEBYSHEV2](../../cpp_src/int_exactness_chebyshev2/int_exactness_chebyshev2.html),
a C++ program which tests the polynomial exactness of Gauss-Chebyshev
type 2 quadrature rules.

[INT\_EXACTNESS\_GEGENBAUER](../../cpp_src/int_exactness_gegenbauer/int_exactness_gegenbauer.html),
a C++ program which tests the polynomial exactness of Gauss-Gegenbauer
quadrature rules.

[INT\_EXACTNESS\_GEN\_HERMITE](../../cpp_src/int_exactness_gen_hermite/int_exactness_gen_hermite.html),
a C++ program which tests the polynomial exactness of generalized
Gauss-Hermite quadrature rules.

[INT\_EXACTNESS\_GEN\_LAGUERRE](../../cpp_src/int_exactness_gen_laguerre/int_exactness_gen_laguerre.html),
a C++ program which tests the polynomial exactness of generalized
Gauss-Laguerre quadrature rules.

[INT\_EXACTNESS\_JACOBI](../../cpp_src/int_exactness_jacobi/int_exactness_jacobi.html),
a C++ program which tests the polynomial exactness of Gauss-Jacobi
quadrature rules.

[LAGUERRE\_EXACTNESS](../../cpp_src/laguerre_exactness/laguerre_exactness.html),
a C++ program which tests the polynomial exactness of Gauss-Laguerre
quadrature rules for integration over \[0,+oo) with density function
exp(-x).

[LEGENDRE\_EXACTNESS](../../cpp_src/legendre_exactness/legendre_exactness.html),
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

-   [int\_exactness\_chebyshev1.cpp](int_exactness_chebyshev1.cpp), the
    source code.

### Examples and Tests: {#examples-and-tests align="center"}

**CHEBY1\_O1** is a standard Gauss-Chebyshev type 1 order 1 rule.

-   [cheby1\_o1\_x.txt](../../datasets/quadrature_rules_chebyshev1/cheby1_o1_x.txt),
    the abscissas of the rule.
-   [cheby1\_o1\_w.txt](../../datasets/quadrature_rules_chebyshev1/cheby1_o1_w.txt),
    the weights of the rule.
-   [cheby1\_o1\_r.txt](../../datasets/quadrature_rules_chebyshev1/cheby1_o1_r.txt),
    defines the region for the rule.
-   [cheby1\_o1\_exact.txt](cheby1_o1_exact.txt), the results of the
    command

    > **int\_exactness\_chebyshev1 cheby1\_o1 5**

**CHEBY1\_O2** is a standard Gauss-Chebyshev type 1 order 2 rule.

-   [cheby1\_o2\_x.txt](../../datasets/quadrature_rules_chebyshev1/cheby1_o2_x.txt),
    the abscissas of the rule.
-   [cheby1\_o2\_w.txt](../../datasets/quadrature_rules_chebyshev1/cheby1_o2_w.txt),
    the weights of the rule.
-   [cheby1\_o2\_r.txt](../../datasets/quadrature_rules_chebyshev1/cheby1_o2_r.txt),
    defines the region for the rule.
-   [cheby1\_o2\_exact.txt](cheby1_o2_exact.txt), the results of the
    command

    > **int\_exactness\_chebyshev1 cheby1\_o2 5**

**CHEBY1\_O4** is a standard Gauss-Chebyshev type 1 order 4 rule.

-   [cheby1\_o4\_x.txt](../../datasets/quadrature_rules_chebyshev1/cheby1_o4_x.txt),
    the abscissas of the rule.
-   [cheby1\_o4\_w.txt](../../datasets/quadrature_rules_chebyshev1/cheby1_o4_w.txt),
    the weights of the rule.
-   [cheby1\_o4\_r.txt](../../datasets/quadrature_rules_chebyshev1/cheby1_o4_r.txt),
    defines the region for the rule.
-   [cheby1\_o4\_exact.txt](cheby1_o4_exact.txt), the results of the
    command

    > **int\_exactness\_chebyshev1 cheby1\_o4 10**

**CHEBY1\_O8** is a standard Gauss-Chebyshev type 1 order 8 rule.

-   [cheby1\_o8\_x.txt](../../datasets/quadrature_rules_chebyshev1/cheby1_o8_x.txt),
    the abscissas of the rule.
-   [cheby1\_o8\_w.txt](../../datasets/quadrature_rules_chebyshev1/cheby1_o8_w.txt),
    the weights of the rule.
-   [cheby1\_o8\_r.txt](../../datasets/quadrature_rules_chebyshev1/cheby1_o8_r.txt),
    defines the region for the rule.
-   [cheby1\_o8\_exact.txt](cheby1_o8_exact.txt), the results of the
    exactness test.

**CHEBY1\_O16** is a standard Gauss-Chebyshev type 1 order 16 rule.

-   [cheby1\_o16\_x.txt](../../datasets/quadrature_rules_chebyshev1/cheby1_o16_x.txt),
    the abscissas of the rule.
-   [cheby1\_o16\_w.txt](../../datasets/quadrature_rules_chebyshev1/cheby1_o16_w.txt),
    the weights of the rule.
-   [cheby1\_o16\_r.txt](../../datasets/quadrature_rules_chebyshev1/cheby1_o16_r.txt),
    defines the region for the rule.
-   [cheby1\_o16\_exact.txt](cheby1_o16_exact.txt), the results of the
    command

    > **int\_exactness\_chebyshev1 cheby1\_o16 35**

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for INT\_EXACTNESS\_CHEBYSHEV1.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is a case insensitive comparison of two characters for
    equality.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **CHEBYSHEV1\_INTEGRAL** evaluates a Chebyshev type 1 monomial
    integral.
-   **DTABLE\_DATA\_READ** reads data from a DTABLE file.
-   **DTABLE\_HEADER\_READ** reads the header from a DTABLE file.
-   **FILE\_COLUMN\_COUNT** counts the number of columns in the first
    line of a file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **MONOMIAL\_QUADRATURE\_CHEBYSHEV1** applies quadrature to a
    Chebyshev type 1 monomial.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TIMESTRING** writes the current YMDHMS date into a string.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 02 March 2008.*
