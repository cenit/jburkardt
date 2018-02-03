FEM2D\_POISSON\_CG\_ELL\
A 2D Poisson Problem in an L-shaped Region {#fem2d_poisson_cg_ell-a-2d-poisson-problem-in-an-l-shaped-region align="center"}
==========================================

------------------------------------------------------------------------

**FEM2D\_POISSON\_CG\_ELL** is a C++ library which sets up the geometry
and data for a Poisson problem in an L-shaped region for solution by
FEM2D\_POISSON\_CG.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FEM2D\_POISSON\_CG\_ELL** is available in [a C++
version](../../cpp_src/fem2d_poisson_cg_ell/fem2d_poisson_cg_ell.html)
and [a FORTRAN90
version](../../f_src/fem2d_poisson_cg_ell/fem2d_poisson_cg_ell.html) and
[a MATLAB
version](../../m_src/fem2d_poisson_cg_ell/fem2d_poisson_cg_ell.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FEM2D\_POISSON\_CG](../../cpp_src/fem2d_poisson_cg/fem2d_poisson_cg.html),
a C++ program which solves Poisson's equation on a triangulated region,
using the finite element method, sparse storage, and a conjugate
gradient solver.

[FEM2D\_POISSON\_CG\_BAFFLE](../../cpp_src/fem2d_poisson_cg_baffle/fem2d_poisson_cg_baffle.html),
a C++ library which defines the geometry of a channel with 13 hexagonal
baffles, as well as boundary conditions for a given Poisson problem, and
is called by fem2d\_poisson\_cg as part of a solution procedure.

[FEM2D\_POISSON\_CG\_LAKE](../../cpp_src/fem2d_poisson_cg_lake/fem2d_poisson_cg_lake.html),
a C++ library which defines the geometry of a lake-shaped region, as
well as boundary conditions for a given Poisson problem, and is called
by fem2d\_poisson\_cg as part of a solution procedure.

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
-   [ell\_values.txt](ell_values.txt), a text file containing the
    solution U at each node (X,Y);

You can go up one level to [the C++ source code page](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 25 January 2013.*
