FILUM\
File Utilities {#filum-file-utilities align="center"}
==============

------------------------------------------------------------------------

**FILUM** is a C++ library which handles information in text files.

The original version of this library used the C representation of
strings as pointers to characters. The library is being updated to use
the C++ string data type.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FILUM** is available in [a C version](../../c_src/filum/filum.html)
and [a C++ version](../../cpp_src/filum/filum.html) and [a FORTRAN77
version](../../f77_src/filum/filum.html) and [a FORTRAN90
version](../../f_src/filum/filum.html) and [a Mathematica
version](../../math_src/filum/filum.html) and [a MATLAB
version](../../m_src/filum/filum.html) and [a Python
version](../../py_src/filum/filum.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CR2LF](../../cpp_src/cr2lf/cr2lf.html), a C++ program which reads a
text file and replaces carriage returns by line feeds.

[CRRM](../../cpp_src/crrm/crrm.html), a C++ program which reads a text
file and removes the carriage return character.

[DEBLANK](../../cpp_src/deblank/deblank.html), a C++ program which reads
a text file and writes a copy which has no blank lines.

[DECOMMENT](../../cpp_src/decomment/decomment.html), a C++ program which
makes a copy of a text file which contains no "comment" lines (that
begin with "\#").

[DETROFF](../../cpp_src/detroff/detroff.html), a C++ program which
removes from a file every occurrence of the TROFF overprint pair
character+backspace, which can make a MAN page printable;

[FILE\_NAME\_SEQUENCE](../../cpp_src/file_name_sequence/file_name_sequence.html),
a C++ program which demonstrates ways to generate a sequence of
filenames that can be used when generating images for an animation.

[REFORMAT](../../f_src/reformat/reformat.html), a FORTRAN90 program
which makes a copy of a file with a given number of "words" per line.

[REWORD](../../cpp_src/reword/reword.html), a C++ program which reads a
text file and writes a copy which has a fixed number of "words" per
line.

[UNCONTROL](../../cpp_src/uncontrol/uncontrol.html), a C++ program which
makes a copy of a text file which contains no control characters.

[WRAP](../../cpp_src/wrap/wrap.html), a C++ program which makes a copy
of a text file in which no line is longer than a user-specified wrap
length.

### Reference: {#reference align="center"}

1.  Tom Christiansen, Nathan Torkington,\
    "8.6: Picking a Random Line from a File",\
    Perl Cookbook, pages 284-285,\
    O'Reilly, 1999.

### Source Code: {#source-code align="center"}

-   [filum.cpp](filum.cpp), the source code;
-   [filum.hpp](filum.hpp), the include file;

### Examples and Tests: {#examples-and-tests align="center"}

-   [filum\_prb.cpp](filum_prb.cpp), the calling program;
-   [filum\_prb\_output.txt](filum_prb_output.txt), the output file.

Files used for some of the tests include:

-   [filum\_prb\_4by5.txt](filum_prb_4by5.txt), a file with missing
    right parentheses.
-   [filum\_prb\_test.txt](filum_prb_test.txt), a sample file.
-   [filum\_prb\_append.txt](filum_prb_append.txt), an example of
    FILE\_APPEND.
-   [filum\_prb\_braces.txt](filum_prb_braces.txt), a file with balanced
    and legal braces.
-   [filum\_prb\_columns.txt](filum_prb_columns.txt), a file of 4 rows
    and 5 columns of numeric data.
-   [filum\_prb\_copy.txt](filum_prb_copy.txt), an example of
    FILE\_COPY.
-   [filum\_prb\_reverse\_columns.txt](filum_prb_reverse_columns.txt),
    an example of FILE\_REVERSE\_COLUMNS.
-   [filum\_prb\_parens1.txt](filum_prb_parens1.txt), a file with
    missing right parentheses.
-   [filum\_prb\_parens2.txt](filum_prb_parens2.txt), a file with
    illegally occurring right parentheses.
-   [filum\_prb\_parens3.txt](filum_prb_parens3.txt), a file with
    balanced and legal parentheses.
-   [filum\_prb\_reverse\_rows.txt](filum_prb_reverse_rows.txt), an
    example of FILE\_REVERSE\_ROWS.
-   [story.txt](story.txt), a file containing a title line and 5
    paragraphs of text.

**DATA\_\*\*\*.TXT** is a short sequence of three files, each having 8
data items, 3 on the first line, 3 on the second, and 2 on the third
line, to be examined by FILE\_SEQUENCE\_SIZE.

-   [data\_100.txt](data_100.txt), the first file in a sequence of 3.
-   [data\_101.txt](data_101.txt), the second file in a sequence of 3.
-   [data\_102.txt](data_102.txt), the third file in a sequence of 3.

### List of Routines: {#list-of-routines align="center"}

-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_IS\_DIGIT** returns TRUE if a character is a decimal digit.
-   **CH\_LOW** lowercases a single character.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **CH\_TO\_ROT13** converts a character to its ROT13 equivalent.
-   **DIGIT\_INC** increments a decimal digit.
-   **DIGIT\_TO\_CH** returns the base 10 digit character corresponding
    to a digit.
-   **FILE\_CHAR\_COUNT** counts the number of characters in a file.
-   **FILE\_COLUMN\_COUNT** counts the columns in the first line of a
    file.
-   **FILE\_DELETE** deletes a named file if it exists.
-   **FILE\_EXIST** reports whether a file exists.
-   **FILE\_LINE\_UNIFORM** returns a random line from a file.
-   **FILE\_LINE\_WIDTH** reports the length of the longest line in a
    file.
-   **FILE\_PARA\_COUNT** counts the number of paragraphs in a file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **FILE\_SEQUENCE\_DELETE** deletes a file sequence.
-   **FILE\_SEQUENCE\_SIZE** sizes a file sequence.
-   **FILE\_WORD\_COUNT** counts the number of words in a file.
-   **FILENAME\_DEC** decrements a partially numeric file name.
-   **FILENAME\_EXT\_GET** determines the "extension" of a file name.
-   **FILENAME\_EXT\_SWAP** replaces the current "extension" of a file
    name.
-   **FILENAME\_INC** increments a partially numeric file name.
-   **FILENAME\_INC\_NOWRAP** increments a partially numeric file name.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the smaller of two I4's.
-   **I4\_UNIFORM** returns a scaled pseudorandom I4.
-   **NUMBER\_INC** increments the integer represented by a string.
-   **R4\_ABS** returns the absolute value of an R4.
-   **R4\_NINT** returns the nearest integer to an R4.
-   **R8\_NINT** returns the nearest integer to an R8.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **S\_EQI** reports whether two strings are equal, ignoring case.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_LOW** lowercases a string.
-   **S\_REVERSE** reverses the characters in a string.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_I4VEC** reads an I4VEC from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_TO\_ROT13** "rotates" the characters in a string by 13
    positions.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 22 November 2011.*
