FEM3D\_PROJECT\
Project Data onto a 3D Finite Element Mesh {#fem3d_project-project-data-onto-a-3d-finite-element-mesh align="center"}
==========================================

------------------------------------------------------------------------

**FEM3D\_PROJECT** is a C++ program which projects a finite element
function.

Let us suppose we have a region R and a "tet mesh" (tetrahedral mesh) of
R, that is, a set of nodes N1 and tetrahedrons T1 whose union is R. Let
P1(I)(X,Y,Z) be the finite element basis function associated with node
N1(I). Now let us suppose that we have a finite element function V1,
that is a scalar- or vector-valued function V1(X,Y,Z) defined over R,
with the formula

> V1(X,Y,Z) = sum ( 1 &lt;= I &lt;= NODE\_NUM1 ) V1(I) \* P1(I)(X,Y,Z)

Now suppose we have a second tet mesh of R comprising a set of nodes N2
and tetrahedrons T2. Can we determine an appropriate set of finite
element coefficients V2(I) which best approximate V1 in the finite
element space defined by N2 and T2? The finite element coefficient
vector V2 is defined by the following relationship:

> Integral Sum ( 1 &lt;= I &lt;= NODE\_NUM2 ) V2(I) P2(I)(X,Y,Z)
> P2(J)(X,Y,Z) dx dy dz = Integral V1(X,Y,Z) P2(J)(X,Y,Z) dx dy dz

Thus, in particular, the function V1(X,Y,Z), which is defined on the
first finite element space, must be evaluated in a computation that uses
the second finite element space.

This procedure can be used to determine the least squares approximant to
data (actually, to the piecewise linear interpolant of that data) or to
determine the finite element coefficients appropriate when recomputing a
finite element solution from a fine mesh to a coarse mesh.

The sample data is given as three tables, each stored in a file:

-   the **SAMPLE\_NODES** file contains the 3D coordinates of sample
    points. Every sample point is presumed to lie within the area
    covered by the finite element mesh.
-   the **SAMPLE\_ELEMENTS** file contains the indices of nodes that
    form the elements. The elements are presumed to be 4-node
    tetrahedrons that form a Delaunay tetrahedralization of the sample
    nodes.
-   the **SAMPLE\_VALUES** file contains the value of some vector
    quantity V at each sample point. The dimensionality of the V data is
    arbitrary.

The finite element mesh is given as two tables, each stored in a file:

-   the **FEM\_NODES** file contains the 3D coordinates of nodes.
-   the **FEM\_ELEMENTS** file contains the indices of nodes that form
    the elements. The elements are presumed to be 4-node tetrahedrons.

The program produces a new table **FEM\_VALUES**, of the same
dimensionality as **SAMPLE\_VALUES**. The vector **FEM\_VALUES** can be
used in conjunction with the finite element mesh data to produce a
finite element function that is an approximant to the **SAMPLE\_VALUES**
data.

### Usage: {#usage align="center"}

> **fem3d\_project** *sample\_prefix* *fem\_prefix*

where *sample\_prefix* is the common prefix for the SAMPLE files:

-   *sample\_prefix***\_nodes.txt**, the node coordinates (input);
-   *sample\_prefix***\_elements.txt**, the 4 nodes that make up each
    element (input);
-   *sample\_prefix***\_values.txt**, the data values (input);

and *fem\_prefix* is the common prefix for the FEM files:

-   *fem\_prefix***\_nodes.txt**, the node coordinates (input);
-   *fem\_prefix***\_elements.txt**, the 4 nodes that make up each
    element (input);
-   *fem\_prefix***\_values.txt**, the data values (output).

The file *fem\_prefix*\_values.txt is created by the program, and
contains the projections of the sample data values onto the finite
element space, that is, these may be regarded as coefficients of finite
element functions representing the projections of the sample data. Note
that we may also regard this operation as the refinement or coarsening
of a finite element function, in that we are transferring information
from the \`\`sample'' space to the \`\`fem'' space.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FEM3D\_PROJECT** is available in [a C++
version](../../master/fem3d_project/fem3d_project.md) and [a
FORTRAN90 version](../../f_src/fem3d_project/fem3d_project.md) and [a
MATLAB version](../../m_src/fem3d_project/fem3d_project.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FEM1D\_PROJECT](../../master/fem1d_project/fem1d_project.md), a C++
program which projects data into a finite element space, including the
least squares approximation of data, or the projection of a finite
element solution from one mesh to another.

[FEM2D\_PROJECT](../../master/fem2d_project/fem2d_project.md), a C++
program which projects a function F(X,Y,Z), given as a data, into a
given finite element space of piecewise linear triangular elements.

[FEM3D](../../data/fem3d/fem3d.md), a data directory which contains
examples of 3D FEM files, three text files that describe a 3D finite
element geometry;

[FEM3D\_PACK](../../master/fem3d_pack/fem3d_pack.md), a C++ library
which contains utilities for 3D finite element calculations.

[FEM3D\_SAMPLE](../../master/fem3d_sample/fem3d_sample.md), a C++
program which evaluates a finite element function defined on 3D
tetrahedral mesh.

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

-   [fem3d\_project.cpp](fem3d_project.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**LINEAR** starts with sample data for the vector function f(x)=\[ 1,
2x, 3y, 4z \], on an 8x8x8 grid of equally spaced nodes from
\[0.0,8.0\]x\[0.0,8.0\], and projects this onto a piecewise linear
finite element meshes defined on equally spaced grids of dimension
4x4x4, 2x2x2 and 1x1x1.

-   [r8x8x8\_t3\_nodes.txt](r8x8x8_t4_nodes.txt), the sample nodes, on
    an 8x8x8 grid.
-   [r8x8\_t4\_elements.txt](r8x8x8_t4_elements.txt), elements that can
    be used to form an 8x8x8 finite element mesh associated with the
    sample data. This is provide only so that a finite element function
    can be formed with the original sample data.
-   [r8x8\_t4\_values.txt](r8x8x8_t4_values.txt), the sample nodal
    values.
-   [r4x4x4\_t4\_nodes.txt](r4x4x4_t4_nodes.txt), the FEM nodes for a
    4x4x4 grid.
-   [r4x4x4\_t4\_elements.txt](r4x4x4_t4_elements.txt), the FEM elements
    for a 4x4x4 grid.
-   [r4x4x4\_t4\_values.txt](r4x4x4_t4_values.txt), the nodal values as
    projected from the 8x8x8 grid.
-   [r2x2x2\_t4\_nodes.txt](r2x2x2_t4_nodes.txt), the FEM nodes for a
    2x2x2 grid.
-   [r2x2x2\_t4\_elements.txt](r2x2x2_t4_elements.txt), the FEM elements
    for a 2x2x2 grid.
-   [r2x2x2\_t4\_values.txt](r2x2x2_t4_values.txt), the nodal values as
    projected from the 8x8x8 grid.
-   [r1x1x1\_t4\_nodes.txt](r1x1x1_t4_nodes.txt), the FEM nodes for a
    1x1x1 grid.
-   [r1x1x1\_t4\_elements.txt](r1x1x1_t4_elements.txt), the FEM elements
    for a 1x1x1 grid.
-   [r1x1x1\_t4\_values.txt](r1x1x1_t4_values.txt), the nodal values as
    projected from the 8x8x8 grid.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for FEM3D\_PROJECT.
-   **BASIS\_MN\_TET4:** all bases at N points for a TET4 element.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is a case insensitive comparison of two characters for
    equality.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **FEM3D\_TRANSFER** "transfers" from one finite element mesh to
    another.
-   **FILE\_COLUMN\_COUNT** counts the number of columns in the first
    line of a file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **GET\_UNIT** returns a free FORTRAN unit number.
-   **I4I4I4\_SORT\_A** ascending sorts a triple of I4's.
-   **I4COL\_COMPARE** compares columns I and J of an I4COL.
-   **I4COL\_SORT\_A** ascending sorts an I4COL.
-   **I4COL\_SWAP** swaps columns J1 and J2 of an I4COL.
-   **I4MAT\_DATA\_READ** reads data from an I4MAT file.
-   **I4MAT\_HEADER\_READ** reads the header from an I4MAT.
-   **I4MAT\_WRITE** writes an I4MAT file.
-   **PROJECTION** evaluates an FEM function on a TET4 mesh.
-   **R8GE\_FSS** factors and solves multiple R8GE systems.
-   **R8MAT\_DATA\_READ** reads data from an R8MAT file.
-   **R8MAT\_DET\_4D** computes the determinant of a 4 by 4 R8MAT.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
-   **R8MAT\_SOLVE** uses Gauss-Jordan elimination to solve an N by N
    linear system.
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_I4VEC** reads an I4VEC from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **SORT\_HEAP\_EXTERNAL** externally sorts a list of items into
    ascending order.
-   **TET\_MESH\_NEIGHBOR\_TETS** determines tetrahedron neighbors.
-   **TET\_MESH\_SEARCH\_DELAUNAY** searches a Delaunay tet mesh for a
    point.
-   **TET\_MESH\_SEARCH\_NAIVE** naively searches a tet mesh.
-   **TETRAHEDRON\_BARYCENTRIC:** barycentric coordinates of a point.
-   **TETRAHEDRON\_UNIT\_QUAD04:** 4 point quadrature rule for the unit
    tetrahedron.
-   **TETRAHEDRON\_VOLUME** computes the volume of a tetrahedron in 3D.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 25 August 2009.*
