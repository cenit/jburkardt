FEM1D\_SAMPLE\
Evaluate a Finite Element Function of a 1D Argument {#fem1d_sample-evaluate-a-finite-element-function-of-a-1d-argument align="center"}
===================================================

------------------------------------------------------------------------

**FEM1D\_SAMPLE** is a C++ program which can evaluate a finite element
function of one argument.

The current version of the program can only handle finite element meshes
which are made of piecewise constant or piecewise linear basis
functions.

### Usage: {#usage align="center"}

> **fem1d\_sample** *fem\_prefix* *sample\_prefix*

where *fem\_prefix* is the common prefix for the FEM files:

-   *fem\_prefix***\_nodes.txt**, the node coordinates.
-   *fem\_prefix***\_elements.txt**, the nodes that make up each
    element;
-   *fem\_prefix***\_values.txt**, the values defined at each node.

and *sample\_prefix* is the common prefix for the SAMPLE files, for
which the node file is input, and the values file is created by the
program:

-   *sample\_prefix***\_nodes.txt**, the node coordinates where samples
    are desired.
-   *sample\_prefix***\_values.txt**, the values computed at each sample
    node.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FEM1D\_SAMPLE** is available in [a C
version](../../c_src/fem1d_sample/fem1d_sample.html) and [a C++
version](../../cpp_src/fem1d_sample/fem1d_sample.html) and [a FORTRAN77
version](../../f77_src/fem1d_sample/fem1d_sample.html) and [a FORTRAN90
version](../../f_src/fem1d_sample/fem1d_sample.html) and [a MATLAB
version](../../m_src/fem1d_sample/fem1d_sample.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FEM1D](../../data/fem1d/fem1d.html), a data directory which contains
examples of 1D FEM files, three text files that describe a 1D finite
element model;

[FEM1D](../../cpp_src/fem1d/fem1d.html), a C++ program which applies the
finite element method to a 1D linear two point boundary value problem.

[FEM1D\_ADAPTIVE](../../cpp_src/fem1d_adaptive/fem1d_adaptive.html), a
C++ program which applies the finite element method to a 1D linear two
point boundary value problem using adaptive refinement to improve the
solution.

[FEM1D\_BVP\_LINEAR](../../cpp_src/fem1d_bvp_linear/fem1d_bvp_linear.html),
a C++ program which applies the finite element method, with piecewise
linear elements, to a two point boundary value problem in one spatial
dimension.

[FEM1D\_HEAT\_STEADY](../../cpp_src/fem1d_heat_steady/fem1d_heat_steady.html),
a C++ program which uses the finite element method to solve the steady
(time independent) heat equation in 1D.

[FEM1D\_NONLINEAR](../../cpp_src/fem1d_nonlinear/fem1d_nonlinear.html),
a C++ program which applies the finite element method to a 1D nonlinear
two point boundary value problem.

[FEM1D\_PACK](../../cpp_src/fem1d_pack/fem1d_pack.html), a C++ library
which contains utilities for 1D finite element calculations.

[FEM1D\_PMETHOD](../../cpp_src/fem1d_pmethod/fem1d_pmethod.html), a C++
program which applies the p-method version of the finite element method
to a 1D linear two point boundary value problem.

[FEM1D\_PROJECT](../../cpp_src/fem1d_project/fem1d_project.html), a C++
program which projects data into a finite element space, including the
least squares approximation of data, or the projection of a finite
element solution from one mesh to another.

[FEM2D\_SAMPLE](../../cpp_src/fem2d_sample/fem2d_sample.html), a C++
library which evaluates a finite element function defined on an order 3
or order 6 triangulation.

[FEM3D\_SAMPLE](../../cpp_src/fem3d_sample/fem3d_sample.html), a C++
program which evaluates a finite element function defined on 3D
tetrahedral mesh.

[HISTOGRAM\_DATA\_2D\_SAMPLE](../../cpp_src/histogram_data_2d_sample/histogram_data_2d_sample.html),
a C++ program which demonstrates how to construct a Probability Density
Function (PDF) from a frequency table over a 2D domain, and then to use
that PDF to create new samples.

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

-   [fem1d\_sample.cpp](fem1d_sample.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**P1** is FEM data for the vector function f(x)=\[ 1, x, x\^2\], on a
grid of 11 evenly spaced nodes from -5 to 5, using piecewise constant
basis functions.

-   [p1\_fem\_nodes.txt](p1_fem_nodes.txt), the FEM nodes.
-   [p1\_fem\_elements.txt](p1_fem_elements.txt), the FEM elements.
-   [p1\_fem\_values.txt](p1_fem_values.txt), the FEM nodal values.
-   [p1\_sample\_nodes.txt](p1_sample_nodes.txt), the sample nodes.
-   [p1\_sample\_values.txt](p1_sample_values.txt), the sample nodal
    values.

**P2** is FEM data for the vector function f(x)=\[ 1, x, x\^2\], on a
grid of 11 evenly spaced nodes from -5 to 5, using piecewise linear
basis functions.

-   [p2\_fem\_nodes.txt](p2_fem_nodes.txt), the FEM nodes.
-   [p2\_fem\_elements.txt](p2_fem_elements.txt), the FEM elements.
-   [p2\_fem\_values.txt](p2_fem_values.txt), the FEM nodal values.
-   [p2\_sample\_nodes.txt](p2_sample_nodes.txt), the sample nodes.
-   [p2\_sample\_values.txt](p2_sample_values.txt), the sample nodal
    values.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for FEM1D\_SAMPLE.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **FEM1D\_EVALUATE** evaluates a 1D FEM function at sample points.
-   **FILE\_COLUMN\_COUNT** counts the number of columns in the first
    line of a file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4MAT\_DATA\_READ** reads data from an I4MAT file.
-   **I4MAT\_HEADER\_READ** reads the header from an I4MAT file.
-   **R8MAT\_DATA\_READ** reads the data from an R8MAT file.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **R8VEC\_BRACKET4** finds the interval containing or nearest a given
    value.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_I4VEC** reads an I4VEC from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 04 July 2013.*
