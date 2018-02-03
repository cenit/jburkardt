LEGENDRE\_EXACTNESS\
Exactness of Gauss-Legendre Quadrature Rules {#legendre_exactness-exactness-of-gauss-legendre-quadrature-rules align="center"}
============================================

------------------------------------------------------------------------

**LEGENDRE\_EXACTNESS** is a C++ program which investigates the
polynomial exactness of a Gauss-Legendre quadrature rule for the
interval \[-1,+1\].

This program is actually appropriate for *any* quadrature rule that
estimates integrals on \[-1,+1\], and which does not including a
weighting function **w(x)** in the integral. This includes:

-   *Clenshaw-Curtis* rules;
-   *Fejer* rules of Type 1 or 2;
-   *Gauss-Legendre* rules;
-   *Gauss-Lobatto* rules (Gauss rule including both endpoints);
-   *Gauss-Patterson* rules;
-   *Gauss-Radau* rules (Gauss rule including one endpoint);
-   *Newton-Cotes* rules, open and closed forms;

Standard Gauss-Legendre quadrature assumes that the integrand we are
considering has a form like:

            Integral ( -1 <= x <= +1 ) f(x) dx
          

A *standard Gauss-Legendre quadrature rule* is a set of **n** positive
weights **w** and abscissas **x** so that

            Integral ( -1 <= x <= +1 ) f(x) dx
          

may be approximated by

            Sum ( 1 <= I <= N ) w(i) * f(x(i))
          

For a standard Gauss-Legendre rule, polynomial exactness is defined in
terms of the function **f(x)**. That is, we say the rule is exact for
polynomials up to degree DEGREE\_MAX if, for any polynomial **f(x)** of
that degree or less, the quadrature rule will produce the exact value of

            Integral ( -1 <= x <= +1 ) f(x) dx
          

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

The exactness results are written to an output file with the
corresponding name:

-   *prefix*\_**exact.txt**

### Usage: {#usage align="center"}

> **legendre\_exactness** *prefix* *degree\_max*

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

**LEGENDRE\_EXACTNESS** is available in [a C
version](../../c_src/legendre_exactness/legendre_exactness.md) and [a
C++ version](../../master/legendre_exactness/legendre_exactness.md)
and [a FORTRAN77
version](../../f77_src/legendre_exactness/legendre_exactness.md) and
[a FORTRAN90
version](../../f_src/legendre_exactness/legendre_exactness.md) and [a
MATLAB version](../../m_src/legendre_exactness/legendre_exactness.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[EXACTNESS](../../master/exactness/exactness.md), a C++ library which
investigates the exactness of quadrature rules that estimate the
integral of a function with a density, such as 1, exp(-x) or exp(-x\^2),
over an interval such as \[-1,+1\], \[0,+oo) or (-oo,+oo).

[HERMITE\_EXACTNESS](../../master/hermite_exactness/hermite_exactness.md),
a C++ program which tests the polynomial exactness of Gauss-Hermite
quadrature rules.

[INT\_EXACTNESS](../../master/int_exactness/int_exactness.md), a C++
program which tests the polynomial exactness of a quadrature rule for a
finite interval.

[INT\_EXACTNESS\_CHEBYSHEV1](../../master/int_exactness_chebyshev1/int_exactness_chebyshev1.md),
a C++ program which tests the polynomial exactness of Gauss-Chebyshev
type 1 quadrature rules.

[INT\_EXACTNESS\_CHEBYSHEV2](../../master/int_exactness_chebyshev2/int_exactness_chebyshev2.md),
a C++ program which tests the polynomial exactness of Gauss-Chebyshev
type 2 quadrature rules.

[INT\_EXACTNESS\_GEGENBAUER](../../master/int_exactness_gegenbauer/int_exactness_gegenbauer.md),
a C++ program which tests the polynomial exactness of Gauss-Gegenbauer
quadrature rules.

[INT\_EXACTNESS\_GEN\_HERMITE](../../master/int_exactness_gen_hermite/int_exactness_gen_hermite.md),
a C++ program which tests the polynomial exactness of a generalized
Gauss-Hermite quadrature rule.

[INT\_EXACTNESS\_GEN\_LAGUERRE](../../master/int_exactness_gen_laguerre/int_exactness_gen_laguerre.md),
a C++ program which tests the polynomial exactness of a generalized
Gauss-Laguerre quadrature rule.

[INT\_EXACTNESS\_JACOBI](../../master/int_exactness_jacobi/int_exactness_jacobi.md),
a C++ program which tests the polynomial exactness of a Gauss-Jacobi
quadrature rule.

[LAGUERRE\_EXACTNESS](../../master/laguerre_exactness/laguerre_exactness.md),
a C++ program which tests the polynomial exactness of Gauss-Laguerre
quadrature rules for integration over \[0,+oo) with density function
exp(-x).

[LEGENDRE\_RULE](../../master/legendre_rule/legendre_rule.md), a C++
program which generates a Gauss-Legendre quadrature rule on request.

[QUADRATURE\_RULES](../../datasets/quadrature_rules/quadrature_rules.md),
a dataset directory which contains sets of files that define quadrature
rules over various 1D intervals or multidimensional hypercubes.

[QUADRATURE\_RULES\_LEGENDRE](../../datasets/quadrature_rules_legendre/quadrature_rules_legendre.md),
a dataset directory which contains sets of files that define
Gauss-Legendre quadrature rules.

### Reference: {#reference align="center"}

1.  Philip Davis, Philip Rabinowitz,\
    Methods of Numerical Integration,\
    Second Edition,\
    Dover, 2007,\
    ISBN: 0486453391,\
    LC: QA299.3.D28.

### Source Code: {#source-code align="center"}

-   [legendre\_exactness.cpp](legendre_exactness.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**LEG\_O1** is a standard Gauss-Legendre order 1 rule.

-   [leg\_o1\_x.txt](../../datasets/quadrature_rules_legendre/leg_o1_x.txt),
    the abscissas of the rule.
-   [leg\_o1\_w.txt](../../datasets/quadrature_rules_legendre/leg_o1_w.txt),
    the weights of the rule.
-   [leg\_o1\_r.txt](../../datasets/quadrature_rules_legendre/leg_o1_r.txt),
    defines the region for the rule.
-   [leg\_o1\_exact.txt](../../datasets/quadrature_rules_legendre/leg_o1_exact.txt),
    the results of the command

    > **legendre\_exactness leg\_o1 5**

**LEG\_O2** is a standard Gauss-Legendre order 2 rule.

-   [leg\_o2\_x.txt](../../datasets/quadrature_rules_legendre/leg_o2_x.txt),
    the abscissas of the rule.
-   [leg\_o2\_w.txt](../../datasets/quadrature_rules_legendre/leg_o2_w.txt),
    the weights of the rule.
-   [leg\_o2\_r.txt](../../datasets/quadrature_rules_legendre/leg_o2_r.txt),
    defines the region for the rule.
-   [leg\_o2\_exact.txt](../../datasets/quadrature_rules_legendre/leg_o2_exact.txt),
    the results of the command

    > **legendre\_exactness leg\_o2 5**

**LEG\_O4** is a standard Gauss-Legendre order 4 rule.

-   [leg\_o4\_x.txt](../../datasets/quadrature_rules_legendre/leg_o4_x.txt),
    the abscissas of the rule.
-   [leg\_o4\_w.txt](../../datasets/quadrature_rules_legendre/leg_o4_w.txt),
    the weights of the rule.
-   [leg\_o4\_r.txt](../../datasets/quadrature_rules_legendre/leg_o4_r.txt),
    defines the region for the rule.
-   [leg\_o4\_exact.txt](../../datasets/quadrature_rules_legendre/leg_o4_exact.txt),
    the results of the command

    > **legendre\_exactness leg\_o4 10**

**LEG\_O8** is a standard Gauss-Legendre order 8 rule.

-   [leg\_o8\_x.txt](../../datasets/quadrature_rules_legendre/leg_o8_x.txt),
    the abscissas of the rule.
-   [leg\_o8\_w.txt](../../datasets/quadrature_rules_legendre/leg_o8_w.txt),
    the weights of the rule.
-   [leg\_o8\_r.txt](../../datasets/quadrature_rules_legendre/leg_o8_r.txt),
    defines the region for the rule.
-   [leg\_o8\_exact.txt](../../datasets/quadrature_rules_legendre/leg_o8_exact.txt),
    the results of the exactness test.

**LEG\_O16** is a standard Gauss-Legendre order 16 rule.

-   [leg\_o16\_x.txt](../../datasets/quadrature_rules_legendre/leg_o16_x.txt),
    the abscissas of the rule.
-   [leg\_o16\_w.txt](../../datasets/quadrature_rules_legendre/leg_o16_w.txt),
    the weights of the rule.
-   [leg\_o16\_r.txt](../../datasets/quadrature_rules_legendre/leg_o16_r.txt),
    defines the region for the rule.
-   [leg\_o16\_exact.txt](../../datasets/quadrature_rules_legendre/leg_o16_exact.txt),
    the results of the command

    > **legendre\_exactness leg\_o16 35**

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for LEGENDRE\_EXACTNESS.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **FILE\_COLUMN\_COUNT** counts the columns in the first line of a
    file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **LEGENDRE\_INTEGRAL** evaluates a monomial Legendre integral.
-   **MONOMIAL\_QUADRATURE\_LEGENDRE** applies a quadrature rule to a
    monomial.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8MAT\_DATA\_READ** reads the data from an R8MAT file.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 15 May 2015.*
