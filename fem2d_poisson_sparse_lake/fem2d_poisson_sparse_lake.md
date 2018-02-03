FEM2D\_POISSON\_SPARSE\_LAKE\
A 2D Poisson Problem on a Lake {#fem2d_poisson_sparse_lake-a-2d-poisson-problem-on-a-lake align="center"}
==============================

------------------------------------------------------------------------

**FEM2D\_POISSON\_SPARSE\_LAKE** is a C++ library which sets up the
geometry and data for the Poisson problem on a simulated lake with an
island, for solution by FEM2D\_POISSON\_SPARSE.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FEM2D\_POISSON\_SPARSE\_LAKE** is available in [a C++
version](../../master/fem2d_poisson_sparse_lake/fem2d_poisson_sparse_lake.md)
and [a FORTRAN90
version](../../f_src/fem2d_poisson_sparse_lake/fem2d_poisson_sparse_lake.md)
and [a MATLAB
version](../../m_src/fem2d_poisson_sparse_lake/fem2d_poisson_sparse_lake.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FEM2D\_POISSON\_SPARSE](../../master/fem2d_poisson_sparse/fem2d_poisson_sparse.md),
a C++ program which solves a 2D Poisson problem, using a sparse matrix
solver, and user input.

[FEM2D\_POISSON\_SPARSE\_BAFFLE](../../master/fem2d_poisson_sparse_baffle/fem2d_poisson_sparse_baffle.md),
a C++ library which defines the geometry of a rectangle channel
containing 13 hexagonal baffles, as well as boundary conditions for a
given Poisson problem, and is called by fem2d\_poisson\_sparse as part
of a solution procedure.

[FEM2D\_POISSON\_SPARSE\_ELL](../../master/fem2d_poisson_sparse_ell/fem2d_poisson_sparse_ell.md),
a C++ library which defines the geometry of an L-shaped region, as well
as boundary conditions for a given Poisson problem, and is called by
**fem2d\_poisson\_sparse** as part of a solution procedure.

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
-   [lake\_solution.txt](lake_solution.txt), a text file containing the
    solution U at each node (X,Y);

You can go up one level to [the C++ source code page](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 06 December 2010.*
