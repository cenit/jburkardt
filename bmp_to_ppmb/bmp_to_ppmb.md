BMP\_TO\_PPMB\
BMP =&gt; binary Portable Pixel Map (PPM) Conversion {#bmp_to_ppmb-bmp-binary-portable-pixel-map-ppm-conversion align="center"}
====================================================

------------------------------------------------------------------------

**BMP\_TO\_PPMB** is a C++ program which converts a Microsoft BMP file
to a binary Portable Pixel Map (PPM) file.

### Usage: {#usage align="center"}

 **bmp\_to\_ppmb** *file.bmp* *file.ppm* 
:   reads data from *file.bmp* and creates an equivalent graphics file
    in *file.ppm*.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**BMP\_TO\_PPMB** is available in [a C++
version](../../cpp_src/bmp_to_ppmb/bmp_to_ppmb.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BMP](../../data/bmp/bmp.html), a data directory which contains a
description and examples of BMP files.

[BMP\_IO](../../cpp_src/bmp_io/bmp_io.html), a C++ library which reads
or writes BMP graphics files.

[PPMB](../../data/ppmb/ppmb.html), a data directory which contains a
description and examples of binary Portable Pixel Map (PPM) files.

[PPMB\_TO\_BMP](../../cpp_src/ppmb_to_bmp/ppmb_to_bmp.html), a C++
program which converts binary Portable Pixel Map (PPM) files to BMP
files.

[PPMB\_IO](../../cpp_src/ppmb_io/ppmb_io.html), a C++ library which
reads or writes binary Portable Pixel Map (PPM) files.

### Reference: {#reference align="center"}

1.  Microsoft Corporation,\
    Microsoft Windows Programmer's Reference,\
    Volume 5; Messages, Structures, and Macros,\
    Microsoft Press, 1993.
2.  [http://netpbm.sourceforge.net](http://netpbm.sourceforge.net/)\
    the NETPBM homepage.

### Source Code: {#source-code align="center"}

-   [bmp\_to\_ppmb.cpp](bmp_to_ppmb.cpp), the source code;

### Examples and Tests: {#examples-and-tests align="center"}

-   [blackbuck.bmp](../../data/bmp/blackbuck.bmp), a sample BMP file (a
    BINARY file!);
-   [blackbuck.ppm](../../data/ppmb/blackbuck.ppm), the converted binary
    PPM file.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for BMP\_TO\_PPMB.
-   **BMP\_TO\_PPMB** reads a BMP file and writes a PPMB file.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **UCMAT\_VERT\_FLIP** swaps rows of a UCMAT, to flip it vertically.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 05 January 2006.*
