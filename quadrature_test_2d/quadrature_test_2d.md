QUADRATURE\_TEST\_2D\
Quadrature Rule Applied to 2D Test Integrals {#quadrature_test_2d-quadrature-rule-applied-to-2d-test-integrals align="center"}
============================================

------------------------------------------------------------------------

**QUADRATURE\_TEST\_2D** is a C++ program which reads three files that
define a 2D quadrature rule, applies the quadrature rule to a set of
test integrals, and reports the results.

The quadrature rule is defined by three text files:

1.  *the "X" file* lists the abscissas (N rows, M columns);
2.  *the "W" file* lists the weights (N rows);
3.  *the "R" file* lists the integration region corners (2 rows, M
    columns);

For more on quadrature rules, see the **QUADRATURE\_RULES** listing
below.

The test integrals come from the **TEST\_INT\_2D** library.

### Usage: {#usage align="center"}

**quadrature\_test\_2d** *prefix*

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

**QUADRATURE\_TEST\_2D** is available in [a C++
version](../../cpp_src/quadrature_test_2d/quadrature_test_2d.html) and
[a FORTRAN90
version](../../f_src/quadrature_test_2d/quadrature_test_2d.html) and [a
MATLAB version](../../m_src/quadrature_test_2d/quadrature_test_2d.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[GSL](../../cpp_src/gsl/gsl.html), a C++ library which includes routines
for estimating multidimensional integrals.

[INTEGRAL\_TEST](../../f_src/integral_test/integral_test.html), a
FORTRAN90 program which uses test integrals to evaluate sets of
quadrature points.

[NINT\_EXACTNESS](../../cpp_src/nint_exactness/nint_exactness.html), a
C++ program which demonstrates how to measure the polynomial exactness
of a multidimensional quadrature rule.

[NINTLIB](../../cpp_src/nintlib/nintlib.html), a C++ library which
numerically estimates integrals in multiple dimensions.

[PRODUCT\_RULE](../../cpp_src/product_rule/product_rule.html), a C++
program which creates a multidimensional quadrature rule as a product of
one dimensional rules.

[PRODUCT\_RULE\_GL](../../datasets/product_rule_gl/product_rule_gl.html),
a dataset directory which contains multidimensional quadrature rules
formed as products of 1D Gauss-Legendre rules.

[PRODUCT\_RULE\_TANH\_SINH](../../datasets/product_rule_tanh_sinh/product_rule_tanh_sinh.html),
a dataset directory which contains multidimensional quadrature rules
formed as products of 1D tanh-sinh rules.

[QUADRATURE\_RULES](../../datasets/quadrature_rules/quadrature_rules.html),
a dataset directory which contains a description and examples of
quadrature rules defined by a set of "X", "W" and "R" files.

[QUADRATURE\_TEST](../../cpp_src/quadrature_test/quadrature_test.html),
a C++ program which reads files defining a quadrature rule, and applies
them to all the test integrals defined by **TEST\_NINT**.

[SPARSE\_GRID\_TANH\_SINH](../../datasets/sparse_grid_tanh_sinh/sparse_grid_tanh_sinh.html),
a dataset directory which contains multidimensional Smolyak sparse grids
based on a 1D tanh-sinh rule;

[STROUD](../../cpp_src/stroud/stroud.html), a C++ library which contains
quadrature rules for a variety of unusual areas, surfaces and volumes in
2D, 3D and N-dimensions.

[TEST\_INT\_2D](../../cpp_src/test_int_2d/test_int_2d.html), a C++
library which defines test integrands for 2D quadrature rules.

[TEST\_NINT](../../cpp_src/test_nint/test_nint.html), a C++ library
which defines a set of integrand functions to be used for testing
multidimensional quadrature rules and routines.

[TESTPACK](../../cpp_src/testpack/testpack.html), a C++ library which
defines a set of integrands used to test multidimensional quadrature.

### Source Code: {#source-code align="center"}

-   [quadrature\_test\_2d.cpp](quadrature_test_2d.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**PRODUCT\_RULE\_GL** is a family of Gauss\_Legendre product rules which
includes 2D rules of orders 1x1, 2x2, 4x4, 8x8, 16x16 and 32x32.

-   [product\_rule\_gl.html](../../datasets/product_rule_gl/product_rule_gl.html),
    describes the Gauss-Legendre product rules.
-   [product\_rule\_gl\_output](product_rule_gl_output.txt), the output
    from running the test on the 2D rules.

**PRODUCT\_RULE\_TANH\_SINH** is a family of tanh-sinh product rules
which includes 2D rules of orders 1x1, 3x3, 7x7, 15x15, 31x31, 63x63,
and 127x127 points.

-   [product\_rule\_tanh\_sinh.html](../../datasets/product_rule_tanh_sinh/product_rule_tanh_sinh.html),
    describes the tanh-sinh product rules.
-   [product\_rule\_tanh\_sinh\_output](product_rule_tanh_sinh_output.txt),
    the output from running the test on the 2D rules.

**SPARSE\_GRID\_CC** is a family of Clenshaw Curtis sparse grid rules
which includes rules of order 1, 5, 13, 29, 65, 145, 321, 705. 1537,
3329 and 7169 points. *These rules have problems with many of the test
integrands, which have endpoint singularities.*

-   [sparse\_grid\_cc.html](../../datasets/sparse_grid_cc/sparse_grid_cc.html),
    describes the Clenshaw Curtis sparse grid rules.
-   [sparse\_grid\_cc\_output](sparse_grid_cc_output.txt), the output
    from running the test on the 2D rules.

**SPARSE\_GRID\_F2** is a family of Fejer Type 2 sparse grid rules which
includes rules of order 1, 5, 17, 49, 129, 321, 769, and 1793 points.

-   [sparse\_grid\_f2.html](../../datasets/sparse_grid_f2/sparse_grid_f2.html),
    describes the Fejer Type 2 sparse grid rules.
-   [sparse\_grid\_f2\_output](sparse_grid_f2_output.txt), the output
    from running the test on the 2D rules.

**SPARSE\_GRID\_NCO** is a family of Newton Cotes Open sparse grid rules
which includes rules of order 1, 5, 17, 49, 129, 321, and 769 points.
*These rules do a terrible job, which reflects the instability of the
Newton Cotes rules.*

-   [sparse\_grid\_nco.html](../../datasets/sparse_grid_nco/sparse_grid_nco.html),
    describes the Newton Cotes Open sparse grid rules.
-   [sparse\_grid\_nco\_output](sparse_grid_nco_output.txt), the output
    from running the test on the 2D rules.

**SPARSE\_GRID\_TANH\_SINH** is a family of tanh-sinh sparse grid rules
which includes rules of order 1, 5, 17, 49, 129, 321, 769, 1793 and 4097
points.

-   [sparse\_grid\_tanh\_sinh.html](../../datasets/sparse_grid_tanh_sinh/sparse_grid_tanh_sinh.html),
    describes the tanh-sinh sparse grid rules.
-   [sparse\_grid\_tanh\_sinh\_output](sparse_grid_tanh_sinh_output.txt),
    the output from running the test on the 2D rules.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for QUADRATURE\_TEST\_2D.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **DTABLE\_DATA\_READ** reads the data from a DTABLE file.
-   **DTABLE\_HEADER\_READ** reads the header from a DTABLE file.
-   **FILE\_COLUMN\_COUNT** counts the columns in the first line of a
    file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **R8VEC\_DOT** computes the dot product of a pair of R8VEC's.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_R8** reads an R8 value from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 30 January 2009.*
