TETRAHEDRON\_PROPERTIES\
Compute Properties of a Tetrahedron {#tetrahedron_properties-compute-properties-of-a-tetrahedron align="center"}
===================================

------------------------------------------------------------------------

**TETRAHEDRON\_PROPERTIES** is a C++ program which computes properties,
including the centroid, circumsphere, dihedral angles, edge lengths,
face angles, face areas, insphere, quality, solid angles, and volume, of
a tetrahedron in 3D.

### Usage: {#usage align="center"}

> **tetrahedron\_properties** *filename*

where *filename* contains the vertex coordinates.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TETRAHEDRON\_PROPERTIES** is available in [a C++
version](../../cpp_src/tetrahedron_properties/tetrahedron_properties.html)
and [a FORTRAN77
version](../../f77_src/tetrahedron_properties/tetrahedron_properties.html)
and [a FORTRAN90
version](../../f_src/tetrahedron_properties/tetrahedron_properties.html)
and [a MATLAB
version](../../m_src/tetrahedron_properties/tetrahedron_properties.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[GEOMETRY](../../cpp_src/geometry/geometry.html), a C++ library which
performs geometric calculations in 2, 3 and N dimensional space.

[HYPERSPHERE\_PROPERTIES](../../cpp_src/hypersphere_properties/hypersphere_properties.html),
a C++ library which carries out various operations for an M-dimensional
hypersphere, including converting between Cartesian and spherical
coordinates, stereographic projection, sampling the surface of the
sphere, and computing the surface area and volume.

[POLYGON\_PROPERTIES](../../cpp_src/polygon_properties/polygon_properties.html),
a C++ library which computes properties of an arbitrary polygon in the
plane, defined by a sequence of vertices, including interior angles,
area, centroid, containment of a point, convexity, diameter, distance to
a point, inradius, lattice area, nearest point in set, outradius,
uniform sampling.

[TETRAHEDRONS](../../datasets/tetrahedrons/tetrahedrons.html), a dataset
directory which contains examples of tetrahedrons;

[TRIANGLE\_PROPERTIES](../../cpp_src/triangle_properties/triangle_properties.html),
a C++ program which computes properties of a triangle whose vertex
coordinates are read from a file.

### Source Code: {#source-code align="center"}

-   [tetrahedron\_properties.cpp](tetrahedron_properties.cpp), the
    source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [tet\_cap.txt](../../datasets/tetrahedrons/tet_cap.txt), a "cap"
    tetrahedron.
-   [tet\_cap\_output.txt](tet_cap_output.txt), the output file.
-   [tet\_equilateral.txt](../../datasets/tetrahedrons/tet_equilateral.txt),
    an equilateral tetrahedron.
-   [tet\_equilateral\_output.txt](tet_equilateral_output.txt), the
    output file.
-   [tet\_needle.txt](../../datasets/tetrahedrons/tet_needle.txt), a
    "needle" tetrahedron.
-   [tet\_needle\_output.txt](tet_needle_output.txt), the output file.
-   [tet\_right.txt](../../datasets/tetrahedrons/tet_right.txt), a right
    tetrahedron.
-   [tet\_right\_output.txt](tet_right_output.txt), the output file.
-   [tet\_sliver.txt](../../datasets/tetrahedrons/tet_sliver.txt), a
    "sliver" tetrahedron.
-   [tet\_sliver\_output.txt](tet_sliver_output.txt), the output file.
-   [tet\_spindle.txt](../../datasets/tetrahedrons/tet_spindle.txt), a
    "spindle" tetrahedron.
-   [tet\_spindle\_output.txt](tet_spindle_output.txt), the output file.
-   [tet\_wedge.txt](../../datasets/tetrahedrons/tet_wedge.txt), a
    "wedge" tetrahedron.
-   [tet\_wedge\_output.txt](tet_wedge_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for TETRAHEDRON\_PROPERTIES.
-   **ARC\_COSINE** computes the arc cosine function, with argument
    truncation.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **DTABLE\_DATA\_READ** reads the data from a DTABLE file.
-   **DTABLE\_HEADER\_READ** reads the header from a DTABLE file.
-   **FILE\_COLUMN\_COUNT** counts the columns in the first line of a
    file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_MIN** returns the minimum of two R8's.
-   **R8\_SWAP** switches two R8's.
-   **R8MAT\_DET\_4D** computes the determinant of a 4 by 4 R8MAT.
-   **R8MAT\_SOLVE** uses Gauss-Jordan elimination to solve an N by N
    linear system.
-   **R8MAT\_TRANSPOSE\_PRINT** prints an R8MAT, transposed.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **R8VEC\_ANGLE\_3D** computes the angle between two vectors in 3D.
-   **R8VEC\_CROSS\_3D** computes the cross product of two R8VEC's in
    3D.
-   **R8VEC\_DOT** computes the dot product of a pair of R8VEC's in ND.
-   **R8VEC\_LENGTH** returns the Euclidean length of an R8VEC.
-   **R8VEC\_MAX** returns the value of the maximum element in an R8VEC.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC\_ZERO** zeroes an R8VEC.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TETRAHEDRON\_CENTROID\_3D** computes the centroid of a tetrahedron
    in 3D.
-   **TETRAHEDRON\_CIRCUMSPHERE\_3D** computes the circumsphere of a
    tetrahedron in 3D.
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
-   **TETRAHEDRON\_QUALITY1\_3D:** "quality" of a tetrahedron in 3D.
-   **TETRAHEDRON\_QUALITY2\_3D:** "quality" of a tetrahedron in 3D.
-   **TETRAHEDRON\_QUALITY3\_3D** computes the mean ratio of a
    tetrahedron.
-   **TETRAHEDRON\_QUALITY4\_3D** computes the minimum solid angle of a
    tetrahedron.
-   **TETRAHEDRON\_SOLID\_ANGLES\_3D** computes solid angles of a
    tetrahedron.
-   **TETRAHEDRON\_VOLUME\_3D** computes the volume of a tetrahedron in
    3D.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TRIANGLE\_ANGLES\_3D** computes the angles of a triangle in 3D.
-   **TRIANGLE\_AREA\_3D** computes the area of a triangle in 3D.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 09 July 2009.*
