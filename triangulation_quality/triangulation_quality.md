TRIANGULATION\_QUALITY\
Triangulation Quality Measures {#triangulation_quality-triangulation-quality-measures align="center"}
==============================

------------------------------------------------------------------------

**TRIANGULATION\_QUALITY** is a C++ program which computes and prints
quality measures for a given triangulation of a set of points in 2D.

The triangulation is defined by a *node file* containing the coordinates
of nodes, and a *triangle file* containing sets of 3 or 6 node indices.

The quality measures computed include:

-   **Alpha**, the minimum angle divided by the maximum possible minimum
    angle.
-   **Area**, the ratio of the minimum area to the maximum area;
-   **Q**, the triangle shape uniformity measure, twice the radius of
    the inscribed circle divided by the radius of the circumscribed
    circle;

Each quality measure is defined as the minimum of its value over all the
triangles; the maximum and best possible value is 1, and the minimum and
worst possible value is 0.

### Usage: {#usage align="center"}

> **triangulation\_quality** *prefix*

where *prefix* is the common filename prefix:

-   *prefix***\_nodes.txt**, the node coordinates;
-   *prefix***\_elements.txt**, the triangulation.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TRIANGULATION\_QUALITY** is available in [a C++
version](../../cpp_src/triangulation_quality/triangulation_quality.html)
and [a FORTRAN90
version](../../f_src/triangulation_quality/triangulation_quality.html)
and [a MATLAB
version.](../../m_src/triangulation_quality/triangulation_quality.html)

### Related Data and Programs: {#related-data-and-programs align="center"}

[DISTMESH](../../m_src/distmesh/distmesh.html), a MATLAB library which
carries out triangular or tetrahedral mesh generation, by Per-Olof
Persson and Gilbert Strang.

[MESH2D](../../m_src/mesh2d/mesh2d.html), a MATLAB library which can
automatically create a triangular mesh for a given polygonal region, by
Darren Engwirda.

[TET\_MESH\_QUALITY](../../cpp_src/tet_mesh_quality/tet_mesh_quality.html),
a C++ program which computes quality measures of a tetrahedral mesh.

[TRIANGLE](../../c_src/triangle/triangle.html) is a C program which
computes a triangulation of a geometric region.

[TRIANGULATION](../../cpp_src/triangulation/triangulation.html) is a C++
library which carries out various operations on order 3 ("linear") or
order 6 ("quadratic") triangulations.

[TRIANGULATION\_NODE\_TO\_ELEMENT](../../cpp_src/triangulation_node_to_element/triangulation_node_to_element.html),
a C++ program which reads files describing a set of nodes, their
triangulation, and the value of one or more quantities at each node, and
outputs a file that averages the quantities for each element. This
operation in effect creates an "order1" finite element model of the
data.

[TRIANGULATION\_ORDER3](../../data/triangulation_order3/triangulation_order3.html)
is a directory which contains a description and examples of order 3
triangulations.

[TRIANGULATION\_ORDER6](../../data/triangulation_order6/triangulation_order6.html)
is a directory which contains a description and examples of order 6
triangulations.

### Reference: {#reference align="center"}

1.  Marc deBerg, Marc Krevald, Mark Overmars, Otfried Schwarzkopf,\
    Computational Geometry,\
    Springer, 2000,\
    ISBN: 3-540-65620-0.
2.  David Field,\
    Qualitative Measures for Initial Meshes,\
    International Journal of Numerical Methods in Engineering,\
    Volume 47, 2000, pages 887-906.
3.  Joseph ORourke,\
    Computational Geometry,\
    Second Edition,\
    Cambridge, 1998,\
    ISBN: 0521649765,\
    LC: QA448.D38.
4.  Per-Olof Persson, Gilbert Strang,\
    A Simple Mesh Generator in MATLAB,\
    SIAM Review,\
    Volume 46, Number 2, pages 329-345, June 2004.

### Source Code: {#source-code align="center"}

-   [triangulation\_quality.cpp](triangulation_quality.cpp), the source
    code.

### Examples and Tests: {#examples-and-tests align="center"}

**ELL3** is a set of nodes in an L-shaped region, which have been
arranged into an order 3 triangulation.

-   [ell3\_nodes.txt](../../data/triangulation_order3/ell3_nodes.txt),
    the node file.
-   [ell3\_elements.txt](../../data/triangulation_order3/ell3_elements.txt),
    the element file.
-   [ell3\_quality.txt](ell3_quality.txt), the report from the program.

**HEX\_HOLES6** is a set of nodes in an square region, with two
hexagonal holes, which have been arranged into an order 6 triangulation.

-   [hex\_holes6\_nodes.txt](../../data/triangulation_order6/hex_holes6_nodes.txt),
    the node file.
-   [hex\_holes6\_elements.txt](../../data/triangulation_order6/hex_holes6_elements.txt),
    the element file.
-   [hex\_holes6\_quality.txt](hex_holes6_quality.txt), the report from
    the program.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for TRIANGULATION\_QUALITY.
-   **ALPHA\_MEASURE** determines the triangulated pointset quality
    measure ALPHA.
-   **ARC\_COSINE** computes the arc cosine function, with argument
    truncation.
-   **AREA\_MEASURE** determines the area ratio quality measure.
-   **BANDWIDTH\_MESH** determines the bandwidth of the coefficient
    matrix.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **FILE\_COLUMN\_COUNT** counts the columns in the first line of a
    file.
-   **FILE\_EXIST** reports whether a file exists.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4MAT\_DATA\_READ** reads data from an I4MAT file.
-   **I4MAT\_HEADER\_READ** reads the header from an I4MAT file.
-   **I4MAT\_TRANSPOSE\_PRINT** prints an I4MAT, transposed.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an I4MAT,
    transposed.
-   **Q\_MEASURE** determines the triangulated pointset quality
    measure Q.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_MIN** returns the minimum of two R8's.
-   **R8MAT\_DATA\_READ** reads the data from an R8MAT file.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
-   **R8MAT\_TRANSPOSE\_PRINT** prints an R8MAT, transposed.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
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

*Last revised on 22 August 2009.*
