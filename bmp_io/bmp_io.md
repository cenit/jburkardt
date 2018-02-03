BMP\_IO\
Microsoft BMP bitmap files\
Read and Write Utilities {#bmp_io-microsoft-bmp-bitmap-files-read-and-write-utilities align="center"}
===========================

------------------------------------------------------------------------

**BMP\_IO** is a C++ library which reads or writes the graphics
information in a Microsoft BMP file.

A user program can employ these routines to read a BMP file and extract
and return the graphics information (RGB pixel arrays), or to write
internal RGB pixel arrays into a properly formatted BMP file. The BMP
file format is used for many of the icons seen cluttering up the desktop
of a Windows machine, for instance.

Of course, another interesting application is to read in a BMP file, and
write out the RGB information to a file in another format.

Since some of the data is multibyte, the format of the file can depend
on whether such data is written with the bytes in "little-endian" or
"big-endian" order. The program maintains a variable called
**BMP\_BYTE\_SWAP** which controls how the program assumes the bytes are
ordered. Setting this variable to **true** show be the appropriate value
for little-endian ordering, while **false** is for big-endian. This
variable can be read by calling the function **bmp\_byte\_swap\_get**,
or set by calling **bmp\_byte\_swap\_set**.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**BMP\_IO** is available in [a C++
version](../../master/bmp_io/bmp_io.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BMP](../../data/bmp/bmp.md), a data directory which contains example
BMP files.

[BMP\_TO\_PPMA](../../master/bmp_to_ppma/bmp_to_ppma.md), a C++
program which converts BMP files to ASCII PPM format.

[BMP\_TO\_PPMB](../../master/bmp_to_ppmb/bmp_to_ppmb.md), a C++
program which converts BMP files to binary PPM format.

[PPMA\_TO\_BMP](../../master/ppma_to_bmp/ppma_to_bmp.md), a C++
program which converts ASCII PPM files to BMP format.

[PPMB\_TO\_BMP](../../master/ppmb_to_bmp/ppmb_to_bmp.md), a C++
program which converts binary PPM files to BMP format.

### Reference: {#reference align="center"}

1.  David Kay and John Levine,\
    Graphics File Formats,\
    Second Edition,\
    McGraw Hill, 1995.
2.  John Miano,\
    Compressed Image File Formats,\
    Addison Wesley, 1999.
3.  Microsoft Corporation,\
    Microsoft Windows Programmer's Reference,\
    Volume 5; Messages, Structures, and Macros,\
    Microsoft Press, 1993.

### Source Code: {#source-code align="center"}

-   [bmp\_io.cpp](bmp_io.cpp), the source code;
-   [bmp\_io.hpp](bmp_io.hpp), the include file;

### Examples and Tests: {#examples-and-tests align="center"}

-   [bmp\_io\_prb.cpp](bmp_io_prb.cpp), a calling program;
-   [bmp\_io\_prb\_output.txt](bmp_io_prb_output.txt), output from a run
    of the calling program;
-   [bmp\_08.bmp](../../data/bmp/bmp_08.bmp), a monochrome (8 bits per
    pixel) BMP file created by the calling program;
-   [bmp\_24.bmp](../../data/bmp/bmp_24.bmp), a three color (24 bits per
    pixel) BMP file created by the calling program;

### List of Routines: {#list-of-routines align="center"}

-   **BMP\_BYTE\_SWAP\_GET** returns the internal value of
    BMP\_BYTE\_SWAP.
-   **BMP\_BYTE\_SWAP\_SET** sets the internal value of BMP\_BYTE\_SWAP.
-   **BMP\_08\_DATA\_READ** reads 8 bit image data of the BMP file.
-   **BMP\_08\_DATA\_WRITE** writes 8 bit image data to a BMP file.
-   **BMP\_24\_DATA\_READ** reads 24 bit image data of the BMP file.
-   **BMP\_24\_DATA\_WRITE** writes 24 bit image data to the BMP file.
-   **BMP\_HEADER1\_PRINT** prints the header information of a BMP file.
-   **BMP\_HEADER1\_READ** reads the header information of a BMP file.
-   **BMP\_HEADER1\_WRITE** writes the header information to a BMP file.
-   **BMP\_HEADER2\_PRINT** prints the bitmap header information of a
    BMP file.
-   **BMP\_HEADER2\_READ** reads the bitmap header information of a BMP
    file.
-   **BMP\_HEADER2\_WRITE** writes the bitmap header information to a
    BMP file.
-   **BMP\_PALETTE\_PRINT** prints the palette data in a BMP file.
-   **BMP\_PALETTE\_READ** reads the palette information of a BMP file.
-   **BMP\_PALETTE\_WRITE** writes the palette data to the BMP file.
-   **BMP\_PRINT\_TEST** tests the BMP print routines.
-   **BMP\_READ** reads the header and data of a BMP file.
-   **BMP\_READ\_TEST** tests the BMP read routines.
-   **BMP\_08\_WRITE** writes the header and data for a monochrome BMP
    file.
-   **BMP\_08\_WRITE\_TEST** tests the BMP write routines.
-   **BMP\_24\_WRITE** writes the header and data for a BMP file using
    three colors.
-   **BMP\_24\_WRITE\_TEST** tests the BMP write routines.
-   **LONG\_INT\_READ** reads a long int from a file.
-   **LONG\_INT\_WRITE** writes a long int to a file.
-   **U\_LONG\_INT\_READ** reads an unsigned long int from a file.
-   **U\_LONG\_INT\_WRITE** writes an unsigned long int to a file.
-   **U\_SHORT\_INT\_READ** reads an unsigned short int from a file.
-   **U\_SHORT\_INT\_WRITE** writes an unsigned short int to a file.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 09 December 2005.*
