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
version](../../cpp_src/decomment/decomment.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[C\_COMMENT](../../c_src/c_comment/c_comment.html), a FORTRAN90 program
which makes a copy of a file in which C++ style comments have been
replaced by C-style comments.

[CR2CRLF](../../cpp_src/cr2crlf/cr2crlf.html), a C++ program which reads
a text file and replaces carriage returns by carriage returns + line
feeds.

[CR2LF](../../cpp_src/cr2lf/cr2lf.html), a C++ program which reads a
text file and replaces carriage returns by line feeds.

[CRRM](../../cpp_src/crrm/crrm.html), a C++ program which makes a copy
of a text file which contains no carriage returns.

[DEBLANK](../../cpp_src/deblank/deblank.html), a C++ program which makes
a copy of a text file which contains no blank lines.

[DETROFF](../../cpp_src/detroff/detroff.html), a C++ program which
removes from a file every occurrence of the TROFF overprint pair
character+backspace, which can make a MAN page printable;

[FILUM](../../cpp_src/filum/filum.html), a C++ library which performs
various operations on files.

[RECOMMENT](../../cpp_src/recomment/recomment.html), a C++ program which
converts C style comments to C++ style.

[REFORMAT](../../f_src/reformat/reformat.html), a FORTRAN90 program
which reads a text file that contains only real values, and writes a
copy which has a fixed number of real values on each line.

[REWORD](../../cpp_src/reword/reword.html), a C++ program which reads a
text file and writes a copy which has a fixed number of "words" per
line.

[UNCONTROL](../../cpp_src/uncontrol/uncontrol.html), a C++ program which
makes a copy of a text file which contains no control characters.

[WRAP](../../cpp_src/wrap/wrap.html) a C++ program which makes a copy of
a text file in which no line is longer than a user-specified wrap
length.

[WRAP2](../../cpp_src/wrap2/wrap2.html) a C++ program which wraps long
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

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 02 December 2006.*
