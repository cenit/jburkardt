PPMA\_TO\_BMP\
PPMA =&gt; BMP Graphics File Conversion {#ppma_to_bmp-ppma-bmp-graphics-file-conversion align="center"}
=======================================

------------------------------------------------------------------------

**PPMA\_TO\_BMP** is a C++ program which converts an ASCII Portable
Pixel Map (PPM) file to a Microsoft BMP file.

### Usage: {#usage align="center"}

 **ppma\_to\_bmp** *file.ppma* *file.bmp* 
:   reads data from *file.ppma* and creates an equivalent graphics file
    in *file.bmp*.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**PPMA\_TO\_BMP** is available in [a C++
version](../../cpp_src/ppma_to_bmp/ppma_to_bmp.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BMP](../../data/bmp/bmp.html), a data directory which contains a
description and examples of BMP files.

[BMP\_TO\_PPMA](../../cpp_src/bmp_to_ppma/bmp_to_ppma.html), a C++
program which converts BMP files to ASCII PPM files.

[BMP\_IO](../../cpp_src/bmp_io/bmp_io.html), a C++ library which
contains many routines required by PPMA\_TO\_BMP.

[PPMA](../../data/ppma/ppma.html), a data directory which contains a
description and examples of ASCII PPM files.

[PPMA\_IO](../../cpp_src/ppma_io/ppma_io.html), a C++ library which
contains many routines required by PPMA\_TO\_BMP.

### Reference: {#reference align="center"}

1.  Microsoft Corporation,\
    Microsoft Windows Programmer's Reference,\
    Volume 5; Messages, Structures, and Macros,\
    Microsoft Press, 1993.
2.  [http://netpbm.sourceforge.net](http://netpbm.sourceforge.net/)\
    the NETPBM homepage.

### Source Code: {#source-code align="center"}

-   [ppma\_to\_bmp.cpp](ppma_to_bmp.cpp), the source code;

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for PPMA\_TO\_BMP.
-   **PPMA\_TO\_BMP** reads a PPMA (ASCII PPM) file and writes a BMP
    file.
-   **I4MAT\_VERT\_FLIP** swaps rows of an I4MAT, to flip it vertically.
-   **I4MAT\_TO\_UCMAT** converts an I4MAT to a UCMAT.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 06 January 2006.*
