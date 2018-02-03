TETRAHEDRON\_EXACTNESS\
Exactness of Quadrature on Tetrahedrons {#tetrahedron_exactness-exactness-of-quadrature-on-tetrahedrons align="center"}
=======================================

------------------------------------------------------------------------

**TETRAHEDRON\_EXACTNESS** is a C++ program which investigates the
polynomial exactness of a quadrature rule over the interior of a
tetrahedron in 3D.

The polynomial exactness of a quadrature rule is defined as the highest
total degree **D** such that the quadrature rule is guaranteed to
integrate exactly all polynomials of total degree **DEGREE\_MAX** or
less, ignoring roundoff. The total degree of a polynomial is the maximum
of the degrees of all its monomial terms. For a tetrahedron, the degree
of a monomial term is the sum of the exponents of **x**, **y** and
**z**. Thus, for instance, the **DEGREE** of

> **x^2^yz^5^**

is 2+1+5=8.

To be thorough, the program starts at **DEGREE** = 0, and then proceeds
to **DEGREE** = 1, 2, and so on up to a maximum degree **DEGREE\_MAX**
specified by the user. At each value of **DEGREE**, the program
generates every possible monomial term, applies the quadrature rule to
it, and determines the quadrature error. The program uses a scaling
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

The exactness results are written to an output file with the
corresponding name:

-   *prefix*\_**exact.txt**

### Usage: {#usage align="center"}

> **tetrahedron\_exactness** *prefix* *degree\_max*

where

-   *prefix* is the common prefix for the files containing the abscissa,
    weight and region information of the quadrature rule;
-   *degree\_max* is the maximum total monomial degree to check. A value
    of 5 or 10 might be reasonable, but a value of 50 or 100 is probably
    never a good input!

If the arguments are not supplied on the command line, the program will
prompt for them.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TETRAHEDRON\_EXACTNESS** is available in [a C
version](../../c_src/tetrahedron_exactness/tetrahedron_exactness.md)
and [a C++
version](../../master/tetrahedron_exactness/tetrahedron_exactness.md)
and [a FORTRAN77
version](../../f77_src/tetrahedron_exactness/tetrahedron_exactness.md)
and [a FORTRAN90
version](../../f_src/tetrahedron_exactness/tetrahedron_exactness.md)
and [a MATLAB
version](../../m_src/tetrahedron_exactness/tetrahedron_exactness.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CUBE\_EXACTNESS](../../master/cube_exactness/cube_exactness.md), a
C++ library which investigates the polynomial exactness of quadrature
rules over the interior of a cube in 3D.

[HYPERCUBE\_EXACTNESS](../../master/hypercube_exactness/hypercube_exactness.md),
a C++ program which measures the monomial exactness of an M-dimensional
quadrature rule over the interior of the unit hypercube in M dimensions.

[PYRAMID\_EXACTNESS](../../master/pyramid_exactness/pyramid_exactness.md),
a C++ program which investigates the polynomial exactness of a
quadrature rule over the interior of the unit pyramid in 3D.

[SPHERE\_EXACTNESS](../../master/sphere_exactness/sphere_exactness.md),
a C++ program which tests the monomial exactness of a quadrature rule on
the surface of the unit sphere in 3D.

[SQUARE\_EXACTNESS](../../master/square_exactness/square_exactness.md),
a C++ library which investigates the polynomial exactness of quadrature
rules for f(x,y) over the interior of a rectangle in 2D.

[TETRAHEDRON\_ARBQ\_RULE](../../master/tetrahedron_arbq_rule/tetrahedron_arbq_rule.md),
a C++ library which returns quadrature rules, with exactness up to total
degree 15, over the interior of a tetrahedron in 3D, by Hong Xiao and
Zydrunas Gimbutas.

[TETRAHEDRON\_FELIPPA\_RULE](../../master/tetrahedron_felippa_rule/tetrahedron_felippa_rule.md),
a C++ library which returns Felippa's quadratures rules for
approximating integrals over the interior of a tetrahedron in 3D.

[TETRAHEDRON\_INTEGRALS](../../master/tetrahedron_integrals/tetrahedron_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit tetrahedron in 3D.

[TETRAHEDRON\_KEAST\_RULE](../../master/tetrahedron_keast_rule/tetrahedron_keast_rule.md),
a C++ library which defines ten quadrature rules, with exactness degrees
0 through 8, over the interior of a tetrahedron in 3D.

[TETRAHEDRON\_MONTE\_CARLO](../../master/tetrahedron_monte_carlo/tetrahedron_monte_carlo.md),
a C++ program which uses the Monte Carlo method to estimate integrals
over the interior of a tetrahedron in 3D.

[TETRAHEDRON\_NCC\_RULE](../../master/tetrahedron_ncc_rule/tetrahedron_ncc_rule.md),
a C++ library which defines Newton-Cotes Closed (NCC) quadrature rules
over the interior of a tetrahedron in 3D.

[TETRAHEDRON\_NCO\_RULE](../../master/tetrahedron_nco_rule/tetrahedron_nco_rule.md),
a C++ library which defines Newton-Cotes Open (NCO) quadrature rules
over the interior of a tetrahedron in 3D.

[TRIANGLE\_EXACTNESS](../../master/triangle_exactness/triangle_exactness.md),
a C++ program which investigates the polynomial exactness of a
quadrature rule over the interior of a triangle in 2D.

[WEDGE\_EXACTNESS](../../master/wedge_exactness/wedge_exactness.md),
a C++ program which investigates the monomial exactness of a quadrature
rule over the interior of the unit wedge in 3D.

### Reference: {#reference align="center"}

1.  Philip Davis, Philip Rabinowitz,\
    Methods of Numerical Integration,\
    Second Edition,\
    Dover, 2007,\
    ISBN: 0486453391,\
    LC: QA299.3.D28.

### Source Code: {#source-code align="center"}

-   [tetrahedron\_exactness.cpp](tetrahedron_exactness.cpp), the source
    code.

### Examples and Tests: {#examples-and-tests align="center"}

The "W", "X" and "R" files associated with the point sets tested here
may be found in the **QUADRATURE\_RULES\_TET** directory.

-   [keast0\_exact.txt](keast0_exact.txt).
-   [keast1\_exact.txt](keast1_exact.txt).
-   [keast2\_exact.txt](keast2_exact.txt).
-   [keast3\_exact.txt](keast3_exact.txt).
-   [keast4\_exact.txt](keast4_exact.txt).
-   [keast5\_exact.txt](keast5_exact.txt).
-   [keast6\_exact.txt](keast6_exact.txt).
-   [keast7\_exact.txt](keast7_exact.txt).
-   [keast8\_exact.txt](keast8_exact.txt).
-   [keast9\_exact.txt](keast9_exact.txt).
-   [ncc0\_exact.txt](ncc0_exact.txt).
-   [ncc1\_exact.txt](ncc1_exact.txt).
-   [ncc2\_exact.txt](ncc2_exact.txt).
-   [ncc3\_exact.txt](ncc3_exact.txt).
-   [ncc4\_exact.txt](ncc4_exact.txt).
-   [ncc5\_exact.txt](ncc5_exact.txt).
-   [ncc6\_exact.txt](ncc6_exact.txt).
-   [nco0\_exact.txt](nco0_exact.txt).
-   [nco1\_exact.txt](nco1_exact.txt).
-   [nco2\_exact.txt](nco2_exact.txt).
-   [nco3\_exact.txt](nco3_exact.txt).
-   [nco4\_exact.txt](nco4_exact.txt).
-   [nco5\_exact.txt](nco5_exact.txt).
-   [nco6\_exact.txt](nco6_exact.txt).

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for TETRAHEDRON\_EXACTNESS.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is a case insensitive comparison of two characters for
    equality.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **COMP\_NEXT** computes the compositions of the integer N into K
    parts.
-   **DTABLE\_DATA\_READ** reads data from a DTABLE file.
-   **DTABLE\_HEADER\_READ** reads the header from a DTABLE file.
-   **FILE\_COLUMN\_COUNT** counts the number of columns in the first
    line of a file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **GET\_UNIT** returns a free FORTRAN unit number.
-   **MONOMIAL\_INT\_TET\_UNIT** integrates a monomial over the unit
    tetrahedron.
-   **MONOMIAL\_QUADRATURE\_TET** applies quadrature to a monomial in a
    tetrahedron.
-   **MONOMIAL\_VALUE** evaluates a monomial.
-   **R8MAT\_DET\_4D** computes the determinant of a 4 by 4 matrix.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TETRAHEDRON\_ORDER4\_PHYSICAL\_TO\_REFERENCE** maps physical
    points to reference points.
-   **TETRAHEDRON\_VOLUME** computes the volume of a tetrahedron.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TIMESTRING** writes the current YMDHMS date into a string.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 05 July 2007.*
