MESH\_BANDWIDTH\
Geometric Bandwidth of a Mesh {#mesh_bandwidth-geometric-bandwidth-of-a-mesh align="center"}
=============================

------------------------------------------------------------------------

**MESH\_BANDWIDTH** is a C++ program which computes the geometric
bandwidth of a mesh.

The user specifies an element file, containing the indices of the nodes
that make up each element. Examples of such a file include the order 3
and order 6 triangulation files, but any order of element may be used.

Not only may any element type be used, but the geometric region may be
of any spatial dimension.

The program reads the element information and computes the geometric
bandwidth **M** as

> **M = ML + 1 + MU**

where **ML** is the lower bandwidth, namely, the maximum value over all
nodes **I** of the difference **(I-J)**, taken over all nodes **J** that
share an element with node **I**. The upper bandwidth is the maximum
value of **(J-I)** under the same conditions.

The geometric bandwidth **M** is the linear algebraic bandwidth of the
adjacency matrix of the mesh, where **I** and **J** are considered to be
adjacent if there is some element that includes both nodes.

The geometric bandwidth is of interest since it is the bandwidth of the
finite element matrix associated with the mesh, when a scalar quantity
is being approximated and there is a single unknown for every node, and
the unknowns have the same numbering as the nodes.

### Usage: {#usage align="center"}

> **mesh\_bandwidth** *element\_file*

where

-   *element\_file* contains a list of the node indices that form each
    triangle of the triangulation,

computes and prints the geometric bandwidth.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**MESH\_BANDWIDTH** is available in [a C
version](../../c_src/mesh_bandwidth/mesh_bandwidth.md) and [a C++
version](../../master/mesh_bandwidth/mesh_bandwidth.md) and [a
FORTRAN77 version](../../f77_src/mesh_bandwidth/mesh_bandwidth.md) and
[a FORTRAN90 version](../../f_src/mesh_bandwidth/mesh_bandwidth.md)
and [a MATLAB version](../../m_src/mesh_bandwidth/mesh_bandwidth.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[TABLE\_DELAUNAY](../../master/table_delaunay/table_delaunay.md), a
C++ program which triangulates a set of nodes whose coordinates are
stored in a file.

[TET\_MESH\_RCM](../../master/tet_mesh_rcm/tet_mesh_rcm.md), a C++
program which applies the reverse Cuthill-McKee reordering to a
tetrahedral mesh of nodes in 3D.

[TRIANGLE](../../c_src/triangle/triangle.md), a C program which
computes a triangulation of a geometric region.

[TRIANGULATION\_DISPLAY\_OPENGL](../../master/triangulation_display_opengl/triangulation_display_opengl.md),
a C++ program which reads files defining a triangulation and displays an
image using Open GL.

[TRIANGULATION\_ORDER3](../../data/triangulation_order3/triangulation_order3.md),
a directory which contains a description and examples of order 3
triangulations.

[TRIANGULATION\_ORDER6](../../data/triangulation_order6/triangulation_order6.md),
a directory which contains a description and examples of order 6
triangulations.

[TRIANGULATION\_PLOT](../../master/triangulation_plot/triangulation_plot.md),
a C++ program which reads data defining a triangulation and creates a
PostScript image of the nodes and triangles.

### Reference: {#reference align="center"}

1.  Alan George, Joseph Liu,\
    Computer Solution of Large Sparse Positive Definite Matrices,\
    Prentice Hall, 1981,\
    QA 188.G46
2.  Norman Gibbs, William Poole, Paul Stockmeyer,\
    An Algorithm for Reducing the Bandwidth and Profile of a Sparse
    Matrix,\
    SIAM Journal on Numerical Analysis,\
    Volume 13, pages 236-250, 1976.
3.  Norman Gibbs,\
    Algorithm 509: A Hybrid Profile Reduction Algorithm,\
    ACM Transactions on Mathematical Software,\
    Volume 2, Issue 4, pages 378-387, 1976.
4.  Joseph ORourke,\
    Computational Geometry,\
    Cambridge University Press,\
    Second Edition, 1998.

### Source Code: {#source-code align="center"}

-   [mesh\_bandwidth.cpp](mesh_bandwidth.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [mesh\_bandwidth\_prb\_output.txt](mesh_bandwidth_prb_output.txt),
    the output file.

Some sample mesh files include:

-   [sphere\_q4\_elements.txt](../../data/polygonal_surface/sphere_q4_elements.txt)
-   [sphere\_t3\_elements.txt](../../data/polygonal_surface/sphere_t3_elements.txt)
-   [cube\_order4\_tetras.txt](../../data/tet_mesh_order4/cube_order4_tetras.txt)
-   [twenty\_order4\_tetras.txt](../../data/tet_mesh_order4/twenty_order4_tetras.txt)
-   [cube\_order10\_tetras.txt](../../data/tet_mesh_order10/cube_order10_tetras.txt)
-   [oneoneeight\_order10\_tetras.txt](../../data/tet_mesh_order10/oneoneeight_order10_tetras.txt)
-   [ell\_tri3.txt](../../data/triangulation_order3/ell_tri3.txt)
-   [hex\_cvt\_tri3.txt](../../data/triangulation_order3/hex_cvt_tri3.txt)
-   [hex\_triangle\_tri3.txt](../../data/triangulation_order3/hex_triangle_tri3.txt)
-   [hot\_pipe\_tri3.txt](../../data/triangulation_order3/hot_pipe_tri3.txt)
-   [ell\_tri6.txt](../../data/triangulation_order6/ell_tri6.txt)
-   [hex\_jeff\_tri6.txt](../../data/triangulation_order6/hex_jeff_tri6.txt)

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for MESH\_BANDWIDTH.
-   **BANDWIDTH\_MESH** determines the bandwidth of the coefficient
    matrix.
-   **FILE\_COLUMN\_COUNT** counts the columns in the first line of a
    file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4MAT\_DATA\_READ** reads data from an I4MAT file.
-   **I4MAT\_HEADER\_READ** reads the header from an I4MAT file.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an I4MAT,
    transposed.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_I4VEC** reads an I4VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 12 September 2012.*
