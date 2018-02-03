TET\_MESH\_QUALITY\
Interactive Program for\
Tet Mesh Quality {#tet_mesh_quality-interactive-program-for-tet-mesh-quality align="center"}
========================

------------------------------------------------------------------------

**TET\_MESH\_QUALITY** is a C++ program which computes and prints a
variety of quality measures for a given tet mesh of a set of points in
3D.

The tet mesh is defined by a *node file* containing the coordinates of
nodes, and a *tetra file* containing quadruples of node indices. For
more information on this format, see [the order4 tet mesh
format](../../data/tet_mesh_order4/tet_mesh_order4.html).

The quality measures computed include:

-   **Measure 1**, the minimum, over all tetrahedrons, of 3 times the
    radius of the insphere divided by the radius of the circumsphere.
-   **Measure 2**, the minimum, over all tetrahedrons, of 2 times sqrt (
    6 ) times the radius of the insphere divided by the length of the
    longest side of the tetrahedron.
-   **Measure 3**, the minimum, over all tetrahedrons, of 12 \* ( 3 \*
    volume )\*\*(2/3) / (sum of squares of edge lengths);
-   **Measure 4**, the minimum solid angle in any tetrahedron;
-   **Measure 5**, a uniformity measure, the ratio of the maximum to
    minimum tetrahedron volume;

Each quality measure is defined as the minimum of its value over each
tetrahedron. The maximum and best possible value is 1, and the minimum
and worst value is 0.

### Usage: {#usage align="center"}

> **tet\_mesh\_quality** *prefix*

where *prefix* is the common file prefix:

-   *prefix*\_nodes.txt contains the node coordinates;
-   *prefix*\_elements.txt or\
    the node indices forming each element.

The element definition file will list node indices. In C++, it may be
more natural to use 0-based indices. This program will accept an element
definition file that is 0-based or 1-based, and will convert a 1-based
input file so that it becomes 0-based internal to the program. The
detection of 1-based data is determined by the absence of the use of a 0
index, and the use of an index equal to the number of nodes. This is an
implicit and fallible, but reasonable, way to handle this problem.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TET\_MESH\_QUALITY** is available in [a C++
version](../../cpp_src/tet_mesh_quality/tet_mesh_quality.html) and [a
FORTRAN90 version](../../f_src/tet_mesh_quality/tet_mesh_quality.html)
and [a MATLAB
version](../../m_src/tet_mesh_quality/tet_mesh_quality.html).

### Related Programs: {#related-programs align="center"}

[CVT\_TET\_MESH](../../f_src/cvt_tet_mesh/cvt_tet_mesh.html), a
FORTRAN90 library which uses CVT methods to compute a tet mesh in a
region.

[GEOMPACK](../../cpp_src/geompack/geompack.html), a C++ library which
includes a routine **DTRIS3** to compute the tet mesh of a set of points
in 3D.

[TABLE\_QUALITY](../../f_src/table_quality/table_quality.html), a
FORTRAN90 program which computes quality measures for an arbitrary
(untriangulated) pointset in any dimension.

[TABLE\_TET\_MESH](../../f_src/table_tet_mesh/table_tet_mesh.html), a
FORTRAN90 program which computes the tet mesh of a set of points in 3D.

[TEST\_TET\_MESH](../../f_src/test_tet_mesh/test_tet_mesh.html), a
FORTRAN90 library which defines a few test regions for the generation of
a tet mesh.

[TET\_MESH](../../cpp_src/tet_mesh/tet_mesh.html), a C++ library which
carries out computations with a tet mesh.

[TET\_MESH\_BOUNDARY](../../cpp_src/tet_mesh_boundary/tet_mesh_boundary.html),
a C++ program which returns the nodes and faces of the boundary of a
tetrahedral mesh, which themselves form a 3D triangular mesh or
"TRI\_SURFACE".

[TET\_MESH\_DISPLAY](../../m_src/tet_mesh_display/tet_mesh_display.html),
a MATLAB program which can read in the node and tetra files defining a
tet mesh and display a wireframe image.

[TET\_MESH\_DISPLAY\_OPENGL](../../cpp_src/tet_mesh_display_opengl/tet_mesh_display_opengl.html),
a C++ program which reads a tet mesh and displays the nodes and edges
using OpenGL.

[TET\_MESH\_L2Q](../../cpp_src/tet_mesh_l2q/tet_mesh_l2q.html), a C++
program which converts a linear to quadratic tet mesh.

[TET\_MESH\_Q2L](../../cpp_src/tet_mesh_q2l/tet_mesh_q2l.html), a C++
program which converts a quadratic to linear tet mesh.

[TET\_MESH\_RCM](../../cpp_src/tet_mesh_rcm/tet_mesh_rcm.html), a C++
program which takes a tet mesh and relabels the nodes to reduce the
bandwidth of the corresponding adjacency matrix.

[TET\_MESH\_REFINE](../../cpp_src/tet_mesh_refine/tet_mesh_refine.html),
a C++ program which refines a tet mesh.

[TET\_MESH\_TET\_NEIGHBORS](../../cpp_src/tet_mesh_tet_neighbors/tet_mesh_tet_neighbors.html),
a C++ program which computes the tetrahedral adjacency information.

[TET\_MESH\_VOLUMES](../../cpp_src/tet_mesh_volumes/tet_mesh_volumes.html),
a C++ program which computes the volume of each tetrahedron in a tet
mesh.

[TRIANGULATION\_QUALITY](../../cpp_src/triangulation_quality/triangulation_quality.html),
a C++ program which computes triangle-based quality measures for a
triangulation of a set of points in 2D.

### Reference: {#reference align="center"}

1.  Herbert Edelsbrunner,\
    Geometry and Topology for Mesh Generation,\
    Cambridge, 2001,\
    ISBN: 0-521-79309-2,\
    LC: QA377.E36.
2.  David Field,\
    Qualitative Measures for Initial Meshes,\
    International Journal of Numerical Methods in Engineering,\
    Volume 47, 2000, pages 887-906.
3.  Barry Joe,\
    GEOMPACK - a software package for the generation of meshes using
    geometric algorithms,\
    Advances in Engineering Software,\
    Volume 13, 1991, pages 325-331.
4.  Per-Olof Persson, Gilbert Strang,\
    A Simple Mesh Generator in MATLAB,\
    SIAM Review,\
    Volume 46, Number 2, June 2004, pages 329-345.

### Source Code {#source-code align="center"}

-   [tet\_mesh\_quality.cpp](tet_mesh_quality.cpp), the source code.

### Tests and Examples {#tests-and-examples align="center"}

**CUBE** is a simple example of 8 nodes in a cube. Test files you may
copy include:

-   [cube\_nodes.txt](cube_nodes.txt), the node file.
-   [cube\_elements.txt](cube_elements.txt), the tetrahedron file.
-   [cube\_quality.txt](cube_quality.txt), the report from the program.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for TET\_MESH\_QUALITY.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **FILE\_COLUMN\_COUNT** counts the columns in the first line of a
    file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4MAT\_DATA\_READ** reads data from an I4MAT file.
-   **I4MAT\_HEADER\_READ** reads the header from an I4MAT file.
-   **I4MAT\_TRANSPOSE\_PRINT** prints an I4MAT, transposed.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an I4MAT,
    transposed.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the smaller of two I4's.
-   **I4VEC\_HISTOGRAM** computes a histogram of the elements of an
    I4VEC.
-   **I4VEC\_MAX** returns the value of the maximum element in an I4VEC.
-   **I4VEC\_PRINT** prints an I4VEC.
-   **I4VEC\_ZERO** zeroes an I4VEC.
-   **R8\_HUGE** returns a "huge" double precision value.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_MIN** returns the minimum of two R8's.
-   **R8\_SWAP** switches two R8's.
-   **R8MAT\_DATA\_READ** reads the data from an R8MAT file.
-   **R8MAT\_DET\_4D** computes the determinant of a 4 by 4 R8MAT.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
-   **R8MAT\_SOLVE** uses Gauss-Jordan elimination to solve an N by N
    linear system.
-   **R8MAT\_TRANSPOSE\_PRINT** prints an R8MAT, transposed.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **R8VEC\_CROSS\_3D** computes the cross product of two R8VEC's in
    3D.
-   **R8VEC\_LENGTH** returns the Euclidean length of a vector.
-   **R8VEC\_MAX** returns the maximum element in an R8VEC.
-   **R8VEC\_MEAN** returns the mean of an R8VEC.
-   **R8VEC\_MIN** returns the minimum element in an R8VEC.
-   **R8VEC\_VARIANCE** returns the variance of an R8VEC.
-   **R8VEC\_ZERO** zeroes an R8VEC.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_I4VEC** reads an I4VEC from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TET\_MESH\_NODE\_ORDER:** determines the order of nodes.
-   **TET\_MESH\_QUALITY1** returns a tet mesh quality factor.
-   **TET\_MESH\_QUALITY2** returns a tet mesh quality factor.
-   **TET\_MESH\_QUALITY3** returns a tet mesh quality factor.
-   **TET\_MESH\_QUALITY4** returns a tet mesh quality factor.
-   **TET\_MESH\_QUALITY5** returns a tet mesh quality factor.
-   **TETRAHEDRON\_CIRCUMSPHERE\_3D** computes the circumsphere of a
    tetrahedron in 3D.
-   **TETRAHEDRON\_EDGE\_LENGTH\_3D** returns edge lengths of a
    tetrahedron in 3D.
-   **TETRAHEDRON\_INSPHERE\_3D** finds the insphere of a tetrahedron in
    3D.
-   **TETRAHEDRON\_QUALITY1\_3D:** "quality" of a tetrahedron in 3D.
-   **TETRAHEDRON\_QUALITY2\_3D:** "quality" of a tetrahedron in 3D.
-   **TETRAHEDRON\_QUALITY3\_3D** computes the mean ratio of a
    tetrahedron.
-   **TETRAHEDRON\_QUALITY4\_3D** computes the minimum solid angle of a
    tetrahedron.
-   **TETRAHEDRON\_VOLUME\_3D** computes the volume of a tetrahedron in
    3D.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 12 August 2009.*
