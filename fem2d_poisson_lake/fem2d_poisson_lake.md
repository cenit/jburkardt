FEM2D\_POISSON\_LAKE\
A Lake Problem {#fem2d_poisson_lake-a-lake-problem align="center"}
=====================

------------------------------------------------------------------------

**FEM2D\_POISSON\_LAKE** is a C++ library which describes the geometry
of a simulated lake with an island and other data needed in order to
request a solution by FEM2D\_POISSON.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FEM2D\_POISSON\_LAKE** is available in [a C++
version](../../cpp_src/fem2d_poisson_lake/fem2d_poisson_lake.html) and
[a FORTRAN90
version](../../f_src/fem2d_poisson_lake/fem2d_poisson_lake.html) and [a
MATLAB version](../../m_src/fem2d_poisson_lake/fem2d_poisson_lake.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FEM2D\_POISSON](../../cpp_src/fem2d_poisson/fem2d_poisson.html), a C++
program which applies the finite element method to a 2D Poisson problem,
with user input.

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

You can go up one level to [the C++ source code page](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 06 December 2010.*
