CHRPAK\
Strings and Characters {#chrpak-strings-and-characters align="center"}
======================

------------------------------------------------------------------------

**CHRPAK** is a C++ library which handles characters and strings.

CHRPAK began when I simply wanted to be able to capitalize a string. Now
it has expanded to a number of interesting uses. Many unusual situations
are provided for, including

-   string '31.2' &lt;=&gt; numeric value 31.2;
-   uppercase &lt;=&gt; lowercase;
-   removal of control characters or blanks;
-   sorting, merging, searching.

Many of the routine names begin with the name of the data type they
operate on:

-   **B4** - a 4 byte word;
-   **CH** - a character;
-   **CHVEC** - a vector of characters;
-   **DEC** - a decimal fraction;
-   **DIGIT** - a character representing a numeric digit;
-   **I4** - an integer;
-   **R4** - a real;
-   **R8** - a double precision real;
-   **RAT** - a ratio I/J;
-   **S** - a string;
-   **SVEC** - a vector of strings;
-   **SVECI** - a vector of strings, implicitly capitalized;

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Related Data and Programs: {#related-data-and-programs align="center"}

[CAESAR](../../master/caesar/caesar.md), a C++ library which can
apply a Caesar Shift Cipher to a string of text.

[ROT13](../../master/rot13/rot13.md), a C++ library which can
encipher a string using the ROT13 cipher for letters, and the ROT5
cipher for digits.

### Languages: {#languages align="center"}

**CHRPAK** is available in [a C version](../../c_src/chrpak/chrpak.md)
and [a C++ version](../../master/chrpak/chrpak.md) and [a FORTRAN77
version](../../f77_src/chrpak/chrpak.md) and [a FORTRAN90
version](../../f_src/chrpak/chrpak.md) and [a MATLAB
version](../../m_src/chrpak/chrpak.md) and [a Python
version](../../py_src/chrpak/chrpak.md).

### Source Code: {#source-code align="center"}

-   [chrpak.cpp](chrpak.cpp), the source code;
-   [chrpak.hpp](chrpak.hpp), the include file;

### Examples and Tests: {#examples-and-tests align="center"}

-   [chrpak\_prb.cpp](chrpak_prb.cpp), the calling program;
-   [chrpak\_prb\_output.txt](chrpak_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **A\_TO\_I4** returns the index of an alphabetic character.
-   **BASE\_TO\_I4** returns the value of an integer represented in some
    base.
-   **BYTE\_TO\_INT** converts 4 bytes into an unsigned integer.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_COUNT\_CVEC\_ADD** adds a character vector to a character
    count.
-   **CH\_COUNT\_FILE\_ADD** adds characters in a file to a character
    count.
-   **CH\_COUNT\_INIT** initializes a character count.
-   **CH\_COUNT\_PRINT** prints a set of character counts.
-   **CH\_COUNT\_S\_ADD** adds a character string to a character
    histogram.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_INDEX\_FIRST** finds the first occurrence of a character in a
    string.
-   **CH\_INDEX\_LAST** finds the last occurrence of a character in a
    string.
-   **CH\_IS\_ALPHA** is TRUE if a charaacter is alphabetic.
-   **CH\_IS\_ALPHANUMERIC** is TRUE if a character is alphanumeric.
-   **CH\_IS\_CONTROL** is TRUE if a character is a control character.
-   **CH\_IS\_DIGIT** returns TRUE if a character is a decimal digit.
-   **CH\_IS\_FORMAT\_CODE** returns TRUE if a character is a FORTRAN
    format code.
-   **CH\_IS\_LOWER** is TRUE if C is a lowercase alphabetic character.
-   **CH\_IS\_PRINTABLE** determines if a character is printable.
-   **CH\_IS\_SPACE** is TRUE if a character represents "white space".
-   **CH\_IS\_UPPER** is TRUE if C is an uppercase alphabetic character.
-   **CH\_LOW** lowercases a single character.
-   **CH\_PAD** "pads" a character in a string with a blank on either
    side.
-   **CH\_READ** reads one character from a binary file.
-   **CH\_SCRABBLE** returns the character on a given Scrabble tile.
-   **CH\_SCRABBLE\_FREQUENCY** returns the Scrabble frequency of a
    character.
-   **CH\_SCRABBLE\_POINTS** returns the Scrabble point value of a
    character.
-   **CH\_SCRABBLE\_SELECT** selects a character with the Scrabble
    probability.
-   **CH\_SWAP** swaps two characters.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **CH\_TO\_DIGIT\_BIN** returns the integer value of a binary digit.
-   **CH\_TO\_DIGIT\_OCT** returns the integer value of an octal digit.
-   **CH\_TO\_ROT13** converts a character to its ROT13 equivalent.
-   **CH\_TO\_SCRABBLE** returns the Scrabble index of a character.
-   **CH\_UNIFORM** returns a random character in a given range.
-   **CH\_WRITE** writes one character to a binary file.
-   **CHARSTAR\_ADJUSTL** flushes a CHAR\* string left.
-   **CHARSTAR\_CAT** concatenates two CHAR\*'s to make a third.
-   **CHARSTAR\_EQI** reports whether two CHAR\*'s are equal, ignoring
    case.
-   **CHARSTAR\_LEN\_TRIM** returns the length of a CHAR\* to the last
    nonblank.
-   **DIGIT\_BIN\_TO\_CH** returns the character representation of a
    binary digit.
-   **DIGIT\_INC** increments a decimal digit.
-   **DIGIT\_OCT\_TO\_CH** returns the character representation of an
    octal digit.
-   **DIGIT\_TO\_CH** returns the base 10 digit character corresponding
    to a digit.
-   **GETBITS** returns N bits from an unsigned int X, beginning at
    position P.
-   **HEX\_DIGIT\_TO\_I4** converts a hexadecimal digit to an I4.
-   **HEX\_TO\_BINARY\_DIGITS** converts a hexadecimal digit to 4 binary
    digits.
-   **HEX\_TO\_I4** converts a hexadecimal string to its integer value.
-   **I4\_HUGE** returns a "huge" I4, usually the largest legal signed
    int.
-   **I4\_INPUT** prints a prompt string and reads an I4 from the user.
-   **I4\_LOG\_10** returns the whole part of the logarithm base 10 of
    an I4.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the smaller of two I4's.
-   **I4\_SWAP** switches two I4's.
-   **I4\_TO\_A** returns the I-th alphabetic character.
-   **I4\_TO\_AMINO\_CODE** converts an integer to an amino code.
-   **I4\_TO\_HEX\_DIGIT** converts a (small) I4 to a hexadecimal digit.
-   **I4\_TO\_ISBN** converts an I4 to an ISBN digit.
-   **I4\_TO\_MONTH\_ABB** returns an abbreviated month name.
-   **I4\_TO\_MONTH\_NAME** returns a month name.
-   **I4\_TO\_S** converts an I4 to a string.
-   **I4\_TO\_S0** converts an I4 to a string with leading zeros.
-   **I4\_TO\_STRING** converts an I4 to a C++ string.
-   **I4\_TO\_UNARY** produces the "base 1" representation of an I4.
-   **I4\_UNIFORM\_AB** returns a scaled pseudorandom I4 between A
    and B.
-   **I4VEC\_INDICATOR** sets an I4VEC to the indicator vector.
-   **I4VEC\_PRINT** prints an I4VEC.
-   **INT\_TO\_BYTE** converts an unsigned integer into 4 bytes.
-   **ISBN\_TO\_I4** converts an ISBN character into an I4.
-   **PERM\_CHECK** checks that a vector represents a permutation.
-   **PERM\_UNIFORM** selects a random permutation of N objects.
-   **PRINT\_SIZES** reports the size in bytes of various data types.
-   **R4\_ABS** returns the absolute value of an R4.
-   **R4\_NINT** returns the nearest integer to an R4.
-   **R4\_TO\_STRING** converts an R4 to a C++ string.
-   **R8\_TO\_STRING** converts an R8 to a C++ string.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **REVERSE\_BYTES\_FLOAT** reverses the four bytes in a float.
-   **REVERSE\_BYTES\_INT** reverses the four bytes in an int.
-   **S\_ADJUSTL** flushes a string left.
-   **S\_BEGIN** reports whether string 1 begins with string 2, ignoring
    case.
-   **S\_BEHEAD\_SUBSTRING** "beheads" a string, removing a given
    substring.
-   **S\_BLANK\_DELETE** removes blanks and left justifies the
    remainder.
-   **S\_BLANKS\_DELETE** replaces consecutive blanks by one blank.
-   **S\_CAP** capitalizes all the characters in a string.
-   **S\_CH\_COUNT** counts occurrences of a particular character in a
    string.
-   **S\_CH\_DELETE** removes all occurrences of a character from a
    string.
-   **S\_CONTROL\_BLANK** replaces control characters with blanks.
-   **S\_DIGITS\_COUNT** counts the digits in a string.
-   **S\_EQI** reports whether two strings are equal, ignoring case.
-   **S\_ESCAPE\_TEX** de-escapes TeX escape sequences.
-   **S\_FIRST\_CH** points to the first occurrence of a character in a
    string.
-   **S\_FIRST\_NONBLANK** points to the first nonblank character in a
    string.
-   **S\_INC\_C** "increments" the characters in a string.
-   **S\_INC\_N** increments the digits in a string.
-   **S\_LAST\_CH** points to the last occurrence of a character in a
    string.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_LOW** lowercases a string.
-   **S\_NEWLINE\_TO\_NULL** replaces carriage returns or newlines by
    nulls.
-   **S\_NONALPHA\_DELETE** removes nonalphabetic characters from a
    string.
-   **S\_REPLACE\_CH** replaces all occurrences of one character by
    another.
-   **S\_REVERSE** reverses the characters in a string.
-   **S\_S\_SUBANAGRAM** determines if S2 is a "subanagram" of S1.
-   **S\_S\_SUBANAGRAM\_SORTED** determines if S2 is a "subanagram" of
    S1.
-   **S\_SCRABBLE\_POINTS** returns the Scrabble point value of a
    string.
-   **S\_SORT\_A** sorts a string into ascending order.
-   **S\_SUBSTRING** returns a substring of a given string.
-   **S\_TAB\_BLANK** replaces each TAB character by a space.
-   **S\_TO\_DIGITS** extracts N digits from a string.
-   **S\_TO\_FORMAT** reads a FORTRAN format from a string.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_I4VEC** reads an I4VEC from a string.
-   **S\_TO\_L** reads an L from a string.
-   **S\_TO\_R4** reads an R4 from a string.
-   **S\_TO\_R4VEC** reads an R4VEC from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_TO\_ROT13** "rotates" the alphabetical characters in a string
    by 13 positions.
-   **S\_TRIM** promotes the final null forward through trailing blanks.
-   **S\_WORD\_CAP** capitalizes the first character of each word in a
    string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **S\_WORD\_EXTRACT\_FIRST** extracts the first word from a string.
-   **SORT\_HEAP\_EXTERNAL** externally sorts a list of items into
    ascending order.
-   **SWAP\_BYTES\_FLOAT** swaps pairs of bytes in a float.
-   **SWAP\_BYTES\_INT** swaps pairs of bytes in an int.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **WORD\_NEXT\_READ** "reads" words from a string, one at a time.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 09 September 2015.*
