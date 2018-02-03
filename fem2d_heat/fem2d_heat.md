FEM2D\_HEAT\
Finite Element Solution of the Heat Equation\
on a Triangulated Region {#fem2d_heat-finite-element-solution-of-the-heat-equation-on-a-triangulated-region align="center"}
=============================================

------------------------------------------------------------------------

**FEM2D\_HEAT** is a C++ program which applies the finite element method
to solve a form of the time-dependent heat equation over an arbitrary
triangulated region.

The computational region is initially unknown by the program. The user
specifies it by preparing a file containing the coordinates of the
nodes, and a file containing the indices of nodes that make up triangles
that form a triangulation of the region.

Normally, the user does not type in this information by hand, but has a
program fill in the nodes, and perhaps another program that constructs
the triangulation. However, in the simplest case, the user might
construct a very crude triangulation by hand, and have
[TRIANGULATION\_REFINE](../../f_src/triangulation_refine/triangulation_refine.html)
refine it to something more reasonable.

For the following ridiculously small example:

           10-11-12
            |\   |\
            | \  | \
            6  7 8  9
            |   \|   \
            1-2--3--4-5
          

the node file would be:

             0.0  0.0
             1.0  0.0
             2.0  0.0
             3.0  0.0
             4.0  0.0
             0.0  1.0
             1.0  1.0
             2.0  1.0
             3.0  1.0
             0.0  2.0
             1.0  2.0
             2.0  2.0
          

and the triangle file would be

             1  3 10  2  7  6
             3  5 12  4  9  8
            12 10  3 11  7  8
          

The program is set up to handle the time dependent heat equation with a
right hand side function, and nonhomogeneous Dirichlet boundary
conditions. The state variable U(T,X,Y) is then constrained by:

            Ut - ( Uxx + Uyy ) + K(x,y,t) * U = F(x,y,t)  in the region
                                            U = G(x,y,t)  on the boundary
                                            U = H(x,y,t)  at initial time TINIT.
          

To specify the right hand side function F(x,y,t), the linear coefficient
K(x,y,t), the boundary condition function G(x,y,t), and the initial
condition H(x,y,t), the user has to supply a file, perhaps called
*myprog.C*, containing several functions:

-   **double rhs ( int node\_num, double node\_xy\[\], double time )**
    evaluates the right hand side forcing term F(x,y,t).
-   **double k\_coef ( int node\_num, double node\_xy\[\], double time
    )** evaluates K(x,y,t);
-   **double \*dirichlet\_condition ( int node\_num, double
    node\_xy\[\], double time )** evaluates G(x,y,t) for all nodes on
    the boundary;
-   **double \*initial\_condition ( int node\_num, double node\_xy\[\],
    double time )** evaluates H(x,y,t) for all nodes at the initial
    time.

The program is also able to write out a file containing the solution
value at every node. This file may be used to create contour plots of
the solution.

### Usage: {#usage align="center"}

> g++ fem2d\_heat.cpp *myprog.cpp*\
> mv a.out fem2d\_heat\
> fem2d\_heat *prefix*

where prefix is the common file prefix:

-   "prefix"\_nodes.txt, contains the node coordinates.
-   "prefix"\_elements.txt, contains the indices of nodes that form
    elements.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FEM2D\_HEAT** is available in [a C++
version](../../cpp_src/fem2d_heat/fem2d_heat.html) and [a FORTRAN90
version](../../f_src/fem2d_heat/fem2d_heat.html) and [a MATLAB
version](../../m_src/fem2d_heat/fem2d_heat.html).

### Related Programs: {#related-programs align="center"}

[FD2D\_HEAT\_STEADY](../../cpp_src/fd2d_heat_steady/fd2d_heat_steady.html),
a C++ program which uses the finite difference method (FDM) to solve the
steady (time independent) heat equation in 2D.

[FEM1D\_HEAT\_STEADY](../../cpp_src/fem1d_heat_steady/fem1d_heat_steady.html),
a C++ program which uses the finite element method to solve the steady
(time independent) heat equation in 1D.

[FEM2D\_HEAT\_SQUARE](../../cpp_src/fem2d_heat_square/fem2d_heat_square.html),
a C++ library which defines the geometry of a square region, as well as
boundary and initial conditions for a given heat problem, and is called
by FEM2D\_HEAT as part of a solution procedure.

[STOCHASTIC\_HEAT2D](../../cpp_src/stochastic_heat2d/stochastic_heat2d.html),
a C++ program which implements a finite difference method (FDM) for the
steady (time independent) 2D heat equation, with a stochastic heat
diffusivity coefficient, using gnuplot to illustrate the results.

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

-   [fem2d\_heat.cpp](fem2d_heat.cpp), the source code;

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main routine of FEM2D\_HEAT.
-   **ASSEMBLE\_BACKWARD\_EULER** adjusts the system for the backward
    Euler term.
-   **ASSEMBLE\_BOUNDARY** modifies the linear system for the boundary
    conditions.
-   **ASSEMBLE\_FEM** assembles the finite element system for the heat
    equation.
-   **BANDWIDTH** determines the bandwidth of the coefficient matrix.
-   **BASIS\_11\_T6:** one basis at one point for the T6 element.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **DGB\_FA** performs a LINPACK-style PLU factorization of a DGB
    matrix.
-   **DGB\_PRINT\_SOME** prints some of a DGB matrix.
-   **DGB\_SL** solves a system factored by DGB\_FA.
-   **DTABLE\_DATA\_READ** reads the data from a real TABLE file.
-   **DTABLE\_HEADER\_READ** reads the header from a real TABLE file.
-   **FILE\_COLUMN\_COUNT** counts the number of columns in the first
    line of a file.
-   **FILE\_NAME\_INC** increments a partially numeric file name.
-   **FILE\_NAME\_SPECIFICATION** determines the names of the input
    files.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the smaller of two I4's.
-   **I4\_MODP** returns the nonnegative remainder of integer division.
-   **I4\_WRAP** forces an integer to lie between given limits by
    wrapping.
-   **I4COL\_COMPARE** compares columns I and J of an I4COL.
-   **I4COL\_SORT\_A** ascending sorts the columns of an I4COL.
-   **I4COL\_SWAP** swaps two columns of an integer array.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an I4MAT,
    transposed.
-   **ITABLE\_DATA\_READ** reads data from an integer TABLE file.
-   **ITABLE\_HEADER\_READ** reads the header from an integer TABLE
    file.
-   **I4VEC\_PRINT\_SOME** prints "some" of an integer vector.
-   **LVEC\_PRINT** prints a logical vector.
-   **POINTS\_PLOT** plots a pointset.
-   **QUAD\_RULE** sets the quadrature rule for assembly.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8\_NINT** returns the nearest integer to an R8.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **R8VEC\_PRINT\_SOME** prints "some" of an R8VEC.
-   **REFERENCE\_TO\_PHYSICAL\_T3** maps reference points to physical
    points.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_I4VEC** reads an I4VEC from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **SOLUTION\_WRITE** writes the solution to a file.
-   **SORT\_HEAP\_EXTERNAL** externally sorts a list of items into
    ascending order.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TIMESTRING** returns the current YMDHMS date as a string.
-   **TRIANGLE\_AREA\_2D** computes the area of a triangle in 2D.
-   **TRIANGULATION\_ORDER6\_BOUNDARY\_NODE** indicates nodes on the
    boundary.
-   **TRIANGULATION\_ORDER6\_PLOT** plots a 6-node triangulation of a
    set of nodes.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 13 November 2006.*
