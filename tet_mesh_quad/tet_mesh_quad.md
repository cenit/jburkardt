TET\_MESH\_QUAD\
Integral Estimate Over a Region Defined by a Tetrahedral Mesh {#tet_mesh_quad-integral-estimate-over-a-region-defined-by-a-tetrahedral-mesh align="center"}
=============================================================

------------------------------------------------------------------------

**TET\_MESH\_QUAD** is a C++ program which reads information defining a
tetrahedral mesh, and estimates the integral of a function whose values
are given at the nodes.

Note that this program only expects to receive values of the function
**f(x,y,z)** at the nodes of the tet mesh, that is, as a simple list of
values. No formula for **f** is expected or used. A much better estimate
for the integral might be possible if a formula for **f(x,y,z)** were
available, in which case a higher order quadrature scheme could be
employed.

This program should be able to compute exactly the integrals of 1, x, y,
z, and any linear combination of these. It will only be able to
approximate the integrals of other functions, and the accuracy of the
approximation will depend in part on the size of the triangles in the
triangulation.

### Usage: {#usage align="center"}

> **tet\_mesh\_quad** *prefix*

where *'prefix'* is the common prefix for the node, element, and value
files

-   *prefix***\_nodes.txt**, the node coordinates;
-   *prefix***\_elements.txt**, the elements of the tet mesh.
-   *prefix***\_values.txt**, the value (which may be a scalar or
    vector) of some function at each node.
-   *volume* is the volume of the region covered by the tet mesh, which
    is computed and printed out by the program.
-   *quad* is the (scalar or vector) result of the integration estimate,
    which is computed and printed out by the program.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TRIANGULATION\_QUAD** is available in [a C++
version](../../master/triangulation_quad/triangulation_quad.md) and
[a FORTRAN90
version](../../f_src/triangulation_quad/triangulation_quad.md) and [a
MATLAB version](../../m_src/triangulation_quad/triangulation_quad.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[TET\_MESH](../../master/tet_mesh/tet_mesh.md), a C++ library which
carries out various operations on tetrahedral meshes.

[TRIANGULATION\_QUAD](../../master/triangulation_quad/triangulation_quad.md),
a C++ program which estimates the integral of a function over a
triangulated region.

### Source Code: {#source-code align="center"}

-   [tet\_mesh\_quad.cpp](tet_mesh_quad.cpp), the program.

### Examples and Tests: {#examples-and-tests align="center"}

**CUBE\_4x4x4** is a set of nodes in the \[0,4\]x\[0,4\]x\[0,4\] cube,
which have been arranged into an order 4 tet mesh.

-   [cube\_4x4x4\_nodes.txt](cube_4x4x4_nodes.txt), the node file.
-   [cube\_4x4x4\_elements.txt](cube_4x4x4_elements.txt), the element
    file.
-   [cube\_4x4x4\_values.txt](cube_4x4x4_values.txt), the values file,
    containing the value of x+2y+3z at each node.
-   [cube\_4x4x4\_output.txt](cube_4x4x4_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for TET\_MESH\_QUAD.
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

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 21 December 2012.*
