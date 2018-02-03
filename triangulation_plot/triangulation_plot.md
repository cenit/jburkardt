TRIANGULATION\_PLOT\
Plot a Triangulation {#triangulation_plot-plot-a-triangulation align="center"}
====================

------------------------------------------------------------------------

**TRIANGULATION\_PLOT** is a C++ program which plots a triangulation.

**TRIANGULATION\_PLOT** reads one file listing the nodes, and a second
file consisting of groups of 3 or 6 nodes that make up triangles, and
creates an Encapsulated PostScript image of the triangulation.

### Usage: {#usage align="center"}

> **triangulation\_plot** *prefix* *node\_vis* *triangle\_vis*

where *prefix* is the common prefix for the node and triangle files, and
will also be used to name the output file:

-   *prefix***\_nodes.txt**, the node coordinates (input);
-   *prefix***\_elements.txt**, the triangulation (input);
-   *prefix***.eps**, the plot file (output);

and *node\_vis* is an integer defining the node visibility:

-   **0**, do not show the nodes;
-   **1**, show the nodes;
-   **2**, show the nodes and label them.

and *triangle\_vis* is an integer defining the triangle visibility:

-   **0**, do not show the triangles;
-   **1**, show the triangles;
-   **2**, show the triangles and label them.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TRIANGULATION\_PLOT** is available in [a C++
version](../../cpp_src/triangulation_plot/triangulation_plot.html) and
[a FORTRAN90
version](../../f_src/triangulation_plot/triangulation_plot.html) and [a
MATLAB version](../../m_src/triangulation_plot/triangulation_plot.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[TRIANGLE](../../c_src/triangle/triangle.html), a C program which
computes a triangulation of a geometric region.

[TRIANGULATION](../../cpp_src/triangulation/triangulation.html), a C++
library which is useful for working with triangulations.

[TRIANGULATION\_DISPLAY](../../m_src/triangulation_display/triangulation_display.html),
a MATLAB program which displays the nodes and elements of a
triangulation on the MATLAB graphics screen;

[TRIANGULATION\_DISPLAY\_OPENGL](../../cpp_src/triangulation_display_opengl/triangulation_display_opengl.html),
a C++ program which reads files defining a triangulation and displays an
image using Open GL.

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

[TRIANGULATION\_SVG](../../cpp_src/triangulation_svg/triangulation_svg.html),
a C++ program which creates an SVG image of a triangulation, which can
be displayed by a web browser.

### Reference: {#reference align="center"}

1.  Marc deBerg, Marc Krevald, Mark Overmars, Otfried Schwarzkopf,\
    Computational Geometry,\
    Springer, 2000,\
    ISBN: 3-540-65620-0,\
    LC: QA448.D38.C65.
2.  Joseph ORourke,\
    Computational Geometry,\
    Second Edition,\
    Cambridge, 1998,\
    ISBN: 0521649765,\
    LC: QA448.D38.

### Source Code: {#source-code align="center"}

-   [triangulation\_plot.cpp](triangulation_plot.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**ELBOW3** is an elbow-shaped region, triangulated using order 3
triangles.

-   [elbow3\_nodes.txt](../../datasets/triangulation_order3/elbow3_nodes.txt)
    the point coordinates.
-   [elbow3\_elements.txt](../../datasets/triangulation_order3/elbow3_elements.txt)
    the triangulation.
-   [elbow3\_triangulation.png](../../datasets/triangulation_order3/elbow3_triangulation.png)
    is a PNG image of the triangulation.

**ELL3** is an order 3 triangulation of a set of nodes in an L-shaped
region.

-   [ell3\_nodes.txt](../../datasets/triangulation_order3/ell3_nodes.txt),
    the nodes.
-   [ell3\_elements.txt](../../datasets/triangulation_order3/ell3_elements.txt),
    the triangulation.
-   [ell3\_triangulation.png](../../datasets/triangulation_order3/ell3_triangulation.png),
    a PNG image of the triangulation.

**ELL6** is an order 6 triangulation of a set of nodes in an L-shaped
region.

-   [ell6\_nodes.txt](../../datasets/triangulation_order6/ell6_nodes.txt),
    the nodes.
-   [ell6\_elements.txt](../../datasets/triangulation_order6/ell6_elements.txt),
    the triangulation.
-   [ell6\_triangulation.png](../../datasets/triangulation_order6/ell6_triangulation.png),
    a PNG image of the triangulation.

**HEX\_HOLES3** puts a set of nodes into the double hexagonal hole
region using CVT techniques, and creates an order 3 triangulation using
TABLE\_DELAUNAY.

-   [hex\_holes3\_nodes.txt](../../datasets/triangulation_order3/hex_holes3_nodes.txt),
    the nodes.
-   [hex\_holes3\_elements.txt](../../datasets/triangulation_order3/hex_holes3_elements.txt),
    the triangulation.
-   [hex\_holes3\_triangulation.png](../../datasets/triangulation_order3/hex_holes3_triangulation.png),
    a PNG image of the triangulation.

**LAKE3** uses constrained CVT methods to place nodes inside and on the
boundary of the problem 14 triangulation region, a lake with an island.
An order 3 triangulation is used.

-   [lake3\_nodes.txt](../../datasets/triangulation_order3/lake3_nodes.txt),
    the nodes;
-   [lake3\_elements.txt](../../datasets/triangulation_order3/lake3_elements.txt),
    the triangles;
-   [lake3\_triangulation.png](../../datasets/triangulation_order3/lake3_triangulation.png),
    a PNG image of the triangulation.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for TRIANGULATION\_PLOT.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **FILE\_COLUMN\_COUNT** counts the columns in the first line of a
    file.
-   **FILE\_EXIST** reports whether a file exists.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4\_MAX** returns the maximum of two integers.
-   **I4\_MIN** returns the smaller of two integers.
-   **I4\_MODP** returns the nonnegative remainder of integer division.
-   **I4\_WRAP** forces an integer to lie between given limits by
    wrapping.
-   **I4MAT\_DATA\_READ** reads data from an I4MAT file.
-   **I4MAT\_HEADER\_READ** reads the header from an I4MAT file.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an I4MAT,
    transposed.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8\_NINT** returns the nearest integer to an R8.
-   **R8MAT\_DATA\_READ** reads the data from an R8MAT file.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
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
-   **TRIANGULATION\_ORDER3\_PLOT** plots a 3-node triangulation.
-   **TRIANGULATION\_ORDER4\_PLOT** plots a 4-node triangulation.
-   **TRIANGULATION\_ORDER6\_PLOT** plots a 6-node triangulation.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 22 August 2009.*
