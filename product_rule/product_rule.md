PRODUCT\_RULE\
Multidimensional Quadrature Rule Creation {#product_rule-multidimensional-quadrature-rule-creation align="center"}
=========================================

------------------------------------------------------------------------

**PRODUCT\_RULE** is a C++ program which creates a multidimensional
quadrature rule by using a product of distinct one-dimensional
quadrature rules.

The program reads a single input file, which contains a list that
defines the 1D rules to be used as factors.

Each 1D rule is stored in three files, an "X", "W", and "R" file, which
are assumed to share a common filename prefix, so that the files defined
by a given *prefix* have the form:

-   *prefix*\_**x.txt**
-   *prefix*\_**w.txt**
-   *prefix*\_**r.txt**

For instance, let us suppose we want to compute a 2D product rule formed
from a 3 point Clenshaw Curtis rule and a 2 point Gauss-Legendre rule.
If the prefixes for these files were "cc\_d1\_o003" and "gl\_d1\_o002"
respectively, then the input file to the program would read as follows:

            cc_d1_o003
            gl_d1_o002
          

When the program read the first 1D rule, it would be searching for three
files:

-   **cc\_d1\_o003\_x.txt**
-   **cc\_d1\_o003\_w.txt**
-   **cc\_d1\_o003\_r.txt**

and similarly for the second file.

Once the program has computed the multidimensional product rule, it
again writes out three files describing the product rule, with a common
filename prefix specified by the user, which might be, for instance,
*product*, in which case the files would be:

-   **product\_x.txt**
-   **product\_w.txt**
-   **product\_r.txt**

For information on the form of these files, see the
**QUADRATURE\_RULES** directory listed below.

### Usage: {#usage align="center"}

> **product\_rule** ( *list\_file*, *product\_prefix* )

where

-   *list\_file* is the name of the file containing the list of filename
    prefixes that can be used to locate the X, W and R files of each 1D
    quadrature rule.
-   *product\_prefix* is the prefix to be used when writing out the X, W
    and R files of the computed multidimensional product rule.

If the arguments are not supplied on the command line, the program will
prompt for them.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**PRODUCT\_RULE** is available in [a C
version](../../c_src/product_rule/product_rule.md) and [a C++
version](../../master/product_rule/product_rule.md) and [a FORTRAN77
version](../../f77_src/product_rule/product_rule.md) and [a FORTRAN90
version](../../f_src/product_rule/product_rule.md) and [a MATLAB
version](../../m_src/product_rule/product_rule.md)

### Related Data and Programs: {#related-data-and-programs align="center"}

[INTEGRAL\_TEST](../../f_src/integral_test/integral_test.md), a
FORTRAN90 program which uses test integrals to evaluate sets of
quadrature points.

[NINT\_EXACTNESS](../../master/nint_exactness/nint_exactness.md), a
C++ program which can test a quadrature rule for polynomial exactness.

[NINT\_EXACTNESS\_MIXED](../../master/nint_exactness_mixed/nint_exactness_mixed.md),
a C++ program which measures the polynomial exactness of a
multidimensional quadrature rule based on a mixture of 1D quadrature
rule factors.

[NINTLIB](../../master/nintlib/nintlib.md), a C++ library which
numerically estimates integrals in multiple dimensions.

[POWER\_RULE](../../master/power_rule/power_rule.md), a C++ program
which constructs a power rule, that is, a product quadrature rule from
identical 1D factor rules.

[QUADRATURE\_RULES](../../datasets/quadrature_rules/quadrature_rules.md),
a dataset directory which contains sets of files that define quadrature
rules over various 1D intervals or multidimensional hypercubes.

[QUADRULE](../../master/quadrule/quadrule.md), a C++ library which
defines quadrature rules on a variety of intervals with different weight
functions.

[SPARSE\_GRID\_MIXED](../../master/sparse_grid_mixed/sparse_grid_mixed.md),
a C++ library which creates a sparse grid dataset based on a mixed set
of 1D factor rules.

[STROUD](../../master/stroud/stroud.md), a C++ library which contains
quadrature rules for a variety of unusual areas, surfaces and volumes in
2D, 3D and N-dimensions.

[TEST\_NINT](../../master/test_nint/test_nint.md), a C++ library
which defines integrand functions for testing multidimensional
quadrature routines.

[TESTPACK](../../master/testpack/testpack.md), a C++ library which
defines a set of integrands used to test multidimensional quadrature.

[TRUNCATED\_NORMAL\_RULE](../../master/truncated_normal_rule/truncated_normal_rule.md),
a C++ program which computes a quadrature rule for a normal probability
density function (PDF), also called a Gaussian distribution, that has
been truncated to \[A,+oo), (-oo,B\] or \[A,B\].

### Reference: {#reference align="center"}

1.  Philip Davis, Philip Rabinowitz,\
    Methods of Numerical Integration,\
    Second Edition,\
    Dover, 2007,\
    ISBN: 0486453391,\
    LC: QA299.3.D28.

### Source Code: {#source-code align="center"}

-   [product\_rule.cpp](product_rule.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

As an example, we make a 2D product rule.

The first factor is a 1D Clenshaw Curtis rule of order 3:

-   [cc\_d1\_o3\_x.txt](cc_d1_o3_x.txt), the abscissas of a 1D Clenshaw
    Curtis rule of order 3.
-   [cc\_d1\_o3\_w.txt](cc_d1_o3_w.txt), the weights of a 1D Clenshaw
    Curtis rule of order 3.
-   [cc\_d1\_o3\_r.txt](cc_d1_o3_r.txt), defines the range of the
    region.

The second factor is a 1D Gauss Legendre rule of order 2:

-   [gl\_d1\_o2\_x.txt](gl_d1_o2_x.txt), the abscissas of a 1D Clenshaw
    Curtis rule of order 2.
-   [gl\_d1\_o2\_w.txt](gl_d1_o2_w.txt), the weights of a 1D Clenshaw
    Curtis rule of order 2.
-   [gl\_d1\_o2\_r.txt](gl_d1_o02_r.txt), defines the range of the
    region.

We give the command

> **product\_rule** factors.txt

-   [factors.txt](factors.txt), a file containing the list of factors.

The resulting product rule files:

-   [ccgl\_d2\_o3x2\_x.txt](ccgl_d2_o3x2_x.txt), the abscissas of a 2D
    Clenshaw Curtis product rule of order 6.
-   [ccgl\_d2\_o3x2\_w.txt](ccgl_d2_o3x2_w.txt), the weights of a 2D
    Clenshaw Curtis product rule of order 6.
-   [ccgl\_d2\_o3x2\_r.txt](ccgl_d2_o3x2_r.txt), defines the range of
    the product region.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for PRODUCT\_RULE.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **FILE\_COLUMN\_COUNT** counts the columns in the first line of a
    file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **PRODUCT\_RULE\_SIZE** returns the size of a product rule of
    distinct factors.
-   **R8\_EPSILON** returns the R8 roundoff unit.
-   **R8MAT\_DATA\_READ** reads the data from an R8MAT file.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
-   **R8MAT\_WRITE** writes an R8MAT file with no header.
-   **R8VEC\_DIRECT\_PRODUCT** creates a direct product of R8VEC's.
-   **R8VEC\_DIRECT\_PRODUCT2** creates a direct product of R8VEC's.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 21 April 2012.*
