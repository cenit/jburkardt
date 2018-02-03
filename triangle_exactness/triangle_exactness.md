TRIANGLE\_EXACTNESS\
Exactness of Quadrature on Triangles {#triangle_exactness-exactness-of-quadrature-on-triangles align="center"}
====================================

------------------------------------------------------------------------

**TRIANGLE\_EXACTNESS** is a C++ program which investigates the
polynomial exactness of a quadrature rule over the interior of a
triangle in 2D.

The polynomial exactness of a quadrature rule is defined as the highest
total degree **D** such that the quadrature rule is guaranteed to
integrate exactly all polynomials of total degree **DEGREE\_MAX** or
less, ignoring roundoff. The total degree of a polynomial is the maximum
of the degrees of all its monomial terms. For a triangle, the degree of
a monomial term is the sum of the exponents of **x** and **y**. Thus,
for instance, the **DEGREE** of

> **x^2^y^5^**

is 2+5=7.

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

> **triangle\_exactness** *prefix* *degree\_max*

where

-   *prefix* is the common prefix for the files containing the abscissa,
    weight and region information of the quadrature rule;
-   *degree\_max* is the maximum total monomial degree to check. A value
    of 5 or 10 might be reasonable, but a value of 50 or 100 is probably
    never a good input!

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TRIANGLE\_EXACTNESS** is available in [a C++
version](../../cpp_src/triangle_exactness/triangle_exactness.html) and
[a FORTRAN77
version](../../f77_src/triangle_exactness/triangle_exactness.html) and
[a FORTRAN90
version](../../f_src/triangle_exactness/triangle_exactness.html) and [a
MATLAB version](../../m_src/triangle_exactness/triangle_exactness.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CUBE\_EXACTNESS](../../cpp_src/cube_exactness/cube_exactness.html), a
C++ library which investigates the polynomial exactness of quadrature
rules over the interior of a cube in 3D.

[HYPERCUBE\_EXACTNESS](../../cpp_src/hypercube_exactness/hypercube_exactness.html),
a C++ program which tests the exactness of integration rules over the
interior of the hypercube in M dimensions.

[PYRAMID\_EXACTNESS](../../cpp_src/pyramid_exactness/pyramid_exactness.html),
a C++ program which investigates the polynomial exactness of a
quadrature rule over the interior of the pyramid in 3D.

[SPHERE\_EXACTNESS](../../cpp_src/sphere_exactness/sphere_exactness.html),
a C++ program which tests the monomial exactness of a quadrature rule on
the surface of the unit sphere in 3D.

[SQUARE\_EXACTNESS](../../cpp_src/square_exactness/square_exactness.html),
a C++ library which investigates the polynomial exactness of quadrature
rules for f(x,y) over the interior of a rectangle in 2D.

[TETRAHEDRON\_EXACTNESS](../../cpp_src/tetrahedron_exactness/tetrahedron_exactness.html),
a C++ program which investigates the polynomial exactness of a
quadrature rule over the interior of the tetrahedron in 3D.

[TRIANGLE\_ANALYZE](../../cpp_src/triangle_analyze/triangle_analyze.html),
a C++ program which reads a triangle defined in a file, and uses the
triangle\_properties() library to compute angles, area, centroid,
circumcircle, edge lengths, incircle, orientation, orthocenter, and
quality.

[TRIANGLE\_DUNAVANT\_RULE](../../cpp_src/triangle_dunavant_rule/triangle_dunavant_rule.html),
a C++ library which sets up a Dunavant quadrature rule over the interior
of a triangle in 2D.

[TRIANGLE\_FEKETE\_RULE](../../cpp_src/triangle_fekete_rule/triangle_fekete_rule.html),
a C++ library which defines Fekete rules for interpolation or quadrature
over the interior of a triangle in 2D.

[TRIANGLE\_FELIPPA\_RULE](../../cpp_src/triangle_felippa_rule/triangle_felippa_rule.html),
a C++ library which returns Felippa's quadratures rules for
approximating integrals over the interior of a triangle in 2D.

[TRIANGLE\_LYNESS\_RULE](../../cpp_src/triangle_lyness_rule/triangle_lyness_rule.html),
a C++ library which returns Lyness-Jespersen quadrature rules over the
interior of a triangle in 2D.

[TRIANGLE\_MONTE\_CARLO](../../cpp_src/triangle_monte_carlo/triangle_monte_carlo.html),
a C++ program which uses the Monte Carlo method to estimate integrals
over the interior of a triangle in 2D.

[TRIANGLE\_SYMQ\_RULE](../../cpp_src/triangle_symq_rule/triangle_symq_rule.html),
a C++ library which returns efficient symmetric quadrature rules, with
exactness up to total degree 50, over the interior of an arbitrary
triangle in 2D, by Hong Xiao and Zydrunas Gimbutas.

[TRIANGLE\_WANDZURA\_RULE](../../cpp_src/triangle_wandzura_rule/triangle_wandzura_rule.html),
a C++ library which sets up a quadrature rule of exactness 5, 10, 15,
20, 25 or 30 over the interior of a triangle in 2D.

[WEDGE\_EXACTNESS](../../cpp_src/wedge_exactness/wedge_exactness.html),
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

-   [triangle\_exactness.cpp](triangle_exactness.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**STRANG5** is Strang's fifth rule for triangles.

-   [strang5\_r.txt](strang5_r.txt), the region file.
-   [strang5\_w.txt](strang5_w.txt), the weight file.
-   [strang5\_x.txt](strang5_x.txt), the point file.
-   [strang5\_output.txt](strang5_output.txt) output from
    "triangle\_exactness strang5 5".

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for TRIANGLE\_EXACTNESS.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **COMP\_NEXT** computes the compositions of the integer N into K
    parts.
-   **FILE\_COLUMN\_COUNT** counts the columns in the first line of a
    file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
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
-   **TRIANGLE\_AREA** computes the area of a triangle.
-   **TRIANGLE\_ORDER3\_PHYSICAL\_TO\_REFERENCE** maps physical points
    to reference points.
-   **TRIANGLE01\_MONOMIAL\_INTEGRAL** integrates a monomial over the
    unit triangle.
-   **TRANGLE01\_MONOMIAL\_QUADRATURE** applies quadrature to a monomial
    in a triangle.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 27 September 2010.*
