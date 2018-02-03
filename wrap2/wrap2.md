WRAP2\
Break Up Long Lines in a File {#wrap2-break-up-long-lines-in-a-file align="center"}
=============================

------------------------------------------------------------------------

**WRAP2** is a C++ program which reads a file and makes a copy in which
long lines have been broken up. A line is "wrapped" if its length would
exceed a given maximum. Unlike the **WRAP** program, this program will
wrap the line before the maximum length is reached, if that will help
avoid breaking up words.

### Usage: {#usage align="center"}

> **wrap2** *old* *new* *wrap\_length*

where

-   *old* is the file to be modified;
-   *new* is the modified copy of the old file.
-   *wrap\_length* is the maximum line length in characters.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**WRAP2** is available in [a C++
version](../../master/wrap2/wrap2.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CR2CRLF](../../master/cr2crlf/cr2crlf.md) a C++ program which reads
a text file and replaces carriage returns by carriage returns + line
feeds.

[CR2LF](../../master/cr2lf/cr2lf.md), a C++ program which reads a
text file and replaces carriage returns by line feeds.

[CRRM](../../master/crrm/crrm.md), a C++ program which reads a text
file and writes a copy which has no carriage returns.

[DEBLANK](../../master/deblank/deblank.md), a C++ program which makes
a copy of a text file in which blank lines have been removed.

[DECOMMENT](../../master/decomment/decomment.md), a C++ program which
makes a copy of a text file which contains no "comment" lines (that
begin with "\#").

[FILUM](../../master/filum/filum.md), a C++ library which performs
various operations on files.

[REFORMAT](../../f_src/reformat/reformat.md), a FORTRAN90 program
which reads a file that contains only real values, and writes a copy
which has a fixed number of real values on each line.

[REWORD](../../master/reword/reword.md), a C++ program which makes a
copy of a file in which each line has the same number of "words".

[UNCONTROL](../../master/uncontrol/uncontrol.md), a C++ program which
makes a copy of a text file which contains no control characters.

[WRAP](../../master/wrap/wrap.md), a C++ program which makes a copy
of a text file in which long lines have been wrapped.

### Source Code: {#source-code align="center"}

-   [wrap2.cpp](wrap2.cpp), the source code;

### Examples and Tests: {#examples-and-tests align="center"}

-   [gettysburg.txt](gettysburg.txt), Lincoln's Gettysburg Address,
    stored as a long line, a blank line, a long line, a blank line, and
    a very long line.
-   [gettysburg\_80.txt](gettysburg_80.txt), the same file, wrapped to
    80 characters maximum.
-   [gettysburg\_50.txt](gettysburg_50.txt), the same file, wrapped to
    50 characters maximum.
-   [gettysburg\_30.txt](gettysburg_30.txt), the same file, wrapped to
    30 characters maximum.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for WRAP2.
-   **HANDLE** makes a copy of a file in which no line exceeds a given
    length.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an integer value from a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 27 March 2007.*
