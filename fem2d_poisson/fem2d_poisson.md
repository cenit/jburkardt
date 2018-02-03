FEM2D\_POISSON\
Finite Element Solution of Poisson's Equation\
on a Triangulated Region {#fem2d_poisson-finite-element-solution-of-poissons-equation-on-a-triangulated-region align="center"}
==============================================

------------------------------------------------------------------------

**FEM2D\_POISSON** is a C++ program which applies the finite element
method to solve a form of Poisson's equation over an arbitrary
triangulated region.

The computational region is unknown by the program. The user specifies
it by preparing a file containing the coordinates of the nodes, and a
file containing the indices of nodes that make up triangles that form a
triangulation of the region.

Normally, the user does not type in this information by hand, but has a
program fill in the nodes, and perhaps another program that constructs
the triangulation. However, in the simplest case, the user might
construct a very crude triangulation by hand, and have
TRIANGULATION\_REFINE refine it to something more reasonable.

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
          

The program is set up to handle the linear Poisson equation with a right
hand side function, and nonhomogeneous Dirichlet boundary conditions.
The state variable U(X,Y) is then constrained by:

            - DEL H(x,y) DEL U(x,y) + K(x,y) * U(x,y) = F(x,y) in the region
                                               U(x,y) = G(x,y)  on the boundary
          

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
**FEM2D\_POISSON**, and runs the executable.

The program writes out a file containing an Encapsulated PostScript
image of the nodes and elements, with numbers. If there are too many
nodes, the plot may be too cluttered to read. For lower values, however,
it is a valuable map of what is going on in the geometry.

The program is also able to write out a file containing the solution
value at every node. This file may be used to create contour plots of
the solution.

### Usage: {#usage align="center"}

The user must create an executable by compiling the user routines and
linking them with the main program, perhaps by commands like:

            g++ -c fem2d_poisson.C
            g++ -c user.C
            g++ fem2d_poisson.o user.o
            mv a.out fem2d_poisson
          

Assuming the executable program is called "fem2d\_poisson", then the
program is executed by

> **fem2d\_poisson** *prefix*

where prefix is the common filename prefix, so that

-   *prefix***\_nodes.txt**, is a file containing the node coordinates;
-   *prefix***\_elements.txt**, is a file listing the 3 nodes that make
    up each element;

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

FEM2D\_POISSON is available in [a C++
version](../../master/fem2d_poisson/fem2d_poisson.md) and [a
FORTRAN90 version](../../f_src/fem2d_poisson/fem2d_poisson.md) and [a
MATLAB version.](../../m_src/fem2d_poisson/fem2d_poisson.md)

### Related Data and Programs: {#related-data-and-programs align="center"}

[FEM2D\_POISSON\_CG](../../master/fem2d_poisson_cg/fem2d_poisson_cg.md),
a C++ program which solves Poisson's equation on a triangulated region,
using the finite element method, sparse storage, and a conjugate
gradient solver.

[FEM2D\_POISSON\_ELL](../../master/fem2d_poisson_ell/fem2d_poisson_ell.md),
a C++ library which defines the geometry of an L-shaped region, as well
as boundary conditions for a given Poisson problem, and is called by
FEM2D\_POISSON as part of a solution procedure.

[FEM2D\_POISSON\_LAKE](../../master/fem2d_poisson_lake/fem2d_poisson_lake.md),
a C++ library which defines the geometry of a lake-shaped region, as
well as boundary conditions for a given Poisson problem, and is called
by FEM2D\_POISSON as part of a solution procedure.

[FEM2D\_POISSON\_SPARSE](../../master/fem2d_poisson_sparse/fem2d_poisson_sparse.md),
a C++ program which solves the steady (time independent) Poisson
equation on an arbitrary 2D triangulated region using a version of GMRES
for a sparse solver.

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

-   [fem2d\_poisson.cpp](fem2d_poisson.cpp), the source code;

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for FEM2D\_POISSON.
-   **ASSEMBLE\_POISSON** assembles the system for the Poisson equation.
-   **BANDWIDTH** determines the bandwidth of the coefficient matrix.
-   **BASIS\_ONE\_T3** evaluates basis functions for a linear triangular
    element.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **DGB\_FA** performs a LINPACK-style PLU factorization of a DGB
    matrix.
-   **DGB\_MXV** multiplies a DGB matrix times a vector.
-   **DGB\_PRINT\_SOME** prints some of a DGB matrix.
-   **DGB\_SL** solves a system factored by DGB\_FA.
-   **DIRICHLET\_APPLY** accounts for Dirichlet boundary conditions.
-   **FILE\_COLUMN\_COUNT** counts the columns in the first line of a
    file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the smaller of two I4's.
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
-   **LVEC\_PRINT** prints a logical vector.
-   **POINTS\_PLOT** plots a pointset.
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
-   **R8VEC\_PRINT\_SOME** prints "some" of an R8VEC.
-   **REFERENCE\_TO\_PHYSICAL\_T3** maps reference points to physical
    points.
-   **RESIDUAL\_POISSON** evaluates the residual for the Poisson
    equation.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_I4VEC** reads an I4VEC from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **SOLUTION\_EVALUATE** evaluates the solution at a point in a
    element.
-   **SORT\_HEAP\_EXTERNAL** externally sorts a list of items into
    ascending order.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TRIANGLE\_AREA\_2D** computes the area of a triangle in 2D.
-   **TRIANGULATION\_ORDER3\_BOUNDARY\_NODE** indicates nodes on the
    boundary.
-   **TRIANGULATION\_ORDER3\_PLOT** plots a triangulation of a set of
    nodes.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 06 December 2010.*
