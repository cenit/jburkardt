TRIANGULATION\_QUAD\
Integral Estimate Over a Triangulated Region {#triangulation_quad-integral-estimate-over-a-triangulated-region align="center"}
============================================

------------------------------------------------------------------------

**TRIANGULATION\_QUAD** is a C++ program which reads information
defining a triangulation, and estimates the integral of a function whose
values are given at the nodes.

Note that this program only expects to recieve values of the function
**f(x,y)** at the nodes of the triangulation, that is, as a simple list
of values. No formula for **f** is expected or used. A much better
estimate for the integral might be possible if a formula for **f(x,y)**
were available, in which case a higher order quadrature scheme could be
employed.

This program should be able to compute exactly the integrals of 1, x, y,
and any linear combination of these. It will only be able to approximate
the integrals of other functions, and the accuracy of the approximation
will depend in part on the size of the triangles in the triangulation.

### Usage: {#usage align="center"}

> **triangulation\_quad** *prefix*

where *'prefix'* is the common prefix for the node, element, and value
files

-   *prefix***\_nodes.txt**, the node coordinates;
-   *prefix***\_elements.txt**, the elements of the triangulation.
-   *prefix***\_values.txt**, the value (which may be a scalar or
    vector) of some function at each node.
-   *quad* is the (scalar or vector) result of the integration estimate,
    which is computed and printed out by the program.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TRIANGULATION\_QUAD** is available in [a C++
version](../../cpp_src/triangulation_quad/triangulation_quad.html) and
[a FORTRAN90
version](../../f_src/triangulation_quad/triangulation_quad.html) and [a
MATLAB version](../../m_src/triangulation_quad/triangulation_quad.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[STROUD](../../cpp_src/stroud/stroud.html), a C++ library which defines
quadrature rules for a variety of multidimensional reqions.

[TET\_MESH\_QUAD](../../cpp_src/tet_mesh_quad/tet_mesh_quad.html), a C++
program which estimates the integral of a function over a region defined
by a tetrahedral mesh.

[TOMS706](../../f77_src/toms706/toms706.html), a FORTRAN77 library which
estimates the integral of a function over a triangulated region.

[TRIANGULATION](../../cpp_src/triangulation/triangulation.html), a C++
library which carries out various operations on order 3 ("linear") or
order 6 ("quadratic") triangulations.

[TRIANGULATION\_NODE\_TO\_ELEMENT](../../cpp_src/triangulation_node_to_element/triangulation_node_to_element.html),
a C++ program which reads files describing a set of nodes, their
triangulation, and the value of one or more quantities at each node, and
outputs a file that averages the quantities for each element. This
operation in effect creates an "order1" finite element model of the
data.

### Source Code: {#source-code align="center"}

-   [triangulation\_quad.cpp](triangulation_quad.cpp), the program.

### Examples and Tests: {#examples-and-tests align="center"}

**EXAMPLE** is a set of nodes in the unit square, which have been
arranged into an order 3 triangulation.

-   [example\_nodes.txt](example_nodes.txt), the node file.
-   [example\_elements.txt](example_elements.txt), the element file.
-   [example\_values.txt](example_values.txt), the values file,
    containing 4 values at each node. (These values are actually the
    values of 1, x, y, and x\*y, which have exact integrals of 1, 1/2,
    1/2, and 1/4.) Only the first three integrals will be estimated
    exactly.
-   [example\_output.txt](example_output.txt), the output file from the
    command\
    triangulation\_quad example

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for TRIANGULATION\_QUAD.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **FILE\_COLUMN\_COUNT** counts the columns in the first line of a
    file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4MAT\_DATA\_READ** reads data from an I4MAT file.
-   **I4MAT\_HEADER\_READ** reads the header from an I4MAT file.
-   **I4MAT\_TRANSPOSE\_PRINT** prints an I4MAT, transposed.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an I4MAT,
    transposed.
-   **MESH\_BASE\_ZERO** ensures that the element definition is
    zero-based.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_MIN** returns the minimum of two R8's.
-   **R8MAT\_DATA\_READ** reads the data from an R8MAT file.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
-   **R8MAT\_TRANSPOSE\_PRINT** prints an R8MAT, transposed.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **R8VEC\_PRINT** prints an R8VEC.
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

*Last revised on 15 October 2009.*
