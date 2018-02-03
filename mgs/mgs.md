MGS\
A Problem of Legacy Code {#mgs-a-problem-of-legacy-code align="center"}
========================

------------------------------------------------------------------------

**MGS** is a C library which is intended to embody the problem of
"legacy code", that is, software that is useful, but out of date, not
documented, not well understood, and in need of some new features.

When approaching legacy software, it's useful to try to come up with
good documentation for what the program is doing, a set of test problems
which must be correctly handled by any new version of the software, and
a set of timing problems that can show whether changes to the software
have improved its efficiency.

In this case, the student is challenged to make a copy of the source
code, read it, try to work out what it is doing, document it, and come
up with a nice set of examples illustrating what is going on. A student
might also be interested in the task of creating an equivalent version
in a different language, and then demonstrating that the two programs
produce the same results.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**MGS** is available in [a C version](../../c_src/mgs/mgs.md) and [a
C++ version](../../master/mgs/mgs.md) and [a FORTRAN77
version](../../f77_src/mgs/mgs.md) and [a FORTRAN90
version](../../f_src/mgs/mgs.md) and [a MATLAB
version](../../m_src/mgs/mgs.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[PIG\_LATIN](../../c_src/pig_latin/pig_latin.md), a C program which
converts its input to Pig Latin; a winner of the International
Obfuscated C Code Competition in the "Most Humorous" category, by Don
Dodson.

### Author: {#author align="center"}

Diane O'Leary.

### Reference: {#reference align="center"}

1.  Dianne O'Leary,\
    Computational Software: Writing Your Legacy, Partial Solution to
    Last Issue's Homework Assignment,\
    Computing in Science and Engineering,\
    Volume 8, Number 2, March/April 2006, pages 70-71.

### Source Code: {#source-code align="center"}

-   [mgs.cpp](mgs.cpp), the original version of the software.
-   [mgs.hpp](mgs.hpp), an include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [mgs\_prb.cpp](mgs_prb.cpp), a set of tests for MGS.
-   [mgs\_prb\_output.txt](mgs_prb_output.txt), the output file.

You can go up one level to [the C source codes](../c_src.md).

------------------------------------------------------------------------

*Last revised on 07 November 2011.*
