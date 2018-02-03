XYZ\_IO\
XYZ File Input/Output routines. {#xyz_io-xyz-file-inputoutput-routines. align="center"}
===============================

------------------------------------------------------------------------

**XYZ\_IO** is a C++ library which reads and writes files in the XYZ,
XYZL and XYZF formats.

XYZ files are a simple way of storing information about sets of points
in 3D.

An XYZ file has a simple structure. There are three kinds of records:

-   COMMENT LINES begin with the character '\#' and are ignored;
-   BLANK LINES are gnored;
-   COORDINATE LINES each contain one triple of XYZ coordinates;

Here is an example of an XYZ file containing 13 points:

    #  cube.xyz
    #
            0.000000        0.000000        0.000000
            1.000000        0.000000        0.000000
            1.000000        1.000000        0.000000
            0.000000        1.000000        0.000000
            0.000000        0.000000        1.000000
            1.000000        0.000000        1.000000
            1.000000        1.000000        1.000000
            0.000000        1.000000        1.000000
          

Of course, in many cases, we would like to describe LINES between the
points. We can add this information by including a second file, called
an XYZL file, which consists of a string of point indices. A line is
drawn from one point to the next, and so on for each point listed in a
record. Thus, an XYZL file associated with the above XYZ file might be:

    #  cube.xyzl
    #
      0 1 2 3 0
      4 5 6 7 4
      0 4
      1 5
      2 6
      3 7
          

We might also like to describe FACES defined by the points. We can add
this information by including a file, called an XYZF file, which
consists of a string of point indices. A face is defined by listing in
counterclockwise order the vertices that lie on it. The first vertex is
not repeated as the final vertex. Thus, an XYZF file associated with the
above XYZ file might be:

    #  cube.xyzf
    #
      0 3 2 1
      1 2 6 5
      4 5 6 7
      4 7 3 0
      0 1 5 4
      2 3 7 6
          

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**XYZ\_IO** is available in [a C++
version](../../cpp_src/xyz_io/xyz_io.html) and [a FORTRAN90
version](../../f_src/xyz_io/xyz_io.html) and [a MATLAB
version](../../m_src/xyz_io/xyz_io.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[IVREAD](../../f_src/ivread/ivread.html), a FORTRAN90 program which can
convert graphics information between various 3D formats, including the
XYZ format.

[PDB\_TO\_XYZ](../../f_src/pdb_to_xyz/pdb_to_xyz.html), a FORTRAN90
program which reads the ATOM records from a PDB file, and writes the
atomic coordinates to an XYZ file.

[STRIPACK\_INTERACTIVE](../../f_src/stripack_interactive/stripack_interactive.html),
a FORTRAN90 program which reads an XYZ file of 3D points on the unit
sphere, computes the Delaunay triangulation, and writes it to a file.

[XY](../../data/xy/xy.html), a data directory which contains examples of
XY files, a simple 2D graphics point and line format;

[XYZ](../../data/xyz/xyz.html), a data directory which contains examples
of XYZ files, a simple 3D graphics point and line format;

[XYZ\_DISPLAY](../../m_src/xyz_display/xyz_display.html), a MATLAB
program which reads XYZ information defining points in 3D, and displays
an image in the MATLAB graphics window.

[XYZ\_DISPLAY\_OPENGL](../../cpp_src/xyz_display_opengl/xyz_display_opengl.html),
a C++ program which reads an XYZ file of 3D point coordinates, and
displays an image of those points using OpenGL.

[XYZ\_TO\_PDB](../../f_src/xyz_to_pdb/xyz_to_pdb.html), a FORTRAN90
program which reads a set of XYZ spatial coordinates, and rewrites them
as ATOM records in a PDB file.

[XYZF](../../data/xyzf/xyzf.html), a data directory which contains
examples of XYZF files, a simple 3D graphics point and face format;

[XYZF\_DISPLAY](../../m_src/xyzf_display/xyzf_display.html), a MATLAB
program which reads XYZF information defining points and faces in 3D,
and displays an image in a MATLAB graphics window.

[XYZF\_DISPLAY\_OPENGL](../../cpp_src/xyzf_display_opengl/xyzf_display_opengl.html),
a C++ program which reads XYZF information defining 3D points and faces
and displays an image using OpenGL.

[XYZL](../../data/xyzl/xyzl.html), a data directory which contains
examples of XYZL files, a simple 3D graphics point and line format;

[XYZL\_DISPLAY](../../m_src/xyzl_display/xyzl_display.html), a MATLAB
program which reads XYZL information defining points and lines in 3D,
and displays an image in a MATLAB graphics window.

[XYZL\_DISPLAY\_OPENGL](../../cpp_src/xyzl_display_opengl/xyzl_display_opengl.html),
a C++ program which reads XYZL information defining 3D points and lines
and displays an image using OpenGL.

### Source Code: {#source-code align="center"}

-   [xyz\_io.cpp](xyz_io.cpp), the source code.
-   [xyz\_io.hpp](xyz_io.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [xyz\_io\_prb.cpp](xyz_io_prb.cpp), a sample calling program.
-   [xyz\_io\_prb\_output.txt](xyz_io_prb_output.txt), the output file.
-   [helix.xyz](helix.xyz), an XYZ file created by the example program.
-   [xy\_io\_prb\_02.xyz](xy_io_prb_02.xyz), an XYZ file created by the
    example program.
-   [cube.xyz](cube.xyz), an XYZ file of points created by the example
    program.
-   [cube.xyzl](cube.xyzl), an XYZL file of lines created by the example
    program.
-   [cube.xyzf](cube.xyzf), an XYZF file of lines created by the example
    program.

### List of Routines: {#list-of-routines align="center"}

-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **I4VEC\_COPY** copies an I4VEC.
-   **R8VEC\_COPY** copies an R8VEC.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_I4VEC** reads an I4VEC from a string.
-   **S\_TO\_R8** reads an R8 value from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **XYZ\_DATA\_PRINT** prints the data for an XYZ file.
-   **XYZ\_DATA\_READ** reads the data in an XYZ file.
-   **XYZ\_DATA\_WRITE** writes the data for an XYZ file.
-   **XYZ\_EXAMPLE** sets up data suitable for an XYZ file.
-   **XYZ\_EXAMPLE\_SIZE** sizes an example XYZ dataset.
-   **XYZ\_HEADER\_PRINT** prints the header of an XYZ file.
-   **XYZ\_HEADER\_READ** reads the header of an XYZ file.
-   **XYZ\_HEADER\_WRITE** writes the header of an XYZ file.
-   **XYZ\_READ** reads the header and data from an XYZ file.
-   **XYZ\_READ\_TEST** tests the XYZ file read routines.
-   **XYZ\_WRITE** writes the header and data for an XYZ file.
-   **XYZ\_WRITE\_TEST** tests the XYZ write routines.
-   **XYZF\_DATA\_PRINT** prints the data of an XYZF file.
-   **XYZF\_DATA\_READ** reads the data in an XYZF file.
-   **XYZF\_DATA\_WRITE** writes the data of an XYZF file.
-   **XYZF\_EXAMPLE** sets data suitable for a pair of XYZ and XYZF
    files.
-   **XYZF\_EXAMPLE\_SIZE** sizes the data to be created by
    XYZF\_EXAMPLE.
-   **XYZF\_HEADER\_PRINT** prints the header of an XYZF file.
-   **XYZF\_HEADER\_READ** determines the number of face items in an
    XYZF file.
-   **XYZF\_HEADER\_WRITE** writes the header of an XYZF file.
-   **XYZF\_WRITE** writes the header and data for an XYZF file.
-   **XYZL\_DATA\_PRINT** prints the data of an XYZL file.
-   **XYZL\_DATA\_READ** reads the data in an XYZL file.
-   **XYZL\_DATA\_WRITE** writes the data of an XYZL file.
-   **XYZL\_EXAMPLE** sets data suitable for a pair of XYZ and XYZL
    files.
-   **XYZL\_EXAMPLE\_SIZE** sizes the data to be created by
    XYZL\_EXAMPLE.
-   **XYZL\_HEADER\_PRINT** prints the header of an XYZL file.
-   **XYZL\_HEADER\_READ** determines the number of line items in an
    XYZL file.
-   **XYZL\_HEADER\_WRITE** writes the header of an XYZL file.
-   **XYZL\_WRITE** writes the header and data for an XYZL file.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 25 October 2010.*
