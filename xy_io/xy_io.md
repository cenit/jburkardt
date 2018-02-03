XY\_IO\
XY File Input/Output routines. {#xy_io-xy-file-inputoutput-routines. align="center"}
==============================

------------------------------------------------------------------------

**XY\_IO** is a C++ library which reads and writes files in the XY, XYL
and XYF formats.

XY files are a simple way of storing information about sets of points in
2D.

An XY file has a simple structure. There are three kinds of records:

-   COMMENT LINES begin with the character '\#' and are ignored;
-   BLANK LINES are ignored;
-   COORDINATE LINES each contain one pair of X, Y coordinates;

Here is an example of an XY file containing 13 points:

    #  house.xy
    #
            0.000000        0.000000
            6.000000        0.000000
            6.000000        7.000000
            3.000000       10.000000
            0.000000        7.000000
            4.000000        1.000000
            5.000000        1.000000
            5.000000        4.000000
            4.000000        4.000000
            5.000000        8.000000
            5.000000       11.000000
            4.000000       11.000000
            4.000000        9.000000
          

Of course, in many cases, we would like to describe LINES between the
points. We can add this information by including a second file, called
an XYL file, which consists of a string of point indices. A line is
drawn from one point to the next and so on through each point listed on
a record. Thus, an XYL file associated with the above XY file might be:

    #  house.xyl
    #
     0 1 2 3 4 0
     5 6 7 8 5
     9 10 11 12
          

We might also like to describe FACES defined by the points. We can add
this information by including a file, called an XYF file, which consists
of a string of point indices. A face is defined by listing in
counterclockwise order the vertices that lie on it. The first vertex is
not repeated as the final vertex. Thus, an XYF file associated with the
above XY file might be:

    #  house.xyf
    #
     0 1 2 3 4
     5 6 7 8
     9 10 11 12
          

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**XY\_IO** is available in [a C++
version](../../cpp_src/xy_io/xy_io.html) and [a FORTRAN90
version](../../f_src/xy_io/xy_io.html) and [a MATLAB
version](../../m_src/xy_io/xy_io.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CIRCLE\_POINTS](../../f_src/circle_points/circle_points.html), a
FORTRAN90 program which computes points equally spaced on a circular
arc, and writes them to an XY file;

[GRF\_TO\_XYL](../../f_src/grf_to_xyl/grf_to_xyl.html), a FORTRAN90
program which converts information describing the adjacency and
embedding of an abstract graph from GRF to XYL format.

[TABLE](../../data/table/table.html), a data directory which contains
examples of TABLE files, a simple format for N points in M dimensions;

[XY](../../data/xy/xy.html), a data directory which contains examples of
XY files, a simple 2D graphics point format;

[XY\_DISPLAY](../../m_src/xy_display/xy_display.html), a MATLAB program
which reads an XY file containing the coordinates of points in 2D, and
displays a plot of the points in a MATLAB graphics window;

[XY\_DISPLAY\_OPENGL](../../cpp_src/xy_display_opengl/xy_display_opengl.html),
a C++ program which reads an XY file of 2D point coordinates, and
displays an image of those points using OpenGL.

[XYF](../../data/xyf/xyf.html), a data directory which contains examples
of XYF files, a simple 2D graphics point and face format;

[XYF\_DISPLAY](../../m_src/xyf_display/xyf_display.html), a MATLAB
program which reads XYF information defining points and faces in 2D, and
displays an image using MATLAB.

[XYF\_DISPLAY\_OPENGL](../../cpp_src/xyf_display_opengl/xyf_display_opengl.html),
a C++ program which reads XYF information defining points and faces in
2D, and displays an image using OpenGL.

[XYL](../../data/xyl/xyl.html), a data directory which contains examples
of XYL files, a simple 2D graphics point and line format;

[XYL\_DISPLAY](../../m_src/xyl_display/xyl_display.html), a MATLAB
program which reads XYL information defining points and lines in 2D, and
displays an image using MATLAB.

[XYL\_DISPLAY\_OPENGL](../../cpp_src/xyl_display_opengl/xyl_display_opengl.html),
a C++ program which reads XYL information defining points and lines in
2D, and displays an image using OpenGL.

[XYZ\_IO](../../cpp_src/xyz_io/xyz_io.html), a C++ library which reads
and writes XYZ files, a simple 3D graphics point format.

### Source Code: {#source-code align="center"}

-   [xy\_io.cpp](xy_io.cpp), the source code.
-   [xy\_io.hpp](xy_io.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [xy\_io\_prb.cpp](xy_io_prb.cpp), a sample calling program.
-   [xy\_io\_prb\_output.txt](xy_io_prb_output.txt), the output file.
-   [xy\_io\_prb\_01.xy](xy_io_prb_01.xy), an XY file created by the
    example program.
-   [xy\_io\_prb\_02.xy](xy_io_prb_02.xy), an XY file created by the
    example program.
-   [house.xy](house.xy), an XY file of points created by the example
    program.
-   [house.xyl](house.xyl), an XYL file of lines created by the example
    program.
-   [annulus.xy](annulus.xy), an XY file of points created by the
    example program.
-   [annulus.xyf](annulus.xyf), an XYF file of lines created by the
    example program.

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
-   **XY\_DATA\_PRINT** prints the data for an XY file.
-   **XY\_DATA\_READ** reads the data in an XY file.
-   **XY\_DATA\_WRITE** writes the data for an XY file.
-   **XY\_EXAMPLE** sets up sample XY data suitable for an XY file.
-   **XY\_HEADER\_PRINT** prints the header of an XY file.
-   **XY\_HEADER\_READ** reads the header of an XY file.
-   **XY\_HEADER\_WRITE** writes the header of an XY file.
-   **XY\_READ** reads the header and data from an XY file.
-   **XY\_READ\_TEST** tests the XY file read routines.
-   **XY\_WRITE** writes the header and data for an XY file.
-   **XY\_WRITE\_TEST** tests the XY write routines.
-   **XYF\_DATA\_PRINT** prints the data of an XYF file.
-   **XYF\_DATA\_READ** reads the data in an XYF file.
-   **XYF\_DATA\_WRITE** writes the data of an XYF file.
-   **XYF\_EXAMPLE** sets data suitable for a pair of XY and XYF files.
-   **XYF\_EXAMPLE\_SIZE** sizes the data to be created by XYF\_EXAMPLE.
-   **XYF\_HEADER\_PRINT** prints the header of an XYF file.
-   **XYF\_HEADER\_READ** determines the number of face items in an XYF
    file.
-   **XYF\_HEADER\_WRITE** writes the header of an XYF file.
-   **XYF\_WRITE** writes the header and data for an XYF file.
-   **XYL\_DATA\_PRINT** prints the data of an XYL file.
-   **XYL\_DATA\_READ** reads the data in an XYL file.
-   **XYL\_DATA\_WRITE** writes the data of an XYL file.
-   **XYL\_EXAMPLE** sets data suitable for a pair of XY and XYL files.
-   **XYL\_EXAMPLE\_SIZE** sizes the data to be created by XYL\_EXAMPLE.
-   **XYL\_HEADER\_PRINT** prints the header of an XYL file.
-   **XYL\_HEADER\_READ** determines the number of line items in an XYL
    file.
-   **XYL\_HEADER\_WRITE** writes the header of an XYL file.
-   **XYL\_WRITE** writes the header and data for an XYL file.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 08 January 2009.*
