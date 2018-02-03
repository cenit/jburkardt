PPMB\_TO\_BMP\
PPMB =&gt; BMP Conversion {#ppmb_to_bmp-ppmb-bmp-conversion align="center"}
=========================

------------------------------------------------------------------------

**PPMB\_to\_BMP** is a C++ program which converts a binary PPM file to a
Microsoft BMP file.

### Usage: {#usage align="center"}

 **ppmb\_to\_bmp** *file.ppmb* *file.bmp* 
:   reads data from *file.ppmb* and creates an equivalent graphics file
    in *file.bmp*.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**PPMB\_TO\_BMP** is available in [a C++
version](../../cpp_src/ppmb_to_bmp/ppmb_to_bmp.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BMP](../../data/bmp/bmp.html), a data directory which contains a
description and examples of BMP files.

[BMP\_TO\_PPMB](../../cpp_src/bmp_to_ppmb/bmp_to_ppmb.html), a C++
program which converts BMP files to PPMB files.

[BMP\_IO](../../cpp_src/bmp_io/bmp_io.html), a C++ library which
contains many routines required by **PPMA\_TO\_BMP**.

[PPMB](../../data/ppmb/ppmb.html), a data directory which contains a
description and examples of PPMB files.

[PPMB\_IO](../../cpp_src/ppmb_io/ppmb_io.html), a C++ library which
contains many routines required by **PPMB\_TO\_BMP**.

### Reference: {#reference align="center"}

1.  Microsoft Corporation,\
    Microsoft Windows Programmer's Reference,\
    Volume 5; Messages, Structures, and Macros,\
    Microsoft Press, 1993.
2.  [http://netpbm.sourceforge.net](http://netpbm.sourceforge.net/)\
    the NETPBM homepage.

### Source Code: {#source-code align="center"}

-   [ppmb\_to\_bmp.cpp](ppmb_to_bmp.cpp), the source code;

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for PPMB\_TO\_BMP.
-   **PPMB\_TO\_BMP** reads a PPMB (binary PPM) file and writes a BMP
    file.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **UCMAT\_VERT\_FLIP** swaps rows of a UCMAT, to flip it vertically.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 05 January 2006.*
