LFRM\
Remove Linefeeds {#lfrm-remove-linefeeds align="center"}
================

------------------------------------------------------------------------

**LFRM** is a C++ program which removes linefeed characters from a file.

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

In such a case, **LFRM** is the correct program to use if you want to
convert a PC text file to a Macintosh (pre OSX) text file, since it will
replace each occurrence of CR+LF by CR.

### Usage: {#usage align="center"}

> **lfrm** *old* *new*

where

-   *old* is the file to be modified;
-   *new* is the modified copy of the old file.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**LFRM** is available in [a C++ version](../../cpp_src/lfrm/lfrm.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CR2CRLF](../../cpp_src/cr2crlf/cr2crlf.html), a C++ program which
replaces carriage returns by carriage returns + line feeds.

[CR2LF](../../cpp_src/cr2lf/cr2lf.html), a C++ program which reads a
text file and replaces carriage returns by line feeds.

[CRRM](../../cpp_src/crrm/crrm.html), a C++ program which reads a text
file and removes carriage returns.

[DEBLANK](../../cpp_src/deblank/deblank.html), a C++ program which makes
a copy of a text file which contains no blank lines.

[DECOMMENT](../../cpp_src/decomment/decomment.html), a C++ program which
makes a copy of a text file which contains no "comment" lines (that
begin with "\#").

[DETROFF](../../cpp_src/detroff/detroff.html), a C++ program which
removes from a file every occurrence of the TROFF overprint pair
character+backspace, which can make a MAN page printable;

[FILUM](../../cpp_src/filum/filum.html), a C++ library which performs
various operations on files.

[LF2CR](../../cpp_src/lf2cr/lf2cr.html), a C++ program which replaces
linefeeds by carriage returns.

[LF2CRLF](../../cpp_src/lf2crlf/lf2crlf.html), a C++ program which
replaces linefeeds by carriage returns + line feeds.

[REFORMAT](../../f_src/reformat/reformat.html), a FORTRAN90 program
which reads a text file that contains only real values, and writes a
copy which has a fixed number of real values on each line.

[REWORD](../../cpp_src/reword/reword.html), a C++ program which reads a
text file and writes a copy which has a fixed number of "words" per
line.

[UNCONTROL](../../cpp_src/uncontrol/uncontrol.html), a C++ program which
makes a copy of a text file which contains no control characters.

[WRAP](../../cpp_src/wrap/wrap.html), a C++ program which makes a copy
of a text file in which no line is longer than a user-specified wrap
length.

[WRAP2](../../cpp_src/wrap2/wrap2.html), a C++ program which wraps long
lines in a text file, but which wraps some lines "early", so as to avoid
breaking words.

### Source Code: {#source-code align="center"}

-   [lfrm.C](lfrm.C), the source code;

### Examples and Tests: {#examples-and-tests align="center"}

-   [crlf.txt](crlf.txt), the input "CR+LF" file;
-   [cr.txt](cr.txt), the output "CR" file;

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for LFRM.
-   **HANDLE** makes a copy of a file in which LF's are removed.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 12 December 2005.*
