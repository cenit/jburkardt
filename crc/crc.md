CRC\
PNG Cyclic Redundancy Checksum {#crc-png-cyclic-redundancy-checksum align="center"}
==============================

------------------------------------------------------------------------

**CRC** is a C++ library which computes the PNG CRC (cyclic redundancy
checksum) for a string of bytes.

PNG is the [Portable Network Graphics format.](../../data/png/png.html)
The PNG checksum algorithm is used as part of the encoding of a PNG
file.

### Languages: {#languages align="center"}

**CRC** is available in [a C++ version](../../cpp_src/crc/crc.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[PNG](../../data/png/png.html), a data directory which contains examples
of Portable Network Graphics (PNG) files, 2D graphics;

### Reference: {#reference align="center"}

1.  World Wide Web Consortium,\
    Portable Network Graphics (PNG) Specification,\
    Second edition, 10 November 2003.

### Source Code: {#source-code align="center"}

-   [crc.cpp](crc.cpp), the source code;
-   [crc.hpp](crc.hpp), the include file;

### Examples and Tests: {#examples-and-tests align="center"}

-   [crc\_prb.cpp](crc_prb.cpp), the calling program;
-   [crc\_prb\_output.txt](crc_prb_output.txt), the sample output.

### List of Routines: {#list-of-routines align="center"}

-   **CRC** returns the CRC of the bytes in BUF\[0...LEN-1\].
-   **MAKE\_CRC\_TABLE** makes the table for a fast CRC computation.
-   **PRINT\_CRC\_TABLE** prints the CRC table.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **UPDATE\_CRC\_C** updates a running CRC with one more character.
-   **UPDATE\_CRC\_S** updates a running CRC with a new string of
    characters.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 30 December 2007.*
