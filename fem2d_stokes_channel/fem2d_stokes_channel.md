FEM2D\_STOKES\_CHANNEL\
A 2D Stokes Problem in a Channel {#fem2d_stokes_channel-a-2d-stokes-problem-in-a-channel align="center"}
================================

------------------------------------------------------------------------

**FEM2D\_STOKES\_CHANNEL** is a C++ library which defines the channel
problem for use with the FEM2D\_STOKES solver. The channel is a
rectangular region that is 3 units wide and 1 unit high. It is used as a
sample problem for the Stokes solver.

### Usage: {#usage align="center"}

To run the problem directly, you only need the user-supplied routines in
**channel.cpp**, the node data in **nodes6.txt**, and the element data
in **triangles6.txt**.

You compile and link the Stokes solver with **channel.cpp**, using
commands like:

            g++ fem2d_stokes.cpp channel.cpp
            mv a.out channel
          

and then run the program with the command

            ./channel nodes6.txt triangles6.txt
          

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FEM2D\_STOKES\_CHANNEL** is available in [a C++
version](../../cpp_src/fem2d_stokes_channel/fem2d_stokes_channel.html)
and [a FORTRAN90
version](../../f_src/fem2d_stokes_channel/fem2d_stokes_channel.html) and
[a MATLAB
version](../../m_src/fem2d_stokes_channel/fem2d_stokes_channel.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FEM2D\_STOKES](../../cpp_src/fem2d_stokes/fem2d_stokes.html), a C++
program which applies the finite element method to a Stokes flow
problem, given user input data.

### Source Code: {#source-code align="center"}

Some of the files needed to run the problem include:

-   [channel.cpp](channel.cpp), the user-supplied routines to evaluate
    the right hand side and boundary conditions;
-   [channel\_output.txt](channel_output.txt), output from a run of the
    program;

The pressures are associated with a subset of the full set of nodes, and
with an order 3 triangulation of those nodes. Note that, in the order 3
triangulation, the nodes are renumbered, and do NOT inherit the labels
used in the order 6 triangulation.

-   [nodes3.txt](nodes3.txt), a text file containing the pressure nodes;
-   [nodes3.png](nodes3.png), a PNG image of the pressure nodes, created
    by [PLOT\_POINTS](../../f_src/plot_points/plot_points.html);
-   [triangles3.txt](triangles3.txt), the linear triangulation;
-   [triangles3.png](triangles3.png), a PNG image of the linear
    triangulation produced by
    [TRIANGULATION\_PLOT](../../cpp_src/triangulation_plot/triangulation_plot.html).
-   [pressure3.txt](pressure3.txt), a text file containing the pressure
    P at each linear node;
-   [pressure3.png](pressure3.png), a PNG image of a contour plot of the
    pressure, produced by
    [TRIANGULATION\_ORDER3\_CONTOUR](../../m_src/triangulation_order3_contour/triangulation_order3_contour.html).

The velocities are associated with the full set of nodes, and with an
order 6 triangulation of those nodes.

-   [nodes6.txt](nodes6.txt), a text file containing the velocity nodes;
-   [nodes6.png](nodes6.png), a PNG image of the velocity nodes (based
    on EPS files output directly by FREE\_FEM\_STOKES);
-   [triangles6.txt](triangles6.txt), the quadratic triangulation;
-   [triangles6.png](triangles6.png), a PNG image of the order 6
    triangulation (based on EPS files output directly by
    FREE\_FEM\_STOKES);
-   [velocity6.txt](velocity6.txt), a text file containing the velocity
    (U,V) at each velocity node;
-   [velocity6\_dir.png](velocity6_dir.png), a PNG image of the
    direction field, created by
    [VECTOR\_PLOT.](../../f_src/vector_plot/vector_plot.html)
-   [velocity6\_vec.png](velocity6_vec.png), a PNG image of the velocity
    field, created by
    [VECTOR\_PLOT.](../../f_src/vector_plot/vector_plot.html)
-   [velocity6\_arrows.png](velocity6_arrows.png), a PNG image of the
    velocity field, created by
    [VELOCITY\_ARROWS.](../../m_src/velocity_arrows/velocity_arrows.html)

------------------------------------------------------------------------

*Last revised on 25 September 2005.*
