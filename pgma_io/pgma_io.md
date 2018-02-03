PGMA\_IO\
ASCII Portable Gray Map (PGM) Files\
Read and Write Utilities {#pgma_io-ascii-portable-gray-map-pgm-files-read-and-write-utilities align="center"}
====================================

------------------------------------------------------------------------

**PGMA\_IO** is a C++ library which reads and writes files in the ASCII
Portable Gray Map (PGM) format for 2D grayscale graphics information.

There are many graphics programs, such as XV and GIMP, that can display
images in this format, or translate them to other formats such as BMP,
GIF, JPEG, MacPaint, X Window, and so on.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**PGMA\_IO** is available in [a C
version](../../c_src/pgma_io/pgma_io.md) and [a C++
version](../../master/pgma_io/pgma_io.md) and [a FORTRAN77
version](../../f77_src/pgma_io/pgma_io.md) and [a FORTRAN90
version](../../f_src/pgma_io/pgma_io.md) and [a MATLAB
version](../../m_src/pgma_io/pgma_io.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[PBMA\_IO](../../master/pbma_io/pbma_io.md), a C++ library which
handles the ASCII Portable Bit Map (PBM) format.

[PGMA](../../data/pgma/pgma.md), a data directory which contains
examples of ASCII Portable Gray Map (PGM) files.

[PGMA\_TO\_PGMB](../../master/pgma_to_pgmb/pgma_to_pgmb.md), a C++
program which converts an ASCII Portable Gray Map (PGM) file to a binary
PGM file.

[PGMB\_IO](../../master/pgmb_io/pgmb_io.md), a C++ library which
handles the binary Portable Gray Map (PGM) format.

[PGMB\_TO\_PGMA](../../master/pgmb_to_pgma/pgmb_to_pgma.md), a C++
program which converts a binary Portable Gray Map (PGM) file to an ASCII
PGM file.

[PPMA\_IO](../../master/ppma_io/ppma_io.md), a C++ library which
handles the ASCII Portable Pixel Map (PPM) format.

### Reference: {#reference align="center"}

1.  [the NETPBM homepage](http://netpbm.sourceforge.net/).

### Source Code: {#source-code align="center"}

-   [pgma\_io.cpp](pgma_io.cpp), the source code;
-   [pgma\_io.hpp](pgma_io.hpp), the include file;

### Examples and Tests: {#examples-and-tests align="center"}

-   [pgma\_io\_prb.cpp](pgma_io_prb.cpp), the sample calling program.
-   [pgma\_io\_prb\_output.txt](pgma_io_prb_output.txt), the output
    file.

### List of Routines: {#list-of-routines align="center"}

-   **I4\_MIN** returns the smaller of two integers.
-   **PGMA\_CHECK\_DATA** checks the data for an ASCII portable gray map
    file.
-   **PGMA\_EXAMPLE** sets up some data for an ASCII portable gray map
    file.
-   **PGMA\_READ** reads the header and data from an ASCII portable gray
    map file.
-   **PGMA\_READ\_DATA** reads the data in an ASCII portable gray map
    file.
-   **PGMA\_READ\_HEADER** reads the header of an ASCII portable gray
    map file.
-   **PGMA\_READ\_TEST** tests the ASCII portable gray map read
    routines.
-   **PGMA\_WRITE** writes the header and data for an ASCII portable
    gray map file.
-   **PGMA\_WRITE\_DATA** writes the data for an ASCII portable gray map
    file.
-   **PGMA\_WRITE\_HEADER** writes the header of an ASCII portable gray
    map file.
-   **PGMA\_WRITE\_TEST** tests the ASCII portable gray map write
    routines.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 31 August 2005.*
