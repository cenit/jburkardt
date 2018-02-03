ROT13\
Apply "ROT13" Transformation to a File {#rot13-apply-rot13-transformation-to-a-file align="center"}
======================================

------------------------------------------------------------------------

**ROT13** is a C++ program which reads a file and makes a copy in which
all characters have been "rotated" by 13 positions, and all digits have
been "rotated" by 5 positions.

Applying ROT13 to the transformed file returns the original. Thus, ROT13
can be used as a very simply method of encoding and decoding text files.
Only an idiot would be fooled by this encoding, but nonetheless the
encoding serves a number of useful purposes. And often, it's only idiots
you have to fool, after all.

### Usage: {#usage align="center"}

> **rot13** *file1.txt*

where

-   *file1.txt* is the input file to be encoded.

The output filename is the ROT13 transformation of the input filename.
In the case of "file1.txt", the output filename would be *svyr6.gkg*.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**ROT13** is available in [a C version](../../c_src/julian/julian.md)
and [a C++ version](../../master/julian/julian.md) and [a FORTRAN90
version](../../f_src/julian/julian.md) and [a MATLAB
version](../../m_src/julian/julian.md) and [a Python
version](../../py_src/julian/julian.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CAESAR](../../master/caesar/caesar.md), a C++ library which can
apply a Caesar Shift Cipher to a string of text.

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

[REWORD](../../master/reword/reword.md), a C++ program which makes a
copy of a file in which each line has the same number of "words".

[UNCONTROL](../../master/uncontrol/uncontrol.md), a C++ program which
makes a copy of a text file which contains no control characters.

[WRAP](../../master/wrap/wrap.md), a C++ program which makes a copy
of a text file in which long lines have been wrapped.

### Source Code: {#source-code align="center"}

-   [rot13.cpp](rot13.cpp), the source code;

### Examples and Tests: {#examples-and-tests align="center"}

-   [gettysburg.txt](gettysburg.txt), Lincoln's Gettysburg Address.
-   [trgglfohet.gkg](trgglfohet.gkg), the file, encoded by ROT13.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for ROT13.
-   **CH\_TO\_ROT13** converts a character to its ROT13 equivalent.
-   **HANDLE** makes a copy of a file after applying ROT13 to it.
-   **S\_TO\_ROT13** "rotates" the alphabetical characters in a string
    by 13 positions.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 21 May 2011.*
