FEM2D\_POISSON\_RECTANGLE\
Finite Element Solution of the 2D Poisson Equation {#fem2d_poisson_rectangle-finite-element-solution-of-the-2d-poisson-equation align="center"}
==================================================

------------------------------------------------------------------------

**FEM2D\_POISSON\_RECTANGLE** is a C++ program which solves the 2D
Poisson equation using the finite element method.

The computational region is a rectangle, with Dirichlet boundary
conditions applied along the boundary, and the Poisson equation applied
inside. Thus, the state variable U(x,y) satisfies:

            - ( Uxx + Uyy ) = F(x,y)  in the box;
                     U(x,y) = G(x,y)  on the box boundary;
          

For this program, the boundary condition function G(x,y) is identically
zero.

The computational region is first covered with an NX by NY rectangular
array of points, creating (NX-1)\*(NY-1) subrectangles. Each
subrectangle is divided into two triangles, creating a total of
2\*(NX-1)\*(NY-1) geometric "elements". Because quadratic basis
functions are to be used, each triangle will be associated not only with
the three corner nodes that defined it, but with three extra midside
nodes. If we include these additional nodes, there are now a total of
(2\*NX-1)\*(2\*NY-1) nodes in the region.

We now assume that the unknown function U(x,y) can be represented as a
linear combination of the basis functions associated with each node. The
value of U at the boundary nodes is obvious, so we concentrate on the
NUNK interior nodes where U(x,y) is unknown. For each node I, we
determine a basis function PHI(I)(x,y), and evaluate the following
finite element integral:

            Integral ( Ux(x,y) * PHIx(I)(x,y) + Uy(x,y) * PHIy(I)(x,y) ) =
            Integral ( F(x,y) * PHI(I)(x,y)
          

The set of all such equations yields a linear system for the
coefficients of the representation of U.

The program allows the user to supply two routines:

-   **RHS ( X, Y )** returns the right hand side F(x,y) of the Poisson
    equation.
-   **EXACT ( X, Y, U, DUDX, DUDY )** returns the exact solution of the
    Poisson equation. This routine is necessary so that error analysis
    can be performed, reporting the L2 and H1 seminorm errors between
    the true and computed solutions. It is also used to evaluate the
    boundary conditions.

There are a few variables that are easy to manipulate. In particular,
the user can change the variables NX and NY in the main program, to
change the number of nodes and elements. The variables (XL,YB) and
(XR,YT) define the location of the lower left and upper right corners of
the rectangular region, and these can also be changed in a single place
in the main program.

The program writes out a file containing an Encapsulated PostScript
image of the nodes and elements, with numbers. For values of NX and NY
over 10, the plot is too cluttered to read. For lower values, however,
it is a valuable map of what is going on in the geometry.

The program is also able to write out a file containing the solution
value at every node. This file may be used to create contour plots of
the solution.

The original version of this code comes from Professor Janet Peterson.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FEM2D\_POISSON\_RECTANGLE** is available in [a C
version](../../c_src/fem2d_poisson_rectangle/fem2d_poisson_rectangle.md)
and [a C++
version](../../master/fem2d_poisson_rectangle/fem2d_poisson_rectangle.md)
and [a FORTRAN77
version](../../f77_src/fem2d_poisson_rectangle/fem2d_poisson_rectangle.md)
and [a FORTRAN90
version](../../f_src/fem2d_poisson_rectangle/fem2d_poisson_rectangle.md)
and [a MATLAB
version](../../m_src/fem2d_poisson_rectangle/fem2d_poisson_rectangle.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FEM2D\_POISSON\_RECTANGLE\_LINEAR](../../master/fem2d_poisson_rectangle_linear/fem2d_poisson_rectangle_linear.md),
a C++ program which solves the 2D Poisson equation on a rectangle, using
the finite element method, and piecewise linear triangular elements.

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

-   [fem2d\_poisson\_rectangle.cpp](fem2d_poisson_rectangle.cpp), the
    source code;

### Examples and Tests: {#examples-and-tests align="center"}

-   [rectangle\_output.txt](rectangle_output.txt), the output file.
-   [rectangle\_nodes.png](rectangle_nodes.png), a PNG image of the
    nodes, for NX = NY = 7 (the picture can be hard to read for much
    larger values of NX and NY);
-   [rectangle\_nodes.txt](rectangle_nodes.txt), a text file containing
    a list, for each node, of its X and Y coordinates;
-   [rectangle\_elements.png](rectangle_elements.png), a PNG image of
    the elements, for NX = NY = 7 (the picture can be hard to read for
    much larger values of NX and NY);
-   [rectangle\_elements.txt](rectangle_elements.txt), a text file
    containing a list, for each element, of the six nodes that compose
    it;
-   [rectangle\_solution.txt](rectangle_solution.txt), a text file
    containing a list, for each node, of the value of the solution;

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main routine of the finite element program
    FEM2D\_POISSON\_RECTANGLE.
-   **AREA\_SET** sets the area of each element.
-   **ASSEMBLE** assembles the matrix and right-hand side using
    piecewise quadratics.
-   **BANDWIDTH** determines the bandwidth of the coefficient matrix.
-   **BOUNDARY** modifies the linear system for boundary conditions.
-   **COMPARE** compares the exact and computed solution at the nodes.
-   **DGB\_FA** performs a LINPACK-style PLU factorization of an DGB
    matrix.
-   **DGB\_PRINT\_SOME** prints some of a DGB matrix.
-   **DGB\_SL** solves a system factored by DGB\_FA.
-   **ELEMENT\_WRITE** writes the elements to a file.
-   **ERRORS** calculates the error in the L2 and H1-seminorm.
-   **EXACT** calculates the exact solution and its first derivatives.
-   **GRID\_T6** produces a grid of pairs of 6 node triangles.
-   **I4\_MAX** returns the maximum of two ints.
-   **I4\_MIN** returns the smaller of two ints.
-   **I4VEC\_PRINT\_SOME** prints "some" of an I4VEC.
-   **INDX\_SET** assigns a boundary value index or unknown value index
    at each node.
-   **NODES\_PLOT** plots a pointset.
-   **NODES\_WRITE** writes the nodes to a file.
-   **QBF** evaluates the quadratic basis functions.
-   **QUAD\_A** sets the quadrature rule for assembly.
-   **QUAD\_E** sets a quadrature rule for the error calculation.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_MIN** returns the minimum of two R8's.
-   **R8\_NINT** returns the nearest integer to an R8.
-   **R8VEC\_PRINT\_SOME** prints "some" of an R8VEC.
-   **RHS** gives the right-hand side of the differential equation.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **SOLUTION\_WRITE** writes the solution to a file.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TIMESTRING** returns the current YMDHMS date as a string.
-   **TRIANGULATION\_ORDER6\_PLOT** plots a 6-node triangulation of a
    pointset.
-   **XY\_SET** sets the XY coordinates of the nodes.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 24 September 2008.*
