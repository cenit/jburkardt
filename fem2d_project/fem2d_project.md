FEM2D\_PROJECT\
Project Data onto a 2D Finite Element Mesh {#fem2d_project-project-data-onto-a-2d-finite-element-mesh align="center"}
==========================================

------------------------------------------------------------------------

**FEM2D\_PROJECT** is a C++ program which projects a finite element
function.

Let us suppose we have a region R and a triangulation of R, that is, a
set of nodes N1 and triangles T1 whose union is R. Let P1(I)(X,Y) be the
finite element basis function associated with node N1(I). Now let us
suppose that we have a finite element function V1, that is a scalar- or
vector-valued function V1(X,Y) defined over R, with the formula

> V1(X,Y) = sum ( I ) V1(I) \* P1(I)(X,Y)

Now suppose we have a second triangulation of R comprising a set of
nodes N2 and triangles T2. Can we determine an appropriate set of finite
element coefficients V2(I) which best approximate V1 in the finite
element space defined by N2 and T2? The finite element coefficient
vector V2 is defined by the following relationship:

> Integral Sum ( I ) V2(I) P2(I)(X,Y) P2(J)(X,Y) dx dy = Integral
> V1(X,Y) P2(J)(X,Y) dx dy

Thus, in particular, the function V1(X,Y), which is defined on the first
finite element space, must be evaluated in a computation that uses the
second finite element space.

This procedure can be used to determine the least squares approximant to
data (actually, to the piecewise linear interpolant of that data) or to
determine the finite element coefficients appropriate when recomputing a
finite element solution from a fine mesh to a coarse mesh.

The sample data is given as three tables, each stored in a file:

-   the **SAMPLE\_NODES** file contains the 2D coordinates of sample
    points. Every sample point is presumed to lie within the area
    covered by the finite element mesh.
-   the **SAMPLE\_ELEMENTS** file contains the indices of nodes that
    form the elements. The elements are presumed to be 3-node triangles.
    This is simple a Delaunay triangulation of the sample nodes.
-   the **SAMPLE\_VALUES** file contains the value of some vector
    quantity V at each sample point. The dimensionality of the V data is
    arbitrary.

The finite element mesh is given as two tables, each stored in a file:

-   the **FEM\_NODES** file contains the 2D coordinates of nodes.
-   the **FEM\_ELEMENTS** file contains the indices of nodes that form
    the elements. The elements are presumed to be 3-node triangles.

The program produces a new table **FEM\_VALUES**, of the same
dimensionality as **SAMPLE\_VALUES**. The vector **FEM\_VALUES** can be
used in conjunction with the finite element mesh data to produce a
finite element function that is an approximant to the **SAMPLE\_VALUES**
data.

### Usage: {#usage align="center"}

> **fem2d\_project** *sample\_prefix* *fem\_prefix*

where *sample\_prefix* is the common prefix for the SAMPLE files:

-   *sample\_prefix***\_nodes.txt**, the node coordinates (input);
-   *sample\_prefix***\_elements.txt**, the 3 nodes that make up each
    element (input);
-   *sample\_prefix***\_values.txt**, the data values (input);

and *fem\_prefix* is the common prefix for the FEM files:

-   *fem\_prefix***\_nodes.txt**, the node coordinates (input);
-   *fem\_prefix***\_elements.txt**, the 3 nodes that make up each
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

**FEM2D\_PROJECT** is available in [a C++
version](../../cpp_src/fem2d_project/fem2d_project.html) and [a
FORTRAN90 version](../../f_src/fem2d_project/fem2d_project.html) and [a
MATLAB version](../../m_src/fem2d_project/fem2d_project.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FEM1D\_PROJECT](../../cpp_src/fem1d_project/fem1d_project.html), a C++
program which projects data into a finite element space, including the
least squares approximation of data, or the projection of a finite
element solution from one mesh to another.

[FEM2D](../../data/fem2d/fem2d.html), a data directory which contains
examples of 2D FEM files, three text files that describe a 2D finite
element geometry;

[FEM2D\_HEAT](../../cpp_src/fem2d_heat/fem2d_heat.html), a C++ program
which solves the 2D time dependent heat equation on the unit square.

[FEM2D\_PACK](../../cpp_src/fem2d_pack/fem2d_pack.html), a C++ library
which includes utitlies for 2D finite element calculations.

[FEM2D\_POISSON](../../cpp_src/fem2d_poisson/fem2d_poisson.html), a C++
program which solves the 2D Poisson equation on a rectangle, using the
finite element method, and piecewise quadratic triangular elements.

[FEM2D\_POISSON\_LINEAR](../../cpp_src/fem2d_poisson_linear/fem2d_poisson_linear.html),
a C++ program which solves the 2D Poisson equation on a rectangle, using
the finite element method, and piecewise linear triangular elements.

[FEM2D\_PROJECT\_FUNCTION](../../cpp_src/fem2d_project_function/fem2d_project_function.html),
a C++ program which projects a function F(X,Y), given as a formula, into
a given finite element space of piecewise linear triangular elements.

[FEM2D\_SAMPLE](../../cpp_src/fem2d_sample/fem2d_sample.html), a C++
program which evaluates a finite element function defined on an order 3
or order 6 triangulation.

[FEM3D\_PROJECT](../../cpp_src/fem3d_project/fem3d_project.html), a C++
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

-   [fem2d\_project.cpp](fem2d_project.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**LINEAR** starts with sample data for the vector function f(x)=\[ 1,
2x, 3y \], on an 9 x 9 grid of equally spaced nodes from
\[0.0,8.0\]x\[0.0,8.0\], and projects this onto a piecewise linear
finite element meshes defined on equally spaced grids of dimension 4x4,
2x2 and 1x1.

-   [r8x8\_t3\_nodes.txt](r8x8_t3_nodes.txt), the sample nodes, on an
    8x8 grid.
-   [r8x8\_t3\_elements.txt](r8x8_t3_elements.txt), elements that can be
    used to form an 8x8 finite element mesh associated with the sample
    data. This is provide only so that a finite element function can be
    formed with the original sample data.
-   [r8x8\_t3\_values.txt](r8x8_t3_values.txt), the sample nodal values.
-   [r4x4\_t3\_nodes.txt](r4x4_t3_nodes.txt), the FEM nodes for a 4x4
    grid.
-   [r4x4\_t3\_elements.txt](r4x4_t3_elements.txt), the FEM elements for
    a 4x4 grid.
-   [r4x4\_t3\_values.txt](r4x4_t3_values.txt), the nodal values as
    projected from the 8x8 grid.
-   [r2x2\_t3\_nodes.txt](r2x2_t3_nodes.txt), the FEM nodes for a 2x2
    grid.
-   [r2x2\_t3\_elements.txt](r2x2_t3_elements.txt), the FEM elements for
    a 2x2 grid.
-   [r2x2\_t3\_values.txt](r2x2_t3_values.txt), the nodal values as
    projected from the 8x8 grid.
-   [r1x1\_t3\_nodes.txt](r1x1_t3_nodes.txt), the FEM nodes for a 1x1
    grid.
-   [r1x1\_t3\_elements.txt](r1x1_t3_elements.txt), the FEM elements for
    a 1x1 grid.
-   [r1x1\_t3\_values.txt](r1x1_t3_values.txt), the nodal values as
    projected from the 8x8 grid.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for FEM2D\_PROJECT.
-   **BASIS\_MN\_T3:** all bases at N points for a T3 element.
-   **BASIS\_MN\_T6:** all bases at N points for a T6 element.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **FEM2D\_TRANSFER** "transfers" from one finite element mesh to
    another.
-   **FILE\_COLUMN\_COUNT** counts the columns in the first line of a
    file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4COL\_COMPARE** compares columns I and J of an I4COL.
-   **I4COL\_SORT\_A** ascending sorts the columns of an I4COL.
-   **I4COL\_SWAP** swaps two columns of an I4COL.
-   **I4MAT\_MIN** returns the minimum of an I4MAT.
-   **I4MAT\_DATA\_READ** reads data from an I4MAT file.
-   **I4MAT\_HEADER\_READ** reads the header from an I4MAT file.
-   **PROJECTION** evaluates an FEM function on a T3 or T6
    triangulation.
-   **R4\_ABS** returns the absolute value of an R4.
-   **R4\_NINT** returns the nearest integer to an R4.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_EPSILON** returns the R8 roundoff unit.
-   **R8\_MIN** returns the minimum of two R8's.
-   **R8GE\_FSS\_NEW** factors and solves multiple R8GE systems.
-   **R8MAT\_DATA\_READ** reads the data from an R8MAT file.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
-   **R8MAT\_WRITE0** writes an R8MAT file with no header.
-   **R8MAT\_ZERO\_NEW** returns a new zeroed R8MAT.
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
-   **TRIANGULATION\_SEARCH\_DELAUNAY** searches a Delaunay
    triangulation for a point.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 08 August 2009.*
