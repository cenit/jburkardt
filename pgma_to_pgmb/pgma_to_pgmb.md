PGMA\_TO\_PGMB\
convert ASCII PGM to binary PGM graphics file {#pgma_to_pgmb-convert-ascii-pgm-to-binary-pgm-graphics-file align="center"}
=============================================

------------------------------------------------------------------------

**PGMA\_TO\_PGMB** is a C++ program which converts ASCII PGM files to
binary PGM format.

### Usage: {#usage align="center"}

> **pgma\_to\_pgmb** *file1* *file2*

where

-   *file1* is the name of an existing PGM file in ASCII format;
-   *file2* is the name of the PGM file in binary format to be created.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**PGMA\_TO\_PGMB** is available in [a C++
version](../../master/pgma_to_pgmb/pgma_to_pgmb.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[PGMA](../../data/pgma/pgma.md), a data directory which contains
sample ASCII PGM files.

[PGMA\_IO](../../master/pgma_io/pgma_io.md), a C++ library which is
used by **PGMA\_TO\_PGMB** to read in the ASCII PGM file.

[PGMB](../../data/pgmb/pgmb.md), a data directory which contains
sample binary PGM files.

[PGMB\_IO](../../master/pgmb_io/pgmb_io.md), a C++ library which is
used by PGMA\_TO\_PGMB to write out the binary PGM file.

[PGMB\_TO\_PGMA](../../master/pgmb_to_pgma/pgmb_to_pgma.md), a C++
program which converts a binary PGM file to ASCII PGM format.

### Reference: {#reference align="center"}

1.  [the NETPBM homepage](http://netpbm.sourceforge.net/).

### Source Code: {#source-code align="center"}

-   [pgma\_to\_pgmb.cpp](pgma_to_pgmb.cpp), the source code.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for PGMA\_TO\_PGMB.
-   **I4VEC\_TO\_UCVEC** converts an I4VEC into UNSIGNED CHAR's.
-   **PGMA\_CHECK\_DATA** checks the data for an ASCII PGM file.
-   **PGMA\_READ** reads the header and data from an ASCII PGM file.
-   **PGMA\_READ\_DATA** reads the data in an ASCII PGM file.
-   **PGMA\_READ\_HEADER** reads the header of an ASCII PGM file.
-   **PGMA\_TO\_PGMB** converts an ASCII PGM file to binary PGM format.
-   **PGMB\_WRITE** writes the header and data for a binary portable
    gray map file.
-   **PGMB\_WRITE\_DATA** writes the data for a binary portable gray map
    file.
-   **PGMB\_WRITE\_HEADER** writes the header of a binary portable gray
    map file.
-   **S\_LEN\_TRIM2** returns the length of a string to the last
    nonblank.
-   **S\_WORD\_EXTRACT\_FIRST2** extracts the first word from a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 30 March 2011.*
