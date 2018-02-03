WEDGE\_EXACTNESS\
Precision Test for Wedge Quadrature Rules {#wedge_exactness-precision-test-for-wedge-quadrature-rules align="center"}
=========================================

------------------------------------------------------------------------

**WEDGE\_EXACTNESS** is a FORTRAN90 program which measures the precision
of a quadrature rule over the interior of the unit wedge in 3D.

The interior of the unit wedge in 3D is defined by the constraints:

            0 <= X
            0 <= Y
                 X + Y <= 1
           -1 <= Z <= +1
          

### Usage: {#usage align="center"}

> **wedge\_exactness** *filename* *degree\_max*

where

-   *filename* is the common prefix of the filenames containing the
    abscissas and the weights of the quadrature rule.
-   *degree\_max* is the maximum degree of the monomials to be checked.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**WEDGE\_EXACTNESS** is available in [a C
version](../../c_src/wedge_exactness/wedge_exactness.html) and [a C++
version](../../cpp_src/wedge_exactness/wedge_exactness.html) and [a
FORTRAN77 version](../../f77_src/wedge_exactness/wedge_exactness.html)
and [a FORTRAN90
version](../../f_src/wedge_exactness/wedge_exactness.html) and [a MATLAB
version.](../../m_src/wedge_exactness/wedge_exactness.html)

### Related Data and Programs: {#related-data-and-programs align="center"}

[CUBE\_EXACTNESS](../../cpp_src/cube_exactness/cube_exactness.html), a
C++ library which investigates the polynomial exactness of quadrature
rules over the interior of a cube in 3D.

[HYPERCUBE\_EXACTNESS](../../cpp_src/hypercube_exactness/hypercube_exactness.html),
a C++ program which measures the monomial exactness of an M-dimensional
quadrature rule over the interior of the unit hypercube in M dimensions.

[PYRAMID\_EXACTNESS](../../cpp_src/pyramid_exactness/pyramid_exactness.html),
a C++ program which investigates the polynomial exactness of a
quadrature rule over the interior of the unit pyramid in 3D.

[SPHERE\_EXACTNESS](../../cpp_src/sphere_exactness/sphere_exactness.html),
a C++ program which tests the polynomial exactness of a quadrature rule
over the surface of the unit sphere in 3D.

[SQUARE\_EXACTNESS](../../cpp_src/square_exactness/square_exactness.html),
a C++ library which investigates the polynomial exactness of quadrature
rules for f(x,y) over the interior of a rectangle in 2D.

[TETRAHEDRON\_EXACTNESS](../../cpp_src/tetrahedron_exactness/tetrahedron_exactness.html),
a C++ program which investigates the polynomial exactness of a
quadrature rule over the interior of a tetrahedron in 3D.

[TRIANGLE\_EXACTNESS](../../cpp_src/triangle_exactness/triangle_exactness.html),
a C++ program which investigates the polynomial exactness of a
quadrature rule over the interior of a triangle in 2D.

[WEDGE\_FELIPPA\_RULE](../../cpp_src/wedge_felippa_rule/wedge_felippa_rule.html),
a C++ library which returns quadratures rules for approximating
integrals over the interior of the unit wedge in 3D.

[WEDGE\_GRID](../../cpp_src/wedge_grid/wedge_grid.html), a C++ library
which computes a grid of points over the interior of the unit wedge in
3D.

[WEDGE\_INTEGRALS](../../cpp_src/wedge_integrals/wedge_integrals.html),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit wedge in 3D.

[WEDGE\_MONTE\_CARLO](../../cpp_src/wedge_monte_carlo/wedge_monte_carlo.html),
a C++ library which uses the Monte Carlo method to estimate integrals
over the interior of the unit wedge in 3D.

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

-   [wedge\_exactness.cpp](wedge_exactness.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**WEDGE\_FELIPPA\_3x2** is a quadrature rule based on a 3 point triangle
rule and a 2 point Legendre rule for the line.

-   [wedge\_felippa\_3x2\_w.txt](wedge_felippa_3x2_w.txt), the weight
    file.
-   [wedge\_felippa\_3x2\_x.txt](wedge_felippa_3x2_x.txt), the abscissa
    file.
-   [wedge\_felippa\_3x2\_output.txt](wedge_felippa_3x2_output.txt), the
    exactness file produced by the program.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for WEDGE\_EXACTNESS.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the value of a base 10 digit.
-   **COMP\_NEXT** computes the compositions of the integer N into K
    parts.
-   **FILE\_COLUMN\_COUNT** counts the columns in the first line of a
    file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **MONOMIAL\_VALUE** evaluates a monomial.
-   **R8MAT\_DATA\_READ** reads the data from an R8MAT file.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
-   **R8VEC\_DOT\_PRODUCT** computes the dot product of a pair of
    R8VEC's.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **WEDGE01\_INTEGRAL** returns the integral of a monomial in the unit
    wedge in 3D.
-   **WEDGE01\_VOLUME** returns the volume of the unit wedge in 3D.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 24 August 2014.*
