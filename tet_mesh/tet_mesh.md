TET\_MESH\
Routines for a Tet Mesh {#tet_mesh-routines-for-a-tet-mesh align="center"}
=======================

------------------------------------------------------------------------

**TET\_MESH** is a C++ library which constructs, describes, or modifies
a mesh of tetrahedrons.

### Linear and Quadratic Meshes {#linear-and-quadratic-meshes align="center"}

The simplest tet mesh, which we term an *order 4* or *linear* mesh, uses
four points to define each tetrahedron. A second type of mesh, known as
an *order 10* or *quadratic* mesh, uses ten points.

While an order 4 mesh can naturally be constructed directly from most
sets of data points, a mesh of order 10 is not usually constructed
directly from the data; at least in the simplest case, one wants the 6
extra nodes to be the midpoints of the sides determined by the 4
vertices.

Thus, an order 10 tet mesh is typically generated in two steps:

-   generate an order 4 mesh, in which every tetrahedral vertex comes
    from a user data point;
-   generate an order 10 mesh from the order 4 mesh, in which the new
    midside points are not user data points, but rather *averages* of
    pairs of tetrahedral vertices.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TET\_MESH** is available in [a C++
version](../../c_src/tet_mesh/tet_mesh.md) and [a C++
version](../../master/tet_mesh/tet_mesh.md) and [a FORTRAN77
version](../../f77_src/tet_mesh/tet_mesh.md) and [a FORTRAN90
version](../../f_src/tet_mesh/tet_mesh.md) and [a MATLAB
version](../../m_src/tet_mesh/tet_mesh.md).

### Related Programs: {#related-programs align="center"}

[CVT\_TET\_MESH](../../f_src/cvt_tet_mesh/cvt_tet_mesh.md), a
FORTRAN90 library which uses CVT methods to compute a tet mesh in a
region.

[GEOMETRY](../../master/geometry/geometry.md), a C++ library which
includes a number of routines for making computations involving
tetrahedrons.

[GEOMPACK](../../master/geompack/geompack.md), a C++ library which
contains a routine **DTRIS3** that can compute the tet mesh for a set of
3D points, as well as the adjacency information.

[KEAST](../../master/keast/keast.md), a C++ library which defines a
number of quadrature rules for a tetrahedron.

[NCC\_TETRAHEDRON](../../master/ncc_tetrahedron/ncc_tetrahedron.md),
a C++ library which defines Newton-Cotes closed quadrature rules on a
tetrahedron.

[NCO\_TETRAHEDRON](../../master/nco_tetrahedron/nco_tetrahedron.md),
a C++ library which defines Newton-Cotes open quadrature rules on a
tetrahedron.

[QUADRATURE\_RULES\_TET](../../datasets/quadrature_rules_tet/quadrature_rules_tet.md),
a dataset directory which contains triples of files defining various
quadrature rules on tetrahedrons.

[TABLE\_TET\_MESH](../../f_src/table_tet_mesh/table_tet_mesh.md), a
FORTRAN90 program which can compute the tet mesh for a given set of
points.

[TEST\_TET\_MESH](../../f_src/test_tet_mesh/test_tet_mesh.md), a
FORTRAN90 library which defines a few test regions for the generation of
a tet mesh.

[TET\_MESH\_BOUNDARY](../../master/tet_mesh_boundary/tet_mesh_boundary.md),
a C++ program which returns the nodes and faces of the boundary of a
tetrahedral mesh, which themselves form a 3D triangular mesh or
"TRI\_SURFACE".

[TET\_MESH\_DISPLAY](../../m_src/tet_mesh_display/tet_mesh_display.md),
a MATLAB program which can read in the node and tetra files defining a
tet mesh and display a wireframe image.

[TET\_MESH\_DISPLAY\_OPENGL](../../master/tet_mesh_display_opengl/tet_mesh_display_opengl.md),
a C++ program which can read in the node and tetra files defining a tet
mesh and display a wireframe image.

[TET\_MESH\_L2Q](../../master/tet_mesh_l2q/tet_mesh_l2q.md), a C++
program which converts a linear to quadratic tet mesh.

[TET\_MESH\_ORDER4](../../data/tet_mesh_order4/tet_mesh_order4.md), a
directory which contains a description and examples of a tet mesh using
order 4 elements.

[TET\_MESH\_ORDER10](../../data/tet_mesh_order10/tet_mesh_order10.md),
a directory which contains a description and examples of a tet mesh
using order 10 elements.

[TET\_MESH\_Q2L](../../master/tet_mesh_q2l/tet_mesh_q2l.md), a C++
program which converts a quadratic to linear tet mesh.

[TET\_MESH\_QUAD](../../master/tet_mesh_quad/tet_mesh_quad.md), a C++
program which estimates the integral of a function over a region defined
by a tetrahedral mesh.

[TET\_MESH\_QUALITY](../../master/tet_mesh_quality/tet_mesh_quality.md),
a C++ program which computes the quality of a tet mesh.

[TET\_MESH\_RCM](../../master/tet_mesh_rcm/tet_mesh_rcm.md), a C++
program which takes a tet mesh and relabels the nodes to reduce the
bandwidth of the corresponding adjacency matrix.

[TET\_MESH\_REFINE](../../master/tet_mesh_refine/tet_mesh_refine.md),
a C++ program which can refine a tet mesh.

[TET\_MESH\_TET\_NEIGHBORS](../../master/tet_mesh_tet_neighbors/tet_mesh_tet_neighbors.md),
a C++ program which computes the tetrahedral adjacency information.

[TET\_MESH\_VOLUMES](../../master/tet_mesh_volumes/tet_mesh_volumes.md),
a C++ program which computes the volume of each tetrahedron in a tet
mesh;

### Reference: {#reference align="center"}

1.  Herbert Edelsbrunner,\
    Geometry and Topology for Mesh Generation,\
    Cambridge, 2001,\
    ISBN: 0-521-79309-2,\
    LC: QA377.E36.
2.  Barry Joe,\
    GEOMPACK - a software package for the generation of meshes using
    geometric algorithms,\
    Advances in Engineering Software,\
    Volume 13, Number 5, 1991, pages 325-331.
3.  Anwei Liu, Barry Joe,\
    Quality Local Refinement of Tetrahedral Meshes Based on
    8-Subtetrahedron Subdivision,\
    Mathematics of Computation,\
    Volume 65, Number 215, July 1996, pages 1183-1200.
4.  Per-Olof Persson, Gilbert Strang,\
    A Simple Mesh Generator in MATLAB,\
    SIAM Review,\
    Volume 46, Number 2, June 2004, pages 329-345.

### Source Code: {#source-code align="center"}

-   [tet\_mesh.cpp](tet_mesh.cpp), the source code.
-   [tet\_mesh.hpp](tet_mesh.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [tet\_mesh\_prb.cpp](tet_mesh_prb.cpp), a sample calling program.
-   [tet\_mesh\_prb\_output.txt](tet_mesh_prb_output.txt), the output
    file.

### List of Routines: {#list-of-routines align="center"}

-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_SWAP** switches two I4's.
-   **I4\_UNIFORM** returns a scaled pseudorandom I4.
-   **I4COL\_COMPARE** compares columns I and J of an I4COL.
-   **I4COL\_SORT\_A** ascending sorts the columns of an I4COL.
-   **I4COL\_SORT2\_A** ascending sorts the elements of each column of
    an I4COL.
-   **I4COL\_SORTED\_UNIQUE\_COUNT** counts unique elements in an I4COL.
-   **I4COL\_SWAP** swaps two columns of an I4COL.
-   **I4I4\_SORT\_A** ascending sorts a pair of I4's.
-   **I4I4I4\_SORT\_A** ascending sorts a triple of I4's.
-   **I4MAT\_TRANSPOSE\_PRINT** prints an I4MAT, transposed.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an I4MAT,
    transposed.
-   **I4VEC\_PRINT** prints an I4VEC.
-   **I4VEC\_SUM** sums the entries of an I4VEC.
-   **I4VEC\_ZERO** zeroes an I4VEC.
-   **R4\_ABS** returns the absolute value of an R4.
-   **R4\_NINT** returns the nearest integer to an R4.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_MIN** returns the minimum of two R8's.
-   **R8\_SWAP** switches two R8's.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **R8MAT\_DET\_4D** computes the determinant of a 4 by 4 R8MAT.
-   **R8MAT\_MV** multiplies a matrix times a vector.
-   **R8MAT\_PRINT** prints an R8MAT, with an optional title.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8MAT\_SOLVE** uses Gauss-Jordan elimination to solve an N by N
    linear system.
-   **R8MAT\_TRANSPOSE\_PRINT** prints an R8MAT, transposed.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **R8MAT\_UNIFORM\_01** fills a double precision array with unit
    pseudorandom values.
-   **R8VEC\_CROSS\_3D** computes the cross product of two vectors in
    3D.
-   **R8VEC\_IS\_NONNEGATIVE** is true if all entries in an R8VEC are
    nonnegative.
-   **R8VEC\_IS\_ZERO** is true if the entries in an R8VEC are all zero.
-   **R8VEC\_LENGTH** returns the Euclidean length of a R8VEC
-   **R8VEC\_MAX** returns the maximum element in an R8VEC.
-   **R8VEC\_MEAN** returns the mean of a R8VEC.
-   **R8VEC\_MIN** returns the minimum element in an R8VEC.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC\_SUM** returns the sum of an R8VEC.
-   **R8VEC\_UNIFORM\_01** returns a unit pseudorandom R8VEC.
-   **R8VEC\_VARIANCE** returns the variance of a double vector.
-   **R8VEC\_ZERO** zeroes a real vector.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **SORT\_HEAP\_EXTERNAL** externally sorts a list of items into
    ascending order.
-   **TET\_MESH\_NEIGHBOR\_TETS** determines tetrahedron neighbors.
-   **TET\_MESH\_NODE\_ORDER:** determines the order of nodes.
-   **TET\_MESH\_ORDER4\_ADJ\_COUNT** counts the number of nodal
    adjacencies.
-   **TET\_MESH\_ORDER4\_BOUNDARY\_FACE\_COUNT** counts the number of
    boundary faces.
-   **TET\_MESH\_ORDER4\_EDGE\_COUNT** counts the number of edges.
-   **TET\_MESH\_ORDER4\_EXAMPLE\_SET** sets an example linear tet mesh.
-   **TET\_MESH\_ORDER4\_EXAMPLE\_SIZE** sizes an example linear tet
    mesh.
-   **TET\_MESH\_ORDER4\_REFINE\_COMPUTE** computes a refined order 4
    tet mesh
-   **TET\_MESH\_ORDER4\_REFINE\_SIZE** sizes a refined order 4 tet
    mesh.
-   **TET\_MESH\_ORDER4\_TO\_ORDER10\_COMPUTE** computes a quadratic tet
    mesh from a linear one.
-   **TET\_MESH\_ORDER4\_TO\_ORDER10\_SIZE** sizes a quadratic tet mesh
    from a linear one.
-   **TET\_MESH\_ORDER10\_EXAMPLE\_SET** sets an example quadratic tet
    mesh.
-   **TET\_MESH\_ORDER10\_EXAMPLE\_SIZE** sizes an example quadratic tet
    mesh.
-   **TET\_MESH\_ORDER10\_TO\_ORDER4\_COMPUTE** linearizes a quadratic
    tet mesh.
-   **TET\_MESH\_ORDER10\_TO\_ORDER4\_SIZE** sizes a linear tet mesh
    from a quadratic one.
-   **TET\_MESH\_QUAD** approximates an integral over a tet mesh.
-   **TET\_MESH\_QUALITY1** returns a tet mesh quality factor.
-   **TET\_MESH\_QUALITY2** returns a tet mesh quality factor.
-   **TET\_MESH\_QUALITY3** returns a tet mesh quality factor.
-   **TET\_MESH\_QUALITY4** returns a tet mesh quality factor.
-   **TET\_MESH\_QUALITY5** returns a tet mesh quality factor.
-   **TET\_MESH\_SEARCH\_DELAUNAY** searches a Delaunay tet mesh for a
    point.
-   **TET\_MESH\_SEARCH\_NAIVE** naively searches a tet mesh.
-   **TETRAHEDRON\_BARYCENTRIC** returns the barycentric coordinates of
    a point.
-   **TETRAHEDRON\_CIRCUMSPHERE\_3D** computes the circumsphere of a
    tetrahedron in 3D.
-   **TETRAHEDRON\_EDGE\_LENGTH\_3D** returns edge lengths of a
    tetrahedron in 3D.
-   **TETRAHEDRON\_INSPHERE\_3D** finds the insphere of a tetrahedron in
    3D.
-   **TETRAHEDRON\_ORDER4\_PHYSICAL\_TO\_REFERENCE** maps physical
    points to reference points.
-   **TETRAHEDRON\_ORDER4\_REFERENCE\_TO\_PHYSICAL** maps reference
    points to physical points.
-   **TETRAHEDRON\_QUALITY1\_3D:** "quality" of a tetrahedron in 3D.
-   **TETRAHEDRON\_QUALITY2\_3D:** "quality" of a tetrahedron in 3D.
-   **TETRAHEDRON\_QUALITY3\_3D** computes the mean ratio of a
    tetrahedron.
-   **TETRAHEDRON\_QUALITY4\_3D** computes the minimum solid angle of a
    tetrahedron.
-   **TETRAHEDRON\_REFERENCE\_SAMPLE** samples points in the reference
    tetrahedron.
-   **TETRAHEDRON\_SAMPLE** returns random points in a tetrahedron.
-   **TETRAHEDRON\_VOLUME\_3D** computes the volume of a tetrahedron in
    3D.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 20 August 2009.*
