LF2CRLF\
Convert Line Feeds to Carriage Returns + Line Feeds {#lf2crlf-convert-line-feeds-to-carriage-returns-line-feeds align="center"}
===================================================

------------------------------------------------------------------------

**LF2CRLF** is a C++ program which converts line feeds to carriage
returns + linefeeds.

I constantly run into problems, when transferring a file from one system
to another, involving different conventions for ending a line of text.

It is my understanding that the following "conventions" apply:

-   Macintosh (pre OSX) text lines end with the CR (carriage return)
    character;
-   PC text lines end with the CR+LF (carriage return + line feed)
    characters;
-   UNIX text lines end with the LF (line feed) character;

While your file transfer program will usually transfer a text file in
such a way that that carriage control is properly translated, this
sometimes doesn't happen, especially if the text file is transferred
"verbatim", that is, as though it were a binary file.

In such a case, **LF2CRLF** is the correct program to use if you want to
convert a UNIX text file to a PC text file, since it will replace each
occurrence of LF by CR+LF.

### Usage: {#usage align="center"}

> **lf2crlf** *old* *new*

where

-   *old* is the file to be modified;
-   *new* is the modified copy of the old file.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**LF2CRLF** is available in [a C++
version](../../master/lf2crlf/lf2crlf.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CR2CRLF](../../master/cr2crlf/cr2crlf.md), a C++ program which
replaces carriage returns by carriage returns + line feeds.

[CR2LF](../../master/cr2lf/cr2lf.md), a C++ program which replaces
all carriage returns by line feeds.

[CRRM](../../master/crrm/crrm.md), a C++ program which removes all
carriage returns from a file.

[DEBLANK](../../master/deblank/deblank.md), a C++ program which makes
a copy of a text file which contains no blank lines.

[DECOMMENT](../../master/decomment/decomment.md), a C++ program which
makes a copy of a text file which contains no "comment" lines (that
begin with "\#").

[DETROFF](../../master/detroff/detroff.md), a C++ program which
removes from a file every occurrence of the TROFF overprint pair
character+backspace, which can make a MAN page printable;

[FILUM](../../master/filum/filum.md), a C++ library which performs
various operations on files.

[LF2CR](../../master/lf2cr/lf2cr.md), a C++ program which replaces
linefeeds by carriage returns.

[LFRM](../../master/lfrm/lfrm.md), a C++ program which removes all
linefeeds from a file.

[REFORMAT](../../f_src/reformat/reformat.md), a FORTRAN90 program
which reads a text file that contains only real values, and writes a
copy which has a fixed number of real values on each line.

[REWORD](../../master/reword/reword.md), a C++ program which reads a
text file and writes a copy which has a fixed number of "words" per
line.

[UNCONTROL](../../master/uncontrol/uncontrol.md), a C++ program which
makes a copy of a text file which contains no control characters.

[WRAP](../../master/wrap/wrap.md), a C++ program which makes a copy
of a text file in which no line is longer than a user-specified wrap
length.

[WRAP2](../../master/wrap2/wrap2.md), a C++ program which wraps long
lines in a text file, but which wraps some lines "early", so as to avoid
breaking words.

### Source Code: {#source-code align="center"}

-   [lf2crlf.C](lf2crlf.C), the source code;

### Examples and Tests: {#examples-and-tests align="center"}

-   [lf.txt](lf.txt), the input "LF" file;
-   [crlf.txt](crlf.txt), the output "CR+LF" file;

### List of Routines: {#list-of-routines align="center"}

-   **LF2CRLF** replaces line feeds by carriage returns + line feeds.
-   **HANDLE** makes a copy of a file in which LF's are replaced by
    CR+LF's.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 09 January 2006.*
