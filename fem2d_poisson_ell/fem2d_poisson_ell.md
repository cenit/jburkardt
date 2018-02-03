FEM2D\_POISSON\_ELL\
A 2D Poisson Problem in an L-shaped Region {#fem2d_poisson_ell-a-2d-poisson-problem-in-an-l-shaped-region align="center"}
==========================================

------------------------------------------------------------------------

**FEM2D\_POISSON\_ELL** is a FORTRAN library which defines the geometry
of an L-shaped region and other data needed in order to execute the
FEM2D\_POISSON program.

This mesh, which uses 65 nodes, was created by starting with a crude
mesh, and having it refined by TRIANGULATION\_REFINE and renumbered by
TRIANGULATION\_RCM.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FEM2D\_POISSON\_ELL** is available in [a C++
version](../../master/fem2d_poisson_ell/fem2d_poisson_ell.md) and [a
FORTRAN90 version](../../f_src/fem2d_poisson_ell/fem2d_poisson_ell.md)
and [a MATLAB
version](../../m_src/fem2d_poisson_ell/fem2d_poisson_ell.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FEM2D\_POISSON](../../master/fem2d_poisson/fem2d_poisson.md), a C++
program which applies the finite element method to a 2D Poisson problem,
with user input.

### Source Code: {#source-code align="center"}

-   [ell.cpp](ell.cpp), the user-supplied routines to evaluate the right
    hand side, linear coefficient, and boundary conditions;
-   [ell\_output.txt](ell_output.txt), output from a run of the program;
-   [ell\_nodes.txt](ell_nodes.txt), a text file containing a list, for
    each node, of its X and Y coordinates;
-   [ell\_nodes.png](ell_nodes.png), a PNG image of the nodes;
-   [ell\_elements.txt](ell_elements.txt), a text file containing a
    list, for each element, of the three nodes that compose it;
-   [ell\_elements.png](ell_elements.png), a PNG image of the element
    mesh;
-   [ell\_solution.txt](ell_solution.txt), a text file containing the
    solution U at each node (X,Y);

You can go up one level to [the C++ source code page](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 06 December 2010.*
