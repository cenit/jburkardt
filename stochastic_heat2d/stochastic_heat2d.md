STOCHASTIC\_HEAT2D\
2D Steady Heat Equation with Stochastic Diffusivity {#stochastic_heat2d-2d-steady-heat-equation-with-stochastic-diffusivity align="center"}
===================================================

------------------------------------------------------------------------

**STOCHASTIC\_HEAT2D** is a C++ program which solves the steady state
heat equation in a 2D rectangular region with a stochastic heat
diffusivity, using the finite difference method (FDM), and stochastic
model from Babuska, Nobile and Tempone, using GNUPLOT to illustrate the
results.

The physical region, and the boundary conditions, are suggested by this
diagram:

                       U = 0, Y = 1.0
                 +-------------------+
                 |          ...      |
                 |         .:*:.     |
        U = 0    |          :::      | U = 0
        X = 0.0  |                   | X = 1.0
                 |                   |
                 +-------------------+
                       U = 0, Y = 0.0
          

A heat source is applied, which is concentrated at the point X = 0.6, Y
= 0.8, whose center is suggested by the "\*" in the diagram.

The region is covered with a grid of NX by NY nodes, and an NX by NY
array U is used to record the temperature. The correspondence between
array indices and locations in the region is suggested by giving the
indices of the four corners:

                      I = NY
                 +------------------+
                 |                  |
          J = 1  |                  |  J = NX
                 |                  |
                 +------------------+
                      I = 1
          

The form of the steady heat equation is

            - d/dx K(x,y) du/dx - d/dy K(x,y) du/dy = F(x,y)
          

where K(x,y) is the heat conductivity, and F(x,y) is a heat source term.
For this program, the heat conductivity function is assumed to be a
function of four stochastic parameters OMEGA(1) through OMEGA(4); the
form of the functional dependence is described in a paper by Babusk,
Nobile and Tempone.

By using a simple finite difference approximation, this single equation
can be replaced by NX \* NY linear equations in NX \* NY variables; each
equation is associated with one of the nodes in the mesh. Nodes long the
boundary generate boundary condition equations, while interior nodes
generate equations that approximate the steady heat equation.

Choosing a particular set of values for OMEGA produces a single
"realization" of the temperature field. However, an interesting question
is to observe the influence of the OMEGA's on the solution U. As an
example, the program fixes the values of OMEGA(3) and OMEGA(4),
evaluates the solution U over a grid of values for OMEGA(1) and
OMEGA(2), and plots the mean of the solution.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**STOCHASTIC\_HEAT2D** is available in [a C
version](../../c_src/stochastic_heat2d/stochastic_heat2d.md) and [a
C++ version](../../master/stochastic_heat2d/stochastic_heat2d.md) and
[a FORTRAN77
version](../../f77_src/stochastic_heat2d/stochastic_heat2d.md) and [a
FORTRAN90 version](../../f_src/stochastic_heat2d/stochastic_heat2d.md)
and [a MATLAB
version](../../m_src/stochastic_heat2d/stochastic_heat2d.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FEM1D\_HEAT\_STEADY](../../master/fem1d_heat_steady/fem1d_heat_steady.md),
a C++ program which uses the finite element method to solve the 1D Time
Independent Heat Equations.

[FEM2D\_HEAT](../../master/fem2d_heat/fem2d_heat.md), a C++ program
which solves the 2D time dependent heat equation on the unit square.

[GNUPLOT](../../master/gnuplot/gnuplot.md), C++ programs which
illustrate how a program can write data and command files so that
gnuplot can create plots of the program results.

[HEATED\_PLATE](../../master/heated_plate/heated_plate.md), a C++
program which solves the steady state heat equation in a 2D rectangular
region, and is intended as a starting point for a parallel version.

### Reference: {#reference align="center"}

1.  Ivo Babuska, Fabio Nobile, Raul Tempone,\
    A Stochastic Collocation Method for Elliptic Partial Differential
    Equations with Random Input Data,\
    SIAM Journal on Numerical Analysis,\
    Volume 45, Number 3, 2007, pages 1005-1034.

### Source Code: {#source-code align="center"}

-   [stochastic\_heat2d.cpp](stochastic_heat2d.cpp), the source code.
-   [stochastic\_heat2d.hpp](stochastic_heat2d.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [stochastic\_heat2d\_prb.cpp](stochastic_heat2d_prb.cpp), a sample
    calling program.
-   [stochastic\_heat2d\_prb\_output.txt](stochastic_heat2d_prb_output.txt),
    the output file.
-   [solution\_data.txt](solution_data.txt) graphics data for an image
    of the solution corresponding to an example selection of OMEGA.
-   [solution\_commands.txt](solution_commands.txt) GNUPLOT commands to
    create an image of the solution corresponding to an example
    selection of OMEGA.
-   [solution.png](solution.png) an image of the solution corresponding
    to an example selection of OMEGA.
-   [umean\_data.txt](umean_data.txt) graphics data to create an image
    of mean temperature as a function of OMEGA(1) and OMEGA(2).
-   [umean\_commands.txt](umean_commands.txt) GNUPLOT commands to create
    an image of mean temperature as a function of OMEGA(1) and OMEGA(2).
-   [umean.png](umean.png) an image of mean temperature as a function of
    OMEGA(1) and OMEGA(2).

### List of Routines: {#list-of-routines align="center"}

-   **DIFFUSIVITY\_2D\_BNT** evaluates a 2D stochastic diffusivity
    function.
-   **INTERIOR** sets up the matrix and right hand side at interior
    nodes.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **R8MAT\_FS** factors and solves a system with one right hand side.
-   **R8VEC\_LINSPACE** creates a vector of linearly spaced values.
-   **R8VEC\_MESH\_2D** creates a 2D mesh from X and Y vectors.
-   **R8VEC\_NORMAL\_01** returns a unit pseudonormal R8VEC.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC\_UNIFORM\_01** returns a unit pseudorandom R8VEC.
-   **STOCHASTIC\_HEAT2D** solves the steady 2D heat equation.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 04 September 2013.*
