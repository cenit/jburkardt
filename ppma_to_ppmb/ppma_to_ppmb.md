PPMA\_TO\_PPMB\
PPMA to PPMB graphics file conversion {#ppma_to_ppmb-ppma-to-ppmb-graphics-file-conversion align="center"}
=====================================

------------------------------------------------------------------------

**PPMA\_TO\_PPMB** is a C++ program which converts PPMA files to PPMB
format.

PPMA\_TO\_PPMB is a simple application which runs on top of the PPMA\_IO
and PPMB\_IO libraries.

### Usage: {#usage align="center"}

 **ppma\_to\_ppmb** *file.ppma* *file.ppmb* 
:   reads the data in *file.ppma* and writes it to *file.ppmb*

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**PPMA\_TO\_PPMB** is available in [a C++
version](../../master/ppma_to_ppmb/ppma_to_ppmb.md) and [a FORTRAN90
version.](../../f_src/ppma_to_ppmb/ppma_to_ppmb.md)

### Related Data and Programs: {#related-data-and-programs align="center"}

[PPMA](../../data/ppma/ppma.md), a data directory which contains
sample ASCII PPM files.

[PPMA\_IO](../../master/ppma_io/ppma_io.md), a C++ library which is
used by **PPMA\_TO\_PPMB** to read in the ASCII PPM file.

[PPMB](../../data/ppmb/ppmb.md), a data directory which contains
sample PPMB files.

[PPMB\_IO](../../master/ppmb_io/ppmb_io.md), a C++ library which is
used by PPMA\_TO\_PPMB to write out the PPMB file.

### Reference: {#reference align="center"}

1.  [the NETPBM homepage](http://netpbm.sourceforge.net/).

### Source Code: {#source-code align="center"}

-   [ppma\_to\_ppmb.cpp](ppma_to_ppmb.cpp), the source code.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for PPMA\_TO\_PPMB.
-   **I4\_MAX** returns the maximum of two integers.
-   **I4VEC\_TO\_UCVEC** converts an I4VEC to a UCVEC.
-   **PPMA\_CHECK\_DATA** checks the data for an ASCII portable pixel
    map file.
-   **PPMA\_READ** reads the header and data from an ASCII portable
    pixel map file.
-   **PPMA\_READ\_DATA** reads the data in an ASCII portable pixel map
    file.
-   **PPMA\_READ\_HEADER** reads the header of an ASCII portable pixel
    map file.
-   **PPMA\_TO\_PPMB** converts an ASCII PPM file to binary PPM format.
-   **PPMB\_WRITE** writes the header and data for a binary portable
    pixel map file.
-   **PPMB\_WRITE\_DATA** writes the data for a binary portable pixel
    map file.
-   **PPMB\_WRITE\_HEADER** writes the header of a binary portable pixel
    map file.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 04 December 2006.*
