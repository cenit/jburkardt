FEM2D\_HEAT\_RECTANGLE\
Finite Element Solution in 2D\
Time Dependent Heat Equation {#fem2d_heat_rectangle-finite-element-solution-in-2d-time-dependent-heat-equation align="center"}
==============================

------------------------------------------------------------------------

**FEM2D\_HEAT\_RECTANGLE** is a C++ program which solves the
time-dependent 2D heat equation using the finite element method in
space, and a method of lines in time with the backward Euler
approximation for the time derivative.

The computational region is a rectangle, with homogenous Dirichlet
boundary conditions applied along the boundary. The state variable
U(X,Y,T) is then constrained by:

            Ut - ( Uxx + Uyy ) = F(x,y,t)  in the box;
                      U(x,y,t) = G(x,y,t) for (x,y) on the boundary;
                      U(x,y,t) = H(x,y,t) for t = t_init.
          

The computational region is first covered with an NX by NY rectangular
array of points, creating (NX-1)\*(NY-1) subrectangles. Each
subrectangle is divided into two triangles, creating a total of
2\*(NX-1)\*(NY-1) geometric "elements". Because quadratic basis
functions are to be used, each triangle will be associated not only with
the three corner nodes that defined it, but with three extra midside
nodes. If we include these additional nodes, there are now a total of
(2\*NX-1)\*(2\*NY-1) nodes in the region.

We now assume that, at any fixed time b, the unknown function U(x,y,t)
can be represented as a linear combination of the basis functions
associated with each node. The value of U at the boundary nodes is
obvious, so we concentrate on the NUNK interior nodes where U(x,y,t) is
unknown. For each node I, we determine a basis function PHI(I)(x,y), and
evaluate the following finite element integral:

            Integral ( Ux(x,y,t) * dPHIdx(I)(x,y) + dUdy(x,y,t) * dPHIdy(I)(x,y) ) =
            Integral ( F(x,y,t) * PHI(I)(x,y)
          

The time derivative is handled by the backward Euler approximation.

The program allows the user to supply two routines:

-   **rhs ( x, y, time )** returns the right hand side F(x,y,time) of
    the heat equation.
-   **exact\_u ( node\_num, node\_xy, time, u\_exact )** returns the
    exact solution **U\_EXACT** evaluated at each of the **NODE\_NUM**
    points whose coordinates are stored in
    **NODE\_XY(1:2,1:NODE\_NUM)**, at time **TIME**.

There are a few variables that are easy to manipulate. In particular,
the user can change the variables NX and NY in the main program, to
change the number of nodes and elements. The variables (XL,YB) and
(XR,YT) define the location of the lower left and upper right corners of
the rectangular region, and these can also be changed in a single place
in the main program.

The program writes out a file containing an Encapsulated PostScript
image of the nodes and elements, with numbers. Unfortunately, for values
of NX and NY over 10, the plot is too cluttered to read. For lower
values, however, it is a valuable map of what is going on in the
geometry.

The program is also able to write out a file containing the solution
value at every node. This file may be used to create contour plots of
the solution.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FEM2D\_HEAT\_RECTANGLE** is available in [a C++
version](../../master/fem2d_heat_rectangle/fem2d_heat_rectangle.md)
and [a FORTRAN90
version](../../f_src/fem2d_heat_rectangle/fem2d_heat_rectangle.md) and
[a MATLAB
version](../../m_src/fem2d_heat_rectangle/fem2d_heat_rectangle.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FEM2D\_HEAT](../../master/fem2d_heat/fem2d_heat.md), a C++ program
which solves the time dependent heat equation on an arbitrary
triangulated region in 2D.

### Author: {#author align="center"}

Janet Peterson.

### Reference: {#reference align="center"}

1.  Hans Rudolf Schwarz,\
    Finite Element Methods,\
    Academic Press, 1988,\
    ISBN: 0126330107,\
    LC: TA347.F5.S3313..
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

-   [fem2d\_heat\_rectangle.cpp](fem2d_heat_rectangle.cpp), the source
    code;

### Examples and Tests: {#examples-and-tests align="center"}

Data files created by the program:

-   [rectangle\_output.txt](rectangle_output.txt), the printed output
    from a run;
-   [fem2d\_heat\_rectangle\_nodes.png](rectangle_nodes.png), a PNG
    image of the nodes, for NX = NY = 7 (the picture is hard to read for
    larger values of NX and NY);
-   [rectangle\_nodes.txt](rectangle_nodes.txt), a text file containing
    a list, for each node, of its X and Y coordinates;
-   [rectangle\_elements.png](rectangle_elements.png), a PNG image of
    the elements, for NX = NY = 7 (the picture is hard to read for
    larger values of NX and NY);
-   [rectangle\_elements.txt](rectangle_elements.txt), a text file
    containing a list, for each element, of the six nodes that compose
    it;
-   [rectangle\_time.txt](rectangle_time.txt), a text file containing
    the solution times;
-   [rectangle\_u0000.txt](rectangle_u0000.txt), the solution U at time
    step 0;
-   [rectangle\_u0001.txt](rectangle_u0001.txt), the solution U at time
    step 1;
-   [rectangle\_u0002.txt](rectangle_u0002.txt), the solution U at time
    step 2;
-   [rectangle\_u0003.txt](rectangle_u0003.txt), the solution U at time
    step 3;
-   [rectangle\_u0004.txt](rectangle_u0004.txt), the solution U at time
    step 4;
-   [rectangle\_u0005.txt](rectangle_u0005.txt), the solution U at time
    step 5;
-   [rectangle\_u0006.txt](rectangle_u0006.txt), the solution U at time
    step 6;
-   [rectangle\_u0007.txt](rectangle_u0007.txt), the solution U at time
    step 7;
-   [rectangle\_u0008.txt](rectangle_u0008.txt), the solution U at time
    step 8;
-   [rectangle\_u0009.txt](rectangle_u0009.txt), the solution U at time
    step 9;
-   [rectangle\_u0010.txt](rectangle_u0010.txt), the solution U at time
    step 10;

The MATLAB program **CONTOUR\_SEQUENCE4** can make contour plots from
the sequence of solutions:

-   [rectangle\_u0000.png](rectangle_u0000.png), the solution U at time
    step 0;
-   [rectangle\_u0001.png](rectangle_u0001.png), the solution U at time
    step 1;
-   [rectangle\_u0002.png](rectangle_u0002.png), the solution U at time
    step 2;
-   [rectangle\_u0003.png](rectangle_u0003.png), the solution U at time
    step 3;
-   [rectangle\_u0004.png](rectangle_u0004.png), the solution U at time
    step 4;
-   [rectangle\_u0005.png](rectangle_u0005.png), the solution U at time
    step 5;
-   [rectangle\_u0006.png](rectangle_u0006.png), the solution U at time
    step 6;
-   [rectangle\_u0007.png](rectangle_u0007.png), the solution U at time
    step 7;
-   [rectangle\_u0008.png](rectangle_u0008.png), the solution U at time
    step 8;
-   [rectangle\_u0009.png](rectangle_u0009.png), the solution U at time
    step 9;
-   [rectangle\_u0010.png](rectangle_u0010.png), the solution U at time
    step 10;

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main routine of the finite element program
    FEM2D\_HEAT\_RECTANGLE.
-   **ADJUST\_BACKWARD\_EULER** adjusts the system for the backward
    Euler term.
-   **ADJUST\_BOUNDARY** modifies the linear system for boundary
    conditions.
-   **AREA\_SET** sets the area of each element.
-   **ASSEMBLE** assembles the matrix and right-hand side using
    piecewise quadratics.
-   **BANDWIDTH** determines the bandwidth of the coefficient matrix.
-   **COMPARE** compares the exact and computed solution at the nodes.
-   **DGB\_FA** performs a LINPACK-style PLU factorization of an DGB
    matrix.
-   **DGB\_PRINT\_SOME** prints some of a DGB matrix.
-   **DGB\_SL** solves a system factored by DGB\_FA.
-   **ELEMENT\_WRITE** writes the elements to a file.
-   **ERRORS** calculates the error in the L2 and H1-seminorm.
-   **EXACT\_U** calculates the exact solution and its first
    derivatives.
-   **FILE\_NAME\_INC** increments a partially numeric file name.
-   **GRID\_T6** produces a grid of pairs of 6 node triangles.
-   **I4\_MAX** returns the maximum of two ints.
-   **I4\_MIN** returns the smaller of two ints.
-   **I4VEC\_PRINT\_SOME** prints "some" of an I4VEC.
-   **NODE\_BOUNDARY\_SET** assigns an unknown value index at each node.
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
-   **TRIANGULATION\_ORDER6\_PLOT** plots a 6-node triangulation of a
    pointset.
-   **XY\_SET** sets the XY coordinates of the nodes.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 06 January 2011.*
