G++\_QUADMATH\
G++ Quadruple Real Precision {#g_quadmath-g-quadruple-real-precision align="center"}
============================

------------------------------------------------------------------------

**G++\_QUADMATH** is a C++ program which illustrates the use of
quadruple real precision arithmetic with the Gnu G++ compiler for C++.

Every C++ compiler offers a single precision real datatype called
**float** as well as a double precision real data type called
**double**.

Such variables can be declared with statements such as:

> **float w;\
> double x;**

On some systems, the G++ compiler provides a real data type stored in 80
bytes, and declared as a **\_\_float80**, and on some systems, a real
data type stored in 128 bytes, declared as a **\_\_float128**. Variable
declarations would be

> **\_\_float80 y;\
> \_\_float128 z;**

The Macintosh OSX system I have access to seems to have the
**\_\_float80** option, but not the **\_\_float128** option.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages {#languages align="center"}

Versions of the **QUADMATH** examples are available in [a C
version](../../c_src/gcc_quadmath/gcc_quadmath.html) and [a C++
version](../../cpp_src/g++_quadmath/g++_quadmath.html) and [a FORTRAN77
version](../../f77_src/gfortran_quadmath/gfortran_quadmath.html) and [a
FORTRAN90
version](../../f_src/gfortran_quadmath/gfortran_quadmath.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[G++\_INTRINSICS](../../cpp_src/g++_intrinsics/g++_intrinsics.html), a
C++ program which illustrates the use of intrinsic functions provided by
the Gnu G++ compiler for C++.

[G95\_QUADMATH](../../f_src/g95_quadmath/g95_quadmath.html), a FORTRAN90
program which illustrates the use of quadruple precision real arithmetic
provided on some systems by the G95 compiler for FORTRAN.

### Reference: {#reference align="center"}

1.  Brian Gough,\
    An Introduction to GCC,\
    Network Theory Ltd,\
    ISBN: 0-9541617-9-3.
2.  Arthur Griffith,\
    GCC: The Complete Reference,\
    McGrawHill,\
    ISBN: 0-07-222405-3.
3.  Richard Stallman,\
    Using GCC: The Gnu Compiler Collection Reference,\
    Free Software Foundation,\
    ISBN: 1-882114-39-6.

### Examples and Tests: {#examples-and-tests align="center"}

-   [g++\_quadmath.cpp](g++_quadmath.cpp), a program that makes a simple
    test of the quadruple precision real arithmetic facility.
-   [g++\_quadmath\_output.txt](g++_quadmath_output.txt), the output
    file;

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 18 April 2011.*
