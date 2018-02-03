FEM2D\_SAMPLE\
Evaluate a Finite Element Function of a 2D Argument {#fem2d_sample-evaluate-a-finite-element-function-of-a-2d-argument align="center"}
===================================================

------------------------------------------------------------------------

**FEM2D\_SAMPLE** is a C++ program which can evaluate a finite element
function of a 2D argument.

The current version of the program can only handle finite element meshes
which are made of piecewise linear triangles of order 3 or 6.

### Usage: {#usage align="center"}

> **fem2d\_sample** *fem\_prefix* *sample\_prefix*

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

**FEM2D\_SAMPLE** is available in [a C++
version](../../master/fem2d_sample/fem2d_sample.md) and [a FORTRAN77
version](../../f77_src/fem2d_sample/fem2d_sample.md) and [a FORTRAN90
version](../../f_src/fem2d_sample/fem2d_sample.md) and [a MATLAB
version.](../../m_src/fem2d_sample/fem2d_sample.md)

### Related Data and Programs: {#related-data-and-programs align="center"}

[FEM1D\_SAMPLE](../../master/fem1d_sample/fem1d_sample.md), a C++
program which samples a scalar or vector finite element function of one
variable, defined by FEM files, returning interpolated values at the
sample points.

[FEM2D](../../data/fem2d/fem2d.md), a data directory which contains
examples of 2D FEM files, three text files that describe a 2D finite
element geometry;

[FEM2D\_HEAT](../../master/fem2d_heat/fem2d_heat.md), a C++ program
which solves the time dependent heat equation in the unit square.

[FEM2D\_PACK](../../master/fem2d_pack/fem2d_pack.md), a C++ library
which includes utitlies for 2D finite element calculations.

[FEM2D\_POISSON](../../master/fem2d_poisson/fem2d_poisson.md), a C++
program which solves Poisson's equation on a square, using the finite
element method.

[FEM2D\_POISSON\_LINEAR](../../master/fem2d_poisson_linear/fem2d_poisson_linear.md),
a C++ program which solves the 2D Poisson equation on a rectangle, using
the finite element method, and piecewise linear triangular elements.

[FEM2D\_PROJECT](../../master/fem2d_project/fem2d_project.md), a C++
program which projects a function F(X,Y) into a given finite element
space of piecewise linear triangular elements.

[FEM3D\_SAMPLE](../../master/fem3d_sample/fem3d_sample.md), a C++
program which evaluates a finite element function defined on 3D
tetrahedral mesh.

[HISTOGRAM\_DATA\_2D\_SAMPLE](../../master/histogram_data_2d_sample/histogram_data_2d_sample.md),
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

-   [fem2d\_sample.cpp](fem2d_sample.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**SQ** is FEM data for the function f(x,y)=x\^2+y\^2, on a 5x5 grid of
nodes, organized into linear triangles. The sample data seeks the values
of this function on a 4x4 evenly spaced grid.

-   [fem\_sq\_nodes.txt](fem_sq_nodes.txt), defines the FEM nodes.
-   [fem\_sq\_elements.txt](fem_sq_elements.txt), defines the FEM
    elements.
-   [fem\_sq\_values.txt](fem_sq_values.txt), defines the FEM nodal
    values.
-   [sample\_sq\_nodes.txt](sample_sq_nodes.txt), defines the sample
    nodes.
-   [sample\_sq\_values.txt](sample_sq_values.txt), defines the sample
    nodal values.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for FEM2D\_SAMPLE.
-   **BASIS\_MN\_T3:** all bases at N points for a T3 element.
-   **BASIS\_MN\_T6:** all bases at N points for a T6 element.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **GRID\_SAMPLE** samples a (scalar) FE function on a T3 or T6
    triangulation.
-   **FILE\_COLUMN\_COUNT** counts the number of columns in the first
    line of a file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **GET\_SEED** returns a random seed for the random number generator.
-   **I4\_MAX** returns the maximum of two integers.
-   **I4\_MIN** returns the smaller of two integers.
-   **I4\_UNIFORM** returns a scaled pseudorandom I4.
-   **I4COL\_COMPARE** compares columns I and J of an I4COL.
-   **I4COL\_SORT\_A** ascending sorts an I4COL.
-   **I4COL\_SWAP** swaps two columns of an I4COL.
-   **I4MAT\_DATA\_READ** reads data from an I4MAT file.
-   **I4MAT\_HEADER\_READ** reads the header from an I4MAT file.
-   **R4\_ABS** returns the absolute value of an R4.
-   **R4\_NINT** returns the nearest integer to an R4.
-   **R4\_UNIFORM\_01** returns a unit pseudorandom R4.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_MIN** returns the minimum of two R8's.
-   **R8\_NINT** returns the nearest integer to an R8.
-   **R8MAT\_DATA\_READ** reads the data from an R8MAT file.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_I4VEC** reads an I4VEC from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **SORT\_HEAP\_EXTERNAL** externally sorts a list of items into
    ascending order.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TRIANGULATION\_ORDER3\_NEIGHBOR\_TRIANGLES** determines triangle
    neighbors.
-   **TRIANGULATION\_ORDER6\_NEIGHBOR\_TRIANGLES** determines triangle
    neighbors.
-   **TRIANGULATION\_SEARCH\_DELAUNAY** searches a triangulation for a
    point.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 08 August 2009.*
