FEM\_TO\_MESH\
Convert finite element mesh data from FEM to MESH format {#fem_to_mesh-convert-finite-element-mesh-data-from-fem-to-mesh-format align="center"}
========================================================

------------------------------------------------------------------------

**FEM\_TO\_MESH** is a C++ program which reads a set of FEM files
defining the node coordinates, boundary nodes, and elements of a finite
element mesh, and rewrites the data as a MESH file.

The program can convert 2D meshes of triangles, or 3D meshes of
tetrahedrons.

### Usage: {#usage align="center"}

> **fem\_to\_mesh** prefix

where *prefix* is the file name prefix, so that:

-   *prefix***\_nodes.txt** is a file containing node coordinates;
-   *prefix***\_boundary\_node\_mask.txt** is a file listing a "0" for
    each interior node and a "1" for each boundary node; (This file can
    be created by the **triangulation\_boundary\_nodes** or
    **tet\_mesh\_boundary** programs.)
-   *prefix***\_elements.txt** is a file listing the nodes forming each
    element;
-   *prefix***.mesh** is the name of the MESH file to be created.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FEM\_TO\_MESH** is available in [a C++
version](../../cpp_src/fem_to_mesh/fem_to_mesh.html) and [a FORTRAN90
version](../../f_src/fem_to_mesh/fem_to_mesh.html) and [a MATLAB
version](../../m_src/fem_to_mesh/fem_to_mesh.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FEM\_TO\_TEC](../../f_src/fem_to_tec/fem_to_tec.html), a FORTRAN90
program which converts FEM models into TECPLOT ASCII files.

[FEM2D](../../data/fem2d/fem2d.html), a data directory which contains
examples of 2D FEM files, text files that describe a 2D finite element
geometry and associated nodal values;

[FEM3D](../../data/fem3d/fem3d.html), a data directory which contains
examples of 3D FEM files, three text files that describe a 3D finite
element geometry and associated nodal values.

[ICE\_TO\_MESH](../../cpp_src/ice_to_mesh/ice_to_mesh.html), a C++
program which reads a NETCDF file containing an ICE dataset and rewrites
the information as a MESH file.

[MESH](../../data/mesh/mesh.html), a data directory which contains
examples of MESH files, which can be used to define the geometry of a
finite element mesh in 2D or 3D, using triangles, quadrilaterals,
tetrahedrons or hexahedrons.

[TET\_MESH\_BOUNDARY](../../cpp_src/tet_mesh_boundary/tet_mesh_boundary.html),
a C++ program which returns the nodes and faces of the boundary of a
tetrahedral mesh, which themselves form a 3D triangular mesh or
"TRI\_SURFACE".

[TRIANGULATION\_BOUNDARY\_NODES](../../cpp_src/triangulation_boundary_nodes/triangulation_boundary_nodes.html),
a C++ program which reads data defining a triangulation, determines
which nodes lie on the boundary, and writes their coordinates to a file.

### Reference: {#reference align="center"}

1.  Pascal Frey,\
    MEDIT: An interactive mesh visualization software,\
    Technical Report RT-0253,\
    Institut National de Recherche en Informatique et en Automatique,\
    03 December 2001.

### Source Code: {#source-code align="center"}

-   [fem\_to\_mesh.cpp](fem_to_mesh.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**ELL** is a 2D L-shaped region, with a grid of 65 nodes and 96 elements
of order 3 triangles.

-   [ell\_nodes.txt](../../data/fem2d/ell_nodes.txt)
-   [ell\_elements.txt](../../data/fem2d/ell_elements.txt)
-   [ell\_elements.png](../../data/fem2d/ell_elements.png), an image of
    the triangulation.
-   [ell\_boundary\_node\_mask.txt](../../data/fem2d/ell_boundary_node_mask.txt)
-   [ell.mesh](../../data/mesh/ell.mesh), the MESH file.

**P01** is 3D FEM data for a rectangular channel of dimensions 3x1x1
physical units, using 584 nodes and 2568 tetrahedral elements.

-   [p01\_nodes.txt](../../data/fem3d/p01_nodes.txt), defines the FEM
    nodes.
-   [p01\_elements.txt](../../data/fem3d/p01_elements.txt), defines the
    FEM elements.
-   [p01.png](../../data/fem3d/p01.png), an image of the mesh.
-   [p01\_boundary\_node\_mask.txt](../../data/fem3d/p01_boundary_node_mask.txt)
-   [p01.mesh](../../data/mesh/p01.mesh), the MESH file.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for FEM\_TO\_MESH.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **FILE\_COLUMN\_COUNT** counts the columns in the first line of a
    file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4MAT\_DATA\_READ** reads data from an I4MAT file.
-   **I4MAT\_HEADER\_READ** reads the header from an I4MAT file.
-   **MESH\_WRITE** writes mesh data to a MESH file.
-   **R8MAT\_DATA\_READ** reads the data from an R8MAT file.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_I4VEC** reads an I4VEC from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 09 December 2010.*
