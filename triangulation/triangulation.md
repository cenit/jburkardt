TRIANGULATION\
Triangulation of 2D data {#triangulation-triangulation-of-2d-data align="center"}
========================

------------------------------------------------------------------------

**TRIANGULATION** is a C++ library which computes a triangulation of a
set of points in 2D, and carries out various other related operations on
triangulations of order 3 or 6.

The mesh is the collection of triangles. Each triangle is termed an
"element". The points used to define the shape of the triangle (the
corners, and sometimes a few more points) are called the "nodes".

Routines are available to:

-   evaluate "quality measures" for the mesh;
-   create a "node neighbor array" for each node;
-   create an "element neighbor array" for each element;
-   estimate the integral of a function over the region covered by the
    mesh;
-   plot the nodes and elements of a mesh;
-   determine the parts of the mesh that lie on the boundary;
-   sample points at random from the region covered by the mesh;
-   search a mesh to determine which element contains a point.

Since triangulations are often used to define a finite element mesh,
which in turn defines a sparse matrix, there are routines available
which can define the sparse compressed column arrays needed for a sparse
matrix associated with a mesh of order 3 or 6. The special case of the
Taylor-Hood mixed element is also handled, which is essentially an order
6 grid counted twice and an order 3 grid that only uses the vertices of
the order 6 grid.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TRIANGULATION** is available in [a C
version](../../c_src/triangulation/triangulation.html) and [a C++
version](../../cpp_src/triangulation/triangulation.html) and [a
FORTRAN77 version](../../f77_src/triangulation/triangulation.html) and
[a FORTRAN90 version](../../f_src/triangulation/triangulation.html) and
[a MATLAB version](../../m_src/triangulation/triangulation.html).

### Related Programs: {#related-programs align="center"}

[MESH\_TO\_XML](../../cpp_src/mesh_to_xml/mesh_to_xml.html), a C++
program which reads information defining a 1D, 2D or 3D mesh, namely a
file of node coordinates and a file of elements defined by node indices,
and creates a corresponding XML file for input to DOLFIN or FENICS.

[TABLE\_DELAUNAY](../../cpp_src/table_delaunay/table_delaunay.html), a
C++ program which reads a file of 2d point coordinates and computes the
Delaunay triangulation.

[TRIANGLE](../../c_src/triangle/triangle.html), a C program which
computes a triangulation of a geometric region.

[TRIANGULATION\_BOUNDARY\_NODES](../../cpp_src/triangulation_boundary_nodes/triangulation_boundary_nodes.html),
a C++ program which reads data defining a triangulation, determines
which nodes lie on the boundary, and writes their coordinates to a file.

[TRIANGULATION\_CORNER](../../cpp_src/triangulation_corner/triangulation_corner.html),
a C++ program which patches triangulations so that no triangle has two
sides on the boundary.

[TRIANGULATION\_DELAUNAY\_DISCREPANCY](../../cpp_src/triangulation_delaunay_discrepancy/triangulation_delaunay_discrepancy.html),
a C++ program which measures the amount by which a triangulation fails
the local Delaunay test;

[TRIANGULATION\_DISPLAY\_OPENGL](../../cpp_src/triangulation_display_opengl/triangulation_display_opengl.html),
a C++ program which reads files defining a triangulation and displays an
image using Open GL.

[TRIANGULATION\_HISTOGRAM](../../cpp_src/triangulation_histogram/triangulation_histogram.html),
a C++ program which computes histograms of data over a triangulation.

[TRIANGULATION\_L2Q](../../cpp_src/triangulation_l2q/triangulation_l2q.html),
a C++ program which reads data defining a 3-node triangulation and
generates midside nodes and writes out the corresponding 6-node
triangulation.

[TRIANGULATION\_MASK](../../cpp_src/triangulation_mask/triangulation_mask.html),
a C++ program, which takes an existing triangulation and deletes
triangles and their corresponding nodes as requested by the user.

[TRIANGULATION\_NODE\_TO\_ELEMENT](../../cpp_src/triangulation_node_to_element/triangulation_node_to_element.html),
a C++ program which reads files describing a set of nodes, their
triangulation, and the value of one or more quantities at each node, and
outputs a file that averages the quantities for each element. This
operation in effect creates an "order1" finite element model of the
data.

[TRIANGULATION\_ORDER3](../../data/triangulation_order3/triangulation_order3.html),
a directory which contains a description and examples of order 3
triangulations.

[TRIANGULATION\_ORDER6](../../data/triangulation_order6/triangulation_order6.html),
a directory which contains a description and examples of order 6
triangulations.

[TRIANGULATION\_ORIENT](../../cpp_src/triangulation_orient/triangulation_orient.html),
a C++ program which reads data defining a triangulation, makes sure that
every triangle has positive orientation, and if not, writes a corrected
triangle file.

[TRIANGULATION\_PLOT](../../cpp_src/triangulation_plot/triangulation_plot.html),
a C++ program which reads data defining a triangulation and creates a
PostScript image of the nodes and triangles.

[TRIANGULATION\_Q2L](../../cpp_src/triangulation_q2l/triangulation_q2l.html),
a C++ program which reads data defining a 6-node triangulation, and
subdivides each triangle into 4 3-node triangles, writing the resulting
triangulation to a file.

[TRIANGULATION\_QUAD](../../cpp_src/triangulation_quad/triangulation_quad.html),
a C++ program which estimates the integral of a function over a
triangulated region.

[TRIANGULATION\_QUALITY](../../cpp_src/triangulation_quality/triangulation_quality.html),
a C++ program which reads data defining a triangulation and computes a
number of quality measures.

[TRIANGULATION\_RCM](../../cpp_src/triangulation_rcm/triangulation_rcm.html),
a C++ program which reads data defining a triangulation, determines an
ordering of the nodes that will reduce the bandwidth of the adjacency
matrix, and writes the new triangulation information to a file.

[TRIANGULATION\_REFINE](../../cpp_src/triangulation_refine/triangulation_refine.html),
a C++ program which reads data defining a triangulation, replaces each
triangle by four congruent smaller ones, and writes the new
triangulation information to a file.

[TRIANGULATION\_TRIANGLE\_NEIGHBORS](../../cpp_src/triangulation_triangle_neighbors/triangulation_triangle_neighbors.html),
a C++ program which reads data defining a triangulation, determines the
neighboring triangles of each triangle, and writes that information to a
file.

### References: {#references align="center"}

1.  Franz Aurenhammer,\
    Voronoi diagrams - a study of a fundamental geometric data
    structure,\
    ACM Computing Surveys,\
    Volume 23, Number 3, September 1991, pages 345-405.
2.  Paul Bratley, Bennett Fox, Linus Schrage,\
    A Guide to Simulation,\
    Second Edition,\
    Springer, 1987,\
    ISBN: 0387964673.
3.  Marc deBerg, Marc Krevald, Mark Overmars, Otfried Schwarzkopf,\
    Computational Geometry,\
    Springer, 2000,\
    ISBN: 3-540-65620-0.
4.  Barry Joe,\
    GEOMPACK - a software package for the generation of meshes using
    geometric algorithms,\
    Advances in Engineering Software,\
    Volume 13, 1991, pages 325-331.
5.  Albert Nijenhuis, Herbert Wilf,\
    Combinatorial Algorithms for Computers and Calculators,\
    Second Edition,\
    Academic Press, 1978,\
    ISBN: 0-12-519260-6,\
    LC: QA164.N54.
6.  Atsuyuki Okabe, Barry Boots, Kokichi Sugihara, Sung Nok Chiu,\
    Spatial Tessellations: Concepts and Applications of Voronoi
    Diagrams,\
    Second Edition,\
    Wiley, 2000,\
    ISBN: 0-471-98635-6,\
    LC: QA278.2.O36.
7.  Joseph ORourke,\
    Computational Geometry,\
    Second Edition,\
    Cambridge, 1998,\
    ISBN: 0521649765,\
    LC: QA448.D38.
8.  Per-Olof Persson, Gilbert Strang,\
    A Simple Mesh Generator in MATLAB,\
    SIAM Review,\
    Volume 46, Number 2, June 2004, pages 329-345.

### Source Code: {#source-code align="center"}

-   [triangulation.cpp](triangulation.cpp), the source code.
-   [triangulation.hpp](triangulation.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [triangulation\_prb.cpp](triangulation_prb.cpp), a sample calling
    program.
-   [triangulation\_prb\_output.txt](triangulation_prb_output.txt), the
    output file.
-   [ns\_triangulation.png](ns_triangulation.png), a PNG image of a tiny
    triangulation used for the Navier Stokes calculations.
-   [triangulation\_order3\_plot.png](triangulation_order3_plot.png), a
    PNG image of an order 3 triangulation.
-   [triangulation\_order3\_plot2.png](triangulation_order3_plot2.png),
    a [PNG](../../data/png/png.html) image of a second order 3
    triangulation.
-   [triangulation\_order6\_plot.png](triangulation_order6_plot.png), a
    [PNG](../../data/png/png.html) image of an order 6 triangulation.

### List of Routines: {#list-of-routines align="center"}

-   **ALPHA\_MEASURE** determines the triangulated pointset quality
    measure ALPHA.
-   **ANGLE\_RAD\_2D** returns the angle in radians swept out between
    two rays in 2D.
-   **ARC\_COSINE** computes the arc cosine function, with argument
    truncation.
-   **AREA\_MEASURE** determines the area ratio quality measure.
-   **BANDWIDTH** determines the bandwidth associated with the finite
    element mesh.
-   **DELAUNAY\_SWAP\_TEST** performs the Delaunay swap test.
-   **DIAEDG** chooses a diagonal edge.
-   **GET\_SEED** returns a random seed for the random number generator.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the smaller of two I4's.
-   **I4\_MODP** returns the nonnegative remainder of I4 division.
-   **I4\_POWER** returns the value of I\^J.
-   **I4\_SIGN** returns the sign of an I4.
-   **I4\_SWAP** switches two I4's.
-   **I4\_UNIFORM** returns a scaled pseudorandom I4.
-   **I4\_WRAP** forces an I4 to lie between given limits by wrapping.
-   **I4COL\_COMPARE** compares columns I and J of an I4COL.
-   **I4COL\_SORT\_A** ascending sorts an I4COL.
-   **I4COL\_SORTED\_UNIQUE\_COUNT** counts unique elements in an I4COL.
-   **I4COL\_SWAP** swaps two columns of an I4COL.
-   **I4I4\_SORT\_A** ascending sorts a pair of I4's.
-   **I4MAT\_TRANSPOSE\_PRINT** prints an I4MAT, transposed.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an I4MAT,
    transposed.
-   **I4VEC\_HEAP\_D** reorders an I4VEC into a descending heap.
-   **I4VEC\_INDICATOR\_NEW** sets an I4VEC to the indicator vector.
-   **I4VEC\_MIN** returns the value of the minimum element in an I4VEC.
-   **I4VEC\_PRINT** prints an I4VEC.
-   **I4VEC\_REVERSE** reverses the elements of an I4VEC.
-   **I4VEC\_SORT\_HEAP\_A** ascending sorts an I4VEC using heap sort.
-   **I4VEC\_SORTED\_UNIQUE** finds unique elements in a sorted I4VEC.
-   **I4VEC2\_COMPARE** compares pairs of integers stored in two
    vectors.
-   **I4VEC2\_SORT\_A** ascending sorts a vector of pairs of integers.
-   **I4VEC2\_SORTED\_UNIQUE** keeps the unique elements in a array of
    pairs of integers.
-   **LRLINE** determines where a point lies in relation to a directed
    line.
-   **LVEC\_PRINT** prints a logical vector.
-   **NODE\_MERGE** detects nodes that should be merged.
-   **NS\_ADJ\_COL\_SET** sets the COL array in a Navier Stokes
    triangulation.
-   **NS\_ADJ\_COUNT** counts adjacencies in a Navier Stokes
    triangulation.
-   **NS\_ADJ\_INSERT** inserts an adjacency into a compressed column
    adjacency matrix.
-   **NS\_ADJ\_ROW\_SET** sets the Navier Stokes sparse compressed
    column row indices.
-   **PERM\_CHECK** checks that a vector represents a permutation.
-   **PERM\_INVERSE** inverts a permutation "in place".
-   **POINTS\_DELAUNAY\_NAIVE\_2D** computes the Delaunay triangulation
    in 2D.
-   **POINTS\_HULL\_2D** computes the convex hull of a set of nodes in
    2D.
-   **POINTS\_POINT\_NEAR\_NAIVE\_ND** finds the nearest point to a
    given point in ND.
-   **Q\_MEASURE** determines the triangulated pointset quality
    measure Q.
-   **QUAD\_CONVEX\_RANDOM** returns a random convex quadrilateral.
-   **R4\_ABS** returns the absolute value of an R4.
-   **R4\_NINT** returns the nearest integer to an R4.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_EPSILON** returns the roundoff unit for R8 arithmetic.
-   **R8\_HUGE** returns the largest legal R8.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_MIN** returns the minimum of two R8's.
-   **R8\_NINT** returns the nearest integer to an R8.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **R82VEC\_PERMUTE** permutes an R82VEC in place.
-   **R82VEC\_SORT\_HEAP\_INDEX\_A** does an indexed heap ascending sort
    of an R82VEC.
-   **R8MAT\_PRINT** prints an R8MAT, with an optional title.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8MAT\_TRANSPOSE\_PRINT** prints an R8MAT, transposed.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **R8MAT\_UNIFORM\_01** returns a unit pseudorandom R8MAT.
-   **R8TRIS2** constructs a Delaunay triangulation of 2D vertices.
-   **R8VEC\_BRACKET** searches a sorted array for successive brackets
    of a value.
-   **R8VEC\_MAX** returns the value of the maximum element in an R8VEC.
-   **R8VEC\_MIN** returns the value of the minimum element in an R8VEC.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **SORT\_HEAP\_EXTERNAL** externally sorts a list of items into
    ascending order.
-   **SWAPEC** swaps diagonal edges until all triangles are Delaunay.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TRIANGLE\_ANGLES\_2D** computes the angles of a triangle in 2D.
-   **TRIANGLE\_AREA\_2D** computes the area of a triangle in 2D.
-   **TRIANGLE\_CIRCUMCENTER\_2D** computes the circumcenter of a
    triangle in 2D.
-   **TRIANGLE\_ORDER3\_PHYSICAL\_TO\_REFERENCE** maps physical points
    to reference points.
-   **TRIANGLE\_ORDER3\_REFERENCE\_TO\_PHYSICAL** maps reference points
    to physical points.
-   **TRIANGLE\_ORDER6\_PHYSICAL\_TO\_REFERENCE** maps a physical point
    to a reference point.
-   **TRIANGLE\_ORDER6\_REFERENCE\_TO\_PHYSICAL** maps reference points
    to physical points.
-   **TRIANGLE\_REFERENCE\_SAMPLE** returns random points in the
    reference triangle.
-   **TRIANGLE\_SAMPLE** returns random points in a triangle.
-   **TRIANGULATION\_DELAUNAY\_DISCREPANCY** reports if a triangulation
    is Delaunay.
-   **TRIANGULATION\_ORDER3\_NEIGHBOR\_TRIANGLES** determines triangle
    neighbors.
-   **TRIANGULATION\_NODE\_ORDER** determines the order of nodes in a
    triangulation.
-   **TRIANGULATION\_ORDER3\_ADJ\_COUNT** counts adjacencies in a
    triangulation.
-   **TRIANGULATION\_ORDER3\_ADJ\_SET** sets adjacencies in a
    triangulation.
-   **TRIANGULATION\_ORDER3\_ADJ\_SET2** sets adjacencies in a
    triangulation.
-   **TRIANGULATION\_ORDER3\_BOUNDARY\_EDGE\_COUNT** counts the boundary
    edges.
-   **TRIANGULATION\_ORDER3\_BOUNDARY\_EDGE\_COUNT\_EULER** counts
    boundary edges.
-   **TRIANGULATION\_ORDER3\_BOUNDARY\_NODE** indicates nodes on the
    boundary.
-   **TRIANGULATION\_ORDER3\_CHECK** makes some simple checks on a
    triangulation.
-   **TRIANGULATION\_ORDER3\_EDGE\_CHECK** checks the edges of a
    triangulation.
-   **TRIANGULATION\_ORDER3\_EXAMPLE1** sets up a sample triangulation.
-   **TRIANGULATION\_ORDER3\_EXAMPLE1\_SIZE** sets sizes for a sample
    triangulation.
-   **TRIANGULATION\_ORDER3\_EXAMPLE2** sets up a sample triangulation.
-   **TRIANGULATION\_ORDER3\_EXAMPLE2\_SIZE** sets sizes for a sample
    triangulation.
-   **TRIANGULATION\_ORDER3\_NEIGHBOR** determines a neighbor of a given
    triangle.
-   **TRIANGULATION\_ORDER3\_NEIGHBOR\_NODES** determines node
    neighbors.
-   **TRIANGULATION\_ORDER3\_NEIGHBOR\_NODES\_PRINT** prints a node
    neighbor array.
-   **TRIANGULATION\_ORDER3\_PLOT** plots a triangulation of a set of
    nodes.
-   **TRIANGULATION\_ORDER3\_PRINT** prints information defining a
    triangulation.
-   **TRIANGULATION\_ORDER3\_QUAD** approximates an integral over a
    triangulation.
-   **TRIANGULATION\_ORDER3\_REFINE\_COMPUTE** computes a refined order
    3 triangulation.
-   **TRIANGULATION\_ORDER3\_REFINE\_SIZE** sizes a refined order 3
    triangulation.
-   **TRIANGULATION\_ORDER3\_SAMPLE** returns random points in a
    triangulation.
-   **TRIANGULATION\_ORDER4\_PLOT** plots a 4-node triangulation.
-   **TRIANGULATION\_ORDER6\_ADJ\_COUNT** counts adjacencies in a
    triangulation.
-   **TRIANGULATION\_ORDER6\_ADJ\_SET** sets adjacencies in a
    triangulation.
-   **TRIANGULATION\_ORDER6\_BOUNDARY\_EDGE\_COUNT** counts the boundary
    edges.
-   **TRIANGULATION\_ORDER6\_BOUNDARY\_EDGE\_COUNT\_EULER** counts
    boundary edges.
-   **TRIANGULATION\_ORDER6\_BOUNDARY\_NODE** indicates nodes on the
    boundary.
-   **TRIANGULATION\_ORDER6\_EXAMPLE1** sets up a sample triangulation.
-   **TRIANGULATION\_ORDER6\_EXAMPLE1\_SIZE** sets sizes for a sample
    triangulation.
-   **TRIANGULATION\_ORDER6\_EXAMPLE2** sets up a sample triangulation.
-   **TRIANGULATION\_ORDER6\_EXAMPLE2\_SIZE** sets sizes for a sample
    triangulation.
-   **TRIANGULATION\_ORDER6\_NEIGHBOR** determines a neighbor of a given
    triangle.
-   **TRIANGULATION\_ORDER6\_PLOT** plots a 6-node triangulation of a
    set of nodes.
-   **TRIANGULATION\_ORDER6\_PRINT** prints information defining a
    triangulation.
-   **TRIANGULATION\_ORDER6\_REFINE\_COMPUTE** computes a refined order
    6 triangulation.
-   **TRIANGULATION\_ORDER6\_REFINE\_SIZE** sizes a refined order 6
    triangulation.
-   **TRIANGULATION\_ORDER6\_TO\_ORDER3** linearizes a quadratic
    triangulation.
-   **TRIANGULATION\_ORDER6\_VERTEX\_COUNT** counts vertex nodes in a
    triangulation.
-   **TRIANGULATION\_SEARCH\_DELAUNAY** searches a triangulation for a
    point.
-   **TRIANGULATION\_SEARCH\_NAIVE** naively searches a triangulation
    for a point.
-   **VBEDG** determines which boundary edges are visible to a point.
-   **VORONOI\_POLYGON\_AREA** computes the area of a Voronoi polygon.
-   **VORONOI\_POLYGON\_CENTROID\_2D** computes the centroid of a
    Voronoi polygon.
-   **VORONOI\_POLYGON\_VERTICES\_2D** computes the vertices of a
    Voronoi polygon.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised 11 September 2009.*
