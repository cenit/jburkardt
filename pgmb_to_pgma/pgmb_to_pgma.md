PGMB\_TO\_PGMA\
Convert binary PGM Graphics File to ASCII PGM Format {#pgmb_to_pgma-convert-binary-pgm-graphics-file-to-ascii-pgm-format align="center"}
====================================================

------------------------------------------------------------------------

**PGMB\_TO\_PGMA** is a C++ program which converts a binary PGM file to
ASCII PGM format.

### Usage: {#usage align="center"}

> **pgmb\_to\_pgma** *file1* *file2*

where

-   *file1* is the name of an existing PGM file in binary format;
-   *file2* is the name of the PGM file in ASCII format to be created.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**PGMB\_TO\_PGMA** is available in [a C++
version](../../master/pgmb_to_pgma/pgmb_to_pgma.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[I2\_BINARY\_TO\_ASCII](../../master/i2_binary_to_ascii/i2_binary_to_ascii.md)
a C++ program which converts a file of short int (I2) data from binary
to ASCII format.

[PGMA](../../data/pgma/pgma.md), a data directory which contains a
description and examples of the ASCII PGM format.

[PGMA\_IO](../../master/pgma_io/pgma_io.md), a C++ library which
reads and writes files in the ASCII PGM format.

[PGMA\_TO\_PGMB](../../master/pgma_to_pgmb/pgma_to_pgmb.md), a C++
program which converts an ASCII PGM file to binary PGM format.

[PGMB](../../data/pgmb/pgmb.md), a data directory which contains a
description and examples of the binary PGM format.

[PGMB\_IO](../../master/pgmb_io/pgmb_io.md), a C++ library which
reads and writes files in the binary PGM format.

### Reference: {#reference align="center"}

1.  [http://netpbm/sourceforge.net/](http://netpbm.sourceforge.net/)\
    the NETPBM homepage.

### Source Code: {#source-code align="center"}

-   [pgmb\_to\_pgma.cpp](pgmb_to_pgma.cpp), the source code.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for PGMB\_TO\_PGMA.
-   **CH\_CAP** capitalizes a single character.
-   **PGMA\_WRITE** writes the header and data for an ASCII PGM file.
-   **PGMA\_WRITE\_DATA** writes the data for an ASCII PGM file.
-   **PGMA\_WRITE\_HEADER** writes the header of an ASCII PGM file.
-   **PGMB\_CHECK\_DATA** checks the data for a binary portable gray map
    file.
-   **PGMB\_READ** reads the header and data from a binary portable gray
    map file.
-   **PGMB\_READ\_DATA** reads the data in a binary portable gray map
    file.
-   **PGMB\_READ\_HEADER** reads the header of a binary portable gray
    map file.
-   **PGMB\_TO\_PGMA** converts one PGMB file to PGMA format.
-   **S\_EQI** reports whether two strings are equal, ignoring case.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_WORD\_EXTRACT\_FIRST** extracts the first word from a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **UCVEC\_TO\_I4VEC** converts a vector of UNSIGNED CHAR's to an
    I4VEC.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 30 March 2011.*
