HERMITE\_EXACTNESS\
Exactness of Gauss-Hermite Quadrature Rules {#hermite_exactness-exactness-of-gauss-hermite-quadrature-rules align="center"}
===========================================

------------------------------------------------------------------------

**HERMITE\_EXACTNESS** is a C++ program which investigates the
polynomial exactness of a Gauss-Hermite quadrature rule for the infinite
interval (-oo,+oo).

The Gauss Hermite quadrature assumes that the integrand we are
considering has a form like:

            Integral ( -oo < x < +oo ) f(x) * rho(x) dx
          

where **rho(x)** is regarded as a weight factor.

We consider variations of the rule, depending on the form of the weight
factor rho(x):

-   **option** = 0, the unweighted rule:

                    rho(x) = 1
                  

-   **option** = 1, the physicist weighted rule:

                    rho(x) = exp(-x*x)
                  

-   **option** = 2, the probabilist weighted rule:

                    rho(x) = exp(-x*x/2)
                  

-   **option** = 3, the physicist normalized weighted rule:

                    rho(x) = exp(-x*x) / sqrt(pi)
                  

-   **option** = 4, the probabilist normalized weighted rule:

                    rho(x) = exp(-x*x/2) / sqrt(2 pi)
                  

The corresponding Gauss-Hermite rule that uses **order** points will
approximate the integral by

            sum ( 1 <= i <= order ) w(i) * f(x(i))
          

When using a Gauss-Hermite quadrature rule, it's important to know
whether the rule has been developed for the unweighted, physicist
weighted, probabilist weighted, physicist normalized weighted, or
probabilist normalized cases.

For an unweighted Gauss-Hermite rule, polynomial exactness may be
defined by assuming that **f(x)** has the form f(x) = exp(-x\*x) \* x\^n
for some nonnegative integer exponent **n**. We say an unweighted
Gauss-Hermite rule is exact for polynomials up to degree DEGREE\_MAX if
the quadrature rule will produce the correct value of the integrals of
such integrands for all exponents **n** from 0 to **DEGREE\_MAX**.

For a physicist or probabilist weighted Gauss-Hermite rules, polynomial
exactness may be defined by assuming that **f(x)** has the form f(x) =
x\^n for some nonnegative integer exponent **n**. We say the physicist
or probabilist weighted Gauss-Hermite rule is exact for polynomials up
to degree DEGREE\_MAX if the quadrature rule will produce the correct
value of the integrals of such integrands for all exponents **n** from 0
to **DEGREE\_MAX**.

To test the polynomial exactness of a Gauss-Hermite quadrature rule of
one of these forms, the program starts at **n** = 0, and then proceeds
to **n** = 1, 2, and so on up to a maximum degree **DEGREE\_MAX**
specified by the user. At each value of **n**, the program generates the
appropriate corresponding integrand function (either
**exp(-x\*x)\*x\^n** or **x\^n**), applies the quadrature rule to it,
and determines the quadrature error. The program uses a scaling factor
on each monomial so that the exact integral should always be 1;
therefore, each reported error can be compared on a fixed scale.

The program is very flexible and interactive. The quadrature rule is
defined by three files, to be read at input, and the maximum degree to
be checked is specified by the user as well.

Note that the three files that define the quadrature rule are assumed to
have related names, of the form

-   *prefix*\_**x.txt**
-   *prefix*\_**w.txt**
-   *prefix*\_**r.txt**

When running the program, the user only enters the common *prefix* part
of the file names, which is enough information for the program to find
all three files.

Note that when approximating these kinds of integrals, or even when
evaluating an exact formula for these integrals, numerical inaccuracies
can become overwhelming. The formula for the exact integral of
**x\^n\*exp(-x\*x)** (which we use to test for polynomial exactness)
involves the double factorial function, which "blows up" almost as fast
as the ordinary factorial. Thus, even for formulas of order 16, where we
would like to consider monomials up to degree 31, the evaluation of the
exact formula loses significant accuracy.

### Usage: {#usage align="center"}

> **hermite\_exactness** *prefix* *degree\_max* *option*

where

-   *prefix* is the common prefix for the files containing the abscissa,
    weight and region information of the quadrature rule;
-   *degree\_max* is the maximum monomial degree to check. This would
    normally be a relatively small nonnegative number, such as 5, 10
    or 15.
-   *option*: the weight option\
    0, rho(x) = 1,\
    1, rho(x) = exp(-x\*x),\
    2, rho(x) = exp(-x\*x/2),\
    3, rho(x) = exp(-x\*x)/sqrt(pi),\
    4, rho(x) = exp(-x\*x/2)/sqrt(2 pi).\

If the arguments are not supplied on the command line, the program will
prompt for them.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**HERMITE\_EXACTNESS** is available in [a C++
version](../../cpp_src/hermite_exactness/hermite_exactness.html) and [a
FORTRAN77
version](../../f77_src/hermite_exactness/hermite_exactness.html) and [a
FORTRAN90 version](../../f_src/hermite_exactness/hermite_exactness.html)
and [a MATLAB
version.](../../m_src/hermite_exactness/hermite_exactness.html)

### Related Data and Programs: {#related-data-and-programs align="center"}

[EXACTNESS](../../cpp_src/exactness/exactness.html), a C++ library which
investigates the exactness of quadrature rules that estimate the
integral of a function with a density, such as 1, exp(-x) or exp(-x\^2),
over an interval such as \[-1,+1\], \[0,+oo) or (-oo,+oo).

[HERMITE\_RULE](../../cpp_src/hermite_rule/hermite_rule.html), a C++
program which generates a Gauss-Hermite quadrature rule on request.

[HERMITE\_TEST\_INT](../../cpp_src/hermite_test_int/hermite_test_int.html),
a C++ library which defines test integrands for Hermite integrals with
interval (-oo,+oo) and density exp(-x\^2).

[INT\_EXACTNESS](../../cpp_src/int_exactness/int_exactness.html), a C++
program which tests the polynomial exactness of a quadrature rule for a
finite interval.

[INT\_EXACTNESS\_CHEBYSHEV1](../../cpp_src/int_exactness_chebyshev1/int_exactness_chebyshev1.html),
a C++ program which tests the polynomial exactness of Gauss-Chebyshev
type 1 quadrature rules.

[INT\_EXACTNESS\_CHEBYSHEV2](../../cpp_src/int_exactness_chebyshev2/int_exactness_chebyshev2.html),
a C++ program which tests the polynomial exactness of Gauss-Chebyshev
type 2 quadrature rules.

[INT\_EXACTNESS\_GEGENBAUER](../../cpp_src/int_exactness_gegenbauer/int_exactness_gegenbauer.html),
a C++ program which tests the polynomial exactness of Gauss-Gegenbauer
quadrature rules.

[INT\_EXACTNESS\_GEN\_HERMITE](../../cpp_src/int_exactness_gen_hermite/int_exactness_gen_hermite.html),
a C++ program which tests the polynomial exactness of a generalized
Gauss-Hermite quadrature rule.

[INT\_EXACTNESS\_GEN\_LAGUERRE](../../cpp_src/int_exactness_gen_laguerre/int_exactness_gen_laguerre.html),
a C++ program which tests the polynomial exactness of a generalized
Gauss-Laguerre quadrature rule.

[INT\_EXACTNESS\_JACOBI](../../cpp_src/int_exactness_jacobi/int_exactness_jacobi.html),
a C++ program which tests the polynomial exactness of a Gauss-Jacobi
quadrature rule.

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

-   [hermite\_exactness.cpp](hermite_exactness.cpp), the source code.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for HERMITE\_EXACTNESS.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **FILE\_COLUMN\_COUNT** counts the columns in the first line of a
    file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **HERMITE\_INTEGRAL** evaluates a monomial Hermite integral.
-   **HERMITE\_MONOMIAL\_QUADRATURE** applies a quadrature rule to a
    monomial.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_FACTORIAL2** computes the double factorial function N!!
-   **R8\_HUGE** returns a "huge" R8.
-   **R8MAT\_DATA\_READ** reads the data from an R8MAT file.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 08 June 2013.*
