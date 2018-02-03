FILE\_NAME\_SEQUENCE\
Create an Increasing Sequence of Filenames {#file_name_sequence-create-an-increasing-sequence-of-filenames align="center"}
==========================================

------------------------------------------------------------------------

**FILE\_NAME\_SEQUENCE** is a C++ library which demonstrates ways of
generating a sequence of file names with an embedded index that
increases.

There are situations such as animations or parallel processing in which
it is necessary to generate a sequence of file names which include an
embedded index that increases. A simple example might be

            "fred0.txt", "fred1.txt", "fred2.txt"
          

A side issue arises when the number of files is large enough that the
number of digits in the index will vary. Thus, if we are going to have
15 files, do we want to number them as

            "fred00.txt" through "fred14.txt"
          

which means, for one thing, that they will alphabetize properly, or will
we be satisfied with

            "fred0.txt" through "fred14.txt" ?
          

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FILE\_NAME\_SEQUENCE** is available in [a C
version](../../c_src/file_name_sequence/file_name_sequence.html) and [a
C++ version](../../cpp_src/file_name_sequence/file_name_sequence.html)
and [a FORTRAN77
version](../../f77_src/file_name_sequence/file_name_sequence.html) and
[a FORTRAN90
version](../../f_src/file_name_sequence/file_name_sequence.html) and [a
MATLAB version](../../m_src/file_name_sequence/file_name_sequence.html)
and [a Python
version](../../py_src/file_name_sequence/file_name_sequence.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FILUM](../../cpp_src/filum/filum.html), a C++ library which can work
with information in text files.

### Source Code: {#source-code align="center"}

-   [file\_name\_sequence.cpp](file_name_sequence.cpp) the source code.
-   [file\_name\_sequence.hpp](file_name_sequence.hpp) the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [file\_name\_sequence\_prb.cpp](file_name_sequence_prb.cpp) a test
    program;
-   [file\_name\_sequence\_prb\_output.txt](file_name_sequence_prb_output.txt)
    the output file;

### List of Routines: {#list-of-routines align="center"}

-   **FILE\_NAME\_INC** increments a partially numeric file name.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 23 July 2012.*
