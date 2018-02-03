PGMB\_IO\
binary Portable Gray Map (PGM) Files\
Read and Write Utilities {#pgmb_io-binary-portable-gray-map-pgm-files-read-and-write-utilities align="center"}
=====================================

------------------------------------------------------------------------

**PGMB\_IO** is a C++ library which reads and writes files in the binary
Portable Gray Map (PGM) format for 2D grayscale graphics information.

There are many graphics programs, such as XV and GIMP, that can display
images in this format, or translate them to other formats such as BMP,
GIF, JPEG, MacPaint, X Window, and so on.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**PGMB\_IO** is available in [a C
version](../../c_src/pgmb_io/pgmb_io.html) and [a C++
version](../../cpp_src/pgmb_io/pgmb_io.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[PBMB\_IO](../../cpp_src/pbmb_io/pbmb_io.html), a C++ library which
handles the Portable Bit Map (PBM) format.

[PGMB](../../data/pgmb/pgmb.html), a data directory which contains
examples of binary Portable Gray Map (PGM) files.

[PGMA\_IO](../../cpp_src/pgma_io/pgma_io.html), a C++ library which
handles the ASCII Portable Gray Map (PGM) format.

[PGMA\_TO\_PGMB](../../cpp_src/pgma_to_pgmb/pgma_to_pgmb.html), a C++
program which converts an ASCII Portable Gray Map (PGM) file to a binary
PGM file.

[PPMB\_IO](../../cpp_src/ppmb_io/ppmb_io.html), a C++ library which
handles the binary Portable Pixel Map (PPM) format.

[PGMB\_TO\_PGMA](../../cpp_src/pgmb_to_pgma/pgmb_to_pgma.html), a C++
program which converts a binary Portable Gray Map (PGM) file to an ASCII
PGM file.

### Reference: {#reference align="center"}

1.  [the NETPBM homepage](http://netpbm.sourceforge.net/).

### Source Code: {#source-code align="center"}

-   [pgmb\_io.cpp](pgmb_io.cpp), the source code;
-   [pgmb\_io.hpp](pgmb_io.hpp), the include file for PGMB\_IO;

### Examples and Tests: {#examples-and-tests align="center"}

-   [pgmb\_io\_prb.cpp](pgmb_io_prb.cpp), the sample calling program.
-   [pgmb\_io\_prb\_output.txt](pgmb_io_prb_output.txt), the sample
    output file.
-   [pgmb\_io\_prb\_01.pgm](pgmb_io_prb_01.pgm), a binary PGM file
    created by the program.
-   [pgmb\_io\_prb\_02.pgm](pgmb_io_prb_02.pgm), a binary PGM file
    created by the program.

### List of Routines: {#list-of-routines align="center"}

-   **CH\_CAP** capitalizes a single character.
-   **PGMB\_CHECK\_DATA** checks the data for a binary portable gray map
    file.
-   **PGMB\_EXAMPLE** sets up some data for a binary portable gray map
    file.
-   **PGMB\_READ** reads the header and data from a binary portable gray
    map file.
-   **PGMB\_READ\_DATA** reads the data in a binary portable gray map
    file.
-   **PGMB\_READ\_HEADER** reads the header of a binary portable gray
    map file.
-   **PGMB\_READ\_TEST** tests the binary portable gray map read
    routines.
-   **PGMB\_WRITE** writes the header and data for a binary portable
    gray map file.
-   **PGMB\_WRITE\_DATA** writes the data for a binary portable gray map
    file.
-   **PGMB\_WRITE\_HEADER** writes the header of a binary portable gray
    map file.
-   **PGMB\_WRITE\_TEST** tests the binary portable gray map write
    routines.
-   **S\_EQI** reports whether two strings are equal, ignoring case.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_WORD\_EXTRACT\_FIRST** extracts the first word from a string.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 16 June 2012.*
