FEM2D\_POISSON\_CG\_LAKE\
A 2D Poisson Problem on a Lake {#fem2d_poisson_cg_lake-a-2d-poisson-problem-on-a-lake align="center"}
==============================

------------------------------------------------------------------------

**FEM2D\_POISSON\_CG\_LAKE** is a C++ library which sets up the geometry
and data for the Poisson problem on a simulated lake with an island, for
solution by FEM2D\_POISSON\_CG.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FEM2D\_POISSON\_CG\_LAKE** is available in [a C++
version](../../cpp_src/fem2d_poisson_cg_lake/fem2d_poisson_cg_lake.html)
and [a FORTRAN90
version](../../f_src/fem2d_poisson_cg_lake/fem2d_poisson_cg_lake.html)
and [a MATLAB
version](../../m_src/fem2d_poisson_cg_lake/fem2d_poisson_cg_lake.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FEM2D\_POISSON\_CG](../../cpp_src/fem2d_poisson_cg/fem2d_poisson_cg.html),
a C++ program which solves Poisson's equation on a triangulated region,
using the finite element method, sparse storage, and a conjugate
gradient solver.

[FEM2D\_POISSON\_CG\_BAFFLE](../../cpp_src/fem2d_poisson_cg_baffle/fem2d_poisson_cg_baffle.html),
a C++ library which defines the geometry of a channel with 13 hexagonal
baffles, as well as boundary conditions for a given Poisson problem, and
is called by fem2d\_poisson\_cg as part of a solution procedure.

[FEM2D\_POISSON\_CG\_ELL](../../cpp_src/fem2d_poisson_cg_ell/fem2d_poisson_cg_ell.html),
a C++ library which defines the geometry of an L-shaped region, as well
as boundary conditions for a given Poisson problem, and is called by
fem2d\_poisson\_cg as part of a solution procedure.

### Source Code: {#source-code align="center"}

-   [lake.cpp](lake.cpp), the user-supplied routines to evaluate the
    right hand side, linear coefficient, and boundary conditions;
-   [lake\_output.txt](lake_output.txt), output from a run of the
    program;
-   [lake\_nodes.txt](lake_nodes.txt), a text file containing a list,
    for each node, of its X and Y coordinates;
-   [lake\_nodes.png](lake_nodes.png), a PNG image of the nodes.
-   [lake\_elements.txt](lake_elements.txt), a text file containing a
    list, for each element, of the three nodes that compose it;
-   [lake\_elements.png](lake_elements.png), a PNG image of the nodes.
-   [lake\_values.txt](lake_values.txt), a text file containing the
    solution U at each node (X,Y);

You can go up one level to [the C++ source code page](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 25 January 2013.*
