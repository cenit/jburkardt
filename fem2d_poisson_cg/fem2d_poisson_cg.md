FEM2D\_POISSON\_CG\
Finite Element 2D,\
Poisson Equation,\
Conjugate Gradient Solver {#fem2d_poisson_cg-finite-element-2d-poisson-equation-conjugate-gradient-solver align="center"}
=========================

------------------------------------------------------------------------

**FEM2D\_POISSON\_CG** is a C++ program which applies the finite element
method to solve a form of Poisson's equation over an arbitrary
triangulated region, using sparse matrix storage and a conjugate
gradient solver.

The storage format chosen is known as **DSP** or "sparse triplet"
format, which essentially simply saves in three vectors A, IA, JA, which
record the value, row and column of every nonzero entry.

To solve the linear system, the **CG\_RC** routine is used, which uses
reverse communication to carry out a conjugate gradient procedure.

### The Triangulated Region: {#the-triangulated-region align="center"}

The computational region is unknown by the program. The user specifies
it by preparing a file containing the coordinates of the nodes, and a
file containing the indices of nodes that make up triangles that form a
triangulation of the region.

Normally, the user does not type in this information by hand, but has a
program fill in the nodes, and perhaps another program that constructs
the triangulation. However, in the simplest case, the user might
construct a very crude triangulation by hand, and have
[TRIANGULATION\_REFINE](../../f_src/triangulation_refine/triangulation_refine.html)
refine it to something more reasonable.

For the following ridiculously small example:

            4----5
            |\   |\
            | \  | \
            |  \ |  \
            |   \|   \
            1----2----3
          

the node file would be:

             0.0 0.0
             1.0 0.0
             2.0 0.0
             0.0 1.0
             1.0 1.0
          

and the triangle file would be

            1 2 4
            5 4 2
            2 3 5
          

### The Poisson Equation: {#the-poisson-equation align="center"}

The program is set up to handle the linear Poisson equation with a right
hand side function, and nonhomogeneous Dirichlet boundary conditions.
The state variable U(X,Y) is then constrained by:

            - Del H(x,y) Del U(x,y) + K(x,y) * U(x,y) = F(x,y)  inside the region;
                                               U(x,y) = G(x,y)  on the boundary.
          

### User Interface: {#user-interface align="center"}

To specify the right hand side function F(x,y), the linear coefficients
H(x,y) and K(x,y) and the boundary condition function G(x,y), the user
has to modify a file containing three routines,

-   **void rhs ( int node\_num, double node\_xy\[\], double
    node\_rhs\[\] )** evaluates the right hand side of function F(x,y)
    at a list of nodes.
-   **void h\_coef ( int node\_num, double node\_xy\[\], double
    node\_h\[\] )** evaluates the coefficient function H(x,y) at a list
    of nodes.
-   **void k\_coef ( int node\_num, double node\_xy\[\], double
    node\_k\[\] )** evaluates the coefficient function K(x,y) at a list
    of nodes.
-   **void dirichlet\_condition ( int node\_num, double node\_xy\[\],
    double node\_g\[\] )** evaluates the Dirichlet boundary condition
    G(X,Y) at a list of nodes.

To run the program, the user compiles the user routines, links them with
**FEM2D\_POISSON\_CG**, and runs the executable.

The program writes out a file containing an Encapsulated PostScript
image of the nodes and elements, with numbers. If there are too many
nodes, the plot may be too cluttered to read. For lower values, however,
it is a valuable map of what is going on in the geometry.

The program is also able to write out a file containing the solution
value at every node. This file may be used to create contour plots of
the solution.

### Usage: {#usage align="center"}

Assuming the executable program is called "my\_problem", then the
program is executed by

> **my\_problem** *prefix*

where prefix is the common filename prefix, so that:

-   *prefix***\_nodes.txt** contains the X, Y coordinates of nodes;
-   *prefix***\_elements.txt** contains triples of node indices that
    form triangles.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FEM2D\_POISSON\_CG** is available in [a C++
version](../../cpp_src/fem2d_poisson_cg/fem2d_poisson_cg.html) and [a
FORTRAN90 version](../../f_src/fem2d_poisson_cg/fem2d_poisson_cg.html)
and [a MATLAB
version](../../m_src/fem2d_poisson_cg/fem2d_poisson_cg.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CG\_RC](../../cpp_src/cg_rc/cg_rc.html), a C++ library which implements
the conjugate gradient method for solving a positive definite sparse
linear system A\*x=b, using reverse communication.

[FEM2D\_POISSON](../../cpp_src/fem2d_poisson/fem2d_poisson.html), a C++
program which solves Poisson's equation on a triangulated region, using
the finite element method and a banded solver.

[FEM2D\_POISSON\_SPARSE](../../cpp_src/fem2d_poisson_sparse/fem2d_poisson_sparse.html),
a C++ program which solves the steady (time independent) Poisson
equation on an arbitrary 2D triangulated region using a version of GMRES
for a sparse solver.

[FEM2D\_POISSON\_CG\_BAFFLE](../../cpp_src/fem2d_poisson_cg_baffle/fem2d_poisson_cg_baffle.html),
a C++ library which defines the geometry of a channel with 13 hexagonal
baffles, as well as boundary conditions for a given Poisson problem, and
is called by fem2d\_poisson\_cg as part of a solution procedure.

[FEM2D\_POISSON\_CG\_ELL](../../cpp_src/fem2d_poisson_cg_ell/fem2d_poisson_cg_ell.html),
a C++ library which defines the geometry of an L-shaped region, as well
as boundary conditions for a given Poisson problem, and is called by
fem2d\_poisson\_cg as part of a solution procedure.

[FEM2D\_POISSON\_CG\_LAKE](../../cpp_src/fem2d_poisson_cg_lake/fem2d_poisson_cg_lake.html),
a C++ library which defines the geometry of a lake-shaped region, as
well as boundary conditions for a given Poisson problem, and is called
by fem2d\_poisson\_cg as part of a solution procedure.

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
    LC: TA640.2.Z54

### Source Code: {#source-code align="center"}

-   [fem2d\_poisson\_cg.cpp](fem2d_poisson_cg.cpp), the source code;

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for FEM2D\_POISSON\_CG.
-   **ASSEMBLE\_POISSON\_DSP** assembles the system for the Poisson
    equation.
-   **BASIS\_ONE\_T3** evaluates basis functions for a linear triangular
    element.
-   **CG\_RC** is a reverse communication conjugate gradient routine.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **DIAG\_INDEX** determines where the diagonal matrix entries are
    stored.
-   **DIRICHLET\_APPLY\_DSP** accounts for Dirichlet boundary
    conditions.
-   **DSP\_IJ\_TO\_K** seeks the compressed index of the (I,J) entry
    of A.
-   **DSP\_PRINT\_SOME** prints some of a DSP matrix.
-   **FILE\_COLUMN\_COUNT** counts the columns in the first line of a
    file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_MODP** returns the nonnegative remainder of integer division.
-   **I4\_WRAP** forces an integer to lie between given limits by
    wrapping.
-   **I4COL\_COMPARE** compares columns I and J of an I4COL.
-   **I4COL\_SORT\_A** ascending sorts the columns of an I4COL.
-   **I4COL\_SWAP** swaps two columns of an I4COL.
-   **I4MAT\_DATA\_READ** reads data from an I4MAT file.
-   **I4MAT\_HEADER\_READ** reads the header from an I4MAT file.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an I4MAt,
    transposed.
-   **I4VEC\_PRINT** prints an I4VEC.
-   **I4VEC2\_COMPARE** compares pairs of integers stored in two
    vectors.
-   **I4VEC2\_PRINT** prints an I4VEC2.
-   **I4VEC2\_SORT\_A** ascending sorts a vector of pairs of integers.
-   **QUAD\_RULE** sets the quadrature rule for assembly.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8\_NINT** returns the nearest integer to an R8.
-   **R8MAT\_DATA\_READ** reads the data from an R8MAT file.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **R8VEC\_AMAX** returns the maximum absolute value in an R8VEC.
-   **R8VEC\_DOT** computes the dot product of a pair of R8VEC's.
-   **R8VEC\_PRINT\_SOME** prints "some" of an R8VEC.
-   **R8VEC\_UNIFORM\_01** returns a unit pseudorandom R8VEC.
-   **REFERENCE\_TO\_PHYSICAL\_T3** maps reference points to physical
    points.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_L** reads an L from a string.
-   **S\_TO\_I4VEC** reads an I4VEC from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **SOLUTION\_EVALUATE** evaluates the solution at a point in a
    triangle.
-   **SOLVE\_CG** solves a linear system using the conjugate gradient
    method.
-   **SORT\_HEAP\_EXTERNAL** externally sorts a list of items into
    ascending order.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TRIANGLE\_AREA\_2D** computes the area of a triangle in 2D.
-   **TRIANGULATION\_ORDER3\_ADJ\_COUNT** counts adjacencies in a
    triangulation.
-   **TRIANGULATION\_ORDER3\_ADJ\_SET2** sets adjacencies in a
    triangulation.
-   **TRIANGULATION\_ORDER3\_BOUNDARY\_NODE** indicates nodes on the
    boundary.
-   **TRIANGULATION\_ORDER3\_NEIGHBOR\_TRIANGLES** determines triangle
    neighbors.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 25 January 2013.*
