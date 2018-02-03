FEM1D\_PROJECT\
Project Data onto a 1D Finite Element Mesh {#fem1d_project-project-data-onto-a-1d-finite-element-mesh align="center"}
==========================================

------------------------------------------------------------------------

**FEM1D\_PROJECT** is a C++ program which computes the projection of
sample data onto a given finite element mesh.

This procedure can be used to determine the least squares approximant to
data (actually, to the piecewise linear interpolant of that data) or to
determine the finite element coefficients appropriate when recomputing a
finite element solution from a fine mesh to a coarse mesh.

The sample data is given simply as two files, one containing the points,
the other, the corresponding data values.

The user must also supply two files defining the finite element mesh,
containing the points, and the pairs of points that form the elements.

The program takes the sample data, projects it onto the finite element
mesh, and determines a file of finite element coefficients that
represent the projection of the data onto the finite element space.

The current version of the program can only handle finite element meshes
which are made of piecewise linear basis functions.

### Usage: {#usage align="center"}

> **fem1d\_project** *sample\_prefix* *fem\_prefix*

where *sample\_prefix* is the common prefix for the SAMPLE files:

-   *sample\_prefix***\_nodes.txt**, the node coordinates.
-   *sample\_prefix***\_values.txt**, the data values;

and *fem\_prefix* is the common prefix for the FEM files:

-   *fem\_prefix***\_nodes.txt**, the node coordinates.
-   *fem\_prefix***\_elements.txt**, the nodes that make up each
    element;
-   *fem\_prefix***\_values.txt**, created by the program, and contains
    the projections of the data values onto the finite element space,
    that is, these may be regarded as coefficients of finite element
    functions representing the projections of the data.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FEM1D\_PROJECT** is available in [a C
version](../../c_src/fem1d_project/fem1d_project.md) and [a C++
version](../../master/fem1d_project/fem1d_project.md) and [a
FORTRAN77 version](../../f77_src/fem1d_project/fem1d_project.md) and
[a FORTRAN90 version](../../f_src/fem1d_project/fem1d_project.md) and
[a MATLAB version](../../m_src/fem1d_project/fem1d_project.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FEM1D](../../data/fem1d/fem1d.md), a data directory which contains
examples of 1D FEM files, three text files that describe a 1D finite
element model;

[FEM1D](../../master/fem1d/fem1d.md), a C++ program which applies the
finite element method to a 1D linear two point boundary value problem.

[FEM1D\_ADAPTIVE](../../master/fem1d_adaptive/fem1d_adaptive.md), a
C++ program which applies the finite element method to a 1D linear two
point boundary value problem using adaptive refinement to improve the
solution.

[FEM1D\_BVP\_LINEAR](../../master/fem1d_bvp_linear/fem1d_bvp_linear.md),
a C++ program which applies the finite element method, with piecewise
linear elements, to a two point boundary value problem in one spatial
dimension.

[FEM1D\_HEAT\_STEADY](../../master/fem1d_heat_steady/fem1d_heat_steady.md),
a C++ program which uses the finite element method to solve the steady
(time independent) heat equation in 1D.

[FEM1D\_NONLINEAR](../../master/fem1d_nonlinear/fem1d_nonlinear.md),
a C++ program which applies the finite element method to a 1D nonlinear
two point boundary value problem.

[FEM1D\_PACK](../../master/fem1d_pack/fem1d_pack.md), a C++ library
which contains utilities for 1D finite element calculations.

[FEM1D\_PMETHOD](../../master/fem1d_pmethod/fem1d_pmethod.md), a C++
program which applies the p-method version of the finite element method
to a 1D linear two point boundary value problem.

[FEM1D\_SAMPLE](../../master/fem1d_sample/fem1d_sample.md), a C++
program which samples a scalar or vector finite element function of one
variable, defined by FEM files, returning interpolated values at the
sample points.

[FEM2D\_PROJECT](../../master/fem2d_project/fem2d_project.md), a C++
program which projects a function F(X,Y), given as a data, into a given
finite element space of piecewise linear triangular elements.

[FEM2D\_PROJECT\_FUNCTION](../../master/fem2d_project_function/fem2d_project_function.md),
a C++ program which projects a function F(X,Y), given as a formula, into
a given finite element space of piecewise linear triangular elements.

[FEM3D\_PROJECT](../../master/fem3d_project/fem3d_project.md), a C++
program which projects a function F(X,Y,Z), given as a data, into a
given finite element space of piecewise linear tetrahedral elements.

### Reference: {#reference align="center"}

1.  Hans Rudolf Schwarz,\
    Finite Element Methods,\
    Academic Press, 1988,\
    ISBN: 0126330107,\
    LC: TA347.F5.S3313.
2.  Gilbert Strang, George Fix,\
    An Analysis of the Finite Element Method,\
    Cambridge, 1973,\
    ISBN: 096140888X,\
    LC: TA335.S77.
3.  Olgierd Zienkiewicz,\
    The Finite Element Method,\
    Sixth Edition,\
    Butterworth-Heinemann, 2005,\
    ISBN: 0750663200,\
    LC: TA640.2.Z54.

### Source Code: {#source-code align="center"}

-   [fem1d\_project.cpp](fem1d_project.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**POWERS** starts with sample data for the vector function f(x)=\[ 1, x,
x\^2\], on a grid of 11 equally spaced nodes from 0 to 10, and projects
this onto a piecewise linear grid of 6 equally spaced nodes from 0 to
10.

-   [sample\_powers\_nodes.txt](sample_powers_nodes.txt), the sample
    nodes.
-   [sample\_powers\_values.txt](sample_powers_values.txt), the sample
    nodal values.
-   [fem\_powers\_nodes.txt](fem_powers_nodes.txt), the FEM nodes.
-   [fem\_powers\_elements.txt](fem_powers_elements.txt), the FEM
    elements.
-   [fem\_powers\_values.txt](fem_powers_values.txt), the projected FEM
    nodal values.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for FEM1D\_PROJECT.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **FEM1D\_APPROXIMATE** approximates data at sample points with an
    FEM function.
-   **FILE\_COLUMN\_COUNT** counts the number of columns in the first
    line of a file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4MAT\_DATA\_READ** reads data from an I4MAT file.
-   **I4MAT\_HEADER\_READ** reads the header from an I4MAT file.
-   **PIECEWISE\_LINEAR\_PRODUCT\_QUAD:** piecewise linear product
    integral.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_EPSILON** returns the R8 roundoff unit.
-   **R8\_MIN** returns the minimum of two R8's.
-   **R83\_NP\_FA** factors a R83 system without pivoting.
-   **R83\_NP\_SL** solves a R83 system factored by R83\_NP\_FA.
-   **R8MAT\_DATA\_READ** reads the data from an R8MAT file.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **R8MAT\_ZERO\_NEW** returns a new zeroed R8MAT.
-   **R8VEC\_BRACKET3** finds the interval containing or nearest a given
    value.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_I4VEC** reads an I4VEC from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 05 July 2013.*
