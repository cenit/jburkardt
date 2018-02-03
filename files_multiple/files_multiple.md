FILES\_MULTIPLE\
How a Program Can Handle Multiple Output Files {#files_multiple-how-a-program-can-handle-multiple-output-files align="center"}
==============================================

------------------------------------------------------------------------

**FILES\_MULTIPLE** is a C++ program which demonstrates how a program
can open multiple output files at one time, and write data to any one
specific file it chooses.

To write data to a file, a FORTRAN90 program needs a filename, an open()
statement that assigns a unique unit number to that filename, and
write() statements that send data to the file identified by unit number.

To handle two or three files is easy, but to handle an arbitrary number
of files requires a little planning.

Supposing we need "n" files, we can create a "template" filename with
some zeros in it, like "file00.txt", and call a function like
"filename\_inc()" which, each time, will return a filename with the
numeric text incremented by 1:

            file01.txt
            file02.txt
            file03.txt
            ...
          

The filenames can be stored in a character array of dimension n, which
might be called "filename".

In order to store the unique unit number of each file, we can simply try
to set the first file to unit 1, the second to unit 2, and so on. (For
some versions of FORTRAN, this might cause problems, in which case, a
function called get\_unit() can be used instead.) The unit numbers can
be stored in an integer vector of dimension n, which might be called
"fileunit".

Now we use a loop from 1 to n, to open the files:

            do i = 1, n
              open ( unit = fileunit(i), file = filename(i), status = 'replace' )
            end do
          

At this point, to write data to the 17th file, we would use a statement
like:

            write ( unit(17), '(2g14.6)' ) x, y
          

When we are all done, we need to close the files:

            do i = 1, n
              close ( unit = fileunit(i) )
            end do
          

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FILES\_MULTIPLE** is available in [a C
version](../../c_src/files_multiple/files_multiple.md) and [a C++
version](../../master/files_multiple/files_multiple.md) and [a
FORTRAN77 version](../../f77_src/files_multiple/files_multiple.md) and
[a FORTRAN90 version](../../f_src/files_multiple/files_multiple.md)
and [a MATLAB version](../../m_src/files_multiple/files_multiple.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FILE\_NAME\_SEQUENCE](../../master/file_name_sequence/file_name_sequence.md),
a C++ program which demonstrates ways to generate a sequence of
filenames that can be used when generating images for an animation.

[FILUM](../../master/filum/filum.md), a C++ library which can work
with information in text files.

[TABLE\_IO](../../master/table_io/table_io.md), a C++ library which
reads and writes table files.

### Reference: {#reference align="center"}

1.  Jeanne Adams, Walter Brainerd, Jeanne Martin, Brian Smith, Jerrold
    Wagener,\
    Fortran90 Handbook,\
    Complete ANSI/ISO Reference,\
    McGraw Hill, 1992,\
    ISBN: 0-07-000406-4,\
    LC: QA76.73.F28.F67.

### Source Code: {#source-code align="center"}

-   [files\_multiple.cpp](files_multiple.cpp), the source code.
-   [files\_multiple\_output.txt](files_multiple_output.txt), the output
    file.

**test01()** counts from 0 to 100. Each divisor of 2 is written to
"divisor1.txt", each divisor of 3 is written to "divisor2.txt" and so
on.

-   [divisor1.txt](divisor1.txt), multiples of 2.
-   [divisor2.txt](divisor2.txt), multiples of 3.
-   [divisor3.txt](divisor3.txt), multiples of 5.
-   [divisor4.txt](divisor4.txt), multiples of 7.

**test02()** watches a vector X, of length 100, as it changes 20 times.

-   [x1.txt](x1.txt), the values of X(10).
-   [x2.txt](x2.txt), the values of X(25).
-   [x3.txt](x3.txt), the values of X(64).
-   [x4.txt](x4.txt), the values of X(81).

### List of Routines: {#list-of-routines align="center"}

-   **FILES\_MULTIPLE** demonstrates how to work with multiple files.
-   **TEST01** writes data to four files which are open simultaneously.
-   **TEST02** writes selected data to four files which are open
    simultaneously.
-   **FILENAME\_INC** increments a partially numeric filename.
-   **GET\_UNIT** returns a free FORTRAN unit number.
-   **R8VEC\_UNIFORM\_01** returns a unit pseudorandom R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 03 December 2012.*
