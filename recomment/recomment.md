RECOMMENT\
Convert comments from C to C++ form {#recomment-convert-comments-from-c-to-c-form align="center"}
===================================

------------------------------------------------------------------------

**RECOMMENT** is a C++ program which converts C style comments to C++
style comments.

Recall that C style comments begin (anywhere) with the marker **/\***
and end (anywhere) with the marker **\*/**. C++ comments begin anywhere
with the string **//** and continue to the end of the current line.

This code incorporates suggestions and coding provided on 28 April 2005
by Steven Martin of JDS Uniphase, Melbourne Florida. These suggestions
allow the program to ignore the internal contents of strings, (which
might otherwise seem to begin or end comments), to handle lines of code
with trailing comments, and to handle comments with trailing bits of
code.

Warning: a number of operating systems pretend to honor the difference
between capital and lowercase letters but for various reasons of
"convenience" do not actually do a proper job. My current complaint is
about Macintosh OSX; when you set up your hard drive, you have one
chance to choose whether it is "case sensitive" or not. After that, you
can't change the option without wiping the disk. A consequence is that,
although you can name a file "fred.c" or "Fred.C" and see the letters in
the case you chose, at certain points, the operating system makes no
distinction between upper and lower case. In particular, it is common to
use "fred.c" to denote a C file and "fred.C" to denote a C++ file. On a
Macintosh OSX system without strict case sensitivity, this means that a
disaster will occur should you issue the command

> recomment fred.c fred.C

As far as the operating system is concerned, you have asked it to read
and write using the same file. And so...it doesn't create the output
file, and *it overwrites the input file*...yes, it's gone! For this
reason, the program has been modified to refuse to accept an output file
which is identical to the input file except for case.

### Usage: {#usage align="center"}

> **recomment** *old.c* *new.c*

where

-   *old.c* is the file to be recommented.
-   *new.c* is the new file, to be created from *old.c*, but using C++
    style comments.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**RECOMMENT** is available in [a C++
version](../../master/recomment/recomment.md).

### Related Programs: {#related-programs align="center"}

[C\_COMMENT](../../c_src/c_comment/c_comment.md), a FORTRAN90 program
which makes a copy of a file in which C++ style comments have been
replaced by C-style comments.

[CR2LF](../../master/cr2lf/cr2lf.md), a C++ program which reads a
text file and replaces carriage returns by line feeds.

[CRRM](../../master/crrm/crrm.md), a C++ program which reads a text
file and removes carriage returns.

[DEBLANK](../../master/deblank/deblank.md), a C++ program which makes
a copy of a text file which contains no blank lines.

[DECOMMENT](../../master/decomment/decomment.md), a C++ program which
removes every comment line (beginning with a "\#") from a file.

[FILUM](../../master/filum/filum.md), a C++ library which performs
various operations on files.

[REFORMAT](../../f_src/reformat/reformat.md), a FORTRAN90 program
which reads a text file that contains only real values, and writes a
copy which has a fixed number of real values on each line.

[REWORD](../../master/reword/reword.md), a C++ program which reads a
text file and writes a copy which has a fixed number of "words" per
line.

[UNCONTROL](../../master/uncontrol/uncontrol.md), a C++ program which
makes a copy of a text file which contains no control characters

[WRAP](../../master/wrap/wrap.md), a C++ program which makes a copy
of a text file in which no line is longer than a user-specified wrap
length.

[WRAP2](../../master/wrap2/wrap2.md), a C++ program which wraps long
lines in a text file, but wraps some lines "early", so as to avoid
breaking words.

### Source Code: {#source-code align="center"}

-   [recomment.cpp](recomment.cpp), the source code;

### Examples and Tests: {#examples-and-tests align="center"}

-   [mandelbrot.c](mandelbrot.c), a file with C style comments;
-   [mandelbrot.cpp](mandelbrot.cpp), a copy of the file, with C++ style
    comments;

### List of Routines: {#list-of-routines align="center"}

-   **RECOMMENT** makes a copy of a C file, converting to C++ comment
    style.
-   **CH\_CAP** capitalizes a single character.
-   **HANDLE** recomments a single C file.
-   **S\_EQI** reports whether two strings are equal, ignoring case.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 27 October 2007.*
