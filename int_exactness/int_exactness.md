INT\_EXACTNESS\
Exactness of One Dimensional Quadrature Rules {#int_exactness-exactness-of-one-dimensional-quadrature-rules align="center"}
=============================================

------------------------------------------------------------------------

**INT\_EXACTNESS** is a C++ program which investigates the polynomial
exactness of a one dimensional quadrature rule defined on a finite
interval.

The polynomial exactness of a quadrature rule is defined as the highest
degree **D** such that the quadrature rule is guaranteed to integrate
exactly all polynomials of degree **DEGREE\_MAX** or less, ignoring
roundoff. The degree of a polynomial is the maximum of the degrees of
all its monomial terms. The degree of a monomial term is the exponent.
Thus, for instance, the **DEGREE** of

> **3\*x^5^ - 7\*x^9^ + 27**

is the maximum of 5, 9 and 0, so it is 9.

To be thorough, the program starts at **DEGREE** = 0, and then proceeds
to **DEGREE** = 1, 2, and so on up to a maximum degree **DEGREE\_MAX**
specified by the user. At each value of **DEGREE**, the program
generates the corresponding monomial term, applies the quadrature rule
to it, and determines the quadrature error. The program uses a scaling
factor on each monomial so that the exact integral should always be 1;
therefore, each reported error can be compared on a fixed scale.

The program is very flexible and interactive. The quadrature rule is
defined by three files, to be read at input, and the maximum degree is
specified by the user as well.

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

> **int\_exactness** *prefix* *degree\_max*

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

**INT\_EXACTNESS** is available in [a C++
version](../../cpp_src/int_exactness/int_exactness.html) and [a
FORTRAN90 version](../../f_src/int_exactness/int_exactness.html) and [a
MATLAB version](../../m_src/int_exactness/int_exactness.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[EXACTNESS](../../cpp_src/exactness/exactness.html), a C++ library which
investigates the exactness of quadrature rules that estimate the
integral of a function with a density, such as 1, exp(-x) or exp(-x\^2),
over an interval such as \[-1,+1\], \[0,+oo) or (-oo,+oo).

[HERMITE\_EXACTNESS](../../cpp_src/hermite_exactness/hermite_exactness.html),
a C++ program which tests the polynomial exactness of Gauss-Hermite
quadrature rules.

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

[NINT\_EXACTNESS](../../cpp_src/nint_exactness/nint_exactness.html), a
C++ program which tests the polynomial exactness of multidimensional
integration rules.

### Reference: {#reference align="center"}

1.  Philip Davis, Philip Rabinowitz,\
    Methods of Numerical Integration,\
    Second Edition,\
    Dover, 2007,\
    ISBN: 0486453391,\
    LC: QA299.3.D28.

### Source Code: {#source-code align="center"}

-   [int\_exactness.cpp](int_exactness.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**CC\_D1\_O2** is a Clenshaw-Curtis order 2 rule for 1D.

-   [cc\_d1\_o2\_x.txt](../../datasets/quadrature_rules/cc_d1_o2_x.txt),
    the abscissas of the rule.
-   [cc\_d1\_o2\_w.txt](../../datasets/quadrature_rules/cc_d1_o2_w.txt),
    the weights of the rule.
-   [cc\_d1\_o2\_r.txt](../../datasets/quadrature_rules/cc_d1_o2_r.txt),
    defines the region for the rule.
-   [cc\_d1\_o2\_exact.txt](cc_d1_o2_exact.txt), the results of the
    exactness test, up to degree 5.

**CC\_D1\_O3** is a Clenshaw-Curtis order 3 rule for 1D. If you are
paying attention, you may be surprised to see that a Clenshaw Curtis
rule of odd order has one more degree of accuracy than you'd expect!

-   [cc\_d1\_o3\_x.txt](../../datasets/quadrature_rules/cc_d1_o3_x.txt),
    the abscissas of the rule.
-   [cc\_d1\_o3\_w.txt](../../datasets/quadrature_rules/cc_d1_o3_w.txt),
    the weights of the rule.
-   [cc\_d1\_o3\_r.txt](../../datasets/quadrature_rules/cc_d1_o3_r.txt),
    defines the region for the rule.
-   [cc\_d1\_o3\_exact.txt](cc_d1_o3_exact.txt), the results of the
    exactness test, up to degree 5.

**GL\_D1\_O3** is a Gauss-Legendre order 3 rule for 1D.

-   [gl\_d1\_o3\_x.txt](../../datasets/quadrature_rules/gl_d1_o3_x.txt),
    the abscissas of the rule.
-   [gl\_d1\_o3\_w.txt](../../datasets/quadrature_rules/gl_d1_o3_w.txt),
    the weights of the rule.
-   [gl\_d1\_o3\_r.txt](../../datasets/quadrature_rules/gl_d1_o3_r.txt),
    defines the region for the rule.
-   [gl\_d1\_o3\_exact.txt](gl_d1_o3_exact.txt), the results of the
    exactness test, up to degree 5.

**NCC\_D1\_O5** is a Newton-Cotes Closed order 5 rule for 1D.

-   [ncc\_d1\_o5\_x.txt](../../datasets/quadrature_rules/ncc_d1_o5_x.txt),
    the abscissas of the rule.
-   [ncc\_d1\_o5\_w.txt](../../datasets/quadrature_rules/ncc_d1_o5_w.txt),
    the weights of the rule.
-   [ncc\_d1\_o5\_r.txt](../../datasets/quadrature_rules/ncc_d1_o5_r.txt),
    defines the region for the rule.
-   [ncc\_d1\_o5\_exact.txt](ncc_d1_o5_exact.txt), the results of the
    exactness test, up to degree 7.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for INT\_EXACTNESS.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **DTABLE\_DATA\_READ** reads the data from a DTABLE file.
-   **DTABLE\_HEADER\_READ** reads the header from a DTABLE file.
-   **FILE\_COLUMN\_COUNT** counts the number of columns in the first
    line of a file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **MONOMIAL\_QUADRATURE** applies a quadrature rule to a monomial.
-   **R8\_ABS** returns the absolute value of an R8.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TIMESTRING** returns the current YMDHMS date as a string.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 11 February 2008.*
