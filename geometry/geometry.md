GEOMETRY\
Geometric Calculations {#geometry-geometric-calculations align="center"}
======================

------------------------------------------------------------------------

**GEOMETRY** is a C++ library which performs certain geometric
calculations in 2, 3 and N space.

These calculations include angles, areas, containment, distances,
intersections, lengths, and volumes.

Some geometric objects can be described in a variety of ways. For
instance, a line has implicit, explicit and parametric representations.
The names of routines often will specify the representation used, and
there are routines to convert from one representation to another.

Another useful task is the delineation of a standard geometric object.
For instance, there is a routine that will return the location of the
vertices of an octahedron, and others to produce a series of "equally
spaced" points on a circle, ellipse, sphere, or within the interior of a
triangle.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**GEOMETRY** is available in [a C
version](../../c_src/geometry/geometry.md) and [a C++
version](../../master/geometry/geometry.md) and [a FORTRAN90
version](../../f_src/geometry/geometry.md) and [a MATLAB
version](../../m_src/geometry/geometry.md) and [a Python
version](../../py_src/geometry/geometry.md).

### Related Programs: {#related-programs align="center"}

[GEOMPACK](../../master/geompack/geompack.md), a C++ library which
computes the Delaunay triangulation and Voronoi diagram of 2D data.

[POLYGON\_MOMENTS](../../master/polygon_moments/polygon_moments.md),
a C++ library which computes arbitrary moments of a polygon.

[TABLE\_DELAUNAY](../../master/table_delaunay/table_delaunay.md), a
C++ program which reads a file of 2d point coordinates and computes the
Delaunay triangulation.

[TET\_MESH](../../master/tet_mesh/tet_mesh.md), a C++ library which
defines and analyzes tetrahedral meshes.

[TETRAHEDRON\_PROPERTIES](../../master/tetrahedron_properties/tetrahedron_properties.md),
a C++ program which computes properties of a tetrahedron whose vertex
coordinates are read from a file.

[TETRAHEDRONS](../../datasets/tetrahedrons/tetrahedrons.md), a dataset
directory which contains examples of tetrahedrons;

[TRIANGLES](../../datasets/triangles/triangles.md), a dataset
directory which contains examples of triangles;

[TRIANGULATE](../../c_src/triangulate/triangulate.md), a C program
which triangulates a (possibly nonconvex) polygon.

[TRIANGULATION](../../master/triangulation/triangulation.md), a C++
library which defines and analyzes triangulations.

[TRIANGULATION\_DISPLAY\_OPENGL](../../master/triangulation_display_opengl/triangulation_display_opengl.md),
a C++ program which reads files defining a triangulation and displays an
image using Open GL.

[TRIANGULATION\_TRIANGLE\_NEIGHBORS](../../master/triangulation_triangle_neighbors/triangulation_triangle_neighbors.md),
a C++ program which reads data defining a triangulation, determines the
neighboring triangles of each triangle, and writes that information to a
file.

### Reference: {#reference align="center"}

1.  Gerard Bashein, Paul Detmer,\
    Centroid of a Polygon,\
    in Graphics Gems IV,\
    edited by Paul Heckbert,\
    AP Professional, 1994,\
    ISBN: 0123361559,\
    LC: T385.G6974.
2.  SF Bockman,\
    Generalizing the Formula for Areas of Polygons to Moments,\
    American Mathematical Society Monthly,\
    Volume 96, Number 2, February 1989, pages 131-132.
3.  Adrian Bowyer, John Woodwark,\
    A Programmer's Geometry,\
    Butterworths, 1983,\
    ISBN: 0408012420.
4.  Paulo Cezar Pinto Carvalho, Paulo Roma Cavalcanti,\
    Point in Polyhedron Testing Using Spherical Polygons,\
    in Graphics Gems V,\
    edited by Alan Paeth,\
    Academic Press, 1995,\
    ISBN: 0125434553,\
    LC: T385.G6975.
5.  Daniel Cohen,\
    Voxel Traversal along a 3D Line,\
    in Graphics Gems IV,\
    edited by Paul Heckbert,\
    AP Professional, 1994,\
    ISBN: 0123361559,\
    LC: T385.G6974.
6.  Thomas Cormen, Charles Leiserson, Ronald Rivest,\
    Introduction to Algorithms,\
    MIT Press, 2001,\
    ISBN: 0262032937,\
    LC: QA76.C662.
7.  Marc deBerg, Marc Krevald, Mark Overmars, Otfried Schwarzkopf,\
    Computational Geometry,\
    Springer, 2000,\
    ISBN: 3-540-65620-0,\
    LC: QA448.D38.C65.
8.  Jack Dongarra, Jim Bunch, Cleve Moler, Pete Stewart,\
    LINPACK User's Guide,\
    SIAM, 1979,\
    ISBN13: 978-0-898711-72-1,\
    LC: QA214.L56.
9.  James Foley, Andries vanDam, Steven Feiner, John Hughes,\
    Computer Graphics, Principles and Practice,\
    Second Edition,\
    Addison Wesley, 1995,\
    ISBN: 0201848406,\
    LC: T385.C5735.
10. Martin Gardner,\
    The Mathematical Carnival,\
    Knopf, 1975,\
    ISBN: 0394494067,\
    LC: QA95.G286.
11. Priamos Georgiades,\
    Signed Distance From Point To Plane,\
    in Graphics Gems III,\
    edited by David Kirk,\
    Academic Press, 1992,\
    ISBN: 0124096735,\
    LC: T385.G6973.
12. Branko Gruenbaum, Geoffrey Shephard,\
    Pick's Theorem,\
    The American Mathematical Monthly,\
    Volume 100, Number 2, February 1993, pages 150-161.
13. John Harris, Horst Stocker,\
    Handbook of Mathematics and Computational Science,\
    Springer, 1998,\
    ISBN: 0-387-94746-9,\
    LC: QA40.S76.
14. Barry Joe,\
    GEOMPACK - a software package for the generation of meshes using
    geometric algorithms,\
    Advances in Engineering Software,\
    Volume 13, 1991, pages 325-331.
15. Anwei Liu, Barry Joe,\
    Quality Local Refinement of Tetrahedral Meshes Based on
    8-Subtetrahedron Subdivision,\
    Mathematics of Computation,\
    Volume 65, Number 215, July 1996, pages 1183-1200.
16. Jack Kuipers,\
    Quaternions and Rotation Sequences,\
    Princeton, 1998,\
    ISBN: 0691102988,\
    LC: QA196.K85.
17. Robert Miller,\
    Computing the Area of a Spherical Polygon,\
    in Graphics Gems IV,\
    edited by Paul Heckbert,\
    Academic Press, 1994,\
    ISBN: 0123361559,\
    LC: T385.G6974.
18. Albert Nijenhuis, Herbert Wilf,\
    Combinatorial Algorithms for Computers and Calculators,\
    Second Edition,\
    Academic Press, 1978,\
    ISBN: 0-12-519260-6,\
    LC: QA164.N54.
19. Atsuyuki Okabe, Barry Boots, Kokichi Sugihara, Sung Nok Chiu,\
    Spatial Tesselations: Concepts and Applications of Voronoi
    Diagrams,\
    Second Edition,\
    Wiley, 2000,\
    , ISBN: 0-471-98635-6,\
    LC: QA278.2.O36.
20. Joseph ORourke,\
    Computational Geometry,\
    Second Edition,\
    Cambridge, 1998,\
    ISBN: 0521649765,\
    LC: QA448.D38.
21. Edward Saff, Arno Kuijlaars,\
    Distributing Many Points on a Sphere,\
    The Mathematical Intelligencer,\
    Volume 19, Number 1, 1997, pages 5-11.
22. Philip Schneider, David Eberly,\
    Geometric Tools for Computer Graphics,\
    Elsevier, 2002,\
    ISBN: 1558605940,\
    LC: T385.S334.
23. Peter Schorn, Frederick Fisher,\
    Testing the Convexity of a Polygon,\
    in Graphics Gems IV,\
    edited by Paul Heckbert,\
    AP Professional, 1994,\
    ISBN: 0123361559,\
    LC: T385.G6974.
24. Moshe Shimrat,\
    Algorithm 112: Position of Point Relative to Polygon,\
    Communications of the ACM,\
    Volume 5, Number 8, August 1962, page 434.
25. Kenneth Stephenson,\
    Introduction to Circle Packing, The Theory of Discrete Analytic
    Functions,\
    Cambridge, 2005,\
    ISBN: 0521823560,\
    LC: QA640.7S74.
26. Allen VanGelder,\
    Efficient Computation of Polygon Area and Polyhedron Volume,\
    in Graphics Gems V,\
    edited by Alan Paeth,\
    AP Professional, 1995,\
    ISBN: 0125434553,\
    LC: T385.G6975.
27. Daniel Zwillinger, Steven Kokoska,\
    Standard Probability and Statistical Tables,\
    CRC Press, 2000,\
    ISBN: 1-58488-059-7,\
    LC: QA273.3.Z95.

### Source Code: {#source-code align="center"}

-   [geometry.cpp](geometry.cpp), the source code.
-   [geometry.hpp](geometry.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [geometry\_prb.cpp](geometry_prb.cpp), a sample calling program.
-   [geometry\_prb\_output.txt](geometry_prb_output.txt), the output
    file.

### List of Routines: {#list-of-routines align="center"}

-   **ANGLE\_BOX\_2D** "boxes" an angle defined by three points in 2D.
-   **ANGLE\_CONTAINS\_RAY\_2D** determines if an angle contains a ray,
    in 2D.
-   **ANGLE\_DEG\_2D** returns the angle in degrees swept out between
    two rays in 2D.
-   **ANGLE\_HALF\_2D** finds half an angle in 2D.
-   **ANGLE\_RAD\_2D** returns the angle in radians swept out between
    two rays in 2D.
-   **ANGLE\_RAD\_3D** returns the angle between two vectors in 3D.
-   **ANGLE\_RAD\_ND** returns the angle between two vectors in ND.
-   **ANGLE\_TURN\_2D** computes a turning angle in 2D.
-   **ANGLEI\_DEG\_2D** returns the interior angle in degrees between
    two rays in 2D.
-   **ANGLEI\_RAD\_2D** returns the interior angle in radians between
    two rays in 2D.
-   **ANNULUS\_AREA\_2D** computes the area of a circular annulus in 2D.
-   **ANNULUS\_SECTOR\_AREA\_2D** computes the area of an annular sector
    in 2D.
-   **ANNULUS\_SECTOR\_CENTROID\_2D** computes the centroid of an
    annular sector in 2D.
-   **r8\_atan** computes the inverse tangent of the ratio Y / X.
-   **BALL\_UNIT\_SAMPLE\_2D** picks a random point in the unit ball in
    2D.
-   **BALL\_UNIT\_SAMPLE\_3D** picks a random point in the unit ball in
    3D.
-   **BALL\_UNIT\_SAMPLE\_ND** picks a random point in the unit ball in
    ND.
-   **BASIS\_MAP\_3D** computes the matrix which maps one basis to
    another.
-   **BOX\_01\_CONTAINS\_POINT\_2D** reports if a point is contained in
    the unit box in 2D.
-   **BOX\_01\_CONTAINS\_POINT\_ND** reports if a point is contained in
    the unit box in ND.
-   **BOX\_CONTAINS\_POINT\_2D** reports if a point is contained in a
    box in 2D.
-   **BOX\_CONTAINS\_POINT\_ND** reports if a point is contained in a
    box in ND.
-   **BOX\_RAY\_INT\_2D:** intersection ( box, ray ) in 2D.
-   **BOX\_SEGMENT\_CLIP\_2D** uses a box to clip a line segment in 2D.
-   **CIRCLE\_ARC\_POINT\_NEAR\_2D** : nearest point on a circular arc.
-   **CIRCLE\_AREA\_2D** computes the area of a circle in 2D.
-   **CIRCLE\_DIA2IMP\_2D** converts a diameter to an implicit circle in
    2D.
-   **CIRCLE\_EXP\_CONTAINS\_POINT\_2D** determines if an explicit
    circle contains a point in 2D.
-   **CIRCLE\_EXP2IMP\_2D** converts a circle from explicit to implicit
    form in 2D.
-   **CIRCLE\_IMP\_CONTAINS\_POINT\_2D** determines if an implicit
    circle contains a point in 2D.
-   **CIRCLE\_IMP\_LINE\_PAR\_INT\_2D:** ( implicit circle, parametric
    line ) intersection in 2D.
-   **CIRCLE\_IMP\_POINT\_DIST\_2D:** distance ( implicit circle, point
    ) in 2D.
-   **CIRCLE\_IMP\_POINT\_DIST\_SIGNED\_2D:** signed distance ( implicit
    circle, point ) in 2D.
-   **CIRCLE\_IMP\_POINT\_NEAR\_2D:** nearest ( implicit circle, point )
    in 2D.
-   **CIRCLE\_IMP\_POINTS\_2D** returns N equally spaced points on an
    implicit circle in 2D.
-   **CIRCLE\_IMP\_POINTS\_3D** returns points on an implicit circle in
    3D.
-   **CIRCLE\_IMP\_POINTS\_ARC\_2D** returns N points on an arc of an
    implicit circle in 2D.
-   **CIRCLE\_IMP\_PRINT\_2D** prints an implicit circle in 2D.
-   **CIRCLE\_IMP\_PRINT\_2D** prints an implicit circle in 3D.
-   **CIRCLE\_IMP2EXP\_2D** converts a circle from implicit to explicit
    form in 2D.
-   **CIRCLE\_LLR2IMP\_2D** converts a circle from LLR to implicit form
    in 2D.
-   **CIRCLE\_LUNE\_AREA\_2D** returns the area of a circular lune in
    2D.
-   **CIRCLE\_LUNE\_CENTROID\_2D** returns the centroid of a circular
    lune in 2D.
-   **CIRCLE\_PPR2IMP\_3D** converts a circle from PPR to implicit form
    in 3D.
-   **CIRCLE\_PPR2IMP\_2D** converts a circle from PPR to implicit form
    in 2D.
-   **CIRCLE\_SECTOR\_AREA\_2D** computes the area of a circular sector
    in 2D.
-   **CIRCLE\_SECTOR\_CENTROID\_2D** returns the centroid of a circular
    sector in 2D.
-   **CIRCLE\_SECTOR\_CONTAINS\_POINT\_2D** : is a point inside a
    circular sector?
-   **CIRCLE\_SECTOR\_PRINT\_2D** prints a circular sector in 2D.
-   **CIRCLE\_TRIANGLE\_AREA\_2D** returns the area of a circle triangle
    in 2D.
-   **CIRCLE\_TRIPLE\_ANGLE\_2D** returns an angle formed by three
    circles in 2D.
-   **CIRCLES\_IMP\_INT\_2D:** finds the intersection of two implicit
    circles in 2D.
-   **CONE\_AREA\_3D** computes the surface area of a right circular
    cone in 3D.
-   **CONE\_CENTROID\_3D** returns the centroid of a cone in 3D.
-   **CONE\_VOLUME\_3D** computes the volume of a right circular cone in
    3D.
-   **CONV3D** converts 3D data to a 2D projection.
-   **COS\_DEG** returns the cosine of an angle given in degrees.
-   **COT\_DEG** returns the cotangent of an angle given in degrees.
-   **COT\_RAD** returns the cotangent of an angle.
-   **CSC\_DEG** returns the cosecant of an angle given in degrees.
-   **CUBE\_SHAPE\_3D** describes a cube in 3D.
-   **CUBE\_SIZE\_3D** gives "sizes" for a cube in 3D.
-   **CYLINDER\_POINT\_DIST\_3D** determines the distance from a
    cylinder to a point in 3D.
-   **CYLINDER\_POINT\_DIST\_SIGNED\_3D:** signed distance from cylinder
    to point in 3D.
-   **CYLINDER\_POINT\_INSIDE\_3D** determines if a cylinder contains a
    point in 3D.
-   **CYLINDER\_POINT\_NEAR\_3D:** nearest point on a cylinder to a
    point in 3D.
-   **CYLINDER\_SAMPLE\_3D** samples a cylinder in 3D.
-   **CYLINDER\_VOLUME\_3D** determines the volume of a cylinder in 3D.
-   **DEGREES\_TO\_RADIANS** converts an angle from degrees to radians.
-   **DGE\_DET** computes the determinant of a matrix factored by
    SGE\_FA.
-   **DGE\_FA** factors a general matrix.
-   **DGE\_SL** solves a system factored by SGE\_FA.
-   **DIRECTION\_PERT\_3D** randomly perturbs a direction vector in 3D.
-   **DIRECTION\_UNIFORM\_2D** picks a random direction vector in 2D.
-   **DIRECTION\_UNIFORM\_3D** picks a random direction vector in 3D.
-   **DIRECTION\_UNIFORM\_ND** generates a random direction vector in
    ND.
-   **DISK\_POINT\_DIST\_3D** determines the distance from a disk to a
    point in 3D.
-   **DMS\_TO\_RADIANS** converts an angle from degrees/minutes/seconds
    to radians.
-   **DODEC\_SHAPE\_3D** describes a dodecahedron in 3D.
-   **DODEC\_SIZE\_3D** gives "sizes" for a dodecahedron in 3D.
-   **DUAL\_SHAPE\_3D** constructs the dual of a shape in 3D.
-   **DUAL\_SIZE\_3D** determines sizes for a dual of a shape in 3D.
-   **ELLIPSE\_AREA\_2D** returns the area of an ellipse in 2D.
-   **ELLIPSE\_POINT\_DIST\_2D** finds the distance from a point to an
    ellipse in 2D.
-   **ELLIPSE\_POINT\_NEAR\_2D** finds the nearest point on an ellipse
    in 2D.
-   **ELLIPSE\_POINTS\_2D** returns N points on an tilted ellipse in 2D.
-   **ELLIPSE\_POINTS\_ARC\_2D** returns N points on a tilted elliptical
    arc in 2D.
-   **ENORM0\_ND** computes the Euclidean norm of a (X-Y) in N space.
-   **GET\_SEED** returns a random seed for the random number generator.
-   **GLOB2LOC\_3D** converts from a global to a local coordinate system
    in 3D.
-   **HALFPLANE\_CONTAINS\_POINT\_2D** reports if a half-plane contains
    a point in 2d.
-   **HALFSPACE\_IMP\_TRIANGLE\_INT\_3D:** intersection ( implicit
    halfspace, triangle ) in 3D.
-   **HALFSPACE\_NORM\_TRIANGLE\_INT\_3D:** intersection ( normal
    halfspace, triangle ) in 3D.
-   **HALFSPACE\_TRIANGLE\_INT\_3D:** intersection ( halfspace, triangle
    ) in 3D.
-   **HAVERSINE** computes the haversine of an angle.
-   **HELIX\_SHAPE\_3D** computes points on a helix in 3D.
-   **HEXAGON\_AREA\_2D** returns the area of a regular hexagon in 2D.
-   **HEXAGON\_CONTAINS\_POINT\_2D** finds if a point is inside a
    hexagon in 2D.
-   **HEXAGON\_SHAPE\_2D** returns points on the unit regular hexagon in
    2D.
-   **HEXAGON\_UNIT\_AREA\_2D** returns the area of a unit regular
    hexagon in 2D.
-   **HEXAGON\_VERTICES\_2D** returns the vertices of the unit hexagon
    in 2D.
-   **I4\_DEDEKIND\_FACTOR** computes a function needed for a Dedekind
    sum.
-   **I4\_DEDEKIND\_SUM** computes the Dedekind sum of two I4's.
-   **I4\_FACTORIAL2** computes the double factorial function N!!
-   **I4\_GCD** finds the greatest common divisor of two I4's.
-   **I4\_LCM** computes the least common multiple of two I4's.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the smaller of two I4's.
-   **I4\_MODP** returns the nonnegative remainder of I4 division.
-   **I4\_SIGN** returns the sign of an I4.
-   **I4\_SWAP** switches two I4's.
-   **I4\_UNIFORM** returns a scaled pseudorandom I4.
-   **I4\_WRAP** forces an I4 to lie between given limits by wrapping.
-   **I4COL\_COMPARE** compares columns I and J of an I4COL
-   **I4COL\_FIND\_ITEM** searches an I4COL for a given value.
-   **I4COL\_FIND\_PAIR\_WRAP** wrap searches an I4COL for a pair of
    items.
-   **I4COL\_SORT\_A** ascending sorts the columns of an integer array.
-   **I4COL\_SORTED\_UNIQUE\_COUNT** counts unique elements in an ICOL
    array.
-   **I4COL\_SWAP** swaps two columns of an integer array.
-   **I4MAT\_PRINT** prints an I4MAT, with an optional title.
-   **I4MAT\_PRINT\_SOME** prints some of an I4MAT.
-   **I4MAT\_TRANSPOSE\_PRINT** prints an I4MAT, transposed.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an I4MAT,
    transposed.
-   **I4ROW\_COMPARE** compares two rows of an I4ROW.
-   **I4ROW\_SORT\_A** ascending sorts the rows of an I4ROW.
-   **I4ROW\_SWAP** swaps two rows of an I4ROW.
-   **I4VEC\_COPY** copies an I4VEC.
-   **I4VEC\_HEAP\_D** reorders an I4VEC into a descending heap.
-   **I4VEC\_INDICATOR\_NEW** sets an I4VEC to the indicator vector.
-   **I4VEC\_LCM** returns the least common multiple of an I4VEC.
-   **I4VEC\_PRINT** prints an I4VEC.
-   **I4VEC\_PRODUCT** multiplies the entries of an I4VEC.
-   **I4VEC\_REVERSE** reverses the elements of an I4VEC.
-   **I4VEC\_SORT\_HEAP\_A** ascending sorts an I4VEC using heap sort.
-   **I4VEC\_SORTED\_UNIQUE** finds unique elements in a sorted I4VEC.
-   **I4VEC\_UNIFORM\_NEW** returns a scaled pseudorandom I4VEC.
-   **I4VEC\_ZERO** zeroes an I4VEC.
-   **I4VEC2\_COMPARE** compares pairs of integers stored in two
    vectors.
-   **I4VEC2\_SORT\_A** ascending sorts a vector of pairs of integers.
-   **I4VEC2\_SORTED\_UNIQUE** finds unique elements in a sorted I4VEC2.
-   **ICOS\_SHAPE** describes a icosahedron.
-   **ICOS\_SIZE** gives "sizes" for an icosahedron.
-   **LINE\_EXP\_IS\_DEGENERATE\_ND** finds if an explicit line is
    degenerate in ND.
-   **LINE\_EXP\_NORMAL\_2D** computes the unit normal vector to a line
    in 2D.
-   **LINE\_EXP\_PERP\_2D** computes a line perpendicular to a line and
    through a point.
-   **LINE\_EXP\_POINT\_DIST\_2D:** distance ( explicit line, point ) in
    2D.
-   **LINE\_EXP\_POINT\_DIST\_3D:** distance ( explicit line, point ) in
    3D.
-   **LINE\_EXP\_POINT\_DIST\_SIGNED\_2D:** signed distance ( explicit
    line, point ) in 2D.
-   **LINE\_EXP\_POINT\_NEAR\_2D** computes the point on an explicit
    line nearest a point in 2D.
-   **LINE\_EXP\_POINT\_NEAR\_3D:** nearest point on explicit line to
    point in 3D.
-   **LINE\_EXP2IMP\_2D** converts an explicit line to implicit form in
    2D.
-   **LINE\_EXP2PAR\_2D** converts a line from explicit to parametric
    form in 2D.
-   **LINE\_EXP2PAR\_3D** converts an explicit line into parametric form
    in 3D.
-   **LINE\_IMP\_IS\_DEGENERATE\_2D** finds if an implicit point is
    degenerate in 2D.
-   **LINE\_IMP\_POINT\_DIST\_2D:** distance ( implicit line, point ) in
    2D.
-   **LINE\_IMP\_POINT\_DIST\_SIGNED\_2D:** signed distance ( implicit
    line, point ) in 2D.
-   **LINE\_IMP2EXP\_2D** converts an implicit line to explicit form in
    2D.
-   **LINE\_IMP2PAR\_2D** converts an implicit line to parametric form
    in 2D.
-   **LINE\_PAR\_POINT\_DIST\_2D:** distance ( parametric line, point )
    in 2D.
-   **LINE\_PAR\_POINT\_DIST\_3D:** distance ( parametric line, point )
    in 3D.
-   **LINE\_PAR\_POINT\_NEAR\_2D:** nearest point on parametric line to
    point in 2D.
-   **LINE\_PAR\_POINT\_DIST\_3D:** distance ( parametric line, point )
    in 3D.
-   **LINE\_PAR2EXP\_2D** converts a parametric line to explicit form in
    2D.
-   **LINE\_PAR2EXP\_2D** converts a parametric line to explicit form in
    3D.
-   **LINE\_PAR2IMP\_2D** converts a parametric line to implicit form in
    2D.
-   **LINES\_EXP\_ANGLE\_3D** finds the angle between two explicit lines
    in 3D.
-   **LINES\_EXP\_ANGLE\_ND** returns the angle between two explicit
    lines in ND.
-   **LINES\_EXP\_DIST\_3D** computes the distance between two explicit
    lines in 3D.
-   **LINES\_EXP\_DIST\_3D\_2** computes the distance between two
    explicit lines in 3D.
-   **LINES\_EXP\_EQUAL\_2D** determines if two explicit lines are equal
    in 2D.
-   **LINES\_EXP\_INT\_2D** determines where two explicit lines
    intersect in 2D.
-   **LINES\_EXP\_NEAR\_3D** computes nearest points on two explicit
    lines in 3D.
-   **LINES\_EXP\_PARALLEL\_2D** determines if two lines are parallel in
    2D.
-   **LINES\_EXP\_PARALLEL\_3D** determines if two lines are parallel in
    3D.
-   **LINES\_IMP\_ANGLE\_2D** finds the angle between two implicit lines
    in 2D.
-   **LINES\_IMP\_DIST\_2D** determines the distance between two
    implicit lines in 2D.
-   **LINES\_IMP\_INT\_2D** determines where two implicit lines
    intersect in 2D.
-   **LINES\_PAR\_ANGLE\_2D** finds the angle between two parametric
    lines in 2D.
-   **LINES\_PAR\_ANGLE\_3D** finds the angle between two parametric
    lines in 3D.
-   **LINES\_PAR\_DIST\_3D** finds the distance between two parametric
    lines in 3D.
-   **LINES\_PAR\_INT\_2D** determines where two parametric lines
    intersect in 2D.
-   **LOC2GLOB\_3D** converts from a local to global coordinate system
    in 3D.
-   **LVEC\_PRINT** prints a logical vector.
-   **MINABS** finds a local minimum of F(X) = A \* abs ( X ) + B.
-   **MINQUAD** finds a local minimum of F(X) = A \* X\^2 + B \* X + C.
-   **OCTAHEDRON\_SHAPE\_3D** describes an octahedron in 3D.
-   **OCTAHEDRON\_SIZE\_3D** returns size information for an octahedron
    in 3D.
-   **PARABOLA\_EX** finds the extremal point of a parabola determined
    by three points.
-   **PARABOLA\_EX2** finds the extremal point of a parabola determined
    by three points.
-   **PARALLELOGRAM\_AREA\_2D** computes the area of a parallelogram in
    2D.
-   **PARALLELOGRAM\_AREA\_3D** computes the area of a parallelogram in
    3D.
-   **PARALLELOGRAM\_CONTAINS\_POINT\_2D** determines if a point is
    inside a parallelogram in 2D.
-   **PARALLELOGRAM\_CONTAINS\_POINT\_3D** determines if a point is
    inside a parallelogram in 3D.
-   **PARALLELOGRAM\_POINT\_DIST\_3D:** distance ( parallelogram, point
    ) in 3D.
-   **PARALLELEPIPED\_CONTAINS\_POINT\_3D** determines if a point is
    inside a parallelepiped in 3D.
-   **PARALLELEPIPED\_POINT\_DIST\_3D:** distance ( parallelepiped,
    point ) in 3D.
-   **PERM\_CHECK** checks that a vector represents a permutation.
-   **PERM\_INV** inverts a permutation "in place".
-   **PLANE\_EXP\_GRID\_3D** computes points and lines making up a
    planar grid in 3D.
-   **PLANE\_EXP\_POINT\_DIST\_3D:** distance ( explicit plane, point )
    in 3D.
-   **PLANE\_EXP\_NORMAL\_3D** finds the normal to an explicit plane in
    3D.
-   **PLANE\_EXP\_PRO2** produces 2D coordinates of points that lie in a
    plane, in 3D.
-   **PLANE\_EXP\_PRO3** projects points orthographically onto a plane,
    in 3D.
-   **PLANE\_EXP\_PROJECT\_3D** projects points through a point onto a
    plane in 3D.
-   **PLANE\_EXP2IMP\_3D** converts an explicit plane to implicit form
    in 3D.
-   **PLANE\_EXP2NORMAL\_3D** converts an explicit plane to normal form
    in 3D.
-   **PLANE\_IMP\_IS\_DEGENERATE\_3D** is TRUE if an implicit plane is
    degenerate.
-   **PLANE\_IMP\_LINE\_PAR\_INT\_3D:** intersection ( implicit plane,
    parametric line ) in 3D.
-   **PLANE\_IMP\_POINT\_DIST\_3D:** distance ( point, implicit plane )
    in 3D.
-   **PLANE\_IMP\_POINT\_DIST\_SIGNED\_3D:** signed distance ( implicit
    plane, point) in 3
-   **PLANE\_IMP\_POINT\_NEAR\_3D:** nearest point on a implicit plane
    to a point in 3D.
-   **PLANE\_IMP\_SEGMENT\_NEAR\_3D:** nearest ( implicit plane, line
    segment ) in 3D
-   **PLANE\_IMP\_TRIANGLE\_INT\_3D:** intersection ( implicit plane,
    triangle ) in 3D.
-   **PLANE\_IMP\_TRIANGLE\_INT\_ADD\_3D** is a utility for
    PLANE\_IMP\_TRIANGLE\_INT\_3D.
-   **PLANE\_IMP\_TRIANGLE\_NEAR\_3D:** nearest ( implicit plane,
    triangle ) in 3D.
-   **PLANE\_IMP2EXP\_3D** converts an implicit plane to explicit form
    in 3D.
-   **PLANE\_IMP2NORMAL\_3D** converts an implicit plane to normal form
    in 3D.
-   **PLANE\_NORMAL\_BASIS\_3D** finds two perpendicular vectors in a
    plane in 3D.
-   **PLANE\_NORMAL\_LINE\_EXP\_INT\_3D:** intersection of plane and
    line in 3D.
-   **PLANE\_NORMAL\_QR\_TO\_XYZ:** QR\_TO\_XYZ coordinates for a normal
    form plane.
-   **PLANE\_NORMAL\_TETRAHEDRON\_INTERSECT** intersects a plane and a
    tetrahedron.
-   **PLANE\_NORMAL\_TRIANGLE\_INT\_3D:** intersection ( normal plane,
    triangle ) in 3D.
-   **PLANE\_NORMAL\_UNIFORM\_3D** generates a random normal plane in
    3D.
-   **PLANE\_NORMAL\_UNIFORM\_ND** generates a random normal plane in
    ND.
-   **PLANE\_NORMAL\_XYZ\_TO\_QR:** XYZ to QR coordinates for a normal
    form plane.
-   **PLANE\_NORMAL2EXP\_3D** converts a normal plane to explicit form
    in 3D.
-   **PLANE\_NORMAL2IMP\_3D** converts a normal form plane to implicit
    form in 3D.
-   **PLANES\_IMP\_ANGLE\_3D:** dihedral angle between implicit planes
    in 3D.
-   **POINTS\_AVOID\_POINT\_NAIVE\_2D** finds if a point is "far enough"
    from a set of points in 2D.
-   **POINTS\_BISECT\_LINE\_IMP\_2D** finds the implicit line bisecting
    the line between two points in 2D.
-   **POINTS\_BISECT\_LINE\_PAR\_2D** finds the parametric line
    bisecting the line between two points in 2D.
-   **POINTS\_CENTROID\_2D** computes the discrete centroid of a point
    set in 2D.
-   **POINTS\_COLIN\_2D** estimates the colinearity of 3 points in 2D.
-   **POINTS\_COLIN\_3D** estimates the colinearity of 3 points in 3D.
-   **POINTS\_DIST\_2D** finds the distance between two points in 2D.
-   **POINTS\_DIST\_3D** finds the distance between two points in 3D.
-   **POINTS\_DIST\_ND** finds the distance between two points in ND.
-   **POINTS\_HULL\_2D** computes the convex hull of a set of nodes in
    2D.
-   **POINTS\_PLOT** plots a pointset.
-   **POINTS\_POINT\_NEAR\_NAIVE\_2D** finds the nearest point to a
    given point in 2D.
-   **POINTS\_POINT\_NEAR\_NAIVE\_3D** finds the nearest point to a
    given point in 3D.
-   **POINTS\_POINT\_NEAR\_NAIVE\_ND** finds the nearest point to a
    given point in ND.
-   **POINTS\_POINTS\_NEAR\_NAIVE\_2D** finds the nearest point to given
    points in 2D.
-   **POINTS\_POINTS\_NEAR\_NAIVE\_3D** finds the nearest point to given
    points in 3D.
-   **POLAR\_TO\_XY** converts polar coordinates to XY coordinates.
-   **POLYGON\_1\_2D** integrates the function 1 over a polygon in 2D.
-   **POLYGON\_ANGLES\_2D** computes the interior angles of a polygon in
    2D.
-   **POLYGON\_AREA\_2D** computes the area of a polygon in 2D.
-   **POLYGON\_AREA\_2D\_2** computes the area of a polygon in 2D.
-   **POLYGON\_AREA\_3D** computes the area of a polygon in 3D.
-   **POLYGON\_AREA\_3D\_2** computes the area of a polygon in 3D.
-   **POLYGON\_CENTROID\_2D** computes the centroid of a polygon in 2D.
-   **POLYGON\_CENTROID\_2D\_2** computes the centroid of a polygon in
    2D.
-   **POLYGON\_CENTROID\_3D** computes the centroid of a polygon in 3D.
-   **POLYGON\_CONTAINS\_POINT\_2D** finds if a point is inside a simple
    polygon in 2D.
-   **POLYGON\_CONTAINS\_POINT\_2D\_2** finds if a point is inside a
    convex polygon in 2D.
-   **POLYGON\_DIAMETER\_2D** computes the diameter of a polygon in 2D.
-   **POLYGON\_EXPAND\_2D** expands a polygon in 2D.
-   **POLYGON\_INRAD\_DATA\_2D** determines polygonal data from its
    inner radius in 2D.
-   **POLYGON\_IS\_CONVEX** determines whether a polygon is convex in
    2D.
-   **POLYGON\_LATTICE\_AREA\_2D** computes the area of a lattice
    polygon in 2D.
-   **POLYGON\_NORMAL\_3D** computes the normal vector to a polygon in
    3D.
-   **POLYGON\_OUTRAD\_DATA\_2D** determines polygonal data from its
    outer radius in 2D.
-   **POLYGON\_SIDE\_DATA\_2D** determines polygonal data from its side
    length in 2D.
-   **POLYGON\_SOLID\_ANGLE\_3D** calculates the projected solid angle
    of a 3D plane polygon.
-   **POLYGON\_X\_2D** integrates the function X over a polygon in 2D.
-   **POLYGON\_Y\_2D** integrates the function Y over a polygon in 2D.
-   **POLYGON\_XX\_2D** integrates the function X\*X over a polygon in
    2D.
-   **POLYGON\_XY\_2D** integrates the function X\*Y over a polygon in
    2D.
-   **POLYGON\_YY\_2D** integrates the function Y\*Y over a polygon in
    2D.
-   **POLYHEDRON\_AREA\_3D** computes the surface area of a polyhedron
    in 3D.
-   **POLYHEDRON\_CENTROID\_3D** computes the centroid of a polyhedron
    in 3D.
-   **POLYHEDRON\_CONTAINS\_POINT\_3D** determines if a point is inside
    a polyhedron.
-   **POLYHEDRON\_VOLUME\_3D** computes the volume of a polyhedron in
    3D.
-   **POLYHEDRON\_VOLUME\_3D\_2** computes the volume of a polyhedron in
    3D.
-   **POLYLINE\_ARCLENGTH\_ND** computes the arclength of points on a
    polyline in ND.
-   **POLYLINE\_INDEX\_POINT\_ND** evaluates a polyline at a given
    arclength in ND.
-   **POLYLINE\_LENGTH\_ND** computes the length of a polyline in ND.
-   **POLYLINE\_POINTS\_ND** computes equally spaced points on a
    polyline in ND.
-   **POLYLOOP\_ARCLENGTH\_ND** computes the arclength of points on a
    polyloop in ND.
-   **POLYLOOP\_POINTS\_ND** computes equally spaced points on a
    polyloop in ND.
-   **PROVEC** projects a vector from M space into N space.
-   **PYRAMID\_VOLUME\_3D** computes the volume of a pyramid with square
    base in 3D.
-   **QUAD\_AREA\_2D** computes the area of a quadrilateral in 2D.
-   **QUAD\_AREA2\_2D** computes the area of a quadrilateral in 2D.
-   **QUAD\_AREA\_3D** computes the area of a quadrilateral in 3D.
-   **QUAD\_CONTAINS\_POINT\_2D** finds if a point is inside a convex
    quadrilateral in 2D.
-   **QUAD\_CONVEX\_RANDOM** returns a random convex quadrilateral.
-   **QUAD\_POINT\_DIST\_2D** finds the distance from a point to a
    quadrilateral in 2D.
-   **QUAD\_POINT\_DIST\_SIGNED\_2D:** signed distanct ( quadrilateral,
    point ) in 2D.
-   **QUAD\_POINT\_NEAR\_2D** computes the nearest point on a
    quadrilateral in 2D.
-   **QUAT\_CONJ** conjugates a quaternion.
-   **QUAT\_INV** inverts a quaternion.
-   **QUAT\_MUL** multiplies two quaternions.
-   **QUAT\_NORM** computes the norm of a quaternion.
-   **R4\_ABS** returns the absolute value of an R4.
-   **R4\_NINT** returns the nearest integer to an R4.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_ACOS** computes the arc cosine function, with argument
    truncation.
-   **R8\_ASIN** computes the arc sine function, with argument
    truncation.
-   **R8\_EPSILON** returns the R8 round off unit.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8\_MAX** returns the maximum of two R8s.
-   **R8\_MIN** returns the minimum of two R8's.
-   **R8\_MODP** returns the nonnegative remainder of R8 division.
-   **R8\_NINT** returns the nearest integer to an R8.
-   **R8\_NORMAL\_01** returns a unit pseudonormal R8.
-   **R8\_PI** returns the value of pi.
-   **R8\_SIGN** returns the "sign" of an R8.
-   **R8\_SIGN\_OPPOSITE\_STRICT** is TRUE if two R8's are strictly of
    opposite sign.
-   **R8\_SWAP** switches two R8s.
-   **R8\_UNIFORM** returns a scaled pseudorandom R8.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **R82VEC\_PART\_QUICK\_A** reorders an R82VEC as part of a quick
    sort.
-   **R82VEC\_PERMUTE** permutes an R82VEC in place.
-   **R82VEC\_PRINT** prints an R82VEC.
-   **R82VEC\_SORT\_HEAP\_INDEX\_A** does an indexed heap ascending sort
    of an R82VEC.
-   **R82VEC\_SORT\_QUICK\_A** ascending sorts an R82VEC using quick
    sort.
-   **R8MAT\_COPY** copies one R8MAT to another.
-   **R8MAT\_DET\_2D** computes the determinant of a 2 by 2 R8MAT.
-   **R8MAT\_DET\_3D** computes the determinant of a 3 by 3 R8MAT.
-   **R8MAT\_DET\_4D** computes the determinant of a 4 by 4 R8MAT.
-   **R8MAT\_DET\_5D** computes the determinant of a 5 by 5 R8MAT.
-   **R8MAT\_INVERSE\_2D** inverts a 2 by 2 R8MAT using Cramer's rule.
-   **R8MAT\_INVERSE\_3D** inverts a 3 by 3 R8MAT using Cramer's rule.
-   **R8MAT\_MV** multiplies a matrix times a vector.
-   **R8MAT\_PRINT** prints an R8MAT, with an optional title.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8MAT\_SOLVE** uses Gauss-Jordan elimination to solve an N by N
    linear system.
-   **R8MAT\_SOLVE\_2D** solves a 2 by 2 linear system using Cramer's
    rule.
-   **R8MAT\_TRANSPOSE\_PRINT** prints an R8MAT, transposed.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **R8MAT\_UNIFORM\_NEW** returns a scaled pseudorandom R8MAT.
-   **R8MAT\_UNIFORM\_01** returns a unit pseudorandom R8MAT.
-   **R8MAT\_UNIFORM\_01\_NEW** returns a unit pseudorandom R8MAT.
-   **R8VEC\_ANGLE\_3D** computes the angle between two vectors in 3D.
-   **R8VEC\_ANY\_NORMAL** returns some normal vector to V1.
-   **R8VEC\_BRACKET** searches a sorted R8VEC for successive brackets
    of a value.
-   **R8VEC\_COPY** copies an R8VEC.
-   **R8VEC\_CROSS\_PRODUCT\_2D** finds the cross product of a pair of
    R8VEC's in 2D.
-   **R8VEC\_CROSS\_PRODUCT\_AFFINE\_2D** finds the affine cross product
    in 2D.
-   **R8VEC\_CROSS\_PRODUCT\_3D** computes the cross product of two
    R8VEC's in 3D.
-   **R8VEC\_CROSS\_PRODUCT\_AFFINE\_3D** computes the affine cross
    product in 3D.
-   **R8VEC\_DISTANCE** returns the Euclidean distance between two
    R8VEC's.
-   **R8VEC\_DOT\_PRODUCT** computes the dot product of a pair of
    R8VEC's.
-   **R8VEC\_DOT\_PRODUCT\_AFFINE** computes the affine dot product.
-   **R8VEC\_EQ** is true two R8VEC's are equal.
-   **R8VEC\_GT** == ( A1 &gt; A2 ) for R8VEC's.
-   **R8VEC\_LT** == ( A1 &lt; A2 ) for R8VEC's.
-   **R8VEC\_MAX** returns the value of the maximum element in an R8VEC.
-   **R8VEC\_MEAN** returns the mean of an R8VEC.
-   **R8VEC\_MIN** returns the value of the minimum element in an R8VEC.
-   **R8VEC\_NEGATIVE\_STRICT:** all entries of R8VEC are strictly
    negative.
-   **R8VEC\_NORM** returns the L2 norm of an R8VEC.
-   **R8VEC\_NORM\_AFFINE** returns the affine L2 norm of an R8VEC.
-   **R8VEC\_NORMAL\_01\_NEW** returns a unit pseudonormal R8VEC.
-   **R8VEC\_NORMSQ** returns the squared L2 norm of an R8VEC.
-   **R8VEC\_NORMSQ\_AFFINE** returns the squared affine L2 norm of an
    R8VEC.
-   **R8VEC\_POSITIVE\_STRICT:** all entries of R8VEC are strictly
    positive.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC\_PRINT\_2D** prints a 2D vector.
-   **R8VEC\_PRINT\_3D** prints a 3D vector.
-   **R8VEC\_SCALAR\_TRIPLE\_PRODUCT** finds the scalar triple product
    in 3D.
-   **R8VEC\_SWAP** swaps the entries of two R8VEC's.
-   **R8VEC\_UNIFORM\_NEW** returns a scaled pseudorandom R8VEC.
-   **R8VEC\_UNIFORM\_01\_NEW** returns a unit pseudorandom R8VEC.
-   **R8VEC\_UNIFORM\_UNIT\_NEW** generates a random direction vector in
    ND.
-   **R8VEC\_VARIANCE** returns the variance of an R8VEC.
-   **R8VEC\_ZERO** zeroes an R8VEC.
-   **RADEC\_DISTANCE\_3D** - angular distance, astronomical units,
    sphere in 3D.
-   **RADEC\_TO\_XYZ** converts right ascension/declination to (X,Y,Z)
    coordinates.
-   **RADIANS\_TO\_DEGREES** converts an angle from radians to degrees.
-   **RADIANS\_TO\_DMS** converts an angle from radians to
    degrees/minutes/seconds.
-   **RANDOM\_INITIALIZE** initializes the RANDOM random number
    generator.
-   **ROTATION\_AXIS\_VECTOR\_3D** rotates a vector around an axis
    vector in 3D.
-   **ROTATION\_AXIS2MAT\_3D** converts a rotation from axis to matrix
    format in 3D.
-   **ROTATION\_AXIS2QUAT\_3D** converts a rotation from axis to
    quaternion format in 3D.
-   **ROTATION\_MAT\_VECTOR** applies a marix rotation to a vector in
    3d.
-   **ROTATION\_MAT2AXIS\_3D** converts a rotation from matrix to axis
    format in 3D.
-   **ROTATION\_MAT2QUAT\_3D** converts a rotation from matrix to
    quaternion format in 3D.
-   **ROTATION\_QUAT\_VECTOR** applies a quaternion rotation to a vector
    in 3d.
-   **ROTATION\_QUAT2AXIS\_3D** converts a rotation from quaternion to
    axis format in 3D.
-   **ROTATION\_QUAT2MAT\_3D** converts a rotation from quaternion to
    matrix format in 3D.
-   **RTP\_TO\_XYZ** converts (R,Theta,Phi) to (X,Y,Z) coordinates.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **SEC\_DEG** returns the secant of an angle given in degrees.
-   **SEGMENT\_CONTAINS\_POINT\_1D** reports if a line segment contains
    a point in 1D.
-   **SEGMENT\_CONTAINS\_POINT\_2D** reports if a line segment contains
    a point in 2D.
-   **SEGMENT\_POINT\_COORDS\_2D:** coordinates of a point on a line
    segment in 2D.
-   **SEGMENT\_POINT\_COORDS\_3D:** coordinates of a point on a line
    segment in 3D.
-   **SEGMENT\_POINT\_DIST\_2D:** distance ( line segment, point ) in
    2D.
-   **SEGMENT\_POINT\_DIST\_3D:** distance ( line segment, point ) in
    3D.
-   **SEGMENT\_POINT\_NEAR\_2D** finds the point on a line segment
    nearest a point in 2D.
-   **SEGMENT\_POINT\_NEAR\_3D** finds the point on a line segment
    nearest a point in 3D.
-   **SEGMENTS\_CURVATURE\_2D** computes the curvature of two line
    segments in 2D.
-   **SEGMENTS\_DIST\_2D** computes the distance between two line
    segments in 2D.
-   **SEGMENTS\_DIST\_3D** computes the distance between two line
    segments in 3D.
-   **SEGMENTS\_DIST\_3D\_OLD** computes the distance between two line
    segments in 3D.
-   **SEGMENTS\_INT\_1D** computes the intersection of two line segments
    in 1D.
-   **SEGMENTS\_INT\_2D** computes the intersection of two line segments
    in 2D.
-   **SHAPE\_POINT\_DIST\_2D:** distance ( regular shape, point ) in 2D.
-   **SHAPE\_POINT\_NEAR\_2D:** nearest point ( regular shape, point )
    in 2D.
-   **SHAPE\_PRINT\_3D** prints information about a polyhedron in 3D.
-   **SHAPE\_RAY\_INT\_2D:** intersection ( regular shape, ray ) in 2D.
-   **SIMPLEX\_LATTICE\_LAYER\_POINT\_NEXT:** next simplex lattice layer
    point.
-   **SIMPLEX\_LATTICE\_POINT\_NEXT** returns the next simplex lattice
    point.
-   **SIMPLEX\_UNIT\_LATTICE\_POINT\_ND:** count lattice points.
-   **SIMPLEX\_UNIT\_VOLUME\_ND** computes the volume of the unit
    simplex in ND.
-   **SIMPLEX\_VOLUME\_ND** computes the volume of a simplex in ND.
-   **SIN\_DEG** returns the sine of an angle given in degrees.
-   **SIN\_POWER\_INT** evaluates the sine power integral.
-   **SOCCER\_SHAPE\_3D** describes a truncated icosahedron in 3D.
-   **SOCCER\_SIZE\_3D** gives "sizes" for a truncated icosahedron in
    3D.
-   **SORT\_HEAP\_EXTERNAL** externally sorts a list of items into
    ascending order.
-   **SPHERE\_CAP\_AREA\_2D** computes the surface area of a spherical
    cap in 2D.
-   **SPHERE\_CAP\_AREA\_3D** computes the surface area of a spherical
    cap in 3D.
-   **SPHERE\_CAP\_AREA\_ND** computes the area of a spherical cap in
    ND.
-   **SPHERE\_CAP\_VOLUME\_2D** computes the volume of a spherical cap
    in 2D.
-   **SPHERE\_CAP\_VOLUME\_3D** computes the volume of a spherical cap
    in 3D.
-   **SPHERE\_CAP\_VOLUME\_ND** computes the volume of a spherical cap
    in ND.
-   **SPHERE\_DIA2IMP\_3D** converts a diameter to an implicit sphere in
    3D.
-   **SPHERE\_DISTANCE\_XYZ** computes great circle distances on a
    sphere.
-   **SPHERE\_DISTANCE1** computes great circle distances on a sphere.
-   **SPHERE\_DISTANCE2** computes great circle distances on a sphere.
-   **SPHERE\_DISTANCE3** computes great circle distances on a sphere.
-   **SPHERE\_EXP\_CONTAINS\_POINT\_3D** determines if an explicit
    sphere contains a point in 3D.
-   **SPHERE\_EXP\_POINT\_NEAR\_3D** finds the nearest point on an
    explicit sphere to a point in 3D.
-   **SPHERE\_EXP2IMP\_3D** converts a sphere from explicit to implicit
    form in 3D.
-   **SPHERE\_EXP2IMP\_ND** finds an N-dimensional sphere through N+1
    points.
-   **SPHERE\_IMP\_AREA\_3D** computes the surface area of an implicit
    sphere in 3D.
-   **SPHERE\_IMP\_AREA\_ND** computes the surface area of an implicit
    sphere in ND.
-   **SPHERE\_IMP\_CONTAINS\_POINT\_3D** determines if an implicit
    sphere contains a point in 3D.
-   **SPHERE\_IMP\_GRID\_ICOS\_SIZE** sizes an icosahedral grid on a
    sphere.
-   **SPHERE\_IMP\_GRIDFACES\_3D** produces a grid of triangles on an
    implicit sphere in 3D.
-   **SPHERE\_IMP\_LINE\_PROJECT\_3D** projects a line onto an implicit
    sphere in 3D.
-   **SPHERE\_IMP\_LOCAL2XYZ\_3D** converts local to XYZ coordinates on
    an implicit sphere in 3D.
-   **SPHERE\_IMP\_POINT\_NEAR\_3D** finds the nearest point on an
    implicit sphere to a point in 3D.
-   **SPHERE\_IMP\_POINT\_PROJECT\_3D** projects a point onto an
    implicit sphere, in 3D.
-   **SPHERE\_IMP\_VOLUME\_3D** computes the volume of an implicit
    sphere in 3D.
-   **SPHERE\_IMP\_VOLUME\_ND** computes the volume of an implicit
    sphere in ND.
-   **SPHERE\_IMP\_ZONE\_AREA\_3D** computes the surface area of a
    spherical zone in 3D.
-   **SPHERE\_IMP\_ZONE\_VOLUME\_3D** computes the volume of a spherical
    zone in 3D.
-   **SPHERE\_IMP2EXP\_3D** converts a sphere from implicit to explicit
    form in 3D.
-   **SPHERE\_K** computes a factor useful for spherical computations.
-   **SPHERE\_TRIANGLE\_ANGLES\_TO\_AREA** computes the area of a
    spherical triangle.
-   **SPHERE\_TRIANGLE\_CONTAINS\_POINT** determines if a spherical
    triangle contains a point.
-   **SPHERE\_TRIANGLE\_SIDES\_TO\_ANGLES** computes spherical triangle
    angles.
-   **SPHERE\_TRIANGLE\_VERTICES\_TO\_ANGLES** computes the angles of a
    spherical triangle.
-   **SPHERE\_TRIANGLE\_VERTICES\_TO\_AREA** computes the area of a
    spherical triangle.
-   **SPHERE\_TRIANGLE\_VERTICES\_TO\_CENTROID** gets a spherical
    triangle centroid.
-   **SPHERE\_TRIANGLE\_VERTICES\_TO\_ORIENTATION** seeks the
    orientation of a spherical triangle.
-   **SPHERE\_TRIANGLE\_VERTICES\_TO\_SIDES\_3D** computes spherical
    triangle sides.
-   **SPHERE\_UNIT\_AREA\_ND** computes the surface area of a unit
    sphere in ND.
-   **SPHERE\_UNIT\_AREA\_VALUES** returns some areas of the unit sphere
    in ND.
-   **SPHERE\_UNIT\_SAMPLE\_2D** picks a random point on the unit sphere
    (circle) in 2D.
-   **SPHERE\_UNIT\_SAMPLE\_3D** picks a random point on the unit sphere
    in 3D.
-   **SPHERE\_UNIT\_SAMPLE\_3D\_2** is a BAD method for sampling the
    unit sphere in 3D.
-   **SPHERE\_UNIT\_SAMPLE\_ND** picks a random point on the unit sphere
    in ND.
-   **SPHERE\_UNIT\_SAMPLE\_ND\_2** picks a random point on the unit
    sphere in ND.
-   **SPHERE\_UNIT\_SAMPLE\_ND\_3** picks a random point on the unit
    sphere in ND.
-   **SPHERE\_UNIT\_VOLUME\_ND** computes the volume of a unit sphere in
    ND.
-   **SPHERE\_UNIT\_VOLUME\_VALUES** returns some volumes of the unit
    sphere in ND.
-   **SPHERE01\_DISTANCE\_XYZ** computes great circle distances on a
    unit sphere.
-   **SPHERE01\_POLYGON\_AREA** returns the area of a spherical polygon.
-   **SPHERE01\_POLYGON\_AREA\_KARNEY** returns the area of a spherical
    polygon.
-   **SPHERE01\_TRIANGLE\_ANGLES\_TO\_AREA:** area of a spherical
    triangle on the unit sphere.
-   **SPHERE01\_TRIANGLE\_SIDES\_TO\_ANGLES:** angles of spherical
    triangle on unit sphere.
-   **SPHERE01\_TRIANGLE\_VERTICES\_TO\_ANGLES:** angles of spherical
    triangle on unit sphere.
-   **SPHERE01\_TRIANGLE\_VERTICES\_TO\_AREA:** area of a spherical
    triangle on unit sphere.
-   **SPHERE01\_TRIANGLE\_VERTICES\_TO\_CENTROID:** centroid of
    spherical triangle on unit sphere.
-   **SPHERE01\_TRIANGLE\_VERTICES\_TO\_MIDPOINTS** gets the midsides of
    a spherical triangle.
-   **SPHERE01\_TRIANGLE\_VERTICES\_TO\_SIDES\_3D:** sides of spherical
    triangle on unit sphere.
-   **STRING\_2D** groups line segments into connected lines in 2D.
-   **SUPER\_ELLIPSE\_POINTS\_2D** returns N points on a tilted
    superellipse in 2D.
-   **TAN\_DEG** returns the tangent of an angle given in degrees.
-   **TETRAHEDRON\_BARYCENTRIC\_3D** returns the barycentric coordinates
    of a point in 3D.
-   **TETRAHEDRON\_CENTROID\_3D** computes the centroid of a tetrahedron
    in 3D.
-   **TETRAHEDRON\_CIRCUMSPHERE\_3D** computes the circumsphere of a
    tetrahedron in 3D.
-   **TETRAHEDRON\_CONTAINS\_POINT\_3D:** a tetrahedron contains a point
    in 3D.
-   **TETRAHEDRON\_DIHEDRAL\_ANGLES\_3D** computes dihedral angles of a
    tetrahedron.
-   **TETRAHEDRON\_EDGE\_LENGTH\_3D** returns edge lengths of a
    tetrahedron in 3D.
-   **TETRAHEDRON\_FACE\_ANGLES\_3D** returns the 12 face angles of a
    tetrahedron 3D.
-   **TETRAHEDRON\_FACE\_AREAS\_3D** returns the 4 face areas of a
    tetrahedron 3D.
-   **TETRAHEDRON\_INSPHERE\_3D** finds the insphere of a tetrahedron in
    3D.
-   **TETRAHEDRON\_LATTICE\_LAYER\_POINT\_NEXT:** next tetrahedron
    lattice layer point.
-   **TETRAHEDRON\_LATTICE\_POINT\_NEXT** returns the next tetrahedron
    lattice point.
-   **TETRAHEDRON\_QUALITY1\_3D:** "quality" of a tetrahedron in 3D.
-   **TETRAHEDRON\_QUALITY2\_3D:** "quality" of a tetrahedron in 3D.
-   **TETRAHEDRON\_QUALITY3\_3D** computes the mean ratio of a
    tetrahedron.
-   **TETRAHEDRON\_QUALITY4\_3D** computes the minimum solid angle of a
    tetrahedron.
-   **TETRAHEDRON\_RHOMBIC\_SHAPE\_3D** describes a rhombic tetrahedron
    in 3D.
-   **TETRAHEDRON\_RHOMBIC\_SIZE\_3D** gives "sizes" for a rhombic
    tetrahedron in 3D.
-   **TETRAHEDRON\_SAMPLE\_3D** returns random points in a tetrahedron.
-   **TETRAHEDRON\_SHAPE\_3D** describes a tetrahedron in 3D.
-   **TETRAHEDRON\_SIZE\_3D** gives "sizes" for a tetrahedron in 3D.
-   **TETRAHEDRON\_SOLID\_ANGLES\_3D** computes solid angles of a
    tetrahedron.
-   **TETRAHEDRON\_UNIT\_LATTICE\_POINT\_NUM\_3D:** count lattice
    points.
-   **TETRAHEDRON\_VOLUME\_3D** computes the volume of a tetrahedron in
    3D.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TMAT\_INIT** initializes the geometric transformation matrix.
-   **TMAT\_MXM** multiplies two geometric transformation matrices.
-   **TMAT\_MXP** multiplies a geometric transformation matrix times a
    point.
-   **TMAT\_MXP2** multiplies a geometric transformation matrix times N
    points.
-   **TMAT\_MXV** multiplies a geometric transformation matrix times a
    vector.
-   **TMAT\_ROT\_AXIS** applies an axis rotation to the geometric
    transformation matrix.
-   **TMAT\_ROT\_VECTOR** applies a rotation about a vector to the
    geometric transformation matrix.
-   **TMAT\_SCALE** applies a scaling to the geometric transformation
    matrix.
-   **TMAT\_SHEAR** applies a shear to the geometric transformation
    matrix.
-   **TMAT\_TRANS** applies a translation to the geometric
    transformation matrix.
-   **TORUS\_AREA\_3D** returns the area of a torus in 3D.
-   **TORUS\_VOLUME\_3D** computes the volume of a torus in 3D.
-   **TP\_TO\_XYZ** converts unit spherical TP coordinates to XYZ
    coordinates.
-   **TRIANGLE\_ANGLES\_2D** computes the angles of a triangle in 2D.
-   **TRIANGLE\_ANGLES\_2D\_NEW** computes the angles of a triangle in
    2D.
-   **TRIANGLE\_ANGLES\_3D** computes the angles of a triangle in 3D.
-   **TRIANGLE\_ANGLES\_3D\_NEW** computes the angles of a triangle in
    3D.
-   **TRIANGLE\_AREA\_2D** computes the area of a triangle in 2D.
-   **TRIANGLE\_AREA\_3D** computes the area of a triangle in 3D.
-   **TRIANGLE\_AREA\_3D\_2** computes the area of a triangle in 3D.
-   **TRIANGLE\_AREA\_3D\_3** computes the area of a triangle in 3D.
-   **TRIANGLE\_AREA\_HERON** computes the area of a triangle using
    Heron's formula.
-   **TRIANGLE\_AREA\_VECTOR\_3D** computes the area vector of a
    triangle in 3D.
-   **TRIANGLE\_BARYCENTRIC\_2D** finds the barycentric coordinates of a
    point in 2D.
-   **TRIANGLE\_CENTROID\_2D** computes the centroid of a triangle in
    2D.
-   **TRIANGLE\_CENTROID\_3D** computes the centroid of a triangle in
    3D.
-   **TRIANGLE\_CIRCUMCENTER\_2D** computes the circumcenter of a
    triangle in 2D.
-   **TRIANGLE\_CIRCUMCENTER\_2D\_2** computes the circumcenter of a
    triangle in 2D.
-   **TRIANGLE\_CIRCUMCENTER** computes the circumcenter of a triangle
    in ND.
-   **TRIANGLE\_CIRCUMCIRCLE\_2D** computes the circumcircle of a
    triangle in 2D.
-   **TRIANGLE\_CIRCUMCIRCLE\_2D\_2** computes the circumcircle of a
    triangle in 2D.
-   **TRIANGLE\_CIRCUMRADIUS\_2D** computes the circumradius of a
    triangle in 2D.
-   **TRIANGLE\_CONTAINS\_LINE\_EXP\_3D** finds if a line is inside a
    triangle in 3D.
-   **TRIANGLE\_CONTAINS\_LINE\_PAR\_3D:** finds if a line is inside a
    triangle in 3D.
-   **TRIANGLE\_CONTAINS\_POINT\_2D\_1** finds if a point is inside a
    triangle in 2D.
-   **TRIANGLE\_CONTAINS\_POINT\_2D\_2** finds if a point is inside a
    triangle in 2D.
-   **TRIANGLE\_CONTAINS\_POINT\_2D\_3** finds if a point is inside a
    triangle in 2D.
-   **TRIANGLE\_DIAMETER\_2D** computes the diameter of a triangle in
    2D.
-   **TRIANGLE\_EDGE\_LENGTH\_2D** returns edge lengths of a triangle in
    2D.
-   **TRIANGLE\_GRIDPOINTS\_2D** computes gridpoints within a triangle
    in 2D.
-   **TRIANGLE\_INCENTER\_2D** computes the incenter of a triangle in
    2D.
-   **TRIANGLE\_INCIRCLE\_2D** computes the inscribed circle of a
    triangle in 2D.
-   **TRIANGLE\_INRADIUS\_2D** computes the inradius of a triangle in
    2D.
-   **TRIANGLE\_IS\_DEGENERATE\_ND** finds if a triangle is degenerate
    in ND.
-   **TRIANGLE\_LATTICE\_LAYER\_POINT\_NEXT:** next triangle lattice
    layer point.
-   **TRIANGLE\_LATTICE\_POINT\_NEXT** returns the next triangle lattice
    point.
-   **TRIANGLE\_LINE\_IMP\_INT\_2D** finds where an implicit line
    intersects a triangle in 2D.
-   **TRIANGLE\_ORIENTATION\_2D** determines the orientation of a
    triangle in 2D.
-   **TRIANGLE\_ORTHOCENTER\_2D** computes the orthocenter of a triangle
    in 2D.
-   **TRIANGLE\_POINT\_DIST\_2D:** distance ( triangle, point ) in 2D.
-   **TRIANGLE\_POINT\_DIST\_3D:** distance ( triangle, point ) in 3D.
-   **TRIANGLE\_POINT\_DIST\_SIGNED\_2D:** signed distance ( triangle,
    point ) in 2D.
-   **TRIANGLE\_POINT\_NEAR\_2D** computes the nearest triangle point to
    a point in 2D.
-   **TRIANGLE\_QUALITY\_2D:** "quality" of a triangle in 2D.
-   **TRIANGLE\_RIGHT\_LATTICE\_POINT\_NUM\_2D:** count lattice points.
-   **TRIANGLE\_SAMPLE** returns random points in a triangle.
-   **TRIANGLE\_UNIT\_LATTICE\_POINT\_NUM\_2D:** count lattice points.
-   **TRIANGLE\_XSI\_TO\_XY\_2D** converts from barycentric to XY
    coordinates in 2D.
-   **TRIANGLE\_XY\_TO\_XSI\_2D** converts from XY to barycentric in 2D.
-   **TRUNCATED\_OCTAHEDRON\_SHAPE\_3D** describes a truncated
    octahedron in 3D.
-   **TRUNCATED\_OCTAHEDRON\_SIZE\_3D** gives "sizes" for a truncated
    octahedron in 3D.
-   **TUBE\_2D** constructs a "tube" of given width around a path in 2D.
-   **TUPLE\_NEXT2** computes the next element of an integer tuple
    space.
-   **VECTOR\_DIRECTIONS\_ND** returns the direction angles of a vector
    in ND.
-   **VECTOR\_ROTATE\_2D** rotates a vector around the origin in 2D.
-   **VECTOR\_ROTATE\_3D** rotates a vector around an axis vector in 3D.
-   **VECTOR\_ROTATE\_BASE\_2D** rotates a vector around a base point in
    2D.
-   **VECTOR\_SEPARATION\_2D** finds the angular separation between
    vectors in 2D.
-   **VECTOR\_SEPARATION\_3D** finds the angular separation between
    vectors in 3D.
-   **VECTOR\_SEPARATION\_ND** finds the angular separation between
    vectors in ND.
-   **VECTOR\_UNIT\_ND** normalizes a vector in ND.
-   **VOXELS\_DIST\_L1\_3D** computes the L1 distance between voxels in
    3D.
-   **VOXELS\_DIST\_L1\_ND** computes the L1 distance between voxels in
    ND.
-   **VOXELS\_LINE\_3D** computes voxels along a line in 3D.
-   **VOXELS\_REGION\_3D** arranges a set of voxels into contiguous
    regions in 3D.
-   **VOXELS\_STEP\_3D** computes voxels along a line from a given point
    in 3D.
-   **XY\_TO\_POLAR** converts XY coordinates to polar coordinates.
-   **XYZ\_TO\_RADEC** converts (X,Y,Z) to right ascension/declination
    coordinates.
-   **XYZ\_TO\_RTP** converts (X,Y,Z) to (R,Theta,Phi) coordinates.
-   **XYZ\_TO\_TP** converts (X,Y,Z) to (Theta,Phi) coordinates.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 14 April 2013.*
