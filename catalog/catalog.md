CATALOG\
List marked routines in a Fortran or C++ file {#catalog-list-marked-routines-in-a-fortran-or-c-file align="center"}
=============================================

------------------------------------------------------------------------

**CATALOG** is a C++ program which produces a table of contents of a
file containing C, C++, FORTRAN77, FORTRAN90, or MATLAB routines.

**CATALOG** only works if each routine has been marked in the
appropriate way.

For C programs, the necessary marker is ' Purpose:'. **CATALOG** will
print the line that comes two lines later, and assumes that the first 4
characters of that line are blank.

            void doodah ( int a, int b, int *c )
            
            /**********************************************************
            
              Purpose:
            
                DOODAH computes the mangletude of A hepcatted to B.
            
            ...(further text of the routine follows)
          

For C++ programs, the necessary marker is '// Purpose:'. **CATALOG**
will print the line that comes two lines later, and assumes that the
first 6 characters of that line are to be ignored.

            void doodah ( int a, int b, int *c )
            
            //*********************************************************
            //
            //  Purpose:
            //
            //    DOODAH computes the mangletude of A hepcatted to B.
            //
            ...(further text of the routine follows)
          

For FORTRAN77 programs, the necessary marker is 'cc'. **CATALOG** will
print the remainder of any such line. This marker must begin in column
1, and INDEX assumes that the third character is a blank, and ignores
it. I use the marker as follows:

                  subroutine doodah ( a, b, c )
            
            c**********************************************************
            c
            cc DOODAH computes the mangletude of A hepcatted to B.
            c
            ...(further text of the routine follows)
          

For FORTRAN90 programs, the necessary marker is '!!'. **CATALOG** will
print the remainder of any such line. This marker must begin in column
1, and INDEX assumes that the third character is a blank, and ignores
it. I use the marker as follows:

            subroutine doodah ( a, b, c )
            
            !**********************************************************
            !
            !! DOODAH computes the mangletude of A hepcatted to B.
            !
            ...(further text of the routine follows)
          

For MATLAB programs, the necessary marker is '%%'. **CATALOG** will
print the remainder of any such line. This marker must begin in column
1, and INDEX assumes that the third character is a blank, and ignores
it. I use the marker as follows:

            function [ x, y ] = doodah ( a, b, c )
            
            %**********************************************************
            %
            %% DOODAH computes the mangletude of A hepcatted to B.
            %
            ...(further text of the routine follows)
          

In each of the above cases, **CATALOG** will extract and print the line

> DOODAH computes the mangletude of A hepcatted to B.

Sample output of the program looks like this:


            The file is of FORTRAN type.

            Index of column.f90:

            COLUMN extracts a given column from a file.
            CHRCTI reads an integer from a string.
            CHRDB1 removes blanks from a string, left justifying the remainder.
            DIGTEN returns the integer value of a base 10 digit.
            WRDFND finds the word of a given index in a string.
            WRDNEXRD "reads" words from a string, one at a time.
          

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**CATALOG** is available in [a C++
version](../../master/catalog/catalog.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

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

[HTMLINDEX](../../cpp_src.mdindex.mdindex.md), a C++ program which
can create a web page for a piece of C, C++, FORTRAN77 or FORTRAN90
software, if it has been marked up in the same way that **INDEX**
requires.

[INCLUDE\_FILES](../../f_src/include_files/include_files.md), a
FORTRAN90 program which reads a FORTRAN program with INCLUDE statements,
and makes a copy with the indicated files included.

### Source Code: {#source-code align="center"}

-   [catalog.cpp](catalog.cpp), the source code;

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for CATALOG.
-   **GET\_FILE\_TYPE** determines the type of a file.
-   **HANDLE\_C** searches a single C file for lines beginning with '
    Purpose:'.
-   **HANDLE\_CC** searches a single C++ file for lines beginning with
    '// Purpose:'.
-   **HANDLE\_M** searches a single MATLAB file for lines beginning with
    '%%'.
-   **HANDLE\_F** searches a single FORTRAN file for lines beginning
    with '!!'.
-   **S\_BEGIN** reports whether string 1 begins with string 2.
-   **S\_LAST\_CH** returns a pointer to the last occurrence of a
    character in a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 09 August 2009.*
