LAGUERRE\_EXACTNESS\
Exactness of Gauss-Laguerre Quadrature Rules {#laguerre_exactness-exactness-of-gauss-laguerre-quadrature-rules align="center"}
============================================

------------------------------------------------------------------------

**LAGUERRE\_EXACTNESS** is a C++ program which investigates the
polynomial exactness of a Gauss-Laguerre quadrature rule for the
semi-infinite interval \[0,+oo) or \[A,+oo).

Standard Gauss-Laguerre quadrature assumes that the integrand we are
considering has a form like:

            Integral ( A <= x < +oo ) exp(-x) f(x) dx
          

where the factor **exp(-x)** is regarded as a weight factor.

A *standard Gauss-Laguerre quadrature rule* is a set of **n** positive
weights **w** and abscissas **x** so that

            Integral ( A <= x < +oo ) exp(-x) f(x) dx
          

may be approximated by

            Sum ( 1 <= I <= N ) w(i) * f(x(i))
          

It is often convenient to consider approximating integrals in which the
weighting factor **exp(-x)** is implicit. In that case, we are looking
at approximating

            Integral ( A <= x < +oo ) f(x) dx
          

and it is easy to modify a standard Gauss-Laguerre quadrature rule to
handle this case directly.

A *modified Gauss-Laguerre quadrature rule* is a set of **n** positive
weights **w** and abscissas **x** so that

            Integral ( A <= x < +oo ) f(x) dx
          

may be approximated by

            Sum ( 1 <= I <= N ) w(i) * f(x(i))
          

When using a Gauss-Laguerre quadrature rule, it's important to know
whether the rule has been developed for the standard or modified cases.
Basically, the only change is that the weights of the modified rule have
been multiplied by an exponential factor evaluated at the corresponding
abscissa.

For a standard Gauss-Laguerre rule, polynomial exactness is defined in
terms of the function **f(x)**. That is, we say the rule is exact for
polynomials up to degree DEGREE\_MAX if, for any polynomial **f(x)** of
that degree or less, the quadrature rule will produce the exact value of

            Integral ( 0 <= x < +oo ) exp(-x) f(x) dx
          

For a modified Gauss-Laguerre rule, polynomial exactness is defined in
terms of the function **f(x)** divided by the implicit weight function.
That is, we say a modified Gauss-Laguerre rule is exact for polynomials
up to degree DEGREE\_MAX if, for any integrand **f(x)** with the
property that **exp(+x) \* f(x)** is a polynomial of degree no more than
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
rule, then the monomials are multiplied by **exp(-x)** when performing
the exactness test.

Since

            Integral ( 0 <= x < +oo ) exp(-x) xn dx = n!
          

our test monomial functions, in order to integrate to 1, will be
normalized to:

            Integral ( 0 <= x < +oo ) exp(-x) xn / n! dx
          

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

The exactness results are written to an output file with the
corresponding name:

-   *prefix*\_**exact.txt**

### Usage: {#usage align="center"}

> **laguerre\_exactness** *prefix* *degree\_max* *option*

where

-   *prefix* is the common prefix for the files containing the abscissa,
    weight and region information of the quadrature rule;
-   *degree\_max* is the maximum monomial degree to check. This would
    normally be a relatively small nonnegative number, such as 5, 10
    or 15.
-   *option* is:\
    0: a standard rule for integrating exp(-x)\*f(x).\
    1: a modified rule for integrating f(x).

If the arguments are not supplied on the command line, the program will
prompt for them.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**LAGUERRE\_EXACTNESS** is available in [a C
version](../../c_src/laguerre_exactness/laguerre_exactness.md) and [a
C++ version](../../master/laguerre_exactness/laguerre_exactness.md)
and [a FORTRAN77
version](../../f77_src/laguerre_exactness/laguerre_exactness.md) and
[a FORTRAN90
version](../../f_src/laguerre_exactness/laguerre_exactness.md) and [a
MATLAB version](../../m_src/laguerre_exactness/laguerre_exactness.md).

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

[LAGUERRE\_RULE](../../master/laguerre_rule/laguerre_rule.md), a C++
program which can generate a Gauss-Laguerre quadrature rule on request.

[LAGUERRE\_TEST\_INT](../../master/laguerre_test_int/laguerre_test_int.md),
a C++ library which defines test integrands for integration over
\[A,+oo).

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

-   [laguerre\_exactness.cpp](laguerre_exactness.cpp), the source code.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for LAGUERRE\_EXACTNESS.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **FILE\_COLUMN\_COUNT** counts the columns in the first line of a
    file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **LAGUERRE\_INTEGRAL** evaluates a monomial Laguerre integral.
-   **MONOMIAL\_QUADRATURE\_LAGUERRE** applies a quadrature rule to a
    monomial.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_FACTORIAL** computes the factorial of N, also denoted "N!".
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

*Last revised on 14 May 2014.*
