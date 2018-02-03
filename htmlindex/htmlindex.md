HTMLINDEX\
HTML Skeleton Page For a Routine Library {.mdindex.md-skeleton-page-for-a-routine-library align="center"}
========================================

------------------------------------------------------------------------

**HTMLINDEX** is a C++ program which builds a "skeleton" HTML page for a
C, C++, FORTRAN77 or FORTRAN90 source code file, documenting every
routine in the file...**if** each routine has been appropriately marked.
The information after the marker is usually a one line explanations of
what the routine does.

For a C file, the special marker line has the form

            Purpose:

              ROUTINE has this purpose.
          

For a C++ file, the special marker line has the form

          // Purpose:
          //
          //    ROUTINE has this purpose.
          

For a FORTRAN77 file, the special marker line has the form

          cc ROUTINE has this purpose.
          

For a FORTRAN90 file, the special marker line has the form

          !! ROUTINE has this purpose.
          

After a little editing, the page is ready for posting.

### Usage: {#usage align="center"}

> *.mdindex** *myprog.c* &gt; *myprog.md*

where

-   *myprog.c* is a C file to be processed.

Similar commands work for C++, FORTRAN77 or FORTRAN90 files.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**HTMLINDEX** is available in [a C++
version](../../cpp_src.mdindex.mdindex.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CATALOG](../../master/catalog/catalog.md), a C++ program which reads
a C, C++, FORTRAN77 or FORTRAN90 program and prints every line that
begins with a special index tag. If the program has been marked up
expecting this convention, it is a handy way of making a table of
contents of a program file.

[EXTRACT](../../f_src/extract/extract.md), a FORTRAN90 program which
extracts a subroutine, function or module by name from a FORTRAN77 or
FORTRAN90 file.

[F77\_CLEANUP](../../f_src/f77_cleanup/f77_cleanup.md), a FORTRAN90
program which makes a copy of a FORTRAN77 file in which some minor
cleanups have been made.

[F77SPLIT](../../c_src/f77split/f77split.md), a C program which reads
a FORTRAN77 file and creates individual files for every subroutine or
function in the file.

[F90SPLIT](../../f_src/f90split/f90split.md), a FORTRAN90 program
which reads a FORTRAN90 file and creates individual files for every
subroutine or function in the file.

[FIXCON](../../f_src/fixcon/fixcon.md), a FORTRAN90 program which
reads a FORTRAN file that uses FORTRAN77 continuation statements, and
makes a copy that uses FORTRAN90 continuation instead.

[INCLUDE\_FILES](../../f_src/include_files/include_files.md), a
FORTRAN90 program which reads a FORTRAN program with INCLUDE statements,
and makes a copy with the indicated files included.

### Source Code: {#source-code align="center"}

-   .mdindex.cpp].mdindex.cpp), the source code;

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for HTMLINDEX.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_INDEX\_FIRST** finds the first occurrence of a character in a
    string.
-   **GET\_FILE\_TYPE** determines the type of a file.
-   **HANDLE\_C** processes a single C file.
-   **HANDLE\_CC** processes a single C++ file.
-   **HANDLE\_F77** processes a single FORTRAN77 file.
-   **HANDLE\_F90** processes a single FORTRAN90 file.
-   **I4\_MIN** returns the minimum of two I4's.
-   **S\_BEGIN** reports whether string 1 begins with string 2.
-   **S\_CAP** capitalizes all the characters in a string.
-   **S\_LAST\_CH** points to the last occurrence of a character in a
    string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 12 September 2010.*
