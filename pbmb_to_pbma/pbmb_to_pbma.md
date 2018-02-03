PBMB\_TO\_PBMA\
Convert binary PBM Graphics File to ASCII PBM Format {#pbmb_to_pbma-convert-binary-pbm-graphics-file-to-ascii-pbm-format align="center"}
====================================================

------------------------------------------------------------------------

**PBMB\_TO\_PBMA** is a C++ program which converts a binary PBM file to
ASCII PBM format.

### Usage: {#usage align="center"}

> **pbmb\_to\_pbma** *file1* *file2*

where

-   *file1* is the name of an existing PBM file in binary format;
-   *file2* is the name of the PBM file in ASCII format to be created.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**PBMB\_TO\_PBMA** is available in [a C++
version](../../cpp_src/pbmb_to_pbma/pbmb_to_pbma.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[I2\_BINARY\_TO\_ASCII](../../cpp_src/i2_binary_to_ascii/i2_binary_to_ascii.html)
a C++ program which converts a file of short int (I2) data from binary
to ASCII format.

[PBMA](../../data/pbma/pbma.html), a data directory which contains a
description and examples of the ASCII PBM format.

[PBMA\_IO](../../cpp_src/pbma_io/pBma_io.html), a C++ library which
reads and writes files in the ASCII PBM format.

[PBMA\_TO\_PBMB](../../cpp_src/pbma_to_pbmb/pbma_to_pbmb.html), a C++
program which converts an ASCII PBM file to binary PBM format.

[PBMB](../../data/pbmb/pbmb.html), a data directory which contains a
description and examples of the binary PBM format.

[PBMB\_IO](../../cpp_src/pbmb_io/pbmb_io.html), a C++ library which
reads and writes files in the binary PBM format.

### Reference: {#reference align="center"}

1.  [http://netpbm/sourceforge.net/](http://netpbm.sourceforge.net/)\
    the NETPBM homepage.

### Source Code: {#source-code align="center"}

-   [pbmb\_to\_pbma.cpp](pbmb_to_pbma.cpp), the source code.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for PBMB\_TO\_PBMA.
-   **CH\_CAP** capitalizes a single character.
-   **PBMA\_WRITE** writes the header and data for an ASCII PBM file.
-   **PBMA\_WRITE\_DATA** writes the data for an ASCII PBM file.
-   **PBMA\_WRITE\_HEADER** writes the header of an ASCII PBM file.
-   **PBMB\_CHECK\_DATA** checks the data for a binary portable bit map
    file.
-   **PBMB\_READ** reads the header and data from a binary portable bit
    map file.
-   **PBMB\_READ\_DATA** reads the data in a binary portable bit map
    file.
-   **PBMB\_READ\_HEADER** reads the header of a binary portable bit map
    file.
-   **PBMB\_TO\_PBMA** converts one PBMB file to PBMA format.
-   **S\_EQI** reports whether two strings are equal, ignoring case.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_WORD\_EXTRACT\_FIRST** extracts the first word from a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 01 April 2011.*
