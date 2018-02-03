FEM2D\_STOKES\_INOUT\
A 2D Stokes Problem in the "INOUT" Region {#fem2d_stokes_inout-a-2d-stokes-problem-in-the-inout-region align="center"}
=========================================

------------------------------------------------------------------------

**FEM2D\_STOKES\_INOUT** is a C++ library which sets up the "INOUT"
problem for solution by FEM2D\_STOKES. The "INOUT" region is a square
region that is 1 unit wide and 1 unit high. A parabolic inflow is
specified on the lower left, and a zero Neumann outflow is specified on
the upper right.

*The Neumann condition on the outflow is not working as expected, so we
have temporarily backtracked to using a Dirichlet outflow condition
there...*

### Usage: {#usage align="center"}

To run the problem directly, you only need the user-supplied routines in
**inout.cpp**, the node data in **nodes6.txt**, and the element data in
**triangles6.txt**.

You compile and link the solver with **inout.cpp**, using commands like:

            g++ fem2d_stokes.cpp inout.cpp
            mv a.out inout
          

and then run the program with the command

            ./inout nodes6.txt triangles6.txt
          

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FEM2D\_STOKES\_INOUT** is available in [a C++
version](../../master/fem2d_stokes_inout/fem2d_stokes_inout.md) and
[a FORTRAN90
version](../../f_src/fem2d_stokes_inout/fem2d_stokes_inout.md) and [a
MATLAB version](../../m_src/fem2d_stokes_inout/fem2d_stokes_inout.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FEM2D\_STOKES](../../master/fem2d_stokes/fem2d_stokes.md), a C++
program which applies the finite element method to a Stokes flow
problem, given user input data.

### Source Code: {#source-code align="center"}

Some of the files needed to run the problem include:

-   [inout.cpp](inout.cpp), the user-supplied routines to evaluate the
    right hand side and boundary conditions;
-   [inout\_output.txt](inout_output.txt), output from a run of the
    program;

The geometry is defined by sets of nodes and triangles. The velocities
use the full set of nodes, and quadratic (6 node) triangles.

-   [nodes6.txt](nodes6.txt), a text file containing the velocity nodes;
-   [nodes6.png](nodes6.png), a PNG image of the velocity nodes;
-   [triangles6.txt](triangles6.txt), the quadratic triangulation;
-   [triangles6.png](triangles6.png), a PNG image of the order 6
    triangulation;

The pressures are associated with a subset of the nodes called "pressure
nodes", and linear (3 node) triangles. Note that, in the order 3
triangulation, the nodes are renumbered, and do NOT inherit the labels
used in the order 6 triangulation.

-   [nodes3.txt](nodes3.txt), a text file containing the pressure nodes;
-   [nodes3.png](nodes3.png), a PNG image of the pressure nodes;
-   [triangles3.txt](triangles3.txt), the linear triangulation;
-   [triangles3.png](triangles3.png), a PNG image of the linear
    triangulation;

The pressures are a scalar quantity associated with the pressure nodes,
the velocities are a vector quantity associated with the vector nodes.

-   [pressure3.txt](pressure3.txt), a text file containing the pressure
    P at each linear node;
-   [pressure3.png](pressure3.png), a PNG image of a contour plot of the
    pressure, produced by
    [TRIANGULATION\_ORDER3\_CONTOUR](../../m_src/triangulation_order3_contour/triangulation_order3_contour.md).
-   [velocity6.txt](velocity6.txt), a text file containing the velocity
    (U,V) at each velocity node;
-   [velocity6\_dir.png](velocity6_dir.png), a PNG image of the velocity
    direction field, created by
    [VECTOR\_PLOT.](../../f_src/vector_plot/vector_plot.md)
-   [velocity6\_vec.png](velocity6_vec.png), a PNG image of the velocity
    field, created by
    [VECTOR\_PLOT.](../../f_src/vector_plot/vector_plot.md)
-   [velocity6\_arrows.png](velocity6_arrows.png), a PNG image of the
    velocity field, created by
    [VELOCITY\_ARROWS.](../../m_src/velocity_arrows/velocity_arrows.md)

------------------------------------------------------------------------

*Last revised on 20 October 2006.*
