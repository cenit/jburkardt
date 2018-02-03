REWORD\
Reword a File to Have Fixed Number of "Words" Per Line {#reword-reword-a-file-to-have-fixed-number-of-words-per-line align="center"}
======================================================

------------------------------------------------------------------------

**REWORD** is a C++ program which reads a text file and makes a copy in
which every line has the same number of "words" - that is, strings
separated by blanks.

The user specifies the number of words per line.

### Usage: {#usage align="center"}

> **reword** *old* *new* *word\_length*

where

-   *old* is the file to be modified;
-   *new* is the modified copy of the old file.
-   *word\_length* is the number of words per line.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**REWORD** is available in [a C++
version](../../cpp_src/reword/reword.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CR2CRLF](../../cpp_src/cr2crlf/cr2crlf.html), a C++ program which reads
a text file and replaces carriage returns by carriage returns + line
feeds.

[CR2LF](../../cpp_src/cr2lf/cr2lf.html), a C++ program which reads a
text file and replaces carriage returns by line feeds.

[CRRM](../../cpp_src/crrm/crrm.html), a C++ program which reads a text
file and writes a copy which has no carriage returns.

[DEBLANK](../../cpp_src/deblank/deblank.html), a C++ program which makes
a copy of a text file in which blank lines have been removed.

[DECOMMENT](../../cpp_src/decomment/decomment.html), a C++ program which
makes a copy of a text file which contains no "comment" lines (that
begin with "\#").

[FILUM](../../cpp_src/filum/filum.html), a C++ library which performs
various operations on files.

[REFORMAT](../../f_src/reformat/reformat.html), a FORTRAN90 program
which reads a text file that contains only real values, and writes a
copy which has a fixed number of real values on each line.

[UNCONTROL](../../cpp_src/uncontrol/uncontrol.html), a C++ program which
makes a copy of a text file which contains no control characters.

[WRAP](../../cpp_src/wrap/wrap.html), a C++ program which makes a copy
of a text file in which no line is longer than a user-specified wrap
length.

[WRAP2](../../cpp_src/wrap2/wrap2.html), a C++ program which wraps long
lines in a text file, but which wraps some lines "early", so as to avoid
breaking words.

### Source Code: {#source-code align="center"}

-   [reword.cpp](reword.cpp), the source code;

### Examples and Tests: {#examples-and-tests align="center"}

-   [words.txt](words.txt), a text file;
-   [rewords.txt](rewords.txt), the "reworded" file.;

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for REWORD.
-   **HANDLE** makes a copy of a file with a given number of words per
    line.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 02 December 2006.*
