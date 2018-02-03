I2\_BINARY\_TO\_ASCII\
Convert I2 Data from Binary to ASCII Format {#i2_binary_to_ascii-convert-i2-data-from-binary-to-ascii-format align="center"}
===========================================

------------------------------------------------------------------------

**I2\_BINARY\_TO\_ASCII** is a C++ program which converts a file of I2
data from binary to ASCII format.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**I2\_BINARY\_TO\_ASCII** is available in [a C++
version](../../cpp_src/i2_binary_to_ascii/i2_binary_to_ascii.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BIO](../../c_src/bio/bio.html), a C library which manages binary I/O,
by Greg Hood.

[MRI\_TO\_ASCII](../../c_src/mri_to_ascii/mri_to_ascii.html), a C
program which converts the binary data in a magnetic resonance imaging
(MRI) file to ASCII text.

[PBMB\_TO\_PBMA](../../cpp_src/pbmb_to_pbma/pbmb_to_pbma.html), a C++
program which converts a binary Portable Bit Map (PBM) file to an ASCII
PBM file;

[PGMB\_TO\_PGMA](../../cpp_src/pgmb_to_pgma/pgmb_to_pgma.html), a C++
program which converts a binary Portable Gray Map (PGM) file to an ASCII
PGM file;

[PPMB\_TO\_PPMA](../../cpp_src/ppmb_to_ppma/ppmb_to_ppma.html), a C++
program which converts a binary Portable Pixel Map (PPM) to an ASCII PPM
graphics file;

[UUENCODE](../../c_src/uuencode/uuencode.html), a C program which takes
an input file, especially a binary file, and creates a UU encoded copy
that is a text file, suitable for transmission through mail or other
text-only systems, by Stephen Satchell and Chuck Forsberg.

### Source Code: {#source-code align="center"}

-   [i2\_binary\_to\_ascii.cpp](i2_binary_to_ascii.cpp), the source
    code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [i2\_binary\_to\_ascii\_output.txt](i2_binary_to_ascii_output.txt),
    the output file.
-   [sealevel.bin](sealevel.bin), a binary file containing sealevel data
    as I2 values, representing 301 rows and 121 columns of sea level
    data.
-   [sealevel.txt](sealevel.txt), an ASCII text file containing the same
    sealevel data after conversion.

### List of Routines: {#list-of-routines align="center"}

-   **I2\_BINARY\_TO\_ASCII** converts a file of I2 data from binary to
    ASCII format.
-   **I2\_BINARY\_TO\_ASCII\_CONVERT** converts I2 data from binary to
    text form.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 31 October 2012.*
