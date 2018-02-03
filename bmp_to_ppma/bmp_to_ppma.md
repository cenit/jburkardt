BMP\_TO\_PPMA\
BMP =&gt; ASCII Portable Pixel Map (PPM) Graphics File Conversion {#bmp_to_ppma-bmp-ascii-portable-pixel-map-ppm-graphics-file-conversion align="center"}
=================================================================

------------------------------------------------------------------------

**BMP\_TO\_PPMA** is a C++ program which converts a Microsoft BMP file
to an ASCII Portable Pixel Map (PPM) file.

### Usage: {#usage align="center"}

 **bmp\_to\_ppma** *file.bmp* *file.ppm* 
:   reads data from *file.bmp* and creates an equivalent graphics file
    in *file.ppm*.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**BMP\_TO\_PPMA** is available in [a C++
version](../../master/bmp_to_ppma/bmp_to_ppma.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BMP](../../data/bmp/bmp.md), a file directory which contains a
description and examples of BMP files.

[BMP\_IO](../../master/bmp_io/bmp_io.md), a C++ library which reads
or writes BMP graphics files.

[PPMA](../../data/ppma/ppma.md), a file directory which contains a
description and examples of ASCII Portable Pixel Map (PPM) files.

[PPMA\_TO\_BMP](../../master/ppma_to_bmp/ppma_to_bmp.md), a C++
program which converts ASCII Portable Pixel Map (PPM) files to BMP
files.

[PPMA\_IO](../../master/ppma_io/ppma_io.md), a C++ library which
reads or writes Portable Pixel Map (PPM) files.

### Reference: {#reference align="center"}

1.  Microsoft Corporation,\
    Microsoft Windows Programmer's Reference,\
    Volume 5; Messages, Structures, and Macros,\
    Microsoft Press, 1993.
2.  [http://netpbm.sourceforge.net](http://netpbm.sourceforge.net/)\
    the NETPBM homepage.

### Source Code: {#source-code align="center"}

-   [bmp\_to\_ppma.cpp](bmp_to_ppma.cpp), the source code;

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for BMP\_TO\_PPMA.
-   **BMP\_TO\_PPMA** reads a BMP file and writes an ASCII PPM file.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **UCMAT\_TO\_I4MAT** converts a UCMAT to an I4MAT.
-   **UCMAT\_VERT\_FLIP** swaps rows of a UCMAT, to flip it vertically.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 02 December 2006.*
