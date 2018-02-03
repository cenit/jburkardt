UNCONTROL\
Remove Control Characters From a File {#uncontrol-remove-control-characters-from-a-file align="center"}
=====================================

------------------------------------------------------------------------

**UNCONTROL** is a C++ program which reads a file and makes a copy with
no control characters (except for carriage control).

### Usage: {#usage align="center"}

> **uncontrol** *old* *new*

where

-   *old* is the file to be modified;
-   *new* is the modified copy of the old file.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**UNCONTROL** is available in [a C++
version](../../master/uncontrol/uncontrol.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CR2LF](../../master/cr2lf/cr2lf.md), a C++ program which reads a
text file and replaces carriage returns by line feeds.

[CRRM](../../master/crrm/crrm.md), a C++ program which makes a copy
of a text file which contains no carriage returns.

[DEBLANK](../../master/deblank/deblank.md), a C++ program which makes
a copy of a text file which contains no blank lines.

[DECOMMENT](../../master/decomment/decomment.md), a C++ program which
makes a copy of a text file which contains no comment lines (lines which
begin with "\#").

[DETROFF](../../master/detroff/detroff.md), a C++ program which
removes from a file every occurrence of the TROFF overprint pair
character+backspace, which can make a MAN page printable;

[FILUM](../../master/filum/filum.md), a C++ library which performs
various operations on files.

[REFORMAT](../../f_src/reformat/reformat.md), a FORTRAN90 program
which reads a text file that contains only real values, and writes a
copy which has a fixed number of real values on each line.

[REWORD](../../master/reword/reword.md), a C++ program which reads a
text file and writes a copy which has a fixed number of "words" per
line.

[WRAP](../../master/wrap/wrap.md), a C++ program which makes a copy
of a text file in which no line is longer than a user-specified wrap
length.

[WRAP2](../../master/wrap2/wrap2.md), a C++ program which wraps long
lines in a text file, but which wraps some lines "early", so as to avoid
breaking words.

### Source Code: {#source-code align="center"}

-   [uncontrol.cpp](uncontrol.cpp), the source code;

### Examples and Tests: {#examples-and-tests align="center"}

-   [bad.bin](bad.bin), a "bad" file containing control characters, with
    a "bin" extension to remind you to transfer it as a binary file.
-   [good.txt](good.txt), a "good" copy of the file;

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for UNCONTROL.
-   **HANDLE** makes a copy of a file in which CR's are replace by LF's.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 02 December 2006.*
