FD2D\_HEAT\_STEADY\
2D Steady State Heat Equation in a Rectangle {#fd2d_heat_steady-2d-steady-state-heat-equation-in-a-rectangle align="center"}
============================================

------------------------------------------------------------------------

**FD2D\_HEAT\_STEADY** is a C++ program which solves the steady state
(time independent) heat equation in a 2D rectangular region.

The physical region, and the boundary conditions, are suggested by this
diagram:

                       U = 0, Y = 1.0
                 +------------------+
                 |                  |
        U = 10   |                  | U = 100
        X = 0.0  |                  | X = 2.0
                 +------------------+
                       U = 0, Y = 0.0
          

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

By using a simple finite difference approximation, this single equation
can be replaced by NX \* NY linear equations in NX \* NY variables; each
equation is associated with one of the nodes in the mesh. Nodes long the
boundary generate boundary condition equations, while interior nodes
generate equations that approximate the steady heat equation.

The linear system is sparse, and can easily be solved directly in
MATLAB.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FD2D\_HEAT\_STEADY** is available in [a C
version](../../c_src/fd2d_heat_steady/fd2d_heat_steady.html) and [a C++
version](../../cpp_src/fd2d_heat_steady/fd2d_heat_steady.html) and [a
FORTRAN77 version](../../f77_src/fd2d_heat_steady/fd2d_heat_steady.html)
and [a FORTRAN90
version](../../f_src/fd2d_heat_steady/fd2d_heat_steady.html) and [a
MATLAB version](../../m_src/fd2d_heat_steady/fd2d_heat_steady.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FD1D\_HEAT\_STEADY](../../cpp_src/fd1d_heat_steady/fd1d_heat_steady.html),
a C++ program which uses the finite difference method to solve the 1D
Time Independent Heat Equations.

[FEM1D\_HEAT\_STEADY](../../cpp_src/fem1d_heat_steady/fem1d_heat_steady.html),
a C++ program which uses the finite element method to solve the 1D Time
Independent Heat Equations.

[FEM2D\_HEAT](../../cpp_src/fem2d_heat/fem2d_heat.html), a C++ program
which solves the 2D time dependent heat equation on the unit square.

[HEATED\_PLATE](../../cpp_src/heated_plate/heated_plate.html), a C++
program which solves the steady state heat equation in a 2D rectangular
region, and is intended as a starting point for a parallel version.

### Source Code: {#source-code align="center"}

-   [fd2d\_heat\_steady.cpp](fd2d_heat_steady.cpp), the source code.
-   [fd2d\_heat\_steady.hpp](fd2d_heat_steady.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [fd2d\_heat\_steady\_prb.cpp](fd2d_heat_steady_prb.cpp), a sample
    calling program.
-   [fd2d\_heat\_steady\_prb\_output.txt](fd2d_heat_steady_prb_output.txt),
    the output file.
-   [test01\_data.txt](test01_data.txt) data defining the solution.
-   [test01\_commands.txt](test01_commands.txt) GNUPLOT commands to make
    an image of the solution.
-   [test01.png](test01.png) an image of the solution.

### List of Routines: {#list-of-routines align="center"}

-   **FD2D\_HEAT\_STEADY** solves the steady 2D heat equation.
-   **INTERIOR** sets up the matrix and right hand side at interior
    nodes.
-   **R8MAT\_FS** factors and solves a system with one right hand side.
-   **R8VEC\_LINSPACE** creates a vector of linearly spaced values.
-   **R8VEC\_MESH\_2D** creates a 2D mesh from X and Y vectors.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 29 August 2013.*
