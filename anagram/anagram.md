ANAGRAM\
Generate Anagrams {#anagram-generate-anagrams align="center"}
=================

------------------------------------------------------------------------

**ANAGRAM** is a C++ program which takes a string of letters and tries
to produce as many anagrams as possible, by James Cherry.

### Usage: {#usage align="center"}

> **anagram** *letters* *\[numbers\]* *\[suggested words\]*

where

-   *letters*, a string of lower case letters, with no spaces, to be
    anagrammed.
-   *\[numbers\]*, the optional *numbers* fields force the program to
    look for anagrams that contain words of each length. Up to ten word
    lengths may be specified. This is useful when you have a very large
    number of letters (e.g., more than 20) that you wish to permute, and
    you wish for the program to skip over all the anagrams containing
    only short (three and four letter) words. For example, when you are
    looking for anagrams of 30 letters, you might include the lengths "8
    8 8" to force three of the words to be eight letters long each.
-   *\[suggested words\]*, the optional *suggested words* fields are
    taken one at a time, and they consist of lower case letters (a-z)
    only too; each set of these letters is removed from the original
    letters, and anagrams of the remaining letters are found. This can
    be useful when you wish to find anagrams involving particular words
    or a proper name.

If no command line arguments are specified, you are prompted for the
arguments; after the program has found all anagrams, it returns you to
the prompt.

### Usage Examples: {#usage-examples align="center"}

-   **anagram** *jamescherry*\
    finds all anagrams of "jamescherry".
-   **anagram** *jamescherry 5*\
    forces at least one of the words to be 5 letters long.
-   **anagram** *jamescherry 6 5*\
    forces one word to be 6 letters long and the other to be 5 long.
-   **anagram** *jamescherry charm*\
    finds all anagrams where "charm" is one of the words.
-   **anagram**\
    enters interactive mode; then typing "jamescherry" at the prompt is
    the same as example 1, above. Likewise "jamescherry 5" at the prompt
    is the same as example 2.

### Languages: {#languages align="center"}

**ANAGRAM** is available in [a C++
version](../../master/anagram/anagram.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[PUZZLES](../../f_src/puzzles/puzzles.md), FORTRAN90 programs which
were used to solve various puzzles.

[SUBANAGRAM](../../f_src/subanagram/subanagram.md), a FORTRAN90
program which finds words which are anagrams formed from some of the
letters of a given master word.

[WORDS](../../datasets/words/words.md), a dataset directory which
contains lists of words;

[WORDSNAKE](../../f_src/wordsnake/wordsnake.md), a FORTRAN90 program
which rearranges a list of words so that they have maximum overlap;

### Author: {#author align="center"}

James Cherry.

### Source Code: {#source-code align="center"}

-   [anagram.cpp](anagram.cpp), the source code;

### Examples and Tests: {#examples-and-tests align="center"}

-   [anagram\_dictionary.txt](anagram_dictionary.txt), the word list;
-   [ketel\_one\_anagrams.txt](ketel_one_anagrams.txt), a list of
    anagrams of "Ketel One Vodka";

### List of Routines: {#list-of-routines align="center"}

-   **ANAGRAM** finds anagrams of a given set of letters.
-   **CHECK\_DICT** ??
-   **DO\_SEARCH** ??
-   **FIND\_VALID\_WORDS** ??
-   **GET\_ARGS** prompts for the arguments if they weren't on the
    command line.
-   **INITIALIZE** initializes certain data.
-   **PARSE\_ARGS** parses the command line arguments.
-   **READ\_DICT** reads the word list from the dictionary file.
-   **SEARCH** ??
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 24 August 2009.*
