FEM2D\_PACK\
Finite Element Routines {#fem2d_pack-finite-element-routines align="center"}
=======================

------------------------------------------------------------------------

**FEM2D\_PACK** is a C++ library which implements the finite element
method.

The emphasis is on simplicity and clarity. Only the 2D case is handled,
with a choice of low order triangular and quadrilateral elements.

A few routines are included for computing a "sphere grid", that is, a
finite element mesh on the surface of a sphere.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FEM2D\_PACK** is available in [a C
version](../../c_src/fem2d_pack/fem2d_pack.md) and [a C++
version](../../master/fem2d_pack/fem2d_pack.md) and [a FORTRAN77
version](../../f77_src/fem2d_pack/fem2d_pack.md) and [a FORTRAN90
version](../../f_src/fem2d_pack/fem2d_pack.md) and [a MATLAB
version](../../m_src/fem2d_pack/fem2d_pack.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FEM1D\_PACK](../../master/fem1d_pack/fem1d_pack.md), a C++ library
which contains utilities for 1D finite element calculations.

[FEM2D](../../data/fem2d/fem2d.md), a data directory which contains
examples of 2D FEM files, three text files that describe a 2D finite
element geometry;

[FEM2D\_HEAT](../../master/fem2d_heat/fem2d_heat.md), a C++ program
which solves the time dependent heat equation on the unit square.

[FEM2D\_POISSON](../../master/fem2d_poisson/fem2d_poisson.md), a C++
program which solves Poisson's equation on a square, using the finite
element method.

[FEM2D\_POISSON\_RECTANGLE\_LINEAR](../../master/fem2d_poisson_rectangle_linear/fem2d_poisson_rectangle_linear.md),
a C++ program which solves the 2D Poisson equation on a rectangle, using
the finite element method, and piecewise linear triangular elements.

[FEM2D\_SAMPLE](../../master/fem2d_sample/fem2d_sample.md), a C++
library which evaluates a finite element function defined on an order 3
or order 6 triangulation.

### Reference: {#reference align="center"}

1.  Milton Abramowitz, Irene Stegun,\
    Handbook of Mathematical Functions,\
    National Bureau of Standards, 1964,\
    ISBN: 0-486-61272-4,\
    LC: QA47.A34.
2.  Jack Dongarra, Jim Bunch, Cleve Moler, Pete Stewart,\
    LINPACK User's Guide,\
    SIAM, 1979,\
    ISBN13: 978-0-898711-72-1.
3.  Vladimir Krylov,\
    Approximate Calculation of Integrals,\
    Dover, 2006,\
    ISBN: 0486445798.
4.  Hans Rudolf Schwarz,\
    Finite Element Methods,\
    Academic Press, 1988,\
    ISBN: 0126330107,\
    LC: TA347.F5.S3313..
5.  Gilbert Strang, George Fix,\
    An Analysis of the Finite Element Method,\
    Cambridge, 1973,\
    ISBN: 096140888X,\
    LC: TA335.S77.
6.  Arthur Stroud,\
    Approximate Calculation of Multiple Integrals,\
    Prentice Hall, 1971,\
    ISBN: 0130438936,\
    LC: QA311.S85.
7.  Arthur Stroud, Don Secrest,\
    Gaussian Quadrature Formulas,\
    Prentice Hall, 1966,\
    LC: QA299.4G3S7.
8.  Olgierd Zienkiewicz,\
    The Finite Element Method,\
    Sixth Edition,\
    Butterworth-Heinemann, 2005,\
    ISBN: 0750663200.
9.  Daniel Zwillinger, editor,\
    CRC Standard Mathematical Tables and Formulae,\
    30th Edition,\
    CRC Press, 1996,\
    ISBN: 0-8493-2479-3.

### Source Code: {#source-code align="center"}

-   [fem2d\_pack.cpp](fem2d_pack.cpp), the source code;
-   [fem2d\_pack.hpp](fem2d_pack.hpp), the include file;

### Examples and Tests: {#examples-and-tests align="center"}

-   [fem2d\_pack\_prb.cpp](fem2d_pack_prb.cpp), the calling program;
-   [fem2d\_pack\_prb\_output.txt](fem2d_pack_prb_output.txt), the
    sample output.

A number of files are created by the program.

-   [fem2d\_pack\_prb\_q4.png](fem2d_pack_prb_q4.png), a PNG image of a
    Q4 mesh.
-   [fem2d\_pack\_prb\_t3.png](fem2d_pack_prb_t3.png), a PNG image of a
    T3 mesh.
-   [fem2d\_pack\_prb\_t6.png](fem2d_pack_prb_t6.png), a PNG image of a
    T6 mesh.
-   [sphere\_q4\_nodes.txt](sphere_q4_nodes.txt), a node file for a Q4
    mesh, which is also a polygonal surface, that approximates a sphere.
-   [sphere\_q4\_elements.txt](sphere_q4_elements.txt), an element file
    for a Q4 mesh, which is also a polygonal surface, that approximates
    a sphere.
-   [sphere\_q9\_nodes.txt](sphere_q9_nodes.txt), a node file for a Q9
    mesh that approximates a sphere.
-   [sphere\_q9\_elements.txt](sphere_q9_elements.txt), an element file
    for a Q9 mesh that approximates a sphere.
-   [sphere\_q16\_nodes.txt](sphere_q16_nodes.txt), a node file for a
    Q16 mesh that approximates a sphere.
-   [sphere\_q16\_elements.txt](sphere_q16_elements.txt), an element
    file for a Q16 mesh that approximates a sphere.
-   [sphere\_t3\_nodes.txt](sphere_t3_nodes.txt), a node file for a T3
    mesh, which is also a polygonal surface, that approximates a sphere.
-   [sphere\_t3\_elements.txt](sphere_t3_elements.txt), an element file
    for a T3 mesh, which is also a polygonal surface, that approximates
    a sphere.
-   [sphere\_t6\_nodes.txt](sphere_t6_nodes.txt), a node file for a T6
    mesh that approximates a sphere.
-   [sphere\_t6\_elements.txt](sphere_t6_elements.txt), an element file
    for a T6 mesh that approximates a sphere.

### List of Routines: {#list-of-routines align="center"}

-   **BANDWIDTH\_MESH** determines the bandwidth of the coefficient
    matrix.
-   **BANDWIDTH\_VAR** determines the bandwidth for finite element
    variables.
-   **BASIS\_11\_T3:** one basis at one point for a T3 element.
-   **BASIS\_11\_T3\_TEST** verifies BASIS\_11\_T3.
-   **BASIS\_MN\_T4:** one basis at one point for a T4 element.
-   **BASIS\_11\_T4\_TEST** verifies BASIS\_11\_T4.
-   **BASIS\_11\_T6:** one basis at one point for the T6 element.
-   **BASIS\_11\_T6\_TEST** verifies BASIS\_11\_T6.
-   **BASIS\_MN\_Q4:** all bases at N points for a Q4 element.
-   **BASIS\_MN\_Q4\_TEST** verifies BASIS\_MN\_Q4.
-   **BASIS\_MN\_T3:** all bases at N points for a T3 element.
-   **BASIS\_MN\_T3\_TEST** verifies BASIS\_MN\_T3.
-   **BASIS\_MN\_T4:** all bases at N points for a T4 element.
-   **BASIS\_MN\_T4\_TEST** verifies BASIS\_MN\_T4.
-   **BASIS\_MN\_T6:** all bases at N points for a T6 element.
-   **BASIS\_MN\_T6\_TEST** verifies BASIS\_MN\_T6.
-   **CH\_CAP** capitalizes a single character.
-   **DEGREES\_TO\_RADIANS** converts an angle from degrees to radians.
-   **DERIVATIVE\_AVERAGE\_T3** averages derivatives at the nodes of a
    T3 mesh.
-   **DIV\_Q4** estimates the divergence and vorticity of a discrete
    field.
-   **ELEMENT\_CODE** returns the code for each element.
-   **ELEMENTS\_EPS** creates an EPS file image of the elements of a
    grid.
-   **GRID\_ELEMENT** returns the element grid associated with any
    available element.
-   **GRID\_ELEMENT\_NUM** returns the number of elements in a grid.
-   **GRID\_NODE\_NUM** returns the number of nodes in a grid.
-   **GRID\_NODES\_01** returns an equally spaced rectangular grid of
    nodes in the unit square.
-   **GRID\_PRINT** prints the elements that form a grid.
-   **GRID\_Q4\_ELEMENT** produces a grid of 4 node quadrilaterals.
-   **GRID\_Q4\_ELEMENT\_NUM** counts the elements in a grid of 4 node
    quadrilaterals.
-   **GRID\_Q4\_NODE\_NUM** counts the nodes in a grid of 4 node
    quadrilaterals.
-   **GRID\_Q8\_ELEMENT** produces a grid of 8 node quadrilaterals.
-   **GRID\_Q8\_ELEMENT\_NUM** counts the elements in a grid of 8 node
    quadrilaterals.
-   **GRID\_Q8\_NODE\_NUM** counts the nodes in a grid of 8 node
    quadrilaterals.
-   **GRID\_Q9\_ELEMENT** produces a grid of 9 node quadrilaterals.
-   **GRID\_Q9\_ELEMENT\_NUM** counts the elements in a grid of 9 node
    quadrilaterals.
-   **GRID\_Q9\_NODE\_NUM** counts the nodes in a grid of 9 node
    quadrilaterals.
-   **GRID\_Q12\_ELEMENT** produces a grid of 12 node quadrilaterals.
-   **GRID\_Q12\_ELEMENT\_NUM** counts the elements in a grid of 12 node
    quadrilaterals.
-   **GRID\_Q12\_NODE\_NUM** counts the nodes in a grid of 12 node
    quadrilaterals.
-   **GRID\_Q16\_ELEMENT** produces a grid of 16 node quadrilaterals.
-   **GRID\_Q16\_ELEMENT\_NUM** counts the elements in a grid of 16 node
    quadrilaterals.
-   **GRID\_Q16\_NODE\_NUM** counts the nodes in a grid of 16 node
    quadrilaterals.
-   **GRID\_QL\_ELEMENT** produces a grid of 6 node quadratics/linears.
-   **GRID\_QL\_ELEMENT\_NUM** counts the elements in a grid of
    quadratic/linear quadrilaterals.
-   **GRID\_QL\_NODE\_NUM** counts the nodes in a grid of
    quadratic/linear quadrilaterals.
-   **GRID\_SHAPE\_2D** guesses the shape N1 by N2 of a vector of data.
-   **GRID\_T3\_ELEMENT** produces a grid of pairs of 3 node triangles.
-   **GRID\_T3\_ELEMENT\_NUM** counts the elements in a grid of 3 node
    triangles.
-   **GRID\_T3\_NODE\_NUM** counts the nodes in a grid of 3 node
    triangles.
-   **GRID\_T4\_ELEMENT** produces a grid of pairs of 4 node triangles.
-   **GRID\_T4\_ELEMENT\_NUM** counts the elements in a grid of 4 node
    triangles.
-   **GRID\_T4\_NODE\_NUM** counts the nodes in a grid of 4 node
    triangles.
-   **GRID\_T6\_ELEMENT** produces a grid of pairs of 6 node triangles.
-   **GRID\_T6\_ELEMENT\_NUM** counts the elements in a grid of 6 node
    triangles.
-   **GRID\_T6\_NODE\_NUM** counts the nodes in a grid of 6 node
    triangles.
-   **GRID\_T10\_ELEMENT** produces a grid of pairs of 10 node
    triangles.
-   **GRID\_T10\_ELEMENT\_NUM** counts the elements in a grid of 10 node
    triangles.
-   **GRID\_T10\_NODE\_NUM** counts the nodes in a grid of 10 node
    triangles.
-   **GRID\_TEST** tests the grid routines.
-   **GRID\_WIDTH** computes the width of a given grid.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the smaller of two I4's.
-   **I4\_MODP** returns the nonnegative remainder of I4 division.
-   **I4\_WRAP** forces an I4 to lie between given limits by wrapping.
-   **I4MAT\_TRANSPOSE\_PRINT** prints an I4MAT, transposed.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an I4MAT,
    transposed.
-   **I4MAT\_WRITE** writes an I4MAT file with no header.
-   **I4VEC\_PRINT** prints an I4VEC.
-   **INTERP** interpolates a quantity in an element from basis node
    values.
-   **INTERP\_TEST** tests the interpolation property of an element.
-   **LEGENDRE\_COM** computes abscissas and weights for Gauss-Legendre
    quadrature.
-   **LEGENDRE\_SET** sets abscissas and weights for Gauss-Legendre
    quadrature.
-   **MAP** returns the interpolation matrix for any available element.
-   **MAP\_TEST** tests the map routines.
-   **MASS\_MATRIX\_T6** computes the mass matrix, using 6-node
    triangles.
-   **NEXT\_BOUNDARY\_NODE** returns the next boundary node in any
    element.
-   **NEXT\_BOUNDARY\_NODE\_Q4** returns the next boundary node in a Q4
    element.
-   **NEXT\_BOUNDARY\_NODE\_Q8** returns the next boundary node in a Q8
    element.
-   **NEXT\_BOUNDARY\_NODE\_Q9** returns the next boundary node in a Q9
    element.
-   **NEXT\_BOUNDARY\_NODE\_Q12** returns the next boundary node in a
    Q12 element.
-   **NEXT\_BOUNDARY\_NODE\_Q16** returns the next boundary node in a
    Q16 element.
-   **NEXT\_BOUNDARY\_NODE\_QL** returns the next boundary node in a QL
    element.
-   **NEXT\_BOUNDARY\_NODE\_T3** returns the next boundary node in a T3
    element.
-   **NEXT\_BOUNDARY\_NODE\_T4** returns the next boundary node in a T4
    element.
-   **NEXT\_BOUNDARY\_NODE\_T6** returns the next boundary node in a T6
    element.
-   **NEXT\_BOUNDARY\_NODE\_T10** returns the next boundary node in a
    T10 element.
-   **NODE\_REFERENCE** returns the basis nodes for any available
    element.
-   **NODE\_REFERENCE\_Q4** returns the basis nodes for a 4 node
    quadrilateral.
-   **NODE\_REFERENCE\_Q8** returns the basis nodes for an 8 node
    quadrilateral.
-   **NODE\_REFERENCE\_Q9** returns the basis nodes for a 9 node
    quadrilateral.
-   **NODE\_REFERENCE\_Q12** returns the basis nodes for a 12 node
    quadrilateral.
-   **NODE\_REFERENCE\_Q16** returns the basis nodes for a 16 node
    quadrilateral.
-   **NODE\_REFERENCE\_QL** returns the basis nodes for a
    quadratic/linear.
-   **NODE\_REFERENCE\_T3** returns the basis nodes for the 3 node
    triangle.
-   **NODE\_REFERENCE\_T4** returns the basis nodes for the 4 node
    triangle.
-   **NODE\_REFERENCE\_T6** returns the basis nodes for a 6 node
    triangle.
-   **NODE\_REFERENCE\_T10** returns the basis nodes for a 10 node
    triangle.
-   **NS\_T6\_VAR\_COUNT** counts the Navier Stokes variables on a T6
    grid.
-   **NS\_T6\_VAR\_SET** sets the Navier Stokes variables on a T6 grid.
-   **ORDER\_CODE** returns the order for each element.
-   **PHYSICAL\_TO\_REFERENCE\_T3** maps physical points to reference
    points.
-   **POINTS\_PLOT** plots a pointset.
-   **POLY** returns the polynomial terms associated with any available
    element.
-   **POLY\_Q4** returns the monomials associated with a 4 node
    quadrilateral.
-   **POLY\_Q8** returns the monomials associated with an 8 node
    quadrilateral.
-   **POLY\_Q9** returns the monomials associated with a 9 node
    quadrilateral.
-   **POLY\_Q12** returns the monomials associated with a 12 node
    quadrilateral.
-   **POLY\_Q16** returns the monomials associated with a 16 node
    quadrilateral.
-   **POLY\_QL** returns the monomials for a quadratic/linear
    quadrilateral.
-   **POLY\_T3** returns the monomials associated with a 3 node
    triangle.
-   **POLY\_T6** returns the monomials associated with a 6 node
    triangle.
-   **POLY\_T10** returns the monomials associated with a 10 node
    triangle.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_EPSILON** returns the roundoff unit for R8's.
-   **R8\_HUGE** returns a "huge" double precision value.
-   **R8\_NINT** returns the nearest integer to an R8.
-   **R8\_POWER** computes the P-th power of R.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **R8GE\_FA** performs a LINPACK-style PLU factorization of a R8GE
    matrix.
-   **R8GE\_INVERSE** computes the inverse of a R8GE matrix factored by
    R8GE\_FA.
-   **R8MAT\_MM** multiplies two matrices.
-   **R8MAT\_PRINT** prints an R8MAT, with an optional title.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8MAT\_WRITE** writes an R8MAT file with no header.
-   **REFERENCE\_SAMPLE** samples a reference element.
-   **REFERENCE\_TO\_PHYSICAL\_Q4** maps Q4 reference points to physical
    points.
-   **REFERENCE\_TO\_PHYSICAL\_T3** maps T3 reference points to physical
    points.
-   **REFERENCE\_TO\_PHYSICAL\_T6** maps T6 reference points to physical
    points.
-   **S\_EQI** reports whether two strings are equal, ignoring case.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **SERENE** interpolates data using a Q8 element.
-   **SHAPE** evaluates shape functions for any available element.
-   **SHAPE\_Q4** evaluates shape functions for a 4 node quadrilateral.
-   **SHAPE\_Q8** evaluates shape functions for an 8 node quadrilateral.
-   **SHAPE\_Q9** evaluates shape functions for a 9 node quadrilateral.
-   **SHAPE\_Q12** evaluates shape functions for a 12 node
    quadrilateral.
-   **SHAPE\_Q16** evaluates shape functions for a 16 node
    quadrilateral.
-   **SHAPE\_QL** evaluates shape functions for a 6 node
    quadratic/linear.
-   **SHAPE\_T3** evaluates shape functions for a 3 node triangle.
-   **SHAPE\_T4** evaluates shape functions for a T4 triangle.
-   **SHAPE\_T6** evaluates shape functions for a 6 node triangle.
-   **SHAPE\_T10** evaluates shape functions for a 10 node triangle.
-   **SHAPE\_TEST** verifies the shape function values at the basis
    nodes.
-   **SPHERE\_GRID\_ELEMENT\_NUM** returns the number of elements in a
    sphere grid.
-   **SPHERE\_GRID\_NODE\_NUM** returns the number of nodes in a sphere
    grid.
-   **SPHERE\_GRID\_Q4\_ELEMENT** produces a Q4 sphere grid.
-   **SPHERE\_GRID\_Q4\_ELEMENT\_NUM** counts the elements in a Q4
    sphere grid.
-   **SPHERE\_GRID\_Q4\_NODE\_NUM** counts nodes in a Q4 sphere grid.
-   **SPHERE\_GRID\_Q4\_NODE\_XYZ** produces node coordinates for a Q4
    sphere grid.
-   **SPHERE\_GRID\_Q9\_ELEMENT** produces a Q9 sphere grid.
-   **SPHERE\_GRID\_Q9\_ELEMENT\_NUM** counts the elements in a Q9
    sphere grid.
-   **SPHERE\_GRID\_Q9\_NODE\_NUM** counts nodes in a Q9 sphere grid.
-   **SPHERE\_GRID\_Q9\_NODE\_XYZ** produces node coordinates for a Q9
    sphere grid.
-   **SPHERE\_GRID\_Q16\_ELEMENT** produces a Q16 sphere grid.
-   **SPHERE\_GRID\_Q16\_ELEMENT\_NUM** counts the elements in a Q16
    sphere grid.
-   **SPHERE\_GRID\_Q16\_NODE\_NUM** counts nodes in a Q16 sphere grid.
-   **SPHERE\_GRID\_Q16\_NODE\_XYZ** produces node coordinates for a Q16
    sphere grid.
-   **SPHERE\_GRID\_T3\_ELEMENT** produces a T3 sphere grid.
-   **SPHERE\_GRID\_T3\_ELEMENT\_NUM** counts the elements in a T3
    sphere grid.
-   **SPHERE\_GRID\_T3\_NODE\_NUM** counts nodes in a T3 sphere grid.
-   **SPHERE\_GRID\_T3\_NODE\_XYZ** produces node coordinates for a T3
    sphere grid.
-   **SPHERE\_GRID\_T6\_ELEMENT** produces a T6 sphere grid.
-   **SPHERE\_GRID\_T6\_ELEMENT\_NUM** counts the elements in a T6
    sphere grid.
-   **SPHERE\_GRID\_T6\_NODE\_NUM** counts nodes in a T6 sphere grid.
-   **SPHERE\_GRID\_T6\_NODE\_XYZ** produces node coordinates for a T6
    sphere grid.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TRIANGLE\_UNIT\_SET** sets a quadrature rule in a unit triangle.
-   **TRIANGLE\_UNIT\_SIZE** returns the "size" of a unit triangle
    quadrature rule.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 16 August 2009.*
