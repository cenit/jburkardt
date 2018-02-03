C++\_CALLS\_F90\
C++ Main Program Calls FORTRAN90 Subroutines {#c_calls_f90-c-main-program-calls-fortran90-subroutines align="center"}
============================================

------------------------------------------------------------------------

**C++\_CALLS\_F90** is a directory of C++ programs which illustrates how
a C++ main program can call a FORTRAN90 subroutine.

For this example, the KRONROD package is used. Note that the KRONROD
library is available in C++ and in FORTRAN90, so this example is not
created out of necessity (the C++ main program could have simply called
the C++ version of KRONROD). Instead, it is intended as an example of
how to do this when you have to (you don't have a C++ version of the
routines you want to use.)

When calling a FORTRAN90 routine from a C++ function, there are some
simple things that may be enough to guarantee success.

-   a FORTRAN90 subroutine is like a C++ void function, and should be
    declared this way in the C++ code. The qualifier **extern** should
    also be used.
-   a FORTRAN90 subroutine or function expects all its arguments to be
    passed by reference. This generally means simply that the C++
    function must pass scalar variables by reference, not value.
-   typically, when the FORTRAN90 compiler compiles the FORTRAN90 code,
    the names of functions and subroutines are stored with an appended
    underscore. In order for these names to be found by the C++ code, it
    is necessary that the C++ code declare and invoke the FORTRAN90
    functions and subroutines with the underscore explicitly appended to
    the name.
-   in many cases, a FORTRAN90 compiler is simply a "front end" to a
    corresponding C++ compiler, as in the case of the GNU compilers
    gfortran and g++, or the Intel compilers ifort and icpp. This means
    that, as long as the corresponding compilers are used to compile the
    FORTRAN90 and C++ codes, it is probably possible to use either
    compiler to link and load the object codes; however, the load
    command may need to specify explicitly certain libraries associated
    with one of the languages. For instance, if loading using the gcc
    command, it is necessary to include "-l gfortran" so that the
    FORTRAN90 I/O libraries, among others, are included in the build.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**C++\_CALLS\_F90** is available in [a C
version](../../c_src/c_calls_f90/c_calls_f90.md) and [a C++
version](../../master/c++_calls_f90/c++_calls_f90.md) and [a MATLAB
version](../../m_src/matlab_calls_f90/matlab_calls_f90.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[C\_CALLS\_F90](../../c_src/c_calls_f90/c_calls_f90.md), C programs
which call a FORTRAN90 subroutine.

[C++\_CALLS\_C](../../master/c++_calls_c/c++_calls_c.md), C++
programs which call a C function.

[C++\_CALLS\_F77](../../master/c++_calls_f77/c++_calls_f77.md), C++
programs which call a FORTRAN77 subroutine.

[F90\_CALLS\_C++](../../f_src/f90_calls_c++/f90_calls_c++.md),
FORTRAN90 programs which call a C++ function.

[KRONROD](../../master/kronrod/kronrod.md), a C++ library which can
compute a Gauss and Gauss-Kronrod pair of quadrature rules of arbitrary
order, by Robert Piessens, Maria Branders.

[KRONROD](../../f_src/kronrod/kronrod.md), a FORTRAN90 library which
can compute a Gauss and Gauss-Kronrod pair of quadrature rules of
arbitrary order, by Robert Piessens, Maria Branders.

[MIXED](../../master/mixed/mixed.md), C++ programs which call a
function written in another programming language.

### Reference: {#reference align="center"}

-   [Calling FORTRAN Subroutines from Fortran, C and
    C++](../../pdf/keinert.pdf),\
    Fritz Keinert,\
    Mathematics Department,\
    Iowa State University.

### Source Code: {#source-code align="center"}

**KRONROD** is the FORTRAN90 source code for the KRONROD library. It
should be essentially unchanged from the standard version.

-   [kronrod.f90](kronrod.f90);

**KRONROD\_PRB** is the C++ source code for the main program. Some
changes have been made from the standard version in order to adjust for
the fact that we are calling a FORTRAN77 subroutine.

-   [kronrod\_prb.cpp](kronrod_prb.cpp);

### Examples and Tests: {#examples-and-tests align="center"}

-   [kronrod\_prb\_output.txt](kronrod_prb_output.txt), the output file;

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 08 December 2010.*
