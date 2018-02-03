MIXED\
Mixed Language Programming {#mixed-mixed-language-programming align="center"}
==========================

------------------------------------------------------------------------

**MIXED** is a directory of C++ programs which illustrate some issues in
doing mixed language programming.

### The world of bilingual programming {#the-world-of-bilingual-programming align="center"}

Because higher level languages end up as machine code, there is some
reason to assume that you can write parts of a program in two different
languages; what is **not** standard is the protocol for dealing with the
differences in languages.

C++ supports (on purpose!) a scheme in which the names chosen by a user
for various functions are automatically *mangled*, because it is assumed
likely that the same name could be used in different namespaces, so C++
avoids ambiguity by constructing unique internal names when compiling.
Unfortunately, this makes it very difficult for programs written in
other languages to interact with a C++ program. One feature that can
help is the use of the statement

            external "C" { (list of function declarations) }
          

in a C++ program in which name mangling is to be deactivated. The list
of function declarations can be either the names of C routines to be
called from this C++ routine, OR the names of internal C++ routines that
are to be called by an external C routine.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**MIXED** language programming examples are available in [a C
version](../../c_src/mixed/mixed.html) and [a C++
version](../../cpp_src/mixed/mixed.html) and [a FORTRAN77
version](../../f77_src/mixed/mixed.html) and [a FORTRAN90
version](../../f_src/mixed/mixed.html)

### Related Data and Programs: {#related-data-and-programs align="center"}

[C++\_CALLS\_C](../../cpp_src/c++_calls_c/c++_calls_c.html), C++
programs which call a C function.

[C++\_CALLS\_F77](../../cpp_src/c++_calls_f77/c++_calls_f77.html), C++
programs which illustrate how a C++ main program can call a FORTRAN77
subroutine.

[C++\_CALLS\_F90](../../cpp_src/c++_calls_f90/c++_calls_f90.html), C++
programs which illustrate how a C++ main program can call a FORTRAN90
subroutine.

[F77\_CALLS\_C++](../../f77_src/f77_calls_c++/f77_calls_c++.html),
FORTRAN77 programs which illustrate how a FORTRAN77 program can call a
C++ function.

[F90\_CALLS\_C++](../../f_src/f90_calls_c++/f90_calls_c++.html),
FORTRAN90 examples which illustrates how a FORTRAN90 program can call a
C++ function.

### Reference: {#reference align="center"}

-   [Fritz Keinert,\
    Calling FORTRAN Subroutines from Fortran, C and
    C++](../../pdf/keinert.pdf),\
    Mathematics Department,\
    Iowa State University.

### Source Code: {#source-code align="center"}

**EX1** uses a C++ main program, and several C functions. Files you may
copy include:

-   [ex1\_main.cpp](ex1_main.cpp), the C++ main program;
-   [ex1\_sub.c](ex1_sub.c), C functions;

### Examples and Tests: {#examples-and-tests align="center"}

**EX1\_CC\_CC** uses the CC compiler for both the C++ and C codes. Files
you may copy include:

-   [ex1\_CC\_CC\_output.txt](ex1_CC_CC_output.txt), the output file.

**EX1\_G++\_GCC** uses the g++ compiler for the C++ and the gcc compiler
for the C code. Files you may copy include:

-   [ex1\_g++\_gcc\_output.txt](ex1_g++_gcc_output.txt), the output
    file;

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 04 January 2006.*
