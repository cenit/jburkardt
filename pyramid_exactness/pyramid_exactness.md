PYRAMID\_EXACTNESS\
Precision Test for Pyramid Quadrature Rules {#pyramid_exactness-precision-test-for-pyramid-quadrature-rules align="center"}
===========================================

------------------------------------------------------------------------

**PYRAMID\_EXACTNESS** is a C++ program which measures the precision of
a quadrature rule over the interior of a pyramid in 3D.

The integration region is:

           - ( 1 - Z ) <= X <= 1 - Z
           - ( 1 - Z ) <= Y <= 1 - Z
                     0 <= Z <= 1.
          

When Z is zero, the integration region is a square lying in the (X,Y)
plane, centered at (0,0,0) with "radius" 1. As Z increases to 1, the
radius of the square diminishes, and when Z reaches 1, the square has
contracted to the single point (0,0,1).

### Usage: {#usage align="center"}

> **pyramid\_exactness** *filename* *degree\_max*

where

-   *filename* is the common prefix of the filenames containing the
    abscissas and the weights of the quadrature rule.
-   *degree\_max* is the maximum degree of the monomials to be checked.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**PYRAMID\_EXACTNESS** is available in [a C
version](../../c_src/pyramid_exactness/pyramid_exactness.md) and [a
C++ version](../../master/pyramid_exactness/pyramid_exactness.md) and
[a FORTRAN77
version](../../f77_src/pyramid_exactness/pyramid_exactness.md) and [a
FORTRAN90 version](../../f_src/pyramid_exactness/pyramid_exactness.md)
and [a MATLAB
version.](../../m_src/pyramid_exactness/pyramid_exactness.md)

### Related Data and Programs: {#related-data-and-programs align="center"}

[CUBE\_EXACTNESS](../../master/cube_exactness/cube_exactness.md), a
C++ library which investigates the polynomial exactness of quadrature
rules over the interior of a cube in 3D.

[HYPERCUBE\_EXACTNESS](../../master/hypercube_exactness/hypercube_exactness.md),
a C++ program which measures the monomial exactness of an M-dimensional
quadrature rule over the interior of the unit hypercube in M dimensions.

[PYRAMID\_FELIPPA\_RULE](../../master/pyramid_felippa_rule/pyramid_felippa_rule.md),
a C++ library which returns Felippa's quadratures rules for
approximating integrals over the interior of a pyramid in 3D.

[PYRAMID\_GRID](../../master/pyramid_grid/pyramid_grid.md), a C++
library which computes a grid of points over the interior of the unit
pyramid in 3D;

[PYRAMID\_INTEGRALS](../../master/pyramid_integrals/pyramid_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit pyramid in 3D.

[PYRAMID\_MONTE\_CARLO](../../master/pyramid_monte_carlo/pyramid_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate integrals
of a function over the interior of the unit pyramid in 3D;

[PYRAMID\_RULE](../../master/pyramid_rule/pyramid_rule.md), a C++
program which can compute a quadrature rule over the interior of the
unit pyramid in 3D.

[QUADRATURE\_RULES\_PYRAMID](../../datasets/quadrature_rules_pyramid/quadrature_rules_pyramid.md),
a dataset directory which contains quadrature rules over the interior of
the unit pyramid in 3D.

[SPHERE\_EXACTNESS](../../master/sphere_exactness/sphere_exactness.md),
a C++ program which tests the monomial exactness of a quadrature rule on
the surface of the unit sphere in 3D.

[SQUARE\_EXACTNESS](../../master/square_exactness/square_exactness.md),
a C++ library which investigates the polynomial exactness of quadrature
rules for f(x,y) over the interior of a rectangle in 2D.

[TETRAHEDRON\_EXACTNESS](../../master/tetrahedron_exactness/tetrahedron_exactness.md),
a C++ program which investigates the polynomial exactness of a
quadrature rule over the interior of a tetrahedron in 3D.

[TRIANGLE\_EXACTNESS](../../master/triangle_exactness/triangle_exactness.md),
a C++ program which investigates the polynomial exactness of a
quadrature rule over the interior of a triangle in 2D.

[WEDGE\_EXACTNESS](../../master/wedge_exactness/wedge_exactness.md),
a C++ program which investigates the monomial exactness of a quadrature
rule over the interior of the unit wedge in 3D.

### Reference: {#reference align="center"}

1.  Carlos Felippa,\
    A compendium of FEM integration formulas for symbolic work,\
    Engineering Computation,\
    Volume 21, Number 8, 2004, pages 867-890.
2.  Arthur Stroud,\
    Approximate Calculation of Multiple Integrals,\
    Prentice Hall, 1971,\
    ISBN: 0130438936,\
    LC: QA311.S85.

### Source Code: {#source-code align="center"}

-   [pyramid\_exactness.cpp](pyramid_exactness.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**PYRAMID\_L3X3\_J3** is a pyramid rule formed by a conical product of a
3x3 Legendre rule and an order 3 Jacobi rule.

-   [pyramid\_l3x3\_j3\_w.txt](pyramid_l3x3_j3_w.txt), the weight file.
-   [pyramid\_l3x3\_j3\_x.txt](pyramid_l3x3_j3_x.txt), the abscissa
    file.
-   [pyramid\_l3x3\_j3\_exactness.txt](pyramid_l3x3_j3_exactness.txt),
    the exactness file produced by the program.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for PYRAMID\_EXACTNESS.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **COMP\_NEXT** computes the compositions of the integer N into K
    parts.
-   **DTABLE\_DATA\_READ** reads the data from a DTABLE file.
-   **DTABLE\_HEADER\_READ** reads the header from a DTABLE file.
-   **FILE\_COLUMN\_COUNT** counts the columns in the first line of a
    file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **MONOMIAL\_VALUE** evaluates a monomial.
-   **PYRA\_UNIT\_MONOMIAL:** monomial integral in a unit pyramid.
-   **PYRA\_UNIT\_VOLUME:** volume of a unit pyramid with square base.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_CHOOSE** computes the binomial coefficient C(N,K) as an R8.
-   **R8\_MOP** returns the I-th power of -1 as an R8 value.
-   **R8VEC\_DOT\_PRODUCT** computes the dot product of a pair of
    R8VEC's.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 28 July 2009.*
