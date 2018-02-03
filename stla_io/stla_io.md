STLA\_IO\
Read and Write Routines\
STL ASCII 3D Graphics Files {#stla_io-read-and-write-routines-stl-ascii-3d-graphics-files align="center"}
===========================

------------------------------------------------------------------------

**STLA\_IO** is a C++ library which reads and writes the 3D graphics
information stored in an ASCII STL (stereolithography) file.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**STLA\_IO** is available in [a C++
version](../../master/stla_io/stla_io.md) and [a FORTRAN90
version](../../f_src/stla_io/stla_io.md) and [a MATLAB
version](../../m_src/stla_io/stla_io.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[IVCON](../../master/ivcon/ivcon.md), a C++ program which can convert
graphics information between STLA and other formats.

[IVREAD](../../f_src/ivread/ivread.md), a FORTRAN90 program which can
convert graphics information between STLA and other formats.

[STLA](../../data/stla/stla.md), a data directory which contains some
examples of STLA files.

[STLA\_DISPLAY](../../m_src/stla_display/stla_display.md), a MATLAB
program which can read an STLA file and display it on the screen.

### Reference: {#reference align="center"}

1.  3D Systems, Inc,\
    Stereolithography Interface Specification,\
    October 1989.

### Source Code: {#source-code align="center"}

-   [stla\_io.cpp](stla_io.cpp), the source code.
-   [stla\_io.hpp](stla_io.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [stla\_io\_prb.cpp](stla_io_prb.cpp), a sample calling program.
-   [cube.stla](../../data/stla/cube.stla), a simple STLA file that
    describes a cube.
-   [cube\_new.stla](cube_new.stla), an STLA file describing a cube,
    written by STLA\_WRITE.
-   [stla\_io\_prb\_output.txt](stla_io_prb_output.txt), the output
    file.

### List of Routines: {#list-of-routines align="center"}

-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **I4\_MIN** returns the smaller of two integers.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_MIN** returns the minimum of two R8's.
-   **R8VEC\_CROSS\_3D** computes the cross product of two R8VEC's in
    3D.
-   **R8VEC\_DOT** computes the dot product of two R8VEC's.
-   **R8VEC\_LENGTH** returns the Euclidean length of the vector X
-   **S\_CAT** concatenates two strings to make a third string.
-   **S\_EQI** reports whether two strings are equal, ignoring case.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_R8** reads an R8 from a string.
-   **STLA\_CHECK** checks an ASCII StereoLithography file.
-   **STLA\_FACE\_NODE\_PRINT** prints the node indices for each face.
-   **STLA\_FACE\_NORMAL\_COMPUTE** computes normal vectors for an ASCII
    StereoLithography file.
-   **STLA\_FACE\_NORMAL\_PRINT** prints the normal vectors.
-   **STLA\_NODE\_XYZ\_PRINT** prints the node coordinates.
-   **STLA\_OFFSET\_GET** gets the STLA offset.
-   **STLA\_OFFSET\_SET** sets the STLA offset.
-   **STLA\_READ** reads graphics information from an ASCII
    StereoLithography file.
-   **STLA\_SIZE** determines sizes associated with an STLA file.
-   **STLA\_SIZE\_PRINT** prints sizes associated with an STLA file.
-   **STLA\_WRITE** writes an ASCII STL (stereolithography) file.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **WORD\_NEXT\_READ** "reads" words from a string, one at a time.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 15 February 2007.*
