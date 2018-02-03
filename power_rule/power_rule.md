POWER\_RULE\
Multidimensional Quadrature Rule Creation {#power_rule-multidimensional-quadrature-rule-creation align="center"}
=========================================

------------------------------------------------------------------------

**POWER\_RULE** is a C++ program which creates a power rule, that is, a
multidimensional quadrature rule formed as a repeated product of a
single one-dimensional quadrature rule.

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

### Usage: {#usage align="center"}

> **power\_rule** *prefix* *dim\_num*

where

-   *prefix* is the common prefix for the files containing the abscissa,
    weight and region information of the quadrature rule;
-   *dim\_num* is the dimension of the product space.

If the arguments are not supplied on the command line, the program will
prompt for them.

The program will create these output files, which define the
multidimensional quadrature rule:

 power\_x.txt 
:   a file containing the abscissas of the power rule;

 power\_w.txt 
:   a file containing the weights of the power rule;

 power\_r.txt 
:   a file containing the range of the power rule;

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**POWER\_RULE** is available in [a C
version](../../c_src/power_rule/power_rule.md) and [a C++
version](../../master/power_rule/power_rule.md) and [a FORTRAN77
version](../../f77_src/power_rule/power_rule.md) and [a FORTRAN90
version](../../f_src/power_rule/power_rule.md) and [a MATLAB
version](../../m_src/power_rule/power_rule.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CLENSHAW\_CURTIS\_RULE](../../master/clenshaw_curtis_rule/clenshaw_curtis_rule.md),
a C++ program which defines a Clenshaw Curtis quadrature rule.

[INTEGRAL\_TEST](../../f_src/integral_test/integral_test.md), a
FORTRAN90 program which uses some of these test integrals to evaluate
sets of quadrature points.

[LATTICE\_RULE](../../master/lattice_rule/lattice_rule.md), a C++
library which approximates M-dimensional integrals using lattice rules.

[NINT\_EXACTNESS](../../master/nint_exactness/nint_exactness.md), a
C++ program which can test a quadrature rule for polynomial exactness.

[NINTLIB](../../master/nintlib/nintlib.md), a C++ library which
numerically estimates integrals in multiple dimensions.

[PATTERSON\_RULE](../../master/patterson_rule/patterson_rule.md), a
C++ program which computes a Gauss-Patterson quadrature rule.

[PRODUCT\_RULE](../../master/product_rule/product_rule.md), a C++
program which constructs a product quadrature rule from distinct 1D
factor rules.

[QUADRATURE\_RULES](../../datasets/quadrature_rules/quadrature_rules.md),
a dataset directory which contains sets of files that define quadrature
rules over various 1D intervals or multidimensional hypercubes.

[QUADRULE](../../master/quadrule/quadrule.md), a C++ library which
defines quadrature rules on a variety of intervals with different weight
functions.

[STROUD](../../master/stroud/stroud.md), a C++ library which defines
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

-   [power\_rule.cpp](power_rule.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

As an example, we start with a 1D Clenshaw Curtis rule of order 3:

-   [cc3\_x.txt](cc3_x.txt), the abscissas of a 1D Clenshaw Curtis rule
    of order 3.
-   [cc3\_w.txt](cc3_w.txt), the weights of a 1D Clenshaw Curtis rule of
    order 3.
-   [cc3\_r.txt](cc3_r.txt), defines the range of the region.

We give the command

> **power\_rule** cc3 2

to create a Clenshaw Curtis product rule of order 3x3 for a 2D region.
The files which are created include:

-   [power\_rule\_output.txt](power_rule_output.txt), the output file.
-   [power\_x.txt](power_x.txt), the abscissas of the power rule.
-   [power\_w.txt](power_w.txt), the weights of the power rule.
-   [power\_r.txt](power_r.txt), defines the range of the power region.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for POWER\_RULE.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **FILE\_COLUMN\_COUNT** counts the number of columns in the first
    line of a file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4\_POWER** returns the value of I\^J.
-   **POWER\_RULE\_SET** sets up a power rule.
-   **POWER\_RULE\_SIZE** returns the size of a power rule.
-   **R8\_EPSILON** returns the R8 roundoff unit.
-   **R8MAT\_DATA\_READ** reads the data from an R8MAT file.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
-   **R8MAT\_WRITE** writes an R8MAT file with no header.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TUPLE\_NEXT** computes the next element of a tuple space.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 03 February 2014.*
