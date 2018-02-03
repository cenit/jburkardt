TRI\_SURFACE\_IO\
Read and Write TRI\_SURFACE 3D Graphics Files {#tri_surface_io-read-and-write-tri_surface-3d-graphics-files align="center"}
=============================================

------------------------------------------------------------------------

**TRI\_SURFACE\_IO** is a C++ library which reads or writes the 3D
graphics information stored in a pair of files that represent a
TRI\_SURFACE object, that is, a surface described as a collection of
triangles.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TRI\_SURFACE\_IO** is available in [a C++
version](../../cpp_src/tri_surface_io/tri_surface_io.html) and [a
FORTRAN90 version](../../f_src/tri_surface_io/tri_surface_io.html) and
[a MATLAB version.](../../m_src/tri_surface_io/tri_surface_io.html)

### Related Data and Programs: {#related-data-and-programs align="center"}

[PLY\_TO\_TRI\_SURFACE](../../m_src/ply_to_tri_surface/ply_to_tri_surface.html),
a MATLAB program which extracts data from a PLY file and writes it to a
TRI\_SURFACE file.

[TRI\_SURFACE](../../data/tri_surface/tri_surface.html), a data
directory which has some examples of TRI\_SURFACE files.

[TRI\_SURFACE\_DISPLAY](../../m_src/tri_surface_display/tri_surface_display.html),
a MATLAB program which reads a TRI\_SURFACE 3D graphics file and
displays it in a 3D window.

[TRI\_SURFACE\_DISPLAY\_OPENGL](../../cpp_src/tri_surface_display_opengl/tri_surface_display_opengl.html),
a C++ program which displays the 3D graphics information in a
TRI\_SURFACE file using OpenGL.

[TRI\_SURFACE\_TO\_PLY](../../m_src/tri_surface_to_ply/tri_surface_to_ply.html),
a MATLAB program which extracts data from a TRI\_SURFACE file and writes
it to a PLY file.

### Source Code: {#source-code align="center"}

-   [tri\_surface\_io.cpp](tri_surface_io.cpp), the source code.
-   [tri\_surface\_io.hpp](tri_surface_io.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [tri\_surface\_io\_prb.cpp](tri_surface_io_prb.cpp), a sample
    calling program.
-   [tri\_surface\_io\_prb\_output.txt](tri_surface_io_prb_output.txt),
    the output file.
-   [sphere\_nodes.txt](sphere_nodes.txt), the node file for a
    TRI\_SURFACE "sphere" triangular mesh.
-   [sphere\_triangles.txt](sphere_triangles.txt), the triangle file for
    a TRI\_SURFACE "sphere" triangular mesh.
-   [cube\_nodes.txt](cube_nodes.txt), the node file for a TRI\_SURFACE
    "cube" triangular mesh.
-   [cube\_triangles.txt](cube_triangles.txt), the triangle file for a
    TRI\_SURFACE "cube" triangular mesh.

### List of Routines: {#list-of-routines align="center"}

-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **DTABLE\_CLOSE\_WRITE** closes a file to which a DTABLE was to be
    written.
-   **DTABLE\_DATA\_READ** reads the data from a DTABLE file.
-   **DTABLE\_DATA\_WRITE** writes data to a DTABLE file.
-   **DTABLE\_HEADER\_READ** reads the header from a DTABLE file.
-   **DTABLE\_HEADER\_WRITE** writes the header of a DTABLE file.
-   **DTABLE\_WRITE** writes information to a DTABLE file.
-   **FILE\_COLUMN\_COUNT** counts the number of columns in the first
    line of a file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the smaller of two I4's.
-   **I4MAT\_TRANSPOSE\_PRINT** prints an I4MAT, transposed.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an I4MAT,
    transposed.
-   **ITABLE\_DATA\_READ** reads data from an ITABLE file.
-   **ITABLE\_DATA\_WRITE** writes data to an ITABLE file.
-   **ITABLE\_HEADER\_READ** reads the header from an ITABLE file.
-   **ITABLE\_HEADER\_WRITE** writes the header of an ITABLE file.
-   **ITABLE\_WRITE** writes information to an ITABLE file.
-   **R8\_EPSILON** returns the R8 roundoff unit.
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
-   **TIMESTRING** returns the current YMDHMS date as a string.
-   **TRI\_SURFACE\_PRINT** prints graphics information from a pair of
    TRI\_SURFACE files.
-   **TRI\_SURFACE\_READ** reads graphics information from a pair of
    TRI\_SURFACE files.
-   **TRI\_SURFACE\_SIZE** determines the size of a TRI\_SURFACE object.
-   **TRI\_SURFACE\_SIZE\_PRINT** prints sizes associated with a
    TRI\_SURFACE file.
-   **TRI\_SURFACE\_WRITE** writes graphics information to a pair of
    TRI\_SURFACE files.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 22 February 2009.*
