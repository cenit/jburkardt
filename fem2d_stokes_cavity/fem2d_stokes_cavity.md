FEM2D\_STOKES\_CAVITY\
A 2D Stokes Problem in a Cavity {#fem2d_stokes_cavity-a-2d-stokes-problem-in-a-cavity align="center"}
===============================

------------------------------------------------------------------------

**FEM2D\_STOKES\_CAVITY** is a C++ library which defines the "cavity"
problem for FEM2D\_STOKES solver. The cavity is a square region that is
1 unit wide and 1 unit high. The tangential velocity is specified to be
1 along the top boundary, with a zero normal component. On all other
parts of the boundary, the velocity is specified to be zero.

### Usage: {#usage align="center"}

To run the problem directly, you only need the user-supplied routines in
**cavity.cpp**, the node data in **nodes6.txt**, and the element data in
**triangles6.txt**.

You compile and link the Stokes solver with **cavity.cpp**, using
commands like:

            g++ fem2d_stokes.cpp cavity.cpp
            mv a.out cavity
          

and then run the program with the command

            ./cavity nodes6.txt triangles6.txt
          

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FEM2D\_STOKES\_CAVITY** is available in [a C++
version](../../cpp_src/fem2d_stokes_cavity/fem2d_stokes_cavity.html) and
[a FORTRAN90
version](../../f_src/fem2d_stokes_cavity/fem2d_stokes_cavity.html) and
[a MATLAB
version](../../m_src/fem2d_stokes_cavity/fem2d_stokes_cavity.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FEM2D\_STOKES](../../cpp_src/fem2d_stokes/fem2d_stokes.html), a C++
program which applies the finite element method to a Stokes flow
problem, given user input data.

### Source Code: {#source-code align="center"}

Some of the files needed to run the problem include:

-   [cavity.cpp](cavity.cpp), the user-supplied routines to evaluate the
    right hand side and boundary conditions;
-   [cavity\_output.txt](cavity_output.txt), output from a run of the
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
    [TRIANGULATION\_ORDER3\_CONTOUR](../../m_src/triangulation_order3_contour/triangulation_order3_contour.html).
-   [velocity6.txt](velocity6.txt), a text file containing the velocity
    (U,V) at each velocity node;
-   [velocity6\_dir.png](velocity6_dir.png), a PNG image of the velocity
    direction field, created by
    [VECTOR\_PLOT.](../../f_src/vector_plot/vector_plot.html)
-   [velocity6\_vec.png](velocity6_vec.png), a PNG image of the velocity
    field, created by
    [VECTOR\_PLOT.](../../f_src/vector_plot/vector_plot.html)
-   [velocity6\_arrows.png](velocity6_arrows.png), a PNG image of the
    velocity field, created by
    [VELOCITY\_ARROWS.](../../m_src/velocity_arrows/velocity_arrows.html)

------------------------------------------------------------------------

*Last revised on 08 September 2006.*
