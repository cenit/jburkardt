PPMB\_TO\_PPMA\
PPMB =&gt; PPMA\
(binary to ASCII) conversion {#ppmb_to_ppma-ppmb-ppma-binary-to-ascii-conversion align="center"}
============================

------------------------------------------------------------------------

**PPMB\_TO\_PPMA** is a C++ program which converts a binary Portable
Pixel Map (PPM) file to an ASCII PPM file.

### Usage: {#usage align="center"}

 **ppmb\_to\_ppma** *file.ppmb* *file.ppma* 
:   reads the information in the binary PPM file *file.ppmb* and
    rewrites it to the ASCII PPM file *file.ppma*.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**PPMB\_TO\_PPMA** is available in [a C++
version](../../cpp_src/ppmb_to_ppma/ppmb_to_ppma.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[I2\_BINARY\_TO\_ASCII](../../cpp_src/i2_binary_to_ascii/i2_binary_to_ascii.html)
a C++ program which converts a file of short int (I2) data from binary
to ASCII format.

[PPMA](../../data/ppma/ppma.html), a data directory which contains a
description and examples of the ASCII PPM format.

[PPMA\_IO](../../cpp_src/ppma_io/ppma_io.html), a C++ library which
reads and writes files in the ASCII PPM format.

[PPMB](../../data/ppmb/ppmb.html), a data directory which contains a
description and examples of the binary PPM format.

[PPMB\_IO](../../cpp_src/ppmb_io/ppmb_io.html), a C++ library which
reads and writes files in the binary PPM format.

### Reference: {#reference align="center"}

1.  [http://netpbm/sourceforge.net/](http://netpbm.sourceforge.net/)\
    the NETPBM homepage.

### Source Code: {#source-code align="center"}

-   [ppmb\_to\_ppma.cpp](ppmb_to_ppma.cpp), the source code.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for PPMB\_TO\_PPMA.
-   **I4\_MAX** returns the maximum of two integers.
-   **PPMA\_WRITE** writes the header and data for an ASCII portable
    pixel map file.
-   **PPMA\_WRITE\_DATA** writes the data for an ASCII portable pixel
    map file.
-   **PPMA\_WRITE\_HEADER** writes the header of an ASCII portable pixel
    map file.
-   **PPMB\_CHECK\_DATA** checks the data for a binary portable pixel
    map file.
-   **PPMB\_READ** reads the header and data from a binary portable
    pixel map file.
-   **PPMB\_READ\_DATA** reads the data in a binary portable pixel map
    file.
-   **PPMB\_READ\_HEADER** reads the header of a binary portable pixel
    map file.
-   **PPMB\_TO\_PPMA** converts one PPMB file to PPMA format.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **UCMAT\_TO\_I4MAT** converts a UCMAT to an I4MAT.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 31 August 2005.*
