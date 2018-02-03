GRID\_TO\_BMP\
Microsoft BMP Image of 2D Grid Data {#grid_to_bmp-microsoft-bmp-image-of-2d-grid-data align="center"}
===================================

------------------------------------------------------------------------

**GRID\_TO\_BMP** is a C++ program which creates a Microsoft BMP color
image file that represents scalar data read from a text file.

The text file should contain the values of a quantity on an M by N grid,
stored as an M by N array, which we will call "U".

The first two records of the text file should contain the values of M
and N, respectively.

There should follow M records, each of length N, containing, in order,
the rows of U.

### Usage: {#usage align="center"}

> **grid\_to\_bmp** *input\_file* *output\_file*

where

-   *input\_file* is the text file whose first two lines record the
    values of M and N, with each succeeding line containing the N values
    of the next row of data.
-   *output\_file* is the name of the output file, a BMP graphics file
    containing an image of the data.

### Languages: {#languages align="center"}

**GRID\_TO\_BMP** is available in [a C++
version](../../cpp_src/grid_to_bmp/grid_to_bmp.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BMP](../../data/bmp/bmp.html), a data directory which contains a few
BMP files.

[BMP\_IO](../../cpp_src/bmp_io/bmp_io.html), a C++ library which reads
or writes BMP graphics files.

[BMP\_TO\_PPMA](../../cpp_src/bmp_to_ppma/bmp_to_ppma.html), a C++
program which converts BMP files to ASCII Portable Pixel Map (PPM)
format.

[BMP\_TO\_PPMB](../../cpp_src/bmp_to_ppmb/bmp_to_ppmb.html), a C++
program which converts BMP files to binary Portable Pixel Map (PPM)
format.

[HEATED\_PLATE](../../c_src/heated_plate/heated_plate.html), a C program
which solves the steady state heat equation in a 2D rectangular region,
and writes the data to a file suitable for input to GRID\_TO\_BMP.

[PPMA\_TO\_BMP](../../cpp_src/ppma_to_bmp/ppma_to_bmp.html), a C++
program which converts ASCII Portable Pixel Map (PPM) files to BMP
format.

[PPMB\_TO\_BMP](../../cpp_src/ppmb_to_bmp/ppmb_to_bmp.html), a C++
program which converts binary Portable Pixel Map (PPM) files to BMP
format.

### Reference: {#reference align="center"}

1.  David Kay and John Levine,\
    Graphics File Formats,\
    Second Edition,\
    McGraw Hill, 1995.
2.  John Miano,\
    Compressed Image File Formats,\
    Addison Wesley, 1999.
3.  Microsoft Corporation,\
    Microsoft Windows Programmer's Reference,\
    Volume 5; Messages, Structures, and Macros,\
    Microsoft Press, 1993.

### Source Code: {#source-code align="center"}

-   [grid\_to\_bmp.cpp](grid_to_bmp.cpp), the source code;

### Examples and Tests: {#examples-and-tests align="center"}

**SOL\_100x500** is a solution of the steady state heat equation on a
100x500 grid, computed by the HEATED\_PLATE program.

-   [sol\_100x500.txt](sol_100x500.txt),
-   [sol\_100x500.bmp](sol_100x500.bmp), the BMP image file.
-   [sol\_100x500.png](sol_100x500.png), the PNG image file.

**SOL\_200x500** is a solution of the steady state heat equation on a
200x500 grid, computed by the HEATED\_PLATE program.

-   [sol\_200x500.txt](sol_200x500.txt),
-   [sol\_200x500.bmp](sol_200x500.bmp), the BMP image file.
-   [sol\_200x500.png](sol_200x500.png), the PNG image file.

**SOL\_500x500** is a solution of the steady state heat equation on a
500x500 grid, computed by the HEATED\_PLATE program.

-   [sol\_500x500.txt](sol_500x500.txt),
-   [sol\_500x500.bmp](sol_500x500.bmp), the BMP image file.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 14 September 2010.*
