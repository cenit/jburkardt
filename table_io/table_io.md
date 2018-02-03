TABLE\_IO\
Table Files\
Read and Write Utilities {#table_io-table-files-read-and-write-utilities align="center"}
========================

------------------------------------------------------------------------

**TABLE\_IO** is a C++ library which can read or write a TABLE file.

A TABLE file is a simple format for storing a double-indexed array of
data. We regard this is a situation involving N points in M dimensions,
with M relatively small (often just 2 or 3, but possibly 10 or 20) while
N can be "enormous" (10, 100, 1,000 or 10,000).

To keep things simple, then, the data is written to an ASCII file, with
optional comment lines (which must start with the '\#' character) and
blank lines (which are ignored). The point data is stored by writing the
coordinates of each point on a separate line. No information about **M**
or **N** is explicitly included in the file. It is up to the I/O program
to determine this.

TABLE\_IO supplies routines by which a TABLE file can easily be written
or read. A typical write operation simply calls routine
**R8MAT\_WRITE**. A typical read operation will probably first want to
call **R8MAT\_HEADER\_READ** to determine the values of **M** and **N**,
and then allocate space for the table, and then call R8MAT\_DATA\_READ
to read the data.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TABLE\_IO** is available in [a C
version](../../c_src/table_io/table_io.md) and [a C++
version](../../master/table_io/table_io.md) and [a FORTRAN77
version](../../f77_src/table_io/table_io.md) and [a FORTRAN90
version](../../f_src/table_io/table_io.md) and [a MATLAB
version](../../m_src/table_io/table_io.md) and [a Python
version](../../py_src/table_io/table_io.md) and

### Related Data and Programs: {#related-data-and-programs align="center"}

[TABLE](../../data/table/table.md), a file format which is used for
the storage of table files.

[TABLE\_BORDER](../../master/table_border/table_border.md), a C++
program which can read a TABLE file and add zero entries corresponding
to a single layer of boundary data.

[TABLE\_DELAUNAY](../../master/table_delaunay/table_delaunay.md), a
C++ program which reads a file of 2d point coordinates and computes the
Delaunay triangulation.

[TABLE\_LATINIZE](../../master/table_latinize/table_latinize.md), a
C++ program which can read a TABLE file and write out a "latinized"
version.

[TABLE\_QUALITY](../../master/table_quality/table_quality.md), a C++
program which can read a TABLE file and print out measures of the
quality of dispersion of the points.

[TABLE\_UNBORDER](../../master/table_unborder/table_unborder.md), a
C++ program which can be used to remove the border from a table file.

[TABLE\_VORONOI](../../master/table_voronoi/table_voronoi.md), a C++
program which reads a TABLE file describing a set of 2D points, and
print out information describing the Voronoi diagram of those points.

### Source Code: {#source-code align="center"}

-   [table\_io.cpp](table_io.cpp), the source code.
-   [table\_io.hpp](table_io.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [table\_io\_prb.cpp](table_io_prb.cpp), a sample calling program.
-   [table\_io\_prb\_output.txt](table_io_prb_output.txt), the output
    from a run of the sample program.
-   [r8mat\_05\_00020.txt](r8mat_05_00020.txt), the R8MAT file created
    by the sample program, with N = 20 points in M = 5 dimensions.
-   [i4mat\_05\_00020.txt](i4mat_05_00020.txt), the I4MAT file created
    by the sample program, with N = 20 points in M = 5 dimensions.

### List of Routines: {#list-of-routines align="center"}

-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **FILE\_COLUMN\_COUNT** counts the columns in the first line of a
    file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4\_LOG\_10** returns the integer part of the logarithm base 10 of
    ABS(X).
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4MAT\_BORDER\_ADD** adds a "border" to an I4MAT.
-   **I4MAT\_BORDER\_CUT** cuts the "border" of an I4MAT.
-   **I4MAT\_DATA\_READ** reads data from an I4MAT file.
-   **I4MAT\_HEADER\_READ** reads the header from an I4MAT file.
-   **I4MAT\_INDICATOR\_NEW** sets up an "indicator" I4MAT.
-   **I4MAT\_PRINT** prints an I4MAT, with an optional title.
-   **I4MAT\_PRINT\_SOME** prints some of an I4MAT.
-   **I4MAT\_READ** reads the information from an I4MAT file.
-   **I4MAT\_WRITE** writes an I4MAT file with no header.
-   **I4VEC\_DATA\_READ** reads data from an I4VEC file.
-   **I4VEC\_DATA\_READ\_NEW** reads data from an I4VEC file.
-   **I4VEC\_WRITE** writes an I4VEC to a file.
-   **L4VEC\_DATA\_READ\_NEW** reads data from an L4VEC file.
-   **L4VEC\_HEADER\_READ** reads the header from an L4VEC file.
-   **L4VEC\_WRITE** writes an L4VEC to a file.
-   **R4MAT\_DATA\_READ** reads the data from an R4MAT file.
-   **R4MAT\_HEADER\_READ** reads the header from an R4MAT file.
-   **R4MAT\_INDICATOR\_NEW** sets up an "indicator" R4MAT.
-   **R4MAT\_PRINT** prints an R4MAT, with an optional title.
-   **R4MAT\_PRINT\_SOME** prints some of an R4MAT.
-   **R4MAT\_READ** reads information from an R4MAT file.
-   **R4MAT\_TRANSPOSE\_PRINT** prints an R4MAT, transposed.
-   **R4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R4MAT,
    transposed.
-   **R4MAT\_UNIFORM\_01** returns a unit pseudorandom R4MAT.
-   **R4MAT\_WRITE** writes an R4MAT file.
-   **R8MAT\_BORDER\_ADD** adds a "border" to an R8MAT.
-   **R8MAT\_BORDER\_CUT** cuts the "border" of an R8MAT.
-   **R8MAT\_DATA\_READ** reads the data from an R8MAT file.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
-   **R8MAT\_INDICATOR\_NEW** sets up an "indicator" R8MAT.
-   **R8MAT\_PRINT** prints an R8MAT, with an optional title.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8MAT\_READ** reads information from an R8MAT file.
-   **R8MAT\_TRANSPOSE\_PRINT** prints an R8MAT, transposed.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **R8MAT\_UNIFORM\_01** returns a unit pseudorandom R8MAT.
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **R8VEC\_DATA\_READ** reads the data from an R8VEC file.
-   **R8VEC\_DATA\_READ\_NEW** reads the data from an R8VEC file.
-   **R8VEC\_HEADER\_READ** reads the header from an R8VEC file.
-   **R8VEC\_WRITE** writes an R8VEC file.
-   **R8VEC2\_WRITE** writes an R8VEC2 file.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_I4VEC** reads an I4VEC from a string.
-   **S\_TO\_L4** reads an L4 from a string.
-   **S\_TO\_R4** reads an R4 from a string.
-   **S\_TO\_R4VEC** reads an R4VEC from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 17 July 2014.*
