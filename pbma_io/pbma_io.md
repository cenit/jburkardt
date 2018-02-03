PBMA\_IO\
ASCII Portable Bit Map (PBM) Files\
Read and Write Utilities {#pbma_io-ascii-portable-bit-map-pbm-files-read-and-write-utilities align="center"}
===================================

------------------------------------------------------------------------

**PBMA\_IO** is a C++ library which reads and writes files in the ASCII
Portable Bit Map (PBM) format for 2D bit map graphics information.

There are many graphics programs, such as XV and GIMP, that can display
images in this format, or translate them to other formats such as BMP,
GIF, JPEG, MacPaint, X Window, and so on.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**PBMA\_IO** is available in [a C
version](../../c_src/pbma_io/pbma_io.md) and [a C++
version](../../master/pbma_io/pbma_io.md) and [a FORTRAN77
version](../../f77_src/pbma_io/pbma_io.md) and [a FORTRAN90
version](../../f_src/pbma_io/pbma_io.md) and [a MATLAB
version](../../m_src/pbma_io/pbma_io.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[PBMA](../../data/pbma/pbma.md), a data directory which contains some
example ASCII Portable Bit Map (PBM) files.

[PBMB\_IO](../../master/pbmb_io/pbmb_io.md), a C++ library which
handles the binary Portable Bit Map (PBM) format.

[PGMA\_IO](../../master/pgma_io/pgma_io.md), a C++ library which
handles the ASCII Portable Gray Map (PGM) format.

[PPMA\_IO](../../master/ppma_io/ppma_io.md), a C++ library which
handles the ASCII Portable Pixel Map (PPM) format.

### Reference: {#reference align="center"}

1.  [the NETPBM homepage](http://netpbm.sourceforge.net/).

### Source Code: {#source-code align="center"}

-   [pbma\_io.cpp](pbma_io.cpp), the source code;
-   [pbma\_io.hpp](pbma_io.hpp), the include file for PBMA\_IO;

### Examples and Tests: {#examples-and-tests align="center"}

-   [pbma\_io\_prb.cpp](pbma_io_prb.cpp), the sample calling program.
-   [pbma\_io\_prb\_output.txt](pbma_io_prb_output.txt), the output
    file.

### List of Routines: {#list-of-routines align="center"}

-   **PBMA\_CHECK\_DATA** checks the data for an ASCII PBM file.
-   **PBMA\_EXAMPLE** sets up some ASCII PBM data.
-   **PBMA\_READ** reads the header and data from an ASCII PBM file.
-   **PBMA\_READ\_DATA** reads the data in an ASCII PBM file.
-   **PBMA\_READ\_HEADER** reads the header of an ASCII PBM file.
-   **PBMA\_READ\_TEST** tests the ASCII PBM read routines.
-   **PBMA\_WRITE** writes the header and data for an ASCII PBM file.
-   **PBMA\_WRITE\_DATA** writes the data for an ASCII PBM file.
-   **PBMA\_WRITE\_HEADER** writes the header of an ASCII PBM file.
-   **PBMA\_WRITE\_TEST** tests the ASCII PBM write routines.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 05 June 2010.*
