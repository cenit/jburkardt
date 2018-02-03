PBMB\_IO\
Portable Bit Map (PBM) binary Files\
Read and Write Utilities {#pbmb_io-portable-bit-map-pbm-binary-files-read-and-write-utilities align="center"}
====================================

------------------------------------------------------------------------

**PBMB\_IO** is a C++ library which reads and writes files in the binary
Portable Bit Map (PBM) format for 2D bit map graphics information.

There are many graphics programs, such as XV and GIMP, that can display
images in this format, or translate them to other formats such as BMP,
GIF, JPEG, MacPaint, X Window, and so on.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**PBMB\_IO** is available in [a C
version](../../c_src/pbmb_io/pbmb_io.html) and [a C++
version](../../cpp_src/pbmb_io/pbmb_io.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[PBMA\_IO](../../cpp_src/pbma_io/pbma_io.html), a C++ library which
handles the ASCII Portable Bit Map (PBM) format.

[PBMB](../../data/pbmb/pbmb.html), a data directory which contains some
example binary Portable Bit Map (PBM) files.

[PGMB\_IO](../../cpp_src/pgmb_io/pgmb_io.html), a C++ library which
handles the binary Portable Gray Map (PGM) format.

[PPMB\_IO](../../cpp_src/ppmb_io/ppmb_io.html), a C++ library which
handles the binary Portable Pixel Map (PPM) format.

### Reference: {#reference align="center"}

1.  [the NETPBM homepage](http://netpbm.sourceforge.net/).

### Source Code: {#source-code align="center"}

-   [pbmb\_io.cpp](pbmb_io.cpp), the source code;
-   [pbmb\_io.hpp](pbmb_io.hpp), the include file;

### Examples and Tests: {#examples-and-tests align="center"}

-   [pbmb\_io\_prb.cpp](pbmb_io_prb.cpp), the sample calling program.
-   [pbmb\_io\_prb.txt](pbmb_io_prb.txt), the output file.
-   [pbmb\_io\_prb\_01.pbm](pbmb_io_prb_01.pbm), a binary PBM file
    created by the program.
-   [pbmb\_io\_prb\_02.pbm](pbmb_io_prb_02.pbm), a binary PBM file
    created by the program.

### List of Routines: {#list-of-routines align="center"}

-   **CH\_CAP** capitalizes a single character.
-   **PBMB\_CHECK\_DATA** checks the data for a binary portable bit map
    file.
-   **PBMB\_EXAMPLE** sets up some sample PBMB data.
-   **PBMB\_READ** reads the header and data from a binary portable bit
    map file.
-   **PBMB\_READ\_DATA** reads the data in a binary portable bit map
    file.
-   **PBMB\_READ\_HEADER** reads the header of a binary portable bit map
    file.
-   **PBMB\_READ\_TEST** tests the binary portable bit map read
    routines.
-   **PBMB\_WRITE** writes the header and data for a binary portable bit
    map file.
-   **PBMB\_WRITE\_DATA** writes the data for a binary portable bit map
    file.
-   **PBMB\_WRITE\_HEADER** writes the header of a binary portable bit
    map file.
-   **PBMB\_WRITE\_TEST** tests the binary portable bit map write
    routines.
-   **S\_EQI** reports whether two strings are equal, ignoring case.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_WORD\_EXTRACT\_FIRST** extracts the first word from a string.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 16 June 2012.*
