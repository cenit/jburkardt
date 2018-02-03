INT\_EXACTNESS\_GEN\_LAGUERRE\
Exactness of Generalized Gauss-Laguerre Quadrature Rules {#int_exactness_gen_laguerre-exactness-of-generalized-gauss-laguerre-quadrature-rules align="center"}
========================================================

------------------------------------------------------------------------

**INT\_EXACTNESS\_GEN\_LAGUERRE** is a C++ program which investigates
the polynomial exactness of a generalized Gauss-Laguerre quadrature rule
for the semi-infinite interval \[0,+oo) or \[A,+oo).

Standard generalized Gauss-Laguerre quadrature assumes that the
integrand we are considering has a form like:

            Integral ( A <= x < +oo ) x^alpha * exp(-x) * f(x) dx
          

where the factor **x\^alpha \* exp(-x)** is regarded as a weight factor.

A *standard generalized Gauss-Laguerre quadrature rule* is a set of
**n** positive weights **w** and abscissas **x** so that

            Integral ( A <= x < +oo ) x^alpha * exp(-x) * f(x) dx
          

may be approximated by

            Sum ( 1 <= I <= N ) w(i) * f(x(i))
          

It is often convenient to consider approximating integrals in which the
weighting factor **x\^alpha \* exp(-x)** is implicit. In that case, we
are looking at approximating

            Integral ( A <= x < +oo ) f(x) dx
          

and it is easy to modify a standard generalized Gauss-Laguerre
quadrature rule to handle this case directly.

A *modified generalized Gauss-Laguerre quadrature rule* is a set of
**n** positive weights **w** and abscissas **x** so that

            Integral ( A <= x < +oo ) f(x) dx
          

may be approximated by

            Sum ( 1 <= I <= N ) w(i) * f(x(i))
          

When using a generalized Gauss-Laguerre quadrature rule, it's important
to know whether the rule has been developed for the standard or modified
cases. Basically, the only change is that the weights of the modified
rule have been divided by the weighting function evaluated at the
corresponding abscissa.

For a standard generalized Gauss-Laguerre rule, polynomial exactness is
defined in terms of the function **f(x)**. That is, we say the rule is
exact for polynomials up to degree DEGREE\_MAX if, for any polynomial
**f(x)** of that degree or less, the quadrature rule will produce the
exact value of

            Integral ( 0 <= x < +oo ) x^alpha * exp(-x) * f(x) dx
          

For a modified generalized Gauss-Laguerre rule, polynomial exactness is
defined in terms of the function **f(x)** divided by the implicit
weighting function. That is, we say a modified generalized
Gauss-Laguerre rule is exact for polynomials up to degree DEGREE\_MAX
if, for any integrand **f(x)** with the property that
**f(x)/(x\^alpha\*exp(-x))** is a polynomial of degree no more than
DEGREE\_MAX, the quadrature rule will product the exact value of:

            Integral ( 0 <= x < +oo ) f(x) dx
          

The program starts at **DEGREE** = 0, and then proceeds to **DEGREE** =
1, 2, and so on up to a maximum degree **DEGREE\_MAX** specified by the
user. At each value of **DEGREE**, the program generates the
corresponding monomial term, applies the quadrature rule to it, and
determines the quadrature error. The program uses a scaling factor on
each monomial so that the exact integral should always be 1; therefore,
each reported error can be compared on a fixed scale.

If the program understands that the rule being considered is a modified
rule, then the monomials are multiplied by **x\^alpha \* exp(-x)** when
performing the exactness test.

Since

            Integral ( 0 <= x < +oo ) x^alpha * exp(-x) * xn dx = gamma(n+alpha+1)
          

our test monomial functions, in order to integrate to 1, will be
normalized to:

            Integral ( 0 <= x < +oo ) x^alpha * exp(-x) xn / gamma(n+alpha+1) dx
          

It should be clear that accuracy will be rapidly lost as **n**
increases.

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

> **int\_exactness\_gen\_laguerre** *prefix* *degree\_max* *alpha*
> *option*

where

-   *prefix* is the common prefix for the files containing the abscissa,
    weight and region information of the quadrature rule;
-   *degree\_max* is the maximum monomial degree to check. This would
    normally be a relatively small nonnegative number, such as 5, 10
    or 15.
-   *alpha* is the value of the parameter, which should be a real number
    greater than -1. Setting *alpha* to 0.0 results in the basic
    (non-generalized) Gauss-Laguerre rule.
-   *option*:\
    0 indicates a standard rule for integrating
    x\^alpha\*exp(-x)\*f(x).\
    1 indicates a modified rule for integrating f(x).

If the arguments are not supplied on the command line, the program will
prompt for them.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**INT\_EXACTNESS\_GEN\_LAGUERRE** is available in [a C++
version](../../master/int_exactness_gen_laguerre/int_exactness_gen_laguerre.md)
and [a FORTRAN90
version](../../f_src/int_exactness_gen_laguerre/int_exactness_gen_laguerre.md)
and [a MATLAB
version](../../m_src/int_exactness_gen_laguerre/int_exactness_gen_laguerre.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[GEN\_LAGUERRE\_RULE](../../master/gen_laguerre_rule/gen_laguerre_rule.md),
a C++ program which can generate a generalized Gauss-Laguerre quadrature
rule on request.

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

[INT\_EXACTNESS\_JACOBI](../../master/int_exactness_jacobi/int_exactness_jacobi.md),
a C++ program which tests the polynomial exactness of a Gauss-Jacobi
quadrature rule.

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

-   [int\_exactness\_gen\_laguerre.cpp](int_exactness_gen_laguerre.cpp),
    the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**GEN\_LAG\_O1\_A0.5** is a standard generalized Gauss-Laguerre order 1
rule with ALPHA = 0.5.

-   [gen\_lag\_o1\_a0.5\_x.txt](../../datasets/quadrature_rules_gen_laguerre/gen_lag_o1_a0.5_x.txt),
    the abscissas of the rule.
-   [gen\_lag\_o1\_a0.5\_w.txt](../../datasets/quadrature_rules_gen_laguerre/gen_lag_o1_a0.5_w.txt),
    the weights of the rule.
-   [gen\_lag\_o1\_a0.5\_r.txt](../../datasets/quadrature_rules_gen_laguerre/gen_lag_o1_a0.5_r.txt),
    defines the region for the rule.
-   [gen\_lag\_o1\_a0.5\_exact.txt](gen_lag_o1_a0.5_exact.txt), the
    results of the command

    > **int\_exactness\_gen\_laguerre gen\_lag\_o1\_a0.5 5 0.5 0**

**GEN\_LAG\_O2\_A0.5** is a standard generalized Gauss-Laguerre order 2
rule with ALPHA = 0.5.

-   [gen\_lag\_o2\_a0.5\_x.txt](../../datasets/quadrature_rules_gen_laguerre/gen_lag_o2_a0.5_x.txt),
    the abscissas of the rule.
-   [gen\_lag\_o2\_a0.5\_w.txt](../../datasets/quadrature_rules_gen_laguerre/gen_lag_o2_a0.5_w.txt),
    the weights of the rule.
-   [gen\_lag\_o2\_a0.5\_r.txt](../../datasets/quadrature_rules_gen_laguerre/gen_lag_o2_a0.5_r.txt),
    defines the region for the rule.
-   [gen\_lag\_o2\_a0.5\_exact.txt](gen_lag_o2_a0.5_exact.txt), the
    results of the command

    > **int\_exactness\_gen\_laguerre gen\_lag\_o2\_a0.5 5 0.5 0**

**GEN\_LAG\_O4\_A0.5** is a standard generalized Gauss-Laguerre order 4
rule with ALPHA = 0.5.

-   [gen\_lag\_o4\_a0.5\_x.txt](../../datasets/quadrature_rules_gen_laguerre/gen_lag_o4_a0.5_x.txt),
    the abscissas of the rule.
-   [gen\_lag\_o4\_a0.5\_w.txt](../../datasets/quadrature_rules_gen_laguerre/gen_lag_o4_a0.5_w.txt),
    the weights of the rule.
-   [gen\_lag\_o4\_a0.5\_r.txt](../../datasets/quadrature_rules_gen_laguerre/gen_lag_o4_a0.5_r.txt),
    defines the region for the rule.
-   [gen\_lag\_o4\_a0.5\_exact.txt](gen_lag_o4_a0.5_exact.txt), the
    results of the command

    > **int\_exactness\_gen\_laguerre gen\_lag\_o4\_a0.5 10 0.5 0**

**GEN\_LAG\_O8\_A0.5** is a standard generalized Gauss-Laguerre order 8
rule with ALPHA = 0.5.

-   [gen\_lag\_o8\_a0.5\_x.txt](../../datasets/quadrature_rules_gen_laguerre/gen_lag_o8_a0.5_x.txt),
    the abscissas of the rule.
-   [gen\_lag\_o8\_a0.5\_w.txt](../../datasets/quadrature_rules_gen_laguerre/gen_lag_o8_a0.5_w.txt),
    the weights of the rule.
-   [gen\_lag\_o8\_a0.5\_r.txt](../../datasets/quadrature_rules_gen_laguerre/gen_lag_o8_a0.5_r.txt),
    defines the region for the rule.
-   [gen\_lag\_o8\_a0.5\_exact.txt](gen_lag_o8_a0.5_exact.txt), the
    results of the command

    > **int\_exactness\_gen\_laguerre gen\_lag\_o8\_a0.5 18 0.5 0**

**GEN\_LAG\_O16\_A0.5** is a standard generalized Gauss-Laguerre order
16 rule with ALPHA = 0.5.

-   [gen\_lag\_o16\_a0.5\_x.txt](../../datasets/quadrature_rules_gen_laguerre/gen_lag_o16_a0.5_x.txt),
    the abscissas of the rule.
-   [gen\_lag\_o16\_a0.5\_w.txt](../../datasets/quadrature_rules_gen_laguerre/gen_lag_o16_a0.5_w.txt),
    the weights of the rule.
-   [gen\_lag\_o16\_a0.5\_r.txt](../../datasets/quadrature_rules_gen_laguerre/gen_lag_o16_a0.5_r.txt),
    defines the region for the rule.
-   [gen\_lag\_o16\_a0.5\_exact.txt](gen_lag_o16_a0.5_exact.txt), the
    results of the command

    > **int\_exactness\_gen\_laguerre gen\_lag\_o16\_a0.5 35 0.5 0**

**GEN\_LAG\_O1\_A0.5\_MODIFIED** is a modified generalized
Gauss-Laguerre order 1 rule with ALPHA = 0.5.

-   [gen\_lag\_o1\_a0.5\_modified\_x.txt](../../datasets/quadrature_rules_gen_laguerre/gen_lag_o1_a0.5_modified_x.txt),
    the abscissas of the rule.
-   [gen\_lag\_o1\_a0.5\_modified\_w.txt](../../datasets/quadrature_rules_gen_laguerre/gen_lag_o1_a0.5_modified_w.txt),
    the weights of the rule.
-   [gen\_lag\_o1\_a0.5\_modified\_r.txt](../../datasets/quadrature_rules_gen_laguerre/gen_lag_o1_a0.5_modified_r.txt),
    defines the region for the rule.
-   [gen\_lag\_o1\_a0.5\_modified\_exact.txt](gen_lag_o1_a0.5_modified_exact.txt),
    the results of the command

    > **int\_exactness\_gen\_laguerre gen\_lag\_o1\_a0.5\_modified 5 0.5
    > 1**

**GEN\_LAG\_O2\_A0.5\_MODIFIED** is a modified generalized
Gauss-Laguerre order 2 rule with ALPHA = 0.5.

-   [gen\_lag\_o2\_a0.5\_modified\_x.txt](../../datasets/quadrature_rules_gen_laguerre/gen_lag_o2_a0.5_modified_x.txt),
    the abscissas of the rule.
-   [gen\_lag\_o2\_a0.5\_modified\_w.txt](../../datasets/quadrature_rules_gen_laguerre/gen_lag_o2_a0.5_modified_w.txt),
    the weights of the rule.
-   [gen\_lag\_o2\_a0.5\_modified\_r.txt](../../datasets/quadrature_rules_gen_laguerre/gen_lag_o2_a0.5_modified_r.txt),
    defines the region for the rule.
-   [gen\_lag\_o2\_a0.5\_modified\_exact.txt](gen_lag_o2_a0.5_modified_exact.txt),
    the results of the command

    > **int\_exactness\_gen\_laguerre gen\_lag\_o2\_a0.5\_modified 5 0.5
    > 1**

**GEN\_LAG\_O4\_A0.5\_MODIFIED** is a modified generalized
Gauss-Laguerre order 4 rule with ALPHA = 0.5.

-   [gen\_lag\_o4\_a0.5\_modified\_x.txt](../../datasets/quadrature_rules_gen_laguerre/gen_lag_o4_a0.5_modified_x.txt),
    the abscissas of the rule.
-   [gen\_lag\_o4\_a0.5\_modified\_w.txt](../../datasets/quadrature_rules_gen_laguerre/gen_lag_o4_a0.5_modified_w.txt),
    the weights of the rule.
-   [gen\_lag\_o4\_a0.5\_modified\_r.txt](../../datasets/quadrature_rules_gen_laguerre/gen_lag_o4_a0.5_modified_r.txt),
    defines the region for the rule.
-   [gen\_lag\_o4\_a0.5\_modified\_exact.txt](lag_o4_a0.5_modified_exact.txt),
    the results of the command

    > **int\_exactness\_gen\_laguerre gen\_lag\_o4\_a0.5\_modified 10
    > 0.5 1**

**GEN\_LAG\_O8\_A0.5\_MODIFIED** is a modified generalized
Gauss-Laguerre order 8 rule with ALPHA = 0.5.

-   [gen\_lag\_o8\_a0.5\_modified\_x.txt](../../datasets/quadrature_rules_gen_laguerre/gen_lag_o8_a0.5_modified_x.txt),
    the abscissas of the rule.
-   [gen\_lag\_o8\_a0.5\_modified\_w.txt](../../datasets/quadrature_rules_gen_laguerre/gen_lag_o8_a0.5_modified_w.txt),
    the weights of the rule.
-   [gen\_lag\_o8\_a0.5\_modified\_r.txt](../../datasets/quadrature_rules_gen_laguerre/gen_lag_o8_a0.5_modified_r.txt),
    defines the region for the rule.
-   [gen\_lag\_o8\_a0.5\_modified\_exact.txt](gen_lag_o8_a0.5_modified_exact.txt),
    the results of the command

    > **int\_exactness\_gen\_laguerre gen\_lag\_o8\_a0.5\_modified 18
    > 0.5 1**

**GEN\_LAG\_O16\_A0.5\_MODIFIED** is a modified generalized
Gauss-Laguerre order 16 rule with ALPHA = 0.5.

-   [gen\_lag\_o16\_a0.5\_modified\_x.txt](../../datasets/quadrature_rules_gen_laguerre/gen_lag_o16_a0.5_modified_x.txt),
    the abscissas of the rule.
-   [gen\_lag\_o16\_a0.5\_modified\_w.txt](../../datasets/quadrature_rules_gen_laguerre/gen_lag_o16_a0.5_modified_w.txt),
    the weights of the rule.
-   [gen\_lag\_o16\_a0.5\_modified\_r.txt](../../datasets/quadrature_rules_gen_laguerre/gen_lag_o16_a0.5_modified_r.txt),
    defines the region for the rule.
-   [gen\_lag\_o16\_a0.5\_modified\_exact.txt](gen_lag_o16_a0.5_modified_exact.txt),
    the results of the command

    > **int\_exactness\_gen\_laguerre gen\_lag\_o16\_a0.5\_modified 35
    > 0.5 1**

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for INT\_EXACTNESS\_GEN\_LAGUERRE.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **DTABLE\_DATA\_READ** reads the data from a DTABLE file.
-   **DTABLE\_HEADER\_READ** reads the header from a DTABLE file.
-   **FILE\_COLUMN\_COUNT** counts the number of columns in the first
    line of a file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **MONOMIAL\_QUADRATURE\_GEN\_LAGUERRE** applies a quadrature rule to
    a monomial.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_GAMMA** evaluates Gamma(X) for a real argument.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TIMESTRING** returns the current YMDHMS date as a string.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 11 February 2008.*
