MAKEFILES\
Examples of the use of Makefiles {#makefiles-examples-of-the-use-of-makefiles align="center"}
================================

------------------------------------------------------------------------

**MAKEFILES** is a directory of C++ programs which illustrate how a
"makefile" can be used to manage the compilation and loading of a C++
program.

### Usage: {#usage align="center"}

A makefile is usually stored in a file named *makefile*.

The purpose of a makefile is to record or infer the commands necessary
to compile and load a program (or, more generally, to "build" a program
or object that depends on objects), to intelligently automate this task,
and to efficiently update all objects that depend on an object that has
itself just been updated.

The most natural example for which a makefile is useful would involve
the relationship between several text files containing C++ routines
(with extension ".C"), the object files created by compiling separately
each C++ file (with extension ".o"), and the executable program that can
be created by loading them all together (which, by default, is called
"a.out", but which we will rename to "cpp\_simple".

We suppose we start with the C++ source code files *cpp\_simple.C*,
*midpoint.C*, and *f.C*, as well as an include file, *cpp\_simple.H*. If
we wished to build the executable *cpp\_simple*, we need to create
*cpp\_simple.o*, *midpoint.o*, *f.o*, and then load them together, and
rename the result to *cpp\_simple*.

The "dependencies" or relationships between these files can be thought
of as follows:

            cpp_simple needs cpp_simple.o, midpoint.o and f.o.
              The commands to create cpp_simple are
              g++ cpp_simple.o midpoint.o sub2.o
              mv a.out cpp_simple
         
            cpp_simple.o needs cpp_simple.C and cpp_simple.H.
              The command to create cpp_simple.o is
              g++ -c cpp_simple.C

            midpoint.o needs midpoint.C and cpp_simple.H..
              The command to create midpoint.o is
              g++ -c midpoint.C

            f.o needs f.C and cpp_simple.H..
              The command to create f.o is
              g++ -c f.C
          

The corresponding makefile records these relationships. Each *dependency
line* lists a "target" (something you want to make), followed by a
colon, and then a list of the components on which that target depends.
There follow one or more *command lines* that tell how to put the
components together to make the target. Note that each command line must
begin with a TAB character. We will use the symbol **--TAB--&gt;** to
suggest this. Here is what the makefile would look like

            cpp_simple : cpp_simple.o midpoint.o f.o
            --TAB--> g++ cpp_simple.o midpoint.o f.o
            --TAB--> mv a.out cpp_simple
            cpp_simple.o : cpp_simple.C cpp_simple.H
            --TAB--> g++ -c cpp_simple.C
            midpoint.o : midpoint.C cpp_simple.H
            --TAB--> g++ -c midpoint.C
            f.o : f.C cpp_simple.H
            --TAB--> g++ -c f.C
          

To create the program, type *make cpp\_simple*. If you just edited
**midpoint.C** and want only to recompile it, type *make midpoint.o*.
But if you just edited **midpoint.C**, and you want to recompile it, and
then also recreate the program, then type *make cpp\_simple*. The
**make** program will notice that *midpoint.C* has been updated, and
automatically recompile it, and then rebuild **cpp\_simple**.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**MAKEFILES** is available in [a C
version](../../c_src/makefiles/makefiles.md), [a C++
version](../../master/makefiles/makefiles.md) and [a FORTRAN77
version](../../f77_src/makefiles/makefiles.md) and [a FORTRAN90
version](../../f_src/makefiles/makefiles.md).

### Reference: {#reference align="center"}

1.  Robert Mecklenburg,\
    Managing Projects with GNU Make,\
    O'Reilly, 2004,\
    ISBN: 0596006101.
2.  Steve Talbot,\
    Managing Projects with Make,\
    O'Reilly, 1990,\
    ISBN: 0-937-175-18-8.

### Examples and Tests: {#examples-and-tests align="center"}

-   [a simple C++ example](cpp_simple/cpp_simple.md)

You can go up one level to [the C++ page](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 04 December 2006.*
