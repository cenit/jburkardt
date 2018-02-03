PPMB\_IO\
binary Portable Pixel Map (PPM) Files\
Read and Write Utilities {#ppmb_io-binary-portable-pixel-map-ppm-files-read-and-write-utilities align="center"}
======================================

------------------------------------------------------------------------

**PPMB\_IO** is a C++ library which reads and writes files in the binary
Portable Pixel Map (PPM) format for 2D color graphics information.

There are many graphics programs, such as XV and GIMP, that can display
images in this format, or translate them to other formats such as BMP,
GIF, JPEG, MacPaint, X Window, and so on.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**PPMB\_IO** is available in [a C
version](../../c_src/ppmb_io/ppmb_io.md) and [a C++
version](../../master/ppmb_io/ppmb_io.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BMP\_TO\_PPMB](../../master/bmp_to_ppmb/bmp_to_ppmb.md), a C++
program which converts BMP files to binary Portable Pixel Map (PPM)
files.

[PBMB\_IO](../../master/pbmb_io/pbmb_io.md), a C++ library which can
read or write binary Portable Bit Map (PBM) files.

[PGMB\_IO](../../master/pgmb_io/pgmb_io.md), a C++ library which can
read or write binary Portable Gray Map (PGM) files.

[PPMA\_IO](../../master/ppma_io/ppma_io.md), a C++ library which can
read or write ASCII Portable Pixel Map (PPM) files.

[PPMA\_TO\_PPMB](../../master/ppma_to_ppmb/ppma_to_ppmb.md), a C++
program which converts ASCII Portable Pixel Map (PPM) files to binary
PPM files.

[PPMB\_TO\_BMP](../../master/ppmb_to_bmp/ppmb_to_bmp.md), a C++
program which converts binary Portable Pixel Map (PPM) files to BMP
files.

[PPMB\_TO\_PPMA](../../master/ppmb_to_ppma/ppmb_to_ppma.md), a C++
program which converts binary Portable Pixel Map (PPM) files to ASCII
PPM files.

### Reference: {#reference align="center"}

1.  [the PPMB Data page](../../data/ppmb/ppmb.md).
2.  [the NETPBM homepage](http://netpbm.sourceforge.net/).

### Source Code: {#source-code align="center"}

-   [ppmb\_io.cpp](ppmb_io.cpp), the source code;
-   [ppmb\_io.hpp](ppmb_io.hpp), the include file;

### Examples and Tests: {#examples-and-tests align="center"}

-   [ppmb\_io\_prb.cpp](ppmb_io_prb.cpp), the sample calling program.
-   [ppmb\_io\_prb\_output.txt](ppmb_io_prb_output.txt), the output
    file.
-   [ppmb\_io\_prb.ppm](ppmb_io_prb.ppm), a binary PPM file created by
    the program.

### List of Routines: {#list-of-routines align="center"}

-   **I4\_MAX** returns the maximum of two integers.
-   **PPMB\_CHECK\_DATA** checks the data for a binary portable pixel
    map file.
-   **PPMB\_EXAMPLE** sets up some RGB data.
-   **PPMB\_READ** reads the header and data from a binary portable
    pixel map file.
-   **PPMB\_READ\_DATA** reads the data in a binary portable pixel map
    file.
-   **PPMB\_READ\_HEADER** reads the header of a binary portable pixel
    map file.
-   **PPMB\_READ\_TEST** tests the binary portable pixel map read
    routines.
-   **PPMB\_WRITE** writes the header and data for a binary portable
    pixel map file.
-   **PPMB\_WRITE\_DATA** writes the data for a binary portable pixel
    map file.
-   **PPMB\_WRITE\_HEADER** writes the header of a binary portable pixel
    map file.
-   **PPMB\_WRITE\_TEST** tests the binary portable pixel map write
    routines.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 26 September 2008.*
