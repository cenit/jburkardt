WRAP\
Break Up Long Lines in a File {#wrap-break-up-long-lines-in-a-file align="center"}
=============================

------------------------------------------------------------------------

**WRAP** is a C++ program which reads a file and makes a copy in which
long lines have been broken up.

The user specifies a maximum allowable line length. Any line of text in
the input file that is longer than this length is broken into two or
more lines, with all but the last of these pieces being exactly the
maximum length.

### Usage: {#usage align="center"}

> **wrap** *old* *new* *wrap\_length*

where

-   *old* is the file to be modified;
-   *new* is the modified copy of the old file.
-   *wrap\_length* is the maximum line length, after which a new line
    should be forced.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**WRAP** is available in [a C++ version](../../master/wrap/wrap.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CR2CRLF](../../master/cr2crlf/cr2crlf.md), a C++ program which reads
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

[DETROFF](../../master/detroff/detroff.md), a C++ program which
removes from a file every occurrence of the TROFF overprint pair
character+backspace, which can make a MAN page printable;

[FILUM](../../master/filum/filum.md), a C++ library which performs
various operations on files.

[REFORMAT](../../f_src/reformat/reformat.md), a FORTRAN90 program
which reads a file that contains only real values, and writes a copy
which has a fixed number of real values on each line.

[REWORD](../../master/reword/reword.md), a C++ program which makes a
copy of a file in which each line has the same number of "words".

[UNCONTROL](../../master/uncontrol/uncontrol.md), a C++ program which
makes a copy of a text file which contains no control characters.

[WRAP2](../../master/wrap2/wrap2.md), a C++ program which wraps long
lines in a text file, but which wraps some lines "early", so as to avoid
breaking words.

### Source Code: {#source-code align="center"}

-   [wrap.cpp](wrap.cpp), the source code;

### Examples and Tests: {#examples-and-tests align="center"}

-   [runon.xgl](runon.xgl), an XGL file contained in a single LONG line;
-   [wrapped.xgl](wrapped.xgl), the "wrapped" file.;

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for WRAP.
-   **HANDLE** makes a copy of a file in which no line exceeds a given
    length.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an integer value from a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 02 December 2006.*
