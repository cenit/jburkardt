FEM2D\_HEAT\_SQUARE\
A Problem in a Square Region for FEM2D\_HEAT\_ {#fem2d_heat_square-a-problem-in-a-square-region-for-fem2d_heat_ align="center"}
==============================================

------------------------------------------------------------------------

**FEM2D\_HEAT\_SQUARE** is a C++ library which defines the data
associated with a time-dependent heat equation problem in a square
region, to be linked and executed with the FEM2D\_HEAT program.

This mesh uses 81 nodes and forms 32 quadratic triangular elements.

We assume that the equation to be solved is

> **dUdT - Laplacian U + K \* U = F**

with

> **K = 0,**

and

> **F = (2\*pi\*pi-1)\*sin(pi\*x)\*sin(pi\*y)\*exp(-t).**

The exact solution is:

> **U = sin(pi\*x) \* sin(pi\*y) \* exp(-t).**

which is the formula we use to define our functions **G** (for the
boundary conditions) and **H** (for the initial conditions).

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FEM2D\_HEAT\_SQUARE** is available in [a C++
version](../../master/fem2d_heat_square/fem2d_heat_square.md) and [a
FORTRAN90 version](../../f_src/fem2d_heat_square/fem2d_heat_square.md)
and [a MATLAB
version](../../m_src/fem2d_heat_square/fem2d_heat_square.md).

### Source Code: {#source-code align="center"}

-   [square.cpp](square.cpp), the user-supplied routines to evaluate the
    right hand side, linear coefficient, initial and boundary
    conditions;
-   [square\_output.txt](square_output.txt), output from a run of the
    program;
-   [square\_nodes.png](square_nodes.png), a PNG image of the nodes;
-   [square\_nodes.txt](square_nodes.txt), a text file containing a
    list, for each node, of its X and Y coordinates;
-   [square\_elements.png](square_elements.png), a PNG image of the
    elements;
-   [square\_elements.txt](square_elements.txt), a text file containing
    a list, for each element, of the six nodes that compose it;
-   [square\_time.txt](square_time.txt), a text file containing the
    solution times;
-   [u0000.txt](u0000.txt), the solution U at time step 0;
-   [u0001.txt](u0001.txt), the solution U at time step 1;
-   [u0002.txt](u0002.txt), the solution U at time step 2;
-   [u0003.txt](u0003.txt), the solution U at time step 3;
-   [u0004.txt](u0004.txt), the solution U at time step 4;
-   [u0005.txt](u0005.txt), the solution U at time step 5;
-   [u0006.txt](u0006.txt), the solution U at time step 6;
-   [u0007.txt](u0007.txt), the solution U at time step 7;
-   [u0008.txt](u0008.txt), the solution U at time step 8;
-   [u0009.txt](u0009.txt), the solution U at time step 9;
-   [u0010.txt](u0010.txt), the solution U at time step 10;

The MATLAB program **CONTOUR\_SEQUENCE4** can make contour plots from
the sequence of solutions:

-   [u0000.png](u0000.png), the solution U at time step 0;
-   [u0001.png](u0001.png), the solution U at time step 1;
-   [u0002.png](u0002.png), the solution U at time step 2;
-   [u0003.png](u0003.png), the solution U at time step 3;
-   [u0004.png](u0004.png), the solution U at time step 4;
-   [u0005.png](u0005.png), the solution U at time step 5;
-   [u0006.png](u0006.png), the solution U at time step 6;
-   [u0007.png](u0007.png), the solution U at time step 7;
-   [u0008.png](u0008.png), the solution U at time step 8;
-   [u0009.png](u0009.png), the solution U at time step 9;
-   [u0010.png](u0010.png), the solution U at time step 10;

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 30 August 2006.*
