PBMA\_TO\_PBMB\
convert ASCII PBM to binary PBM graphics file {#pbma_to_pbmb-convert-ascii-pbm-to-binary-pbm-graphics-file align="center"}
=============================================

------------------------------------------------------------------------

**PBMA\_TO\_PBMB** is a C++ program which converts ASCII PBM files to
binary PBM format.

### Usage: {#usage align="center"}

> **pbma\_to\_pbmb** *file1* *file2*

where

-   *file1* is the name of an existing PBM file in ASCII format;
-   *file2* is the name of the PBM file in binary format to be created.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**PBMA\_TO\_PBMB** is available in [a C++
version](../../master/pbma_to_pbmb/pbma_to_pbmb.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[PBMA](../../data/pbma/pbma.md) a data directory which contains sample
ASCII PBM files.

[PBMA\_IO](../../master/pbma_io/pbma_io.md), a C++ library which is
used by **PBMA\_TO\_PBMB** to read in the ASCII PBM file.

[PBMB](../../data/pbmb/pbmb.md), a data directory which contains
sample binary PBM files.

[PBMB\_IO](../../master/pbmb_io/pbmb_io.md), a C++ library which is
used by **PBMA\_TO\_PBMB** to write out the binary PBM file.

[PBMB\_TO\_PBMA](../../master/pbmb_to_pbma/pbmb_to_pbma.md), a C++
program which converts a binary PBM file to ASCII PBM format.

### Reference: {#reference align="center"}

1.  [the NETPBM homepage](http://netpbm.sourceforge.net/).

### Source Code: {#source-code align="center"}

-   [pbma\_to\_pbmb.cpp](pbma_to_pbmb.cpp), the source code.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for PBMA\_TO\_PBMB.
-   **PBMA\_CHECK\_DATA** checks the data for an ASCII PBM file.
-   **PBMA\_READ** reads the header and data from an ASCII PBM file.
-   **PBMA\_READ\_DATA** reads the data in an ASCII PBM file.
-   **PBMA\_READ\_HEADER** reads the header of an ASCII PBM file.
-   **PBMA\_TO\_PBMB** converts an ASCII PBM file to binary PBM format.
-   **PBMB\_WRITE** writes the header and data for a binary portable bit
    map file.
-   **PBMB\_WRITE\_DATA** writes the data for a binary portable bit map
    file.
-   **PBMB\_WRITE\_HEADER** writes the header of a binary portable bit
    map file.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_WORD\_EXTRACT\_FIRST** extracts the first word from a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 01 April 2011.*
