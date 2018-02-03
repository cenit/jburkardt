DECOMMENT\
Remove "\#" comment lines {#decomment-remove-comment-lines align="center"}
=========================

------------------------------------------------------------------------

**DECOMMENT** is a C++ program which makes a copy of a file in which all
lines beginning with the "\#" character have been removed.

It is a common convention to indicate comments in a file by an initial
"\#" character. I often use this convention in my data files, and it is
part of the TABLE format However, certain hard-hearted or soft-headed
programs will not accept comment lines. The **DECOMMENT** program allows
me to comment my data files, but then to easily make an uncommented
version, when necessary, to feed to illiterate programs.

### Usage: {#usage align="center"}

> **decomment** *old* *new*

where

-   *old* is the file to be modified;
-   *new* is the modified copy of the old file.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**DECOMMENT** is available in [a C++
version](../../master/decomment/decomment.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[C\_COMMENT](../../c_src/c_comment/c_comment.md), a FORTRAN90 program
which makes a copy of a file in which C++ style comments have been
replaced by C-style comments.

[CR2CRLF](../../master/cr2crlf/cr2crlf.md), a C++ program which reads
a text file and replaces carriage returns by carriage returns + line
feeds.

[CR2LF](../../master/cr2lf/cr2lf.md), a C++ program which reads a
text file and replaces carriage returns by line feeds.

[CRRM](../../master/crrm/crrm.md), a C++ program which makes a copy
of a text file which contains no carriage returns.

[DEBLANK](../../master/deblank/deblank.md), a C++ program which makes
a copy of a text file which contains no blank lines.

[DETROFF](../../master/detroff/detroff.md), a C++ program which
removes from a file every occurrence of the TROFF overprint pair
character+backspace, which can make a MAN page printable;

[FILUM](../../master/filum/filum.md), a C++ library which performs
various operations on files.

[RECOMMENT](../../master/recomment/recomment.md), a C++ program which
converts C style comments to C++ style.

[REFORMAT](../../f_src/reformat/reformat.md), a FORTRAN90 program
which reads a text file that contains only real values, and writes a
copy which has a fixed number of real values on each line.

[REWORD](../../master/reword/reword.md), a C++ program which reads a
text file and writes a copy which has a fixed number of "words" per
line.

[UNCONTROL](../../master/uncontrol/uncontrol.md), a C++ program which
makes a copy of a text file which contains no control characters.

[WRAP](../../master/wrap/wrap.md) a C++ program which makes a copy of
a text file in which no line is longer than a user-specified wrap
length.

[WRAP2](../../master/wrap2/wrap2.md) a C++ program which wraps long
lines in a text file, but which wraps some lines "early", so as to avoid
breaking words.

### Source Code: {#source-code align="center"}

-   [decomment.cpp](decomment.cpp), the source code;

### Examples and Tests: {#examples-and-tests align="center"}

-   [old.txt](old.txt), a file with "\#" comments;
-   [new.txt](new.txt), a copy of the file, with no "\#" comments;

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for DECOMMENT.
-   **HANDLE** handles a single file.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 02 December 2006.*
