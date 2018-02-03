TRIANGLE\_ANALYZE\
Compute Properties of a Triangle {#triangle_analyze-compute-properties-of-a-triangle align="center"}
================================

------------------------------------------------------------------------

**TRIANGLE\_ANALYZE** is a C++ program which reads a triangle defined in
a file, and uses the TRIANGLE\_PROPERTIES library to compute angles,
area, centroid, circumcircle, edge lengths, incircle, orientation,
orthocenter, and quality.

### Usage: {#usage align="center"}

> **triangle\_analyze** *filename*

where *filename* contains the vertex coordinates.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TRIANGLE\_ANALYZE** is available in [a C
version](../../c_src/triangle_analyze/triangle_analyze.html) and [a C++
version](../../cpp_src/triangle_analyze/triangle_analyze.html) and [a
FORTRAN90 version](../../f_src/triangle_analyze/triangle_analyze.html)
and [a MATLAB
version](../../m_src/triangle_analyze/triangle_analyze.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[GEOMETRY](../../cpp_src/geometry/geometry.html), a C++ library which
performs geometric calculations in 2, 3 and N dimensional space.

[TRIANGLE\_INTERPOLATE](../../cpp_src/triangle_interpolate/triangle_interpolate.html),
a C++ library which shows how vertex data can be interpolated at any
point in the interior of a triangle.

[TRIANGLE\_PROPERTIES](../../cpp_src/triangle_properties/triangle_properties.html),
a C++ program which computes properties of triangles.

[TRIANGLES](../../datasets/triangles/triangles.html), a dataset
directory which contains examples of triangles;

### Source Code: {#source-code align="center"}

-   [triangle\_analyze.cpp](triangle_analyze.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [tex1.txt](tex1.txt), example 1.
-   [tex1\_properties.txt](tex1_properties.txt), the output file.
-   [tex2.txt](tex2.txt), example 2.
-   [tex2\_properties.txt](tex2_properties.txt), the output file.
-   [tex3.txt](tex3.txt), example 3.
-   [tex3\_properties.txt](tex3_properties.txt), the output file.
-   [tex4.txt](tex4.txt), example 4.
-   [tex4\_properties.txt](tex4_properties.txt), the output file.
-   [tex5.txt](tex5.txt), example 5.
-   [tex5\_properties.txt](tex5_properties.txt), the output file.
-   [tex6.txt](tex6.txt), example 6.
-   [tex6\_properties.txt](tex6_properties.txt), the output file.
-   [tex7.txt](tex7.txt), example 7.
-   [tex7\_properties.txt](tex7_properties.txt), the output file.
-   [tex8.txt](tex8.txt), example 8.
-   [tex8\_properties.txt](tex8_properties.txt), the output file.
-   [triangle\_cap.txt](triangle_cap.txt), example of a "cap" triangle.
-   [triangle\_cap\_properties.txt](triangle_cap_properties.txt), the
    output file.
-   [triangle\_equilateral.txt](triangle_equilateral.txt), example of an
    equilateral triangle.
-   [triangle\_equilateral\_properties.txt](triangle_equilateral_properties.txt),
    the output file.
-   [triangle\_needle.txt](triangle_needle.txt), example of a "needle"
    triangle.
-   [triangle\_needle\_properties.txt](triangle_needle_properties.txt),
    the output file.
-   [triangle\_ref.txt](triangle_ref.txt), example of a reference
    triangle.
-   [triangle\_ref\_properties.txt](triangle_ref_properties.txt), the
    output file.
-   [triangle\_right.txt](triangle_right.txt), example of a right
    triangle.
-   [triangle\_right\_properties.txt](triangle_right_properties.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for TRIANGLE\_ANALYZE.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **FILE\_COLUMN\_COUNT** counts the columns in the first line of a
    file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_MODP** returns the nonnegative remainder of I4 division.
-   **I4\_WRAP** forces an I4 to lie between given limits by wrapping.
-   **LINE\_EXP\_IS\_DEGENERATE\_ND** finds if an explicit line is
    degenerate in ND.
-   **LINE\_EXP\_PERP\_2D** computes a line perpendicular to a line and
    through a point.
-   **LINE\_EXP2IMP\_2D** converts an explicit line to implicit form in
    2D.
-   **LINE\_IMP\_IS\_DEGENERATE\_2D** finds if an implicit point is
    degenerate in 2D.
-   **LINES\_EXP\_INT\_2D** determines where two explicit lines
    intersect in 2D.
-   **LINES\_IMP\_INT\_2D** determines where two implicit lines
    intersect in 2D.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_ACOS** computes the arc cosine function, with argument
    truncation.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_MIN** returns the minimum of two R8's.
-   **R8MAT\_DATA\_READ** reads the data from an R8MAT file.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
-   **R8MAT\_INVERSE\_2D** inverts a 2 by 2 R8MAT using Cramer's rule.
-   **R8MAT\_SOLVE** uses Gauss-Jordan elimination to solve an N by N
    linear system.
-   **R8MAT\_TRANSPOSE\_PRINT** prints an R8MAT, transposed.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **R8VEC\_COPY** copies an R8VEC.
-   **R8VEC\_EQ** is true two R8VEC's are equal.
-   **R8VEC\_NORM** returns the Euclidean length of an R8VEC.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TRIANGLE\_ANGLES\_2D** computes the angles of a triangle in 2D.
-   **TRIANGLE\_AREA\_2D** computes the area of a triangle in 2D.
-   **TRIANGLE\_CENTROID\_2D** computes the centroid of a triangle in
    2D.
-   **TRIANGLE\_CIRCUMCIRCLE\_2D** computes the circumcircle of a
    triangle in 2D.
-   **TRIANGLE\_CONTAINS\_POINT\_2D** finds if a point is inside a
    triangle in 2D.
-   **TRIANGLE\_EDGE\_LENGTH\_2D** returns edge lengths of a triangle in
    2D.
-   **TRIANGLE\_INCIRCLE\_2D** computes the inscribed circle of a
    triangle in 2D.
-   **TRIANGLE\_ORIENTATION\_2D** determines the orientation of a
    triangle in 2D.
-   **TRIANGLE\_ORTHOCENTER\_2D** computes the orthocenter of a triangle
    in 2D.
-   **TRIANGLE\_QUALITY\_2D:** "quality" of a triangle in 2D.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 08 November 2015.*
