BITS\_TO\_UI\
Convert text bits to 32 bit integers {#bits_to_ui-convert-text-bits-to-32-bit-integers align="center"}
====================================

------------------------------------------------------------------------

**BITS\_TO\_UI** is a C++ program which converts a text file of '0' and
'1' characters to a binary file of 32 bit integers.

### Usage: {#usage align="center"}

 **bits\_to\_ui** *input\_file* *output\_file* 
:   processes *input\_file*, a text file containing only the characters
    '0' and '1', and creates *output\_file*, in binary format,
    containing the 32-bit integers created by grouping together 32
    successive "bits" from the input file. The bits are read from left
    to right, in a sense, so a file whose first 32 characters are
    "11010000000000000000000000000000" will result in the first integer
    being 11.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**BITS\_TO\_UI** is available in [a C++
version](../../master/bits_to_ui/bits_to_ui.md).

### Related Programs and Data: {#related-programs-and-data align="center"}

[ASCII\_TO\_MRI](../../c_src/ascii_to_mri/ascii_to_mri.md), a C
program which restores magnetic resonance imaging (MRI) data to its
original binary format, having been previously converted to an ASCII
text file.

### Source Code: {#source-code align="center"}

-   [bits\_to\_ui.cpp](bits_to_ui.cpp), the source code;

### Examples and Tests: {#examples-and-tests align="center"}

-   [rule30.txt](rule30.txt), a list of bits created by a cellular
    automaton called "rule 30", from a program written by Kevin Mcleod
    and Patrick Neary;
-   [rule30.ui](rule30.ui), the binary file created by the program.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** gets the names of the files from the user.
-   **HANDLE** processes a given input file to an output file.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 05 January 2006.*
