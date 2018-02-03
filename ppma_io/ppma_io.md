PPMA\_IO\
Portable Pixel Map (ASCII) Files\
Read and Write Utilities {#ppma_io-portable-pixel-map-ascii-files-read-and-write-utilities align="center"}
=================================

------------------------------------------------------------------------

**PPMA\_IO** is a C++ library which reads and writes files in the ASCII
PPM (Portable Pixel Map) format for 2D color graphics information.

There are many graphics programs, such as XV and GIMP, that can display
images in this format, or translate them to other formats such as BMP,
GIF, JPEG, MacPaint, X Window, and so on.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**PPMA\_IO** is available in [a C
version](../../c_src/ppma_io/ppma_io.html) and [a C++
version](../../cpp_src/ppma_io/ppma_io.html) and [a FORTRAN77
version](../../f77_src/ppma_io/ppma_io.html) and [a FORTRAN90
version](../../f_src/ppma_io/ppma_io.html) and [a MATLAB
version](../../m_src/ppma_io/ppma_io.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[MANDELBROT](../../cpp_src/mandelbrot/mandelbrot.html), a C++ program
which generates an ASCII Portable Pixel Map (PPM) image of the
Mandelbrot fractal set;

[PBMA\_IO](../../cpp_src/pbma_io/pbma_io.html), a C++ library which
handles the Portable Bit Map format.

[PGMA\_IO](../../cpp_src/pgma_io/pgma_io.html), a C++ library which
handles the Portable Gray Map format.

### Reference: {#reference align="center"}

1.  [the PPMA Data page](../../data/ppma/ppma.html).
2.  [the NETPBM homepage](http://netpbm.sourceforge.net/).

### Source Code: {#source-code align="center"}

-   [ppma\_io.cpp](ppma_io.cpp), the source code;
-   [ppma\_io.hpp](ppma_io.hpp), the include file;

### Examples and Tests: {#examples-and-tests align="center"}

-   [ppma\_io\_prb.cpp](ppma_io_prb.cpp), the sample calling program.
-   [ppma\_io\_prb\_output.txt](ppma_io_prb_output.txt), the output
    file.
-   [test01.ascii.ppm](test01.ascii.ppm), the ASCII PPM file from
    test 1.
-   [test01.png](test01.png), a PNG version of the file.
-   [test02.ascii.ppm](test02.ascii.ppm), the ASCII PPM file from
    test 2.
-   [test02.png](test02.png), a PNG version of the file.

### List of Routines: {#list-of-routines align="center"}

-   **PPMA\_CHECK\_DATA** checks the data for an ASCII portable pixel
    map file.
-   **PPMA\_EXAMPLE** sets up some PPM data.
-   **PPMA\_READ** reads the header and data from an ASCII portable
    pixel map file.
-   **PPMA\_READ\_DATA** reads the data in an ASCII portable pixel map
    file.
-   **PPMA\_READ\_HEADER** reads the header of an ASCII portable pixel
    map file.
-   **PPMA\_READ\_TEST** tests the ASCII portable pixel map read
    routines.
-   **PPMA\_WRITE** writes the header and data for an ASCII portable
    pixel map file.
-   **PPMA\_WRITE\_DATA** writes the data for an ASCII portable pixel
    map file.
-   **PPMA\_WRITE\_HEADER** writes the header of an ASCII portable pixel
    map file.
-   **PPMA\_WRITE\_TEST** tests the ASCII portable pixel map write
    routines.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 27 May 2011.*
