HYPERCUBE\_EXACTNESS\
Exactness of Multidimensional Quadrature {#hypercube_exactness-exactness-of-multidimensional-quadrature align="center"}
========================================

------------------------------------------------------------------------

**HYPERCUBE\_EXACTNESS** is a C++ program which investigates the
polynomial exactness of a quadrature rule over the interior of the
hypercube in M dimensions.

The polynomial exactness of a quadrature rule is defined as the highest
total degree **D** such that the quadrature rule is guaranteed to
integrate exactly all polynomials of total degree **DEGREE\_MAX** or
less, ignoring roundoff. The total degree of a polynomial is the maximum
of the degrees of all its monomial terms. The degree of a monomial term
is the sum of the exponents. Thus, for instance, the **DEGREE** of

> **x^2^y z^5^**

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

> **HYPERCUBE\_EXACTNESS** *prefix* *degree\_max*

where

-   *prefix* is the common prefix for the files containing the abscissa,
    weight and region information of the quadrature rule;
-   *degree\_max* is the maximum total monomial degree to check. This
    should be a relatively small nonnegative number, particularly if the
    spatial dimension is high. A value of 5 or 10 might be reasonable,
    but a value of 50 or 100 is probably never a good input!

If the arguments are not supplied on the command line, the program will
prompt for them.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**HYPERCUBE\_EXACTNESS** is available in [a C
version](../../c_src/hypercube_exactness/hypercube_exactness.md) and
[a C++
version](../../master/hypercube_exactness/hypercube_exactness.md) and
[a FORTRAN90
version](../../f77_src/hypercube_exactness/hypercube_exactness.md) and
[a FORTRAN90
version](../../f_src/hypercube_exactness/hypercube_exactness.md) and
[a MATLAB
version](../../m_src/hypercube_exactness/hypercube_exactness.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CUBE\_EXACTNESS](../../master/cube_exactness/cube_exactness.md), a
C++ library which investigates the polynomial exactness of quadrature
rules over the interior of a cube in 3D.

[EXACTNESS](../../master/exactness/exactness.md), a C++ library which
investigates the exactness of quadrature rules that estimate the
integral of a function with a density, such as 1, exp(-x) or exp(-x\^2),
over an interval such as \[-1,+1\], \[0,+oo) or (-oo,+oo).

[HYPERCUBE\_GRID](../../master/hypercube_grid/hypercube_grid.md), a
C++ library which computes a grid of points over the interior of a
hypercube in M dimensions.

[PYRAMID\_EXACTNESS](../../master/pyramid_exactness/pyramid_exactness.md),
a C++ program which investigates the polynomial exactness of a
quadrature rule over the interior of the unit pyramid in 3D.

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

1.  Philip Davis, Philip Rabinowitz,\
    Methods of Numerical Integration,\
    Second Edition,\
    Dover, 2007,\
    ISBN: 0486453391,\
    LC: QA299.3.D28.

### Source Code: {#source-code align="center"}

-   [hypercube\_exactness.cpp](hypercube_exactness.cpp), the source
    code.

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

**CC\_D2\_O3x3** is a Clenshaw-Curtis 3x3 product rule for 2D.

-   [cc\_d2\_o3x3\_x.txt](../../datasets/quadrature_rules/cc_d2_o3x3_x.txt),
    the abscissas of the rule.
-   [cc\_d2\_o3x3\_w.txt](../../datasets/quadrature_rules/cc_d2_o3x3_w.txt),
    the weights of the rule.
-   [cc\_d2\_o3x3\_r.txt](../../datasets/quadrature_rules/cc_d2_o3x3_r.txt),
    defines the region for the rule.
-   [cc\_d2\_o3x3\_exact.txt](cc_d2_o3x3_exact.txt), the results of the
    exactness test, up to degree 8.

**CC\_D3\_O3x3x3** is a Clenshaw-Curtis 3x3x3 product rule for 3D.

-   [cc\_d3\_o3x3x3\_x.txt](../../datasets/quadrature_rules/cc_d3_o3x3x3_x.txt),
    the abscissas of the rule.
-   [cc\_d3\_o3x3x3\_w.txt](../../datasets/quadrature_rules/cc_d3_o3x3x3_w.txt),
    the weights of the rule.
-   [cc\_d3\_o3x3x3\_r.txt](../../datasets/quadrature_rules/cc_d3_o3x3x3_r.txt),
    defines the region for the rule.
-   [cc\_d3\_o3x3x3\_exact.txt](cc_d3_o3x3x3_exact.txt), the results of
    the exactness test, up to degree 5.

**CCGL\_D2\_O3x2** is a product rule for 2D whose factors are a
Clenshaw-Curtis of order 3 and a Gauss-Legendre rule of order 2.

-   [ccgl\_d2\_o3x2\_x.txt](../../datasets/quadrature_rules/ccgl_d2_o3x2_x.txt),
    the abscissas of the rule.
-   [ccgl\_d2\_o3x2\_w.txt](../../datasets/quadrature_rules/ccgl_d2_o3x2_w.txt),
    the weights of the rule.
-   [ccgl\_d2\_o3x2\_r.txt](../../datasets/quadrature_rules/ccgl_d2_o3x2_r.txt),
    defines the region for the rule.
-   [ccgl\_d2\_o3x2\_exact.txt](ccgl_d2_o3x2_exact.txt), the results of
    the exactness test, up to degree 5.

**CC\_D2\_LEVEL0** is a Clenshaw Curtis sparse rule for 2D of level 0
and order 1.

-   [cc\_d2\_level0\_x.txt](../../datasets/quadrature_rules/cc_d2_level0_x.txt),
    the abscissas of the rule.
-   [cc\_d2\_level0\_w.txt](../../datasets/quadrature_rules/cc_d2_level0_w.txt),
    the weights of the rule.
-   [cc\_d2\_level0\_r.txt](../../datasets/quadrature_rules/cc_d2_level0_r.txt),
    defines the region for the rule.
-   [cc\_d2\_level0\_exact.txt](cc_d2_level0_exact.txt), the results of
    the exactness test, up to degree 4.

**CC\_D2\_LEVEL1** is a Clenshaw Curtis sparse rule for 2D of level 1
and order 5.

-   [cc\_d2\_level1\_x.txt](../../datasets/quadrature_rules/cc_d2_level1_x.txt),
    the abscissas of the rule.
-   [cc\_d2\_level1\_w.txt](../../datasets/quadrature_rules/cc_d2_level1_w.txt),
    the weights of the rule.
-   [cc\_d2\_level1\_r.txt](../../datasets/quadrature_rules/cc_d2_level1_r.txt),
    defines the region for the rule.
-   [cc\_d2\_level1\_exact.txt](cc_d2_level1_exact.txt), the results of
    the exactness test, up to degree 4.

**CC\_D2\_LEVEL2** is a Clenshaw Curtis sparse rule for 2D of level 2
and order 13.

-   [cc\_d2\_level2\_x.txt](../../datasets/quadrature_rules/cc_d2_level2_x.txt),
    the abscissas of the rule.
-   [cc\_d2\_level2\_w.txt](../../datasets/quadrature_rules/cc_d2_level2_w.txt),
    the weights of the rule.
-   [cc\_d2\_level2\_r.txt](../../datasets/quadrature_rules/cc_d2_level2_r.txt),
    defines the region for the rule.
-   [cc\_d2\_level2\_exact.txt](cc_d2_level2_exact.txt), the results of
    the exactness test, up to degree 6.

**CC\_D2\_LEVEL3** is a Clenshaw Curtis sparse rule for 2D of level 3
and order 25.

-   [cc\_d2\_level3\_x.txt](../../datasets/quadrature_rules/cc_d2_level3_x.txt),
    the abscissas of the rule.
-   [cc\_d2\_level3\_w.txt](../../datasets/quadrature_rules/cc_d2_level3_w.txt),
    the weights of the rule.
-   [cc\_d3\_level2\_r.txt](../../datasets/quadrature_rules/cc_d2_level3_r.txt),
    defines the region for the rule.
-   [cc\_d2\_level2\_exact.txt](cc_d2_level2_exact.txt), the results of
    the exactness test, up to degree 9.

**CC\_D2\_LEVEL4** is a Clenshaw Curtis sparse grid rule for 2D of level
4 and order 65.

-   [cc\_d2\_level4\_x.txt](../../datasets/sparse_grid_cc/cc_d2_level4_x.txt),
    the abscissas of the rule.
-   [cc\_d2\_level4\_w.txt](../../datasets/sparse_grid_cc/cc_d2_level4_w.txt),
    the weights of the rule.
-   [cc\_d3\_level4\_r.txt](../../datasets/sparse_grid_cc/cc_d2_level4_r.txt),
    defines the region for the rule.
-   [cc\_d2\_level4\_exact.txt](cc_d2_level4_exact.txt), the results of
    the exactness test, up to degree 17.

**CCS\_D2\_LEVEL4** is a Clenshaw Curtis "Slow-Exponential-Growth"
sparse grid rule for 2D of level 4 and order 49.

-   [ccs\_d2\_level4\_x.txt](../../datasets/sparse_grid_ccs/ccs_d2_level4_x.txt),
    the abscissas of the rule.
-   [ccs\_d2\_level4\_w.txt](../../datasets/sparse_grid_ccs/ccs_d2_level4_w.txt),
    the weights of the rule.
-   [ccs\_d3\_level4\_r.txt](../../datasets/sparse_grid_ccs/ccs_d2_level4_r.txt),
    defines the region for the rule.
-   [ccs\_d2\_level4\_exact.txt](ccs_d2_level4_exact.txt), the results
    of the exactness test, up to degree 17.

**GL\_D1\_O3** is a Gauss-Legendre order 3 rule for 1D.

-   [gl\_d1\_o3\_x.txt](../../datasets/quadrature_rules/gl_d1_o3_x.txt),
    the abscissas of the rule.
-   [gl\_d1\_o3\_w.txt](../../datasets/quadrature_rules/gl_d1_o3_w.txt),
    the weights of the rule.
-   [gl\_d1\_o3\_r.txt](../../datasets/quadrature_rules/gl_d1_o3_r.txt),
    defines the region for the rule.
-   [gl\_d1\_o3\_exact.txt](gl_d1_o3_exact.txt), the results of the
    exactness test, up to degree 5.

**GL\_D2\_O3x3** is a Gauss-Legendre 3x3 product rule for 2D.

-   [gl\_d2\_o3x3\_x.txt](../../datasets/quadrature_rules/gl_d2_o3x3_x.txt),
    the abscissas of the rule.
-   [gl\_d2\_o3x3\_w.txt](../../datasets/quadrature_rules/gl_d2_o3x3_w.txt),
    the weights of the rule.
-   [gl\_d2\_o3x3\_r.txt](../../datasets/quadrature_rules/gl_d2_o3x3_r.txt),
    defines the region for the rule.
-   [gl\_d2\_o3x3\_exact.txt](gl_d2_o3x3_exact.txt), the results of the
    exactness test, up to degree 5.

**GL\_D3\_O3x3x3** is a Gauss-Legendre 3x3x3 product rule for 3D.

-   [gl\_d3\_o3x3x3\_x.txt](../../datasets/quadrature_rules/gl_d3_o3x3x3_x.txt),
    the abscissas of the rule.
-   [gl\_d3\_o3x3x3\_w.txt](../../datasets/quadrature_rules/gl_d3_o3x3x3_w.txt),
    the weights of the rule.
-   [gl\_d3\_o3x3x3\_r.txt](../../datasets/quadrature_rules/gl_d3_o3x3x3_r.txt),
    defines the region for the rule.
-   [gl\_d3\_o3x3x3\_exact.txt](gl_d3_o3x3x3_exact.txt), the results of
    the exactness test, up to degree 5.

**NCC\_D1\_O5** is a Newton-Cotes Closed order 5 rule for 1D.

-   [ncc\_d1\_o5\_x.txt](../../datasets/quadrature_rules/ncc_d1_o5_x.txt),
    the abscissas of the rule.
-   [ncc\_d1\_o5\_w.txt](../../datasets/quadrature_rules/ncc_d1_o5_w.txt),
    the weights of the rule.
-   [ncc\_d1\_o5\_r.txt](../../datasets/quadrature_rules/ncc_d1_o5_r.txt),
    defines the region for the rule.
-   [ncc\_d1\_o5\_exact.txt](ncc_d1_o5_exact.txt), the results of the
    exactness test, up to degree 7.

**NCC\_D2\_O5x5** is a Newton-Cotes Closed 5x5 product rule for 2D.

-   [ncc\_d2\_o5x5\_x.txt](../../datasets/quadrature_rules/ncc_d2_o5x5_x.txt),
    the abscissas of the rule.
-   [ncc\_d2\_o5x5\_w.txt](../../datasets/quadrature_rules/ncc_d2_o5x5_w.txt),
    the weights of the rule.
-   [ncc\_d2\_o5x5\_r.txt](../../datasets/quadrature_rules/ncc_d2_o5x5_r.txt),
    defines the region for the rule.
-   [ncc\_d2\_o5x5\_exact.txt](ncc_d2_o5x5_exact.txt), the results of
    the exactness test, up to degree 7.

**NCC\_D3\_O125** is a Newton-Cotes Closed 5x5x5 product rule for 3D.

-   [ncc\_d3\_o5x5x5\_x.txt](../../datasets/quadrature_rules/ncc_d3_o5x5x5_x.txt),
    the abscissas of the rule.
-   [ncc\_d3\_o5x5x5\_w.txt](../../datasets/quadrature_rules/ncc_d3_o5x5x5_w.txt),
    the weights of the rule.
-   [ncc\_d3\_o5x5x5\_r.txt](../../datasets/quadrature_rules/ncc_d3_o5x5x5_r.txt),
    defines the region for the rule.
-   [ncc\_d3\_o5x5x5\_exact.txt](ncc_d3_o5x5x5_exact.txt), the results
    of the exactness test, up to degree 7.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for HYPERCUBE\_EXACTNESS.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **COMP\_NEXT** computes the compositions of the integer N into K
    parts.
-   **FILE\_COLUMN\_COUNT** counts the columns in the first line of a
    file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **MONOMIAL\_INT01** returns the integral of a monomial over the
    \[0,1\] hypercube.
-   **MONOMIAL\_QUADRATURE** applies a quadrature rule to a monomial.
-   **MONOMIAL\_VALUE** evaluates a monomial.
-   **R8MAT\_DATA\_READ** reads the data from an R8MAT file.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
-   **R8VEC\_DOT** computes the dot product of a pair of R8VEC's.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 26 August 2012.*
