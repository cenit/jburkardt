OBJ\_IO\
Read and Write Routines\
Alias OBJ 3D Graphics Files {#obj_io-read-and-write-routines-alias-obj-3d-graphics-files align="center"}
===========================

------------------------------------------------------------------------

**OBJ\_IO** is a C++ library which reads or writes some of the 3D
graphics information stored in an Alias OBJ file.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**OBJ\_IO** is available in [a C++
version](../../cpp_src/obj_io/obj_io.html) and [a FORTRAN90
version](../../f_src/obj_io/obj_io.html) and [a MATLAB
version](../../m_src/obj_io/obj_io.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[IVCON](../../cpp_src/ivcon/ivcon.html), a C++ program which can convert
graphics information between STLA and other formats.

[IVREAD](../../f_src/ivread/ivread.html), a FORTRAN90 program which can
convert graphics information between STLA and other formats.

[OBJ](../../data/obj/obj.html), a data directory which has some examples
of OBJ files.

[OBJ\_TO\_PLY](../../c_src/obj_to_ply/obj_to_ply.html), a C program
which reads an OBJ file and writes similar information to a
[PLY](../../data/ply/ply.html) file.

[OBJ\_TO\_TRI\_MESH](../../m_src/obj_to_tri_mesh/obj_to_tri_mesh.html),
a MATLAB program which reads an OBJ file and extracts the surface mesh
data as a [TRI\_MESH](../../data/tri_mesh/tri_mesh.html) dataset.

[OBJ2OPENGL](../../pl_src/obj2opengl/obj2opengl.html), a PERL script
which converts an OBJ file to a C/C++ include file appropriate for use
with [OPEN\_GL](../../cpp_src/open_gl/open_gl.html).

[PLY\_TO\_OBJ](../../c_src/ply_to_obj/ply_to_obj.html), a C program
which reads a PLY 3D graphics file and writes an equivalent OBJ graphics
file.

### Reference: {#reference align="center"}

1.  <http://www.alias.com/eng/index.shtml>, The Alias web site.
2.  [obj\_format.txt](../../txt/obj_format.txt), some information about
    the OBJ format.

### Source Code: {#source-code align="center"}

-   [obj\_io.cpp](obj_io.cpp), the source code.
-   [obj\_io.hpp](obj_io.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [obj\_io\_prb.cpp](obj_io_prb.cpp), a sample calling program.
-   [cube.obj](../../data/obj/cube.obj), a simple OBJ file that
    describes a cube.
-   [cube\_no\_normals.obj](cube_no_normals.obj), an OBJ file describing
    a cube, without normal vectors, written by OBJ\_WRITE.
-   [cube\_normals.obj](cube_normals.obj), an OBJ file describing a
    cube, including normal vectors, written by OBJ\_WRITE.
-   [obj\_io\_prb\_output.txt](obj_io_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **I4\_MAX** returns the maximum of two I4's.
-   **OBJ\_FACE\_NODE\_PRINT** prints the node indices for each face.
-   **OBJ\_NORMAL\_VECTOR\_PRINT** prints the normal vectors.
-   **OBJ\_NODE\_XYZ\_PRINT** prints the node coordinates.
-   **OBJ\_SIZE** determines sizes of graphics objects in an Alias OBJ
    file.
-   **OBJ\_SIZE\_PRINT** prints sizes associated with an OBJ file.
-   **OBJ\_VERTEX\_NORMAL\_PRINT** prints the normal vectors indices per
    vertex.
-   **OBJ\_WRITE** writes graphics information to an Alias OBJ file.
-   **R8VEC\_CROSS\_PRODUCT\_3D** computes the cross product of two
    R8VEC's in 3D.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 01 April 2011.*
