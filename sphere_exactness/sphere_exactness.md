SPHERE\_EXACTNESS\
Exactness of Quadrature on the Unit Sphere {#sphere_exactness-exactness-of-quadrature-on-the-unit-sphere align="center"}
==========================================

------------------------------------------------------------------------

**SPHERE\_EXACTNESS** is a C++ program which investigates the polynomial
exactness of a quadrature rule over the surface of the unit sphere in
3D.

The polynomial exactness of a quadrature rule is defined as the highest
total degree **D** such that the quadrature rule is guaranteed to
integrate exactly all polynomials of total degree **DEGREE\_MAX** or
less, ignoring roundoff. The total degree of a polynomial is the maximum
of the degrees of all its monomial terms. For the unit sphere in 3D, the
degree of a monomial term is the sum of the exponents of **x**, **y**
and **z**. Thus, for instance, the **DEGREE** of

> **x^2^yz^5^**

is 2+1+5=8.

To be thorough, the program starts at **DEGREE** = 0, and then proceeds
to **DEGREE** = 1, 2, and so on up to a maximum degree **DEGREE\_MAX**
specified by the user. At each value of **DEGREE**, the program
generates every possible monomial term, applies the quadrature rule to
it, and determines the quadrature error.

The quadrature rule is read by the program, and there are a number of
options for how that information is stored.

### Usage: {#usage align="center"}

> **sphere\_exactness** *files* *prefix* *degree\_max*

where

-   *files* indicates how the quadrature rule is stored (see below);
-   *prefix* is the common prefix for the files;
-   *degree\_max* is the maximum total monomial degree to check. A value
    of 5 or 10 might be reasonable, but a value of 50 or 100 is probably
    never a good input!

The input value of **files** indicates how the quadrature rule
information is stored. It might be in one or two files; the abscissas
might be stored as (X,Y,Z) or as angles. The angles might be in radians
or degrees. The weights might be assumed to be equal, in which case they
need not be input.

-   **XYZW** for file *prefix*.**xyzw** containing (X,Y,Z,Weight);
-   **RTPW** for file *prefix*.**rtpw** containing (Theta, Phi, Weight)
    (radians);
-   **DTPW** for file *prefix*.**dtpw** containing (Theta, Phi, Weight)
    (degrees);
-   **XYZ+W** for file *prefix*.**xyz** containing (X,Y,Z) and file
    *prefix*.**w** containing Weight;
-   **RTP+W** for file *prefix*.**rtp** containing (Theta, Phi ) in
    radians, and file *prefix*.**w** containing Weight;
-   **DTP+W** for file *prefix*.**dtp** containing (Theta, Phi ) in
    degrees, and file *prefix*.**w** containing Weight;
-   **XYZ1** for file *prefix*.**xyz** containing (X,Y,Z), and equal
    weights, which do not need to be read in.
-   **RTP1** for file *prefix*.**rtp** containing (Theta, Phi ) in
    radians, and equal weights, which do not need to be read in.
-   **DTP1** for file *prefix*.**dtp** containing (Theta, Phi ) in
    degrees, and equal weights, which do not need to be read in.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SPHERE\_EXACTNESS** is available in [a C
version](../../c_src/sphere_exactness/sphere_exactness.md) and [a C++
version](../../master/sphere_exactness/sphere_exactness.md) and [a
FORTRAN77 version](../../f77_src/sphere_exactness/sphere_exactness.md)
and [a FORTRAN90
version](../../f_src/sphere_exactness/sphere_exactness.md) and [a
MATLAB version](../../m_src/sphere_exactness/sphere_exactness.md).

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

[SPHERE\_DESIGN\_RULE](../../datasets/sphere_design_rule/sphere_design_rule.md),
a dataset directory which contains files defining point sets on the
surface of the unit sphere, known as "designs", which can be useful for
estimating integrals on the surface, among other uses.

[SPHERE\_DESIGN\_RULE](../../f_src/sphere_design_rule/sphere_design_rule.md),
a FORTRAN90 library which returns point sets on the surface of the unit
sphere, known as "designs", which can be useful for estimating integrals
on the surface, among other uses.

[SPHERE\_LEBEDEV\_RULE](../../datasets/sphere_lebedev_rule/sphere_lebedev_rule.md),
a dataset directory which contains sets of Lebedev points on a unit
sphere, which can be used for quadrature rules of a known precision;

[SPHERE\_LEBEDEV\_RULE](../../master/sphere_lebedev_rule/sphere_lebedev_rule.md),
a C++ library which computes Lebedev quadrature rules for the unit
sphere;

[SPHERE\_MONTE\_CARLO](../../master/sphere_monte_carlo/sphere_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the surface of the unit sphere in 3D;

[SPHERE\_QUAD](../../master/sphere_quad/sphere_quad.md), a C++
library which approximates an integral over the surface of the unit
sphere by applying a triangulation to the surface;

[SPHERE\_TRIANGLE\_QUAD](../../master/sphere_triangle_quad/sphere_triangle_quad.md),
a C++ library which estimates the integral of a function over a
spherical triangle.

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

1.  Gerald Folland,\
    How to Integrate a Polynomial Over a Sphere,\
    American Mathematical Monthly,\
    Volume 108, Number 5, May 2001, pages 446-448.
2.  Ronald Hardin, Neil Sloane,\
    McLaren's Improved Snub Cube and Other New Spherical Designs in
    Three Dimensions,\
    Discrete and Computational Geometry,\
    Volume 15, 1996, pages 429-441.
3.  Vyacheslav Lebedev, Dmitri Laikov,\
    A quadrature formula for the sphere of the 131st algebraic order of
    accuracy,\
    Russian Academy of Sciences Doklady Mathematics,\
    Volume 59, Number 3, 1999, pages 477-481.
4.  AD McLaren,\
    Optimal Numerical Integration on a Sphere,\
    Mathematics of Computation,\
    Volume 17, Number 84, October 1963, pages 361-383.

### Source Code: {#source-code align="center"}

-   [sphere\_exactness.cpp](sphere_exactness.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**DESIGN\_04** is a spherical design of precision 4. Uniform weights are
used.

-   [design\_04.xyz](design_04.xyz) contains the XYZ coordinates.
-   [design\_04\_output.txt](design_04_output.txt) is the output from
    **sphere\_exactness xyz1 design\_04 5**.

**LEBEDEV\_13** is the 74 Lebedev rule of precision 13. Weights are
specified, and the data is stored in the "DTPW" format, that is, theta
and phi are specified in degrees. are used.

-   [lebedev\_013.dtpw](lebedev_013.dtpw) contains the DTPW information.
-   [lebedev\_013\_output.txt](lebedev_013_output.txt) is the output
    from **sphere\_exactness dtpw lebedev\_013 5**.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for SPHERE\_EXACTNESS.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is a case insensitive comparison of two characters for
    equality.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **COMP\_NEXT** computes the compositions of the integer N into K
    parts.
-   **FILE\_COLUMN\_COUNT** counts the number of columns in the first
    line of a file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **GET\_UNIT** returns a free FORTRAN unit number.
-   **MONOMIAL\_INT\_SPHERE\_UNIT** integrates a monomial over the unit
    tetrahedron.
-   **MONOMIAL\_QUADRATURE\_SPHERE** applies quadrature to a monomial in
    a tetrahedron.
-   **MONOMIAL\_VALUE** evaluates a monomial.
-   **R8\_GAMMA** evaluates Gamma(X) for a real argument.
-   **R8MAT\_DATA\_READ** reads data from an R8MAT file.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
-   **S\_EQI** is a case insensitive comparison of two strings for
    equality.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **SPHERE01\_MONOMIAL\_INT** integrates a monomial on the unit
    sphere.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 10 September 2010.*
