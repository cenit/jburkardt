TRIANGULATION\_SVG\
SVG Image of Triangulation {#triangulation_svg-svg-image-of-triangulation align="center"}
==========================

------------------------------------------------------------------------

**TRIANGULATION\_SVG** is a C++ program which creates an SVG image of a
triangulation, which can be displayed by an web browser.

**TRIANGULATION\_SVG** reads one file listing the nodes, and a second
file consisting of groups of 3, 4 or 6 nodes that make up elements.

### Usage: {#usage align="center"}

> **triangulation\_svg** *prefix*

where *'prefix'* is the common prefix for the node and element files,
and will also be used to name the output file:

-   *'prefix'***\_nodes.txt**, the node coordinates.
-   *'prefix'***\_elements.txt**, the triangulation
-   *'prefix'***.svg**, the plot file

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TRIANGULATION\_SVG** is available in [a C
version](../../c_src/triangulation_svg/triangulation_svg.html) and [a
C++ version](../../cpp_src/triangulation_svg/triangulation_svg.html) and
[a FORTRAN77
version](../../f77_src/triangulation_svg/triangulation_svg.html) and [a
FORTRAN90 version](../../f_src/triangulation_svg/triangulation_svg.html)
and [a MATLAB
version](../../m_src/triangulation_svg/triangulation_svg.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[TRIANGLE\_SVG](../../cpp_src/triangle_svg/triangle_svg.html), a C++
library which uses Scalable Vector Graphics (SVG) to plot a triangle and
any number of points, to illustrate quadrature rules and sampling
techniques.

[TRIANGULATION](../../cpp_src/triangulation/triangulation.html), a C++
library which carries out various operations on order 3 ("linear") or
order 6 ("quadratic") triangulations.

[TRIANGULATION\_NODE\_TO\_ELEMENT](../../cpp_src/triangulation_node_to_element/triangulation_node_to_element.html),
a C++ program which reads files describing a set of nodes, their
triangulation, and the value of one or more quantities at each node, and
outputs a file that averages the quantities for each element. This
operation in effect creates an "order1" finite element model of the
data.

[TRIANGULATION\_PLOT](../../cpp_src/triangulation_plot/triangulation_plot.html),
a C++ program which plots the nodes and elements of a triangulation as a
PostScript (PS) file;

### Reference: {#reference align="center"}

1.  W3C, Scalable Vector Graphics 1.1 (Second Edition), 16 August 2011,
    http://www.w3.org/TR/SVG11/

### Source Code: {#source-code align="center"}

-   [triangulation\_svg.cpp](triangulation_svg.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**LAKE** is a lake region.

-   [lake\_nodes.txt](lake_nodes.txt) the point coordinates.
-   [lake\_elements.txt](lake_elements.txt) the triangulation.
-   [lake.svg](lake.svg) an SVG image of the triangulation.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for TRIANGULATION\_SVG.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **FILE\_COLUMN\_COUNT** counts the columns in the first line of a
    file.
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
-   **MESH\_BASE\_ZERO** ensures that the element definition is
    zero-based.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_MIN** returns the minimum of two R8's.
-   **R8\_NINT** returns the nearest integer to an R8.
-   **R8MAT\_DATA\_READ** reads the data from an R8MAT file.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **S\_BLANK\_DELETE** removes blanks and left justifies the
    remainder.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_I4VEC** reads an I4VEC from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TRIANGULATION\_PLOT** plots a triangulation in SVG format.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 07 April 2014.*
