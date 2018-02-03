FEM3D\_SAMPLE\
Evaluate a Finite Element Function of a 3D Argument {#fem3d_sample-evaluate-a-finite-element-function-of-a-3d-argument align="center"}
===================================================

------------------------------------------------------------------------

**FEM3D\_SAMPLE** is a C++ program which can evaluate a finite element
function of a 3D argument.

The current version of the program can only handle tetrahedral finite
element meshes using linear basis functions.

The current version of the program uses a NAIVE search algorithm to
locate points within the mesh. It is intended that this search algorithm
be replaced by a Delaunay search.

### Usage: {#usage align="center"}

> **fem3d\_sample** *fem\_prefix* *sample\_prefix*

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

**FEM3D\_SAMPLE** is available in [a C++
version](../../cpp_src/fem3d_sample/fem3d_sample.html) and [a FORTRAN77
version](../../f77_src/fem3d_sample/fem3d_sample.html) and [a FORTRAN90
version](../../f_src/fem3d_sample/fem3d_sample.html) and [a MATLAB
version.](../../m_src/fem3d_sample/fem3d_sample.html)

### Related Data and Programs: {#related-data-and-programs align="center"}

[FEM\_IO](../../cpp_src/fem_io/fem_io.html), a C++ library which reads
or writes node, element and data files defining a finite element model.

[FEM\_TO\_TEC](../../m_src/fem_to_tec/fem_to_tec.html), a MATLAB program
which converts FEM models into TEC graphics files.

[FEM1D\_SAMPLE](../../cpp_src/fem1d_sample/fem1d_sample.html), a C++
program which samples a scalar or vector finite element function of one
variable, defined by [FEM files](../../data/fem/fem.html), returning
interpolated values at the sample points.

[FEM2D\_SAMPLE](../../cpp_src/fem2d_sample/fem2d_sample.html), a C++
program which samples a scalar or vector finite element function of 2
variables defined by FEM files, returning interpolated values at the
sample points.

[FEM3D](../../data/fem3d/fem3d.html), a data directory which contains
examples of 3D FEM files, three text files that describe a 3D finite
element geometry;

[FEM3D\_PACK](../../cpp_src/fem3d_pack/fem3d_pack.html), a C++ library
which contains utilities for 3D finite element calculations.

[FEM3D\_PROJECT](../../cpp_src/fem3d_project/fem3d_project.html), a C++
program which projects a function F(X,Y,Z), given as a data, into a
given finite element space of piecewise linear tetrahedral elements.

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

-   [fem3d\_sample.cpp](fem3d_sample.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**SQ** is FEM data for the function f(x,y,z)=x\^2+2\*y\^2-z\^2, on a
5x5x5 grid of nodes in the cube \[0,4\]x\[0,4\]x\[0,4\], organized into
linear linear tetrahedrons. The sample data seeks the values of this
function on a 4x4x4 evenly spaced grid.

-   [fem\_sq\_nodes.txt](fem_sq_nodes.txt), defines the FEM nodes.
-   [fem\_sq\_elements.txt](fem_sq_elements.txt), defines the FEM
    elements.
-   [fem\_sq\_values.txt](fem_sq_values.txt), defines the FEM nodal
    values.
-   [sample\_sq\_nodes.txt](sample_sq_nodes.txt), defines the sample
    nodes.
-   [sample\_sq\_values.txt](sample_sq_values.txt), defines the sample
    nodal values.
-   [sample\_sq\_values\_exact.txt](sample_sq_values_exact.txt), the
    exact values of the function at the sample nodes. This should be
    compared with the values determined from the FEM function.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for FEM3D\_SAMPLE.
-   **BASIS\_MN\_TET4:** all bases at N points for a T4 element.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **FEM3D\_EVALUATE** samples an FEM function on a T4 tet mesh.
-   **FILE\_COLUMN\_COUNT** counts the number of columns in the first
    line of a file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_UNIFORM** returns a scaled pseudorandom I4.
-   **I4COL\_COMPARE** compares columns I and J of an I4COL.
-   **I4COL\_SORT\_A** ascending sorts an I4COL.
-   **I4COL\_SWAP** swaps two columns of an I4COL.
-   **I4I4I4\_SORT\_A** ascending sorts a triple of I4's.
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
-   **R8MAT\_SOLVE** uses Gauss-Jordan elimination to solve an N by N
    linear system.
-   **R8MAT\_WRITE0** writes an R8MAT file with no header.
-   **R8VEC\_IS\_NONNEGATIVE** is true if all entries in an R8VEC are
    nonnegative.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_I4VEC** reads an I4VEC from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **SORT\_HEAP\_EXTERNAL** externally sorts a list of items into
    ascending order.
-   **TET\_MESH\_NEIGHBOR\_TETS** determines tetrahedron neighbors.
-   **TET\_MESH\_SEARCH\_NAIVE** naively searches a tet mesh.
-   **TETRAHEDRON\_BARYCENTRIC** returns the barycentric coordinates of
    a point.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 07 August 2009.*
