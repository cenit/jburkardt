FEM2D\_POISSON\_SPARSE\_BAFFLE\
A Poisson Problem in a Region with Baffles {#fem2d_poisson_sparse_baffle-a-poisson-problem-in-a-region-with-baffles align="center"}
==========================================

------------------------------------------------------------------------

**FEM2D\_POISSON\_SPARSE\_BAFFLE** is a C++ library which defines the
geometry and other data for the "baffle" problem, a rectangular region
with 13 hexagonal baffles. The problem is suitable for solution by
**fem2d\_poisson\_sparse**.

The region is a rectangle with lower left corner (0.0,1.0) and upper
right corner (12.0,7.0). The mesh was created using MESH2D, with a
maximum element size of 0.5. The mesh comprises 512 nodes and 874
elements.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FEM2D\_POISSON\_SPARSE\_BAFFLE** is available in [a C++
version](../../cpp_src/fem2d_poisson_sparse_baffle/fem2d_poisson_sparse_baffle.html)
and [a FORTRAN90
version](../../f_src/fem2d_poisson_sparse_baffle/fem2d_poisson_sparse_baffle.html)
and [a MATLAB
version](../../m_src/fem2d_poisson_sparse_baffle/fem2d_poisson_sparse_baffle.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FEM2D\_POISSON\_SPARSE](../../cpp_src/fem2d_poisson_sparse/fem2d_poisson_sparse.html),
a C++ program which solves the steady (time independent) Poisson
equation on an arbitrary 2D triangulated region using MATLAB's sparse
solver.

[FEM2D\_POISSON\_SPARSE\_ELL](../../cpp_src/fem2d_poisson_sparse_ell/fem2d_poisson_sparse_ell.html),
a C++ library which defines the geometry of an L-shaped region, as well
as boundary conditions for a given Poisson problem, and is called by
fem2d\_poisson\_sparse as part of a solution procedure.

[FEM2D\_POISSON\_SPARSE\_LAKE](../../cpp_src/fem2d_poisson_sparse_lake/fem2d_poisson_sparse_lake.html),
a C++ library which defines the geometry of a lake-shaped region, as
well as boundary conditions for a given Poisson problem, and is called
by fem2d\_poisson\_sparse as part of a solution procedure.

### Source Code: {#source-code align="center"}

-   [baffle.cpp](baffle.cpp), the user-supplied routines to evaluate the
    right hand side, linear coefficient, and boundary conditions;
-   [baffle\_nodes.txt](baffle_nodes.txt), a text file containing a
    list, for each node, of its X and Y coordinates;
-   [baffle\_nodes.png](baffle_nodes.png), a PNG image of the nodes;
-   [baffle\_elements.txt](baffle_elements.txt), a text file containing
    a list, for each element, of the three nodes that compose it;
-   [baffle\_elements.png](baffle_elements.png), a PNG image of the
    element mesh;

### Examples and Tests: {#examples-and-tests align="center"}

-   [baffle\_output.txt](baffle_output.txt), the output file;
-   [baffle\_values.txt](baffle_values.txt), a text file containing the
    solution U at each node (X,Y);

You can go up one level to [the C++ source code page](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 25 January 2013.*
